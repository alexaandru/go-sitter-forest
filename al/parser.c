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
#define STATE_COUNT 1405
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 333
#define ALIAS_COUNT 8
#define TOKEN_COUNT 166
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 63
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 93

enum ts_symbol_identifiers {
  anon_sym_table = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_codeunit = 4,
  anon_sym_Install = 5,
  anon_sym_Upgrade = 6,
  anon_sym_Test = 7,
  anon_sym_FlowField = 8,
  anon_sym_FlowFilter = 9,
  anon_sym_Normal = 10,
  anon_sym_COMMA = 11,
  anon_sym_Temporary = 12,
  anon_sym_External = 13,
  anon_sym_System = 14,
  anon_sym_TableType = 15,
  anon_sym_EQ = 16,
  anon_sym_SEMI = 17,
  anon_sym_CustomerContent = 18,
  anon_sym_EndUserIdentifiableInformation = 19,
  anon_sym_AccountData = 20,
  anon_sym_EndUserPseudonymousIdentifiers = 21,
  anon_sym_OrganizationIdentifiableInformation = 22,
  anon_sym_SystemMetadata = 23,
  anon_sym_ToBeClassified = 24,
  anon_sym_trigger = 25,
  anon_sym_OnRun = 26,
  anon_sym_LPAREN_RPAREN = 27,
  anon_sym_Permissions = 28,
  sym_permission_type = 29,
  anon_sym_OnInsert = 30,
  anon_sym_OnModify = 31,
  anon_sym_OnDelete = 32,
  anon_sym_OnRename = 33,
  anon_sym_OnValidate = 34,
  anon_sym_OnAfterGetRecord = 35,
  anon_sym_OnAfterInsertEvent = 36,
  anon_sym_OnAfterModifyEvent = 37,
  anon_sym_OnAfterDeleteEvent = 38,
  anon_sym_OnBeforeInsertEvent = 39,
  anon_sym_OnBeforeModifyEvent = 40,
  anon_sym_OnBeforeDeleteEvent = 41,
  anon_sym_DOT = 42,
  anon_sym_TableNo = 43,
  anon_sym_Subtype = 44,
  anon_sym_SingleInstance = 45,
  anon_sym_DrillDownPageId = 46,
  anon_sym_LookupPageId = 47,
  anon_sym_TableRelation = 48,
  anon_sym_FieldClass = 49,
  anon_sym_CalcFormula = 50,
  anon_sym_BlankZero = 51,
  anon_sym_Editable = 52,
  anon_sym_OptionMembers = 53,
  anon_sym_OptionCaption = 54,
  anon_sym_DataClassification = 55,
  anon_sym_Caption = 56,
  anon_sym_tabledata = 57,
  anon_sym_DecimalPlaces = 58,
  anon_sym_COLON = 59,
  anon_sym_var = 60,
  anon_sym_List = 61,
  anon_sym_of = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_Dictionary = 65,
  anon_sym_Integer = 66,
  anon_sym_BigInteger = 67,
  anon_sym_Decimal = 68,
  anon_sym_Byte = 69,
  anon_sym_Char = 70,
  anon_sym_Date = 71,
  anon_sym_Time = 72,
  anon_sym_DateTime = 73,
  anon_sym_Duration = 74,
  anon_sym_DateFormula = 75,
  anon_sym_Boolean = 76,
  anon_sym_Option = 77,
  anon_sym_Guid = 78,
  anon_sym_RecordId = 79,
  anon_sym_Variant = 80,
  anon_sym_Dialog = 81,
  anon_sym_Action = 82,
  anon_sym_Blob = 83,
  anon_sym_FilterPageBuilder = 84,
  anon_sym_JsonToken = 85,
  anon_sym_JsonValue = 86,
  anon_sym_JsonArray = 87,
  anon_sym_JsonObject = 88,
  anon_sym_Media = 89,
  anon_sym_MediaSet = 90,
  anon_sym_OStream = 91,
  anon_sym_InStream = 92,
  anon_sym_OutStream = 93,
  anon_sym_SecretText = 94,
  anon_sym_Label = 95,
  anon_sym_Text = 96,
  anon_sym_Code = 97,
  anon_sym_Record = 98,
  anon_sym_Codeunit = 99,
  anon_sym_Query = 100,
  anon_sym_DotNet = 101,
  anon_sym_array = 102,
  anon_sym_fields = 103,
  anon_sym_field = 104,
  anon_sym_LPAREN = 105,
  anon_sym_RPAREN = 106,
  anon_sym_IF = 107,
  anon_sym_ELSE = 108,
  anon_sym_CONST = 109,
  anon_sym_FIELD = 110,
  anon_sym_WHERE = 111,
  anon_sym_where = 112,
  anon_sym_lookup = 113,
  anon_sym_const = 114,
  anon_sym_count = 115,
  anon_sym_sum = 116,
  anon_sym_average = 117,
  anon_sym_min = 118,
  anon_sym_max = 119,
  anon_sym_OnLookup = 120,
  anon_sym_OnAssistEdit = 121,
  anon_sym_OnDrillDown = 122,
  anon_sym_keys = 123,
  anon_sym_key = 124,
  sym_procedure_modifier = 125,
  anon_sym_procedure = 126,
  anon_sym_LT_GT = 127,
  anon_sym_PLUS = 128,
  anon_sym_DASH = 129,
  anon_sym_STAR = 130,
  anon_sym_SLASH = 131,
  sym_identifier = 132,
  anon_sym_DQUOTE = 133,
  aux_sym__quoted_identifier_token1 = 134,
  aux_sym__quoted_identifier_token2 = 135,
  aux_sym__quoted_identifier_token3 = 136,
  sym_integer = 137,
  sym_string_literal = 138,
  anon_sym_Clustered = 139,
  anon_sym_true = 140,
  anon_sym_false = 141,
  sym_temporary = 142,
  anon_sym_Enum = 143,
  anon_sym_begin = 144,
  anon_sym_end = 145,
  anon_sym_repeat = 146,
  anon_sym_until = 147,
  anon_sym_COLON_EQ = 148,
  anon_sym_COLON_COLON = 149,
  anon_sym_Get = 150,
  anon_sym_FindSet = 151,
  anon_sym_Insert = 152,
  anon_sym_Modify = 153,
  anon_sym_Delete = 154,
  anon_sym_SetRange = 155,
  anon_sym_SetFilter = 156,
  anon_sym_Reset = 157,
  anon_sym_if = 158,
  anon_sym_then = 159,
  anon_sym_else = 160,
  anon_sym_FindFirst = 161,
  anon_sym_FindLast = 162,
  anon_sym_Next = 163,
  anon_sym_case = 164,
  anon_sym_exit = 165,
  sym_source_file = 166,
  sym__object = 167,
  sym_object_id = 168,
  sym_object_name = 169,
  sym_table_declaration = 170,
  sym_codeunit_declaration = 171,
  sym_table_no_value = 172,
  sym_subtype_value = 173,
  sym_single_instance_value = 174,
  sym_page_id_value = 175,
  sym_permissions_value = 176,
  sym_field_class_value = 177,
  sym_calc_formula_value = 178,
  sym_blank_zero_value = 179,
  sym_editable_value = 180,
  sym_option_members_value = 181,
  sym_option_caption_value = 182,
  sym_table_type_value = 183,
  sym_table_type_property = 184,
  sym_data_classification_value = 185,
  sym__codeunit_element = 186,
  sym_onrun_trigger = 187,
  sym__table_element = 188,
  sym_permissions_property = 189,
  sym_oninsert_trigger = 190,
  sym_onmodify_trigger = 191,
  sym_ondelete_trigger = 192,
  sym_onrename_trigger = 193,
  sym_onvalidate_trigger = 194,
  sym_onaftergetrecord_trigger = 195,
  sym_onafterinsertevent_trigger = 196,
  sym_onaftermodifyevent_trigger = 197,
  sym_onafterdeleteevent_trigger = 198,
  sym_onbeforeinsertevent_trigger = 199,
  sym_onbeforemodifyevent_trigger = 200,
  sym_onbeforedeleteevent_trigger = 201,
  sym_member_access = 202,
  sym_method_call = 203,
  sym_property_list = 204,
  sym_property = 205,
  sym_caption_property = 206,
  sym_data_classification_property = 207,
  sym_tabledata_permission_list = 208,
  sym_tabledata_permission = 209,
  sym__table_identifier = 210,
  sym_drilldown_pageid_property = 211,
  sym_lookup_pageid_property = 212,
  sym_decimal_places_property = 213,
  sym_var_section = 214,
  sym_variable_declaration = 215,
  sym_type_specification = 216,
  sym_list_type = 217,
  sym_dictionary_type = 218,
  sym_basic_type = 219,
  sym_text_type = 220,
  sym_code_type = 221,
  sym_record_type = 222,
  sym__table_reference = 223,
  sym_codeunit_type = 224,
  sym_query_type = 225,
  sym_query_type_value = 226,
  sym_dotnet_type = 227,
  sym_array_type = 228,
  sym_fields = 229,
  sym_field_declaration = 230,
  sym_table_relation_property = 231,
  sym_table_relation_expression = 232,
  sym_if_table_relation = 233,
  sym__simple_table_relation = 234,
  sym_table_filter = 235,
  sym_field_ref = 236,
  sym_where_clause = 237,
  sym_where_conditions = 238,
  sym_where_condition = 239,
  sym__field_reference = 240,
  sym__condition_field_reference = 241,
  sym_field_class_property = 242,
  sym_calc_formula_property = 243,
  sym__calc_formula_expression = 244,
  sym_lookup_formula = 245,
  sym_lookup_where_conditions = 246,
  sym_lookup_where_condition = 247,
  sym_count_formula = 248,
  sym_sum_formula = 249,
  sym_average_formula = 250,
  sym_min_formula = 251,
  sym_max_formula = 252,
  sym_field_reference = 253,
  sym_blank_zero_property = 254,
  sym_editable_property = 255,
  sym_option_members_property = 256,
  sym_option_member = 257,
  sym_option_caption_property = 258,
  sym_field_trigger_declaration = 259,
  sym_keys = 260,
  sym_key_declaration = 261,
  sym_key_field = 262,
  sym_key_field_list = 263,
  sym_attribute_list = 264,
  sym_attribute = 265,
  sym_attribute_arguments = 266,
  sym_expression_list = 267,
  sym_return_value = 268,
  sym__procedure_return_specification = 269,
  sym_return_type = 270,
  sym__procedure_name = 271,
  sym_procedure = 272,
  sym_comparison_operator = 273,
  sym_arithmetic_operator = 274,
  sym_parameter_list = 275,
  sym_modifier = 276,
  sym_parameter = 277,
  sym__quoted_identifier = 278,
  sym_clustered_property = 279,
  sym_boolean = 280,
  sym_data_type = 281,
  sym_code_block = 282,
  sym__statement = 283,
  sym_repeat_statement = 284,
  sym_assignment_statement = 285,
  sym__assignable_expression = 286,
  sym_argument_list = 287,
  sym__primary_expression = 288,
  sym_enum_member_access = 289,
  sym__expression = 290,
  sym_procedure_call = 291,
  sym__record_operation = 292,
  sym_get_method = 293,
  sym_find_set_method = 294,
  sym_insert_statement = 295,
  sym_modify_statement = 296,
  sym_delete_statement = 297,
  sym_set_range_statement = 298,
  sym_set_filter_statement = 299,
  sym_reset_statement = 300,
  sym_binary_expression = 301,
  sym_if_statement = 302,
  sym_get_statement = 303,
  sym_find_set_statement = 304,
  sym_find_first_statement = 305,
  sym_find_last_statement = 306,
  sym_next_statement = 307,
  sym_case_statement = 308,
  sym_case_clause = 309,
  sym_value_set = 310,
  sym_else_clause = 311,
  sym_exit_statement = 312,
  aux_sym_source_file_repeat1 = 313,
  aux_sym_table_declaration_repeat1 = 314,
  aux_sym_codeunit_declaration_repeat1 = 315,
  aux_sym_option_members_value_repeat1 = 316,
  aux_sym_property_list_repeat1 = 317,
  aux_sym_var_section_repeat1 = 318,
  aux_sym_fields_repeat1 = 319,
  aux_sym_field_declaration_repeat1 = 320,
  aux_sym_where_conditions_repeat1 = 321,
  aux_sym_lookup_where_conditions_repeat1 = 322,
  aux_sym_keys_repeat1 = 323,
  aux_sym_key_declaration_repeat1 = 324,
  aux_sym_key_field_list_repeat1 = 325,
  aux_sym_attribute_list_repeat1 = 326,
  aux_sym_expression_list_repeat1 = 327,
  aux_sym_parameter_list_repeat1 = 328,
  aux_sym__quoted_identifier_repeat1 = 329,
  aux_sym_code_block_repeat1 = 330,
  aux_sym_set_filter_statement_repeat1 = 331,
  aux_sym_case_statement_repeat1 = 332,
  alias_sym_field = 333,
  alias_sym_function_name = 334,
  alias_sym_member = 335,
  alias_sym_method_name = 336,
  alias_sym_name = 337,
  alias_sym_record = 338,
  alias_sym_table = 339,
  alias_sym_table_reference = 340,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_table] = "table",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_codeunit] = "codeunit",
  [anon_sym_Install] = "Install",
  [anon_sym_Upgrade] = "Upgrade",
  [anon_sym_Test] = "Test",
  [anon_sym_FlowField] = "FlowField",
  [anon_sym_FlowFilter] = "FlowFilter",
  [anon_sym_Normal] = "Normal",
  [anon_sym_COMMA] = ",",
  [anon_sym_Temporary] = "Temporary",
  [anon_sym_External] = "External",
  [anon_sym_System] = "System",
  [anon_sym_TableType] = "TableType",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_CustomerContent] = "CustomerContent",
  [anon_sym_EndUserIdentifiableInformation] = "EndUserIdentifiableInformation",
  [anon_sym_AccountData] = "AccountData",
  [anon_sym_EndUserPseudonymousIdentifiers] = "EndUserPseudonymousIdentifiers",
  [anon_sym_OrganizationIdentifiableInformation] = "OrganizationIdentifiableInformation",
  [anon_sym_SystemMetadata] = "SystemMetadata",
  [anon_sym_ToBeClassified] = "ToBeClassified",
  [anon_sym_trigger] = "trigger",
  [anon_sym_OnRun] = "OnRun",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_Permissions] = "Permissions",
  [sym_permission_type] = "permission_type",
  [anon_sym_OnInsert] = "OnInsert",
  [anon_sym_OnModify] = "OnModify",
  [anon_sym_OnDelete] = "OnDelete",
  [anon_sym_OnRename] = "OnRename",
  [anon_sym_OnValidate] = "OnValidate",
  [anon_sym_OnAfterGetRecord] = "OnAfterGetRecord",
  [anon_sym_OnAfterInsertEvent] = "OnAfterInsertEvent",
  [anon_sym_OnAfterModifyEvent] = "OnAfterModifyEvent",
  [anon_sym_OnAfterDeleteEvent] = "OnAfterDeleteEvent",
  [anon_sym_OnBeforeInsertEvent] = "OnBeforeInsertEvent",
  [anon_sym_OnBeforeModifyEvent] = "OnBeforeModifyEvent",
  [anon_sym_OnBeforeDeleteEvent] = "OnBeforeDeleteEvent",
  [anon_sym_DOT] = ".",
  [anon_sym_TableNo] = "TableNo",
  [anon_sym_Subtype] = "Subtype",
  [anon_sym_SingleInstance] = "SingleInstance",
  [anon_sym_DrillDownPageId] = "DrillDownPageId",
  [anon_sym_LookupPageId] = "LookupPageId",
  [anon_sym_TableRelation] = "TableRelation",
  [anon_sym_FieldClass] = "FieldClass",
  [anon_sym_CalcFormula] = "CalcFormula",
  [anon_sym_BlankZero] = "BlankZero",
  [anon_sym_Editable] = "Editable",
  [anon_sym_OptionMembers] = "OptionMembers",
  [anon_sym_OptionCaption] = "OptionCaption",
  [anon_sym_DataClassification] = "DataClassification",
  [anon_sym_Caption] = "Caption",
  [anon_sym_tabledata] = "tabledata",
  [anon_sym_DecimalPlaces] = "DecimalPlaces",
  [anon_sym_COLON] = ":",
  [anon_sym_var] = "var",
  [anon_sym_List] = "List",
  [anon_sym_of] = "of",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Dictionary] = "Dictionary",
  [anon_sym_Integer] = "Integer",
  [anon_sym_BigInteger] = "BigInteger",
  [anon_sym_Decimal] = "Decimal",
  [anon_sym_Byte] = "Byte",
  [anon_sym_Char] = "Char",
  [anon_sym_Date] = "Date",
  [anon_sym_Time] = "Time",
  [anon_sym_DateTime] = "DateTime",
  [anon_sym_Duration] = "Duration",
  [anon_sym_DateFormula] = "DateFormula",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Option] = "Option",
  [anon_sym_Guid] = "Guid",
  [anon_sym_RecordId] = "RecordId",
  [anon_sym_Variant] = "Variant",
  [anon_sym_Dialog] = "Dialog",
  [anon_sym_Action] = "Action",
  [anon_sym_Blob] = "Blob",
  [anon_sym_FilterPageBuilder] = "FilterPageBuilder",
  [anon_sym_JsonToken] = "JsonToken",
  [anon_sym_JsonValue] = "JsonValue",
  [anon_sym_JsonArray] = "JsonArray",
  [anon_sym_JsonObject] = "JsonObject",
  [anon_sym_Media] = "Media",
  [anon_sym_MediaSet] = "MediaSet",
  [anon_sym_OStream] = "OStream",
  [anon_sym_InStream] = "InStream",
  [anon_sym_OutStream] = "OutStream",
  [anon_sym_SecretText] = "SecretText",
  [anon_sym_Label] = "Label",
  [anon_sym_Text] = "Text",
  [anon_sym_Code] = "Code",
  [anon_sym_Record] = "Record",
  [anon_sym_Codeunit] = "Codeunit",
  [anon_sym_Query] = "Query",
  [anon_sym_DotNet] = "DotNet",
  [anon_sym_array] = "array",
  [anon_sym_fields] = "fields",
  [anon_sym_field] = "field",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_CONST] = "CONST",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_where] = "where",
  [anon_sym_lookup] = "lookup",
  [anon_sym_const] = "const",
  [anon_sym_count] = "count",
  [anon_sym_sum] = "sum",
  [anon_sym_average] = "average",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_OnLookup] = "OnLookup",
  [anon_sym_OnAssistEdit] = "OnAssistEdit",
  [anon_sym_OnDrillDown] = "OnDrillDown",
  [anon_sym_keys] = "keys",
  [anon_sym_key] = "key",
  [sym_procedure_modifier] = "procedure_modifier",
  [anon_sym_procedure] = "procedure",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [aux_sym__quoted_identifier_token2] = "_quoted_identifier_token2",
  [aux_sym__quoted_identifier_token3] = "_quoted_identifier_token3",
  [sym_integer] = "integer",
  [sym_string_literal] = "string_literal",
  [anon_sym_Clustered] = "Clustered",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_temporary] = "temporary",
  [anon_sym_Enum] = "Enum",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_repeat] = "repeat",
  [anon_sym_until] = "until",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_Get] = "Get",
  [anon_sym_FindSet] = "FindSet",
  [anon_sym_Insert] = "Insert",
  [anon_sym_Modify] = "Modify",
  [anon_sym_Delete] = "Delete",
  [anon_sym_SetRange] = "SetRange",
  [anon_sym_SetFilter] = "SetFilter",
  [anon_sym_Reset] = "Reset",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_FindFirst] = "FindFirst",
  [anon_sym_FindLast] = "FindLast",
  [anon_sym_Next] = "Next",
  [anon_sym_case] = "case",
  [anon_sym_exit] = "exit",
  [sym_source_file] = "source_file",
  [sym__object] = "_object",
  [sym_object_id] = "object_id",
  [sym_object_name] = "object_name",
  [sym_table_declaration] = "table_declaration",
  [sym_codeunit_declaration] = "codeunit_declaration",
  [sym_table_no_value] = "table_no_value",
  [sym_subtype_value] = "subtype_value",
  [sym_single_instance_value] = "single_instance_value",
  [sym_page_id_value] = "page_id_value",
  [sym_permissions_value] = "permissions_value",
  [sym_field_class_value] = "field_class_value",
  [sym_calc_formula_value] = "calc_formula_value",
  [sym_blank_zero_value] = "blank_zero_value",
  [sym_editable_value] = "editable_value",
  [sym_option_members_value] = "option_members_value",
  [sym_option_caption_value] = "option_caption_value",
  [sym_table_type_value] = "table_type_value",
  [sym_table_type_property] = "table_type_property",
  [sym_data_classification_value] = "data_classification_value",
  [sym__codeunit_element] = "_codeunit_element",
  [sym_onrun_trigger] = "onrun_trigger",
  [sym__table_element] = "_table_element",
  [sym_permissions_property] = "permissions_property",
  [sym_oninsert_trigger] = "oninsert_trigger",
  [sym_onmodify_trigger] = "onmodify_trigger",
  [sym_ondelete_trigger] = "ondelete_trigger",
  [sym_onrename_trigger] = "onrename_trigger",
  [sym_onvalidate_trigger] = "onvalidate_trigger",
  [sym_onaftergetrecord_trigger] = "onaftergetrecord_trigger",
  [sym_onafterinsertevent_trigger] = "onafterinsertevent_trigger",
  [sym_onaftermodifyevent_trigger] = "onaftermodifyevent_trigger",
  [sym_onafterdeleteevent_trigger] = "onafterdeleteevent_trigger",
  [sym_onbeforeinsertevent_trigger] = "onbeforeinsertevent_trigger",
  [sym_onbeforemodifyevent_trigger] = "onbeforemodifyevent_trigger",
  [sym_onbeforedeleteevent_trigger] = "onbeforedeleteevent_trigger",
  [sym_member_access] = "member_access",
  [sym_method_call] = "method_call",
  [sym_property_list] = "property_list",
  [sym_property] = "property",
  [sym_caption_property] = "caption_property",
  [sym_data_classification_property] = "data_classification_property",
  [sym_tabledata_permission_list] = "tabledata_permission_list",
  [sym_tabledata_permission] = "tabledata_permission",
  [sym__table_identifier] = "_table_identifier",
  [sym_drilldown_pageid_property] = "drilldown_pageid_property",
  [sym_lookup_pageid_property] = "lookup_pageid_property",
  [sym_decimal_places_property] = "decimal_places_property",
  [sym_var_section] = "var_section",
  [sym_variable_declaration] = "variable_declaration",
  [sym_type_specification] = "type_specification",
  [sym_list_type] = "list_type",
  [sym_dictionary_type] = "dictionary_type",
  [sym_basic_type] = "basic_type",
  [sym_text_type] = "text_type",
  [sym_code_type] = "type",
  [sym_record_type] = "record_type",
  [sym__table_reference] = "_table_reference",
  [sym_codeunit_type] = "codeunit_type",
  [sym_query_type] = "query_type",
  [sym_query_type_value] = "query_type_value",
  [sym_dotnet_type] = "dotnet_type",
  [sym_array_type] = "array_type",
  [sym_fields] = "fields",
  [sym_field_declaration] = "field_declaration",
  [sym_table_relation_property] = "table_relation_property",
  [sym_table_relation_expression] = "table_relation_expression",
  [sym_if_table_relation] = "if_table_relation",
  [sym__simple_table_relation] = "_simple_table_relation",
  [sym_table_filter] = "table_filter",
  [sym_field_ref] = "field_ref",
  [sym_where_clause] = "where_clause",
  [sym_where_conditions] = "where_conditions",
  [sym_where_condition] = "where_condition",
  [sym__field_reference] = "_field_reference",
  [sym__condition_field_reference] = "_condition_field_reference",
  [sym_field_class_property] = "field_class_property",
  [sym_calc_formula_property] = "calc_formula_property",
  [sym__calc_formula_expression] = "_calc_formula_expression",
  [sym_lookup_formula] = "lookup_formula",
  [sym_lookup_where_conditions] = "lookup_where_conditions",
  [sym_lookup_where_condition] = "lookup_where_condition",
  [sym_count_formula] = "count_formula",
  [sym_sum_formula] = "sum_formula",
  [sym_average_formula] = "average_formula",
  [sym_min_formula] = "min_formula",
  [sym_max_formula] = "max_formula",
  [sym_field_reference] = "field_reference",
  [sym_blank_zero_property] = "blank_zero_property",
  [sym_editable_property] = "editable_property",
  [sym_option_members_property] = "option_members_property",
  [sym_option_member] = "option_member",
  [sym_option_caption_property] = "option_caption_property",
  [sym_field_trigger_declaration] = "field_trigger_declaration",
  [sym_keys] = "keys",
  [sym_key_declaration] = "key_declaration",
  [sym_key_field] = "key_field",
  [sym_key_field_list] = "key_field_list",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_attribute_arguments] = "attribute_arguments",
  [sym_expression_list] = "expression_list",
  [sym_return_value] = "return_value",
  [sym__procedure_return_specification] = "_procedure_return_specification",
  [sym_return_type] = "return_type",
  [sym__procedure_name] = "_procedure_name",
  [sym_procedure] = "procedure",
  [sym_comparison_operator] = "comparison_operator",
  [sym_arithmetic_operator] = "arithmetic_operator",
  [sym_parameter_list] = "parameter_list",
  [sym_modifier] = "modifier",
  [sym_parameter] = "parameter",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym_clustered_property] = "clustered_property",
  [sym_boolean] = "boolean",
  [sym_data_type] = "data_type",
  [sym_code_block] = "code_block",
  [sym__statement] = "_statement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__assignable_expression] = "_assignable_expression",
  [sym_argument_list] = "argument_list",
  [sym__primary_expression] = "_primary_expression",
  [sym_enum_member_access] = "enum_member_access",
  [sym__expression] = "_expression",
  [sym_procedure_call] = "procedure_call",
  [sym__record_operation] = "_record_operation",
  [sym_get_method] = "get_method",
  [sym_find_set_method] = "find_set_method",
  [sym_insert_statement] = "insert_statement",
  [sym_modify_statement] = "modify_statement",
  [sym_delete_statement] = "delete_statement",
  [sym_set_range_statement] = "set_range_statement",
  [sym_set_filter_statement] = "set_filter_statement",
  [sym_reset_statement] = "reset_statement",
  [sym_binary_expression] = "binary_expression",
  [sym_if_statement] = "if_statement",
  [sym_get_statement] = "get_statement",
  [sym_find_set_statement] = "find_set_statement",
  [sym_find_first_statement] = "find_first_statement",
  [sym_find_last_statement] = "find_last_statement",
  [sym_next_statement] = "next_statement",
  [sym_case_statement] = "case_statement",
  [sym_case_clause] = "case_clause",
  [sym_value_set] = "value_set",
  [sym_else_clause] = "else_clause",
  [sym_exit_statement] = "exit_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_table_declaration_repeat1] = "table_declaration_repeat1",
  [aux_sym_codeunit_declaration_repeat1] = "codeunit_declaration_repeat1",
  [aux_sym_option_members_value_repeat1] = "option_members_value_repeat1",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_var_section_repeat1] = "var_section_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_field_declaration_repeat1] = "field_declaration_repeat1",
  [aux_sym_where_conditions_repeat1] = "where_conditions_repeat1",
  [aux_sym_lookup_where_conditions_repeat1] = "lookup_where_conditions_repeat1",
  [aux_sym_keys_repeat1] = "keys_repeat1",
  [aux_sym_key_declaration_repeat1] = "key_declaration_repeat1",
  [aux_sym_key_field_list_repeat1] = "key_field_list_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__quoted_identifier_repeat1] = "_quoted_identifier_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_set_filter_statement_repeat1] = "set_filter_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [alias_sym_field] = "field",
  [alias_sym_function_name] = "function_name",
  [alias_sym_member] = "member",
  [alias_sym_method_name] = "method_name",
  [alias_sym_name] = "name",
  [alias_sym_record] = "record",
  [alias_sym_table] = "table",
  [alias_sym_table_reference] = "table_reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_codeunit] = anon_sym_codeunit,
  [anon_sym_Install] = anon_sym_Install,
  [anon_sym_Upgrade] = anon_sym_Upgrade,
  [anon_sym_Test] = anon_sym_Test,
  [anon_sym_FlowField] = anon_sym_FlowField,
  [anon_sym_FlowFilter] = anon_sym_FlowFilter,
  [anon_sym_Normal] = anon_sym_Normal,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Temporary] = anon_sym_Temporary,
  [anon_sym_External] = anon_sym_External,
  [anon_sym_System] = anon_sym_System,
  [anon_sym_TableType] = anon_sym_TableType,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_CustomerContent] = anon_sym_CustomerContent,
  [anon_sym_EndUserIdentifiableInformation] = anon_sym_EndUserIdentifiableInformation,
  [anon_sym_AccountData] = anon_sym_AccountData,
  [anon_sym_EndUserPseudonymousIdentifiers] = anon_sym_EndUserPseudonymousIdentifiers,
  [anon_sym_OrganizationIdentifiableInformation] = anon_sym_OrganizationIdentifiableInformation,
  [anon_sym_SystemMetadata] = anon_sym_SystemMetadata,
  [anon_sym_ToBeClassified] = anon_sym_ToBeClassified,
  [anon_sym_trigger] = anon_sym_trigger,
  [anon_sym_OnRun] = anon_sym_OnRun,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_Permissions] = anon_sym_Permissions,
  [sym_permission_type] = sym_permission_type,
  [anon_sym_OnInsert] = anon_sym_OnInsert,
  [anon_sym_OnModify] = anon_sym_OnModify,
  [anon_sym_OnDelete] = anon_sym_OnDelete,
  [anon_sym_OnRename] = anon_sym_OnRename,
  [anon_sym_OnValidate] = anon_sym_OnValidate,
  [anon_sym_OnAfterGetRecord] = anon_sym_OnAfterGetRecord,
  [anon_sym_OnAfterInsertEvent] = anon_sym_OnAfterInsertEvent,
  [anon_sym_OnAfterModifyEvent] = anon_sym_OnAfterModifyEvent,
  [anon_sym_OnAfterDeleteEvent] = anon_sym_OnAfterDeleteEvent,
  [anon_sym_OnBeforeInsertEvent] = anon_sym_OnBeforeInsertEvent,
  [anon_sym_OnBeforeModifyEvent] = anon_sym_OnBeforeModifyEvent,
  [anon_sym_OnBeforeDeleteEvent] = anon_sym_OnBeforeDeleteEvent,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_TableNo] = anon_sym_TableNo,
  [anon_sym_Subtype] = anon_sym_Subtype,
  [anon_sym_SingleInstance] = anon_sym_SingleInstance,
  [anon_sym_DrillDownPageId] = anon_sym_DrillDownPageId,
  [anon_sym_LookupPageId] = anon_sym_LookupPageId,
  [anon_sym_TableRelation] = anon_sym_TableRelation,
  [anon_sym_FieldClass] = anon_sym_FieldClass,
  [anon_sym_CalcFormula] = anon_sym_CalcFormula,
  [anon_sym_BlankZero] = anon_sym_BlankZero,
  [anon_sym_Editable] = anon_sym_Editable,
  [anon_sym_OptionMembers] = anon_sym_OptionMembers,
  [anon_sym_OptionCaption] = anon_sym_OptionCaption,
  [anon_sym_DataClassification] = anon_sym_DataClassification,
  [anon_sym_Caption] = anon_sym_Caption,
  [anon_sym_tabledata] = anon_sym_tabledata,
  [anon_sym_DecimalPlaces] = anon_sym_DecimalPlaces,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_Dictionary] = anon_sym_Dictionary,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_BigInteger] = anon_sym_BigInteger,
  [anon_sym_Decimal] = anon_sym_Decimal,
  [anon_sym_Byte] = anon_sym_Byte,
  [anon_sym_Char] = anon_sym_Char,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_Time] = anon_sym_Time,
  [anon_sym_DateTime] = anon_sym_DateTime,
  [anon_sym_Duration] = anon_sym_Duration,
  [anon_sym_DateFormula] = anon_sym_DateFormula,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Option] = anon_sym_Option,
  [anon_sym_Guid] = anon_sym_Guid,
  [anon_sym_RecordId] = anon_sym_RecordId,
  [anon_sym_Variant] = anon_sym_Variant,
  [anon_sym_Dialog] = anon_sym_Dialog,
  [anon_sym_Action] = anon_sym_Action,
  [anon_sym_Blob] = anon_sym_Blob,
  [anon_sym_FilterPageBuilder] = anon_sym_FilterPageBuilder,
  [anon_sym_JsonToken] = anon_sym_JsonToken,
  [anon_sym_JsonValue] = anon_sym_JsonValue,
  [anon_sym_JsonArray] = anon_sym_JsonArray,
  [anon_sym_JsonObject] = anon_sym_JsonObject,
  [anon_sym_Media] = anon_sym_Media,
  [anon_sym_MediaSet] = anon_sym_MediaSet,
  [anon_sym_OStream] = anon_sym_OStream,
  [anon_sym_InStream] = anon_sym_InStream,
  [anon_sym_OutStream] = anon_sym_OutStream,
  [anon_sym_SecretText] = anon_sym_SecretText,
  [anon_sym_Label] = anon_sym_Label,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Code] = anon_sym_Code,
  [anon_sym_Record] = anon_sym_Record,
  [anon_sym_Codeunit] = anon_sym_Codeunit,
  [anon_sym_Query] = anon_sym_Query,
  [anon_sym_DotNet] = anon_sym_DotNet,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_fields] = anon_sym_fields,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_CONST] = anon_sym_CONST,
  [anon_sym_FIELD] = anon_sym_FIELD,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_lookup] = anon_sym_lookup,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_average] = anon_sym_average,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_OnLookup] = anon_sym_OnLookup,
  [anon_sym_OnAssistEdit] = anon_sym_OnAssistEdit,
  [anon_sym_OnDrillDown] = anon_sym_OnDrillDown,
  [anon_sym_keys] = anon_sym_keys,
  [anon_sym_key] = anon_sym_key,
  [sym_procedure_modifier] = sym_procedure_modifier,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [aux_sym__quoted_identifier_token2] = aux_sym__quoted_identifier_token2,
  [aux_sym__quoted_identifier_token3] = aux_sym__quoted_identifier_token3,
  [sym_integer] = sym_integer,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_Clustered] = anon_sym_Clustered,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_temporary] = sym_temporary,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_Get] = anon_sym_Get,
  [anon_sym_FindSet] = anon_sym_FindSet,
  [anon_sym_Insert] = anon_sym_Insert,
  [anon_sym_Modify] = anon_sym_Modify,
  [anon_sym_Delete] = anon_sym_Delete,
  [anon_sym_SetRange] = anon_sym_SetRange,
  [anon_sym_SetFilter] = anon_sym_SetFilter,
  [anon_sym_Reset] = anon_sym_Reset,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_FindFirst] = anon_sym_FindFirst,
  [anon_sym_FindLast] = anon_sym_FindLast,
  [anon_sym_Next] = anon_sym_Next,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_exit] = anon_sym_exit,
  [sym_source_file] = sym_source_file,
  [sym__object] = sym__object,
  [sym_object_id] = sym_object_id,
  [sym_object_name] = sym_object_name,
  [sym_table_declaration] = sym_table_declaration,
  [sym_codeunit_declaration] = sym_codeunit_declaration,
  [sym_table_no_value] = sym_table_no_value,
  [sym_subtype_value] = sym_subtype_value,
  [sym_single_instance_value] = sym_single_instance_value,
  [sym_page_id_value] = sym_page_id_value,
  [sym_permissions_value] = sym_permissions_value,
  [sym_field_class_value] = sym_field_class_value,
  [sym_calc_formula_value] = sym_calc_formula_value,
  [sym_blank_zero_value] = sym_blank_zero_value,
  [sym_editable_value] = sym_editable_value,
  [sym_option_members_value] = sym_option_members_value,
  [sym_option_caption_value] = sym_option_caption_value,
  [sym_table_type_value] = sym_table_type_value,
  [sym_table_type_property] = sym_table_type_property,
  [sym_data_classification_value] = sym_data_classification_value,
  [sym__codeunit_element] = sym__codeunit_element,
  [sym_onrun_trigger] = sym_onrun_trigger,
  [sym__table_element] = sym__table_element,
  [sym_permissions_property] = sym_permissions_property,
  [sym_oninsert_trigger] = sym_oninsert_trigger,
  [sym_onmodify_trigger] = sym_onmodify_trigger,
  [sym_ondelete_trigger] = sym_ondelete_trigger,
  [sym_onrename_trigger] = sym_onrename_trigger,
  [sym_onvalidate_trigger] = sym_onvalidate_trigger,
  [sym_onaftergetrecord_trigger] = sym_onaftergetrecord_trigger,
  [sym_onafterinsertevent_trigger] = sym_onafterinsertevent_trigger,
  [sym_onaftermodifyevent_trigger] = sym_onaftermodifyevent_trigger,
  [sym_onafterdeleteevent_trigger] = sym_onafterdeleteevent_trigger,
  [sym_onbeforeinsertevent_trigger] = sym_onbeforeinsertevent_trigger,
  [sym_onbeforemodifyevent_trigger] = sym_onbeforemodifyevent_trigger,
  [sym_onbeforedeleteevent_trigger] = sym_onbeforedeleteevent_trigger,
  [sym_member_access] = sym_member_access,
  [sym_method_call] = sym_method_call,
  [sym_property_list] = sym_property_list,
  [sym_property] = sym_property,
  [sym_caption_property] = sym_caption_property,
  [sym_data_classification_property] = sym_data_classification_property,
  [sym_tabledata_permission_list] = sym_tabledata_permission_list,
  [sym_tabledata_permission] = sym_tabledata_permission,
  [sym__table_identifier] = sym__table_identifier,
  [sym_drilldown_pageid_property] = sym_drilldown_pageid_property,
  [sym_lookup_pageid_property] = sym_lookup_pageid_property,
  [sym_decimal_places_property] = sym_decimal_places_property,
  [sym_var_section] = sym_var_section,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_type_specification] = sym_type_specification,
  [sym_list_type] = sym_list_type,
  [sym_dictionary_type] = sym_dictionary_type,
  [sym_basic_type] = sym_basic_type,
  [sym_text_type] = sym_text_type,
  [sym_code_type] = sym_code_type,
  [sym_record_type] = sym_record_type,
  [sym__table_reference] = sym__table_reference,
  [sym_codeunit_type] = sym_codeunit_type,
  [sym_query_type] = sym_query_type,
  [sym_query_type_value] = sym_query_type_value,
  [sym_dotnet_type] = sym_dotnet_type,
  [sym_array_type] = sym_array_type,
  [sym_fields] = sym_fields,
  [sym_field_declaration] = sym_field_declaration,
  [sym_table_relation_property] = sym_table_relation_property,
  [sym_table_relation_expression] = sym_table_relation_expression,
  [sym_if_table_relation] = sym_if_table_relation,
  [sym__simple_table_relation] = sym__simple_table_relation,
  [sym_table_filter] = sym_table_filter,
  [sym_field_ref] = sym_field_ref,
  [sym_where_clause] = sym_where_clause,
  [sym_where_conditions] = sym_where_conditions,
  [sym_where_condition] = sym_where_condition,
  [sym__field_reference] = sym__field_reference,
  [sym__condition_field_reference] = sym__condition_field_reference,
  [sym_field_class_property] = sym_field_class_property,
  [sym_calc_formula_property] = sym_calc_formula_property,
  [sym__calc_formula_expression] = sym__calc_formula_expression,
  [sym_lookup_formula] = sym_lookup_formula,
  [sym_lookup_where_conditions] = sym_lookup_where_conditions,
  [sym_lookup_where_condition] = sym_lookup_where_condition,
  [sym_count_formula] = sym_count_formula,
  [sym_sum_formula] = sym_sum_formula,
  [sym_average_formula] = sym_average_formula,
  [sym_min_formula] = sym_min_formula,
  [sym_max_formula] = sym_max_formula,
  [sym_field_reference] = sym_field_reference,
  [sym_blank_zero_property] = sym_blank_zero_property,
  [sym_editable_property] = sym_editable_property,
  [sym_option_members_property] = sym_option_members_property,
  [sym_option_member] = sym_option_member,
  [sym_option_caption_property] = sym_option_caption_property,
  [sym_field_trigger_declaration] = sym_field_trigger_declaration,
  [sym_keys] = sym_keys,
  [sym_key_declaration] = sym_key_declaration,
  [sym_key_field] = sym_key_field,
  [sym_key_field_list] = sym_key_field_list,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [sym_attribute_arguments] = sym_attribute_arguments,
  [sym_expression_list] = sym_expression_list,
  [sym_return_value] = sym_return_value,
  [sym__procedure_return_specification] = sym__procedure_return_specification,
  [sym_return_type] = sym_return_type,
  [sym__procedure_name] = sym__procedure_name,
  [sym_procedure] = sym_procedure,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_arithmetic_operator] = sym_arithmetic_operator,
  [sym_parameter_list] = sym_parameter_list,
  [sym_modifier] = sym_modifier,
  [sym_parameter] = sym_parameter,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym_clustered_property] = sym_clustered_property,
  [sym_boolean] = sym_boolean,
  [sym_data_type] = sym_data_type,
  [sym_code_block] = sym_code_block,
  [sym__statement] = sym__statement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__assignable_expression] = sym__assignable_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__primary_expression] = sym__primary_expression,
  [sym_enum_member_access] = sym_enum_member_access,
  [sym__expression] = sym__expression,
  [sym_procedure_call] = sym_procedure_call,
  [sym__record_operation] = sym__record_operation,
  [sym_get_method] = sym_get_method,
  [sym_find_set_method] = sym_find_set_method,
  [sym_insert_statement] = sym_insert_statement,
  [sym_modify_statement] = sym_modify_statement,
  [sym_delete_statement] = sym_delete_statement,
  [sym_set_range_statement] = sym_set_range_statement,
  [sym_set_filter_statement] = sym_set_filter_statement,
  [sym_reset_statement] = sym_reset_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_get_statement] = sym_get_statement,
  [sym_find_set_statement] = sym_find_set_statement,
  [sym_find_first_statement] = sym_find_first_statement,
  [sym_find_last_statement] = sym_find_last_statement,
  [sym_next_statement] = sym_next_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_case_clause] = sym_case_clause,
  [sym_value_set] = sym_value_set,
  [sym_else_clause] = sym_else_clause,
  [sym_exit_statement] = sym_exit_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_table_declaration_repeat1] = aux_sym_table_declaration_repeat1,
  [aux_sym_codeunit_declaration_repeat1] = aux_sym_codeunit_declaration_repeat1,
  [aux_sym_option_members_value_repeat1] = aux_sym_option_members_value_repeat1,
  [aux_sym_property_list_repeat1] = aux_sym_property_list_repeat1,
  [aux_sym_var_section_repeat1] = aux_sym_var_section_repeat1,
  [aux_sym_fields_repeat1] = aux_sym_fields_repeat1,
  [aux_sym_field_declaration_repeat1] = aux_sym_field_declaration_repeat1,
  [aux_sym_where_conditions_repeat1] = aux_sym_where_conditions_repeat1,
  [aux_sym_lookup_where_conditions_repeat1] = aux_sym_lookup_where_conditions_repeat1,
  [aux_sym_keys_repeat1] = aux_sym_keys_repeat1,
  [aux_sym_key_declaration_repeat1] = aux_sym_key_declaration_repeat1,
  [aux_sym_key_field_list_repeat1] = aux_sym_key_field_list_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__quoted_identifier_repeat1] = aux_sym__quoted_identifier_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_set_filter_statement_repeat1] = aux_sym_set_filter_statement_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [alias_sym_field] = alias_sym_field,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_member] = alias_sym_member,
  [alias_sym_method_name] = alias_sym_method_name,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_record] = alias_sym_record,
  [alias_sym_table] = alias_sym_table,
  [alias_sym_table_reference] = alias_sym_table_reference,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_table] = {
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
  [anon_sym_codeunit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Install] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Upgrade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FlowField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FlowFilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Temporary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_External] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_System] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CustomerContent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndUserIdentifiableInformation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AccountData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndUserPseudonymousIdentifiers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrganizationIdentifiableInformation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SystemMetadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ToBeClassified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trigger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnRun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Permissions] = {
    .visible = true,
    .named = false,
  },
  [sym_permission_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_OnInsert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnModify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnDelete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnRename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnValidate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnAfterGetRecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnAfterInsertEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnAfterModifyEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnAfterDeleteEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnBeforeInsertEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnBeforeModifyEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnBeforeDeleteEvent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableNo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Subtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SingleInstance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DrillDownPageId] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LookupPageId] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableRelation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FieldClass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CalcFormula] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BlankZero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Editable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OptionMembers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OptionCaption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataClassification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Caption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tabledata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DecimalPlaces] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
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
  [anon_sym_Dictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DateTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DateFormula] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Guid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RecordId] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dialog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FilterPageBuilder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JsonToken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JsonValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JsonArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JsonObject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Media] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MediaSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OutStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SecretText] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Codeunit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DotNet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fields] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_average] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnLookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnAssistEdit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnDrillDown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [sym_procedure_modifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Clustered] = {
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
  [sym_temporary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FindSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Modify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetRange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetFilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FindFirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FindLast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__object] = {
    .visible = false,
    .named = true,
  },
  [sym_object_id] = {
    .visible = true,
    .named = true,
  },
  [sym_object_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_codeunit_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_no_value] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype_value] = {
    .visible = true,
    .named = true,
  },
  [sym_single_instance_value] = {
    .visible = true,
    .named = true,
  },
  [sym_page_id_value] = {
    .visible = true,
    .named = true,
  },
  [sym_permissions_value] = {
    .visible = true,
    .named = true,
  },
  [sym_field_class_value] = {
    .visible = true,
    .named = true,
  },
  [sym_calc_formula_value] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_zero_value] = {
    .visible = true,
    .named = true,
  },
  [sym_editable_value] = {
    .visible = true,
    .named = true,
  },
  [sym_option_members_value] = {
    .visible = true,
    .named = true,
  },
  [sym_option_caption_value] = {
    .visible = true,
    .named = true,
  },
  [sym_table_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_table_type_property] = {
    .visible = true,
    .named = true,
  },
  [sym_data_classification_value] = {
    .visible = true,
    .named = true,
  },
  [sym__codeunit_element] = {
    .visible = false,
    .named = true,
  },
  [sym_onrun_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym__table_element] = {
    .visible = false,
    .named = true,
  },
  [sym_permissions_property] = {
    .visible = true,
    .named = true,
  },
  [sym_oninsert_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onmodify_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_ondelete_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onrename_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onvalidate_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onaftergetrecord_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onafterinsertevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onaftermodifyevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onafterdeleteevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onbeforeinsertevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onbeforemodifyevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_onbeforedeleteevent_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_caption_property] = {
    .visible = true,
    .named = true,
  },
  [sym_data_classification_property] = {
    .visible = true,
    .named = true,
  },
  [sym_tabledata_permission_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tabledata_permission] = {
    .visible = true,
    .named = true,
  },
  [sym__table_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_drilldown_pageid_property] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_pageid_property] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_places_property] = {
    .visible = true,
    .named = true,
  },
  [sym_var_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_text_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym__table_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_codeunit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_query_type] = {
    .visible = true,
    .named = true,
  },
  [sym_query_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_dotnet_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_relation_property] = {
    .visible = true,
    .named = true,
  },
  [sym_table_relation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_table_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_table_relation] = {
    .visible = false,
    .named = true,
  },
  [sym_table_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_field_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_where_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__field_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__condition_field_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_field_class_property] = {
    .visible = true,
    .named = true,
  },
  [sym_calc_formula_property] = {
    .visible = true,
    .named = true,
  },
  [sym__calc_formula_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_lookup_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_where_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_where_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_count_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_average_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_min_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_max_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_field_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_zero_property] = {
    .visible = true,
    .named = true,
  },
  [sym_editable_property] = {
    .visible = true,
    .named = true,
  },
  [sym_option_members_property] = {
    .visible = true,
    .named = true,
  },
  [sym_option_member] = {
    .visible = true,
    .named = true,
  },
  [sym_option_caption_property] = {
    .visible = true,
    .named = true,
  },
  [sym_field_trigger_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_keys] = {
    .visible = true,
    .named = true,
  },
  [sym_key_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_key_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure_return_specification] = {
    .visible = false,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure_name] = {
    .visible = false,
    .named = true,
  },
  [sym_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_clustered_property] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__assignable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_procedure_call] = {
    .visible = true,
    .named = true,
  },
  [sym__record_operation] = {
    .visible = false,
    .named = true,
  },
  [sym_get_method] = {
    .visible = true,
    .named = true,
  },
  [sym_find_set_method] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_modify_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_range_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_filter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_reset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_find_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_find_first_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_find_last_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_next_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_value_set] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeunit_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_members_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lookup_where_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keys_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_filter_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_member] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_method_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_record] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_reference] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_attribute_name = 2,
  field_base_type = 3,
  field_condition = 4,
  field_conditions = 5,
  field_const_value = 6,
  field_decimals = 7,
  field_else_branch = 8,
  field_else_relation = 9,
  field_enum_type = 10,
  field_enum_value = 11,
  field_expression = 12,
  field_field = 13,
  field_field_name = 14,
  field_fields = 15,
  field_filter_expression = 16,
  field_filter_field = 17,
  field_forward_order = 18,
  field_from_value = 19,
  field_function_name = 20,
  field_id = 21,
  field_left = 22,
  field_length = 23,
  field_lock_record = 24,
  field_member = 25,
  field_method = 26,
  field_modifier = 27,
  field_name = 28,
  field_object = 29,
  field_object_id = 30,
  field_object_name = 31,
  field_operator = 32,
  field_parameter = 33,
  field_parameter_name = 34,
  field_parameter_type = 35,
  field_permission = 36,
  field_precision = 37,
  field_property_name = 38,
  field_property_value = 39,
  field_record = 40,
  field_reference = 41,
  field_referenced_field = 42,
  field_relation = 43,
  field_return_type = 44,
  field_return_value = 45,
  field_right = 46,
  field_run_trigger = 47,
  field_scale = 48,
  field_size = 49,
  field_source_field = 50,
  field_steps = 51,
  field_system_id = 52,
  field_table = 53,
  field_table_name = 54,
  field_target = 55,
  field_temporary = 56,
  field_then_branch = 57,
  field_then_relation = 58,
  field_to_value = 59,
  field_trigger_name = 60,
  field_type = 61,
  field_value = 62,
  field_value_set = 63,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_attribute_name] = "attribute_name",
  [field_base_type] = "base_type",
  [field_condition] = "condition",
  [field_conditions] = "conditions",
  [field_const_value] = "const_value",
  [field_decimals] = "decimals",
  [field_else_branch] = "else_branch",
  [field_else_relation] = "else_relation",
  [field_enum_type] = "enum_type",
  [field_enum_value] = "enum_value",
  [field_expression] = "expression",
  [field_field] = "field",
  [field_field_name] = "field_name",
  [field_fields] = "fields",
  [field_filter_expression] = "filter_expression",
  [field_filter_field] = "filter_field",
  [field_forward_order] = "forward_order",
  [field_from_value] = "from_value",
  [field_function_name] = "function_name",
  [field_id] = "id",
  [field_left] = "left",
  [field_length] = "length",
  [field_lock_record] = "lock_record",
  [field_member] = "member",
  [field_method] = "method",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_object] = "object",
  [field_object_id] = "object_id",
  [field_object_name] = "object_name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_parameter_name] = "parameter_name",
  [field_parameter_type] = "parameter_type",
  [field_permission] = "permission",
  [field_precision] = "precision",
  [field_property_name] = "property_name",
  [field_property_value] = "property_value",
  [field_record] = "record",
  [field_reference] = "reference",
  [field_referenced_field] = "referenced_field",
  [field_relation] = "relation",
  [field_return_type] = "return_type",
  [field_return_value] = "return_value",
  [field_right] = "right",
  [field_run_trigger] = "run_trigger",
  [field_scale] = "scale",
  [field_size] = "size",
  [field_source_field] = "source_field",
  [field_steps] = "steps",
  [field_system_id] = "system_id",
  [field_table] = "table",
  [field_table_name] = "table_name",
  [field_target] = "target",
  [field_temporary] = "temporary",
  [field_then_branch] = "then_branch",
  [field_then_relation] = "then_relation",
  [field_to_value] = "to_value",
  [field_trigger_name] = "trigger_name",
  [field_type] = "type",
  [field_value] = "value",
  [field_value_set] = "value_set",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 4},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 4},
  [23] = {.index = 37, .length = 4},
  [24] = {.index = 41, .length = 7},
  [25] = {.index = 48, .length = 2},
  [26] = {.index = 50, .length = 1},
  [27] = {.index = 51, .length = 2},
  [28] = {.index = 53, .length = 2},
  [29] = {.index = 55, .length = 1},
  [31] = {.index = 56, .length = 1},
  [32] = {.index = 57, .length = 1},
  [33] = {.index = 58, .length = 4},
  [34] = {.index = 62, .length = 2},
  [35] = {.index = 64, .length = 1},
  [36] = {.index = 65, .length = 5},
  [37] = {.index = 70, .length = 3},
  [38] = {.index = 73, .length = 2},
  [39] = {.index = 75, .length = 1},
  [40] = {.index = 76, .length = 3},
  [41] = {.index = 79, .length = 2},
  [42] = {.index = 81, .length = 2},
  [43] = {.index = 83, .length = 2},
  [44] = {.index = 85, .length = 2},
  [45] = {.index = 87, .length = 1},
  [46] = {.index = 23, .length = 2},
  [47] = {.index = 88, .length = 3},
  [48] = {.index = 91, .length = 4},
  [49] = {.index = 95, .length = 2},
  [50] = {.index = 97, .length = 1},
  [51] = {.index = 98, .length = 4},
  [52] = {.index = 102, .length = 2},
  [53] = {.index = 104, .length = 3},
  [54] = {.index = 107, .length = 2},
  [55] = {.index = 109, .length = 3},
  [56] = {.index = 112, .length = 2},
  [57] = {.index = 114, .length = 2},
  [58] = {.index = 116, .length = 3},
  [59] = {.index = 119, .length = 2},
  [60] = {.index = 121, .length = 2},
  [61] = {.index = 123, .length = 1},
  [62] = {.index = 124, .length = 1},
  [63] = {.index = 125, .length = 3},
  [64] = {.index = 128, .length = 3},
  [65] = {.index = 131, .length = 2},
  [66] = {.index = 133, .length = 3},
  [67] = {.index = 136, .length = 2},
  [68] = {.index = 138, .length = 5},
  [69] = {.index = 143, .length = 1},
  [70] = {.index = 144, .length = 1},
  [71] = {.index = 145, .length = 3},
  [72] = {.index = 148, .length = 3},
  [73] = {.index = 151, .length = 1},
  [74] = {.index = 152, .length = 2},
  [75] = {.index = 154, .length = 2},
  [76] = {.index = 156, .length = 3},
  [77] = {.index = 159, .length = 3},
  [78] = {.index = 162, .length = 3},
  [79] = {.index = 165, .length = 3},
  [80] = {.index = 168, .length = 3},
  [81] = {.index = 171, .length = 6},
  [82] = {.index = 177, .length = 6},
  [83] = {.index = 183, .length = 2},
  [84] = {.index = 185, .length = 4},
  [85] = {.index = 189, .length = 1},
  [86] = {.index = 190, .length = 2},
  [87] = {.index = 190, .length = 2},
  [88] = {.index = 192, .length = 2},
  [89] = {.index = 194, .length = 3},
  [90] = {.index = 197, .length = 1},
  [91] = {.index = 198, .length = 1},
  [92] = {.index = 199, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_object_id, 1},
    {field_object_name, 2},
  [3] =
    {field_attribute_name, 1},
  [4] =
    {field_table, 0},
  [5] =
    {field_field, 0, .inherited = true},
    {field_table, 0, .inherited = true},
  [7] =
    {field_arguments, 0, .inherited = true},
    {field_function_name, 0, .inherited = true},
  [9] =
    {field_property_name, 0},
    {field_property_value, 2},
  [11] =
    {field_reference, 1},
  [12] =
    {field_name, 0},
    {field_type, 2},
  [14] =
    {field_arguments, 1},
    {field_function_name, 0},
  [16] =
    {field_arguments, 1},
  [17] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 1, .inherited = true},
    {field_function_name, 0, .inherited = true},
    {field_function_name, 1, .inherited = true},
  [21] =
    {field_return_value, 0},
  [22] =
    {field_name, 1},
  [23] =
    {field_field, 2},
    {field_table, 0},
  [25] =
    {field_record, 0},
  [26] =
    {field_permission, 3},
    {field_table_name, 1},
  [28] =
    {field_name, 0},
    {field_temporary, 3},
    {field_type, 2},
  [31] =
    {field_arguments, 1, .inherited = true},
    {field_function_name, 1, .inherited = true},
  [33] =
    {field_arguments, 0, .inherited = true},
    {field_function_name, 0, .inherited = true},
    {field_member, 2},
    {field_object, 0},
  [37] =
    {field_arguments, 0, .inherited = true},
    {field_enum_type, 0},
    {field_enum_value, 2},
    {field_function_name, 0, .inherited = true},
  [41] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 2, .inherited = true},
    {field_function_name, 0, .inherited = true},
    {field_function_name, 2, .inherited = true},
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [48] =
    {field_modifier, 0},
    {field_name, 2},
  [50] =
    {field_return_type, 1},
  [51] =
    {field_name, 1},
    {field_return_type, 4, .inherited = true},
  [53] =
    {field_parameter_name, 0},
    {field_parameter_type, 2},
  [55] =
    {field_name, 2},
  [56] =
    {field_target, 2},
  [57] =
    {field_table, 2},
  [58] =
    {field_arguments, 2, .inherited = true},
    {field_function_name, 2, .inherited = true},
    {field_left, 0},
    {field_right, 2},
  [62] =
    {field_arguments, 2},
    {field_record, 0, .inherited = true},
  [64] =
    {field_length, 2},
  [65] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 3},
    {field_function_name, 0, .inherited = true},
    {field_method, 2},
    {field_object, 0},
  [70] =
    {field_modifier, 0},
    {field_name, 2},
    {field_return_type, 5, .inherited = true},
  [73] =
    {field_name, 1},
    {field_return_type, 5, .inherited = true},
  [75] =
    {field_return_type, 2},
  [76] =
    {field_modifier, 0},
    {field_parameter_name, 1},
    {field_parameter_type, 3},
  [79] =
    {field_modifier, 1},
    {field_name, 3},
  [81] =
    {field_name, 2},
    {field_return_type, 5, .inherited = true},
  [83] =
    {field_condition, 2},
    {field_then_relation, 4},
  [85] =
    {field_filter_field, 0},
    {field_value, 2},
  [87] =
    {field_conditions, 2},
  [88] =
    {field_arguments, 3, .inherited = true},
    {field_condition, 3},
    {field_function_name, 3, .inherited = true},
  [91] =
    {field_arguments, 1, .inherited = true},
    {field_condition, 1},
    {field_function_name, 1, .inherited = true},
    {field_then_branch, 3},
  [95] =
    {field_arguments, 2, .inherited = true},
    {field_function_name, 2, .inherited = true},
  [97] =
    {field_record, 0, .inherited = true},
  [98] =
    {field_arguments, 1, .inherited = true},
    {field_arguments, 2, .inherited = true},
    {field_function_name, 1, .inherited = true},
    {field_function_name, 2, .inherited = true},
  [102] =
    {field_fields, 4},
    {field_name, 2},
  [104] =
    {field_modifier, 0},
    {field_name, 2},
    {field_return_type, 6, .inherited = true},
  [107] =
    {field_name, 1},
    {field_return_type, 6, .inherited = true},
  [109] =
    {field_modifier, 1},
    {field_name, 3},
    {field_return_type, 6, .inherited = true},
  [112] =
    {field_name, 2},
    {field_return_type, 6, .inherited = true},
  [114] =
    {field_field, 0},
    {field_value, 2},
  [116] =
    {field_arguments, 1, .inherited = true},
    {field_expression, 1},
    {field_function_name, 1, .inherited = true},
  [119] =
    {field_record, 0, .inherited = true},
    {field_run_trigger, 3},
  [121] =
    {field_record, 0, .inherited = true},
    {field_steps, 3},
  [123] =
    {field_size, 2},
  [124] =
    {field_base_type, 0},
  [125] =
    {field_modifier, 0},
    {field_name, 2},
    {field_return_type, 7, .inherited = true},
  [128] =
    {field_modifier, 1},
    {field_name, 3},
    {field_return_type, 7, .inherited = true},
  [131] =
    {field_name, 2},
    {field_return_type, 7, .inherited = true},
  [133] =
    {field_condition, 2},
    {field_else_relation, 6},
    {field_then_relation, 4},
  [136] =
    {field_forward_order, 4},
    {field_record, 0},
  [138] =
    {field_arguments, 1, .inherited = true},
    {field_condition, 1},
    {field_else_branch, 5},
    {field_function_name, 1, .inherited = true},
    {field_then_branch, 3},
  [143] =
    {field_value_set, 0},
  [144] =
    {field_enum_type, 1},
  [145] =
    {field_id, 2},
    {field_name, 4},
    {field_type, 6},
  [148] =
    {field_modifier, 1},
    {field_name, 3},
    {field_return_type, 8, .inherited = true},
  [151] =
    {field_referenced_field, 2},
  [152] =
    {field_const_value, 4},
    {field_filter_field, 0},
  [154] =
    {field_filter_field, 0},
    {field_source_field, 4},
  [156] =
    {field_record, 0, .inherited = true},
    {field_run_trigger, 3},
    {field_system_id, 5},
  [159] =
    {field_field_name, 3},
    {field_from_value, 5},
    {field_record, 0, .inherited = true},
  [162] =
    {field_field_name, 3},
    {field_filter_expression, 5},
    {field_record, 0, .inherited = true},
  [165] =
    {field_forward_order, 4},
    {field_lock_record, 6},
    {field_record, 0},
  [168] =
    {field_arguments, 1, .inherited = true},
    {field_function_name, 1, .inherited = true},
    {field_parameter, 1},
  [171] =
    {field_arguments, 6, .inherited = true},
    {field_field_name, 3},
    {field_filter_expression, 5},
    {field_function_name, 6, .inherited = true},
    {field_parameter, 6, .inherited = true},
    {field_record, 0, .inherited = true},
  [177] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 1, .inherited = true},
    {field_function_name, 0, .inherited = true},
    {field_function_name, 1, .inherited = true},
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [183] =
    {field_base_type, 0},
    {field_size, 2},
  [185] =
    {field_field_name, 3},
    {field_from_value, 5},
    {field_record, 0, .inherited = true},
    {field_to_value, 7},
  [189] =
    {field_value, 2},
  [190] =
    {field_field, 0},
    {field_value, 4},
  [192] =
    {field_decimals, 4},
    {field_size, 2},
  [194] =
    {field_base_type, 0},
    {field_decimals, 4},
    {field_size, 2},
  [197] =
    {field_trigger_name, 1},
  [198] =
    {field_relation, 2},
  [199] =
    {field_precision, 2},
    {field_scale, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [0] = alias_sym_name,
  },
  [9] = {
    [0] = alias_sym_function_name,
  },
  [18] = {
    [0] = alias_sym_record,
  },
  [22] = {
    [2] = alias_sym_member,
  },
  [28] = {
    [0] = alias_sym_name,
    [2] = sym_code_type,
  },
  [30] = {
    [0] = sym_identifier,
  },
  [32] = {
    [2] = alias_sym_table_reference,
  },
  [36] = {
    [2] = alias_sym_method_name,
  },
  [40] = {
    [1] = alias_sym_name,
    [3] = sym_code_type,
  },
  [46] = {
    [0] = alias_sym_table,
    [2] = alias_sym_field,
  },
  [52] = {
    [2] = alias_sym_name,
  },
  [67] = {
    [0] = alias_sym_record,
  },
  [71] = {
    [4] = alias_sym_name,
  },
  [79] = {
    [0] = alias_sym_record,
  },
  [86] = {
    [4] = sym_field_ref,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_basic_type, 2,
    sym_basic_type,
    sym_code_type,
  sym_text_type, 2,
    sym_text_type,
    sym_code_type,
  sym_record_type, 2,
    sym_record_type,
    sym_code_type,
  sym__table_reference, 2,
    sym__table_reference,
    alias_sym_table_reference,
  sym_array_type, 2,
    sym_array_type,
    sym_code_type,
  sym__condition_field_reference, 2,
    sym__condition_field_reference,
    sym_field_ref,
  sym__quoted_identifier, 7,
    sym__quoted_identifier,
    alias_sym_field,
    alias_sym_member,
    alias_sym_method_name,
    alias_sym_name,
    alias_sym_table,
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
  [9] = 7,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 12,
  [16] = 11,
  [17] = 14,
  [18] = 14,
  [19] = 11,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 23,
  [27] = 21,
  [28] = 22,
  [29] = 22,
  [30] = 21,
  [31] = 22,
  [32] = 21,
  [33] = 22,
  [34] = 21,
  [35] = 25,
  [36] = 23,
  [37] = 23,
  [38] = 25,
  [39] = 25,
  [40] = 22,
  [41] = 41,
  [42] = 41,
  [43] = 41,
  [44] = 41,
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
  [59] = 54,
  [60] = 55,
  [61] = 61,
  [62] = 57,
  [63] = 58,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 56,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 57,
  [73] = 58,
  [74] = 58,
  [75] = 56,
  [76] = 76,
  [77] = 77,
  [78] = 55,
  [79] = 54,
  [80] = 80,
  [81] = 54,
  [82] = 55,
  [83] = 76,
  [84] = 77,
  [85] = 56,
  [86] = 86,
  [87] = 57,
  [88] = 66,
  [89] = 61,
  [90] = 77,
  [91] = 65,
  [92] = 92,
  [93] = 51,
  [94] = 94,
  [95] = 65,
  [96] = 96,
  [97] = 67,
  [98] = 69,
  [99] = 66,
  [100] = 100,
  [101] = 67,
  [102] = 102,
  [103] = 69,
  [104] = 92,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 96,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 61,
  [113] = 76,
  [114] = 51,
  [115] = 94,
  [116] = 100,
  [117] = 76,
  [118] = 77,
  [119] = 105,
  [120] = 109,
  [121] = 111,
  [122] = 122,
  [123] = 100,
  [124] = 111,
  [125] = 94,
  [126] = 96,
  [127] = 109,
  [128] = 61,
  [129] = 92,
  [130] = 130,
  [131] = 65,
  [132] = 66,
  [133] = 67,
  [134] = 69,
  [135] = 96,
  [136] = 51,
  [137] = 94,
  [138] = 100,
  [139] = 122,
  [140] = 105,
  [141] = 122,
  [142] = 109,
  [143] = 122,
  [144] = 92,
  [145] = 111,
  [146] = 51,
  [147] = 105,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 152,
  [155] = 152,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 160,
  [162] = 160,
  [163] = 160,
  [164] = 160,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 169,
  [172] = 172,
  [173] = 173,
  [174] = 169,
  [175] = 167,
  [176] = 167,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 170,
  [181] = 181,
  [182] = 169,
  [183] = 167,
  [184] = 181,
  [185] = 179,
  [186] = 172,
  [187] = 173,
  [188] = 188,
  [189] = 181,
  [190] = 190,
  [191] = 179,
  [192] = 172,
  [193] = 181,
  [194] = 172,
  [195] = 179,
  [196] = 173,
  [197] = 181,
  [198] = 173,
  [199] = 177,
  [200] = 169,
  [201] = 177,
  [202] = 167,
  [203] = 177,
  [204] = 170,
  [205] = 170,
  [206] = 169,
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
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
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
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 208,
  [288] = 209,
  [289] = 210,
  [290] = 211,
  [291] = 212,
  [292] = 213,
  [293] = 293,
  [294] = 214,
  [295] = 295,
  [296] = 296,
  [297] = 217,
  [298] = 218,
  [299] = 219,
  [300] = 220,
  [301] = 221,
  [302] = 222,
  [303] = 223,
  [304] = 224,
  [305] = 225,
  [306] = 226,
  [307] = 207,
  [308] = 228,
  [309] = 229,
  [310] = 230,
  [311] = 231,
  [312] = 232,
  [313] = 233,
  [314] = 234,
  [315] = 235,
  [316] = 236,
  [317] = 237,
  [318] = 238,
  [319] = 286,
  [320] = 240,
  [321] = 241,
  [322] = 242,
  [323] = 243,
  [324] = 244,
  [325] = 245,
  [326] = 246,
  [327] = 247,
  [328] = 248,
  [329] = 249,
  [330] = 250,
  [331] = 251,
  [332] = 252,
  [333] = 253,
  [334] = 254,
  [335] = 255,
  [336] = 256,
  [337] = 257,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 76,
  [347] = 77,
  [348] = 348,
  [349] = 349,
  [350] = 64,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 86,
  [357] = 52,
  [358] = 94,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 361,
  [365] = 362,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 80,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 361,
  [377] = 362,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 361,
  [383] = 362,
  [384] = 384,
  [385] = 385,
  [386] = 64,
  [387] = 262,
  [388] = 388,
  [389] = 264,
  [390] = 265,
  [391] = 266,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 86,
  [397] = 271,
  [398] = 52,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 280,
  [407] = 80,
  [408] = 408,
  [409] = 285,
  [410] = 239,
  [411] = 255,
  [412] = 266,
  [413] = 222,
  [414] = 223,
  [415] = 224,
  [416] = 225,
  [417] = 226,
  [418] = 280,
  [419] = 228,
  [420] = 229,
  [421] = 230,
  [422] = 231,
  [423] = 232,
  [424] = 233,
  [425] = 234,
  [426] = 235,
  [427] = 236,
  [428] = 428,
  [429] = 105,
  [430] = 237,
  [431] = 238,
  [432] = 239,
  [433] = 100,
  [434] = 240,
  [435] = 241,
  [436] = 242,
  [437] = 243,
  [438] = 244,
  [439] = 245,
  [440] = 246,
  [441] = 247,
  [442] = 248,
  [443] = 249,
  [444] = 250,
  [445] = 251,
  [446] = 64,
  [447] = 252,
  [448] = 253,
  [449] = 254,
  [450] = 255,
  [451] = 256,
  [452] = 257,
  [453] = 453,
  [454] = 86,
  [455] = 52,
  [456] = 80,
  [457] = 457,
  [458] = 262,
  [459] = 264,
  [460] = 265,
  [461] = 266,
  [462] = 271,
  [463] = 463,
  [464] = 285,
  [465] = 286,
  [466] = 208,
  [467] = 209,
  [468] = 280,
  [469] = 210,
  [470] = 211,
  [471] = 212,
  [472] = 213,
  [473] = 285,
  [474] = 286,
  [475] = 208,
  [476] = 209,
  [477] = 210,
  [478] = 211,
  [479] = 212,
  [480] = 213,
  [481] = 214,
  [482] = 217,
  [483] = 218,
  [484] = 219,
  [485] = 220,
  [486] = 221,
  [487] = 222,
  [488] = 223,
  [489] = 224,
  [490] = 225,
  [491] = 226,
  [492] = 207,
  [493] = 228,
  [494] = 229,
  [495] = 230,
  [496] = 231,
  [497] = 232,
  [498] = 233,
  [499] = 234,
  [500] = 235,
  [501] = 236,
  [502] = 237,
  [503] = 238,
  [504] = 239,
  [505] = 64,
  [506] = 86,
  [507] = 52,
  [508] = 80,
  [509] = 240,
  [510] = 241,
  [511] = 242,
  [512] = 243,
  [513] = 513,
  [514] = 244,
  [515] = 245,
  [516] = 246,
  [517] = 247,
  [518] = 248,
  [519] = 249,
  [520] = 250,
  [521] = 251,
  [522] = 252,
  [523] = 253,
  [524] = 254,
  [525] = 513,
  [526] = 256,
  [527] = 257,
  [528] = 271,
  [529] = 513,
  [530] = 262,
  [531] = 513,
  [532] = 109,
  [533] = 513,
  [534] = 214,
  [535] = 535,
  [536] = 264,
  [537] = 217,
  [538] = 218,
  [539] = 219,
  [540] = 220,
  [541] = 221,
  [542] = 92,
  [543] = 57,
  [544] = 58,
  [545] = 265,
  [546] = 207,
  [547] = 547,
  [548] = 548,
  [549] = 76,
  [550] = 77,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 428,
  [560] = 560,
  [561] = 57,
  [562] = 58,
  [563] = 563,
  [564] = 564,
  [565] = 77,
  [566] = 566,
  [567] = 76,
  [568] = 77,
  [569] = 569,
  [570] = 570,
  [571] = 566,
  [572] = 566,
  [573] = 573,
  [574] = 569,
  [575] = 569,
  [576] = 566,
  [577] = 76,
  [578] = 569,
  [579] = 566,
  [580] = 76,
  [581] = 77,
  [582] = 582,
  [583] = 582,
  [584] = 582,
  [585] = 570,
  [586] = 582,
  [587] = 573,
  [588] = 570,
  [589] = 573,
  [590] = 570,
  [591] = 573,
  [592] = 592,
  [593] = 65,
  [594] = 66,
  [595] = 67,
  [596] = 592,
  [597] = 52,
  [598] = 69,
  [599] = 61,
  [600] = 600,
  [601] = 64,
  [602] = 592,
  [603] = 600,
  [604] = 592,
  [605] = 600,
  [606] = 600,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 80,
  [614] = 86,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 158,
  [621] = 621,
  [622] = 156,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 188,
  [644] = 644,
  [645] = 645,
  [646] = 190,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 661,
  [677] = 661,
  [678] = 661,
  [679] = 679,
  [680] = 680,
  [681] = 661,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 158,
  [701] = 156,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 702,
  [732] = 703,
  [733] = 704,
  [734] = 682,
  [735] = 735,
  [736] = 736,
  [737] = 702,
  [738] = 703,
  [739] = 704,
  [740] = 682,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 702,
  [746] = 703,
  [747] = 704,
  [748] = 682,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 750,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 750,
  [760] = 750,
  [761] = 761,
  [762] = 750,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 764,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 769,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 787,
  [800] = 790,
  [801] = 801,
  [802] = 802,
  [803] = 769,
  [804] = 794,
  [805] = 795,
  [806] = 796,
  [807] = 797,
  [808] = 808,
  [809] = 809,
  [810] = 790,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 769,
  [815] = 815,
  [816] = 794,
  [817] = 795,
  [818] = 796,
  [819] = 797,
  [820] = 787,
  [821] = 790,
  [822] = 769,
  [823] = 794,
  [824] = 795,
  [825] = 790,
  [826] = 826,
  [827] = 827,
  [828] = 790,
  [829] = 784,
  [830] = 785,
  [831] = 786,
  [832] = 809,
  [833] = 833,
  [834] = 834,
  [835] = 763,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 790,
  [842] = 784,
  [843] = 785,
  [844] = 786,
  [845] = 809,
  [846] = 833,
  [847] = 834,
  [848] = 763,
  [849] = 836,
  [850] = 837,
  [851] = 838,
  [852] = 852,
  [853] = 790,
  [854] = 854,
  [855] = 784,
  [856] = 785,
  [857] = 786,
  [858] = 809,
  [859] = 833,
  [860] = 834,
  [861] = 768,
  [862] = 836,
  [863] = 837,
  [864] = 838,
  [865] = 865,
  [866] = 790,
  [867] = 833,
  [868] = 834,
  [869] = 763,
  [870] = 836,
  [871] = 871,
  [872] = 837,
  [873] = 838,
  [874] = 796,
  [875] = 797,
  [876] = 764,
  [877] = 768,
  [878] = 764,
  [879] = 768,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 887,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 886,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 892,
  [919] = 919,
  [920] = 920,
  [921] = 887,
  [922] = 896,
  [923] = 897,
  [924] = 898,
  [925] = 899,
  [926] = 900,
  [927] = 901,
  [928] = 902,
  [929] = 929,
  [930] = 930,
  [931] = 931,
  [932] = 932,
  [933] = 933,
  [934] = 897,
  [935] = 898,
  [936] = 899,
  [937] = 937,
  [938] = 900,
  [939] = 901,
  [940] = 902,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 886,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 953,
  [954] = 954,
  [955] = 955,
  [956] = 956,
  [957] = 957,
  [958] = 896,
  [959] = 959,
  [960] = 960,
  [961] = 883,
  [962] = 962,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 883,
  [979] = 979,
  [980] = 980,
  [981] = 981,
  [982] = 982,
  [983] = 886,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 989,
  [990] = 990,
  [991] = 892,
  [992] = 992,
  [993] = 190,
  [994] = 994,
  [995] = 995,
  [996] = 887,
  [997] = 896,
  [998] = 897,
  [999] = 898,
  [1000] = 899,
  [1001] = 900,
  [1002] = 188,
  [1003] = 901,
  [1004] = 1004,
  [1005] = 902,
  [1006] = 1006,
  [1007] = 892,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 1023,
  [1024] = 1024,
  [1025] = 1025,
  [1026] = 1026,
  [1027] = 1027,
  [1028] = 1028,
  [1029] = 1029,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 1033,
  [1034] = 1034,
  [1035] = 1035,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 1039,
  [1040] = 1040,
  [1041] = 1041,
  [1042] = 1042,
  [1043] = 1043,
  [1044] = 1044,
  [1045] = 1045,
  [1046] = 1046,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 1049,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1052,
  [1053] = 1053,
  [1054] = 1054,
  [1055] = 1055,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1059,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 1063,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1082,
  [1083] = 1083,
  [1084] = 1084,
  [1085] = 1085,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1091,
  [1092] = 1036,
  [1093] = 1093,
  [1094] = 1094,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1104,
  [1105] = 1037,
  [1106] = 1087,
  [1107] = 1096,
  [1108] = 1108,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1112,
  [1113] = 1113,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 1117,
  [1118] = 1021,
  [1119] = 1022,
  [1120] = 1023,
  [1121] = 1027,
  [1122] = 1032,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1125,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1062,
  [1131] = 1131,
  [1132] = 1132,
  [1133] = 1133,
  [1134] = 1066,
  [1135] = 1135,
  [1136] = 1136,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1142,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1078,
  [1147] = 1079,
  [1148] = 1080,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1078,
  [1152] = 1152,
  [1153] = 1079,
  [1154] = 1088,
  [1155] = 1089,
  [1156] = 1090,
  [1157] = 1080,
  [1158] = 1036,
  [1159] = 1093,
  [1160] = 1160,
  [1161] = 1161,
  [1162] = 1162,
  [1163] = 1163,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1167,
  [1168] = 1102,
  [1169] = 1169,
  [1170] = 1170,
  [1171] = 1037,
  [1172] = 1087,
  [1173] = 1096,
  [1174] = 1108,
  [1175] = 1109,
  [1176] = 1110,
  [1177] = 1111,
  [1178] = 1112,
  [1179] = 1113,
  [1180] = 1114,
  [1181] = 1115,
  [1182] = 1116,
  [1183] = 1117,
  [1184] = 1021,
  [1185] = 1022,
  [1186] = 1023,
  [1187] = 1027,
  [1188] = 1032,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1191,
  [1192] = 1192,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1066,
  [1196] = 1196,
  [1197] = 1197,
  [1198] = 1198,
  [1199] = 1199,
  [1200] = 1200,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1203,
  [1204] = 1204,
  [1205] = 1205,
  [1206] = 1078,
  [1207] = 1079,
  [1208] = 1080,
  [1209] = 1209,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1212,
  [1213] = 1213,
  [1214] = 1088,
  [1215] = 1089,
  [1216] = 1090,
  [1217] = 1217,
  [1218] = 1036,
  [1219] = 1093,
  [1220] = 1220,
  [1221] = 1221,
  [1222] = 1222,
  [1223] = 1223,
  [1224] = 1224,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1102,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1087,
  [1233] = 1096,
  [1234] = 1108,
  [1235] = 1109,
  [1236] = 1110,
  [1237] = 1111,
  [1238] = 1112,
  [1239] = 1113,
  [1240] = 1114,
  [1241] = 1115,
  [1242] = 1116,
  [1243] = 1117,
  [1244] = 1021,
  [1245] = 1022,
  [1246] = 1023,
  [1247] = 1027,
  [1248] = 1032,
  [1249] = 1249,
  [1250] = 1093,
  [1251] = 1251,
  [1252] = 1252,
  [1253] = 1253,
  [1254] = 1254,
  [1255] = 1066,
  [1256] = 1256,
  [1257] = 1257,
  [1258] = 1108,
  [1259] = 1109,
  [1260] = 1260,
  [1261] = 1261,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1231,
  [1267] = 1267,
  [1268] = 1268,
  [1269] = 1269,
  [1270] = 1270,
  [1271] = 1271,
  [1272] = 1272,
  [1273] = 1273,
  [1274] = 1274,
  [1275] = 1275,
  [1276] = 1276,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1279,
  [1280] = 1280,
  [1281] = 1281,
  [1282] = 1110,
  [1283] = 1126,
  [1284] = 1284,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1287,
  [1288] = 1288,
  [1289] = 1044,
  [1290] = 1045,
  [1291] = 1291,
  [1292] = 1062,
  [1293] = 1293,
  [1294] = 1294,
  [1295] = 1111,
  [1296] = 1296,
  [1297] = 1297,
  [1298] = 1298,
  [1299] = 1299,
  [1300] = 1112,
  [1301] = 1231,
  [1302] = 1274,
  [1303] = 1303,
  [1304] = 1088,
  [1305] = 1305,
  [1306] = 1306,
  [1307] = 1274,
  [1308] = 1275,
  [1309] = 1276,
  [1310] = 1277,
  [1311] = 1278,
  [1312] = 1279,
  [1313] = 1280,
  [1314] = 1126,
  [1315] = 1315,
  [1316] = 1275,
  [1317] = 1089,
  [1318] = 1318,
  [1319] = 1044,
  [1320] = 1045,
  [1321] = 1321,
  [1322] = 1015,
  [1323] = 1323,
  [1324] = 1276,
  [1325] = 1325,
  [1326] = 1326,
  [1327] = 1277,
  [1328] = 1090,
  [1329] = 1329,
  [1330] = 1231,
  [1331] = 1331,
  [1332] = 1332,
  [1333] = 1333,
  [1334] = 1334,
  [1335] = 1274,
  [1336] = 1275,
  [1337] = 1276,
  [1338] = 1277,
  [1339] = 1278,
  [1340] = 1279,
  [1341] = 1280,
  [1342] = 1126,
  [1343] = 1102,
  [1344] = 1344,
  [1345] = 1345,
  [1346] = 1278,
  [1347] = 1044,
  [1348] = 1045,
  [1349] = 1279,
  [1350] = 1280,
  [1351] = 1351,
  [1352] = 1352,
  [1353] = 1353,
  [1354] = 1354,
  [1355] = 1113,
  [1356] = 1114,
  [1357] = 1115,
  [1358] = 1358,
  [1359] = 1359,
  [1360] = 1360,
  [1361] = 1361,
  [1362] = 1362,
  [1363] = 1363,
  [1364] = 1364,
  [1365] = 1365,
  [1366] = 1318,
  [1367] = 1321,
  [1368] = 1015,
  [1369] = 1323,
  [1370] = 1359,
  [1371] = 1371,
  [1372] = 1372,
  [1373] = 1373,
  [1374] = 1374,
  [1375] = 1375,
  [1376] = 1318,
  [1377] = 1321,
  [1378] = 1015,
  [1379] = 1323,
  [1380] = 1380,
  [1381] = 1381,
  [1382] = 1382,
  [1383] = 1383,
  [1384] = 1318,
  [1385] = 1321,
  [1386] = 1386,
  [1387] = 1323,
  [1388] = 1359,
  [1389] = 1389,
  [1390] = 1116,
  [1391] = 1391,
  [1392] = 1117,
  [1393] = 1393,
  [1394] = 1394,
  [1395] = 1395,
  [1396] = 1396,
  [1397] = 1066,
  [1398] = 1325,
  [1399] = 1326,
  [1400] = 1325,
  [1401] = 1326,
  [1402] = 1325,
  [1403] = 1326,
  [1404] = 1037,
};

static TSCharacterRange sym_permission_type_character_set_1[] = {
  {'D', 'D'}, {'I', 'I'}, {'M', 'M'}, {'R', 'R'}, {'X', 'X'}, {'d', 'd'}, {'i', 'i'}, {'m', 'm'},
  {'r', 'r'}, {'x', 'x'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(880);
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        ')', 1053,
        '*', 1082,
        '+', 1080,
        ',', 892,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 961,
        ';', 900,
        '<', 21,
        '=', 899,
        'A', 185,
        'B', 397,
        'C', 75,
        'D', 915,
        'E', 67,
        'F', 57,
        'G', 281,
        'I', 914,
        'J', 719,
        'L', 95,
        'M', 920,
        'N', 240,
        'O', 84,
        'P', 332,
        'Q', 841,
        'R', 918,
        'S', 269,
        'T', 109,
        'U', 650,
        'V', 113,
        'W', 55,
        '[', 967,
        '\\', 878,
        ']', 968,
        'a', 675,
        'b', 278,
        'c', 112,
        'e', 500,
        'f', 96,
        'i', 921,
        'k', 242,
        'l', 597,
        'm', 916,
        'o', 367,
        'p', 677,
        'r', 919,
        's', 832,
        't', 156,
        'u', 563,
        'v', 115,
        'w', 396,
        '{', 883,
        '}', 884,
        'X', 925,
        'd', 925,
        'x', 925,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(1420);
      if (lookahead == '.') ADVANCE(1421);
      if (lookahead == '\\') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1422);
      if (lookahead != 0) ADVANCE(1421);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        ')', 1053,
        '*', 1082,
        '+', 1080,
        ',', 892,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 960,
        ';', 900,
        '<', 21,
        '=', 899,
        'c', 1109,
        'e', 1294,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1420);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(1052);
      if (lookahead == ')') ADVANCE(1053);
      if (lookahead == 'f') ADVANCE(1123);
      if (lookahead == 't') ADVANCE(1356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        '*', 1082,
        '+', 1080,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 19,
        ';', 900,
        '<', 21,
        '=', 899,
        'c', 1109,
        'e', 1294,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        '*', 1082,
        '+', 1080,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 19,
        ';', 900,
        '<', 21,
        '=', 899,
        'c', 1109,
        'e', 1272,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        '*', 1082,
        '+', 1080,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 19,
        ';', 900,
        '<', 21,
        '=', 899,
        'c', 1109,
        'e', 1274,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
        'u', 1299,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        '*', 1082,
        '+', 1080,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 19,
        ';', 900,
        '<', 21,
        '=', 899,
        'c', 1109,
        'e', 1412,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
        'u', 1299,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        '*', 1082,
        '+', 1080,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 19,
        '<', 21,
        '=', 899,
        'b', 1187,
        'c', 1109,
        'e', 1412,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1420);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(1052);
      if (lookahead == ';') ADVANCE(900);
      if (lookahead == 'e') ADVANCE(1273);
      if (lookahead == 'f') ADVANCE(1123);
      if (lookahead == 't') ADVANCE(1356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 1420,
        '\'', 13,
        '(', 1052,
        'c', 1109,
        'e', 1412,
        'f', 1123,
        'i', 1213,
        'r', 1171,
        't', 1356,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1420);
      if (lookahead == '\'') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1420);
      if (lookahead == 'I') ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(1425);
      if (lookahead == '\\') ADVANCE(877);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '(', 1052,
        ')', 1053,
        '*', 1082,
        '+', 1080,
        ',', 892,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 960,
        '<', 21,
        '=', 899,
        'A', 1142,
        'B', 1227,
        'C', 1225,
        'D', 1129,
        'F', 1229,
        'G', 1399,
        'I', 1284,
        'J', 1360,
        'L', 1102,
        'M', 1181,
        'O', 1097,
        'Q', 1400,
        'R', 1184,
        'S', 1186,
        'T', 1164,
        'V', 1110,
        ']', 968,
        'a', 1340,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '(', 18,
        'A', 1142,
        'B', 1227,
        'C', 1226,
        'D', 1130,
        'F', 1229,
        'G', 1399,
        'I', 1284,
        'J', 1360,
        'L', 1103,
        'M', 1181,
        'O', 1097,
        'R', 1184,
        'S', 1186,
        'T', 1164,
        'V', 1110,
        'a', 1340,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ')', 1053,
        '*', 1082,
        '+', 1080,
        ',', 892,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 960,
        ';', 900,
        '<', 21,
        '=', 899,
        'B', 494,
        'C', 94,
        'D', 144,
        'E', 201,
        'F', 450,
        'L', 611,
        'N', 606,
        'O', 659,
        'P', 332,
        'S', 403,
        'T', 110,
        '[', 967,
        'e', 560,
        'f', 447,
        'k', 300,
        'l', 613,
        'o', 367,
        'p', 677,
        't', 162,
        'v', 115,
        '}', 884,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(1053);
      if (lookahead == 'v') ADVANCE(1128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(911);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(1443);
      if (lookahead == '=') ADVANCE(1442);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(959);
      if (lookahead == ';') ADVANCE(900);
      if (lookahead == 'b') ADVANCE(1187);
      if (lookahead == 'v') ADVANCE(1128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(1079);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'A', 377,
        'B', 274,
        'D', 341,
        'I', 590,
        'L', 635,
        'M', 637,
        'R', 287,
        'V', 118,
      );
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(607);
      if (lookahead == 'V') ADVANCE(132);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'B', 1228,
        'C', 1324,
        'D', 1135,
        'E', 1296,
        'G', 1399,
        'I', 1302,
        'O', 1327,
        'R', 1212,
        'T', 1164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(363);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(839);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead == '{') ADVANCE(883);
      if (lookahead == '}') ADVANCE(884);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (set_contains(sym_permission_type_character_set_1, 10, lookahead)) ADVANCE(925);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(481);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(644);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        'C', 1108,
        'D', 1127,
        'L', 1319,
        'P', 1205,
        'T', 1115,
        '[', 967,
        'f', 1247,
        'k', 1189,
        'l', 1312,
        'p', 1352,
        't', 1346,
        'v', 1128,
        '}', 884,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(297);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(483);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(507);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(1058);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(604);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'I') ADVANCE(592);
      if (lookahead == 'M') ADVANCE(639);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(634);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(142);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(361);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'M') ADVANCE(646);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(1056);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(1059);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(848);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(230);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(849);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(850);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(851);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(852);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(853);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(419);
      if (lookahead == 'L') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(318);
      END_STATE();
    case 52:
      if (lookahead == 'F') ADVANCE(399);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(638);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(212);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(589);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(214);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(579);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(583);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(734);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(236);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(595);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(807);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(326);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(600);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(873);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(313);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(722);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(150);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(487);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(151);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(154);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(282);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(788);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(788);
      if (lookahead == 'p') ADVANCE(826);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(805);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(808);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(1057);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(873);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(739);
      END_STATE();
    case 92:
      if (lookahead == 'Z') ADVANCE(328);
      END_STATE();
    case 93:
      if (lookahead == '[') ADVANCE(967);
      if (lookahead == 'l') ADVANCE(1312);
      if (lookahead == 'p') ADVANCE(1352);
      if (lookahead == 't') ADVANCE(1346);
      if (lookahead == 'v') ADVANCE(1128);
      if (lookahead == '}') ADVANCE(884);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(1021);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(957);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(903);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(948);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(991);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(865);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(738);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(824);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(722);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(1008);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(458);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(783);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(1187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(495);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(501);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(496);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(497);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(512);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(769);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'x') ADVANCE(807);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1436);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1051);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1000);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1426);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(942);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1050);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(846);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(713);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(985);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1460);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1455);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1449);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(735);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(740);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(966);
      END_STATE();
    case 368:
      if (lookahead == 'f') ADVANCE(863);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(864);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(874);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(641);
      END_STATE();
    case 372:
      if (lookahead == 'f') ADVANCE(405);
      END_STATE();
    case 373:
      if (lookahead == 'f') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 375:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 376:
      if (lookahead == 'f') ADVANCE(640);
      END_STATE();
    case 377:
      if (lookahead == 'f') ADVANCE(811);
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 378:
      if (lookahead == 'f') ADVANCE(875);
      END_STATE();
    case 379:
      if (lookahead == 'f') ADVANCE(647);
      END_STATE();
    case 380:
      if (lookahead == 'f') ADVANCE(456);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(1004);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(413);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(681);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(393);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == 'y') ADVANCE(786);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == 'y') ADVANCE(786);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(787);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(754);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(771);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 458:
      if (lookahead == 'j') ADVANCE(277);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(833);
      END_STATE();
    case 461:
      if (lookahead == 'k') ADVANCE(834);
      END_STATE();
    case 462:
      if (lookahead == 'k') ADVANCE(835);
      END_STATE();
    case 463:
      if (lookahead == 'k') ADVANCE(312);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(1032);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(1440);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(975);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(418);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(729);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(1064);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(1432);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(896);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(1024);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(1026);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(1028);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(895);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(654);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == 'x') ADVANCE(753);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(844);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(845);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(655);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(1454);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1434);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(996);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(989);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(1070);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(953);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(1061);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(1068);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(620);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(821);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(827);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(1450);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(973);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(947);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(951);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(904);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(790);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(756);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(737);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(801);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(810);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(1459);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(1462);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(1451);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(1063);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(1446);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(1040);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(1458);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(1030);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(932);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(744);
      END_STATE();
    case 843:
      if (lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 844:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 845:
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(703);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 848:
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 849:
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 850:
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 851:
      if (lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 852:
      if (lookahead == 'v') ADVANCE(353);
      END_STATE();
    case 853:
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 854:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 855:
      if (lookahead == 'w') ADVANCE(593);
      END_STATE();
    case 856:
      if (lookahead == 'w') ADVANCE(551);
      END_STATE();
    case 857:
      if (lookahead == 'x') ADVANCE(1067);
      END_STATE();
    case 858:
      if (lookahead == 'x') ADVANCE(751);
      END_STATE();
    case 859:
      if (lookahead == 'x') ADVANCE(770);
      END_STATE();
    case 860:
      if (lookahead == 'y') ADVANCE(1074);
      END_STATE();
    case 861:
      if (lookahead == 'y') ADVANCE(1042);
      END_STATE();
    case 862:
      if (lookahead == 'y') ADVANCE(1046);
      END_STATE();
    case 863:
      if (lookahead == 'y') ADVANCE(1447);
      END_STATE();
    case 864:
      if (lookahead == 'y') ADVANCE(927);
      END_STATE();
    case 865:
      if (lookahead == 'y') ADVANCE(1016);
      END_STATE();
    case 866:
      if (lookahead == 'y') ADVANCE(893);
      END_STATE();
    case 867:
      if (lookahead == 'y') ADVANCE(1431);
      END_STATE();
    case 868:
      if (lookahead == 'y') ADVANCE(969);
      END_STATE();
    case 869:
      if (lookahead == 'y') ADVANCE(1073);
      END_STATE();
    case 870:
      if (lookahead == 'y') ADVANCE(527);
      END_STATE();
    case 871:
      if (lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 872:
      if (lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 873:
      if (lookahead == 'y') ADVANCE(653);
      END_STATE();
    case 874:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 875:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 876:
      if (lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 877:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 878:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1423);
      END_STATE();
    case 879:
      if (eof) ADVANCE(880);
      ADVANCE_MAP(
        '(', 1052,
        ')', 1053,
        '*', 1082,
        '+', 1080,
        ',', 892,
        '-', 1081,
        '.', 938,
        '/', 1083,
        ':', 961,
        ';', 900,
        '<', 21,
        '=', 899,
        'A', 185,
        'B', 398,
        'C', 169,
        'D', 105,
        'E', 68,
        'F', 401,
        'G', 281,
        'I', 539,
        'J', 719,
        'L', 95,
        'M', 271,
        'N', 239,
        'O', 85,
        'P', 332,
        'Q', 841,
        'R', 241,
        'S', 270,
        'T', 160,
        'U', 650,
        'V', 113,
        'W', 55,
        '[', 967,
        ']', 968,
        'a', 675,
        'b', 278,
        'c', 602,
        'f', 447,
        'k', 300,
        'l', 597,
        'm', 106,
        'o', 367,
        'p', 677,
        's', 832,
        't', 161,
        'v', 115,
        'w', 396,
        '{', 883,
        '}', 884,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_codeunit);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_Install);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_Upgrade);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_FlowField);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_FlowFilter);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_Normal);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_Temporary);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_External);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_System);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_System);
      if (lookahead == 'M') ADVANCE(326);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_TableType);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_TableType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_CustomerContent);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_EndUserIdentifiableInformation);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_AccountData);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_EndUserPseudonymousIdentifiers);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_OrganizationIdentifiableInformation);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_SystemMetadata);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_ToBeClassified);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_trigger);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_trigger);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_OnRun);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_Permissions);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_Permissions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'F', 1054,
        'n', 86,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'a', 748,
        'e', 187,
        'i', 917,
        'o', 779,
        'r', 922,
        'u', 671,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'm', 925,
        'x', 925,
      );
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'a', 857,
        'i', 924,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'a', 479,
        'c', 818,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'e', 189,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'e', 651,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'e', 217,
        'o', 218,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'f', 1452,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'i', 923,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'l', 473,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'n', 1066,
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_permission_type);
      ADVANCE_MAP(
        'D', 925,
        'I', 925,
        'M', 925,
        'R', 925,
        'X', 925,
        'd', 925,
        'i', 925,
        'm', 925,
        'r', 925,
        'x', 925,
      );
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_OnInsert);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_OnModify);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_OnDelete);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_OnRename);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_OnValidate);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_OnAfterGetRecord);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_OnAfterInsertEvent);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_OnAfterModifyEvent);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_OnAfterDeleteEvent);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_OnBeforeInsertEvent);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_OnBeforeModifyEvent);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_OnBeforeDeleteEvent);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_TableNo);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_Subtype);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_SingleInstance);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_DrillDownPageId);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_DrillDownPageId);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_LookupPageId);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_LookupPageId);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_TableRelation);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_FieldClass);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_CalcFormula);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_BlankZero);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_Editable);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_OptionMembers);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_OptionCaption);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_DataClassification);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_DataClassification);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_Caption);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_Caption);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_tabledata);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_DecimalPlaces);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1443);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1443);
      if (lookahead == '=') ADVANCE(1442);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_BigInteger);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_BigInteger);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_Decimal);
      if (lookahead == 'P') ADVANCE(487);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_Decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_Byte);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_Byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'F') ADVANCE(1318);
      if (lookahead == 'T') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_Time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_DateTime);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_DateTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_Duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_DateFormula);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_DateFormula);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_Option);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_Option);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(297);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_Option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_Guid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_RecordId);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_RecordId);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_Variant);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_Variant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_Dialog);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_Dialog);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_Action);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_Action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_Blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_FilterPageBuilder);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_FilterPageBuilder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_JsonToken);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_JsonToken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_JsonValue);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_JsonValue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_JsonArray);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_JsonArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_JsonObject);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_JsonObject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_Media);
      if (lookahead == 'S') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Media);
      if (lookahead == 'S') ADVANCE(322);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_MediaSet);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_MediaSet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_OStream);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_OStream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_InStream);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_InStream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_OutStream);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_OutStream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_SecretText);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_SecretText);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_Label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_Code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_Record);
      if (lookahead == 'I') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_Record);
      if (lookahead == 'I') ADVANCE(209);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_Codeunit);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_Codeunit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_Query);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_DotNet);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_DotNet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_fields);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_fields);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_field);
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_CONST);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_FIELD);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_average);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_OnLookup);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_OnAssistEdit);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_OnDrillDown);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_keys);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_keys);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_procedure_modifier);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_procedure_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(1350);
      if (lookahead == 'O') ADVANCE(1139);
      if (lookahead == 'T') ADVANCE(1304);
      if (lookahead == 'V') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1389);
      if (lookahead == 'u') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1393);
      if (lookahead == 't') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1261);
      if (lookahead == 'c') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1387);
      if (lookahead == 'r') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(1369);
      if (lookahead == 'u') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1388);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == 'u') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead == 'i') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'o') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'o') ADVANCE(1307);
      if (lookahead == 'y') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'o') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1367);
      if (lookahead == 'n') ADVANCE(1154);
      if (lookahead == 'x') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1367);
      if (lookahead == 'n') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1367);
      if (lookahead == 'x') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1154);
      if (lookahead == 'x') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '.') ADVANCE(1421);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1421);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token2);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_Clustered);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_temporary);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_Enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_until);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_Get);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_FindSet);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_Insert);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_Modify);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_Delete);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_SetRange);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_SetFilter);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_Reset);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_FindFirst);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_FindLast);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1419);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 879},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 879},
  [5] = {.lex_state = 879},
  [6] = {.lex_state = 879},
  [7] = {.lex_state = 879},
  [8] = {.lex_state = 879},
  [9] = {.lex_state = 879},
  [10] = {.lex_state = 879},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 879},
  [46] = {.lex_state = 879},
  [47] = {.lex_state = 879},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 879},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 30},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 30},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 879},
  [216] = {.lex_state = 879},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 879},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 879},
  [259] = {.lex_state = 879},
  [260] = {.lex_state = 879},
  [261] = {.lex_state = 879},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 879},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 879},
  [268] = {.lex_state = 879},
  [269] = {.lex_state = 879},
  [270] = {.lex_state = 879},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 879},
  [273] = {.lex_state = 879},
  [274] = {.lex_state = 879},
  [275] = {.lex_state = 879},
  [276] = {.lex_state = 879},
  [277] = {.lex_state = 879},
  [278] = {.lex_state = 879},
  [279] = {.lex_state = 879},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 879},
  [282] = {.lex_state = 879},
  [283] = {.lex_state = 879},
  [284] = {.lex_state = 879},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 879},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 879},
  [296] = {.lex_state = 879},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 6},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 879},
  [339] = {.lex_state = 879},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 879},
  [343] = {.lex_state = 879},
  [344] = {.lex_state = 879},
  [345] = {.lex_state = 879},
  [346] = {.lex_state = 879},
  [347] = {.lex_state = 879},
  [348] = {.lex_state = 879},
  [349] = {.lex_state = 879},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 879},
  [353] = {.lex_state = 879},
  [354] = {.lex_state = 879},
  [355] = {.lex_state = 879},
  [356] = {.lex_state = 5},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 16},
  [359] = {.lex_state = 879},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 5},
  [362] = {.lex_state = 5},
  [363] = {.lex_state = 879},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 879},
  [367] = {.lex_state = 879},
  [368] = {.lex_state = 879},
  [369] = {.lex_state = 879},
  [370] = {.lex_state = 879},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 879},
  [373] = {.lex_state = 879},
  [374] = {.lex_state = 879},
  [375] = {.lex_state = 879},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 879},
  [379] = {.lex_state = 879},
  [380] = {.lex_state = 879},
  [381] = {.lex_state = 879},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 879},
  [385] = {.lex_state = 879},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 5},
  [388] = {.lex_state = 879},
  [389] = {.lex_state = 5},
  [390] = {.lex_state = 5},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 879},
  [393] = {.lex_state = 879},
  [394] = {.lex_state = 879},
  [395] = {.lex_state = 879},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 5},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 879},
  [400] = {.lex_state = 879},
  [401] = {.lex_state = 879},
  [402] = {.lex_state = 879},
  [403] = {.lex_state = 879},
  [404] = {.lex_state = 879},
  [405] = {.lex_state = 879},
  [406] = {.lex_state = 5},
  [407] = {.lex_state = 6},
  [408] = {.lex_state = 879},
  [409] = {.lex_state = 5},
  [410] = {.lex_state = 6},
  [411] = {.lex_state = 7},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 2},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 2},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 2},
  [428] = {.lex_state = 14},
  [429] = {.lex_state = 16},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 16},
  [434] = {.lex_state = 2},
  [435] = {.lex_state = 2},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 2},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 2},
  [440] = {.lex_state = 2},
  [441] = {.lex_state = 2},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 2},
  [444] = {.lex_state = 2},
  [445] = {.lex_state = 2},
  [446] = {.lex_state = 2},
  [447] = {.lex_state = 2},
  [448] = {.lex_state = 2},
  [449] = {.lex_state = 2},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 879},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 2},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 879},
  [458] = {.lex_state = 7},
  [459] = {.lex_state = 7},
  [460] = {.lex_state = 7},
  [461] = {.lex_state = 7},
  [462] = {.lex_state = 7},
  [463] = {.lex_state = 14},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 2},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 7},
  [469] = {.lex_state = 2},
  [470] = {.lex_state = 2},
  [471] = {.lex_state = 2},
  [472] = {.lex_state = 2},
  [473] = {.lex_state = 7},
  [474] = {.lex_state = 7},
  [475] = {.lex_state = 7},
  [476] = {.lex_state = 7},
  [477] = {.lex_state = 7},
  [478] = {.lex_state = 7},
  [479] = {.lex_state = 7},
  [480] = {.lex_state = 7},
  [481] = {.lex_state = 7},
  [482] = {.lex_state = 7},
  [483] = {.lex_state = 7},
  [484] = {.lex_state = 7},
  [485] = {.lex_state = 7},
  [486] = {.lex_state = 7},
  [487] = {.lex_state = 7},
  [488] = {.lex_state = 7},
  [489] = {.lex_state = 7},
  [490] = {.lex_state = 7},
  [491] = {.lex_state = 7},
  [492] = {.lex_state = 7},
  [493] = {.lex_state = 7},
  [494] = {.lex_state = 7},
  [495] = {.lex_state = 7},
  [496] = {.lex_state = 7},
  [497] = {.lex_state = 7},
  [498] = {.lex_state = 7},
  [499] = {.lex_state = 7},
  [500] = {.lex_state = 7},
  [501] = {.lex_state = 7},
  [502] = {.lex_state = 7},
  [503] = {.lex_state = 7},
  [504] = {.lex_state = 7},
  [505] = {.lex_state = 7},
  [506] = {.lex_state = 7},
  [507] = {.lex_state = 7},
  [508] = {.lex_state = 7},
  [509] = {.lex_state = 7},
  [510] = {.lex_state = 7},
  [511] = {.lex_state = 7},
  [512] = {.lex_state = 7},
  [513] = {.lex_state = 879},
  [514] = {.lex_state = 7},
  [515] = {.lex_state = 7},
  [516] = {.lex_state = 7},
  [517] = {.lex_state = 7},
  [518] = {.lex_state = 7},
  [519] = {.lex_state = 7},
  [520] = {.lex_state = 7},
  [521] = {.lex_state = 7},
  [522] = {.lex_state = 7},
  [523] = {.lex_state = 7},
  [524] = {.lex_state = 7},
  [525] = {.lex_state = 879},
  [526] = {.lex_state = 7},
  [527] = {.lex_state = 7},
  [528] = {.lex_state = 2},
  [529] = {.lex_state = 879},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 879},
  [532] = {.lex_state = 16},
  [533] = {.lex_state = 879},
  [534] = {.lex_state = 2},
  [535] = {.lex_state = 14},
  [536] = {.lex_state = 2},
  [537] = {.lex_state = 2},
  [538] = {.lex_state = 2},
  [539] = {.lex_state = 2},
  [540] = {.lex_state = 2},
  [541] = {.lex_state = 2},
  [542] = {.lex_state = 16},
  [543] = {.lex_state = 14},
  [544] = {.lex_state = 14},
  [545] = {.lex_state = 2},
  [546] = {.lex_state = 2},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 879},
  [549] = {.lex_state = 879},
  [550] = {.lex_state = 879},
  [551] = {.lex_state = 16},
  [552] = {.lex_state = 16},
  [553] = {.lex_state = 879},
  [554] = {.lex_state = 16},
  [555] = {.lex_state = 16},
  [556] = {.lex_state = 16},
  [557] = {.lex_state = 16},
  [558] = {.lex_state = 16},
  [559] = {.lex_state = 879},
  [560] = {.lex_state = 16},
  [561] = {.lex_state = 879},
  [562] = {.lex_state = 879},
  [563] = {.lex_state = 16},
  [564] = {.lex_state = 16},
  [565] = {.lex_state = 8},
  [566] = {.lex_state = 879},
  [567] = {.lex_state = 8},
  [568] = {.lex_state = 8},
  [569] = {.lex_state = 879},
  [570] = {.lex_state = 879},
  [571] = {.lex_state = 879},
  [572] = {.lex_state = 879},
  [573] = {.lex_state = 879},
  [574] = {.lex_state = 879},
  [575] = {.lex_state = 879},
  [576] = {.lex_state = 879},
  [577] = {.lex_state = 8},
  [578] = {.lex_state = 879},
  [579] = {.lex_state = 879},
  [580] = {.lex_state = 8},
  [581] = {.lex_state = 8},
  [582] = {.lex_state = 879},
  [583] = {.lex_state = 879},
  [584] = {.lex_state = 879},
  [585] = {.lex_state = 879},
  [586] = {.lex_state = 879},
  [587] = {.lex_state = 879},
  [588] = {.lex_state = 879},
  [589] = {.lex_state = 879},
  [590] = {.lex_state = 879},
  [591] = {.lex_state = 879},
  [592] = {.lex_state = 879},
  [593] = {.lex_state = 879},
  [594] = {.lex_state = 879},
  [595] = {.lex_state = 879},
  [596] = {.lex_state = 879},
  [597] = {.lex_state = 9},
  [598] = {.lex_state = 879},
  [599] = {.lex_state = 879},
  [600] = {.lex_state = 879},
  [601] = {.lex_state = 9},
  [602] = {.lex_state = 879},
  [603] = {.lex_state = 879},
  [604] = {.lex_state = 879},
  [605] = {.lex_state = 879},
  [606] = {.lex_state = 879},
  [607] = {.lex_state = 8},
  [608] = {.lex_state = 20},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 12},
  [612] = {.lex_state = 20},
  [613] = {.lex_state = 9},
  [614] = {.lex_state = 9},
  [615] = {.lex_state = 20},
  [616] = {.lex_state = 12},
  [617] = {.lex_state = 20},
  [618] = {.lex_state = 9},
  [619] = {.lex_state = 12},
  [620] = {.lex_state = 93},
  [621] = {.lex_state = 20},
  [622] = {.lex_state = 93},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 20},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 20},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 20},
  [629] = {.lex_state = 879},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 879},
  [633] = {.lex_state = 20},
  [634] = {.lex_state = 20},
  [635] = {.lex_state = 20},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 879},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 879},
  [643] = {.lex_state = 93},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 93},
  [647] = {.lex_state = 3},
  [648] = {.lex_state = 3},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 11},
  [654] = {.lex_state = 11},
  [655] = {.lex_state = 11},
  [656] = {.lex_state = 17},
  [657] = {.lex_state = 17},
  [658] = {.lex_state = 17},
  [659] = {.lex_state = 17},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 11},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 11},
  [665] = {.lex_state = 11},
  [666] = {.lex_state = 1},
  [667] = {.lex_state = 11},
  [668] = {.lex_state = 11},
  [669] = {.lex_state = 879},
  [670] = {.lex_state = 11},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 11},
  [673] = {.lex_state = 11},
  [674] = {.lex_state = 11},
  [675] = {.lex_state = 16},
  [676] = {.lex_state = 1},
  [677] = {.lex_state = 1},
  [678] = {.lex_state = 1},
  [679] = {.lex_state = 11},
  [680] = {.lex_state = 11},
  [681] = {.lex_state = 1},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 14},
  [691] = {.lex_state = 16},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 27},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 27},
  [698] = {.lex_state = 879},
  [699] = {.lex_state = 27},
  [700] = {.lex_state = 174},
  [701] = {.lex_state = 174},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 11},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 11},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 11},
  [722] = {.lex_state = 11},
  [723] = {.lex_state = 27},
  [724] = {.lex_state = 11},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 11},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 11},
  [729] = {.lex_state = 27},
  [730] = {.lex_state = 27},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 27},
  [744] = {.lex_state = 11},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 17},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 11},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 11},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 1},
  [756] = {.lex_state = 11},
  [757] = {.lex_state = 11},
  [758] = {.lex_state = 11},
  [759] = {.lex_state = 1},
  [760] = {.lex_state = 1},
  [761] = {.lex_state = 11},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 11},
  [764] = {.lex_state = 11},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 879},
  [767] = {.lex_state = 11},
  [768] = {.lex_state = 11},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 879},
  [772] = {.lex_state = 879},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 879},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 879},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 27},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 14},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 11},
  [786] = {.lex_state = 11},
  [787] = {.lex_state = 11},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 11},
  [791] = {.lex_state = 11},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 11},
  [800] = {.lex_state = 11},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 11},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 11},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 11},
  [821] = {.lex_state = 11},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 11},
  [826] = {.lex_state = 27},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 11},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 11},
  [831] = {.lex_state = 11},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 11},
  [834] = {.lex_state = 11},
  [835] = {.lex_state = 11},
  [836] = {.lex_state = 11},
  [837] = {.lex_state = 11},
  [838] = {.lex_state = 11},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 11},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 11},
  [844] = {.lex_state = 11},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 11},
  [847] = {.lex_state = 11},
  [848] = {.lex_state = 11},
  [849] = {.lex_state = 11},
  [850] = {.lex_state = 11},
  [851] = {.lex_state = 11},
  [852] = {.lex_state = 11},
  [853] = {.lex_state = 11},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 11},
  [857] = {.lex_state = 11},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 11},
  [860] = {.lex_state = 11},
  [861] = {.lex_state = 11},
  [862] = {.lex_state = 11},
  [863] = {.lex_state = 11},
  [864] = {.lex_state = 11},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 11},
  [867] = {.lex_state = 11},
  [868] = {.lex_state = 11},
  [869] = {.lex_state = 11},
  [870] = {.lex_state = 11},
  [871] = {.lex_state = 16},
  [872] = {.lex_state = 11},
  [873] = {.lex_state = 11},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 11},
  [877] = {.lex_state = 11},
  [878] = {.lex_state = 11},
  [879] = {.lex_state = 11},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 11},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 27},
  [889] = {.lex_state = 11},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 11},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 16},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 27},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 27},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 27},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 27},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 174},
  [994] = {.lex_state = 11},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 174},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 11},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 14},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 27},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 14},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 11},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 27},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 15},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 15},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 11},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 15},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 11},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 11},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 15},
  [1073] = {.lex_state = 14},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 15},
  [1085] = {.lex_state = 11},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 15},
  [1128] = {.lex_state = 11},
  [1129] = {.lex_state = 14},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 14},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 11},
  [1135] = {.lex_state = 11},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 14},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 14},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 11},
  [1196] = {.lex_state = 15},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 15},
  [1199] = {.lex_state = 15},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 879},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 8},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 11},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 8},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 14},
  [1298] = {.lex_state = 15},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 8},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 8},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 0},
  [1355] = {.lex_state = 0},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 0},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 14},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 15},
  [1362] = {.lex_state = 0},
  [1363] = {.lex_state = 15},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 15},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 14},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 0},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 0},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 0},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 15},
  [1384] = {.lex_state = 0},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 0},
  [1388] = {.lex_state = 14},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 0},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 0},
  [1395] = {.lex_state = 0},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 11},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 0},
  [1400] = {.lex_state = 0},
  [1401] = {.lex_state = 0},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_codeunit] = ACTIONS(1),
    [anon_sym_Install] = ACTIONS(1),
    [anon_sym_Upgrade] = ACTIONS(1),
    [anon_sym_Test] = ACTIONS(1),
    [anon_sym_FlowField] = ACTIONS(1),
    [anon_sym_FlowFilter] = ACTIONS(1),
    [anon_sym_Normal] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Temporary] = ACTIONS(1),
    [anon_sym_External] = ACTIONS(1),
    [anon_sym_System] = ACTIONS(1),
    [anon_sym_TableType] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_CustomerContent] = ACTIONS(1),
    [anon_sym_EndUserIdentifiableInformation] = ACTIONS(1),
    [anon_sym_AccountData] = ACTIONS(1),
    [anon_sym_EndUserPseudonymousIdentifiers] = ACTIONS(1),
    [anon_sym_OrganizationIdentifiableInformation] = ACTIONS(1),
    [anon_sym_SystemMetadata] = ACTIONS(1),
    [anon_sym_ToBeClassified] = ACTIONS(1),
    [anon_sym_trigger] = ACTIONS(1),
    [anon_sym_OnRun] = ACTIONS(1),
    [anon_sym_Permissions] = ACTIONS(1),
    [sym_permission_type] = ACTIONS(1),
    [anon_sym_OnInsert] = ACTIONS(1),
    [anon_sym_OnModify] = ACTIONS(1),
    [anon_sym_OnDelete] = ACTIONS(1),
    [anon_sym_OnRename] = ACTIONS(1),
    [anon_sym_OnValidate] = ACTIONS(1),
    [anon_sym_OnAfterGetRecord] = ACTIONS(1),
    [anon_sym_OnAfterInsertEvent] = ACTIONS(1),
    [anon_sym_OnAfterModifyEvent] = ACTIONS(1),
    [anon_sym_OnAfterDeleteEvent] = ACTIONS(1),
    [anon_sym_OnBeforeInsertEvent] = ACTIONS(1),
    [anon_sym_OnBeforeModifyEvent] = ACTIONS(1),
    [anon_sym_OnBeforeDeleteEvent] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_TableNo] = ACTIONS(1),
    [anon_sym_Subtype] = ACTIONS(1),
    [anon_sym_SingleInstance] = ACTIONS(1),
    [anon_sym_DrillDownPageId] = ACTIONS(1),
    [anon_sym_LookupPageId] = ACTIONS(1),
    [anon_sym_TableRelation] = ACTIONS(1),
    [anon_sym_FieldClass] = ACTIONS(1),
    [anon_sym_CalcFormula] = ACTIONS(1),
    [anon_sym_BlankZero] = ACTIONS(1),
    [anon_sym_Editable] = ACTIONS(1),
    [anon_sym_OptionMembers] = ACTIONS(1),
    [anon_sym_OptionCaption] = ACTIONS(1),
    [anon_sym_DataClassification] = ACTIONS(1),
    [anon_sym_Caption] = ACTIONS(1),
    [anon_sym_tabledata] = ACTIONS(1),
    [anon_sym_DecimalPlaces] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Dictionary] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_BigInteger] = ACTIONS(1),
    [anon_sym_Decimal] = ACTIONS(1),
    [anon_sym_Byte] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_Time] = ACTIONS(1),
    [anon_sym_DateTime] = ACTIONS(1),
    [anon_sym_Duration] = ACTIONS(1),
    [anon_sym_DateFormula] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Option] = ACTIONS(1),
    [anon_sym_Guid] = ACTIONS(1),
    [anon_sym_RecordId] = ACTIONS(1),
    [anon_sym_Variant] = ACTIONS(1),
    [anon_sym_Dialog] = ACTIONS(1),
    [anon_sym_Action] = ACTIONS(1),
    [anon_sym_Blob] = ACTIONS(1),
    [anon_sym_FilterPageBuilder] = ACTIONS(1),
    [anon_sym_JsonToken] = ACTIONS(1),
    [anon_sym_JsonValue] = ACTIONS(1),
    [anon_sym_JsonArray] = ACTIONS(1),
    [anon_sym_JsonObject] = ACTIONS(1),
    [anon_sym_Media] = ACTIONS(1),
    [anon_sym_MediaSet] = ACTIONS(1),
    [anon_sym_OStream] = ACTIONS(1),
    [anon_sym_InStream] = ACTIONS(1),
    [anon_sym_OutStream] = ACTIONS(1),
    [anon_sym_SecretText] = ACTIONS(1),
    [anon_sym_Label] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Record] = ACTIONS(1),
    [anon_sym_Codeunit] = ACTIONS(1),
    [anon_sym_Query] = ACTIONS(1),
    [anon_sym_DotNet] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_fields] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_CONST] = ACTIONS(1),
    [anon_sym_FIELD] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_lookup] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_average] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_OnLookup] = ACTIONS(1),
    [anon_sym_OnAssistEdit] = ACTIONS(1),
    [anon_sym_OnDrillDown] = ACTIONS(1),
    [anon_sym_keys] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [sym_procedure_modifier] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__quoted_identifier_token2] = ACTIONS(1),
    [aux_sym__quoted_identifier_token3] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_Clustered] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_temporary] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_Get] = ACTIONS(1),
    [anon_sym_FindSet] = ACTIONS(1),
    [anon_sym_Insert] = ACTIONS(1),
    [anon_sym_Modify] = ACTIONS(1),
    [anon_sym_Delete] = ACTIONS(1),
    [anon_sym_SetRange] = ACTIONS(1),
    [anon_sym_SetFilter] = ACTIONS(1),
    [anon_sym_Reset] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_FindFirst] = ACTIONS(1),
    [anon_sym_FindLast] = ACTIONS(1),
    [anon_sym_Next] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1034),
    [sym__object] = STATE(642),
    [sym_table_declaration] = STATE(642),
    [sym_codeunit_declaration] = STATE(642),
    [aux_sym_source_file_repeat1] = STATE(642),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_table] = ACTIONS(5),
    [anon_sym_codeunit] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      anon_sym_List,
    ACTIONS(11), 1,
      anon_sym_Dictionary,
    ACTIONS(15), 1,
      anon_sym_Text,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(19), 1,
      anon_sym_Codeunit,
    ACTIONS(21), 1,
      anon_sym_Query,
    ACTIONS(23), 1,
      anon_sym_DotNet,
    ACTIONS(25), 1,
      anon_sym_array,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(907), 1,
      sym_return_type,
    STATE(894), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(13), 30,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_Media,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [74] = 12,
    ACTIONS(9), 1,
      anon_sym_List,
    ACTIONS(11), 1,
      anon_sym_Dictionary,
    ACTIONS(15), 1,
      anon_sym_Text,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(19), 1,
      anon_sym_Codeunit,
    ACTIONS(21), 1,
      anon_sym_Query,
    ACTIONS(23), 1,
      anon_sym_DotNet,
    ACTIONS(25), 1,
      anon_sym_array,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(910), 1,
      sym_return_type,
    STATE(894), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(13), 30,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_Media,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [148] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(1162), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [221] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(1047), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [294] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(652), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [367] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(961), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [440] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(1163), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [513] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(978), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [586] = 12,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(29), 1,
      anon_sym_List,
    ACTIONS(31), 1,
      anon_sym_Dictionary,
    ACTIONS(35), 1,
      anon_sym_Text,
    ACTIONS(37), 1,
      anon_sym_Codeunit,
    ACTIONS(39), 1,
      anon_sym_Query,
    ACTIONS(41), 1,
      anon_sym_DotNet,
    ACTIONS(43), 1,
      anon_sym_array,
    STATE(883), 1,
      sym_type_specification,
    ACTIONS(13), 2,
      anon_sym_Date,
      anon_sym_Media,
    STATE(651), 9,
      sym_list_type,
      sym_dictionary_type,
      sym_basic_type,
      sym_text_type,
      sym_record_type,
      sym_codeunit_type,
      sym_query_type,
      sym_dotnet_type,
      sym_array_type,
    ACTIONS(33), 28,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [659] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_begin,
    ACTIONS(57), 1,
      anon_sym_repeat,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_case,
    ACTIONS(63), 1,
      anon_sym_exit,
    STATE(111), 1,
      sym_method_call,
    STATE(223), 1,
      sym_code_block,
    STATE(224), 1,
      sym__statement,
    STATE(390), 1,
      sym_get_method,
    STATE(391), 1,
      sym_find_set_method,
    STATE(603), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1301), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(592), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(389), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [745] = 20,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_end,
    ACTIONS(82), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_if,
    ACTIONS(88), 1,
      anon_sym_case,
    ACTIONS(91), 1,
      anon_sym_exit,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(74), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [829] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_begin,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(414), 1,
      sym_code_block,
    STATE(415), 1,
      sym__statement,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [915] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_begin,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(416), 1,
      sym_code_block,
    STATE(417), 1,
      sym__statement,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1001] = 20,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_until,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_repeat,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(115), 1,
      anon_sym_case,
    ACTIONS(118), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(74), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1085] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_begin,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(488), 1,
      sym_code_block,
    STATE(489), 1,
      sym__statement,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1171] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_begin,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(490), 1,
      sym_code_block,
    STATE(491), 1,
      sym__statement,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1257] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_begin,
    ACTIONS(57), 1,
      anon_sym_repeat,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_case,
    ACTIONS(63), 1,
      anon_sym_exit,
    STATE(111), 1,
      sym_method_call,
    STATE(225), 1,
      sym_code_block,
    STATE(226), 1,
      sym__statement,
    STATE(390), 1,
      sym_get_method,
    STATE(391), 1,
      sym_find_set_method,
    STATE(603), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1301), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(592), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(389), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1343] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_begin,
    ACTIONS(137), 1,
      anon_sym_repeat,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_exit,
    STATE(121), 1,
      sym_method_call,
    STATE(265), 1,
      sym_get_method,
    STATE(266), 1,
      sym_find_set_method,
    STATE(303), 1,
      sym_code_block,
    STATE(304), 1,
      sym__statement,
    STATE(606), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1330), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(604), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(264), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1429] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_begin,
    ACTIONS(137), 1,
      anon_sym_repeat,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_exit,
    STATE(121), 1,
      sym_method_call,
    STATE(265), 1,
      sym_get_method,
    STATE(266), 1,
      sym_find_set_method,
    STATE(305), 1,
      sym_code_block,
    STATE(306), 1,
      sym__statement,
    STATE(606), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1330), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(604), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(264), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1515] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(145), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1599] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1683] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_begin,
    ACTIONS(137), 1,
      anon_sym_repeat,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_exit,
    STATE(121), 1,
      sym_method_call,
    STATE(265), 1,
      sym_get_method,
    STATE(266), 1,
      sym_find_set_method,
    STATE(376), 1,
      sym_code_block,
    STATE(377), 1,
      sym__statement,
    STATE(606), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1330), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(604), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(264), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1769] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(149), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1853] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    ACTIONS(151), 1,
      anon_sym_until,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [1937] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_begin,
    ACTIONS(137), 1,
      anon_sym_repeat,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_exit,
    STATE(121), 1,
      sym_method_call,
    STATE(265), 1,
      sym_get_method,
    STATE(266), 1,
      sym_find_set_method,
    STATE(364), 1,
      sym_code_block,
    STATE(365), 1,
      sym__statement,
    STATE(606), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1330), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(604), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(264), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2023] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2107] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2191] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(157), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2275] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2359] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(161), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2443] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2527] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2611] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2695] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    ACTIONS(169), 1,
      anon_sym_until,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2779] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_begin,
    ACTIONS(57), 1,
      anon_sym_repeat,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_case,
    ACTIONS(63), 1,
      anon_sym_exit,
    STATE(111), 1,
      sym_method_call,
    STATE(361), 1,
      sym_code_block,
    STATE(362), 1,
      sym__statement,
    STATE(390), 1,
      sym_get_method,
    STATE(391), 1,
      sym_find_set_method,
    STATE(603), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1301), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(592), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(389), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2865] = 21,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_begin,
    ACTIONS(57), 1,
      anon_sym_repeat,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_case,
    ACTIONS(63), 1,
      anon_sym_exit,
    STATE(111), 1,
      sym_method_call,
    STATE(382), 1,
      sym_code_block,
    STATE(383), 1,
      sym__statement,
    STATE(390), 1,
      sym_get_method,
    STATE(391), 1,
      sym_find_set_method,
    STATE(603), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1301), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(592), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(389), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [2951] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    ACTIONS(171), 1,
      anon_sym_until,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3035] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    ACTIONS(173), 1,
      anon_sym_until,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3119] = 20,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_repeat,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      anon_sym_case,
    ACTIONS(104), 1,
      anon_sym_exit,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_method_call,
    STATE(412), 1,
      sym_find_set_method,
    STATE(545), 1,
      sym_get_method,
    STATE(600), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1231), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(602), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(536), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3203] = 19,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3284] = 19,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3365] = 19,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3446] = 19,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_repeat,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_exit,
    STATE(124), 1,
      sym_method_call,
    STATE(460), 1,
      sym_get_method,
    STATE(461), 1,
      sym_find_set_method,
    STATE(605), 1,
      sym__record_operation,
    STATE(607), 1,
      sym_member_access,
    STATE(1266), 1,
      sym__assignable_expression,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
      sym__statement,
      aux_sym_code_block_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(596), 3,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
    STATE(459), 17,
      sym_repeat_statement,
      sym_assignment_statement,
      sym_procedure_call,
      sym_insert_statement,
      sym_modify_statement,
      sym_delete_statement,
      sym_set_range_statement,
      sym_set_filter_statement,
      sym_reset_statement,
      sym_if_statement,
      sym_get_statement,
      sym_find_set_statement,
      sym_find_first_statement,
      sym_find_last_statement,
      sym_next_statement,
      sym_case_statement,
      sym_exit_statement,
  [3527] = 17,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_TableType,
    ACTIONS(181), 1,
      anon_sym_trigger,
    ACTIONS(183), 1,
      anon_sym_Permissions,
    ACTIONS(185), 1,
      anon_sym_DrillDownPageId,
    ACTIONS(187), 1,
      anon_sym_LookupPageId,
    ACTIONS(189), 1,
      anon_sym_DataClassification,
    ACTIONS(191), 1,
      anon_sym_Caption,
    ACTIONS(193), 1,
      anon_sym_var,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_fields,
    ACTIONS(199), 1,
      anon_sym_keys,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(46), 24,
      sym_table_type_property,
      sym__table_element,
      sym_permissions_property,
      sym_oninsert_trigger,
      sym_onmodify_trigger,
      sym_ondelete_trigger,
      sym_onrename_trigger,
      sym_onvalidate_trigger,
      sym_onaftergetrecord_trigger,
      sym_onafterinsertevent_trigger,
      sym_onaftermodifyevent_trigger,
      sym_onafterdeleteevent_trigger,
      sym_onbeforeinsertevent_trigger,
      sym_onbeforemodifyevent_trigger,
      sym_onbeforedeleteevent_trigger,
      sym_caption_property,
      sym_data_classification_property,
      sym_drilldown_pageid_property,
      sym_lookup_pageid_property,
      sym_var_section,
      sym_fields,
      sym_keys,
      sym_procedure,
      aux_sym_table_declaration_repeat1,
  [3603] = 17,
    ACTIONS(179), 1,
      anon_sym_TableType,
    ACTIONS(181), 1,
      anon_sym_trigger,
    ACTIONS(183), 1,
      anon_sym_Permissions,
    ACTIONS(185), 1,
      anon_sym_DrillDownPageId,
    ACTIONS(187), 1,
      anon_sym_LookupPageId,
    ACTIONS(189), 1,
      anon_sym_DataClassification,
    ACTIONS(191), 1,
      anon_sym_Caption,
    ACTIONS(193), 1,
      anon_sym_var,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_fields,
    ACTIONS(199), 1,
      anon_sym_keys,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(47), 24,
      sym_table_type_property,
      sym__table_element,
      sym_permissions_property,
      sym_oninsert_trigger,
      sym_onmodify_trigger,
      sym_ondelete_trigger,
      sym_onrename_trigger,
      sym_onvalidate_trigger,
      sym_onaftergetrecord_trigger,
      sym_onafterinsertevent_trigger,
      sym_onaftermodifyevent_trigger,
      sym_onafterdeleteevent_trigger,
      sym_onbeforeinsertevent_trigger,
      sym_onbeforemodifyevent_trigger,
      sym_onbeforedeleteevent_trigger,
      sym_caption_property,
      sym_data_classification_property,
      sym_drilldown_pageid_property,
      sym_lookup_pageid_property,
      sym_var_section,
      sym_fields,
      sym_keys,
      sym_procedure,
      aux_sym_table_declaration_repeat1,
  [3679] = 17,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      anon_sym_TableType,
    ACTIONS(212), 1,
      anon_sym_trigger,
    ACTIONS(215), 1,
      anon_sym_Permissions,
    ACTIONS(218), 1,
      anon_sym_DrillDownPageId,
    ACTIONS(221), 1,
      anon_sym_LookupPageId,
    ACTIONS(224), 1,
      anon_sym_DataClassification,
    ACTIONS(227), 1,
      anon_sym_Caption,
    ACTIONS(230), 1,
      anon_sym_var,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_fields,
    ACTIONS(239), 1,
      anon_sym_keys,
    ACTIONS(242), 1,
      sym_procedure_modifier,
    ACTIONS(245), 1,
      anon_sym_procedure,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(47), 24,
      sym_table_type_property,
      sym__table_element,
      sym_permissions_property,
      sym_oninsert_trigger,
      sym_onmodify_trigger,
      sym_ondelete_trigger,
      sym_onrename_trigger,
      sym_onvalidate_trigger,
      sym_onaftergetrecord_trigger,
      sym_onafterinsertevent_trigger,
      sym_onaftermodifyevent_trigger,
      sym_onafterdeleteevent_trigger,
      sym_onbeforeinsertevent_trigger,
      sym_onbeforemodifyevent_trigger,
      sym_onbeforedeleteevent_trigger,
      sym_caption_property,
      sym_data_classification_property,
      sym_drilldown_pageid_property,
      sym_lookup_pageid_property,
      sym_var_section,
      sym_fields,
      sym_keys,
      sym_procedure,
      aux_sym_table_declaration_repeat1,
  [3755] = 7,
    ACTIONS(15), 1,
      anon_sym_Text,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(25), 1,
      anon_sym_array,
    ACTIONS(248), 1,
      anon_sym_Code,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(914), 5,
      sym_basic_type,
      sym_text_type,
      sym_code_type,
      sym_record_type,
      sym_array_type,
    ACTIONS(13), 30,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_Media,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [3810] = 7,
    ACTIONS(15), 1,
      anon_sym_Text,
    ACTIONS(17), 1,
      anon_sym_Record,
    ACTIONS(25), 1,
      anon_sym_array,
    ACTIONS(248), 1,
      anon_sym_Code,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(966), 5,
      sym_basic_type,
      sym_text_type,
      sym_code_type,
      sym_record_type,
      sym_array_type,
    ACTIONS(13), 30,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Decimal,
      anon_sym_Byte,
      anon_sym_Char,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_DateFormula,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Variant,
      anon_sym_Dialog,
      anon_sym_Action,
      anon_sym_Blob,
      anon_sym_FilterPageBuilder,
      anon_sym_JsonToken,
      anon_sym_JsonValue,
      anon_sym_JsonArray,
      anon_sym_JsonObject,
      anon_sym_Media,
      anon_sym_MediaSet,
      anon_sym_OStream,
      anon_sym_InStream,
      anon_sym_OutStream,
      anon_sym_SecretText,
      anon_sym_Label,
  [3865] = 24,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      anon_sym_trigger,
    ACTIONS(258), 1,
      anon_sym_Permissions,
    ACTIONS(260), 1,
      anon_sym_TableNo,
    ACTIONS(262), 1,
      anon_sym_Subtype,
    ACTIONS(264), 1,
      anon_sym_SingleInstance,
    ACTIONS(268), 1,
      anon_sym_TableRelation,
    ACTIONS(270), 1,
      anon_sym_FieldClass,
    ACTIONS(272), 1,
      anon_sym_CalcFormula,
    ACTIONS(274), 1,
      anon_sym_BlankZero,
    ACTIONS(276), 1,
      anon_sym_Editable,
    ACTIONS(278), 1,
      anon_sym_OptionMembers,
    ACTIONS(280), 1,
      anon_sym_OptionCaption,
    ACTIONS(282), 1,
      anon_sym_DataClassification,
    ACTIONS(284), 1,
      anon_sym_var,
    STATE(341), 1,
      sym_property_list,
    STATE(893), 1,
      sym_attribute_list,
    ACTIONS(266), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(107), 2,
      sym_property,
      aux_sym_property_list_repeat1,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(340), 5,
      sym__codeunit_element,
      sym_onrun_trigger,
      sym_var_section,
      sym_procedure,
      aux_sym_codeunit_declaration_repeat1,
  [3945] = 2,
    ACTIONS(288), 1,
      anon_sym_COLON,
    ACTIONS(286), 24,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_Temporary,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_of,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_ELSE,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_temporary,
      anon_sym_begin,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [3975] = 2,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(290), 23,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      anon_sym_end,
  [4004] = 13,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_trigger,
    ACTIONS(299), 1,
      anon_sym_TableRelation,
    ACTIONS(302), 1,
      anon_sym_FieldClass,
    ACTIONS(305), 1,
      anon_sym_CalcFormula,
    ACTIONS(308), 1,
      anon_sym_BlankZero,
    ACTIONS(311), 1,
      anon_sym_Editable,
    ACTIONS(314), 1,
      anon_sym_OptionMembers,
    ACTIONS(317), 1,
      anon_sym_OptionCaption,
    ACTIONS(320), 1,
      anon_sym_DataClassification,
    ACTIONS(323), 1,
      anon_sym_Caption,
    ACTIONS(326), 1,
      anon_sym_DecimalPlaces,
    STATE(53), 12,
      sym_caption_property,
      sym_data_classification_property,
      sym_decimal_places_property,
      sym_table_relation_property,
      sym_field_class_property,
      sym_calc_formula_property,
      sym_blank_zero_property,
      sym_editable_property,
      sym_option_members_property,
      sym_option_caption_property,
      sym_field_trigger_declaration,
      aux_sym_field_declaration_repeat1,
  [4055] = 8,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON,
    STATE(200), 1,
      sym_comparison_operator,
    STATE(202), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(337), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4096] = 8,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON,
    STATE(200), 1,
      sym_comparison_operator,
    STATE(202), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(343), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4137] = 7,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    STATE(108), 1,
      sym_argument_list,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(345), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(354), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4176] = 4,
    STATE(200), 1,
      sym_comparison_operator,
    STATE(202), 1,
      sym_arithmetic_operator,
    ACTIONS(360), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4209] = 4,
    STATE(200), 1,
      sym_comparison_operator,
    STATE(202), 1,
      sym_arithmetic_operator,
    ACTIONS(360), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4242] = 8,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON,
    STATE(168), 1,
      sym_arithmetic_operator,
    STATE(171), 1,
      sym_comparison_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(337), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4283] = 8,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON,
    STATE(168), 1,
      sym_arithmetic_operator,
    STATE(171), 1,
      sym_comparison_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(343), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4324] = 2,
    ACTIONS(368), 9,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(366), 15,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4353] = 4,
    STATE(168), 1,
      sym_arithmetic_operator,
    STATE(171), 1,
      sym_comparison_operator,
    ACTIONS(360), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4386] = 4,
    STATE(168), 1,
      sym_arithmetic_operator,
    STATE(171), 1,
      sym_comparison_operator,
    ACTIONS(360), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4419] = 2,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(370), 23,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      anon_sym_end,
  [4448] = 2,
    ACTIONS(376), 9,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(374), 15,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4477] = 2,
    ACTIONS(380), 9,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 15,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4506] = 2,
    ACTIONS(380), 9,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 15,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4535] = 7,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(345), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(354), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [4574] = 2,
    ACTIONS(389), 9,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(387), 15,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4603] = 13,
    ACTIONS(189), 1,
      anon_sym_DataClassification,
    ACTIONS(191), 1,
      anon_sym_Caption,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_trigger,
    ACTIONS(395), 1,
      anon_sym_TableRelation,
    ACTIONS(397), 1,
      anon_sym_FieldClass,
    ACTIONS(399), 1,
      anon_sym_CalcFormula,
    ACTIONS(401), 1,
      anon_sym_BlankZero,
    ACTIONS(403), 1,
      anon_sym_Editable,
    ACTIONS(405), 1,
      anon_sym_OptionMembers,
    ACTIONS(407), 1,
      anon_sym_OptionCaption,
    ACTIONS(409), 1,
      anon_sym_DecimalPlaces,
    STATE(71), 12,
      sym_caption_property,
      sym_data_classification_property,
      sym_decimal_places_property,
      sym_table_relation_property,
      sym_field_class_property,
      sym_calc_formula_property,
      sym_blank_zero_property,
      sym_editable_property,
      sym_option_members_property,
      sym_option_caption_property,
      sym_field_trigger_declaration,
      aux_sym_field_declaration_repeat1,
  [4654] = 13,
    ACTIONS(189), 1,
      anon_sym_DataClassification,
    ACTIONS(191), 1,
      anon_sym_Caption,
    ACTIONS(393), 1,
      anon_sym_trigger,
    ACTIONS(395), 1,
      anon_sym_TableRelation,
    ACTIONS(397), 1,
      anon_sym_FieldClass,
    ACTIONS(399), 1,
      anon_sym_CalcFormula,
    ACTIONS(401), 1,
      anon_sym_BlankZero,
    ACTIONS(403), 1,
      anon_sym_Editable,
    ACTIONS(405), 1,
      anon_sym_OptionMembers,
    ACTIONS(407), 1,
      anon_sym_OptionCaption,
    ACTIONS(409), 1,
      anon_sym_DecimalPlaces,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(53), 12,
      sym_caption_property,
      sym_data_classification_property,
      sym_decimal_places_property,
      sym_table_relation_property,
      sym_field_class_property,
      sym_calc_formula_property,
      sym_blank_zero_property,
      sym_editable_property,
      sym_option_members_property,
      sym_option_caption_property,
      sym_field_trigger_declaration,
      aux_sym_field_declaration_repeat1,
  [4705] = 4,
    STATE(169), 1,
      sym_comparison_operator,
    STATE(175), 1,
      sym_arithmetic_operator,
    ACTIONS(360), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4737] = 4,
    STATE(167), 1,
      sym_arithmetic_operator,
    STATE(206), 1,
      sym_comparison_operator,
    ACTIONS(360), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4769] = 4,
    STATE(169), 1,
      sym_comparison_operator,
    STATE(175), 1,
      sym_arithmetic_operator,
    ACTIONS(360), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4801] = 7,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_argument_list,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(345), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(354), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [4839] = 3,
    STATE(88), 1,
      sym_argument_list,
    ACTIONS(420), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4869] = 3,
    STATE(97), 1,
      sym_argument_list,
    ACTIONS(420), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [4899] = 8,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      anon_sym_COLON_COLON,
    STATE(169), 1,
      sym_comparison_operator,
    STATE(175), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(343), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [4939] = 8,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      anon_sym_COLON_COLON,
    STATE(167), 1,
      sym_arithmetic_operator,
    STATE(206), 1,
      sym_comparison_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(337), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [4979] = 1,
    ACTIONS(430), 23,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      anon_sym_end,
  [5005] = 8,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      anon_sym_COLON_COLON,
    STATE(169), 1,
      sym_comparison_operator,
    STATE(175), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(337), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [5045] = 8,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      anon_sym_COLON_COLON,
    STATE(167), 1,
      sym_arithmetic_operator,
    STATE(206), 1,
      sym_comparison_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(343), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [5085] = 3,
    STATE(99), 1,
      sym_argument_list,
    ACTIONS(420), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5115] = 3,
    STATE(101), 1,
      sym_argument_list,
    ACTIONS(420), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5145] = 7,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_argument_list,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(345), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(354), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [5183] = 1,
    ACTIONS(290), 23,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      anon_sym_end,
  [5209] = 4,
    STATE(167), 1,
      sym_arithmetic_operator,
    STATE(206), 1,
      sym_comparison_operator,
    ACTIONS(360), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(358), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5241] = 2,
    ACTIONS(380), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5268] = 2,
    ACTIONS(368), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(366), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5295] = 3,
    STATE(133), 1,
      sym_argument_list,
    ACTIONS(420), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5324] = 2,
    ACTIONS(376), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(374), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5351] = 2,
    ACTIONS(439), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(437), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5378] = 2,
    ACTIONS(288), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(286), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5405] = 2,
    ACTIONS(443), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(441), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5432] = 2,
    ACTIONS(376), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(374), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5459] = 3,
    ACTIONS(447), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(445), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(449), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [5488] = 2,
    ACTIONS(380), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5515] = 2,
    ACTIONS(389), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(387), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5542] = 2,
    ACTIONS(380), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5569] = 2,
    ACTIONS(453), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(451), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5596] = 2,
    ACTIONS(380), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5623] = 1,
    ACTIONS(455), 22,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [5648] = 2,
    ACTIONS(389), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(387), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5675] = 2,
    ACTIONS(439), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(437), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5702] = 2,
    ACTIONS(457), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(445), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5729] = 1,
    ACTIONS(459), 22,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [5754] = 15,
    ACTIONS(258), 1,
      anon_sym_Permissions,
    ACTIONS(260), 1,
      anon_sym_TableNo,
    ACTIONS(262), 1,
      anon_sym_Subtype,
    ACTIONS(264), 1,
      anon_sym_SingleInstance,
    ACTIONS(268), 1,
      anon_sym_TableRelation,
    ACTIONS(270), 1,
      anon_sym_FieldClass,
    ACTIONS(272), 1,
      anon_sym_CalcFormula,
    ACTIONS(274), 1,
      anon_sym_BlankZero,
    ACTIONS(276), 1,
      anon_sym_Editable,
    ACTIONS(278), 1,
      anon_sym_OptionMembers,
    ACTIONS(280), 1,
      anon_sym_OptionCaption,
    ACTIONS(282), 1,
      anon_sym_DataClassification,
    ACTIONS(266), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(110), 2,
      sym_property,
      aux_sym_property_list_repeat1,
    ACTIONS(461), 6,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_var,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
  [5807] = 3,
    ACTIONS(447), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(445), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(449), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [5836] = 2,
    ACTIONS(465), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(463), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5863] = 15,
    ACTIONS(469), 1,
      anon_sym_Permissions,
    ACTIONS(472), 1,
      anon_sym_TableNo,
    ACTIONS(475), 1,
      anon_sym_Subtype,
    ACTIONS(478), 1,
      anon_sym_SingleInstance,
    ACTIONS(484), 1,
      anon_sym_TableRelation,
    ACTIONS(487), 1,
      anon_sym_FieldClass,
    ACTIONS(490), 1,
      anon_sym_CalcFormula,
    ACTIONS(493), 1,
      anon_sym_BlankZero,
    ACTIONS(496), 1,
      anon_sym_Editable,
    ACTIONS(499), 1,
      anon_sym_OptionMembers,
    ACTIONS(502), 1,
      anon_sym_OptionCaption,
    ACTIONS(505), 1,
      anon_sym_DataClassification,
    ACTIONS(481), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(110), 2,
      sym_property,
      aux_sym_property_list_repeat1,
    ACTIONS(467), 6,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_var,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
  [5916] = 3,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(508), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(512), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [5945] = 2,
    ACTIONS(368), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(366), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [5972] = 3,
    STATE(132), 1,
      sym_argument_list,
    ACTIONS(420), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6001] = 2,
    ACTIONS(288), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(286), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6028] = 2,
    ACTIONS(443), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(441), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6055] = 2,
    ACTIONS(453), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(451), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6082] = 3,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(420), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6111] = 3,
    STATE(67), 1,
      sym_argument_list,
    ACTIONS(420), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(418), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6140] = 2,
    ACTIONS(457), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(445), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6167] = 2,
    ACTIONS(465), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(463), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6194] = 3,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(508), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(512), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [6223] = 12,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_end,
    ACTIONS(518), 1,
      anon_sym_else,
    STATE(1218), 1,
      sym_else_clause,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(148), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [6269] = 2,
    ACTIONS(453), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(451), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6295] = 3,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(508), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(512), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [6323] = 2,
    ACTIONS(443), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(441), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6349] = 3,
    ACTIONS(447), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(445), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(449), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [6377] = 2,
    ACTIONS(465), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(463), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6403] = 2,
    ACTIONS(368), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(366), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6429] = 2,
    ACTIONS(439), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(437), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6455] = 1,
    ACTIONS(520), 21,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_TableNo,
      anon_sym_Subtype,
      anon_sym_SingleInstance,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_var,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
      anon_sym_Clustered,
  [6479] = 2,
    ACTIONS(376), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(374), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6505] = 2,
    ACTIONS(380), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6531] = 2,
    ACTIONS(380), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(378), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6557] = 2,
    ACTIONS(389), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(387), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6583] = 3,
    ACTIONS(447), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(445), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(449), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [6611] = 2,
    ACTIONS(288), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(286), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6637] = 2,
    ACTIONS(443), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(441), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6663] = 2,
    ACTIONS(453), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(451), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6689] = 12,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_else,
    ACTIONS(522), 1,
      anon_sym_end,
    STATE(1036), 1,
      sym_else_clause,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(148), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [6735] = 2,
    ACTIONS(457), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(445), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6761] = 12,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_else,
    ACTIONS(524), 1,
      anon_sym_end,
    STATE(1092), 1,
      sym_else_clause,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(148), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [6807] = 2,
    ACTIONS(465), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(463), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6833] = 12,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_else,
    ACTIONS(526), 1,
      anon_sym_end,
    STATE(1158), 1,
      sym_else_clause,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(148), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [6879] = 2,
    ACTIONS(439), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(437), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6905] = 3,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(508), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
    ACTIONS(512), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [6933] = 2,
    ACTIONS(288), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(286), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6959] = 2,
    ACTIONS(457), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
    ACTIONS(445), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
      anon_sym_COLON_COLON,
  [6985] = 10,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(537), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(540), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(543), 2,
      anon_sym_end,
      anon_sym_else,
    STATE(148), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7026] = 16,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_Permissions,
    ACTIONS(550), 1,
      anon_sym_TableNo,
    ACTIONS(553), 1,
      anon_sym_Subtype,
    ACTIONS(556), 1,
      anon_sym_SingleInstance,
    ACTIONS(562), 1,
      anon_sym_TableRelation,
    ACTIONS(565), 1,
      anon_sym_FieldClass,
    ACTIONS(568), 1,
      anon_sym_CalcFormula,
    ACTIONS(571), 1,
      anon_sym_BlankZero,
    ACTIONS(574), 1,
      anon_sym_Editable,
    ACTIONS(577), 1,
      anon_sym_OptionMembers,
    ACTIONS(580), 1,
      anon_sym_OptionCaption,
    ACTIONS(583), 1,
      anon_sym_DataClassification,
    ACTIONS(586), 1,
      anon_sym_Clustered,
    ACTIONS(559), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(149), 3,
      sym_property,
      sym_clustered_property,
      aux_sym_key_declaration_repeat1,
  [7078] = 16,
    ACTIONS(258), 1,
      anon_sym_Permissions,
    ACTIONS(260), 1,
      anon_sym_TableNo,
    ACTIONS(262), 1,
      anon_sym_Subtype,
    ACTIONS(264), 1,
      anon_sym_SingleInstance,
    ACTIONS(268), 1,
      anon_sym_TableRelation,
    ACTIONS(270), 1,
      anon_sym_FieldClass,
    ACTIONS(272), 1,
      anon_sym_CalcFormula,
    ACTIONS(274), 1,
      anon_sym_BlankZero,
    ACTIONS(276), 1,
      anon_sym_Editable,
    ACTIONS(278), 1,
      anon_sym_OptionMembers,
    ACTIONS(280), 1,
      anon_sym_OptionCaption,
    ACTIONS(282), 1,
      anon_sym_DataClassification,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_Clustered,
    ACTIONS(266), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(151), 3,
      sym_property,
      sym_clustered_property,
      aux_sym_key_declaration_repeat1,
  [7130] = 16,
    ACTIONS(258), 1,
      anon_sym_Permissions,
    ACTIONS(260), 1,
      anon_sym_TableNo,
    ACTIONS(262), 1,
      anon_sym_Subtype,
    ACTIONS(264), 1,
      anon_sym_SingleInstance,
    ACTIONS(268), 1,
      anon_sym_TableRelation,
    ACTIONS(270), 1,
      anon_sym_FieldClass,
    ACTIONS(272), 1,
      anon_sym_CalcFormula,
    ACTIONS(274), 1,
      anon_sym_BlankZero,
    ACTIONS(276), 1,
      anon_sym_Editable,
    ACTIONS(278), 1,
      anon_sym_OptionMembers,
    ACTIONS(280), 1,
      anon_sym_OptionCaption,
    ACTIONS(282), 1,
      anon_sym_DataClassification,
    ACTIONS(591), 1,
      anon_sym_Clustered,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 2,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
    STATE(149), 3,
      sym_property,
      sym_clustered_property,
      aux_sym_key_declaration_repeat1,
  [7182] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7219] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(139), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7256] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(141), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7293] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(1297), 1,
      sym_value_set,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(143), 2,
      sym_case_clause,
      aux_sym_case_statement_repeat1,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(463), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7330] = 4,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(595), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    STATE(156), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
    ACTIONS(597), 12,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [7356] = 7,
    ACTIONS(604), 1,
      anon_sym_Decimal,
    ACTIONS(606), 1,
      anon_sym_Text,
    ACTIONS(608), 1,
      anon_sym_Code,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(612), 1,
      anon_sym_Enum,
    STATE(1055), 1,
      sym_data_type,
    ACTIONS(602), 11,
      anon_sym_Integer,
      anon_sym_BigInteger,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateTime,
      anon_sym_Duration,
      anon_sym_Boolean,
      anon_sym_Option,
      anon_sym_Guid,
      anon_sym_RecordId,
      anon_sym_Blob,
  [7388] = 4,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(614), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    STATE(156), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
    ACTIONS(616), 12,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [7414] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(1041), 1,
      sym_expression_list,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(457), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7447] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(533), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7480] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(525), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7513] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(529), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7546] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(531), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7579] = 8,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(513), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7612] = 1,
    ACTIONS(630), 16,
      anon_sym_RBRACE,
      anon_sym_Permissions,
      anon_sym_TableNo,
      anon_sym_Subtype,
      anon_sym_SingleInstance,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Clustered,
  [7631] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(548), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7661] = 7,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(640), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(73), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7691] = 7,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(648), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(650), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(63), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7721] = 7,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(72), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7751] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(573), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7781] = 7,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(648), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(650), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(62), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7811] = 7,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(648), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(650), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(59), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7841] = 7,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(648), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(650), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(60), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7871] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(543), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7901] = 7,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(74), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7931] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(544), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7961] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(582), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [7991] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(535), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8021] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(575), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8051] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(591), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8081] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(566), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8111] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(561), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8141] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(562), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8171] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(572), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8201] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(569), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8231] = 7,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(640), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(79), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8261] = 7,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(640), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(82), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8291] = 2,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(666), 13,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      sym_identifier,
  [8311] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(571), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8341] = 2,
    ACTIONS(668), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(670), 13,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
      sym_identifier,
  [8361] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(574), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8391] = 7,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(81), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8421] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(576), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8451] = 7,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(680), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(54), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8481] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(578), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8511] = 7,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(660), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(78), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8541] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(579), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8571] = 7,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(680), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(55), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8601] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(583), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8631] = 7,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(680), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(57), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8661] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(584), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8691] = 7,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(680), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(58), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8721] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(586), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8751] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(587), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8781] = 7,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(51), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(433), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(589), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8811] = 7,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 2,
      sym_integer,
      sym_string_literal,
    ACTIONS(640), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 3,
      sym__quoted_identifier,
      sym_boolean,
      sym__primary_expression,
    STATE(87), 5,
      sym_member_access,
      sym_method_call,
      sym_enum_member_access,
      sym__expression,
      sym_binary_expression,
  [8841] = 2,
    ACTIONS(682), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(684), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8860] = 2,
    ACTIONS(686), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(688), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8879] = 2,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(692), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8898] = 2,
    ACTIONS(694), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(696), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8917] = 2,
    ACTIONS(698), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(700), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8936] = 2,
    ACTIONS(702), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(704), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8955] = 2,
    ACTIONS(706), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(708), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8974] = 2,
    ACTIONS(710), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(712), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [8993] = 1,
    ACTIONS(714), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9010] = 1,
    ACTIONS(716), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9027] = 2,
    ACTIONS(718), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(720), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9046] = 2,
    ACTIONS(722), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(724), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9065] = 2,
    ACTIONS(726), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(728), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9084] = 2,
    ACTIONS(730), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(732), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9103] = 2,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(736), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9122] = 2,
    ACTIONS(738), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(740), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9141] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9160] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9179] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9198] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9217] = 1,
    ACTIONS(746), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9234] = 2,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(750), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9253] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9272] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9291] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9310] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9329] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9348] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9367] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9386] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9405] = 2,
    ACTIONS(760), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(762), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9424] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9443] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9462] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9481] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9500] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9519] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9538] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9557] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9576] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9595] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9614] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9633] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9652] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9671] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9690] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9709] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9728] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9747] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9766] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9785] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9804] = 1,
    ACTIONS(716), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9821] = 1,
    ACTIONS(772), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9838] = 1,
    ACTIONS(774), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9855] = 1,
    ACTIONS(776), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9872] = 3,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(782), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9893] = 1,
    ACTIONS(784), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9910] = 3,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(788), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(790), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9931] = 2,
    ACTIONS(792), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(794), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9950] = 2,
    ACTIONS(796), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(798), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [9969] = 1,
    ACTIONS(800), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [9986] = 1,
    ACTIONS(802), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10003] = 1,
    ACTIONS(804), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10020] = 1,
    ACTIONS(800), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10037] = 2,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(808), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10056] = 1,
    ACTIONS(810), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10073] = 1,
    ACTIONS(812), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10090] = 1,
    ACTIONS(814), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10107] = 1,
    ACTIONS(816), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10124] = 1,
    ACTIONS(814), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10141] = 1,
    ACTIONS(818), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10158] = 1,
    ACTIONS(820), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10175] = 1,
    ACTIONS(822), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10192] = 2,
    ACTIONS(824), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(826), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10211] = 1,
    ACTIONS(818), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10228] = 1,
    ACTIONS(828), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10245] = 1,
    ACTIONS(830), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10262] = 1,
    ACTIONS(832), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10279] = 2,
    ACTIONS(834), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(836), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10298] = 2,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(840), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10317] = 2,
    ACTIONS(686), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(688), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10336] = 2,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(692), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10355] = 2,
    ACTIONS(694), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(696), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10374] = 2,
    ACTIONS(698), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(700), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10393] = 2,
    ACTIONS(702), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(704), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10412] = 2,
    ACTIONS(706), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(708), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10431] = 1,
    ACTIONS(842), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10448] = 2,
    ACTIONS(710), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(712), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10467] = 1,
    ACTIONS(844), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10484] = 1,
    ACTIONS(832), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [10501] = 2,
    ACTIONS(718), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(720), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10520] = 2,
    ACTIONS(722), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(724), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10539] = 2,
    ACTIONS(726), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(728), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10558] = 2,
    ACTIONS(730), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(732), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10577] = 2,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(736), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10596] = 2,
    ACTIONS(738), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(740), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10615] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10634] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10653] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10672] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10691] = 2,
    ACTIONS(682), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(684), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10710] = 2,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(750), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10729] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10748] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10767] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10786] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10805] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10824] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10843] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10862] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10881] = 2,
    ACTIONS(760), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(762), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10900] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10919] = 2,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(840), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10938] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10957] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10976] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [10995] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11014] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11033] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11052] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11071] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11090] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11109] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11128] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11147] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11166] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11185] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11204] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11223] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11242] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11261] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11280] = 1,
    ACTIONS(846), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11297] = 1,
    ACTIONS(848), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11314] = 9,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    ACTIONS(256), 1,
      anon_sym_trigger,
    ACTIONS(284), 1,
      anon_sym_var,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(360), 5,
      sym__codeunit_element,
      sym_onrun_trigger,
      sym_var_section,
      sym_procedure,
      aux_sym_codeunit_declaration_repeat1,
  [11347] = 9,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    ACTIONS(256), 1,
      anon_sym_trigger,
    ACTIONS(284), 1,
      anon_sym_var,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(351), 5,
      sym__codeunit_element,
      sym_onrun_trigger,
      sym_var_section,
      sym_procedure,
      aux_sym_codeunit_declaration_repeat1,
  [11380] = 1,
    ACTIONS(852), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11397] = 8,
    ACTIONS(854), 1,
      anon_sym_lookup,
    ACTIONS(856), 1,
      anon_sym_count,
    ACTIONS(858), 1,
      anon_sym_sum,
    ACTIONS(860), 1,
      anon_sym_average,
    ACTIONS(862), 1,
      anon_sym_min,
    ACTIONS(864), 1,
      anon_sym_max,
    STATE(1137), 1,
      sym_calc_formula_value,
    STATE(1284), 7,
      sym__calc_formula_expression,
      sym_lookup_formula,
      sym_count_formula,
      sym_sum_formula,
      sym_average_formula,
      sym_min_formula,
      sym_max_formula,
  [11428] = 1,
    ACTIONS(866), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11445] = 1,
    ACTIONS(868), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11462] = 4,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(418), 11,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [11485] = 4,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_argument_list,
    ACTIONS(418), 11,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [11508] = 1,
    ACTIONS(872), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11525] = 1,
    ACTIONS(874), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11542] = 3,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(878), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11563] = 9,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_procedure_modifier,
    ACTIONS(203), 1,
      anon_sym_procedure,
    ACTIONS(256), 1,
      anon_sym_trigger,
    ACTIONS(284), 1,
      anon_sym_var,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(360), 5,
      sym__codeunit_element,
      sym_onrun_trigger,
      sym_var_section,
      sym_procedure,
      aux_sym_codeunit_declaration_repeat1,
  [11596] = 1,
    ACTIONS(882), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11613] = 1,
    ACTIONS(884), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11630] = 1,
    ACTIONS(886), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11647] = 1,
    ACTIONS(888), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11664] = 2,
    ACTIONS(290), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11683] = 3,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11704] = 2,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(441), 13,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [11723] = 1,
    ACTIONS(894), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11740] = 9,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    ACTIONS(898), 1,
      anon_sym_trigger,
    ACTIONS(901), 1,
      anon_sym_var,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 1,
      sym_procedure_modifier,
    ACTIONS(910), 1,
      anon_sym_procedure,
    STATE(893), 1,
      sym_attribute_list,
    STATE(671), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(360), 5,
      sym__codeunit_element,
      sym_onrun_trigger,
      sym_var_section,
      sym_procedure,
      aux_sym_codeunit_declaration_repeat1,
  [11773] = 3,
    ACTIONS(917), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [11794] = 3,
    ACTIONS(919), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [11815] = 1,
    ACTIONS(921), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11832] = 3,
    ACTIONS(923), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [11853] = 3,
    ACTIONS(925), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [11874] = 1,
    ACTIONS(927), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11891] = 1,
    ACTIONS(929), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11908] = 1,
    ACTIONS(931), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11925] = 1,
    ACTIONS(933), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11942] = 1,
    ACTIONS(935), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11959] = 2,
    ACTIONS(430), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(937), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [11978] = 1,
    ACTIONS(939), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [11995] = 1,
    ACTIONS(941), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12012] = 1,
    ACTIONS(943), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12029] = 1,
    ACTIONS(941), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12046] = 3,
    ACTIONS(945), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12067] = 3,
    ACTIONS(947), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12088] = 1,
    ACTIONS(949), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12105] = 1,
    ACTIONS(951), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12122] = 1,
    ACTIONS(953), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12139] = 1,
    ACTIONS(955), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12156] = 3,
    ACTIONS(957), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12177] = 3,
    ACTIONS(959), 1,
      anon_sym_else,
    ACTIONS(913), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(915), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12198] = 1,
    ACTIONS(961), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12215] = 1,
    ACTIONS(963), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12232] = 3,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(878), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12253] = 3,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(782), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12274] = 1,
    ACTIONS(969), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12291] = 3,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    ACTIONS(788), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(790), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12312] = 2,
    ACTIONS(792), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(794), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12331] = 2,
    ACTIONS(796), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(798), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12350] = 1,
    ACTIONS(973), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12367] = 1,
    ACTIONS(975), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12384] = 1,
    ACTIONS(977), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12401] = 1,
    ACTIONS(979), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12418] = 2,
    ACTIONS(290), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12437] = 2,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(808), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12456] = 3,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12477] = 1,
    ACTIONS(983), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12494] = 1,
    ACTIONS(979), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12511] = 1,
    ACTIONS(985), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12528] = 1,
    ACTIONS(987), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12545] = 1,
    ACTIONS(989), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12562] = 1,
    ACTIONS(985), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12579] = 1,
    ACTIONS(991), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12596] = 2,
    ACTIONS(824), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(826), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12615] = 2,
    ACTIONS(430), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(937), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12634] = 1,
    ACTIONS(993), 14,
      anon_sym_RBRACE,
      anon_sym_TableType,
      anon_sym_trigger,
      anon_sym_Permissions,
      anon_sym_DrillDownPageId,
      anon_sym_LookupPageId,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_var,
      anon_sym_LBRACK,
      anon_sym_fields,
      anon_sym_keys,
      sym_procedure_modifier,
      anon_sym_procedure,
  [12651] = 2,
    ACTIONS(834), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(836), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12670] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_exit,
  [12689] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12707] = 2,
    ACTIONS(796), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(798), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12725] = 2,
    ACTIONS(738), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(740), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12743] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12761] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12779] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12797] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12815] = 2,
    ACTIONS(824), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(826), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12833] = 2,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(750), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12851] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12869] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12887] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12905] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12923] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12941] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12959] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12977] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [12995] = 4,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_COLON,
    STATE(429), 1,
      sym_argument_list,
    ACTIONS(345), 10,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
  [13017] = 2,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(445), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [13035] = 2,
    ACTIONS(760), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(762), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13053] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13071] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13089] = 2,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(451), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [13107] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13125] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13143] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13161] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13179] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13197] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13215] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13233] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13251] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13269] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13287] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13305] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13323] = 3,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(878), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13343] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13361] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13379] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13397] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13415] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13433] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13451] = 7,
    ACTIONS(854), 1,
      anon_sym_lookup,
    ACTIONS(856), 1,
      anon_sym_count,
    ACTIONS(858), 1,
      anon_sym_sum,
    ACTIONS(860), 1,
      anon_sym_average,
    ACTIONS(862), 1,
      anon_sym_min,
    ACTIONS(864), 1,
      anon_sym_max,
    STATE(1058), 7,
      sym__calc_formula_expression,
      sym_lookup_formula,
      sym_count_formula,
      sym_sum_formula,
      sym_average_formula,
      sym_min_formula,
      sym_max_formula,
  [13479] = 2,
    ACTIONS(290), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13497] = 3,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13517] = 2,
    ACTIONS(430), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(937), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13535] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(798), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [13567] = 3,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(782), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13587] = 3,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(788), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(790), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13607] = 2,
    ACTIONS(792), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(794), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13625] = 2,
    ACTIONS(796), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(798), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13643] = 2,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(808), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13661] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(783), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [13693] = 2,
    ACTIONS(834), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(836), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13711] = 2,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(840), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13729] = 2,
    ACTIONS(686), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(688), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13747] = 2,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(692), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13765] = 2,
    ACTIONS(824), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(826), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13783] = 2,
    ACTIONS(694), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(696), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13801] = 2,
    ACTIONS(698), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(700), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13819] = 2,
    ACTIONS(702), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(704), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13837] = 2,
    ACTIONS(706), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(708), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13855] = 2,
    ACTIONS(834), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(836), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13873] = 2,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(840), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13891] = 2,
    ACTIONS(686), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(688), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13909] = 2,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(692), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13927] = 2,
    ACTIONS(694), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(696), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13945] = 2,
    ACTIONS(698), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(700), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13963] = 2,
    ACTIONS(702), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(704), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13981] = 2,
    ACTIONS(706), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(708), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [13999] = 2,
    ACTIONS(710), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(712), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14017] = 2,
    ACTIONS(718), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(720), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14035] = 2,
    ACTIONS(722), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(724), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14053] = 2,
    ACTIONS(726), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(728), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14071] = 2,
    ACTIONS(730), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(732), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14089] = 2,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(736), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14107] = 2,
    ACTIONS(738), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(740), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14125] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14143] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14161] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14179] = 2,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(744), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14197] = 2,
    ACTIONS(682), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(684), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14215] = 2,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(750), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14233] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14251] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14269] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14287] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14305] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14323] = 2,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(754), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14341] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14359] = 2,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(758), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14377] = 2,
    ACTIONS(760), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(762), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14395] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14413] = 2,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(766), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14431] = 3,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(878), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14451] = 2,
    ACTIONS(290), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14469] = 3,
    ACTIONS(1017), 1,
      anon_sym_SEMI,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14489] = 2,
    ACTIONS(430), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(937), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14507] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14525] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14543] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14561] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14579] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(792), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14611] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14629] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14647] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14665] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14683] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14701] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14719] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14737] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14755] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14773] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14791] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14809] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(803), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14841] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14859] = 2,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(770), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_repeat,
      anon_sym_until,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14877] = 2,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(808), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14895] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(814), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14927] = 3,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(782), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [14947] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(822), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14979] = 2,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(463), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [14997] = 9,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    STATE(769), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15029] = 2,
    ACTIONS(710), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(712), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15047] = 8,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(1031), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15077] = 3,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(788), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(790), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15097] = 2,
    ACTIONS(718), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(720), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15115] = 2,
    ACTIONS(722), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(724), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15133] = 2,
    ACTIONS(726), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(728), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15151] = 2,
    ACTIONS(730), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(732), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15169] = 2,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(736), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15187] = 2,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(437), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15205] = 4,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(358), 10,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
  [15227] = 4,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(358), 10,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
  [15249] = 2,
    ACTIONS(792), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(794), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15267] = 2,
    ACTIONS(682), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(684), 8,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_repeat,
      anon_sym_if,
      anon_sym_case,
      anon_sym_exit,
  [15285] = 12,
    ACTIONS(1037), 1,
      anon_sym_OnInsert,
    ACTIONS(1039), 1,
      anon_sym_OnModify,
    ACTIONS(1041), 1,
      anon_sym_OnDelete,
    ACTIONS(1043), 1,
      anon_sym_OnRename,
    ACTIONS(1045), 1,
      anon_sym_OnValidate,
    ACTIONS(1047), 1,
      anon_sym_OnAfterGetRecord,
    ACTIONS(1049), 1,
      anon_sym_OnAfterInsertEvent,
    ACTIONS(1051), 1,
      anon_sym_OnAfterModifyEvent,
    ACTIONS(1053), 1,
      anon_sym_OnAfterDeleteEvent,
    ACTIONS(1055), 1,
      anon_sym_OnBeforeInsertEvent,
    ACTIONS(1057), 1,
      anon_sym_OnBeforeModifyEvent,
    ACTIONS(1059), 1,
      anon_sym_OnBeforeDeleteEvent,
  [15322] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(1061), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15349] = 3,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_argument_list,
    ACTIONS(418), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15368] = 3,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(595), 1,
      sym_argument_list,
    ACTIONS(418), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15387] = 1,
    ACTIONS(1065), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15402] = 1,
    ACTIONS(1067), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15417] = 1,
    ACTIONS(1069), 12,
      anon_sym_COMMA,
      anon_sym_Temporary,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_ELSE,
      anon_sym_WHERE,
      anon_sym_where,
      sym_temporary,
      anon_sym_begin,
  [15432] = 1,
    ACTIONS(1071), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15447] = 1,
    ACTIONS(1073), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15462] = 1,
    ACTIONS(1075), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15477] = 1,
    ACTIONS(1077), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15492] = 1,
    ACTIONS(1079), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15507] = 3,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(429), 1,
      sym_argument_list,
    ACTIONS(345), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15526] = 1,
    ACTIONS(1081), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15541] = 3,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(358), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15560] = 3,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(358), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [15579] = 1,
    ACTIONS(1083), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15594] = 1,
    ACTIONS(1085), 12,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_TableRelation,
      anon_sym_FieldClass,
      anon_sym_CalcFormula,
      anon_sym_BlankZero,
      anon_sym_Editable,
      anon_sym_OptionMembers,
      anon_sym_OptionCaption,
      anon_sym_DataClassification,
      anon_sym_Caption,
      anon_sym_DecimalPlaces,
  [15609] = 3,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15627] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15653] = 3,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15671] = 3,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15689] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15715] = 2,
    ACTIONS(1097), 1,
      anon_sym_FindSet,
    ACTIONS(1095), 10,
      anon_sym_Get,
      anon_sym_Insert,
      anon_sym_Modify,
      anon_sym_Delete,
      anon_sym_SetRange,
      anon_sym_SetFilter,
      anon_sym_Reset,
      anon_sym_FindFirst,
      anon_sym_FindLast,
      anon_sym_Next,
  [15731] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15757] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15783] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1105), 1,
      anon_sym_of,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15809] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15835] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15861] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15887] = 3,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15905] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15931] = 7,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15957] = 3,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15975] = 3,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_argument_list,
    ACTIONS(418), 9,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON,
  [15993] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1119), 1,
      anon_sym_then,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16019] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1121), 1,
      anon_sym_then,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16045] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1123), 1,
      anon_sym_then,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16071] = 2,
    ACTIONS(1125), 1,
      anon_sym_FindSet,
    ACTIONS(1095), 10,
      anon_sym_Get,
      anon_sym_Insert,
      anon_sym_Modify,
      anon_sym_Delete,
      anon_sym_SetRange,
      anon_sym_SetFilter,
      anon_sym_Reset,
      anon_sym_FindFirst,
      anon_sym_FindLast,
      anon_sym_Next,
  [16087] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1127), 1,
      anon_sym_then,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16113] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1129), 1,
      anon_sym_of,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16139] = 2,
    ACTIONS(1131), 1,
      anon_sym_FindSet,
    ACTIONS(1095), 10,
      anon_sym_Get,
      anon_sym_Insert,
      anon_sym_Modify,
      anon_sym_Delete,
      anon_sym_SetRange,
      anon_sym_SetFilter,
      anon_sym_Reset,
      anon_sym_FindFirst,
      anon_sym_FindLast,
      anon_sym_Next,
  [16155] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1133), 1,
      anon_sym_of,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16181] = 2,
    ACTIONS(1135), 1,
      anon_sym_FindSet,
    ACTIONS(1095), 10,
      anon_sym_Get,
      anon_sym_Insert,
      anon_sym_Modify,
      anon_sym_Delete,
      anon_sym_SetRange,
      anon_sym_SetFilter,
      anon_sym_Reset,
      anon_sym_FindFirst,
      anon_sym_FindLast,
      anon_sym_Next,
  [16197] = 7,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1137), 1,
      anon_sym_of,
    STATE(182), 1,
      sym_comparison_operator,
    STATE(183), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16223] = 6,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16246] = 1,
    ACTIONS(374), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [16259] = 1,
    ACTIONS(378), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [16272] = 1,
    ACTIONS(378), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [16285] = 6,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1141), 1,
      anon_sym_DOT,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16308] = 3,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_else,
  [16325] = 1,
    ACTIONS(387), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [16338] = 1,
    ACTIONS(366), 10,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_of,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
      anon_sym_then,
  [16351] = 10,
    ACTIONS(1145), 1,
      anon_sym_Get,
    ACTIONS(1147), 1,
      anon_sym_Insert,
    ACTIONS(1149), 1,
      anon_sym_Modify,
    ACTIONS(1151), 1,
      anon_sym_Delete,
    ACTIONS(1153), 1,
      anon_sym_SetRange,
    ACTIONS(1155), 1,
      anon_sym_SetFilter,
    ACTIONS(1157), 1,
      anon_sym_Reset,
    ACTIONS(1159), 1,
      anon_sym_FindFirst,
    ACTIONS(1161), 1,
      anon_sym_FindLast,
    ACTIONS(1163), 1,
      anon_sym_Next,
  [16382] = 3,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(878), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_else,
  [16399] = 6,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16422] = 10,
    ACTIONS(1167), 1,
      anon_sym_Get,
    ACTIONS(1169), 1,
      anon_sym_Insert,
    ACTIONS(1171), 1,
      anon_sym_Modify,
    ACTIONS(1173), 1,
      anon_sym_Delete,
    ACTIONS(1175), 1,
      anon_sym_SetRange,
    ACTIONS(1177), 1,
      anon_sym_SetFilter,
    ACTIONS(1179), 1,
      anon_sym_Reset,
    ACTIONS(1181), 1,
      anon_sym_FindFirst,
    ACTIONS(1183), 1,
      anon_sym_FindLast,
    ACTIONS(1185), 1,
      anon_sym_Next,
  [16453] = 6,
    ACTIONS(1007), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1187), 1,
      anon_sym_DOT,
    STATE(174), 1,
      sym_comparison_operator,
    STATE(176), 1,
      sym_arithmetic_operator,
    ACTIONS(329), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [16476] = 10,
    ACTIONS(1189), 1,
      anon_sym_Get,
    ACTIONS(1191), 1,
      anon_sym_Insert,
    ACTIONS(1193), 1,
      anon_sym_Modify,
    ACTIONS(1195), 1,
      anon_sym_Delete,
    ACTIONS(1197), 1,
      anon_sym_SetRange,
    ACTIONS(1199), 1,
      anon_sym_SetFilter,
    ACTIONS(1201), 1,
      anon_sym_Reset,
    ACTIONS(1203), 1,
      anon_sym_FindFirst,
    ACTIONS(1205), 1,
      anon_sym_FindLast,
    ACTIONS(1207), 1,
      anon_sym_Next,
  [16507] = 10,
    ACTIONS(1209), 1,
      anon_sym_Get,
    ACTIONS(1211), 1,
      anon_sym_Insert,
    ACTIONS(1213), 1,
      anon_sym_Modify,
    ACTIONS(1215), 1,
      anon_sym_Delete,
    ACTIONS(1217), 1,
      anon_sym_SetRange,
    ACTIONS(1219), 1,
      anon_sym_SetFilter,
    ACTIONS(1221), 1,
      anon_sym_Reset,
    ACTIONS(1223), 1,
      anon_sym_FindFirst,
    ACTIONS(1225), 1,
      anon_sym_FindLast,
    ACTIONS(1227), 1,
      anon_sym_Next,
  [16538] = 2,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    ACTIONS(508), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COLON_COLON,
  [16552] = 9,
    ACTIONS(1229), 1,
      anon_sym_SEMI,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(379), 1,
      sym_code_block,
    STATE(711), 1,
      sym__procedure_return_specification,
    STATE(976), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16580] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1239), 1,
      anon_sym_SEMI,
    STATE(378), 1,
      sym_code_block,
    STATE(709), 1,
      sym__procedure_return_specification,
    STATE(969), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16608] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1241), 1,
      anon_sym_SEMI,
    STATE(405), 1,
      sym_code_block,
    STATE(718), 1,
      sym__procedure_return_specification,
    STATE(929), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16636] = 9,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1243), 1,
      anon_sym_IF,
    ACTIONS(1245), 1,
      sym_identifier,
    ACTIONS(1247), 1,
      sym_integer,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(669), 1,
      sym__table_reference,
    STATE(1138), 1,
      sym_table_relation_expression,
    STATE(1211), 1,
      sym_if_table_relation,
    STATE(1217), 1,
      sym__simple_table_relation,
  [16664] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      sym_code_block,
    STATE(696), 1,
      sym__procedure_return_specification,
    STATE(944), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16692] = 2,
    ACTIONS(430), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(937), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_else,
  [16706] = 2,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(890), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_else,
  [16720] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      sym_code_block,
    STATE(741), 1,
      sym__procedure_return_specification,
    STATE(949), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16748] = 9,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1243), 1,
      anon_sym_IF,
    ACTIONS(1245), 1,
      sym_identifier,
    ACTIONS(1247), 1,
      sym_integer,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(669), 1,
      sym__table_reference,
    STATE(1137), 1,
      sym_table_relation_expression,
    STATE(1211), 1,
      sym_if_table_relation,
    STATE(1217), 1,
      sym__simple_table_relation,
  [16776] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    STATE(349), 1,
      sym_code_block,
    STATE(694), 1,
      sym__procedure_return_specification,
    STATE(890), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16804] = 2,
    ACTIONS(1255), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
    ACTIONS(1257), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_end,
      anon_sym_else,
  [16818] = 9,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1243), 1,
      anon_sym_IF,
    ACTIONS(1245), 1,
      sym_identifier,
    ACTIONS(1247), 1,
      sym_integer,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(669), 1,
      sym__table_reference,
    STATE(1056), 1,
      sym_table_relation_expression,
    STATE(1211), 1,
      sym_if_table_relation,
    STATE(1217), 1,
      sym__simple_table_relation,
  [16846] = 4,
    ACTIONS(1259), 1,
      sym_identifier,
    ACTIONS(614), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    STATE(622), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
    ACTIONS(616), 4,
      anon_sym_trigger,
      anon_sym_var,
      sym_procedure_modifier,
      anon_sym_procedure,
  [16864] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    STATE(348), 1,
      sym_code_block,
    STATE(692), 1,
      sym__procedure_return_specification,
    STATE(1012), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16892] = 4,
    ACTIONS(1263), 1,
      sym_identifier,
    ACTIONS(595), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    STATE(622), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
    ACTIONS(597), 4,
      anon_sym_trigger,
      anon_sym_var,
      sym_procedure_modifier,
      anon_sym_procedure,
  [16910] = 9,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    ACTIONS(1266), 1,
      anon_sym_SEMI,
    STATE(369), 1,
      sym_code_block,
    STATE(706), 1,
      sym__procedure_return_specification,
    STATE(1009), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16938] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(349), 1,
      sym_code_block,
    STATE(693), 1,
      sym__procedure_return_specification,
    STATE(890), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16963] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(215), 1,
      sym_code_block,
    STATE(719), 1,
      sym__procedure_return_specification,
    STATE(937), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [16988] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(273), 1,
      sym_code_block,
    STATE(735), 1,
      sym__procedure_return_specification,
    STATE(995), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17013] = 2,
    ACTIONS(1270), 1,
      anon_sym_LBRACK,
    ACTIONS(1268), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17026] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(394), 1,
      sym_code_block,
    STATE(716), 1,
      sym__procedure_return_specification,
    STATE(913), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17051] = 2,
    STATE(1019), 1,
      sym_data_classification_value,
    ACTIONS(1272), 7,
      anon_sym_CustomerContent,
      anon_sym_EndUserIdentifiableInformation,
      anon_sym_AccountData,
      anon_sym_EndUserPseudonymousIdentifiers,
      anon_sym_OrganizationIdentifiableInformation,
      anon_sym_SystemMetadata,
      anon_sym_ToBeClassified,
  [17064] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(405), 1,
      sym_code_block,
    STATE(717), 1,
      sym__procedure_return_specification,
    STATE(929), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17089] = 2,
    ACTIONS(1276), 1,
      anon_sym_Temporary,
    ACTIONS(1274), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17102] = 2,
    STATE(1137), 1,
      sym_data_classification_value,
    ACTIONS(1272), 7,
      anon_sym_CustomerContent,
      anon_sym_EndUserIdentifiableInformation,
      anon_sym_AccountData,
      anon_sym_EndUserPseudonymousIdentifiers,
      anon_sym_OrganizationIdentifiableInformation,
      anon_sym_SystemMetadata,
      anon_sym_ToBeClassified,
  [17115] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(369), 1,
      sym_code_block,
    STATE(705), 1,
      sym__procedure_return_specification,
    STATE(1009), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17140] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(379), 1,
      sym_code_block,
    STATE(710), 1,
      sym__procedure_return_specification,
    STATE(976), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17165] = 8,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_var,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(1237), 1,
      anon_sym_begin,
    STATE(372), 1,
      sym_code_block,
    STATE(708), 1,
      sym__procedure_return_specification,
    STATE(954), 1,
      sym_var_section,
    STATE(1145), 1,
      sym_return_value,
  [17190] = 1,
    ACTIONS(1278), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17200] = 1,
    ACTIONS(1280), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17210] = 4,
    ACTIONS(1282), 1,
      ts_builtin_sym_end,
    ACTIONS(1284), 1,
      anon_sym_table,
    ACTIONS(1287), 1,
      anon_sym_codeunit,
    STATE(638), 4,
      sym__object,
      sym_table_declaration,
      sym_codeunit_declaration,
      aux_sym_source_file_repeat1,
  [17226] = 1,
    ACTIONS(1290), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17236] = 1,
    ACTIONS(1292), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17246] = 1,
    ACTIONS(1294), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17256] = 4,
    ACTIONS(5), 1,
      anon_sym_table,
    ACTIONS(7), 1,
      anon_sym_codeunit,
    ACTIONS(1296), 1,
      ts_builtin_sym_end,
    STATE(638), 4,
      sym__object,
      sym_table_declaration,
      sym_codeunit_declaration,
      aux_sym_source_file_repeat1,
  [17272] = 2,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(666), 5,
      anon_sym_trigger,
      anon_sym_var,
      sym_procedure_modifier,
      anon_sym_procedure,
      sym_identifier,
  [17284] = 1,
    ACTIONS(1298), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17294] = 1,
    ACTIONS(1300), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17304] = 2,
    ACTIONS(668), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(670), 5,
      anon_sym_trigger,
      anon_sym_var,
      sym_procedure_modifier,
      anon_sym_procedure,
      sym_identifier,
  [17316] = 2,
    ACTIONS(1304), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1302), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
  [17328] = 2,
    ACTIONS(1308), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1306), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer,
      sym_string_literal,
  [17340] = 1,
    ACTIONS(1310), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17350] = 1,
    ACTIONS(1312), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17360] = 1,
    ACTIONS(1314), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17370] = 1,
    ACTIONS(1316), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_var,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_temporary,
      anon_sym_begin,
  [17380] = 6,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(782), 1,
      sym_lookup_where_condition,
    STATE(965), 1,
      sym__quoted_identifier,
    STATE(1025), 1,
      sym__condition_field_reference,
    STATE(1026), 1,
      sym_lookup_where_conditions,
  [17399] = 6,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      sym_identifier,
    ACTIONS(1322), 1,
      sym_string_literal,
    STATE(775), 1,
      sym_option_member,
    STATE(953), 1,
      sym__quoted_identifier,
    STATE(1137), 1,
      sym_option_members_value,
  [17418] = 6,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(840), 1,
      sym_where_condition,
    STATE(965), 1,
      sym__quoted_identifier,
    STATE(1082), 1,
      sym_where_conditions,
    STATE(1086), 1,
      sym__condition_field_reference,
  [17437] = 6,
    ACTIONS(1324), 1,
      anon_sym_var,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(1328), 1,
      sym_identifier,
    STATE(801), 1,
      sym_parameter,
    STATE(1061), 1,
      sym_parameter_list,
    STATE(1135), 1,
      sym_modifier,
  [17456] = 6,
    ACTIONS(1324), 1,
      anon_sym_var,
    ACTIONS(1328), 1,
      sym_identifier,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(801), 1,
      sym_parameter,
    STATE(1135), 1,
      sym_modifier,
    STATE(1205), 1,
      sym_parameter_list,
  [17475] = 6,
    ACTIONS(1324), 1,
      anon_sym_var,
    ACTIONS(1328), 1,
      sym_identifier,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(801), 1,
      sym_parameter,
    STATE(1131), 1,
      sym_parameter_list,
    STATE(1135), 1,
      sym_modifier,
  [17494] = 6,
    ACTIONS(1324), 1,
      anon_sym_var,
    ACTIONS(1328), 1,
      sym_identifier,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(801), 1,
      sym_parameter,
    STATE(1083), 1,
      sym_parameter_list,
    STATE(1135), 1,
      sym_modifier,
  [17513] = 1,
    ACTIONS(1336), 6,
      anon_sym_RBRACE,
      anon_sym_trigger,
      anon_sym_var,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
  [17522] = 4,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 1,
      aux_sym__quoted_identifier_token1,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1342), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17536] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(683), 1,
      sym__table_reference,
    ACTIONS(1247), 2,
      sym_identifier,
      sym_integer,
  [17550] = 3,
    ACTIONS(1344), 1,
      anon_sym_LBRACK,
    ACTIONS(1347), 2,
      sym_procedure_modifier,
      anon_sym_procedure,
    STATE(663), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [17562] = 5,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      sym_identifier,
    ACTIONS(1349), 1,
      sym_string_literal,
    STATE(793), 1,
      sym_option_member,
    STATE(953), 1,
      sym__quoted_identifier,
  [17578] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(1137), 1,
      sym_page_id_value,
    STATE(1200), 1,
      sym__quoted_identifier,
    ACTIONS(1351), 2,
      sym_identifier,
      sym_integer,
  [17592] = 4,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
    ACTIONS(1355), 1,
      aux_sym__quoted_identifier_token1,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1358), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17606] = 5,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1361), 1,
      sym_identifier,
    STATE(770), 1,
      sym_key_field,
    STATE(904), 1,
      sym__quoted_identifier,
    STATE(1192), 1,
      sym_key_field_list,
  [17622] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(990), 1,
      sym__table_reference,
    ACTIONS(1247), 2,
      sym_identifier,
      sym_integer,
  [17636] = 4,
    ACTIONS(1363), 1,
      anon_sym_SEMI,
    ACTIONS(1365), 1,
      anon_sym_DOT,
    STATE(1263), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17650] = 5,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(965), 1,
      sym__quoted_identifier,
    STATE(1014), 1,
      sym_where_condition,
    STATE(1086), 1,
      sym__condition_field_reference,
  [17666] = 3,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(1369), 2,
      sym_procedure_modifier,
      anon_sym_procedure,
    STATE(663), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [17678] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(553), 1,
      sym__quoted_identifier,
    STATE(631), 1,
      sym__table_reference,
    ACTIONS(1247), 2,
      sym_identifier,
      sym_integer,
  [17692] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(1140), 1,
      sym__quoted_identifier,
    ACTIONS(1371), 3,
      sym_identifier,
      sym_integer,
      sym_string_literal,
  [17704] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(639), 1,
      sym_query_type_value,
    STATE(645), 1,
      sym__quoted_identifier,
    ACTIONS(1373), 2,
      sym_identifier,
      sym_integer,
  [17718] = 2,
    STATE(1273), 1,
      sym_table_type_value,
    ACTIONS(1375), 4,
      anon_sym_Normal,
      anon_sym_Temporary,
      anon_sym_External,
      anon_sym_System,
  [17728] = 4,
    ACTIONS(1340), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1377), 1,
      anon_sym_DQUOTE,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1342), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17742] = 4,
    ACTIONS(1340), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1379), 1,
      anon_sym_DQUOTE,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1342), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17756] = 4,
    ACTIONS(1340), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1342), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17770] = 5,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(965), 1,
      sym__quoted_identifier,
    STATE(981), 1,
      sym_lookup_where_condition,
    STATE(1025), 1,
      sym__condition_field_reference,
  [17786] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1383), 1,
      sym_identifier,
    STATE(1209), 1,
      sym_table_filter,
    STATE(1210), 2,
      sym__field_reference,
      sym__quoted_identifier,
  [17800] = 4,
    ACTIONS(1340), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1385), 1,
      anon_sym_DQUOTE,
    STATE(666), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1342), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [17814] = 3,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    STATE(958), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [17825] = 3,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(1097), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17836] = 3,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(1099), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17847] = 3,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(1101), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17858] = 3,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(1104), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17869] = 3,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(1125), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [17880] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      sym_identifier,
    STATE(1381), 1,
      sym_object_name,
    STATE(1394), 1,
      sym__quoted_identifier,
  [17893] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1403), 1,
      sym_identifier,
    STATE(1358), 2,
      sym__table_identifier,
      sym__quoted_identifier,
  [17904] = 3,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(1408), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [17915] = 4,
    ACTIONS(1410), 1,
      anon_sym_tabledata,
    STATE(988), 1,
      sym_tabledata_permission,
    STATE(1137), 1,
      sym_permissions_value,
    STATE(1142), 1,
      sym_tabledata_permission_list,
  [17928] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(370), 1,
      sym_code_block,
    STATE(885), 1,
      sym_var_section,
  [17941] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(373), 1,
      sym_code_block,
    STATE(909), 1,
      sym_var_section,
  [17954] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(375), 1,
      sym_code_block,
    STATE(959), 1,
      sym_var_section,
  [17967] = 3,
    ACTIONS(1416), 1,
      anon_sym_RBRACE,
    ACTIONS(1418), 1,
      anon_sym_field,
    STATE(729), 2,
      sym_field_declaration,
      aux_sym_fields_repeat1,
  [17978] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(380), 1,
      sym_code_block,
    STATE(979), 1,
      sym_var_section,
  [17991] = 3,
    ACTIONS(1420), 1,
      anon_sym_RBRACE,
    ACTIONS(1422), 1,
      anon_sym_key,
    STATE(730), 2,
      sym_key_declaration,
      aux_sym_keys_repeat1,
  [18002] = 2,
    STATE(1137), 1,
      sym_subtype_value,
    ACTIONS(1424), 3,
      anon_sym_Install,
      anon_sym_Upgrade,
      anon_sym_Test,
  [18011] = 4,
    ACTIONS(1426), 1,
      anon_sym_field,
    ACTIONS(1428), 1,
      anon_sym_CONST,
    ACTIONS(1430), 1,
      anon_sym_FIELD,
    STATE(1268), 1,
      sym_field_ref,
  [18024] = 3,
    ACTIONS(616), 1,
      anon_sym_begin,
    ACTIONS(1432), 1,
      sym_identifier,
    STATE(701), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
  [18035] = 3,
    ACTIONS(597), 1,
      anon_sym_begin,
    ACTIONS(1434), 1,
      sym_identifier,
    STATE(701), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
  [18046] = 3,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(887), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18057] = 3,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(1304), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18068] = 3,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(1317), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18079] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(395), 1,
      sym_code_block,
    STATE(911), 1,
      sym_var_section,
  [18092] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(400), 1,
      sym_code_block,
    STATE(916), 1,
      sym_var_section,
  [18105] = 3,
    STATE(1137), 1,
      sym_single_instance_value,
    STATE(1169), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18116] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(403), 1,
      sym_code_block,
    STATE(920), 1,
      sym_var_section,
  [18129] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(408), 1,
      sym_code_block,
    STATE(931), 1,
      sym_var_section,
  [18142] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(216), 1,
      sym_code_block,
    STATE(933), 1,
      sym_var_section,
  [18155] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(258), 1,
      sym_code_block,
    STATE(942), 1,
      sym_var_section,
  [18168] = 2,
    STATE(1057), 1,
      sym_field_class_value,
    ACTIONS(1443), 3,
      anon_sym_FlowField,
      anon_sym_FlowFilter,
      anon_sym_Normal,
  [18177] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(1017), 1,
      sym__quoted_identifier,
    ACTIONS(1445), 2,
      sym_identifier,
      sym_integer,
  [18188] = 3,
    STATE(1059), 1,
      sym_blank_zero_value,
    STATE(1293), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18199] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1361), 1,
      sym_identifier,
    STATE(904), 1,
      sym__quoted_identifier,
    STATE(974), 1,
      sym_key_field,
  [18212] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(269), 1,
      sym_code_block,
    STATE(982), 1,
      sym_var_section,
  [18225] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(274), 1,
      sym_code_block,
    STATE(987), 1,
      sym_var_section,
  [18238] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(276), 1,
      sym_code_block,
    STATE(1013), 1,
      sym_var_section,
  [18251] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(279), 1,
      sym_code_block,
    STATE(884), 1,
      sym_var_section,
  [18264] = 3,
    STATE(1060), 1,
      sym_editable_value,
    STATE(1294), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18275] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(640), 1,
      sym__quoted_identifier,
    ACTIONS(1447), 2,
      sym_identifier,
      sym_integer,
  [18286] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1449), 1,
      sym_identifier,
    STATE(1139), 2,
      sym__field_reference,
      sym__quoted_identifier,
  [18297] = 3,
    ACTIONS(1422), 1,
      anon_sym_key,
    ACTIONS(1451), 1,
      anon_sym_RBRACE,
    STATE(697), 2,
      sym_key_declaration,
      aux_sym_keys_repeat1,
  [18308] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1453), 1,
      sym_identifier,
    STATE(1141), 2,
      sym__field_reference,
      sym__quoted_identifier,
  [18319] = 1,
    ACTIONS(1455), 4,
      anon_sym_OnValidate,
      anon_sym_OnLookup,
      anon_sym_OnAssistEdit,
      anon_sym_OnDrillDown,
  [18326] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(965), 1,
      sym__quoted_identifier,
    STATE(1213), 1,
      sym__condition_field_reference,
  [18339] = 2,
    STATE(1137), 1,
      sym_field_class_value,
    ACTIONS(1443), 3,
      anon_sym_FlowField,
      anon_sym_FlowFilter,
      anon_sym_Normal,
  [18348] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      sym_identifier,
    STATE(1039), 1,
      sym_object_name,
    STATE(1394), 1,
      sym__quoted_identifier,
  [18361] = 3,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    ACTIONS(1459), 1,
      anon_sym_field,
    STATE(729), 2,
      sym_field_declaration,
      aux_sym_fields_repeat1,
  [18372] = 3,
    ACTIONS(1462), 1,
      anon_sym_RBRACE,
    ACTIONS(1464), 1,
      anon_sym_key,
    STATE(730), 2,
      sym_key_declaration,
      aux_sym_keys_repeat1,
  [18383] = 3,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
    STATE(996), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18394] = 3,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(1088), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18405] = 3,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(1089), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18416] = 3,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(997), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18427] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(295), 1,
      sym_code_block,
    STATE(881), 1,
      sym_var_section,
  [18440] = 3,
    STATE(1137), 1,
      sym_blank_zero_value,
    STATE(1293), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18451] = 3,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    STATE(895), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18462] = 3,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(1154), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18473] = 3,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(1155), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18484] = 3,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    STATE(896), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18495] = 4,
    ACTIONS(1412), 1,
      anon_sym_var,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(352), 1,
      sym_code_block,
    STATE(908), 1,
      sym_var_section,
  [18508] = 3,
    STATE(1137), 1,
      sym_editable_value,
    STATE(1294), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18519] = 3,
    ACTIONS(1418), 1,
      anon_sym_field,
    ACTIONS(1483), 1,
      anon_sym_RBRACE,
    STATE(695), 2,
      sym_field_declaration,
      aux_sym_fields_repeat1,
  [18530] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1485), 1,
      sym_identifier,
    STATE(752), 2,
      sym__field_reference,
      sym__quoted_identifier,
  [18541] = 3,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(921), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18552] = 3,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(1214), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18563] = 3,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(1215), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18574] = 3,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(922), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18585] = 4,
    ACTIONS(1324), 1,
      anon_sym_var,
    ACTIONS(1328), 1,
      sym_identifier,
    STATE(917), 1,
      sym_parameter,
    STATE(1135), 1,
      sym_modifier,
  [18598] = 3,
    ACTIONS(1495), 1,
      aux_sym__quoted_identifier_token1,
    STATE(676), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1497), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [18609] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1499), 1,
      sym_identifier,
    STATE(905), 1,
      sym_field_reference,
    STATE(1222), 1,
      sym__quoted_identifier,
  [18622] = 3,
    ACTIONS(1501), 1,
      anon_sym_SEMI,
    STATE(1077), 1,
      sym_where_clause,
    ACTIONS(1367), 2,
      anon_sym_WHERE,
      anon_sym_where,
  [18633] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1499), 1,
      sym_identifier,
    STATE(684), 1,
      sym_field_reference,
    STATE(1222), 1,
      sym__quoted_identifier,
  [18646] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1499), 1,
      sym_identifier,
    STATE(685), 1,
      sym_field_reference,
    STATE(1222), 1,
      sym__quoted_identifier,
  [18659] = 3,
    ACTIONS(1503), 1,
      aux_sym__quoted_identifier_token1,
    STATE(677), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1505), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [18670] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1499), 1,
      sym_identifier,
    STATE(686), 1,
      sym_field_reference,
    STATE(1222), 1,
      sym__quoted_identifier,
  [18683] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1499), 1,
      sym_identifier,
    STATE(687), 1,
      sym_field_reference,
    STATE(1222), 1,
      sym__quoted_identifier,
  [18696] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      sym_identifier,
    STATE(953), 1,
      sym__quoted_identifier,
    STATE(1011), 1,
      sym_option_member,
  [18709] = 3,
    ACTIONS(1507), 1,
      aux_sym__quoted_identifier_token1,
    STATE(678), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1509), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [18720] = 3,
    ACTIONS(1511), 1,
      aux_sym__quoted_identifier_token1,
    STATE(681), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1513), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [18731] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(1016), 1,
      sym__quoted_identifier,
    ACTIONS(1515), 2,
      sym_identifier,
      sym_integer,
  [18742] = 3,
    ACTIONS(1517), 1,
      aux_sym__quoted_identifier_token1,
    STATE(661), 1,
      aux_sym__quoted_identifier_repeat1,
    ACTIONS(1519), 2,
      aux_sym__quoted_identifier_token2,
      aux_sym__quoted_identifier_token3,
  [18753] = 3,
    ACTIONS(1521), 1,
      sym_identifier,
    ACTIONS(1523), 1,
      sym_integer,
    ACTIONS(1525), 1,
      sym_string_literal,
  [18763] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1527), 1,
      sym_identifier,
    STATE(1385), 1,
      sym__quoted_identifier,
  [18773] = 3,
    ACTIONS(1529), 1,
      anon_sym_SEMI,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    STATE(815), 1,
      aux_sym_parameter_list_repeat1,
  [18783] = 1,
    ACTIONS(1533), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_codeunit,
  [18789] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1535), 1,
      sym_identifier,
    STATE(1321), 1,
      sym__quoted_identifier,
  [18799] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1537), 1,
      sym_identifier,
    STATE(1323), 1,
      sym__quoted_identifier,
  [18809] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [18819] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    STATE(779), 1,
      aux_sym_key_field_list_repeat1,
  [18829] = 1,
    ACTIONS(1545), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_codeunit,
  [18835] = 1,
    ACTIONS(1547), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_codeunit,
  [18841] = 3,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      aux_sym_where_conditions_repeat1,
  [18851] = 1,
    ACTIONS(1553), 3,
      anon_sym_RPAREN,
      anon_sym_WHERE,
      anon_sym_where,
  [18857] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
    STATE(865), 1,
      aux_sym_option_members_value_repeat1,
  [18867] = 1,
    ACTIONS(1559), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_codeunit,
  [18873] = 3,
    ACTIONS(1561), 1,
      anon_sym_COMMA,
    ACTIONS(1564), 1,
      anon_sym_SEMI,
    STATE(777), 1,
      aux_sym_option_members_value_repeat1,
  [18883] = 1,
    ACTIONS(1566), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_codeunit,
  [18889] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
    STATE(788), 1,
      aux_sym_key_field_list_repeat1,
  [18899] = 2,
    ACTIONS(1570), 1,
      anon_sym_LBRACE,
    ACTIONS(1572), 2,
      anon_sym_RBRACE,
      anon_sym_key,
  [18907] = 3,
    ACTIONS(1574), 1,
      anon_sym_COMMA,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      aux_sym_where_conditions_repeat1,
  [18917] = 3,
    ACTIONS(1579), 1,
      anon_sym_COMMA,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(808), 1,
      aux_sym_lookup_where_conditions_repeat1,
  [18927] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1583), 1,
      anon_sym_COLON,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [18937] = 2,
    STATE(1250), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [18945] = 3,
    ACTIONS(1585), 1,
      sym_identifier,
    ACTIONS(1587), 1,
      sym_integer,
    ACTIONS(1589), 1,
      sym_string_literal,
  [18955] = 3,
    ACTIONS(1591), 1,
      sym_identifier,
    ACTIONS(1593), 1,
      sym_integer,
    ACTIONS(1595), 1,
      sym_string_literal,
  [18965] = 2,
    ACTIONS(1597), 1,
      sym_identifier,
    STATE(620), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
  [18973] = 3,
    ACTIONS(1599), 1,
      anon_sym_COMMA,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    STATE(788), 1,
      aux_sym_key_field_list_repeat1,
  [18983] = 1,
    ACTIONS(1604), 3,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
  [18989] = 3,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(1606), 1,
      sym_identifier,
    STATE(118), 1,
      sym__quoted_identifier,
  [18999] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1608), 1,
      sym_identifier,
    STATE(1189), 1,
      sym__quoted_identifier,
  [19009] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1610), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [19019] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    ACTIONS(1612), 1,
      anon_sym_SEMI,
    STATE(827), 1,
      aux_sym_option_members_value_repeat1,
  [19029] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
    STATE(796), 1,
      aux_sym_set_filter_statement_repeat1,
  [19039] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1618), 1,
      anon_sym_RPAREN,
    STATE(797), 1,
      aux_sym_set_filter_statement_repeat1,
  [19049] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19059] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19069] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1624), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [19079] = 2,
    ACTIONS(1626), 1,
      sym_identifier,
    STATE(700), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
  [19087] = 3,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1628), 1,
      sym_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
  [19097] = 3,
    ACTIONS(1529), 1,
      anon_sym_SEMI,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      aux_sym_parameter_list_repeat1,
  [19107] = 1,
    ACTIONS(1632), 3,
      anon_sym_LBRACK,
      sym_procedure_modifier,
      anon_sym_procedure,
  [19113] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1634), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [19123] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1636), 1,
      anon_sym_RPAREN,
    STATE(806), 1,
      aux_sym_set_filter_statement_repeat1,
  [19133] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
    STATE(807), 1,
      aux_sym_set_filter_statement_repeat1,
  [19143] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1640), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19153] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19163] = 3,
    ACTIONS(1579), 1,
      anon_sym_COMMA,
    ACTIONS(1644), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      aux_sym_lookup_where_conditions_repeat1,
  [19173] = 2,
    STATE(1343), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19181] = 3,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(1646), 1,
      sym_identifier,
    STATE(84), 1,
      sym__quoted_identifier,
  [19191] = 2,
    ACTIONS(1650), 1,
      anon_sym_LBRACK,
    ACTIONS(1648), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [19199] = 2,
    STATE(1137), 1,
      sym_table_no_value,
    ACTIONS(1652), 2,
      sym_identifier,
      sym_integer,
  [19207] = 3,
    ACTIONS(1654), 1,
      anon_sym_COMMA,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19217] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [19227] = 3,
    ACTIONS(1661), 1,
      anon_sym_SEMI,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
    STATE(815), 1,
      aux_sym_parameter_list_repeat1,
  [19237] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1666), 1,
      anon_sym_RPAREN,
    STATE(818), 1,
      aux_sym_set_filter_statement_repeat1,
  [19247] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1668), 1,
      anon_sym_RPAREN,
    STATE(819), 1,
      aux_sym_set_filter_statement_repeat1,
  [19257] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1670), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19267] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1672), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19277] = 2,
    ACTIONS(1674), 1,
      sym_identifier,
    STATE(158), 2,
      sym_variable_declaration,
      aux_sym_var_section_repeat1,
  [19285] = 3,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(1676), 1,
      sym_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
  [19295] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_expression_list_repeat1,
  [19305] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
    STATE(874), 1,
      aux_sym_set_filter_statement_repeat1,
  [19315] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
    STATE(875), 1,
      aux_sym_set_filter_statement_repeat1,
  [19325] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1684), 1,
      sym_identifier,
    STATE(568), 1,
      sym__quoted_identifier,
  [19335] = 2,
    ACTIONS(1686), 1,
      anon_sym_LBRACE,
    ACTIONS(1688), 2,
      anon_sym_RBRACE,
      anon_sym_field,
  [19343] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    ACTIONS(1690), 1,
      anon_sym_SEMI,
    STATE(777), 1,
      aux_sym_option_members_value_repeat1,
  [19353] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1692), 1,
      sym_identifier,
    STATE(347), 1,
      sym__quoted_identifier,
  [19363] = 2,
    STATE(1093), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19371] = 3,
    ACTIONS(1694), 1,
      sym_identifier,
    ACTIONS(1696), 1,
      sym_integer,
    ACTIONS(1698), 1,
      sym_string_literal,
  [19381] = 3,
    ACTIONS(1700), 1,
      sym_identifier,
    ACTIONS(1702), 1,
      sym_integer,
    ACTIONS(1704), 1,
      sym_string_literal,
  [19391] = 2,
    STATE(1102), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19399] = 3,
    ACTIONS(1706), 1,
      sym_identifier,
    ACTIONS(1708), 1,
      sym_integer,
    ACTIONS(1710), 1,
      sym_string_literal,
  [19409] = 3,
    ACTIONS(1712), 1,
      sym_identifier,
    ACTIONS(1714), 1,
      sym_integer,
    ACTIONS(1716), 1,
      sym_string_literal,
  [19419] = 3,
    ACTIONS(1718), 1,
      sym_identifier,
    ACTIONS(1720), 1,
      sym_integer,
    ACTIONS(1722), 1,
      sym_string_literal,
  [19429] = 3,
    ACTIONS(1724), 1,
      sym_identifier,
    ACTIONS(1726), 1,
      sym_integer,
    ACTIONS(1728), 1,
      sym_string_literal,
  [19439] = 3,
    ACTIONS(1730), 1,
      sym_identifier,
    ACTIONS(1732), 1,
      sym_integer,
    ACTIONS(1734), 1,
      sym_string_literal,
  [19449] = 3,
    ACTIONS(1736), 1,
      sym_identifier,
    ACTIONS(1738), 1,
      sym_integer,
    ACTIONS(1740), 1,
      sym_string_literal,
  [19459] = 3,
    ACTIONS(1742), 1,
      anon_sym_RBRACK,
    ACTIONS(1744), 1,
      anon_sym_LPAREN,
    STATE(1040), 1,
      sym_attribute_arguments,
  [19469] = 3,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
    ACTIONS(1746), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      aux_sym_where_conditions_repeat1,
  [19479] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1748), 1,
      sym_identifier,
    STATE(550), 1,
      sym__quoted_identifier,
  [19489] = 2,
    STATE(1159), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19497] = 3,
    ACTIONS(1750), 1,
      sym_identifier,
    ACTIONS(1752), 1,
      sym_integer,
    ACTIONS(1754), 1,
      sym_string_literal,
  [19507] = 3,
    ACTIONS(1756), 1,
      sym_identifier,
    ACTIONS(1758), 1,
      sym_integer,
    ACTIONS(1760), 1,
      sym_string_literal,
  [19517] = 2,
    STATE(1168), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19525] = 3,
    ACTIONS(1762), 1,
      sym_identifier,
    ACTIONS(1764), 1,
      sym_integer,
    ACTIONS(1766), 1,
      sym_string_literal,
  [19535] = 3,
    ACTIONS(1768), 1,
      sym_identifier,
    ACTIONS(1770), 1,
      sym_integer,
    ACTIONS(1772), 1,
      sym_string_literal,
  [19545] = 3,
    ACTIONS(1774), 1,
      sym_identifier,
    ACTIONS(1776), 1,
      sym_integer,
    ACTIONS(1778), 1,
      sym_string_literal,
  [19555] = 3,
    ACTIONS(1780), 1,
      sym_identifier,
    ACTIONS(1782), 1,
      sym_integer,
    ACTIONS(1784), 1,
      sym_string_literal,
  [19565] = 3,
    ACTIONS(1786), 1,
      sym_identifier,
    ACTIONS(1788), 1,
      sym_integer,
    ACTIONS(1790), 1,
      sym_string_literal,
  [19575] = 3,
    ACTIONS(1792), 1,
      sym_identifier,
    ACTIONS(1794), 1,
      sym_integer,
    ACTIONS(1796), 1,
      sym_string_literal,
  [19585] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1798), 1,
      sym_identifier,
    STATE(774), 1,
      sym__quoted_identifier,
  [19595] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1800), 1,
      sym_identifier,
    STATE(565), 1,
      sym__quoted_identifier,
  [19605] = 3,
    ACTIONS(1802), 1,
      anon_sym_COMMA,
    ACTIONS(1805), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      aux_sym_lookup_where_conditions_repeat1,
  [19615] = 2,
    STATE(1219), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19623] = 3,
    ACTIONS(1807), 1,
      sym_identifier,
    ACTIONS(1809), 1,
      sym_integer,
    ACTIONS(1811), 1,
      sym_string_literal,
  [19633] = 3,
    ACTIONS(1813), 1,
      sym_identifier,
    ACTIONS(1815), 1,
      sym_integer,
    ACTIONS(1817), 1,
      sym_string_literal,
  [19643] = 2,
    STATE(1228), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19651] = 3,
    ACTIONS(1819), 1,
      sym_identifier,
    ACTIONS(1821), 1,
      sym_integer,
    ACTIONS(1823), 1,
      sym_string_literal,
  [19661] = 3,
    ACTIONS(1825), 1,
      sym_identifier,
    ACTIONS(1827), 1,
      sym_integer,
    ACTIONS(1829), 1,
      sym_string_literal,
  [19671] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1831), 1,
      sym_identifier,
    STATE(1387), 1,
      sym__quoted_identifier,
  [19681] = 3,
    ACTIONS(1833), 1,
      sym_identifier,
    ACTIONS(1835), 1,
      sym_integer,
    ACTIONS(1837), 1,
      sym_string_literal,
  [19691] = 3,
    ACTIONS(1839), 1,
      sym_identifier,
    ACTIONS(1841), 1,
      sym_integer,
    ACTIONS(1843), 1,
      sym_string_literal,
  [19701] = 3,
    ACTIONS(1845), 1,
      sym_identifier,
    ACTIONS(1847), 1,
      sym_integer,
    ACTIONS(1849), 1,
      sym_string_literal,
  [19711] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    ACTIONS(1851), 1,
      anon_sym_SEMI,
    STATE(777), 1,
      aux_sym_option_members_value_repeat1,
  [19721] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1853), 1,
      sym_identifier,
    STATE(581), 1,
      sym__quoted_identifier,
  [19731] = 3,
    ACTIONS(1855), 1,
      sym_identifier,
    ACTIONS(1857), 1,
      sym_integer,
    ACTIONS(1859), 1,
      sym_string_literal,
  [19741] = 3,
    ACTIONS(1861), 1,
      sym_identifier,
    ACTIONS(1863), 1,
      sym_integer,
    ACTIONS(1865), 1,
      sym_string_literal,
  [19751] = 3,
    ACTIONS(1867), 1,
      sym_identifier,
    ACTIONS(1869), 1,
      sym_integer,
    ACTIONS(1871), 1,
      sym_string_literal,
  [19761] = 3,
    ACTIONS(1873), 1,
      sym_identifier,
    ACTIONS(1875), 1,
      sym_integer,
    ACTIONS(1877), 1,
      sym_string_literal,
  [19771] = 3,
    ACTIONS(1410), 1,
      anon_sym_tabledata,
    STATE(988), 1,
      sym_tabledata_permission,
    STATE(1396), 1,
      sym_tabledata_permission_list,
  [19781] = 3,
    ACTIONS(1879), 1,
      sym_identifier,
    ACTIONS(1881), 1,
      sym_integer,
    ACTIONS(1883), 1,
      sym_string_literal,
  [19791] = 3,
    ACTIONS(1885), 1,
      sym_identifier,
    ACTIONS(1887), 1,
      sym_integer,
    ACTIONS(1889), 1,
      sym_string_literal,
  [19801] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1891), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19811] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1893), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      aux_sym_set_filter_statement_repeat1,
  [19821] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1895), 1,
      sym_identifier,
    STATE(1367), 1,
      sym__quoted_identifier,
  [19831] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1897), 1,
      sym_identifier,
    STATE(1369), 1,
      sym__quoted_identifier,
  [19841] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1899), 1,
      sym_identifier,
    STATE(1377), 1,
      sym__quoted_identifier,
  [19851] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(1901), 1,
      sym_identifier,
    STATE(1379), 1,
      sym__quoted_identifier,
  [19861] = 2,
    STATE(1201), 1,
      sym_boolean,
    ACTIONS(1389), 2,
      anon_sym_true,
      anon_sym_false,
  [19869] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(342), 1,
      sym_code_block,
  [19876] = 2,
    ACTIONS(1903), 1,
      sym_identifier,
    STATE(1133), 1,
      sym__procedure_name,
  [19883] = 2,
    ACTIONS(1905), 1,
      anon_sym_SEMI,
    ACTIONS(1907), 1,
      sym_temporary,
  [19890] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(338), 1,
      sym_code_block,
  [19897] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(399), 1,
      sym_code_block,
  [19904] = 2,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_argument_list,
  [19911] = 2,
    ACTIONS(1909), 1,
      anon_sym_COMMA,
    ACTIONS(1911), 1,
      anon_sym_RPAREN,
  [19918] = 2,
    ACTIONS(1913), 1,
      anon_sym_field,
    ACTIONS(1915), 1,
      anon_sym_const,
  [19925] = 2,
    ACTIONS(1903), 1,
      sym_identifier,
    STATE(1252), 1,
      sym__procedure_name,
  [19932] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(372), 1,
      sym_code_block,
  [19939] = 2,
    ACTIONS(1903), 1,
      sym_identifier,
    STATE(1071), 1,
      sym__procedure_name,
  [19946] = 2,
    ACTIONS(1917), 1,
      anon_sym_RPAREN,
    ACTIONS(1919), 1,
      sym_integer,
  [19953] = 2,
    ACTIONS(1921), 1,
      sym_procedure_modifier,
    ACTIONS(1923), 1,
      anon_sym_procedure,
  [19960] = 1,
    ACTIONS(1925), 2,
      anon_sym_var,
      anon_sym_begin,
  [19965] = 2,
    ACTIONS(1927), 1,
      anon_sym_COMMA,
    ACTIONS(1929), 1,
      anon_sym_RPAREN,
  [19972] = 2,
    ACTIONS(1931), 1,
      anon_sym_COMMA,
    ACTIONS(1933), 1,
      anon_sym_RPAREN,
  [19979] = 2,
    ACTIONS(1935), 1,
      anon_sym_COMMA,
    ACTIONS(1937), 1,
      anon_sym_RPAREN,
  [19986] = 2,
    ACTIONS(1939), 1,
      anon_sym_COMMA,
    ACTIONS(1941), 1,
      anon_sym_RPAREN,
  [19993] = 2,
    ACTIONS(1943), 1,
      anon_sym_COMMA,
    ACTIONS(1945), 1,
      anon_sym_RPAREN,
  [20000] = 2,
    ACTIONS(1947), 1,
      anon_sym_COMMA,
    ACTIONS(1949), 1,
      anon_sym_RPAREN,
  [20007] = 2,
    ACTIONS(1951), 1,
      anon_sym_COMMA,
    ACTIONS(1953), 1,
      anon_sym_RPAREN,
  [20014] = 2,
    ACTIONS(1955), 1,
      anon_sym_COMMA,
    ACTIONS(1957), 1,
      anon_sym_RPAREN,
  [20021] = 2,
    ACTIONS(1959), 1,
      sym_integer,
    STATE(688), 1,
      sym_object_id,
  [20028] = 1,
    ACTIONS(1961), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20033] = 2,
    ACTIONS(1963), 1,
      anon_sym_RPAREN,
    ACTIONS(1965), 1,
      anon_sym_where,
  [20040] = 1,
    ACTIONS(1967), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20045] = 1,
    ACTIONS(1969), 2,
      anon_sym_var,
      anon_sym_begin,
  [20050] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(374), 1,
      sym_code_block,
  [20057] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(401), 1,
      sym_code_block,
  [20064] = 1,
    ACTIONS(1971), 2,
      anon_sym_var,
      anon_sym_begin,
  [20069] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(267), 1,
      sym_code_block,
  [20076] = 2,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_argument_list,
  [20083] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(268), 1,
      sym_code_block,
  [20090] = 1,
    ACTIONS(1973), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [20095] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(363), 1,
      sym_code_block,
  [20102] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(270), 1,
      sym_code_block,
  [20109] = 1,
    ACTIONS(1664), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [20114] = 2,
    ACTIONS(1975), 1,
      anon_sym_RPAREN,
    ACTIONS(1977), 1,
      sym_integer,
  [20121] = 2,
    ACTIONS(1410), 1,
      anon_sym_tabledata,
    STATE(1197), 1,
      sym_tabledata_permission,
  [20128] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(272), 1,
      sym_code_block,
  [20135] = 2,
    ACTIONS(1979), 1,
      anon_sym_COMMA,
    ACTIONS(1981), 1,
      anon_sym_RPAREN,
  [20142] = 2,
    ACTIONS(1983), 1,
      anon_sym_COMMA,
    ACTIONS(1985), 1,
      anon_sym_RPAREN,
  [20149] = 2,
    ACTIONS(1987), 1,
      anon_sym_COMMA,
    ACTIONS(1989), 1,
      anon_sym_RPAREN,
  [20156] = 2,
    ACTIONS(1991), 1,
      anon_sym_COMMA,
    ACTIONS(1993), 1,
      anon_sym_RPAREN,
  [20163] = 2,
    ACTIONS(1995), 1,
      anon_sym_COMMA,
    ACTIONS(1997), 1,
      anon_sym_RPAREN,
  [20170] = 2,
    ACTIONS(1999), 1,
      anon_sym_COMMA,
    ACTIONS(2001), 1,
      anon_sym_RPAREN,
  [20177] = 2,
    ACTIONS(2003), 1,
      anon_sym_COMMA,
    ACTIONS(2005), 1,
      anon_sym_RPAREN,
  [20184] = 2,
    ACTIONS(2007), 1,
      anon_sym_COMMA,
    ACTIONS(2009), 1,
      anon_sym_RPAREN,
  [20191] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(273), 1,
      sym_code_block,
  [20198] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(366), 1,
      sym_code_block,
  [20205] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(275), 1,
      sym_code_block,
  [20212] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(367), 1,
      sym_code_block,
  [20219] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(277), 1,
      sym_code_block,
  [20226] = 2,
    ACTIONS(2011), 1,
      anon_sym_COMMA,
    ACTIONS(2013), 1,
      anon_sym_RPAREN,
  [20233] = 2,
    ACTIONS(2015), 1,
      anon_sym_COMMA,
    ACTIONS(2017), 1,
      anon_sym_RPAREN,
  [20240] = 2,
    ACTIONS(2019), 1,
      anon_sym_COMMA,
    ACTIONS(2021), 1,
      anon_sym_RPAREN,
  [20247] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(278), 1,
      sym_code_block,
  [20254] = 2,
    ACTIONS(2023), 1,
      anon_sym_COMMA,
    ACTIONS(2025), 1,
      anon_sym_RPAREN,
  [20261] = 2,
    ACTIONS(2027), 1,
      anon_sym_COMMA,
    ACTIONS(2029), 1,
      anon_sym_RPAREN,
  [20268] = 2,
    ACTIONS(2031), 1,
      anon_sym_COMMA,
    ACTIONS(2033), 1,
      anon_sym_RPAREN,
  [20275] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(368), 1,
      sym_code_block,
  [20282] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(281), 1,
      sym_code_block,
  [20289] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(381), 1,
      sym_code_block,
  [20296] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(379), 1,
      sym_code_block,
  [20303] = 2,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_argument_list,
  [20310] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(384), 1,
      sym_code_block,
  [20317] = 1,
    ACTIONS(2035), 2,
      anon_sym_RBRACE,
      anon_sym_key,
  [20322] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(385), 1,
      sym_code_block,
  [20329] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(349), 1,
      sym_code_block,
  [20336] = 1,
    ACTIONS(2037), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20341] = 1,
    ACTIONS(2039), 2,
      anon_sym_RBRACE,
      anon_sym_field,
  [20346] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(660), 1,
      sym_code_block,
  [20353] = 1,
    ACTIONS(2041), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20358] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(402), 1,
      sym_code_block,
  [20365] = 1,
    ACTIONS(2043), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20370] = 2,
    ACTIONS(1959), 1,
      sym_integer,
    STATE(728), 1,
      sym_object_id,
  [20377] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(388), 1,
      sym_code_block,
  [20384] = 2,
    ACTIONS(2045), 1,
      anon_sym_COMMA,
    ACTIONS(2047), 1,
      anon_sym_RPAREN,
  [20391] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(404), 1,
      sym_code_block,
  [20398] = 2,
    ACTIONS(2049), 1,
      anon_sym_begin,
    STATE(618), 1,
      sym_code_block,
  [20405] = 2,
    ACTIONS(2051), 1,
      anon_sym_SEMI,
    ACTIONS(2053), 1,
      sym_temporary,
  [20412] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(1202), 1,
      sym_code_block,
  [20419] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(393), 1,
      sym_code_block,
  [20426] = 2,
    ACTIONS(2055), 1,
      sym_string_literal,
    STATE(1137), 1,
      sym_option_caption_value,
  [20433] = 1,
    ACTIONS(2057), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [20438] = 1,
    ACTIONS(2059), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [20443] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(259), 1,
      sym_code_block,
  [20450] = 1,
    ACTIONS(2061), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20455] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(405), 1,
      sym_code_block,
  [20462] = 2,
    ACTIONS(2055), 1,
      sym_string_literal,
    STATE(1069), 1,
      sym_option_caption_value,
  [20469] = 2,
    ACTIONS(2063), 1,
      anon_sym_LBRACK,
    ACTIONS(2065), 1,
      anon_sym_RPAREN,
  [20476] = 2,
    ACTIONS(2065), 1,
      anon_sym_RPAREN,
    ACTIONS(2067), 1,
      anon_sym_LBRACK,
  [20483] = 2,
    ACTIONS(2069), 1,
      anon_sym_LBRACK,
    ACTIONS(2071), 1,
      anon_sym_RPAREN,
  [20490] = 1,
    ACTIONS(1602), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20495] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(260), 1,
      sym_code_block,
  [20502] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(215), 1,
      sym_code_block,
  [20509] = 1,
    ACTIONS(2073), 2,
      anon_sym_RBRACE,
      anon_sym_field,
  [20514] = 2,
    ACTIONS(2075), 1,
      anon_sym_SEMI,
    ACTIONS(2077), 1,
      sym_temporary,
  [20521] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(227), 1,
      sym_code_block,
  [20528] = 1,
    ACTIONS(2079), 2,
      anon_sym_RBRACE,
      anon_sym_key,
  [20533] = 1,
    ACTIONS(1805), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20538] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(283), 1,
      sym_code_block,
  [20545] = 2,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
    STATE(468), 1,
      sym_argument_list,
  [20552] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(261), 1,
      sym_code_block,
  [20559] = 1,
    ACTIONS(2081), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [20564] = 1,
    ACTIONS(2083), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20569] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(284), 1,
      sym_code_block,
  [20576] = 2,
    ACTIONS(2085), 1,
      anon_sym_COMMA,
    ACTIONS(2087), 1,
      anon_sym_SEMI,
  [20583] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(551), 1,
      sym_code_block,
  [20590] = 2,
    ACTIONS(2089), 1,
      anon_sym_SEMI,
    ACTIONS(2091), 1,
      anon_sym_ELSE,
  [20597] = 2,
    ACTIONS(2093), 1,
      anon_sym_RPAREN,
    ACTIONS(2095), 1,
      sym_integer,
  [20604] = 1,
    ACTIONS(2097), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [20609] = 1,
    ACTIONS(670), 2,
      sym_identifier,
      anon_sym_begin,
  [20614] = 1,
    ACTIONS(2099), 2,
      sym_identifier,
      anon_sym_DQUOTE,
  [20619] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(293), 1,
      sym_code_block,
  [20626] = 2,
    ACTIONS(2101), 1,
      anon_sym_COMMA,
    ACTIONS(2103), 1,
      anon_sym_RPAREN,
  [20633] = 2,
    ACTIONS(2105), 1,
      anon_sym_COMMA,
    ACTIONS(2107), 1,
      anon_sym_RPAREN,
  [20640] = 2,
    ACTIONS(2109), 1,
      anon_sym_COMMA,
    ACTIONS(2111), 1,
      anon_sym_RPAREN,
  [20647] = 2,
    ACTIONS(2113), 1,
      anon_sym_COMMA,
    ACTIONS(2115), 1,
      anon_sym_RPAREN,
  [20654] = 2,
    ACTIONS(2117), 1,
      anon_sym_COMMA,
    ACTIONS(2119), 1,
      anon_sym_RPAREN,
  [20661] = 2,
    ACTIONS(2121), 1,
      anon_sym_COMMA,
    ACTIONS(2123), 1,
      anon_sym_RPAREN,
  [20668] = 1,
    ACTIONS(666), 2,
      sym_identifier,
      anon_sym_begin,
  [20673] = 2,
    ACTIONS(2125), 1,
      anon_sym_COMMA,
    ACTIONS(2127), 1,
      anon_sym_RPAREN,
  [20680] = 2,
    ACTIONS(1903), 1,
      sym_identifier,
    STATE(1193), 1,
      sym__procedure_name,
  [20687] = 2,
    ACTIONS(2129), 1,
      anon_sym_COMMA,
    ACTIONS(2131), 1,
      anon_sym_RPAREN,
  [20694] = 2,
    ACTIONS(2133), 1,
      anon_sym_COLON,
    ACTIONS(2135), 1,
      anon_sym_RBRACK,
  [20701] = 2,
    ACTIONS(2137), 1,
      anon_sym_RPAREN,
    ACTIONS(2139), 1,
      sym_integer,
  [20708] = 2,
    ACTIONS(1426), 1,
      anon_sym_field,
    STATE(955), 1,
      sym_field_ref,
  [20715] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(394), 1,
      sym_code_block,
  [20722] = 2,
    ACTIONS(2141), 1,
      anon_sym_COLON,
    ACTIONS(2143), 1,
      anon_sym_RBRACK,
  [20729] = 1,
    ACTIONS(1564), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20734] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(369), 1,
      sym_code_block,
  [20741] = 2,
    ACTIONS(1414), 1,
      anon_sym_begin,
    STATE(296), 1,
      sym_code_block,
  [20748] = 1,
    ACTIONS(1577), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20753] = 1,
    ACTIONS(2145), 1,
      anon_sym_COMMA,
  [20757] = 1,
    ACTIONS(2147), 1,
      anon_sym_SEMI,
  [20761] = 1,
    ACTIONS(2149), 1,
      anon_sym_SEMI,
  [20765] = 1,
    ACTIONS(2151), 1,
      anon_sym_SEMI,
  [20769] = 1,
    ACTIONS(2153), 1,
      anon_sym_SEMI,
  [20773] = 1,
    ACTIONS(2155), 1,
      anon_sym_SEMI,
  [20777] = 1,
    ACTIONS(2157), 1,
      anon_sym_RPAREN,
  [20781] = 1,
    ACTIONS(2159), 1,
      anon_sym_RPAREN,
  [20785] = 1,
    ACTIONS(2161), 1,
      anon_sym_RPAREN,
  [20789] = 1,
    ACTIONS(2163), 1,
      anon_sym_EQ,
  [20793] = 1,
    ACTIONS(2165), 1,
      anon_sym_EQ,
  [20797] = 1,
    ACTIONS(2167), 1,
      anon_sym_RPAREN,
  [20801] = 1,
    ACTIONS(2169), 1,
      anon_sym_RPAREN,
  [20805] = 1,
    ACTIONS(2171), 1,
      sym_integer,
  [20809] = 1,
    ACTIONS(2173), 1,
      anon_sym_EQ,
  [20813] = 1,
    ACTIONS(2175), 1,
      sym_identifier,
  [20817] = 1,
    ACTIONS(2177), 1,
      anon_sym_LBRACK,
  [20821] = 1,
    ACTIONS(2179), 1,
      anon_sym_RPAREN,
  [20825] = 1,
    ACTIONS(2181), 1,
      sym_string_literal,
  [20829] = 1,
    ACTIONS(2183), 1,
      ts_builtin_sym_end,
  [20833] = 1,
    ACTIONS(2185), 1,
      anon_sym_EQ,
  [20837] = 1,
    ACTIONS(2187), 1,
      anon_sym_end,
  [20841] = 1,
    ACTIONS(2189), 1,
      anon_sym_RPAREN,
  [20845] = 1,
    ACTIONS(2191), 1,
      sym_permission_type,
  [20849] = 1,
    ACTIONS(2193), 1,
      anon_sym_LBRACE,
  [20853] = 1,
    ACTIONS(2195), 1,
      anon_sym_RBRACK,
  [20857] = 1,
    ACTIONS(2197), 1,
      anon_sym_RPAREN,
  [20861] = 1,
    ACTIONS(2199), 1,
      anon_sym_RPAREN,
  [20865] = 1,
    ACTIONS(2201), 1,
      anon_sym_EQ,
  [20869] = 1,
    ACTIONS(2203), 1,
      sym_string_literal,
  [20873] = 1,
    ACTIONS(2205), 1,
      sym_string_literal,
  [20877] = 1,
    ACTIONS(2207), 1,
      anon_sym_LPAREN_RPAREN,
  [20881] = 1,
    ACTIONS(2209), 1,
      anon_sym_RBRACK,
  [20885] = 1,
    ACTIONS(2211), 1,
      anon_sym_LPAREN_RPAREN,
  [20889] = 1,
    ACTIONS(2065), 1,
      anon_sym_RPAREN,
  [20893] = 1,
    ACTIONS(2213), 1,
      anon_sym_RPAREN,
  [20897] = 1,
    ACTIONS(2215), 1,
      sym_integer,
  [20901] = 1,
    ACTIONS(2067), 1,
      anon_sym_LBRACK,
  [20905] = 1,
    ACTIONS(2217), 1,
      anon_sym_LPAREN,
  [20909] = 1,
    ACTIONS(2219), 1,
      sym_identifier,
  [20913] = 1,
    ACTIONS(2221), 1,
      anon_sym_RPAREN,
  [20917] = 1,
    ACTIONS(2223), 1,
      anon_sym_SEMI,
  [20921] = 1,
    ACTIONS(2225), 1,
      anon_sym_SEMI,
  [20925] = 1,
    ACTIONS(2227), 1,
      anon_sym_SEMI,
  [20929] = 1,
    ACTIONS(2229), 1,
      anon_sym_SEMI,
  [20933] = 1,
    ACTIONS(2231), 1,
      anon_sym_SEMI,
  [20937] = 1,
    ACTIONS(2233), 1,
      anon_sym_RPAREN,
  [20941] = 1,
    ACTIONS(2235), 1,
      anon_sym_SEMI,
  [20945] = 1,
    ACTIONS(2237), 1,
      sym_integer,
  [20949] = 1,
    ACTIONS(2239), 1,
      anon_sym_LPAREN_RPAREN,
  [20953] = 1,
    ACTIONS(2241), 1,
      anon_sym_LPAREN,
  [20957] = 1,
    ACTIONS(2243), 1,
      sym_identifier,
  [20961] = 1,
    ACTIONS(1612), 1,
      anon_sym_SEMI,
  [20965] = 1,
    ACTIONS(2245), 1,
      anon_sym_RPAREN,
  [20969] = 1,
    ACTIONS(2247), 1,
      anon_sym_SEMI,
  [20973] = 1,
    ACTIONS(2249), 1,
      sym_identifier,
  [20977] = 1,
    ACTIONS(2251), 1,
      anon_sym_LPAREN,
  [20981] = 1,
    ACTIONS(2253), 1,
      anon_sym_LPAREN_RPAREN,
  [20985] = 1,
    ACTIONS(2255), 1,
      anon_sym_COLON,
  [20989] = 1,
    ACTIONS(2257), 1,
      sym_integer,
  [20993] = 1,
    ACTIONS(2259), 1,
      anon_sym_SEMI,
  [20997] = 1,
    ACTIONS(2261), 1,
      anon_sym_SEMI,
  [21001] = 1,
    ACTIONS(2263), 1,
      anon_sym_SEMI,
  [21005] = 1,
    ACTIONS(2265), 1,
      anon_sym_RPAREN,
  [21009] = 1,
    ACTIONS(2267), 1,
      anon_sym_RPAREN,
  [21013] = 1,
    ACTIONS(2269), 1,
      anon_sym_RPAREN,
  [21017] = 1,
    ACTIONS(2271), 1,
      anon_sym_RPAREN,
  [21021] = 1,
    ACTIONS(2273), 1,
      anon_sym_RPAREN,
  [21025] = 1,
    ACTIONS(2275), 1,
      anon_sym_RPAREN,
  [21029] = 1,
    ACTIONS(2277), 1,
      anon_sym_LPAREN_RPAREN,
  [21033] = 1,
    ACTIONS(2279), 1,
      sym_identifier,
  [21037] = 1,
    ACTIONS(2281), 1,
      anon_sym_EQ,
  [21041] = 1,
    ACTIONS(2283), 1,
      anon_sym_RPAREN,
  [21045] = 1,
    ACTIONS(2285), 1,
      anon_sym_RPAREN,
  [21049] = 1,
    ACTIONS(2287), 1,
      anon_sym_RPAREN,
  [21053] = 1,
    ACTIONS(2289), 1,
      anon_sym_RPAREN,
  [21057] = 1,
    ACTIONS(2291), 1,
      anon_sym_SEMI,
  [21061] = 1,
    ACTIONS(2293), 1,
      anon_sym_end,
  [21065] = 1,
    ACTIONS(2295), 1,
      anon_sym_RPAREN,
  [21069] = 1,
    ACTIONS(2297), 1,
      anon_sym_LPAREN,
  [21073] = 1,
    ACTIONS(2299), 1,
      anon_sym_SEMI,
  [21077] = 1,
    ACTIONS(2301), 1,
      anon_sym_RPAREN,
  [21081] = 1,
    ACTIONS(2303), 1,
      anon_sym_RPAREN,
  [21085] = 1,
    ACTIONS(2305), 1,
      anon_sym_SEMI,
  [21089] = 1,
    ACTIONS(2307), 1,
      anon_sym_RPAREN,
  [21093] = 1,
    ACTIONS(2309), 1,
      anon_sym_SEMI,
  [21097] = 1,
    ACTIONS(2311), 1,
      anon_sym_RPAREN,
  [21101] = 1,
    ACTIONS(2313), 1,
      anon_sym_RPAREN,
  [21105] = 1,
    ACTIONS(2315), 1,
      anon_sym_SEMI,
  [21109] = 1,
    ACTIONS(2317), 1,
      anon_sym_RPAREN,
  [21113] = 1,
    ACTIONS(2319), 1,
      anon_sym_RPAREN,
  [21117] = 1,
    ACTIONS(2321), 1,
      anon_sym_RPAREN,
  [21121] = 1,
    ACTIONS(2323), 1,
      anon_sym_RPAREN,
  [21125] = 1,
    ACTIONS(2325), 1,
      anon_sym_RPAREN,
  [21129] = 1,
    ACTIONS(2327), 1,
      anon_sym_RPAREN,
  [21133] = 1,
    ACTIONS(2329), 1,
      anon_sym_RPAREN,
  [21137] = 1,
    ACTIONS(2331), 1,
      anon_sym_RPAREN,
  [21141] = 1,
    ACTIONS(2333), 1,
      anon_sym_RPAREN,
  [21145] = 1,
    ACTIONS(2335), 1,
      anon_sym_RPAREN,
  [21149] = 1,
    ACTIONS(2337), 1,
      anon_sym_RPAREN,
  [21153] = 1,
    ACTIONS(2339), 1,
      anon_sym_RPAREN,
  [21157] = 1,
    ACTIONS(2341), 1,
      anon_sym_RPAREN,
  [21161] = 1,
    ACTIONS(2343), 1,
      anon_sym_RPAREN,
  [21165] = 1,
    ACTIONS(2345), 1,
      anon_sym_RPAREN,
  [21169] = 1,
    ACTIONS(2347), 1,
      anon_sym_RPAREN,
  [21173] = 1,
    ACTIONS(2349), 1,
      anon_sym_RPAREN,
  [21177] = 1,
    ACTIONS(2351), 1,
      anon_sym_RPAREN,
  [21181] = 1,
    ACTIONS(2353), 1,
      anon_sym_RPAREN,
  [21185] = 1,
    ACTIONS(2355), 1,
      anon_sym_EQ,
  [21189] = 1,
    ACTIONS(2357), 1,
      anon_sym_SEMI,
  [21193] = 1,
    ACTIONS(2359), 1,
      anon_sym_RPAREN,
  [21197] = 1,
    ACTIONS(2361), 1,
      anon_sym_LPAREN,
  [21201] = 1,
    ACTIONS(2363), 1,
      anon_sym_LPAREN_RPAREN,
  [21205] = 1,
    ACTIONS(2365), 1,
      sym_identifier,
  [21209] = 1,
    ACTIONS(2367), 1,
      anon_sym_COLON,
  [21213] = 1,
    ACTIONS(2369), 1,
      anon_sym_SEMI,
  [21217] = 1,
    ACTIONS(2371), 1,
      anon_sym_RPAREN,
  [21221] = 1,
    ACTIONS(2373), 1,
      anon_sym_COLON,
  [21225] = 1,
    ACTIONS(2375), 1,
      anon_sym_LPAREN,
  [21229] = 1,
    ACTIONS(2377), 1,
      sym_identifier,
  [21233] = 1,
    ACTIONS(2379), 1,
      sym_identifier,
  [21237] = 1,
    ACTIONS(2381), 1,
      sym_integer,
  [21241] = 1,
    ACTIONS(2383), 1,
      anon_sym_SEMI,
  [21245] = 1,
    ACTIONS(2385), 1,
      anon_sym_SEMI,
  [21249] = 1,
    ACTIONS(2387), 1,
      anon_sym_RPAREN,
  [21253] = 1,
    ACTIONS(2389), 1,
      anon_sym_RPAREN,
  [21257] = 1,
    ACTIONS(2391), 1,
      anon_sym_RPAREN,
  [21261] = 1,
    ACTIONS(2393), 1,
      anon_sym_SEMI,
  [21265] = 1,
    ACTIONS(2395), 1,
      anon_sym_EQ,
  [21269] = 1,
    ACTIONS(2397), 1,
      anon_sym_SEMI,
  [21273] = 1,
    ACTIONS(2399), 1,
      anon_sym_COLON,
  [21277] = 1,
    ACTIONS(2401), 1,
      anon_sym_RPAREN,
  [21281] = 1,
    ACTIONS(2403), 1,
      anon_sym_RPAREN,
  [21285] = 1,
    ACTIONS(2405), 1,
      anon_sym_RPAREN,
  [21289] = 1,
    ACTIONS(2407), 1,
      anon_sym_EQ,
  [21293] = 1,
    ACTIONS(2409), 1,
      anon_sym_EQ,
  [21297] = 1,
    ACTIONS(2411), 1,
      anon_sym_RPAREN,
  [21301] = 1,
    ACTIONS(2413), 1,
      anon_sym_RPAREN,
  [21305] = 1,
    ACTIONS(2415), 1,
      anon_sym_RPAREN,
  [21309] = 1,
    ACTIONS(2417), 1,
      anon_sym_RPAREN,
  [21313] = 1,
    ACTIONS(2419), 1,
      anon_sym_RPAREN,
  [21317] = 1,
    ACTIONS(2421), 1,
      anon_sym_RPAREN,
  [21321] = 1,
    ACTIONS(2423), 1,
      anon_sym_RPAREN,
  [21325] = 1,
    ACTIONS(2425), 1,
      anon_sym_end,
  [21329] = 1,
    ACTIONS(2427), 1,
      anon_sym_RPAREN,
  [21333] = 1,
    ACTIONS(2429), 1,
      anon_sym_EQ,
  [21337] = 1,
    ACTIONS(2431), 1,
      anon_sym_SEMI,
  [21341] = 1,
    ACTIONS(2433), 1,
      anon_sym_RBRACK,
  [21345] = 1,
    ACTIONS(2435), 1,
      anon_sym_COMMA,
  [21349] = 1,
    ACTIONS(2437), 1,
      anon_sym_SEMI,
  [21353] = 1,
    ACTIONS(2439), 1,
      anon_sym_of,
  [21357] = 1,
    ACTIONS(2441), 1,
      anon_sym_LBRACE,
  [21361] = 1,
    ACTIONS(2443), 1,
      anon_sym_EQ,
  [21365] = 1,
    ACTIONS(2445), 1,
      anon_sym_RPAREN,
  [21369] = 1,
    ACTIONS(2447), 1,
      anon_sym_SEMI,
  [21373] = 1,
    ACTIONS(2449), 1,
      anon_sym_SEMI,
  [21377] = 1,
    ACTIONS(2451), 1,
      anon_sym_RPAREN,
  [21381] = 1,
    ACTIONS(2453), 1,
      anon_sym_RPAREN,
  [21385] = 1,
    ACTIONS(2455), 1,
      anon_sym_RPAREN,
  [21389] = 1,
    ACTIONS(2457), 1,
      anon_sym_RPAREN,
  [21393] = 1,
    ACTIONS(2459), 1,
      anon_sym_RPAREN,
  [21397] = 1,
    ACTIONS(2461), 1,
      anon_sym_RPAREN,
  [21401] = 1,
    ACTIONS(2463), 1,
      anon_sym_RPAREN,
  [21405] = 1,
    ACTIONS(2465), 1,
      anon_sym_RPAREN,
  [21409] = 1,
    ACTIONS(2467), 1,
      anon_sym_RPAREN,
  [21413] = 1,
    ACTIONS(2469), 1,
      anon_sym_RPAREN,
  [21417] = 1,
    ACTIONS(2471), 1,
      anon_sym_RPAREN,
  [21421] = 1,
    ACTIONS(2473), 1,
      anon_sym_RPAREN,
  [21425] = 1,
    ACTIONS(2475), 1,
      anon_sym_RPAREN,
  [21429] = 1,
    ACTIONS(2477), 1,
      anon_sym_RPAREN,
  [21433] = 1,
    ACTIONS(2479), 1,
      anon_sym_RPAREN,
  [21437] = 1,
    ACTIONS(2481), 1,
      anon_sym_RPAREN,
  [21441] = 1,
    ACTIONS(2483), 1,
      anon_sym_RPAREN,
  [21445] = 1,
    ACTIONS(2485), 1,
      anon_sym_RPAREN,
  [21449] = 1,
    ACTIONS(2487), 1,
      anon_sym_SEMI,
  [21453] = 1,
    ACTIONS(2489), 1,
      anon_sym_COLON,
  [21457] = 1,
    ACTIONS(2491), 1,
      anon_sym_EQ,
  [21461] = 1,
    ACTIONS(2493), 1,
      anon_sym_RPAREN,
  [21465] = 1,
    ACTIONS(2495), 1,
      anon_sym_LPAREN,
  [21469] = 1,
    ACTIONS(2497), 1,
      anon_sym_EQ,
  [21473] = 1,
    ACTIONS(2499), 1,
      sym_identifier,
  [21477] = 1,
    ACTIONS(2501), 1,
      anon_sym_LPAREN_RPAREN,
  [21481] = 1,
    ACTIONS(2503), 1,
      anon_sym_SEMI,
  [21485] = 1,
    ACTIONS(2505), 1,
      anon_sym_LPAREN_RPAREN,
  [21489] = 1,
    ACTIONS(2507), 1,
      anon_sym_LPAREN_RPAREN,
  [21493] = 1,
    ACTIONS(2449), 1,
      anon_sym_SEMI,
  [21497] = 1,
    ACTIONS(2509), 1,
      anon_sym_SEMI,
  [21501] = 1,
    ACTIONS(2511), 1,
      anon_sym_end,
  [21505] = 1,
    ACTIONS(2513), 1,
      anon_sym_LPAREN,
  [21509] = 1,
    ACTIONS(2515), 1,
      anon_sym_LBRACE,
  [21513] = 1,
    ACTIONS(2517), 1,
      anon_sym_RPAREN,
  [21517] = 1,
    ACTIONS(2519), 1,
      anon_sym_RPAREN,
  [21521] = 1,
    ACTIONS(2521), 1,
      anon_sym_RPAREN,
  [21525] = 1,
    ACTIONS(2523), 1,
      anon_sym_RPAREN,
  [21529] = 1,
    ACTIONS(2525), 1,
      anon_sym_RPAREN,
  [21533] = 1,
    ACTIONS(2527), 1,
      anon_sym_EQ,
  [21537] = 1,
    ACTIONS(2529), 1,
      anon_sym_SEMI,
  [21541] = 1,
    ACTIONS(2531), 1,
      anon_sym_LPAREN,
  [21545] = 1,
    ACTIONS(2533), 1,
      anon_sym_RPAREN,
  [21549] = 1,
    ACTIONS(2535), 1,
      anon_sym_RPAREN,
  [21553] = 1,
    ACTIONS(2537), 1,
      anon_sym_RPAREN,
  [21557] = 1,
    ACTIONS(2539), 1,
      anon_sym_RPAREN,
  [21561] = 1,
    ACTIONS(2541), 1,
      anon_sym_SEMI,
  [21565] = 1,
    ACTIONS(2543), 1,
      anon_sym_end,
  [21569] = 1,
    ACTIONS(2545), 1,
      anon_sym_RPAREN,
  [21573] = 1,
    ACTIONS(2547), 1,
      sym_integer,
  [21577] = 1,
    ACTIONS(2549), 1,
      anon_sym_EQ,
  [21581] = 1,
    ACTIONS(2551), 1,
      anon_sym_DOT,
  [21585] = 1,
    ACTIONS(2553), 1,
      anon_sym_RPAREN,
  [21589] = 1,
    ACTIONS(2555), 1,
      anon_sym_SEMI,
  [21593] = 1,
    ACTIONS(2557), 1,
      anon_sym_LBRACK,
  [21597] = 1,
    ACTIONS(2559), 1,
      anon_sym_LPAREN,
  [21601] = 1,
    ACTIONS(2561), 1,
      anon_sym_LBRACK,
  [21605] = 1,
    ACTIONS(2563), 1,
      anon_sym_RPAREN,
  [21609] = 1,
    ACTIONS(2565), 1,
      sym_integer,
  [21613] = 1,
    ACTIONS(2567), 1,
      anon_sym_LPAREN,
  [21617] = 1,
    ACTIONS(2569), 1,
      anon_sym_COLON_EQ,
  [21621] = 1,
    ACTIONS(2571), 1,
      anon_sym_RPAREN,
  [21625] = 1,
    ACTIONS(2573), 1,
      anon_sym_RPAREN,
  [21629] = 1,
    ACTIONS(2575), 1,
      anon_sym_RPAREN,
  [21633] = 1,
    ACTIONS(2577), 1,
      anon_sym_RPAREN,
  [21637] = 1,
    ACTIONS(2579), 1,
      anon_sym_RPAREN,
  [21641] = 1,
    ACTIONS(2581), 1,
      anon_sym_RPAREN,
  [21645] = 1,
    ACTIONS(2583), 1,
      anon_sym_RPAREN,
  [21649] = 1,
    ACTIONS(2585), 1,
      anon_sym_RPAREN,
  [21653] = 1,
    ACTIONS(2587), 1,
      anon_sym_RPAREN,
  [21657] = 1,
    ACTIONS(2589), 1,
      anon_sym_RPAREN,
  [21661] = 1,
    ACTIONS(2591), 1,
      anon_sym_RPAREN,
  [21665] = 1,
    ACTIONS(2593), 1,
      anon_sym_RPAREN,
  [21669] = 1,
    ACTIONS(2595), 1,
      anon_sym_RPAREN,
  [21673] = 1,
    ACTIONS(2597), 1,
      anon_sym_RPAREN,
  [21677] = 1,
    ACTIONS(2599), 1,
      anon_sym_RPAREN,
  [21681] = 1,
    ACTIONS(2601), 1,
      anon_sym_RPAREN,
  [21685] = 1,
    ACTIONS(2603), 1,
      anon_sym_RPAREN,
  [21689] = 1,
    ACTIONS(2605), 1,
      anon_sym_LPAREN,
  [21693] = 1,
    ACTIONS(2607), 1,
      anon_sym_RPAREN,
  [21697] = 1,
    ACTIONS(2609), 1,
      anon_sym_LPAREN,
  [21701] = 1,
    ACTIONS(2611), 1,
      anon_sym_LPAREN,
  [21705] = 1,
    ACTIONS(2613), 1,
      anon_sym_LPAREN,
  [21709] = 1,
    ACTIONS(2615), 1,
      anon_sym_procedure,
  [21713] = 1,
    ACTIONS(2617), 1,
      sym_identifier,
  [21717] = 1,
    ACTIONS(2619), 1,
      anon_sym_LPAREN,
  [21721] = 1,
    ACTIONS(2621), 1,
      anon_sym_LPAREN,
  [21725] = 1,
    ACTIONS(2623), 1,
      anon_sym_RPAREN,
  [21729] = 1,
    ACTIONS(2625), 1,
      anon_sym_RPAREN,
  [21733] = 1,
    ACTIONS(2627), 1,
      anon_sym_LPAREN,
  [21737] = 1,
    ACTIONS(2629), 1,
      anon_sym_LPAREN,
  [21741] = 1,
    ACTIONS(2631), 1,
      anon_sym_LPAREN,
  [21745] = 1,
    ACTIONS(2633), 1,
      anon_sym_SEMI,
  [21749] = 1,
    ACTIONS(2635), 1,
      sym_integer,
  [21753] = 1,
    ACTIONS(2637), 1,
      sym_integer,
  [21757] = 1,
    ACTIONS(2639), 1,
      anon_sym_COLON_EQ,
  [21761] = 1,
    ACTIONS(2641), 1,
      sym_integer,
  [21765] = 1,
    ACTIONS(2643), 1,
      anon_sym_RPAREN,
  [21769] = 1,
    ACTIONS(2645), 1,
      anon_sym_RPAREN,
  [21773] = 1,
    ACTIONS(2647), 1,
      anon_sym_EQ,
  [21777] = 1,
    ACTIONS(2649), 1,
      anon_sym_SEMI,
  [21781] = 1,
    ACTIONS(2651), 1,
      anon_sym_EQ,
  [21785] = 1,
    ACTIONS(2653), 1,
      anon_sym_SEMI,
  [21789] = 1,
    ACTIONS(2655), 1,
      anon_sym_LPAREN,
  [21793] = 1,
    ACTIONS(2657), 1,
      anon_sym_LPAREN,
  [21797] = 1,
    ACTIONS(2659), 1,
      anon_sym_LPAREN,
  [21801] = 1,
    ACTIONS(2661), 1,
      anon_sym_LPAREN,
  [21805] = 1,
    ACTIONS(2663), 1,
      anon_sym_LPAREN,
  [21809] = 1,
    ACTIONS(2665), 1,
      anon_sym_LPAREN,
  [21813] = 1,
    ACTIONS(2667), 1,
      anon_sym_LPAREN,
  [21817] = 1,
    ACTIONS(2669), 1,
      sym_integer,
  [21821] = 1,
    ACTIONS(2671), 1,
      anon_sym_RPAREN,
  [21825] = 1,
    ACTIONS(2673), 1,
      anon_sym_LPAREN,
  [21829] = 1,
    ACTIONS(2675), 1,
      anon_sym_SEMI,
  [21833] = 1,
    ACTIONS(2677), 1,
      anon_sym_SEMI,
  [21837] = 1,
    ACTIONS(2679), 1,
      anon_sym_SEMI,
  [21841] = 1,
    ACTIONS(2681), 1,
      anon_sym_SEMI,
  [21845] = 1,
    ACTIONS(2683), 1,
      anon_sym_SEMI,
  [21849] = 1,
    ACTIONS(2685), 1,
      sym_string_literal,
  [21853] = 1,
    ACTIONS(2687), 1,
      sym_string_literal,
  [21857] = 1,
    ACTIONS(2689), 1,
      anon_sym_SEMI,
  [21861] = 1,
    ACTIONS(2691), 1,
      anon_sym_SEMI,
  [21865] = 1,
    ACTIONS(2693), 1,
      anon_sym_SEMI,
  [21869] = 1,
    ACTIONS(2695), 1,
      anon_sym_SEMI,
  [21873] = 1,
    ACTIONS(2697), 1,
      anon_sym_RPAREN,
  [21877] = 1,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
  [21881] = 1,
    ACTIONS(2699), 1,
      anon_sym_COLON,
  [21885] = 1,
    ACTIONS(2701), 1,
      anon_sym_LPAREN_RPAREN,
  [21889] = 1,
    ACTIONS(2703), 1,
      anon_sym_SEMI,
  [21893] = 1,
    ACTIONS(2705), 1,
      anon_sym_RPAREN,
  [21897] = 1,
    ACTIONS(2707), 1,
      anon_sym_COLON_EQ,
  [21901] = 1,
    ACTIONS(2709), 1,
      anon_sym_LPAREN,
  [21905] = 1,
    ACTIONS(2711), 1,
      anon_sym_procedure,
  [21909] = 1,
    ACTIONS(2713), 1,
      anon_sym_RPAREN,
  [21913] = 1,
    ACTIONS(2715), 1,
      anon_sym_RPAREN,
  [21917] = 1,
    ACTIONS(2717), 1,
      anon_sym_RPAREN,
  [21921] = 1,
    ACTIONS(2719), 1,
      anon_sym_LPAREN,
  [21925] = 1,
    ACTIONS(2721), 1,
      anon_sym_LPAREN,
  [21929] = 1,
    ACTIONS(2723), 1,
      anon_sym_LPAREN,
  [21933] = 1,
    ACTIONS(2725), 1,
      anon_sym_LPAREN,
  [21937] = 1,
    ACTIONS(2727), 1,
      anon_sym_LPAREN,
  [21941] = 1,
    ACTIONS(2729), 1,
      anon_sym_LPAREN,
  [21945] = 1,
    ACTIONS(2731), 1,
      anon_sym_LPAREN,
  [21949] = 1,
    ACTIONS(2733), 1,
      anon_sym_LPAREN,
  [21953] = 1,
    ACTIONS(2735), 1,
      anon_sym_LPAREN,
  [21957] = 1,
    ACTIONS(2737), 1,
      anon_sym_LPAREN,
  [21961] = 1,
    ACTIONS(2739), 1,
      anon_sym_RPAREN,
  [21965] = 1,
    ACTIONS(2741), 1,
      anon_sym_COMMA,
  [21969] = 1,
    ACTIONS(2743), 1,
      sym_string_literal,
  [21973] = 1,
    ACTIONS(2745), 1,
      sym_string_literal,
  [21977] = 1,
    ACTIONS(2747), 1,
      anon_sym_COMMA,
  [21981] = 1,
    ACTIONS(2749), 1,
      anon_sym_COMMA,
  [21985] = 1,
    ACTIONS(2751), 1,
      anon_sym_COMMA,
  [21989] = 1,
    ACTIONS(2753), 1,
      anon_sym_LPAREN,
  [21993] = 1,
    ACTIONS(2755), 1,
      anon_sym_LPAREN,
  [21997] = 1,
    ACTIONS(2757), 1,
      anon_sym_LPAREN,
  [22001] = 1,
    ACTIONS(2759), 1,
      anon_sym_LPAREN,
  [22005] = 1,
    ACTIONS(2761), 1,
      anon_sym_RPAREN,
  [22009] = 1,
    ACTIONS(2763), 1,
      anon_sym_LPAREN,
  [22013] = 1,
    ACTIONS(2765), 1,
      anon_sym_COLON_EQ,
  [22017] = 1,
    ACTIONS(2767), 1,
      anon_sym_SEMI,
  [22021] = 1,
    ACTIONS(2769), 1,
      anon_sym_OnRun,
  [22025] = 1,
    ACTIONS(2771), 1,
      anon_sym_EQ,
  [22029] = 1,
    ACTIONS(2773), 1,
      anon_sym_EQ,
  [22033] = 1,
    ACTIONS(2775), 1,
      anon_sym_LPAREN,
  [22037] = 1,
    ACTIONS(2777), 1,
      anon_sym_LPAREN,
  [22041] = 1,
    ACTIONS(2779), 1,
      anon_sym_LPAREN,
  [22045] = 1,
    ACTIONS(2781), 1,
      anon_sym_LPAREN,
  [22049] = 1,
    ACTIONS(2783), 1,
      anon_sym_LPAREN,
  [22053] = 1,
    ACTIONS(2785), 1,
      anon_sym_LPAREN,
  [22057] = 1,
    ACTIONS(2787), 1,
      anon_sym_LPAREN,
  [22061] = 1,
    ACTIONS(2789), 1,
      anon_sym_LPAREN,
  [22065] = 1,
    ACTIONS(2791), 1,
      anon_sym_RPAREN,
  [22069] = 1,
    ACTIONS(2793), 1,
      anon_sym_EQ,
  [22073] = 1,
    ACTIONS(2795), 1,
      anon_sym_EQ,
  [22077] = 1,
    ACTIONS(2797), 1,
      anon_sym_LPAREN,
  [22081] = 1,
    ACTIONS(2799), 1,
      sym_string_literal,
  [22085] = 1,
    ACTIONS(2801), 1,
      sym_string_literal,
  [22089] = 1,
    ACTIONS(2803), 1,
      anon_sym_LPAREN,
  [22093] = 1,
    ACTIONS(2805), 1,
      anon_sym_LPAREN,
  [22097] = 1,
    ACTIONS(2807), 1,
      anon_sym_EQ,
  [22101] = 1,
    ACTIONS(2809), 1,
      anon_sym_RBRACK,
  [22105] = 1,
    ACTIONS(2811), 1,
      anon_sym_EQ,
  [22109] = 1,
    ACTIONS(2813), 1,
      anon_sym_EQ,
  [22113] = 1,
    ACTIONS(2815), 1,
      anon_sym_RPAREN,
  [22117] = 1,
    ACTIONS(2817), 1,
      anon_sym_RPAREN,
  [22121] = 1,
    ACTIONS(2819), 1,
      anon_sym_RPAREN,
  [22125] = 1,
    ACTIONS(2821), 1,
      anon_sym_EQ,
  [22129] = 1,
    ACTIONS(2823), 1,
      anon_sym_COLON,
  [22133] = 1,
    ACTIONS(2825), 1,
      anon_sym_EQ,
  [22137] = 1,
    ACTIONS(2827), 1,
      anon_sym_LPAREN_RPAREN,
  [22141] = 1,
    ACTIONS(2829), 1,
      anon_sym_RBRACK,
  [22145] = 1,
    ACTIONS(2831), 1,
      anon_sym_LPAREN_RPAREN,
  [22149] = 1,
    ACTIONS(2833), 1,
      anon_sym_RBRACK,
  [22153] = 1,
    ACTIONS(2835), 1,
      anon_sym_LPAREN_RPAREN,
  [22157] = 1,
    ACTIONS(2837), 1,
      anon_sym_COMMA,
  [22161] = 1,
    ACTIONS(2839), 1,
      anon_sym_COMMA,
  [22165] = 1,
    ACTIONS(2841), 1,
      anon_sym_COMMA,
  [22169] = 1,
    ACTIONS(2843), 1,
      anon_sym_COMMA,
  [22173] = 1,
    ACTIONS(2845), 1,
      anon_sym_COLON,
  [22177] = 1,
    ACTIONS(2847), 1,
      anon_sym_RBRACK,
  [22181] = 1,
    ACTIONS(2849), 1,
      anon_sym_EQ,
  [22185] = 1,
    ACTIONS(2851), 1,
      anon_sym_EQ,
  [22189] = 1,
    ACTIONS(2853), 1,
      anon_sym_RBRACK,
  [22193] = 1,
    ACTIONS(2855), 1,
      anon_sym_RBRACK,
  [22197] = 1,
    ACTIONS(2857), 1,
      anon_sym_COMMA,
  [22201] = 1,
    ACTIONS(2859), 1,
      anon_sym_COMMA,
  [22205] = 1,
    ACTIONS(2861), 1,
      anon_sym_COMMA,
  [22209] = 1,
    ACTIONS(2863), 1,
      anon_sym_COMMA,
  [22213] = 1,
    ACTIONS(2865), 1,
      anon_sym_EQ,
  [22217] = 1,
    ACTIONS(2867), 1,
      anon_sym_LBRACE,
  [22221] = 1,
    ACTIONS(2869), 1,
      sym_string_literal,
  [22225] = 1,
    ACTIONS(2871), 1,
      anon_sym_LPAREN_RPAREN,
  [22229] = 1,
    ACTIONS(2873), 1,
      anon_sym_COMMA,
  [22233] = 1,
    ACTIONS(2875), 1,
      anon_sym_COMMA,
  [22237] = 1,
    ACTIONS(2877), 1,
      anon_sym_EQ,
  [22241] = 1,
    ACTIONS(2879), 1,
      anon_sym_COMMA,
  [22245] = 1,
    ACTIONS(2881), 1,
      anon_sym_COLON,
  [22249] = 1,
    ACTIONS(2883), 1,
      anon_sym_of,
  [22253] = 1,
    ACTIONS(2885), 1,
      anon_sym_RPAREN,
  [22257] = 1,
    ACTIONS(2887), 1,
      anon_sym_of,
  [22261] = 1,
    ACTIONS(2889), 1,
      anon_sym_RPAREN,
  [22265] = 1,
    ACTIONS(2891), 1,
      anon_sym_EQ,
  [22269] = 1,
    ACTIONS(2893), 1,
      anon_sym_LBRACE,
  [22273] = 1,
    ACTIONS(2143), 1,
      anon_sym_RBRACK,
  [22277] = 1,
    ACTIONS(2895), 1,
      anon_sym_SEMI,
  [22281] = 1,
    ACTIONS(2897), 1,
      sym_identifier,
  [22285] = 1,
    ACTIONS(2899), 1,
      anon_sym_LPAREN,
  [22289] = 1,
    ACTIONS(2901), 1,
      anon_sym_LPAREN,
  [22293] = 1,
    ACTIONS(2903), 1,
      anon_sym_LPAREN,
  [22297] = 1,
    ACTIONS(2905), 1,
      anon_sym_LPAREN,
  [22301] = 1,
    ACTIONS(2907), 1,
      anon_sym_LPAREN,
  [22305] = 1,
    ACTIONS(2909), 1,
      anon_sym_LPAREN,
  [22309] = 1,
    ACTIONS(2911), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 367,
  [SMALL_STATE(8)] = 440,
  [SMALL_STATE(9)] = 513,
  [SMALL_STATE(10)] = 586,
  [SMALL_STATE(11)] = 659,
  [SMALL_STATE(12)] = 745,
  [SMALL_STATE(13)] = 829,
  [SMALL_STATE(14)] = 915,
  [SMALL_STATE(15)] = 1001,
  [SMALL_STATE(16)] = 1085,
  [SMALL_STATE(17)] = 1171,
  [SMALL_STATE(18)] = 1257,
  [SMALL_STATE(19)] = 1343,
  [SMALL_STATE(20)] = 1429,
  [SMALL_STATE(21)] = 1515,
  [SMALL_STATE(22)] = 1599,
  [SMALL_STATE(23)] = 1683,
  [SMALL_STATE(24)] = 1769,
  [SMALL_STATE(25)] = 1853,
  [SMALL_STATE(26)] = 1937,
  [SMALL_STATE(27)] = 2023,
  [SMALL_STATE(28)] = 2107,
  [SMALL_STATE(29)] = 2191,
  [SMALL_STATE(30)] = 2275,
  [SMALL_STATE(31)] = 2359,
  [SMALL_STATE(32)] = 2443,
  [SMALL_STATE(33)] = 2527,
  [SMALL_STATE(34)] = 2611,
  [SMALL_STATE(35)] = 2695,
  [SMALL_STATE(36)] = 2779,
  [SMALL_STATE(37)] = 2865,
  [SMALL_STATE(38)] = 2951,
  [SMALL_STATE(39)] = 3035,
  [SMALL_STATE(40)] = 3119,
  [SMALL_STATE(41)] = 3203,
  [SMALL_STATE(42)] = 3284,
  [SMALL_STATE(43)] = 3365,
  [SMALL_STATE(44)] = 3446,
  [SMALL_STATE(45)] = 3527,
  [SMALL_STATE(46)] = 3603,
  [SMALL_STATE(47)] = 3679,
  [SMALL_STATE(48)] = 3755,
  [SMALL_STATE(49)] = 3810,
  [SMALL_STATE(50)] = 3865,
  [SMALL_STATE(51)] = 3945,
  [SMALL_STATE(52)] = 3975,
  [SMALL_STATE(53)] = 4004,
  [SMALL_STATE(54)] = 4055,
  [SMALL_STATE(55)] = 4096,
  [SMALL_STATE(56)] = 4137,
  [SMALL_STATE(57)] = 4176,
  [SMALL_STATE(58)] = 4209,
  [SMALL_STATE(59)] = 4242,
  [SMALL_STATE(60)] = 4283,
  [SMALL_STATE(61)] = 4324,
  [SMALL_STATE(62)] = 4353,
  [SMALL_STATE(63)] = 4386,
  [SMALL_STATE(64)] = 4419,
  [SMALL_STATE(65)] = 4448,
  [SMALL_STATE(66)] = 4477,
  [SMALL_STATE(67)] = 4506,
  [SMALL_STATE(68)] = 4535,
  [SMALL_STATE(69)] = 4574,
  [SMALL_STATE(70)] = 4603,
  [SMALL_STATE(71)] = 4654,
  [SMALL_STATE(72)] = 4705,
  [SMALL_STATE(73)] = 4737,
  [SMALL_STATE(74)] = 4769,
  [SMALL_STATE(75)] = 4801,
  [SMALL_STATE(76)] = 4839,
  [SMALL_STATE(77)] = 4869,
  [SMALL_STATE(78)] = 4899,
  [SMALL_STATE(79)] = 4939,
  [SMALL_STATE(80)] = 4979,
  [SMALL_STATE(81)] = 5005,
  [SMALL_STATE(82)] = 5045,
  [SMALL_STATE(83)] = 5085,
  [SMALL_STATE(84)] = 5115,
  [SMALL_STATE(85)] = 5145,
  [SMALL_STATE(86)] = 5183,
  [SMALL_STATE(87)] = 5209,
  [SMALL_STATE(88)] = 5241,
  [SMALL_STATE(89)] = 5268,
  [SMALL_STATE(90)] = 5295,
  [SMALL_STATE(91)] = 5324,
  [SMALL_STATE(92)] = 5351,
  [SMALL_STATE(93)] = 5378,
  [SMALL_STATE(94)] = 5405,
  [SMALL_STATE(95)] = 5432,
  [SMALL_STATE(96)] = 5459,
  [SMALL_STATE(97)] = 5488,
  [SMALL_STATE(98)] = 5515,
  [SMALL_STATE(99)] = 5542,
  [SMALL_STATE(100)] = 5569,
  [SMALL_STATE(101)] = 5596,
  [SMALL_STATE(102)] = 5623,
  [SMALL_STATE(103)] = 5648,
  [SMALL_STATE(104)] = 5675,
  [SMALL_STATE(105)] = 5702,
  [SMALL_STATE(106)] = 5729,
  [SMALL_STATE(107)] = 5754,
  [SMALL_STATE(108)] = 5807,
  [SMALL_STATE(109)] = 5836,
  [SMALL_STATE(110)] = 5863,
  [SMALL_STATE(111)] = 5916,
  [SMALL_STATE(112)] = 5945,
  [SMALL_STATE(113)] = 5972,
  [SMALL_STATE(114)] = 6001,
  [SMALL_STATE(115)] = 6028,
  [SMALL_STATE(116)] = 6055,
  [SMALL_STATE(117)] = 6082,
  [SMALL_STATE(118)] = 6111,
  [SMALL_STATE(119)] = 6140,
  [SMALL_STATE(120)] = 6167,
  [SMALL_STATE(121)] = 6194,
  [SMALL_STATE(122)] = 6223,
  [SMALL_STATE(123)] = 6269,
  [SMALL_STATE(124)] = 6295,
  [SMALL_STATE(125)] = 6323,
  [SMALL_STATE(126)] = 6349,
  [SMALL_STATE(127)] = 6377,
  [SMALL_STATE(128)] = 6403,
  [SMALL_STATE(129)] = 6429,
  [SMALL_STATE(130)] = 6455,
  [SMALL_STATE(131)] = 6479,
  [SMALL_STATE(132)] = 6505,
  [SMALL_STATE(133)] = 6531,
  [SMALL_STATE(134)] = 6557,
  [SMALL_STATE(135)] = 6583,
  [SMALL_STATE(136)] = 6611,
  [SMALL_STATE(137)] = 6637,
  [SMALL_STATE(138)] = 6663,
  [SMALL_STATE(139)] = 6689,
  [SMALL_STATE(140)] = 6735,
  [SMALL_STATE(141)] = 6761,
  [SMALL_STATE(142)] = 6807,
  [SMALL_STATE(143)] = 6833,
  [SMALL_STATE(144)] = 6879,
  [SMALL_STATE(145)] = 6905,
  [SMALL_STATE(146)] = 6933,
  [SMALL_STATE(147)] = 6959,
  [SMALL_STATE(148)] = 6985,
  [SMALL_STATE(149)] = 7026,
  [SMALL_STATE(150)] = 7078,
  [SMALL_STATE(151)] = 7130,
  [SMALL_STATE(152)] = 7182,
  [SMALL_STATE(153)] = 7219,
  [SMALL_STATE(154)] = 7256,
  [SMALL_STATE(155)] = 7293,
  [SMALL_STATE(156)] = 7330,
  [SMALL_STATE(157)] = 7356,
  [SMALL_STATE(158)] = 7388,
  [SMALL_STATE(159)] = 7414,
  [SMALL_STATE(160)] = 7447,
  [SMALL_STATE(161)] = 7480,
  [SMALL_STATE(162)] = 7513,
  [SMALL_STATE(163)] = 7546,
  [SMALL_STATE(164)] = 7579,
  [SMALL_STATE(165)] = 7612,
  [SMALL_STATE(166)] = 7631,
  [SMALL_STATE(167)] = 7661,
  [SMALL_STATE(168)] = 7691,
  [SMALL_STATE(169)] = 7721,
  [SMALL_STATE(170)] = 7751,
  [SMALL_STATE(171)] = 7781,
  [SMALL_STATE(172)] = 7811,
  [SMALL_STATE(173)] = 7841,
  [SMALL_STATE(174)] = 7871,
  [SMALL_STATE(175)] = 7901,
  [SMALL_STATE(176)] = 7931,
  [SMALL_STATE(177)] = 7961,
  [SMALL_STATE(178)] = 7991,
  [SMALL_STATE(179)] = 8021,
  [SMALL_STATE(180)] = 8051,
  [SMALL_STATE(181)] = 8081,
  [SMALL_STATE(182)] = 8111,
  [SMALL_STATE(183)] = 8141,
  [SMALL_STATE(184)] = 8171,
  [SMALL_STATE(185)] = 8201,
  [SMALL_STATE(186)] = 8231,
  [SMALL_STATE(187)] = 8261,
  [SMALL_STATE(188)] = 8291,
  [SMALL_STATE(189)] = 8311,
  [SMALL_STATE(190)] = 8341,
  [SMALL_STATE(191)] = 8361,
  [SMALL_STATE(192)] = 8391,
  [SMALL_STATE(193)] = 8421,
  [SMALL_STATE(194)] = 8451,
  [SMALL_STATE(195)] = 8481,
  [SMALL_STATE(196)] = 8511,
  [SMALL_STATE(197)] = 8541,
  [SMALL_STATE(198)] = 8571,
  [SMALL_STATE(199)] = 8601,
  [SMALL_STATE(200)] = 8631,
  [SMALL_STATE(201)] = 8661,
  [SMALL_STATE(202)] = 8691,
  [SMALL_STATE(203)] = 8721,
  [SMALL_STATE(204)] = 8751,
  [SMALL_STATE(205)] = 8781,
  [SMALL_STATE(206)] = 8811,
  [SMALL_STATE(207)] = 8841,
  [SMALL_STATE(208)] = 8860,
  [SMALL_STATE(209)] = 8879,
  [SMALL_STATE(210)] = 8898,
  [SMALL_STATE(211)] = 8917,
  [SMALL_STATE(212)] = 8936,
  [SMALL_STATE(213)] = 8955,
  [SMALL_STATE(214)] = 8974,
  [SMALL_STATE(215)] = 8993,
  [SMALL_STATE(216)] = 9010,
  [SMALL_STATE(217)] = 9027,
  [SMALL_STATE(218)] = 9046,
  [SMALL_STATE(219)] = 9065,
  [SMALL_STATE(220)] = 9084,
  [SMALL_STATE(221)] = 9103,
  [SMALL_STATE(222)] = 9122,
  [SMALL_STATE(223)] = 9141,
  [SMALL_STATE(224)] = 9160,
  [SMALL_STATE(225)] = 9179,
  [SMALL_STATE(226)] = 9198,
  [SMALL_STATE(227)] = 9217,
  [SMALL_STATE(228)] = 9234,
  [SMALL_STATE(229)] = 9253,
  [SMALL_STATE(230)] = 9272,
  [SMALL_STATE(231)] = 9291,
  [SMALL_STATE(232)] = 9310,
  [SMALL_STATE(233)] = 9329,
  [SMALL_STATE(234)] = 9348,
  [SMALL_STATE(235)] = 9367,
  [SMALL_STATE(236)] = 9386,
  [SMALL_STATE(237)] = 9405,
  [SMALL_STATE(238)] = 9424,
  [SMALL_STATE(239)] = 9443,
  [SMALL_STATE(240)] = 9462,
  [SMALL_STATE(241)] = 9481,
  [SMALL_STATE(242)] = 9500,
  [SMALL_STATE(243)] = 9519,
  [SMALL_STATE(244)] = 9538,
  [SMALL_STATE(245)] = 9557,
  [SMALL_STATE(246)] = 9576,
  [SMALL_STATE(247)] = 9595,
  [SMALL_STATE(248)] = 9614,
  [SMALL_STATE(249)] = 9633,
  [SMALL_STATE(250)] = 9652,
  [SMALL_STATE(251)] = 9671,
  [SMALL_STATE(252)] = 9690,
  [SMALL_STATE(253)] = 9709,
  [SMALL_STATE(254)] = 9728,
  [SMALL_STATE(255)] = 9747,
  [SMALL_STATE(256)] = 9766,
  [SMALL_STATE(257)] = 9785,
  [SMALL_STATE(258)] = 9804,
  [SMALL_STATE(259)] = 9821,
  [SMALL_STATE(260)] = 9838,
  [SMALL_STATE(261)] = 9855,
  [SMALL_STATE(262)] = 9872,
  [SMALL_STATE(263)] = 9893,
  [SMALL_STATE(264)] = 9910,
  [SMALL_STATE(265)] = 9931,
  [SMALL_STATE(266)] = 9950,
  [SMALL_STATE(267)] = 9969,
  [SMALL_STATE(268)] = 9986,
  [SMALL_STATE(269)] = 10003,
  [SMALL_STATE(270)] = 10020,
  [SMALL_STATE(271)] = 10037,
  [SMALL_STATE(272)] = 10056,
  [SMALL_STATE(273)] = 10073,
  [SMALL_STATE(274)] = 10090,
  [SMALL_STATE(275)] = 10107,
  [SMALL_STATE(276)] = 10124,
  [SMALL_STATE(277)] = 10141,
  [SMALL_STATE(278)] = 10158,
  [SMALL_STATE(279)] = 10175,
  [SMALL_STATE(280)] = 10192,
  [SMALL_STATE(281)] = 10211,
  [SMALL_STATE(282)] = 10228,
  [SMALL_STATE(283)] = 10245,
  [SMALL_STATE(284)] = 10262,
  [SMALL_STATE(285)] = 10279,
  [SMALL_STATE(286)] = 10298,
  [SMALL_STATE(287)] = 10317,
  [SMALL_STATE(288)] = 10336,
  [SMALL_STATE(289)] = 10355,
  [SMALL_STATE(290)] = 10374,
  [SMALL_STATE(291)] = 10393,
  [SMALL_STATE(292)] = 10412,
  [SMALL_STATE(293)] = 10431,
  [SMALL_STATE(294)] = 10448,
  [SMALL_STATE(295)] = 10467,
  [SMALL_STATE(296)] = 10484,
  [SMALL_STATE(297)] = 10501,
  [SMALL_STATE(298)] = 10520,
  [SMALL_STATE(299)] = 10539,
  [SMALL_STATE(300)] = 10558,
  [SMALL_STATE(301)] = 10577,
  [SMALL_STATE(302)] = 10596,
  [SMALL_STATE(303)] = 10615,
  [SMALL_STATE(304)] = 10634,
  [SMALL_STATE(305)] = 10653,
  [SMALL_STATE(306)] = 10672,
  [SMALL_STATE(307)] = 10691,
  [SMALL_STATE(308)] = 10710,
  [SMALL_STATE(309)] = 10729,
  [SMALL_STATE(310)] = 10748,
  [SMALL_STATE(311)] = 10767,
  [SMALL_STATE(312)] = 10786,
  [SMALL_STATE(313)] = 10805,
  [SMALL_STATE(314)] = 10824,
  [SMALL_STATE(315)] = 10843,
  [SMALL_STATE(316)] = 10862,
  [SMALL_STATE(317)] = 10881,
  [SMALL_STATE(318)] = 10900,
  [SMALL_STATE(319)] = 10919,
  [SMALL_STATE(320)] = 10938,
  [SMALL_STATE(321)] = 10957,
  [SMALL_STATE(322)] = 10976,
  [SMALL_STATE(323)] = 10995,
  [SMALL_STATE(324)] = 11014,
  [SMALL_STATE(325)] = 11033,
  [SMALL_STATE(326)] = 11052,
  [SMALL_STATE(327)] = 11071,
  [SMALL_STATE(328)] = 11090,
  [SMALL_STATE(329)] = 11109,
  [SMALL_STATE(330)] = 11128,
  [SMALL_STATE(331)] = 11147,
  [SMALL_STATE(332)] = 11166,
  [SMALL_STATE(333)] = 11185,
  [SMALL_STATE(334)] = 11204,
  [SMALL_STATE(335)] = 11223,
  [SMALL_STATE(336)] = 11242,
  [SMALL_STATE(337)] = 11261,
  [SMALL_STATE(338)] = 11280,
  [SMALL_STATE(339)] = 11297,
  [SMALL_STATE(340)] = 11314,
  [SMALL_STATE(341)] = 11347,
  [SMALL_STATE(342)] = 11380,
  [SMALL_STATE(343)] = 11397,
  [SMALL_STATE(344)] = 11428,
  [SMALL_STATE(345)] = 11445,
  [SMALL_STATE(346)] = 11462,
  [SMALL_STATE(347)] = 11485,
  [SMALL_STATE(348)] = 11508,
  [SMALL_STATE(349)] = 11525,
  [SMALL_STATE(350)] = 11542,
  [SMALL_STATE(351)] = 11563,
  [SMALL_STATE(352)] = 11596,
  [SMALL_STATE(353)] = 11613,
  [SMALL_STATE(354)] = 11630,
  [SMALL_STATE(355)] = 11647,
  [SMALL_STATE(356)] = 11664,
  [SMALL_STATE(357)] = 11683,
  [SMALL_STATE(358)] = 11704,
  [SMALL_STATE(359)] = 11723,
  [SMALL_STATE(360)] = 11740,
  [SMALL_STATE(361)] = 11773,
  [SMALL_STATE(362)] = 11794,
  [SMALL_STATE(363)] = 11815,
  [SMALL_STATE(364)] = 11832,
  [SMALL_STATE(365)] = 11853,
  [SMALL_STATE(366)] = 11874,
  [SMALL_STATE(367)] = 11891,
  [SMALL_STATE(368)] = 11908,
  [SMALL_STATE(369)] = 11925,
  [SMALL_STATE(370)] = 11942,
  [SMALL_STATE(371)] = 11959,
  [SMALL_STATE(372)] = 11978,
  [SMALL_STATE(373)] = 11995,
  [SMALL_STATE(374)] = 12012,
  [SMALL_STATE(375)] = 12029,
  [SMALL_STATE(376)] = 12046,
  [SMALL_STATE(377)] = 12067,
  [SMALL_STATE(378)] = 12088,
  [SMALL_STATE(379)] = 12105,
  [SMALL_STATE(380)] = 12122,
  [SMALL_STATE(381)] = 12139,
  [SMALL_STATE(382)] = 12156,
  [SMALL_STATE(383)] = 12177,
  [SMALL_STATE(384)] = 12198,
  [SMALL_STATE(385)] = 12215,
  [SMALL_STATE(386)] = 12232,
  [SMALL_STATE(387)] = 12253,
  [SMALL_STATE(388)] = 12274,
  [SMALL_STATE(389)] = 12291,
  [SMALL_STATE(390)] = 12312,
  [SMALL_STATE(391)] = 12331,
  [SMALL_STATE(392)] = 12350,
  [SMALL_STATE(393)] = 12367,
  [SMALL_STATE(394)] = 12384,
  [SMALL_STATE(395)] = 12401,
  [SMALL_STATE(396)] = 12418,
  [SMALL_STATE(397)] = 12437,
  [SMALL_STATE(398)] = 12456,
  [SMALL_STATE(399)] = 12477,
  [SMALL_STATE(400)] = 12494,
  [SMALL_STATE(401)] = 12511,
  [SMALL_STATE(402)] = 12528,
  [SMALL_STATE(403)] = 12545,
  [SMALL_STATE(404)] = 12562,
  [SMALL_STATE(405)] = 12579,
  [SMALL_STATE(406)] = 12596,
  [SMALL_STATE(407)] = 12615,
  [SMALL_STATE(408)] = 12634,
  [SMALL_STATE(409)] = 12651,
  [SMALL_STATE(410)] = 12670,
  [SMALL_STATE(411)] = 12689,
  [SMALL_STATE(412)] = 12707,
  [SMALL_STATE(413)] = 12725,
  [SMALL_STATE(414)] = 12743,
  [SMALL_STATE(415)] = 12761,
  [SMALL_STATE(416)] = 12779,
  [SMALL_STATE(417)] = 12797,
  [SMALL_STATE(418)] = 12815,
  [SMALL_STATE(419)] = 12833,
  [SMALL_STATE(420)] = 12851,
  [SMALL_STATE(421)] = 12869,
  [SMALL_STATE(422)] = 12887,
  [SMALL_STATE(423)] = 12905,
  [SMALL_STATE(424)] = 12923,
  [SMALL_STATE(425)] = 12941,
  [SMALL_STATE(426)] = 12959,
  [SMALL_STATE(427)] = 12977,
  [SMALL_STATE(428)] = 12995,
  [SMALL_STATE(429)] = 13017,
  [SMALL_STATE(430)] = 13035,
  [SMALL_STATE(431)] = 13053,
  [SMALL_STATE(432)] = 13071,
  [SMALL_STATE(433)] = 13089,
  [SMALL_STATE(434)] = 13107,
  [SMALL_STATE(435)] = 13125,
  [SMALL_STATE(436)] = 13143,
  [SMALL_STATE(437)] = 13161,
  [SMALL_STATE(438)] = 13179,
  [SMALL_STATE(439)] = 13197,
  [SMALL_STATE(440)] = 13215,
  [SMALL_STATE(441)] = 13233,
  [SMALL_STATE(442)] = 13251,
  [SMALL_STATE(443)] = 13269,
  [SMALL_STATE(444)] = 13287,
  [SMALL_STATE(445)] = 13305,
  [SMALL_STATE(446)] = 13323,
  [SMALL_STATE(447)] = 13343,
  [SMALL_STATE(448)] = 13361,
  [SMALL_STATE(449)] = 13379,
  [SMALL_STATE(450)] = 13397,
  [SMALL_STATE(451)] = 13415,
  [SMALL_STATE(452)] = 13433,
  [SMALL_STATE(453)] = 13451,
  [SMALL_STATE(454)] = 13479,
  [SMALL_STATE(455)] = 13497,
  [SMALL_STATE(456)] = 13517,
  [SMALL_STATE(457)] = 13535,
  [SMALL_STATE(458)] = 13567,
  [SMALL_STATE(459)] = 13587,
  [SMALL_STATE(460)] = 13607,
  [SMALL_STATE(461)] = 13625,
  [SMALL_STATE(462)] = 13643,
  [SMALL_STATE(463)] = 13661,
  [SMALL_STATE(464)] = 13693,
  [SMALL_STATE(465)] = 13711,
  [SMALL_STATE(466)] = 13729,
  [SMALL_STATE(467)] = 13747,
  [SMALL_STATE(468)] = 13765,
  [SMALL_STATE(469)] = 13783,
  [SMALL_STATE(470)] = 13801,
  [SMALL_STATE(471)] = 13819,
  [SMALL_STATE(472)] = 13837,
  [SMALL_STATE(473)] = 13855,
  [SMALL_STATE(474)] = 13873,
  [SMALL_STATE(475)] = 13891,
  [SMALL_STATE(476)] = 13909,
  [SMALL_STATE(477)] = 13927,
  [SMALL_STATE(478)] = 13945,
  [SMALL_STATE(479)] = 13963,
  [SMALL_STATE(480)] = 13981,
  [SMALL_STATE(481)] = 13999,
  [SMALL_STATE(482)] = 14017,
  [SMALL_STATE(483)] = 14035,
  [SMALL_STATE(484)] = 14053,
  [SMALL_STATE(485)] = 14071,
  [SMALL_STATE(486)] = 14089,
  [SMALL_STATE(487)] = 14107,
  [SMALL_STATE(488)] = 14125,
  [SMALL_STATE(489)] = 14143,
  [SMALL_STATE(490)] = 14161,
  [SMALL_STATE(491)] = 14179,
  [SMALL_STATE(492)] = 14197,
  [SMALL_STATE(493)] = 14215,
  [SMALL_STATE(494)] = 14233,
  [SMALL_STATE(495)] = 14251,
  [SMALL_STATE(496)] = 14269,
  [SMALL_STATE(497)] = 14287,
  [SMALL_STATE(498)] = 14305,
  [SMALL_STATE(499)] = 14323,
  [SMALL_STATE(500)] = 14341,
  [SMALL_STATE(501)] = 14359,
  [SMALL_STATE(502)] = 14377,
  [SMALL_STATE(503)] = 14395,
  [SMALL_STATE(504)] = 14413,
  [SMALL_STATE(505)] = 14431,
  [SMALL_STATE(506)] = 14451,
  [SMALL_STATE(507)] = 14469,
  [SMALL_STATE(508)] = 14489,
  [SMALL_STATE(509)] = 14507,
  [SMALL_STATE(510)] = 14525,
  [SMALL_STATE(511)] = 14543,
  [SMALL_STATE(512)] = 14561,
  [SMALL_STATE(513)] = 14579,
  [SMALL_STATE(514)] = 14611,
  [SMALL_STATE(515)] = 14629,
  [SMALL_STATE(516)] = 14647,
  [SMALL_STATE(517)] = 14665,
  [SMALL_STATE(518)] = 14683,
  [SMALL_STATE(519)] = 14701,
  [SMALL_STATE(520)] = 14719,
  [SMALL_STATE(521)] = 14737,
  [SMALL_STATE(522)] = 14755,
  [SMALL_STATE(523)] = 14773,
  [SMALL_STATE(524)] = 14791,
  [SMALL_STATE(525)] = 14809,
  [SMALL_STATE(526)] = 14841,
  [SMALL_STATE(527)] = 14859,
  [SMALL_STATE(528)] = 14877,
  [SMALL_STATE(529)] = 14895,
  [SMALL_STATE(530)] = 14927,
  [SMALL_STATE(531)] = 14947,
  [SMALL_STATE(532)] = 14979,
  [SMALL_STATE(533)] = 14997,
  [SMALL_STATE(534)] = 15029,
  [SMALL_STATE(535)] = 15047,
  [SMALL_STATE(536)] = 15077,
  [SMALL_STATE(537)] = 15097,
  [SMALL_STATE(538)] = 15115,
  [SMALL_STATE(539)] = 15133,
  [SMALL_STATE(540)] = 15151,
  [SMALL_STATE(541)] = 15169,
  [SMALL_STATE(542)] = 15187,
  [SMALL_STATE(543)] = 15205,
  [SMALL_STATE(544)] = 15227,
  [SMALL_STATE(545)] = 15249,
  [SMALL_STATE(546)] = 15267,
  [SMALL_STATE(547)] = 15285,
  [SMALL_STATE(548)] = 15322,
  [SMALL_STATE(549)] = 15349,
  [SMALL_STATE(550)] = 15368,
  [SMALL_STATE(551)] = 15387,
  [SMALL_STATE(552)] = 15402,
  [SMALL_STATE(553)] = 15417,
  [SMALL_STATE(554)] = 15432,
  [SMALL_STATE(555)] = 15447,
  [SMALL_STATE(556)] = 15462,
  [SMALL_STATE(557)] = 15477,
  [SMALL_STATE(558)] = 15492,
  [SMALL_STATE(559)] = 15507,
  [SMALL_STATE(560)] = 15526,
  [SMALL_STATE(561)] = 15541,
  [SMALL_STATE(562)] = 15560,
  [SMALL_STATE(563)] = 15579,
  [SMALL_STATE(564)] = 15594,
  [SMALL_STATE(565)] = 15609,
  [SMALL_STATE(566)] = 15627,
  [SMALL_STATE(567)] = 15653,
  [SMALL_STATE(568)] = 15671,
  [SMALL_STATE(569)] = 15689,
  [SMALL_STATE(570)] = 15715,
  [SMALL_STATE(571)] = 15731,
  [SMALL_STATE(572)] = 15757,
  [SMALL_STATE(573)] = 15783,
  [SMALL_STATE(574)] = 15809,
  [SMALL_STATE(575)] = 15835,
  [SMALL_STATE(576)] = 15861,
  [SMALL_STATE(577)] = 15887,
  [SMALL_STATE(578)] = 15905,
  [SMALL_STATE(579)] = 15931,
  [SMALL_STATE(580)] = 15957,
  [SMALL_STATE(581)] = 15975,
  [SMALL_STATE(582)] = 15993,
  [SMALL_STATE(583)] = 16019,
  [SMALL_STATE(584)] = 16045,
  [SMALL_STATE(585)] = 16071,
  [SMALL_STATE(586)] = 16087,
  [SMALL_STATE(587)] = 16113,
  [SMALL_STATE(588)] = 16139,
  [SMALL_STATE(589)] = 16155,
  [SMALL_STATE(590)] = 16181,
  [SMALL_STATE(591)] = 16197,
  [SMALL_STATE(592)] = 16223,
  [SMALL_STATE(593)] = 16246,
  [SMALL_STATE(594)] = 16259,
  [SMALL_STATE(595)] = 16272,
  [SMALL_STATE(596)] = 16285,
  [SMALL_STATE(597)] = 16308,
  [SMALL_STATE(598)] = 16325,
  [SMALL_STATE(599)] = 16338,
  [SMALL_STATE(600)] = 16351,
  [SMALL_STATE(601)] = 16382,
  [SMALL_STATE(602)] = 16399,
  [SMALL_STATE(603)] = 16422,
  [SMALL_STATE(604)] = 16453,
  [SMALL_STATE(605)] = 16476,
  [SMALL_STATE(606)] = 16507,
  [SMALL_STATE(607)] = 16538,
  [SMALL_STATE(608)] = 16552,
  [SMALL_STATE(609)] = 16580,
  [SMALL_STATE(610)] = 16608,
  [SMALL_STATE(611)] = 16636,
  [SMALL_STATE(612)] = 16664,
  [SMALL_STATE(613)] = 16692,
  [SMALL_STATE(614)] = 16706,
  [SMALL_STATE(615)] = 16720,
  [SMALL_STATE(616)] = 16748,
  [SMALL_STATE(617)] = 16776,
  [SMALL_STATE(618)] = 16804,
  [SMALL_STATE(619)] = 16818,
  [SMALL_STATE(620)] = 16846,
  [SMALL_STATE(621)] = 16864,
  [SMALL_STATE(622)] = 16892,
  [SMALL_STATE(623)] = 16910,
  [SMALL_STATE(624)] = 16938,
  [SMALL_STATE(625)] = 16963,
  [SMALL_STATE(626)] = 16988,
  [SMALL_STATE(627)] = 17013,
  [SMALL_STATE(628)] = 17026,
  [SMALL_STATE(629)] = 17051,
  [SMALL_STATE(630)] = 17064,
  [SMALL_STATE(631)] = 17089,
  [SMALL_STATE(632)] = 17102,
  [SMALL_STATE(633)] = 17115,
  [SMALL_STATE(634)] = 17140,
  [SMALL_STATE(635)] = 17165,
  [SMALL_STATE(636)] = 17190,
  [SMALL_STATE(637)] = 17200,
  [SMALL_STATE(638)] = 17210,
  [SMALL_STATE(639)] = 17226,
  [SMALL_STATE(640)] = 17236,
  [SMALL_STATE(641)] = 17246,
  [SMALL_STATE(642)] = 17256,
  [SMALL_STATE(643)] = 17272,
  [SMALL_STATE(644)] = 17284,
  [SMALL_STATE(645)] = 17294,
  [SMALL_STATE(646)] = 17304,
  [SMALL_STATE(647)] = 17316,
  [SMALL_STATE(648)] = 17328,
  [SMALL_STATE(649)] = 17340,
  [SMALL_STATE(650)] = 17350,
  [SMALL_STATE(651)] = 17360,
  [SMALL_STATE(652)] = 17370,
  [SMALL_STATE(653)] = 17380,
  [SMALL_STATE(654)] = 17399,
  [SMALL_STATE(655)] = 17418,
  [SMALL_STATE(656)] = 17437,
  [SMALL_STATE(657)] = 17456,
  [SMALL_STATE(658)] = 17475,
  [SMALL_STATE(659)] = 17494,
  [SMALL_STATE(660)] = 17513,
  [SMALL_STATE(661)] = 17522,
  [SMALL_STATE(662)] = 17536,
  [SMALL_STATE(663)] = 17550,
  [SMALL_STATE(664)] = 17562,
  [SMALL_STATE(665)] = 17578,
  [SMALL_STATE(666)] = 17592,
  [SMALL_STATE(667)] = 17606,
  [SMALL_STATE(668)] = 17622,
  [SMALL_STATE(669)] = 17636,
  [SMALL_STATE(670)] = 17650,
  [SMALL_STATE(671)] = 17666,
  [SMALL_STATE(672)] = 17678,
  [SMALL_STATE(673)] = 17692,
  [SMALL_STATE(674)] = 17704,
  [SMALL_STATE(675)] = 17718,
  [SMALL_STATE(676)] = 17728,
  [SMALL_STATE(677)] = 17742,
  [SMALL_STATE(678)] = 17756,
  [SMALL_STATE(679)] = 17770,
  [SMALL_STATE(680)] = 17786,
  [SMALL_STATE(681)] = 17800,
  [SMALL_STATE(682)] = 17814,
  [SMALL_STATE(683)] = 17825,
  [SMALL_STATE(684)] = 17836,
  [SMALL_STATE(685)] = 17847,
  [SMALL_STATE(686)] = 17858,
  [SMALL_STATE(687)] = 17869,
  [SMALL_STATE(688)] = 17880,
  [SMALL_STATE(689)] = 17893,
  [SMALL_STATE(690)] = 17904,
  [SMALL_STATE(691)] = 17915,
  [SMALL_STATE(692)] = 17928,
  [SMALL_STATE(693)] = 17941,
  [SMALL_STATE(694)] = 17954,
  [SMALL_STATE(695)] = 17967,
  [SMALL_STATE(696)] = 17978,
  [SMALL_STATE(697)] = 17991,
  [SMALL_STATE(698)] = 18002,
  [SMALL_STATE(699)] = 18011,
  [SMALL_STATE(700)] = 18024,
  [SMALL_STATE(701)] = 18035,
  [SMALL_STATE(702)] = 18046,
  [SMALL_STATE(703)] = 18057,
  [SMALL_STATE(704)] = 18068,
  [SMALL_STATE(705)] = 18079,
  [SMALL_STATE(706)] = 18092,
  [SMALL_STATE(707)] = 18105,
  [SMALL_STATE(708)] = 18116,
  [SMALL_STATE(709)] = 18129,
  [SMALL_STATE(710)] = 18142,
  [SMALL_STATE(711)] = 18155,
  [SMALL_STATE(712)] = 18168,
  [SMALL_STATE(713)] = 18177,
  [SMALL_STATE(714)] = 18188,
  [SMALL_STATE(715)] = 18199,
  [SMALL_STATE(716)] = 18212,
  [SMALL_STATE(717)] = 18225,
  [SMALL_STATE(718)] = 18238,
  [SMALL_STATE(719)] = 18251,
  [SMALL_STATE(720)] = 18264,
  [SMALL_STATE(721)] = 18275,
  [SMALL_STATE(722)] = 18286,
  [SMALL_STATE(723)] = 18297,
  [SMALL_STATE(724)] = 18308,
  [SMALL_STATE(725)] = 18319,
  [SMALL_STATE(726)] = 18326,
  [SMALL_STATE(727)] = 18339,
  [SMALL_STATE(728)] = 18348,
  [SMALL_STATE(729)] = 18361,
  [SMALL_STATE(730)] = 18372,
  [SMALL_STATE(731)] = 18383,
  [SMALL_STATE(732)] = 18394,
  [SMALL_STATE(733)] = 18405,
  [SMALL_STATE(734)] = 18416,
  [SMALL_STATE(735)] = 18427,
  [SMALL_STATE(736)] = 18440,
  [SMALL_STATE(737)] = 18451,
  [SMALL_STATE(738)] = 18462,
  [SMALL_STATE(739)] = 18473,
  [SMALL_STATE(740)] = 18484,
  [SMALL_STATE(741)] = 18495,
  [SMALL_STATE(742)] = 18508,
  [SMALL_STATE(743)] = 18519,
  [SMALL_STATE(744)] = 18530,
  [SMALL_STATE(745)] = 18541,
  [SMALL_STATE(746)] = 18552,
  [SMALL_STATE(747)] = 18563,
  [SMALL_STATE(748)] = 18574,
  [SMALL_STATE(749)] = 18585,
  [SMALL_STATE(750)] = 18598,
  [SMALL_STATE(751)] = 18609,
  [SMALL_STATE(752)] = 18622,
  [SMALL_STATE(753)] = 18633,
  [SMALL_STATE(754)] = 18646,
  [SMALL_STATE(755)] = 18659,
  [SMALL_STATE(756)] = 18670,
  [SMALL_STATE(757)] = 18683,
  [SMALL_STATE(758)] = 18696,
  [SMALL_STATE(759)] = 18709,
  [SMALL_STATE(760)] = 18720,
  [SMALL_STATE(761)] = 18731,
  [SMALL_STATE(762)] = 18742,
  [SMALL_STATE(763)] = 18753,
  [SMALL_STATE(764)] = 18763,
  [SMALL_STATE(765)] = 18773,
  [SMALL_STATE(766)] = 18783,
  [SMALL_STATE(767)] = 18789,
  [SMALL_STATE(768)] = 18799,
  [SMALL_STATE(769)] = 18809,
  [SMALL_STATE(770)] = 18819,
  [SMALL_STATE(771)] = 18829,
  [SMALL_STATE(772)] = 18835,
  [SMALL_STATE(773)] = 18841,
  [SMALL_STATE(774)] = 18851,
  [SMALL_STATE(775)] = 18857,
  [SMALL_STATE(776)] = 18867,
  [SMALL_STATE(777)] = 18873,
  [SMALL_STATE(778)] = 18883,
  [SMALL_STATE(779)] = 18889,
  [SMALL_STATE(780)] = 18899,
  [SMALL_STATE(781)] = 18907,
  [SMALL_STATE(782)] = 18917,
  [SMALL_STATE(783)] = 18927,
  [SMALL_STATE(784)] = 18937,
  [SMALL_STATE(785)] = 18945,
  [SMALL_STATE(786)] = 18955,
  [SMALL_STATE(787)] = 18965,
  [SMALL_STATE(788)] = 18973,
  [SMALL_STATE(789)] = 18983,
  [SMALL_STATE(790)] = 18989,
  [SMALL_STATE(791)] = 18999,
  [SMALL_STATE(792)] = 19009,
  [SMALL_STATE(793)] = 19019,
  [SMALL_STATE(794)] = 19029,
  [SMALL_STATE(795)] = 19039,
  [SMALL_STATE(796)] = 19049,
  [SMALL_STATE(797)] = 19059,
  [SMALL_STATE(798)] = 19069,
  [SMALL_STATE(799)] = 19079,
  [SMALL_STATE(800)] = 19087,
  [SMALL_STATE(801)] = 19097,
  [SMALL_STATE(802)] = 19107,
  [SMALL_STATE(803)] = 19113,
  [SMALL_STATE(804)] = 19123,
  [SMALL_STATE(805)] = 19133,
  [SMALL_STATE(806)] = 19143,
  [SMALL_STATE(807)] = 19153,
  [SMALL_STATE(808)] = 19163,
  [SMALL_STATE(809)] = 19173,
  [SMALL_STATE(810)] = 19181,
  [SMALL_STATE(811)] = 19191,
  [SMALL_STATE(812)] = 19199,
  [SMALL_STATE(813)] = 19207,
  [SMALL_STATE(814)] = 19217,
  [SMALL_STATE(815)] = 19227,
  [SMALL_STATE(816)] = 19237,
  [SMALL_STATE(817)] = 19247,
  [SMALL_STATE(818)] = 19257,
  [SMALL_STATE(819)] = 19267,
  [SMALL_STATE(820)] = 19277,
  [SMALL_STATE(821)] = 19285,
  [SMALL_STATE(822)] = 19295,
  [SMALL_STATE(823)] = 19305,
  [SMALL_STATE(824)] = 19315,
  [SMALL_STATE(825)] = 19325,
  [SMALL_STATE(826)] = 19335,
  [SMALL_STATE(827)] = 19343,
  [SMALL_STATE(828)] = 19353,
  [SMALL_STATE(829)] = 19363,
  [SMALL_STATE(830)] = 19371,
  [SMALL_STATE(831)] = 19381,
  [SMALL_STATE(832)] = 19391,
  [SMALL_STATE(833)] = 19399,
  [SMALL_STATE(834)] = 19409,
  [SMALL_STATE(835)] = 19419,
  [SMALL_STATE(836)] = 19429,
  [SMALL_STATE(837)] = 19439,
  [SMALL_STATE(838)] = 19449,
  [SMALL_STATE(839)] = 19459,
  [SMALL_STATE(840)] = 19469,
  [SMALL_STATE(841)] = 19479,
  [SMALL_STATE(842)] = 19489,
  [SMALL_STATE(843)] = 19497,
  [SMALL_STATE(844)] = 19507,
  [SMALL_STATE(845)] = 19517,
  [SMALL_STATE(846)] = 19525,
  [SMALL_STATE(847)] = 19535,
  [SMALL_STATE(848)] = 19545,
  [SMALL_STATE(849)] = 19555,
  [SMALL_STATE(850)] = 19565,
  [SMALL_STATE(851)] = 19575,
  [SMALL_STATE(852)] = 19585,
  [SMALL_STATE(853)] = 19595,
  [SMALL_STATE(854)] = 19605,
  [SMALL_STATE(855)] = 19615,
  [SMALL_STATE(856)] = 19623,
  [SMALL_STATE(857)] = 19633,
  [SMALL_STATE(858)] = 19643,
  [SMALL_STATE(859)] = 19651,
  [SMALL_STATE(860)] = 19661,
  [SMALL_STATE(861)] = 19671,
  [SMALL_STATE(862)] = 19681,
  [SMALL_STATE(863)] = 19691,
  [SMALL_STATE(864)] = 19701,
  [SMALL_STATE(865)] = 19711,
  [SMALL_STATE(866)] = 19721,
  [SMALL_STATE(867)] = 19731,
  [SMALL_STATE(868)] = 19741,
  [SMALL_STATE(869)] = 19751,
  [SMALL_STATE(870)] = 19761,
  [SMALL_STATE(871)] = 19771,
  [SMALL_STATE(872)] = 19781,
  [SMALL_STATE(873)] = 19791,
  [SMALL_STATE(874)] = 19801,
  [SMALL_STATE(875)] = 19811,
  [SMALL_STATE(876)] = 19821,
  [SMALL_STATE(877)] = 19831,
  [SMALL_STATE(878)] = 19841,
  [SMALL_STATE(879)] = 19851,
  [SMALL_STATE(880)] = 19861,
  [SMALL_STATE(881)] = 19869,
  [SMALL_STATE(882)] = 19876,
  [SMALL_STATE(883)] = 19883,
  [SMALL_STATE(884)] = 19890,
  [SMALL_STATE(885)] = 19897,
  [SMALL_STATE(886)] = 19904,
  [SMALL_STATE(887)] = 19911,
  [SMALL_STATE(888)] = 19918,
  [SMALL_STATE(889)] = 19925,
  [SMALL_STATE(890)] = 19932,
  [SMALL_STATE(891)] = 19939,
  [SMALL_STATE(892)] = 19946,
  [SMALL_STATE(893)] = 19953,
  [SMALL_STATE(894)] = 19960,
  [SMALL_STATE(895)] = 19965,
  [SMALL_STATE(896)] = 19972,
  [SMALL_STATE(897)] = 19979,
  [SMALL_STATE(898)] = 19986,
  [SMALL_STATE(899)] = 19993,
  [SMALL_STATE(900)] = 20000,
  [SMALL_STATE(901)] = 20007,
  [SMALL_STATE(902)] = 20014,
  [SMALL_STATE(903)] = 20021,
  [SMALL_STATE(904)] = 20028,
  [SMALL_STATE(905)] = 20033,
  [SMALL_STATE(906)] = 20040,
  [SMALL_STATE(907)] = 20045,
  [SMALL_STATE(908)] = 20050,
  [SMALL_STATE(909)] = 20057,
  [SMALL_STATE(910)] = 20064,
  [SMALL_STATE(911)] = 20069,
  [SMALL_STATE(912)] = 20076,
  [SMALL_STATE(913)] = 20083,
  [SMALL_STATE(914)] = 20090,
  [SMALL_STATE(915)] = 20095,
  [SMALL_STATE(916)] = 20102,
  [SMALL_STATE(917)] = 20109,
  [SMALL_STATE(918)] = 20114,
  [SMALL_STATE(919)] = 20121,
  [SMALL_STATE(920)] = 20128,
  [SMALL_STATE(921)] = 20135,
  [SMALL_STATE(922)] = 20142,
  [SMALL_STATE(923)] = 20149,
  [SMALL_STATE(924)] = 20156,
  [SMALL_STATE(925)] = 20163,
  [SMALL_STATE(926)] = 20170,
  [SMALL_STATE(927)] = 20177,
  [SMALL_STATE(928)] = 20184,
  [SMALL_STATE(929)] = 20191,
  [SMALL_STATE(930)] = 20198,
  [SMALL_STATE(931)] = 20205,
  [SMALL_STATE(932)] = 20212,
  [SMALL_STATE(933)] = 20219,
  [SMALL_STATE(934)] = 20226,
  [SMALL_STATE(935)] = 20233,
  [SMALL_STATE(936)] = 20240,
  [SMALL_STATE(937)] = 20247,
  [SMALL_STATE(938)] = 20254,
  [SMALL_STATE(939)] = 20261,
  [SMALL_STATE(940)] = 20268,
  [SMALL_STATE(941)] = 20275,
  [SMALL_STATE(942)] = 20282,
  [SMALL_STATE(943)] = 20289,
  [SMALL_STATE(944)] = 20296,
  [SMALL_STATE(945)] = 20303,
  [SMALL_STATE(946)] = 20310,
  [SMALL_STATE(947)] = 20317,
  [SMALL_STATE(948)] = 20322,
  [SMALL_STATE(949)] = 20329,
  [SMALL_STATE(950)] = 20336,
  [SMALL_STATE(951)] = 20341,
  [SMALL_STATE(952)] = 20346,
  [SMALL_STATE(953)] = 20353,
  [SMALL_STATE(954)] = 20358,
  [SMALL_STATE(955)] = 20365,
  [SMALL_STATE(956)] = 20370,
  [SMALL_STATE(957)] = 20377,
  [SMALL_STATE(958)] = 20384,
  [SMALL_STATE(959)] = 20391,
  [SMALL_STATE(960)] = 20398,
  [SMALL_STATE(961)] = 20405,
  [SMALL_STATE(962)] = 20412,
  [SMALL_STATE(963)] = 20419,
  [SMALL_STATE(964)] = 20426,
  [SMALL_STATE(965)] = 20433,
  [SMALL_STATE(966)] = 20438,
  [SMALL_STATE(967)] = 20443,
  [SMALL_STATE(968)] = 20450,
  [SMALL_STATE(969)] = 20455,
  [SMALL_STATE(970)] = 20462,
  [SMALL_STATE(971)] = 20469,
  [SMALL_STATE(972)] = 20476,
  [SMALL_STATE(973)] = 20483,
  [SMALL_STATE(974)] = 20490,
  [SMALL_STATE(975)] = 20495,
  [SMALL_STATE(976)] = 20502,
  [SMALL_STATE(977)] = 20509,
  [SMALL_STATE(978)] = 20514,
  [SMALL_STATE(979)] = 20521,
  [SMALL_STATE(980)] = 20528,
  [SMALL_STATE(981)] = 20533,
  [SMALL_STATE(982)] = 20538,
  [SMALL_STATE(983)] = 20545,
  [SMALL_STATE(984)] = 20552,
  [SMALL_STATE(985)] = 20559,
  [SMALL_STATE(986)] = 20564,
  [SMALL_STATE(987)] = 20569,
  [SMALL_STATE(988)] = 20576,
  [SMALL_STATE(989)] = 20583,
  [SMALL_STATE(990)] = 20590,
  [SMALL_STATE(991)] = 20597,
  [SMALL_STATE(992)] = 20604,
  [SMALL_STATE(993)] = 20609,
  [SMALL_STATE(994)] = 20614,
  [SMALL_STATE(995)] = 20619,
  [SMALL_STATE(996)] = 20626,
  [SMALL_STATE(997)] = 20633,
  [SMALL_STATE(998)] = 20640,
  [SMALL_STATE(999)] = 20647,
  [SMALL_STATE(1000)] = 20654,
  [SMALL_STATE(1001)] = 20661,
  [SMALL_STATE(1002)] = 20668,
  [SMALL_STATE(1003)] = 20673,
  [SMALL_STATE(1004)] = 20680,
  [SMALL_STATE(1005)] = 20687,
  [SMALL_STATE(1006)] = 20694,
  [SMALL_STATE(1007)] = 20701,
  [SMALL_STATE(1008)] = 20708,
  [SMALL_STATE(1009)] = 20715,
  [SMALL_STATE(1010)] = 20722,
  [SMALL_STATE(1011)] = 20729,
  [SMALL_STATE(1012)] = 20734,
  [SMALL_STATE(1013)] = 20741,
  [SMALL_STATE(1014)] = 20748,
  [SMALL_STATE(1015)] = 20753,
  [SMALL_STATE(1016)] = 20757,
  [SMALL_STATE(1017)] = 20761,
  [SMALL_STATE(1018)] = 20765,
  [SMALL_STATE(1019)] = 20769,
  [SMALL_STATE(1020)] = 20773,
  [SMALL_STATE(1021)] = 20777,
  [SMALL_STATE(1022)] = 20781,
  [SMALL_STATE(1023)] = 20785,
  [SMALL_STATE(1024)] = 20789,
  [SMALL_STATE(1025)] = 20793,
  [SMALL_STATE(1026)] = 20797,
  [SMALL_STATE(1027)] = 20801,
  [SMALL_STATE(1028)] = 20805,
  [SMALL_STATE(1029)] = 20809,
  [SMALL_STATE(1030)] = 20813,
  [SMALL_STATE(1031)] = 20817,
  [SMALL_STATE(1032)] = 20821,
  [SMALL_STATE(1033)] = 20825,
  [SMALL_STATE(1034)] = 20829,
  [SMALL_STATE(1035)] = 20833,
  [SMALL_STATE(1036)] = 20837,
  [SMALL_STATE(1037)] = 20841,
  [SMALL_STATE(1038)] = 20845,
  [SMALL_STATE(1039)] = 20849,
  [SMALL_STATE(1040)] = 20853,
  [SMALL_STATE(1041)] = 20857,
  [SMALL_STATE(1042)] = 20861,
  [SMALL_STATE(1043)] = 20865,
  [SMALL_STATE(1044)] = 20869,
  [SMALL_STATE(1045)] = 20873,
  [SMALL_STATE(1046)] = 20877,
  [SMALL_STATE(1047)] = 20881,
  [SMALL_STATE(1048)] = 20885,
  [SMALL_STATE(1049)] = 20889,
  [SMALL_STATE(1050)] = 20893,
  [SMALL_STATE(1051)] = 20897,
  [SMALL_STATE(1052)] = 20901,
  [SMALL_STATE(1053)] = 20905,
  [SMALL_STATE(1054)] = 20909,
  [SMALL_STATE(1055)] = 20913,
  [SMALL_STATE(1056)] = 20917,
  [SMALL_STATE(1057)] = 20921,
  [SMALL_STATE(1058)] = 20925,
  [SMALL_STATE(1059)] = 20929,
  [SMALL_STATE(1060)] = 20933,
  [SMALL_STATE(1061)] = 20937,
  [SMALL_STATE(1062)] = 20941,
  [SMALL_STATE(1063)] = 20945,
  [SMALL_STATE(1064)] = 20949,
  [SMALL_STATE(1065)] = 20953,
  [SMALL_STATE(1066)] = 20957,
  [SMALL_STATE(1067)] = 20961,
  [SMALL_STATE(1068)] = 20965,
  [SMALL_STATE(1069)] = 20969,
  [SMALL_STATE(1070)] = 20973,
  [SMALL_STATE(1071)] = 20977,
  [SMALL_STATE(1072)] = 20981,
  [SMALL_STATE(1073)] = 20985,
  [SMALL_STATE(1074)] = 20989,
  [SMALL_STATE(1075)] = 20993,
  [SMALL_STATE(1076)] = 20997,
  [SMALL_STATE(1077)] = 21001,
  [SMALL_STATE(1078)] = 21005,
  [SMALL_STATE(1079)] = 21009,
  [SMALL_STATE(1080)] = 21013,
  [SMALL_STATE(1081)] = 21017,
  [SMALL_STATE(1082)] = 21021,
  [SMALL_STATE(1083)] = 21025,
  [SMALL_STATE(1084)] = 21029,
  [SMALL_STATE(1085)] = 21033,
  [SMALL_STATE(1086)] = 21037,
  [SMALL_STATE(1087)] = 21041,
  [SMALL_STATE(1088)] = 21045,
  [SMALL_STATE(1089)] = 21049,
  [SMALL_STATE(1090)] = 21053,
  [SMALL_STATE(1091)] = 21057,
  [SMALL_STATE(1092)] = 21061,
  [SMALL_STATE(1093)] = 21065,
  [SMALL_STATE(1094)] = 21069,
  [SMALL_STATE(1095)] = 21073,
  [SMALL_STATE(1096)] = 21077,
  [SMALL_STATE(1097)] = 21081,
  [SMALL_STATE(1098)] = 21085,
  [SMALL_STATE(1099)] = 21089,
  [SMALL_STATE(1100)] = 21093,
  [SMALL_STATE(1101)] = 21097,
  [SMALL_STATE(1102)] = 21101,
  [SMALL_STATE(1103)] = 21105,
  [SMALL_STATE(1104)] = 21109,
  [SMALL_STATE(1105)] = 21113,
  [SMALL_STATE(1106)] = 21117,
  [SMALL_STATE(1107)] = 21121,
  [SMALL_STATE(1108)] = 21125,
  [SMALL_STATE(1109)] = 21129,
  [SMALL_STATE(1110)] = 21133,
  [SMALL_STATE(1111)] = 21137,
  [SMALL_STATE(1112)] = 21141,
  [SMALL_STATE(1113)] = 21145,
  [SMALL_STATE(1114)] = 21149,
  [SMALL_STATE(1115)] = 21153,
  [SMALL_STATE(1116)] = 21157,
  [SMALL_STATE(1117)] = 21161,
  [SMALL_STATE(1118)] = 21165,
  [SMALL_STATE(1119)] = 21169,
  [SMALL_STATE(1120)] = 21173,
  [SMALL_STATE(1121)] = 21177,
  [SMALL_STATE(1122)] = 21181,
  [SMALL_STATE(1123)] = 21185,
  [SMALL_STATE(1124)] = 21189,
  [SMALL_STATE(1125)] = 21193,
  [SMALL_STATE(1126)] = 21197,
  [SMALL_STATE(1127)] = 21201,
  [SMALL_STATE(1128)] = 21205,
  [SMALL_STATE(1129)] = 21209,
  [SMALL_STATE(1130)] = 21213,
  [SMALL_STATE(1131)] = 21217,
  [SMALL_STATE(1132)] = 21221,
  [SMALL_STATE(1133)] = 21225,
  [SMALL_STATE(1134)] = 21229,
  [SMALL_STATE(1135)] = 21233,
  [SMALL_STATE(1136)] = 21237,
  [SMALL_STATE(1137)] = 21241,
  [SMALL_STATE(1138)] = 21245,
  [SMALL_STATE(1139)] = 21249,
  [SMALL_STATE(1140)] = 21253,
  [SMALL_STATE(1141)] = 21257,
  [SMALL_STATE(1142)] = 21261,
  [SMALL_STATE(1143)] = 21265,
  [SMALL_STATE(1144)] = 21269,
  [SMALL_STATE(1145)] = 21273,
  [SMALL_STATE(1146)] = 21277,
  [SMALL_STATE(1147)] = 21281,
  [SMALL_STATE(1148)] = 21285,
  [SMALL_STATE(1149)] = 21289,
  [SMALL_STATE(1150)] = 21293,
  [SMALL_STATE(1151)] = 21297,
  [SMALL_STATE(1152)] = 21301,
  [SMALL_STATE(1153)] = 21305,
  [SMALL_STATE(1154)] = 21309,
  [SMALL_STATE(1155)] = 21313,
  [SMALL_STATE(1156)] = 21317,
  [SMALL_STATE(1157)] = 21321,
  [SMALL_STATE(1158)] = 21325,
  [SMALL_STATE(1159)] = 21329,
  [SMALL_STATE(1160)] = 21333,
  [SMALL_STATE(1161)] = 21337,
  [SMALL_STATE(1162)] = 21341,
  [SMALL_STATE(1163)] = 21345,
  [SMALL_STATE(1164)] = 21349,
  [SMALL_STATE(1165)] = 21353,
  [SMALL_STATE(1166)] = 21357,
  [SMALL_STATE(1167)] = 21361,
  [SMALL_STATE(1168)] = 21365,
  [SMALL_STATE(1169)] = 21369,
  [SMALL_STATE(1170)] = 21373,
  [SMALL_STATE(1171)] = 21377,
  [SMALL_STATE(1172)] = 21381,
  [SMALL_STATE(1173)] = 21385,
  [SMALL_STATE(1174)] = 21389,
  [SMALL_STATE(1175)] = 21393,
  [SMALL_STATE(1176)] = 21397,
  [SMALL_STATE(1177)] = 21401,
  [SMALL_STATE(1178)] = 21405,
  [SMALL_STATE(1179)] = 21409,
  [SMALL_STATE(1180)] = 21413,
  [SMALL_STATE(1181)] = 21417,
  [SMALL_STATE(1182)] = 21421,
  [SMALL_STATE(1183)] = 21425,
  [SMALL_STATE(1184)] = 21429,
  [SMALL_STATE(1185)] = 21433,
  [SMALL_STATE(1186)] = 21437,
  [SMALL_STATE(1187)] = 21441,
  [SMALL_STATE(1188)] = 21445,
  [SMALL_STATE(1189)] = 21449,
  [SMALL_STATE(1190)] = 21453,
  [SMALL_STATE(1191)] = 21457,
  [SMALL_STATE(1192)] = 21461,
  [SMALL_STATE(1193)] = 21465,
  [SMALL_STATE(1194)] = 21469,
  [SMALL_STATE(1195)] = 21473,
  [SMALL_STATE(1196)] = 21477,
  [SMALL_STATE(1197)] = 21481,
  [SMALL_STATE(1198)] = 21485,
  [SMALL_STATE(1199)] = 21489,
  [SMALL_STATE(1200)] = 21493,
  [SMALL_STATE(1201)] = 21497,
  [SMALL_STATE(1202)] = 21501,
  [SMALL_STATE(1203)] = 21505,
  [SMALL_STATE(1204)] = 21509,
  [SMALL_STATE(1205)] = 21513,
  [SMALL_STATE(1206)] = 21517,
  [SMALL_STATE(1207)] = 21521,
  [SMALL_STATE(1208)] = 21525,
  [SMALL_STATE(1209)] = 21529,
  [SMALL_STATE(1210)] = 21533,
  [SMALL_STATE(1211)] = 21537,
  [SMALL_STATE(1212)] = 21541,
  [SMALL_STATE(1213)] = 21545,
  [SMALL_STATE(1214)] = 21549,
  [SMALL_STATE(1215)] = 21553,
  [SMALL_STATE(1216)] = 21557,
  [SMALL_STATE(1217)] = 21561,
  [SMALL_STATE(1218)] = 21565,
  [SMALL_STATE(1219)] = 21569,
  [SMALL_STATE(1220)] = 21573,
  [SMALL_STATE(1221)] = 21577,
  [SMALL_STATE(1222)] = 21581,
  [SMALL_STATE(1223)] = 21585,
  [SMALL_STATE(1224)] = 21589,
  [SMALL_STATE(1225)] = 21593,
  [SMALL_STATE(1226)] = 21597,
  [SMALL_STATE(1227)] = 21601,
  [SMALL_STATE(1228)] = 21605,
  [SMALL_STATE(1229)] = 21609,
  [SMALL_STATE(1230)] = 21613,
  [SMALL_STATE(1231)] = 21617,
  [SMALL_STATE(1232)] = 21621,
  [SMALL_STATE(1233)] = 21625,
  [SMALL_STATE(1234)] = 21629,
  [SMALL_STATE(1235)] = 21633,
  [SMALL_STATE(1236)] = 21637,
  [SMALL_STATE(1237)] = 21641,
  [SMALL_STATE(1238)] = 21645,
  [SMALL_STATE(1239)] = 21649,
  [SMALL_STATE(1240)] = 21653,
  [SMALL_STATE(1241)] = 21657,
  [SMALL_STATE(1242)] = 21661,
  [SMALL_STATE(1243)] = 21665,
  [SMALL_STATE(1244)] = 21669,
  [SMALL_STATE(1245)] = 21673,
  [SMALL_STATE(1246)] = 21677,
  [SMALL_STATE(1247)] = 21681,
  [SMALL_STATE(1248)] = 21685,
  [SMALL_STATE(1249)] = 21689,
  [SMALL_STATE(1250)] = 21693,
  [SMALL_STATE(1251)] = 21697,
  [SMALL_STATE(1252)] = 21701,
  [SMALL_STATE(1253)] = 21705,
  [SMALL_STATE(1254)] = 21709,
  [SMALL_STATE(1255)] = 21713,
  [SMALL_STATE(1256)] = 21717,
  [SMALL_STATE(1257)] = 21721,
  [SMALL_STATE(1258)] = 21725,
  [SMALL_STATE(1259)] = 21729,
  [SMALL_STATE(1260)] = 21733,
  [SMALL_STATE(1261)] = 21737,
  [SMALL_STATE(1262)] = 21741,
  [SMALL_STATE(1263)] = 21745,
  [SMALL_STATE(1264)] = 21749,
  [SMALL_STATE(1265)] = 21753,
  [SMALL_STATE(1266)] = 21757,
  [SMALL_STATE(1267)] = 21761,
  [SMALL_STATE(1268)] = 21765,
  [SMALL_STATE(1269)] = 21769,
  [SMALL_STATE(1270)] = 21773,
  [SMALL_STATE(1271)] = 21777,
  [SMALL_STATE(1272)] = 21781,
  [SMALL_STATE(1273)] = 21785,
  [SMALL_STATE(1274)] = 21789,
  [SMALL_STATE(1275)] = 21793,
  [SMALL_STATE(1276)] = 21797,
  [SMALL_STATE(1277)] = 21801,
  [SMALL_STATE(1278)] = 21805,
  [SMALL_STATE(1279)] = 21809,
  [SMALL_STATE(1280)] = 21813,
  [SMALL_STATE(1281)] = 21817,
  [SMALL_STATE(1282)] = 21821,
  [SMALL_STATE(1283)] = 21825,
  [SMALL_STATE(1284)] = 21829,
  [SMALL_STATE(1285)] = 21833,
  [SMALL_STATE(1286)] = 21837,
  [SMALL_STATE(1287)] = 21841,
  [SMALL_STATE(1288)] = 21845,
  [SMALL_STATE(1289)] = 21849,
  [SMALL_STATE(1290)] = 21853,
  [SMALL_STATE(1291)] = 21857,
  [SMALL_STATE(1292)] = 21861,
  [SMALL_STATE(1293)] = 21865,
  [SMALL_STATE(1294)] = 21869,
  [SMALL_STATE(1295)] = 21873,
  [SMALL_STATE(1296)] = 21877,
  [SMALL_STATE(1297)] = 21881,
  [SMALL_STATE(1298)] = 21885,
  [SMALL_STATE(1299)] = 21889,
  [SMALL_STATE(1300)] = 21893,
  [SMALL_STATE(1301)] = 21897,
  [SMALL_STATE(1302)] = 21901,
  [SMALL_STATE(1303)] = 21905,
  [SMALL_STATE(1304)] = 21909,
  [SMALL_STATE(1305)] = 21913,
  [SMALL_STATE(1306)] = 21917,
  [SMALL_STATE(1307)] = 21921,
  [SMALL_STATE(1308)] = 21925,
  [SMALL_STATE(1309)] = 21929,
  [SMALL_STATE(1310)] = 21933,
  [SMALL_STATE(1311)] = 21937,
  [SMALL_STATE(1312)] = 21941,
  [SMALL_STATE(1313)] = 21945,
  [SMALL_STATE(1314)] = 21949,
  [SMALL_STATE(1315)] = 21953,
  [SMALL_STATE(1316)] = 21957,
  [SMALL_STATE(1317)] = 21961,
  [SMALL_STATE(1318)] = 21965,
  [SMALL_STATE(1319)] = 21969,
  [SMALL_STATE(1320)] = 21973,
  [SMALL_STATE(1321)] = 21977,
  [SMALL_STATE(1322)] = 21981,
  [SMALL_STATE(1323)] = 21985,
  [SMALL_STATE(1324)] = 21989,
  [SMALL_STATE(1325)] = 21993,
  [SMALL_STATE(1326)] = 21997,
  [SMALL_STATE(1327)] = 22001,
  [SMALL_STATE(1328)] = 22005,
  [SMALL_STATE(1329)] = 22009,
  [SMALL_STATE(1330)] = 22013,
  [SMALL_STATE(1331)] = 22017,
  [SMALL_STATE(1332)] = 22021,
  [SMALL_STATE(1333)] = 22025,
  [SMALL_STATE(1334)] = 22029,
  [SMALL_STATE(1335)] = 22033,
  [SMALL_STATE(1336)] = 22037,
  [SMALL_STATE(1337)] = 22041,
  [SMALL_STATE(1338)] = 22045,
  [SMALL_STATE(1339)] = 22049,
  [SMALL_STATE(1340)] = 22053,
  [SMALL_STATE(1341)] = 22057,
  [SMALL_STATE(1342)] = 22061,
  [SMALL_STATE(1343)] = 22065,
  [SMALL_STATE(1344)] = 22069,
  [SMALL_STATE(1345)] = 22073,
  [SMALL_STATE(1346)] = 22077,
  [SMALL_STATE(1347)] = 22081,
  [SMALL_STATE(1348)] = 22085,
  [SMALL_STATE(1349)] = 22089,
  [SMALL_STATE(1350)] = 22093,
  [SMALL_STATE(1351)] = 22097,
  [SMALL_STATE(1352)] = 22101,
  [SMALL_STATE(1353)] = 22105,
  [SMALL_STATE(1354)] = 22109,
  [SMALL_STATE(1355)] = 22113,
  [SMALL_STATE(1356)] = 22117,
  [SMALL_STATE(1357)] = 22121,
  [SMALL_STATE(1358)] = 22125,
  [SMALL_STATE(1359)] = 22129,
  [SMALL_STATE(1360)] = 22133,
  [SMALL_STATE(1361)] = 22137,
  [SMALL_STATE(1362)] = 22141,
  [SMALL_STATE(1363)] = 22145,
  [SMALL_STATE(1364)] = 22149,
  [SMALL_STATE(1365)] = 22153,
  [SMALL_STATE(1366)] = 22157,
  [SMALL_STATE(1367)] = 22161,
  [SMALL_STATE(1368)] = 22165,
  [SMALL_STATE(1369)] = 22169,
  [SMALL_STATE(1370)] = 22173,
  [SMALL_STATE(1371)] = 22177,
  [SMALL_STATE(1372)] = 22181,
  [SMALL_STATE(1373)] = 22185,
  [SMALL_STATE(1374)] = 22189,
  [SMALL_STATE(1375)] = 22193,
  [SMALL_STATE(1376)] = 22197,
  [SMALL_STATE(1377)] = 22201,
  [SMALL_STATE(1378)] = 22205,
  [SMALL_STATE(1379)] = 22209,
  [SMALL_STATE(1380)] = 22213,
  [SMALL_STATE(1381)] = 22217,
  [SMALL_STATE(1382)] = 22221,
  [SMALL_STATE(1383)] = 22225,
  [SMALL_STATE(1384)] = 22229,
  [SMALL_STATE(1385)] = 22233,
  [SMALL_STATE(1386)] = 22237,
  [SMALL_STATE(1387)] = 22241,
  [SMALL_STATE(1388)] = 22245,
  [SMALL_STATE(1389)] = 22249,
  [SMALL_STATE(1390)] = 22253,
  [SMALL_STATE(1391)] = 22257,
  [SMALL_STATE(1392)] = 22261,
  [SMALL_STATE(1393)] = 22265,
  [SMALL_STATE(1394)] = 22269,
  [SMALL_STATE(1395)] = 22273,
  [SMALL_STATE(1396)] = 22277,
  [SMALL_STATE(1397)] = 22281,
  [SMALL_STATE(1398)] = 22285,
  [SMALL_STATE(1399)] = 22289,
  [SMALL_STATE(1400)] = 22293,
  [SMALL_STATE(1401)] = 22297,
  [SMALL_STATE(1402)] = 22301,
  [SMALL_STATE(1403)] = 22305,
  [SMALL_STATE(1404)] = 22309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1389),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1391),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1389),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1221),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1270),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1024),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1029),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1035),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1043),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(820),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1128),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1166),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1204),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1303),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(889),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1372),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1373),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1386),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1393),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(725),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1123),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1143),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1149),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1150),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1160),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1167),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1191),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1035),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1043),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1194),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 33),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 33),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 47),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 47),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 9), SHIFT(163),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 1, 0, 9),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignable_expression, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 24),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 24),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 21),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 21),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, 0, 36),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, 0, 36),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 9), SHIFT(162),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 51),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 51),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 9), SHIFT(160),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 3, 0, 22),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 3, 0, 22),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 9), SHIFT(164),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member_access, 3, 0, 23),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_member_access, 3, 0, 23),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 12),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2, 0, 12),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2, 0, 12),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 7),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 7),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_classification_property, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 12),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caption_property, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 3, 0, 21),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 3, 0, 21),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1333),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1334),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1344),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1345),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1351),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1353),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1354),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1360),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1372),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1373),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1380),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1386),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1393),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 8),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1333),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1334),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1344),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1345),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1351),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1353),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1354),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1360),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1372),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1373),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1380),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1386),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1393),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1272),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_section_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_section_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_section_repeat1, 2, 0, 0), SHIFT_REPEAT(1388),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(972),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1054),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1388),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustered_property, 4, 0, 85),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 20),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 20),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 11),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 11),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, 0, 58),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, 0, 58),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modify_statement, 4, 0, 50),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modify_statement, 4, 0, 50),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4, 0, 50),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_statement, 4, 0, 50),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset_statement, 4, 0, 50),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reset_statement, 4, 0, 50),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_first_statement, 4, 0, 50),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_first_statement, 4, 0, 50),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_last_statement, 4, 0, 50),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_last_statement, 4, 0, 50),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, 0, 50),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, 0, 50),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_set_method, 5, 0, 18),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_set_method, 5, 0, 18),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 29),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 56),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, 0, 58),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, 0, 58),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, 0, 59),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert_statement, 5, 0, 59),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modify_statement, 5, 0, 59),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modify_statement, 5, 0, 59),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5, 0, 59),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_statement, 5, 0, 59),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 5, 0, 60),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 5, 0, 60),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_set_method, 6, 0, 67),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_set_method, 6, 0, 67),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 68),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 68),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 42),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, 0, 76),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert_statement, 7, 0, 76),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_range_statement, 7, 0, 77),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_range_statement, 7, 0, 77),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_filter_statement, 7, 0, 78),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_filter_statement, 7, 0, 78),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_set_method, 8, 0, 79),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_set_method, 8, 0, 79),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_filter_statement, 8, 0, 81),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_filter_statement, 8, 0, 81),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_range_statement, 9, 0, 84),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_range_statement, 9, 0, 84),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbeforeinsertevent_trigger, 4, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbeforemodifyevent_trigger, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbeforedeleteevent_trigger, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 1, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions_property, 4, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_set_statement, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_find_set_statement, 1, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 53),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 25),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 63),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 54),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 41),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 64),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 55),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 56),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 29),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 9, 0, 65),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_method, 3, 0, 34),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_method, 3, 0, 34),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drilldown_pageid_property, 4, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 10, 0, 63),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 10, 0, 64),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 4, 0, 49),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 4, 0, 49),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, 0, 50),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert_statement, 4, 0, 50),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 10, 0, 41),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 10, 0, 72),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 10, 0, 65),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_pageid_property, 4, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 11, 0, 72),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 4, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 4, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 6, 0, 25),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 6, 0, 16),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 6, 0, 27),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 3, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 6, 0, 29),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 3, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type_property, 4, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1332),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(787),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1128),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(1303),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeunit_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(889),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 48),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 48),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oninsert_trigger, 4, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onmodify_trigger, 4, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ondelete_trigger, 4, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onrename_trigger, 4, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 25),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 37),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 16),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 38),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 27),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 41),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 29),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 7, 0, 42),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onvalidate_trigger, 4, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onaftergetrecord_trigger, 4, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onafterinsertevent_trigger, 4, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onaftermodifyevent_trigger, 4, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 5, 0, 16),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onafterdeleteevent_trigger, 4, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 25),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 53),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 37),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 38),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 16),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 54),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 41),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 8, 0, 55),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 7),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_set, 1, 0, 7),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 21),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 21),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1365),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_filter_statement_repeat1, 2, 0, 80),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_trigger_declaration, 4, 0, 90),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_relation_property, 4, 0, 91),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_class_property, 4, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calc_formula_property, 4, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_zero_property, 4, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editable_property, 4, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_members_property, 4, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_caption_property, 4, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_members_property, 5, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_places_property, 6, 0, 92),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_operation, 2, 0, 18),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1400),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1398),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1399),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1402),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1403),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1203),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3, 0, 69),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3, 0, 69),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1359),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_section_repeat1, 2, 0, 0), SHIFT_REPEAT(1359),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_type, 1, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 2, 0, 10),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 7, 0, 0),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_type, 4, 0, 35),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [1284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(956),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(903),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_type, 2, 0, 10),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeunit_type, 2, 0, 10),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotnet_type, 2, 0, 10),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_type_value, 1, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_operator, 1, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_operator, 1, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3, 0, 10),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1, 0, 0),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 6, 0, 61),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1129),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onrun_trigger, 4, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(1128),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2, 0, 0),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(666),
  [1358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(666),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_table_relation, 1, 0, 5),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1394),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1358),
  [1405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 14), SHIFT_REPEAT(178),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 14),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1370),
  [1434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_section_repeat1, 2, 0, 0), SHIFT_REPEAT(1370),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1383),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2, 0, 0),
  [1459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(1053),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keys_repeat1, 2, 0, 0),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keys_repeat1, 2, 0, 0), SHIFT_REPEAT(1065),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_table_relation, 3, 0, 17),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1384),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5, 0, 2),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_field_list, 1, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeunit_declaration, 6, 0, 2),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 6, 0, 2),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_conditions, 2, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 3, 0, 46),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_members_value, 1, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeunit_declaration, 7, 0, 2),
  [1561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_members_value_repeat1, 2, 0, 0), SHIFT_REPEAT(758),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_members_value_repeat1, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeunit_declaration, 5, 0, 2),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_field_list, 2, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_declaration, 6, 0, 52),
  [1574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(670),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_conditions_repeat1, 2, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_where_conditions, 1, 0, 0),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_set, 2, 0, 14),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [1599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(715),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_field_list_repeat1, 2, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 4),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 14),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 4),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_where_conditions, 2, 0, 0),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_type, 1, 0, 0),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [1654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_filter_statement_repeat1, 2, 0, 82), SHIFT_REPEAT(166),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_filter_statement_repeat1, 2, 0, 82),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(749),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 8, 0, 71),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_conditions, 1, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lookup_where_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(679),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lookup_where_conditions_repeat1, 2, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1404),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_members_value, 2, 0, 0),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1366),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1368),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1, 0, 0),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_field, 1, 0, 0),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_where_condition, 6, 0, 86),
  [1969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_return_specification, 2, 0, 26),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_return_specification, 3, 0, 39),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 28),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_declaration, 8, 0, 52),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabledata_permission, 4, 0, 19),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 10, 0, 71),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_member, 1, 0, 0),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_condition, 3, 0, 57),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_field_reference, 1, 0, 30),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 40),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_ref, 4, 0, 73),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1, 0, 0),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1, 0, 62),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 11, 0, 71),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_declaration, 9, 0, 52),
  [2081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_type, 4, 0, 35),
  [2083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_where_condition, 6, 0, 87),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabledata_permission_list, 1, 0, 0),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_table_relation, 5, 0, 43),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 4, 0, 45),
  [2099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_id, 1, 0, 0),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_classification_value, 1, 0, 0),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 6, 0, 88),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 6, 0, 89),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4, 0, 61),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_table_relation, 4, 0, 17),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4, 0, 83),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_formula, 4, 0, 31),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_formula, 4, 0, 32),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_formula, 4, 0, 31),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_average_formula, 4, 0, 31),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_formula, 4, 0, 31),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_formula, 4, 0, 31),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 1, 0, 15),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_table_relation, 7, 0, 66),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions_value, 1, 0, 0),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_no_value, 1, 0, 0),
  [2433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_value, 1, 0, 0),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_instance_value, 1, 0, 0),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_id_value, 1, 0, 0),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabledata_permission_list, 3, 0, 0),
  [2505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [2513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_relation_expression, 1, 0, 0),
  [2531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_relation_expression, 1, 0, 6),
  [2543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_class_value, 1, 0, 0),
  [2557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [2567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_name, 1, 0, 3),
  [2611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_table_relation, 2, 0, 5),
  [2635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [2637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1395),
  [2639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_filter, 3, 0, 44),
  [2645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2, 0, 70),
  [2647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [2649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type_value, 1, 0, 0),
  [2651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1375),
  [2671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calc_formula_value, 1, 0, 0),
  [2677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_formula, 5, 0, 32),
  [2679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_formula, 5, 0, 31),
  [2681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_average_formula, 5, 0, 31),
  [2683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_formula, 5, 0, 31),
  [2685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_formula, 5, 0, 31),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_zero_value, 1, 0, 0),
  [2695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editable_value, 1, 0, 0),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_caption_value, 1, 0, 0),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_filter, 6, 0, 74),
  [2717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_filter, 6, 0, 75),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_formula, 8, 0, 31),
  [2769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_arguments, 3, 0, 13),
  [2811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [2835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [2837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_name, 1, 0, 1),
  [2895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [2901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
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

TS_PUBLIC const TSLanguage *tree_sitter_al(void) {
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

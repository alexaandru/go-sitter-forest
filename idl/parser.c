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
#define STATE_COUNT 804
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 381
#define ALIAS_COUNT 0
#define TOKEN_COUNT 156
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_short = 1,
  anon_sym_int16 = 2,
  anon_sym_long = 3,
  anon_sym_int32 = 4,
  anon_sym_longlong = 5,
  anon_sym_int64 = 6,
  sym_unsigned_tiny_int = 7,
  sym_boolean_type = 8,
  anon_sym_fixed = 9,
  sym_octet_type = 10,
  sym_signed_tiny_int = 11,
  anon_sym_unsignedshort = 12,
  anon_sym_uint16 = 13,
  anon_sym_unsignedlong = 14,
  anon_sym_uint32 = 15,
  anon_sym_unsignedlonglong = 16,
  anon_sym_uint64 = 17,
  anon_sym_float = 18,
  anon_sym_double = 19,
  anon_sym_longdouble = 20,
  anon_sym_char = 21,
  anon_sym_wchar = 22,
  anon_sym_COLON_COLON = 23,
  anon_sym_string = 24,
  anon_sym_wstring = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_any = 28,
  anon_sym_COMMA = 29,
  anon_sym_sequence = 30,
  anon_sym_map = 31,
  anon_sym_PIPE = 32,
  anon_sym_CARET = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_GT_GT = 35,
  anon_sym_LT_LT = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  anon_sym_TILDE = 44,
  sym_escape_sequence = 45,
  anon_sym_L = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_literal_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_char_literal_token1 = 50,
  anon_sym_TRUE = 51,
  anon_sym_FALSE = 52,
  sym_number_literal = 53,
  aux_sym_preproc_call_token1 = 54,
  sym_preproc_directive = 55,
  sym_preproc_arg = 56,
  anon_sym_exception = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_local = 60,
  anon_sym_abstract = 61,
  anon_sym_interface = 62,
  anon_sym_COLON = 63,
  anon_sym_SEMI = 64,
  anon_sym_void = 65,
  anon_sym_in = 66,
  anon_sym_out = 67,
  anon_sym_inout = 68,
  anon_sym_raises = 69,
  anon_sym_readonly = 70,
  anon_sym_attribute = 71,
  anon_sym_getraises = 72,
  anon_sym_setraises = 73,
  anon_sym_bitset = 74,
  anon_sym_bitfield = 75,
  anon_sym_bitmask = 76,
  anon_sym_ATannotation = 77,
  anon_sym_default = 78,
  anon_sym_AT = 79,
  anon_sym_EQ = 80,
  anon_sym_id = 81,
  anon_sym_autoid = 82,
  anon_sym_optional = 83,
  anon_sym_position = 84,
  anon_sym_value = 85,
  anon_sym_extensibility = 86,
  anon_sym_final = 87,
  anon_sym_appendable = 88,
  anon_sym_mutable = 89,
  anon_sym_key = 90,
  anon_sym_must_understand = 91,
  anon_sym_default_literal = 92,
  anon_sym_range = 93,
  anon_sym_min = 94,
  anon_sym_max = 95,
  anon_sym_unit = 96,
  anon_sym_bit_bound = 97,
  anon_sym_external = 98,
  anon_sym_nested = 99,
  anon_sym_verbatim = 100,
  anon_sym_service = 101,
  anon_sym_oneway = 102,
  anon_sym_ami = 103,
  anon_sym_module = 104,
  anon_sym_typename = 105,
  anon_sym_valuetype = 106,
  anon_sym_eventtype = 107,
  anon_sym_struct = 108,
  anon_sym_union = 109,
  anon_sym_enum = 110,
  anon_sym_const = 111,
  anon_sym_alias = 112,
  anon_sym_custom = 113,
  anon_sym_truncatable = 114,
  anon_sym_supports = 115,
  anon_sym_public = 116,
  anon_sym_private = 117,
  anon_sym_factory = 118,
  anon_sym_typedef = 119,
  anon_sym_LBRACK = 120,
  anon_sym_RBRACK = 121,
  anon_sym_ATdefault_literal = 122,
  anon_sym_ATignore_literal_names = 123,
  anon_sym_switch = 124,
  anon_sym_case = 125,
  anon_sym_typeid = 126,
  anon_sym_typeprefix = 127,
  anon_sym_import = 128,
  anon_sym_Object = 129,
  anon_sym_context = 130,
  sym_value_base_type = 131,
  anon_sym_component = 132,
  anon_sym_provides = 133,
  anon_sym_uses = 134,
  anon_sym_multiple = 135,
  anon_sym_home = 136,
  anon_sym_manages = 137,
  anon_sym_emits = 138,
  anon_sym_publishes = 139,
  anon_sym_consumes = 140,
  anon_sym_primarykey = 141,
  anon_sym_finder = 142,
  anon_sym_porttype = 143,
  anon_sym_port = 144,
  anon_sym_mirrorport = 145,
  anon_sym_connector = 146,
  anon_sym_native = 147,
  anon_sym_POUNDdefine = 148,
  aux_sym_predefine_token1 = 149,
  sym_identifier = 150,
  anon_sym_SLASH_SLASH = 151,
  aux_sym_comment_token1 = 152,
  aux_sym_comment_token2 = 153,
  anon_sym_SLASH_STAR = 154,
  aux_sym_comment_token3 = 155,
  sym_specification = 156,
  sym_signed_short_int = 157,
  sym_signed_long_int = 158,
  sym_signed_longlong_int = 159,
  sym_unsigned_int = 160,
  sym_fixed_pt_const_type = 161,
  sym_integer_type = 162,
  sym_signed_int = 163,
  sym_unsigned_short_int = 164,
  sym_unsigned_long_int = 165,
  sym_unsigned_longlong_int = 166,
  sym_floating_pt_type = 167,
  sym_char_type = 168,
  sym_scoped_name = 169,
  sym_string_type = 170,
  sym_type_spec = 171,
  sym_simple_type_spec = 172,
  sym_base_type_spec = 173,
  sym_any_type = 174,
  sym_fixed_pt_type = 175,
  sym_template_type_spec = 176,
  sym_sequence_type = 177,
  sym_map_type = 178,
  sym_positive_int_const = 179,
  sym_const_expr = 180,
  sym_or_expr = 181,
  sym_xor_expr = 182,
  sym_and_expr = 183,
  sym_shift_expr = 184,
  sym_add_expr = 185,
  sym_mult_expr = 186,
  sym_unary_expr = 187,
  sym_primary_expr = 188,
  sym_unary_operator = 189,
  sym_literal = 190,
  sym_string_literal = 191,
  sym_char_literal = 192,
  sym_boolean_literal = 193,
  sym_preproc_call = 194,
  sym_except_dcl = 195,
  sym_interface_dcl = 196,
  sym_interface_kind = 197,
  sym_interface_forward_dcl = 198,
  sym_interface_def = 199,
  sym_interface_header = 200,
  sym_interface_inheritance_spec = 201,
  sym_interface_name = 202,
  sym_interface_body = 203,
  sym_export = 204,
  sym_op_dcl = 205,
  sym_op_type_spec = 206,
  sym_parameter_dcls = 207,
  sym_param_dcl = 208,
  sym_param_attribute = 209,
  sym_raises_expr = 210,
  sym_attr_dcl = 211,
  sym_readonly_attr_spec = 212,
  sym_readonly_attr_declarator = 213,
  sym_attr_spec = 214,
  sym_attr_declarator = 215,
  sym_attr_raises_expr = 216,
  sym_get_excep_expr = 217,
  sym_set_excep_expr = 218,
  sym_exception_list = 219,
  sym_bitset_dcl = 220,
  sym_bitfield = 221,
  sym_bitfield_spec = 222,
  sym_destination_type = 223,
  sym_bitmask_dcl = 224,
  sym_bit_value = 225,
  sym_annotation_dcl = 226,
  sym_annotation_body = 227,
  sym_annotation_member = 228,
  sym_annotation_member_type = 229,
  sym_any_const_type = 230,
  sym_annotation_appl = 231,
  sym_annotation_appl_params = 232,
  sym_annotation_appl_param = 233,
  sym_annotation_built_name = 234,
  sym_template_module_dcl = 235,
  sym_formal_parameters = 236,
  sym_formal_parameter = 237,
  sym_formal_parameter_type = 238,
  sym_tpl_definition = 239,
  sym_template_module_inst = 240,
  sym_actual_parameters = 241,
  sym_actual_parameter = 242,
  sym_template_module_ref = 243,
  sym_formal_parameter_names = 244,
  sym_value_dcl = 245,
  sym_value_def = 246,
  sym_value_kind = 247,
  sym_value_header = 248,
  sym_value_inheritance_spec = 249,
  sym_value_inheritance = 250,
  sym_value_supports = 251,
  sym_value_name = 252,
  sym_value_element = 253,
  sym_state_member = 254,
  sym_init_dcl = 255,
  sym_init_param_dcls = 256,
  sym_init_param_dcl = 257,
  sym_value_forward_dcl = 258,
  sym_typedef_dcl = 259,
  sym_type_declarator = 260,
  sym_any_declarators = 261,
  sym_any_declarator = 262,
  sym_simple_declarator = 263,
  sym_declarator = 264,
  sym_declarators = 265,
  sym_array_declarator = 266,
  sym_fixed_array_size = 267,
  sym_enum_dcl = 268,
  sym_enumerator = 269,
  sym_enum_modifier = 270,
  sym_enum_anno = 271,
  sym_union_dcl = 272,
  sym_union_forward_dcl = 273,
  sym_union_def = 274,
  sym_case = 275,
  sym_case_label = 276,
  sym_element_spec = 277,
  sym_switch_type_spec = 278,
  sym_type_id_dcl = 279,
  sym_type_prefix_dcl = 280,
  sym_import_dcl = 281,
  sym_imported_scope = 282,
  sym_object_type = 283,
  sym_op_oneway_dcl = 284,
  sym_in_parameter_dcls = 285,
  sym_in_param_dcl = 286,
  sym_op_with_context = 287,
  sym_context_expr = 288,
  sym_value_box_def = 289,
  sym_value_abs_def = 290,
  sym_component_dcl = 291,
  sym_component_forward_dcl = 292,
  sym_component_def = 293,
  sym_component_header = 294,
  sym_component_inheritance_spec = 295,
  sym_component_body = 296,
  sym_component_export = 297,
  sym_provides_dcl = 298,
  sym_interface_type = 299,
  sym_uses_dcl = 300,
  sym_home_dcl = 301,
  sym_home_header = 302,
  sym_home_inheritance_spec = 303,
  sym_home_body = 304,
  sym_home_export = 305,
  sym_factory_dcl = 306,
  sym_factory_param_dcls = 307,
  sym_factory_param_dcl = 308,
  sym_supported_interface_spec = 309,
  sym_emits_dcl = 310,
  sym_publishes_dcl = 311,
  sym_consumes_dcl = 312,
  sym_primary_key_spec = 313,
  sym_finder_dcl = 314,
  sym_event_dcl = 315,
  sym_event_forward_dcl = 316,
  sym_event_abs_def = 317,
  sym_event_def = 318,
  sym_event_header = 319,
  sym_porttype_dcl = 320,
  sym_porttype_forward_dcl = 321,
  sym_porttype_def = 322,
  sym_port_body = 323,
  sym_port_ref = 324,
  sym_port_export = 325,
  sym_port_dcl = 326,
  sym_connector_dcl = 327,
  sym_connector_header = 328,
  sym_connector_inherit_spec = 329,
  sym_connector_export = 330,
  sym_definition = 331,
  sym_type_dcl = 332,
  sym_constr_type_dcl = 333,
  sym_native_dcl = 334,
  sym_module_dcl = 335,
  sym_struct_dcl = 336,
  sym_struct_forward_dcl = 337,
  sym_struct_def = 338,
  sym_member = 339,
  sym_default = 340,
  sym_predefine = 341,
  sym_const_dcl = 342,
  sym_const_type = 343,
  sym_comment = 344,
  aux_sym_specification_repeat1 = 345,
  aux_sym_string_literal_repeat1 = 346,
  aux_sym_char_literal_repeat1 = 347,
  aux_sym_except_dcl_repeat1 = 348,
  aux_sym_interface_def_repeat1 = 349,
  aux_sym_interface_inheritance_spec_repeat1 = 350,
  aux_sym_interface_body_repeat1 = 351,
  aux_sym_parameter_dcls_repeat1 = 352,
  aux_sym_raises_expr_repeat1 = 353,
  aux_sym_readonly_attr_declarator_repeat1 = 354,
  aux_sym_bitset_dcl_repeat1 = 355,
  aux_sym_bitfield_repeat1 = 356,
  aux_sym_bitmask_dcl_repeat1 = 357,
  aux_sym_annotation_dcl_repeat1 = 358,
  aux_sym_annotation_appl_params_repeat1 = 359,
  aux_sym_template_module_dcl_repeat1 = 360,
  aux_sym_formal_parameters_repeat1 = 361,
  aux_sym_actual_parameters_repeat1 = 362,
  aux_sym_formal_parameter_names_repeat1 = 363,
  aux_sym_value_def_repeat1 = 364,
  aux_sym_value_inheritance_spec_repeat1 = 365,
  aux_sym_init_param_dcls_repeat1 = 366,
  aux_sym_any_declarators_repeat1 = 367,
  aux_sym_declarators_repeat1 = 368,
  aux_sym_array_declarator_repeat1 = 369,
  aux_sym_enum_dcl_repeat1 = 370,
  aux_sym_enumerator_repeat1 = 371,
  aux_sym_union_def_repeat1 = 372,
  aux_sym_in_parameter_dcls_repeat1 = 373,
  aux_sym_context_expr_repeat1 = 374,
  aux_sym_component_body_repeat1 = 375,
  aux_sym_home_body_repeat1 = 376,
  aux_sym_factory_param_dcls_repeat1 = 377,
  aux_sym_port_body_repeat1 = 378,
  aux_sym_connector_dcl_repeat1 = 379,
  aux_sym_module_dcl_repeat1 = 380,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_short] = "short",
  [anon_sym_int16] = "int16",
  [anon_sym_long] = "long",
  [anon_sym_int32] = "int32",
  [anon_sym_longlong] = "long long",
  [anon_sym_int64] = "int64",
  [sym_unsigned_tiny_int] = "unsigned_tiny_int",
  [sym_boolean_type] = "boolean_type",
  [anon_sym_fixed] = "fixed",
  [sym_octet_type] = "octet_type",
  [sym_signed_tiny_int] = "signed_tiny_int",
  [anon_sym_unsignedshort] = "unsigned short",
  [anon_sym_uint16] = "uint16",
  [anon_sym_unsignedlong] = "unsigned long",
  [anon_sym_uint32] = "uint32",
  [anon_sym_unsignedlonglong] = "unsigned long long",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_longdouble] = "long double",
  [anon_sym_char] = "char",
  [anon_sym_wchar] = "wchar",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_string] = "string",
  [anon_sym_wstring] = "wstring",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_any] = "any",
  [anon_sym_COMMA] = ",",
  [anon_sym_sequence] = "sequence",
  [anon_sym_map] = "map",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_TILDE] = "~",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_L] = "L",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "character",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_number_literal] = "number_literal",
  [aux_sym_preproc_call_token1] = "preproc_call_token1",
  [sym_preproc_directive] = "preproc_directive",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_exception] = "exception",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_local] = "local",
  [anon_sym_abstract] = "abstract",
  [anon_sym_interface] = "interface",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_void] = "void",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_raises] = "raises",
  [anon_sym_readonly] = "readonly",
  [anon_sym_attribute] = "attribute",
  [anon_sym_getraises] = "getraises",
  [anon_sym_setraises] = "setraises",
  [anon_sym_bitset] = "bitset",
  [anon_sym_bitfield] = "bitfield",
  [anon_sym_bitmask] = "bitmask",
  [anon_sym_ATannotation] = "@annotation",
  [anon_sym_default] = "default",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_id] = "id",
  [anon_sym_autoid] = "autoid",
  [anon_sym_optional] = "optional",
  [anon_sym_position] = "position",
  [anon_sym_value] = "value",
  [anon_sym_extensibility] = "extensibility",
  [anon_sym_final] = "final",
  [anon_sym_appendable] = "appendable",
  [anon_sym_mutable] = "mutable",
  [anon_sym_key] = "key",
  [anon_sym_must_understand] = "must_understand",
  [anon_sym_default_literal] = "default_literal",
  [anon_sym_range] = "range",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_unit] = "unit",
  [anon_sym_bit_bound] = "bit_bound",
  [anon_sym_external] = "external",
  [anon_sym_nested] = "nested",
  [anon_sym_verbatim] = "verbatim",
  [anon_sym_service] = "service",
  [anon_sym_oneway] = "oneway",
  [anon_sym_ami] = "ami",
  [anon_sym_module] = "module",
  [anon_sym_typename] = "typename",
  [anon_sym_valuetype] = "valuetype",
  [anon_sym_eventtype] = "eventtype",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_alias] = "alias",
  [anon_sym_custom] = "custom",
  [anon_sym_truncatable] = "truncatable",
  [anon_sym_supports] = "supports",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_factory] = "factory",
  [anon_sym_typedef] = "typedef",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_ATdefault_literal] = "@default_literal",
  [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_typeid] = "typeid",
  [anon_sym_typeprefix] = "typeprefix",
  [anon_sym_import] = "import",
  [anon_sym_Object] = "Object",
  [anon_sym_context] = "context",
  [sym_value_base_type] = "value_base_type",
  [anon_sym_component] = "component",
  [anon_sym_provides] = "provides",
  [anon_sym_uses] = "uses",
  [anon_sym_multiple] = "multiple",
  [anon_sym_home] = "home",
  [anon_sym_manages] = "manages",
  [anon_sym_emits] = "emits",
  [anon_sym_publishes] = "publishes",
  [anon_sym_consumes] = "consumes",
  [anon_sym_primarykey] = "primarykey",
  [anon_sym_finder] = "finder",
  [anon_sym_porttype] = "porttype",
  [anon_sym_port] = "port",
  [anon_sym_mirrorport] = "mirrorport",
  [anon_sym_connector] = "connector",
  [anon_sym_native] = "native",
  [anon_sym_POUNDdefine] = "#define",
  [aux_sym_predefine_token1] = "predefine_token1",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_specification] = "specification",
  [sym_signed_short_int] = "signed_short_int",
  [sym_signed_long_int] = "signed_long_int",
  [sym_signed_longlong_int] = "signed_longlong_int",
  [sym_unsigned_int] = "unsigned_int",
  [sym_fixed_pt_const_type] = "fixed_pt_const_type",
  [sym_integer_type] = "integer_type",
  [sym_signed_int] = "signed_int",
  [sym_unsigned_short_int] = "unsigned_short_int",
  [sym_unsigned_long_int] = "unsigned_long_int",
  [sym_unsigned_longlong_int] = "unsigned_longlong_int",
  [sym_floating_pt_type] = "floating_pt_type",
  [sym_char_type] = "char_type",
  [sym_scoped_name] = "scoped_name",
  [sym_string_type] = "string_type",
  [sym_type_spec] = "type_spec",
  [sym_simple_type_spec] = "simple_type_spec",
  [sym_base_type_spec] = "base_type_spec",
  [sym_any_type] = "any_type",
  [sym_fixed_pt_type] = "fixed_pt_type",
  [sym_template_type_spec] = "template_type_spec",
  [sym_sequence_type] = "sequence_type",
  [sym_map_type] = "map_type",
  [sym_positive_int_const] = "positive_int_const",
  [sym_const_expr] = "const_expr",
  [sym_or_expr] = "or_expr",
  [sym_xor_expr] = "xor_expr",
  [sym_and_expr] = "and_expr",
  [sym_shift_expr] = "shift_expr",
  [sym_add_expr] = "add_expr",
  [sym_mult_expr] = "mult_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_primary_expr] = "primary_expr",
  [sym_unary_operator] = "unary_operator",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_preproc_call] = "preproc_call",
  [sym_except_dcl] = "except_dcl",
  [sym_interface_dcl] = "interface_dcl",
  [sym_interface_kind] = "interface_kind",
  [sym_interface_forward_dcl] = "interface_forward_dcl",
  [sym_interface_def] = "interface_def",
  [sym_interface_header] = "interface_header",
  [sym_interface_inheritance_spec] = "interface_inheritance_spec",
  [sym_interface_name] = "interface_name",
  [sym_interface_body] = "interface_body",
  [sym_export] = "export",
  [sym_op_dcl] = "op_dcl",
  [sym_op_type_spec] = "op_type_spec",
  [sym_parameter_dcls] = "parameter_dcls",
  [sym_param_dcl] = "param_dcl",
  [sym_param_attribute] = "param_attribute",
  [sym_raises_expr] = "raises_expr",
  [sym_attr_dcl] = "attr_dcl",
  [sym_readonly_attr_spec] = "readonly_attr_spec",
  [sym_readonly_attr_declarator] = "readonly_attr_declarator",
  [sym_attr_spec] = "attr_spec",
  [sym_attr_declarator] = "attr_declarator",
  [sym_attr_raises_expr] = "attr_raises_expr",
  [sym_get_excep_expr] = "get_excep_expr",
  [sym_set_excep_expr] = "set_excep_expr",
  [sym_exception_list] = "exception_list",
  [sym_bitset_dcl] = "bitset_dcl",
  [sym_bitfield] = "bitfield",
  [sym_bitfield_spec] = "bitfield_spec",
  [sym_destination_type] = "destination_type",
  [sym_bitmask_dcl] = "bitmask_dcl",
  [sym_bit_value] = "bit_value",
  [sym_annotation_dcl] = "annotation_dcl",
  [sym_annotation_body] = "annotation_body",
  [sym_annotation_member] = "annotation_member",
  [sym_annotation_member_type] = "annotation_member_type",
  [sym_any_const_type] = "any_const_type",
  [sym_annotation_appl] = "annotation_appl",
  [sym_annotation_appl_params] = "annotation_appl_params",
  [sym_annotation_appl_param] = "annotation_appl_param",
  [sym_annotation_built_name] = "annotation_built_name",
  [sym_template_module_dcl] = "template_module_dcl",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_formal_parameter_type] = "formal_parameter_type",
  [sym_tpl_definition] = "tpl_definition",
  [sym_template_module_inst] = "template_module_inst",
  [sym_actual_parameters] = "actual_parameters",
  [sym_actual_parameter] = "actual_parameter",
  [sym_template_module_ref] = "template_module_ref",
  [sym_formal_parameter_names] = "formal_parameter_names",
  [sym_value_dcl] = "value_dcl",
  [sym_value_def] = "value_def",
  [sym_value_kind] = "value_kind",
  [sym_value_header] = "value_header",
  [sym_value_inheritance_spec] = "value_inheritance_spec",
  [sym_value_inheritance] = "value_inheritance",
  [sym_value_supports] = "value_supports",
  [sym_value_name] = "value_name",
  [sym_value_element] = "value_element",
  [sym_state_member] = "state_member",
  [sym_init_dcl] = "init_dcl",
  [sym_init_param_dcls] = "init_param_dcls",
  [sym_init_param_dcl] = "init_param_dcl",
  [sym_value_forward_dcl] = "value_forward_dcl",
  [sym_typedef_dcl] = "typedef_dcl",
  [sym_type_declarator] = "type_declarator",
  [sym_any_declarators] = "any_declarators",
  [sym_any_declarator] = "any_declarator",
  [sym_simple_declarator] = "simple_declarator",
  [sym_declarator] = "declarator",
  [sym_declarators] = "declarators",
  [sym_array_declarator] = "array_declarator",
  [sym_fixed_array_size] = "fixed_array_size",
  [sym_enum_dcl] = "enum_dcl",
  [sym_enumerator] = "enumerator",
  [sym_enum_modifier] = "enum_modifier",
  [sym_enum_anno] = "enum_anno",
  [sym_union_dcl] = "union_dcl",
  [sym_union_forward_dcl] = "union_forward_dcl",
  [sym_union_def] = "union_def",
  [sym_case] = "case",
  [sym_case_label] = "case_label",
  [sym_element_spec] = "element_spec",
  [sym_switch_type_spec] = "switch_type_spec",
  [sym_type_id_dcl] = "type_id_dcl",
  [sym_type_prefix_dcl] = "type_prefix_dcl",
  [sym_import_dcl] = "import_dcl",
  [sym_imported_scope] = "imported_scope",
  [sym_object_type] = "object_type",
  [sym_op_oneway_dcl] = "op_oneway_dcl",
  [sym_in_parameter_dcls] = "in_parameter_dcls",
  [sym_in_param_dcl] = "in_param_dcl",
  [sym_op_with_context] = "op_with_context",
  [sym_context_expr] = "context_expr",
  [sym_value_box_def] = "value_box_def",
  [sym_value_abs_def] = "value_abs_def",
  [sym_component_dcl] = "component_dcl",
  [sym_component_forward_dcl] = "component_forward_dcl",
  [sym_component_def] = "component_def",
  [sym_component_header] = "component_header",
  [sym_component_inheritance_spec] = "component_inheritance_spec",
  [sym_component_body] = "component_body",
  [sym_component_export] = "component_export",
  [sym_provides_dcl] = "provides_dcl",
  [sym_interface_type] = "interface_type",
  [sym_uses_dcl] = "uses_dcl",
  [sym_home_dcl] = "home_dcl",
  [sym_home_header] = "home_header",
  [sym_home_inheritance_spec] = "home_inheritance_spec",
  [sym_home_body] = "home_body",
  [sym_home_export] = "home_export",
  [sym_factory_dcl] = "factory_dcl",
  [sym_factory_param_dcls] = "factory_param_dcls",
  [sym_factory_param_dcl] = "factory_param_dcl",
  [sym_supported_interface_spec] = "supported_interface_spec",
  [sym_emits_dcl] = "emits_dcl",
  [sym_publishes_dcl] = "publishes_dcl",
  [sym_consumes_dcl] = "consumes_dcl",
  [sym_primary_key_spec] = "primary_key_spec",
  [sym_finder_dcl] = "finder_dcl",
  [sym_event_dcl] = "event_dcl",
  [sym_event_forward_dcl] = "event_forward_dcl",
  [sym_event_abs_def] = "event_abs_def",
  [sym_event_def] = "event_def",
  [sym_event_header] = "event_header",
  [sym_porttype_dcl] = "porttype_dcl",
  [sym_porttype_forward_dcl] = "porttype_forward_dcl",
  [sym_porttype_def] = "porttype_def",
  [sym_port_body] = "port_body",
  [sym_port_ref] = "port_ref",
  [sym_port_export] = "port_export",
  [sym_port_dcl] = "port_dcl",
  [sym_connector_dcl] = "connector_dcl",
  [sym_connector_header] = "connector_header",
  [sym_connector_inherit_spec] = "connector_inherit_spec",
  [sym_connector_export] = "connector_export",
  [sym_definition] = "definition",
  [sym_type_dcl] = "type_dcl",
  [sym_constr_type_dcl] = "constr_type_dcl",
  [sym_native_dcl] = "native_dcl",
  [sym_module_dcl] = "module_dcl",
  [sym_struct_dcl] = "struct_dcl",
  [sym_struct_forward_dcl] = "struct_forward_dcl",
  [sym_struct_def] = "struct_def",
  [sym_member] = "member",
  [sym_default] = "default",
  [sym_predefine] = "predefine",
  [sym_const_dcl] = "const_dcl",
  [sym_const_type] = "const_type",
  [sym_comment] = "comment",
  [aux_sym_specification_repeat1] = "specification_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_char_literal_repeat1] = "char_literal_repeat1",
  [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
  [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
  [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
  [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
  [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
  [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
  [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
  [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
  [aux_sym_annotation_dcl_repeat1] = "annotation_dcl_repeat1",
  [aux_sym_annotation_appl_params_repeat1] = "annotation_appl_params_repeat1",
  [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
  [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
  [aux_sym_value_def_repeat1] = "value_def_repeat1",
  [aux_sym_value_inheritance_spec_repeat1] = "value_inheritance_spec_repeat1",
  [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
  [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
  [aux_sym_declarators_repeat1] = "declarators_repeat1",
  [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
  [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
  [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
  [aux_sym_union_def_repeat1] = "union_def_repeat1",
  [aux_sym_in_parameter_dcls_repeat1] = "in_parameter_dcls_repeat1",
  [aux_sym_context_expr_repeat1] = "context_expr_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_home_body_repeat1] = "home_body_repeat1",
  [aux_sym_factory_param_dcls_repeat1] = "factory_param_dcls_repeat1",
  [aux_sym_port_body_repeat1] = "port_body_repeat1",
  [aux_sym_connector_dcl_repeat1] = "connector_dcl_repeat1",
  [aux_sym_module_dcl_repeat1] = "module_dcl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_longlong] = anon_sym_longlong,
  [anon_sym_int64] = anon_sym_int64,
  [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
  [sym_boolean_type] = sym_boolean_type,
  [anon_sym_fixed] = anon_sym_fixed,
  [sym_octet_type] = sym_octet_type,
  [sym_signed_tiny_int] = sym_signed_tiny_int,
  [anon_sym_unsignedshort] = anon_sym_unsignedshort,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_unsignedlong] = anon_sym_unsignedlong,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_longdouble] = anon_sym_longdouble,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_wchar] = anon_sym_wchar,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_wstring] = anon_sym_wstring,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_number_literal] = sym_number_literal,
  [aux_sym_preproc_call_token1] = aux_sym_preproc_call_token1,
  [sym_preproc_directive] = sym_preproc_directive,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_raises] = anon_sym_raises,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_getraises] = anon_sym_getraises,
  [anon_sym_setraises] = anon_sym_setraises,
  [anon_sym_bitset] = anon_sym_bitset,
  [anon_sym_bitfield] = anon_sym_bitfield,
  [anon_sym_bitmask] = anon_sym_bitmask,
  [anon_sym_ATannotation] = anon_sym_ATannotation,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_autoid] = anon_sym_autoid,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_extensibility] = anon_sym_extensibility,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_appendable] = anon_sym_appendable,
  [anon_sym_mutable] = anon_sym_mutable,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_must_understand] = anon_sym_must_understand,
  [anon_sym_default_literal] = anon_sym_default_literal,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_bit_bound] = anon_sym_bit_bound,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_nested] = anon_sym_nested,
  [anon_sym_verbatim] = anon_sym_verbatim,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_oneway] = anon_sym_oneway,
  [anon_sym_ami] = anon_sym_ami,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_typename] = anon_sym_typename,
  [anon_sym_valuetype] = anon_sym_valuetype,
  [anon_sym_eventtype] = anon_sym_eventtype,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_truncatable] = anon_sym_truncatable,
  [anon_sym_supports] = anon_sym_supports,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_factory] = anon_sym_factory,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
  [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_typeid] = anon_sym_typeid,
  [anon_sym_typeprefix] = anon_sym_typeprefix,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_context] = anon_sym_context,
  [sym_value_base_type] = sym_value_base_type,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_provides] = anon_sym_provides,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_home] = anon_sym_home,
  [anon_sym_manages] = anon_sym_manages,
  [anon_sym_emits] = anon_sym_emits,
  [anon_sym_publishes] = anon_sym_publishes,
  [anon_sym_consumes] = anon_sym_consumes,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_finder] = anon_sym_finder,
  [anon_sym_porttype] = anon_sym_porttype,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_mirrorport] = anon_sym_mirrorport,
  [anon_sym_connector] = anon_sym_connector,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [aux_sym_predefine_token1] = aux_sym_predefine_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_specification] = sym_specification,
  [sym_signed_short_int] = sym_signed_short_int,
  [sym_signed_long_int] = sym_signed_long_int,
  [sym_signed_longlong_int] = sym_signed_longlong_int,
  [sym_unsigned_int] = sym_unsigned_int,
  [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
  [sym_integer_type] = sym_integer_type,
  [sym_signed_int] = sym_signed_int,
  [sym_unsigned_short_int] = sym_unsigned_short_int,
  [sym_unsigned_long_int] = sym_unsigned_long_int,
  [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
  [sym_floating_pt_type] = sym_floating_pt_type,
  [sym_char_type] = sym_char_type,
  [sym_scoped_name] = sym_scoped_name,
  [sym_string_type] = sym_string_type,
  [sym_type_spec] = sym_type_spec,
  [sym_simple_type_spec] = sym_simple_type_spec,
  [sym_base_type_spec] = sym_base_type_spec,
  [sym_any_type] = sym_any_type,
  [sym_fixed_pt_type] = sym_fixed_pt_type,
  [sym_template_type_spec] = sym_template_type_spec,
  [sym_sequence_type] = sym_sequence_type,
  [sym_map_type] = sym_map_type,
  [sym_positive_int_const] = sym_positive_int_const,
  [sym_const_expr] = sym_const_expr,
  [sym_or_expr] = sym_or_expr,
  [sym_xor_expr] = sym_xor_expr,
  [sym_and_expr] = sym_and_expr,
  [sym_shift_expr] = sym_shift_expr,
  [sym_add_expr] = sym_add_expr,
  [sym_mult_expr] = sym_mult_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_primary_expr] = sym_primary_expr,
  [sym_unary_operator] = sym_unary_operator,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_preproc_call] = sym_preproc_call,
  [sym_except_dcl] = sym_except_dcl,
  [sym_interface_dcl] = sym_interface_dcl,
  [sym_interface_kind] = sym_interface_kind,
  [sym_interface_forward_dcl] = sym_interface_forward_dcl,
  [sym_interface_def] = sym_interface_def,
  [sym_interface_header] = sym_interface_header,
  [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
  [sym_interface_name] = sym_interface_name,
  [sym_interface_body] = sym_interface_body,
  [sym_export] = sym_export,
  [sym_op_dcl] = sym_op_dcl,
  [sym_op_type_spec] = sym_op_type_spec,
  [sym_parameter_dcls] = sym_parameter_dcls,
  [sym_param_dcl] = sym_param_dcl,
  [sym_param_attribute] = sym_param_attribute,
  [sym_raises_expr] = sym_raises_expr,
  [sym_attr_dcl] = sym_attr_dcl,
  [sym_readonly_attr_spec] = sym_readonly_attr_spec,
  [sym_readonly_attr_declarator] = sym_readonly_attr_declarator,
  [sym_attr_spec] = sym_attr_spec,
  [sym_attr_declarator] = sym_attr_declarator,
  [sym_attr_raises_expr] = sym_attr_raises_expr,
  [sym_get_excep_expr] = sym_get_excep_expr,
  [sym_set_excep_expr] = sym_set_excep_expr,
  [sym_exception_list] = sym_exception_list,
  [sym_bitset_dcl] = sym_bitset_dcl,
  [sym_bitfield] = sym_bitfield,
  [sym_bitfield_spec] = sym_bitfield_spec,
  [sym_destination_type] = sym_destination_type,
  [sym_bitmask_dcl] = sym_bitmask_dcl,
  [sym_bit_value] = sym_bit_value,
  [sym_annotation_dcl] = sym_annotation_dcl,
  [sym_annotation_body] = sym_annotation_body,
  [sym_annotation_member] = sym_annotation_member,
  [sym_annotation_member_type] = sym_annotation_member_type,
  [sym_any_const_type] = sym_any_const_type,
  [sym_annotation_appl] = sym_annotation_appl,
  [sym_annotation_appl_params] = sym_annotation_appl_params,
  [sym_annotation_appl_param] = sym_annotation_appl_param,
  [sym_annotation_built_name] = sym_annotation_built_name,
  [sym_template_module_dcl] = sym_template_module_dcl,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_formal_parameter_type] = sym_formal_parameter_type,
  [sym_tpl_definition] = sym_tpl_definition,
  [sym_template_module_inst] = sym_template_module_inst,
  [sym_actual_parameters] = sym_actual_parameters,
  [sym_actual_parameter] = sym_actual_parameter,
  [sym_template_module_ref] = sym_template_module_ref,
  [sym_formal_parameter_names] = sym_formal_parameter_names,
  [sym_value_dcl] = sym_value_dcl,
  [sym_value_def] = sym_value_def,
  [sym_value_kind] = sym_value_kind,
  [sym_value_header] = sym_value_header,
  [sym_value_inheritance_spec] = sym_value_inheritance_spec,
  [sym_value_inheritance] = sym_value_inheritance,
  [sym_value_supports] = sym_value_supports,
  [sym_value_name] = sym_value_name,
  [sym_value_element] = sym_value_element,
  [sym_state_member] = sym_state_member,
  [sym_init_dcl] = sym_init_dcl,
  [sym_init_param_dcls] = sym_init_param_dcls,
  [sym_init_param_dcl] = sym_init_param_dcl,
  [sym_value_forward_dcl] = sym_value_forward_dcl,
  [sym_typedef_dcl] = sym_typedef_dcl,
  [sym_type_declarator] = sym_type_declarator,
  [sym_any_declarators] = sym_any_declarators,
  [sym_any_declarator] = sym_any_declarator,
  [sym_simple_declarator] = sym_simple_declarator,
  [sym_declarator] = sym_declarator,
  [sym_declarators] = sym_declarators,
  [sym_array_declarator] = sym_array_declarator,
  [sym_fixed_array_size] = sym_fixed_array_size,
  [sym_enum_dcl] = sym_enum_dcl,
  [sym_enumerator] = sym_enumerator,
  [sym_enum_modifier] = sym_enum_modifier,
  [sym_enum_anno] = sym_enum_anno,
  [sym_union_dcl] = sym_union_dcl,
  [sym_union_forward_dcl] = sym_union_forward_dcl,
  [sym_union_def] = sym_union_def,
  [sym_case] = sym_case,
  [sym_case_label] = sym_case_label,
  [sym_element_spec] = sym_element_spec,
  [sym_switch_type_spec] = sym_switch_type_spec,
  [sym_type_id_dcl] = sym_type_id_dcl,
  [sym_type_prefix_dcl] = sym_type_prefix_dcl,
  [sym_import_dcl] = sym_import_dcl,
  [sym_imported_scope] = sym_imported_scope,
  [sym_object_type] = sym_object_type,
  [sym_op_oneway_dcl] = sym_op_oneway_dcl,
  [sym_in_parameter_dcls] = sym_in_parameter_dcls,
  [sym_in_param_dcl] = sym_in_param_dcl,
  [sym_op_with_context] = sym_op_with_context,
  [sym_context_expr] = sym_context_expr,
  [sym_value_box_def] = sym_value_box_def,
  [sym_value_abs_def] = sym_value_abs_def,
  [sym_component_dcl] = sym_component_dcl,
  [sym_component_forward_dcl] = sym_component_forward_dcl,
  [sym_component_def] = sym_component_def,
  [sym_component_header] = sym_component_header,
  [sym_component_inheritance_spec] = sym_component_inheritance_spec,
  [sym_component_body] = sym_component_body,
  [sym_component_export] = sym_component_export,
  [sym_provides_dcl] = sym_provides_dcl,
  [sym_interface_type] = sym_interface_type,
  [sym_uses_dcl] = sym_uses_dcl,
  [sym_home_dcl] = sym_home_dcl,
  [sym_home_header] = sym_home_header,
  [sym_home_inheritance_spec] = sym_home_inheritance_spec,
  [sym_home_body] = sym_home_body,
  [sym_home_export] = sym_home_export,
  [sym_factory_dcl] = sym_factory_dcl,
  [sym_factory_param_dcls] = sym_factory_param_dcls,
  [sym_factory_param_dcl] = sym_factory_param_dcl,
  [sym_supported_interface_spec] = sym_supported_interface_spec,
  [sym_emits_dcl] = sym_emits_dcl,
  [sym_publishes_dcl] = sym_publishes_dcl,
  [sym_consumes_dcl] = sym_consumes_dcl,
  [sym_primary_key_spec] = sym_primary_key_spec,
  [sym_finder_dcl] = sym_finder_dcl,
  [sym_event_dcl] = sym_event_dcl,
  [sym_event_forward_dcl] = sym_event_forward_dcl,
  [sym_event_abs_def] = sym_event_abs_def,
  [sym_event_def] = sym_event_def,
  [sym_event_header] = sym_event_header,
  [sym_porttype_dcl] = sym_porttype_dcl,
  [sym_porttype_forward_dcl] = sym_porttype_forward_dcl,
  [sym_porttype_def] = sym_porttype_def,
  [sym_port_body] = sym_port_body,
  [sym_port_ref] = sym_port_ref,
  [sym_port_export] = sym_port_export,
  [sym_port_dcl] = sym_port_dcl,
  [sym_connector_dcl] = sym_connector_dcl,
  [sym_connector_header] = sym_connector_header,
  [sym_connector_inherit_spec] = sym_connector_inherit_spec,
  [sym_connector_export] = sym_connector_export,
  [sym_definition] = sym_definition,
  [sym_type_dcl] = sym_type_dcl,
  [sym_constr_type_dcl] = sym_constr_type_dcl,
  [sym_native_dcl] = sym_native_dcl,
  [sym_module_dcl] = sym_module_dcl,
  [sym_struct_dcl] = sym_struct_dcl,
  [sym_struct_forward_dcl] = sym_struct_forward_dcl,
  [sym_struct_def] = sym_struct_def,
  [sym_member] = sym_member,
  [sym_default] = sym_default,
  [sym_predefine] = sym_predefine,
  [sym_const_dcl] = sym_const_dcl,
  [sym_const_type] = sym_const_type,
  [sym_comment] = sym_comment,
  [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_char_literal_repeat1] = aux_sym_char_literal_repeat1,
  [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
  [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
  [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
  [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
  [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
  [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
  [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
  [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
  [aux_sym_annotation_dcl_repeat1] = aux_sym_annotation_dcl_repeat1,
  [aux_sym_annotation_appl_params_repeat1] = aux_sym_annotation_appl_params_repeat1,
  [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
  [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
  [aux_sym_value_def_repeat1] = aux_sym_value_def_repeat1,
  [aux_sym_value_inheritance_spec_repeat1] = aux_sym_value_inheritance_spec_repeat1,
  [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
  [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
  [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
  [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
  [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
  [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
  [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
  [aux_sym_in_parameter_dcls_repeat1] = aux_sym_in_parameter_dcls_repeat1,
  [aux_sym_context_expr_repeat1] = aux_sym_context_expr_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_home_body_repeat1] = aux_sym_home_body_repeat1,
  [aux_sym_factory_param_dcls_repeat1] = aux_sym_factory_param_dcls_repeat1,
  [aux_sym_port_body_repeat1] = aux_sym_port_body_repeat1,
  [aux_sym_connector_dcl_repeat1] = aux_sym_connector_dcl_repeat1,
  [aux_sym_module_dcl_repeat1] = aux_sym_module_dcl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [sym_unsigned_tiny_int] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [sym_octet_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_tiny_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsignedshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsignedlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsignedlonglong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wstring] = {
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
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_preproc_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_preproc_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exception] = {
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
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getraises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setraises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitfield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitmask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATannotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensibility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appendable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must_understand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
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
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ami] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valuetype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_supports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_factory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
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
  [anon_sym_ATdefault_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATignore_literal_names] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [sym_value_base_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_manages] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_publishes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consumes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_porttype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mirrorport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_predefine_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_short_int] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_long_int] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_longlong_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_int] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_pt_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_short_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_long_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_longlong_int] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_pt_type] = {
    .visible = true,
    .named = true,
  },
  [sym_char_type] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_base_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_any_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_pt_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_int_const] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_xor_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_add_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_call] = {
    .visible = true,
    .named = true,
  },
  [sym_except_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_def] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_header] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_param_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_raises_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_readonly_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_readonly_attr_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_raises_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_get_excep_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_set_excep_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bitset_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_destination_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitmask_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_value] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_body] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_member] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_member_type] = {
    .visible = true,
    .named = true,
  },
  [sym_any_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl_params] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl_param] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_built_name] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_actual_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_actual_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_names] = {
    .visible = true,
    .named = true,
  },
  [sym_value_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_value_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_value_header] = {
    .visible = true,
    .named = true,
  },
  [sym_value_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_value_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_value_supports] = {
    .visible = true,
    .named = true,
  },
  [sym_value_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value_element] = {
    .visible = true,
    .named = true,
  },
  [sym_state_member] = {
    .visible = true,
    .named = true,
  },
  [sym_init_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_init_param_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_init_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_value_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_any_declarators] = {
    .visible = true,
    .named = true,
  },
  [sym_any_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_declarators] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_array_size] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerator] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_anno] = {
    .visible = true,
    .named = true,
  },
  [sym_union_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_def] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_label] = {
    .visible = true,
    .named = true,
  },
  [sym_element_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_type_id_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_prefix_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_import_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_imported_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_op_oneway_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_in_parameter_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_in_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_with_context] = {
    .visible = true,
    .named = true,
  },
  [sym_context_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_value_box_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value_abs_def] = {
    .visible = true,
    .named = true,
  },
  [sym_component_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_def] = {
    .visible = true,
    .named = true,
  },
  [sym_component_header] = {
    .visible = true,
    .named = true,
  },
  [sym_component_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_component_export] = {
    .visible = true,
    .named = true,
  },
  [sym_provides_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_type] = {
    .visible = true,
    .named = true,
  },
  [sym_uses_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_home_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_home_header] = {
    .visible = true,
    .named = true,
  },
  [sym_home_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_home_body] = {
    .visible = true,
    .named = true,
  },
  [sym_home_export] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_param_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_supported_interface_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_emits_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_publishes_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_consumes_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_finder_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_abs_def] = {
    .visible = true,
    .named = true,
  },
  [sym_event_def] = {
    .visible = true,
    .named = true,
  },
  [sym_event_header] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_def] = {
    .visible = true,
    .named = true,
  },
  [sym_port_body] = {
    .visible = true,
    .named = true,
  },
  [sym_port_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_port_export] = {
    .visible = true,
    .named = true,
  },
  [sym_port_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_header] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_inherit_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_export] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_constr_type_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_native_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_module_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_def] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_predefine] = {
    .visible = true,
    .named = true,
  },
  [sym_const_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_except_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_inheritance_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raises_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_readonly_attr_declarator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitset_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitfield_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitmask_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_appl_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_module_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actual_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameter_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_inheritance_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_param_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_any_declarators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_declarator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumerator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_parameter_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_home_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_factory_param_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_port_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connector_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_directive = 2,
  field_identifier = 3,
  field_parent = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_directive] = "directive",
  [field_identifier] = "identifier",
  [field_parent] = "parent",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive, 0},
  [1] =
    {field_argument, 1},
    {field_directive, 0},
  [3] =
    {field_identifier, 1},
    {field_type, 0},
  [5] =
    {field_parent, 3},
  [6] =
    {field_identifier, 2},
    {field_type, 1},
  [8] =
    {field_parent, 4},
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
  [64] = 59,
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
  [76] = 59,
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
  [100] = 94,
  [101] = 101,
  [102] = 97,
  [103] = 103,
  [104] = 88,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 105,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 106,
  [116] = 116,
  [117] = 117,
  [118] = 105,
  [119] = 117,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 124,
  [130] = 130,
  [131] = 131,
  [132] = 124,
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
  [185] = 81,
  [186] = 186,
  [187] = 85,
  [188] = 188,
  [189] = 189,
  [190] = 95,
  [191] = 191,
  [192] = 84,
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
  [207] = 98,
  [208] = 88,
  [209] = 97,
  [210] = 210,
  [211] = 211,
  [212] = 94,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 99,
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
  [268] = 81,
  [269] = 85,
  [270] = 88,
  [271] = 97,
  [272] = 272,
  [273] = 94,
  [274] = 81,
  [275] = 275,
  [276] = 85,
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
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
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
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
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
  [399] = 399,
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
  [419] = 95,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 84,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 95,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 84,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 330,
  [444] = 330,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 306,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 99,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 98,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 99,
  [466] = 466,
  [467] = 98,
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
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
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
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
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
  [700] = 700,
  [701] = 701,
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
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
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
  [783] = 769,
  [784] = 767,
  [785] = 758,
  [786] = 720,
  [787] = 662,
  [788] = 627,
  [789] = 789,
  [790] = 575,
  [791] = 791,
  [792] = 720,
  [793] = 662,
  [794] = 627,
  [795] = 795,
  [796] = 575,
  [797] = 797,
  [798] = 720,
  [799] = 575,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
};

static inline bool sym_number_literal_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : c <= 'F')
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'u'
      ? (c < 'l'
        ? (c >= 'd' && c <= 'f')
        : c <= 'l')
      : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : (c <= 'D' || c == 'F'))
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'l'
      ? (c < 'f'
        ? c == 'd'
        : c <= 'f')
      : (c <= 'l' || (c < 'w'
        ? c == 'u'
        : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(681);
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(741);
      if (lookahead == '%') ADVANCE(750);
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '*') ADVANCE(748);
      if (lookahead == '+') ADVANCE(745);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead == '0') ADVANCE(780);
      if (lookahead == ':') ADVANCE(826);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '<') ADVANCE(729);
      if (lookahead == '=') ADVANCE(856);
      if (lookahead == '>') ADVANCE(731);
      if (lookahead == '@') ADVANCE(855);
      if (lookahead == 'F') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'V') ADVANCE(125);
      if (lookahead == '[') ADVANCE(933);
      if (lookahead == '\\') SKIP(677)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == '^') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'g') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '}') ADVANCE(819);
      if (lookahead == '~') ADVANCE(753);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(95)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == '\\') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(754);
      if (lookahead == 'U') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'x') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      if (lookahead != 0) ADVANCE(754);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(78)
      if (lookahead == '\r') SKIP(47)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == '\\') SKIP(50)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead == '/') ADVANCE(767);
      if (lookahead == '\\') ADVANCE(766);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0) ADVANCE(765);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1391);
      if (lookahead == '\r') ADVANCE(1389);
      if (lookahead == '\\') ADVANCE(1393);
      if (lookahead != 0) ADVANCE(1392);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(54)
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '/') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '/') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(99)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(99)
      if (lookahead == '\r') SKIP(62)
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(64)
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '$') ADVANCE(741);
      if (lookahead == '%') ADVANCE(750);
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '*') ADVANCE(748);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead == ':') ADVANCE(826);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '<') ADVANCE(729);
      if (lookahead == '>') ADVANCE(731);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == '^') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(522);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '|') ADVANCE(739);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == '+') ADVANCE(745);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(782);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(987);
      if (lookahead == 'L') ADVANCE(759);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'T') ADVANCE(992);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '~') ADVANCE(753);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == '+') ADVANCE(745);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(782);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(987);
      if (lookahead == 'L') ADVANCE(759);
      if (lookahead == 'T') ADVANCE(992);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '~') ADVANCE(753);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(759);
      if (lookahead == '\\') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '$') ADVANCE(741);
      if (lookahead == '%') ADVANCE(750);
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '*') ADVANCE(748);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '>') ADVANCE(731);
      if (lookahead == '@') ADVANCE(855);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == '^') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '$') ADVANCE(741);
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == '^') ADVANCE(740);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 74:
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(751);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1205);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 78:
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') SKIP(48)
      if (lookahead == 'i') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '/') ADVANCE(1384);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '/') ADVANCE(1385);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead == 'f') ADVANCE(1000);
      if (lookahead == 'i') ADVANCE(1194);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == 'p') ADVANCE(1269);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 't') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'v') ADVANCE(1028);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(776);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(826);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1076);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '{') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'i') ADVANCE(1194);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 't') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'v') ADVANCE(1028);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(65)
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1194);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 't') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'v') ADVANCE(1028);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == 'c') ADVANCE(1021);
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1043);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1136);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(1379);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'V') ADVANCE(997);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1136);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'e') ADVANCE(1210);
      if (lookahead == 'f') ADVANCE(1178);
      if (lookahead == 'i') ADVANCE(1226);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead == 't') ADVANCE(1380);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead == 'v') ADVANCE(1029);
      if (lookahead == 'w') ADVANCE(1044);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'm') ADVANCE(1362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == '\\') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1043);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(1137);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1249);
      if (lookahead == 's') ADVANCE(1138);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead == 'w') ADVANCE(1044);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'a') ADVANCE(1199);
      if (lookahead == 'b') ADVANCE(1159);
      if (lookahead == 'd') ADVANCE(1123);
      if (lookahead == 'e') ADVANCE(1370);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead == 'k') ADVANCE(1106);
      if (lookahead == 'm') ADVANCE(1005);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'o') ADVANCE(1208);
      if (lookahead == 'p') ADVANCE(1244);
      if (lookahead == 'r') ADVANCE(1017);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1232);
      if (lookahead == 'v') ADVANCE(1031);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == 't') ADVANCE(1286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '\\') SKIP(55)
      if (lookahead == 's') ADVANCE(1367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(106);
      if (lookahead == '8') ADVANCE(703);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(106);
      if (lookahead == '8') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '3') ADVANCE(105);
      if (lookahead == '6') ADVANCE(107);
      if (lookahead == '8') ADVANCE(695);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(690);
      END_STATE();
    case 105:
      if (lookahead == '2') ADVANCE(709);
      END_STATE();
    case 106:
      if (lookahead == '4') ADVANCE(693);
      END_STATE();
    case 107:
      if (lookahead == '4') ADVANCE(712);
      END_STATE();
    case 108:
      if (lookahead == '6') ADVANCE(684);
      END_STATE();
    case 109:
      if (lookahead == '6') ADVANCE(706);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(723);
      END_STATE();
    case 111:
      if (lookahead == '<') ADVANCE(743);
      END_STATE();
    case 112:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == 'B') ADVANCE(165);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(769);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(771);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(366);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(560);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(380);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(490);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(382);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(638);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(391);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(925);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(606);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(857);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(941);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(846);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(877);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'h') ADVANCE(468);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(504);
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'h') ADVANCE(468);
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(931);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(327);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(724);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(726);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(711);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(688);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(453);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(937);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(486);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(901);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 366:
      if (lookahead == 'j') ADVANCE(287);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(847);
      END_STATE();
    case 368:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(861);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(879);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(623);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 401:
      if (lookahead == 'm') ADVANCE(914);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(919);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(895);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == 'v') ADVANCE(288);
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(264);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == 'v') ADVANCE(288);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead == 'x') ADVANCE(885);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 493:
      if (lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 495:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 496:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 504:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 505:
      if (lookahead == 'q') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead == 'y') ADVANCE(494);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(918);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(837);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(957);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(960);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(952);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(923);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(842);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(959);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(843);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(936);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(951);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 624:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 631:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 634:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 637:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 640:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 641:
      if (lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 642:
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 643:
      if (lookahead == 'v') ADVANCE(239);
      END_STATE();
    case 644:
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 646:
      if (lookahead == 'x') ADVANCE(575);
      END_STATE();
    case 647:
      if (lookahead == 'y') ADVANCE(732);
      END_STATE();
    case 648:
      if (lookahead == 'y') ADVANCE(875);
      END_STATE();
    case 649:
      if (lookahead == 'y') ADVANCE(899);
      END_STATE();
    case 650:
      if (lookahead == 'y') ADVANCE(929);
      END_STATE();
    case 651:
      if (lookahead == 'y') ADVANCE(838);
      END_STATE();
    case 652:
      if (lookahead == 'y') ADVANCE(961);
      END_STATE();
    case 653:
      if (lookahead == 'y') ADVANCE(867);
      END_STATE();
    case 654:
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 655:
      if (lookahead == 'y') ADVANCE(495);
      END_STATE();
    case 656:
      if (lookahead == 'y') ADVANCE(496);
      END_STATE();
    case 657:
      if (lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 658:
      if (lookahead == 'y') ADVANCE(498);
      END_STATE();
    case 659:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 660:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 661:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 662:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 663:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      END_STATE();
    case 664:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 665:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 666:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 667:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 668:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(667);
      END_STATE();
    case 669:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 670:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(669);
      END_STATE();
    case 671:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 673:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 674:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1392);
      if (lookahead == '\r') ADVANCE(1394);
      if (lookahead == '\\') ADVANCE(1393);
      END_STATE();
    case 675:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(813);
      END_STATE();
    case 676:
      if (eof) ADVANCE(681);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 677:
      if (eof) ADVANCE(681);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(676)
      END_STATE();
    case 678:
      if (eof) ADVANCE(681);
      if (lookahead == '\n') SKIP(680)
      END_STATE();
    case 679:
      if (eof) ADVANCE(681);
      if (lookahead == '\n') SKIP(680)
      if (lookahead == '\r') SKIP(678)
      END_STATE();
    case 680:
      if (eof) ADVANCE(681);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(741);
      if (lookahead == '%') ADVANCE(750);
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '*') ADVANCE(748);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == ',') ADVANCE(734);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead == ':') ADVANCE(826);
      if (lookahead == ';') ADVANCE(827);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(856);
      if (lookahead == '>') ADVANCE(731);
      if (lookahead == '@') ADVANCE(855);
      if (lookahead == '[') ADVANCE(933);
      if (lookahead == '\\') SKIP(679)
      if (lookahead == ']') ADVANCE(934);
      if (lookahead == '^') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'g') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '}') ADVANCE(819);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(680)
      END_STATE();
    case 681:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(395);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(398);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(743);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(742);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(780);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(780);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '/') ADVANCE(1384);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(46);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(763);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(754);
      if (lookahead == 'U') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'x') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      if (lookahead != 0) ADVANCE(754);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '/') ADVANCE(1384);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(46);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(801);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(665);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(774);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(665);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(775);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(775);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(790);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(791);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(793);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(791);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(793);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(794);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(795);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(977);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(797);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(800);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1382);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(797);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(801);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(791);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(793);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(791);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(793);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == '.') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(793);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(781);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(783);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(665);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(774);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(774);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(665);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(775);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(775);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(787);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(814);
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(814);
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '/') ADVANCE(1384);
      if (lookahead == '\\') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(813);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(813);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '\\') ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(723);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(1353);
      if (lookahead == 't') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_autoid);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_autoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_extensibility);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_extensibility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_appendable);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_appendable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_must_understand);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_must_understand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_default_literal);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_default_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_nested);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_service);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_ami);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_ami);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1398);
      if (lookahead == '/') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(777);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(985);
      if (lookahead == '3') ADVANCE(981);
      if (lookahead == '6') ADVANCE(983);
      if (lookahead == '8') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(985);
      if (lookahead == '3') ADVANCE(981);
      if (lookahead == '6') ADVANCE(983);
      if (lookahead == '8') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(986);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '6') ADVANCE(984);
      if (lookahead == '8') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'l') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'i') ADVANCE(1219);
      if (lookahead == 'l') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == 'u') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1296);
      if (lookahead == 'h') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead == 'o') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1192);
      if (lookahead == 'e') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1299);
      if (lookahead == 'n') ADVANCE(1371);
      if (lookahead == 't') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1139);
      if (lookahead == 's') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1326);
      if (lookahead == 'n') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1326);
      if (lookahead == 'u') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1083);
      if (lookahead == 'i') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'h') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'h') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'h') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(1280);
      if (lookahead == 'u') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'h') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'o') ADVANCE(1234);
      if (lookahead == 'u') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'o') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'l') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1302);
      if (lookahead == 'o') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'n') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'n') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'u') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1243);
      if (lookahead == 's') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead == 'n') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(999);
      if (lookahead == 's') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1142);
      if (lookahead == 'p') ADVANCE(1263);
      if (lookahead == 'u') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1348);
      if (lookahead == 'v') ADVANCE(1121);
      if (lookahead == 'x') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1348);
      if (lookahead == 'x') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1070);
      if (lookahead == 'x') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1294);
      if (lookahead == 'r') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1141);
      if (lookahead == 'u') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1322);
      if (lookahead == 't') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '@') ADVANCE(854);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead != 0) ADVANCE(1392);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1397);
      if (lookahead == '/') ADVANCE(1386);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1390);
      if (lookahead == '@') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1392);
      if (lookahead == '\r') ADVANCE(1394);
      if (lookahead == '\\') ADVANCE(1393);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1392);
      if (lookahead == '\\') ADVANCE(674);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(81);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1392);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(975);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 680},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 86},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 680},
  [26] = {.lex_state = 680},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 85},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 90},
  [49] = {.lex_state = 90},
  [50] = {.lex_state = 90},
  [51] = {.lex_state = 91},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 83},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 83},
  [56] = {.lex_state = 83},
  [57] = {.lex_state = 91},
  [58] = {.lex_state = 83},
  [59] = {.lex_state = 83},
  [60] = {.lex_state = 83},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 86},
  [63] = {.lex_state = 86},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 87},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 94},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 90},
  [91] = {.lex_state = 90},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 90},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 90},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 95},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 69},
  [106] = {.lex_state = 680},
  [107] = {.lex_state = 69},
  [108] = {.lex_state = 680},
  [109] = {.lex_state = 680},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 69},
  [112] = {.lex_state = 680},
  [113] = {.lex_state = 72},
  [114] = {.lex_state = 680},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 69},
  [119] = {.lex_state = 680},
  [120] = {.lex_state = 72},
  [121] = {.lex_state = 69},
  [122] = {.lex_state = 69},
  [123] = {.lex_state = 69},
  [124] = {.lex_state = 96},
  [125] = {.lex_state = 69},
  [126] = {.lex_state = 96},
  [127] = {.lex_state = 69},
  [128] = {.lex_state = 69},
  [129] = {.lex_state = 96},
  [130] = {.lex_state = 69},
  [131] = {.lex_state = 72},
  [132] = {.lex_state = 96},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 69},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 680},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 69},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 69},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 69},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 69},
  [149] = {.lex_state = 680},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 72},
  [158] = {.lex_state = 72},
  [159] = {.lex_state = 72},
  [160] = {.lex_state = 72},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 72},
  [164] = {.lex_state = 72},
  [165] = {.lex_state = 72},
  [166] = {.lex_state = 72},
  [167] = {.lex_state = 72},
  [168] = {.lex_state = 72},
  [169] = {.lex_state = 72},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 69},
  [172] = {.lex_state = 72},
  [173] = {.lex_state = 72},
  [174] = {.lex_state = 680},
  [175] = {.lex_state = 680},
  [176] = {.lex_state = 72},
  [177] = {.lex_state = 72},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 67},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 73},
  [183] = {.lex_state = 73},
  [184] = {.lex_state = 69},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 67},
  [188] = {.lex_state = 73},
  [189] = {.lex_state = 73},
  [190] = {.lex_state = 67},
  [191] = {.lex_state = 72},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 72},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 680},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 73},
  [203] = {.lex_state = 70},
  [204] = {.lex_state = 72},
  [205] = {.lex_state = 680},
  [206] = {.lex_state = 73},
  [207] = {.lex_state = 67},
  [208] = {.lex_state = 75},
  [209] = {.lex_state = 75},
  [210] = {.lex_state = 680},
  [211] = {.lex_state = 680},
  [212] = {.lex_state = 75},
  [213] = {.lex_state = 73},
  [214] = {.lex_state = 75},
  [215] = {.lex_state = 680},
  [216] = {.lex_state = 680},
  [217] = {.lex_state = 72},
  [218] = {.lex_state = 680},
  [219] = {.lex_state = 72},
  [220] = {.lex_state = 92},
  [221] = {.lex_state = 67},
  [222] = {.lex_state = 75},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 73},
  [225] = {.lex_state = 73},
  [226] = {.lex_state = 73},
  [227] = {.lex_state = 72},
  [228] = {.lex_state = 73},
  [229] = {.lex_state = 93},
  [230] = {.lex_state = 73},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 73},
  [234] = {.lex_state = 67},
  [235] = {.lex_state = 73},
  [236] = {.lex_state = 75},
  [237] = {.lex_state = 73},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 73},
  [240] = {.lex_state = 73},
  [241] = {.lex_state = 97},
  [242] = {.lex_state = 73},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 73},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 75},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 75},
  [249] = {.lex_state = 73},
  [250] = {.lex_state = 73},
  [251] = {.lex_state = 73},
  [252] = {.lex_state = 73},
  [253] = {.lex_state = 93},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 75},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 680},
  [258] = {.lex_state = 45},
  [259] = {.lex_state = 78},
  [260] = {.lex_state = 73},
  [261] = {.lex_state = 73},
  [262] = {.lex_state = 73},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 75},
  [266] = {.lex_state = 75},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 75},
  [269] = {.lex_state = 75},
  [270] = {.lex_state = 51},
  [271] = {.lex_state = 51},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 51},
  [274] = {.lex_state = 51},
  [275] = {.lex_state = 52},
  [276] = {.lex_state = 51},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 51},
  [279] = {.lex_state = 680},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 73},
  [283] = {.lex_state = 73},
  [284] = {.lex_state = 680},
  [285] = {.lex_state = 680},
  [286] = {.lex_state = 73},
  [287] = {.lex_state = 73},
  [288] = {.lex_state = 73},
  [289] = {.lex_state = 75},
  [290] = {.lex_state = 75},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 73},
  [293] = {.lex_state = 73},
  [294] = {.lex_state = 73},
  [295] = {.lex_state = 75},
  [296] = {.lex_state = 73},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 73},
  [300] = {.lex_state = 78},
  [301] = {.lex_state = 78},
  [302] = {.lex_state = 78},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 75},
  [305] = {.lex_state = 73},
  [306] = {.lex_state = 75},
  [307] = {.lex_state = 73},
  [308] = {.lex_state = 73},
  [309] = {.lex_state = 73},
  [310] = {.lex_state = 680},
  [311] = {.lex_state = 75},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 45},
  [317] = {.lex_state = 72},
  [318] = {.lex_state = 1391},
  [319] = {.lex_state = 73},
  [320] = {.lex_state = 45},
  [321] = {.lex_state = 52},
  [322] = {.lex_state = 45},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 75},
  [326] = {.lex_state = 73},
  [327] = {.lex_state = 52},
  [328] = {.lex_state = 45},
  [329] = {.lex_state = 75},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 45},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 83},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 75},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 75},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 75},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 73},
  [356] = {.lex_state = 73},
  [357] = {.lex_state = 73},
  [358] = {.lex_state = 75},
  [359] = {.lex_state = 72},
  [360] = {.lex_state = 680},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 75},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 83},
  [368] = {.lex_state = 83},
  [369] = {.lex_state = 83},
  [370] = {.lex_state = 75},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 83},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 680},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 75},
  [381] = {.lex_state = 73},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 75},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 98},
  [390] = {.lex_state = 75},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 75},
  [393] = {.lex_state = 83},
  [394] = {.lex_state = 680},
  [395] = {.lex_state = 75},
  [396] = {.lex_state = 680},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 75},
  [401] = {.lex_state = 680},
  [402] = {.lex_state = 75},
  [403] = {.lex_state = 75},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 52},
  [407] = {.lex_state = 75},
  [408] = {.lex_state = 75},
  [409] = {.lex_state = 73},
  [410] = {.lex_state = 75},
  [411] = {.lex_state = 83},
  [412] = {.lex_state = 680},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 83},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 83},
  [419] = {.lex_state = 51},
  [420] = {.lex_state = 75},
  [421] = {.lex_state = 52},
  [422] = {.lex_state = 52},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 51},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 75},
  [430] = {.lex_state = 75},
  [431] = {.lex_state = 75},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 75},
  [435] = {.lex_state = 83},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 75},
  [438] = {.lex_state = 83},
  [439] = {.lex_state = 72},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 680},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 73},
  [452] = {.lex_state = 73},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 56},
  [455] = {.lex_state = 75},
  [456] = {.lex_state = 73},
  [457] = {.lex_state = 73},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 680},
  [460] = {.lex_state = 83},
  [461] = {.lex_state = 75},
  [462] = {.lex_state = 73},
  [463] = {.lex_state = 73},
  [464] = {.lex_state = 73},
  [465] = {.lex_state = 51},
  [466] = {.lex_state = 73},
  [467] = {.lex_state = 51},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 83},
  [470] = {.lex_state = 680},
  [471] = {.lex_state = 73},
  [472] = {.lex_state = 73},
  [473] = {.lex_state = 73},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 73},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 83},
  [483] = {.lex_state = 72},
  [484] = {.lex_state = 73},
  [485] = {.lex_state = 73},
  [486] = {.lex_state = 73},
  [487] = {.lex_state = 73},
  [488] = {.lex_state = 83},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 75},
  [492] = {.lex_state = 75},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 75},
  [500] = {.lex_state = 75},
  [501] = {.lex_state = 75},
  [502] = {.lex_state = 78},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 73},
  [506] = {.lex_state = 75},
  [507] = {.lex_state = 73},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 83},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 73},
  [512] = {.lex_state = 78},
  [513] = {.lex_state = 73},
  [514] = {.lex_state = 73},
  [515] = {.lex_state = 78},
  [516] = {.lex_state = 83},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 73},
  [519] = {.lex_state = 73},
  [520] = {.lex_state = 73},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 73},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 73},
  [531] = {.lex_state = 83},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 73},
  [534] = {.lex_state = 73},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 73},
  [537] = {.lex_state = 73},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 73},
  [542] = {.lex_state = 73},
  [543] = {.lex_state = 83},
  [544] = {.lex_state = 73},
  [545] = {.lex_state = 72},
  [546] = {.lex_state = 83},
  [547] = {.lex_state = 73},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 73},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 73},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 73},
  [554] = {.lex_state = 73},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 73},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 73},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 83},
  [562] = {.lex_state = 75},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 73},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 72},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 83},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 73},
  [574] = {.lex_state = 83},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 73},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 83},
  [581] = {.lex_state = 73},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 73},
  [584] = {.lex_state = 83},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 83},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 73},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 73},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 73},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 83},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 73},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 680},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 73},
  [633] = {.lex_state = 680},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
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
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 73},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 73},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 73},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 73},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 73},
  [676] = {.lex_state = 80},
  [677] = {.lex_state = 83},
  [678] = {.lex_state = 83},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 73},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 72},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 83},
  [690] = {.lex_state = 83},
  [691] = {.lex_state = 73},
  [692] = {.lex_state = 83},
  [693] = {.lex_state = 73},
  [694] = {.lex_state = 73},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 73},
  [697] = {.lex_state = 73},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 83},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 73},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 73},
  [707] = {.lex_state = 73},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 73},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 73},
  [728] = {.lex_state = 73},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 73},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 57},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 83},
  [737] = {.lex_state = 73},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 73},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 73},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 73},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 73},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 73},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 73},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 974},
  [770] = {.lex_state = 73},
  [771] = {.lex_state = 73},
  [772] = {.lex_state = 73},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 73},
  [775] = {.lex_state = 73},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 73},
  [779] = {.lex_state = 73},
  [780] = {.lex_state = 73},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 73},
  [783] = {.lex_state = 974},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 73},
  [787] = {.lex_state = 73},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 73},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 73},
  [792] = {.lex_state = 73},
  [793] = {.lex_state = 73},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 73},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 73},
  [798] = {.lex_state = 73},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 73},
  [801] = {.lex_state = 680},
  [802] = {(TSStateId)(-1)},
  [803] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_longlong] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [sym_unsigned_tiny_int] = ACTIONS(1),
    [sym_boolean_type] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [sym_octet_type] = ACTIONS(1),
    [sym_signed_tiny_int] = ACTIONS(1),
    [anon_sym_unsignedshort] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_unsignedlong] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_unsignedlonglong] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_longdouble] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_wchar] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_preproc_directive] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_raises] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_getraises] = ACTIONS(1),
    [anon_sym_setraises] = ACTIONS(1),
    [anon_sym_bitset] = ACTIONS(1),
    [anon_sym_bitfield] = ACTIONS(1),
    [anon_sym_bitmask] = ACTIONS(1),
    [anon_sym_ATannotation] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_autoid] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_extensibility] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_appendable] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_must_understand] = ACTIONS(1),
    [anon_sym_default_literal] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_bit_bound] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_nested] = ACTIONS(1),
    [anon_sym_verbatim] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_oneway] = ACTIONS(1),
    [anon_sym_ami] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_typename] = ACTIONS(1),
    [anon_sym_eventtype] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_truncatable] = ACTIONS(1),
    [anon_sym_supports] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_factory] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_ATdefault_literal] = ACTIONS(1),
    [anon_sym_ATignore_literal_names] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_typeid] = ACTIONS(1),
    [anon_sym_typeprefix] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [sym_value_base_type] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_provides] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_home] = ACTIONS(1),
    [anon_sym_manages] = ACTIONS(1),
    [anon_sym_emits] = ACTIONS(1),
    [anon_sym_publishes] = ACTIONS(1),
    [anon_sym_consumes] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_finder] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_mirrorport] = ACTIONS(1),
    [anon_sym_connector] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_specification] = STATE(768),
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(767),
    [sym_interface_dcl] = STATE(767),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(767),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(767),
    [sym_template_module_inst] = STATE(767),
    [sym_value_dcl] = STATE(767),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(758),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(767),
    [sym_type_prefix_dcl] = STATE(767),
    [sym_import_dcl] = STATE(767),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(767),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(767),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(767),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(767),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(767),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(109),
    [sym_type_dcl] = STATE(767),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(767),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(119),
    [sym_const_dcl] = STATE(767),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_preproc_directive] = ACTIONS(9),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(788),
    [sym_export] = STATE(58),
    [sym_op_dcl] = STATE(443),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(788),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(788),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_element] = STATE(60),
    [sym_state_member] = STATE(58),
    [sym_init_dcl] = STATE(58),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(788),
    [sym_import_dcl] = STATE(788),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(443),
    [sym_op_with_context] = STATE(788),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(788),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(788),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(68),
    [anon_sym_int32] = ACTIONS(68),
    [anon_sym_longlong] = ACTIONS(71),
    [anon_sym_int64] = ACTIONS(74),
    [sym_unsigned_tiny_int] = ACTIONS(77),
    [sym_boolean_type] = ACTIONS(80),
    [anon_sym_fixed] = ACTIONS(83),
    [sym_octet_type] = ACTIONS(80),
    [sym_signed_tiny_int] = ACTIONS(86),
    [anon_sym_unsignedshort] = ACTIONS(89),
    [anon_sym_uint16] = ACTIONS(92),
    [anon_sym_unsignedlong] = ACTIONS(95),
    [anon_sym_uint32] = ACTIONS(95),
    [anon_sym_unsignedlonglong] = ACTIONS(98),
    [anon_sym_uint64] = ACTIONS(101),
    [anon_sym_float] = ACTIONS(104),
    [anon_sym_double] = ACTIONS(104),
    [anon_sym_longdouble] = ACTIONS(107),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_wchar] = ACTIONS(110),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_string] = ACTIONS(116),
    [anon_sym_wstring] = ACTIONS(116),
    [anon_sym_any] = ACTIONS(119),
    [anon_sym_sequence] = ACTIONS(122),
    [anon_sym_map] = ACTIONS(125),
    [anon_sym_exception] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_abstract] = ACTIONS(133),
    [anon_sym_void] = ACTIONS(136),
    [anon_sym_readonly] = ACTIONS(139),
    [anon_sym_attribute] = ACTIONS(142),
    [anon_sym_bitset] = ACTIONS(145),
    [anon_sym_bitmask] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_oneway] = ACTIONS(154),
    [anon_sym_valuetype] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(160),
    [anon_sym_union] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_custom] = ACTIONS(172),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_factory] = ACTIONS(178),
    [anon_sym_typedef] = ACTIONS(181),
    [anon_sym_ATignore_literal_names] = ACTIONS(184),
    [anon_sym_typeid] = ACTIONS(187),
    [anon_sym_import] = ACTIONS(190),
    [anon_sym_Object] = ACTIONS(193),
    [sym_value_base_type] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(196),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(788),
    [sym_export] = STATE(58),
    [sym_op_dcl] = STATE(443),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(788),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(788),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_element] = STATE(60),
    [sym_state_member] = STATE(58),
    [sym_init_dcl] = STATE(58),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(788),
    [sym_import_dcl] = STATE(788),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(443),
    [sym_op_with_context] = STATE(788),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(788),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(788),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(276),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_factory] = ACTIONS(278),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(788),
    [sym_export] = STATE(58),
    [sym_op_dcl] = STATE(443),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(788),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(788),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_element] = STATE(60),
    [sym_state_member] = STATE(58),
    [sym_init_dcl] = STATE(58),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(788),
    [sym_import_dcl] = STATE(788),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(443),
    [sym_op_with_context] = STATE(788),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(788),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(788),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(276),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_factory] = ACTIONS(278),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(788),
    [sym_export] = STATE(58),
    [sym_op_dcl] = STATE(443),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(788),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(788),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_element] = STATE(60),
    [sym_state_member] = STATE(58),
    [sym_init_dcl] = STATE(58),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(788),
    [sym_import_dcl] = STATE(788),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(443),
    [sym_op_with_context] = STATE(788),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(788),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(788),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_value_def_repeat1] = STATE(3),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(276),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_factory] = ACTIONS(278),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(794),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(444),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(794),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(794),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(794),
    [sym_import_dcl] = STATE(794),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(444),
    [sym_op_with_context] = STATE(794),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_home_body] = STATE(600),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(598),
    [sym_finder_dcl] = STATE(598),
    [sym_type_dcl] = STATE(794),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(794),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_home_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_factory] = ACTIONS(298),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_finder] = ACTIONS(300),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(788),
    [sym_export] = STATE(58),
    [sym_op_dcl] = STATE(443),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(788),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(788),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_element] = STATE(60),
    [sym_state_member] = STATE(58),
    [sym_init_dcl] = STATE(58),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(788),
    [sym_import_dcl] = STATE(788),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(443),
    [sym_op_with_context] = STATE(788),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(788),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(788),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_value_def_repeat1] = STATE(4),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(276),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_factory] = ACTIONS(278),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(794),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(444),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(794),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(794),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(794),
    [sym_import_dcl] = STATE(794),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(444),
    [sym_op_with_context] = STATE(794),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(598),
    [sym_finder_dcl] = STATE(598),
    [sym_type_dcl] = STATE(794),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(794),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_home_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_factory] = ACTIONS(298),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_finder] = ACTIONS(300),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(794),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(444),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(794),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(794),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(794),
    [sym_import_dcl] = STATE(794),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(444),
    [sym_op_with_context] = STATE(794),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_home_export] = STATE(61),
    [sym_factory_dcl] = STATE(598),
    [sym_finder_dcl] = STATE(598),
    [sym_type_dcl] = STATE(794),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(794),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_home_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(306),
    [anon_sym_int16] = ACTIONS(306),
    [anon_sym_long] = ACTIONS(309),
    [anon_sym_int32] = ACTIONS(309),
    [anon_sym_longlong] = ACTIONS(312),
    [anon_sym_int64] = ACTIONS(315),
    [sym_unsigned_tiny_int] = ACTIONS(318),
    [sym_boolean_type] = ACTIONS(321),
    [anon_sym_fixed] = ACTIONS(324),
    [sym_octet_type] = ACTIONS(321),
    [sym_signed_tiny_int] = ACTIONS(327),
    [anon_sym_unsignedshort] = ACTIONS(330),
    [anon_sym_uint16] = ACTIONS(333),
    [anon_sym_unsignedlong] = ACTIONS(336),
    [anon_sym_uint32] = ACTIONS(336),
    [anon_sym_unsignedlonglong] = ACTIONS(339),
    [anon_sym_uint64] = ACTIONS(342),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_longdouble] = ACTIONS(348),
    [anon_sym_char] = ACTIONS(351),
    [anon_sym_wchar] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(357),
    [anon_sym_wstring] = ACTIONS(357),
    [anon_sym_any] = ACTIONS(360),
    [anon_sym_sequence] = ACTIONS(363),
    [anon_sym_map] = ACTIONS(366),
    [anon_sym_exception] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_abstract] = ACTIONS(374),
    [anon_sym_void] = ACTIONS(377),
    [anon_sym_readonly] = ACTIONS(380),
    [anon_sym_attribute] = ACTIONS(383),
    [anon_sym_bitset] = ACTIONS(386),
    [anon_sym_bitmask] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_oneway] = ACTIONS(395),
    [anon_sym_valuetype] = ACTIONS(398),
    [anon_sym_struct] = ACTIONS(401),
    [anon_sym_union] = ACTIONS(404),
    [anon_sym_enum] = ACTIONS(407),
    [anon_sym_const] = ACTIONS(410),
    [anon_sym_custom] = ACTIONS(413),
    [anon_sym_factory] = ACTIONS(416),
    [anon_sym_typedef] = ACTIONS(419),
    [anon_sym_ATignore_literal_names] = ACTIONS(422),
    [anon_sym_typeid] = ACTIONS(425),
    [anon_sym_import] = ACTIONS(428),
    [anon_sym_Object] = ACTIONS(431),
    [sym_value_base_type] = ACTIONS(321),
    [anon_sym_finder] = ACTIONS(434),
    [anon_sym_native] = ACTIONS(437),
    [sym_identifier] = ACTIONS(440),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_interface_body] = STATE(729),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(14),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_interface_body] = STATE(626),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(14),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(449),
    [anon_sym_int16] = ACTIONS(449),
    [anon_sym_long] = ACTIONS(452),
    [anon_sym_int32] = ACTIONS(452),
    [anon_sym_longlong] = ACTIONS(455),
    [anon_sym_int64] = ACTIONS(458),
    [sym_unsigned_tiny_int] = ACTIONS(461),
    [sym_boolean_type] = ACTIONS(464),
    [anon_sym_fixed] = ACTIONS(467),
    [sym_octet_type] = ACTIONS(464),
    [sym_signed_tiny_int] = ACTIONS(470),
    [anon_sym_unsignedshort] = ACTIONS(473),
    [anon_sym_uint16] = ACTIONS(476),
    [anon_sym_unsignedlong] = ACTIONS(479),
    [anon_sym_uint32] = ACTIONS(479),
    [anon_sym_unsignedlonglong] = ACTIONS(482),
    [anon_sym_uint64] = ACTIONS(485),
    [anon_sym_float] = ACTIONS(488),
    [anon_sym_double] = ACTIONS(488),
    [anon_sym_longdouble] = ACTIONS(491),
    [anon_sym_char] = ACTIONS(494),
    [anon_sym_wchar] = ACTIONS(494),
    [anon_sym_COLON_COLON] = ACTIONS(497),
    [anon_sym_string] = ACTIONS(500),
    [anon_sym_wstring] = ACTIONS(500),
    [anon_sym_any] = ACTIONS(503),
    [anon_sym_sequence] = ACTIONS(506),
    [anon_sym_map] = ACTIONS(509),
    [anon_sym_exception] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_abstract] = ACTIONS(517),
    [anon_sym_void] = ACTIONS(520),
    [anon_sym_readonly] = ACTIONS(523),
    [anon_sym_attribute] = ACTIONS(526),
    [anon_sym_bitset] = ACTIONS(529),
    [anon_sym_bitmask] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_oneway] = ACTIONS(538),
    [anon_sym_valuetype] = ACTIONS(541),
    [anon_sym_struct] = ACTIONS(544),
    [anon_sym_union] = ACTIONS(547),
    [anon_sym_enum] = ACTIONS(550),
    [anon_sym_const] = ACTIONS(553),
    [anon_sym_custom] = ACTIONS(556),
    [anon_sym_typedef] = ACTIONS(559),
    [anon_sym_ATignore_literal_names] = ACTIONS(562),
    [anon_sym_typeid] = ACTIONS(565),
    [anon_sym_import] = ACTIONS(568),
    [anon_sym_Object] = ACTIONS(571),
    [sym_value_base_type] = ACTIONS(464),
    [anon_sym_native] = ACTIONS(574),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [14] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [15] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [16] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(19),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(584),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [17] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [18] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(17),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [19] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [20] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(15),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [21] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(632),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_except_dcl] = STATE(627),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(330),
    [sym_op_type_spec] = STATE(625),
    [sym_attr_dcl] = STATE(627),
    [sym_readonly_attr_spec] = STATE(623),
    [sym_attr_spec] = STATE(623),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_value_dcl] = STATE(627),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(741),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(627),
    [sym_import_dcl] = STATE(627),
    [sym_object_type] = STATE(296),
    [sym_op_oneway_dcl] = STATE(330),
    [sym_op_with_context] = STATE(627),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_type_dcl] = STATE(627),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_const_dcl] = STATE(627),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [aux_sym_interface_body_repeat1] = STATE(12),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_exception] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_abstract] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_readonly] = ACTIONS(252),
    [anon_sym_attribute] = ACTIONS(254),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_oneway] = ACTIONS(262),
    [anon_sym_valuetype] = ACTIONS(264),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_custom] = ACTIONS(274),
    [anon_sym_typedef] = ACTIONS(280),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [anon_sym_native] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [22] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(784),
    [sym_template_module_ref] = STATE(624),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(120),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(22),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_template_module_dcl_repeat1] = STATE(23),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_alias] = ACTIONS(594),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [23] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(784),
    [sym_template_module_ref] = STATE(624),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(120),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(23),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_template_module_dcl_repeat1] = STATE(23),
    [anon_sym_exception] = ACTIONS(598),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_local] = ACTIONS(603),
    [anon_sym_abstract] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(609),
    [anon_sym_bitset] = ACTIONS(612),
    [anon_sym_bitmask] = ACTIONS(615),
    [anon_sym_ATannotation] = ACTIONS(618),
    [anon_sym_AT] = ACTIONS(621),
    [anon_sym_module] = ACTIONS(624),
    [anon_sym_valuetype] = ACTIONS(627),
    [anon_sym_eventtype] = ACTIONS(630),
    [anon_sym_struct] = ACTIONS(633),
    [anon_sym_union] = ACTIONS(636),
    [anon_sym_enum] = ACTIONS(639),
    [anon_sym_const] = ACTIONS(642),
    [anon_sym_alias] = ACTIONS(645),
    [anon_sym_custom] = ACTIONS(648),
    [anon_sym_typedef] = ACTIONS(651),
    [anon_sym_ATignore_literal_names] = ACTIONS(654),
    [anon_sym_typeid] = ACTIONS(657),
    [anon_sym_typeprefix] = ACTIONS(660),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_component] = ACTIONS(666),
    [anon_sym_home] = ACTIONS(669),
    [anon_sym_porttype] = ACTIONS(672),
    [anon_sym_connector] = ACTIONS(675),
    [anon_sym_native] = ACTIONS(678),
    [anon_sym_POUNDdefine] = ACTIONS(681),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [24] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(784),
    [sym_template_module_ref] = STATE(624),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(120),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(24),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_template_module_dcl_repeat1] = STATE(22),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_alias] = ACTIONS(594),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [25] = {
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(767),
    [sym_interface_dcl] = STATE(767),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(767),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(767),
    [sym_template_module_inst] = STATE(767),
    [sym_value_dcl] = STATE(767),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(758),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(767),
    [sym_type_prefix_dcl] = STATE(767),
    [sym_import_dcl] = STATE(767),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(767),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(767),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(767),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(767),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(767),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(109),
    [sym_type_dcl] = STATE(767),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(767),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(119),
    [sym_const_dcl] = STATE(767),
    [sym_comment] = STATE(25),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(686),
    [sym_preproc_directive] = ACTIONS(9),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [26] = {
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(767),
    [sym_interface_dcl] = STATE(767),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(767),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(767),
    [sym_template_module_inst] = STATE(767),
    [sym_value_dcl] = STATE(767),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(758),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(767),
    [sym_type_prefix_dcl] = STATE(767),
    [sym_import_dcl] = STATE(767),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(767),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(767),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(767),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(767),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(767),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(109),
    [sym_type_dcl] = STATE(767),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(767),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(119),
    [sym_const_dcl] = STATE(767),
    [sym_comment] = STATE(26),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(688),
    [sym_preproc_directive] = ACTIONS(690),
    [anon_sym_exception] = ACTIONS(693),
    [anon_sym_local] = ACTIONS(696),
    [anon_sym_abstract] = ACTIONS(699),
    [anon_sym_interface] = ACTIONS(702),
    [anon_sym_bitset] = ACTIONS(705),
    [anon_sym_bitmask] = ACTIONS(708),
    [anon_sym_ATannotation] = ACTIONS(711),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_module] = ACTIONS(717),
    [anon_sym_valuetype] = ACTIONS(720),
    [anon_sym_eventtype] = ACTIONS(723),
    [anon_sym_struct] = ACTIONS(726),
    [anon_sym_union] = ACTIONS(729),
    [anon_sym_enum] = ACTIONS(732),
    [anon_sym_const] = ACTIONS(735),
    [anon_sym_custom] = ACTIONS(738),
    [anon_sym_typedef] = ACTIONS(741),
    [anon_sym_ATignore_literal_names] = ACTIONS(744),
    [anon_sym_typeid] = ACTIONS(747),
    [anon_sym_typeprefix] = ACTIONS(750),
    [anon_sym_import] = ACTIONS(753),
    [anon_sym_component] = ACTIONS(756),
    [anon_sym_home] = ACTIONS(759),
    [anon_sym_porttype] = ACTIONS(762),
    [anon_sym_connector] = ACTIONS(765),
    [anon_sym_native] = ACTIONS(768),
    [anon_sym_POUNDdefine] = ACTIONS(771),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [27] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_template_module_inst] = STATE(784),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(131),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(27),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_module_dcl_repeat1] = STATE(27),
    [anon_sym_exception] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_local] = ACTIONS(779),
    [anon_sym_abstract] = ACTIONS(782),
    [anon_sym_interface] = ACTIONS(785),
    [anon_sym_bitset] = ACTIONS(788),
    [anon_sym_bitmask] = ACTIONS(791),
    [anon_sym_ATannotation] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(797),
    [anon_sym_module] = ACTIONS(800),
    [anon_sym_valuetype] = ACTIONS(803),
    [anon_sym_eventtype] = ACTIONS(806),
    [anon_sym_struct] = ACTIONS(809),
    [anon_sym_union] = ACTIONS(812),
    [anon_sym_enum] = ACTIONS(815),
    [anon_sym_const] = ACTIONS(818),
    [anon_sym_custom] = ACTIONS(821),
    [anon_sym_typedef] = ACTIONS(824),
    [anon_sym_ATignore_literal_names] = ACTIONS(827),
    [anon_sym_typeid] = ACTIONS(830),
    [anon_sym_typeprefix] = ACTIONS(833),
    [anon_sym_import] = ACTIONS(836),
    [anon_sym_component] = ACTIONS(839),
    [anon_sym_home] = ACTIONS(842),
    [anon_sym_porttype] = ACTIONS(845),
    [anon_sym_connector] = ACTIONS(848),
    [anon_sym_native] = ACTIONS(851),
    [anon_sym_POUNDdefine] = ACTIONS(854),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [28] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_template_module_inst] = STATE(784),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(131),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(28),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_module_dcl_repeat1] = STATE(27),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [29] = {
    [sym_except_dcl] = STATE(784),
    [sym_interface_dcl] = STATE(784),
    [sym_interface_kind] = STATE(766),
    [sym_interface_forward_dcl] = STATE(765),
    [sym_interface_def] = STATE(765),
    [sym_interface_header] = STATE(764),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_dcl] = STATE(784),
    [sym_annotation_appl] = STATE(207),
    [sym_template_module_dcl] = STATE(784),
    [sym_template_module_inst] = STATE(784),
    [sym_value_dcl] = STATE(784),
    [sym_value_def] = STATE(761),
    [sym_value_kind] = STATE(760),
    [sym_value_header] = STATE(759),
    [sym_value_forward_dcl] = STATE(761),
    [sym_typedef_dcl] = STATE(785),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_type_id_dcl] = STATE(784),
    [sym_type_prefix_dcl] = STATE(784),
    [sym_import_dcl] = STATE(784),
    [sym_value_box_def] = STATE(761),
    [sym_value_abs_def] = STATE(761),
    [sym_component_dcl] = STATE(784),
    [sym_component_forward_dcl] = STATE(755),
    [sym_component_def] = STATE(755),
    [sym_component_header] = STATE(754),
    [sym_home_dcl] = STATE(784),
    [sym_home_header] = STATE(753),
    [sym_event_dcl] = STATE(784),
    [sym_event_forward_dcl] = STATE(752),
    [sym_event_abs_def] = STATE(752),
    [sym_event_def] = STATE(752),
    [sym_event_header] = STATE(751),
    [sym_porttype_dcl] = STATE(784),
    [sym_porttype_forward_dcl] = STATE(748),
    [sym_porttype_def] = STATE(748),
    [sym_connector_dcl] = STATE(784),
    [sym_connector_header] = STATE(744),
    [sym_definition] = STATE(131),
    [sym_type_dcl] = STATE(784),
    [sym_constr_type_dcl] = STATE(741),
    [sym_native_dcl] = STATE(741),
    [sym_module_dcl] = STATE(784),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_predefine] = STATE(117),
    [sym_const_dcl] = STATE(784),
    [sym_comment] = STATE(29),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_module_dcl_repeat1] = STATE(28),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [30] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(175),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(482),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_const_expr] = STATE(482),
    [sym_or_expr] = STATE(202),
    [sym_xor_expr] = STATE(189),
    [sym_and_expr] = STATE(183),
    [sym_shift_expr] = STATE(177),
    [sym_add_expr] = STATE(172),
    [sym_mult_expr] = STATE(159),
    [sym_unary_expr] = STATE(165),
    [sym_primary_expr] = STATE(169),
    [sym_unary_operator] = STATE(171),
    [sym_literal] = STATE(168),
    [sym_string_literal] = STATE(162),
    [sym_char_literal] = STATE(162),
    [sym_boolean_literal] = STATE(162),
    [sym_actual_parameters] = STATE(586),
    [sym_actual_parameter] = STATE(367),
    [sym_object_type] = STATE(296),
    [sym_comment] = STATE(30),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(865),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_L] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_TRUE] = ACTIONS(875),
    [anon_sym_FALSE] = ACTIONS(875),
    [sym_number_literal] = ACTIONS(877),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [31] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(175),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(482),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_const_expr] = STATE(482),
    [sym_or_expr] = STATE(202),
    [sym_xor_expr] = STATE(189),
    [sym_and_expr] = STATE(183),
    [sym_shift_expr] = STATE(177),
    [sym_add_expr] = STATE(172),
    [sym_mult_expr] = STATE(159),
    [sym_unary_expr] = STATE(165),
    [sym_primary_expr] = STATE(169),
    [sym_unary_operator] = STATE(171),
    [sym_literal] = STATE(168),
    [sym_string_literal] = STATE(162),
    [sym_char_literal] = STATE(162),
    [sym_boolean_literal] = STATE(162),
    [sym_actual_parameter] = STATE(546),
    [sym_object_type] = STATE(296),
    [sym_comment] = STATE(31),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(865),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_L] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_TRUE] = ACTIONS(875),
    [anon_sym_FALSE] = ACTIONS(875),
    [sym_number_literal] = ACTIONS(877),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [32] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_type_spec] = STATE(283),
    [sym_simple_type_spec] = STATE(288),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(288),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_element_spec] = STATE(724),
    [sym_object_type] = STATE(296),
    [sym_constr_type_dcl] = STATE(283),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_comment] = STATE(32),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_default] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(883),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(235),
    [sym_signed_long_int] = STATE(235),
    [sym_signed_longlong_int] = STATE(235),
    [sym_unsigned_int] = STATE(252),
    [sym_integer_type] = STATE(296),
    [sym_signed_int] = STATE(252),
    [sym_unsigned_short_int] = STATE(240),
    [sym_unsigned_long_int] = STATE(240),
    [sym_unsigned_longlong_int] = STATE(240),
    [sym_floating_pt_type] = STATE(296),
    [sym_char_type] = STATE(296),
    [sym_scoped_name] = STATE(306),
    [sym_string_type] = STATE(307),
    [sym_simple_type_spec] = STATE(230),
    [sym_base_type_spec] = STATE(309),
    [sym_any_type] = STATE(296),
    [sym_fixed_pt_type] = STATE(307),
    [sym_template_type_spec] = STATE(230),
    [sym_sequence_type] = STATE(307),
    [sym_map_type] = STATE(307),
    [sym_bitset_dcl] = STATE(463),
    [sym_bitmask_dcl] = STATE(463),
    [sym_annotation_appl] = STATE(207),
    [sym_type_declarator] = STATE(688),
    [sym_enum_dcl] = STATE(463),
    [sym_enum_anno] = STATE(757),
    [sym_union_dcl] = STATE(463),
    [sym_union_forward_dcl] = STATE(466),
    [sym_union_def] = STATE(466),
    [sym_object_type] = STATE(296),
    [sym_constr_type_dcl] = STATE(230),
    [sym_struct_dcl] = STATE(463),
    [sym_struct_forward_dcl] = STATE(478),
    [sym_struct_def] = STATE(478),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(234),
    [anon_sym_short] = ACTIONS(202),
    [anon_sym_int16] = ACTIONS(202),
    [anon_sym_long] = ACTIONS(204),
    [anon_sym_int32] = ACTIONS(204),
    [anon_sym_longlong] = ACTIONS(206),
    [anon_sym_int64] = ACTIONS(208),
    [sym_unsigned_tiny_int] = ACTIONS(210),
    [sym_boolean_type] = ACTIONS(212),
    [anon_sym_fixed] = ACTIONS(214),
    [sym_octet_type] = ACTIONS(212),
    [sym_signed_tiny_int] = ACTIONS(216),
    [anon_sym_unsignedshort] = ACTIONS(218),
    [anon_sym_uint16] = ACTIONS(220),
    [anon_sym_unsignedlong] = ACTIONS(222),
    [anon_sym_uint32] = ACTIONS(222),
    [anon_sym_unsignedlonglong] = ACTIONS(224),
    [anon_sym_uint64] = ACTIONS(226),
    [anon_sym_float] = ACTIONS(228),
    [anon_sym_double] = ACTIONS(228),
    [anon_sym_longdouble] = ACTIONS(230),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_wchar] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_string] = ACTIONS(236),
    [anon_sym_wstring] = ACTIONS(236),
    [anon_sym_any] = ACTIONS(238),
    [anon_sym_sequence] = ACTIONS(240),
    [anon_sym_map] = ACTIONS(242),
    [anon_sym_bitset] = ACTIONS(256),
    [anon_sym_bitmask] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(266),
    [anon_sym_union] = ACTIONS(268),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_Object] = ACTIONS(286),
    [sym_value_base_type] = ACTIONS(212),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 42,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      anon_sym_supports,
    STATE(34), 1,
      sym_comment,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(340), 1,
      sym_value_inheritance,
    STATE(450), 1,
      sym_scoped_name,
    STATE(620), 1,
      sym_value_inheritance_spec,
    STATE(622), 1,
      sym_type_spec,
    STATE(657), 1,
      sym_value_supports,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [148] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_comment,
    STATE(74), 1,
      sym_param_attribute,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(441), 1,
      sym_param_dcl,
    STATE(547), 1,
      sym_type_spec,
    STATE(587), 1,
      sym_parameter_dcls,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    ACTIONS(895), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [292] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    ACTIONS(899), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [437] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_except_dcl_repeat1,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [582] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [727] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_except_dcl_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [872] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      anon_sym_longlong,
    ACTIONS(916), 1,
      anon_sym_int64,
    ACTIONS(919), 1,
      sym_unsigned_tiny_int,
    ACTIONS(925), 1,
      anon_sym_fixed,
    ACTIONS(928), 1,
      sym_signed_tiny_int,
    ACTIONS(931), 1,
      anon_sym_unsignedshort,
    ACTIONS(934), 1,
      anon_sym_uint16,
    ACTIONS(940), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(943), 1,
      anon_sym_uint64,
    ACTIONS(949), 1,
      anon_sym_longdouble,
    ACTIONS(955), 1,
      anon_sym_COLON_COLON,
    ACTIONS(961), 1,
      anon_sym_any,
    ACTIONS(964), 1,
      anon_sym_sequence,
    ACTIONS(967), 1,
      anon_sym_map,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    ACTIONS(972), 1,
      anon_sym_AT,
    ACTIONS(975), 1,
      anon_sym_Object,
    ACTIONS(978), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(907), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(910), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(937), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(946), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(952), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(958), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(40), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(922), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1015] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1160] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1305] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_except_dcl_repeat1,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1450] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1595] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1740] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_interface_def_repeat1,
    STATE(83), 1,
      sym_member,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(249), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1885] = 38,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(47), 1,
      sym_comment,
    STATE(74), 1,
      sym_param_attribute,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(496), 1,
      sym_param_dcl,
    STATE(547), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    ACTIONS(895), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2023] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(997), 1,
      anon_sym_longlong,
    ACTIONS(1000), 1,
      anon_sym_int64,
    ACTIONS(1003), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1009), 1,
      anon_sym_fixed,
    ACTIONS(1012), 1,
      sym_signed_tiny_int,
    ACTIONS(1015), 1,
      anon_sym_unsignedshort,
    ACTIONS(1018), 1,
      anon_sym_uint16,
    ACTIONS(1024), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(1027), 1,
      anon_sym_uint64,
    ACTIONS(1033), 1,
      anon_sym_longdouble,
    ACTIONS(1039), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1045), 1,
      anon_sym_any,
    ACTIONS(1048), 1,
      anon_sym_sequence,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
    ACTIONS(1053), 1,
      anon_sym_enum,
    ACTIONS(1056), 1,
      anon_sym_const,
    ACTIONS(1059), 1,
      anon_sym_typedef,
    ACTIONS(1062), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1065), 1,
      sym_identifier,
    STATE(90), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(562), 1,
      sym_scoped_name,
    STATE(564), 1,
      sym_annotation_member_type,
    STATE(757), 1,
      sym_enum_anno,
    ACTIONS(991), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(994), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(1006), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(1021), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(1030), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(1036), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(1042), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(48), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(685), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(568), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(706), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2165] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(270), 1,
      anon_sym_enum,
    ACTIONS(272), 1,
      anon_sym_const,
    ACTIONS(280), 1,
      anon_sym_typedef,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_fixed,
    ACTIONS(1072), 1,
      anon_sym_any,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    ACTIONS(1076), 1,
      anon_sym_ATignore_literal_names,
    STATE(48), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(562), 1,
      sym_scoped_name,
    STATE(564), 1,
      sym_annotation_member_type,
    STATE(757), 1,
      sym_enum_anno,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1068), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(685), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(568), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(706), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2309] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(270), 1,
      anon_sym_enum,
    ACTIONS(272), 1,
      anon_sym_const,
    ACTIONS(280), 1,
      anon_sym_typedef,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_fixed,
    ACTIONS(1072), 1,
      anon_sym_any,
    ACTIONS(1076), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(90), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(562), 1,
      sym_scoped_name,
    STATE(564), 1,
      sym_annotation_member_type,
    STATE(757), 1,
      sym_enum_anno,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1068), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(685), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(568), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(706), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2453] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1080), 1,
      anon_sym_sequence,
    ACTIONS(1084), 1,
      anon_sym_const,
    STATE(51), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(373), 1,
      sym_formal_parameter,
    STATE(580), 1,
      sym_formal_parameters,
    STATE(581), 1,
      sym_formal_parameter_type,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(578), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1082), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2583] = 38,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_interface_def_repeat1,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(224), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2719] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1086), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2788] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(1092), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1090), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(1096), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1094), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(1100), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1098), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2995] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1080), 1,
      anon_sym_sequence,
    ACTIONS(1084), 1,
      anon_sym_const,
    STATE(57), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(543), 1,
      sym_formal_parameter,
    STATE(581), 1,
      sym_formal_parameter_type,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(578), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1082), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [3122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(1104), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1102), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(1108), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1106), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(1112), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1110), 48,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(1116), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1114), 47,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(1120), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1118), 47,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(1124), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1122), 47,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3533] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(1108), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1106), 47,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3601] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(561), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3728] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(450), 1,
      sym_scoped_name,
    STATE(642), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3855] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(505), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3982] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(518), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4109] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
    STATE(233), 1,
      sym_type_spec,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4236] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(355), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4363] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(381), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4490] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(513), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4617] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(531), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4744] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(214), 1,
      anon_sym_fixed,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(238), 1,
      anon_sym_any,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(242), 1,
      anon_sym_map,
    ACTIONS(286), 1,
      anon_sym_Object,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
    STATE(306), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_base_type_spec,
    STATE(520), 1,
      sym_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(288), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(212), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(307), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(296), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(1128), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1126), 45,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [4937] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(1108), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1106), 45,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_oneway,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [5003] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_fixed,
    STATE(77), 1,
      sym_comment,
    STATE(499), 1,
      sym_scoped_name,
    STATE(694), 1,
      sym_const_type,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1068), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(706), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [5108] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(230), 1,
      anon_sym_longdouble,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(240), 1,
      anon_sym_sequence,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_fixed,
    STATE(78), 1,
      sym_comment,
    STATE(499), 1,
      sym_scoped_name,
    STATE(770), 1,
      sym_const_type,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(228), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(236), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1068), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(706), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [5213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(1132), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1130), 34,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_default,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_ATignore_literal_names,
      anon_sym_case,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5268] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(1136), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1134), 34,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_default,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_ATignore_literal_names,
      anon_sym_case,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5323] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym_annotation_appl,
    STATE(81), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1138), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(1147), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1145), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1151), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1149), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5469] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_comment,
    ACTIONS(1155), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1153), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5518] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_comment,
    ACTIONS(1155), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1153), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5567] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(1161), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1159), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5614] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(1165), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1163), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5661] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(1169), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1167), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5708] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(1173), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1171), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5755] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(1177), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1175), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5802] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(1181), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1179), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(1185), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1183), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(1189), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1187), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5943] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(1193), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1191), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(1197), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1195), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(1201), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1199), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [6084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(1205), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1203), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1207), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(1213), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1211), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1193), 27,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [6268] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(1217), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1215), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(1203), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1205), 27,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [6358] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_longlong,
    ACTIONS(208), 1,
      anon_sym_int64,
    ACTIONS(210), 1,
      sym_unsigned_tiny_int,
    ACTIONS(216), 1,
      sym_signed_tiny_int,
    ACTIONS(218), 1,
      anon_sym_unsignedshort,
    ACTIONS(220), 1,
      anon_sym_uint16,
    ACTIONS(224), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(226), 1,
      anon_sym_uint64,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1219), 1,
      sym_boolean_type,
    STATE(103), 1,
      sym_comment,
    STATE(453), 1,
      sym_scoped_name,
    STATE(669), 1,
      sym_switch_type_spec,
    ACTIONS(202), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(204), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(222), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(232), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(717), 2,
      sym_integer_type,
      sym_char_type,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [6441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1169), 27,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [6486] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1221), 1,
      sym_identifier,
    STATE(105), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(379), 1,
      sym_annotation_appl_param,
    STATE(569), 1,
      sym_const_expr,
    STATE(799), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(1225), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1223), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6618] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1221), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(379), 1,
      sym_annotation_appl_param,
    STATE(569), 1,
      sym_const_expr,
    STATE(790), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(1229), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1227), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6750] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1233), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1231), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6793] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1235), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6836] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1221), 1,
      sym_identifier,
    STATE(111), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(379), 1,
      sym_annotation_appl_param,
    STATE(569), 1,
      sym_const_expr,
    STATE(796), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(1241), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1239), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(1241), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1239), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [7011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(1245), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1243), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [7054] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(1225), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1223), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [7097] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(1249), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1247), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [7140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(1253), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1251), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [7183] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1221), 1,
      sym_identifier,
    STATE(118), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(379), 1,
      sym_annotation_appl_param,
    STATE(569), 1,
      sym_const_expr,
    STATE(575), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(1253), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1251), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [7315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(1257), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1255), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [7358] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(516), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7444] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(756), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7530] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(574), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7616] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(124), 1,
      sym_comment,
    STATE(269), 1,
      sym_scoped_name,
    STATE(434), 1,
      sym_annotation_built_name,
    ACTIONS(1259), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7664] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(125), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(618), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7750] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
    STATE(187), 1,
      sym_scoped_name,
    STATE(192), 1,
      sym_annotation_built_name,
    ACTIONS(1261), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [7798] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(127), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(570), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7884] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(128), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(692), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7970] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1263), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1267), 1,
      sym_identifier,
    STATE(84), 1,
      sym_annotation_built_name,
    STATE(85), 1,
      sym_scoped_name,
    STATE(129), 1,
      sym_comment,
    ACTIONS(1265), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [8018] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(130), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(335), 1,
      sym_const_expr,
    STATE(640), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8104] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(1271), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1269), 26,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8146] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1277), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
    STATE(276), 1,
      sym_scoped_name,
    STATE(424), 1,
      sym_annotation_built_name,
    ACTIONS(1275), 24,
      anon_sym_default,
      anon_sym_id,
      anon_sym_autoid,
      anon_sym_optional,
      anon_sym_position,
      anon_sym_value,
      anon_sym_extensibility,
      anon_sym_final,
      anon_sym_appendable,
      anon_sym_mutable,
      anon_sym_key,
      anon_sym_must_understand,
      anon_sym_default_literal,
      anon_sym_range,
      anon_sym_min,
      anon_sym_max,
      anon_sym_unit,
      anon_sym_bit_bound,
      anon_sym_external,
      anon_sym_nested,
      anon_sym_verbatim,
      anon_sym_service,
      anon_sym_oneway,
      anon_sym_ami,
  [8194] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(133), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(777), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8277] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(134), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(567), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8360] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(135), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(763), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8443] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(136), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(608), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8526] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(137), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(619), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8609] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(189), 1,
      sym_xor_expr,
    STATE(202), 1,
      sym_or_expr,
    STATE(532), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8692] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_long,
    ACTIONS(222), 1,
      anon_sym_unsignedlong,
    ACTIONS(1281), 1,
      anon_sym_int32,
    ACTIONS(1283), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1287), 1,
      sym_signed_tiny_int,
    ACTIONS(1289), 1,
      anon_sym_uint32,
    STATE(139), 1,
      sym_comment,
    STATE(677), 1,
      sym_integer_type,
    STATE(678), 1,
      sym_destination_type,
    ACTIONS(206), 2,
      anon_sym_longlong,
      anon_sym_int64,
    ACTIONS(218), 2,
      anon_sym_unsignedshort,
      anon_sym_uint16,
    ACTIONS(224), 2,
      anon_sym_unsignedlonglong,
      anon_sym_uint64,
    ACTIONS(1279), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1285), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(252), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(235), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(240), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [8760] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(140), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    STATE(188), 1,
      sym_xor_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8837] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(141), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(182), 1,
      sym_and_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8911] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(142), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    STATE(176), 1,
      sym_shift_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8982] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1291), 1,
      anon_sym_RBRACE,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1301), 1,
      anon_sym_emits,
    ACTIONS(1303), 1,
      anon_sym_publishes,
    ACTIONS(1305), 1,
      anon_sym_consumes,
    STATE(143), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_component_body_repeat1,
    STATE(181), 1,
      sym_component_export,
    STATE(605), 1,
      sym_component_body,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(606), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [9042] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(144), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(159), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    STATE(173), 1,
      sym_add_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9110] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1309), 1,
      anon_sym_RBRACE,
    ACTIONS(1311), 1,
      anon_sym_readonly,
    ACTIONS(1314), 1,
      anon_sym_attribute,
    ACTIONS(1317), 1,
      anon_sym_provides,
    ACTIONS(1320), 1,
      anon_sym_uses,
    ACTIONS(1323), 1,
      anon_sym_emits,
    ACTIONS(1326), 1,
      anon_sym_publishes,
    ACTIONS(1329), 1,
      anon_sym_consumes,
    STATE(181), 1,
      sym_component_export,
    ACTIONS(1332), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(145), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(606), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [9165] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(146), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(164), 1,
      sym_mult_expr,
    STATE(165), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9230] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1301), 1,
      anon_sym_emits,
    ACTIONS(1303), 1,
      anon_sym_publishes,
    ACTIONS(1305), 1,
      anon_sym_consumes,
    ACTIONS(1335), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      aux_sym_component_body_repeat1,
    STATE(147), 1,
      sym_comment,
    STATE(181), 1,
      sym_component_export,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(606), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [9287] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(148), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(166), 1,
      sym_unary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(169), 1,
      sym_primary_expr,
    STATE(171), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9349] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(149), 1,
      sym_comment,
    ACTIONS(1339), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1341), 13,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9382] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1343), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_port_body_repeat1,
    STATE(194), 1,
      sym_port_export,
    STATE(196), 1,
      sym_port_ref,
    STATE(684), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9432] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1345), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_port_body_repeat1,
    STATE(194), 1,
      sym_port_export,
    STATE(196), 1,
      sym_port_ref,
    STATE(684), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9482] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1347), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1349), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9512] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1351), 1,
      anon_sym_RBRACE,
    ACTIONS(1353), 1,
      anon_sym_readonly,
    ACTIONS(1356), 1,
      anon_sym_attribute,
    ACTIONS(1359), 1,
      anon_sym_provides,
    ACTIONS(1362), 1,
      anon_sym_uses,
    STATE(194), 1,
      sym_port_export,
    STATE(196), 1,
      sym_port_ref,
    STATE(684), 1,
      sym_attr_dcl,
    ACTIONS(1365), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(153), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(1368), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1370), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9590] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(1372), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1374), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9620] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1376), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(200), 1,
      sym_port_ref,
    STATE(201), 1,
      sym_connector_export,
    STATE(595), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1380), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(1382), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1384), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9730] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1386), 1,
      anon_sym_GT,
    ACTIONS(1392), 1,
      anon_sym_SLASH,
    STATE(159), 1,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1388), 12,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(1394), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1396), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9794] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1398), 1,
      anon_sym_RBRACE,
    ACTIONS(1400), 1,
      anon_sym_readonly,
    ACTIONS(1403), 1,
      anon_sym_attribute,
    ACTIONS(1406), 1,
      anon_sym_provides,
    ACTIONS(1409), 1,
      anon_sym_uses,
    STATE(200), 1,
      sym_port_ref,
    STATE(201), 1,
      sym_connector_export,
    STATE(595), 1,
      sym_attr_dcl,
    ACTIONS(1412), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(161), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9842] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(1415), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1417), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(1419), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1421), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9902] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1392), 1,
      anon_sym_SLASH,
    ACTIONS(1423), 1,
      anon_sym_GT,
    STATE(164), 1,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1425), 12,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(1427), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1429), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_comment,
    ACTIONS(1431), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1433), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9996] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(167), 1,
      sym_comment,
    ACTIONS(1435), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1437), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(168), 1,
      sym_comment,
    ACTIONS(1339), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1341), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10056] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(169), 1,
      sym_comment,
    ACTIONS(1439), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1441), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10086] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1295), 1,
      anon_sym_attribute,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    STATE(156), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(170), 1,
      sym_comment,
    STATE(200), 1,
      sym_port_ref,
    STATE(201), 1,
      sym_connector_export,
    STATE(595), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(623), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [10133] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(149), 1,
      sym_scoped_name,
    STATE(158), 1,
      sym_primary_expr,
    STATE(168), 1,
      sym_literal,
    STATE(171), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(162), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [10182] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1443), 1,
      anon_sym_GT,
    STATE(172), 1,
      sym_comment,
    ACTIONS(1447), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1445), 10,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10211] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1449), 1,
      anon_sym_GT,
    STATE(173), 1,
      sym_comment,
    ACTIONS(1447), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1451), 10,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10240] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1191), 1,
      anon_sym_SLASH,
    ACTIONS(1453), 1,
      anon_sym_EQ,
    STATE(174), 1,
      sym_comment,
    ACTIONS(1193), 11,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [10269] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1339), 1,
      anon_sym_SLASH,
    ACTIONS(1455), 1,
      anon_sym_GT,
    ACTIONS(1457), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1341), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10302] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1459), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_comment,
    ACTIONS(1463), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1461), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10329] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1465), 1,
      anon_sym_GT,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1463), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1467), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10356] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1469), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym_port_ref,
    STATE(178), 1,
      sym_comment,
    STATE(654), 1,
      sym_port_body,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(594), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [10390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(179), 1,
      sym_comment,
    ACTIONS(1471), 10,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_emits,
      anon_sym_publishes,
      anon_sym_consumes,
      anon_sym_port,
      anon_sym_mirrorport,
  [10412] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(1473), 1,
      anon_sym_bitmask,
    ACTIONS(1475), 1,
      anon_sym_struct,
    STATE(180), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_interface_def_repeat1,
    STATE(207), 1,
      sym_annotation_appl,
    STATE(667), 1,
      sym_interface_header,
    STATE(670), 1,
      sym_interface_kind,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [10450] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(181), 1,
      sym_comment,
    ACTIONS(1477), 10,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_emits,
      anon_sym_publishes,
      anon_sym_consumes,
      anon_sym_port,
      anon_sym_mirrorport,
  [10472] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1481), 1,
      anon_sym_DOLLAR,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1479), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1481), 1,
      anon_sym_DOLLAR,
    STATE(183), 1,
      sym_comment,
    ACTIONS(1483), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1485), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1487), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [10541] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1489), 1,
      anon_sym_AT,
    STATE(207), 1,
      sym_annotation_appl,
    STATE(185), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [10565] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_SEMI,
    ACTIONS(1496), 1,
      anon_sym_getraises,
    ACTIONS(1498), 1,
      anon_sym_setraises,
    STATE(186), 1,
      sym_comment,
    STATE(446), 1,
      sym_get_excep_expr,
    STATE(447), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(577), 1,
      sym_attr_raises_expr,
    STATE(579), 1,
      sym_set_excep_expr,
  [10599] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1500), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_comment,
    ACTIONS(1155), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10623] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_CARET,
    STATE(188), 1,
      sym_comment,
    ACTIONS(1502), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_CARET,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1506), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_comment,
    ACTIONS(1197), 7,
      anon_sym_LPAREN,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10686] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1508), 1,
      anon_sym_LBRACE,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1512), 1,
      anon_sym_SEMI,
    ACTIONS(1514), 1,
      anon_sym_supports,
    STATE(191), 1,
      sym_comment,
    STATE(340), 1,
      sym_value_inheritance,
    STATE(588), 1,
      sym_value_inheritance_spec,
    STATE(657), 1,
      sym_value_supports,
  [10717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1500), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_comment,
    ACTIONS(1155), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10738] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1516), 1,
      anon_sym_LBRACE,
    ACTIONS(1518), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_comment,
    STATE(340), 1,
      sym_value_inheritance,
    STATE(657), 1,
      sym_value_supports,
    STATE(659), 1,
      sym_value_inheritance_spec,
  [10769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(194), 1,
      sym_comment,
    ACTIONS(1520), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_comment,
    ACTIONS(1522), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(196), 1,
      sym_comment,
    ACTIONS(1524), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1526), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1528), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      sym_comment,
    ACTIONS(1530), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_comment,
    ACTIONS(1532), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_comment,
    ACTIONS(1534), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10921] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1538), 1,
      anon_sym_PIPE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(1536), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10942] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1540), 1,
      anon_sym_L,
    STATE(203), 1,
      sym_comment,
    STATE(508), 1,
      sym_scoped_name,
    STATE(681), 1,
      sym_imported_scope,
    STATE(683), 1,
      sym_string_literal,
  [10973] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_LBRACE,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(1546), 1,
      anon_sym_SEMI,
    ACTIONS(1548), 1,
      anon_sym_supports,
    STATE(204), 1,
      sym_comment,
    STATE(361), 1,
      sym_component_inheritance_spec,
    STATE(645), 1,
      sym_supported_interface_spec,
  [11001] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_RBRACE,
    ACTIONS(1552), 1,
      anon_sym_default,
    ACTIONS(1554), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(205), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_union_def_repeat1,
    STATE(377), 1,
      sym_case,
  [11029] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_RBRACE,
    ACTIONS(1558), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1560), 1,
      sym_identifier,
    STATE(206), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(374), 1,
      sym_enumerator,
    STATE(534), 1,
      sym_enum_modifier,
  [11057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(207), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [11075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(208), 1,
      sym_comment,
    ACTIONS(1169), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(209), 1,
      sym_comment,
    ACTIONS(1205), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11111] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_default,
    ACTIONS(1554), 1,
      anon_sym_case,
    ACTIONS(1562), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_case_label,
    STATE(210), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_union_def_repeat1,
    STATE(377), 1,
      sym_case,
  [11139] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1566), 1,
      anon_sym_LBRACK,
    STATE(257), 1,
      sym_fixed_array_size,
    STATE(211), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1564), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(212), 1,
      sym_comment,
    ACTIONS(1193), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11179] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1558), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1560), 1,
      sym_identifier,
    ACTIONS(1569), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(333), 1,
      sym_enumerator,
    STATE(534), 1,
      sym_enum_modifier,
  [11207] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1571), 1,
      anon_sym_RBRACE,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    STATE(214), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_interface_def_repeat1,
    STATE(442), 1,
      sym_bit_value,
    STATE(461), 1,
      sym_annotation_appl,
  [11235] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1579), 1,
      anon_sym_LBRACK,
    STATE(211), 1,
      aux_sym_array_declarator_repeat1,
    STATE(215), 1,
      sym_comment,
    STATE(257), 1,
      sym_fixed_array_size,
    ACTIONS(1577), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11259] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1581), 1,
      anon_sym_RBRACE,
    ACTIONS(1583), 1,
      anon_sym_default,
    ACTIONS(1586), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(377), 1,
      sym_case,
    STATE(216), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [11285] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1589), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_comment,
    STATE(340), 1,
      sym_value_inheritance,
    STATE(630), 1,
      sym_value_inheritance_spec,
    STATE(657), 1,
      sym_value_supports,
  [11313] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1579), 1,
      anon_sym_LBRACK,
    STATE(215), 1,
      aux_sym_array_declarator_repeat1,
    STATE(218), 1,
      sym_comment,
    STATE(257), 1,
      sym_fixed_array_size,
    ACTIONS(1522), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11337] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1591), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_comment,
    STATE(340), 1,
      sym_value_inheritance,
    STATE(589), 1,
      sym_value_inheritance_spec,
    STATE(657), 1,
      sym_value_supports,
  [11365] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1593), 1,
      anon_sym_Object,
    ACTIONS(1595), 1,
      anon_sym_multiple,
    STATE(220), 1,
      sym_comment,
    STATE(506), 1,
      sym_scoped_name,
    STATE(697), 1,
      sym_interface_type,
  [11393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(221), 1,
      sym_comment,
    ACTIONS(1213), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [11411] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_interface_def_repeat1,
    STATE(416), 1,
      sym_bit_value,
    STATE(461), 1,
      sym_annotation_appl,
  [11439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(223), 1,
      sym_comment,
    ACTIONS(1599), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11458] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(224), 1,
      sym_comment,
    STATE(285), 1,
      sym_declarator,
    STATE(360), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(225), 1,
      sym_comment,
    ACTIONS(1603), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(226), 1,
      sym_comment,
    ACTIONS(1605), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11515] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_supports,
    ACTIONS(1607), 1,
      anon_sym_COLON,
    ACTIONS(1609), 1,
      anon_sym_manages,
    STATE(227), 1,
      sym_comment,
    STATE(372), 1,
      sym_home_inheritance_spec,
    STATE(641), 1,
      sym_supported_interface_spec,
  [11540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_comment,
    ACTIONS(1611), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11557] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1593), 1,
      anon_sym_Object,
    STATE(229), 1,
      sym_comment,
    STATE(506), 1,
      sym_scoped_name,
    STATE(696), 1,
      sym_interface_type,
  [11582] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(230), 1,
      sym_comment,
    STATE(336), 1,
      sym_any_declarator,
    STATE(652), 1,
      sym_any_declarators,
    STATE(526), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11605] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    STATE(231), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1599), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11624] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1616), 1,
      anon_sym_RBRACE,
    ACTIONS(1618), 1,
      anon_sym_bitfield,
    STATE(232), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(357), 1,
      sym_bitfield_spec,
    STATE(548), 1,
      sym_bitfield,
  [11649] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
    STATE(285), 1,
      sym_declarator,
    STATE(711), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11672] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(1473), 1,
      anon_sym_bitmask,
    ACTIONS(1475), 1,
      anon_sym_struct,
    STATE(185), 1,
      aux_sym_interface_def_repeat1,
    STATE(207), 1,
      sym_annotation_appl,
    STATE(234), 1,
      sym_comment,
  [11697] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_comment,
    ACTIONS(1620), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11714] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    STATE(236), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_interface_def_repeat1,
    STATE(461), 1,
      sym_annotation_appl,
    STATE(539), 1,
      sym_bit_value,
  [11739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(237), 1,
      sym_comment,
    ACTIONS(1622), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11756] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1618), 1,
      anon_sym_bitfield,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(357), 1,
      sym_bitfield_spec,
    STATE(548), 1,
      sym_bitfield,
  [11781] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1558), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1560), 1,
      sym_identifier,
    STATE(239), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_enumerator_repeat1,
    STATE(534), 1,
      sym_enum_modifier,
    STATE(556), 1,
      sym_enumerator,
  [11806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_comment,
    ACTIONS(1626), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11823] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1628), 1,
      anon_sym_truncatable,
    STATE(241), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
    STATE(313), 1,
      sym_value_name,
  [11848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(242), 1,
      sym_comment,
    ACTIONS(1630), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11865] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1618), 1,
      anon_sym_bitfield,
    ACTIONS(1632), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(357), 1,
      sym_bitfield_spec,
    STATE(548), 1,
      sym_bitfield,
  [11890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(244), 1,
      sym_comment,
    ACTIONS(1634), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11907] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1636), 1,
      anon_sym_RBRACE,
    ACTIONS(1638), 1,
      anon_sym_bitfield,
    STATE(357), 1,
      sym_bitfield_spec,
    STATE(548), 1,
      sym_bitfield,
    STATE(245), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [11930] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    STATE(246), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_interface_def_repeat1,
    STATE(416), 1,
      sym_bit_value,
    STATE(461), 1,
      sym_annotation_appl,
  [11955] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1618), 1,
      anon_sym_bitfield,
    ACTIONS(1641), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(247), 1,
      sym_comment,
    STATE(357), 1,
      sym_bitfield_spec,
    STATE(548), 1,
      sym_bitfield,
  [11980] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    STATE(236), 1,
      aux_sym_interface_def_repeat1,
    STATE(248), 1,
      sym_comment,
    STATE(461), 1,
      sym_annotation_appl,
    STATE(521), 1,
      sym_bit_value,
  [12005] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(249), 1,
      sym_comment,
    STATE(285), 1,
      sym_declarator,
    STATE(396), 1,
      sym_declarators,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12028] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(250), 1,
      sym_comment,
    ACTIONS(1643), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [12045] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1645), 1,
      anon_sym_LT,
    STATE(251), 1,
      sym_comment,
    ACTIONS(1647), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_comment,
    ACTIONS(1649), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [12081] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(1593), 1,
      anon_sym_Object,
    STATE(253), 1,
      sym_comment,
    STATE(506), 1,
      sym_scoped_name,
    STATE(707), 1,
      sym_interface_type,
  [12106] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1651), 1,
      anon_sym_SEMI,
    ACTIONS(1653), 1,
      anon_sym_raises,
    STATE(254), 1,
      sym_comment,
    STATE(376), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(638), 1,
      sym_raises_expr,
  [12131] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_AT,
    ACTIONS(1575), 1,
      sym_identifier,
    STATE(255), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_interface_def_repeat1,
    STATE(423), 1,
      sym_bit_value,
    STATE(461), 1,
      sym_annotation_appl,
  [12156] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      sym_comment,
    STATE(277), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1657), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(257), 1,
      sym_comment,
    ACTIONS(1659), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12195] = 6,
    ACTIONS(1661), 1,
      sym_escape_sequence,
    ACTIONS(1664), 1,
      anon_sym_DQUOTE,
    ACTIONS(1666), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(258), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [12215] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    ACTIONS(1675), 1,
      anon_sym_in,
    STATE(259), 1,
      sym_comment,
    STATE(334), 1,
      sym_in_param_dcl,
    STATE(648), 1,
      sym_in_parameter_dcls,
  [12237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(260), 1,
      sym_comment,
    ACTIONS(1677), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(261), 1,
      sym_comment,
    ACTIONS(1679), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12269] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1681), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1684), 1,
      sym_identifier,
    STATE(534), 1,
      sym_enum_modifier,
    STATE(262), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [12289] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1686), 1,
      anon_sym_COMMA,
    ACTIONS(1688), 1,
      anon_sym_LBRACE,
    ACTIONS(1690), 1,
      anon_sym_supports,
    STATE(263), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12311] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    STATE(264), 1,
      sym_comment,
    STATE(525), 1,
      sym_raises_expr,
    ACTIONS(1692), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12331] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(265), 1,
      sym_comment,
    STATE(365), 1,
      sym_scoped_name,
    STATE(378), 1,
      sym_interface_name,
  [12353] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(266), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
    STATE(375), 1,
      sym_value_name,
  [12375] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1686), 1,
      anon_sym_COMMA,
    ACTIONS(1688), 1,
      anon_sym_LBRACE,
    ACTIONS(1690), 1,
      anon_sym_supports,
    STATE(267), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12397] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      sym_identifier,
    ACTIONS(1696), 1,
      anon_sym_AT,
    STATE(461), 1,
      sym_annotation_appl,
    STATE(268), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12417] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_comment,
    ACTIONS(1155), 2,
      anon_sym_AT,
      sym_identifier,
  [12437] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12453] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(271), 1,
      sym_comment,
    ACTIONS(1203), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12469] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1703), 1,
      anon_sym_LBRACE,
    ACTIONS(1705), 1,
      anon_sym_primarykey,
    STATE(272), 1,
      sym_comment,
    STATE(636), 1,
      sym_primary_key_spec,
  [12491] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(273), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12507] = 6,
    ACTIONS(1138), 1,
      aux_sym_comment_token1,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1707), 1,
      anon_sym_AT,
    STATE(467), 1,
      sym_annotation_appl,
    STATE(274), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12527] = 6,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1712), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_comment,
    STATE(327), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1710), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [12547] = 6,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1714), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1716), 1,
      anon_sym_LPAREN,
    STATE(276), 1,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_raises_expr_repeat1,
    STATE(277), 1,
      sym_comment,
    ACTIONS(1718), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12587] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1720), 1,
      anon_sym_AT,
    ACTIONS(1722), 1,
      aux_sym_comment_token1,
    STATE(274), 1,
      aux_sym_interface_def_repeat1,
    STATE(278), 1,
      sym_comment,
    STATE(467), 1,
      sym_annotation_appl,
  [12609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(279), 1,
      sym_comment,
    ACTIONS(1724), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12625] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1705), 1,
      anon_sym_primarykey,
    ACTIONS(1726), 1,
      anon_sym_LBRACE,
    STATE(280), 1,
      sym_comment,
    STATE(686), 1,
      sym_primary_key_spec,
  [12647] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_raises_expr_repeat1,
  [12669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(282), 1,
      sym_comment,
    ACTIONS(1730), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12685] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(283), 1,
      sym_comment,
    STATE(738), 1,
      sym_declarator,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12705] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1732), 1,
      anon_sym_COMMA,
    ACTIONS(1735), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(284), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [12723] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1737), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1739), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [12743] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1741), 1,
      anon_sym_LBRACE,
    ACTIONS(1743), 1,
      anon_sym_COLON,
    STATE(286), 1,
      sym_comment,
    ACTIONS(1745), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(287), 1,
      sym_comment,
    ACTIONS(1747), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(288), 1,
      sym_comment,
    ACTIONS(1749), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12795] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(289), 1,
      sym_comment,
    STATE(365), 1,
      sym_scoped_name,
    STATE(560), 1,
      sym_interface_name,
  [12817] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(290), 1,
      sym_comment,
    STATE(365), 1,
      sym_scoped_name,
    STATE(366), 1,
      sym_interface_name,
  [12839] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_raises_expr_repeat1,
  [12861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(292), 1,
      sym_comment,
    ACTIONS(1753), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(293), 1,
      sym_comment,
    ACTIONS(1755), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(294), 1,
      sym_comment,
    ACTIONS(1757), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12909] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(295), 1,
      sym_comment,
    STATE(353), 1,
      sym_interface_name,
    STATE(365), 1,
      sym_scoped_name,
  [12931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_comment,
    ACTIONS(1759), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12947] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1761), 1,
      anon_sym_RPAREN,
    ACTIONS(1763), 1,
      anon_sym_L,
    STATE(297), 1,
      sym_comment,
    STATE(371), 1,
      sym_string_literal,
  [12969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1765), 1,
      anon_sym_COMMA,
    ACTIONS(1768), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(298), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [12987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(299), 1,
      sym_comment,
    ACTIONS(1770), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13003] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
    ACTIONS(1774), 1,
      anon_sym_in,
    STATE(300), 1,
      sym_comment,
    STATE(432), 1,
      sym_init_param_dcl,
    STATE(593), 1,
      sym_init_param_dcls,
  [13025] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
    ACTIONS(1778), 1,
      anon_sym_in,
    STATE(301), 1,
      sym_comment,
    STATE(426), 1,
      sym_factory_param_dcl,
    STATE(599), 1,
      sym_factory_param_dcls,
  [13047] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1774), 1,
      anon_sym_in,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_comment,
    STATE(432), 1,
      sym_init_param_dcl,
    STATE(602), 1,
      sym_init_param_dcls,
  [13069] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1686), 1,
      anon_sym_COMMA,
    ACTIONS(1782), 1,
      anon_sym_LBRACE,
    ACTIONS(1784), 1,
      anon_sym_supports,
    STATE(298), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(303), 1,
      sym_comment,
  [13091] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(304), 1,
      sym_comment,
    STATE(365), 1,
      sym_scoped_name,
    STATE(386), 1,
      sym_interface_name,
  [13113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(305), 1,
      sym_comment,
    ACTIONS(1786), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13129] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    STATE(306), 1,
      sym_comment,
    ACTIONS(1457), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [13147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(307), 1,
      sym_comment,
    ACTIONS(1788), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13163] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(401), 1,
      sym_declarator,
    STATE(394), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [13183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(309), 1,
      sym_comment,
    ACTIONS(1457), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13199] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1737), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_declarators_repeat1,
    STATE(310), 1,
      sym_comment,
    ACTIONS(1790), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [13219] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(267), 1,
      sym_value_name,
    STATE(311), 1,
      sym_comment,
    STATE(312), 1,
      sym_scoped_name,
  [13241] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1792), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13259] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1686), 1,
      anon_sym_COMMA,
    ACTIONS(1794), 1,
      anon_sym_LBRACE,
    ACTIONS(1796), 1,
      anon_sym_supports,
    STATE(263), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(313), 1,
      sym_comment,
  [13281] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1763), 1,
      anon_sym_L,
    STATE(314), 1,
      sym_comment,
    STATE(649), 1,
      sym_string_literal,
  [13303] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1763), 1,
      anon_sym_L,
    STATE(315), 1,
      sym_comment,
    STATE(647), 1,
      sym_string_literal,
  [13325] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      sym_escape_sequence,
    ACTIONS(1800), 1,
      anon_sym_DQUOTE,
    ACTIONS(1802), 1,
      aux_sym_string_literal_token1,
    STATE(316), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_string_literal_repeat1,
  [13347] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1804), 1,
      anon_sym_LBRACE,
    ACTIONS(1806), 1,
      anon_sym_COLON,
    ACTIONS(1808), 1,
      anon_sym_SEMI,
    STATE(317), 1,
      sym_comment,
    STATE(635), 1,
      sym_interface_inheritance_spec,
  [13369] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1720), 1,
      anon_sym_AT,
    ACTIONS(1810), 1,
      aux_sym_comment_token2,
    STATE(278), 1,
      aux_sym_interface_def_repeat1,
    STATE(318), 1,
      sym_comment,
    STATE(467), 1,
      sym_annotation_appl,
  [13391] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1601), 1,
      sym_identifier,
    STATE(319), 1,
      sym_comment,
    STATE(468), 1,
      sym_any_declarator,
    STATE(526), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [13411] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      sym_escape_sequence,
    ACTIONS(1802), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      aux_sym_string_literal_repeat1,
    STATE(320), 1,
      sym_comment,
  [13433] = 6,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1814), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      sym_comment,
    STATE(327), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1710), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [13453] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      sym_escape_sequence,
    ACTIONS(1802), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_string_literal_repeat1,
  [13475] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1705), 1,
      anon_sym_primarykey,
    ACTIONS(1816), 1,
      anon_sym_LBRACE,
    STATE(323), 1,
      sym_comment,
    STATE(746), 1,
      sym_primary_key_spec,
  [13497] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    STATE(324), 1,
      sym_comment,
    STATE(497), 1,
      sym_raises_expr,
    ACTIONS(1818), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [13517] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(325), 1,
      sym_comment,
    STATE(365), 1,
      sym_scoped_name,
    STATE(614), 1,
      sym_interface_name,
  [13539] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1558), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1820), 1,
      sym_identifier,
    STATE(262), 1,
      aux_sym_enumerator_repeat1,
    STATE(326), 1,
      sym_comment,
    STATE(534), 1,
      sym_enum_modifier,
  [13561] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1825), 1,
      anon_sym_SQUOTE,
    ACTIONS(1822), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
    STATE(327), 2,
      sym_comment,
      aux_sym_char_literal_repeat1,
  [13579] = 7,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      sym_escape_sequence,
    ACTIONS(1802), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1827), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      aux_sym_string_literal_repeat1,
    STATE(328), 1,
      sym_comment,
  [13601] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(323), 1,
      sym_scoped_name,
    STATE(329), 1,
      sym_comment,
  [13620] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1829), 1,
      anon_sym_SEMI,
    ACTIONS(1831), 1,
      anon_sym_context,
    STATE(330), 1,
      sym_comment,
    STATE(666), 1,
      sym_context_expr,
  [13639] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1835), 1,
      aux_sym_string_literal_token1,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1833), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE,
  [13656] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(1839), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13675] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_RBRACE,
    ACTIONS(1841), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_enum_dcl_repeat1,
  [13694] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(1845), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [13713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1847), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13728] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1849), 1,
      anon_sym_COMMA,
    ACTIONS(1851), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_any_declarators_repeat1,
  [13747] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1763), 1,
      anon_sym_L,
    STATE(337), 1,
      sym_comment,
    STATE(498), 1,
      sym_string_literal,
  [13766] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1853), 1,
      anon_sym_COMMA,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_context_expr_repeat1,
  [13785] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(339), 1,
      sym_comment,
    STATE(538), 1,
      sym_scoped_name,
  [13804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1857), 1,
      anon_sym_LBRACE,
    STATE(340), 1,
      sym_comment,
    STATE(616), 1,
      sym_value_supports,
  [13823] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1859), 1,
      anon_sym_COMMA,
    ACTIONS(1861), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_parameter_dcls_repeat1,
  [13842] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1849), 1,
      anon_sym_COMMA,
    ACTIONS(1863), 1,
      anon_sym_SEMI,
    STATE(342), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_any_declarators_repeat1,
  [13861] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1865), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13878] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(344), 1,
      sym_comment,
    STATE(550), 1,
      sym_scoped_name,
  [13897] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(1867), 1,
      anon_sym_SEMI,
    STATE(345), 1,
      sym_comment,
    STATE(708), 1,
      sym_raises_expr,
  [13916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1869), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13933] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(280), 1,
      sym_scoped_name,
    STATE(347), 1,
      sym_comment,
  [13952] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(1871), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1873), 1,
      anon_sym_COMMA,
    ACTIONS(1876), 1,
      anon_sym_RBRACE,
    STATE(349), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [13988] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1878), 1,
      anon_sym_COMMA,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      sym_comment,
    STATE(391), 1,
      aux_sym_init_param_dcls_repeat1,
  [14007] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(1882), 1,
      anon_sym_SEMI,
    STATE(351), 1,
      sym_comment,
    STATE(712), 1,
      sym_raises_expr,
  [14026] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_COMMA,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_factory_param_dcls_repeat1,
  [14045] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1890), 1,
      anon_sym_LBRACE,
    STATE(353), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14064] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(1892), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      sym_comment,
    STATE(715), 1,
      sym_raises_expr,
  [14083] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(186), 1,
      sym_simple_declarator,
    STATE(355), 1,
      sym_comment,
    STATE(719), 1,
      sym_attr_declarator,
  [14102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1896), 1,
      anon_sym_SEMI,
    ACTIONS(1898), 1,
      sym_identifier,
    STATE(356), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [14119] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1901), 1,
      anon_sym_SEMI,
    ACTIONS(1903), 1,
      sym_identifier,
    STATE(357), 1,
      sym_comment,
    STATE(409), 1,
      aux_sym_bitfield_repeat1,
  [14138] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(256), 1,
      sym_scoped_name,
    STATE(358), 1,
      sym_comment,
  [14157] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1905), 1,
      anon_sym_LBRACE,
    ACTIONS(1907), 1,
      anon_sym_COLON,
    STATE(359), 1,
      sym_comment,
    STATE(639), 1,
      sym_connector_inherit_spec,
  [14176] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1909), 1,
      anon_sym_SEMI,
    ACTIONS(1911), 1,
      anon_sym_default,
    STATE(360), 1,
      sym_comment,
    STATE(611), 1,
      sym_default,
  [14195] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_supports,
    ACTIONS(1913), 1,
      anon_sym_LBRACE,
    STATE(361), 1,
      sym_comment,
    STATE(646), 1,
      sym_supported_interface_spec,
  [14214] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1915), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1917), 1,
      anon_sym_COMMA,
    ACTIONS(1920), 1,
      anon_sym_RPAREN,
    STATE(363), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [14250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(291), 1,
      sym_scoped_name,
    STATE(364), 1,
      sym_comment,
  [14269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1922), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [14286] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1915), 1,
      anon_sym_LBRACE,
    STATE(366), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14305] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1924), 1,
      anon_sym_GT,
    ACTIONS(1926), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_actual_parameters_repeat1,
  [14324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1928), 1,
      anon_sym_GT,
    ACTIONS(1930), 1,
      anon_sym_COMMA,
    STATE(368), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [14341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_GT,
    ACTIONS(1935), 1,
      anon_sym_COMMA,
    STATE(369), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [14358] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(346), 1,
      sym_scoped_name,
    STATE(370), 1,
      sym_comment,
  [14377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1853), 1,
      anon_sym_COMMA,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      aux_sym_context_expr_repeat1,
    STATE(371), 1,
      sym_comment,
  [14396] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_supports,
    ACTIONS(1940), 1,
      anon_sym_manages,
    STATE(372), 1,
      sym_comment,
    STATE(650), 1,
      sym_supported_interface_spec,
  [14415] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1942), 1,
      anon_sym_GT,
    ACTIONS(1944), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_formal_parameters_repeat1,
  [14434] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1841), 1,
      anon_sym_COMMA,
    ACTIONS(1946), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_enum_dcl_repeat1,
  [14453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1768), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [14468] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1948), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [14487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(377), 1,
      sym_comment,
    ACTIONS(1950), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [14502] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1782), 1,
      anon_sym_LBRACE,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      sym_comment,
    STATE(385), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14521] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1952), 1,
      anon_sym_COMMA,
    ACTIONS(1954), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      sym_comment,
    STATE(433), 1,
      aux_sym_annotation_appl_params_repeat1,
  [14540] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_name,
    STATE(380), 1,
      sym_comment,
  [14559] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(254), 1,
      sym_simple_declarator,
    STATE(381), 1,
      sym_comment,
    STATE(572), 1,
      sym_readonly_attr_declarator,
  [14578] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1956), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14597] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(383), 1,
      sym_comment,
    STATE(522), 1,
      sym_scoped_name,
  [14616] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(1958), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym_comment,
    STATE(405), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [14635] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1960), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14654] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1960), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(386), 1,
      sym_comment,
  [14673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1962), 1,
      anon_sym_COMMA,
    ACTIONS(1965), 1,
      anon_sym_RPAREN,
    STATE(387), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [14690] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1967), 1,
      anon_sym_COMMA,
    ACTIONS(1970), 1,
      anon_sym_RPAREN,
    STATE(388), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [14707] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1972), 1,
      anon_sym_SEMI,
    ACTIONS(1974), 1,
      anon_sym_switch,
    ACTIONS(1976), 1,
      sym_identifier,
    STATE(389), 1,
      sym_comment,
  [14726] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(343), 1,
      sym_scoped_name,
    STATE(390), 1,
      sym_comment,
  [14745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1978), 1,
      anon_sym_COMMA,
    ACTIONS(1981), 1,
      anon_sym_RPAREN,
    STATE(391), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [14762] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(392), 1,
      sym_comment,
    STATE(504), 1,
      sym_scoped_name,
  [14781] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1983), 1,
      anon_sym_LT,
    ACTIONS(1985), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_comment,
  [14800] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
      sym_comment,
    ACTIONS(1987), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14815] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(395), 1,
      sym_comment,
    STATE(509), 1,
      sym_scoped_name,
  [14834] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1911), 1,
      anon_sym_default,
    ACTIONS(1989), 1,
      anon_sym_SEMI,
    STATE(396), 1,
      sym_comment,
    STATE(679), 1,
      sym_default,
  [14853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1991), 1,
      anon_sym_COMMA,
    ACTIONS(1994), 1,
      anon_sym_RPAREN,
    STATE(397), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [14870] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(1996), 1,
      anon_sym_LBRACE,
    STATE(398), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14889] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1998), 1,
      anon_sym_COMMA,
    ACTIONS(2001), 1,
      anon_sym_RBRACE,
    STATE(399), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [14906] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(272), 1,
      sym_scoped_name,
    STATE(400), 1,
      sym_comment,
  [14925] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1735), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14940] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2003), 1,
      sym_identifier,
    STATE(402), 1,
      sym_comment,
    STATE(501), 1,
      sym_scoped_name,
  [14959] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2003), 1,
      sym_identifier,
    STATE(403), 1,
      sym_comment,
    STATE(500), 1,
      sym_scoped_name,
  [14978] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    ACTIONS(2005), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_raises_expr_repeat1,
    STATE(404), 1,
      sym_comment,
  [14997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2007), 1,
      anon_sym_COMMA,
    ACTIONS(2010), 1,
      anon_sym_RPAREN,
    STATE(405), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [15014] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(275), 1,
      aux_sym_char_literal_repeat1,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1710), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [15031] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(407), 1,
      sym_comment,
    STATE(565), 1,
      sym_scoped_name,
  [15050] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2003), 1,
      sym_identifier,
    STATE(408), 1,
      sym_comment,
    STATE(492), 1,
      sym_scoped_name,
  [15069] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1903), 1,
      sym_identifier,
    ACTIONS(2012), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_bitfield_repeat1,
    STATE(409), 1,
      sym_comment,
  [15088] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(223), 1,
      sym_scoped_name,
    STATE(410), 1,
      sym_comment,
  [15107] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2014), 1,
      anon_sym_GT,
    ACTIONS(2016), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_formal_parameter_names_repeat1,
  [15126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(412), 1,
      sym_comment,
    ACTIONS(2018), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [15141] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_raises_expr_repeat1,
    STATE(413), 1,
      sym_comment,
  [15160] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2016), 1,
      anon_sym_COMMA,
    ACTIONS(2022), 1,
      anon_sym_GT,
    STATE(414), 1,
      sym_comment,
    STATE(418), 1,
      aux_sym_formal_parameter_names_repeat1,
  [15179] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(2024), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(415), 1,
      sym_comment,
  [15198] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(2024), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(416), 1,
      sym_comment,
  [15217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2026), 1,
      anon_sym_COMMA,
    ACTIONS(2029), 1,
      anon_sym_SEMI,
    STATE(417), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [15234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2031), 1,
      anon_sym_GT,
    ACTIONS(2033), 1,
      anon_sym_COMMA,
    STATE(418), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [15251] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1195), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [15266] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2003), 1,
      sym_identifier,
    STATE(420), 1,
      sym_comment,
    STATE(491), 1,
      sym_scoped_name,
  [15285] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(321), 1,
      aux_sym_char_literal_repeat1,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1710), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [15302] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(422), 1,
      sym_comment,
    ACTIONS(2036), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      aux_sym_char_literal_token1,
  [15317] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    ACTIONS(1871), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(423), 1,
      sym_comment,
  [15336] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1716), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [15353] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(2038), 1,
      anon_sym_SEMI,
    STATE(425), 1,
      sym_comment,
    STATE(671), 1,
      sym_raises_expr,
  [15372] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_COMMA,
    ACTIONS(2040), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(426), 1,
      sym_comment,
  [15391] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(2042), 1,
      anon_sym_SEMI,
    STATE(427), 1,
      sym_comment,
    STATE(665), 1,
      sym_raises_expr,
  [15410] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1841), 1,
      anon_sym_COMMA,
    ACTIONS(2044), 1,
      anon_sym_RBRACE,
    STATE(399), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(428), 1,
      sym_comment,
  [15429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(429), 1,
      sym_comment,
    ACTIONS(1197), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [15444] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(315), 1,
      sym_scoped_name,
    STATE(430), 1,
      sym_comment,
  [15463] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(314), 1,
      sym_scoped_name,
    STATE(431), 1,
      sym_comment,
  [15482] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1878), 1,
      anon_sym_COMMA,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(432), 1,
      sym_comment,
  [15501] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1952), 1,
      anon_sym_COMMA,
    ACTIONS(2048), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(433), 1,
      sym_comment,
  [15520] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_comment,
    ACTIONS(1155), 2,
      anon_sym_AT,
      sym_identifier,
  [15537] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1944), 1,
      anon_sym_COMMA,
    ACTIONS(2050), 1,
      anon_sym_GT,
    STATE(368), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(435), 1,
      sym_comment,
  [15556] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1653), 1,
      anon_sym_raises,
    ACTIONS(2052), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      sym_comment,
    STATE(660), 1,
      sym_raises_expr,
  [15575] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2054), 1,
      sym_identifier,
    STATE(437), 1,
      sym_comment,
    STATE(488), 1,
      sym_scoped_name,
  [15594] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1926), 1,
      anon_sym_COMMA,
    ACTIONS(2056), 1,
      anon_sym_GT,
    STATE(369), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(438), 1,
      sym_comment,
  [15613] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1804), 1,
      anon_sym_LBRACE,
    ACTIONS(1806), 1,
      anon_sym_COLON,
    STATE(439), 1,
      sym_comment,
    STATE(635), 1,
      sym_interface_inheritance_spec,
  [15632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2058), 1,
      anon_sym_COMMA,
    ACTIONS(2061), 1,
      anon_sym_LBRACE,
    STATE(440), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [15649] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1859), 1,
      anon_sym_COMMA,
    ACTIONS(2063), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_parameter_dcls_repeat1,
    STATE(441), 1,
      sym_comment,
  [15668] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
    ACTIONS(1837), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(442), 1,
      sym_comment,
  [15687] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1831), 1,
      anon_sym_context,
    ACTIONS(2065), 1,
      anon_sym_SEMI,
    STATE(443), 1,
      sym_comment,
    STATE(666), 1,
      sym_context_expr,
  [15706] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1831), 1,
      anon_sym_context,
    ACTIONS(2067), 1,
      anon_sym_SEMI,
    STATE(444), 1,
      sym_comment,
    STATE(666), 1,
      sym_context_expr,
  [15725] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1841), 1,
      anon_sym_COMMA,
    ACTIONS(1946), 1,
      anon_sym_RBRACE,
    STATE(399), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(445), 1,
      sym_comment,
  [15744] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1498), 1,
      anon_sym_setraises,
    ACTIONS(2069), 1,
      anon_sym_SEMI,
    STATE(446), 1,
      sym_comment,
    STATE(644), 1,
      sym_set_excep_expr,
  [15763] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(2071), 1,
      anon_sym_SEMI,
    STATE(447), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [15782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2073), 1,
      anon_sym_COMMA,
    ACTIONS(2076), 1,
      anon_sym_SEMI,
    STATE(448), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [15799] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2078), 1,
      anon_sym_interface,
    ACTIONS(2080), 1,
      anon_sym_valuetype,
    ACTIONS(2082), 1,
      anon_sym_eventtype,
    STATE(449), 1,
      sym_comment,
  [15818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(450), 1,
      sym_comment,
    ACTIONS(1457), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(451), 1,
      sym_comment,
    ACTIONS(2084), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(452), 1,
      sym_comment,
    ACTIONS(2086), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2088), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_comment,
  [15879] = 5,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2090), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(2092), 1,
      sym_preproc_arg,
    STATE(454), 1,
      sym_comment,
  [15895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_AT,
      sym_identifier,
  [15909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(456), 1,
      sym_comment,
    ACTIONS(2094), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2096), 1,
      sym_identifier,
    STATE(457), 1,
      sym_comment,
    STATE(540), 1,
      sym_annotation_appl_param,
  [15939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(458), 1,
      sym_comment,
    ACTIONS(2098), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15953] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2100), 1,
      anon_sym_valuetype,
    ACTIONS(2102), 1,
      anon_sym_eventtype,
    STATE(459), 1,
      sym_comment,
  [15969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(460), 1,
      sym_comment,
    ACTIONS(2104), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15983] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_AT,
      sym_identifier,
  [15997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(462), 1,
      sym_comment,
    STATE(673), 1,
      sym_simple_declarator,
  [16013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(463), 1,
      sym_comment,
    ACTIONS(2106), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(464), 1,
      sym_comment,
    ACTIONS(2108), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16041] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(465), 1,
      sym_comment,
    ACTIONS(1211), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16055] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_comment,
    ACTIONS(2110), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16069] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    STATE(467), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(468), 1,
      sym_comment,
    ACTIONS(2029), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(469), 1,
      sym_comment,
    ACTIONS(2031), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2112), 1,
      anon_sym_SEMI,
    ACTIONS(2114), 1,
      anon_sym_default,
    STATE(470), 1,
      sym_comment,
  [16127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_comment,
    ACTIONS(2116), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(472), 1,
      sym_comment,
    ACTIONS(2118), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2120), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(474), 1,
      sym_comment,
    ACTIONS(2122), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(475), 1,
      sym_comment,
    ACTIONS(2124), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2126), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(477), 1,
      sym_comment,
    ACTIONS(2128), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(478), 1,
      sym_comment,
    ACTIONS(2130), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(479), 1,
      sym_comment,
    ACTIONS(2010), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(480), 1,
      sym_comment,
    ACTIONS(2132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(481), 1,
      sym_comment,
    ACTIONS(2134), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_comment,
    ACTIONS(2136), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16295] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2138), 1,
      anon_sym_LBRACE,
    ACTIONS(2140), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_comment,
  [16311] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(484), 1,
      sym_comment,
    ACTIONS(2142), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16325] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2144), 1,
      sym_identifier,
    STATE(485), 1,
      sym_comment,
    STATE(736), 1,
      sym_formal_parameter_names,
  [16341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2146), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_comment,
    ACTIONS(2148), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16369] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2150), 1,
      anon_sym_LT,
    STATE(488), 1,
      sym_comment,
  [16385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(489), 1,
      sym_comment,
    ACTIONS(1994), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(490), 1,
      sym_comment,
    ACTIONS(2152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2154), 1,
      sym_identifier,
    STATE(491), 1,
      sym_comment,
  [16429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2156), 1,
      sym_identifier,
    STATE(492), 1,
      sym_comment,
  [16445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_comment,
    ACTIONS(1981), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(494), 1,
      sym_comment,
    ACTIONS(2158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(495), 1,
      sym_comment,
    ACTIONS(2160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(1970), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_comment,
    ACTIONS(2162), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(498), 1,
      sym_comment,
    ACTIONS(1965), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16529] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2164), 1,
      sym_identifier,
    STATE(499), 1,
      sym_comment,
  [16545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2166), 1,
      sym_identifier,
    STATE(500), 1,
      sym_comment,
  [16561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2168), 1,
      sym_identifier,
    STATE(501), 1,
      sym_comment,
  [16577] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_in,
    STATE(479), 1,
      sym_in_param_dcl,
    STATE(502), 1,
      sym_comment,
  [16593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_comment,
    ACTIONS(2170), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16607] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2172), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_comment,
  [16623] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(480), 1,
      sym_simple_declarator,
    STATE(505), 1,
      sym_comment,
  [16639] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2174), 1,
      sym_identifier,
    STATE(506), 1,
      sym_comment,
  [16655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_comment,
    ACTIONS(2176), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16669] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2178), 1,
      anon_sym_SEMI,
    STATE(508), 1,
      sym_comment,
  [16685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2180), 1,
      anon_sym_LT,
    STATE(509), 1,
      sym_comment,
  [16701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2182), 1,
      anon_sym_LBRACE,
    ACTIONS(2184), 1,
      anon_sym_SEMI,
    STATE(510), 1,
      sym_comment,
  [16717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_comment,
    ACTIONS(2186), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16731] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1778), 1,
      anon_sym_in,
    STATE(489), 1,
      sym_factory_param_dcl,
    STATE(512), 1,
      sym_comment,
  [16747] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(490), 1,
      sym_simple_declarator,
    STATE(513), 1,
      sym_comment,
  [16763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(2188), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16777] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1774), 1,
      anon_sym_in,
    STATE(493), 1,
      sym_init_param_dcl,
    STATE(515), 1,
      sym_comment,
  [16793] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2190), 1,
      anon_sym_GT,
    ACTIONS(2192), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      sym_comment,
  [16809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(517), 1,
      sym_comment,
    ACTIONS(2194), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(494), 1,
      sym_simple_declarator,
    STATE(518), 1,
      sym_comment,
  [16839] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(519), 1,
      sym_comment,
    ACTIONS(2196), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(495), 1,
      sym_simple_declarator,
    STATE(520), 1,
      sym_comment,
  [16869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(521), 1,
      sym_comment,
    ACTIONS(1876), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2198), 1,
      anon_sym_LBRACE,
    STATE(522), 1,
      sym_comment,
  [16899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_comment,
    ACTIONS(2200), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(524), 1,
      sym_comment,
    ACTIONS(2202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(525), 1,
      sym_comment,
    ACTIONS(1818), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(526), 1,
      sym_comment,
    ACTIONS(2204), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(527), 1,
      sym_comment,
    ACTIONS(2206), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(528), 1,
      sym_comment,
    ACTIONS(2208), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16983] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(529), 1,
      sym_comment,
    ACTIONS(2076), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(530), 1,
      sym_comment,
    ACTIONS(2210), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2212), 1,
      anon_sym_GT,
    ACTIONS(2214), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      sym_comment,
  [17027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(532), 1,
      sym_comment,
    ACTIONS(2216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(533), 1,
      sym_comment,
    ACTIONS(2218), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17055] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(534), 1,
      sym_comment,
    ACTIONS(2220), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [17069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(535), 1,
      sym_comment,
    ACTIONS(2222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(536), 1,
      sym_comment,
    ACTIONS(2224), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [17097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(537), 1,
      sym_comment,
    ACTIONS(2226), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2228), 1,
      anon_sym_LBRACE,
    STATE(538), 1,
      sym_comment,
  [17127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(539), 1,
      sym_comment,
    ACTIONS(2230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(540), 1,
      sym_comment,
    ACTIONS(1920), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(541), 1,
      sym_comment,
    ACTIONS(2232), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(542), 1,
      sym_comment,
    ACTIONS(2234), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(543), 1,
      sym_comment,
    ACTIONS(1928), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [17197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(544), 1,
      sym_comment,
    ACTIONS(2236), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17211] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2238), 1,
      anon_sym_LBRACE,
    ACTIONS(2240), 1,
      anon_sym_COLON,
    STATE(545), 1,
      sym_comment,
  [17227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_comment,
    ACTIONS(1933), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [17241] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(524), 1,
      sym_simple_declarator,
    STATE(547), 1,
      sym_comment,
  [17257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(548), 1,
      sym_comment,
    ACTIONS(2242), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [17271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_comment,
    ACTIONS(2244), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2246), 1,
      anon_sym_LBRACE,
    STATE(550), 1,
      sym_comment,
  [17301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_comment,
    ACTIONS(2248), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(552), 1,
      sym_comment,
    ACTIONS(2250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(553), 1,
      sym_comment,
    ACTIONS(2252), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2254), 1,
      anon_sym_LT,
    ACTIONS(2256), 1,
      sym_identifier,
    STATE(554), 1,
      sym_comment,
  [17359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
    STATE(555), 1,
      sym_comment,
    STATE(643), 1,
      sym_exception_list,
  [17375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(556), 1,
      sym_comment,
    ACTIONS(2001), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(557), 1,
      sym_comment,
    ACTIONS(2260), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17403] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
    STATE(528), 1,
      sym_exception_list,
    STATE(558), 1,
      sym_comment,
  [17419] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(529), 1,
      sym_simple_declarator,
    STATE(559), 1,
      sym_comment,
  [17435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(560), 1,
      sym_comment,
    ACTIONS(2061), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [17449] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2262), 1,
      anon_sym_GT,
    ACTIONS(2264), 1,
      anon_sym_COMMA,
    STATE(561), 1,
      sym_comment,
  [17465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2266), 1,
      sym_identifier,
    STATE(562), 1,
      sym_comment,
  [17481] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2268), 1,
      anon_sym_DQUOTE,
    ACTIONS(2270), 1,
      anon_sym_SQUOTE,
    STATE(563), 1,
      sym_comment,
  [17497] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(470), 1,
      sym_simple_declarator,
    STATE(564), 1,
      sym_comment,
  [17513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2272), 1,
      anon_sym_LBRACE,
    STATE(565), 1,
      sym_comment,
  [17529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2274), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      sym_comment,
  [17542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2276), 1,
      anon_sym_COLON,
    STATE(567), 1,
      sym_comment,
  [17555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2278), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_comment,
  [17568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1954), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      sym_comment,
  [17581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2280), 1,
      anon_sym_GT,
    STATE(570), 1,
      sym_comment,
  [17594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2282), 1,
      anon_sym_SEMI,
    STATE(571), 1,
      sym_comment,
  [17607] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2284), 1,
      anon_sym_SEMI,
    STATE(572), 1,
      sym_comment,
  [17620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2286), 1,
      sym_identifier,
    STATE(573), 1,
      sym_comment,
  [17633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2288), 1,
      anon_sym_GT,
    STATE(574), 1,
      sym_comment,
  [17646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2290), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      sym_comment,
  [17659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2292), 1,
      anon_sym_LBRACE,
    STATE(576), 1,
      sym_comment,
  [17672] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2071), 1,
      anon_sym_SEMI,
    STATE(577), 1,
      sym_comment,
  [17685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2256), 1,
      sym_identifier,
    STATE(578), 1,
      sym_comment,
  [17698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2069), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_comment,
  [17711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2294), 1,
      anon_sym_GT,
    STATE(580), 1,
      sym_comment,
  [17724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2296), 1,
      sym_identifier,
    STATE(581), 1,
      sym_comment,
  [17737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2298), 1,
      anon_sym_SEMI,
    STATE(582), 1,
      sym_comment,
  [17750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2300), 1,
      sym_identifier,
    STATE(583), 1,
      sym_comment,
  [17763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2302), 1,
      anon_sym_LT,
    STATE(584), 1,
      sym_comment,
  [17776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2304), 1,
      anon_sym_SEMI,
    STATE(585), 1,
      sym_comment,
  [17789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2306), 1,
      anon_sym_GT,
    STATE(586), 1,
      sym_comment,
  [17802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2308), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym_comment,
  [17815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2310), 1,
      anon_sym_LBRACE,
    STATE(588), 1,
      sym_comment,
  [17828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2312), 1,
      anon_sym_LBRACE,
    STATE(589), 1,
      sym_comment,
  [17841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2314), 1,
      anon_sym_SEMI,
    STATE(590), 1,
      sym_comment,
  [17854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2316), 1,
      anon_sym_SEMI,
    STATE(591), 1,
      sym_comment,
  [17867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2318), 1,
      anon_sym_LBRACE,
    STATE(592), 1,
      sym_comment,
  [17880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2320), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_comment,
  [17893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2322), 1,
      anon_sym_SEMI,
    STATE(594), 1,
      sym_comment,
  [17906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2324), 1,
      anon_sym_SEMI,
    STATE(595), 1,
      sym_comment,
  [17919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2326), 1,
      anon_sym_SEMI,
    STATE(596), 1,
      sym_comment,
  [17932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2328), 1,
      anon_sym_SEMI,
    STATE(597), 1,
      sym_comment,
  [17945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2330), 1,
      anon_sym_SEMI,
    STATE(598), 1,
      sym_comment,
  [17958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2332), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      sym_comment,
  [17971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2334), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      sym_comment,
  [17984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2336), 1,
      sym_identifier,
    STATE(601), 1,
      sym_comment,
  [17997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2338), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_comment,
  [18010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2340), 1,
      sym_identifier,
    STATE(603), 1,
      sym_comment,
  [18023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2342), 1,
      anon_sym_SEMI,
    STATE(604), 1,
      sym_comment,
  [18036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2344), 1,
      anon_sym_RBRACE,
    STATE(605), 1,
      sym_comment,
  [18049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2346), 1,
      anon_sym_SEMI,
    STATE(606), 1,
      sym_comment,
  [18062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2348), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [18075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2350), 1,
      anon_sym_SEMI,
    STATE(608), 1,
      sym_comment,
  [18088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2352), 1,
      anon_sym_LBRACE,
    STATE(609), 1,
      sym_comment,
  [18101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2354), 1,
      sym_identifier,
    STATE(610), 1,
      sym_comment,
  [18114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2356), 1,
      anon_sym_SEMI,
    STATE(611), 1,
      sym_comment,
  [18127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2358), 1,
      anon_sym_SEMI,
    STATE(612), 1,
      sym_comment,
  [18140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2360), 1,
      anon_sym_SEMI,
    STATE(613), 1,
      sym_comment,
  [18153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2362), 1,
      anon_sym_LBRACE,
    STATE(614), 1,
      sym_comment,
  [18166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2364), 1,
      anon_sym_SEMI,
    STATE(615), 1,
      sym_comment,
  [18179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1794), 1,
      anon_sym_LBRACE,
    STATE(616), 1,
      sym_comment,
  [18192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1453), 1,
      anon_sym_EQ,
    STATE(617), 1,
      sym_comment,
  [18205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2366), 1,
      anon_sym_GT,
    STATE(618), 1,
      sym_comment,
  [18218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2368), 1,
      anon_sym_SEMI,
    STATE(619), 1,
      sym_comment,
  [18231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2370), 1,
      anon_sym_LBRACE,
    STATE(620), 1,
      sym_comment,
  [18244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2372), 1,
      anon_sym_SEMI,
    STATE(621), 1,
      sym_comment,
  [18257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2374), 1,
      anon_sym_SEMI,
    STATE(622), 1,
      sym_comment,
  [18270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2376), 1,
      anon_sym_SEMI,
    STATE(623), 1,
      sym_comment,
  [18283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2378), 1,
      anon_sym_SEMI,
    STATE(624), 1,
      sym_comment,
  [18296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2380), 1,
      sym_identifier,
    STATE(625), 1,
      sym_comment,
  [18309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(626), 1,
      sym_comment,
  [18322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1829), 1,
      anon_sym_SEMI,
    STATE(627), 1,
      sym_comment,
  [18335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2100), 1,
      anon_sym_valuetype,
    STATE(628), 1,
      sym_comment,
  [18348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2382), 1,
      anon_sym_void,
    STATE(629), 1,
      sym_comment,
  [18361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2384), 1,
      anon_sym_LBRACE,
    STATE(630), 1,
      sym_comment,
  [18374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2386), 1,
      anon_sym_attribute,
    STATE(631), 1,
      sym_comment,
  [18387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2388), 1,
      sym_identifier,
    STATE(632), 1,
      sym_comment,
  [18400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2080), 1,
      anon_sym_valuetype,
    STATE(633), 1,
      sym_comment,
  [18413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2390), 1,
      anon_sym_SEMI,
    STATE(634), 1,
      sym_comment,
  [18426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2392), 1,
      anon_sym_LBRACE,
    STATE(635), 1,
      sym_comment,
  [18439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2394), 1,
      anon_sym_LBRACE,
    STATE(636), 1,
      sym_comment,
  [18452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2396), 1,
      anon_sym_LPAREN,
    STATE(637), 1,
      sym_comment,
  [18465] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1948), 1,
      anon_sym_SEMI,
    STATE(638), 1,
      sym_comment,
  [18478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2398), 1,
      anon_sym_LBRACE,
    STATE(639), 1,
      sym_comment,
  [18491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2400), 1,
      anon_sym_COMMA,
    STATE(640), 1,
      sym_comment,
  [18504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1940), 1,
      anon_sym_manages,
    STATE(641), 1,
      sym_comment,
  [18517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2402), 1,
      anon_sym_COMMA,
    STATE(642), 1,
      sym_comment,
  [18530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2404), 1,
      anon_sym_SEMI,
    STATE(643), 1,
      sym_comment,
  [18543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2406), 1,
      anon_sym_SEMI,
    STATE(644), 1,
      sym_comment,
  [18556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1913), 1,
      anon_sym_LBRACE,
    STATE(645), 1,
      sym_comment,
  [18569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2408), 1,
      anon_sym_LBRACE,
    STATE(646), 1,
      sym_comment,
  [18582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2410), 1,
      anon_sym_SEMI,
    STATE(647), 1,
      sym_comment,
  [18595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2412), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      sym_comment,
  [18608] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2414), 1,
      anon_sym_SEMI,
    STATE(649), 1,
      sym_comment,
  [18621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2416), 1,
      anon_sym_manages,
    STATE(650), 1,
      sym_comment,
  [18634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2418), 1,
      anon_sym_SEMI,
    STATE(651), 1,
      sym_comment,
  [18647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2420), 1,
      anon_sym_SEMI,
    STATE(652), 1,
      sym_comment,
  [18660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2422), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_comment,
  [18673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2424), 1,
      anon_sym_RBRACE,
    STATE(654), 1,
      sym_comment,
  [18686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2426), 1,
      anon_sym_EQ,
    STATE(655), 1,
      sym_comment,
  [18699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2428), 1,
      anon_sym_LPAREN,
    STATE(656), 1,
      sym_comment,
  [18712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1857), 1,
      anon_sym_LBRACE,
    STATE(657), 1,
      sym_comment,
  [18725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2430), 1,
      sym_identifier,
    STATE(658), 1,
      sym_comment,
  [18738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1589), 1,
      anon_sym_LBRACE,
    STATE(659), 1,
      sym_comment,
  [18751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1867), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_comment,
  [18764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2432), 1,
      anon_sym_SEMI,
    STATE(661), 1,
      sym_comment,
  [18777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2434), 1,
      sym_identifier,
    STATE(662), 1,
      sym_comment,
  [18790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2436), 1,
      anon_sym_LPAREN,
    STATE(663), 1,
      sym_comment,
  [18803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2438), 1,
      anon_sym_SEMI,
    STATE(664), 1,
      sym_comment,
  [18816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1882), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_comment,
  [18829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2440), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_comment,
  [18842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2442), 1,
      anon_sym_LBRACE,
    STATE(667), 1,
      sym_comment,
  [18855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2444), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      sym_comment,
  [18868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2446), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      sym_comment,
  [18881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2448), 1,
      sym_identifier,
    STATE(670), 1,
      sym_comment,
  [18894] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_comment,
  [18907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2450), 1,
      sym_identifier,
    STATE(672), 1,
      sym_comment,
  [18920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2452), 1,
      anon_sym_SEMI,
    STATE(673), 1,
      sym_comment,
  [18933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2454), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_comment,
  [18946] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2456), 1,
      sym_identifier,
    STATE(675), 1,
      sym_comment,
  [18959] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2458), 1,
      aux_sym_comment_token3,
    STATE(676), 1,
      sym_comment,
  [18972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2460), 1,
      anon_sym_GT,
    STATE(677), 1,
      sym_comment,
  [18985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2462), 1,
      anon_sym_GT,
    STATE(678), 1,
      sym_comment,
  [18998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2464), 1,
      anon_sym_SEMI,
    STATE(679), 1,
      sym_comment,
  [19011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2466), 1,
      anon_sym_LPAREN,
    STATE(680), 1,
      sym_comment,
  [19024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2468), 1,
      anon_sym_SEMI,
    STATE(681), 1,
      sym_comment,
  [19037] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2470), 1,
      anon_sym_SEMI,
    STATE(682), 1,
      sym_comment,
  [19050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2178), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_comment,
  [19063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2472), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_comment,
  [19076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2266), 1,
      sym_identifier,
    STATE(685), 1,
      sym_comment,
  [19089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1703), 1,
      anon_sym_LBRACE,
    STATE(686), 1,
      sym_comment,
  [19102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2474), 1,
      anon_sym_COLON,
    STATE(687), 1,
      sym_comment,
  [19115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2476), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_comment,
  [19128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2478), 1,
      anon_sym_LT,
    STATE(689), 1,
      sym_comment,
  [19141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2480), 1,
      anon_sym_LT,
    STATE(690), 1,
      sym_comment,
  [19154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2482), 1,
      sym_identifier,
    STATE(691), 1,
      sym_comment,
  [19167] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2484), 1,
      anon_sym_GT,
    STATE(692), 1,
      sym_comment,
  [19180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2486), 1,
      sym_identifier,
    STATE(693), 1,
      sym_comment,
  [19193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2488), 1,
      sym_identifier,
    STATE(694), 1,
      sym_comment,
  [19206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2490), 1,
      anon_sym_SEMI,
    STATE(695), 1,
      sym_comment,
  [19219] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2492), 1,
      sym_identifier,
    STATE(696), 1,
      sym_comment,
  [19232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2494), 1,
      sym_identifier,
    STATE(697), 1,
      sym_comment,
  [19245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2496), 1,
      anon_sym_SEMI,
    STATE(698), 1,
      sym_comment,
  [19258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2498), 1,
      anon_sym_SEMI,
    STATE(699), 1,
      sym_comment,
  [19271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2500), 1,
      anon_sym_SEMI,
    STATE(700), 1,
      sym_comment,
  [19284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2254), 1,
      anon_sym_LT,
    STATE(701), 1,
      sym_comment,
  [19297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2502), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_comment,
  [19310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2504), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_comment,
  [19323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2506), 1,
      sym_identifier,
    STATE(704), 1,
      sym_comment,
  [19336] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2508), 1,
      anon_sym_SEMI,
    STATE(705), 1,
      sym_comment,
  [19349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2164), 1,
      sym_identifier,
    STATE(706), 1,
      sym_comment,
  [19362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2510), 1,
      sym_identifier,
    STATE(707), 1,
      sym_comment,
  [19375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2512), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      sym_comment,
  [19388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2514), 1,
      anon_sym_SEMI,
    STATE(709), 1,
      sym_comment,
  [19401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2516), 1,
      anon_sym_LBRACE,
    STATE(710), 1,
      sym_comment,
  [19414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2518), 1,
      anon_sym_SEMI,
    STATE(711), 1,
      sym_comment,
  [19427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2520), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_comment,
  [19440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2522), 1,
      anon_sym_SEMI,
    STATE(713), 1,
      sym_comment,
  [19453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2524), 1,
      anon_sym_LPAREN,
    STATE(714), 1,
      sym_comment,
  [19466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2526), 1,
      anon_sym_SEMI,
    STATE(715), 1,
      sym_comment,
  [19479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2528), 1,
      anon_sym_LPAREN,
    STATE(716), 1,
      sym_comment,
  [19492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2088), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      sym_comment,
  [19505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2530), 1,
      anon_sym_LPAREN,
    STATE(718), 1,
      sym_comment,
  [19518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2532), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [19531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2534), 1,
      sym_identifier,
    STATE(720), 1,
      sym_comment,
  [19544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2536), 1,
      anon_sym_LBRACE,
    STATE(721), 1,
      sym_comment,
  [19557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2268), 1,
      anon_sym_DQUOTE,
    STATE(722), 1,
      sym_comment,
  [19570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2538), 1,
      anon_sym_LBRACE,
    STATE(723), 1,
      sym_comment,
  [19583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2540), 1,
      anon_sym_SEMI,
    STATE(724), 1,
      sym_comment,
  [19596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2542), 1,
      anon_sym_SEMI,
    STATE(725), 1,
      sym_comment,
  [19609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2544), 1,
      anon_sym_SEMI,
    STATE(726), 1,
      sym_comment,
  [19622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      sym_identifier,
    STATE(727), 1,
      sym_comment,
  [19635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2548), 1,
      sym_identifier,
    STATE(728), 1,
      sym_comment,
  [19648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2550), 1,
      anon_sym_RBRACE,
    STATE(729), 1,
      sym_comment,
  [19661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2552), 1,
      sym_identifier,
    STATE(730), 1,
      sym_comment,
  [19674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2554), 1,
      anon_sym_SEMI,
    STATE(731), 1,
      sym_comment,
  [19687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2556), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_comment,
  [19700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2558), 1,
      anon_sym_LBRACE,
    STATE(733), 1,
      sym_comment,
  [19713] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2560), 1,
      aux_sym_preproc_call_token1,
    STATE(734), 1,
      sym_comment,
  [19726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1722), 1,
      anon_sym_SLASH,
    STATE(735), 1,
      sym_comment,
  [19739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2562), 1,
      anon_sym_GT,
    STATE(736), 1,
      sym_comment,
  [19752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2564), 1,
      sym_identifier,
    STATE(737), 1,
      sym_comment,
  [19765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2566), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_comment,
  [19778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2174), 1,
      sym_identifier,
    STATE(739), 1,
      sym_comment,
  [19791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2568), 1,
      anon_sym_SEMI,
    STATE(740), 1,
      sym_comment,
  [19804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2570), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_comment,
  [19817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2572), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      sym_comment,
  [19830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2574), 1,
      sym_identifier,
    STATE(743), 1,
      sym_comment,
  [19843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2576), 1,
      anon_sym_LBRACE,
    STATE(744), 1,
      sym_comment,
  [19856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2578), 1,
      sym_identifier,
    STATE(745), 1,
      sym_comment,
  [19869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1726), 1,
      anon_sym_LBRACE,
    STATE(746), 1,
      sym_comment,
  [19882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2580), 1,
      anon_sym_SEMI,
    STATE(747), 1,
      sym_comment,
  [19895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2582), 1,
      anon_sym_SEMI,
    STATE(748), 1,
      sym_comment,
  [19908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2584), 1,
      anon_sym_SEMI,
    STATE(749), 1,
      sym_comment,
  [19921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2586), 1,
      anon_sym_SEMI,
    STATE(750), 1,
      sym_comment,
  [19934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2588), 1,
      anon_sym_LBRACE,
    STATE(751), 1,
      sym_comment,
  [19947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2590), 1,
      anon_sym_SEMI,
    STATE(752), 1,
      sym_comment,
  [19960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2592), 1,
      anon_sym_LBRACE,
    STATE(753), 1,
      sym_comment,
  [19973] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2594), 1,
      anon_sym_LBRACE,
    STATE(754), 1,
      sym_comment,
  [19986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2596), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_comment,
  [19999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2598), 1,
      anon_sym_RBRACK,
    STATE(756), 1,
      sym_comment,
  [20012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2600), 1,
      anon_sym_enum,
    STATE(757), 1,
      sym_comment,
  [20025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2602), 1,
      anon_sym_SEMI,
    STATE(758), 1,
      sym_comment,
  [20038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2604), 1,
      anon_sym_LBRACE,
    STATE(759), 1,
      sym_comment,
  [20051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2606), 1,
      sym_identifier,
    STATE(760), 1,
      sym_comment,
  [20064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2608), 1,
      anon_sym_SEMI,
    STATE(761), 1,
      sym_comment,
  [20077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2610), 1,
      sym_identifier,
    STATE(762), 1,
      sym_comment,
  [20090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2612), 1,
      anon_sym_SEMI,
    STATE(763), 1,
      sym_comment,
  [20103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2614), 1,
      anon_sym_LBRACE,
    STATE(764), 1,
      sym_comment,
  [20116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2616), 1,
      anon_sym_SEMI,
    STATE(765), 1,
      sym_comment,
  [20129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2618), 1,
      sym_identifier,
    STATE(766), 1,
      sym_comment,
  [20142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2602), 1,
      anon_sym_SEMI,
    STATE(767), 1,
      sym_comment,
  [20155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2620), 1,
      ts_builtin_sym_end,
    STATE(768), 1,
      sym_comment,
  [20168] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2622), 1,
      aux_sym_predefine_token1,
    STATE(769), 1,
      sym_comment,
  [20181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2624), 1,
      sym_identifier,
    STATE(770), 1,
      sym_comment,
  [20194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2626), 1,
      sym_identifier,
    STATE(771), 1,
      sym_comment,
  [20207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2628), 1,
      sym_identifier,
    STATE(772), 1,
      sym_comment,
  [20220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2630), 1,
      anon_sym_SEMI,
    STATE(773), 1,
      sym_comment,
  [20233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2632), 1,
      sym_identifier,
    STATE(774), 1,
      sym_comment,
  [20246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2634), 1,
      sym_identifier,
    STATE(775), 1,
      sym_comment,
  [20259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2636), 1,
      anon_sym_enum,
    STATE(776), 1,
      sym_comment,
  [20272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2638), 1,
      anon_sym_RPAREN,
    STATE(777), 1,
      sym_comment,
  [20285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2640), 1,
      sym_identifier,
    STATE(778), 1,
      sym_comment,
  [20298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2642), 1,
      sym_identifier,
    STATE(779), 1,
      sym_comment,
  [20311] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2644), 1,
      sym_identifier,
    STATE(780), 1,
      sym_comment,
  [20324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2646), 1,
      anon_sym_LBRACE,
    STATE(781), 1,
      sym_comment,
  [20337] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2648), 1,
      sym_identifier,
    STATE(782), 1,
      sym_comment,
  [20350] = 4,
    ACTIONS(1669), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2650), 1,
      aux_sym_predefine_token1,
    STATE(783), 1,
      sym_comment,
  [20363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_comment,
  [20376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      anon_sym_SEMI,
    STATE(785), 1,
      sym_comment,
  [20389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2654), 1,
      sym_identifier,
    STATE(786), 1,
      sym_comment,
  [20402] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2656), 1,
      sym_identifier,
    STATE(787), 1,
      sym_comment,
  [20415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2065), 1,
      anon_sym_SEMI,
    STATE(788), 1,
      sym_comment,
  [20428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2658), 1,
      sym_identifier,
    STATE(789), 1,
      sym_comment,
  [20441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2660), 1,
      anon_sym_RPAREN,
    STATE(790), 1,
      sym_comment,
  [20454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2662), 1,
      sym_identifier,
    STATE(791), 1,
      sym_comment,
  [20467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2664), 1,
      sym_identifier,
    STATE(792), 1,
      sym_comment,
  [20480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2666), 1,
      sym_identifier,
    STATE(793), 1,
      sym_comment,
  [20493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2067), 1,
      anon_sym_SEMI,
    STATE(794), 1,
      sym_comment,
  [20506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2668), 1,
      sym_identifier,
    STATE(795), 1,
      sym_comment,
  [20519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2670), 1,
      anon_sym_RPAREN,
    STATE(796), 1,
      sym_comment,
  [20532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2672), 1,
      sym_identifier,
    STATE(797), 1,
      sym_comment,
  [20545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2674), 1,
      sym_identifier,
    STATE(798), 1,
      sym_comment,
  [20558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2676), 1,
      anon_sym_RPAREN,
    STATE(799), 1,
      sym_comment,
  [20571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2678), 1,
      sym_identifier,
    STATE(800), 1,
      sym_comment,
  [20584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2078), 1,
      anon_sym_interface,
    STATE(801), 1,
      sym_comment,
  [20597] = 1,
    ACTIONS(2680), 1,
      ts_builtin_sym_end,
  [20601] = 1,
    ACTIONS(2682), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 148,
  [SMALL_STATE(36)] = 292,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 582,
  [SMALL_STATE(39)] = 727,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1160,
  [SMALL_STATE(43)] = 1305,
  [SMALL_STATE(44)] = 1450,
  [SMALL_STATE(45)] = 1595,
  [SMALL_STATE(46)] = 1740,
  [SMALL_STATE(47)] = 1885,
  [SMALL_STATE(48)] = 2023,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2309,
  [SMALL_STATE(51)] = 2453,
  [SMALL_STATE(52)] = 2583,
  [SMALL_STATE(53)] = 2719,
  [SMALL_STATE(54)] = 2788,
  [SMALL_STATE(55)] = 2857,
  [SMALL_STATE(56)] = 2926,
  [SMALL_STATE(57)] = 2995,
  [SMALL_STATE(58)] = 3122,
  [SMALL_STATE(59)] = 3191,
  [SMALL_STATE(60)] = 3260,
  [SMALL_STATE(61)] = 3329,
  [SMALL_STATE(62)] = 3397,
  [SMALL_STATE(63)] = 3465,
  [SMALL_STATE(64)] = 3533,
  [SMALL_STATE(65)] = 3601,
  [SMALL_STATE(66)] = 3728,
  [SMALL_STATE(67)] = 3855,
  [SMALL_STATE(68)] = 3982,
  [SMALL_STATE(69)] = 4109,
  [SMALL_STATE(70)] = 4236,
  [SMALL_STATE(71)] = 4363,
  [SMALL_STATE(72)] = 4490,
  [SMALL_STATE(73)] = 4617,
  [SMALL_STATE(74)] = 4744,
  [SMALL_STATE(75)] = 4871,
  [SMALL_STATE(76)] = 4937,
  [SMALL_STATE(77)] = 5003,
  [SMALL_STATE(78)] = 5108,
  [SMALL_STATE(79)] = 5213,
  [SMALL_STATE(80)] = 5268,
  [SMALL_STATE(81)] = 5323,
  [SMALL_STATE(82)] = 5375,
  [SMALL_STATE(83)] = 5422,
  [SMALL_STATE(84)] = 5469,
  [SMALL_STATE(85)] = 5518,
  [SMALL_STATE(86)] = 5567,
  [SMALL_STATE(87)] = 5614,
  [SMALL_STATE(88)] = 5661,
  [SMALL_STATE(89)] = 5708,
  [SMALL_STATE(90)] = 5755,
  [SMALL_STATE(91)] = 5802,
  [SMALL_STATE(92)] = 5849,
  [SMALL_STATE(93)] = 5896,
  [SMALL_STATE(94)] = 5943,
  [SMALL_STATE(95)] = 5990,
  [SMALL_STATE(96)] = 6037,
  [SMALL_STATE(97)] = 6084,
  [SMALL_STATE(98)] = 6131,
  [SMALL_STATE(99)] = 6177,
  [SMALL_STATE(100)] = 6223,
  [SMALL_STATE(101)] = 6268,
  [SMALL_STATE(102)] = 6313,
  [SMALL_STATE(103)] = 6358,
  [SMALL_STATE(104)] = 6441,
  [SMALL_STATE(105)] = 6486,
  [SMALL_STATE(106)] = 6575,
  [SMALL_STATE(107)] = 6618,
  [SMALL_STATE(108)] = 6707,
  [SMALL_STATE(109)] = 6750,
  [SMALL_STATE(110)] = 6793,
  [SMALL_STATE(111)] = 6836,
  [SMALL_STATE(112)] = 6925,
  [SMALL_STATE(113)] = 6968,
  [SMALL_STATE(114)] = 7011,
  [SMALL_STATE(115)] = 7054,
  [SMALL_STATE(116)] = 7097,
  [SMALL_STATE(117)] = 7140,
  [SMALL_STATE(118)] = 7183,
  [SMALL_STATE(119)] = 7272,
  [SMALL_STATE(120)] = 7315,
  [SMALL_STATE(121)] = 7358,
  [SMALL_STATE(122)] = 7444,
  [SMALL_STATE(123)] = 7530,
  [SMALL_STATE(124)] = 7616,
  [SMALL_STATE(125)] = 7664,
  [SMALL_STATE(126)] = 7750,
  [SMALL_STATE(127)] = 7798,
  [SMALL_STATE(128)] = 7884,
  [SMALL_STATE(129)] = 7970,
  [SMALL_STATE(130)] = 8018,
  [SMALL_STATE(131)] = 8104,
  [SMALL_STATE(132)] = 8146,
  [SMALL_STATE(133)] = 8194,
  [SMALL_STATE(134)] = 8277,
  [SMALL_STATE(135)] = 8360,
  [SMALL_STATE(136)] = 8443,
  [SMALL_STATE(137)] = 8526,
  [SMALL_STATE(138)] = 8609,
  [SMALL_STATE(139)] = 8692,
  [SMALL_STATE(140)] = 8760,
  [SMALL_STATE(141)] = 8837,
  [SMALL_STATE(142)] = 8911,
  [SMALL_STATE(143)] = 8982,
  [SMALL_STATE(144)] = 9042,
  [SMALL_STATE(145)] = 9110,
  [SMALL_STATE(146)] = 9165,
  [SMALL_STATE(147)] = 9230,
  [SMALL_STATE(148)] = 9287,
  [SMALL_STATE(149)] = 9349,
  [SMALL_STATE(150)] = 9382,
  [SMALL_STATE(151)] = 9432,
  [SMALL_STATE(152)] = 9482,
  [SMALL_STATE(153)] = 9512,
  [SMALL_STATE(154)] = 9560,
  [SMALL_STATE(155)] = 9590,
  [SMALL_STATE(156)] = 9620,
  [SMALL_STATE(157)] = 9670,
  [SMALL_STATE(158)] = 9700,
  [SMALL_STATE(159)] = 9730,
  [SMALL_STATE(160)] = 9764,
  [SMALL_STATE(161)] = 9794,
  [SMALL_STATE(162)] = 9842,
  [SMALL_STATE(163)] = 9872,
  [SMALL_STATE(164)] = 9902,
  [SMALL_STATE(165)] = 9936,
  [SMALL_STATE(166)] = 9966,
  [SMALL_STATE(167)] = 9996,
  [SMALL_STATE(168)] = 10026,
  [SMALL_STATE(169)] = 10056,
  [SMALL_STATE(170)] = 10086,
  [SMALL_STATE(171)] = 10133,
  [SMALL_STATE(172)] = 10182,
  [SMALL_STATE(173)] = 10211,
  [SMALL_STATE(174)] = 10240,
  [SMALL_STATE(175)] = 10269,
  [SMALL_STATE(176)] = 10302,
  [SMALL_STATE(177)] = 10329,
  [SMALL_STATE(178)] = 10356,
  [SMALL_STATE(179)] = 10390,
  [SMALL_STATE(180)] = 10412,
  [SMALL_STATE(181)] = 10450,
  [SMALL_STATE(182)] = 10472,
  [SMALL_STATE(183)] = 10495,
  [SMALL_STATE(184)] = 10518,
  [SMALL_STATE(185)] = 10541,
  [SMALL_STATE(186)] = 10565,
  [SMALL_STATE(187)] = 10599,
  [SMALL_STATE(188)] = 10623,
  [SMALL_STATE(189)] = 10645,
  [SMALL_STATE(190)] = 10667,
  [SMALL_STATE(191)] = 10686,
  [SMALL_STATE(192)] = 10717,
  [SMALL_STATE(193)] = 10738,
  [SMALL_STATE(194)] = 10769,
  [SMALL_STATE(195)] = 10788,
  [SMALL_STATE(196)] = 10807,
  [SMALL_STATE(197)] = 10826,
  [SMALL_STATE(198)] = 10845,
  [SMALL_STATE(199)] = 10864,
  [SMALL_STATE(200)] = 10883,
  [SMALL_STATE(201)] = 10902,
  [SMALL_STATE(202)] = 10921,
  [SMALL_STATE(203)] = 10942,
  [SMALL_STATE(204)] = 10973,
  [SMALL_STATE(205)] = 11001,
  [SMALL_STATE(206)] = 11029,
  [SMALL_STATE(207)] = 11057,
  [SMALL_STATE(208)] = 11075,
  [SMALL_STATE(209)] = 11093,
  [SMALL_STATE(210)] = 11111,
  [SMALL_STATE(211)] = 11139,
  [SMALL_STATE(212)] = 11161,
  [SMALL_STATE(213)] = 11179,
  [SMALL_STATE(214)] = 11207,
  [SMALL_STATE(215)] = 11235,
  [SMALL_STATE(216)] = 11259,
  [SMALL_STATE(217)] = 11285,
  [SMALL_STATE(218)] = 11313,
  [SMALL_STATE(219)] = 11337,
  [SMALL_STATE(220)] = 11365,
  [SMALL_STATE(221)] = 11393,
  [SMALL_STATE(222)] = 11411,
  [SMALL_STATE(223)] = 11439,
  [SMALL_STATE(224)] = 11458,
  [SMALL_STATE(225)] = 11481,
  [SMALL_STATE(226)] = 11498,
  [SMALL_STATE(227)] = 11515,
  [SMALL_STATE(228)] = 11540,
  [SMALL_STATE(229)] = 11557,
  [SMALL_STATE(230)] = 11582,
  [SMALL_STATE(231)] = 11605,
  [SMALL_STATE(232)] = 11624,
  [SMALL_STATE(233)] = 11649,
  [SMALL_STATE(234)] = 11672,
  [SMALL_STATE(235)] = 11697,
  [SMALL_STATE(236)] = 11714,
  [SMALL_STATE(237)] = 11739,
  [SMALL_STATE(238)] = 11756,
  [SMALL_STATE(239)] = 11781,
  [SMALL_STATE(240)] = 11806,
  [SMALL_STATE(241)] = 11823,
  [SMALL_STATE(242)] = 11848,
  [SMALL_STATE(243)] = 11865,
  [SMALL_STATE(244)] = 11890,
  [SMALL_STATE(245)] = 11907,
  [SMALL_STATE(246)] = 11930,
  [SMALL_STATE(247)] = 11955,
  [SMALL_STATE(248)] = 11980,
  [SMALL_STATE(249)] = 12005,
  [SMALL_STATE(250)] = 12028,
  [SMALL_STATE(251)] = 12045,
  [SMALL_STATE(252)] = 12064,
  [SMALL_STATE(253)] = 12081,
  [SMALL_STATE(254)] = 12106,
  [SMALL_STATE(255)] = 12131,
  [SMALL_STATE(256)] = 12156,
  [SMALL_STATE(257)] = 12179,
  [SMALL_STATE(258)] = 12195,
  [SMALL_STATE(259)] = 12215,
  [SMALL_STATE(260)] = 12237,
  [SMALL_STATE(261)] = 12253,
  [SMALL_STATE(262)] = 12269,
  [SMALL_STATE(263)] = 12289,
  [SMALL_STATE(264)] = 12311,
  [SMALL_STATE(265)] = 12331,
  [SMALL_STATE(266)] = 12353,
  [SMALL_STATE(267)] = 12375,
  [SMALL_STATE(268)] = 12397,
  [SMALL_STATE(269)] = 12417,
  [SMALL_STATE(270)] = 12437,
  [SMALL_STATE(271)] = 12453,
  [SMALL_STATE(272)] = 12469,
  [SMALL_STATE(273)] = 12491,
  [SMALL_STATE(274)] = 12507,
  [SMALL_STATE(275)] = 12527,
  [SMALL_STATE(276)] = 12547,
  [SMALL_STATE(277)] = 12567,
  [SMALL_STATE(278)] = 12587,
  [SMALL_STATE(279)] = 12609,
  [SMALL_STATE(280)] = 12625,
  [SMALL_STATE(281)] = 12647,
  [SMALL_STATE(282)] = 12669,
  [SMALL_STATE(283)] = 12685,
  [SMALL_STATE(284)] = 12705,
  [SMALL_STATE(285)] = 12723,
  [SMALL_STATE(286)] = 12743,
  [SMALL_STATE(287)] = 12763,
  [SMALL_STATE(288)] = 12779,
  [SMALL_STATE(289)] = 12795,
  [SMALL_STATE(290)] = 12817,
  [SMALL_STATE(291)] = 12839,
  [SMALL_STATE(292)] = 12861,
  [SMALL_STATE(293)] = 12877,
  [SMALL_STATE(294)] = 12893,
  [SMALL_STATE(295)] = 12909,
  [SMALL_STATE(296)] = 12931,
  [SMALL_STATE(297)] = 12947,
  [SMALL_STATE(298)] = 12969,
  [SMALL_STATE(299)] = 12987,
  [SMALL_STATE(300)] = 13003,
  [SMALL_STATE(301)] = 13025,
  [SMALL_STATE(302)] = 13047,
  [SMALL_STATE(303)] = 13069,
  [SMALL_STATE(304)] = 13091,
  [SMALL_STATE(305)] = 13113,
  [SMALL_STATE(306)] = 13129,
  [SMALL_STATE(307)] = 13147,
  [SMALL_STATE(308)] = 13163,
  [SMALL_STATE(309)] = 13183,
  [SMALL_STATE(310)] = 13199,
  [SMALL_STATE(311)] = 13219,
  [SMALL_STATE(312)] = 13241,
  [SMALL_STATE(313)] = 13259,
  [SMALL_STATE(314)] = 13281,
  [SMALL_STATE(315)] = 13303,
  [SMALL_STATE(316)] = 13325,
  [SMALL_STATE(317)] = 13347,
  [SMALL_STATE(318)] = 13369,
  [SMALL_STATE(319)] = 13391,
  [SMALL_STATE(320)] = 13411,
  [SMALL_STATE(321)] = 13433,
  [SMALL_STATE(322)] = 13453,
  [SMALL_STATE(323)] = 13475,
  [SMALL_STATE(324)] = 13497,
  [SMALL_STATE(325)] = 13517,
  [SMALL_STATE(326)] = 13539,
  [SMALL_STATE(327)] = 13561,
  [SMALL_STATE(328)] = 13579,
  [SMALL_STATE(329)] = 13601,
  [SMALL_STATE(330)] = 13620,
  [SMALL_STATE(331)] = 13639,
  [SMALL_STATE(332)] = 13656,
  [SMALL_STATE(333)] = 13675,
  [SMALL_STATE(334)] = 13694,
  [SMALL_STATE(335)] = 13713,
  [SMALL_STATE(336)] = 13728,
  [SMALL_STATE(337)] = 13747,
  [SMALL_STATE(338)] = 13766,
  [SMALL_STATE(339)] = 13785,
  [SMALL_STATE(340)] = 13804,
  [SMALL_STATE(341)] = 13823,
  [SMALL_STATE(342)] = 13842,
  [SMALL_STATE(343)] = 13861,
  [SMALL_STATE(344)] = 13878,
  [SMALL_STATE(345)] = 13897,
  [SMALL_STATE(346)] = 13916,
  [SMALL_STATE(347)] = 13933,
  [SMALL_STATE(348)] = 13952,
  [SMALL_STATE(349)] = 13971,
  [SMALL_STATE(350)] = 13988,
  [SMALL_STATE(351)] = 14007,
  [SMALL_STATE(352)] = 14026,
  [SMALL_STATE(353)] = 14045,
  [SMALL_STATE(354)] = 14064,
  [SMALL_STATE(355)] = 14083,
  [SMALL_STATE(356)] = 14102,
  [SMALL_STATE(357)] = 14119,
  [SMALL_STATE(358)] = 14138,
  [SMALL_STATE(359)] = 14157,
  [SMALL_STATE(360)] = 14176,
  [SMALL_STATE(361)] = 14195,
  [SMALL_STATE(362)] = 14214,
  [SMALL_STATE(363)] = 14233,
  [SMALL_STATE(364)] = 14250,
  [SMALL_STATE(365)] = 14269,
  [SMALL_STATE(366)] = 14286,
  [SMALL_STATE(367)] = 14305,
  [SMALL_STATE(368)] = 14324,
  [SMALL_STATE(369)] = 14341,
  [SMALL_STATE(370)] = 14358,
  [SMALL_STATE(371)] = 14377,
  [SMALL_STATE(372)] = 14396,
  [SMALL_STATE(373)] = 14415,
  [SMALL_STATE(374)] = 14434,
  [SMALL_STATE(375)] = 14453,
  [SMALL_STATE(376)] = 14468,
  [SMALL_STATE(377)] = 14487,
  [SMALL_STATE(378)] = 14502,
  [SMALL_STATE(379)] = 14521,
  [SMALL_STATE(380)] = 14540,
  [SMALL_STATE(381)] = 14559,
  [SMALL_STATE(382)] = 14578,
  [SMALL_STATE(383)] = 14597,
  [SMALL_STATE(384)] = 14616,
  [SMALL_STATE(385)] = 14635,
  [SMALL_STATE(386)] = 14654,
  [SMALL_STATE(387)] = 14673,
  [SMALL_STATE(388)] = 14690,
  [SMALL_STATE(389)] = 14707,
  [SMALL_STATE(390)] = 14726,
  [SMALL_STATE(391)] = 14745,
  [SMALL_STATE(392)] = 14762,
  [SMALL_STATE(393)] = 14781,
  [SMALL_STATE(394)] = 14800,
  [SMALL_STATE(395)] = 14815,
  [SMALL_STATE(396)] = 14834,
  [SMALL_STATE(397)] = 14853,
  [SMALL_STATE(398)] = 14870,
  [SMALL_STATE(399)] = 14889,
  [SMALL_STATE(400)] = 14906,
  [SMALL_STATE(401)] = 14925,
  [SMALL_STATE(402)] = 14940,
  [SMALL_STATE(403)] = 14959,
  [SMALL_STATE(404)] = 14978,
  [SMALL_STATE(405)] = 14997,
  [SMALL_STATE(406)] = 15014,
  [SMALL_STATE(407)] = 15031,
  [SMALL_STATE(408)] = 15050,
  [SMALL_STATE(409)] = 15069,
  [SMALL_STATE(410)] = 15088,
  [SMALL_STATE(411)] = 15107,
  [SMALL_STATE(412)] = 15126,
  [SMALL_STATE(413)] = 15141,
  [SMALL_STATE(414)] = 15160,
  [SMALL_STATE(415)] = 15179,
  [SMALL_STATE(416)] = 15198,
  [SMALL_STATE(417)] = 15217,
  [SMALL_STATE(418)] = 15234,
  [SMALL_STATE(419)] = 15251,
  [SMALL_STATE(420)] = 15266,
  [SMALL_STATE(421)] = 15285,
  [SMALL_STATE(422)] = 15302,
  [SMALL_STATE(423)] = 15317,
  [SMALL_STATE(424)] = 15336,
  [SMALL_STATE(425)] = 15353,
  [SMALL_STATE(426)] = 15372,
  [SMALL_STATE(427)] = 15391,
  [SMALL_STATE(428)] = 15410,
  [SMALL_STATE(429)] = 15429,
  [SMALL_STATE(430)] = 15444,
  [SMALL_STATE(431)] = 15463,
  [SMALL_STATE(432)] = 15482,
  [SMALL_STATE(433)] = 15501,
  [SMALL_STATE(434)] = 15520,
  [SMALL_STATE(435)] = 15537,
  [SMALL_STATE(436)] = 15556,
  [SMALL_STATE(437)] = 15575,
  [SMALL_STATE(438)] = 15594,
  [SMALL_STATE(439)] = 15613,
  [SMALL_STATE(440)] = 15632,
  [SMALL_STATE(441)] = 15649,
  [SMALL_STATE(442)] = 15668,
  [SMALL_STATE(443)] = 15687,
  [SMALL_STATE(444)] = 15706,
  [SMALL_STATE(445)] = 15725,
  [SMALL_STATE(446)] = 15744,
  [SMALL_STATE(447)] = 15763,
  [SMALL_STATE(448)] = 15782,
  [SMALL_STATE(449)] = 15799,
  [SMALL_STATE(450)] = 15818,
  [SMALL_STATE(451)] = 15835,
  [SMALL_STATE(452)] = 15849,
  [SMALL_STATE(453)] = 15863,
  [SMALL_STATE(454)] = 15879,
  [SMALL_STATE(455)] = 15895,
  [SMALL_STATE(456)] = 15909,
  [SMALL_STATE(457)] = 15923,
  [SMALL_STATE(458)] = 15939,
  [SMALL_STATE(459)] = 15953,
  [SMALL_STATE(460)] = 15969,
  [SMALL_STATE(461)] = 15983,
  [SMALL_STATE(462)] = 15997,
  [SMALL_STATE(463)] = 16013,
  [SMALL_STATE(464)] = 16027,
  [SMALL_STATE(465)] = 16041,
  [SMALL_STATE(466)] = 16055,
  [SMALL_STATE(467)] = 16069,
  [SMALL_STATE(468)] = 16083,
  [SMALL_STATE(469)] = 16097,
  [SMALL_STATE(470)] = 16111,
  [SMALL_STATE(471)] = 16127,
  [SMALL_STATE(472)] = 16141,
  [SMALL_STATE(473)] = 16155,
  [SMALL_STATE(474)] = 16169,
  [SMALL_STATE(475)] = 16183,
  [SMALL_STATE(476)] = 16197,
  [SMALL_STATE(477)] = 16211,
  [SMALL_STATE(478)] = 16225,
  [SMALL_STATE(479)] = 16239,
  [SMALL_STATE(480)] = 16253,
  [SMALL_STATE(481)] = 16267,
  [SMALL_STATE(482)] = 16281,
  [SMALL_STATE(483)] = 16295,
  [SMALL_STATE(484)] = 16311,
  [SMALL_STATE(485)] = 16325,
  [SMALL_STATE(486)] = 16341,
  [SMALL_STATE(487)] = 16355,
  [SMALL_STATE(488)] = 16369,
  [SMALL_STATE(489)] = 16385,
  [SMALL_STATE(490)] = 16399,
  [SMALL_STATE(491)] = 16413,
  [SMALL_STATE(492)] = 16429,
  [SMALL_STATE(493)] = 16445,
  [SMALL_STATE(494)] = 16459,
  [SMALL_STATE(495)] = 16473,
  [SMALL_STATE(496)] = 16487,
  [SMALL_STATE(497)] = 16501,
  [SMALL_STATE(498)] = 16515,
  [SMALL_STATE(499)] = 16529,
  [SMALL_STATE(500)] = 16545,
  [SMALL_STATE(501)] = 16561,
  [SMALL_STATE(502)] = 16577,
  [SMALL_STATE(503)] = 16593,
  [SMALL_STATE(504)] = 16607,
  [SMALL_STATE(505)] = 16623,
  [SMALL_STATE(506)] = 16639,
  [SMALL_STATE(507)] = 16655,
  [SMALL_STATE(508)] = 16669,
  [SMALL_STATE(509)] = 16685,
  [SMALL_STATE(510)] = 16701,
  [SMALL_STATE(511)] = 16717,
  [SMALL_STATE(512)] = 16731,
  [SMALL_STATE(513)] = 16747,
  [SMALL_STATE(514)] = 16763,
  [SMALL_STATE(515)] = 16777,
  [SMALL_STATE(516)] = 16793,
  [SMALL_STATE(517)] = 16809,
  [SMALL_STATE(518)] = 16823,
  [SMALL_STATE(519)] = 16839,
  [SMALL_STATE(520)] = 16853,
  [SMALL_STATE(521)] = 16869,
  [SMALL_STATE(522)] = 16883,
  [SMALL_STATE(523)] = 16899,
  [SMALL_STATE(524)] = 16913,
  [SMALL_STATE(525)] = 16927,
  [SMALL_STATE(526)] = 16941,
  [SMALL_STATE(527)] = 16955,
  [SMALL_STATE(528)] = 16969,
  [SMALL_STATE(529)] = 16983,
  [SMALL_STATE(530)] = 16997,
  [SMALL_STATE(531)] = 17011,
  [SMALL_STATE(532)] = 17027,
  [SMALL_STATE(533)] = 17041,
  [SMALL_STATE(534)] = 17055,
  [SMALL_STATE(535)] = 17069,
  [SMALL_STATE(536)] = 17083,
  [SMALL_STATE(537)] = 17097,
  [SMALL_STATE(538)] = 17111,
  [SMALL_STATE(539)] = 17127,
  [SMALL_STATE(540)] = 17141,
  [SMALL_STATE(541)] = 17155,
  [SMALL_STATE(542)] = 17169,
  [SMALL_STATE(543)] = 17183,
  [SMALL_STATE(544)] = 17197,
  [SMALL_STATE(545)] = 17211,
  [SMALL_STATE(546)] = 17227,
  [SMALL_STATE(547)] = 17241,
  [SMALL_STATE(548)] = 17257,
  [SMALL_STATE(549)] = 17271,
  [SMALL_STATE(550)] = 17285,
  [SMALL_STATE(551)] = 17301,
  [SMALL_STATE(552)] = 17315,
  [SMALL_STATE(553)] = 17329,
  [SMALL_STATE(554)] = 17343,
  [SMALL_STATE(555)] = 17359,
  [SMALL_STATE(556)] = 17375,
  [SMALL_STATE(557)] = 17389,
  [SMALL_STATE(558)] = 17403,
  [SMALL_STATE(559)] = 17419,
  [SMALL_STATE(560)] = 17435,
  [SMALL_STATE(561)] = 17449,
  [SMALL_STATE(562)] = 17465,
  [SMALL_STATE(563)] = 17481,
  [SMALL_STATE(564)] = 17497,
  [SMALL_STATE(565)] = 17513,
  [SMALL_STATE(566)] = 17529,
  [SMALL_STATE(567)] = 17542,
  [SMALL_STATE(568)] = 17555,
  [SMALL_STATE(569)] = 17568,
  [SMALL_STATE(570)] = 17581,
  [SMALL_STATE(571)] = 17594,
  [SMALL_STATE(572)] = 17607,
  [SMALL_STATE(573)] = 17620,
  [SMALL_STATE(574)] = 17633,
  [SMALL_STATE(575)] = 17646,
  [SMALL_STATE(576)] = 17659,
  [SMALL_STATE(577)] = 17672,
  [SMALL_STATE(578)] = 17685,
  [SMALL_STATE(579)] = 17698,
  [SMALL_STATE(580)] = 17711,
  [SMALL_STATE(581)] = 17724,
  [SMALL_STATE(582)] = 17737,
  [SMALL_STATE(583)] = 17750,
  [SMALL_STATE(584)] = 17763,
  [SMALL_STATE(585)] = 17776,
  [SMALL_STATE(586)] = 17789,
  [SMALL_STATE(587)] = 17802,
  [SMALL_STATE(588)] = 17815,
  [SMALL_STATE(589)] = 17828,
  [SMALL_STATE(590)] = 17841,
  [SMALL_STATE(591)] = 17854,
  [SMALL_STATE(592)] = 17867,
  [SMALL_STATE(593)] = 17880,
  [SMALL_STATE(594)] = 17893,
  [SMALL_STATE(595)] = 17906,
  [SMALL_STATE(596)] = 17919,
  [SMALL_STATE(597)] = 17932,
  [SMALL_STATE(598)] = 17945,
  [SMALL_STATE(599)] = 17958,
  [SMALL_STATE(600)] = 17971,
  [SMALL_STATE(601)] = 17984,
  [SMALL_STATE(602)] = 17997,
  [SMALL_STATE(603)] = 18010,
  [SMALL_STATE(604)] = 18023,
  [SMALL_STATE(605)] = 18036,
  [SMALL_STATE(606)] = 18049,
  [SMALL_STATE(607)] = 18062,
  [SMALL_STATE(608)] = 18075,
  [SMALL_STATE(609)] = 18088,
  [SMALL_STATE(610)] = 18101,
  [SMALL_STATE(611)] = 18114,
  [SMALL_STATE(612)] = 18127,
  [SMALL_STATE(613)] = 18140,
  [SMALL_STATE(614)] = 18153,
  [SMALL_STATE(615)] = 18166,
  [SMALL_STATE(616)] = 18179,
  [SMALL_STATE(617)] = 18192,
  [SMALL_STATE(618)] = 18205,
  [SMALL_STATE(619)] = 18218,
  [SMALL_STATE(620)] = 18231,
  [SMALL_STATE(621)] = 18244,
  [SMALL_STATE(622)] = 18257,
  [SMALL_STATE(623)] = 18270,
  [SMALL_STATE(624)] = 18283,
  [SMALL_STATE(625)] = 18296,
  [SMALL_STATE(626)] = 18309,
  [SMALL_STATE(627)] = 18322,
  [SMALL_STATE(628)] = 18335,
  [SMALL_STATE(629)] = 18348,
  [SMALL_STATE(630)] = 18361,
  [SMALL_STATE(631)] = 18374,
  [SMALL_STATE(632)] = 18387,
  [SMALL_STATE(633)] = 18400,
  [SMALL_STATE(634)] = 18413,
  [SMALL_STATE(635)] = 18426,
  [SMALL_STATE(636)] = 18439,
  [SMALL_STATE(637)] = 18452,
  [SMALL_STATE(638)] = 18465,
  [SMALL_STATE(639)] = 18478,
  [SMALL_STATE(640)] = 18491,
  [SMALL_STATE(641)] = 18504,
  [SMALL_STATE(642)] = 18517,
  [SMALL_STATE(643)] = 18530,
  [SMALL_STATE(644)] = 18543,
  [SMALL_STATE(645)] = 18556,
  [SMALL_STATE(646)] = 18569,
  [SMALL_STATE(647)] = 18582,
  [SMALL_STATE(648)] = 18595,
  [SMALL_STATE(649)] = 18608,
  [SMALL_STATE(650)] = 18621,
  [SMALL_STATE(651)] = 18634,
  [SMALL_STATE(652)] = 18647,
  [SMALL_STATE(653)] = 18660,
  [SMALL_STATE(654)] = 18673,
  [SMALL_STATE(655)] = 18686,
  [SMALL_STATE(656)] = 18699,
  [SMALL_STATE(657)] = 18712,
  [SMALL_STATE(658)] = 18725,
  [SMALL_STATE(659)] = 18738,
  [SMALL_STATE(660)] = 18751,
  [SMALL_STATE(661)] = 18764,
  [SMALL_STATE(662)] = 18777,
  [SMALL_STATE(663)] = 18790,
  [SMALL_STATE(664)] = 18803,
  [SMALL_STATE(665)] = 18816,
  [SMALL_STATE(666)] = 18829,
  [SMALL_STATE(667)] = 18842,
  [SMALL_STATE(668)] = 18855,
  [SMALL_STATE(669)] = 18868,
  [SMALL_STATE(670)] = 18881,
  [SMALL_STATE(671)] = 18894,
  [SMALL_STATE(672)] = 18907,
  [SMALL_STATE(673)] = 18920,
  [SMALL_STATE(674)] = 18933,
  [SMALL_STATE(675)] = 18946,
  [SMALL_STATE(676)] = 18959,
  [SMALL_STATE(677)] = 18972,
  [SMALL_STATE(678)] = 18985,
  [SMALL_STATE(679)] = 18998,
  [SMALL_STATE(680)] = 19011,
  [SMALL_STATE(681)] = 19024,
  [SMALL_STATE(682)] = 19037,
  [SMALL_STATE(683)] = 19050,
  [SMALL_STATE(684)] = 19063,
  [SMALL_STATE(685)] = 19076,
  [SMALL_STATE(686)] = 19089,
  [SMALL_STATE(687)] = 19102,
  [SMALL_STATE(688)] = 19115,
  [SMALL_STATE(689)] = 19128,
  [SMALL_STATE(690)] = 19141,
  [SMALL_STATE(691)] = 19154,
  [SMALL_STATE(692)] = 19167,
  [SMALL_STATE(693)] = 19180,
  [SMALL_STATE(694)] = 19193,
  [SMALL_STATE(695)] = 19206,
  [SMALL_STATE(696)] = 19219,
  [SMALL_STATE(697)] = 19232,
  [SMALL_STATE(698)] = 19245,
  [SMALL_STATE(699)] = 19258,
  [SMALL_STATE(700)] = 19271,
  [SMALL_STATE(701)] = 19284,
  [SMALL_STATE(702)] = 19297,
  [SMALL_STATE(703)] = 19310,
  [SMALL_STATE(704)] = 19323,
  [SMALL_STATE(705)] = 19336,
  [SMALL_STATE(706)] = 19349,
  [SMALL_STATE(707)] = 19362,
  [SMALL_STATE(708)] = 19375,
  [SMALL_STATE(709)] = 19388,
  [SMALL_STATE(710)] = 19401,
  [SMALL_STATE(711)] = 19414,
  [SMALL_STATE(712)] = 19427,
  [SMALL_STATE(713)] = 19440,
  [SMALL_STATE(714)] = 19453,
  [SMALL_STATE(715)] = 19466,
  [SMALL_STATE(716)] = 19479,
  [SMALL_STATE(717)] = 19492,
  [SMALL_STATE(718)] = 19505,
  [SMALL_STATE(719)] = 19518,
  [SMALL_STATE(720)] = 19531,
  [SMALL_STATE(721)] = 19544,
  [SMALL_STATE(722)] = 19557,
  [SMALL_STATE(723)] = 19570,
  [SMALL_STATE(724)] = 19583,
  [SMALL_STATE(725)] = 19596,
  [SMALL_STATE(726)] = 19609,
  [SMALL_STATE(727)] = 19622,
  [SMALL_STATE(728)] = 19635,
  [SMALL_STATE(729)] = 19648,
  [SMALL_STATE(730)] = 19661,
  [SMALL_STATE(731)] = 19674,
  [SMALL_STATE(732)] = 19687,
  [SMALL_STATE(733)] = 19700,
  [SMALL_STATE(734)] = 19713,
  [SMALL_STATE(735)] = 19726,
  [SMALL_STATE(736)] = 19739,
  [SMALL_STATE(737)] = 19752,
  [SMALL_STATE(738)] = 19765,
  [SMALL_STATE(739)] = 19778,
  [SMALL_STATE(740)] = 19791,
  [SMALL_STATE(741)] = 19804,
  [SMALL_STATE(742)] = 19817,
  [SMALL_STATE(743)] = 19830,
  [SMALL_STATE(744)] = 19843,
  [SMALL_STATE(745)] = 19856,
  [SMALL_STATE(746)] = 19869,
  [SMALL_STATE(747)] = 19882,
  [SMALL_STATE(748)] = 19895,
  [SMALL_STATE(749)] = 19908,
  [SMALL_STATE(750)] = 19921,
  [SMALL_STATE(751)] = 19934,
  [SMALL_STATE(752)] = 19947,
  [SMALL_STATE(753)] = 19960,
  [SMALL_STATE(754)] = 19973,
  [SMALL_STATE(755)] = 19986,
  [SMALL_STATE(756)] = 19999,
  [SMALL_STATE(757)] = 20012,
  [SMALL_STATE(758)] = 20025,
  [SMALL_STATE(759)] = 20038,
  [SMALL_STATE(760)] = 20051,
  [SMALL_STATE(761)] = 20064,
  [SMALL_STATE(762)] = 20077,
  [SMALL_STATE(763)] = 20090,
  [SMALL_STATE(764)] = 20103,
  [SMALL_STATE(765)] = 20116,
  [SMALL_STATE(766)] = 20129,
  [SMALL_STATE(767)] = 20142,
  [SMALL_STATE(768)] = 20155,
  [SMALL_STATE(769)] = 20168,
  [SMALL_STATE(770)] = 20181,
  [SMALL_STATE(771)] = 20194,
  [SMALL_STATE(772)] = 20207,
  [SMALL_STATE(773)] = 20220,
  [SMALL_STATE(774)] = 20233,
  [SMALL_STATE(775)] = 20246,
  [SMALL_STATE(776)] = 20259,
  [SMALL_STATE(777)] = 20272,
  [SMALL_STATE(778)] = 20285,
  [SMALL_STATE(779)] = 20298,
  [SMALL_STATE(780)] = 20311,
  [SMALL_STATE(781)] = 20324,
  [SMALL_STATE(782)] = 20337,
  [SMALL_STATE(783)] = 20350,
  [SMALL_STATE(784)] = 20363,
  [SMALL_STATE(785)] = 20376,
  [SMALL_STATE(786)] = 20389,
  [SMALL_STATE(787)] = 20402,
  [SMALL_STATE(788)] = 20415,
  [SMALL_STATE(789)] = 20428,
  [SMALL_STATE(790)] = 20441,
  [SMALL_STATE(791)] = 20454,
  [SMALL_STATE(792)] = 20467,
  [SMALL_STATE(793)] = 20480,
  [SMALL_STATE(794)] = 20493,
  [SMALL_STATE(795)] = 20506,
  [SMALL_STATE(796)] = 20519,
  [SMALL_STATE(797)] = 20532,
  [SMALL_STATE(798)] = 20545,
  [SMALL_STATE(799)] = 20558,
  [SMALL_STATE(800)] = 20571,
  [SMALL_STATE(801)] = 20584,
  [SMALL_STATE(802)] = 20597,
  [SMALL_STATE(803)] = 20601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(228),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(226),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(225),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(225),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(240),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(296),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(690),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(235),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(237),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(237),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(242),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(244),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(244),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(287),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(287),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(250),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(786),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(251),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(299),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(701),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(689),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(737),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(633),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(632),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(631),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(70),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(797),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(795),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(126),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(629),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(789),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(780),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(779),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(778),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(77),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(628),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(69),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(610),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(33),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(776),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(431),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(203),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(305),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(462),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(212),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(228),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(226),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(225),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(225),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(240),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(296),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(690),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(235),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(237),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(237),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(242),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(244),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(244),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(287),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(287),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(250),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(786),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(251),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(299),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(701),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(689),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(737),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(633),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(632),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(631),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(70),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(797),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(795),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(126),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(629),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(789),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(780),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(779),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(778),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(77),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(628),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(603),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(33),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(776),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(431),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(203),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(305),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(601),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(462),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(212),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(228),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(226),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(225),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(225),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(240),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(296),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(690),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(235),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(237),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(237),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(242),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(244),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(244),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(287),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(287),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(250),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(786),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(251),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(299),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(701),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(689),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(737),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(633),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(632),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(631),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(70),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(797),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(795),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(126),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(629),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(789),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(780),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(779),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(778),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(77),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(628),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(33),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(776),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(431),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(203),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(305),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(462),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(212),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(737),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(801),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(449),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(800),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(797),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(795),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(791),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(126),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(437),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(789),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(782),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(780),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(779),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(77),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(395),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(459),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(776),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(431),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(430),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(203),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(775),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(772),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(771),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(462),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(783),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(454),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(737),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(801),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(449),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(800),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(797),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(795),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(791),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(126),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(437),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(789),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(782),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(780),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(779),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(778),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(77),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(459),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(33),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(776),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(431),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(430),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(203),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(775),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(774),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(772),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(771),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(462),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(769),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(737),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(801),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(449),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(800),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(797),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(795),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(791),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(126),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(437),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(789),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(782),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(780),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(779),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(77),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(459),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(776),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(431),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(430),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(203),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(775),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(772),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(771),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(462),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(783),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(296),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(690),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(235),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [937] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(242),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(287),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(287),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(786),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(251),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(299),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(701),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(689),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(129),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(305),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(212),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(706),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(704),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(235),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(242),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(287),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(287),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(786),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(251),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(573),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(701),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(77),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(776),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(212),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(129),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 5),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 5),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 5),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_built_name, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_built_name, 1),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(631),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(70),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(229),
  [1320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(220),
  [1323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(402),
  [1326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(403),
  [1329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(408),
  [1332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(420),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(631),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(70),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(229),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(220),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(420),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 3),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(631),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(70),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(229),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [1412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(420),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(126),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(122),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(687),
  [1586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(134),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(410),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(584),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(331),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(331),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(536),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(124),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(132),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(308),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 6),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(266),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2), SHIFT_REPEAT(422),
  [1825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 1),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(248),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(473),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [1917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(457),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(57),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [1962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(337),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [1967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(47),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [1978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(515),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(512),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [2001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(502),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(319),
  [2029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [2033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(743),
  [2036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 1),
  [2038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [2058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(289),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [2073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(559),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 6),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constr_type_dcl, 1),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [2110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 1),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [2128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [2130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_dcl, 1),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [2162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 6),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 2),
  [2204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 4),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 4),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_supports, 2),
  [2364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_dcl, 1),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2620] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [2624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [2682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_idl() {
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

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
#define STATE_COUNT 797
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 374
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
  sym_unary_operator = 188,
  sym_literal = 189,
  sym_string_literal = 190,
  sym_char_literal = 191,
  sym_boolean_literal = 192,
  sym_preproc_call = 193,
  sym_except_dcl = 194,
  sym_interface_dcl = 195,
  sym_interface_kind = 196,
  sym_interface_forward_dcl = 197,
  sym_interface_def = 198,
  sym_interface_header = 199,
  sym_interface_inheritance_spec = 200,
  sym_interface_name = 201,
  sym_interface_body = 202,
  sym_export = 203,
  sym_op_dcl = 204,
  sym_op_type_spec = 205,
  sym_parameter_dcls = 206,
  sym_param_dcl = 207,
  sym_param_attribute = 208,
  sym_raises_expr = 209,
  sym_attr_dcl = 210,
  sym_readonly_attr_spec = 211,
  sym_readonly_attr_declarator = 212,
  sym_attr_spec = 213,
  sym_attr_declarator = 214,
  sym_attr_raises_expr = 215,
  sym_get_excep_expr = 216,
  sym_set_excep_expr = 217,
  sym_exception_list = 218,
  sym_bitset_dcl = 219,
  sym_bitfield = 220,
  sym_bitfield_spec = 221,
  sym_destination_type = 222,
  sym_bitmask_dcl = 223,
  sym_bit_value = 224,
  sym_annotation_dcl = 225,
  sym_annotation_body = 226,
  sym_annotation_member = 227,
  sym_annotation_member_type = 228,
  sym_any_const_type = 229,
  sym_annotation_appl = 230,
  sym_annotation_appl_params = 231,
  sym_annotation_appl_param = 232,
  sym_annotation_built_name = 233,
  sym_template_module_dcl = 234,
  sym_formal_parameters = 235,
  sym_formal_parameter = 236,
  sym_formal_parameter_type = 237,
  sym_tpl_definition = 238,
  sym_template_module_inst = 239,
  sym_actual_parameters = 240,
  sym_actual_parameter = 241,
  sym_template_module_ref = 242,
  sym_formal_parameter_names = 243,
  sym_value_dcl = 244,
  sym_value_def = 245,
  sym_value_kind = 246,
  sym_value_header = 247,
  sym_value_inheritance_spec = 248,
  sym_value_name = 249,
  sym_value_element = 250,
  sym_state_member = 251,
  sym_init_dcl = 252,
  sym_init_param_dcls = 253,
  sym_init_param_dcl = 254,
  sym_value_forward_dcl = 255,
  sym_typedef_dcl = 256,
  sym_type_declarator = 257,
  sym_any_declarators = 258,
  sym_any_declarator = 259,
  sym_simple_declarator = 260,
  sym_declarator = 261,
  sym_declarators = 262,
  sym_array_declarator = 263,
  sym_fixed_array_size = 264,
  sym_enum_dcl = 265,
  sym_enumerator = 266,
  sym_enum_modifier = 267,
  sym_enum_anno = 268,
  sym_union_forward_dcl = 269,
  sym_union_def = 270,
  sym_case = 271,
  sym_case_label = 272,
  sym_element_spec = 273,
  sym_switch_type_spec = 274,
  sym_type_id_dcl = 275,
  sym_type_prefix_dcl = 276,
  sym_import_dcl = 277,
  sym_imported_scope = 278,
  sym_object_type = 279,
  sym_op_oneway_dcl = 280,
  sym_in_parameter_dcls = 281,
  sym_in_param_dcl = 282,
  sym_op_with_context = 283,
  sym_context_expr = 284,
  sym_value_box_def = 285,
  sym_value_abs_def = 286,
  sym_component_dcl = 287,
  sym_component_forward_dcl = 288,
  sym_component_def = 289,
  sym_component_header = 290,
  sym_component_inheritance_spec = 291,
  sym_component_body = 292,
  sym_component_export = 293,
  sym_provides_dcl = 294,
  sym_interface_type = 295,
  sym_uses_dcl = 296,
  sym_home_dcl = 297,
  sym_home_header = 298,
  sym_home_inheritance_spec = 299,
  sym_home_body = 300,
  sym_home_export = 301,
  sym_factory_dcl = 302,
  sym_factory_param_dcls = 303,
  sym_factory_param_dcl = 304,
  sym_supported_interface_spec = 305,
  sym_emits_dcl = 306,
  sym_publishes_dcl = 307,
  sym_consumes_dcl = 308,
  sym_primary_key_spec = 309,
  sym_finder_dcl = 310,
  sym_event_dcl = 311,
  sym_event_forward_dcl = 312,
  sym_event_abs_def = 313,
  sym_event_def = 314,
  sym_event_header = 315,
  sym_porttype_dcl = 316,
  sym_porttype_forward_dcl = 317,
  sym_porttype_def = 318,
  sym_port_body = 319,
  sym_port_ref = 320,
  sym_port_export = 321,
  sym_port_dcl = 322,
  sym_connector_dcl = 323,
  sym_connector_header = 324,
  sym_connector_inherit_spec = 325,
  sym_connector_export = 326,
  sym_definition = 327,
  sym_native_dcl = 328,
  sym_module_dcl = 329,
  sym_struct_forward_dcl = 330,
  sym_struct_def = 331,
  sym_member = 332,
  sym_default = 333,
  sym_predefine = 334,
  sym_const_dcl = 335,
  sym_const_type = 336,
  sym_comment = 337,
  aux_sym_specification_repeat1 = 338,
  aux_sym_string_literal_repeat1 = 339,
  aux_sym_char_literal_repeat1 = 340,
  aux_sym_except_dcl_repeat1 = 341,
  aux_sym_interface_def_repeat1 = 342,
  aux_sym_interface_inheritance_spec_repeat1 = 343,
  aux_sym_interface_body_repeat1 = 344,
  aux_sym_parameter_dcls_repeat1 = 345,
  aux_sym_raises_expr_repeat1 = 346,
  aux_sym_readonly_attr_declarator_repeat1 = 347,
  aux_sym_bitset_dcl_repeat1 = 348,
  aux_sym_bitfield_repeat1 = 349,
  aux_sym_bitmask_dcl_repeat1 = 350,
  aux_sym_annotation_dcl_repeat1 = 351,
  aux_sym_annotation_appl_params_repeat1 = 352,
  aux_sym_template_module_dcl_repeat1 = 353,
  aux_sym_formal_parameters_repeat1 = 354,
  aux_sym_actual_parameters_repeat1 = 355,
  aux_sym_formal_parameter_names_repeat1 = 356,
  aux_sym_value_def_repeat1 = 357,
  aux_sym_value_inheritance_spec_repeat1 = 358,
  aux_sym_init_param_dcls_repeat1 = 359,
  aux_sym_any_declarators_repeat1 = 360,
  aux_sym_declarators_repeat1 = 361,
  aux_sym_array_declarator_repeat1 = 362,
  aux_sym_enum_dcl_repeat1 = 363,
  aux_sym_enumerator_repeat1 = 364,
  aux_sym_union_def_repeat1 = 365,
  aux_sym_in_parameter_dcls_repeat1 = 366,
  aux_sym_context_expr_repeat1 = 367,
  aux_sym_component_body_repeat1 = 368,
  aux_sym_home_body_repeat1 = 369,
  aux_sym_factory_param_dcls_repeat1 = 370,
  aux_sym_port_body_repeat1 = 371,
  aux_sym_connector_dcl_repeat1 = 372,
  aux_sym_module_dcl_repeat1 = 373,
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
  [sym_native_dcl] = "native_dcl",
  [sym_module_dcl] = "module_dcl",
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
  [sym_native_dcl] = sym_native_dcl,
  [sym_module_dcl] = sym_module_dcl,
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
  [sym_native_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_module_dcl] = {
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
  [63] = 52,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 52,
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
  [99] = 84,
  [100] = 85,
  [101] = 83,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 105,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 107,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 115,
  [119] = 116,
  [120] = 116,
  [121] = 121,
  [122] = 116,
  [123] = 115,
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
  [186] = 79,
  [187] = 187,
  [188] = 188,
  [189] = 91,
  [190] = 190,
  [191] = 88,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 95,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 97,
  [206] = 84,
  [207] = 207,
  [208] = 208,
  [209] = 96,
  [210] = 210,
  [211] = 211,
  [212] = 83,
  [213] = 213,
  [214] = 214,
  [215] = 85,
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
  [311] = 91,
  [312] = 79,
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
  [323] = 85,
  [324] = 84,
  [325] = 83,
  [326] = 326,
  [327] = 91,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 79,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 291,
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
  [349] = 347,
  [350] = 350,
  [351] = 351,
  [352] = 88,
  [353] = 353,
  [354] = 354,
  [355] = 95,
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
  [367] = 88,
  [368] = 95,
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
  [406] = 347,
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
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
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
  [534] = 97,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 96,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 97,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 96,
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
  [777] = 753,
  [778] = 751,
  [779] = 642,
  [780] = 576,
  [781] = 628,
  [782] = 782,
  [783] = 714,
  [784] = 784,
  [785] = 642,
  [786] = 576,
  [787] = 628,
  [788] = 788,
  [789] = 714,
  [790] = 790,
  [791] = 642,
  [792] = 714,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
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
      if (eof) ADVANCE(680);
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == '0') ADVANCE(779);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '=') ADVANCE(852);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '[') ADVANCE(929);
      if (lookahead == '\\') SKIP(676)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'k') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(85)
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
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(84)
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
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(94)
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
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(45)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == 'U') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '/') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(765);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1382);
      if (lookahead == '\r') ADVANCE(1380);
      if (lookahead == '\\') ADVANCE(1384);
      if (lookahead != 0) ADVANCE(1383);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(51)
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1379);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(52)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(54)
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(99)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(99)
      if (lookahead == '\r') SKIP(62)
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(64)
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(781);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(983);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'T') ADVANCE(988);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '+') ADVANCE(744);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(781);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(983);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == 'T') ADVANCE(988);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '~') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(758);
      if (lookahead == '\\') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(824);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(824);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(727);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 74:
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == 'i') ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(1387);
      if (lookahead == '/') ADVANCE(1376);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(727);
      if (lookahead == '>') ADVANCE(729);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(996);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'p') ADVANCE(1263);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'v') ADVANCE(1024);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(775);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '{') ADVANCE(817);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'v') ADVANCE(1024);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(65)
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'v') ADVANCE(1024);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(1096);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'w') ADVANCE(1039);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(341);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 't') ADVANCE(1370);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == 'V') ADVANCE(993);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1070);
      if (lookahead == 't') ADVANCE(1371);
      if (lookahead == 'u') ADVANCE(1143);
      if (lookahead == 'v') ADVANCE(1025);
      if (lookahead == 'w') ADVANCE(1040);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'm') ADVANCE(1353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(1028);
      if (lookahead == '\\') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1039);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead == 's') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == 'w') ADVANCE(1040);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'b') ADVANCE(1154);
      if (lookahead == 'd') ADVANCE(1118);
      if (lookahead == 'e') ADVANCE(1361);
      if (lookahead == 'f') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead == 'k') ADVANCE(1101);
      if (lookahead == 'm') ADVANCE(1001);
      if (lookahead == 'n') ADVANCE(1117);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == 'p') ADVANCE(1238);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead == 's') ADVANCE(1107);
      if (lookahead == 'u') ADVANCE(1226);
      if (lookahead == 'v') ADVANCE(1027);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == 't') ADVANCE(1280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '\\') SKIP(55)
      if (lookahead == 's') ADVANCE(1358);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(63)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == '6') ADVANCE(105);
      if (lookahead == '8') ADVANCE(694);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(106);
      if (lookahead == '8') ADVANCE(702);
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 103:
      if (lookahead == '2') ADVANCE(708);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(689);
      END_STATE();
    case 105:
      if (lookahead == '4') ADVANCE(711);
      END_STATE();
    case 106:
      if (lookahead == '4') ADVANCE(692);
      END_STATE();
    case 107:
      if (lookahead == '6') ADVANCE(705);
      END_STATE();
    case 108:
      if (lookahead == '6') ADVANCE(683);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(722);
      END_STATE();
    case 110:
      if (lookahead == '<') ADVANCE(742);
      END_STATE();
    case 111:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'B') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(768);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(770);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(455);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(631);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(365);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(559);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(379);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(361);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(381);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(637);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(853);
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(698);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(937);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 297:
      if (lookahead == 'f') ADVANCE(927);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(685);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(723);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(725);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(691);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(707);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(710);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(687);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(443);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(933);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(485);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 365:
      if (lookahead == 'j') ADVANCE(286);
      END_STATE();
    case 366:
      if (lookahead == 'k') ADVANCE(843);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(268);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(865);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(887);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 400:
      if (lookahead == 'm') ADVANCE(910);
      END_STATE();
    case 401:
      if (lookahead == 'm') ADVANCE(915);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(891);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(191);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 'x') ADVANCE(881);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 491:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 493:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 495:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 496:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 504:
      if (lookahead == 'q') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(624);
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(949);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(954);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(838);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(955);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(831);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(912);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 624:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 631:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 634:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 637:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 640:
      if (lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 641:
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 642:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 643:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 644:
      if (lookahead == 'x') ADVANCE(939);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(575);
      END_STATE();
    case 646:
      if (lookahead == 'y') ADVANCE(731);
      END_STATE();
    case 647:
      if (lookahead == 'y') ADVANCE(871);
      END_STATE();
    case 648:
      if (lookahead == 'y') ADVANCE(895);
      END_STATE();
    case 649:
      if (lookahead == 'y') ADVANCE(925);
      END_STATE();
    case 650:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 651:
      if (lookahead == 'y') ADVANCE(957);
      END_STATE();
    case 652:
      if (lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 653:
      if (lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 654:
      if (lookahead == 'y') ADVANCE(494);
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
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 659:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 660:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      END_STATE();
    case 661:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 662:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 663:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 664:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 665:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 666:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
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
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\r') ADVANCE(1385);
      if (lookahead == '\\') ADVANCE(1384);
      END_STATE();
    case 674:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(812);
      END_STATE();
    case 675:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 676:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(675)
      END_STATE();
    case 677:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(679)
      END_STATE();
    case 678:
      if (eof) ADVANCE(680);
      if (lookahead == '\n') SKIP(679)
      if (lookahead == '\r') SKIP(677)
      END_STATE();
    case 679:
      if (eof) ADVANCE(680);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(740);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(747);
      if (lookahead == '+') ADVANCE(743);
      if (lookahead == ',') ADVANCE(733);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '/') ADVANCE(748);
      if (lookahead == ':') ADVANCE(825);
      if (lookahead == ';') ADVANCE(826);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(852);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '@') ADVANCE(851);
      if (lookahead == '[') ADVANCE(929);
      if (lookahead == '\\') SKIP(678)
      if (lookahead == ']') ADVANCE(930);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '}') ADVANCE(818);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(679)
      END_STATE();
    case 680:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(742);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(779);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(779);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(762);
      if (lookahead == '/') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == 'U') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(800);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(664);
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
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(789);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1373);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(790);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(792);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(793);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(798);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(794);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(973);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1373);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(800);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(659);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(790);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(792);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(663);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(780);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(782);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(773);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(664);
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
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(786);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1386);
      if (lookahead == '/') ADVANCE(1375);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(812);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == '\\') ADVANCE(813);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(722);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(393);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_autoid);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_autoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_extensibility);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_extensibility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_appendable);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_appendable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_must_understand);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_must_understand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_default_literal);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_default_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_bit_bound);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_nested);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_service);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ami);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ami);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(968);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(776);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '3') ADVANCE(977);
      if (lookahead == '6') ADVANCE(979);
      if (lookahead == '8') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '3') ADVANCE(977);
      if (lookahead == '6') ADVANCE(979);
      if (lookahead == '8') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(982);
      if (lookahead == '3') ADVANCE(978);
      if (lookahead == '6') ADVANCE(980);
      if (lookahead == '8') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1360);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead == 'i') ADVANCE(1200);
      if (lookahead == 'u') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'h') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'o') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1187);
      if (lookahead == 'e') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1293);
      if (lookahead == 'n') ADVANCE(1362);
      if (lookahead == 't') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1318);
      if (lookahead == 'n') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1274);
      if (lookahead == 'u') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'u') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1002);
      if (lookahead == 'o') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1360);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1296);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == 'u') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1237);
      if (lookahead == 's') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1258);
      if (lookahead == 'n') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(995);
      if (lookahead == 's') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1137);
      if (lookahead == 'p') ADVANCE(1257);
      if (lookahead == 'u') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1073);
      if (lookahead == 'p') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead == 'v') ADVANCE(1116);
      if (lookahead == 'x') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead == 'x') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1065);
      if (lookahead == 'x') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1288);
      if (lookahead == 'r') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1136);
      if (lookahead == 'u') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1314);
      if (lookahead == 't') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1374);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1379);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '@') ADVANCE(850);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1382);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0) ADVANCE(1383);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1388);
      if (lookahead == '/') ADVANCE(1377);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1381);
      if (lookahead == '@') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\r') ADVANCE(1385);
      if (lookahead == '\\') ADVANCE(1384);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1383);
      if (lookahead == '\\') ADVANCE(673);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1383);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(971);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 679},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 86},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 679},
  [26] = {.lex_state = 679},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 75},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 90},
  [50] = {.lex_state = 75},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 90},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 75},
  [60] = {.lex_state = 85},
  [61] = {.lex_state = 85},
  [62] = {.lex_state = 85},
  [63] = {.lex_state = 85},
  [64] = {.lex_state = 75},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 75},
  [67] = {.lex_state = 75},
  [68] = {.lex_state = 75},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 86},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 75},
  [80] = {.lex_state = 75},
  [81] = {.lex_state = 75},
  [82] = {.lex_state = 89},
  [83] = {.lex_state = 75},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 75},
  [86] = {.lex_state = 89},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 75},
  [90] = {.lex_state = 89},
  [91] = {.lex_state = 75},
  [92] = {.lex_state = 89},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 75},
  [95] = {.lex_state = 75},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 75},
  [98] = {.lex_state = 75},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 67},
  [102] = {.lex_state = 94},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 679},
  [105] = {.lex_state = 679},
  [106] = {.lex_state = 72},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 679},
  [109] = {.lex_state = 679},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 72},
  [113] = {.lex_state = 679},
  [114] = {.lex_state = 679},
  [115] = {.lex_state = 95},
  [116] = {.lex_state = 69},
  [117] = {.lex_state = 95},
  [118] = {.lex_state = 95},
  [119] = {.lex_state = 69},
  [120] = {.lex_state = 69},
  [121] = {.lex_state = 72},
  [122] = {.lex_state = 69},
  [123] = {.lex_state = 95},
  [124] = {.lex_state = 69},
  [125] = {.lex_state = 69},
  [126] = {.lex_state = 69},
  [127] = {.lex_state = 69},
  [128] = {.lex_state = 69},
  [129] = {.lex_state = 69},
  [130] = {.lex_state = 69},
  [131] = {.lex_state = 69},
  [132] = {.lex_state = 69},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 679},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 69},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 69},
  [147] = {.lex_state = 69},
  [148] = {.lex_state = 679},
  [149] = {.lex_state = 679},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 72},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 72},
  [157] = {.lex_state = 72},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 72},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 72},
  [162] = {.lex_state = 0},
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
  [173] = {.lex_state = 679},
  [174] = {.lex_state = 679},
  [175] = {.lex_state = 72},
  [176] = {.lex_state = 72},
  [177] = {.lex_state = 72},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 67},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 69},
  [183] = {.lex_state = 73},
  [184] = {.lex_state = 73},
  [185] = {.lex_state = 73},
  [186] = {.lex_state = 67},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 73},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 67},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 70},
  [195] = {.lex_state = 73},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 67},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 679},
  [203] = {.lex_state = 679},
  [204] = {.lex_state = 73},
  [205] = {.lex_state = 67},
  [206] = {.lex_state = 76},
  [207] = {.lex_state = 98},
  [208] = {.lex_state = 72},
  [209] = {.lex_state = 67},
  [210] = {.lex_state = 679},
  [211] = {.lex_state = 679},
  [212] = {.lex_state = 76},
  [213] = {.lex_state = 91},
  [214] = {.lex_state = 98},
  [215] = {.lex_state = 76},
  [216] = {.lex_state = 679},
  [217] = {.lex_state = 679},
  [218] = {.lex_state = 73},
  [219] = {.lex_state = 679},
  [220] = {.lex_state = 73},
  [221] = {.lex_state = 73},
  [222] = {.lex_state = 92},
  [223] = {.lex_state = 72},
  [224] = {.lex_state = 67},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 73},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 98},
  [230] = {.lex_state = 73},
  [231] = {.lex_state = 73},
  [232] = {.lex_state = 73},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 73},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 73},
  [240] = {.lex_state = 73},
  [241] = {.lex_state = 72},
  [242] = {.lex_state = 96},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 73},
  [245] = {.lex_state = 73},
  [246] = {.lex_state = 73},
  [247] = {.lex_state = 92},
  [248] = {.lex_state = 72},
  [249] = {.lex_state = 73},
  [250] = {.lex_state = 73},
  [251] = {.lex_state = 73},
  [252] = {.lex_state = 73},
  [253] = {.lex_state = 73},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 73},
  [256] = {.lex_state = 73},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 679},
  [259] = {.lex_state = 73},
  [260] = {.lex_state = 76},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 73},
  [263] = {.lex_state = 47},
  [264] = {.lex_state = 76},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 73},
  [267] = {.lex_state = 73},
  [268] = {.lex_state = 73},
  [269] = {.lex_state = 1382},
  [270] = {.lex_state = 76},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 77},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 72},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 679},
  [279] = {.lex_state = 77},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 73},
  [282] = {.lex_state = 77},
  [283] = {.lex_state = 73},
  [284] = {.lex_state = 679},
  [285] = {.lex_state = 76},
  [286] = {.lex_state = 76},
  [287] = {.lex_state = 76},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 73},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 76},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 73},
  [294] = {.lex_state = 73},
  [295] = {.lex_state = 47},
  [296] = {.lex_state = 47},
  [297] = {.lex_state = 679},
  [298] = {.lex_state = 73},
  [299] = {.lex_state = 49},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 73},
  [302] = {.lex_state = 49},
  [303] = {.lex_state = 76},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 73},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 47},
  [309] = {.lex_state = 47},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 53},
  [313] = {.lex_state = 76},
  [314] = {.lex_state = 72},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 98},
  [317] = {.lex_state = 98},
  [318] = {.lex_state = 73},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 73},
  [321] = {.lex_state = 73},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 53},
  [324] = {.lex_state = 53},
  [325] = {.lex_state = 53},
  [326] = {.lex_state = 72},
  [327] = {.lex_state = 76},
  [328] = {.lex_state = 679},
  [329] = {.lex_state = 73},
  [330] = {.lex_state = 73},
  [331] = {.lex_state = 73},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 82},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 679},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 76},
  [344] = {.lex_state = 76},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 82},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 76},
  [352] = {.lex_state = 73},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 73},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 76},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 82},
  [360] = {.lex_state = 76},
  [361] = {.lex_state = 82},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 73},
  [364] = {.lex_state = 76},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 53},
  [368] = {.lex_state = 53},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 82},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 47},
  [373] = {.lex_state = 76},
  [374] = {.lex_state = 82},
  [375] = {.lex_state = 76},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 76},
  [379] = {.lex_state = 76},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 679},
  [383] = {.lex_state = 82},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 76},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 679},
  [388] = {.lex_state = 76},
  [389] = {.lex_state = 679},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 82},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 73},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 679},
  [399] = {.lex_state = 679},
  [400] = {.lex_state = 76},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 73},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 49},
  [405] = {.lex_state = 97},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 82},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 76},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 49},
  [416] = {.lex_state = 49},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 73},
  [425] = {.lex_state = 73},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 76},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 76},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 76},
  [434] = {.lex_state = 82},
  [435] = {.lex_state = 76},
  [436] = {.lex_state = 76},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 76},
  [439] = {.lex_state = 72},
  [440] = {.lex_state = 82},
  [441] = {.lex_state = 76},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 72},
  [447] = {.lex_state = 76},
  [448] = {.lex_state = 679},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 73},
  [454] = {.lex_state = 73},
  [455] = {.lex_state = 73},
  [456] = {.lex_state = 82},
  [457] = {.lex_state = 73},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 56},
  [461] = {.lex_state = 77},
  [462] = {.lex_state = 73},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 77},
  [466] = {.lex_state = 72},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 73},
  [470] = {.lex_state = 82},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 73},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 73},
  [475] = {.lex_state = 77},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 73},
  [478] = {.lex_state = 73},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 72},
  [481] = {.lex_state = 73},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 73},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 76},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 73},
  [494] = {.lex_state = 679},
  [495] = {.lex_state = 82},
  [496] = {.lex_state = 73},
  [497] = {.lex_state = 73},
  [498] = {.lex_state = 73},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 73},
  [502] = {.lex_state = 76},
  [503] = {.lex_state = 73},
  [504] = {.lex_state = 73},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 73},
  [508] = {.lex_state = 73},
  [509] = {.lex_state = 73},
  [510] = {.lex_state = 73},
  [511] = {.lex_state = 82},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 73},
  [514] = {.lex_state = 73},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 73},
  [518] = {.lex_state = 73},
  [519] = {.lex_state = 73},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 73},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 76},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 76},
  [529] = {.lex_state = 76},
  [530] = {.lex_state = 76},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 76},
  [533] = {.lex_state = 82},
  [534] = {.lex_state = 53},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 73},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 82},
  [540] = {.lex_state = 53},
  [541] = {.lex_state = 82},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 679},
  [544] = {.lex_state = 73},
  [545] = {.lex_state = 73},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 73},
  [548] = {.lex_state = 73},
  [549] = {.lex_state = 98},
  [550] = {.lex_state = 82},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 98},
  [555] = {.lex_state = 73},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 73},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 73},
  [561] = {.lex_state = 82},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 73},
  [564] = {.lex_state = 73},
  [565] = {.lex_state = 73},
  [566] = {.lex_state = 73},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 73},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 82},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 73},
  [577] = {.lex_state = 73},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 73},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
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
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 82},
  [605] = {.lex_state = 82},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 73},
  [611] = {.lex_state = 679},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 73},
  [616] = {.lex_state = 73},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 73},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 82},
  [622] = {.lex_state = 73},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 73},
  [625] = {.lex_state = 679},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 73},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 73},
  [642] = {.lex_state = 73},
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
  [656] = {.lex_state = 73},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 73},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 79},
  [670] = {.lex_state = 73},
  [671] = {.lex_state = 82},
  [672] = {.lex_state = 82},
  [673] = {.lex_state = 73},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 57},
  [678] = {.lex_state = 82},
  [679] = {.lex_state = 82},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 72},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 73},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 82},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 73},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 73},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 82},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 73},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 73},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 72},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 73},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 82},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 82},
  [731] = {.lex_state = 73},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 73},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 73},
  [740] = {.lex_state = 73},
  [741] = {.lex_state = 73},
  [742] = {.lex_state = 73},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 73},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 970},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 73},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 73},
  [758] = {.lex_state = 73},
  [759] = {.lex_state = 73},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 73},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 73},
  [765] = {.lex_state = 73},
  [766] = {.lex_state = 73},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 73},
  [770] = {.lex_state = 73},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 73},
  [774] = {.lex_state = 73},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 73},
  [777] = {.lex_state = 970},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 73},
  [780] = {.lex_state = 73},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 73},
  [785] = {.lex_state = 73},
  [786] = {.lex_state = 73},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 82},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 82},
  [791] = {.lex_state = 73},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 679},
  [795] = {(TSStateId)(-1)},
  [796] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_longlong] = ACTIONS(1),
    [sym_unsigned_tiny_int] = ACTIONS(1),
    [sym_boolean_type] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [sym_octet_type] = ACTIONS(1),
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
    [sym_specification] = STATE(752),
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(751),
    [sym_interface_dcl] = STATE(751),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(751),
    [sym_bitmask_dcl] = STATE(751),
    [sym_annotation_dcl] = STATE(751),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(751),
    [sym_template_module_inst] = STATE(751),
    [sym_value_dcl] = STATE(751),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(751),
    [sym_enum_dcl] = STATE(751),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(751),
    [sym_union_def] = STATE(751),
    [sym_type_id_dcl] = STATE(751),
    [sym_type_prefix_dcl] = STATE(751),
    [sym_import_dcl] = STATE(751),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(751),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(751),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(751),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(751),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(751),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(751),
    [sym_module_dcl] = STATE(751),
    [sym_struct_forward_dcl] = STATE(751),
    [sym_struct_def] = STATE(751),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(751),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(26),
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
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(781),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(349),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(781),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(781),
    [sym_bitmask_dcl] = STATE(781),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(781),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_element] = STATE(53),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(781),
    [sym_enum_dcl] = STATE(781),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(781),
    [sym_union_def] = STATE(781),
    [sym_type_id_dcl] = STATE(781),
    [sym_import_dcl] = STATE(781),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(349),
    [sym_op_with_context] = STATE(781),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(781),
    [sym_struct_forward_dcl] = STATE(781),
    [sym_struct_def] = STATE(781),
    [sym_const_dcl] = STATE(781),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_value_def_repeat1] = STATE(3),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_factory] = ACTIONS(141),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(781),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(349),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(781),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(781),
    [sym_bitmask_dcl] = STATE(781),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(781),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_element] = STATE(53),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(781),
    [sym_enum_dcl] = STATE(781),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(781),
    [sym_union_def] = STATE(781),
    [sym_type_id_dcl] = STATE(781),
    [sym_import_dcl] = STATE(781),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(349),
    [sym_op_with_context] = STATE(781),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(781),
    [sym_struct_forward_dcl] = STATE(781),
    [sym_struct_def] = STATE(781),
    [sym_const_dcl] = STATE(781),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_value_def_repeat1] = STATE(3),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_int16] = ACTIONS(155),
    [anon_sym_long] = ACTIONS(158),
    [anon_sym_int32] = ACTIONS(158),
    [anon_sym_longlong] = ACTIONS(161),
    [anon_sym_int64] = ACTIONS(164),
    [sym_unsigned_tiny_int] = ACTIONS(167),
    [sym_boolean_type] = ACTIONS(170),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(170),
    [sym_signed_tiny_int] = ACTIONS(176),
    [anon_sym_unsignedshort] = ACTIONS(179),
    [anon_sym_uint16] = ACTIONS(182),
    [anon_sym_unsignedlong] = ACTIONS(185),
    [anon_sym_uint32] = ACTIONS(185),
    [anon_sym_unsignedlonglong] = ACTIONS(188),
    [anon_sym_uint64] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(194),
    [anon_sym_double] = ACTIONS(194),
    [anon_sym_longdouble] = ACTIONS(197),
    [anon_sym_char] = ACTIONS(200),
    [anon_sym_wchar] = ACTIONS(200),
    [anon_sym_COLON_COLON] = ACTIONS(203),
    [anon_sym_string] = ACTIONS(206),
    [anon_sym_wstring] = ACTIONS(206),
    [anon_sym_any] = ACTIONS(209),
    [anon_sym_sequence] = ACTIONS(212),
    [anon_sym_map] = ACTIONS(215),
    [anon_sym_exception] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_abstract] = ACTIONS(223),
    [anon_sym_void] = ACTIONS(226),
    [anon_sym_readonly] = ACTIONS(229),
    [anon_sym_attribute] = ACTIONS(232),
    [anon_sym_bitset] = ACTIONS(235),
    [anon_sym_bitmask] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_oneway] = ACTIONS(244),
    [anon_sym_valuetype] = ACTIONS(247),
    [anon_sym_struct] = ACTIONS(250),
    [anon_sym_union] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(256),
    [anon_sym_const] = ACTIONS(259),
    [anon_sym_custom] = ACTIONS(262),
    [anon_sym_public] = ACTIONS(265),
    [anon_sym_private] = ACTIONS(265),
    [anon_sym_factory] = ACTIONS(268),
    [anon_sym_typedef] = ACTIONS(271),
    [anon_sym_ATignore_literal_names] = ACTIONS(274),
    [anon_sym_typeid] = ACTIONS(277),
    [anon_sym_import] = ACTIONS(280),
    [anon_sym_Object] = ACTIONS(283),
    [sym_value_base_type] = ACTIONS(170),
    [anon_sym_native] = ACTIONS(286),
    [sym_identifier] = ACTIONS(289),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(781),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(349),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(781),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(781),
    [sym_bitmask_dcl] = STATE(781),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(781),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_element] = STATE(53),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(781),
    [sym_enum_dcl] = STATE(781),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(781),
    [sym_union_def] = STATE(781),
    [sym_type_id_dcl] = STATE(781),
    [sym_import_dcl] = STATE(781),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(349),
    [sym_op_with_context] = STATE(781),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(781),
    [sym_struct_forward_dcl] = STATE(781),
    [sym_struct_def] = STATE(781),
    [sym_const_dcl] = STATE(781),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_value_def_repeat1] = STATE(5),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_factory] = ACTIONS(141),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(781),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(349),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(781),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(781),
    [sym_bitmask_dcl] = STATE(781),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(781),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_element] = STATE(53),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(781),
    [sym_enum_dcl] = STATE(781),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(781),
    [sym_union_def] = STATE(781),
    [sym_type_id_dcl] = STATE(781),
    [sym_import_dcl] = STATE(781),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(349),
    [sym_op_with_context] = STATE(781),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(781),
    [sym_struct_forward_dcl] = STATE(781),
    [sym_struct_def] = STATE(781),
    [sym_const_dcl] = STATE(781),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_value_def_repeat1] = STATE(3),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_factory] = ACTIONS(141),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(787),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(347),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(787),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(787),
    [sym_bitmask_dcl] = STATE(787),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(787),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(787),
    [sym_enum_dcl] = STATE(787),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(787),
    [sym_union_def] = STATE(787),
    [sym_type_id_dcl] = STATE(787),
    [sym_import_dcl] = STATE(787),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(347),
    [sym_op_with_context] = STATE(787),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_home_body] = STATE(680),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(683),
    [sym_finder_dcl] = STATE(683),
    [sym_native_dcl] = STATE(787),
    [sym_struct_forward_dcl] = STATE(787),
    [sym_struct_def] = STATE(787),
    [sym_const_dcl] = STATE(787),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_home_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(298),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(300),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(781),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(349),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(781),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(781),
    [sym_bitmask_dcl] = STATE(781),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(781),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_element] = STATE(53),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(781),
    [sym_enum_dcl] = STATE(781),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(781),
    [sym_union_def] = STATE(781),
    [sym_type_id_dcl] = STATE(781),
    [sym_import_dcl] = STATE(781),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(349),
    [sym_op_with_context] = STATE(781),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(781),
    [sym_struct_forward_dcl] = STATE(781),
    [sym_struct_def] = STATE(781),
    [sym_const_dcl] = STATE(781),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_factory] = ACTIONS(141),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(787),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(347),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(787),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(787),
    [sym_bitmask_dcl] = STATE(787),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(787),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(787),
    [sym_enum_dcl] = STATE(787),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(787),
    [sym_union_def] = STATE(787),
    [sym_type_id_dcl] = STATE(787),
    [sym_import_dcl] = STATE(787),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(347),
    [sym_op_with_context] = STATE(787),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(683),
    [sym_finder_dcl] = STATE(683),
    [sym_native_dcl] = STATE(787),
    [sym_struct_forward_dcl] = STATE(787),
    [sym_struct_def] = STATE(787),
    [sym_const_dcl] = STATE(787),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_home_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_int16] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(307),
    [anon_sym_int32] = ACTIONS(307),
    [anon_sym_longlong] = ACTIONS(310),
    [anon_sym_int64] = ACTIONS(313),
    [sym_unsigned_tiny_int] = ACTIONS(316),
    [sym_boolean_type] = ACTIONS(319),
    [anon_sym_fixed] = ACTIONS(322),
    [sym_octet_type] = ACTIONS(319),
    [sym_signed_tiny_int] = ACTIONS(325),
    [anon_sym_unsignedshort] = ACTIONS(328),
    [anon_sym_uint16] = ACTIONS(331),
    [anon_sym_unsignedlong] = ACTIONS(334),
    [anon_sym_uint32] = ACTIONS(334),
    [anon_sym_unsignedlonglong] = ACTIONS(337),
    [anon_sym_uint64] = ACTIONS(340),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_longdouble] = ACTIONS(346),
    [anon_sym_char] = ACTIONS(349),
    [anon_sym_wchar] = ACTIONS(349),
    [anon_sym_COLON_COLON] = ACTIONS(352),
    [anon_sym_string] = ACTIONS(355),
    [anon_sym_wstring] = ACTIONS(355),
    [anon_sym_any] = ACTIONS(358),
    [anon_sym_sequence] = ACTIONS(361),
    [anon_sym_map] = ACTIONS(364),
    [anon_sym_exception] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_abstract] = ACTIONS(372),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_readonly] = ACTIONS(378),
    [anon_sym_attribute] = ACTIONS(381),
    [anon_sym_bitset] = ACTIONS(384),
    [anon_sym_bitmask] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_oneway] = ACTIONS(393),
    [anon_sym_valuetype] = ACTIONS(396),
    [anon_sym_struct] = ACTIONS(399),
    [anon_sym_union] = ACTIONS(402),
    [anon_sym_enum] = ACTIONS(405),
    [anon_sym_const] = ACTIONS(408),
    [anon_sym_custom] = ACTIONS(411),
    [anon_sym_factory] = ACTIONS(414),
    [anon_sym_typedef] = ACTIONS(417),
    [anon_sym_ATignore_literal_names] = ACTIONS(420),
    [anon_sym_typeid] = ACTIONS(423),
    [anon_sym_import] = ACTIONS(426),
    [anon_sym_Object] = ACTIONS(429),
    [sym_value_base_type] = ACTIONS(319),
    [anon_sym_finder] = ACTIONS(432),
    [anon_sym_native] = ACTIONS(435),
    [sym_identifier] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(787),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(347),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(787),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(787),
    [sym_bitmask_dcl] = STATE(787),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(787),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(787),
    [sym_enum_dcl] = STATE(787),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(787),
    [sym_union_def] = STATE(787),
    [sym_type_id_dcl] = STATE(787),
    [sym_import_dcl] = STATE(787),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(347),
    [sym_op_with_context] = STATE(787),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(683),
    [sym_finder_dcl] = STATE(683),
    [sym_native_dcl] = STATE(787),
    [sym_struct_forward_dcl] = STATE(787),
    [sym_struct_def] = STATE(787),
    [sym_const_dcl] = STATE(787),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_home_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(298),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(300),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_interface_body] = STATE(629),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(21),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_interface_body] = STATE(727),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(21),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(15),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [14] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(20),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [15] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [16] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(19),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [17] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [18] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(455),
    [anon_sym_int16] = ACTIONS(455),
    [anon_sym_long] = ACTIONS(458),
    [anon_sym_int32] = ACTIONS(458),
    [anon_sym_longlong] = ACTIONS(461),
    [anon_sym_int64] = ACTIONS(464),
    [sym_unsigned_tiny_int] = ACTIONS(467),
    [sym_boolean_type] = ACTIONS(470),
    [anon_sym_fixed] = ACTIONS(473),
    [sym_octet_type] = ACTIONS(470),
    [sym_signed_tiny_int] = ACTIONS(476),
    [anon_sym_unsignedshort] = ACTIONS(479),
    [anon_sym_uint16] = ACTIONS(482),
    [anon_sym_unsignedlong] = ACTIONS(485),
    [anon_sym_uint32] = ACTIONS(485),
    [anon_sym_unsignedlonglong] = ACTIONS(488),
    [anon_sym_uint64] = ACTIONS(491),
    [anon_sym_float] = ACTIONS(494),
    [anon_sym_double] = ACTIONS(494),
    [anon_sym_longdouble] = ACTIONS(497),
    [anon_sym_char] = ACTIONS(500),
    [anon_sym_wchar] = ACTIONS(500),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [anon_sym_string] = ACTIONS(506),
    [anon_sym_wstring] = ACTIONS(506),
    [anon_sym_any] = ACTIONS(509),
    [anon_sym_sequence] = ACTIONS(512),
    [anon_sym_map] = ACTIONS(515),
    [anon_sym_exception] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_abstract] = ACTIONS(523),
    [anon_sym_void] = ACTIONS(526),
    [anon_sym_readonly] = ACTIONS(529),
    [anon_sym_attribute] = ACTIONS(532),
    [anon_sym_bitset] = ACTIONS(535),
    [anon_sym_bitmask] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(541),
    [anon_sym_oneway] = ACTIONS(544),
    [anon_sym_valuetype] = ACTIONS(547),
    [anon_sym_struct] = ACTIONS(550),
    [anon_sym_union] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(556),
    [anon_sym_const] = ACTIONS(559),
    [anon_sym_custom] = ACTIONS(562),
    [anon_sym_typedef] = ACTIONS(565),
    [anon_sym_ATignore_literal_names] = ACTIONS(568),
    [anon_sym_typeid] = ACTIONS(571),
    [anon_sym_import] = ACTIONS(574),
    [anon_sym_Object] = ACTIONS(577),
    [sym_value_base_type] = ACTIONS(470),
    [anon_sym_native] = ACTIONS(580),
    [sym_identifier] = ACTIONS(583),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [19] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [20] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [21] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(618),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(74),
    [sym_op_dcl] = STATE(406),
    [sym_op_type_spec] = STATE(630),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(205),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(259),
    [sym_op_oneway_dcl] = STATE(406),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [aux_sym_interface_body_repeat1] = STATE(18),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_oneway] = ACTIONS(125),
    [anon_sym_valuetype] = ACTIONS(127),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_custom] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(143),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [22] = {
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_tpl_definition] = STATE(112),
    [sym_template_module_inst] = STATE(778),
    [sym_template_module_ref] = STATE(620),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(103),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
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
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_tpl_definition] = STATE(112),
    [sym_template_module_inst] = STATE(778),
    [sym_template_module_ref] = STATE(620),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(103),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
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
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_tpl_definition] = STATE(112),
    [sym_template_module_inst] = STATE(778),
    [sym_template_module_ref] = STATE(620),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(103),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
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
    [sym_except_dcl] = STATE(751),
    [sym_interface_dcl] = STATE(751),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(751),
    [sym_bitmask_dcl] = STATE(751),
    [sym_annotation_dcl] = STATE(751),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(751),
    [sym_template_module_inst] = STATE(751),
    [sym_value_dcl] = STATE(751),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(751),
    [sym_enum_dcl] = STATE(751),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(751),
    [sym_union_def] = STATE(751),
    [sym_type_id_dcl] = STATE(751),
    [sym_type_prefix_dcl] = STATE(751),
    [sym_import_dcl] = STATE(751),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(751),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(751),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(751),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(751),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(751),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(751),
    [sym_module_dcl] = STATE(751),
    [sym_struct_forward_dcl] = STATE(751),
    [sym_struct_def] = STATE(751),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(751),
    [sym_comment] = STATE(25),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(686),
    [sym_preproc_directive] = ACTIONS(688),
    [anon_sym_exception] = ACTIONS(691),
    [anon_sym_local] = ACTIONS(694),
    [anon_sym_abstract] = ACTIONS(697),
    [anon_sym_interface] = ACTIONS(700),
    [anon_sym_bitset] = ACTIONS(703),
    [anon_sym_bitmask] = ACTIONS(706),
    [anon_sym_ATannotation] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(715),
    [anon_sym_valuetype] = ACTIONS(718),
    [anon_sym_eventtype] = ACTIONS(721),
    [anon_sym_struct] = ACTIONS(724),
    [anon_sym_union] = ACTIONS(727),
    [anon_sym_enum] = ACTIONS(730),
    [anon_sym_const] = ACTIONS(733),
    [anon_sym_custom] = ACTIONS(736),
    [anon_sym_typedef] = ACTIONS(739),
    [anon_sym_ATignore_literal_names] = ACTIONS(742),
    [anon_sym_typeid] = ACTIONS(745),
    [anon_sym_typeprefix] = ACTIONS(748),
    [anon_sym_import] = ACTIONS(751),
    [anon_sym_component] = ACTIONS(754),
    [anon_sym_home] = ACTIONS(757),
    [anon_sym_porttype] = ACTIONS(760),
    [anon_sym_connector] = ACTIONS(763),
    [anon_sym_native] = ACTIONS(766),
    [anon_sym_POUNDdefine] = ACTIONS(769),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [26] = {
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(751),
    [sym_interface_dcl] = STATE(751),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(751),
    [sym_bitmask_dcl] = STATE(751),
    [sym_annotation_dcl] = STATE(751),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(751),
    [sym_template_module_inst] = STATE(751),
    [sym_value_dcl] = STATE(751),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(751),
    [sym_enum_dcl] = STATE(751),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(751),
    [sym_union_def] = STATE(751),
    [sym_type_id_dcl] = STATE(751),
    [sym_type_prefix_dcl] = STATE(751),
    [sym_import_dcl] = STATE(751),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(751),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(751),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(751),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(751),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(751),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(751),
    [sym_module_dcl] = STATE(751),
    [sym_struct_forward_dcl] = STATE(751),
    [sym_struct_def] = STATE(751),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(751),
    [sym_comment] = STATE(26),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(772),
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
  [27] = {
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_template_module_inst] = STATE(778),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(121),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
    [sym_comment] = STATE(27),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_module_dcl_repeat1] = STATE(29),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(774),
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
  [28] = {
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_template_module_inst] = STATE(778),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(121),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
    [sym_comment] = STATE(28),
    [aux_sym_interface_def_repeat1] = STATE(180),
    [aux_sym_module_dcl_repeat1] = STATE(28),
    [anon_sym_exception] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_local] = ACTIONS(781),
    [anon_sym_abstract] = ACTIONS(784),
    [anon_sym_interface] = ACTIONS(787),
    [anon_sym_bitset] = ACTIONS(790),
    [anon_sym_bitmask] = ACTIONS(793),
    [anon_sym_ATannotation] = ACTIONS(796),
    [anon_sym_AT] = ACTIONS(799),
    [anon_sym_module] = ACTIONS(802),
    [anon_sym_valuetype] = ACTIONS(805),
    [anon_sym_eventtype] = ACTIONS(808),
    [anon_sym_struct] = ACTIONS(811),
    [anon_sym_union] = ACTIONS(814),
    [anon_sym_enum] = ACTIONS(817),
    [anon_sym_const] = ACTIONS(820),
    [anon_sym_custom] = ACTIONS(823),
    [anon_sym_typedef] = ACTIONS(826),
    [anon_sym_ATignore_literal_names] = ACTIONS(829),
    [anon_sym_typeid] = ACTIONS(832),
    [anon_sym_typeprefix] = ACTIONS(835),
    [anon_sym_import] = ACTIONS(838),
    [anon_sym_component] = ACTIONS(841),
    [anon_sym_home] = ACTIONS(844),
    [anon_sym_porttype] = ACTIONS(847),
    [anon_sym_connector] = ACTIONS(850),
    [anon_sym_native] = ACTIONS(853),
    [anon_sym_POUNDdefine] = ACTIONS(856),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [29] = {
    [sym_except_dcl] = STATE(778),
    [sym_interface_dcl] = STATE(778),
    [sym_interface_kind] = STATE(750),
    [sym_interface_forward_dcl] = STATE(748),
    [sym_interface_def] = STATE(748),
    [sym_interface_header] = STATE(747),
    [sym_bitset_dcl] = STATE(778),
    [sym_bitmask_dcl] = STATE(778),
    [sym_annotation_dcl] = STATE(778),
    [sym_annotation_appl] = STATE(205),
    [sym_template_module_dcl] = STATE(778),
    [sym_template_module_inst] = STATE(778),
    [sym_value_dcl] = STATE(778),
    [sym_value_def] = STATE(745),
    [sym_value_kind] = STATE(731),
    [sym_value_header] = STATE(728),
    [sym_value_forward_dcl] = STATE(745),
    [sym_typedef_dcl] = STATE(778),
    [sym_enum_dcl] = STATE(778),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(778),
    [sym_union_def] = STATE(778),
    [sym_type_id_dcl] = STATE(778),
    [sym_type_prefix_dcl] = STATE(778),
    [sym_import_dcl] = STATE(778),
    [sym_value_box_def] = STATE(745),
    [sym_value_abs_def] = STATE(745),
    [sym_component_dcl] = STATE(778),
    [sym_component_forward_dcl] = STATE(721),
    [sym_component_def] = STATE(721),
    [sym_component_header] = STATE(720),
    [sym_home_dcl] = STATE(778),
    [sym_home_header] = STATE(717),
    [sym_event_dcl] = STATE(778),
    [sym_event_forward_dcl] = STATE(715),
    [sym_event_abs_def] = STATE(715),
    [sym_event_def] = STATE(715),
    [sym_event_header] = STATE(700),
    [sym_porttype_dcl] = STATE(778),
    [sym_porttype_forward_dcl] = STATE(688),
    [sym_porttype_def] = STATE(688),
    [sym_connector_dcl] = STATE(778),
    [sym_connector_header] = STATE(685),
    [sym_definition] = STATE(121),
    [sym_native_dcl] = STATE(778),
    [sym_module_dcl] = STATE(778),
    [sym_struct_forward_dcl] = STATE(778),
    [sym_struct_def] = STATE(778),
    [sym_predefine] = STATE(106),
    [sym_const_dcl] = STATE(778),
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
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(174),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(561),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_const_expr] = STATE(561),
    [sym_or_expr] = STATE(195),
    [sym_xor_expr] = STATE(185),
    [sym_and_expr] = STATE(184),
    [sym_shift_expr] = STATE(177),
    [sym_add_expr] = STATE(175),
    [sym_mult_expr] = STATE(163),
    [sym_unary_expr] = STATE(151),
    [sym_unary_operator] = STATE(171),
    [sym_literal] = STATE(164),
    [sym_string_literal] = STATE(161),
    [sym_char_literal] = STATE(161),
    [sym_boolean_literal] = STATE(161),
    [sym_actual_parameters] = STATE(679),
    [sym_actual_parameter] = STATE(337),
    [sym_object_type] = STATE(259),
    [sym_comment] = STATE(30),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
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
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [31] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(174),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(561),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_const_expr] = STATE(561),
    [sym_or_expr] = STATE(195),
    [sym_xor_expr] = STATE(185),
    [sym_and_expr] = STATE(184),
    [sym_shift_expr] = STATE(177),
    [sym_add_expr] = STATE(175),
    [sym_mult_expr] = STATE(163),
    [sym_unary_expr] = STATE(151),
    [sym_unary_operator] = STATE(171),
    [sym_literal] = STATE(164),
    [sym_string_literal] = STATE(161),
    [sym_char_literal] = STATE(161),
    [sym_boolean_literal] = STATE(161),
    [sym_actual_parameter] = STATE(541),
    [sym_object_type] = STATE(259),
    [sym_comment] = STATE(31),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
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
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [32] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_type_spec] = STATE(293),
    [sym_simple_type_spec] = STATE(281),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(281),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_bitset_dcl] = STATE(293),
    [sym_bitmask_dcl] = STATE(293),
    [sym_annotation_appl] = STATE(205),
    [sym_enum_dcl] = STATE(293),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(293),
    [sym_union_def] = STATE(293),
    [sym_element_spec] = STATE(718),
    [sym_object_type] = STATE(259),
    [sym_struct_forward_dcl] = STATE(293),
    [sym_struct_def] = STATE(293),
    [sym_comment] = STATE(32),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(883),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(253),
    [sym_signed_long_int] = STATE(253),
    [sym_signed_longlong_int] = STATE(253),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(259),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(255),
    [sym_unsigned_long_int] = STATE(255),
    [sym_unsigned_longlong_int] = STATE(255),
    [sym_floating_pt_type] = STATE(259),
    [sym_char_type] = STATE(259),
    [sym_scoped_name] = STATE(291),
    [sym_string_type] = STATE(301),
    [sym_simple_type_spec] = STATE(230),
    [sym_base_type_spec] = STATE(306),
    [sym_any_type] = STATE(259),
    [sym_fixed_pt_type] = STATE(301),
    [sym_template_type_spec] = STATE(230),
    [sym_sequence_type] = STATE(301),
    [sym_map_type] = STATE(301),
    [sym_bitset_dcl] = STATE(230),
    [sym_bitmask_dcl] = STATE(230),
    [sym_annotation_appl] = STATE(205),
    [sym_type_declarator] = STATE(602),
    [sym_enum_dcl] = STATE(230),
    [sym_enum_anno] = STATE(722),
    [sym_union_forward_dcl] = STATE(230),
    [sym_union_def] = STATE(230),
    [sym_object_type] = STATE(259),
    [sym_struct_forward_dcl] = STATE(230),
    [sym_struct_def] = STATE(230),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(224),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_Object] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [145] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [290] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [435] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [580] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [725] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_except_dcl_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [870] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
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
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
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
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1305] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(909), 1,
      anon_sym_longlong,
    ACTIONS(912), 1,
      anon_sym_int64,
    ACTIONS(915), 1,
      sym_unsigned_tiny_int,
    ACTIONS(921), 1,
      anon_sym_fixed,
    ACTIONS(924), 1,
      sym_signed_tiny_int,
    ACTIONS(927), 1,
      anon_sym_unsignedshort,
    ACTIONS(930), 1,
      anon_sym_uint16,
    ACTIONS(936), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(939), 1,
      anon_sym_uint64,
    ACTIONS(945), 1,
      anon_sym_longdouble,
    ACTIONS(951), 1,
      anon_sym_COLON_COLON,
    ACTIONS(957), 1,
      anon_sym_any,
    ACTIONS(960), 1,
      anon_sym_sequence,
    ACTIONS(963), 1,
      anon_sym_map,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    ACTIONS(968), 1,
      anon_sym_AT,
    ACTIONS(971), 1,
      anon_sym_Object,
    ACTIONS(974), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(903), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(906), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(933), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(942), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(948), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(954), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(43), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(918), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1448] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(93), 1,
      sym_member,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(220), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1593] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(985), 1,
      anon_sym_longlong,
    ACTIONS(988), 1,
      anon_sym_int64,
    ACTIONS(991), 1,
      sym_unsigned_tiny_int,
    ACTIONS(997), 1,
      anon_sym_fixed,
    ACTIONS(1000), 1,
      sym_signed_tiny_int,
    ACTIONS(1003), 1,
      anon_sym_unsignedshort,
    ACTIONS(1006), 1,
      anon_sym_uint16,
    ACTIONS(1012), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(1015), 1,
      anon_sym_uint64,
    ACTIONS(1021), 1,
      anon_sym_longdouble,
    ACTIONS(1027), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1033), 1,
      anon_sym_any,
    ACTIONS(1036), 1,
      anon_sym_sequence,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 1,
      anon_sym_enum,
    ACTIONS(1044), 1,
      anon_sym_const,
    ACTIONS(1047), 1,
      anon_sym_typedef,
    ACTIONS(1050), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1053), 1,
      sym_identifier,
    STATE(87), 1,
      sym_annotation_member,
    STATE(92), 1,
      sym_annotation_body,
    STATE(487), 1,
      sym_scoped_name,
    STATE(522), 1,
      sym_annotation_member_type,
    STATE(722), 1,
      sym_enum_anno,
    ACTIONS(979), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(982), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(994), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(1009), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(1018), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(1024), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(1030), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(45), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(711), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(712), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(624), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1735] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_const,
    ACTIONS(143), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      anon_sym_fixed,
    ACTIONS(1060), 1,
      anon_sym_any,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 1,
      anon_sym_ATignore_literal_names,
    STATE(46), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(87), 1,
      sym_annotation_member,
    STATE(92), 1,
      sym_annotation_body,
    STATE(487), 1,
      sym_scoped_name,
    STATE(522), 1,
      sym_annotation_member_type,
    STATE(722), 1,
      sym_enum_anno,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1056), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(711), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(712), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(624), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1879] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1066), 1,
      anon_sym_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_COLON,
    ACTIONS(1070), 1,
      anon_sym_SEMI,
    ACTIONS(1072), 1,
      anon_sym_supports,
    STATE(47), 1,
      sym_comment,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(336), 1,
      sym_scoped_name,
    STATE(648), 1,
      sym_type_spec,
    STATE(651), 1,
      sym_value_inheritance_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2021] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_const,
    ACTIONS(143), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      anon_sym_fixed,
    ACTIONS(1060), 1,
      anon_sym_any,
    ACTIONS(1064), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(87), 1,
      sym_annotation_member,
    STATE(92), 1,
      sym_annotation_body,
    STATE(487), 1,
      sym_scoped_name,
    STATE(522), 1,
      sym_annotation_member_type,
    STATE(722), 1,
      sym_enum_anno,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1056), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(711), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(712), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(624), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2165] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(49), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(391), 1,
      sym_formal_parameter,
    STATE(564), 1,
      sym_formal_parameter_type,
    STATE(725), 1,
      sym_formal_parameters,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(723), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1078), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2295] = 38,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_interface_def_repeat1,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(231), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2431] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(1084), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1082), 48,
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
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
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
  [2569] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
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
  [2638] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(54), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(539), 1,
      sym_formal_parameter,
    STATE(564), 1,
      sym_formal_parameter_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(723), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1078), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2765] = 5,
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
  [2834] = 5,
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
  [2903] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
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
  [2972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
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
  [3041] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1110), 1,
      anon_sym_GT,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(788), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
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
  [3242] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
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
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
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
  [3378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1086), 47,
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
  [3446] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(469), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3573] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(453), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3700] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(336), 1,
      sym_scoped_name,
    STATE(772), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3827] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(363), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3954] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(425), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4081] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(481), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4208] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(227), 1,
      sym_type_spec,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4335] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(477), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4462] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(149), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(306), 1,
      sym_base_type_spec,
    STATE(550), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(281), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(301), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(259), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1086), 45,
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
  [4655] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
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
  [4721] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      anon_sym_fixed,
    STATE(75), 1,
      sym_comment,
    STATE(502), 1,
      sym_scoped_name,
    STATE(701), 1,
      sym_const_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1056), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(624), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [4826] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      anon_sym_fixed,
    STATE(76), 1,
      sym_comment,
    STATE(502), 1,
      sym_scoped_name,
    STATE(616), 1,
      sym_const_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(1056), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(624), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [4931] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
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
  [4986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
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
  [5041] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_annotation_appl,
    STATE(79), 2,
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
  [5093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
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
  [5140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
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
  [5187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(1155), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1159), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1157), 26,
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
  [5281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(1163), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1161), 26,
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
  [5328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(1167), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1165), 26,
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
    STATE(86), 1,
      sym_comment,
    ACTIONS(1171), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1169), 26,
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
  [5422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(1175), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1173), 26,
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
  [5469] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_comment,
    ACTIONS(1179), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1177), 26,
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
  [5518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
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
  [5565] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
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
  [5612] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_comment,
    ACTIONS(1179), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1177), 26,
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
  [5661] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(1193), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
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
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5708] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(1197), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
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
  [5755] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(1201), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
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
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5802] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
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
  [5849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
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
  [5895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
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
  [5941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
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
  [5986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(1161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1163), 27,
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
  [6031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(1165), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1167), 27,
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
  [6076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(1157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1159), 27,
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
  [6121] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1219), 1,
      sym_boolean_type,
    STATE(102), 1,
      sym_comment,
    STATE(458), 1,
      sym_scoped_name,
    STATE(687), 1,
      sym_switch_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(689), 2,
      sym_integer_type,
      sym_char_type,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [6204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(1223), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1221), 27,
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
  [6247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(1227), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1225), 25,
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
  [6290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(1231), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1229), 25,
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
  [6333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(1231), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1229), 27,
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
  [6376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(1235), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1233), 27,
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
  [6419] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(1239), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1237), 25,
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
  [6462] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1243), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1241), 25,
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
  [6505] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1245), 27,
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
  [6548] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(1251), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1249), 27,
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
  [6591] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(1255), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1253), 27,
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
  [6634] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(1247), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1245), 25,
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
  [6677] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(1235), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1233), 25,
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
  [6720] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(115), 1,
      sym_comment,
    STATE(189), 1,
      sym_scoped_name,
    STATE(191), 1,
      sym_annotation_built_name,
    ACTIONS(1257), 24,
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
  [6768] = 27,
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
    ACTIONS(1259), 1,
      sym_identifier,
    STATE(116), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(397), 1,
      sym_annotation_appl_param,
    STATE(713), 1,
      sym_const_expr,
    STATE(789), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6854] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1261), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1265), 1,
      sym_identifier,
    STATE(88), 1,
      sym_annotation_built_name,
    STATE(91), 1,
      sym_scoped_name,
    STATE(117), 1,
      sym_comment,
    ACTIONS(1263), 24,
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
  [6902] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1267), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1271), 1,
      sym_identifier,
    STATE(118), 1,
      sym_comment,
    STATE(311), 1,
      sym_scoped_name,
    STATE(367), 1,
      sym_annotation_built_name,
    ACTIONS(1269), 24,
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
  [6950] = 27,
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
    ACTIONS(1259), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(397), 1,
      sym_annotation_appl_param,
    STATE(713), 1,
      sym_const_expr,
    STATE(783), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7036] = 27,
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
    ACTIONS(1259), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(397), 1,
      sym_annotation_appl_param,
    STATE(713), 1,
      sym_const_expr,
    STATE(792), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(1275), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1273), 26,
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
  [7164] = 27,
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
    ACTIONS(1259), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(397), 1,
      sym_annotation_appl_param,
    STATE(713), 1,
      sym_const_expr,
    STATE(714), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7250] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(327), 1,
      sym_scoped_name,
    STATE(352), 1,
      sym_annotation_built_name,
    ACTIONS(1277), 24,
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
  [7298] = 26,
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
    STATE(124), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(571), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7381] = 26,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(775), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7464] = 26,
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
    STATE(126), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(790), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7547] = 26,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(678), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7630] = 26,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(664), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7713] = 26,
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
    STATE(129), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(511), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7796] = 26,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(348), 1,
      sym_const_expr,
    STATE(686), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7879] = 25,
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
    STATE(131), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(668), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7959] = 25,
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
    STATE(132), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(589), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8039] = 25,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(527), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8119] = 25,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(614), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8199] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_long,
    ACTIONS(85), 1,
      anon_sym_unsignedlong,
    ACTIONS(1281), 1,
      anon_sym_int32,
    ACTIONS(1283), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1287), 1,
      sym_signed_tiny_int,
    ACTIONS(1289), 1,
      anon_sym_uint32,
    STATE(135), 1,
      sym_comment,
    STATE(671), 1,
      sym_integer_type,
    STATE(672), 1,
      sym_destination_type,
    ACTIONS(69), 2,
      anon_sym_longlong,
      anon_sym_int64,
    ACTIONS(81), 2,
      anon_sym_unsignedshort,
      anon_sym_uint16,
    ACTIONS(87), 2,
      anon_sym_unsignedlonglong,
      anon_sym_uint64,
    ACTIONS(1279), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1285), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(253), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(255), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [8267] = 25,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(603), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8347] = 25,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(716), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8427] = 25,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(185), 1,
      sym_xor_expr,
    STATE(195), 1,
      sym_or_expr,
    STATE(707), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8507] = 23,
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
    STATE(139), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(184), 1,
      sym_and_expr,
    STATE(188), 1,
      sym_xor_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8581] = 22,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(177), 1,
      sym_shift_expr,
    STATE(183), 1,
      sym_and_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8652] = 17,
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
    STATE(141), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_component_body_repeat1,
    STATE(181), 1,
      sym_component_export,
    STATE(666), 1,
      sym_component_body,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(585), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8712] = 21,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_add_expr,
    STATE(176), 1,
      sym_shift_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8780] = 20,
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
    STATE(143), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_mult_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_add_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8845] = 16,
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
    ACTIONS(1309), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_component_body_repeat1,
    STATE(181), 1,
      sym_component_export,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(585), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8902] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1311), 1,
      anon_sym_RBRACE,
    ACTIONS(1313), 1,
      anon_sym_readonly,
    ACTIONS(1316), 1,
      anon_sym_attribute,
    ACTIONS(1319), 1,
      anon_sym_provides,
    ACTIONS(1322), 1,
      anon_sym_uses,
    ACTIONS(1325), 1,
      anon_sym_emits,
    ACTIONS(1328), 1,
      anon_sym_publishes,
    ACTIONS(1331), 1,
      anon_sym_consumes,
    STATE(181), 1,
      sym_component_export,
    ACTIONS(1334), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(145), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(585), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8957] = 19,
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
    STATE(151), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_literal,
    STATE(168), 1,
      sym_mult_expr,
    STATE(171), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9019] = 18,
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
    STATE(147), 1,
      sym_comment,
    STATE(149), 1,
      sym_scoped_name,
    STATE(150), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_literal,
    STATE(171), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9078] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(148), 1,
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
  [9111] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(149), 1,
      sym_comment,
    ACTIONS(1343), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1345), 13,
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
  [9144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
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
  [9174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(1351), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1353), 14,
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
  [9204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1355), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1357), 14,
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
  [9234] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1359), 1,
      anon_sym_RBRACE,
    ACTIONS(1361), 1,
      anon_sym_readonly,
    ACTIONS(1364), 1,
      anon_sym_attribute,
    ACTIONS(1367), 1,
      anon_sym_provides,
    ACTIONS(1370), 1,
      anon_sym_uses,
    STATE(192), 1,
      sym_connector_export,
    STATE(193), 1,
      sym_port_ref,
    STATE(691), 1,
      sym_attr_dcl,
    ACTIONS(1373), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(153), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9282] = 15,
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
    STATE(153), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(154), 1,
      sym_comment,
    STATE(192), 1,
      sym_connector_export,
    STATE(193), 1,
      sym_port_ref,
    STATE(691), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
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
  [9362] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
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
  [9392] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
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
  [9422] = 15,
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
    ACTIONS(1386), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_port_body_repeat1,
    STATE(190), 1,
      sym_port_export,
    STATE(197), 1,
      sym_port_ref,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9472] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(159), 1,
      sym_comment,
    ACTIONS(1388), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1390), 14,
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
  [9502] = 15,
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
    ACTIONS(1392), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      aux_sym_port_body_repeat1,
    STATE(160), 1,
      sym_comment,
    STATE(190), 1,
      sym_port_export,
    STATE(197), 1,
      sym_port_ref,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9552] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(161), 1,
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
  [9582] = 14,
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
    STATE(190), 1,
      sym_port_export,
    STATE(197), 1,
      sym_port_ref,
    STATE(659), 1,
      sym_attr_dcl,
    ACTIONS(1412), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(162), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9630] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1415), 1,
      anon_sym_GT,
    ACTIONS(1421), 1,
      anon_sym_SLASH,
    STATE(163), 1,
      sym_comment,
    ACTIONS(1419), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1417), 12,
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
  [9664] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(1343), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1345), 14,
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
  [9694] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(1423), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1425), 14,
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
  [9724] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
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
  [9754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(167), 1,
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
  [9784] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1421), 1,
      anon_sym_SLASH,
    ACTIONS(1435), 1,
      anon_sym_GT,
    STATE(168), 1,
      sym_comment,
    ACTIONS(1419), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1437), 12,
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
  [9818] = 5,
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
  [9848] = 14,
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
    STATE(154), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(170), 1,
      sym_comment,
    STATE(192), 1,
      sym_connector_export,
    STATE(193), 1,
      sym_port_ref,
    STATE(691), 1,
      sym_attr_dcl,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9895] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
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
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_scoped_name,
    STATE(157), 1,
      sym_literal,
    STATE(171), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(161), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1445), 1,
      anon_sym_GT,
    STATE(172), 1,
      sym_comment,
    ACTIONS(1449), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1447), 10,
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
  [9970] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_SLASH,
    ACTIONS(1451), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_comment,
    ACTIONS(1167), 11,
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
  [9999] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1343), 1,
      anon_sym_SLASH,
    ACTIONS(1453), 1,
      anon_sym_GT,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_comment,
    ACTIONS(1345), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10032] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1457), 1,
      anon_sym_GT,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1449), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1459), 10,
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
  [10061] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1461), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_comment,
    ACTIONS(1465), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1463), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10088] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1467), 1,
      anon_sym_GT,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1465), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1469), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(178), 1,
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
  [10137] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1297), 1,
      anon_sym_provides,
    ACTIONS(1299), 1,
      anon_sym_uses,
    ACTIONS(1473), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym_port_ref,
    STATE(179), 1,
      sym_comment,
    STATE(763), 1,
      sym_port_body,
    ACTIONS(1307), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(692), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [10171] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1475), 1,
      anon_sym_bitmask,
    ACTIONS(1477), 1,
      anon_sym_struct,
    STATE(180), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_interface_def_repeat1,
    STATE(205), 1,
      sym_annotation_appl,
    STATE(562), 1,
      sym_interface_header,
    STATE(565), 1,
      sym_interface_kind,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [10209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(181), 1,
      sym_comment,
    ACTIONS(1479), 10,
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
  [10231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1481), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1483), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [10254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1487), 1,
      anon_sym_DOLLAR,
    STATE(183), 1,
      sym_comment,
    ACTIONS(1485), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1487), 1,
      anon_sym_DOLLAR,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1489), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10300] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1493), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_comment,
    ACTIONS(1491), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10322] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1495), 1,
      anon_sym_AT,
    STATE(205), 1,
      sym_annotation_appl,
    STATE(186), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [10346] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_SEMI,
    ACTIONS(1502), 1,
      anon_sym_getraises,
    ACTIONS(1504), 1,
      anon_sym_setraises,
    STATE(187), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(341), 1,
      sym_get_excep_expr,
    STATE(573), 1,
      sym_attr_raises_expr,
    STATE(575), 1,
      sym_set_excep_expr,
  [10380] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1493), 1,
      anon_sym_CARET,
    STATE(188), 1,
      sym_comment,
    ACTIONS(1506), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10402] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1179), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_comment,
    ACTIONS(1510), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_comment,
    ACTIONS(1179), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(192), 1,
      sym_comment,
    ACTIONS(1512), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(193), 1,
      sym_comment,
    ACTIONS(1514), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10504] = 10,
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
    ACTIONS(1516), 1,
      anon_sym_L,
    STATE(194), 1,
      sym_comment,
    STATE(515), 1,
      sym_scoped_name,
    STATE(587), 1,
      sym_imported_scope,
    STATE(593), 1,
      sym_string_literal,
  [10535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1520), 1,
      anon_sym_PIPE,
    STATE(195), 1,
      sym_comment,
    ACTIONS(1518), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(196), 1,
      sym_comment,
    ACTIONS(1522), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1524), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1526), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      sym_comment,
    ACTIONS(1205), 7,
      anon_sym_LPAREN,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10632] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    ACTIONS(1530), 1,
      anon_sym_in,
    STATE(69), 1,
      sym_param_attribute,
    STATE(200), 1,
      sym_comment,
    STATE(334), 1,
      sym_param_dcl,
    STATE(582), 1,
      sym_parameter_dcls,
    ACTIONS(1532), 2,
      anon_sym_out,
      anon_sym_inout,
  [10661] = 4,
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
  [10680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(202), 1,
      sym_comment,
    ACTIONS(1536), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10699] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1538), 1,
      anon_sym_RBRACE,
    ACTIONS(1540), 1,
      anon_sym_default,
    ACTIONS(1542), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(203), 1,
      sym_comment,
    STATE(211), 1,
      aux_sym_union_def_repeat1,
    STATE(448), 1,
      sym_case,
  [10727] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1544), 1,
      anon_sym_RBRACE,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(204), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_interface_def_repeat1,
    STATE(420), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [10755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(205), 1,
      sym_comment,
    ACTIONS(1213), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(206), 1,
      sym_comment,
    ACTIONS(1163), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10791] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_RBRACE,
    ACTIONS(1552), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1554), 1,
      sym_identifier,
    STATE(207), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_enumerator_repeat1,
    STATE(345), 1,
      sym_enumerator,
    STATE(549), 1,
      sym_enum_modifier,
  [10819] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_LBRACE,
    ACTIONS(1558), 1,
      anon_sym_COLON,
    ACTIONS(1560), 1,
      anon_sym_SEMI,
    ACTIONS(1562), 1,
      anon_sym_supports,
    STATE(208), 1,
      sym_comment,
    STATE(376), 1,
      sym_component_inheritance_spec,
    STATE(595), 1,
      sym_supported_interface_spec,
  [10847] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(209), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10865] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1564), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_array_declarator_repeat1,
    STATE(328), 1,
      sym_fixed_array_size,
    ACTIONS(1536), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10889] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1540), 1,
      anon_sym_default,
    ACTIONS(1542), 1,
      anon_sym_case,
    ACTIONS(1566), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_case_label,
    STATE(211), 1,
      sym_comment,
    STATE(219), 1,
      aux_sym_union_def_repeat1,
    STATE(448), 1,
      sym_case,
  [10917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(212), 1,
      sym_comment,
    ACTIONS(1159), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10935] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1568), 1,
      anon_sym_Object,
    ACTIONS(1570), 1,
      anon_sym_multiple,
    STATE(213), 1,
      sym_comment,
    STATE(532), 1,
      sym_scoped_name,
    STATE(740), 1,
      sym_interface_type,
  [10963] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1554), 1,
      sym_identifier,
    ACTIONS(1572), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_enumerator_repeat1,
    STATE(414), 1,
      sym_enumerator,
    STATE(549), 1,
      sym_enum_modifier,
  [10991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(215), 1,
      sym_comment,
    ACTIONS(1167), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [11009] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1564), 1,
      anon_sym_LBRACK,
    STATE(216), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_array_declarator_repeat1,
    STATE(328), 1,
      sym_fixed_array_size,
    ACTIONS(1574), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11033] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1578), 1,
      anon_sym_LBRACK,
    STATE(328), 1,
      sym_fixed_array_size,
    STATE(217), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1576), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11055] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    ACTIONS(1581), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_interface_def_repeat1,
    STATE(409), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [11083] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1583), 1,
      anon_sym_RBRACE,
    ACTIONS(1585), 1,
      anon_sym_default,
    ACTIONS(1588), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(448), 1,
      sym_case,
    STATE(219), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [11109] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(220), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(389), 1,
      sym_declarators,
    STATE(387), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(221), 1,
      sym_comment,
    ACTIONS(1593), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11149] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1568), 1,
      anon_sym_Object,
    STATE(222), 1,
      sym_comment,
    STATE(532), 1,
      sym_scoped_name,
    STATE(641), 1,
      sym_interface_type,
  [11174] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1595), 1,
      anon_sym_LBRACE,
    ACTIONS(1597), 1,
      anon_sym_COLON,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(1601), 1,
      anon_sym_supports,
    STATE(223), 1,
      sym_comment,
    STATE(703), 1,
      sym_value_inheritance_spec,
  [11199] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1475), 1,
      anon_sym_bitmask,
    ACTIONS(1477), 1,
      anon_sym_struct,
    STATE(186), 1,
      aux_sym_interface_def_repeat1,
    STATE(205), 1,
      sym_annotation_appl,
    STATE(224), 1,
      sym_comment,
  [11224] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1603), 1,
      anon_sym_RBRACE,
    ACTIONS(1605), 1,
      anon_sym_bitfield,
    STATE(225), 1,
      sym_comment,
    STATE(254), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(424), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11249] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(226), 1,
      sym_comment,
    ACTIONS(1607), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11268] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(227), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(647), 1,
      sym_declarators,
    STATE(387), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11291] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1611), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11314] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1554), 1,
      sym_identifier,
    STATE(229), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_enumerator_repeat1,
    STATE(546), 1,
      sym_enumerator,
    STATE(549), 1,
      sym_enum_modifier,
  [11339] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(230), 1,
      sym_comment,
    STATE(419), 1,
      sym_any_declarator,
    STATE(570), 1,
      sym_any_declarators,
    STATE(538), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11362] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(231), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(399), 1,
      sym_declarators,
    STATE(387), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11385] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(232), 1,
      sym_comment,
    STATE(331), 1,
      aux_sym_interface_def_repeat1,
    STATE(505), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [11410] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_bitfield,
    ACTIONS(1613), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(424), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1615), 1,
      anon_sym_COMMA,
    STATE(234), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1607), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11454] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1618), 1,
      anon_sym_SEMI,
    ACTIONS(1620), 1,
      anon_sym_raises,
    STATE(235), 1,
      sym_comment,
    STATE(410), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(633), 1,
      sym_raises_expr,
  [11479] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(236), 1,
      sym_comment,
    STATE(331), 1,
      aux_sym_interface_def_repeat1,
    STATE(332), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [11504] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1530), 1,
      anon_sym_in,
    STATE(69), 1,
      sym_param_attribute,
    STATE(237), 1,
      sym_comment,
    STATE(471), 1,
      sym_param_dcl,
    ACTIONS(1532), 2,
      anon_sym_out,
      anon_sym_inout,
  [11527] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      anon_sym_RBRACE,
    ACTIONS(1624), 1,
      anon_sym_bitfield,
    STATE(424), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
    STATE(238), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [11550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(239), 1,
      sym_comment,
    ACTIONS(1627), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11567] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(240), 1,
      sym_comment,
    STATE(331), 1,
      aux_sym_interface_def_repeat1,
    STATE(409), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [11592] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_COLON,
    ACTIONS(1601), 1,
      anon_sym_supports,
    ACTIONS(1629), 1,
      anon_sym_LBRACE,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      sym_comment,
    STATE(574), 1,
      sym_value_inheritance_spec,
  [11617] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1633), 1,
      anon_sym_truncatable,
    STATE(242), 1,
      sym_comment,
    STATE(304), 1,
      sym_scoped_name,
    STATE(305), 1,
      sym_value_name,
  [11642] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_bitfield,
    ACTIONS(1635), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(243), 1,
      sym_comment,
    STATE(424), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(244), 1,
      sym_comment,
    ACTIONS(1637), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1639), 1,
      anon_sym_LT,
    STATE(245), 1,
      sym_comment,
    ACTIONS(1641), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(246), 1,
      sym_comment,
    ACTIONS(1643), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11720] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1568), 1,
      anon_sym_Object,
    STATE(247), 1,
      sym_comment,
    STATE(532), 1,
      sym_scoped_name,
    STATE(741), 1,
      sym_interface_type,
  [11745] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1562), 1,
      anon_sym_supports,
    ACTIONS(1645), 1,
      anon_sym_COLON,
    ACTIONS(1647), 1,
      anon_sym_manages,
    STATE(248), 1,
      sym_comment,
    STATE(381), 1,
      sym_home_inheritance_spec,
    STATE(596), 1,
      sym_supported_interface_spec,
  [11770] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_AT,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(232), 1,
      aux_sym_interface_def_repeat1,
    STATE(249), 1,
      sym_comment,
    STATE(516), 1,
      sym_bit_value,
    STATE(544), 1,
      sym_annotation_appl,
  [11795] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(250), 1,
      sym_comment,
    ACTIONS(1649), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      sym_comment,
    ACTIONS(1651), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_comment,
    ACTIONS(1653), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(253), 1,
      sym_comment,
    ACTIONS(1655), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11863] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1605), 1,
      anon_sym_bitfield,
    ACTIONS(1657), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(254), 1,
      sym_comment,
    STATE(424), 1,
      sym_bitfield_spec,
    STATE(482), 1,
      sym_bitfield,
  [11888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(255), 1,
      sym_comment,
    ACTIONS(1659), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(256), 1,
      sym_comment,
    ACTIONS(1661), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11922] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    ACTIONS(1665), 1,
      anon_sym_in,
    STATE(257), 1,
      sym_comment,
    STATE(386), 1,
      sym_factory_param_dcl,
    STATE(594), 1,
      sym_factory_param_dcls,
  [11944] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1667), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      sym_comment,
    STATE(284), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1669), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [11964] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(259), 1,
      sym_comment,
    ACTIONS(1671), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11980] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(260), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(793), 1,
      sym_interface_name,
  [12002] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1675), 1,
      anon_sym_LBRACE,
    ACTIONS(1677), 1,
      anon_sym_primarykey,
    STATE(261), 1,
      sym_comment,
    STATE(584), 1,
      sym_primary_key_spec,
  [12024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(262), 1,
      sym_comment,
    ACTIONS(1679), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12040] = 7,
    ACTIONS(1681), 1,
      sym_escape_sequence,
    ACTIONS(1683), 1,
      anon_sym_DQUOTE,
    ACTIONS(1685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(263), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_string_literal_repeat1,
  [12062] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(264), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(450), 1,
      sym_interface_name,
  [12084] = 6,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1691), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [12104] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
    ACTIONS(1697), 1,
      anon_sym_COLON,
    STATE(266), 1,
      sym_comment,
    ACTIONS(1699), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12124] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(267), 1,
      sym_comment,
    ACTIONS(1701), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(268), 1,
      sym_comment,
    ACTIONS(1703), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12156] = 7,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1705), 1,
      anon_sym_AT,
    ACTIONS(1707), 1,
      aux_sym_comment_token2,
    STATE(269), 1,
      sym_comment,
    STATE(288), 1,
      aux_sym_interface_def_repeat1,
    STATE(534), 1,
      sym_annotation_appl,
  [12178] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(270), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(553), 1,
      sym_interface_name,
  [12200] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
    ACTIONS(1711), 1,
      anon_sym_L,
    STATE(271), 1,
      sym_comment,
    STATE(335), 1,
      sym_string_literal,
  [12222] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1711), 1,
      anon_sym_L,
    STATE(272), 1,
      sym_comment,
    STATE(592), 1,
      sym_string_literal,
  [12244] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    STATE(273), 1,
      sym_comment,
    STATE(483), 1,
      sym_raises_expr,
    ACTIONS(1713), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12264] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
    ACTIONS(1717), 1,
      anon_sym_in,
    STATE(274), 1,
      sym_comment,
    STATE(369), 1,
      sym_init_param_dcl,
    STATE(588), 1,
      sym_init_param_dcls,
  [12286] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_raises_expr_repeat1,
    STATE(275), 1,
      sym_comment,
    ACTIONS(1719), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12306] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1721), 1,
      anon_sym_LBRACE,
    ACTIONS(1723), 1,
      anon_sym_COLON,
    ACTIONS(1725), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      sym_comment,
    STATE(599), 1,
      sym_interface_inheritance_spec,
  [12328] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    STATE(277), 1,
      sym_comment,
    STATE(468), 1,
      sym_raises_expr,
    ACTIONS(1727), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1732), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(278), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [12366] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1717), 1,
      anon_sym_in,
    ACTIONS(1734), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_comment,
    STATE(369), 1,
      sym_init_param_dcl,
    STATE(597), 1,
      sym_init_param_dcls,
  [12388] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1736), 1,
      anon_sym_COMMA,
    ACTIONS(1738), 1,
      anon_sym_LBRACE,
    ACTIONS(1740), 1,
      anon_sym_supports,
    STATE(280), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(281), 1,
      sym_comment,
    ACTIONS(1742), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12426] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1744), 1,
      anon_sym_RPAREN,
    ACTIONS(1746), 1,
      anon_sym_in,
    STATE(282), 1,
      sym_comment,
    STATE(417), 1,
      sym_in_param_dcl,
    STATE(643), 1,
      sym_in_parameter_dcls,
  [12448] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(283), 1,
      sym_comment,
    STATE(398), 1,
      sym_declarator,
    STATE(387), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12468] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1667), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_declarators_repeat1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(1748), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [12488] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(285), 1,
      sym_comment,
    STATE(304), 1,
      sym_scoped_name,
    STATE(358), 1,
      sym_value_name,
  [12510] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(286), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(350), 1,
      sym_interface_name,
  [12532] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(287), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(362), 1,
      sym_interface_name,
  [12554] = 7,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1705), 1,
      anon_sym_AT,
    ACTIONS(1750), 1,
      aux_sym_comment_token1,
    STATE(288), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_interface_def_repeat1,
    STATE(534), 1,
      sym_annotation_appl,
  [12576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(289), 1,
      sym_comment,
    ACTIONS(1752), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12592] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1736), 1,
      anon_sym_COMMA,
    ACTIONS(1738), 1,
      anon_sym_LBRACE,
    ACTIONS(1740), 1,
      anon_sym_supports,
    STATE(290), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12614] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    STATE(291), 1,
      sym_comment,
    ACTIONS(1455), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1756), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_raises_expr_repeat1,
  [12654] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(293), 1,
      sym_comment,
    STATE(732), 1,
      sym_declarator,
    STATE(387), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(294), 1,
      sym_comment,
    ACTIONS(1758), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12690] = 7,
    ACTIONS(1681), 1,
      sym_escape_sequence,
    ACTIONS(1685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1760), 1,
      anon_sym_DQUOTE,
    STATE(295), 1,
      sym_comment,
    STATE(296), 1,
      aux_sym_string_literal_repeat1,
  [12712] = 6,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1762), 1,
      sym_escape_sequence,
    ACTIONS(1765), 1,
      anon_sym_DQUOTE,
    ACTIONS(1767), 1,
      aux_sym_string_literal_token1,
    STATE(296), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [12732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_comment,
    ACTIONS(1770), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12748] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(298), 1,
      sym_comment,
    ACTIONS(1772), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12764] = 6,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1774), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1691), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [12784] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_comment,
    STATE(380), 1,
      aux_sym_raises_expr_repeat1,
  [12806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(301), 1,
      sym_comment,
    ACTIONS(1778), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12822] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_SQUOTE,
    ACTIONS(1780), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
    STATE(302), 2,
      sym_comment,
      aux_sym_char_literal_repeat1,
  [12840] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(280), 1,
      sym_value_name,
    STATE(303), 1,
      sym_comment,
    STATE(304), 1,
      sym_scoped_name,
  [12862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(304), 1,
      sym_comment,
    ACTIONS(1785), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [12880] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1736), 1,
      anon_sym_COMMA,
    ACTIONS(1787), 1,
      anon_sym_LBRACE,
    ACTIONS(1789), 1,
      anon_sym_supports,
    STATE(290), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(305), 1,
      sym_comment,
  [12902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(306), 1,
      sym_comment,
    ACTIONS(1455), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12918] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1677), 1,
      anon_sym_primarykey,
    ACTIONS(1791), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_comment,
    STATE(662), 1,
      sym_primary_key_spec,
  [12940] = 7,
    ACTIONS(1681), 1,
      sym_escape_sequence,
    ACTIONS(1685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1793), 1,
      anon_sym_DQUOTE,
    STATE(296), 1,
      aux_sym_string_literal_repeat1,
    STATE(308), 1,
      sym_comment,
  [12962] = 7,
    ACTIONS(1681), 1,
      sym_escape_sequence,
    ACTIONS(1685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1793), 1,
      anon_sym_DQUOTE,
    STATE(295), 1,
      aux_sym_string_literal_repeat1,
    STATE(309), 1,
      sym_comment,
  [12984] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1677), 1,
      anon_sym_primarykey,
    ACTIONS(1795), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_comment,
    STATE(631), 1,
      sym_primary_key_spec,
  [13006] = 6,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1797), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1799), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13026] = 6,
    ACTIONS(1138), 1,
      aux_sym_comment_token1,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1801), 1,
      anon_sym_AT,
    STATE(534), 1,
      sym_annotation_appl,
    STATE(312), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [13046] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(313), 1,
      sym_comment,
    STATE(338), 1,
      sym_scoped_name,
    STATE(401), 1,
      sym_interface_name,
  [13068] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_COLON,
    ACTIONS(1601), 1,
      anon_sym_supports,
    ACTIONS(1804), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_comment,
    STATE(782), 1,
      sym_value_inheritance_spec,
  [13090] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1736), 1,
      anon_sym_COMMA,
    ACTIONS(1806), 1,
      anon_sym_LBRACE,
    ACTIONS(1808), 1,
      anon_sym_supports,
    STATE(315), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [13112] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1810), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1813), 1,
      sym_identifier,
    STATE(549), 1,
      sym_enum_modifier,
    STATE(316), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [13132] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1815), 1,
      sym_identifier,
    STATE(316), 1,
      aux_sym_enumerator_repeat1,
    STATE(317), 1,
      sym_comment,
    STATE(549), 1,
      sym_enum_modifier,
  [13154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1817), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1819), 1,
      anon_sym_COMMA,
    ACTIONS(1822), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(319), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [13188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1824), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13204] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(321), 1,
      sym_comment,
    ACTIONS(1826), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13220] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1711), 1,
      anon_sym_L,
    STATE(322), 1,
      sym_comment,
    STATE(590), 1,
      sym_string_literal,
  [13242] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1165), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13258] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1161), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13274] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1157), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13290] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_COLON,
    ACTIONS(1601), 1,
      anon_sym_supports,
    ACTIONS(1828), 1,
      anon_sym_LBRACE,
    STATE(326), 1,
      sym_comment,
    STATE(698), 1,
      sym_value_inheritance_spec,
  [13312] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1830), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1179), 2,
      anon_sym_AT,
      sym_identifier,
  [13332] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1832), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [13348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(329), 1,
      sym_comment,
    ACTIONS(1834), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [13364] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(330), 1,
      sym_comment,
    STATE(463), 1,
      sym_any_declarator,
    STATE(538), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [13384] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      sym_identifier,
    ACTIONS(1836), 1,
      anon_sym_AT,
    STATE(544), 1,
      sym_annotation_appl,
    STATE(331), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [13404] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(1841), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym_comment,
    STATE(452), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(1846), 1,
      anon_sym_RBRACE,
    STATE(333), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [13440] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1848), 1,
      anon_sym_COMMA,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_comment,
    STATE(423), 1,
      aux_sym_parameter_dcls_repeat1,
  [13459] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1852), 1,
      anon_sym_COMMA,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      sym_comment,
    STATE(422), 1,
      aux_sym_context_expr_repeat1,
  [13478] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1455), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13495] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1856), 1,
      anon_sym_GT,
    ACTIONS(1858), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_actual_parameters_repeat1,
  [13514] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1860), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13531] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1862), 1,
      anon_sym_interface,
    ACTIONS(1864), 1,
      anon_sym_valuetype,
    ACTIONS(1866), 1,
      anon_sym_eventtype,
    STATE(339), 1,
      sym_comment,
  [13550] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1868), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [13569] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_setraises,
    ACTIONS(1870), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      sym_comment,
    STATE(639), 1,
      sym_set_excep_expr,
  [13588] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1872), 1,
      anon_sym_COMMA,
    ACTIONS(1875), 1,
      anon_sym_LBRACE,
    STATE(342), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [13605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(343), 1,
      sym_comment,
    STATE(484), 1,
      sym_scoped_name,
  [13624] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(344), 1,
      sym_comment,
    STATE(559), 1,
      sym_scoped_name,
  [13643] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1572), 1,
      anon_sym_RBRACE,
    ACTIONS(1877), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      sym_comment,
    STATE(449), 1,
      aux_sym_enum_dcl_repeat1,
  [13662] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1879), 1,
      anon_sym_COMMA,
    ACTIONS(1882), 1,
      anon_sym_RBRACE,
    STATE(346), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [13679] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_SEMI,
    ACTIONS(1886), 1,
      anon_sym_context,
    STATE(347), 1,
      sym_comment,
    STATE(754), 1,
      sym_context_expr,
  [13698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1888), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13713] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1886), 1,
      anon_sym_context,
    ACTIONS(1890), 1,
      anon_sym_SEMI,
    STATE(349), 1,
      sym_comment,
    STATE(754), 1,
      sym_context_expr,
  [13732] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1806), 1,
      anon_sym_LBRACE,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13751] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1894), 1,
      sym_identifier,
    STATE(351), 1,
      sym_comment,
    STATE(495), 1,
      sym_scoped_name,
  [13770] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1830), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1179), 2,
      anon_sym_AT,
      sym_identifier,
  [13787] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1896), 1,
      anon_sym_COMMA,
    ACTIONS(1898), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_comment,
    STATE(443), 1,
      aux_sym_any_declarators_repeat1,
  [13806] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(354), 1,
      sym_comment,
    ACTIONS(1900), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1205), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [13838] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    STATE(356), 1,
      sym_comment,
    ACTIONS(1902), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13855] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(261), 1,
      sym_scoped_name,
    STATE(357), 1,
      sym_comment,
  [13874] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1822), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13889] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1904), 1,
      anon_sym_GT,
    ACTIONS(1906), 1,
      anon_sym_COMMA,
    STATE(359), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [13906] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(322), 1,
      sym_scoped_name,
    STATE(360), 1,
      sym_comment,
  [13925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1909), 1,
      anon_sym_GT,
    ACTIONS(1911), 1,
      anon_sym_COMMA,
    STATE(361), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [13942] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(1914), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13961] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(187), 1,
      sym_simple_declarator,
    STATE(363), 1,
      sym_comment,
    STATE(655), 1,
      sym_attr_declarator,
  [13980] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(272), 1,
      sym_scoped_name,
    STATE(364), 1,
      sym_comment,
  [13999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
    ACTIONS(1921), 1,
      anon_sym_RPAREN,
    STATE(365), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [14016] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(1923), 1,
      anon_sym_SEMI,
    STATE(366), 1,
      sym_comment,
    STATE(654), 1,
      sym_raises_expr,
  [14035] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [14052] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1203), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [14067] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1925), 1,
      anon_sym_COMMA,
    ACTIONS(1927), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_comment,
    STATE(429), 1,
      aux_sym_init_param_dcls_repeat1,
  [14086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1929), 1,
      anon_sym_GT,
    ACTIONS(1931), 1,
      anon_sym_COMMA,
    STATE(370), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [14103] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1877), 1,
      anon_sym_COMMA,
    ACTIONS(1934), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(371), 1,
      sym_comment,
  [14122] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1938), 1,
      aux_sym_string_literal_token1,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1936), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE,
  [14139] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(354), 1,
      sym_scoped_name,
    STATE(373), 1,
      sym_comment,
  [14158] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1940), 1,
      anon_sym_GT,
    ACTIONS(1942), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(374), 1,
      sym_comment,
  [14177] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(228), 1,
      sym_scoped_name,
    STATE(375), 1,
      sym_comment,
  [14196] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1562), 1,
      anon_sym_supports,
    ACTIONS(1944), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym_comment,
    STATE(771), 1,
      sym_supported_interface_spec,
  [14215] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(1946), 1,
      anon_sym_SEMI,
    STATE(377), 1,
      sym_comment,
    STATE(660), 1,
      sym_raises_expr,
  [14234] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(356), 1,
      sym_scoped_name,
    STATE(378), 1,
      sym_comment,
  [14253] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(307), 1,
      sym_scoped_name,
    STATE(379), 1,
      sym_comment,
  [14272] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1948), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_raises_expr_repeat1,
    STATE(380), 1,
      sym_comment,
  [14291] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1562), 1,
      anon_sym_supports,
    ACTIONS(1950), 1,
      anon_sym_manages,
    STATE(381), 1,
      sym_comment,
    STATE(768), 1,
      sym_supported_interface_spec,
  [14310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(382), 1,
      sym_comment,
    ACTIONS(1952), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [14325] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1942), 1,
      anon_sym_COMMA,
    ACTIONS(1954), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(383), 1,
      sym_comment,
  [14344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1956), 1,
      anon_sym_COMMA,
    ACTIONS(1959), 1,
      anon_sym_RPAREN,
    STATE(384), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [14361] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(385), 1,
      sym_comment,
    STATE(499), 1,
      sym_scoped_name,
  [14380] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1961), 1,
      anon_sym_COMMA,
    ACTIONS(1963), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_factory_param_dcls_repeat1,
  [14399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(387), 1,
      sym_comment,
    ACTIONS(1965), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14414] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(388), 1,
      sym_comment,
    STATE(542), 1,
      sym_scoped_name,
  [14433] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1967), 1,
      anon_sym_SEMI,
    ACTIONS(1969), 1,
      anon_sym_default,
    STATE(389), 1,
      sym_comment,
    STATE(613), 1,
      sym_default,
  [14452] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(1841), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(390), 1,
      sym_comment,
  [14471] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1971), 1,
      anon_sym_GT,
    ACTIONS(1973), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_formal_parameters_repeat1,
  [14490] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1975), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_raises_expr_repeat1,
    STATE(392), 1,
      sym_comment,
  [14509] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(1977), 1,
      anon_sym_SEMI,
    STATE(393), 1,
      sym_comment,
    STATE(709), 1,
      sym_raises_expr,
  [14528] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(1979), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      sym_comment,
    STATE(665), 1,
      sym_raises_expr,
  [14547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1981), 1,
      anon_sym_SEMI,
    ACTIONS(1983), 1,
      sym_identifier,
    STATE(395), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [14564] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(1986), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(396), 1,
      sym_comment,
  [14583] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1988), 1,
      anon_sym_COMMA,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_annotation_appl_params_repeat1,
  [14602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1732), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14617] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1969), 1,
      anon_sym_default,
    ACTIONS(1992), 1,
      anon_sym_SEMI,
    STATE(399), 1,
      sym_comment,
    STATE(606), 1,
      sym_default,
  [14636] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(400), 1,
      sym_comment,
    STATE(456), 1,
      sym_scoped_name,
  [14655] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(1994), 1,
      anon_sym_LBRACE,
    STATE(401), 1,
      sym_comment,
    STATE(451), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14674] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1996), 1,
      anon_sym_SEMI,
    ACTIONS(1998), 1,
      sym_identifier,
    STATE(395), 1,
      aux_sym_bitfield_repeat1,
    STATE(402), 1,
      sym_comment,
  [14693] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(1994), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(403), 1,
      sym_comment,
  [14712] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(265), 1,
      aux_sym_char_literal_repeat1,
    STATE(404), 1,
      sym_comment,
    ACTIONS(1691), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [14729] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2000), 1,
      anon_sym_SEMI,
    ACTIONS(2002), 1,
      anon_sym_switch,
    ACTIONS(2004), 1,
      sym_identifier,
    STATE(405), 1,
      sym_comment,
  [14748] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1886), 1,
      anon_sym_context,
    ACTIONS(2006), 1,
      anon_sym_SEMI,
    STATE(406), 1,
      sym_comment,
    STATE(754), 1,
      sym_context_expr,
  [14767] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1167), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2008), 1,
      anon_sym_LT,
    ACTIONS(2010), 1,
      anon_sym_LBRACE,
    STATE(407), 1,
      sym_comment,
  [14786] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(2012), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(408), 1,
      sym_comment,
  [14805] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(2012), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(409), 1,
      sym_comment,
  [14824] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(2014), 1,
      anon_sym_SEMI,
    STATE(410), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [14843] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(292), 1,
      sym_scoped_name,
    STATE(411), 1,
      sym_comment,
  [14862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2016), 1,
      anon_sym_COMMA,
    ACTIONS(2019), 1,
      anon_sym_RPAREN,
    STATE(412), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [14879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2021), 1,
      anon_sym_COMMA,
    ACTIONS(2024), 1,
      anon_sym_SEMI,
    STATE(413), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [14896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1877), 1,
      anon_sym_COMMA,
    ACTIONS(2026), 1,
      anon_sym_RBRACE,
    STATE(371), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(414), 1,
      sym_comment,
  [14915] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(299), 1,
      aux_sym_char_literal_repeat1,
    STATE(415), 1,
      sym_comment,
    ACTIONS(1691), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [14932] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(416), 1,
      sym_comment,
    ACTIONS(2028), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      aux_sym_char_literal_token1,
  [14947] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2030), 1,
      anon_sym_COMMA,
    ACTIONS(2032), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_comment,
    STATE(442), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [14966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2034), 1,
      anon_sym_COMMA,
    ACTIONS(2037), 1,
      anon_sym_RPAREN,
    STATE(418), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [14983] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1896), 1,
      anon_sym_COMMA,
    ACTIONS(2039), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      aux_sym_any_declarators_repeat1,
    STATE(419), 1,
      sym_comment,
  [15002] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1581), 1,
      anon_sym_RBRACE,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(420), 1,
      sym_comment,
  [15021] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1711), 1,
      anon_sym_L,
    STATE(421), 1,
      sym_comment,
    STATE(467), 1,
      sym_string_literal,
  [15040] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1852), 1,
      anon_sym_COMMA,
    ACTIONS(2041), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym_context_expr_repeat1,
  [15059] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1848), 1,
      anon_sym_COMMA,
    ACTIONS(2043), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym_comment,
    STATE(432), 1,
      aux_sym_parameter_dcls_repeat1,
  [15078] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1998), 1,
      sym_identifier,
    ACTIONS(2045), 1,
      anon_sym_SEMI,
    STATE(402), 1,
      aux_sym_bitfield_repeat1,
    STATE(424), 1,
      sym_comment,
  [15097] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(235), 1,
      sym_simple_declarator,
    STATE(425), 1,
      sym_comment,
    STATE(568), 1,
      sym_readonly_attr_declarator,
  [15116] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(2047), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(426), 1,
      sym_comment,
  [15135] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(2049), 1,
      anon_sym_SEMI,
    STATE(427), 1,
      sym_comment,
    STATE(702), 1,
      sym_raises_expr,
  [15154] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2051), 1,
      sym_identifier,
    STATE(428), 1,
      sym_comment,
    STATE(530), 1,
      sym_scoped_name,
  [15173] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1925), 1,
      anon_sym_COMMA,
    ACTIONS(2053), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(429), 1,
      sym_comment,
  [15192] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1988), 1,
      anon_sym_COMMA,
    ACTIONS(2055), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(430), 1,
      sym_comment,
  [15211] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(310), 1,
      sym_scoped_name,
    STATE(431), 1,
      sym_comment,
  [15230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2057), 1,
      anon_sym_COMMA,
    ACTIONS(2060), 1,
      anon_sym_RPAREN,
    STATE(432), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [15247] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2051), 1,
      sym_identifier,
    STATE(433), 1,
      sym_comment,
    STATE(529), 1,
      sym_scoped_name,
  [15266] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1973), 1,
      anon_sym_COMMA,
    ACTIONS(2062), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(434), 1,
      sym_comment,
  [15285] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(435), 1,
      sym_comment,
    STATE(552), 1,
      sym_scoped_name,
  [15304] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2051), 1,
      sym_identifier,
    STATE(436), 1,
      sym_comment,
    STATE(528), 1,
      sym_scoped_name,
  [15323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2064), 1,
      anon_sym_COMMA,
    ACTIONS(2067), 1,
      anon_sym_RPAREN,
    STATE(437), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [15340] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(226), 1,
      sym_scoped_name,
    STATE(438), 1,
      sym_comment,
  [15359] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1721), 1,
      anon_sym_LBRACE,
    ACTIONS(1723), 1,
      anon_sym_COLON,
    STATE(439), 1,
      sym_comment,
    STATE(599), 1,
      sym_interface_inheritance_spec,
  [15378] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1858), 1,
      anon_sym_COMMA,
    ACTIONS(2069), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(440), 1,
      sym_comment,
  [15397] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2051), 1,
      sym_identifier,
    STATE(441), 1,
      sym_comment,
    STATE(526), 1,
      sym_scoped_name,
  [15416] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2030), 1,
      anon_sym_COMMA,
    ACTIONS(2071), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(442), 1,
      sym_comment,
  [15435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2073), 1,
      anon_sym_COMMA,
    ACTIONS(2076), 1,
      anon_sym_SEMI,
    STATE(443), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [15452] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_raises,
    ACTIONS(2078), 1,
      anon_sym_SEMI,
    STATE(444), 1,
      sym_comment,
    STATE(706), 1,
      sym_raises_expr,
  [15471] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1961), 1,
      anon_sym_COMMA,
    ACTIONS(2080), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(445), 1,
      sym_comment,
  [15490] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2082), 1,
      anon_sym_LBRACE,
    ACTIONS(2084), 1,
      anon_sym_COLON,
    STATE(446), 1,
      sym_comment,
    STATE(598), 1,
      sym_connector_inherit_spec,
  [15509] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(300), 1,
      sym_scoped_name,
    STATE(447), 1,
      sym_comment,
  [15528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(448), 1,
      sym_comment,
    ACTIONS(2086), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [15543] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1877), 1,
      anon_sym_COMMA,
    ACTIONS(2026), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(449), 1,
      sym_comment,
  [15562] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(2088), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(450), 1,
      sym_comment,
  [15581] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    ACTIONS(2088), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(451), 1,
      sym_comment,
  [15600] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(2090), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(452), 1,
      sym_comment,
  [15619] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(453), 1,
      sym_comment,
    STATE(521), 1,
      sym_simple_declarator,
  [15635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(454), 1,
      sym_comment,
    ACTIONS(2092), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(2094), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2096), 1,
      anon_sym_LT,
    STATE(456), 1,
      sym_comment,
  [15679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(457), 1,
      sym_comment,
    ACTIONS(2098), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15693] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2100), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      sym_comment,
  [15709] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(459), 1,
      sym_comment,
    ACTIONS(2102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15723] = 5,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2104), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(2106), 1,
      sym_preproc_arg,
    STATE(460), 1,
      sym_comment,
  [15739] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1665), 1,
      anon_sym_in,
    STATE(461), 1,
      sym_comment,
    STATE(491), 1,
      sym_factory_param_dcl,
  [15755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(462), 1,
      sym_comment,
    ACTIONS(2108), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(463), 1,
      sym_comment,
    ACTIONS(2076), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15783] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(464), 1,
      sym_comment,
    ACTIONS(2110), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15797] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1746), 1,
      anon_sym_in,
    STATE(465), 1,
      sym_comment,
    STATE(523), 1,
      sym_in_param_dcl,
  [15813] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2112), 1,
      anon_sym_LBRACE,
    ACTIONS(2114), 1,
      anon_sym_COLON,
    STATE(466), 1,
      sym_comment,
  [15829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(467), 1,
      sym_comment,
    ACTIONS(2067), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(468), 1,
      sym_comment,
    ACTIONS(2116), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(469), 1,
      sym_comment,
    STATE(489), 1,
      sym_simple_declarator,
  [15873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(470), 1,
      sym_comment,
    ACTIONS(2118), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_comment,
    ACTIONS(2060), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(472), 1,
      sym_comment,
    ACTIONS(2120), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2124), 1,
      sym_identifier,
    STATE(474), 1,
      sym_comment,
    STATE(536), 1,
      sym_annotation_appl_param,
  [15945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1717), 1,
      anon_sym_in,
    STATE(475), 1,
      sym_comment,
    STATE(479), 1,
      sym_init_param_dcl,
  [15961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(476), 1,
      sym_simple_declarator,
    STATE(477), 1,
      sym_comment,
  [15991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(478), 1,
      sym_comment,
    ACTIONS(2128), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(479), 1,
      sym_comment,
    ACTIONS(2037), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16019] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2130), 1,
      anon_sym_LBRACE,
    ACTIONS(2132), 1,
      anon_sym_COLON,
    STATE(480), 1,
      sym_comment,
  [16035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(473), 1,
      sym_simple_declarator,
    STATE(481), 1,
      sym_comment,
  [16051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_comment,
    ACTIONS(2134), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(483), 1,
      sym_comment,
    ACTIONS(1727), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2136), 1,
      anon_sym_LBRACE,
    STATE(484), 1,
      sym_comment,
  [16095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(485), 1,
      sym_comment,
    ACTIONS(2138), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2142), 1,
      sym_identifier,
    STATE(487), 1,
      sym_comment,
  [16139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(488), 1,
      sym_comment,
    ACTIONS(2144), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(489), 1,
      sym_comment,
    ACTIONS(2146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16167] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(490), 1,
      sym_comment,
    ACTIONS(2148), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(491), 1,
      sym_comment,
    ACTIONS(2019), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(492), 1,
      sym_comment,
    ACTIONS(2024), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_comment,
    ACTIONS(2150), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2152), 1,
      anon_sym_SEMI,
    ACTIONS(2154), 1,
      anon_sym_default,
    STATE(494), 1,
      sym_comment,
  [16239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2156), 1,
      anon_sym_LT,
    STATE(495), 1,
      sym_comment,
  [16255] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(2158), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_comment,
    ACTIONS(2160), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(498), 1,
      sym_comment,
    ACTIONS(2162), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2164), 1,
      anon_sym_LBRACE,
    STATE(499), 1,
      sym_comment,
  [16313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2166), 1,
      anon_sym_DQUOTE,
    ACTIONS(2168), 1,
      anon_sym_SQUOTE,
    STATE(500), 1,
      sym_comment,
  [16329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(501), 1,
      sym_comment,
    ACTIONS(2170), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2172), 1,
      sym_identifier,
    STATE(502), 1,
      sym_comment,
  [16359] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_comment,
    ACTIONS(2174), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16373] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(504), 1,
      sym_comment,
    ACTIONS(2176), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(505), 1,
      sym_comment,
    ACTIONS(2178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(506), 1,
      sym_comment,
    ACTIONS(2180), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_comment,
    ACTIONS(2182), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_comment,
    ACTIONS(2184), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(509), 1,
      sym_comment,
    ACTIONS(2186), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(510), 1,
      sym_comment,
    ACTIONS(2188), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2190), 1,
      anon_sym_GT,
    ACTIONS(2192), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      sym_comment,
  [16487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(512), 1,
      sym_comment,
    ACTIONS(2194), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2196), 1,
      sym_identifier,
    STATE(513), 1,
      sym_comment,
    STATE(730), 1,
      sym_formal_parameter_names,
  [16517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(2198), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2200), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      sym_comment,
  [16547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(516), 1,
      sym_comment,
    ACTIONS(1846), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2202), 1,
      anon_sym_LT,
    ACTIONS(2204), 1,
      sym_identifier,
    STATE(517), 1,
      sym_comment,
  [16577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(518), 1,
      sym_comment,
    ACTIONS(2206), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(519), 1,
      sym_comment,
    ACTIONS(2208), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(520), 1,
      sym_comment,
    ACTIONS(2210), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(521), 1,
      sym_comment,
    ACTIONS(2212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(494), 1,
      sym_simple_declarator,
    STATE(522), 1,
      sym_comment,
  [16649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_comment,
    ACTIONS(1959), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(524), 1,
      sym_comment,
    ACTIONS(2214), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(525), 1,
      sym_comment,
    ACTIONS(2216), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2218), 1,
      sym_identifier,
    STATE(526), 1,
      sym_comment,
  [16707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(527), 1,
      sym_comment,
    ACTIONS(2220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2222), 1,
      sym_identifier,
    STATE(528), 1,
      sym_comment,
  [16737] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2224), 1,
      sym_identifier,
    STATE(529), 1,
      sym_comment,
  [16753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2226), 1,
      sym_identifier,
    STATE(530), 1,
      sym_comment,
  [16769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_comment,
    ACTIONS(2228), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16783] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2230), 1,
      sym_identifier,
    STATE(532), 1,
      sym_comment,
  [16799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(533), 1,
      sym_comment,
    ACTIONS(1929), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16813] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(534), 1,
      sym_comment,
    ACTIONS(1211), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2232), 1,
      anon_sym_LBRACE,
    ACTIONS(2234), 1,
      anon_sym_SEMI,
    STATE(535), 1,
      sym_comment,
  [16843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(536), 1,
      sym_comment,
    ACTIONS(1921), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(537), 1,
      sym_comment,
    STATE(581), 1,
      sym_simple_declarator,
  [16873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(538), 1,
      sym_comment,
    ACTIONS(2236), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(539), 1,
      sym_comment,
    ACTIONS(1909), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16901] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    STATE(540), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(541), 1,
      sym_comment,
    ACTIONS(1904), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2238), 1,
      anon_sym_LBRACE,
    STATE(542), 1,
      sym_comment,
  [16945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2240), 1,
      anon_sym_valuetype,
    ACTIONS(2242), 1,
      anon_sym_eventtype,
    STATE(543), 1,
      sym_comment,
  [16961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(544), 1,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_AT,
      sym_identifier,
  [16975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(545), 1,
      sym_comment,
    ACTIONS(2244), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_comment,
    ACTIONS(1882), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(547), 1,
      sym_comment,
    ACTIONS(2246), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(548), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_AT,
      sym_identifier,
  [17031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_comment,
    ACTIONS(2248), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [17045] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2250), 1,
      anon_sym_GT,
    ACTIONS(2252), 1,
      anon_sym_COMMA,
    STATE(550), 1,
      sym_comment,
  [17061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_comment,
    ACTIONS(2254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2256), 1,
      anon_sym_LBRACE,
    STATE(552), 1,
      sym_comment,
  [17091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(553), 1,
      sym_comment,
    ACTIONS(1875), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [17105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(554), 1,
      sym_comment,
    ACTIONS(2258), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [17119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      sym_identifier,
    STATE(492), 1,
      sym_simple_declarator,
    STATE(555), 1,
      sym_comment,
  [17135] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2260), 1,
      anon_sym_LPAREN,
    STATE(490), 1,
      sym_exception_list,
    STATE(556), 1,
      sym_comment,
  [17151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2260), 1,
      anon_sym_LPAREN,
    STATE(557), 1,
      sym_comment,
    STATE(638), 1,
      sym_exception_list,
  [17167] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(558), 1,
      sym_comment,
    ACTIONS(2262), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2264), 1,
      anon_sym_LBRACE,
    STATE(559), 1,
      sym_comment,
  [17197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(560), 1,
      sym_comment,
    ACTIONS(2266), 2,
      anon_sym_SEMI,
      sym_identifier,
  [17211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(561), 1,
      sym_comment,
    ACTIONS(2268), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [17225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2270), 1,
      anon_sym_LBRACE,
    STATE(562), 1,
      sym_comment,
  [17238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2272), 1,
      sym_identifier,
    STATE(563), 1,
      sym_comment,
  [17251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2274), 1,
      sym_identifier,
    STATE(564), 1,
      sym_comment,
  [17264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2276), 1,
      sym_identifier,
    STATE(565), 1,
      sym_comment,
  [17277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2278), 1,
      sym_identifier,
    STATE(566), 1,
      sym_comment,
  [17290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2280), 1,
      anon_sym_EQ,
    STATE(567), 1,
      sym_comment,
  [17303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2282), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_comment,
  [17316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2284), 1,
      sym_identifier,
    STATE(569), 1,
      sym_comment,
  [17329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2286), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      sym_comment,
  [17342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2288), 1,
      anon_sym_GT,
    STATE(571), 1,
      sym_comment,
  [17355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2290), 1,
      anon_sym_LPAREN,
    STATE(572), 1,
      sym_comment,
  [17368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1868), 1,
      anon_sym_SEMI,
    STATE(573), 1,
      sym_comment,
  [17381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1804), 1,
      anon_sym_LBRACE,
    STATE(574), 1,
      sym_comment,
  [17394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1870), 1,
      anon_sym_SEMI,
    STATE(575), 1,
      sym_comment,
  [17407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2292), 1,
      sym_identifier,
    STATE(576), 1,
      sym_comment,
  [17420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2294), 1,
      sym_identifier,
    STATE(577), 1,
      sym_comment,
  [17433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2296), 1,
      anon_sym_SEMI,
    STATE(578), 1,
      sym_comment,
  [17446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2298), 1,
      anon_sym_LBRACE,
    STATE(579), 1,
      sym_comment,
  [17459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2300), 1,
      sym_identifier,
    STATE(580), 1,
      sym_comment,
  [17472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2302), 1,
      anon_sym_SEMI,
    STATE(581), 1,
      sym_comment,
  [17485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2304), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      sym_comment,
  [17498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2306), 1,
      anon_sym_SEMI,
    STATE(583), 1,
      sym_comment,
  [17511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1795), 1,
      anon_sym_LBRACE,
    STATE(584), 1,
      sym_comment,
  [17524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2308), 1,
      anon_sym_SEMI,
    STATE(585), 1,
      sym_comment,
  [17537] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1451), 1,
      anon_sym_EQ,
    STATE(586), 1,
      sym_comment,
  [17550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2310), 1,
      anon_sym_SEMI,
    STATE(587), 1,
      sym_comment,
  [17563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2312), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      sym_comment,
  [17576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2314), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_comment,
  [17589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2316), 1,
      anon_sym_SEMI,
    STATE(590), 1,
      sym_comment,
  [17602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2318), 1,
      anon_sym_SEMI,
    STATE(591), 1,
      sym_comment,
  [17615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2320), 1,
      anon_sym_SEMI,
    STATE(592), 1,
      sym_comment,
  [17628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2200), 1,
      anon_sym_SEMI,
    STATE(593), 1,
      sym_comment,
  [17641] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2322), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      sym_comment,
  [17654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1944), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_comment,
  [17667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1950), 1,
      anon_sym_manages,
    STATE(596), 1,
      sym_comment,
  [17680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2324), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_comment,
  [17693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2326), 1,
      anon_sym_LBRACE,
    STATE(598), 1,
      sym_comment,
  [17706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2328), 1,
      anon_sym_LBRACE,
    STATE(599), 1,
      sym_comment,
  [17719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2166), 1,
      anon_sym_DQUOTE,
    STATE(600), 1,
      sym_comment,
  [17732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2330), 1,
      anon_sym_SEMI,
    STATE(601), 1,
      sym_comment,
  [17745] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2332), 1,
      anon_sym_SEMI,
    STATE(602), 1,
      sym_comment,
  [17758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2334), 1,
      anon_sym_SEMI,
    STATE(603), 1,
      sym_comment,
  [17771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2336), 1,
      anon_sym_LT,
    STATE(604), 1,
      sym_comment,
  [17784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2338), 1,
      anon_sym_LT,
    STATE(605), 1,
      sym_comment,
  [17797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2340), 1,
      anon_sym_SEMI,
    STATE(606), 1,
      sym_comment,
  [17810] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2342), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [17823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2344), 1,
      anon_sym_SEMI,
    STATE(608), 1,
      sym_comment,
  [17836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2346), 1,
      anon_sym_SEMI,
    STATE(609), 1,
      sym_comment,
  [17849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2348), 1,
      sym_identifier,
    STATE(610), 1,
      sym_comment,
  [17862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1864), 1,
      anon_sym_valuetype,
    STATE(611), 1,
      sym_comment,
  [17875] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2350), 1,
      anon_sym_SEMI,
    STATE(612), 1,
      sym_comment,
  [17888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2352), 1,
      anon_sym_SEMI,
    STATE(613), 1,
      sym_comment,
  [17901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2354), 1,
      anon_sym_SEMI,
    STATE(614), 1,
      sym_comment,
  [17914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2356), 1,
      sym_identifier,
    STATE(615), 1,
      sym_comment,
  [17927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2358), 1,
      sym_identifier,
    STATE(616), 1,
      sym_comment,
  [17940] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2360), 1,
      anon_sym_SEMI,
    STATE(617), 1,
      sym_comment,
  [17953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2362), 1,
      sym_identifier,
    STATE(618), 1,
      sym_comment,
  [17966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2364), 1,
      anon_sym_attribute,
    STATE(619), 1,
      sym_comment,
  [17979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2366), 1,
      anon_sym_SEMI,
    STATE(620), 1,
      sym_comment,
  [17992] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2202), 1,
      anon_sym_LT,
    STATE(621), 1,
      sym_comment,
  [18005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2368), 1,
      sym_identifier,
    STATE(622), 1,
      sym_comment,
  [18018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2370), 1,
      anon_sym_void,
    STATE(623), 1,
      sym_comment,
  [18031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2172), 1,
      sym_identifier,
    STATE(624), 1,
      sym_comment,
  [18044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2240), 1,
      anon_sym_valuetype,
    STATE(625), 1,
      sym_comment,
  [18057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2372), 1,
      anon_sym_SEMI,
    STATE(626), 1,
      sym_comment,
  [18070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2374), 1,
      anon_sym_LBRACE,
    STATE(627), 1,
      sym_comment,
  [18083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2006), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_comment,
  [18096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(629), 1,
      sym_comment,
  [18109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2376), 1,
      sym_identifier,
    STATE(630), 1,
      sym_comment,
  [18122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2378), 1,
      anon_sym_LBRACE,
    STATE(631), 1,
      sym_comment,
  [18135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2380), 1,
      anon_sym_LPAREN,
    STATE(632), 1,
      sym_comment,
  [18148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2014), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      sym_comment,
  [18161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2382), 1,
      anon_sym_SEMI,
    STATE(634), 1,
      sym_comment,
  [18174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2384), 1,
      anon_sym_SEMI,
    STATE(635), 1,
      sym_comment,
  [18187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2386), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_comment,
  [18200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2388), 1,
      anon_sym_SEMI,
    STATE(637), 1,
      sym_comment,
  [18213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2390), 1,
      anon_sym_SEMI,
    STATE(638), 1,
      sym_comment,
  [18226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2392), 1,
      anon_sym_SEMI,
    STATE(639), 1,
      sym_comment,
  [18239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2394), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      sym_comment,
  [18252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2396), 1,
      sym_identifier,
    STATE(641), 1,
      sym_comment,
  [18265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2398), 1,
      sym_identifier,
    STATE(642), 1,
      sym_comment,
  [18278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2400), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      sym_comment,
  [18291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2402), 1,
      anon_sym_SEMI,
    STATE(644), 1,
      sym_comment,
  [18304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2404), 1,
      anon_sym_SEMI,
    STATE(645), 1,
      sym_comment,
  [18317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2406), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_comment,
  [18330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2408), 1,
      anon_sym_SEMI,
    STATE(647), 1,
      sym_comment,
  [18343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2410), 1,
      anon_sym_SEMI,
    STATE(648), 1,
      sym_comment,
  [18356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2412), 1,
      anon_sym_LBRACE,
    STATE(649), 1,
      sym_comment,
  [18369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2414), 1,
      anon_sym_LBRACE,
    STATE(650), 1,
      sym_comment,
  [18382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2416), 1,
      anon_sym_LBRACE,
    STATE(651), 1,
      sym_comment,
  [18395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2418), 1,
      anon_sym_LPAREN,
    STATE(652), 1,
      sym_comment,
  [18408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2420), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_comment,
  [18421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2049), 1,
      anon_sym_SEMI,
    STATE(654), 1,
      sym_comment,
  [18434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2422), 1,
      anon_sym_SEMI,
    STATE(655), 1,
      sym_comment,
  [18447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2424), 1,
      sym_identifier,
    STATE(656), 1,
      sym_comment,
  [18460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2426), 1,
      anon_sym_LBRACE,
    STATE(657), 1,
      sym_comment,
  [18473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2428), 1,
      anon_sym_SEMI,
    STATE(658), 1,
      sym_comment,
  [18486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2430), 1,
      anon_sym_SEMI,
    STATE(659), 1,
      sym_comment,
  [18499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2078), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_comment,
  [18512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2432), 1,
      anon_sym_SEMI,
    STATE(661), 1,
      sym_comment,
  [18525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_LBRACE,
    STATE(662), 1,
      sym_comment,
  [18538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2434), 1,
      sym_identifier,
    STATE(663), 1,
      sym_comment,
  [18551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2436), 1,
      anon_sym_RBRACK,
    STATE(664), 1,
      sym_comment,
  [18564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1977), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_comment,
  [18577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2438), 1,
      anon_sym_RBRACE,
    STATE(666), 1,
      sym_comment,
  [18590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2440), 1,
      anon_sym_SEMI,
    STATE(667), 1,
      sym_comment,
  [18603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2442), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      sym_comment,
  [18616] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2444), 1,
      aux_sym_comment_token3,
    STATE(669), 1,
      sym_comment,
  [18629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2446), 1,
      sym_identifier,
    STATE(670), 1,
      sym_comment,
  [18642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2448), 1,
      anon_sym_GT,
    STATE(671), 1,
      sym_comment,
  [18655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2450), 1,
      anon_sym_GT,
    STATE(672), 1,
      sym_comment,
  [18668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2452), 1,
      sym_identifier,
    STATE(673), 1,
      sym_comment,
  [18681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2454), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_comment,
  [18694] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2456), 1,
      anon_sym_LBRACE,
    STATE(675), 1,
      sym_comment,
  [18707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2458), 1,
      anon_sym_SEMI,
    STATE(676), 1,
      sym_comment,
  [18720] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2460), 1,
      aux_sym_preproc_call_token1,
    STATE(677), 1,
      sym_comment,
  [18733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2462), 1,
      anon_sym_GT,
    STATE(678), 1,
      sym_comment,
  [18746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2464), 1,
      anon_sym_GT,
    STATE(679), 1,
      sym_comment,
  [18759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2466), 1,
      anon_sym_RBRACE,
    STATE(680), 1,
      sym_comment,
  [18772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2468), 1,
      anon_sym_COLON,
    STATE(681), 1,
      sym_comment,
  [18785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_SLASH,
    STATE(682), 1,
      sym_comment,
  [18798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2470), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_comment,
  [18811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2472), 1,
      sym_identifier,
    STATE(684), 1,
      sym_comment,
  [18824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2474), 1,
      anon_sym_LBRACE,
    STATE(685), 1,
      sym_comment,
  [18837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2476), 1,
      anon_sym_GT,
    STATE(686), 1,
      sym_comment,
  [18850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2478), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      sym_comment,
  [18863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2480), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_comment,
  [18876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2100), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      sym_comment,
  [18889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2482), 1,
      anon_sym_SEMI,
    STATE(690), 1,
      sym_comment,
  [18902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2484), 1,
      anon_sym_SEMI,
    STATE(691), 1,
      sym_comment,
  [18915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2486), 1,
      anon_sym_SEMI,
    STATE(692), 1,
      sym_comment,
  [18928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2488), 1,
      anon_sym_LBRACE,
    STATE(693), 1,
      sym_comment,
  [18941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2490), 1,
      anon_sym_SEMI,
    STATE(694), 1,
      sym_comment,
  [18954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2492), 1,
      sym_identifier,
    STATE(695), 1,
      sym_comment,
  [18967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2494), 1,
      anon_sym_SEMI,
    STATE(696), 1,
      sym_comment,
  [18980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2496), 1,
      anon_sym_SEMI,
    STATE(697), 1,
      sym_comment,
  [18993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2498), 1,
      anon_sym_LBRACE,
    STATE(698), 1,
      sym_comment,
  [19006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2500), 1,
      anon_sym_LBRACE,
    STATE(699), 1,
      sym_comment,
  [19019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2502), 1,
      anon_sym_LBRACE,
    STATE(700), 1,
      sym_comment,
  [19032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2504), 1,
      sym_identifier,
    STATE(701), 1,
      sym_comment,
  [19045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2506), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_comment,
  [19058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2508), 1,
      anon_sym_LBRACE,
    STATE(703), 1,
      sym_comment,
  [19071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2510), 1,
      anon_sym_LT,
    STATE(704), 1,
      sym_comment,
  [19084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2512), 1,
      anon_sym_SEMI,
    STATE(705), 1,
      sym_comment,
  [19097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2514), 1,
      anon_sym_SEMI,
    STATE(706), 1,
      sym_comment,
  [19110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2516), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      sym_comment,
  [19123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2518), 1,
      sym_identifier,
    STATE(708), 1,
      sym_comment,
  [19136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2520), 1,
      anon_sym_SEMI,
    STATE(709), 1,
      sym_comment,
  [19149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2522), 1,
      anon_sym_SEMI,
    STATE(710), 1,
      sym_comment,
  [19162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2142), 1,
      sym_identifier,
    STATE(711), 1,
      sym_comment,
  [19175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2524), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_comment,
  [19188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
    STATE(713), 1,
      sym_comment,
  [19201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2526), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      sym_comment,
  [19214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2528), 1,
      anon_sym_SEMI,
    STATE(715), 1,
      sym_comment,
  [19227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2530), 1,
      anon_sym_COLON,
    STATE(716), 1,
      sym_comment,
  [19240] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2532), 1,
      anon_sym_LBRACE,
    STATE(717), 1,
      sym_comment,
  [19253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2534), 1,
      anon_sym_SEMI,
    STATE(718), 1,
      sym_comment,
  [19266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2536), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [19279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2538), 1,
      anon_sym_LBRACE,
    STATE(720), 1,
      sym_comment,
  [19292] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2540), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_comment,
  [19305] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2542), 1,
      anon_sym_enum,
    STATE(722), 1,
      sym_comment,
  [19318] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2204), 1,
      sym_identifier,
    STATE(723), 1,
      sym_comment,
  [19331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2544), 1,
      anon_sym_SEMI,
    STATE(724), 1,
      sym_comment,
  [19344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      anon_sym_GT,
    STATE(725), 1,
      sym_comment,
  [19357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2548), 1,
      anon_sym_SEMI,
    STATE(726), 1,
      sym_comment,
  [19370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2550), 1,
      anon_sym_RBRACE,
    STATE(727), 1,
      sym_comment,
  [19383] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2552), 1,
      anon_sym_LBRACE,
    STATE(728), 1,
      sym_comment,
  [19396] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2554), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      sym_comment,
  [19409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2556), 1,
      anon_sym_GT,
    STATE(730), 1,
      sym_comment,
  [19422] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2558), 1,
      sym_identifier,
    STATE(731), 1,
      sym_comment,
  [19435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2560), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_comment,
  [19448] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2562), 1,
      anon_sym_SEMI,
    STATE(733), 1,
      sym_comment,
  [19461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2564), 1,
      anon_sym_SEMI,
    STATE(734), 1,
      sym_comment,
  [19474] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2566), 1,
      anon_sym_LPAREN,
    STATE(735), 1,
      sym_comment,
  [19487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2568), 1,
      anon_sym_LPAREN,
    STATE(736), 1,
      sym_comment,
  [19500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2570), 1,
      sym_identifier,
    STATE(737), 1,
      sym_comment,
  [19513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2572), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_comment,
  [19526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2574), 1,
      sym_identifier,
    STATE(739), 1,
      sym_comment,
  [19539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2576), 1,
      sym_identifier,
    STATE(740), 1,
      sym_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2578), 1,
      sym_identifier,
    STATE(741), 1,
      sym_comment,
  [19565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2230), 1,
      sym_identifier,
    STATE(742), 1,
      sym_comment,
  [19578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2580), 1,
      anon_sym_SEMI,
    STATE(743), 1,
      sym_comment,
  [19591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2582), 1,
      anon_sym_SEMI,
    STATE(744), 1,
      sym_comment,
  [19604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2584), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_comment,
  [19617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2586), 1,
      anon_sym_LPAREN,
    STATE(746), 1,
      sym_comment,
  [19630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2588), 1,
      anon_sym_LBRACE,
    STATE(747), 1,
      sym_comment,
  [19643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2590), 1,
      anon_sym_SEMI,
    STATE(748), 1,
      sym_comment,
  [19656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
    STATE(749), 1,
      sym_comment,
  [19669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2594), 1,
      sym_identifier,
    STATE(750), 1,
      sym_comment,
  [19682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2596), 1,
      anon_sym_SEMI,
    STATE(751), 1,
      sym_comment,
  [19695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2598), 1,
      ts_builtin_sym_end,
    STATE(752), 1,
      sym_comment,
  [19708] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2600), 1,
      aux_sym_predefine_token1,
    STATE(753), 1,
      sym_comment,
  [19721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2602), 1,
      anon_sym_SEMI,
    STATE(754), 1,
      sym_comment,
  [19734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2604), 1,
      sym_identifier,
    STATE(755), 1,
      sym_comment,
  [19747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2606), 1,
      anon_sym_LPAREN,
    STATE(756), 1,
      sym_comment,
  [19760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2608), 1,
      sym_identifier,
    STATE(757), 1,
      sym_comment,
  [19773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2610), 1,
      sym_identifier,
    STATE(758), 1,
      sym_comment,
  [19786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2612), 1,
      sym_identifier,
    STATE(759), 1,
      sym_comment,
  [19799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2614), 1,
      anon_sym_SEMI,
    STATE(760), 1,
      sym_comment,
  [19812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2616), 1,
      sym_identifier,
    STATE(761), 1,
      sym_comment,
  [19825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2618), 1,
      anon_sym_enum,
    STATE(762), 1,
      sym_comment,
  [19838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2620), 1,
      anon_sym_RBRACE,
    STATE(763), 1,
      sym_comment,
  [19851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2622), 1,
      sym_identifier,
    STATE(764), 1,
      sym_comment,
  [19864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2624), 1,
      sym_identifier,
    STATE(765), 1,
      sym_comment,
  [19877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2626), 1,
      sym_identifier,
    STATE(766), 1,
      sym_comment,
  [19890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2628), 1,
      anon_sym_SEMI,
    STATE(767), 1,
      sym_comment,
  [19903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2630), 1,
      anon_sym_manages,
    STATE(768), 1,
      sym_comment,
  [19916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2632), 1,
      sym_identifier,
    STATE(769), 1,
      sym_comment,
  [19929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2634), 1,
      sym_identifier,
    STATE(770), 1,
      sym_comment,
  [19942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2636), 1,
      anon_sym_LBRACE,
    STATE(771), 1,
      sym_comment,
  [19955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2638), 1,
      anon_sym_COMMA,
    STATE(772), 1,
      sym_comment,
  [19968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2640), 1,
      sym_identifier,
    STATE(773), 1,
      sym_comment,
  [19981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2642), 1,
      sym_identifier,
    STATE(774), 1,
      sym_comment,
  [19994] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2644), 1,
      anon_sym_COMMA,
    STATE(775), 1,
      sym_comment,
  [20007] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2646), 1,
      sym_identifier,
    STATE(776), 1,
      sym_comment,
  [20020] = 4,
    ACTIONS(1687), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2648), 1,
      aux_sym_predefine_token1,
    STATE(777), 1,
      sym_comment,
  [20033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2650), 1,
      anon_sym_SEMI,
    STATE(778), 1,
      sym_comment,
  [20046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      sym_identifier,
    STATE(779), 1,
      sym_comment,
  [20059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2654), 1,
      sym_identifier,
    STATE(780), 1,
      sym_comment,
  [20072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1890), 1,
      anon_sym_SEMI,
    STATE(781), 1,
      sym_comment,
  [20085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2656), 1,
      anon_sym_LBRACE,
    STATE(782), 1,
      sym_comment,
  [20098] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2658), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      sym_comment,
  [20111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2660), 1,
      sym_identifier,
    STATE(784), 1,
      sym_comment,
  [20124] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2662), 1,
      sym_identifier,
    STATE(785), 1,
      sym_comment,
  [20137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2664), 1,
      sym_identifier,
    STATE(786), 1,
      sym_comment,
  [20150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_SEMI,
    STATE(787), 1,
      sym_comment,
  [20163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2666), 1,
      anon_sym_GT,
    STATE(788), 1,
      sym_comment,
  [20176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2668), 1,
      anon_sym_RPAREN,
    STATE(789), 1,
      sym_comment,
  [20189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2670), 1,
      anon_sym_GT,
    STATE(790), 1,
      sym_comment,
  [20202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2672), 1,
      sym_identifier,
    STATE(791), 1,
      sym_comment,
  [20215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2674), 1,
      anon_sym_RPAREN,
    STATE(792), 1,
      sym_comment,
  [20228] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1787), 1,
      anon_sym_LBRACE,
    STATE(793), 1,
      sym_comment,
  [20241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1862), 1,
      anon_sym_interface,
    STATE(794), 1,
      sym_comment,
  [20254] = 1,
    ACTIONS(2676), 1,
      ts_builtin_sym_end,
  [20258] = 1,
    ACTIONS(2678), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 145,
  [SMALL_STATE(36)] = 290,
  [SMALL_STATE(37)] = 435,
  [SMALL_STATE(38)] = 580,
  [SMALL_STATE(39)] = 725,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1160,
  [SMALL_STATE(43)] = 1305,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1593,
  [SMALL_STATE(46)] = 1735,
  [SMALL_STATE(47)] = 1879,
  [SMALL_STATE(48)] = 2021,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2295,
  [SMALL_STATE(51)] = 2431,
  [SMALL_STATE(52)] = 2500,
  [SMALL_STATE(53)] = 2569,
  [SMALL_STATE(54)] = 2638,
  [SMALL_STATE(55)] = 2765,
  [SMALL_STATE(56)] = 2834,
  [SMALL_STATE(57)] = 2903,
  [SMALL_STATE(58)] = 2972,
  [SMALL_STATE(59)] = 3041,
  [SMALL_STATE(60)] = 3174,
  [SMALL_STATE(61)] = 3242,
  [SMALL_STATE(62)] = 3310,
  [SMALL_STATE(63)] = 3378,
  [SMALL_STATE(64)] = 3446,
  [SMALL_STATE(65)] = 3573,
  [SMALL_STATE(66)] = 3700,
  [SMALL_STATE(67)] = 3827,
  [SMALL_STATE(68)] = 3954,
  [SMALL_STATE(69)] = 4081,
  [SMALL_STATE(70)] = 4208,
  [SMALL_STATE(71)] = 4335,
  [SMALL_STATE(72)] = 4462,
  [SMALL_STATE(73)] = 4589,
  [SMALL_STATE(74)] = 4655,
  [SMALL_STATE(75)] = 4721,
  [SMALL_STATE(76)] = 4826,
  [SMALL_STATE(77)] = 4931,
  [SMALL_STATE(78)] = 4986,
  [SMALL_STATE(79)] = 5041,
  [SMALL_STATE(80)] = 5093,
  [SMALL_STATE(81)] = 5140,
  [SMALL_STATE(82)] = 5187,
  [SMALL_STATE(83)] = 5234,
  [SMALL_STATE(84)] = 5281,
  [SMALL_STATE(85)] = 5328,
  [SMALL_STATE(86)] = 5375,
  [SMALL_STATE(87)] = 5422,
  [SMALL_STATE(88)] = 5469,
  [SMALL_STATE(89)] = 5518,
  [SMALL_STATE(90)] = 5565,
  [SMALL_STATE(91)] = 5612,
  [SMALL_STATE(92)] = 5661,
  [SMALL_STATE(93)] = 5708,
  [SMALL_STATE(94)] = 5755,
  [SMALL_STATE(95)] = 5802,
  [SMALL_STATE(96)] = 5849,
  [SMALL_STATE(97)] = 5895,
  [SMALL_STATE(98)] = 5941,
  [SMALL_STATE(99)] = 5986,
  [SMALL_STATE(100)] = 6031,
  [SMALL_STATE(101)] = 6076,
  [SMALL_STATE(102)] = 6121,
  [SMALL_STATE(103)] = 6204,
  [SMALL_STATE(104)] = 6247,
  [SMALL_STATE(105)] = 6290,
  [SMALL_STATE(106)] = 6333,
  [SMALL_STATE(107)] = 6376,
  [SMALL_STATE(108)] = 6419,
  [SMALL_STATE(109)] = 6462,
  [SMALL_STATE(110)] = 6505,
  [SMALL_STATE(111)] = 6548,
  [SMALL_STATE(112)] = 6591,
  [SMALL_STATE(113)] = 6634,
  [SMALL_STATE(114)] = 6677,
  [SMALL_STATE(115)] = 6720,
  [SMALL_STATE(116)] = 6768,
  [SMALL_STATE(117)] = 6854,
  [SMALL_STATE(118)] = 6902,
  [SMALL_STATE(119)] = 6950,
  [SMALL_STATE(120)] = 7036,
  [SMALL_STATE(121)] = 7122,
  [SMALL_STATE(122)] = 7164,
  [SMALL_STATE(123)] = 7250,
  [SMALL_STATE(124)] = 7298,
  [SMALL_STATE(125)] = 7381,
  [SMALL_STATE(126)] = 7464,
  [SMALL_STATE(127)] = 7547,
  [SMALL_STATE(128)] = 7630,
  [SMALL_STATE(129)] = 7713,
  [SMALL_STATE(130)] = 7796,
  [SMALL_STATE(131)] = 7879,
  [SMALL_STATE(132)] = 7959,
  [SMALL_STATE(133)] = 8039,
  [SMALL_STATE(134)] = 8119,
  [SMALL_STATE(135)] = 8199,
  [SMALL_STATE(136)] = 8267,
  [SMALL_STATE(137)] = 8347,
  [SMALL_STATE(138)] = 8427,
  [SMALL_STATE(139)] = 8507,
  [SMALL_STATE(140)] = 8581,
  [SMALL_STATE(141)] = 8652,
  [SMALL_STATE(142)] = 8712,
  [SMALL_STATE(143)] = 8780,
  [SMALL_STATE(144)] = 8845,
  [SMALL_STATE(145)] = 8902,
  [SMALL_STATE(146)] = 8957,
  [SMALL_STATE(147)] = 9019,
  [SMALL_STATE(148)] = 9078,
  [SMALL_STATE(149)] = 9111,
  [SMALL_STATE(150)] = 9144,
  [SMALL_STATE(151)] = 9174,
  [SMALL_STATE(152)] = 9204,
  [SMALL_STATE(153)] = 9234,
  [SMALL_STATE(154)] = 9282,
  [SMALL_STATE(155)] = 9332,
  [SMALL_STATE(156)] = 9362,
  [SMALL_STATE(157)] = 9392,
  [SMALL_STATE(158)] = 9422,
  [SMALL_STATE(159)] = 9472,
  [SMALL_STATE(160)] = 9502,
  [SMALL_STATE(161)] = 9552,
  [SMALL_STATE(162)] = 9582,
  [SMALL_STATE(163)] = 9630,
  [SMALL_STATE(164)] = 9664,
  [SMALL_STATE(165)] = 9694,
  [SMALL_STATE(166)] = 9724,
  [SMALL_STATE(167)] = 9754,
  [SMALL_STATE(168)] = 9784,
  [SMALL_STATE(169)] = 9818,
  [SMALL_STATE(170)] = 9848,
  [SMALL_STATE(171)] = 9895,
  [SMALL_STATE(172)] = 9941,
  [SMALL_STATE(173)] = 9970,
  [SMALL_STATE(174)] = 9999,
  [SMALL_STATE(175)] = 10032,
  [SMALL_STATE(176)] = 10061,
  [SMALL_STATE(177)] = 10088,
  [SMALL_STATE(178)] = 10115,
  [SMALL_STATE(179)] = 10137,
  [SMALL_STATE(180)] = 10171,
  [SMALL_STATE(181)] = 10209,
  [SMALL_STATE(182)] = 10231,
  [SMALL_STATE(183)] = 10254,
  [SMALL_STATE(184)] = 10277,
  [SMALL_STATE(185)] = 10300,
  [SMALL_STATE(186)] = 10322,
  [SMALL_STATE(187)] = 10346,
  [SMALL_STATE(188)] = 10380,
  [SMALL_STATE(189)] = 10402,
  [SMALL_STATE(190)] = 10426,
  [SMALL_STATE(191)] = 10445,
  [SMALL_STATE(192)] = 10466,
  [SMALL_STATE(193)] = 10485,
  [SMALL_STATE(194)] = 10504,
  [SMALL_STATE(195)] = 10535,
  [SMALL_STATE(196)] = 10556,
  [SMALL_STATE(197)] = 10575,
  [SMALL_STATE(198)] = 10594,
  [SMALL_STATE(199)] = 10613,
  [SMALL_STATE(200)] = 10632,
  [SMALL_STATE(201)] = 10661,
  [SMALL_STATE(202)] = 10680,
  [SMALL_STATE(203)] = 10699,
  [SMALL_STATE(204)] = 10727,
  [SMALL_STATE(205)] = 10755,
  [SMALL_STATE(206)] = 10773,
  [SMALL_STATE(207)] = 10791,
  [SMALL_STATE(208)] = 10819,
  [SMALL_STATE(209)] = 10847,
  [SMALL_STATE(210)] = 10865,
  [SMALL_STATE(211)] = 10889,
  [SMALL_STATE(212)] = 10917,
  [SMALL_STATE(213)] = 10935,
  [SMALL_STATE(214)] = 10963,
  [SMALL_STATE(215)] = 10991,
  [SMALL_STATE(216)] = 11009,
  [SMALL_STATE(217)] = 11033,
  [SMALL_STATE(218)] = 11055,
  [SMALL_STATE(219)] = 11083,
  [SMALL_STATE(220)] = 11109,
  [SMALL_STATE(221)] = 11132,
  [SMALL_STATE(222)] = 11149,
  [SMALL_STATE(223)] = 11174,
  [SMALL_STATE(224)] = 11199,
  [SMALL_STATE(225)] = 11224,
  [SMALL_STATE(226)] = 11249,
  [SMALL_STATE(227)] = 11268,
  [SMALL_STATE(228)] = 11291,
  [SMALL_STATE(229)] = 11314,
  [SMALL_STATE(230)] = 11339,
  [SMALL_STATE(231)] = 11362,
  [SMALL_STATE(232)] = 11385,
  [SMALL_STATE(233)] = 11410,
  [SMALL_STATE(234)] = 11435,
  [SMALL_STATE(235)] = 11454,
  [SMALL_STATE(236)] = 11479,
  [SMALL_STATE(237)] = 11504,
  [SMALL_STATE(238)] = 11527,
  [SMALL_STATE(239)] = 11550,
  [SMALL_STATE(240)] = 11567,
  [SMALL_STATE(241)] = 11592,
  [SMALL_STATE(242)] = 11617,
  [SMALL_STATE(243)] = 11642,
  [SMALL_STATE(244)] = 11667,
  [SMALL_STATE(245)] = 11684,
  [SMALL_STATE(246)] = 11703,
  [SMALL_STATE(247)] = 11720,
  [SMALL_STATE(248)] = 11745,
  [SMALL_STATE(249)] = 11770,
  [SMALL_STATE(250)] = 11795,
  [SMALL_STATE(251)] = 11812,
  [SMALL_STATE(252)] = 11829,
  [SMALL_STATE(253)] = 11846,
  [SMALL_STATE(254)] = 11863,
  [SMALL_STATE(255)] = 11888,
  [SMALL_STATE(256)] = 11905,
  [SMALL_STATE(257)] = 11922,
  [SMALL_STATE(258)] = 11944,
  [SMALL_STATE(259)] = 11964,
  [SMALL_STATE(260)] = 11980,
  [SMALL_STATE(261)] = 12002,
  [SMALL_STATE(262)] = 12024,
  [SMALL_STATE(263)] = 12040,
  [SMALL_STATE(264)] = 12062,
  [SMALL_STATE(265)] = 12084,
  [SMALL_STATE(266)] = 12104,
  [SMALL_STATE(267)] = 12124,
  [SMALL_STATE(268)] = 12140,
  [SMALL_STATE(269)] = 12156,
  [SMALL_STATE(270)] = 12178,
  [SMALL_STATE(271)] = 12200,
  [SMALL_STATE(272)] = 12222,
  [SMALL_STATE(273)] = 12244,
  [SMALL_STATE(274)] = 12264,
  [SMALL_STATE(275)] = 12286,
  [SMALL_STATE(276)] = 12306,
  [SMALL_STATE(277)] = 12328,
  [SMALL_STATE(278)] = 12348,
  [SMALL_STATE(279)] = 12366,
  [SMALL_STATE(280)] = 12388,
  [SMALL_STATE(281)] = 12410,
  [SMALL_STATE(282)] = 12426,
  [SMALL_STATE(283)] = 12448,
  [SMALL_STATE(284)] = 12468,
  [SMALL_STATE(285)] = 12488,
  [SMALL_STATE(286)] = 12510,
  [SMALL_STATE(287)] = 12532,
  [SMALL_STATE(288)] = 12554,
  [SMALL_STATE(289)] = 12576,
  [SMALL_STATE(290)] = 12592,
  [SMALL_STATE(291)] = 12614,
  [SMALL_STATE(292)] = 12632,
  [SMALL_STATE(293)] = 12654,
  [SMALL_STATE(294)] = 12674,
  [SMALL_STATE(295)] = 12690,
  [SMALL_STATE(296)] = 12712,
  [SMALL_STATE(297)] = 12732,
  [SMALL_STATE(298)] = 12748,
  [SMALL_STATE(299)] = 12764,
  [SMALL_STATE(300)] = 12784,
  [SMALL_STATE(301)] = 12806,
  [SMALL_STATE(302)] = 12822,
  [SMALL_STATE(303)] = 12840,
  [SMALL_STATE(304)] = 12862,
  [SMALL_STATE(305)] = 12880,
  [SMALL_STATE(306)] = 12902,
  [SMALL_STATE(307)] = 12918,
  [SMALL_STATE(308)] = 12940,
  [SMALL_STATE(309)] = 12962,
  [SMALL_STATE(310)] = 12984,
  [SMALL_STATE(311)] = 13006,
  [SMALL_STATE(312)] = 13026,
  [SMALL_STATE(313)] = 13046,
  [SMALL_STATE(314)] = 13068,
  [SMALL_STATE(315)] = 13090,
  [SMALL_STATE(316)] = 13112,
  [SMALL_STATE(317)] = 13132,
  [SMALL_STATE(318)] = 13154,
  [SMALL_STATE(319)] = 13170,
  [SMALL_STATE(320)] = 13188,
  [SMALL_STATE(321)] = 13204,
  [SMALL_STATE(322)] = 13220,
  [SMALL_STATE(323)] = 13242,
  [SMALL_STATE(324)] = 13258,
  [SMALL_STATE(325)] = 13274,
  [SMALL_STATE(326)] = 13290,
  [SMALL_STATE(327)] = 13312,
  [SMALL_STATE(328)] = 13332,
  [SMALL_STATE(329)] = 13348,
  [SMALL_STATE(330)] = 13364,
  [SMALL_STATE(331)] = 13384,
  [SMALL_STATE(332)] = 13404,
  [SMALL_STATE(333)] = 13423,
  [SMALL_STATE(334)] = 13440,
  [SMALL_STATE(335)] = 13459,
  [SMALL_STATE(336)] = 13478,
  [SMALL_STATE(337)] = 13495,
  [SMALL_STATE(338)] = 13514,
  [SMALL_STATE(339)] = 13531,
  [SMALL_STATE(340)] = 13550,
  [SMALL_STATE(341)] = 13569,
  [SMALL_STATE(342)] = 13588,
  [SMALL_STATE(343)] = 13605,
  [SMALL_STATE(344)] = 13624,
  [SMALL_STATE(345)] = 13643,
  [SMALL_STATE(346)] = 13662,
  [SMALL_STATE(347)] = 13679,
  [SMALL_STATE(348)] = 13698,
  [SMALL_STATE(349)] = 13713,
  [SMALL_STATE(350)] = 13732,
  [SMALL_STATE(351)] = 13751,
  [SMALL_STATE(352)] = 13770,
  [SMALL_STATE(353)] = 13787,
  [SMALL_STATE(354)] = 13806,
  [SMALL_STATE(355)] = 13823,
  [SMALL_STATE(356)] = 13838,
  [SMALL_STATE(357)] = 13855,
  [SMALL_STATE(358)] = 13874,
  [SMALL_STATE(359)] = 13889,
  [SMALL_STATE(360)] = 13906,
  [SMALL_STATE(361)] = 13925,
  [SMALL_STATE(362)] = 13942,
  [SMALL_STATE(363)] = 13961,
  [SMALL_STATE(364)] = 13980,
  [SMALL_STATE(365)] = 13999,
  [SMALL_STATE(366)] = 14016,
  [SMALL_STATE(367)] = 14035,
  [SMALL_STATE(368)] = 14052,
  [SMALL_STATE(369)] = 14067,
  [SMALL_STATE(370)] = 14086,
  [SMALL_STATE(371)] = 14103,
  [SMALL_STATE(372)] = 14122,
  [SMALL_STATE(373)] = 14139,
  [SMALL_STATE(374)] = 14158,
  [SMALL_STATE(375)] = 14177,
  [SMALL_STATE(376)] = 14196,
  [SMALL_STATE(377)] = 14215,
  [SMALL_STATE(378)] = 14234,
  [SMALL_STATE(379)] = 14253,
  [SMALL_STATE(380)] = 14272,
  [SMALL_STATE(381)] = 14291,
  [SMALL_STATE(382)] = 14310,
  [SMALL_STATE(383)] = 14325,
  [SMALL_STATE(384)] = 14344,
  [SMALL_STATE(385)] = 14361,
  [SMALL_STATE(386)] = 14380,
  [SMALL_STATE(387)] = 14399,
  [SMALL_STATE(388)] = 14414,
  [SMALL_STATE(389)] = 14433,
  [SMALL_STATE(390)] = 14452,
  [SMALL_STATE(391)] = 14471,
  [SMALL_STATE(392)] = 14490,
  [SMALL_STATE(393)] = 14509,
  [SMALL_STATE(394)] = 14528,
  [SMALL_STATE(395)] = 14547,
  [SMALL_STATE(396)] = 14564,
  [SMALL_STATE(397)] = 14583,
  [SMALL_STATE(398)] = 14602,
  [SMALL_STATE(399)] = 14617,
  [SMALL_STATE(400)] = 14636,
  [SMALL_STATE(401)] = 14655,
  [SMALL_STATE(402)] = 14674,
  [SMALL_STATE(403)] = 14693,
  [SMALL_STATE(404)] = 14712,
  [SMALL_STATE(405)] = 14729,
  [SMALL_STATE(406)] = 14748,
  [SMALL_STATE(407)] = 14767,
  [SMALL_STATE(408)] = 14786,
  [SMALL_STATE(409)] = 14805,
  [SMALL_STATE(410)] = 14824,
  [SMALL_STATE(411)] = 14843,
  [SMALL_STATE(412)] = 14862,
  [SMALL_STATE(413)] = 14879,
  [SMALL_STATE(414)] = 14896,
  [SMALL_STATE(415)] = 14915,
  [SMALL_STATE(416)] = 14932,
  [SMALL_STATE(417)] = 14947,
  [SMALL_STATE(418)] = 14966,
  [SMALL_STATE(419)] = 14983,
  [SMALL_STATE(420)] = 15002,
  [SMALL_STATE(421)] = 15021,
  [SMALL_STATE(422)] = 15040,
  [SMALL_STATE(423)] = 15059,
  [SMALL_STATE(424)] = 15078,
  [SMALL_STATE(425)] = 15097,
  [SMALL_STATE(426)] = 15116,
  [SMALL_STATE(427)] = 15135,
  [SMALL_STATE(428)] = 15154,
  [SMALL_STATE(429)] = 15173,
  [SMALL_STATE(430)] = 15192,
  [SMALL_STATE(431)] = 15211,
  [SMALL_STATE(432)] = 15230,
  [SMALL_STATE(433)] = 15247,
  [SMALL_STATE(434)] = 15266,
  [SMALL_STATE(435)] = 15285,
  [SMALL_STATE(436)] = 15304,
  [SMALL_STATE(437)] = 15323,
  [SMALL_STATE(438)] = 15340,
  [SMALL_STATE(439)] = 15359,
  [SMALL_STATE(440)] = 15378,
  [SMALL_STATE(441)] = 15397,
  [SMALL_STATE(442)] = 15416,
  [SMALL_STATE(443)] = 15435,
  [SMALL_STATE(444)] = 15452,
  [SMALL_STATE(445)] = 15471,
  [SMALL_STATE(446)] = 15490,
  [SMALL_STATE(447)] = 15509,
  [SMALL_STATE(448)] = 15528,
  [SMALL_STATE(449)] = 15543,
  [SMALL_STATE(450)] = 15562,
  [SMALL_STATE(451)] = 15581,
  [SMALL_STATE(452)] = 15600,
  [SMALL_STATE(453)] = 15619,
  [SMALL_STATE(454)] = 15635,
  [SMALL_STATE(455)] = 15649,
  [SMALL_STATE(456)] = 15663,
  [SMALL_STATE(457)] = 15679,
  [SMALL_STATE(458)] = 15693,
  [SMALL_STATE(459)] = 15709,
  [SMALL_STATE(460)] = 15723,
  [SMALL_STATE(461)] = 15739,
  [SMALL_STATE(462)] = 15755,
  [SMALL_STATE(463)] = 15769,
  [SMALL_STATE(464)] = 15783,
  [SMALL_STATE(465)] = 15797,
  [SMALL_STATE(466)] = 15813,
  [SMALL_STATE(467)] = 15829,
  [SMALL_STATE(468)] = 15843,
  [SMALL_STATE(469)] = 15857,
  [SMALL_STATE(470)] = 15873,
  [SMALL_STATE(471)] = 15887,
  [SMALL_STATE(472)] = 15901,
  [SMALL_STATE(473)] = 15915,
  [SMALL_STATE(474)] = 15929,
  [SMALL_STATE(475)] = 15945,
  [SMALL_STATE(476)] = 15961,
  [SMALL_STATE(477)] = 15975,
  [SMALL_STATE(478)] = 15991,
  [SMALL_STATE(479)] = 16005,
  [SMALL_STATE(480)] = 16019,
  [SMALL_STATE(481)] = 16035,
  [SMALL_STATE(482)] = 16051,
  [SMALL_STATE(483)] = 16065,
  [SMALL_STATE(484)] = 16079,
  [SMALL_STATE(485)] = 16095,
  [SMALL_STATE(486)] = 16109,
  [SMALL_STATE(487)] = 16123,
  [SMALL_STATE(488)] = 16139,
  [SMALL_STATE(489)] = 16153,
  [SMALL_STATE(490)] = 16167,
  [SMALL_STATE(491)] = 16181,
  [SMALL_STATE(492)] = 16195,
  [SMALL_STATE(493)] = 16209,
  [SMALL_STATE(494)] = 16223,
  [SMALL_STATE(495)] = 16239,
  [SMALL_STATE(496)] = 16255,
  [SMALL_STATE(497)] = 16269,
  [SMALL_STATE(498)] = 16283,
  [SMALL_STATE(499)] = 16297,
  [SMALL_STATE(500)] = 16313,
  [SMALL_STATE(501)] = 16329,
  [SMALL_STATE(502)] = 16343,
  [SMALL_STATE(503)] = 16359,
  [SMALL_STATE(504)] = 16373,
  [SMALL_STATE(505)] = 16387,
  [SMALL_STATE(506)] = 16401,
  [SMALL_STATE(507)] = 16415,
  [SMALL_STATE(508)] = 16429,
  [SMALL_STATE(509)] = 16443,
  [SMALL_STATE(510)] = 16457,
  [SMALL_STATE(511)] = 16471,
  [SMALL_STATE(512)] = 16487,
  [SMALL_STATE(513)] = 16501,
  [SMALL_STATE(514)] = 16517,
  [SMALL_STATE(515)] = 16531,
  [SMALL_STATE(516)] = 16547,
  [SMALL_STATE(517)] = 16561,
  [SMALL_STATE(518)] = 16577,
  [SMALL_STATE(519)] = 16591,
  [SMALL_STATE(520)] = 16605,
  [SMALL_STATE(521)] = 16619,
  [SMALL_STATE(522)] = 16633,
  [SMALL_STATE(523)] = 16649,
  [SMALL_STATE(524)] = 16663,
  [SMALL_STATE(525)] = 16677,
  [SMALL_STATE(526)] = 16691,
  [SMALL_STATE(527)] = 16707,
  [SMALL_STATE(528)] = 16721,
  [SMALL_STATE(529)] = 16737,
  [SMALL_STATE(530)] = 16753,
  [SMALL_STATE(531)] = 16769,
  [SMALL_STATE(532)] = 16783,
  [SMALL_STATE(533)] = 16799,
  [SMALL_STATE(534)] = 16813,
  [SMALL_STATE(535)] = 16827,
  [SMALL_STATE(536)] = 16843,
  [SMALL_STATE(537)] = 16857,
  [SMALL_STATE(538)] = 16873,
  [SMALL_STATE(539)] = 16887,
  [SMALL_STATE(540)] = 16901,
  [SMALL_STATE(541)] = 16915,
  [SMALL_STATE(542)] = 16929,
  [SMALL_STATE(543)] = 16945,
  [SMALL_STATE(544)] = 16961,
  [SMALL_STATE(545)] = 16975,
  [SMALL_STATE(546)] = 16989,
  [SMALL_STATE(547)] = 17003,
  [SMALL_STATE(548)] = 17017,
  [SMALL_STATE(549)] = 17031,
  [SMALL_STATE(550)] = 17045,
  [SMALL_STATE(551)] = 17061,
  [SMALL_STATE(552)] = 17075,
  [SMALL_STATE(553)] = 17091,
  [SMALL_STATE(554)] = 17105,
  [SMALL_STATE(555)] = 17119,
  [SMALL_STATE(556)] = 17135,
  [SMALL_STATE(557)] = 17151,
  [SMALL_STATE(558)] = 17167,
  [SMALL_STATE(559)] = 17181,
  [SMALL_STATE(560)] = 17197,
  [SMALL_STATE(561)] = 17211,
  [SMALL_STATE(562)] = 17225,
  [SMALL_STATE(563)] = 17238,
  [SMALL_STATE(564)] = 17251,
  [SMALL_STATE(565)] = 17264,
  [SMALL_STATE(566)] = 17277,
  [SMALL_STATE(567)] = 17290,
  [SMALL_STATE(568)] = 17303,
  [SMALL_STATE(569)] = 17316,
  [SMALL_STATE(570)] = 17329,
  [SMALL_STATE(571)] = 17342,
  [SMALL_STATE(572)] = 17355,
  [SMALL_STATE(573)] = 17368,
  [SMALL_STATE(574)] = 17381,
  [SMALL_STATE(575)] = 17394,
  [SMALL_STATE(576)] = 17407,
  [SMALL_STATE(577)] = 17420,
  [SMALL_STATE(578)] = 17433,
  [SMALL_STATE(579)] = 17446,
  [SMALL_STATE(580)] = 17459,
  [SMALL_STATE(581)] = 17472,
  [SMALL_STATE(582)] = 17485,
  [SMALL_STATE(583)] = 17498,
  [SMALL_STATE(584)] = 17511,
  [SMALL_STATE(585)] = 17524,
  [SMALL_STATE(586)] = 17537,
  [SMALL_STATE(587)] = 17550,
  [SMALL_STATE(588)] = 17563,
  [SMALL_STATE(589)] = 17576,
  [SMALL_STATE(590)] = 17589,
  [SMALL_STATE(591)] = 17602,
  [SMALL_STATE(592)] = 17615,
  [SMALL_STATE(593)] = 17628,
  [SMALL_STATE(594)] = 17641,
  [SMALL_STATE(595)] = 17654,
  [SMALL_STATE(596)] = 17667,
  [SMALL_STATE(597)] = 17680,
  [SMALL_STATE(598)] = 17693,
  [SMALL_STATE(599)] = 17706,
  [SMALL_STATE(600)] = 17719,
  [SMALL_STATE(601)] = 17732,
  [SMALL_STATE(602)] = 17745,
  [SMALL_STATE(603)] = 17758,
  [SMALL_STATE(604)] = 17771,
  [SMALL_STATE(605)] = 17784,
  [SMALL_STATE(606)] = 17797,
  [SMALL_STATE(607)] = 17810,
  [SMALL_STATE(608)] = 17823,
  [SMALL_STATE(609)] = 17836,
  [SMALL_STATE(610)] = 17849,
  [SMALL_STATE(611)] = 17862,
  [SMALL_STATE(612)] = 17875,
  [SMALL_STATE(613)] = 17888,
  [SMALL_STATE(614)] = 17901,
  [SMALL_STATE(615)] = 17914,
  [SMALL_STATE(616)] = 17927,
  [SMALL_STATE(617)] = 17940,
  [SMALL_STATE(618)] = 17953,
  [SMALL_STATE(619)] = 17966,
  [SMALL_STATE(620)] = 17979,
  [SMALL_STATE(621)] = 17992,
  [SMALL_STATE(622)] = 18005,
  [SMALL_STATE(623)] = 18018,
  [SMALL_STATE(624)] = 18031,
  [SMALL_STATE(625)] = 18044,
  [SMALL_STATE(626)] = 18057,
  [SMALL_STATE(627)] = 18070,
  [SMALL_STATE(628)] = 18083,
  [SMALL_STATE(629)] = 18096,
  [SMALL_STATE(630)] = 18109,
  [SMALL_STATE(631)] = 18122,
  [SMALL_STATE(632)] = 18135,
  [SMALL_STATE(633)] = 18148,
  [SMALL_STATE(634)] = 18161,
  [SMALL_STATE(635)] = 18174,
  [SMALL_STATE(636)] = 18187,
  [SMALL_STATE(637)] = 18200,
  [SMALL_STATE(638)] = 18213,
  [SMALL_STATE(639)] = 18226,
  [SMALL_STATE(640)] = 18239,
  [SMALL_STATE(641)] = 18252,
  [SMALL_STATE(642)] = 18265,
  [SMALL_STATE(643)] = 18278,
  [SMALL_STATE(644)] = 18291,
  [SMALL_STATE(645)] = 18304,
  [SMALL_STATE(646)] = 18317,
  [SMALL_STATE(647)] = 18330,
  [SMALL_STATE(648)] = 18343,
  [SMALL_STATE(649)] = 18356,
  [SMALL_STATE(650)] = 18369,
  [SMALL_STATE(651)] = 18382,
  [SMALL_STATE(652)] = 18395,
  [SMALL_STATE(653)] = 18408,
  [SMALL_STATE(654)] = 18421,
  [SMALL_STATE(655)] = 18434,
  [SMALL_STATE(656)] = 18447,
  [SMALL_STATE(657)] = 18460,
  [SMALL_STATE(658)] = 18473,
  [SMALL_STATE(659)] = 18486,
  [SMALL_STATE(660)] = 18499,
  [SMALL_STATE(661)] = 18512,
  [SMALL_STATE(662)] = 18525,
  [SMALL_STATE(663)] = 18538,
  [SMALL_STATE(664)] = 18551,
  [SMALL_STATE(665)] = 18564,
  [SMALL_STATE(666)] = 18577,
  [SMALL_STATE(667)] = 18590,
  [SMALL_STATE(668)] = 18603,
  [SMALL_STATE(669)] = 18616,
  [SMALL_STATE(670)] = 18629,
  [SMALL_STATE(671)] = 18642,
  [SMALL_STATE(672)] = 18655,
  [SMALL_STATE(673)] = 18668,
  [SMALL_STATE(674)] = 18681,
  [SMALL_STATE(675)] = 18694,
  [SMALL_STATE(676)] = 18707,
  [SMALL_STATE(677)] = 18720,
  [SMALL_STATE(678)] = 18733,
  [SMALL_STATE(679)] = 18746,
  [SMALL_STATE(680)] = 18759,
  [SMALL_STATE(681)] = 18772,
  [SMALL_STATE(682)] = 18785,
  [SMALL_STATE(683)] = 18798,
  [SMALL_STATE(684)] = 18811,
  [SMALL_STATE(685)] = 18824,
  [SMALL_STATE(686)] = 18837,
  [SMALL_STATE(687)] = 18850,
  [SMALL_STATE(688)] = 18863,
  [SMALL_STATE(689)] = 18876,
  [SMALL_STATE(690)] = 18889,
  [SMALL_STATE(691)] = 18902,
  [SMALL_STATE(692)] = 18915,
  [SMALL_STATE(693)] = 18928,
  [SMALL_STATE(694)] = 18941,
  [SMALL_STATE(695)] = 18954,
  [SMALL_STATE(696)] = 18967,
  [SMALL_STATE(697)] = 18980,
  [SMALL_STATE(698)] = 18993,
  [SMALL_STATE(699)] = 19006,
  [SMALL_STATE(700)] = 19019,
  [SMALL_STATE(701)] = 19032,
  [SMALL_STATE(702)] = 19045,
  [SMALL_STATE(703)] = 19058,
  [SMALL_STATE(704)] = 19071,
  [SMALL_STATE(705)] = 19084,
  [SMALL_STATE(706)] = 19097,
  [SMALL_STATE(707)] = 19110,
  [SMALL_STATE(708)] = 19123,
  [SMALL_STATE(709)] = 19136,
  [SMALL_STATE(710)] = 19149,
  [SMALL_STATE(711)] = 19162,
  [SMALL_STATE(712)] = 19175,
  [SMALL_STATE(713)] = 19188,
  [SMALL_STATE(714)] = 19201,
  [SMALL_STATE(715)] = 19214,
  [SMALL_STATE(716)] = 19227,
  [SMALL_STATE(717)] = 19240,
  [SMALL_STATE(718)] = 19253,
  [SMALL_STATE(719)] = 19266,
  [SMALL_STATE(720)] = 19279,
  [SMALL_STATE(721)] = 19292,
  [SMALL_STATE(722)] = 19305,
  [SMALL_STATE(723)] = 19318,
  [SMALL_STATE(724)] = 19331,
  [SMALL_STATE(725)] = 19344,
  [SMALL_STATE(726)] = 19357,
  [SMALL_STATE(727)] = 19370,
  [SMALL_STATE(728)] = 19383,
  [SMALL_STATE(729)] = 19396,
  [SMALL_STATE(730)] = 19409,
  [SMALL_STATE(731)] = 19422,
  [SMALL_STATE(732)] = 19435,
  [SMALL_STATE(733)] = 19448,
  [SMALL_STATE(734)] = 19461,
  [SMALL_STATE(735)] = 19474,
  [SMALL_STATE(736)] = 19487,
  [SMALL_STATE(737)] = 19500,
  [SMALL_STATE(738)] = 19513,
  [SMALL_STATE(739)] = 19526,
  [SMALL_STATE(740)] = 19539,
  [SMALL_STATE(741)] = 19552,
  [SMALL_STATE(742)] = 19565,
  [SMALL_STATE(743)] = 19578,
  [SMALL_STATE(744)] = 19591,
  [SMALL_STATE(745)] = 19604,
  [SMALL_STATE(746)] = 19617,
  [SMALL_STATE(747)] = 19630,
  [SMALL_STATE(748)] = 19643,
  [SMALL_STATE(749)] = 19656,
  [SMALL_STATE(750)] = 19669,
  [SMALL_STATE(751)] = 19682,
  [SMALL_STATE(752)] = 19695,
  [SMALL_STATE(753)] = 19708,
  [SMALL_STATE(754)] = 19721,
  [SMALL_STATE(755)] = 19734,
  [SMALL_STATE(756)] = 19747,
  [SMALL_STATE(757)] = 19760,
  [SMALL_STATE(758)] = 19773,
  [SMALL_STATE(759)] = 19786,
  [SMALL_STATE(760)] = 19799,
  [SMALL_STATE(761)] = 19812,
  [SMALL_STATE(762)] = 19825,
  [SMALL_STATE(763)] = 19838,
  [SMALL_STATE(764)] = 19851,
  [SMALL_STATE(765)] = 19864,
  [SMALL_STATE(766)] = 19877,
  [SMALL_STATE(767)] = 19890,
  [SMALL_STATE(768)] = 19903,
  [SMALL_STATE(769)] = 19916,
  [SMALL_STATE(770)] = 19929,
  [SMALL_STATE(771)] = 19942,
  [SMALL_STATE(772)] = 19955,
  [SMALL_STATE(773)] = 19968,
  [SMALL_STATE(774)] = 19981,
  [SMALL_STATE(775)] = 19994,
  [SMALL_STATE(776)] = 20007,
  [SMALL_STATE(777)] = 20020,
  [SMALL_STATE(778)] = 20033,
  [SMALL_STATE(779)] = 20046,
  [SMALL_STATE(780)] = 20059,
  [SMALL_STATE(781)] = 20072,
  [SMALL_STATE(782)] = 20085,
  [SMALL_STATE(783)] = 20098,
  [SMALL_STATE(784)] = 20111,
  [SMALL_STATE(785)] = 20124,
  [SMALL_STATE(786)] = 20137,
  [SMALL_STATE(787)] = 20150,
  [SMALL_STATE(788)] = 20163,
  [SMALL_STATE(789)] = 20176,
  [SMALL_STATE(790)] = 20189,
  [SMALL_STATE(791)] = 20202,
  [SMALL_STATE(792)] = 20215,
  [SMALL_STATE(793)] = 20228,
  [SMALL_STATE(794)] = 20241,
  [SMALL_STATE(795)] = 20254,
  [SMALL_STATE(796)] = 20258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(239),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(221),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(256),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(256),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(255),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(259),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(605),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(253),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(252),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(252),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(251),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(250),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(250),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(262),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(262),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(246),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(779),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(245),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(294),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(621),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(604),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(684),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(611),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(618),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(619),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(67),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(776),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(774),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(115),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(623),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(770),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(766),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(765),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(764),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(76),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(625),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(70),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(656),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(33),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(762),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(360),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(194),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(289),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(537),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(215),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(239),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(221),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(256),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(256),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(255),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(259),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(605),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(253),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(252),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(252),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(251),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(250),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(250),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(262),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(262),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(246),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(779),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(245),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(294),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(621),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(604),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(684),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(611),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(618),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(619),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(67),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(776),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(774),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(115),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(623),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(770),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(766),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(765),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(764),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(76),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(625),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(663),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(33),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(762),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(360),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(194),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(289),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(563),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(537),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(215),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(239),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(221),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(256),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(256),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(255),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(259),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(605),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(253),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(252),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(252),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(251),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(250),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(250),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(262),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(262),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(246),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(779),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(245),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(294),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(621),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(604),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(684),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(611),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(618),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(619),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(67),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(776),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(774),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(115),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(623),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(770),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(766),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(765),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(764),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(76),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(625),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(33),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(762),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(360),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(194),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(289),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(537),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(215),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(684),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(794),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(339),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(784),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(776),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(773),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(115),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(351),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(770),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(765),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(400),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(543),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(360),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(364),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(755),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(537),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(777),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(460),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(684),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(794),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(339),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(784),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(776),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(774),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(773),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(115),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(351),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(770),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(769),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(766),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(765),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(764),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(76),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(543),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(33),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(762),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(360),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(364),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(194),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(759),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(758),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(757),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(755),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(537),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(753),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(684),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(794),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(339),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(784),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(776),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(774),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(773),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(115),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(351),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(770),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(765),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(543),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(360),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(364),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(755),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(537),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(777),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(221),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(256),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(256),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(255),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(259),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(605),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(253),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(252),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(252),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(251),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(262),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(262),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(246),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(779),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(294),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(621),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(604),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(117),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(289),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(215),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(221),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(256),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(256),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(255),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(624),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(622),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(253),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(252),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(252),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(251),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(262),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(262),
  [1024] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(246),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(779),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(708),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(621),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(215),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(117),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 5),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 5),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 5),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_built_name, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_built_name, 1),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(619),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(67),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(247),
  [1322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(213),
  [1325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(428),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(433),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(436),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(441),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(619),
  [1364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(67),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(247),
  [1370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(213),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(441),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 4),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 4),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(619),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(67),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(247),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(213),
  [1412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(441),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 3),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 3),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(115),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(128),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(681),
  [1588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(137),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(438),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(704),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(283),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(372),
  [1765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(372),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2), SHIFT_REPEAT(416),
  [1783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(118),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(554),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(285),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 3),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 5),
  [1836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(123),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(249),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [1872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(270),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(229),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(474),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(737),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(465),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(503),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [2002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [2004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [2016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(461),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [2021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(555),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 1),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [2034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(475),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [2057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(237),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [2062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [2064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(421),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [2073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(330),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [2078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 6),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [2110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 6),
  [2162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 4),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 4),
  [2246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [2248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2598] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [2602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [2678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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

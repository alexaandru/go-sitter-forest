
; scopes
(function_literal) @local.scope
(data_property_list) @local.scope
(source_file) @local.scope

; definitions
(module_declaration name: (identifier) @local.definition)
(import_declaration name: (import_module) @local.definition)
(import_members (identifier) @local.definition)
(enum_declaration name: (identifier) @local.definition)
(data_declaration name: (identifier) @local.definition)
(function_declaration name: (identifier) @local.definition)
(extern_declaration name: (identifier) @local.definition)
(let_declaration name: (identifier) @local.definition)
(function_literal parameters: (parameter_list (identifier) @local.definition))
(data_property_value) @local.definition
(data_property_function) @local.definition

; references
(enum_case_list (enum_case_reference) @local.reference)
(type_expression type: (identifier) @local.reference)
(type_case label: (identifier) @local.reference)
(complex_invocation_expression (identifier) @local.reference)
(simple_invocation_expression (identifier) @local.reference)
(identifier) @local.reference

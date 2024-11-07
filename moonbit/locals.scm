;; Definitions

; Functions

(function_definition (function_identifier) @local.definition.function)

; Variables

(value_definition (lowercase_identifier) @local.definition.var)
(parameter (parameter_label) @local.definition.parameter)
(let_expression (pattern (simple_pattern (lowercase_identifier)) @local.definition.var))
(let_mut_expression (lowercase_identifier) @local.definition.var)

; Types

(struct_definition (identifier) @local.definition.type)
(enum_definition (identifier) @local.definition.enum)
(type_definition (identifier) @local.definition.type)
(type_identifier) @local.definition.type

;; References

; Values
(qualified_identifier) @local.reference

; Types
(qualified_type_identifier) @local.reference

;; Scopes

[
 (structure)
 (function_definition)
 (anonymous_lambda_expression)
 (named_lambda_expression)
 (block_expression)
] @local.scope

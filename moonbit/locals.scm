;; Definitions

; Functions

(function_definition (function_identifier) @local.definition)

; Variables

(value_definition (lowercase_identifier) @local.definition)
(positional_parameter (lowercase_identifier) @local.definition)
(labelled_parameter (label (lowercase_identifier)) @local.definition)
(optional_parameter (optional_label (lowercase_identifier)) @local.definition)
(optional_parameter_with_default (label (lowercase_identifier)) @local.definition)
(let_expression (pattern (simple_pattern (lowercase_identifier)) @local.definition))
(let_mut_expression (lowercase_identifier) @local.definition)

; Types

(struct_definition (identifier) @local.definition)
(enum_definition (identifier) @local.definition)
(type_definition (identifier) @local.definition)
(type_identifier) @local.definition

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

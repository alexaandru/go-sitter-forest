;; Interpolation

(interpolator) @none

;; Packages

(package_identifier) @module

;; Variables

(parameter (parameter_label) @parameter)

(pattern (simple_pattern (lowercase_identifier) @variable))

(qualified_identifier) @variable

((qualified_identifier) @variable.builtin
 (#any-of? @variable.builtin
           "self"))

;; Types

; Type identifiers

(type_identifier) @type
(qualified_type_identifier) @type
(constructor_expression (uppercase_identifier) @type)

; Type definitions

(enum_definition (identifier) @type.definition)
(struct_definition (identifier) @type.definition)
(type_definition (identifier) @type.definition)
(trait_definition (identifier) @type.definition)

; Builtin types

((qualified_type_identifier) @type.builtin
 (#any-of? @type.builtin
           "Bool"
           "String"
           "Int"
           "Int64"
           "Double"
           "Array"
           "List"))

; Constructors

(enum_constructor) @constructor

(constructor_expression (uppercase_identifier) @constructor)

; Fields

(struct_field_declaration (lowercase_identifier) @field)

(struct_field_expressions (labeled_expression (lowercase_identifier) @field))

(struct_field_expressions (labeled_expression_pun (lowercase_identifier) @field))

(struct_field_expression (labeled_expression (lowercase_identifier) @field))

(struct_field_expression (labeled_expression_pun (lowercase_identifier) @field))

(struct_field_pattern (field_single_pattern (labeled_pattern (lowercase_identifier) @field)))

(struct_field_pattern (field_single_pattern (labeled_pattern_pun (lowercase_identifier) @field)))

(dot_identifier) @field

;; Functions

; Function calls

(apply_expression (simple_expression (qualified_identifier) @function.call))

; Method calls

(method_expression (lowercase_identifier) @method.call)

(dot_apply_expression (dot_identifier) @method.call)

; Function definitions

(function_definition (function_identifier) @function)

(trait_method_declaration (function_identifier) @function)

; Builtin Functions

((qualified_identifier) @function.builtin
 (#any-of? @function.builtin
           "println"
           "print"
           "abort"
           "panic"))

;; Operators

[
	"+" "-" "*" "/" "%"
  "="
  "<" ">" ">=" "<=" "==" "!="
  "&&" "||"
  "=>" "->"
] @operator

;; Keywords

(mutability) @keyword.modifier

[
  "struct" "enum" "type" "trait"
] @keyword.type

[
  "pub" "priv" "readonly"
] @keyword.modifier

[
  "let" "mut"
  "with"
] @keyword

(derive) @keyword

[ "fn" "test" "impl" ] @keyword.function
"return" @keyword.return
[ "while" "loop" "for" "break" "continue" "in" ] @repeat

[
  "if"
  "else"
  "match"
] @conditional

;; Delimiters

[
  ";"
  ","
] @punctuation.delimiter

(colon) @punctuation.delimiter
(colon_colon) @punctuation.delimiter
(dot_operator) @punctuation.delimiter
(dot_dot) @punctuation.delimiter

[
  "(" ")"
  "{" "}"
  "[" "]"
] @punctuation.bracket

;; Literals

(string_interpolation) @string
(string_literal) @string
(multiline_string_literal) @string
(escape_sequence) @string.escape

(interpolator
 "\\{" @punctuation.special
 "}" @punctuation.special)

(integer_literal) @number
(float_literal) @float
(boolean_literal) @boolean

; Comments

(comment) @comment @spell
(docstring) @comment.documentation @spell

; Errors

(ERROR) @error

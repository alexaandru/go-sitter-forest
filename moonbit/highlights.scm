;; Interpolation

(interpolator) @none

;; Packages

(package_identifier) @module

;; Variables

; Variables

(parameter (parameter_label) @variable.parameter)
(parameter (lowercase_identifier) @variable.parameter)
((parameter (lowercase_identifier) @variable.builtin)
 (#any-of? @variable.builtin
           "self"))

(pattern (simple_pattern (lowercase_identifier) @variable))

(qualified_identifier (lowercase_identifier) @variable)
((qualified_identifier (lowercase_identifier) @variable.builtin)
 (#any-of? @variable.builtin
           "self"))
(qualified_identifier (dot_lowercase_identifier) @variable)

(value_definition (lowercase_identifier) @variable)

(let_mut_expression (lowercase_identifier) @variable)

; Constants

(const_definition (uppercase_identifier) @constant)

; ((qualified_identifier (dot_lowercase_identifier) @constant)
;  (#lua-match? @constant "^\.[A-Z]"))

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
(type_alias_definition (identifier) @type.definition)
(error_type_definition (identifier) @type.definition)

; Builtin types

((qualified_type_identifier) @type.builtin
 (#any-of? @type.builtin
           "Unit"
           "Bool"
           "Byte"
           "Int"
           "UInt"
           "Int64"
           "UInt64"
           "Float"
           "Double"
           "FixedArray"
           "Array"
           "Bytes"
           "String"
           "Error"
           "Self"))

; Constructors

(enum_constructor) @constant

(constructor_expression (uppercase_identifier) @constant)

; Fields

(struct_field_declaration (lowercase_identifier) @field)
(struct_field_expression (labeled_expression (lowercase_identifier) @field))
(struct_field_expression (labeled_expression_pun (lowercase_identifier) @field))
(struct_field_expression (labeled_expression (lowercase_identifier) @field))
(struct_field_expression (labeled_expression_pun (lowercase_identifier) @field))
(struct_pattern (struct_field_pattern (labeled_pattern (lowercase_identifier) @field)))
(struct_pattern (struct_field_pattern (labeled_pattern_pun (lowercase_identifier) @field)))
(access_expression (accessor (dot_identifier) @field))

;; Functions

; Function calls

(apply_expression (simple_expression (qualified_identifier) @function.call))

; Method calls

(method_expression (lowercase_identifier) @function.method.call)
(dot_apply_expression (dot_identifier) @function.method.call)

; Function definitions

(function_definition (function_identifier (lowercase_identifier) @function))
(trait_method_declaration (function_identifier) @function)
(impl_definition (function_identifier) @function)

; Method definitions

(function_definition (function_identifier (type_name (qualified_type_identifier)) (lowercase_identifier) @function.method))

;; Labels

(loop_label) @label
("continue" (parameter_label) @label)
("break" (parameter_label) @label)

;; Operators

[
	"+" "-" "*" "/" "%"
  "="
  "<" ">" ">=" "<=" "==" "!="
  "&&" "||"
  "=>" "->"
  "!" "!!"
] @operator

;; Keywords

(mutability) @keyword.modifier

[
  "struct" "enum" "type" "trait" "typealias"
] @keyword.type

[
  "pub" "priv" "readonly" "all" "open" "extern"
] @keyword.modifier

[
  "guard" "let" "mut" "const"
  "with"
] @keyword

(derive_keyword) @keyword

[ "fn" "test" "impl" ] @keyword.function
"return" @keyword.return
[ "while" "loop" (for_keyword) "break" "continue" "in" ] @repeat

[
  "if"
  "else"
  "match"
] @keyword.conditional

"async" @keyword.coroutine

[ "try" "raise" "catch" ] @keyword.exception

;; Delimiters

[
  ";"
  ","
] @punctuation.delimiter

(colon) @punctuation.delimiter
(colon_colon) @punctuation.delimiter
(dot) @punctuation.delimiter
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
(float_literal) @number.float
(boolean_literal) @boolean

;; Comments

(comment) @comment @spell
(docstring) @comment.documentation @spell

;; Errors

(ERROR) @error

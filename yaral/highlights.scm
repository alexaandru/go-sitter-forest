[
  "*"
  "/"
  "+"
  "-"
  "="
  ">"
  "="
  "!="
  "<"
  "<="
  ">"
  ">="
] @operator

[
  "all"
  "any"
  "not"
  "and"
  "or"
] @keyword.operator

"over" @keyword.modifier

[
  ":"
  "."
] @punctuation.delimiter

[
  "{"
  "}"
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

(rule_definition
  "rule" @keyword
  name: (identifier) @module)

(section_key) @type

[
  (raw_string_literal)
  (interpreted_string_literal)
  (interpreted_string_literal
    (escape_sequence) @string.escape)
] @string

; Meta section
(declaration_statement
  (identifier) @constant)

(variable_identifier) @variable.builtin

(attribute_identifier) @variable.member

(call_expression
  (function_expression
    operand: (identifier) @function.call
    field: (identifier) @function.call)
  (#not-eq? @function.call "if"))

(call_expression
  (function_expression
    operand: (identifier) @keyword.conditional)
  (#eq? @keyword.conditional "if"))

((integer_literal) @number
  (#not-has-parent? @number duration_literal))

(float_literal) @number.float

(boolean_literal) @boolean

(comment) @comment

(duration_literal) @string.special

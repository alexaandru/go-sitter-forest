[
  (comment)
  (preprocessor_comment)
] @comment

"#include" @keyword.import

"#define" @keyword.directive.define

[
  "#ifdef"
  "#ifndef"
  "#else"
  "#endif"
] @keyword.directive

(define_directive
  name: (identifier) @constant
  value: (_)? @string)

(ifdef_directive
  condition: (identifier) @constant)

(component) @variable.member

((component) @type
  (#match? @type "^[A-Z]"))

(components
  (component) @property .)

[
  (string)
  (resource_value)
] @string

[
  "*"
  (any_component)
] @character.special

[
  "."
  ":"
] @punctuation.delimiter

(escape_sequence) @string.escape

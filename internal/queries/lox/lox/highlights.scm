(function_declaration
  name: (identifier) @function (#set! "priority" 105)) ; increase priority to avoid conflict with variable

(call_expression
  callee: (identifier) @function.builtin
  (#eq? @function.builtin "clock")
  (#set! "priority" 110) ; increase priority to avoid conflict with function.call
)

(call_expression
  callee: (identifier) @function.call (#set! "priority" 105)) ; increase priority to avoid conflict with variable

(parameters
  (identifier) @variable.parameter (#set! "priority" 105)) ; increase priority to avoid conflict with variable

(identifier) @variable

(nil) @constant.builtin

(string) @string

(boolean) @boolean

(number) @number

[
  "print"
  "var"
  "break"
  "continue"
  "return"
] @keyword

"fun" @keyword.function

[
  "or"
  "and"
] @keyword.operator

[
  "while"
  "for"
] @keyword.repeat

[
  "if"
  "else"
] @keyword.conditional

[
  "?"
  ":"
] @keyword.conditional.ternary

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "!"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "+"
  "-"
  "*"
  "/"
  "%"
  "="
] @operator

(comment) @comment

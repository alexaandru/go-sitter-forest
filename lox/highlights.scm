(identifier) @variable

(parameters
  (identifier) @variable.parameter)

(nil) @constant.builtin

(string) @string

(boolean) @boolean

(number) @number

(function_declaration
  name: (identifier) @function)

(call_expression
  callee: (identifier) @function.call)

((identifier) @function.builtin (#eq? @function.builtin "clock"))

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

(comment) @comment

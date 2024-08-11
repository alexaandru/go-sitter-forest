(identifier) @variable

(this_expression) @variable.builtin

(parameters
  (identifier) @variable.parameter)

(get_expression
  name: (identifier) @variable.member)

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_0-9]*$"))

(nil) @constant.builtin

(string) @string

(boolean) @boolean

(number) @number

((identifier) @type
  (#match? @type "^[A-Z][a-z]"))

(class_declaration
  name: (identifier) @type)

(function_declaration
  name: (identifier) @function)

(call_expression
  callee: (identifier) @function.call)

((identifier) @function.builtin (#any-of? @function.builtin "clock" "type"))

(method_declaration
  name: (identifier) @function.method)

(call_expression
  callee: (get_expression
    name: (identifier) @function.method.call))

(method_declaration
  name: (identifier) @constructor (#eq? @constructor "init"))

(call_expression
  callee: (identifier) @constructor (#match? @constructor "^[A-Z]"))

(call_expression
  callee: (get_expression
    name: (identifier) @constructor (#match? @constructor "^[A-Z]")))

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

"class" @keyword.type

(modifiers
  "class" @keyword.modifier)

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
  "."
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

(comment) @comment


[
  "if"
  "elif"
  "else"
] @keyword.conditional

"while" @keyword.repeat
"return" @keyword.return

[
 "and"
 "or"
 "not"
] @keyword.operator

[
  "=="
  "!="
  "<"
  ">"
  "<="
  ">="
  "^"
  "*"
  "/"
  "%"
  "+"
  "-"
] @operator

(number) @number
(plane_string) @string
(format_string) @string
(boolean) @boolean
(identifier) @variable
(comment) @comment

(assignment
  (identifier) @function
  (function_expression))

(function_call
  (identifier) @function.call)


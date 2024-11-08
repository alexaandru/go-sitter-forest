[
  "module"
  ; "import"
  ; "from"
  ; "export"
  ; "as"
  "if"
  "else"
  ; "not"
  "or"
  "and"
  "implies"
  "iff"
  "all"
  "any"
] @keyword

[
  "type"
  "assume"
  "const"
  "var"
  "val"
  "nondet"
  "def"
  "pure"
  "action"
  "temporal"
  "run"
] @property

(match_expr "match" @property)


[
  "true"
  "false"
  "Int"
  "Nat"
  "Bool"
] @constant.builtin

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "-"
  "+"
  "*"
  "/"
  "%"
  "<"
  "<="
  "="
  "=="
  "!="
  "=>"
  ">"
  ">="
  "^"
  "->"
  ; TODO: and, or, iff, implies
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(type) @type
(int_literal) @number
(comment) @comment
(string) @string

(operator_application
  operator: (qualified_identifier) @function)

; operator definition is a function if it has at least one argument ...
(operator_definition
  name: (qualified_identifier) @function
  arguments: (typed_argument_list))
; ... or if the right-hand-side is a lambda expression: 
; (operator_definition
;   name: (identifier) @function
;   rhs: (lambda_expr))

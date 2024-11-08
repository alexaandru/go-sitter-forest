; highlights.scm

(hash_bang_line) @comment

(comment) @comment

[(return) (export) (local) (continue) (super) (class)] @keyword

(number) @constant

(string) @string
(interpolation
  ["#{"] @punctuation.bracket
  )

[(false) (true)] @constant.builtin

(nil) @constant.builtin

(self) @variable.builtin

[
  ","
  ":"
  "."
  "\\"
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

["and" "or" "not"] @keyword

[
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "and="
  "or="
  "..="
  "=="
  "<="
  ">="
  "~="
  "!="
  "<"
  ">"
  "+"
  "-"
  "/"
  "*"
  "%"
] @operator

(identifier) @variable

(table_constructor
[
  "{"
  "}"
] @constructor)

 (table_constructor
  (table_field 
    (identifier) @function.method))

(dot_field
  (identifier) @function.method)

(function_declaration) @function

(function_declaration
  (function_parameters) @variable.parameter) @function
(function_declaration
  (function_parameters
    (varargs) @constant ) @variable.parameter) @function

(function_call) @function

(function_call
  (identifier) @function
) @function

(function_call
  (builtin_function) @function.builtin )

(import_statement
[
  "import"
  "from"
] @keyword.local
)

(if_statement
[
  "if"
  "elseif"
  "else"
  "then"
] @keyword.control)

(if_statement
[
  "if"
  "elseif"
  "else"
] @keyword.control)

(else_if
[
  "elseif"
] @keyword.control
)

(else) @keyword.control

(unless_statement
  ["unless"] @keyword.control
)

(switch_statement
  ["switch"] @keyword.control)

(switch_when
  ["when" "then"] @keyword.control)

(switch_else
  ["else"] @keyword.control)


(for_statement
[
  "for"
] @keyword.control)

(for_func
[
 "in" 
 "do"
] @keyword.control)

(for_num
[
 "do"
] @keyword.control)


(while_statement
[
  "while"
  "do"
] @keyword.control)


(list_comprehension
[
  "for"
  "in"
  "when" 
]  @keyword.control
)

(table_comprehension
[
  "for"
  "in"
  "when" 
]  @keyword.control
)

(class_statement
  (class)
  (class_identifier)
  "extends" @keyword
)

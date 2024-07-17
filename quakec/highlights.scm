[
 "break"
 "return"
 "continue"
 "enum"
 "for"
 "while"
 "do"
 "class"
 "nosave"

 "#define"
 "#undef"
 "#ifdef"
 "#ifndef"
 "#else"
 "#endif"
 ] @keyword

[
 "--"
 "-"
 "-="
 "->"
 "="
 "!="
 "*"
 "&"
 "&&"
 "+"
 "++"
 "+="
 "<"
 "=="
 ">"
 "||"
] @operator

[
 ";"
 ":"
 "..."
] @punctuation.delimiter

[
 "(" ")"
 "{" "}"
 "[" "]"
] @punctuation.bracket

(comment) @comment

(numeric_literal) @number
(string_literal) @string

(funcall_expression
 function: (identifier) @function.call)

(funcall_expression
 function: (field_expression field: (identifier) @function.call))

(function_declaration
  name: (identifier) @function.definition)

(function_definition
 name: (identifier) @function.definition)

(function_definition
 frame_function_name: (identifier) @function.call)

(variable_definition
 name: (identifier) @variable.definition)

(field_definition
 name: (identifier) @variable.definition)

(assignment_expression
 target: (identifier) @variable)

(builtin_literal) @constant.builtin

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(parameter
 name: (identifier) @variable.parameter)

(enum_definition
 name: (identifier) @type.definition)

((identifier) @variable.builtin
 (#eq? @variable.builtin "self"))

(field_expression
 operator: ["." "->"] @operator
 field: (identifier) @variable)

(simple_type) @type

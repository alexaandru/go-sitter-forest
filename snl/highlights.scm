[
 "#define"
 "#elif"
 "#else"
 "#endif"
 "#if"
 "#ifdef"
 "#ifndef"
 "#include"
 (preproc_directive)
 (line_marker)
] @keyword

[
 (string_literal)
 (system_lib_string)
] @string

[ "(" ")" "[" "]" "{" "}" "%%" "%{" "}%" ] @punctuation.bracket
[ "," ";" ] @punctuation.delimiter
[
 "+"
 "-"
 "*"
 "&"
 "!"
 "~"
 "++"
 "--"
 "="
 ">>"
 "<<"
 "/"
 ">"
 ">="
 "<"
 "<="
 "=="
 "!="
 "^"
 "|"
 "||"
 "&&"
 "%"
 "*="
 "/="
 "%="
 "+="
 "-="
 "<<="
 ">>="
 "&="
 "^="
 "|="
] @operator
(conditional_expression [ "?" ":" ] @operator)
[
 "assign"
 "break"
 "const"
 "continue"
 "entry"
 "enum"
 "exit"
 "for"
 "foreign"
 "if"
 "monitor"
 "option"
 "program"
 "sizeof"
 "ss"
 "state"
 "struct"
 "sync"
 "syncq"
 "to"
 "typename"
 "union"
 "when"
 "while"
 ] @keyword

[
 (true)
 (false)
 (null)
] @constant

[
 (number_literal)
 (char_literal)
] @number

(call_expression
  function: (identifier) @function)
(call_expression
  function: (field_expression
    field: (identifier) @function))
(function_declarator
  declarator: (identifier) @function)
(preproc_function_def
  name: (identifier) @function.special)

(field_expression
    field: (identifier) @parameter)
(structdef
 name: (identifier) @type)
(basetype) @type
(prim_type) @type.builtin

(program name: (identifier) @constant)
(state_set name: (identifier) @function)
(state name: (identifier) @function)
(transition name: (identifier) @function)
(option name: (identifier) @constant)

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(identifier) @variable

(comment) @comment

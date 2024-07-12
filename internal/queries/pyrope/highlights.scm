; highlights.scm
(identifier) @variable

; Types

(primitive_type) @type.builtin

(expression_type) @type

(function_type) @type

; Parameters 
(function_call
  argument: (tuple
    (tuple_list
      item: (complex_identifier (identifier) @parameter))))

(simple_function_call
  argument: (expression_list
    item: (complex_identifier (identifier) @parameter)))

(function_definition
  input: (arg_list
    (arg_item_list (arg_item (complex_identifier (identifier) @parameter)))))

; Attributes

(attributes
  attr: (_ (tuple_list
    item: (complex_identifier (identifier) @function.macro))))

(attributes
  attr: (_ (tuple_list
    item: (ref_identifier (complex_identifier (identifier) @function.macro)))))

(dot_expression
  (tuple_sq (tuple_list
    item: (complex_identifier (identifier) @function.macro))))

(dot_expression
  (tuple_sq (tuple_list
    item: (ref_identifier (complex_identifier (identifier) @function.macro)))))
; Function calls

(simple_function_call
  function: (complex_identifier (identifier) @function.call))

(function_call
  function: (complex_identifier (identifier) @function.call))

(function_inline
  fun_name: (identifier) @function.call)

; Function definitions 

(function_definition_statement
  lvalue: (complex_identifier) @function)

(assignment_or_declaration_statement
  lvalue: (complex_identifier) @function
  rvalue: (lambda))

(simple_assignment
  lvalue: (identifier) @function
  rvalue: (lambda))

; Fields

(dot_expression
  (identifier) @field)

; Operators

[
  "&"
  "^"
  "|"
  "~&"
  "~^"
  "~|"
  "<"
  "<="
  ">"
  ">="
  "=="
  "!="
  "!"
  "~"
  "-"
  "..."
  "?"
  "..="
  "..<"
  "..+"
  ">>"
  "<<"
  "!&"
  "!^"
  "!|"
  "*"
  "/"
  "%"
  "+"
  "-"
  "|>" 
  "++"
  "not"
  "step"
  "implies"
  "!implies"
  "and_then"
  "or_else"
  "in"
  "!in"
  (assignment_operator)
  (match_operator)
] @operator 

(binary_expression
  operator: _ @operator)

; Keywords

[
  "in"
  "enum"
  "var"
  "let"
] @keyword

(test_statement "test" @keyword)

(fun_tok) @keyword.function
(proc_tok) @keyword.function

[
  "if"
  "elif"
  "else"
  "match"
  "while"
  "for"
] @conditional

[
 "ref"
 "reg" 
] @type.qualifier

["{" "}" "(" ")" "[" "]"] @punctuation.bracket
["," "." ":"] @punctuation.delimiter

(pipestage_scope_statement "#>" @punctuation.special)

; Distinguish strings from numbers and booleans
(constant) @number

((constant) @boolean
  (#any-of? @boolean "true" "false"))

((identifier) @boolean
  (#any-of? @boolean "true" "false"))

((constant) @string 
  (#contains? @string "'" "\""))

; Builtin Functions

((identifier) @function.builtin
  (#any-of? @function.builtin "puts" "print"))

; Verification 

((identifier) @debug
  (#any-of? @debug "assert" "cassert" "optimize" "verify" "test"))

; Comments
(comment) @comment @spell

; Identifiers
(identifier) @variable

; Function and sub declarations
(function_statement
  name: (identifier) @function)
(sub_statement
  name: (identifier) @function)

; Function calls
(function_call
  function: (prefix_exp
    (identifier) @function.call))

; Nested function calls in property access
; (function_call
;   function: (prefix_exp
;     (prefix_exp
;       (prefix_exp
;         (identifier) @variable)
;       (identifier) @property)
;     (identifier) @function.call))

; Parameters
(parameter
  name: (identifier) @parameter)

; Types
(type_specifier) @type

; Variables
(variable_declarator) @variable

; Property access
(prefix_exp
  (prefix_exp
    (identifier) @variable)
  (identifier) @property)

; Statements
(if_statement) @conditional
(for_statement) @repeat
(while_statement) @repeat
(try_statement) @exception
(return_statement) @keyword.return
(assignment_statement) @operator
(print_statement) @function.builtin

; Keywords
[
  (function_start)
  (sub_start)
  (if_start)
  (if_then)
  (if_else)
  (for_start)
  (for_to)
  (for_step)
  (for_each)
  (for_in)
  (while_start)
  (try_start)
  (try_catch)
] @keyword

; Operators
[
  "="
  "<>"
  "<"
  "<="
  ">"
  ">="
  "+"
  "-"
  "*"
  "/"
] @operator

; Literals
(boolean) @boolean
(number) @number
(string) @string
(invalid) @constant.builtin

; Comments
(comment) @comment

; Punctuation
["(" ")" "[" "]" "{" "}" "." "," "?." "?["] @punctuation.delimiter

; Special highlights for library statements
(library_statement) @include
(library_statement
  path: (string) @string.special)

; Array and associative array literals
(array) @constructor
(assoc_array) @constructor
(assoc_array_element
  key: (identifier) @property)

; Increment/decrement operators
[
  (prefix_increment_expression)
  (prefix_decrement_expression)
  (postfix_increment_expression)
  (postfix_decrement_expression)
] @operator

; Comparison operators
(comparison_expression
  [
    "="
    "<>"
    "<"
    "<="
    ">"
    ">="
  ] @operator)

; End statements
[
  (end_sub)
  (end_function)
  (end_if)
  (end_for)
  (end_while)
  (end_try)
] @keyword

; Special keywords (these might still need to be strings if not defined as separate nodes)
["then" "else" "else if"] @keyword

; Exit statements
[
  (exit_while_statement)
  (exit_for_statement)
] @keyword


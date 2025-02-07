(hash_bang) @comment

(ERROR) @error

(comment) @comment

(boolean) @constant.builtin.boolean

[(nil) (nilptr)] @constant.builtin

(vararg_expression) @constant

[
  "="
] @operator

[
  "and"
  "or"
  "not"
] @keyword.control

[
  ".."
  "-"
  "~"
  "#"
  "*"
  "&"
  "$"
  "~="
  "=="
  "<="
  ">="
  "<"
  ">"
  "|"
  "&"
  "~"
  "+"
  "-"
  "*"
  "/"
  "//"
  "///"
  "^"
  "<<"
  ">>"
  ">>>"
] @operator

[
  "."
  ","
  ":"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  "function"
  "defer"
  "in"
  "do"
  "return" 
  (break)
  "in"
  "defer"
  "goto"
  (continue)
  (fallthrough)
  "end"
] @keyword

(string) @string

(number) @constant

[(type) (return_type)] @type

(annotation
  ["<"">"] @punctuation.brakcet)

(annotation
  (identifier) @attribute)

["@"] @operator

(variable_list
  ((identifier) @variable.builtin
  (#eq? @variable.builtin "self")))

(variable_list
  (identifier) @variable)

((identifier) @variable.builtin
 (#eq? @variable.builtin "self"))

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_0-9]*$"))

(record
   (record_field
     (identifier) @variable.other.member))

(enum
   (enum_field
     (identifier) @variable))

(union
   (union_field
     (identifier) @variable.other.member))

["local" "global" "return"] @keyword

[
  "if"
  "else"
  "elseif"
  "then"
  "while"
  "repeat"
  "until"
  "for"
  "switch"
  "case"
] @keyword.control

(escape_sequence) @constant.character.escape

(function_definition
  (identifier) @function)

(parameter) @variable.parameter

(parameter (identifier) @variable.parameter
  (#match? @variable.parameter "^[A-Z][A-Z_0-9]*$"))

(function_call
  (identifier) @function.builtin
  (#any-of? @function.builtin 
  "require" "print" "panic" "error" "assert" "check" "likely" "unlikely"
  "ipairs" "mipairs" "next" "mnext" "pairs" "mpairs" "select" "tostring"
  "tostringview" "tonumber" "tointeger" "type" "new" "delete" "collectgarbage"))

(function_call
  (identifier) @function)

(dot_field
    (field) @variable.other.member)

(dot_variable
    (field) @variable.other.member)

(method_field
    (field) @function.method)

(goto_location "::" @keyword.directive)

(preproc_statement
  ["##[[" "]]" "##"] @keyword.directive)
(preproc_statement
  ["##[=[" "]=]" "##"] @keyword.directive)
(preproc_statement
  ["##[==[" "]==]" "##"] @keyword.directive)
(preproc_statement
  ["##[===[" "]===]" "##"] @keyword.directive)

(preproc_expression
  ["#[" "]#" "#|" "|#"] @keyword.directive)

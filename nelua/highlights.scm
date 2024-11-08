(hash_bang_line) @comment

(comment) @comment

[(true) (false)] @constant.builtin.boolean

[(nil) (nilptr)] @constant.builtin

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
  "()"
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

(function_declaration
  (identifier) @function)

(function_declaration
  (dot_function_declaration (dot_field (identifier) @variable.other.member)))

(parameters (identifier) @variable.parameter)

(function_call
  (identifier) @function.builtin
  (#any-of? @function.builtin 
  "require" "print" "panic" "error" "assert" "check" "likely" "unlikely"
  "ipairs" "mipairs" "next" "mnext" "pairs" "mpairs" "select" "tostring"
  "tostringview" "tonumber" "tointeger" "type" "new" "delete" "collectgarbage"))

(function_call
  (identifier) @function)

(function_call
  (argument) @string)

(function_call
  (dot_expression
    (dot_field (identifier)) @variable.other.member))

(dot_field
    (identifier) @variable.other.member)

(dot_method
    (identifier) @function.method)

(goto_location "::" @keyword.directive)

(lua_statement
  ["##[[" "]]" "##"] @keyword.directive)

(lua_expression
  ["#[" "]#" "#|" "|#"] @keyword.directive)

;; vim:ft=query
(comment) @comment

[
 (null)
 (boolean)
] @constant.builtin

[
 (timestamp)
] @constant

(closure_variables
  "|" @punctuation.bracket)

(integer) @number

(float) @number

[
 (string)
 (raw_string)
] @string

[
 (raw_string_escape_sequence)
 (escape_sequence)
 (regex_escape_sequence)
] @string.escape

(string_template (ident) @variable)
(string_template
  "{{" @punctuation.special
  (_)
  "}}" @punctuation.special)

(regex) @regexp

(boolean) @boolean

(ident) @variable

(event) @variable.builtin

(function_call (ident) @function.call)

[
   "abort"
   ; "as"
   ; "break"
   ; "continue"
   "else"
   "false"
   ; "for"
   "if"
   ; "impl"
   ; "in"
   ; "let"
   ; "loop"
   "null"
   "return"
   ; "self"
   ; "std"
   ; "then"
   ; "this"
   "true"
   ; "type"
   ; "until"
   ; "use"
   ; "while"
] @keyword

[
 "="
 "=="
 "!="
 "|="
 ">"
 ">="
 "<"
 "<="
 "+"
 "-"
 "*"
 "/"
 "&&"
 "||"
 "??"
 "|"
 "!"
 "."
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

(function_call
  (ident) @keyword.exception
  "!"
  (#any-of? @keyword.exception "assert" "assert_eq"))

; Literals/Primitives

(string) @string

[
 (integer)
 (float)
] @number

[
 (nil)
 (true)
 (false)
] @constant.builtin

"->" @operator

; Punctuation

[
 ";"
 "."
 ","
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

; Identifiers

(identifier) @variable

(constant) @constant

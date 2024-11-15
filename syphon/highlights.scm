; Variables

(identifier) @variable
(member key: (identifier) @variable.member)

; Parameters

(parameters (identifier) @variable.parameter)

; Function and Method calls

(call (identifier) @function.call)
(call (member key: (identifier) @function.method.call))

; Literals

(none) @constant.builtin

[(true) (false)] @boolean

(int) @number
(float) @number.float

(string) @string

; Comments

(comment) @comment

; Keywords

"fn" @keyword.function

"return" @keyword.return

"while" @keyword.repeat

[
 "if"
 "else"
] @keyword.conditional

[
  (break)
  (continue)
] @keyword

; Operators

[
  "+"
  "-"
  "/"
  "*"
  "**"
  "%"
  "<"
  ">"
  "=="
  "="
  "+="
  "-="
  "/="
  "*="
  "**"
  "%="
] @operator


; Punctuation

[
  ":"
  ","
  "."
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

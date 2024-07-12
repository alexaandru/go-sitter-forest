; Variables

(identifier) @variable

(member key: (identifier) @variable.member)

; Parameters

(parameters (identifier) @variable.parameter)

; Function and Method calls

(call (identifier) @function)

(call (member key: (identifier) @function.method))

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

[
 "while"
 (break)
 (continue)
] @keyword.repeat

[
 "if"
 "else"
] @keyword.conditional

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

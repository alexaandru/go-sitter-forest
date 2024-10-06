; Highlights.scm for gab
[
 (comment)
] @comment

(number) @number

(symbol) @variable

(sigil) @string.special

(operator) @operator
(send) @operator
(message) @function

[
  (string)
] @string

[
  "do"
  "end"
] @keyword

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

((symbol) @variable.builtin (#eq? @variable.builtin "self"))

[
  "Show"
  "Hide"
  "Minimal"
] @module

[
  "Import"
  "Optional"
] @keyword

(condition
  (name) @keyword)

(action
  (name) @keyword)

(continue) @keyword

(operator) @operator

(string) @string

(file) @string.special

[
  (quality)
  (rarity)
  (influence)
  (colour)
  (shape)
] @constant.builtin

(sockets) @variable.builtin

(number) @number

(boolean) @boolean

[
  (disable)
  "Temp"
] @constant

(comment) @comment

"\"" @punctuation.delimiter

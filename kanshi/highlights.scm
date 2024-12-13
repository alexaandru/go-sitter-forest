;; Highlights for kanshi grammar

;; Comments
((comment) @comment)

;; Strings
((string) @string)

;; Identifiers
((identifier) @variable)

;; Keywords: top-level constructs and configuration keywords
((profile) @keyword)
((output) @keyword)
((mode) @keyword)
((position) @keyword)
((scale ) @keyword)

; ((enable) @keyword)
; ((disable) @keyword)

;; Numbers inside mode, position, and scale values
; ((mode (value)) @number)
; ((position (value)) @number)
; ((scale (value)) @number)

;; For output name highlight it as a variable or constant
(output name: (string) @constant)

;; Punctuation (braces, quotes)
[
  "{" "}"
] @punctuation.bracket

[
  "\"" "'" 
] @punctuation.delimiter


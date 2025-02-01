;; Highlight directives
(meta) @keyword
(attribute) @tag

;; Highlight labels
(label) @function

;; Highlight opcodes
(opcode) @function.builtin

;; Highlight registers
(register) @variable.builtin

;; Highlight macros
[
  (macro)
  (macro_variable)
] @tag

;; Highlight addresses
(address) @variable.parameter

;; Highlight primitives
[
  (char)
  (float)
  (octal)
  (decimal)
  (hexadecimal)
] @number
(string) @string

;; Highlight errors
(ERROR) @error

;; Highlight comments
(comment) @comment

; Highlight punctuation
[
  ","
  ";"
] @punctuation.delimiter

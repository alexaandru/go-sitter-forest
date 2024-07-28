; highlights.scm

; Comments
(comment) @comment @spell

; Labels
(label) @label
(label (number) @number)

; Values
(value (ascii_string) @string)
(value (awascii_string) @string)
(value (number) @number)
(value (float) @float)

; Instructions
(instruction
  kind: (_) @keyword)

; Macros
(macro kind: (builtin_macro_name) @function.builtin)
(macro kind: (macro_name) @function)

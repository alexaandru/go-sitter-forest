; highlights.scm

; Comments
(comment) @comment @spell

; Labels
(label) @label
(label (number) @number)

; Values
(value (ascii_string) @string)
(value (awascii_string) @string)
(value (ascii_char) @number)
(value (awascii_char) @number)
(value (path) @string)
(value (number) @number)
(value (float) @float)
(replacement_var) @label

; Instructions
(instruction
  kind: (_) @keyword)

; Macros
(macro kind: (builtin_macro_name) @function.builtin)
(macro kind: (macro_name) @function)
(replacement_macro_name) @function

; Macro block
(macro_block_name) @function
(macro_block_def) @function.builtin
(macro_block_end) @function.builtin
(parameter) @constant

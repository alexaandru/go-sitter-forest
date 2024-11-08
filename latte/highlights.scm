(comment) @comment

(filter_identifier) @function.call
; (function_identifier) @function.call
; (test) @function.builtin
(variable) @variable
(string) @string
(interpolated_string) @string
(operator) @operator
(number) @number
(boolean) @constant.builtin
(null) @constant.builtin
(keyword) @keyword
(attribute) @attribute
(tag) @tag
(conditional) @conditional
(conditional_branch) @conditional
(conditional_end) @conditional
(repeat) @repeat
(repeat_end) @repeat
; (method) @method
; (parameter) @parameter

[
    "{"
    "}"
] @tag.delimiter

; (interpolated_string [
;     "{"
;     "}"
;     ","
;     "."
;     "?"
;     ":"
;     "->"
;     "?->"
;     "="
; ] @punctuation.delimiter)

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

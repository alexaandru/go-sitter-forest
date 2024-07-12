; vim: ts=4 sw=4 et

; highlights (nvim)

(comment) @comment

(section_header) @punctuation.bracket
(section_header_type) @tag
(entry key: (key_type) @property)

(directive) @function.macro
(directive_set
    key: (key_type) @variable
    value: (value_type) @constant
)
(directive_include
    pattern: (value_type) @string.special.path
)

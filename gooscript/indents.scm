
[
 "{"
 "}"
 "["
 "]"
 "("
 ")"
] @indent.branch

[
 (match_statement)
 (dictionary)
 (fn_statement)
 (variable_declare)
 (block)
] @indent.begin



(dictionary "}" @indent.end)
(match_statement "}" @indent.end)
(block "}" @indent.end)

; (if_statement "else" @indent.end)
; (if_statement "then" @indent.begin)
; (if_statement then: @indent.end)

[
 (comment)
] @indent.ignore

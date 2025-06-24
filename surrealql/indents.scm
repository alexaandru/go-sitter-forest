; Indent inside curly braces (code blocks)
"{" @indent.start
"}" @indent.end

; Indent inside parentheses (e.g., subqueries or multi-line expressions)
"(" @indent.start
")" @indent.end

; Indent inside square brackets (e.g., multi-line array or set literals)
"[" @indent.start
"]" @indent.end

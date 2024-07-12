; Function definition
(function_statement) @function.outer

; Sub definition
(sub_statement) @function.outer

; If statement
(if_statement) @if.outer

; Else if clause
(else_if_clause) @elseif.outer

; Else clause
(else_clause) @else.outer

; For statement
(for_statement) @for.outer

; While statement
(while_statement) @while.outer

; Call expression
; (call_expression) @call.outer

; Property access expression
; (property_access_expression) @property.outer

; Logical expression
(logical_expression) @logical.outer

; Logical not expression
(logical_not_expression) @logical_not.outer

; Arithmetic expression
(arithmetic_expression) @arithmetic.outer

; Comment
(comment) @comment.outer

; String
(string_contents) @attribute.inner
(string) @attribute.outer


; highlighting rules follow the neovim standard highlight groups: https://neovim.io/doc/user/treesitter.html#treesitter-highlight

; keywords
[
  (main_keyword)
  (build_keyword)
  (test_keyword)
] @keyword.function

[
  (const_keyword)
  (pub_keyword)
] @keyword.modifier

(async_keyword) @keyword.coroutine


(fn_keyword) @keyword.function
(type_keyword) @keyword.type

; do not highlight those as "modifiers"
(declaration_modifier) @keyword

(else_keyword) @keyword.conditional

; "return" @keyword.return
; "throw" @keyword.exception

; ;literals
(none_keyword) @constant.builtin
(boolean_literal) @boolean
(number_literal) @number
(string_literal) @string

; identifier
(type_ident) @type
(ident) @variable

; punctuation
(paren_open) @punctuation.bracket
(paren_close) @punctuation.bracket
(bracket_open) @punctuation.bracket
(bracket_close) @punctuation.bracket
(brace_open) @punctuation.bracket
(brace_close) @punctuation.bracket

(colon) @punctuation.delimiter
(member_call_operator) @punctuation.delimiter
(safe_call_operator) @punctuation.delimiter
; "," @punctuation.delimiter
; ";" @punctuation.delimiter

; "^//.*" @comment

; function definitions
((fn_signature
  (ident) @function
))

; function calls
((free_function
  (ident) @function.call)
)

((function_call
  (ident) @function.call)
)

((trailing_closure_expression
   (ident) @function.call)
)

((constructor_call
  (type_ident) @constructor)
)

((member_expression
  rhs: (expression
  (function_call
    (ident) @method.call)))
)

((member_expression
  rhs: (expression
  (trailing_closure_expression
    (ident) @method.call)))
)

((member_expression
  rhs: (expression
    (ident) @variable.member))
)

((closure_argument
   (ident) @variable.parameter.closure)
)

((param
  (ident) @variable.parameter)
)

; pseudo-keywords from builtin functions
((free_function
  (ident) @function.builtin)
  (#match? @function.builtin "^(assert|print|println)$")
)

((free_function
  (ident) @keyword.exception)
  (#match? @keyword.exception "^(panic)$")
)

((trailing_closure_expression
 (ident) @keyword.conditional)
 (#match? @keyword.conditional "^(if|try)$")
)

; highlight 'self' and 'it'.
(
   (ident) @variable.parameter.builtin
   (#match? @variable.parameter.builtin "self")
)
; TODO: once implicit closure parameters are implemented, replace the rule above with this one:
;(
;   (ident) @variable.parameter.builtin
;   (#match? @variable.parameter.builtin "^(self|it)$")
;)

; operators
(yeet_operator) @keyword.exception

[
 ; logical
 (and)
 (or)
 (xor)
 (not)

 ; arithmetic
 (plus)
 (minus)
 (multiply)
 (divide)
 (remainder)
 (power)

 ; collection
 (concat)
 (remove)
 (contains)

 ; comparison
 (equal)
 (not_equal)
 (greater)
 (greater_equal)
 (less)
 (less_equal)
 (identical)
 (not_identical)
] @operator

(comment) @comment

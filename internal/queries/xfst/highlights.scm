[(any) (zero) (boundary)] @constant.builtin

[ "[" "]" "(" ")" "[." ".]" "," (colon) ] @punctuation.delimiter

(symbol_group) @string.special
(string) @string.quoted

[
 (complement) (term_complement) (contains)
 (plus) (star) (upper) (lower) (reverse) (inverse)
 (ignore) (ignore_inside)
 (union) (intersect) (subtract)
 "=>" (arrow)
 (condition_operators)
 (crossproduct) (compose)
] @operator

(substitute "`" @operator)

(repeat) @number

(comment) @comment

"_" @variable.parameter

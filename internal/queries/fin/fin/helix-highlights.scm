(ERROR) @error
(com) @comment.line
(sym) @attribute
(num) @constant.numeric
(esc) @string.quoted.double
(esc_seq) @constant.character.escape
(raw) @string.raw
["," "="] @punctuation.delimiter
["(" ")" "[" "]"] @punctuation.bracket

;; TODO
;; colons within symbols should highlight as @punctuation.delimiter
;; symbols that are extensions could highlight different? true/false?

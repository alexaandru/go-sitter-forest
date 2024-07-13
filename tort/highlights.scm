[ "[" "]" ] @punctuation.bracket
[ "|" ":" ] @punctuation.delimiter
[ "->" ] @operator

(simple_comment) @comment
(info_comment) @comment.documentation

(text) @property

(ortho_gap
    answer: (strict_text) @function
)

(ortho_gap
    answer: (strict_text) @function
    comment: (text) @comment.documenation
)

(ortho_choice
    right_answer: (strict_text) @function
    wrong_answer: (strict_text) @constant
)

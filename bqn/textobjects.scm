
; Only select blocks as function definition
; Note: this selects subject blocks too
(block
  (CASE_opt
    (BODY) @function.inside
  )
) @function.around

(block
  (CASE_end
    (BODY) @function.inside
  )
) @function.around

(block
  (CASE_opt
    (HeadedBODY
      (HEAD) @parameter.inside
      (BODY) @function.inside
    )
  )
) @function.around

(block
  (CASE_end
    (HeadedBODY
      (HEAD) @parameter.inside
      (BODY) @function.inside
    )
  )
) @function.around

(subExpr
  (lhs)
  (ASGN (symbol_export))
  (subExpr) @class.around
)

; This selects lists surrounded by '⟨⟩' (or '[]' accidently)
(array) @class.around

(comment) @comment.inside
(comment)+ @comment.around

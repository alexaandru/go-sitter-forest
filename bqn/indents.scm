[
  (array)
  ; (CASE_opt)
  ; (CASE_end)
  (GuardedSTMT)
  (HeadedBODY)
] @indent

(block
  (_)
  (CASE_end) @new_line
  (#not-same-line? @indent @new_line)
  (#set! "scope" "all")
) @indent

(block
  (_)
  (CASE_opt) @new_line
  (#not-same-line? @indent @new_line)
  (#set! "scope" "all")
) @indent

(GuardedSTMT
  (STMT) @new_level
  (#not-same-line? @indent @new_line)
  (#set! "scope" "all")
)

(HeadedBODY
  (BODY) @new_level
  (#not-same-line? @indent @new_line)
  (#set! "scope" "all")
)

; (block
;  (CASE_end
;    (sep) @indent)
;  @indent)
; @indent


[
  "}"
  "]"
  "⟩"
] @outdent


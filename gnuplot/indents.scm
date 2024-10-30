[
  (func_def)
  (c_do)
  (c_while)
  (c_if)
  (for_block)
] @indent.begin

[
  ")"
  "}"
] @indent.end

; (return_statement
;   (expression_list
;     (function_call))) @indent.dedent

[
  "}"
  ")"
  ("else" "if")
] @indent.branch

(comment) @indent.auto

(string_literal) @indent.auto

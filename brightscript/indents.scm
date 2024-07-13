; Start indentation for block-level constructs
[
  (sub_statement)
  (function_statement)
  (if_statement)
  (for_statement)
  (while_statement)
  (try_statement)
] @indent.begin

; End indentation for all end statements
[
  (end_sub)
  (end_function)
  (end_if)
  (end_for)
  (end_while)
  (end_try)
] @indent.branch @indent.end

; Handle branching constructs
[
  (else_if_clause)
  (else_clause)
  (catch_clause)
] @indent.branch

; Ignore comments for indentation
(comment) @indent.ignore


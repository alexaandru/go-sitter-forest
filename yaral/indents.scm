[
  (rule_definition)
  (section)
  (match_statement)
  (assignment_statement)
  (expression_statement)
] @indent.begin

((parenthesized_expression) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")")
  (#set! indent.avoid_last_matching_next 1))

((index_expression) @indent.align
  (#set! indent.open_delimiter "[")
  (#set! indent.close_delimiter "]"))

((call_expression) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

((argument_list) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

(ERROR
  "(" @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")")
  .
  (_))

; Ensure indentation resets to 0 after closing "}"
"}" @indent.zero

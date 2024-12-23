; Tags with closing tags
((element
  (start_tag (tag_name) @name) @start.before
  (end_tag)? @end.after)
 (#set! role tag)
 (#set! autoclose.expression "</")
 (#set! autoclose.completion "${name}>")
 (#set! scope.extend)
)

; Tags with an invalid end tag
((ERROR
  (start_tag (tag_name) @name) @start.before)
 (#set! role tag)
 (#set! autoclose.expression "</")
 (#set! autoclose.completion "${name}>")
 (#set! scope.extend)
)

; Self-closing tags
((element
  (self_closing_tag (tag_name) @name) @subtree)
 (#set! role tag)
)

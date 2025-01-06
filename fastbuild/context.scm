(function_definition
  body: (_) @context.end) @context

(call
  body: (_) @context.end) @context

(compound
  (assign
    (_))) @context

; (preprocessor_if) @context.start
; (preprocessor_endif) @context.end
(array) @context

(struct) @context

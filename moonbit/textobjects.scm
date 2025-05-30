; parameter

((parameters
  .
  (parameter) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((type_parameters
  .
  (type_identifier) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((trait_method_declaration
  (trait_method_parameter) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

; argument

((apply_expression
  (arguments
   (argument) @parameter.inner
   .
   ","? @_end))
  (#make-range! "parameter.outer" @parameter.inner @_end))

((dot_apply_expression
  (argument) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((dot_dot_apply_expression
  (argument) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((type_arguments
  (type) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((array_expression
  (_) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

((string_interpolation
  (interpolator (_) @parameter.inner)
  @parameter.outer))

; block

(((nonempty_block_expression) @block.inner
   (#offset! @block.inner 0 1 0 -1))
 @block.outer)

; assignment

((let_expression
  .
  ((pattern) @assignment.lhs)
  "="
  ((_) @assignment.inner @assignment.rhs))
 @assignment.outer)

((assign_expression
  .
  ((left_value) @assignment.lhs)
  (assign_operator)
  ((_) @assignment.inner @assignment.rhs))
 @assignment.outer)

; function

((function_definition
  (external_source (_) @function.inner)
  .)
 @function.outer)

((function_definition
  ("fn"
   (block_expression) @function.inner)
   (#offset! @function.inner 0 1 0 -1))
 @function.outer)

((test_definition
  ("test"
   (block_expression) @function.inner)
   (#offset! @function.inner 0 1 0 -1))
 @function.outer)

(trait_method_declaration) @function.outer

((impl_definition
  ("impl"
   (block_expression) @function.inner)
   (#offset! @function.inner 0 1 0 -1))
 @function.outer)

; call

(((apply_expression
   (arguments
    "("
    (_) @_start (_)? @_end
    . ")"
    (#make-range! "call.inner" @_start @_end))))
 @call.outer)

(((dot_apply_expression
   "("
   (_) @_start (_)? @_end
   . ")"
   (#make-range! "call.inner" @_start @_end)))
 @call.outer)

(((dot_dot_apply_expression
   "("
   (_) @_start (_)? @_end
   . ")"
   (#make-range! "call.inner" @_start @_end)))
 @call.outer)

; comment

(comment) @comment.outer

; return

((return_expression
  (_)? @return.inner)
 @return.outer)

; statement

(block_expression (_) @statement.outer)

; number

[
  (integer_literal)
  (float_literal)
] @number.inner

; conditional

((if_expression
  "if"
  (_) @conditional.inner
  .
  (block_expression))
 @conditional.outer)

((if_expression
  ((block_expression) @conditional.inner)
  (#offset! @conditional.inner 0 1 0 -1)
  . (_)?)
 @conditional.outer)

((if_expression
  (else_clause
    ((block_expression) @conditional.inner))
  (#offset! @conditional.inner 0 1 0 -1))
 @conditional.outer)

((match_expression
  "match"
  .
  ((_) @conditional.inner))
 @conditional.outer)

((match_expression
  ((case_clause) @conditional.inner)))

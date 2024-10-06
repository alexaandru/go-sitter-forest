(assignment lhs: (_) @assignment.lhs)
(assignment rhs: (_) @assignment.rhs)
(assignment) @assignment.outer

(block) @block.outer
(block (body) @block.inner)

(record) @class.outer
(record . "{" . (_) @_start (_)? @_end . "}"
  (#make-range! "class.inner" @_start @_end))

(list) @class.outer
(list . "[" . (_) @_start (_)? @_end . "]"
  (#make-range! "class.inner" @_start @_end))

(binary lhs: (_) @parameters.outer)
(binary rhs: (_) @parameters.outer)
(binary rhs: (tuple_exp . "(" . (_) @_start (_)? @_end . ")")
  (#make-range! "parameters.inner" @_start @_end))

(binary) @call.outer

(record) @class.outer
(record . "{" . (_) @_start (_)? @_end . "}"
  (#make-range! "class.inner" @_start @_end))

(list) @class.outer
(list . "[" . (_) @_start (_)? @_end . "]"
  (#make-range! "class.inner" @_start @_end))

(binary lhs: (_) @parameters.outer)
(binary rhs: (_) @parameters.outer)
(binary rhs: (tuple . "(" . (_) @_start (_)? @_end . ")")
  (#make-range! "parameters.inner" @_start @_end))

(binary) @call.outer

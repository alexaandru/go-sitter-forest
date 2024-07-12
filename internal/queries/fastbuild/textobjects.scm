(compound left: (_)* @assignment.lhs) @assignment.outer
(assign right: (_)* @assignment.inner @assignment.rhs)

(struct) @block.outer
(struct
 .
 "["
 .
 (_) @_start @_end
 (_)? @_end
 .
 "]"
 (#make-range! "block.inner" @_start @_end))

(function_call) @call.outer
(function_call
  name: (identifier)
  arguments: (arguments
    .
    "("
    .
    (_) @_start @_end
    (_)? @_end
    .
    ")"
    (#make-range! "call.inner" @_start @_end)
  )
)

(comment) @comment.outer
((comment) @comment.inner
  (#offset! @comment.inner 0 2 0))

((function_call name: (identifier) @_func) @conditional.outer
  (#eq? @_func "If"))
((function_call
   name: (identifier) @_func
   arguments: (arguments)
   body: (array
     .
     "{"
     .
     (_) @_start @_end
     (_)? @_end
     .
     "}"
     (#make-range! "conditional.inner" @_start @_end)
   )) @conditional.outer
  (#eq? @_func "If"))

(function_definition) @function.outer
(function_definition
  name: (identifier)
  arguments: (arguments)
  body: (array
    .
    "{"
    .
    (_) @_start @_end
    (_)? @_end
    .
    "}"
    (#make-range! "function.inner" @_start @_end)
  )
)

((function_call name: (identifier) @_func) @loop.outer
  (#eq? @_func "ForEach"))
((function_call
   name: (identifier) @_func
   arguments: (arguments)
   body: (array
     .
     "{"
     .
     (_) @_start @_end
     (_)? @_end
     .
     "}"
     (#make-range! "loop.inner" @_start @_end)
   )
) (#eq? @_func "ForEach"))

(number) @number.inner

(usage) @parameter.inner @parameter.outer

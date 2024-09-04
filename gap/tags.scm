; TODO: (reiniscirpons) Add support for tagging function interfaces defined
; with `DeclareOperation` or `DeclareAttribute` etc. and implemented with
; `InstallMethod` etc.
; TODO: (reiniscirpons) Add support for Filter/Category stuff maybe using the
; @definition.class tag? Requires understanding GAP type system which I do not yet.
; TODO: (reiniscirpons) Figure out how to do module (i.e. package) tagging and
; whether that even makes sense for GAP.
(assignment_statement
  left: (identifier) @name
  right: [
    (lambda)
    (function)
    (atomic_function)
  ]) @definition.function

(call
  function: (identifier) @name) @reference.call

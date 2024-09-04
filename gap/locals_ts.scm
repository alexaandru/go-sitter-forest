; Copy of `locals.scm` but using the tree-sitter official tags for local
; highlighting. This is necessary to avoid errors when testing with
; `tree-sitter test`.
; The only other scopes apart from the global scope occur in function
; definitions.
; TODO: (reiniscirpons) automatically generate this file from `locals.scm`
[
  (lambda)
  (function)
  (atomic_function)
] @local.scope

(parameters
  (identifier) @local.definition)

(qualified_parameters
  (identifier) @local.definition)

(qualified_parameters
  (qualified_identifier
    (identifier) @local.definition))

(lambda_parameters
  (identifier) @local.definition)

(locals
  (identifier) @local.definition)

(assignment_statement
  left: (identifier) @local.definition)

(for_statement
  identifier: (identifier) @local.definition)

(assignment_statement
  left: (identifier) @local.definition
  right: [
    (lambda)
    (function)
    (atomic_function)
  ])

(identifier) @local.reference

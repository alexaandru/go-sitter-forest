; Scopes
;-------

[
  (block)
  (fn)
] @local.scope

; Definitions
;------------

(let
  identifier: (identifier) @local.definition)

(for
  identifier: (identifier) @local.definition)

; References
;------------

(identifier) @local.reference

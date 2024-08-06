(source_file) @local.scope
(block) @local.scope

(identifier) @local.reference

; (statement
;  (identifier) @keyword (#eq? @keyword "Let")
;  .
;  (identifier) @local.definition.let)

(statement
 .
 (identifier) ;@keyword (#eq? @keyword "Def")
 (identifier) @local.definition)

(source_file) @local.scope

(preprocessor_import (identifier) @local.definition.import)

(preprocessor_define
  (identifier) @local.definition.macro)

(arguments
  (usage (identifier) @local.definition.parameter))

((function_definition
  name: (identifier) @local.definition.function) @local.scope
  (#set! definition.function.scope "parent"))

((function_call
  name: (identifier) @_func
  arguments: (arguments (in
    left: (usage (identifier) @local.definition.var))))
  (#eq? @_func "ForEach"))

; (array) @local.scope
(struct) @local.scope

(compound
  (usage (identifier) @local.definition.var)
  (assign (_))
)

(identifier) @local.reference

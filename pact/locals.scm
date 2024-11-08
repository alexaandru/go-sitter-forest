; Scopes
;-------

(defun) @local.scope
(defcap) @local.scope
(defpact) @local.scope
(module) @local.scope
(let_binding) @local.scope
(defproperty) @local.scope

(use imports: (list (reference) @local.definition))

(property_identifier) @local.definition
(parameter_identifier) @local.definition.parameter
(type_annotation (type_identifier) @local.definition.associated)
(let_variable_identifier) @local.definition.var

; References
;------------
(reference (atom) @local.reference)
(def_identifier) @local.definition.function
(schema_field_identifier) @local.definition
(module_identifier) @local.definition
(module_governance) @local.reference

(defun (def_identifier) @local.definition.function
  (#set! definition.function.scope "parent")
)
(defpact (def_identifier) @local.definition.function
  (#set! definition.function.scope "parent")
)
(defcap (def_identifier) @local.definition.function
  (#set! definition.function.scope "parent")
)
(module (module_identifier) @local.definition.module
  (#set! definition.module.scope "global")
)

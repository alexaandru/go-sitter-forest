;; ---------------------------------------------------------------------------
;; Constraint Scopes
;; ---------------------------------------------------------------------------

(formal_constraint) @local.scope

(environment_def name: (identifier) @local.definition)
(environment_def) @local.scope

(function_parameter name: (identifier) @local.definition)

(quantified_sentence) @local.scope

(quantified_variable name: (identifier) @local.definition)

(sequence_builder) @local.scope

(named_variable_set (identifier) @local.reference)

(mapping_variable domain: (identifier) range: (identifier) @local.reference)

(term (identifier_reference) @local.reference)

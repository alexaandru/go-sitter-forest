;; ---------------------------------------------------------------------------
;; Constraint Scopes
;; ---------------------------------------------------------------------------

(formal_constraint) @local.scope

(function_signature name: (identifier) @local.definition)
(function_body) @local.scope

(function_parameter name: (identifier) @local.definition)

(quantified_sentence) @local.scope

(sequence_builder) @local.scope

(variable (identifier) @local.reference)

(term (identifier_reference) @local.reference)

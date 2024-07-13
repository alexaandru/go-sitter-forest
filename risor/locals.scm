;; Definitions

(function_declaration
  name: ((identifier) @local.definition.var)
    (#set! "definition.var.scope" "parent"))

(parameter_declaration
  name: (identifier) @local.definition.var)

(short_var_declaration
  left: (expression_list
    (identifier) @local.definition.var))

(var_declaration
  name: (expression_list
          (identifier) @local.definition.var))

(const_declaration
  name: (expression_list
          (identifier) @local.definition.var))

(import_statement
  name: (identifier) @local.definition.namespace
  !as)

(import_statement
  as: (import_statement_as
    (identifier) @local.definition.namespace))

;;; References

(identifier) @local.reference
(field_identifier) @local.reference

;;; Call references

((call_expression
   function: (identifier) @local.reference)
 (#set! reference.kind "call" ))

((call_expression
    function: (selector_expression
                field: (field_identifier) @local.reference))
 (#set! reference.kind "call" ))

((call_expression
    function: (parenthesized_expression
                (identifier) @local.reference))
 (#set! reference.kind "call" ))

((call_expression
   function: (parenthesized_expression
               (selector_expression
                 field: (field_identifier) @local.reference)))
 (#set! reference.kind "call" ))

;; Scopes

(func_literal) @local.scope
(source_file) @local.scope
(function_declaration) @local.scope
(if_statement) @local.scope
(block) @local.scope
(switch_statement) @local.scope
(for_statement) @local.scope

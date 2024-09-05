(object_generator
        name: (identifier) @name
) @reference.class

; The problem with annotating this, is that we cannot always
; distinguish between a variable and a procedure statement.
; For example "a := b;" b can be either a variable or a procedure statement.
;(procedure_statement
;    procedure: (identifier) @name
;) @reference.call

(procedure_declaration
  name: (identifier) @name
) @definition.function

(class_declaration
  name: (identifier) @name
) @definition.class

(external_class_declaration
    (external_item
    name: (identifier) @name)
) @reference.class
(external_procedure_declaration
    (external_item
    name: (identifier) @name)
) @reference.function

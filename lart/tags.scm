; type aliases

(typedef
    name: (identifier) @name) @definition.class

; function definitions

(function
    name: (identifier) @name) @definition.function

; module definitions
(module
    name: (identifier) @name) @definition.module

; references

(call_expression
    callable: (identifier) @name) @reference.call

; Functions {{{
(function_declaration
  name: (identifier) @name) @definition.function
(primitive_declaration
  name: (identifier) @name) @definition.function

(function_call
  function: (identifier) @name) @reference.call
; }}}

; Class {{{
(class_declaration
  name: (identifier) @name) @definition.class
(type_declaration
  name: (identifier) @name
  (class_type)) @definition.class

(new_expression
  class: (type_identifier) @name) @reference.class
(extends_qualifier
  super: (type_identifier) @name) @reference.class
; }}}

; Methods {{{
(method_declaration
  name: (identifier) @name) @definition.method

(method_call
  method: (identifier) @name) @reference.call
; }}}

; vim: sw=2 foldmethod=marker

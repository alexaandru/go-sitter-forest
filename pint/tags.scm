;; Predicates
(predicate_decl
  (ident) @predicate)

;; Variables
(var_decl
  (ident) @variable)

;; Constants
(const_decl
  (ident) @constant)

;; Macros
(macro_decl
  (macro_name) @macro)

;; Types
(new_type_decl
  (ident) @type)

;; Enums
(enum_decl
  (ident) @type)

;; Interfaces
(interface_decl
  (ident) @type)

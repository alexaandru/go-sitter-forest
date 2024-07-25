;; Functions and Predicates
(decl_pred (ident) @function.def)

;; Types and Interfaces
(decl_iface (ident) @type.def)
(pred_iface (ident) @type.def)
(decl_new_ty (ident) @type.def)
(ty_custom (path) @type)
(iface_instance (ident) @type)

;; Macros
(decl_macro (macro_name) @function.macro.def)
(macro_param (ident) @variable.parameter)

;; Enums
(decl_enum (ident) @type.enum)

;; Variables
(decl_var (ident) @variable)
(decl_state (ident) @variable)
(storage_var (ident) @variable.member)

;; Constants
(decl_const (ident) @constant)

;; Paths and Identifiers
(path) @namespace
(ident_post_state) @special
(ident) @variable

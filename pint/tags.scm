;; Predicates
(decl_pred (ident) @function)

;; Interfaces
(decl_iface (ident) @type)
(pred_iface (ident) @type)
(iface_instance (ident) @type)
(iface_var (ident) @variable.member)

;; Macros
(decl_macro (macro_name) @function.macro)
(macro_param (ident) @variable.parameter)

;; Types
(decl_new_ty (ident) @type)
(ty_custom (path) @type)

;; Enums
(decl_enum (ident) @type.enum)

;; Variables
(decl_var (ident) @variable)
(decl_state (ident) @variable)
(storage_var (ident) @variable.member)

;; Constants
(decl_const (ident) @constant)

;; Constraints
(decl_constraint) @keyword.control

;; Functions
(block) @block
(decl_if) @keyword.control.conditional

;; Literals
(hex) @constant.numeric
(number) @constant.numeric
(string) @constant.character

;; Paths and Identifiers
(path) @namespace
(ident_post_state) @special
(ident) @variable

;; Expressions
(expr) @expression
(term) @expression

;; Use statements
(use_stmt) @keyword.control.import
(use_tree) @namespace

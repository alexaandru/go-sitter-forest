;; keywords
[
  "as"
  "cond"
  "const"
  "constraint"
  "else"
  "enum"
  "exists"
  "forall"
  "if"
  "in"
  "interface"
  "macro"
  "predicate"
  "pub"
  "state"
  "storage"
  "type"
  "use"
  "var"
  "where"
] @keyword

;; primitive types
[
  "ty_b256"
  "ty_bool"
  "ty_int"
  "ty_real"
  "ty_string"
] @type.builtin

;; comments
((comment) @comment.line)

;; constants
((decl_const) @constant)

;; enums
((decl_enum) @type.enum)
((decl_new_ty) @type)

;; interface declarations
((decl_iface) @type)
((iface_var) @variable.member)

;; macros
((decl_macro) @function.macro)
((macro_name) @function.macro)
((macro_param) @variable.parameter)

;; predicates
((decl_pred) @function)
((pred_body) @block)

;; storage
((decl_storage) @variable.builtin)
((storage_var) @variable.member)
((storage_access) @variable.builtin)

;; use statements
((use_stmt) @keyword.control.import)
((use_tree) @namespace)

;; variable declarations
((decl_var) @variable)

;; state declarations
((decl_state) @variable)

;; constraint declarations
((decl_constraint) @keyword.control)

;; if statements
((decl_if) @keyword.control.conditional)

;; identifiers and paths
((ident_post_state) @special)
((ident) @variable)
((path) @namespace)
((ty_custom) @type)

;; types
((ty_prim) @type.builtin)

;; literals
((hex) @constant.numeric)
((number) @constant.numeric)
((string) @constant.character)

;; operators directly
((expr_cmp) @operator)
((expr_logical_or) @operator)
((expr_logical_and) @operator)
((expr_additive) @operator)
((expr_multiplicative) @operator)
((expr_unary) @operator)
((expr_postfix) @operator)

;; expressions
((expr) @expression)
((expr_select) @keyword.control.conditional)
((term) @expression)

;; statements
((block) @block)
((expr_cond) @keyword.control.conditional)
((expr_generator) @keyword.control.conditional)
((expr_array) @constant)
((expr_tuple) @constant)

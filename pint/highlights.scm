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
  "use"
  "var"
  "where"
] @keyword

;; primitive types
[
  "b256_ty"
  "bool_ty"
  "int_ty"
  "real_ty"
  "string_ty"
] @type

;; comments
((comment) @comment)

;; constants
((const_decl) @constant)

;; enums
((enum_decl) @type)

;; interface declarations
((interface_decl) @type)
((interface_var) @variable)

;; macros
((macro_decl) @macro)
((macro_name) @macro)
((macro_param) @parameter)

;; predicates
((predicate_decl) @predicate)
((predicate_body) @block)

;; storage
((storage_decl) @variable.builtin)
((storage_var) @variable)
((storage_access) @variable.builtin)

;; use statements
((use_stmt) @include)
((use_tree) @namespace)

;; variable declarations
((var_decl) @variable)

;; state declarations
((state_decl) @variable)

;; constraint declarations
((constraint_decl) @keyword)

;; if statements
((if_decl) @conditional)

;; identifiers and paths
((ident) @variable)
((path) @namespace)
((custom_type) @type)

;; types
((primitive_type) @type.builtin)

;; literals
((number) @number)
((string) @string)

;; operators directly
((comparison_expr) @operator)
((logical_or_expr) @operator)
((logical_and_expr) @operator)
((additive_expr) @operator)
((multiplicative_expr) @operator)
((unary_expr) @operator)
((postfix_expr) @operator)

;; expressions
((expr) @expression)
((select_expr) @conditional)
((term) @expression)

;; statements
((block) @block)
((cond_expr) @conditional)
((generator_expr) @conditional)
((array_expr) @constant)
((tuple_expr) @constant)

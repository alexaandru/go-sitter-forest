;; Predicate definitions as modules
((predicate_decl (ident) @predicate.def))

;; Variable declarations
((var_decl (ident) @variable.def))

;; Constant declarations
((const_decl (ident) @constant.def))

;; Macro definitions
((macro_decl (macro_name) @macro.def))

;; Type definitions
((new_type_decl (ident) @type.def))

;; Enum definitions
((enum_decl (ident) @type.def))

;; Interface definitions
((interface_decl (ident) @type.def))

;; Scope definition
((block) @scope)

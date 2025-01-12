(module_def
  name: (constant) @name
  (#set! "kind" "Module")) @symbol

(class_def
  name: (constant) @name
  (#set! "kind" "Class")) @symbol

(struct_def
  name: (constant) @name
  (#set! "kind" "Struct")) @symbol

(enum_def
  name: (constant) @name
  (#set! "kind" "Enum")) @symbol

(method_def
  name: (identifier) @name
  (#set! "kind" "Method")) @symbol

(macro_def
  name: (identifier) @name
  (#set! "kind" "Function")) @symbol

(const_assign
  lhs: (constant) @name
  (#set! "kind" "Constant")) @symbol

(alias
  name: (constant) @name
  (#set! "kind" "Class")) @symbol

(lib_def
  name: (constant) @name
  (#set! "kind" "Module")) @symbol

(fun_def
  name: (identifier) @name
  (#set! "kind" "Function")) @symbol

(annotation_def
  name: (constant) @name
  (#set! "kind" "Class")) @symbol

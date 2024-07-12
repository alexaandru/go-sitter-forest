; Assume all-caps names are constants
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

; Function definitions/declarations
(function_definition
  name: (identifier) @function)
(function_declaration
  name: (identifier) @function)
(parameter_declaration
  name: (identifier) @variable.parameter)

; Methods / Properties
(field_access
  field: (identifier) @field)

; Function calls
(call_expression
  function: (identifier) @function)
(call_expression
  function: (field_access
    field: (identifier) @method.call)) ; Must be after field_access

; Types
(builtin_type) @type.builtin
(type (identifier) @type)
(any_type) @type

; Variables
(variable_storage_class) @storageclass
(variable_declaration 
  name: (identifier) @variable)
(old_variable_declaration
  name: (identifier) @variable)

; Preprocessor
(preproc_include) @include
(preproc_tryinclude) @include
(system_lib_string) @string
(string_literal) @string

(preproc_assert) @preproc
(preproc_pragma) @preproc
(preproc_arg) @constant
(preproc_macro) @function.macro
(macro_param) @parameter
(preproc_if) @preproc
(preproc_else) @preproc
(preproc_elseif) @preproc
(preproc_endif) @preproc
(preproc_endinput) @preproc
(preproc_define) @define
(preproc_define
  name: (identifier) @constant)
(preproc_undefine) @define
(preproc_undefine
  name: (identifier) @constant)
(preproc_error) @function.macro ; Wrong color?
(preproc_warning) @function.macro ; Wrong color?

; Statements
(for_statement) @repeat
(condition_statement) @conditional
(while_statement) @repeat
(do_while_statement) @repeat
(switch_statement) @conditional
(switch_case) @conditional
(ternary_expression) @conditional.ternary

; Expressions
(view_as) @function.builtin
(sizeof_expression) @function.macro
(this) @variable.builtin

; https://github.com/alliedmodders/sourcemod/blob/5c0ae11a4619e9cba93478683c7737253ea93ba6/plugins/include/handles.inc#L78
(hardcoded_symbol) @variable.builtin

; Comments
(comment) @comment

; General
(parameter_declaration
  defaultValue: (identifier) @constant)
(fixed_dimension) @punctuation.bracket ; the [3] in var[3]
(dimension) @punctuation.bracket
(array_indexed_access) @punctuation.bracket
(escape_sequence) @string.escape

; Constructors
(new_expression
  class: (identifier) @type
  arguments: (call_arguments) @constructor)

; Methodmaps
(methodmap) @type.definition
(methodmap
  name: (identifier) @type)
(methodmap
  inherits: (identifier) @type)
(methodmap_method_constructor
  name: (identifier) @constructor)
(methodmap_method
  name: (identifier) @method)
(methodmap_native
  name: (identifier) @method)
(methodmap_property
  name: (identifier) @property)
(methodmap_property_getter) @method
(methodmap_property_setter) @method

; Enum structs
(enum_struct) @type.definition
(enum_struct
  name: (identifier) @type)
(enum_struct_field
  name: (identifier) @field)
(enum_struct_method
  name: (identifier) @method)

; Non-type Keywords
(variable_storage_class) @storageclass
(visibility) @storageclass
(visibility) @storageclass
(assertion) @function.builtin
(function_declaration_kind) @keyword.function
[
  "new"
  "delete"
] @keyword.operator
[
  "."
  ","
] @punctuation.delimiter

; Operators
[
  "+"
  "-"
  "..."
  "*"
  "/"
  "%"
  "++"
  "--"
  "="
  "+="
  "-="
  "*="
  "/="
  "=="
  "!="
  "<"
  ">"
  ">="
  "<="
  "!"
  "&&"
  "||"
  "&"
  "|"
  "~"
  "^"
  "<<"
  ">>"
  ">>>"
  "|="
  "&="
  "^="
  "~="
  "<<="
  ">>="
] @operator
(ignore_argument) @operator
(scope_access) @operator
(rest_operator) @operator

; public Plugin myinfo
(struct_declaration
  name: (identifier) @variable.builtin)

; Typedef/Typedef
(typeset) @type.definition
(typedef) @type.definition
(functag) @type.definition
(funcenum) @type.definition
(typedef_expression) @keyword.function ; function void(int x)

; Enums
(enum) @type.definition
(enum
  name: (identifier) @type)
(enum_entry
  name: (identifier) @constant)
(enum_entry
  value: (_) @constant)

; Literals
(int_literal) @number
(char_literal) @character
(float_literal) @float
(string_literal) @string
(array_literal) @punctuation.bracket
[
  (bool_literal)
  (null)
] @constant.builtin
((identifier) @constant
  (#match? @constant "INVALID_HANDLE"))

; Comment specialisations (must be after comment)
; These might be unnecessary and/or used incorrectly, since they're intended
; for markup languages
((comment) @text.todo
  (#match? @text.todo "^\/[\/\*][\t ]TODO"))
((comment) @text.note
  (#match? @text.note "^\/[\/\*][\t ]NOTE"))
((comment) @text.warning
  (#match? @text.warning "^\/[\/\*][\t ]WARNING"))

; Keywords
[
  "__nullable__"
  "break"
  "case"
  "const"
  "continue"
  "default"
  "delete"
  "do"
  "else"
  "enum"
  "for"
  "forward"
  "funcenum"
  "functag"
  "get"
  "if"
  "methodmap"
  "native"
  "new"
  "property"
  "public"
  "return"
  "set"
  "static"
  "stock"
  "struct"
  "switch"
  "typedef"
  "typeset"
  "void"
  "while"
] @keyword

(identifier) @variable
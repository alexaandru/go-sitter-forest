; ------------------------------------------------------------------------------
; Literals and comments

[
  (integer)
] @constant.numeric.integer

(literal
  (number)) @constant.numeric.float

(char) @constant.character

[
  (string)
  (triple_quote_string)
] @string

(comment) @comment

; ------------------------------------------------------------------------------
; Punctuation

[
  "("
  ")"
  "{"
  "@{"
  "}"
  "["
  "[<"
  "]"
] @punctuation.bracket

(comma) @punctuation.delimiter

; ------------------------------------------------------------------------------
; Types

(signature
  (loname) @type)

(signature
  (caname) @constructor)

(caname) @constructor

; ------------------------------------------------------------------------------
; Keywords, operators, imports

[
  "if"
  "then"
  "else"
  "case"
  "of"
] @keyword.control.conditional

(module) @namespace

[
  "import"
  "module"
  "namespace"
  "parameters"
] @keyword.control.import

[
  (operator)
  (qualified_module) ; grabs the `.` (dot), ex: import System.IO
  ; `_` wildcards in if-then-else and case-of expressions,
  ; as well as record updates and operator sections
  (wildcard)
  "="
  "|"
  "=>"
  "⇒"
  "<="
  "⇐"
  "->"
  "→"
  "<-"
  "←"
  "\\"
  "`"
] @operator

(qualified_module
  (module) @constructor)

(qualified_loname
  (module) @namespace)

(qualified_caname
  (module) @namespace)

(qualified_operator
  (module) @namespace)

(import
  (module) @namespace)

[
  (where)
  "let"
  "in"
  "rewrite"
  "interface"
  "implementation"
  "using"
  "data"
  "record"
  "as"
  "do"
  "forall"
  "∀"
  (equal)
  (fixity)
  (visibility)
  (totality)
  (quantity)
  (impossible)
] @keyword

(hole) @label

[
  (pragma_name)
  (pragma_inline)
  (pragma_tcinline)
  (pragma_extern)
  (pragma_search)
  (pragma_world)
  (pragma_mkworld)
] @label


; ------------------------------------------------------------------------------
; Functions and variables

(exp_name
  (loname) @function)

(exp_name
  (caname) @constructor)

(exp_record_access
  field: (_) @variable.other.member)

(signature
  name: [(loname) (caname)] @function)

(function
  (lhs
    (funvar
      subject: [(loname) (caname)] @function)))

(data
  name: (data_name) @type)

(interface_head
  name: (interface_name) @type)

(implementation_head
  (interface_name) @type)

; NOTE: Order of highlight queries matters, as Tree-sitter uses last-wins strategy
; NOTE: Therefore, narrow highlight queries should be placed after broad captures.
; --------------------------------------------------------------------------------

; variable
; --------

(identifier) @variable

; variable.builtin
; ----------------

(self) @variable.builtin

; variable.parameter
; ------------------

(parameter
  name: (identifier) @variable.parameter)

; punctuation.delimiter
; ---------------------

[
  ";"
  ","
  "."
  ":"
  "?"
] @punctuation.delimiter

; punctuation.bracket
; -------------------

[
  "(" ")"
  "{" "}"
] @punctuation.bracket

; operator
; --------

[
  "-" "-="
  "+" "+="
  "*" "*="
  "/" "/="
  "%" "%="
  "=" "=="
  "!" "!=" "!!"
  "<" "<=" "<<"
  ">" ">=" ">>"
  "&" "|" "^"
  "&&" "||"
  "->"
] @operator

; constructor
; -----------

(instance_expression
  name: (identifier) @constructor)

(initOf
  name: (identifier) @constructor)

; type
; ----

(type_identifier) @type

; type.builtin
; ------------

(tlb_serialization
  "as" @keyword
  type: (identifier) @type.builtin
  (#match? @type.builtin
    "^(coins|remaining|bytes32|bytes64|int257|u?int(?:2[0-5][0-6]|1[0-9][0-9]|[1-9][0-9]?))$"))

((type_identifier) @type.builtin
  (#match? @type.builtin "^(Address|Bool|Builder|Cell|Int|Slice|String|StringBuilder)$"))

(map_type
  "map" @type.builtin
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

(bounced_type
  "bounced" @type.builtin
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

((identifier) @type.builtin
  (#match? @type.builtin "^(Context|SendParameters|StateInit|StdAddress|VarAddress)$")
  (#is-not? local))

; string
; ------

(string) @string

; string.special
; --------------

(import
  library: (string) @string.special)

(escape_sequence) @string.special

; constant
; --------

(global_constant
  name: (identifier) @constant)

(storage_constant
    name: (identifier) @constant)
  
; constant.builtin
; ----------------

[
  (boolean)
  (null)
] @constant.builtin

((identifier) @constant.builtin
  (#match? @constant.builtin
    "^(SendBounceIfActionFail|SendPayGasSeparately|SendIgnoreErrors|SendDestroyIfZero|SendRemainingValue|SendRemainingBalance|SendOnlyEstimateFee|ReserveExact|ReserveAllExcept|ReserveAtMost|ReserveAddOriginalBalance|ReserveInvertSign|ReserveBounceIfActionFail)$")
  (#is-not? local))

; property
; --------

(instance_argument
  name: (identifier) @property)

(field_access_expression
  name: (identifier) @property)

(field
  name: (identifier) @property)

(storage_variable
  name: (identifier) @property)

; number
; ------

(integer) @number

; keyword
; -------

(foreach_statement
  . (_)
  . (_)
  . "in" @keyword)

[
  "get" "mutates" "extends" "virtual" "override" "inline" "abstract"
  "contract" "trait" "struct" "message" "with"
  "const" "let" "fun" "native" "asm"
  "primitive" "import"
  "if" "else" "while" "repeat" "do" "until" "foreach"
  "try" "catch"
  "return" "initOf"
  ; "public" ; -- not used, but declared in grammar.ohm
  ; "extend" ; -- not used, but declared in grammar.ohm
] @keyword

; function
; --------

(storage_function
  name: (identifier) @function)

(native_function
  name: (identifier) @function)

(asm_function
  name: (identifier) @function)

(global_function
  name: (identifier) @function)

(static_call_expression
  name: (identifier) @function)

(init_function
  "init" @function)

(receive_function
  "receive" @function)

(bounced_function
  "bounced" @function)

(external_function
  "external" @function)

(func_identifier) @function

(method_call_expression
  name: (identifier) @function)

; attribute
; ---------

[
  "@name"
  "@interface"
] @attribute

; comment
; -------

(comment) @comment

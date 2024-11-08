; Builtins
((atom) @constant.macro
    (#any-of? @constant.macro
        "CHARSET_ASCII"
        "CHARSET_LATIN1"
    )
)

(s_expression
  head: (s_expression_head) @function.builtin
  (#any-of? @function.builtin
    "abs" "add-time" "at" "base64-decode" "base64-encode" "bind" "ceiling" "chain-data" "compose" "compose-capability" "concat" "constantly" "contains" "continue" "create-capability-guard" "create-capability-pact-guard" "create-module-guard" "create-pact-guard" "create-principal" "create-table" "create-user-guard" "days" "dec" "decrypt-cc20p1305" "define-keyset" "define-namespace" "describe-keyset" "describe-module" "describe-namespace" "describe-table" "diff-time" "distinct" "drop" "emit-event" "enumerate" "exp" "filter" "floor" "fold" "fold-db" "format" "format-time" "hash" "hours" "identity" "insert" "install-capability" "int-to-str" "is-charset" "is-principal" "keylog" "keys" "keys-2" "keys-all" "keys-any" "keyset-ref-guard" "length" "list" "list-modules" "ln" "log" "make-list" "map" "minutes" "mod" "namespace" "pact-id" "pact-version" "pairing-check" "parse-time" "point-add" "poseidon-hash-hack-a-chain" "public-chain-data" "read" "read-decimal" "read-integer" "read-keyset" "read-msg" "read-string" "remove" "require-capability" "reverse" "round" "scalar-mult" "select" "shift" "sort" "sqrt" "str-to-int" "str-to-list" "take" "time" "tx-hash" "txids" "txlog" "typeof" "typeof-principal" "update" "validate-keypair" "validate-principal" "verify-spv" "where" "with-capability" "with-default-read" "with-read" "write" "zip"
  )
)

(s_expression
  head: (s_expression_head) @keyword.exception
  (#any-of? @keyword.exception
    "enforce" "enforce-guard" "enforce-keyset" "enforce-one" "enforce-pact-version" "try"
  )
)

(s_expression
  head: (s_expression_head) @keyword.operator
  (#any-of? @keyword.operator
    "and" "and?" "not" "not?" "or" "or?" "xor"
  )
)

(s_expression
  head: (s_expression_head) @keyword.conditional
  (#any-of? @keyword.operator
    "if" "cond"
  )
)

(s_expression
  head: (s_expression_head) @keyword.return
  (#any-of?  @keyword.return
    "yield" "resume"
  )
)

(s_expression
  head: (s_expression_head) @operator
  (#any-of? @operator "^" "+" "*" "-" "+" "=" "<" ">" "|" "~" "<=" ">=" "!=")
)

[
  "defschema"
  "cond"
  "defconst"
  "module"
  "bless"
  "interface"
  "implements"
] @keyword

"use" @keyword.import

[
  "step"
  "step-with-rollback"
] @keyword.return

"defpact" @keyword.coroutine

[
  "defun"
  "defcap"
  "defproperty"
] @keyword.function

[
  "let"
  "let*"
  "deftable"
] @keyword.storage

"namespace" @keyword.directive

[
  (model)
  (managed)
  (doc)
  (event)
  (meta)
]  @attribute


(type_annotation  ":" @punctuation.delimiter)
(pair ":" @punctuation.delimiter)
(list "," @punctuation.delimiter)
(reference "." @punctuation.delimiter)

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket



(s_expression (s_expression_head) @function)

((atom) @constant
 (#match? @constant "^[A-Z_][A-Z\\d_]+$"))



(comment) @comment
(type_identifier) @type.builtin
(type_identifier (type_parameter)? @type)
(table_schema) @type
(integer) @number
(decimal) @number.float
(string) @string
(boolean) @boolean
(symbol) @string.special.symbol
(property_identifier) @property
(schema_field_identifier) @property
(doc_string) @string.documentation
(module_identifier) @module
(module_governance) @function
(use module: (reference) @module)


(defpact name: (def_identifier) @function.method)
(defun name: (def_identifier) @function.method)
(defcap name: (def_identifier) @function.method)
(defconst name: (def_identifier) @constant)
(defschema name: (def_identifier) @type.definition)
(defproperty name: (def_identifier) @function)


(parameter_identifier) @variable.parameter
(let_variable_identifier) @variable.parameter

(s_expression_head (atom) @function.method)
(s_expression_head (atom) @module . (atom) @function.method.call)

(reference) @variable.reference
(reference (atom) @module . (atom) @variable.member)

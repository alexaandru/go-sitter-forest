[
    ; "in"
    "builtin"
    "socket"
    "import"
    "ext"
    "mod"
    "union"
    "struct"
    "type"
    "mosi"
    "miso"
    "master"
    "slave"
    "pub"
    "if"
    "else"
    "match"
    "implicit"
    "incoming"
    "outgoing"
    "node"
    "reg"
    "on"
    "of"
    "true"
    "false"
] @keyword

(connect connect_type: (connect_type) @keyword)

(moddef name: (ident) @function)
(type) @type
(uniondef name: (ident) @type)
(structdef name: (ident) @type)
(type_word "Word" @type.builtin (nat) @number)
(type_clock) @type.builtin
(type_bit) @type.builtin
(incoming name: (ident) @variable)
(outgoing name: (ident) @variable)

(expr_reference) @variable
(expr_call method: (ident) @function.method)

(word) @number
(bool) @number
(nat) @number

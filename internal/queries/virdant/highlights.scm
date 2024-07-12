[
    "mod"
    "pub"
    "incoming"
    "outgoing"
    "node"
    "reg"
    "on"
    "of"
] @keyword

(connect connect_type: (connect_type) @keyword)

(moddef name: (id) @function)
(type) @type
(type_word "Word" @type.builtin (nat) @number)
(type_clock) @type.builtin
(incoming name: (id) @variable)
(outgoing name: (id) @variable)

(expr_reference) @variable
(expr_call method: (id) @function.method)

(word) @number
(nat) @number

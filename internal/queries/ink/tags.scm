(knot "function" name: (_) @name) @definition.function
(external name: (_) @name) @definition.function

; Since it's impossible to distinguish between different kinds of targets when diverting
; (because -> target doesn't give any syntactical clue), we'll just call it all an 'address':
(knot name: (_) @name) @definition.address
(stitch name: (_) @name) @definition.address
(gather label: (_) @name) @definition.address
(choice label: (_) @name) @definition.address

(divert target: (identifier) @name) @reference.address
(divert target: (qualified_name (_)+) @name) @reference.address
(divert target: (call name: (_) @name)) @reference.address
(thread target: (identifier) @name) @reference.address
(thread target: (call name: (_) @name)) @reference.address

; order here matters: this must come after the more specific (divert (call …)) query
(call name: (_) @name) @reference.function

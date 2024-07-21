; DEFINITIONS
(namespace_decl
  (namespace_head
    name: (identifier) @name
    )) @definition.module

(trait_decl
  (trait_head 
    name: (identifier) @name
    )) @definition.interface

[
  (associated_type_decl name: (identifier) @name)
  (type_alias_head name: (identifier) @name)
] @definition.type

[
  (associated_value_decl name: (identifier) @name)
  (property_head name: (identifier) @name)
] @definition.property

[
  (product_type_decl (product_type_head name: (identifier) @name))
] @definition.class

[
 (extension_decl (extension_head subject: (_) @name))
 (conformance_decl (conformance_head subject: (_) @name))
] @definition.implementation

;; Freestanding function
[
  (source_file (function_decl (function_head (function_name name: (identifier) @name))))
  (namespace_decl (function_decl (function_head (function_name name: (identifier) @name))))
] @definition.function

;; Method
[
  (trait_decl
    (function_decl (function_head (function_name name: (identifier) @name))
  ))
  (product_type_decl
    (function_decl (function_head (function_name name: (identifier) @name))
  ))
 (function_decl (function_head (function_name "init" @name)))
 (deinit_decl "deinit" @name)
] @definition.method

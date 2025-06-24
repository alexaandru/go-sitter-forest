
(ty
  (id)) @type

(package_decl
  (id) @module)

(valid_semver) @string.special

(world_item
  name: (id) @module)

(interface_item
  name: (id) @module)

(import_item
  name: (id) @module
  (extern_type
    (interface_body)))

(import_item
  name: (id) @function
  (extern_type
    (func_type)))

(export_item
  name: (id) @module
  (extern_type
    (interface_body)))

(export_item
  name: (id) @function
  (extern_type
    (func_type)))

(type_item
  alias: (id) @type.definition)

(func_item
  name: (id) @function.method)

(handle
  (id) @type)

(named_type
  name: (id) @variable.parameter)

(record_item
  name: (id) @type)

(record_field
  name: (id) @variable.member)

(flags_items
  name: (id) @type)

(flags_body
  (id) @variable.member)

(variant_items
  name: (id) @type)

(variant_case
  name: (id) @constant)

(enum_items
  name: (id) @type)

(enum_case
  name: (id) @constant)

(resource_item
  name: (id) @type)

(resource_method
  (id) @function.method)

(resource_method
  "constructor" @constructor)

(toplevel_use_item
  "use" @keyword.import)

(toplevel_use_item
  alias: (id) @module)

(use_item
  "use" @keyword.import)

(use_path
  (id) @module)

(use_names_item
  (id) @module)

"func" @keyword.function

[
  "type"
  "interface"
  "world"
  "package"
  "resource"
  "record"
  "enum"
  "flags"
  "variant"
] @keyword.type

"static" @keyword.modifier
"async" @keyword.coroutine

(uint) @constant

[
  "include"
  "import"
  "export"
  "as"
  "with"
] @keyword.import

[
  "u8"
  "u16"
  "u32"
  "u64"
  "s8"
  "s16"
  "s32"
  "s64"
  "f32"
  "f64"
  "char"
  "bool"
  "string"
] @type.builtin

[
  "tuple"
  "list"
  "option"
  "result"
  "borrow"
  "future"
  "stream"
] @type

"_" @variable.parameter.builtin


"_" @variable.parameter.builtin


"_" @variable.parameter.builtin

[
  "@"
] @punctuation.special

[
  ";"
  ":"
  ","
  "."
  "->"
] @punctuation.delimiter
(use_path "/" @punctuation.delimiter)

[
  "{"
  "}"
  "("
  ")"
  ">"
  "<"
] @punctuation.bracket

"=" @operator

[(line_comment) (block_comment)] @comment @spell

(line_comment (doc_comment)) @comment.documentation
(block_comment (doc_comment)) @comment.documentation

; Comments
(comment) @comment

; Variants & Enums
[
    "enum"
    "type"
    "case"
] @keyword
(variant_decl
    name: (ident_param) @enum)
(enum_decl
    name: (identifier) @enum)

; Classes
[
    "class"
    "def"
    "private"
    "component"
    "extends"
] @keyword
(class_decl
    name: (ident_param) @class)
(method
    name: (ident_param) @function)

; Statements
[
    "var"
    "continue"
    "break"
    "return"
    "match"
    "if"
    "else"
    "while"
    "for"
    "new"
    "in"
] @keyword

; Expressions
(infix) @operator
(sub_expr op: [
    "=="
    "!="
    "+"
    "-"
    "*"
    "/"
    "%"
    "&"
    "|"
    "&&"
    "||"
    "^"
    "<"
    ">"
    "<="
    ">="
    "<<"
    ">>"
    ">>>"
    "!"
] @operator)

(member_expr
    field: (ident_param) @property)
(apply_expr
    callee: (in_expr (member_expr field: (ident_param) @function.method)))
(apply_expr
    callee: (in_expr (member_expr field: (ident_param) @function.builtin))
    (#match?
        @function.builtin
        "^new$"
    ))
(apply_expr
    callee: (in_expr (term (literal))) @function.call)
(cast_or_query) @operator.builtin

(string) @string
(char) @string
(escape) @string.escape
(float) @number
(integer) @number
[
    "null"
    "true"
    "false"
] @constant.builtin
"this" @variable.builtin

(type_ref) @type
(type_ref
    member: (ident_param) @type.builtin
    (#match?
        @type.builtin
        "^(bool|int|float|double|short|char|string|byte|void|Array|Range|Pointer|ref|Ref)$"
    ))
(type_args_enclosed
  "<" @punctuation.bracket
  ">" @punctuation.bracket)
[
    "#unboxed"
    "#boxed"
    "#packing"
    "#packed"
] @keyword
(annotation) @storage.modifier

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

[
    ":"
    "."
    ","
    ";"
    "->"
    "=>"
] @punctuation.delimiter

[
 "do"
] @keyword

[
 "debug"
] @keyword.directive

[
 "ignore"
] @keyword.control

"return" @keyword.control.return
"null" @keyword.constant
[
"if"
"else"
"switch"
"case"
] @keyword.control.conditional

[
 "and"
 "or"
 "in"
 "with"
 "not"
 "from_candid"
 "to_candid"
 "debug_show"
] @keyword.operator

[
 "label"
 "for"
 "loop"
 "while"
 "break"
 "continue"
] @keyword.control.repeat

[
 "try"
 "catch"
 "throw"
 "assert"
] @keyword.control.exception

[
 "true"
 "false"
] @constant.builtin.boolean

[
 "import"
] @keyword.control.import

[
 "private"
 "public"
 "system"
 "query"
 "shared"
 "async"
 "async*"
 "await"
 "await*"
 "stable"
 "flexible"
] @keyword.storage.modifier
(exp_field "var"? @keyword.storage.modifier)
(array "var"? @keyword.storage.modifier)
(typ_array "var"? @keyword.storage.modifier)
(typ_field "var"? @keyword.storage.modifier)

[
 "let"
 "class"
 "func"
 "type"
 "actor"
 "object"
 "module"
] @keyword.function
(dec_var "var" @keyword.storage.type)

[
 "!"
 "?"
 "->"
 "+"
 "-"
 "*"
 "/"
 "%"
 "+%"
 "-%"
 "*%"
 "|"
 "&"
 "^"
 "#"
 "**"
 "**%"
 "=="
 "!="
 " > "
 " < "
 "<="
 ">="
 "<<"
 " >>"
 "<<>"
 "<>>"
 "+="
 "-="
 "*="
 "/="
 "%="
 "**-"
 "+%="
 "-%="
 "*%="
 "**%="
 "&="
 "|="
 "^="
 "<<="
 ">>="
 "<<>="
 "<>>="
 "@="
 "<:"
 ":="
 "^="
 "="
 "^"
] @operator

(nat) @constant.numeric.integer
(float) @constant.numeric.float
(linecomment) @comment.line
(blockcomment) @comment.block

(typ_id top: (name) @namespace)
(typ_id name: (name) @type.builtin
 (#match? @type.builtin "^(Bool|Char|Text|Float|Int|Int8|Int16|Int32|Int64|Nat|Nat8|Nat16|Nat32|Nat64|Blob|Principal|Error)$"))
(typ_id name: (name) @type)

[
  ":"
  ";"
  ","
  "."
] @punctuation.delimiter

[
 "["
 "]"
 "{"
 "}"
 "("
 ")"
 "<"
 ">"
] @punctuation.bracket

(imp . (name) @namespace)

(exp_variant variant: (name) @tag)
(pat_plain variant_name: (name) @tag)
(typ_tag) @tag

(placeholder) @constant.builtin

(typ_field name: (name) @variable.other.member)
(typ_bind binding: (name) @type)

(dec_func pat: (pat_tuple (name) @variable.parameter))
(dec_func pat: (pat_tuple (pat_bin) @variable.parameter))
(dec_func name: (name) @function)
(dec_type name: (name) @type)

(label name: (name) @label)
(break label: (name) @label)

(char (escape) @constant.character.escape)
(char) @constant.character

(text (escape) @constant.character.escape)
(text) @string

(call invoked: (name) @function)
(call invoked: (exp_post member: (name) @function))

(dec (name) @variable)
(exp (name) @variable)
(exp_field name: (name) @variable.other.member)
(exp_post member: (name) @variable)

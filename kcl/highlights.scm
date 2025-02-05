(identifier) @variable

(import_stmt
  (dotted_name
    (identifier) @namespace))

(import_stmt
  (dotted_name
    (identifier) @namespace)
  (identifier) @namespace)

(basic_type) @type

(schema_type
  (dotted_name
    (identifier) @type))

(schema_type
  (dotted_name
    (identifier) @namespace
    (identifier) @type))

(schema_expr
  (identifier) @type)

(protocol_stmt
  (identifier) @type)

(rule_stmt
    (identifier) @type)

(schema_stmt
  (identifier) @type)

(lambda_expr
  (typed_parameter (identifier) @parameter))

(lambda_expr
  (identifier) @parameter)

(selector_expr
  (select_suffix
    (identifier) @property))

(comment) @comment
(string) @string
(escape_sequence) @escape

(call_expr
    (identifier) @function)

[
  (integer)
  (float)
] @number

[
  (true)
  (false)
  (none) 
  (undefined)
] @constant.builtin

[
  "all"
  "any"
  "assert"
  "as"
  "check"
  "elif"
  "else"
  "filter"
  "for"
  "if"
  "import"
  "lambda"
  "map"
  "mixin"
  "protocol"
  "rule"
  "schema"
  "type"
] @keyword

[
  "+"
  "-"
  "*"
  "**"
  "/"
  "//"
  "%"
  "<<"
  ">>"
  "&"
  "|"
  "^"
  "<"
  ">"
  "~"
  "<="
  ">="
  "=="
  "!="
  "@"
;  "\\"
  "and"
  "or"
  "not"
  "in"
  "is"
  "="
  ":"
] @operator

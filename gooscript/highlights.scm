(shebang) @keyword.directive

(comment) @comment

(number) @number

(string char: (char) @string)
(string escaped: (identifier)@string.escaped)

(string [ "\"" "\"\"\"" ] @string )

["module" "use" "from"] @keyword.import

(module_import name: (identifier) @module )

(identifier) @variable

((identifier) @variable.builtin
  (#any-of? @variable.builtin
        "self"
        "unit"
        "nil"
        "global"
        "len"
        "clone"
        "each"))

(eval_expression "eval" @function.builtin)

((identifier) @constant
  (#match? @constant "^[A-Z_][A-Z0-9_]+"))

((identifier) @type
  (#match? @type "^[A-Z][A-Za-z0-9_]+"))

((identifier) @type.builtin
  (#any-of? @type.builtin
   "Dictionary"
   "Number"
   "Integer"
   "String"
   "Array"
   "Function"
))

(function_call
  name: (identifier) @function.call)

(function_call
  name: ((identifier) @keyword.operator
  (#eq? @keyword.operator "range")))

(function_call
  name: ((identifier) @function.builtin
  (#any-of? @function.builtin
        "include_str"
        "print"
        "each"
        "get"
        "idx"
        "readline"
        "len"
        "clone"))
)

(annotation
  (identifier) @attribute) @attribute
(annotation ty: (identifier) @attribute)

(annotation
  ty: ((identifier) @attribute.builtin
  (#any-of? @attribute.builtin
   "builtin"
   "debug"
 )))

(property_expression
	method: (function_call name: (identifier) @method.call))

(property_expression
	method: (function_call name: ((identifier) @constructor
  (#eq? @constructor "new"))))

((comment)+ @comment.documentation
  (#match? @comment.documentation "^##\s+.*"))

(variable_declare_ident
  name: (identifier) @variable)

(bool) @boolean

(fn_statement
	name: (identifier) @function)

(fn_statement
	param: (identifier) @variable.parameter)

(property_expression
	property: (identifier) @field
)

(dictionary
  key: (key) @variable.member)

[
 "let"
 "var"
 "do"
 "in"
] @keyword

(is_expression ["is" "not"] @keyword)

[
 "fn"
] @keyword.function

[
 "if"
 "unless"
 "else"
 "then"
 "match"
 "default"
] @keyword.conditional

[
 "while"
 "for"
 "until"
] @repeat

[
	"true"
	"false"
  "ongod"
  "cap"
] @bool

[
 "return"
 "eval"
] @keyword.return


[
 "("
 ")"
 "{"
 "}"
 "["
 "]"
] @punctuation.bracket

[
 "="
] @operator

[
 "\\n"
 "\\r"
] @string.escape

[
 ";"
 ","
 ":"
] @punctuation.delimeter


[
	"%="
	"^="
	"&="
	"*="
	"-="
	"+="
	"|="
	"/="
	"="
	"|"
	"^"
	"&"
	"=="
	"!="
  "<"
  "<="
  ">"
  ">="
  ">>"
  "<<"
  "+"
  "-"
  "/"
  "*"
  "%"
  "=>"
] @operator

[
  "mod"
  "not"
	"or"
	"and"
] @keyword.operator



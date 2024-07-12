["(" ")"] @punctuation.bracket

(number) @number
(character) @character
(boolean) @booleans
(symbol) @variable
;; TODO: highlight "TODO", "FIXME", etc. comments
(comment) @comment
(block_comment) @comment
(string) @string

;; the first element of a list is a function.
(list
  .
  (symbol) @function.call)

((symbol) @operator
  (#any-of? @operator
   "sizeof" "offsetof" "alignmentof"
   "array-of" "cast"
   "p=" "p<" "p>" "p+" "p-"
   "not" "and" "or"
   "#" "@" "$" ":" "@$" "@:" ":@" "@:@"
   "+" "-" "*" "/" "%" "=" "!=" "<" "<=" ">" ">="
   "<<" ">>" "&" "|" "^" "+'" "-'" "*'" "/'" "%'"
   "='" "!='" "<'" "<='" ">'" ">='" "&'" "|'" "^'"))

((symbol) @keyword
 (#any-of? @keyword
   "def" "do"
   "setf" "setv"))

((symbol) @keyword.conditional
 (#any-of? @keyword.conditional
   "if" "when" "unless"))

((symbol) @keyword.function
 (#eq? @keyword.function
   "fn"))

((symbol) @keyword.ternary
 (#any-of? @keyword.ternary
   "?"))

((symbol) @keyword.repeat
 (#any-of? @keyword.repeat
   "for" "while"))

(list
  .
  (symbol) @keyword
  .
  (symbol) @function
  (#eq? @keyword "def"))

((symbol) @keyword.type
 (#any-of? @keyword.type
   "struct" "def-variant"))

((symbol) @keyword.modifier
 (#any-of? @keyword.modifier
   "inline"
   "const"
   "intern" "extern" "extern-c" "opaque"))

((symbol) @type.builtin
 (#any-of? @type.builtin
   "int" "int8" "int16" "int32"
   "uint" "uint8" "uint16" "uint32"
   "double" "float" "long-double"
   "bool" "char" "void" "size" "ptrdiff" "intptr"))

((symbol) @keyword.import
 (#any-of? @keyword.import
  "import" "include"))

((symbol) @keyword.return
 (#eq? @keyword.return
  "return"))

(list
  .
  (symbol) @keyword.import
  .
  (symbol) @module
  (#any-of? @keyword.import
   "include" "import"))

(list
  . (symbol) @_def_variant
  (list
    (list . (symbol) @constructor))
  (#eq? @_def_variant "def-variant"))


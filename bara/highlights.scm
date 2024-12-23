[
  "fn"
  "var"
  "for"
  "while"
  "if"
  "else"
  "break"
  "continue"
  "match"
  "return"
  "do"
] @keyword

(integer) @number
(float) @number
"true" @constant.builtin
"false" @constant.builtin
"nil" @constant.builtin

(string) @string

[
  "="
  "+"
  "-"
  "*"
  "/"
  "%"
  "<"
  ">"
  "<="
  ">="
  "=="
  "!="
  "&&"
  "||"
  "!"
  "^"
  "&"
  "|"
  "<<"
  ">>"
  "+="
  "-="
  "*="
  "/="
  "%="
  "&="
  "|="
  "^="
  "<<="
  ">>="
  "\\"
  "=>"
  "?"
  ":"
] @operator

[
  "("
  ")"
  "[" 
  "]"
  "{"
  "}"
] @punctuation.bracket

["," ";"] @punctuation.delimiter

(litSupport) @attribute

(comment) @comment 

(callExpression
  callee: (identifierExpression 
    (
      (identifier) @function-name
        (#any-of? @function-name 
                  "print"
                  "help"
                  "push"
                  "pop"
                  "str"
                  "format"
                  "len"
                  "int"
                  "float"
                  "bool"
                  "type"
                  "input"
                  "split"
        )
    ) @function.builtin
  )
)

(callExpression 
  callee: (identifierExpression) @function)

(functionDeclaration
  name: (identifier) @function)

(parameters
  (identifier) @variable.parameter)





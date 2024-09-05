[
  (openParen)
  (closeParen)
  (openCurly)
  (closeCurly)
  (openBracket)
  (closeBracket)
] @punctuation.bracket

[
  (branchSeparator)
  (underscore)
] @constructor
; ] @punctuation.delimiter

[ (character) ] @constant.character
[ (comment) ] @comment
[ (constant) ] @constant.numeric
[ (identifier) ] @variable
[ (leftArrow) ] @keyword.directive
[ (function) ] @function
[ (modifier1) ] @operator
[ (modifier2) ] @operator
[ (number) ] @constant.numeric
[ (placeHolder) ] @special
[ (otherConstant) ] @string.special
[ (signature) ] @type
[ (system) ] @function.builtin
[ (tripleMinus) ] @module

[ (string)
  (emptyMultiLineString)
  (multiLineString)
] @string

; planet
[
  "id"
  "identity"
  "∘"
  "dip"
  "⊙"
  "gap"
  "⋅"
] @tag

[
  (deprecated)
  (identifierDeprecated)
] @warning

[
  (formatter)
] @keyword.directive

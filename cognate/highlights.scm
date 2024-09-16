(number) @number
(string) @string
(escape_sequence) @string.escape
(symbol) @constant
(boolean) @boolean

[(line_comment) (multiline_comment)] @comment
(inline_comment) @comment.inline

";" @punctuation.special

["(" ")"] @punctuation.bracket

(identifier) @variable

(statement
 (identifier) @keyword (#eq? @keyword "Def")
 .
 (identifier) @function)

;; TODO: Update once neovim supports this.
; ((identifier) @function (#is-not? local))

((identifier) @keyword (#any-of? @keyword "For" "While" "Let" "Def" "When" "If"
                        "Case" "When" "Unless" "Do" "With" "Set" "Take-while"
                        "Until"))

((identifier) @function.builtin (#any-of? @function.builtin
;;BEGIN
"Empty" "Match" "Print" "Put" "Random" "Modulo" "Sqrt" "Integer?" "Zero?" "Table?" "Table!" "First" "Rest" "Push" "Empty?" "Append" "Substring" "Regex" "Regex-match" "Ordinal" "Character" "Split" "Uppercase" "Lowercase" "Floor" "Round" "Ceiling" "Abs" "Error" "Wait" "Stop" "Show" "Stack" "Clear" "Unbox" "Begin" "Sind" "Cosd" "Tand" "Sin" "Cos" "Tan" "Exp" "Log" "Ln" "Asind" "Acosd" "Atand" "Asin" "Acos" "Atan" "Sinhd" "Coshd" "Tanhd" "Sinh" "Cosh" "Tanh" "Table" "Insert" "Remove" "." "Has" "Values" "Keys" "Length" "Parameters" "Input" "Open" "Read-file" "Read-line" "Close" "Path" "Seek" "Drop" "Prepend" "Index" "All" "Discard" "None" "Append" "Swap" "Fold" "Prints" "Times" "Range" "Twin" "Take" "Triplet" "Min" "Reverse" "Filter" "Max" "Map" "Puts" "Sort" "Assert" "Length" "Of" 
;;END
                                 ))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">=" "^"
                         "==" "!=" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Number" "Number!" "String!" "List!" "Block!" "Symbol!" "Boolean!" "Box!" "Io!" "Any!" "Number?" "String?" "List?" "Block?" "Symbol?" "Boolean?" "Box?" "Io?" "Any?"))

(statement (
  (identifier) @function.builtin (#eq? @function.builtin ".")
  .
  (identifier) @variable.member))

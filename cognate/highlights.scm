(number) @number
(string) @string
(escape_sequence) @string.escape
(symbol) @constant
(boolean) @boolean

[(inline_comment) (line_comment) (multiline_comment)] @comment

";" @punctuation.special

["(" ")"] @punctuation.bracket

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
                                 "Empty" "Match" "Print" "Put" "Do" "Random" "Modulo" "Sqrt" "Integer?" "Zero?" "Integer!" "Zero!" "First" "Rest" "Head" "Tail" "Push" "Empty?" "Join" "String-length" "Substring" "Regex" "Ordinal" "Character" "Split" "Floor" "Round" "Ceiling" "Error" "Wait" "Stop" "Show" "Stack" "Clear" "Unbox" "Set" "Debug" "Begin" "Sind" "Cosd" "Tand" "Sin" "Cos" "Tan" "Exp" "Log" "Ln" "Asind" "Acosd" "Atand" "Asin" "Acos" "Atan" "Sinhd" "Coshd" "Tanhd" "Sinh" "Cosh" "Tanh" "Dict" "Insert" "Get" "Parameters" "Input" "Open" "Read-file" "Close" "Path" "Drop" "Prepend" "Index" "All" "Discard" "None" "Append" "Swap" "Fold" "Prints" "Times" "Range" "Twin" "Take" "Triplet" "Min" "Reverse" "Filter" "Max" "When" "Case" "Map" "Puts" "Sort" "Assert" "Length"
                                 ))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">=" "^"
                         "==" "!=" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Number" "Number!" "String!" "List!" "Block!" "Symbol!" "Boolean!" "Box!" "Io!" "Any!" "Number?" "String?" "List?" "Block?" "Symbol?" "Boolean?" "Box?" "Io?" "Any?"))

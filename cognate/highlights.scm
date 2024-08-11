(number) @number
(string) @string
(escape_sequence) @string.escape
(symbol) @constant
(boolean) @boolean

[(inline_comment) (line_comment) (multiline_comment)] @comment

[
 ";"
 "("
 ")"
] @punctuation.special

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
                                 "Print" "Prints" "Puts" "Put" "Fold" "Show"
                                 "Reverse" "Twin" "Drop" "Swap" "Case" "When"
                                 "Do" "Map" "Range" "Read-file" "Unbox" "Floor"
                                 "Ceiling" "Round" "Ln" "Log" "Triplet" "Head"
                                 "Tail" "First" "Rest" "Index" "Length" "Sin"
                                 "Cos" "Tan" "Asin" "Acos" "Atan" "Sind" "Cosd"
                                 "Tand" "Asind" "Acosd" "Atand" "Sinh" "Cosh"
                                 "Tanh" "Sinhd" "Coshd" "Tanhd" "Filter"
                                 "Number?" "Zero?" "Empty?" "Empty" "Any?"
                                 "None" "All" "Sort" "Append" "Prepend" "Min"
                                 "Max" "Times" "Integer!" "Number!" "Boolean!"
                                 "Block!" "Zero!" "String!" "List!" "Symbol!"
                                 "Push" "Stack"))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">="
                         "==" "!=" "Modulo" "Exp" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Regex"
                             "Character" "Number"))

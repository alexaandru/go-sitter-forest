(number) @number
(string) @string
(symbol) @constant
(boolean) @boolean

(inline_comment) @comment
(line_comment) @comment
(multiline_comment) @comment

[
 ";"
 "("
 ")"
] @punctuation.special

((identifier) @keyword (#any-of? @keyword "For" "While" "Let" "Def" "When" "If"
                        "Case" "When" "Unless" "Do" "With" "Set" "Take-while"
                        "Until"))
((identifier) @function.builtin (#any-of? @function.builtin "Print" "Prints"
                                 "Puts" "Put" "Fold" "Show" "Reverse" "Twin"
                                 "Drop" "Swap" "Case" "When" "Do" "Map" "Range"
                                 "Read-file" "Unbox" "Floor" "Ceiling" "Round"
                                 "Ln" "Log" "Triplet" "Head" "Tail" "Sin" "Cos"
                                 "Tan" "Asin" "Acos" "Atan" "Sind" "Cosd"
                                 "Tand" "Asind" "Acosd" "Atand" "Sinh" "Cosh"
                                 "Tanh" "Sinhd" "Coshd" "Tanhd" "Filter"
                                 "Number?" "Zero?" "Empty?" "Empty" "Any?"
                                 "None" "All" "Sort" "Append" "Prepend" "Min"
                                 "Max" "Times"))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">="
                         "==" "!=" "Modulo" "Exp" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Regex"
                             "Character" "Number"))


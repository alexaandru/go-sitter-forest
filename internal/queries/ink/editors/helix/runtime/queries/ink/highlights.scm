(return "return" @keyword.control.return)
(global ["VAR" "CONST"] @keyword.storage.type
        "=" @operator)
(temp "temp" @keyword
      name: (identifier) @variable.member) ; not really, but temp vars are the closest thing to members that ink has
(include "INCLUDE" @keyword.control.import
         (path) @string.special.path)
(external "EXTERNAL" @keyword
          (identifier) @function)
(todo_comment "TODO" @keyword ":" @comment) @comment
(code "~" @keyword.directive)


(binary "+" @operator)
(binary "-" @operator)
(binary "*" @operator)
(binary "/" @operator)
(binary "?" @operator)
(binary "!?" @operator)
(binary "^" @operator)
(binary "==" @operator)
(binary "!=" @operator)
(binary "||" @operator)
(binary "&&" @operator)
(binary "<=" @operator)
(binary ">=" @operator)
(binary "<" @operator)
(binary ">" @operator)
(binary "%" @operator)
(binary "and" @keyword.operator)
(binary "or" @keyword.operator)
(binary "has" @keyword.operator)
(binary "hasnt" @keyword.operator)
(binary "mod" @keyword.operator)

(postfix "++" @operator)
(postfix "--" @operator)

(unary "!" @operator)
(unary "-" @operator)
(unary "not" @keyword.operator)

(assignment ["=" "+=" "-="]) @operator

(choice_only ["[" "]"] @punctuation.bracket)  ; Need to specifiy choice here, because the grammar does always tokenize these brackets (for all text), but we don't want to highlight them outside of choices.
(label ["(" ")"] @punctuation.bracket)

["{" "}"] @punctuation.bracket ; Curlies are never just text, no need to qualify

["," "|" ":"] @punctuation.delimiter

(call (identifier) @function)

(knot "==" @markup.heading.1)
(knot (identifier) @label)
(knot "function" @keyword.function
      (identifier) @function)

(stitch "=" @markup.heading.2)
(stitch (identifier) @label)

(choice_mark) @markup.list
(label (identifier) @label)

(gather_mark) @markup.list.unnumbered

(params "ref" @keyword)
(params (identifier) @variable.parameter)

(cond_arm "-" @keyword.control.conditional)
(alt_arm "-" @keyword.control.repeat)
(else) @constant.builtin

(list "LIST" @keyword.storage.type
      (identifier) @type.enum
      "=" @operator)

(list_value_def (identifier) @type.enum.variant)

(list_values (identifier) @type.enum.variant)
(list_values
      (qualified_name
            . (identifier) @type.enum
            (identifier) @type.enum.variant))

(glue) @keyword

["->" "->->" "<-"] @keyword.control

(params (divert (identifier) @variable.parameter)) ; exception to normal divert coloring: parameters should be distinguishable
(divert (identifier) @constant.builtin
        (#any-of? @constant.builtin "END" "DONE"))

(divert (identifier)+ @label)
(divert (call (identifier) @label))
(divert (call (qualified_name (identifier) @label)))

(thread [(identifier) (call)] @label)

(call (identifier) @function.builtin
      (#any-of? @function.builtin
       ; List Functions
       "LIST_VALUE"
       "LIST_COUNT"
       "LIST_MIN"
       "LIST_MAX"
       "LIST_RANDOM"
       "LIST_RANGE"
       "LIST_INVERT"
       ; Game Queries
       "CHOICE_COUNT"
       "TURNS"
       "TURNS_SINCE"
       "LIST_FOO"
       "SEED_RANDOM"))

(multiline_alternatives ["shuffle" "stopping" "cycle" "once"] @keyword.control.repeat)
(alternatives ["&" "$" "~" "!"] @keyword.control.repeat)

(comment) @comment

(identifier) @variable
(qualified_name "." @punctuation.delimiter)
(string) @string

(number) @constant.numeric
(boolean) @keyword.builtin.boolean

(tag "#" @punctuation.delimiter (content)* @embedded) @attribute; after expr stuff so that evals get highlighted
(content) @embedded

(identifier) @variable
(interpolation) @none
; (interpolation (identifier) @variable)
(array (expression (identifier) @variable.parameter))
;(array (compound (usage (identifier) @variable.parameter)))
; (array (expression (interpolation (identifier) @variable.member)))
(struct (expression (identifier) @variable.member))
(struct (compound (usage (identifier) @variable.member)))
; (struct (expression (interpolation (identifier) @variable.member)))
; (arguments (expression (identifier) @variable.parameter))
(
 (call
  name: (identifier) @_func
  (arguments (in left: (usage (identifier) @variable.parameter))))
 (#eq? @_func "ForEach"))

; (call
;   body: (array
;     (compound
; 	  (usage (identifier) @variable.parameter)
; 	  (assign (_))
; 	)
;   )
; )

(function_definition (arguments (usage (identifier) @variable.parameter)))
; (arguments (expression (interpolation (identifier) @variable.parameter)))
(if (identifier) @function.macro)
(define variable: (identifier) @function.macro)

(call name: (identifier) @function.call)
(function_definition "function" @keyword.function)
(function_definition name: (identifier) @function)

(
 (call (identifier) @_func @keyword.conditional)
 (#eq? @_func "If")
)

(
 (call (identifier) @_func @keyword.repeat)
 (#eq? @_func "ForEach")
)

(
  (call (identifier) @_func @function.builtin)
  (#any-of? @_func "exists" "file_exists" "Alias" "Compiler" "Copy" "CopyDir" "CSAssembly" "DLL" "Error" "Exec" "Executable" "Library" "ListDependencies" "ObjectList" "Print" "RemoveDir" "Settings" "Test" "TextFile" "Unity" "Using" "VCXProject" "VSProjectExternal" "VSSolution" "XCodeProject")
)

(
  (identifier) @_id @constant.builtin
  (#any-of? @_id "_CURRENT_BFF_DIR_" "_FASTBUILD_VERSION_STRING_" "_FASTBUILD_VERSION_" "_FASTBUILD_EXE_PATH_" "_WORKING_DIR_")
)

(
  (identifier) @_id @function.builtin.macro
  (#any-of? @_id "__LINUX__" "__OSX__" "__WINDOWS__")
)

[
 "+" "-"
 "=" "!"
 "&&" "||"
 "==" "!="
 ">" "<"
 ">=" "<="
] @operator

[ "&&" "||" "in" "not in" ] @keyword.operator

(comment) @comment @spell

[
 "undef"
 "if"
 (else)
 ((unknown) (#set! "priority" 101))
 (endif)
 (once)
] @keyword.directive
[ "import" "include" ] @keyword.import
"define" @keyword.directive.define

(decimal) @number
[ "true" "false" ] @boolean
(string) @string
[ (escape_sequence) (placeholder) "$" "%" ] @string.escape

[ "#" "." "^" ] @punctuation.special
[ "[" "]" "(" ")" "{" "}" ] @punctuation.bracket

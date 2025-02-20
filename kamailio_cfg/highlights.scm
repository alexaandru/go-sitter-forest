(file_starter) @module
(comment) @comment
(multiline_comment) @comment

(preproc_def
  (preproc_arg) @variable.parameter)
(preproc_subst
  (preproc_arg) @string.regexp) @keyword.directive
(preproc_substdef
  (preproc_arg) @string.regexp) @keyword.directive.define
(preproc_substdefs
  (preproc_arg) @string.regexp) @keyword.directive.define
(preproc_trydef
  (preproc_arg) @variable.parameter)
(preproc_ifdef) @keyword.directive
(preproc_ifndef) @keyword.directive
(preproc_trydef) @keyword.directive.define
(preproc_def) @keyword.directive.define
(include_file
  file_name: (string) @string.special.path) @keyword.directive
(import_file
  file_name: (string) @string.special.path) @keyword.directive
(route_call) @function

(regex_pattern) @string.regexp
(regex_replacement) @string.regexp
(regex_flags) @string.regexp
(pseudo_variable
   "$" @keyword.operator
   var: (pseudo_content) @attribute.builtin)
(var_
  name: (pvar_argument) @variable.parameter
(avp_var
  name: (pvar_argument) @variable.parameter)
(dlg_var
  name: (pvar_argument) @variable.parameter)
(pvar_expression
  "$" @keyword.operator
  var: (pseudo_content) @attribute.builtin)
(xavp_values
  name: (identifier) @variable.parameter
  index: (identifier) @variable.builtin
  field: (identifier) @property)
(transformation) @variable.parameter
(htable
  htable: (identifier) @variable.parameter
  "=>" @punctuation.special)

(modparam
  module_name: (string) @string.special.path) @function.builtin
(modparamx
  module_name: (string) @string.special.path) @function.builtin
(loadmodule
  module_name: (string) @string.special.path) @keyword.import
(loadmodulex
  module_name: (string) @string.special.path) @keyword.import

(loadpath
  path: (string) @string.special.path) @keyword.import

(top_level_assignment_expression
  key: (identifier) @variable.member
  value: (expression) @variable.parameter)


(string) @string
(call_expression
  function: (expression) @function.call
  arguments: (argument_list
    "(" @punctuation.bracket
    ")" @punctuation.bracket) @variable.parameter)

(number_literal) @number

(predef_route) @keyword
(route_name) @variable.parameter

(true) @keyword
(false) @keyword
(null) @keyword

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"=" @operator
"==" @operator
">" @operator
"<" @operator
">=" @operator
"<=" @operator
"!=" @operator
"=~" @operator
"+=" @operator
"!" @operator
"&&" @operator
"&" @operator
"||" @operator
"|" @operator
"^" @operator
"<<" @operator
">>" @operator
"+" @operator
"-" @operator

"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter
":" @punctuation.delimiter
"::" @character.special

"or" @keyword.operator
"not" @keyword.operator
"and" @keyword.operator

[ "break"
  "continue"
  "return"
  "switch"
  "drop"
  "exit"] @keyword.return

[ "while" ] @keyword.repeat
[  "if"
   "else"
   "default"
   "case" ] @keyword.conditional


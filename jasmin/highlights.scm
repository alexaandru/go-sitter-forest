[
 "fn"
 "return"
 "for"
 "to"
 "downto"
 "exec"
 "from"
 "while"
 "if"
 "ArrayInit"
 "namespace"
 (keyword)
] @keyword

[
 "true"
 "false"
] @constants.builtin

(comment) @comment
(var (identifier) @variable)

(function_definition [
  name: (identifier) @function
  visibility: (call_conv) @keyword])

[
  (utype)
  (ptype)
  (swsize)
] @type
(storage) @attribute

(int) @number
(string_literal) @string

(function_call
  (var (identifier) @function))

(builtin_call
  (prim (identifier) @function.builtin))

[
"*"
"/"
"%"
"<<"
">>"
"&"
"<<r"
">>r"
">>s"
"<<s"
"+"
"-"
"|"
"^"
"=="
"!="
"<"
"<="
">"
">="
"<s"
">s"
"*="
"/="
"%="
"<<="
">>="
"&="
"<<r="
">>r="
">>s="
"<<s="
"+="
"-="
"|="
"^="
"="
"&&"
"||"] @operator

[
  "("
  ")"
  "{"
  "}"]
@punctuation.bracket

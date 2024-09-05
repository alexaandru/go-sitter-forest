["·"] @constant.builtin
["‿" "⟨" "⟩" "[" "]"] @operator
["(" ")" "{" "}"] @punctuation.bracket

[
  ","
  "?"
  ";"
  ":"
  "⋄"
  "⇐"
  (ASGN)
] @keyword.directive

(comment) @comment
["@" (character)] @character
(number) @numeric
(string) @string

[
  (specialname_s)
  (symbol_sl)
  (symbol_s)
] @variable

[
  (specialname_F)
  "𝕊"
  (symbol_Fl)
  (symbol_F)
  (system_F)
] @function

[
  (specialname__m)
  (symbol__ml)
  (symbol__m)
  (system__m)
] @special

[
  (specialname__c_)
  (symbol__cl_)
  (symbol__c_)
  (system__c_)
] @special

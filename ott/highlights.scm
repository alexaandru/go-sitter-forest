(string) @variable
(defnclass_name) @function
(defn_name) @function.method
(rule_name) @property
(namespace_prefix) @string
(hom_name) @type
(comment) @comment
(production_name) @property
(production_mod) @type.builtin

[
 (dash_line)
 (dots)
  "|"
  "::"
  "<::"
  "::="
  ","
] @punctuation.delimiter

[
 "{{"
 "}}"
 "[["
 "]]"
] @punctuation.bracket

[
  "</"
  "//"
  "/>"
] @punctuation.special

[
  "metavar"
  "subrules"
  "indexvar"
  "grammar"
  "defns"
  "defn"
  "by"
  "embed"
  "IN"
] @keyword

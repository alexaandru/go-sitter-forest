[
  "("
  ")"
] @punctuation.bracket

[
  "^"
  "="
  ":"
] @operator

[
  "#"
  ".."
  "*"
  "->"
] @punctuation.special

; Entity Keywords
[
  "Profile"
  "Alias"
  "Extension"
  "Invariant"
  "Instance"
  "ValueSet"
  "CodeSystem"
  "Mapping"
  "Logical"
  "Resource"
  "RuleSet"
] @keyword

; Metadata Keywords
[
  "Parent"
  "Title"
  "Description"
  "Id"
  "Severity"
  "InstanceOf"
  "Usage"
  "Source"
  "XPath"
  "Target"
] @keyword

; Rule Keywords
[
  "contentReference"
  "insert"
  "and"
  "or"
  "contains"
  "named"
  "only"
  "obeys"
  "valueset"
  "codes"
  "from"
  "include"
  "exclude"
  "where"
  "system"
  "exactly"
] @keyword

[
  "Reference"
  "Canonical"
] @type


(sd_metadata (parent (name))) @type
(target_type (name)) @type
(string) @string @spell
(multiline_string) @string @spell
(strength_value) @constant
(bool) @constant.boolean
(flag) @constant
(code_value) @parameter
(fsh_comment) @comment @spell

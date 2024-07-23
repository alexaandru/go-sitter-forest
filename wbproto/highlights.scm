; Includes

(extern "IMPORTABLE" @include)
(extern "EXTERNPROTO" @include)

; Keywords

[
  "DEF"
  "EXTERNPROTO"
  "IMPORTABLE"
  "IS"
  "PROTO"
  "USE"
  "field"
  "hidden"
  "hiddenField"
  "unconnectedField"
  "vrmlField"
] @keyword

; Variables

(identifier) @variable

; Fields/Properties

(property . (identifier) @property)

; Types

(node . (identifier) @type)

((identifier) @type
  (#lua-match? @type "^[A-Z][a-zA-Z0-9_]+$"))

; Functions

; Punctuation

[ "[" "]" "{" "}" ] @punctuation.bracket

; Literals

(string) @string
(number) @number
(boolean) @boolean
(null) @boolean

; Comments

(comment) @comment @spell

; Errors

(ERROR) @error

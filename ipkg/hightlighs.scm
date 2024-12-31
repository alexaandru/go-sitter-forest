; https://github.com/srghma/tree-sitter-ipkg
; Copyright (c) 2024 Serhii Khoma
; Licensed under the MIT license.

; Keywords
[
  "package"
  "authors"
  "maintainers"
  "license"
  "brief"
  "readme"
  "homepage"
  "sourceloc"
  "bugtracker"
  "opts"
  "sourcedir"
  "builddir"
  "outputdir"
  "prebuild"
  "postbuild"
  "preinstall"
  "postinstall"
  "preclean"
  "postclean"
  "version"
  "langversion"
  "modules"
  "main"
  "executable"
  "depends"
] @keyword

; Package name
(package_name) @type

; Module names
(module_name) @type

; Field values
(string_value) @string
(boolean_value) @constant.builtin

; Version numbers and ranges
(version_number) @number
(version_range_op) @operator

; Comments
[
  (line_comment)
  (block_comment)
] @comment

; Punctuation
"=" @punctuation.delimiter
"," @punctuation.delimiter

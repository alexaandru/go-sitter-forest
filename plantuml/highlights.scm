;; Keywords
(preprocessor) @keyword
(keyword) @keyword
[
 "from"
 "as"
] @keyword

;; Include Statements
(include "!include" @keyword)
(include url: (url) @string)
(include filepath: (filepath) @string)
(include library: (non_breakable_identifier) @field)
(include library: (include_open)  @field)
(include library: (include_close) @field)

;; Theme Statements
(theme "!theme" @keyword)
(theme name: (identifier) @identifier)
(theme url: (url) @string)

;; Comments
(comment) @comment

;; Strings
(string) @string

;; Components and Blocks
(component) @type
(component method: (identifier) @identifier)
(component alias: (identifier) @variable)
(block component: (component) @class)
(block) @property

;; Attributes
(attribute) @variable
(attribute (identifier) @identifier)
(attribute (string) @string)
(attribute_list (attribute) @property)
(attribute_list (attribute_sep) @punctuation.delimiter)

;; Delimiters
(delimiter) @punctuation.delimiter
(block_open) @punctuation.bracket
(block_close) @punctuation.bracket
(attribute_list_open) @punctuation.bracket
(attribute_list_close) @punctuation.bracket

;; URLs and Filepaths
(url) @string
(filepath) @string

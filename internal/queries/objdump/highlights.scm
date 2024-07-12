(byte) @constant

[
  (hexadecimal)
  (integer)
  (section_address)
  (address)
] @number

(identifier) @variable
(disassembly_section_label
  (identifier)) @namespace

[
  "file" "format"
  "File" "Offset:"
  "discriminator"
] @text
"Disassembly of section " @text.title

(file_path) @string.special
(instruction) @function
(bad_instruction) @text.warning
(label) @label

["<" ">"] @punctuation.special
["(" ")"] @punctuation.bracket
["+" ":"] @punctuation.delimiter

(comment) @comment.documentation

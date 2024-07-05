//go:build !plugin

package editorconfig_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/editorconfig"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# https://editorconfig.org/#file-format
    
# top-most EditorConfig file
    root = true

# Unix-style newlines with a newline ending every file
    [*]
end_of_line =      LF   
    insert_final_newline = true   
    spelling_language = true  

[[c-h]]
[[pa-e]]
[[a-ea]]
[[sa-e0]]

[[!c-h]]
[[!pa-e]]
[[!a-ea]]
[[!sa-e0]]

[{10..2}]
[{1..-20}]
[{-10..2}]
[{-1..-20}]
[{1,2,3,4}]

# Matches multiple files with brace expansion notation
# Set default charset
[*.{js,py}]
charset = utf-8
one = true   

   # 4 space indentation
[*.py]
indent_style = space
indent_size = 4

# Tab indentation (no size specified)
[Makefile]
indent_style = tab

# Indentation override for all JS under lib directory
[lib/**.js]
indent_style = space
indent_size = 2

# Matches the exact files either package.json or .travis.yml
[{package.json,.travis.yml}]
indent_style = space
indent_size = 2

[*.log[-a]]
llave=valor

[*]
ley_=1

[*.py[!io*a\-]\]]
key=value

[{}]
empty = true

[/usr/{ucb/{ex,edit},lib/{ex?.?*,how_ex}}]
charset = latin1

[*.{,txt,md,tex,\,}]
trim_trailing_whitespace = false

[*{-1..3}/***/*.py]
indent_style = space

[*.{js,ts}]
        This is a valid key = 4_450
end_of_line = utf-8

# Also valid keys
[typing/*.py?]
charset = o
v = one
`
	expected = "(document (preamble (comment) (comment) (pair key: (identifier) value: (boolean)) (comment)) (section (section_name (wildcard_characters)) (pair key: (identifier) value: (end_of_line)) (pair key: (identifier) value: (boolean)) (pair key: (identifier) value: (boolean))) (section (section_name (character_choice (character_range start: (character) end: (character))))) (section (section_name (character_choice (character) (character_range start: (character) end: (character))))) (section (section_name (character_choice (character_range start: (character) end: (character)) (character)))) (section (section_name (character_choice (character) (character_range start: (character) end: (character)) (character)))) (section (section_name (character_choice (negation) (character_range start: (character) end: (character))))) (section (section_name (character_choice (negation) (character) (character_range start: (character) end: (character))))) (section (section_name (character_choice (negation) (character_range start: (character) end: (character)) (character)))) (section (section_name (character_choice (negation) (character) (character_range start: (character) end: (character)) (character)))) (section (section_name (integer_range start: (integer) end: (integer)))) (section (section_name (integer_range start: (integer) end: (integer)))) (section (section_name (integer_range start: (integer) end: (integer)))) (section (section_name (integer_range start: (integer) end: (integer)))) (section (section_name (brace_expansion (expansion_string (character)) (expansion_string (character)) (expansion_string (character)) (expansion_string (character)))) (comment) (comment)) (section (section_name (wildcard_characters) (character) (brace_expansion (expansion_string (character) (character)) (expansion_string (character) (character)))) (pair key: (identifier) value: (charset)) (pair key: (identifier) value: (boolean)) (comment)) (section (section_name (wildcard_characters) (character) (character) (character)) (pair key: (identifier) value: (indent_style)) (pair key: (identifier) value: (integer)) (comment)) (section (section_name (character) (character) (character) (character) (character) (character) (character) (character)) (pair key: (identifier) value: (indent_style)) (comment)) (section (section_name (character) (character) (character) (path_separator) (wildcard_any_characters) (character) (character) (character)) (pair key: (identifier) value: (indent_style)) (pair key: (identifier) value: (integer)) (comment)) (section (section_name (brace_expansion (expansion_string (character) (character) (character) (character) (character) (character) (character) (character) (character) (character) (character) (character)) (expansion_string (character) (character) (character) (character) (character) (character) (character) (character) (character) (character) (character)))) (pair key: (identifier) value: (indent_style)) (pair key: (identifier) value: (integer))) (section (section_name (wildcard_characters) (character) (character) (character) (character) (character_choice (character) (character))) (pair key: (identifier) value: (unknown))) (section (section_name (wildcard_characters)) (pair key: (identifier) value: (integer))) (section (section_name (wildcard_characters) (character) (character) (character) (character_choice (negation) (character) (character) (character) (character) (escaped_character)) (escaped_character)) (pair key: (identifier) value: (unknown))) (section (section_name (brace_expansion)) (pair key: (identifier) value: (boolean))) (section (section_name (path_separator) (character) (character) (character) (path_separator) (brace_expansion (expansion_string (character) (character) (character) (path_separator) (brace_expansion (expansion_string (character) (character)) (expansion_string (character) (character) (character) (character)))) (expansion_string (character) (character) (character) (path_separator) (brace_expansion (expansion_string (character) (character) (wildcard_single_character) (character) (wildcard_single_character) (wildcard_characters)) (expansion_string (character) (character) (character) (character) (character) (character)))))) (pair key: (identifier) value: (charset))) (section (section_name (wildcard_characters) (character) (brace_expansion (expansion_string (character) (character) (character)) (expansion_string (character) (character)) (expansion_string (character) (character) (character)) (expansion_string (escaped_character)))) (pair key: (identifier) value: (boolean))) (section (section_name (wildcard_characters) (integer_range start: (integer) end: (integer)) (path_separator) (wildcard_any_characters) (wildcard_characters) (path_separator) (wildcard_characters) (character) (character) (character)) (pair key: (identifier) value: (indent_style))) (section (section_name (wildcard_characters) (character) (brace_expansion (expansion_string (character) (character)) (expansion_string (character) (character)))) (pair key: (identifier) value: (unknown)) (pair key: (identifier) value: (charset)) (comment)) (section (section_name (character) (character) (character) (character) (character) (character) (path_separator) (wildcard_characters) (character) (character) (character) (wildcard_single_character)) (pair key: (identifier) value: (unknown)) (pair key: (identifier) value: (unknown))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), editorconfig.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package gitattributes_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gitattributes"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
[attr]nodiff -diff -merge
vendor/** linguist-vendored=true
[^._]-[[:lower:]] !something
"_\u4E00\t\56txt" encoding=UTF-16
`
	expected = "(file (macro_def (macro_tag) macro_name: (attr_name) (attribute (attr_unset) (builtin_attr)) (attribute (attr_unset) (builtin_attr))) (pattern relative: (dir_sep) (wildcard)) (attribute (attr_name) (attr_set) (boolean_value)) (pattern (range_notation (range_negation)) (range_notation (character_class))) (attribute (attr_reset) (attr_name)) (quoted_pattern (ansi_c_escape) (ansi_c_escape) (ansi_c_escape)) (attribute (builtin_attr) (attr_set) (string_value)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), gitattributes.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

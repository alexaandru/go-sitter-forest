//go:build !plugin

package sosl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sosl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
FIND {Joe Smith}
IN Name Fields
RETURNING lead(name, phone)
`
	expected = "(source_file (sosl_query_body (find_clause (term_separator_start) (term) (term_separator_end)) (in_clause (in_type)) (returning_clause (sobject_return (identifier) (selected_fields (field_identifier (identifier)) (field_identifier (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), sosl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

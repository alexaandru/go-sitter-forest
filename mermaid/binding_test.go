//go:build !plugin

package mermaid_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/mermaid"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
pie
    title Key elements in Product X
    "Calcium" : 42.96
    "Potassium" : 50.05
    "Magnesium" : 10.01
    "Iron" :  5
`
	expected = "(source_file (diagram_pie (pie_stmt_title (pie_title)) (pie_stmt_element (pie_label) (pie_value)) (pie_stmt_element (pie_label) (pie_value)) (pie_stmt_element (pie_label) (pie_value)) (pie_stmt_element (pie_label) (pie_value))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), mermaid.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

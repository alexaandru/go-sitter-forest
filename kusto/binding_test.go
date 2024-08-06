//go:build !plugin

package kusto_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/kusto"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
StormEvents
| where EventType == "Tornado"
| summarize count() by State
| order by count_ desc
`
	expected = "(source_file (tabular_expression (source (identifier)) (operation (pipe) (operator) (binary_expression (identifier) (string))) (operation (pipe) (operator) (function_call (identifier)) (sub_operator) (identifier)) (operation (pipe) (operator) (sort_by (identifier) (sort_keyword)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), kusto.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

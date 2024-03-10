//go:build !plugin

package soql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/soql"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
SELECT Amount, Id, Name, (SELECT Quantity, ListPrice, PricebookEntry.UnitPrice, PricebookEntry.Name FROM OpportunityLineItems) FROM Opportunity
`
	expected = "(source_file (soql_query_body (select_clause (field_identifier (identifier)) (field_identifier (identifier)) (field_identifier (identifier)) (subquery (soql_query_body (select_clause (field_identifier (identifier)) (field_identifier (identifier)) (field_identifier (dotted_identifier (identifier) (identifier))) (field_identifier (dotted_identifier (identifier) (identifier)))) (from_clause (storage_identifier (identifier)))))) (from_clause (storage_identifier (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), soql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

package sql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/sql"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "SELECT foo,bar FROM foobars;"
	expected = "(program (statement (select (keyword_select) (select_expression (term value: (field name: (identifier))) (term value: (field name: (identifier))))) (from (keyword_from) (relation (object_reference name: (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

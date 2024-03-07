package dhall_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/dhall"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{ home   = "/home/bill"
, doc    = "/home/bill/doc"
, music  = "/home/blil/music"
}
`
	expected = "(expression (primitive_expression (record_literal (record_literal_entry (label) (assign_operator) (expression (primitive_expression (text_literal (double_quote_literal))))) (record_literal_entry (label) (assign_operator) (expression (primitive_expression (text_literal (double_quote_literal))))) (record_literal_entry (label) (assign_operator) (expression (primitive_expression (text_literal (double_quote_literal))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dhall.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

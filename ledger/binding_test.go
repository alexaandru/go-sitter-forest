package ledger_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ledger"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
2015/10/12 Exxon
    Expenses:Auto:Gas         $10.00
    Liabilities:MasterCard   $-10.00
`
	expected = "(source_file (journal_item (xact (plain_xact (date) (payee) (posting (account) (amount (commodity) (quantity))) (posting (account) (amount (commodity) (negative_quantity)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ledger.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package beancount_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/beancount"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
;defaccount De Assets:Fixed:Home                           USD
1970-01-01 open Assets:UTrade:Account                                USD
1970-01-01 open Assets:UTrade:Account:AAPL                           AAPL
1970-01-01 open Assets:UTrade:Account:EWJ                            EWJ
;defaccount De Assets:Loans
1970-01-01 open Assets:AccountsReceivable
`
	expected = "(file (comment) (open date: (date) account: (account) currencies: (currency)) (open date: (date) account: (account) currencies: (currency)) (open date: (date) account: (account) currencies: (currency)) (comment) (open date: (date) account: (account)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), beancount.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

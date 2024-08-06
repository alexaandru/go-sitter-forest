//go:build !plugin

package xfst_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/xfst"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `[
  [ ?* [ ' (->) [ % | ʻ | ‘ | ʼ ] ] ?* ]

  .o.
  [ ?* [ á (->) a ] ?* ]
]
! <- punctuation.delimiter
`
	expected = "(source_file (expression (expression (expression (expression (expression (expression (expression (any)) (star)) (expression (expression (simple_replace (expression (symbol)) (arrow) (expression (expression (expression (expression (expression (symbol)) (union) (expression (symbol))) (union) (expression (symbol))) (union) (expression (symbol)))))))) (expression (expression (any)) (star)))) (compose) (expression (expression (expression (expression (expression (any)) (star)) (expression (expression (simple_replace (expression (symbol)) (arrow) (expression (symbol)))))) (expression (expression (any)) (star)))))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), xfst.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

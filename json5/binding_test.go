//go:build !plugin

package json5_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/json5"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
  // comments
  unquoted: 'and you can quote me on that',
  singleQuotes: 'I can use "double quotes" here',
  hexadecimal: 0xdecaf,
  leadingDecimalPoint: .8675309, andTrailing: 8675309.,
  positiveSign: +1,
  trailingComma: 'in objects', andIn: ['arrays',],
  "backwardsCompatible": "with JSON"
}
`
	expected = "(file (object (comment) (member name: (identifier) value: (string)) (member name: (identifier) value: (string)) (member name: (identifier) value: (number)) (member name: (identifier) value: (number)) (member name: (identifier) value: (number)) (member name: (identifier) value: (number)) (member name: (identifier) value: (string)) (member name: (identifier) value: (array (string))) (member name: (string) value: (string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), json5.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

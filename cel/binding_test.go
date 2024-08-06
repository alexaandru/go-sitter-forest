//go:build !plugin

package cel_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cel"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `jwt.extra_claims.exists(c, c.startsWith('group'))
&& jwt.extra_claims
  .filter(c, c.startsWith('group'))
      .all(c, jwt.extra_claims[c]
          .all(g, g.endsWith('@acme.co')))
`
	expected = "(expr (binary_expression left: (member_call_expression operand: (select_expression operand: (identifier) member: (identifier)) function: (identifier) arguments: (arguments (identifier) (member_call_expression operand: (identifier) function: (identifier) arguments: (arguments (string_literal quoted: (single_quoted_string_literal)))))) right: (member_call_expression operand: (member_call_expression operand: (select_expression operand: (identifier) member: (identifier)) function: (identifier) arguments: (arguments (identifier) (member_call_expression operand: (identifier) function: (identifier) arguments: (arguments (string_literal quoted: (single_quoted_string_literal)))))) function: (identifier) arguments: (arguments (identifier) (member_call_expression operand: (index_expression operand: (select_expression operand: (identifier) member: (identifier)) index: (identifier)) function: (identifier) arguments: (arguments (identifier) (member_call_expression operand: (identifier) function: (identifier) arguments: (arguments (string_literal quoted: (single_quoted_string_literal))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cel.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

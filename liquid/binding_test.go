//go:build !plugin

package liquid_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/liquid"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `<html>
  {% liquid
    include "file"
    assign product_type = product.type | downcase

    if product_type != blank
      product_type | trim
      echo product_type
    else
      assign product_type = "type"
    endif
  %}
</html>
`
	expected = "(program (template_content) (liquid_tag (include_statement (string)) (assignment_statement variable_name: (identifier) value: (filter body: (access receiver: (identifier) property: (identifier)) name: (identifier))) (if_statement condition: (predicate left: (identifier) right: (identifier)) consequence: (block (filter body: (identifier) name: (identifier)) (echo_statement (identifier))) alternative: (else_clause (block (assignment_statement variable_name: (identifier) value: (string)))))) (template_content))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), liquid.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

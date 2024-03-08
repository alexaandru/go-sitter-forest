package twig_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/twig"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{% autoescape "html" %}
    {{ var }}
    {{ var|raw }}     {# var won't be escaped #}
    {{ var|escape }}  {# var won't be doubled-escaped #}
{% endautoescape %}
`
	expected = "(template (statement_directive (tag_statement (tag) (interpolated_string))) (output_directive (variable)) (output_directive (variable) (filter (filter_identifier))) (comment) (output_directive (variable) (filter (filter_identifier))) (comment) (statement_directive (tag_statement (tag))) (content))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), twig.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

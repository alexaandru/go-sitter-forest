package htmldjango_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/htmldjango"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{% for k, v in defaultdict.items %}
    Do something with k and v here...
{% endfor %}
`
	expected = "(template (paired_statement (tag_name) (variable (variable_name)) (variable (variable_name)) (keyword_operator) (variable (variable_name)) (content) (tag_name) (end_paired_statement)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), htmldjango.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

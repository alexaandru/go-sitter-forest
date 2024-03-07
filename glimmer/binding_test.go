package glimmer_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/glimmer"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
<foo
  string-attr="string"
  number-attr=12
  mustache-attr={{value}}
  concat-attr="string {{mustache}}"
  class="foo {{if condition "bar"}}"
></foo>
`
	expected = "(template (text_node) (element_node (element_node_start (tag_name) (attribute_node (attribute_name) (concat_statement)) (attribute_node (attribute_name) (number_literal)) (attribute_node (attribute_name) (mustache_statement (identifier))) (attribute_node (attribute_name) (concat_statement (mustache_statement (identifier)))) (attribute_node (attribute_name) (concat_statement (mustache_statement (helper_invocation helper: (identifier) argument: (identifier) argument: (string_literal)))))) (element_node_end (tag_name))) (text_node))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), glimmer.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

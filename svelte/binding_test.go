//go:build !plugin

package svelte_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/svelte"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<script context="module">
  let name = 'world';
</script>
<h1>Hello {name'<>{}"\''""{}}!</h1>
`
	expected = "(document (script_element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (raw_text) (end_tag (tag_name))) (element (start_tag (tag_name)) (text) (expression (svelte_raw_text)) (text) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), svelte.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

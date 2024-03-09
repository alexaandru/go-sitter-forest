//go:build !plugin

package surface_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/surface"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{#case @value}
  {#match [first|_]}
    First {first}
  {#match []}
    Value is empty
  {#match _}
    Value is something else
{/case}

<div :if={@loading}>
  Loading ...
</div>
`
	expected = "(fragment (block (start_block (block_name) (expression_value)) (subblock (subblock_name) (expression_value)) (text) (expression (expression_value)) (subblock (subblock_name) (expression_value)) (text) (subblock (subblock_name) (expression_value)) (text) (end_block (block_name))) (tag (start_tag (tag_name) (directive (directive_name) (expression (expression_value)))) (text) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), surface.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

package usd_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/usd"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
def "foo" (
    add references = @foo.usda@
    append references = @foo.usda@
    delete references = @foo.usda@
    reorder references = [@foo.usda@]
    references = [@foo.usda@]  # explicit
)
{
}
`
	expected = "(module (prim_definition (prim_type) (string) (metadata (metadata_assignment (orderer) (identifier) (arc_path (asset_path))) (metadata_assignment (orderer) (identifier) (arc_path (asset_path))) (metadata_assignment (orderer) (identifier) (arc_path (asset_path))) (metadata_assignment (orderer) (identifier) (list_proxy (arc_path (asset_path)))) (metadata_assignment (identifier) (list_proxy (arc_path (asset_path)))) (comment)) (block)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), usd.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

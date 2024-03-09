//go:build !plugin

package devicetree_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/devicetree"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
/dts-v1/;

/ {
        a-node {
                subnode_label: a-sub-node {
                        foo = <3>;
                };
        };
};
`
	expected = "(document (file_version) (node name: (identifier) (node name: (identifier) (node label: (identifier) name: (identifier) (property name: (identifier) value: (integer_cells (integer_literal)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), devicetree.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

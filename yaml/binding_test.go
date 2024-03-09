//go:build !plugin

package yaml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/yaml"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "a: 42"
	expected = "(stream (document (block_node (block_mapping (block_mapping_pair key: (flow_node (plain_scalar (string_scalar))) value: (flow_node (plain_scalar (integer_scalar))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), yaml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

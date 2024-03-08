package godot_resource_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/godot_resource"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
[node type="Node"]
s = "hello
\"My World\" world"
other = "Okay"
`
	expected = "(resource (section (identifier) (attribute (identifier) (string)) (property (path) (string)) (property (path) (string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), godot_resource.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

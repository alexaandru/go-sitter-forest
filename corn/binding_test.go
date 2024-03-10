//go:build !plugin

package corn_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/corn"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
let {
    $author = { name = "John Smith" }
} in {
    name = "example-package"
    version = "1.0.0"
    author = $author
}`
	expected = "(source_file (assign_block (assignment (input) (value (object (pair (path (path_seg)) (value (string (char) (char) (char) (char) (char) (char) (char) (char) (char)))))))) (object (pair (path (path_seg)) (value (string (char) (char) (char) (char) (char) (char) (char) (char) (char) (char) (char) (char) (char) (char) (char)))) (pair (path (path_seg)) (value (string (char) (char) (char) (char) (char)))) (pair (path (path_seg)) (value (input)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), corn.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

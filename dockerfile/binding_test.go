package dockerfile_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dockerfile"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "FROM microsoft/nanoserver"
	expected = "(source_file (from_instruction (image_spec name: (image_name))) (MISSING \"\n\"))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dockerfile.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

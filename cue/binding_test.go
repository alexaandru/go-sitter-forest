package cue_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cue"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
a: {
  F=f: string
  X="my-identifier": bool
}
`
	expected = "(source_file (field (label (identifier)) (value (struct_lit (field (label alias: (identifier) (identifier)) (value (primitive_type))) (field (label alias: (identifier) (string)) (value (primitive_type)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cue.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

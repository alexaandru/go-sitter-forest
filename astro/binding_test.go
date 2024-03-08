package astro_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/astro"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
import {something} from 'universe'

function answer(){
  return 42
}
`
	expected = "(document (text) (interpolation (raw_text)) (text) (interpolation (raw_text)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), astro.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

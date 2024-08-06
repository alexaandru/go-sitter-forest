//go:build !plugin

package astro_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/astro"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
import {something} from 'universe'

function answer(){
  return 42
}
`
	expected = "(document (text) (html_interpolation (permissible_text)) (text) (html_interpolation (permissible_text)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), astro.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

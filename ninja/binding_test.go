package ninja_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ninja"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
cflags = -Wall

rule cc
  command = gcc $cflags -c $in -o $out

build foo.o: cc foo.c
`
	expected = "(manifest (let name: (identifier) value: (text)) (rule name: (identifier) (body (let name: (identifier) value: (text (expansion (identifier)) (expansion (identifier)) (expansion (identifier)))))) (build explicit: (outputs (path)) rule: (identifier) explicit: (dependencies (path))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ninja.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

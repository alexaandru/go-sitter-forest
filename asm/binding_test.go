package asm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/asm"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
      mov eax,array
      xchg eax,[array+4]
      xchg eax,[array+8]
      xchg array,eax
`
	expected = "(program (instruction kind: (MISSING word)) (instruction kind: (word) (ident (reg (word))) (ident (reg (word)))) (instruction kind: (word) (ident (reg (word))) (ptr (reg (word)) (int))) (instruction kind: (word) (ident (reg (word))) (ptr (reg (word)) (int))) (instruction kind: (word) (ident (reg (word))) (ident (reg (word)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), asm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

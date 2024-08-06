//go:build !plugin

package uxntal_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/uxntal"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
|0100 ( init )

	;hello-word ;print-text JSR2

BRK

@print-text ( str* -- )

	&while
		( send ) LDAk #18 DEO
		( loop ) INC2 LDAk ,&while JCN
	POP2

JMP2r

@hello-word "Hello 20 "World! 00
`
	expected = "(program (memory_execution (absolute_pad_operation (number)) (comment) (rune rune_start: (rune_char) (identifier)) (rune rune_start: (rune_char) (identifier)) (opcode) (opcode)) (subroutine (label (identifier)) (comment) (rune rune_start: (rune_char) (identifier)) (comment) (opcode) (hex_literal (hex_lit_value)) (opcode) (comment) (opcode) (opcode) (rune rune_start: (rune_char) (rune_char) (identifier)) (opcode) (opcode) (opcode)) (subroutine (label (identifier)) (raw_ascii) (number) (raw_ascii) (number)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), uxntal.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

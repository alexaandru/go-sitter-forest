//go:build !plugin

package m68k_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/m68k"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
          move.w    #$0123,d0
          move.b    d0,d1
          move.w    d1,d2
          move.l    #$FFFF0000,d3
          move.w    d0,d3
          move.l    d3,d0
          move.w    d2,d0
`
	expected = "(source_file (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (immediate_value value: (hexadecimal_literal)) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (data_register) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (data_register) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (immediate_value value: (hexadecimal_literal)) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (data_register) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (data_register) (data_register))) (instruction mnemonic: (instruction_mnemonic) size: (size) operands: (operand_list (data_register) (data_register))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), m68k.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package ca65_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ca65"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `asl a
sbc ($ff),y
bcc $ffff
lsr $ff ; comment
cmp $ff,x
ldx $ff,y
`
	expected = "(ca65 (inst (acc_addr_inst (asl_opcode) (acc_register))) (inst (ind_y_addr_inst (sbc_opcode) (operand_8 (hex_8)) (y_register))) (inst (rel_addr_inst (bcc_opcode) (operand_16 (hex_16)))) (inst (zp_addr_inst (lsr_opcode) (operand_8 (hex_8)))) (comment) (inst (zp_x_addr_inst (cmp_opcode) (operand_8 (hex_8)) (x_register))) (inst (zp_y_addr_inst (ldx_opcode) (operand_8 (hex_8)) (y_register))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ca65.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

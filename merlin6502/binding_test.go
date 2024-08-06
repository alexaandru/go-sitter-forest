//go:build !plugin

package merlin6502_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/merlin6502"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `* Hello World Example
        ORG     $300
COUT    EQU     $FDED
        LDY     #$00
:LOOP   LDA     HELLO,Y
        JSR     COUT
        INY
        CPY     #$0C
        BNE     :LOOP
        RTS
HELLO   ASC     "HELLO WORLD!"
`
	expected = "(source_file (heading (txt)) (pseudo_operation (psop_org) (arg_org (num))) (pseudo_operation (label_def (global_label)) (psop_equ) (arg_equ (num))) (operation (op_ldy) (arg_ldy (imm (imm_prefix) (num)))) (operation (label_def (local_label)) (op_lda) (arg_lda (addr_y (label_ref (global_label)) (mode)))) (operation (op_jsr) (arg_jsr (addr (label_ref (global_label))))) (operation (op_iny)) (operation (op_cpy) (arg_cpy (imm (imm_prefix) (num)))) (operation (op_bne) (arg_bne (addr (label_ref (local_label))))) (operation (op_rts)) (pseudo_operation (label_def (global_label)) (psop_asc) (arg_asc (dstring))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), merlin6502.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

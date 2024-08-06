//go:build !plugin

package virdant_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/virdant"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `pub mod Top {
    incoming clk : Clock;
    incoming reset : Word[1];
    outgoing out : Word[8];

    reg r : Word[8] on clk;
    r <= if reset { 10w8 } else { r->add(1) };

    mod buffer of Buffer;
    buffer.clk := clk;
    buffer.in := r;
    out := buffer.out;
}

mod Buffer {
    incoming clk : Clock;
    incoming in : Word[8];
    outgoing out : Word[8];

    reg r : Word[8] on clk;
    r <= in;
    out <= r;
}
`
	expected = "(package (item (moddef name: (ident) (incoming name: (ident) type: (type (type_clock))) (incoming name: (ident) type: (type (type_word (nat)))) (outgoing name: (ident) type: (type (type_word (nat)))) (reg name: (ident) type: (type (type_word (nat)))) (ERROR (UNEXPECTED 'c')) (connect target: (path) connect_type: (connect_type (latched)) expr: (expr (expr_if (expr (expr_reference (path))) (expr (expr_lit (word))) (expr (expr_call subject: (expr (expr_reference (path))) method: (ident) args: (expr (expr_lit (word)))))))) (submodule name: (ident) module: (qualident)) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))))) (item (moddef name: (ident) (incoming name: (ident) type: (type (type_clock))) (incoming name: (ident) type: (type (type_word (nat)))) (outgoing name: (ident) type: (type (type_word (nat)))) (reg name: (ident) type: (type (type_word (nat)))) (ERROR (UNEXPECTED 'c')) (connect target: (path) connect_type: (connect_type (latched)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (latched)) expr: (expr (expr_reference (path)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), virdant.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

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
	expected = "(package (item (moddef name: (id) (incoming name: (id) type: (type (type_clock))) (incoming name: (id) type: (type (type_word (nat)))) (outgoing name: (id) type: (type (type_word (nat)))) (reg name: (id) type: (type (type_word (nat))) on: (path)) (connect target: (path) connect_type: (connect_type (latched)) (ERROR (expr (expr_reference (path))) (UNEXPECTED 's')) expr: (expr (expr_call subject: (expr (expr_lit (word))) (ERROR (UNEXPECTED 'e') (UNEXPECTED '-')) method: (id) args: (expr (expr_lit (nat)))))) (ERROR) (submodule name: (id) module: (id)) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (direct)) expr: (expr (expr_reference (path)))))) (item (moddef name: (id) (incoming name: (id) type: (type (type_clock))) (incoming name: (id) type: (type (type_word (nat)))) (outgoing name: (id) type: (type (type_word (nat)))) (reg name: (id) type: (type (type_word (nat))) on: (path)) (connect target: (path) connect_type: (connect_type (latched)) expr: (expr (expr_reference (path)))) (connect target: (path) connect_type: (connect_type (latched)) expr: (expr (expr_reference (path)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), virdant.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

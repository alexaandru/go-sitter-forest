//go:build !plugin

package awatalk_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/awatalk"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
awa awa awawa awawa awa awa awa awa awa awa awawa awa awawa awawa awa awa awa awa awa awa awawa awa awawa awa awa awa awawa awawa awa awa awa awa
 awa awa awawa awa awa awawa awa awa awawa awawa awa awa awa awa awa awa awawa awa awa awawa awa awa awawa awawa awa awa awa awa awa awawa awa
 awa awawawa awa awa awa awa awawa awawawa awa awa awa awawa awawa awa awa awa awa awa awa awa awawa awa awa awa awa awa awawa awawa awa awawawa
 awa awa awa awa awa awa awa awawawa awa awa awa awa awa awa awawa awa awa awa awa awawawa awa awa awa awawa awa awawa awawawa awawa awa awa awa
 awa awa awawa awa awa awawawa awa awa awa awa awa awa awa awawawa awa awa awa awa awa awa awa awawawawa awa awawa awawa awa awa awa awa awa awa
 awawa awa awawawa awa awa awa awa awawa awawawa awa awa awa awawa awawa awa awa awa awa awa awa awa awawa awa awawa awawa awa awa awawa awa awa
 awawa awawa awa awa awawa awa awawa awawawa awa awa awa awa awa awa awawa awa awa awawa awawa awa awawawawawawawa awa awa awa awawawawawawawa`
	expected = "(source_file (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (r3d (zero) (zero) (one) (zero) (zero))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (pr1 (zero) (zero) (zero) (one) (zero))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (pr1 (zero) (zero) (zero) (one) (zero))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero))))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (sub (zero) (one) (one) (zero) (zero))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (label (lbl (one) (zero) (zero) (zero) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero)) (binary_token (one))))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (instruction op: (dpl (zero) (one) (zero) (zero) (zero))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero))))) (instruction op: (add (zero) (one) (zero) (one) (one))) (instruction op: (dpl (zero) (one) (zero) (zero) (zero))) (instruction op: (pr1 (zero) (zero) (zero) (one) (zero))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (instruction op: (p0p (zero) (zero) (one) (one) (one))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (sbm (zero) (zero) (one) (one) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one))))) (instruction op: (sub (zero) (one) (one) (zero) (zero))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (zero))))) (instruction op: (eql (one) (zero) (zero) (one) (zero))) (instruction op: (jmp (one) (zero) (zero) (zero) (one) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero))))) (instruction op: (jmp (one) (zero) (zero) (zero) (one) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero)) (binary_token (one))))) (label (lbl (one) (zero) (zero) (zero) (zero) arg: (argument_5bit (binary_token (zero)) (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (zero))))) (instruction op: (blo (zero) (zero) (one) (zero) (one) arg: (argument_8bit (binary_token (zero)) (binary_token (zero)) (binary_token (one)) (binary_token (one)) (binary_token (one)) (binary_token (one)) (binary_token (one)) (binary_token (one))))) (instruction op: (prn (zero) (zero) (zero) (zero) (one))) (instruction op: (trm (one) (one) (one) (one) (one))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), awatalk.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

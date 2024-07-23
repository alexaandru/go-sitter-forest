//go:build !plugin

package sml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `fun factorial 0 = 1
  | factorial n = n * factorial (n - 1)
`
	expected = "(source_file (fun_dec (fvalbind (fmrule name: (vid) arg: (scon_pat (integer_scon)) def: (scon_exp (integer_scon))) (fmrule name: (vid) arg: (vid_pat (longvid (vid))) def: (app_exp (vid_exp (longvid (vid))) (vid_exp (longvid (vid))) (vid_exp (longvid (vid))) (paren_exp (app_exp (vid_exp (longvid (vid))) (vid_exp (longvid (vid))) (scon_exp (integer_scon)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

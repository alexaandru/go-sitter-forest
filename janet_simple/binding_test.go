//go:build !plugin

package janet_simple_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/janet_simple"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(let [arr @[2 4 1 3 8 7 -3 -1 12 -5 -8]]
  (printf "3sum of %j: " arr)
  (printf "%j" (sum3 arr)))
`
	expected = "(source (par_tup_lit (sym_lit) (sqr_tup_lit (sym_lit) (sqr_arr_lit (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit) (num_lit))) (par_tup_lit (sym_lit) (str_lit) (sym_lit)) (par_tup_lit (sym_lit) (str_lit) (par_tup_lit (sym_lit) (sym_lit)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), janet_simple.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

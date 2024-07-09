//go:build !plugin

package rtx_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rtx"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `! sample code
n: _.gender.number;

adj: _.gender.number;

NP: _;

gender = m f mf;

number = sg pl sp;

NP -> adj n {2 _ 1[number=2.number]};
`
	expected = "(source_file (comment) (output_rule pos: (ident) (colon) (ident) (ident) (ident)) (output_rule pos: (ident) (colon) (ident) (ident) (ident)) (output_rule pos: (ident) (colon) (ident)) (attr_rule name: (ident) (ident) (ident) (ident)) (attr_rule name: (ident) (ident) (ident) (ident)) (reduce_rule_group (ident) (arrow) (reduce_rule pattern: (pattern_element pos: (ident)) pattern: (pattern_element pos: (ident)) output: (reduce_output (output_element (num)) (blank) (output_element (num) (output_var_set (set_var name: (ident) value: (clip pos: (num) attr: (ident)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), rtx.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

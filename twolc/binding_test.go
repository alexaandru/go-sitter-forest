//go:build !plugin

package twolc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/twolc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `Alphabet
 A B Ç D E Ä F G H I J Ž K L M N Ň O Ö P R S Ş T U Ü W Y Ý Z
 a b ç d e ä f g h i j ž k l m n ň o ö p r s ş t u ü w y ý z
 %{A%}:a %>:0  ;

Sets

! Vowels
Vowel = A E Ä I O Ö U Ü Y Ý
        a e ä i o ö u ü y ý ;

Rules

"Remove suffix vowel with vowel-ending stem"
i:0 <=> Vow %{VSUF%}:0 _ [ m | n ] ;
`
	expected = "(source_file (alphabet (alphabet_header) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol_pair left: (symbol) (colon) right: (symbol)) (symbol_pair left: (symbol) (colon) right: (symbol)) (semicolon)) (sets (sets_header) (comment) (set name: (symbol) (eq) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (symbol) (semicolon))) (rules (rules_header) (rule name: (rule_name) target: (symbol_pair left: (symbol) (colon) right: (symbol)) arrow: (arrow) contexts: (positive_contexts (context left: (pattern (pattern (symbol)) (pattern (symbol_pair left: (symbol) (colon) right: (symbol)))) locus: (locus) right: (pattern (lpar) (pattern (pattern (symbol)) (bool_op) (pattern (symbol))) (rpar)) (semicolon))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), twolc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

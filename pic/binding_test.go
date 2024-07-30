//go:build !plugin

package pic_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pic"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `.PS
box "box";
move;
line "line" "";
move;
arrow "arrow" "";
move;
circle "circle";
move;
ellipse "ellipse";
move;
arc; down; move; "arc"
.PE
`
	expected = "(picture (element (command_line)) (element (primitive) (attribute_list (attribute (text)))) (element (primitive)) (element (primitive) (attribute_list (attribute (text)) (attribute (text)))) (element (primitive)) (element (primitive) (attribute_list (attribute (text)) (attribute (text)))) (element (primitive)) (element (primitive) (attribute_list (attribute (text)))) (element (primitive)) (element (primitive) (attribute_list (attribute (text)))) (element (primitive)) (element (primitive)) (element (direction)) (element (primitive)) (element (primitive (text))) (element (command_line)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pic.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

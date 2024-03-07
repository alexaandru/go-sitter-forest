package typst_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/typst"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
Glaciers as the one shown in
@glaciers will cease to exist if
we don't take action soon!

#figure(
  image("glacier.jpg", width: 70%),
  caption: [
    _Glaciers_ form an important part
    of the earth's climate system.
  ],
) <glaciers>
`
	expected = "(source_file (text) (ref) (text) (text) (quote) (text) (parbreak) (call item: (ident) (group (call item: (ident) (group (string) (tagged field: (ident) (number (unit))))) (tagged field: (ident) (content (emph (text)) (text) (text) (quote) (text))))) (label))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), typst.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

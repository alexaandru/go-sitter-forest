package xml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/xml/xml"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
<library>
  <book id="1">
    <title>The Great Gatsby</title>
    <author>F. Scott Fitzgerald</author>
  </book>
</library>
`
	expected = "(document root: (element (STag (Name)) (content (CharData) (element (STag (Name) (Attribute (Name) (AttValue))) (content (CharData) (element (STag (Name)) (content (CharData)) (ETag (Name))) (CharData) (element (STag (Name)) (content (CharData)) (ETag (Name))) (CharData)) (ETag (Name))) (CharData)) (ETag (Name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), xml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

package qmldir_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/qmldir"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
# test, it  is comment
module Qt3D.Core
plugin quick3dcoreplugin
classname Qt3DQuick3DCorePlugin 1.1
Set 1.0 qml/components/Set.qml
`
	expected = "(module_definition (comment) (command (keyword) (unit)) (command (keyword) (unit)) (command (keyword) (unit) (float)) (command (identifier) (float) (unit)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), qmldir.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package qmljs_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/qmljs"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
import QtQuick

Item {
    signal foo(int name0, name1: MyType)

    function bar(name: string) : MyType {
    }
}
`
	expected = "(program (ui_import source: (identifier)) root: (ui_object_definition type_name: (identifier) initializer: (ui_object_initializer (ui_signal name: (identifier) parameters: (ui_signal_parameters (ui_signal_parameter type: (type_identifier) name: (identifier)) (ui_signal_parameter name: (identifier) type: (type_identifier)))) (function_declaration name: (identifier) parameters: (formal_parameters (required_parameter pattern: (identifier) type: (type_annotation (predefined_type)))) return_type: (type_annotation (type_identifier)) body: (statement_block)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), qmljs.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

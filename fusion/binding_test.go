//go:build !plugin

package fusion_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fusion"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
include: SomeFile.fusion
namespace: ns = Neos.Fusion.Space
prototype(MyType) < prototype(ns:SuperType) {
  deleteProp >
  string = 'value'
  number = 10.2
  null = null
  boolean = true
  property.inner = "value"
  property.@meta = "value"
  property.type = SomeType
  property.aliasedType = ns:SomeType
  property.fullQualifiedType = SomeNamespace:SomeType
}
`
	expected = "(program (include_statement (source_file (filepath))) (namespace_declaration (alias_namespace) (package_name)) (property (path (prototype_signature (type name: (type_name)))) (copy source: (prototype_signature (type namespace: (package_name) name: (type_name))) source: (block content: (property (path (path_part)) (deletion)) content: (property (path (path_part)) (assignment value: (string))) content: (property (path (path_part)) (assignment value: (number))) content: (property (path (path_part)) (assignment value: (null))) content: (property (path (path_part)) (assignment value: (boolean))) content: (property (path (path_part) (path_part)) (assignment value: (string))) content: (property (path (path_part) (meta_property)) (assignment value: (string))) content: (property (path (path_part) (path_part)) (assignment value: (prototype_instance (type name: (type_name))))) content: (property (path (path_part) (path_part)) (assignment value: (prototype_instance (type namespace: (package_name) name: (type_name))))) content: (property (path (path_part) (path_part)) (assignment value: (prototype_instance (type namespace: (package_name) name: (type_name)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fusion.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package graphql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/graphql"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
schema {
  query: MyQueryType
  mutation: MyMutationType
}

schema @deprecated {
  query: MyDeprecatedQueryType
  mutation: MyDeprecatedMutationType
}
`
	expected = "(source_file (document (definition (type_system_definition (schema_definition (root_operation_type_definition (operation_type) (named_type (name))) (root_operation_type_definition (operation_type) (named_type (name)))))) (definition (type_system_definition (schema_definition (directives (directive (name))) (root_operation_type_definition (operation_type) (named_type (name))) (root_operation_type_definition (operation_type) (named_type (name))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), graphql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

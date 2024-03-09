//go:build !plugin

package facility_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/facility"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
/// Example service for widgets.
[http(url: "http://local.example.com/v1")]
[csharp(namespace: Facility.ExampleApi)]
service ExampleApi
{
	/// Gets widgets.
	[http(method: GET, path: "/widgets")]
	method getWidgets
	{
		/// The query.…		desc: boolean;

		/// The maximum weight.
		[obsolete]
		maxWeight: double;
	}
}
`
	expected = "(source_file (doc_comment) (attribute (parameter name: (identifier) (string_literal))) (attribute (parameter name: (identifier) (identifier) (identifier))) (service service_name: (identifier) (service_block (comment) (ERROR (attribute (parameter name: (identifier) (identifier)) (parameter name: (identifier) (string_literal))) (identifier) (field_list (doc_comment) (doc_comment) (field (attribute) name: (identifier) (type)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), facility.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

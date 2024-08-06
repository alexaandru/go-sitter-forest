//go:build !plugin

package typespec_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/typespec"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import "@typespec/http";

using TypeSpec.Http;

model Store {
  name: string;
  address: Address;
}

model Address {
  street: string;
  city: string;
}

@route("/stores")
interface Stores {
  list(@query filter: string): Store[];
  read(@path id: Store): Store;
}
`
	expected = "(source_file (import_statement (quoted_string_literal (quoted_string_fragment))) (using_statement module: (identifier_or_member_expression (member_expression base: (identifier (plain_identifier)) member: (identifier (plain_identifier))))) (model_statement name: (identifier (plain_identifier)) (model_expression (model_body (model_property name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (builtin_type))))) (model_property name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (plain_identifier)))))))) (model_statement name: (identifier (plain_identifier)) (model_expression (model_body (model_property name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (builtin_type))))) (model_property name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (builtin_type)))))))) (ERROR (decorator name: (identifier_or_member_expression (identifier (plain_identifier))) (decorator_arguments (expression_list (quoted_string_literal (quoted_string_fragment)))))) (interface_statement name: (identifier (plain_identifier)) (interface_body (interface_member (identifier (plain_identifier)) (operation_signature_declaration (operation_arguments (model_property (decorator_list (decorator name: (identifier_or_member_expression (identifier (plain_identifier))))) name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (builtin_type)))))) (array_expression (reference_expression (identifier_or_member_expression (identifier (plain_identifier))))))) (interface_member (identifier (plain_identifier)) (operation_signature_declaration (operation_arguments (model_property (decorator_list (decorator name: (identifier_or_member_expression (identifier (plain_identifier))))) name: (identifier (plain_identifier)) (reference_expression (identifier_or_member_expression (identifier (plain_identifier)))))) (reference_expression (identifier_or_member_expression (identifier (plain_identifier)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), typespec.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

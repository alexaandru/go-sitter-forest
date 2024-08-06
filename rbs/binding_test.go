//go:build !plugin

package rbs_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rbs"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
module ChatApp
  VERSION: String

  class User
    attr_reader login: String
    attr_reader email: String

    def initialize: (login: String, email: String) -> void
  end

  class Bot
    attr_reader name: String
    attr_reader email: String
    attr_reader owner: User

    def initialize: (name: String, owner: User) -> void
  end
end
`
	expected = "(program (decl body: (module_decl name: (module_name (constant)) body: (members (const_decl (const_name (constant)) (type (class_type (class_name (constant))))) (class_decl name: (class_name (constant)) body: (members (member body: (attribute_member (attribyte_type) name: (method_name (identifier)) (type (class_type (class_name (constant)))))) (member body: (attribute_member (attribyte_type) name: (method_name (identifier)) (type (class_type (class_name (constant)))))) (member body: (method_member name: (method_name (identifier)) (method_types (method_type body: (method_type_body (parameters (keywords (required_keywords (keyword (identifier)) (type (class_type (class_name (constant)))) (keywords (required_keywords (keyword (identifier)) (type (class_type (class_name (constant))))))))) (type (builtin_type))))))))) (class_decl name: (class_name (constant)) body: (members (member body: (attribute_member (attribyte_type) name: (method_name (identifier)) (type (class_type (class_name (constant)))))) (member body: (attribute_member (attribyte_type) name: (method_name (identifier)) (type (class_type (class_name (constant)))))) (member body: (attribute_member (attribyte_type) name: (method_name (identifier)) (type (class_type (class_name (constant)))))) (member body: (method_member name: (method_name (identifier)) (method_types (method_type body: (method_type_body (parameters (keywords (required_keywords (keyword (identifier)) (type (class_type (class_name (constant)))) (keywords (required_keywords (keyword (identifier)) (type (class_type (class_name (constant))))))))) (type (builtin_type)))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rbs.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

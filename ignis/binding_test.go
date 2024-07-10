//go:build !plugin

package ignis_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ignis"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `// This is a comment
class User {
  private name: string;
  private lastName: string;
  private age: i64;

  public User(firstName: string, lastName: string, age: i64) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }
}

/* This is a comment */
const HELLO_WORLD: string = "Hello, World!";
const HELLO_WORLD_LEN: i64 = 13;

decorator Only(IgnisLanguageSupported);

enum Status {
  PENDING,
  ACTIVE,
  INACTIVE,
}

extern io {
  function println(s: unknown): void;
}

function main(): void {
  let a: number = 10;

  println(a);
}
`
	expected = "(source_file (comment) (class_declaration (identifier) (property_declaration (property_modifier) (identifier) (type_identifier (primitive_keyword))) (property_declaration (property_modifier) (identifier) (type_identifier (primitive_keyword))) (property_declaration (property_modifier) (identifier) (type_identifier (primitive_keyword))) (constructor_declaration (method_modifier) (identifier) (parameter_declaration (identifier) (type_identifier (primitive_keyword))) (parameter_declaration (identifier) (type_identifier (primitive_keyword))) (parameter_declaration (identifier) (type_identifier (primitive_keyword))) (block (assignment_expression (property_access (expression (primary_expression (this_expression))) name: (identifier)) (expression (primary_expression (identifier)))) (assignment_expression (property_access (expression (primary_expression (this_expression))) name: (identifier)) (expression (primary_expression (identifier)))) (assignment_expression (property_access (expression (primary_expression (this_expression))) name: (identifier)) (expression (primary_expression (identifier))))))) (comment) (variable_declaration (identifier) type: (type_identifier (primitive_keyword)) value: (expression (primary_expression (literal (string_literal))))) (variable_declaration (identifier) type: (type_identifier (primitive_keyword)) value: (expression (primary_expression (literal (integer_literal))))) (decorator_declaration (identifier) (type_identifier (identifier))) (enum_declaration (identifier) (enum_member_declaration (identifier)) (enum_member_declaration (identifier)) (enum_member_declaration (identifier))) (extern_declaration (identifier) (function_declaration (identifier) (parameter_declaration (identifier) (type_identifier (primitive_keyword))) (type_identifier (primitive_keyword)))) (function_declaration (identifier) (type_identifier (primitive_keyword)) (block (variable_declaration (identifier) type: (type_identifier (identifier)) value: (expression (primary_expression (literal (integer_literal))))) (expression_statement (expression (call_expression function: (primary_expression (identifier)) arguments: (expression (primary_expression (identifier)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ignis.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

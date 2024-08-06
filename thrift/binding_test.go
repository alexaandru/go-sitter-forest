//go:build !plugin

package thrift_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/thrift"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
struct Location {                            // Multiple structs can be defined and referred to within the same Thrift file
    1: required double latitude;
    2: required double longitude;
}

struct Tweet {
    1: required i32 userId;                  // Every field must have a unique, positive integer identifier
    2: required string userName;             // Fields may be marked as required or optional
    3: required string text;
    4: optional Location loc;                // Structs may contain other structs
    16: optional string language = "english" // You may specify an optional "default" value for a field
}
`
	expected = "(document (struct_definition type: (identifier) (comment) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier)) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier))) (struct_definition type: (identifier) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier)) (comment) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier)) (comment) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier)) (field (field_id (number)) (field_modifier) (type type: (identifier)) (identifier)) (comment) (field (field_id (number)) (field_modifier) (type (primitive)) (identifier) (literal (string (string_fragment)))) (comment)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), thrift.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

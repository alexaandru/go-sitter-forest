//go:build !plugin

package capnp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/capnp"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
struct Person {
  address :group {
    houseNumber @8 :UInt32;
    street @9 :Text;
    city @10 :Text;
    country @11 :Text;
  }
}`
	expected = "(message (struct (type_identifier) (field (group (type_identifier) (field (field_identifier) (field_version) (field_type (primitive_type))) (field (field_identifier) (field_version) (field_type (primitive_type))) (field (field_identifier) (field_version) (field_type (primitive_type))) (field (field_identifier) (field_version) (field_type (primitive_type)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), capnp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

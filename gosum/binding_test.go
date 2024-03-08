package gosum_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gosum"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
gopkg.in/yaml.v3 v3.0.1 h1:fxVm/GzAzEWqLHuvctI91KS9hhNmmWOoWu0XTYJS7CA=
gopkg.in/yaml.v3 v3.0.1/go.mod h1:K4uyk7z7BCEPqu6E+C64Yfv1cQ7kz7rIZviUmN+EgEM=
`
	expected = "(checksum_database (checksum (module_path) (version (module_version) major: (module_version) (module_version) minor: (module_version) (module_version) patch: (module_version)) (checksum_value (hash_version) (hash))) (checksum (module_path) (version (module_version) major: (module_version) (module_version) minor: (module_version) (module_version) patch: (module_version)) (checksum_value (hash_version) (hash))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gosum.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

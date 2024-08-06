//go:build !plugin

package eds_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/eds"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
[FileInfo]
ParameterName = "File"
ObjectType = "FileObject"
DataType = "String"
AccessType = "ReadOnly"
Comments = "This section contains information about the file."
`
	expected = "(source_file (section (section_name) (statement (key) (value)) (statement (key) (value)) (statement (key) (value)) (statement (key) (value)) (statement (key) (value))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), eds.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

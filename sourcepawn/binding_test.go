package sourcepawn_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sourcepawn"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
public Plugin myinfo =
{
    name = "Test",
    author = "Developer",
    description = "demonstrating parser",
    version = PLUGIN_VERSION,
    url = "http://forums.alliedmods.net"
};

public void OnPluginStart() {
    // your code
}
`
	expected = "(source_file (struct_declaration type: (identifier) name: (identifier) value: (struct_constructor (struct_field_value name: (identifier) value: (string_literal)) (struct_field_value name: (identifier) value: (string_literal)) (struct_field_value name: (identifier) value: (string_literal)) (struct_field_value name: (identifier) value: (identifier)) (struct_field_value name: (identifier) value: (string_literal)))) (function_definition visibility: (visibility) returnType: (type (builtin_type)) name: (identifier) parameters: (parameter_declarations) body: (block (comment))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sourcepawn.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

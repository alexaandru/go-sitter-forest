//go:build !plugin

package hlsl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hlsl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
Texture2D<float4> input_tex;
RWTexture2D<float4> output_tex;

static const uint kernel_radius = 5;
static const uint group_width = 64;
static const uint vblur_window_size = (group_width + kernel_radius) * 2;
`
	expected = "(translation_unit (declaration type: (template_type name: (type_identifier) arguments: (template_argument_list (type_descriptor type: (type_identifier)))) declarator: (identifier)) (declaration type: (template_type name: (type_identifier) arguments: (template_argument_list (type_descriptor type: (type_identifier)))) declarator: (identifier)) (declaration (storage_class_specifier) (type_qualifier) type: (type_identifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (declaration (storage_class_specifier) (type_qualifier) type: (type_identifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (declaration (storage_class_specifier) (type_qualifier) type: (type_identifier) declarator: (init_declarator declarator: (identifier) value: (binary_expression left: (parenthesized_expression (binary_expression left: (identifier) right: (identifier))) right: (number_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), hlsl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

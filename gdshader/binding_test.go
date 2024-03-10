//go:build !plugin

package gdshader_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gdshader"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
shader_type canvas_item;
uniform sampler2D reflection_viewport;
uniform sampler2D normal_map;
uniform float amount : hint_range(0, 1);

struct X {
    int y,
    int z,
}

void fragment(int x)
{
	vec4 color = texture(TEXTURE, UV);
	vec2 offset = texture(normal_map, UV).xy * amount;
	vec4 reflection = texture(reflection_viewport, SCREEN_UV + offset);
	color.rgb = color.rgb * (1.0 - reflection.a) + reflection.rgb * reflection.a;
    COLOR = color;
}
`
	expected = "(source_file (shader_type_declaration shader_type: (shader_type)) (uniform_declaration specifier: (var_specifier type: (builtin_type) name: (ident))) (uniform_declaration specifier: (var_specifier type: (builtin_type) name: (ident))) (uniform_declaration specifier: (var_specifier type: (builtin_type) name: (ident)) hints: (hint_list (hint name: (hint_name) params: (hint_parameter_list (integer) (integer))))) (struct_declaration name: (ident) members: (struct_member_list (struct_member type: (builtin_type) (ERROR (ident) (invalid_ident) (invalid_ident) (invalid_ident) (invalid_ident) (builtin_function) (ident)) name: (builtin_variable) (ERROR)) (struct_member type: (builtin_type) (ERROR (ident) (builtin_function) (ident) (builtin_variable) (ident)) name: (ident)) (struct_member type: (builtin_type) name: (ident) (ERROR)) (struct_member type: (ident_type) (ERROR (ident) (ident) (ident) (float) (ident) (ident) (ident) (ident) (ident)) name: (ident)) (struct_member type: (ident_type) (ERROR) name: (ident))) (MISSING \";\")))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gdshader.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

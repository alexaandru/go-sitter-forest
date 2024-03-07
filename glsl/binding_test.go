package glsl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/glsl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
#ifdef GL_ES
#define COMPAT_PRECISION mediump
#else
#define COMPAT_PRECISION
#endif

COMPAT_ATTRIBUTE vec4 VertexCoord;
COMPAT_ATTRIBUTE vec4 TexCoord;
COMPAT_VARYING vec4 TEX0;

uniform mat4 MVPMatrix;
uniform COMPAT_PRECISION int FrameDirection;
uniform COMPAT_PRECISION int FrameCount;
`
	expected = "(translation_unit (preproc_ifdef name: (identifier) (preproc_def name: (identifier) value: (preproc_arg)) alternative: (preproc_else (preproc_def name: (identifier)))) (declaration type: (type_identifier) (ERROR (identifier)) declarator: (identifier)) (declaration type: (type_identifier) (ERROR (identifier)) declarator: (identifier)) (declaration type: (type_identifier) (ERROR (identifier)) declarator: (identifier)) (declaration type: (type_identifier) declarator: (identifier)) (declaration type: (type_identifier) (ERROR (identifier)) declarator: (identifier)) (declaration type: (type_identifier) (ERROR (identifier)) declarator: (identifier)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), glsl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

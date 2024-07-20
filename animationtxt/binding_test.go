//go:build !plugin

package animationtxt_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/animationtxt"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `loopCount = 2
frames = 1, 2, 3x4, 4x2, 2, 5
introFrames = 1, 2x2, 3, 4x2
`
	expected = "(document (statement (loopCount (integer))) (statement (frames (framelist (integer) (integer) (frameRepeat) (frameRepeat) (integer) (integer)))) (statement (introFrames (framelist (integer) (frameRepeat) (integer) (frameRepeat)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), animationtxt.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

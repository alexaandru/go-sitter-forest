//go:build !plugin

package ron_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ron"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
GameConfig( // optional struct name
    window_size: (800, 600),
    window_title: "PAC-MAN",
    fullscreen: false,

    mouse_sensitivity: 1.4,
    key_bindings: {
        "up": Up,
        "down": Down,
        "left": Left,
        "right": Right,

        // Uncomment to enable WASD controls
        /*
        "W": Up,
        "A": Down,
        "S": Left,
        "D": Right,
        */
    },

    difficulty_options: (
        start_difficulty: Easy,
        adaptive: false,
    ),
)
`
	expected = "(source_file (struct (struct_name (identifier)) (line_comment) body: (struct_entry (identifier) (tuple (integer) (integer))) body: (struct_entry (identifier) (string)) body: (struct_entry (identifier) (boolean)) body: (struct_entry (identifier) (float)) body: (struct_entry (identifier) (map (map_entry (string) (enum_variant (identifier))) (map_entry (string) (enum_variant (identifier))) (map_entry (string) (enum_variant (identifier))) (map_entry (string) (enum_variant (identifier))) (line_comment) (block_comment))) body: (struct_entry (identifier) (struct body: (struct_entry (identifier) (enum_variant (identifier))) body: (struct_entry (identifier) (boolean))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ron.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

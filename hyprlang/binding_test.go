//go:build !plugin

package hyprlang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hyprlang"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
bakery {
    counter_color = rgba(ee22eeff)          # color by rgba()
    door_color = rgba(122, 176, 91, 0.1)    # color by rgba()
    dimensions = 10 20                      # vec2
    employees = 3                           # int
    average_time_spent = 8.13               # float
    hackers_password = 0xDEADBEEF           # int, as hex

    # nested categories
    secrets {
        password = hyprland                 # string
    }
}
`
	expected = "(configuration (section (name) (assignment (name) (color (rgb (hex))) (comment)) (assignment (name) (color (rgb (number_tuple (number) (number) (number) (number)))) (comment)) (assignment (name) (vec2 (number) (number)) (comment)) (assignment (name) (number) (comment)) (assignment (name) (number) (comment)) (assignment (name) (color (legacy_hex (hex))) (comment)) (comment) (section (name) (assignment (name) (string) (comment)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hyprlang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

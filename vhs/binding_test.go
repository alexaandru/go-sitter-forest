//go:build !plugin

package vhs_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vhs"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Where should we write the GIF?
Output demo.gif

# 1200x600 terminal with 46px font.
Set FontSize 46
Set Width 1200
Set Height 600

# Type a command in the terminal.
Type "echo 'Welcome to VHS!'"

# Pause for dramatic effect...
Sleep 500ms

# Run the command by pressing enter.
Enter

# Admire the output for a bit.
Sleep 5s
`
	expected = "(program (comment) (command (output (path))) (comment) (command (set (setting (float)))) (command (set (setting (integer)))) (command (set (setting (integer)))) (comment) (command (type (string))) (comment) (command (sleep (time))) (comment) (command (enter)) (comment) (command (sleep (time))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), vhs.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

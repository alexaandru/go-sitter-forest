//go:build !plugin

package zathurarc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/zathurarc"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# test
include desktop/zathurarc
map [normal] <Esc> zoom in#with argument
map <F1> recolor          #without argument
unmap F
map F toggle_fullscreen
map [fullscreen] F toggle_fullscreen
map abc quit
set recolor false
set highlight-transparency 0.3
unmap <F1>
unmap [normal] <Esc>
`
	expected = "(file (comment) (include_directive (command) (path)) (map_directive (command) (mode (mode_name)) (key (key_name)) (function) (argument)) (comment) (map_directive (command) (key (key_name)) (function)) (comment) (unmap_directive (command) (key)) (map_directive (command) (key) (function)) (map_directive (command) (mode (mode_name)) (key) (function)) (map_directive (command) (key) (function)) (set_directive (command) (option) (bool)) (set_directive (command) (option) (float)) (unmap_directive (command) (key (key_name))) (unmap_directive (command) (mode (mode_name)) (key (key_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), zathurarc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

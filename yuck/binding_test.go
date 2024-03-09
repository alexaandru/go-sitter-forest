//go:build !plugin

package yuck_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/yuck"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(defwindow example
           :monitor 0
           :geometry (geometry :x "0%"
                               :y "20px"
                               :width "90%"
                               :height "30px"
                               :anchor "top center")
           :stacking "fg"
           :reserve (struts :distance "40px" :side "top")
           :windowtype "dock"
           :wm-ignore false
  "example content")
`
	expected = "(source_file (list (symbol) (symbol) (keyword) (number (integer)) (keyword) (list (symbol) (keyword) (string (string_fragment)) (keyword) (string (string_fragment)) (keyword) (string (string_fragment)) (keyword) (string (string_fragment)) (keyword) (string (string_fragment))) (keyword) (string (string_fragment)) (keyword) (list (symbol) (keyword) (string (string_fragment)) (keyword) (string (string_fragment))) (keyword) (string (string_fragment)) (keyword) (boolean) (string (string_fragment))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), yuck.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

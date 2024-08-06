//go:build !plugin

package elisp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/elisp"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `(defun my-replace-greek-region ()
  "Replace “alpha” to “α” and other greek letters in current region."
  (interactive)
  (let (
        (p1 (region-beginning))
        (p2 (region-end)))
    (save-restriction
      (narrow-to-region p1 p2)
      (goto-char (point-min))
      (while (search-forward " alpha" nil t)
        (replace-match " α" nil t))
      (goto-char (point-min))
      (while (search-forward " beta" nil t)
        (replace-match " β" nil t))
      (goto-char (point-min))
      (while (search-forward " gamma" nil t)
        (replace-match " γ" nil t)))))
`
	expected = "(source_file (function_definition name: (symbol) parameters: (list) docstring: (string) (special_form) (special_form (list (list (symbol) (list (symbol))) (list (symbol) (list (symbol)))) (special_form (list (symbol) (symbol) (symbol)) (list (symbol) (list (symbol))) (special_form (list (symbol) (string) (symbol) (symbol)) (list (symbol) (string) (symbol) (symbol))) (list (symbol) (list (symbol))) (special_form (list (symbol) (string) (symbol) (symbol)) (list (symbol) (string) (symbol) (symbol))) (list (symbol) (list (symbol))) (special_form (list (symbol) (string) (symbol) (symbol)) (list (symbol) (string) (symbol) (symbol)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), elisp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

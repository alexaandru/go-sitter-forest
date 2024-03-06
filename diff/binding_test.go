package diff_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/diff"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
--- original_file.txt
+++ updated_file.txt
@@ -1,10 +1,10 @@
 This is the original text.
`
	expected = "(source (old_file (filename)) (new_file (filename)) (location (linerange) (linerange)) (context))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), diff.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

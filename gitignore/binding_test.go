package gitignore_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gitignore"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
amplify/.config/local-*
amplify/mock-data
amplify/backend/amplify-meta.json
amplify/backend/awscloudformation
build/
dist/
`
	expected = "(document (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (wildcard_chars)) (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char)) (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char)) (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) relative_flag: (directory_separator) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char)) (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) (pattern_char) directory_flag: (directory_separator)) (pattern (pattern_char) (pattern_char) (pattern_char) (pattern_char) directory_flag: (directory_separator)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gitignore.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package lexd_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lexd"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# <- keyword.control
PATTERNS
( X(1) | [ab:cd]+ )

LEXICON X
a<b>c:d>e{f}
`
	expected = "(source_file (block_comment (comment)) (pattern_block (pattern_start) (pattern_line (pattern_token whole: (anonymous_pattern (pattern_option (pattern_token whole: (lexicon_reference name: (identifier) column: (number))) (pattern_or) (pattern_token whole: (anonymous_lexicon (lexicon_segment left: (lexicon_string) (colon) right: (lexicon_string))) operator: (pattern_operator (plus_op)))))))) (lexicon_block (lexicon_start) name: (identifier) (lexicon_line (lexicon_segment left: (lexicon_string) left: (tag_symbol) left: (lexicon_string) (colon) right: (lexicon_string) right: (morpheme_boundary) right: (lexicon_string) right: (archiphoneme_symbol)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), lexd.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

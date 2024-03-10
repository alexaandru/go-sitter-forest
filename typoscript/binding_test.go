//go:build !plugin

package typoscript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/typoscript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Content element rendering
tt_content {
    stdWrap {
        # @deprecated since v11: stWrap.editPanel. Will be removed with 12.
        # Setup the edit panel for all content elements
        editPanel = 1
        editPanel {
            allow = move, new, edit, hide, delete
            label = %s
            onlyCurrentPid = 1
            previewBorder = 1
            edit.displayRecord = 1
        }
    }

    test = {$constant.test}
}

tt_content.media.test =< lib.contentElement
tt_content.media.test {
  hallo = welt
}

test (
  Hallo Welt
  Das ist {$eine} Konstante
  Wie geht es dir
)
`
	expected = "(typoscript (single_line_comment) (configuration_block (identifier) (block (block_punctuation) (configuration_block (identifier) (block (block_punctuation) (single_line_comment) (single_line_comment) (assignment_line (identifier) (value)) (configuration_block (identifier) (block (block_punctuation) (assignment_line (identifier) (value)) (assignment_line (identifier) (value)) (assignment_line (identifier) (value)) (assignment_line (identifier) (value)) (assignment_line (identifier) (value)) (block_punctuation))) (block_punctuation))) (assignment_line (identifier) (value (constant))) (block_punctuation))) (reference_line (identifier) (reference_identifier)) (configuration_block (identifier) (block (block_punctuation) (assignment_line (identifier) (value)) (block_punctuation))) (multiline_line (identifier) (multiline_value (constant))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), typoscript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

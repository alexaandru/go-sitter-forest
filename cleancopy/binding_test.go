//go:build !plugin

package cleancopy_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cleancopy"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `==================
Root UNOL-1 singles w/ EoF emptyline
==================
> Node title
foo_bar: 'some embed type'
<

This is a simple cleancopy document with plain text in the root node and
then an annotation line.
## Because sometimes we want to add comments!

Here we have a single content row followed by:
++  an unordered list
++  with three items, all single-line
++  and no indentation changes
`
	expected = "(document root_node_content: (node_content richtext_line: (richtext_line (plaintext)) richtext_line: (richtext_line (plaintext)) richtext_line: (richtext_line (plaintext)) node: (node title: (node_title richtext_line: (richtext_line (plaintext))) metadata: (node_metadata declaration: (node_metadata_declaration_line key: (node_metadata_key) value: (metadata_value (STRING1))))) empty_line: (empty_line) richtext_line: (richtext_line (plaintext)) richtext_line: (richtext_line (plaintext)) annotation: (annotation_line annotation_content: (plaintext)) empty_line: (empty_line) richtext_line: (richtext_line (plaintext)) list_unol: (unordered_list list_item: (unordered_list_item richtext_line: (richtext_line (plaintext))) list_item: (unordered_list_item richtext_line: (richtext_line (plaintext))) list_item: (unordered_list_item richtext_line: (richtext_line (plaintext)))) empty_line: (empty_line)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cleancopy.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

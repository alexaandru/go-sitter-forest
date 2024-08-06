//go:build !plugin

package note_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/note"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# Goals
Get things done

# Tasks
- Chores
  - Trash

# Notes
Pretty hot out

## Log
* 12:00 PM
  * did a thing
`
	expected = "(document (section (section_header) (body)) (section (section_header) (item (marker_task_pending) (content) (item (marker_task_pending) (content)))) (section (section_header) (body) (section (section_header) (item (marker_property_info) (content) (item (marker_property_info) (content))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), note.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

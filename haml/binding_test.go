//go:build !plugin

package haml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/haml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `- if event.visible_to_user?(current_user)
  .event-item.gl-border-bottom-0.gl-pb-3{ class: current_path?('users#activity') ? 'user-profile-activity gl-pl-7!' : 'project-activity-item' }
    .event-item-timestamp.gl-font-sm
      #{time_ago_with_tooltip(event.created_at)}
      - if event.imported?
        %span &middot;
        = render "import/shared/imported_badge", text_only: true, importable: _('event')
`
	expected = "(source_file (ruby_block_run (tag (class) (class) (class) (attributes (ruby_attributes)) (tag (class) (class) (ruby_interpolation (ruby_expression)) (ruby_block_run (tag (name) (text_content)) (ruby_block_output))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), haml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

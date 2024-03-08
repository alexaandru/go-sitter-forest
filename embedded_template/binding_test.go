package embedded_template_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/embedded_template"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
<%# Non-printing tag ↓ -%>
<% if @keys_enable -%>
<%# Expression-printing tag ↓ -%>
keys <%= @keys_file %>
<% unless @keys_trusted.empty? -%>
trustedkey <%= @keys_trusted.join(' ') %>
<% end -%>
<% if @keys_requestkey != '' -%>
requestkey <%= @keys_requestkey %>
<% end -%>
<% if @keys_controlkey != '' -%>
controlkey <%= @keys_controlkey %>
<% end -%>

<% end -%>
`
	expected = "(template (content) (comment_directive (comment)) (content) (directive (code)) (content) (comment_directive (comment)) (content) (output_directive (code)) (content) (directive (code)) (content) (output_directive (code)) (content) (directive (code)) (content) (directive (code)) (content) (output_directive (code)) (content) (directive (code)) (content) (directive (code)) (content) (output_directive (code)) (content) (directive (code)) (content) (directive (code)) (content))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), embedded_template.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

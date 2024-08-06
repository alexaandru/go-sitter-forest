//go:build !plugin

package slim_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/slim"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `doctype html
html
  head
    title Slim Examples
    meta name="keywords" content="template language"
    meta name="author" content=author
    link rel="icon" type="image/png" href=file_path("favicon.png")
    javascript:
      alert('Slim supports embedded javascript!')

  body
    h1 Markup examples

    #content
      p This example shows you how a basic Slim file looks.

    == yield

    - if items.any?
      table#items
        - for item in items
          tr
            td.name = item.name
            td.price = item.price
    - else
      p No items found. Please add some inventory.
        Thank you!

    div id="footer"
      == render 'footer'
      | Copyright &copy; #{@year} #{@author}
`
	expected = "(source_file (doctype (doctype_html5)) (element name: (tag_name) (nested (element name: (tag_name) (nested (element name: (tag_name) (element_text)) (element name: (tag_name) attrs: (attrs (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted)) (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted)))) (element name: (tag_name) attrs: (attrs (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted)) (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_ruby)))) (element name: (tag_name) attrs: (attrs (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted)) (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted)) (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_ruby)))) (embedded_engine (embedded_engine_name)))) (element name: (tag_name) (nested (element name: (tag_name) (element_text)) (element attr_shortcuts: (attr_shortcuts (attr_shortcut_id (css_identifier))) (nested (element name: (tag_name) (element_text)))) (ruby_block_output_noescape (ruby)) (ruby_block_control (ruby) nested: (nested (element name: (tag_name) attr_shortcuts: (attr_shortcuts (attr_shortcut_id (css_identifier))) (nested (ruby_block_control (ruby) nested: (nested (element name: (tag_name) (nested (element name: (tag_name) attr_shortcuts: (attr_shortcuts (attr_shortcut_class (css_identifier))) (nested_inline (ruby_block_output (ruby)))) (element name: (tag_name) attr_shortcuts: (attr_shortcuts (attr_shortcut_class (css_identifier))) (nested_inline (ruby_block_output (ruby)))))))))))) (ruby_block_control (ruby) nested: (nested (element name: (tag_name) (element_text)))) (element name: (tag_name) attrs: (attrs (attr name: (attr_name) assignment: (attr_assignment) value: (attr_value_quoted))) (nested (ruby_block_output_noescape (ruby)) (verbatim_text))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), slim.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package pug_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pug"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
// some comment
  multiline though
some-tag.class-one(attr="1" v-if='jsCode' :toggle='true') the content
  sub-tag.some-slass
    sub-sub-tag content
  other-subtag#with-id.and-class(and-attr)
    | Text
div
  | Text {{ variable() == "javascript" }} with inline JS
.foo(style="width: 2px")
`
	expected = "(source_file (comment) (tag (tag_name) (class) (attributes (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (content) (children (tag (tag_name) (class) (children (tag (tag_name) (content)))) (tag (tag_name) (id) (class) (attributes (attribute (attribute_name))) (children (pipe (content)))))) (tag (tag_name) (children (pipe (content) (javascript) (content)))) (tag (class) (attributes (attribute (attribute_name) (quoted_attribute_value (attribute_value))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), pug.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

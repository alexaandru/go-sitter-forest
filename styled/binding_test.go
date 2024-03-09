//go:build !plugin

package styled_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/styled"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
#peek .wrapper {
    width: 860px !important;
    padding: 0;
}
fieldset {
    padding: 0;
    margin: 0;
    border: 0;
}
label {
    font-size: 13px;
    font-weight: bold;
}
`
	expected = "(stylesheet (rule_set (selectors (descendant_selector (id_selector (id_name)) (class_selector (class_name)))) (block (declaration (property_name) (integer_value (unit)) (important)) (declaration (property_name) (integer_value)))) (rule_set (selectors (tag_name)) (block (declaration (property_name) (integer_value)) (declaration (property_name) (integer_value)) (declaration (property_name) (integer_value)))) (rule_set (selectors (tag_name)) (block (declaration (property_name) (integer_value (unit))) (declaration (property_name) (plain_value)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), styled.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

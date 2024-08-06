//go:build !plugin

package vue_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vue"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<script>
export default {
  data() {
    return {
      fibonacciSequence: []
    };
  }
}
</script>
`
	expected = "(document (script_element (start_tag (tag_name)) (raw_text) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), vue.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

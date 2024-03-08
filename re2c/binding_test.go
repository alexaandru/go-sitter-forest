package re2c_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/re2c"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
// re2c $INPUT -o $OUTPUT -i --case-ranges
#include <assert.h>

bool lex(const char *s) {
    const char *YYCURSOR = s;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        number = [1-9][0-9]*;

        number { return true; }
        *      { return false; }
    */
}

int main() {
    assert(lex("1234"));
    return 0;
}
`
	expected = "(re2c (comment) (host_lang) (global_block (body (configuration (set_yyfill option: (option_name) value: (number))) (configuration (define option: (option_name) value: (name))) (named_definition name: (name) value: (regex (concat (character_class (range from: (literal) to: (literal))) (repetition (character_class (range from: (literal) to: (literal))) (close))))) (ordinary_rule (pattern (regex (name))) (action (host_lang))) (ordinary_rule (pattern (default)) (action (host_lang))))) (host_lang))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), re2c.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

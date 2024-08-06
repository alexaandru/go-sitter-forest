//go:build !plugin

package applesoft_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/applesoft"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `10 GOSUB 100: GOSUB 200
20 END

100 P RI  NT "HELLO WORLD": REM ignores spaces
120 FOR I = LOFT OR LEFT TO 15: REM finds error
130 PRINT TAB(2);I: NEXT: RETURN: REM left parenthesis part of token

200 X = 3.14159
210 DEF FN CUB(X1) = X1^3
220 PRINT FN CUB(ATN(SIN(X)+COS(X))): RETURN
`
	expected = "(source_file (line (linenum) (statement (tok_gosub) (linenum)) (statement (tok_gosub) (linenum))) (line (linenum) (statement (tok_end))) (line (linenum) (statement (tok_print) (str)) (statement (tok_rem) (comment_text))) (line (linenum) (statement (tok_for) (var_real (name_real)) (tok_eq) (var_real (name_real)) (tok_to) (var_real (name_real))) (ERROR (tok_to) (int)) (statement (tok_rem) (comment_text))) (line (linenum) (statement (tok_print) (sfcall (tok_tabp) (int)) (var_real (name_real))) (statement (tok_next)) (statement (tok_return)) (statement (tok_rem) (comment_text))) (line (linenum) (statement (assignment (var_real (name_real)) (tok_eq) (real)))) (line (linenum) (statement (tok_def) (tok_fn) (name_fn) (var_real (name_real)) (tok_eq) (binary_aexpr (var_real (name_real)) (tok_pow) (int)))) (line (linenum) (statement (tok_print) (fcall (tok_fn) (name_fn) (fcall (tok_atn) (binary_aexpr (fcall (tok_sin) (var_real (name_real))) (tok_plus) (fcall (tok_cos) (var_real (name_real))))))) (statement (tok_return))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), applesoft.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

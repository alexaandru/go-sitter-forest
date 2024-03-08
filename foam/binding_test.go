package foam_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/foam"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
/* Comment */
// <- comment
FoamFile
{
    version     2.0;
    format      ascii;
    class       vectorField;
    object      kinematicCloudPositions;
}

internalField uniform 0.0;

"(list|.*Wall)" (word 1 mor(2,phi(U)));

dict
{
    class       vectorField;
    div(phi,U1) K;
    laplacian((1|A(U+v)*D-mT),p) Gauss linear corrected;
}

(this and that)
{
    dimensions [1 -1 2 0 0 0];
    dimensions [m^2 s^-2];
    enable true;
    variable $:dict.div(phi,U1);
    env ${FOAM_TUTORIALS};
}

code
#{
    /* Comment #{#} */
    /* Another comment */
    pointField points(30);
    points[0]  = point(0.5, 0, -0.5);
#};

#include "Windowsy path\\nto file.cfg"
#   includeFunc writeObjects(d = gas)
#includeFunc fieldAverage(U.particles, U.air, alpha.particles, p)

#if #calc "${angle} < 75"
    default  Gauss linear corrected;
#else
    default  Gauss linear limited corrected 0.5;
#endif
`
	expected = "(foam (comment) (comment) (dict key: (identifier) (dict_core dict_body: (key_value keyword: (identifier) value: (number_literal)) dict_body: (key_value keyword: (identifier) value: (identifier)) dict_body: (key_value keyword: (identifier) value: (identifier)) dict_body: (key_value keyword: (identifier) value: (identifier)))) (key_value keyword: (identifier) value: (identifier) value: (number_literal)) (key_value keyword: (string_literal) value: (list item: (identifier) item: (number_literal) item: (identifier))) (dict key: (identifier) (dict_core dict_body: (key_value keyword: (identifier) value: (identifier)) dict_body: (key_value keyword: (identifier) value: (identifier)) dict_body: (key_value keyword: (identifier) value: (identifier) value: (identifier) value: (identifier)))) (dict key: (list item: (identifier) item: (identifier) item: (identifier)) (dict_core dict_body: (key_value keyword: (identifier) value: (dimensions dimension: (number_literal) dimension: (number_literal) dimension: (number_literal) dimension: (number_literal) dimension: (number_literal) dimension: (number_literal))) dict_body: (key_value keyword: (identifier) value: (dimensions dimension: (identifier) dimension: (identifier))) dict_body: (key_value keyword: (identifier) value: (boolean)) dict_body: (key_value keyword: (identifier) value: (macro (prev_scope) (identifier))) dict_body: (key_value keyword: (identifier) value: (macro (identifier))))) (key_value keyword: (identifier) value: (code (comment) (code_body))) (preproc_call directive: (identifier) argument: (string_literal (escape_sequence))) (preproc_call directive: (identifier) argument: (identifier)) (preproc_call directive: (identifier) argument: (identifier)) (preproc_call directive: (identifier) argument: (preproc_call directive: (identifier) argument: (string_literal))) (key_value keyword: (identifier) value: (identifier) value: (identifier) value: (identifier)) (preproc_call) (key_value keyword: (identifier) value: (identifier) value: (identifier) value: (identifier) value: (identifier) value: (number_literal)) (preproc_call))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), foam.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package cmdl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cmdl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `signal cout, u, v, w, x

cout, u, v, w, x <= Adder(0, 1, 0, 0,
                          1, 1, 1, 1)

# Component for adding two 4-bit numbers
component Adder(a, b, c, d,
                e, f, g, h)
                => cout, u, v, w, x
    signal ca, cb, cc # Intermediate carry signals

    # Output signals
    u, cout <= FullAdder(e, a, cc)
    v, cc   <= FullAdder(f, b, cb)
    w, cb   <= FullAdder(g, c, ca)
    x, ca   <= FullAdder(h, d, 0)

    # Helper component for adding two 1-bit numbers
    component FullAdder(a, b, cin) => s, cout
        signal z <= Xor(a, b)

        s <= Xor(z, cin)
        cout <= (z and cin) or (a and b)

        # Helper component performing exclusive or operation
        component Xor(a, b) => x
            x <= a and not b or not a and b
        end
    end
end
`
	expected = "(source_file (declaration left: (declaration_left_list (identifier) (identifier) (identifier) (identifier) (identifier))) (assignment left: (assignment_left_list (identifier) (identifier) (identifier) (identifier) (identifier)) right: (expression_component name: (identifier) inputs: (expression_component_input_list (number) (number) (number) (number) (number) (number) (number) (number)))) (comment) (component name: (identifier) inputs: (component_inputs (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)) outputs: (component_outputs (identifier) (identifier) (identifier) (identifier) (identifier)) body: (component_body (declaration left: (declaration_left_list (identifier) (identifier) (identifier))) (comment) (comment) (assignment left: (assignment_left_list (identifier) (identifier)) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier) (identifier)))) (assignment left: (assignment_left_list (identifier) (identifier)) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier) (identifier)))) (assignment left: (assignment_left_list (identifier) (identifier)) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier) (identifier)))) (assignment left: (assignment_left_list (identifier) (identifier)) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier) (number)))) (comment) (component name: (identifier) inputs: (component_inputs (identifier) (identifier) (identifier)) outputs: (component_outputs (identifier) (identifier)) body: (component_body (declaration left: (identifier) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier)))) (assignment left: (identifier) right: (expression_component name: (identifier) inputs: (expression_component_input_list (identifier) (identifier)))) (assignment left: (identifier) right: (expression_binary left: (expression_binary left: (identifier) right: (identifier)) right: (expression_binary left: (identifier) right: (identifier)))) (comment) (component name: (identifier) inputs: (component_inputs (identifier) (identifier)) outputs: (component_outputs (identifier)) body: (component_body (assignment left: (identifier) right: (expression_binary left: (expression_binary left: (expression_binary left: (identifier) right: (expression_unary operand: (identifier))) right: (expression_unary operand: (identifier))) right: (identifier))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cmdl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package lat_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lat"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `x: [] ||? empty

||! y is FULL of heterogeneous stuff!
y: [
    @null,
    @not @false, @true,
    @nan,
    -@infinity, @infinity,
    0b101010, 0o52, 0x2a,
    42,
    "Look at me!... I'm inside a list",
    { question: "What's the meaning of life?", answer: 42, list: [42] },

    @if @true @then 42 @else -42, ||? A value will make it into the list, either 42 or -42
    @if @false @then 42, ||? 42 will not make it into the list, as the condition is false


    @each i, v @fallback 42 @in [42]  ["[i]: [v]"],
    @each v @from 0 @until 10 @by 0.5 @if v @remainder 2 = 0 [ v + 1 ],

    ||? the following match statement WILL add -42 to the list
    @match [42] {
        [0] 42,
        _ -42
    },

    ||? the following match statement WILL NOT add -42 to the list
    @match [42] {
        [0] 42
    },

    ...[42, 42, 42]
]

z: {}
`
	expected = "(source (ERROR (definition key: (definition_key) expression: (list))) (single_line_comment note: (comment_note)) (single_line_doc note: (doc_note)) (definition key: (definition_key) expression: (list (ref_to_null) (not expression: (false)) (true) (nan) (negation expression: (infinity)) (infinity) (binary value: (bin_value)) (octal value: (oct_value)) (hexadecimal value: (hex_value)) (decimal) (text (literal (string))) (dictionary (pair key: (dictionary_key id: (id)) value: (text (literal (string)))) (pair key: (dictionary_key id: (id)) value: (decimal)) (pair key: (dictionary_key id: (id)) value: (list (decimal)))) (if condition: (true) then: (decimal) else: (negation expression: (decimal))) (single_line_comment note: (comment_note)) (if condition: (false) then: (decimal)) (single_line_comment note: (comment_note)) (list_gen (each key: (id) value: (id) iterable: (iterator fallback: (fallback expression: (decimal)) expression: (list (decimal)))) (list (text (interpolation (reference_to_local path: (path_to_local (id)))) (literal (string)) (interpolation (reference_to_local path: (path_to_local (id))))))) (list_gen (each value: (id) iterable: (range start: (decimal) end: (until expression: (decimal)) by: (decimal))) (filter condition: (equal left: (remainder left: (reference_to_local path: (path_to_local (id))) right: (decimal)) right: (decimal))) (list (addition left: (reference_to_local path: (path_to_local (id))) right: (decimal)))) (single_line_comment note: (comment_note)) (match list: (list (decimal)) cases: (cases (case clauses: (clauses (decimal)) expression: (decimal)) (case clauses: (other) expression: (negation expression: (decimal))))) (single_line_comment note: (comment_note)) (match list: (list (decimal)) cases: (cases (case clauses: (clauses (decimal)) expression: (decimal)))) (spread expression: (list (decimal) (decimal) (decimal))))) (ERROR (definition_key)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), lat.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

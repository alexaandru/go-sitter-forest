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
    0u𓁅, 0u😀, -0u😿, 0u🂽 = 0u🂾,
    0u\\,
    42,
    "Look at me!... I'm inside a list 😉",
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
	expected = "(source (definition key: (key) (list)) (comment (notes)) (doc (notes)) (definition key: (key) (list (null) (not (false)) (true) (nan) (minus (infinity)) (infinity) (bin) (oct) (hex) (uni) (uni) (minus (uni)) (eq (left (uni)) (right (uni))) (number_esc (ess)) (dec) (text (s)) (map (pair (key (id)) (text (s))) (pair (key (id)) (dec)) (pair (key (id)) (list (dec)))) (if (condition (true)) (then (dec)) (else (minus (dec)))) (comment (notes)) (if (condition (false)) (then (dec))) (comment (notes)) (gen (each (k) (value) (iterator (fallback (dec)) (list (dec)))) (list (text (interpolation (ref (path (id)))) (s) (interpolation (ref (path (id))))))) (gen (each (value) (range (from (dec)) (until (dec)) (by (dec)))) (filter (eq (left (rem (left (ref (path (id)))) (right (dec)))) (right (dec)))) (list (add (left (ref (path (id)))) (right (dec))))) (comment (notes)) (match (list (dec)) (cases (case (clauses (dec)) (dec)) (case (other) (minus (dec))))) (comment (notes)) (match (list (dec)) (cases (case (clauses (dec)) (dec)))) (spread (list (dec) (dec) (dec))))) (definition key: (key) (map)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), lat.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

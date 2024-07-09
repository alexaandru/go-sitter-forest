//go:build !plugin

package fin_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fin"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# welcome to fin notation!
example_data = [
	# symbols
	foo, _42, crypto:sha256, :key

	# numbers
	98, 1.23e-4, -42

	# strings
	"escaped \n strings"
	|raw strings are not escaped
	|and can span mutliple lines

	# collections (arrays & maps)
	[], tagged["array"], [98, goal, []]
	(), (key = "val", 55 = tagged:map())

	# extensions
	true, fin:timestamp["2024-02-26T03:01:13.644Z"]
	ext:null, ext:nan, ext:loc(x = 1, y = 2)
]

# frontmatter
title = "Versatile Data Model"
tags = [fin, data]
draft = false
pub_date = fin:timestamp["2024-02-26T03:01:13.644Z"]

# represent html
html_fragment = div[
	(class = "prose", id = "hero")
	h1["Fin Data Format"]
	p["A notation for data interchange"], hr
	img(
		# example with no children
		src = "fin.webp", alt = "fin data notation"
		width = 512, height = 512
	)
]

# describe a program
crypto = :namespace(url = "https://blah/crypto")
in = fin:bytes[""]
out = fin:bytes["e3b0c44298fc1c149afbf4..."]
main = :function(
	body = [
		# sha256 test vector
		:assert_eq[crypto:sha256[in], out]
	]
)

extensions = [
	# builtin extensions (start with fin:)
	fin:timestamp["2024-02-26T03:01:13.644Z"]
	fin:bytes[
		|f6 69 6e 20 54 d6 78 74
		|2a 46 6f 72 6d 61 74 0a
	]
	fin:uuid["c83ccbb6-44d0-4d62-8263-b8afec01f3a2"]

	# booleans are builtins
	true, false

	# extensions ending with _ are discarded
	fin:_(is_value = false, treated_as = "comment")

	# custom extensions (start with ext:)
	ext:null, ext:nan, ext:int:hex_10fe
	ext:loc(x = 1, y = 2)
	ext:markdown[
		|# title 
		|
		|a **markdown** extension!
	]
]

# symbols, numbers & escaped strings are INLINE
inline = "contains no newlines (LF)"

# comments and raw strings are EXPANDED
expanded =
| they require a newline to terminate

# collections expand if any child has expanded
expanded_array = [
	# this comment expands the array!
	# - nested elements are indented on each line
	# - consecutive empty lines are removed
	# - comma signals multiple elements per line
	1, 2
]

ex_map = (
	in_arr = [all, elements, "are inline"]
	ex_arr = [
		| this raw string forces ex_arr
		| and ex_map to expand!
	]
)
`
	expected = "(root (com) (kv (sym) (arr (com) (sym) (sym) (sym) (sym) (com) (num) (num) (num) (com) (esc (esc_seq)) (raw) (com) (arr) (arr tag: (sym) (esc)) (arr (num) (sym) (arr)) (map) (map (kv (sym) (esc)) (kv (num) (map tag: (sym)))) (com) (sym) (arr tag: (sym) (esc)) (sym) (sym) (map tag: (sym) (kv (sym) (num)) (kv (sym) (num))))) (com) (kv (sym) (esc)) (kv (sym) (arr (sym) (sym))) (kv (sym) (sym)) (kv (sym) (arr tag: (sym) (esc))) (com) (kv (sym) (arr tag: (sym) (map (kv (sym) (esc)) (kv (sym) (esc))) (arr tag: (sym) (esc)) (arr tag: (sym) (esc)) (sym) (map tag: (sym) (com) (kv (sym) (esc)) (kv (sym) (esc)) (kv (sym) (num)) (kv (sym) (num))))) (com) (kv (sym) (map tag: (sym) (kv (sym) (esc)))) (kv (sym) (arr tag: (sym) (esc))) (kv (sym) (arr tag: (sym) (esc))) (kv (sym) (map tag: (sym) (kv (sym) (arr (com) (arr tag: (sym) (arr tag: (sym) (sym)) (sym)))))) (kv (sym) (arr (com) (arr tag: (sym) (esc)) (arr tag: (sym) (raw)) (arr tag: (sym) (esc)) (com) (sym) (sym) (com) (map tag: (sym) (kv (sym) (sym)) (kv (sym) (esc))) (com) (sym) (sym) (sym) (map tag: (sym) (kv (sym) (num)) (kv (sym) (num))) (arr tag: (sym) (raw)))) (com) (kv (sym) (esc)) (com) (kv (sym) (raw)) (com) (kv (sym) (arr (com) (num) (num))) (kv (sym) (map (kv (sym) (arr (sym) (sym) (esc))) (kv (sym) (arr (raw))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fin.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

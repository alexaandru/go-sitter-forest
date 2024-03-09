package grammar

import "testing"

func TestContentURL(t *testing.T) {
	t.Parallel()

	testCases := []struct{ url, ref, rev, exp string }{
		{"", "", "", "unrecognized source code hosting"},
		{"bogus", "", "", "unrecognized source code hosting"},
		{"https://github.com/briot/tree-sitter-ada", "", "", "https://raw.githubusercontent.com/briot/tree-sitter-ada//"},
		{"https://github.com/briot/tree-sitter-ada", "main", "123abc", "https://raw.githubusercontent.com/briot/tree-sitter-ada/123abc/"},
		{"https://gitlab.com/gabmus/tree-sitter-blueprint", "master", "123def", "https://gitlab.com/gabmus/tree-sitter-blueprint/-/raw/master/"},
		{"https://git.sr.ht/~rockorager/tree-sitter-scfg", "dev", "777aaa", "https://git.sr.ht/~rockorager/tree-sitter-scfg/blob/777aaa/"},
	}

	for _, tc := range testCases {
		t.Run(tc.url, func(t *testing.T) {
			t.Parallel()

			gr := Grammar{URL: tc.url, Version: &Version{Reference: tc.ref, Revision: tc.rev}}

			if act := gr.contentURL(); act != tc.exp {
				t.Fatalf("Expected %q got %q", tc.exp, act)
			}
		})
	}
}

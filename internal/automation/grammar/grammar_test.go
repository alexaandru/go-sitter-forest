package grammar

import (
	"errors"
	"maps"
	"testing"
)

const testURL = "https://github.com/alexaandru/go-sitter-forest"

func TestFetchNewVersion(t *testing.T) {
	t.Skip("IMPLEMENT ME")
}

func TestNewVersion(t *testing.T) {
	gr := Grammar{}

	if v := gr.NewVersion(); v != nil {
		t.Fatalf("Expected no new version, got %v", v)
	}

	gr.newVersion = &Version{}

	if v := gr.NewVersion(); v == nil {
		t.Fatalf("Expected new version, got nil")
	}
}

func TestFilesMap(t *testing.T) {
	t.Parallel()

	testCases := []struct {
		url, src       string
		downloadParser bool
		files          []string
		exp            map[string]string
		err            error
	}{
		{"", "", false, nil, nil, errUnkHosting},
		{"", "", true, nil, nil, errUnkHosting},
		{testURL, "", false, nil, nil, nil},
		{testURL, "", true, nil, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/parser.c":             "parser.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/alloc.h":  "alloc.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/array.h":  "array.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/parser.h": "parser.h",
		}, nil},
		{testURL, "", false, []string{"scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/scanner.c": "scanner.c",
		}, nil},
		{testURL, "", true, []string{"scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/scanner.c":            "scanner.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/parser.c":             "parser.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/alloc.h":  "alloc.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/array.h":  "array.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/parser.h": "parser.h",
		}, nil},
		{testURL, "", false, []string{"common/scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/common/scanner.c": "scanner.c",
		}, nil},
		{testURL, "", true, []string{"common/scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/common/scanner.c":         "scanner.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/parser.c":             "parser.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/alloc.h":  "alloc.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/array.h":  "array.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/src/tree_sitter/parser.h": "parser.h",
		}, nil},
		{testURL, "other/root/folder", false, []string{"tag.h", "common/scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/common/scanner.c":            "scanner.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/tag.h": "tag.h",
		}, nil},
		{testURL, "other/root/folder", true, []string{"tag.h", "common/scanner.c"}, map[string]string{
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/common/scanner.c":                           "scanner.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/parser.c":             "parser.c",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/tree_sitter/alloc.h":  "alloc.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/tree_sitter/array.h":  "array.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/tree_sitter/parser.h": "parser.h",
			"https://raw.githubusercontent.com/alexaandru/go-sitter-forest/123abc/other/root/folder/src/tag.h":                "tag.h",
		}, nil},
	}

	for _, tc := range testCases {
		t.Run(tc.url, func(t *testing.T) {
			t.Parallel()

			gr := Grammar{
				URL:          tc.url,
				SrcRoot:      tc.src,
				SkipGenerate: tc.downloadParser,
				Files:        tc.files,
				Version:      &Version{Reference: "main", Revision: "123abc"},
			}

			act, err := gr.FilesMap()
			if err != nil && tc.err == nil ||
				err == nil && tc.err != nil ||
				err != nil && tc.err != nil && err.Error() != tc.err.Error() {
				t.Fatalf("Expected error %v got %v", tc.err, err)
			} else if err == nil && !maps.Equal(act, tc.exp) {
				t.Fatalf("Expected %q got %q", tc.exp, act)
			}
		})
	}
}

func TestContentURL(t *testing.T) {
	t.Parallel()

	testCases := []struct {
		url, ref, rev, exp string
		err                error
	}{
		{"", "", "", "", errUnkHosting},
		{"bogus", "", "", "", errUnkHosting},
		{"https://github.com/briot/tree-sitter-ada", "", "", "https://raw.githubusercontent.com/briot/tree-sitter-ada//", nil},
		{"https://github.com/briot/tree-sitter-ada", "main", "123abc", "https://raw.githubusercontent.com/briot/tree-sitter-ada/123abc/", nil},
		{"https://gitlab.com/gabmus/tree-sitter-blueprint", "master", "123def", "https://gitlab.com/gabmus/tree-sitter-blueprint/-/raw/master/", nil},
		{"https://git.sr.ht/~rockorager/tree-sitter-scfg", "dev", "777aaa", "https://git.sr.ht/~rockorager/tree-sitter-scfg/blob/777aaa/", nil},
	}

	for _, tc := range testCases {
		t.Run(tc.url, func(t *testing.T) {
			t.Parallel()

			gr := Grammar{URL: tc.url, Version: &Version{Reference: tc.ref, Revision: tc.rev}}

			act, err := gr.ContentURL()
			if err != nil && tc.err == nil ||
				err == nil && tc.err != nil ||
				err != nil && tc.err != nil && err.Error() != tc.err.Error() {
				t.Fatalf("Expected error %v got %v", tc.err, err)
			} else if err == nil && act != tc.exp {
				t.Fatalf("Expected %q got %q", tc.exp, act)
			}
		})
	}
}

func TestFetchLastCommit(t *testing.T) {
	t.Parallel()

	testCases := []struct {
		url, branch string
		expLen      int
		err         error
	}{
		{"", "", 0, errors.New("fetching @: exit status 128: fatal: no path specified; see 'git help pull' for valid url syntax\n")},
		{"bogus URL", "", 0, errors.New("fetching bogus URL@: exit status 128: fatal: 'bogus URL' does not appear to be a git repository\nfatal: Could not read from remote repository.\n\nPlease make sure you have the correct access rights\nand the repository exists.\n")},
		{testURL, "", 0, nil},
		{testURL, "bogus", 0, nil},
		{testURL, "main", 40, nil},
	}

	for _, tc := range testCases {
		t.Run(tc.url, func(t *testing.T) {
			t.Parallel()

			act, err := fetchLastCommit(tc.url, tc.branch)
			if err == nil && tc.err != nil ||
				err != nil && tc.err == nil ||
				err != nil && tc.err != nil && err.Error() != tc.err.Error() {
				t.Fatalf("Expected error %q got %q", tc.err.Error(), err.Error())
			} else if act := len(act); err == nil && act != tc.expLen {
				t.Fatalf("Expected to commit sha len to be %d was %d", tc.expLen, act)
			}
		})
	}
}

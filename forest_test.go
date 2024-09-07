package forest

import (
	"bytes"
	"context"
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"testing"

	"github.com/alexaandru/go-sitter-forest/internal/automation/util"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const langsCount = 427

const bindingTpl = `%s

package %s
%s
//#include "parser.h"
//TSLanguage *tree_sitter_%s();
import "C"

import (
	"embed"
	"strings"
	"unsafe"
)

const (
	_ byte = iota
	NvimFirst
	NativeFirst
	NvimOnly
	NativeOnly
)

const nvimts = "nvimts__"

//go:embed grammar.json *.scm
var files embed.FS

func GetLanguage() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_%s())
}

func GetQuery(kind string, opts ...byte) (out []byte) {
	kind = strings.TrimSuffix(kind, ".scm") + ".scm"

	pref := NvimFirst
	if len(opts) > 0 {
		pref = opts[0]
	}

	var err error

	switch pref {
	case NvimFirst:
		out, err = files.ReadFile(nvimts + kind)
		if err == nil && len(out) > 0 {
			return
		}

		out, _ = files.ReadFile(kind)

		return
	case NativeFirst:
		out, err = files.ReadFile(kind)
		if err == nil && len(out) > 0 {
			return
		}

		out, _ = files.ReadFile(nvimts + kind)

		return
	case NvimOnly:
		out, _ = files.ReadFile(nvimts + kind)
		return
	case NativeOnly:
		out, _ = files.ReadFile(kind)
		return
	}

	return
}

func Info() string {
	out, err := files.ReadFile("grammar.json")
	if err != nil {
		return err.Error()
	}

	return string(out)
}
`

func TestBindingFilesAreAllUpToDate(t *testing.T) {
	forEachFile(t, "*/binding.go", func(t *testing.T, act, pack, lang, silencer string) {
		t.Helper()

		exp := fmt.Sprintf(bindingTpl, "//go:build !plugin", pack, silencer, lang, lang)
		if act != exp {
			t.Fatalf("Expected\n%s\n\ngot\n\n%s\n", exp, act)
		}
	})
}

func TestPluginFilesAreAllUpToDate(t *testing.T) {
	forEachFile(t, "*/plugin.go", func(t *testing.T, act, _, lang, silencer string) {
		t.Helper()

		exp := fmt.Sprintf(bindingTpl, "//go:build plugin", "main", silencer, lang, lang)
		if act != exp {
			t.Fatalf("Expected\n%s\n\ngot\n\n%s\n", exp, act)
		}
	})
}

func TestAllParsers(t *testing.T) {
	t.Parallel()

	files, err := filepath.Glob("*/binding.go")
	if err != nil {
		t.Fatal(err)
	}

	for _, fpath := range files {
		lang := filepath.Dir(fpath)
		src := filepath.Join("internal", "testdata", "languages", lang)

		t.Run(lang, func(t *testing.T) {
			t.Parallel()

			code, err := os.ReadFile(src + ".src")
			if err != nil {
				t.Fatal(err)
			}

			exp, err := os.ReadFile(src + ".exp")
			if err != nil {
				t.Fatal(err)
			}

			exp = bytes.TrimSpace(exp)
			if len(code) == 0 || len(exp) == 0 {
				t.Skip("Not implemented")
			}

			l := GetLanguage(lang)
			if l == nil {
				t.Skipf("Language %q does not have a function available", lang)
			}

			n, err := sitter.Parse(context.Background(), code, l)
			if err != nil {
				t.Fatal(err)
			}

			if act := n.String(); act != string(exp) {
				t.Fatalf("Expected\n%s\n\ngot\n\n%s\n", string(exp), act)
			}
		})
	}

	if exp, x := langsCount, len(SupportedLanguages()); x != exp {
		t.Fatalf("Expected supported langs to be %d got %d", exp, x)
	}
}

func TestGetQuery(t *testing.T) {
	deflt := byte(0) // default preference
	goNvimHi := getContent("go", "nvimts__highlights.scm")
	goNativeHi := getContent("go", "highlights.scm")
	goInjections := getContent("go", "nvimts__injections.scm")
	goTags := getContent("go", "tags.scm")
	astroIndents := "" +
		getContent(nvimRemaining, "html_tags", "indents.scm") + "\n\n" +
		getContent("html", "nvimts__indents.scm") + "\n\n" +
		getContent("astro", "nvimts__indents.scm")
	snakeNvimIndents := "" +
		getContent("python", "nvimts__indents.scm") + "\n\n" +
		getContent("snakemake", "nvimts__indents.scm")
	snakeNativeIndents := "" +
		getContent("python", "nvimts__indents.scm") + "\n\n" +
		getContent("snakemake", "indents.scm")
	snakeNativeOnlyIndents := getContent("snakemake", "indents.scm")
	vueInjections := "" +
		getContent(nvimRemaining, "html_tags", "injections.scm") + "\n\n" +
		getContent("vue", "nvimts__injections.scm")
	tsxFolds := "" +
		getContent(nvimRemaining, "jsx", "folds.scm") + "\n\n" +
		getContent(nvimRemaining, "ecma", "folds.scm") + "\n\n" +
		getContent("typescript", "nvimts__folds.scm") + "\n\n" +
		getContent("tsx", "nvimts__folds.scm")

	testCases := []struct {
		lang, kind, exp string
		opt             byte
	}{
		{"go", "bogus", "", deflt},
		{"go", "highlights", goNvimHi, deflt},
		{"go", "highlights.scm", goNvimHi, deflt},
		{"go", "highlights", goNvimHi, NvimFirst},
		{"go", "highlights.scm", goNvimHi, NvimFirst},
		{"go", "highlights", goNvimHi, NvimOnly},
		{"go", "highlights.scm", goNvimHi, NvimOnly},
		{"go", "highlights", goNativeHi, NativeFirst},
		{"go", "highlights", goNativeHi, NativeOnly},
		{"go", "highlights.scm", goNativeHi, NativeFirst},
		{"go", "highlights.scm", goNativeHi, NativeOnly},
		{"go", "injections", goInjections, deflt},
		{"go", "injections", goInjections, NvimFirst},
		{"go", "injections", goInjections, NativeFirst},
		{"go", "injections", goInjections, NvimOnly},
		{"go", "injections", "", NativeOnly},
		{"go", "tags", goTags, deflt},
		{"go", "tags", goTags, NvimFirst},
		{"go", "tags", goTags, NativeFirst},
		{"go", "tags", "", NvimOnly},
		{"go", "tags", goTags, NativeOnly},
		{"astro", "indents", astroIndents, deflt},
		{"astro", "indents", astroIndents, NvimFirst},
		{"astro", "indents", astroIndents, NvimOnly},
		{"astro", "indents", astroIndents, NativeFirst},
		{"astro", "indents", "", NativeOnly},
		{"snakemake", "indents", snakeNvimIndents, deflt},
		{"snakemake", "indents", snakeNvimIndents, NvimFirst},
		{"snakemake", "indents", snakeNvimIndents, NvimOnly},
		{"snakemake", "indents", snakeNativeIndents, NativeFirst},
		{"snakemake", "indents", snakeNativeOnlyIndents, NativeOnly},
		{"vue", "injections", vueInjections, deflt}, // this one uses inherits html_tags (missing colon)
		{"tsx", "folds", tsxFolds, deflt},
	}

	for _, tc := range testCases {
		t.Run(tc.lang+"/"+tc.kind, func(t *testing.T) {
			opts := []byte{}
			if opt := tc.opt; opt > 0 {
				opts = append(opts, opt)
			}

			tc.exp = string(util.QueryLuaMatch2Match([]byte(tc.exp)))
			if act := GetQuery(tc.lang, tc.kind, opts...); string(act) != tc.exp {
				t.Fatalf("Expected\n\n%s\n\ngot\n\n%s", tc.exp, string(act))
			}
		})
	}
}

func TestInfo(t *testing.T) {
	act := Info("ada")
	exp := fmt.Sprintf(`ada, src: "https://github.com/briot/tree-sitter-ada@master", sha: %q`, act.Revision)

	if a := act.String(); a != exp {
		t.Fatalf("Expected %q got %q", exp, a)
	}
}

func TestLuaMatchPredicates(t *testing.T) {
	forEachFile(t, "*/*.scm", func(t *testing.T, content, _, lang, _ string) {
		t.Helper()

		verifyCount := strings.Count(content, "#lua-match? @") + strings.Count(content, "#not-lua-match? @")
		tokens := util.LuaMatchRx.FindAllSubmatch([]byte(content), -1)
		tokensLen := 0
		matches := [][]byte{}

		for _, tks := range tokens {
			tokensLen += len(tks) - 1
			matches = append(matches, tks[1:]...)
		}

		if verifyCount != tokensLen {
			t.Fatalf("Plain string search found %d occurrences of #(not-)lua-match? but regexp found %d: %v", verifyCount, tokensLen, tokens)
		}

		if tokensLen == 0 {
			return
		}

		for _, match := range matches {
			t.Run(lang+":"+string(match), func(t *testing.T) {
				t.Parallel()

				// TODO: just because it compiles it doesn't mean it captures the same thing as Lua.
				// Could be invalid regex logic, but valid regex syntax. It's a start though.
				out := util.LuaPatternToGoRegexp(match)
				if _, err := regexp.Compile(string(out)); err != nil {
					t.Fatalf("Cannot convert lua-match pattern %s (-> %s) for lang %q: %v", match, out, lang, err)
				}
			})
		}
	})
}

func forEachFile(t *testing.T, pat string, fn func(t *testing.T, act, pack, lang, silencer string)) {
	t.Helper()
	t.Parallel()

	files, err := filepath.Glob(pat)
	if err != nil {
		t.Fatal(err)
	}

	for _, fpath := range files {
		t.Run(fpath, func(t *testing.T) {
			t.Parallel()

			lang, pack, silencer := util.NormalizeLangPackName(filepath.Dir(fpath))

			fn(t, getContent(fpath), pack, lang, silencer)
		})
	}
}

func getContent(args ...string) string {
	file := filepath.Join(args...)

	out, err := os.ReadFile(file)
	if err == nil {
		return string(out)
	}

	return ""
}

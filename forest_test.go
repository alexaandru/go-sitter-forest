package forest

import (
	"context"
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/alexaandru/go-sitter-forest/internal/automation/util"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const langsCount = 375

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

	sitter "github.com/alexaandru/go-tree-sitter-bare"
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

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_%s())
	return sitter.NewLanguage(ptr)
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

	files, err := filepath.Glob("*/binding_test.go")
	if err != nil {
		t.Fatal(err)
	}

	for _, fpath := range files {
		t.Run(fpath, func(t *testing.T) {
			t.Parallel()

			f, err := parser.ParseFile(token.NewFileSet(), fpath, nil, parser.SkipObjectResolution)
			if err != nil {
				t.Fatal(err)
			}

			var (
				captureCode, captureExp, done bool
				code, exp                     string
			)

			ast.Inspect(f, func(n ast.Node) bool {
				switch x := n.(type) {
				case *ast.BasicLit:
					switch {
					case captureCode:
						code = x.Value
						captureCode = false
					case captureExp:
						exp = x.Value
						done = true
					}
				case *ast.Ident:
					switch x.Name {
					case "code":
						captureCode = true
					case "expected":
						captureExp = true
					}
				}

				return !done
			})

			lang := filepath.Dir(fpath)

			code, exp = stripCode(code), stripExp(exp)
			if exp == "IMPLEMENT ME" {
				exp = ""
			}

			if code == "" || exp == "" {
				t.Skip("Not implemented")
			}

			fn := GetLanguage(lang)
			if fn == nil {
				t.Skipf("Language %q does not have a function available", lang)
			}

			n, err := sitter.ParseCtx(context.Background(), []byte(code), fn())
			if err != nil {
				t.Fatal(err)
			}

			if act := n.String(); act != exp {
				t.Fatalf("Expected\n%s\n\ngot\n\n%s\n", exp, act)
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

func stripCode(s string) string {
	if len(s) < 2 {
		return s
	}

	s = s[1 : len(s)-1]

	return strings.ReplaceAll(s, `\\`, `\`)
}

func stripExp(s string) string {
	return strings.ReplaceAll(stripCode(s), `\"`, `"`)
}

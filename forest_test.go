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

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	langsCount = 348
	bindingTpl = `%s

package %s

//#include "parser.h"
//TSLanguage *tree_sitter_%s();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_%s())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
`
)

func TestBindingFilesAreAllUpToDate(t *testing.T) {
	forEachFile(t, "*/binding.go", func(t *testing.T, act, pack, lang string) {
		exp := fmt.Sprintf(bindingTpl, "//go:build !plugin", pack, lang, lang)

		switch lang {
		case "context":
			exp = strings.ReplaceAll(exp, `package context`, `package ConTeXt`)
		case "unison":
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-stringop-overflow
//#include "parser.h"`)
		case "cleancopy":
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-discarded-qualifiers -Wno-incompatible-pointer-types -w
//#include "parser.h"`)
		case "htmlaskama":
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-builtin-declaration-mismatch
//#include "parser.h"`)
		case "note":
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch
//#include "parser.h"`)
		case "ott":
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-stringop-overflow
//#include "parser.h"`)
		}

		if act != exp {
			t.Fatalf("Expected\n%s\n\ngot\n\n%s\n", exp, act)
		}
	})
}

func TestPluginFilesAreAllUpToDate(t *testing.T) {
	forEachFile(t, "*/plugin.go", func(t *testing.T, act, _, lang string) {
		exp := fmt.Sprintf(bindingTpl, "//go:build plugin", "main", lang, lang)
		if lang == "unison" {
			exp = strings.ReplaceAll(exp, `//#include "parser.h"`, `//#cgo CFLAGS: -Wno-stringop-overflow
//#include "parser.h"`)
		}

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

func TestInfo(t *testing.T) {
	act := Info("ada")
	exp := fmt.Sprintf(`ada, src: "https://github.com/briot/tree-sitter-ada@master", sha: "%s"`, act.Revision)

	if a := act.String(); a != exp {
		t.Fatalf("Expected %q got %q", exp, a)
	}
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

func forEachFile(t *testing.T, pat string, fn func(t *testing.T, act, pack, lang string)) {
	t.Helper()
	t.Parallel()

	files, err := filepath.Glob(pat)
	if err != nil {
		t.Fatal(err)
	}

	for _, fpath := range files {
		t.Run(fpath, func(t *testing.T) {
			t.Parallel()

			lang := filepath.Dir(fpath)

			actb, err := os.ReadFile(fpath)
			if err != nil {
				t.Fatal(err)
			}

			act := string(actb)
			pack := lang

			switch lang {
			case "go":
				pack = "Go"
			case "func":
				pack = "FunC"
			}

			fn(t, act, pack, lang)
		})
	}
}

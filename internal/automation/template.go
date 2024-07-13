package main

import (
	"fmt"
	"path/filepath"
)

const (
	bindingTpl = `%s

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
	bindingTestTpl = `//go:build !plugin

package %s_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/%s"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), %s.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %%v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %%q got %%q", expected, act)
	}
}
`
)

var tplBindings = map[string]string{
	"binding.go":      bindingTpl,
	"binding_test.go": bindingTestTpl,
	"plugin.go":       bindingTpl,
}

// Creates a map between file paths to write to and corresponding content.
func mkBindingMap(lang string) (out map[string]string) {
	out = map[string]string{}
	for k, v := range tplBindings {
		pack, langOut, silencer, fpath := lang, lang, "", filepath.Join(lang, k)

		switch lang {
		case "go":
			pack = "Go"
		case "func":
			pack = "FunC"
		case "context":
			pack = "ConTeXt"
		case "cobol":
			langOut = "COBOL"
		case "dotenv":
			langOut = "env"
		case "unison":
			silencer = "//#cgo CFLAGS: -Wno-stringop-overflow"
		case "cleancopy":
			silencer = "//#cgo CFLAGS: -Wno-discarded-qualifiers -Wno-incompatible-pointer-types -w"
		case "htmlaskama":
			silencer = "//#cgo CFLAGS: -Wno-builtin-declaration-mismatch"
		case "note":
			silencer = "//#cgo CFLAGS: -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch"
		case "ott":
			silencer = "//#cgo CFLAGS: -Wno-stringop-overflow"
		}

		if silencer != "" {
			silencer = "\n" + silencer
		}

		switch k {
		case "binding.go":
			out[fpath] = fmt.Sprintf(v, "//go:build !plugin", pack, silencer, langOut, langOut)
		case "binding_test.go":
			out[fpath] = fmt.Sprintf(v, pack, pack, pack)
		case "plugin.go":
			out[fpath] = fmt.Sprintf(v, "//go:build plugin", "main", silencer, langOut, langOut)
		}
	}

	return
}

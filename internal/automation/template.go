package main

import (
	"fmt"
	"path/filepath"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"github.com/alexaandru/go-sitter-forest/internal/automation/util"
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
)

var tplBindings = map[string]string{
	"binding.go": bindingTpl,
	"plugin.go":  bindingTpl,
}

// Creates a map between file paths to write to and corresponding content.
func mkBindingMap(gr *grammar.Grammar) (out map[string]string) {
	out = map[string]string{}
	langIn := gr.Language

	for k, v := range tplBindings {
		lang, pack, silencer := util.NormalizeLangPackName(gr)
		fpath := filepath.Join(langIn, k)

		switch k {
		case "binding.go":
			out[fpath] = fmt.Sprintf(v, "//go:build !plugin", pack, silencer, lang, lang)
		case "plugin.go":
			out[fpath] = fmt.Sprintf(v, "//go:build plugin", "main", silencer, lang, lang)
		}
	}

	return
}

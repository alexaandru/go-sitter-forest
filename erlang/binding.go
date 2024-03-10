//go:build !plugin

package erlang

//#include "parser.h"
//TSLanguage *tree_sitter_erlang();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_erlang())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}

//go:build !plugin

package janet_simple

//#include "parser.h"
//TSLanguage *tree_sitter_janet_simple();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_janet_simple())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}

//go:build !plugin

package vim

//#include "parser.h"
//TSLanguage *tree_sitter_vim();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_vim())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}

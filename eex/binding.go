package eex

//#include "parser.h"
//TSLanguage *tree_sitter_eex();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_eex())
	return sitter.NewLanguage(ptr)
}

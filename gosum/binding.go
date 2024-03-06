package gosum

//#include "parser.h"
//TSLanguage *tree_sitter_gosum();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_gosum())
	return sitter.NewLanguage(ptr)
}

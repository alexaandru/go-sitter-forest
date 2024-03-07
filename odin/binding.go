package odin

//#include "parser.h"
//TSLanguage *tree_sitter_odin();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_odin())
	return sitter.NewLanguage(ptr)
}

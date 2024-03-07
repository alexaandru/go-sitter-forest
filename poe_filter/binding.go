package poe_filter

//#include "parser.h"
//TSLanguage *tree_sitter_poe_filter();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_poe_filter())
	return sitter.NewLanguage(ptr)
}

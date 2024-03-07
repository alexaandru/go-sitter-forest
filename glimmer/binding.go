package glimmer

//#include "parser.h"
//TSLanguage *tree_sitter_glimmer();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_glimmer())
	return sitter.NewLanguage(ptr)
}

package janet_simple

//#include "parser.h"
//TSLanguage *tree_sitter_janet_simple();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_janet_simple())
	return sitter.NewLanguage(ptr)
}

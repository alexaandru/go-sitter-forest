package make

//#include "parser.h"
//TSLanguage *tree_sitter_make();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_make())
	return sitter.NewLanguage(ptr)
}

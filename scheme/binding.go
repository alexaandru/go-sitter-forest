package scheme

//#include "parser.h"
//TSLanguage *tree_sitter_scheme();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_scheme())
	return sitter.NewLanguage(ptr)
}

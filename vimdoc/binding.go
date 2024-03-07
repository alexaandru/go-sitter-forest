package vimdoc

//#include "parser.h"
//TSLanguage *tree_sitter_vimdoc();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_vimdoc())
	return sitter.NewLanguage(ptr)
}

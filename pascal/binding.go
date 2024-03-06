package pascal

//#include "parser.h"
//TSLanguage *tree_sitter_pascal();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_pascal())
	return sitter.NewLanguage(ptr)
}

package helm

//#include "parser.h"
//TSLanguage *tree_sitter_helm();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_helm())
	return sitter.NewLanguage(ptr)
}

package hocon

//#include "parser.h"
//TSLanguage *tree_sitter_hocon();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_hocon())
	return sitter.NewLanguage(ptr)
}

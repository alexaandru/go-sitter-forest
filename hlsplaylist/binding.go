package hlsplaylist

//#include "parser.h"
//TSLanguage *tree_sitter_hlsplaylist();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_hlsplaylist())
	return sitter.NewLanguage(ptr)
}

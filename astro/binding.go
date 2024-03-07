package astro

//#include "parser.h"
//TSLanguage *tree_sitter_astro();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_astro())
	return sitter.NewLanguage(ptr)
}

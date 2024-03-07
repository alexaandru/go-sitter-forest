package nix

//#include "parser.h"
//TSLanguage *tree_sitter_nix();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_nix())
	return sitter.NewLanguage(ptr)
}

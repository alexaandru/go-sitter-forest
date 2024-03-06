package ocaml_interface

//#include "parser.h"
//TSLanguage *tree_sitter_ocaml_interface();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_ocaml_interface())
	return sitter.NewLanguage(ptr)
}

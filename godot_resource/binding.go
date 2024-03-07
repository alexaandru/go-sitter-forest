package godot_resource

//#include "parser.h"
//TSLanguage *tree_sitter_godot_resource();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_godot_resource())
	return sitter.NewLanguage(ptr)
}

//go:build !plugin

package ssh_client_config

//#include "parser.h"
//TSLanguage *tree_sitter_ssh_client_config();
import "C"

import (
	_ "embed"
	"unsafe"

	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

//go:embed grammar.json
var info []byte

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_ssh_client_config())
	return sitter.NewLanguage(ptr)
}

func Info() string {
	return string(info)
}
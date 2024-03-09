//go:build !plugin

package haskell_persistent

//#include "parser.h"
//TSLanguage *tree_sitter_haskell_persistent();
import "C"

import (
	_ "embed"
	"encoding/json"
	"unsafe"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	sitter "github.com/smacker/go-tree-sitter"
)

//go:embed grammar.json
var info []byte

var gr *grammar.Grammar

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_haskell_persistent())
	return sitter.NewLanguage(ptr)
}

func Info() *grammar.Grammar {
	return gr
}

func init() {
	gr = &grammar.Grammar{}
	if err := json.Unmarshal(info, gr); err != nil {
		panic(err)
	}
}

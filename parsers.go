package parsers

import (
	sitter "github.com/smacker/go-tree-sitter"

	"github.com/alexaandru/go-tree-sitter-parsers/ada"
	"github.com/alexaandru/go-tree-sitter-parsers/bash"
	"github.com/alexaandru/go-tree-sitter-parsers/c"
	"github.com/alexaandru/go-tree-sitter-parsers/c_sharp"
	"github.com/alexaandru/go-tree-sitter-parsers/clojure"
	"github.com/alexaandru/go-tree-sitter-parsers/commonlisp"
	"github.com/alexaandru/go-tree-sitter-parsers/cpp"
	"github.com/alexaandru/go-tree-sitter-parsers/css"
	"github.com/alexaandru/go-tree-sitter-parsers/cue"
	"github.com/alexaandru/go-tree-sitter-parsers/diff"
	"github.com/alexaandru/go-tree-sitter-parsers/dockerfile"
	"github.com/alexaandru/go-tree-sitter-parsers/dot"
	"github.com/alexaandru/go-tree-sitter-parsers/elixir"
	"github.com/alexaandru/go-tree-sitter-parsers/elm"
	"github.com/alexaandru/go-tree-sitter-parsers/erlang"
	"github.com/alexaandru/go-tree-sitter-parsers/fennel"
	"github.com/alexaandru/go-tree-sitter-parsers/golang"
	"github.com/alexaandru/go-tree-sitter-parsers/gomod"
	"github.com/alexaandru/go-tree-sitter-parsers/gosum"
	"github.com/alexaandru/go-tree-sitter-parsers/gotmpl"
	"github.com/alexaandru/go-tree-sitter-parsers/gowork"
	"github.com/alexaandru/go-tree-sitter-parsers/haskell"
	"github.com/alexaandru/go-tree-sitter-parsers/hcl"
	"github.com/alexaandru/go-tree-sitter-parsers/html"
	"github.com/alexaandru/go-tree-sitter-parsers/java"
	"github.com/alexaandru/go-tree-sitter-parsers/javascript"
	"github.com/alexaandru/go-tree-sitter-parsers/json"
	"github.com/alexaandru/go-tree-sitter-parsers/kotlin"
	"github.com/alexaandru/go-tree-sitter-parsers/lua"
	"github.com/alexaandru/go-tree-sitter-parsers/make"
	"github.com/alexaandru/go-tree-sitter-parsers/ocaml"
	"github.com/alexaandru/go-tree-sitter-parsers/pascal"
	"github.com/alexaandru/go-tree-sitter-parsers/perl"
	"github.com/alexaandru/go-tree-sitter-parsers/php"
	"github.com/alexaandru/go-tree-sitter-parsers/proto"
	"github.com/alexaandru/go-tree-sitter-parsers/python"
	"github.com/alexaandru/go-tree-sitter-parsers/query"
	"github.com/alexaandru/go-tree-sitter-parsers/r"
	"github.com/alexaandru/go-tree-sitter-parsers/risor"
	"github.com/alexaandru/go-tree-sitter-parsers/ruby"
	"github.com/alexaandru/go-tree-sitter-parsers/rust"
	"github.com/alexaandru/go-tree-sitter-parsers/scala"
	"github.com/alexaandru/go-tree-sitter-parsers/sql"
	"github.com/alexaandru/go-tree-sitter-parsers/starlark"
	"github.com/alexaandru/go-tree-sitter-parsers/svelte"
	"github.com/alexaandru/go-tree-sitter-parsers/toml"
	"github.com/alexaandru/go-tree-sitter-parsers/typescript/tsx"
	"github.com/alexaandru/go-tree-sitter-parsers/typescript/typescript"
	"github.com/alexaandru/go-tree-sitter-parsers/vue"
	"github.com/alexaandru/go-tree-sitter-parsers/xml/dtd"
	"github.com/alexaandru/go-tree-sitter-parsers/xml/xml"
	"github.com/alexaandru/go-tree-sitter-parsers/yaml"
	"github.com/alexaandru/go-tree-sitter-parsers/zig"
)

var langNameFuncs = map[string]func() *sitter.Language{
	"ada":        ada.GetLanguage,
	"bash":       bash.GetLanguage,
	"c":          c.GetLanguage,
	"clojure":    clojure.GetLanguage,
	"c_sharp":    c_sharp.GetLanguage,
	"cpp":        cpp.GetLanguage,
	"css":        css.GetLanguage,
	"cue":        cue.GetLanguage,
	"diff":       diff.GetLanguage,
	"dockerfile": dockerfile.GetLanguage,
	"dot":        dot.GetLanguage,
	"dtd":        dtd.GetLanguage,
	"elixir":     elixir.GetLanguage,
	"elm":        elm.GetLanguage,
	"erlang":     erlang.GetLanguage,
	"fennel":     fennel.GetLanguage,
	"go":         golang.GetLanguage,
	"gomod":      gomod.GetLanguage,
	"gosum":      gosum.GetLanguage,
	"gotmpl":     gotmpl.GetLanguage,
	"gowork":     gowork.GetLanguage,
	"haskell":    haskell.GetLanguage,
	"hcl":        hcl.GetLanguage,
	"html":       html.GetLanguage,
	"java":       java.GetLanguage,
	"javascript": javascript.GetLanguage,
	"json":       json.GetLanguage,
	"kotlin":     kotlin.GetLanguage,
	"commonlisp": commonlisp.GetLanguage,
	"lua":        lua.GetLanguage,
	"make":       make.GetLanguage,
	"ocaml":      ocaml.GetLanguage,
	"pascal":     pascal.GetLanguage,
	"perl":       perl.GetLanguage,
	"php":        php.GetLanguage,
	"proto":      proto.GetLanguage,
	"python":     python.GetLanguage,
	"query":      query.GetLanguage,
	"r":          r.GetLanguage,
	"risor":      risor.GetLanguage,
	"ruby":       ruby.GetLanguage,
	"rust":       rust.GetLanguage,
	"scala":      scala.GetLanguage,
	"sql":        sql.GetLanguage,
	"starlark":   starlark.GetLanguage,
	"svelte":     svelte.GetLanguage,
	"toml":       toml.GetLanguage,
	"tsx":        tsx.GetLanguage,
	"typescript": typescript.GetLanguage,
	"vue":        vue.GetLanguage,
	"xml":        xml.GetLanguage,
	"yaml":       yaml.GetLanguage,
	"zig":        zig.GetLanguage,
}

var langNames []string

// Lang returns the corresponding TS language function for name.
// Language name must follow the TS convention (lowercase, letters only).
func Lang(name string) func() *sitter.Language {
	return langNameFuncs[name]
}

func SupportedLangs() []string {
	if langNames != nil {
		return langNames
	}

	for k := range langNameFuncs {
		langNames = append(langNames, k)
	}

	return langNames
}

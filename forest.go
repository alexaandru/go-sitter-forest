package forest

import (
	_ "embed"
	enc_json "encoding/json"
	"slices"

	sitter "github.com/alexaandru/go-tree-sitter-bare"

	"github.com/alexaandru/go-sitter-forest/abap"
	"github.com/alexaandru/go-sitter-forest/ada"
	"github.com/alexaandru/go-sitter-forest/agda"
	"github.com/alexaandru/go-sitter-forest/aiken"
	"github.com/alexaandru/go-sitter-forest/angular"
	"github.com/alexaandru/go-sitter-forest/apex"
	"github.com/alexaandru/go-sitter-forest/arduino"
	"github.com/alexaandru/go-sitter-forest/asm"
	"github.com/alexaandru/go-sitter-forest/astro"
	"github.com/alexaandru/go-sitter-forest/august"
	"github.com/alexaandru/go-sitter-forest/authzed"
	"github.com/alexaandru/go-sitter-forest/awk"
	"github.com/alexaandru/go-sitter-forest/bash"
	"github.com/alexaandru/go-sitter-forest/bass"
	"github.com/alexaandru/go-sitter-forest/beancount"
	"github.com/alexaandru/go-sitter-forest/bend"
	"github.com/alexaandru/go-sitter-forest/bibtex"
	"github.com/alexaandru/go-sitter-forest/bicep"
	"github.com/alexaandru/go-sitter-forest/bitbake"
	"github.com/alexaandru/go-sitter-forest/blueprint"
	"github.com/alexaandru/go-sitter-forest/bp"
	"github.com/alexaandru/go-sitter-forest/c"
	"github.com/alexaandru/go-sitter-forest/c_sharp"
	"github.com/alexaandru/go-sitter-forest/cairo"
	"github.com/alexaandru/go-sitter-forest/calc"
	"github.com/alexaandru/go-sitter-forest/capnp"
	"github.com/alexaandru/go-sitter-forest/cel"
	"github.com/alexaandru/go-sitter-forest/chatito"
	"github.com/alexaandru/go-sitter-forest/clojure"
	"github.com/alexaandru/go-sitter-forest/cmake"
	"github.com/alexaandru/go-sitter-forest/comment"
	"github.com/alexaandru/go-sitter-forest/commonlisp"
	"github.com/alexaandru/go-sitter-forest/cooklang"
	"github.com/alexaandru/go-sitter-forest/corn"
	"github.com/alexaandru/go-sitter-forest/cpon"
	"github.com/alexaandru/go-sitter-forest/cpp"
	"github.com/alexaandru/go-sitter-forest/crystal"
	"github.com/alexaandru/go-sitter-forest/css"
	"github.com/alexaandru/go-sitter-forest/csv"
	"github.com/alexaandru/go-sitter-forest/cuda"
	"github.com/alexaandru/go-sitter-forest/cue"
	"github.com/alexaandru/go-sitter-forest/d"
	"github.com/alexaandru/go-sitter-forest/dart"
	"github.com/alexaandru/go-sitter-forest/devicetree"
	"github.com/alexaandru/go-sitter-forest/dhall"
	"github.com/alexaandru/go-sitter-forest/diff"
	"github.com/alexaandru/go-sitter-forest/disassembly"
	"github.com/alexaandru/go-sitter-forest/djot"
	"github.com/alexaandru/go-sitter-forest/dockerfile"
	"github.com/alexaandru/go-sitter-forest/dot"
	"github.com/alexaandru/go-sitter-forest/doxygen"
	"github.com/alexaandru/go-sitter-forest/dtd"
	"github.com/alexaandru/go-sitter-forest/earthfile"
	"github.com/alexaandru/go-sitter-forest/ebnf"
	"github.com/alexaandru/go-sitter-forest/editorconfig"
	"github.com/alexaandru/go-sitter-forest/eds"
	"github.com/alexaandru/go-sitter-forest/eex"
	"github.com/alexaandru/go-sitter-forest/elixir"
	"github.com/alexaandru/go-sitter-forest/elm"
	"github.com/alexaandru/go-sitter-forest/elsa"
	"github.com/alexaandru/go-sitter-forest/elvish"
	"github.com/alexaandru/go-sitter-forest/embedded_template"
	"github.com/alexaandru/go-sitter-forest/erlang"
	"github.com/alexaandru/go-sitter-forest/facility"
	"github.com/alexaandru/go-sitter-forest/faust"
	"github.com/alexaandru/go-sitter-forest/fennel"
	"github.com/alexaandru/go-sitter-forest/fidl"
	"github.com/alexaandru/go-sitter-forest/firrtl"
	"github.com/alexaandru/go-sitter-forest/fish"
	"github.com/alexaandru/go-sitter-forest/foam"
	"github.com/alexaandru/go-sitter-forest/forth"
	"github.com/alexaandru/go-sitter-forest/fortran"
	"github.com/alexaandru/go-sitter-forest/fsh"
	FunC "github.com/alexaandru/go-sitter-forest/func"
	"github.com/alexaandru/go-sitter-forest/fusion"
	"github.com/alexaandru/go-sitter-forest/gdscript"
	"github.com/alexaandru/go-sitter-forest/gdshader"
	"github.com/alexaandru/go-sitter-forest/git_config"
	"github.com/alexaandru/go-sitter-forest/git_rebase"
	"github.com/alexaandru/go-sitter-forest/gitattributes"
	"github.com/alexaandru/go-sitter-forest/gitcommit"
	"github.com/alexaandru/go-sitter-forest/gitignore"
	"github.com/alexaandru/go-sitter-forest/gleam"
	"github.com/alexaandru/go-sitter-forest/glimmer"
	"github.com/alexaandru/go-sitter-forest/glsl"
	"github.com/alexaandru/go-sitter-forest/gn"
	"github.com/alexaandru/go-sitter-forest/gnuplot"
	Go "github.com/alexaandru/go-sitter-forest/go"
	"github.com/alexaandru/go-sitter-forest/goctl"
	"github.com/alexaandru/go-sitter-forest/godot_resource"
	"github.com/alexaandru/go-sitter-forest/gomod"
	"github.com/alexaandru/go-sitter-forest/gosum"
	"github.com/alexaandru/go-sitter-forest/gotmpl"
	"github.com/alexaandru/go-sitter-forest/gowork"
	"github.com/alexaandru/go-sitter-forest/gpg"
	"github.com/alexaandru/go-sitter-forest/graphql"
	"github.com/alexaandru/go-sitter-forest/groovy"
	"github.com/alexaandru/go-sitter-forest/gstlaunch"
	"github.com/alexaandru/go-sitter-forest/hack"
	"github.com/alexaandru/go-sitter-forest/hare"
	"github.com/alexaandru/go-sitter-forest/haskell"
	"github.com/alexaandru/go-sitter-forest/haskell_persistent"
	"github.com/alexaandru/go-sitter-forest/hcl"
	"github.com/alexaandru/go-sitter-forest/heex"
	"github.com/alexaandru/go-sitter-forest/helm"
	"github.com/alexaandru/go-sitter-forest/hjson"
	"github.com/alexaandru/go-sitter-forest/hlsl"
	"github.com/alexaandru/go-sitter-forest/hlsplaylist"
	"github.com/alexaandru/go-sitter-forest/hocon"
	"github.com/alexaandru/go-sitter-forest/hoon"
	"github.com/alexaandru/go-sitter-forest/html"
	"github.com/alexaandru/go-sitter-forest/htmldjango"
	"github.com/alexaandru/go-sitter-forest/http"
	"github.com/alexaandru/go-sitter-forest/hurl"
	"github.com/alexaandru/go-sitter-forest/hyprlang"
	"github.com/alexaandru/go-sitter-forest/idl"
	"github.com/alexaandru/go-sitter-forest/ini"
	"github.com/alexaandru/go-sitter-forest/inko"
	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"github.com/alexaandru/go-sitter-forest/ispc"
	"github.com/alexaandru/go-sitter-forest/janet_simple"
	"github.com/alexaandru/go-sitter-forest/java"
	"github.com/alexaandru/go-sitter-forest/javascript"
	"github.com/alexaandru/go-sitter-forest/jq"
	"github.com/alexaandru/go-sitter-forest/jsdoc"
	"github.com/alexaandru/go-sitter-forest/json"
	"github.com/alexaandru/go-sitter-forest/json5"
	"github.com/alexaandru/go-sitter-forest/jsonc"
	"github.com/alexaandru/go-sitter-forest/jsonnet"
	"github.com/alexaandru/go-sitter-forest/julia"
	"github.com/alexaandru/go-sitter-forest/just"
	"github.com/alexaandru/go-sitter-forest/kconfig"
	"github.com/alexaandru/go-sitter-forest/kdl"
	"github.com/alexaandru/go-sitter-forest/kotlin"
	"github.com/alexaandru/go-sitter-forest/koto"
	"github.com/alexaandru/go-sitter-forest/kusto"
	"github.com/alexaandru/go-sitter-forest/lalrpop"
	"github.com/alexaandru/go-sitter-forest/latex"
	"github.com/alexaandru/go-sitter-forest/ledger"
	"github.com/alexaandru/go-sitter-forest/leo"
	"github.com/alexaandru/go-sitter-forest/linkerscript"
	"github.com/alexaandru/go-sitter-forest/liquid"
	"github.com/alexaandru/go-sitter-forest/liquidsoap"
	"github.com/alexaandru/go-sitter-forest/llvm"
	"github.com/alexaandru/go-sitter-forest/lua"
	"github.com/alexaandru/go-sitter-forest/luadoc"
	"github.com/alexaandru/go-sitter-forest/luap"
	"github.com/alexaandru/go-sitter-forest/luau"
	"github.com/alexaandru/go-sitter-forest/m68k"
	"github.com/alexaandru/go-sitter-forest/make"
	"github.com/alexaandru/go-sitter-forest/markdown"
	"github.com/alexaandru/go-sitter-forest/markdown_inline"
	"github.com/alexaandru/go-sitter-forest/matlab"
	"github.com/alexaandru/go-sitter-forest/menhir"
	"github.com/alexaandru/go-sitter-forest/mermaid"
	"github.com/alexaandru/go-sitter-forest/meson"
	"github.com/alexaandru/go-sitter-forest/mlir"
	"github.com/alexaandru/go-sitter-forest/muttrc"
	"github.com/alexaandru/go-sitter-forest/nasm"
	"github.com/alexaandru/go-sitter-forest/nginx"
	"github.com/alexaandru/go-sitter-forest/nickel"
	"github.com/alexaandru/go-sitter-forest/nim"
	"github.com/alexaandru/go-sitter-forest/nim_format_string"
	"github.com/alexaandru/go-sitter-forest/ninja"
	"github.com/alexaandru/go-sitter-forest/nix"
	"github.com/alexaandru/go-sitter-forest/norg"
	"github.com/alexaandru/go-sitter-forest/nqc"
	"github.com/alexaandru/go-sitter-forest/objc"
	"github.com/alexaandru/go-sitter-forest/objdump"
	"github.com/alexaandru/go-sitter-forest/ocaml"
	"github.com/alexaandru/go-sitter-forest/ocaml_interface"
	"github.com/alexaandru/go-sitter-forest/ocamllex"
	"github.com/alexaandru/go-sitter-forest/odin"
	"github.com/alexaandru/go-sitter-forest/org"
	"github.com/alexaandru/go-sitter-forest/pascal"
	"github.com/alexaandru/go-sitter-forest/passwd"
	"github.com/alexaandru/go-sitter-forest/pem"
	"github.com/alexaandru/go-sitter-forest/perl"
	"github.com/alexaandru/go-sitter-forest/php"
	"github.com/alexaandru/go-sitter-forest/php_only"
	"github.com/alexaandru/go-sitter-forest/phpdoc"
	"github.com/alexaandru/go-sitter-forest/pioasm"
	"github.com/alexaandru/go-sitter-forest/po"
	"github.com/alexaandru/go-sitter-forest/pod"
	"github.com/alexaandru/go-sitter-forest/poe_filter"
	"github.com/alexaandru/go-sitter-forest/pony"
	"github.com/alexaandru/go-sitter-forest/printf"
	"github.com/alexaandru/go-sitter-forest/prisma"
	"github.com/alexaandru/go-sitter-forest/problog"
	"github.com/alexaandru/go-sitter-forest/prolog"
	"github.com/alexaandru/go-sitter-forest/promql"
	"github.com/alexaandru/go-sitter-forest/properties"
	"github.com/alexaandru/go-sitter-forest/proto"
	"github.com/alexaandru/go-sitter-forest/prql"
	"github.com/alexaandru/go-sitter-forest/psv"
	"github.com/alexaandru/go-sitter-forest/pug"
	"github.com/alexaandru/go-sitter-forest/puppet"
	"github.com/alexaandru/go-sitter-forest/purescript"
	"github.com/alexaandru/go-sitter-forest/pymanifest"
	"github.com/alexaandru/go-sitter-forest/python"
	"github.com/alexaandru/go-sitter-forest/ql"
	"github.com/alexaandru/go-sitter-forest/qmldir"
	"github.com/alexaandru/go-sitter-forest/qmljs"
	"github.com/alexaandru/go-sitter-forest/query"
	"github.com/alexaandru/go-sitter-forest/r"
	"github.com/alexaandru/go-sitter-forest/racket"
	"github.com/alexaandru/go-sitter-forest/ralph"
	"github.com/alexaandru/go-sitter-forest/rasi"
	"github.com/alexaandru/go-sitter-forest/rbs"
	"github.com/alexaandru/go-sitter-forest/re2c"
	"github.com/alexaandru/go-sitter-forest/readline"
	"github.com/alexaandru/go-sitter-forest/regex"
	"github.com/alexaandru/go-sitter-forest/rego"
	"github.com/alexaandru/go-sitter-forest/requirements"
	"github.com/alexaandru/go-sitter-forest/risor"
	"github.com/alexaandru/go-sitter-forest/rnoweb"
	"github.com/alexaandru/go-sitter-forest/robot"
	"github.com/alexaandru/go-sitter-forest/robots"
	"github.com/alexaandru/go-sitter-forest/roc"
	"github.com/alexaandru/go-sitter-forest/ron"
	"github.com/alexaandru/go-sitter-forest/ruby"
	"github.com/alexaandru/go-sitter-forest/rust"
	"github.com/alexaandru/go-sitter-forest/scala"
	"github.com/alexaandru/go-sitter-forest/scfg"
	"github.com/alexaandru/go-sitter-forest/scheme"
	"github.com/alexaandru/go-sitter-forest/scss"
	"github.com/alexaandru/go-sitter-forest/slang"
	"github.com/alexaandru/go-sitter-forest/slint"
	"github.com/alexaandru/go-sitter-forest/smali"
	"github.com/alexaandru/go-sitter-forest/smithy"
	"github.com/alexaandru/go-sitter-forest/snakemake"
	"github.com/alexaandru/go-sitter-forest/solidity"
	"github.com/alexaandru/go-sitter-forest/soql"
	"github.com/alexaandru/go-sitter-forest/sosl"
	"github.com/alexaandru/go-sitter-forest/sourcepawn"
	"github.com/alexaandru/go-sitter-forest/sparql"
	"github.com/alexaandru/go-sitter-forest/sql"
	"github.com/alexaandru/go-sitter-forest/sqlite"
	"github.com/alexaandru/go-sitter-forest/squirrel"
	"github.com/alexaandru/go-sitter-forest/ssh_config"
	"github.com/alexaandru/go-sitter-forest/starlark"
	"github.com/alexaandru/go-sitter-forest/strace"
	"github.com/alexaandru/go-sitter-forest/styled"
	"github.com/alexaandru/go-sitter-forest/supercollider"
	"github.com/alexaandru/go-sitter-forest/surface"
	"github.com/alexaandru/go-sitter-forest/svelte"
	"github.com/alexaandru/go-sitter-forest/swift"
	"github.com/alexaandru/go-sitter-forest/sxhkdrc"
	"github.com/alexaandru/go-sitter-forest/systemtap"
	"github.com/alexaandru/go-sitter-forest/systemverilog"
	"github.com/alexaandru/go-sitter-forest/t32"
	"github.com/alexaandru/go-sitter-forest/tablegen"
	"github.com/alexaandru/go-sitter-forest/tact"
	"github.com/alexaandru/go-sitter-forest/tcl"
	"github.com/alexaandru/go-sitter-forest/teal"
	"github.com/alexaandru/go-sitter-forest/templ"
	"github.com/alexaandru/go-sitter-forest/textproto"
	"github.com/alexaandru/go-sitter-forest/thrift"
	"github.com/alexaandru/go-sitter-forest/tiger"
	"github.com/alexaandru/go-sitter-forest/tlaplus"
	"github.com/alexaandru/go-sitter-forest/tmux"
	"github.com/alexaandru/go-sitter-forest/todotxt"
	"github.com/alexaandru/go-sitter-forest/toml"
	"github.com/alexaandru/go-sitter-forest/tsv"
	"github.com/alexaandru/go-sitter-forest/tsx"
	"github.com/alexaandru/go-sitter-forest/turtle"
	"github.com/alexaandru/go-sitter-forest/twig"
	"github.com/alexaandru/go-sitter-forest/typescript"
	"github.com/alexaandru/go-sitter-forest/typespec"
	"github.com/alexaandru/go-sitter-forest/typoscript"
	"github.com/alexaandru/go-sitter-forest/typst"
	"github.com/alexaandru/go-sitter-forest/udev"
	"github.com/alexaandru/go-sitter-forest/ungrammar"
	"github.com/alexaandru/go-sitter-forest/unison"
	"github.com/alexaandru/go-sitter-forest/usd"
	"github.com/alexaandru/go-sitter-forest/uxntal"
	"github.com/alexaandru/go-sitter-forest/v"
	"github.com/alexaandru/go-sitter-forest/vala"
	"github.com/alexaandru/go-sitter-forest/vento"
	"github.com/alexaandru/go-sitter-forest/verilog"
	"github.com/alexaandru/go-sitter-forest/vhs"
	"github.com/alexaandru/go-sitter-forest/vim"
	"github.com/alexaandru/go-sitter-forest/vimdoc"
	"github.com/alexaandru/go-sitter-forest/vue"
	"github.com/alexaandru/go-sitter-forest/wgsl"
	"github.com/alexaandru/go-sitter-forest/wgsl_bevy"
	"github.com/alexaandru/go-sitter-forest/wing"
	"github.com/alexaandru/go-sitter-forest/wit"
	"github.com/alexaandru/go-sitter-forest/xcompose"
	"github.com/alexaandru/go-sitter-forest/xml"
	"github.com/alexaandru/go-sitter-forest/yaml"
	"github.com/alexaandru/go-sitter-forest/yang"
	"github.com/alexaandru/go-sitter-forest/yuck"
	"github.com/alexaandru/go-sitter-forest/zathurarc"
	"github.com/alexaandru/go-sitter-forest/zig"
)

//go:embed grammars.json
var info []byte

var langNameFuncs = map[string]func() *sitter.Language{
	"abap":               abap.GetLanguage,
	"ada":                ada.GetLanguage,
	"agda":               agda.GetLanguage,
	"aiken":              aiken.GetLanguage,
	"angular":            angular.GetLanguage,
	"apex":               apex.GetLanguage,
	"arduino":            arduino.GetLanguage,
	"asm":                asm.GetLanguage,
	"astro":              astro.GetLanguage,
	"august":             august.GetLanguage,
	"authzed":            authzed.GetLanguage,
	"awk":                awk.GetLanguage,
	"bash":               bash.GetLanguage,
	"bass":               bass.GetLanguage,
	"beancount":          beancount.GetLanguage,
	"bend":               bend.GetLanguage,
	"bibtex":             bibtex.GetLanguage,
	"bicep":              bicep.GetLanguage,
	"bitbake":            bitbake.GetLanguage,
	"blueprint":          blueprint.GetLanguage,
	"bp":                 bp.GetLanguage,
	"c":                  c.GetLanguage,
	"c_sharp":            c_sharp.GetLanguage,
	"cairo":              cairo.GetLanguage,
	"calc":               calc.GetLanguage,
	"capnp":              capnp.GetLanguage,
	"cel":                cel.GetLanguage,
	"chatito":            chatito.GetLanguage,
	"clojure":            clojure.GetLanguage,
	"cmake":              cmake.GetLanguage,
	"comment":            comment.GetLanguage,
	"commonlisp":         commonlisp.GetLanguage,
	"cooklang":           cooklang.GetLanguage,
	"corn":               corn.GetLanguage,
	"cpon":               cpon.GetLanguage,
	"cpp":                cpp.GetLanguage,
	"crystal":            crystal.GetLanguage,
	"css":                css.GetLanguage,
	"csv":                csv.GetLanguage,
	"cuda":               cuda.GetLanguage,
	"cue":                cue.GetLanguage,
	"d":                  d.GetLanguage,
	"dart":               dart.GetLanguage,
	"devicetree":         devicetree.GetLanguage,
	"dhall":              dhall.GetLanguage,
	"diff":               diff.GetLanguage,
	"disassembly":        disassembly.GetLanguage,
	"djot":               djot.GetLanguage,
	"dockerfile":         dockerfile.GetLanguage,
	"dot":                dot.GetLanguage,
	"doxygen":            doxygen.GetLanguage,
	"dtd":                dtd.GetLanguage,
	"earthfile":          earthfile.GetLanguage,
	"ebnf":               ebnf.GetLanguage,
	"editorconfig":       editorconfig.GetLanguage,
	"eds":                eds.GetLanguage,
	"eex":                eex.GetLanguage,
	"elixir":             elixir.GetLanguage,
	"elm":                elm.GetLanguage,
	"elsa":               elsa.GetLanguage,
	"elvish":             elvish.GetLanguage,
	"embedded_template":  embedded_template.GetLanguage,
	"erlang":             erlang.GetLanguage,
	"facility":           facility.GetLanguage,
	"faust":              faust.GetLanguage,
	"fennel":             fennel.GetLanguage,
	"fidl":               fidl.GetLanguage,
	"firrtl":             firrtl.GetLanguage,
	"fish":               fish.GetLanguage,
	"foam":               foam.GetLanguage,
	"forth":              forth.GetLanguage,
	"fortran":            fortran.GetLanguage,
	"fsh":                fsh.GetLanguage,
	"func":               FunC.GetLanguage,
	"fusion":             fusion.GetLanguage,
	"gdscript":           gdscript.GetLanguage,
	"gdshader":           gdshader.GetLanguage,
	"git_config":         git_config.GetLanguage,
	"git_rebase":         git_rebase.GetLanguage,
	"gitattributes":      gitattributes.GetLanguage,
	"gitcommit":          gitcommit.GetLanguage,
	"gitignore":          gitignore.GetLanguage,
	"gleam":              gleam.GetLanguage,
	"glimmer":            glimmer.GetLanguage,
	"glsl":               glsl.GetLanguage,
	"gn":                 gn.GetLanguage,
	"gnuplot":            gnuplot.GetLanguage,
	"go":                 Go.GetLanguage,
	"goctl":              goctl.GetLanguage,
	"godot_resource":     godot_resource.GetLanguage,
	"gomod":              gomod.GetLanguage,
	"gosum":              gosum.GetLanguage,
	"gotmpl":             gotmpl.GetLanguage,
	"gowork":             gowork.GetLanguage,
	"gpg":                gpg.GetLanguage,
	"graphql":            graphql.GetLanguage,
	"groovy":             groovy.GetLanguage,
	"gstlaunch":          gstlaunch.GetLanguage,
	"hack":               hack.GetLanguage,
	"hare":               hare.GetLanguage,
	"haskell":            haskell.GetLanguage,
	"haskell_persistent": haskell_persistent.GetLanguage,
	"hcl":                hcl.GetLanguage,
	"heex":               heex.GetLanguage,
	"helm":               helm.GetLanguage,
	"hjson":              hjson.GetLanguage,
	"hlsl":               hlsl.GetLanguage,
	"hlsplaylist":        hlsplaylist.GetLanguage,
	"hocon":              hocon.GetLanguage,
	"hoon":               hoon.GetLanguage,
	"html":               html.GetLanguage,
	"htmldjango":         htmldjango.GetLanguage,
	"http":               http.GetLanguage,
	"hurl":               hurl.GetLanguage,
	"hyprlang":           hyprlang.GetLanguage,
	"idl":                idl.GetLanguage,
	"ini":                ini.GetLanguage,
	"inko":               inko.GetLanguage,
	"ispc":               ispc.GetLanguage,
	"janet_simple":       janet_simple.GetLanguage,
	"java":               java.GetLanguage,
	"javascript":         javascript.GetLanguage,
	"jq":                 jq.GetLanguage,
	"jsdoc":              jsdoc.GetLanguage,
	"json":               json.GetLanguage,
	"json5":              json5.GetLanguage,
	"jsonc":              jsonc.GetLanguage,
	"jsonnet":            jsonnet.GetLanguage,
	"julia":              julia.GetLanguage,
	"just":               just.GetLanguage,
	"kconfig":            kconfig.GetLanguage,
	"kdl":                kdl.GetLanguage,
	"kotlin":             kotlin.GetLanguage,
	"koto":               koto.GetLanguage,
	"kusto":              kusto.GetLanguage,
	"lalrpop":            lalrpop.GetLanguage,
	"latex":              latex.GetLanguage,
	"ledger":             ledger.GetLanguage,
	"leo":                leo.GetLanguage,
	"linkerscript":       linkerscript.GetLanguage,
	"liquid":             liquid.GetLanguage,
	"liquidsoap":         liquidsoap.GetLanguage,
	"llvm":               llvm.GetLanguage,
	"lua":                lua.GetLanguage,
	"luadoc":             luadoc.GetLanguage,
	"luap":               luap.GetLanguage,
	"luau":               luau.GetLanguage,
	"m68k":               m68k.GetLanguage,
	"make":               make.GetLanguage,
	"markdown":           markdown.GetLanguage,
	"markdown_inline":    markdown_inline.GetLanguage,
	"matlab":             matlab.GetLanguage,
	"menhir":             menhir.GetLanguage,
	"mermaid":            mermaid.GetLanguage,
	"meson":              meson.GetLanguage,
	"mlir":               mlir.GetLanguage,
	"muttrc":             muttrc.GetLanguage,
	"nasm":               nasm.GetLanguage,
	"nginx":              nginx.GetLanguage,
	"nickel":             nickel.GetLanguage,
	"nim":                nim.GetLanguage,
	"nim_format_string":  nim_format_string.GetLanguage,
	"ninja":              ninja.GetLanguage,
	"nix":                nix.GetLanguage,
	"norg":               norg.GetLanguage,
	"nqc":                nqc.GetLanguage,
	"objc":               objc.GetLanguage,
	"objdump":            objdump.GetLanguage,
	"ocaml":              ocaml.GetLanguage,
	"ocaml_interface":    ocaml_interface.GetLanguage,
	"ocamllex":           ocamllex.GetLanguage,
	"odin":               odin.GetLanguage,
	"org":                org.GetLanguage,
	"pascal":             pascal.GetLanguage,
	"passwd":             passwd.GetLanguage,
	"pem":                pem.GetLanguage,
	"perl":               perl.GetLanguage,
	"php":                php.GetLanguage,
	"php_only":           php_only.GetLanguage,
	"phpdoc":             phpdoc.GetLanguage,
	"pioasm":             pioasm.GetLanguage,
	"po":                 po.GetLanguage,
	"pod":                pod.GetLanguage,
	"poe_filter":         poe_filter.GetLanguage,
	"pony":               pony.GetLanguage,
	"printf":             printf.GetLanguage,
	"prisma":             prisma.GetLanguage,
	"problog":            problog.GetLanguage,
	"prolog":             prolog.GetLanguage,
	"promql":             promql.GetLanguage,
	"properties":         properties.GetLanguage,
	"proto":              proto.GetLanguage,
	"prql":               prql.GetLanguage,
	"psv":                psv.GetLanguage,
	"pug":                pug.GetLanguage,
	"puppet":             puppet.GetLanguage,
	"purescript":         purescript.GetLanguage,
	"pymanifest":         pymanifest.GetLanguage,
	"python":             python.GetLanguage,
	"ql":                 ql.GetLanguage,
	"qmldir":             qmldir.GetLanguage,
	"qmljs":              qmljs.GetLanguage,
	"query":              query.GetLanguage,
	"r":                  r.GetLanguage,
	"racket":             racket.GetLanguage,
	"ralph":              ralph.GetLanguage,
	"rasi":               rasi.GetLanguage,
	"rbs":                rbs.GetLanguage,
	"re2c":               re2c.GetLanguage,
	"readline":           readline.GetLanguage,
	"regex":              regex.GetLanguage,
	"rego":               rego.GetLanguage,
	"requirements":       requirements.GetLanguage,
	"risor":              risor.GetLanguage,
	"rnoweb":             rnoweb.GetLanguage,
	"robot":              robot.GetLanguage,
	"robots":             robots.GetLanguage,
	"roc":                roc.GetLanguage,
	"ron":                ron.GetLanguage,
	"ruby":               ruby.GetLanguage,
	"rust":               rust.GetLanguage,
	"scala":              scala.GetLanguage,
	"scfg":               scfg.GetLanguage,
	"scheme":             scheme.GetLanguage,
	"scss":               scss.GetLanguage,
	"slang":              slang.GetLanguage,
	"slint":              slint.GetLanguage,
	"smali":              smali.GetLanguage,
	"smithy":             smithy.GetLanguage,
	"snakemake":          snakemake.GetLanguage,
	"solidity":           solidity.GetLanguage,
	"soql":               soql.GetLanguage,
	"sosl":               sosl.GetLanguage,
	"sourcepawn":         sourcepawn.GetLanguage,
	"sparql":             sparql.GetLanguage,
	"sql":                sql.GetLanguage,
	"sqlite":             sqlite.GetLanguage,
	"squirrel":           squirrel.GetLanguage,
	"ssh_config":         ssh_config.GetLanguage,
	"starlark":           starlark.GetLanguage,
	"strace":             strace.GetLanguage,
	"styled":             styled.GetLanguage,
	"supercollider":      supercollider.GetLanguage,
	"surface":            surface.GetLanguage,
	"svelte":             svelte.GetLanguage,
	"swift":              swift.GetLanguage,
	"sxhkdrc":            sxhkdrc.GetLanguage,
	"systemtap":          systemtap.GetLanguage,
	"systemverilog":      systemverilog.GetLanguage,
	"t32":                t32.GetLanguage,
	"tablegen":           tablegen.GetLanguage,
	"tact":               tact.GetLanguage,
	"tcl":                tcl.GetLanguage,
	"teal":               teal.GetLanguage,
	"templ":              templ.GetLanguage,
	"textproto":          textproto.GetLanguage,
	"thrift":             thrift.GetLanguage,
	"tiger":              tiger.GetLanguage,
	"tlaplus":            tlaplus.GetLanguage,
	"tmux":               tmux.GetLanguage,
	"todotxt":            todotxt.GetLanguage,
	"toml":               toml.GetLanguage,
	"tsv":                tsv.GetLanguage,
	"tsx":                tsx.GetLanguage,
	"turtle":             turtle.GetLanguage,
	"twig":               twig.GetLanguage,
	"typescript":         typescript.GetLanguage,
	"typespec":           typespec.GetLanguage,
	"typoscript":         typoscript.GetLanguage,
	"typst":              typst.GetLanguage,
	"udev":               udev.GetLanguage,
	"ungrammar":          ungrammar.GetLanguage,
	"unison":             unison.GetLanguage,
	"usd":                usd.GetLanguage,
	"uxntal":             uxntal.GetLanguage,
	"v":                  v.GetLanguage,
	"vala":               vala.GetLanguage,
	"vento":              vento.GetLanguage,
	"verilog":            verilog.GetLanguage,
	"vhs":                vhs.GetLanguage,
	"vim":                vim.GetLanguage,
	"vimdoc":             vimdoc.GetLanguage,
	"vue":                vue.GetLanguage,
	"wgsl":               wgsl.GetLanguage,
	"wgsl_bevy":          wgsl_bevy.GetLanguage,
	"wing":               wing.GetLanguage,
	"wit":                wit.GetLanguage,
	"xcompose":           xcompose.GetLanguage,
	"xml":                xml.GetLanguage,
	"yaml":               yaml.GetLanguage,
	"yang":               yang.GetLanguage,
	"yuck":               yuck.GetLanguage,
	"zathurarc":          zathurarc.GetLanguage,
	"zig":                zig.GetLanguage,
}

var (
	langNames []string
	grammars  []*grammar.Grammar
)

// Lang returns the corresponding TS language function for name.
// Language name must follow the TS convention (lowercase, letters only).
func GetLanguage(lang string) func() *sitter.Language {
	return langNameFuncs[lang]
}

func SupportedLanguages() []string {
	if langNames != nil {
		return langNames
	}

	for k := range langNameFuncs {
		langNames = append(langNames, k)
	}

	return langNames
}

func Info(lang string) *grammar.Grammar {
	i := slices.IndexFunc(grammars, func(x *grammar.Grammar) bool {
		return x.Language == lang
	})

	if i < 0 {
		return nil
	}

	gr := grammars[i]

	if gr.SkipGenerate || gr.Pending {
		return nil
	}

	return gr
}

func init() {
	grammars = []*grammar.Grammar{}
	if err := enc_json.Unmarshal(info, &grammars); err != nil {
		panic(err)
	}
}

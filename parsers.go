package parsers

import (
	sitter "github.com/smacker/go-tree-sitter"

	"github.com/alexaandru/go-tree-sitter-parsers/ada"
	"github.com/alexaandru/go-tree-sitter-parsers/agda"
	"github.com/alexaandru/go-tree-sitter-parsers/apex"
	"github.com/alexaandru/go-tree-sitter-parsers/arduino"
	"github.com/alexaandru/go-tree-sitter-parsers/asm"
	"github.com/alexaandru/go-tree-sitter-parsers/astro"
	"github.com/alexaandru/go-tree-sitter-parsers/authzed"
	"github.com/alexaandru/go-tree-sitter-parsers/awk"
	"github.com/alexaandru/go-tree-sitter-parsers/bash"
	"github.com/alexaandru/go-tree-sitter-parsers/bass"
	//"github.com/alexaandru/go-tree-sitter-parsers/beancount"
	"github.com/alexaandru/go-tree-sitter-parsers/bibtex"
	"github.com/alexaandru/go-tree-sitter-parsers/bicep"
	"github.com/alexaandru/go-tree-sitter-parsers/bitbake"
	"github.com/alexaandru/go-tree-sitter-parsers/c"
	"github.com/alexaandru/go-tree-sitter-parsers/c_sharp"
	"github.com/alexaandru/go-tree-sitter-parsers/cairo"
	"github.com/alexaandru/go-tree-sitter-parsers/capnp"
	"github.com/alexaandru/go-tree-sitter-parsers/chatito"
	"github.com/alexaandru/go-tree-sitter-parsers/clojure"
	"github.com/alexaandru/go-tree-sitter-parsers/cmake"
	"github.com/alexaandru/go-tree-sitter-parsers/commonlisp"
	"github.com/alexaandru/go-tree-sitter-parsers/cooklang"
	"github.com/alexaandru/go-tree-sitter-parsers/corn"
	"github.com/alexaandru/go-tree-sitter-parsers/cpon"
	"github.com/alexaandru/go-tree-sitter-parsers/cpp"
	"github.com/alexaandru/go-tree-sitter-parsers/crystal"
	"github.com/alexaandru/go-tree-sitter-parsers/css"
	"github.com/alexaandru/go-tree-sitter-parsers/csv"
	"github.com/alexaandru/go-tree-sitter-parsers/cuda"
	"github.com/alexaandru/go-tree-sitter-parsers/cue"
	"github.com/alexaandru/go-tree-sitter-parsers/d"
	"github.com/alexaandru/go-tree-sitter-parsers/dart"
	"github.com/alexaandru/go-tree-sitter-parsers/devicetree"
	"github.com/alexaandru/go-tree-sitter-parsers/dhall"
	"github.com/alexaandru/go-tree-sitter-parsers/diff"
	"github.com/alexaandru/go-tree-sitter-parsers/disassembly"
	"github.com/alexaandru/go-tree-sitter-parsers/dockerfile"
	"github.com/alexaandru/go-tree-sitter-parsers/dot"
	"github.com/alexaandru/go-tree-sitter-parsers/doxygen"
	"github.com/alexaandru/go-tree-sitter-parsers/dtd"
	"github.com/alexaandru/go-tree-sitter-parsers/ebnf"
	"github.com/alexaandru/go-tree-sitter-parsers/eds"
	"github.com/alexaandru/go-tree-sitter-parsers/eex"
	"github.com/alexaandru/go-tree-sitter-parsers/elixir"
	"github.com/alexaandru/go-tree-sitter-parsers/elm"
	"github.com/alexaandru/go-tree-sitter-parsers/elsa"
	"github.com/alexaandru/go-tree-sitter-parsers/elvish"
	"github.com/alexaandru/go-tree-sitter-parsers/embedded_template"
	"github.com/alexaandru/go-tree-sitter-parsers/erlang"
	"github.com/alexaandru/go-tree-sitter-parsers/facility"
	"github.com/alexaandru/go-tree-sitter-parsers/faust"
	"github.com/alexaandru/go-tree-sitter-parsers/fennel"
	"github.com/alexaandru/go-tree-sitter-parsers/fidl"
	"github.com/alexaandru/go-tree-sitter-parsers/firrtl"
	"github.com/alexaandru/go-tree-sitter-parsers/fish"
	"github.com/alexaandru/go-tree-sitter-parsers/foam"
	"github.com/alexaandru/go-tree-sitter-parsers/forth"
	"github.com/alexaandru/go-tree-sitter-parsers/fortran"
	"github.com/alexaandru/go-tree-sitter-parsers/fsh"
	FunC "github.com/alexaandru/go-tree-sitter-parsers/func"
	"github.com/alexaandru/go-tree-sitter-parsers/gdscript"
	"github.com/alexaandru/go-tree-sitter-parsers/gdshader"
	"github.com/alexaandru/go-tree-sitter-parsers/git_config"
	"github.com/alexaandru/go-tree-sitter-parsers/git_rebase"
	"github.com/alexaandru/go-tree-sitter-parsers/gitattributes"
	"github.com/alexaandru/go-tree-sitter-parsers/gitcommit"
	"github.com/alexaandru/go-tree-sitter-parsers/gitignore"
	"github.com/alexaandru/go-tree-sitter-parsers/gleam"
	"github.com/alexaandru/go-tree-sitter-parsers/glimmer"
	"github.com/alexaandru/go-tree-sitter-parsers/glsl"
	"github.com/alexaandru/go-tree-sitter-parsers/gn"
	"github.com/alexaandru/go-tree-sitter-parsers/gnuplot"
	"github.com/alexaandru/go-tree-sitter-parsers/godot_resource"
	"github.com/alexaandru/go-tree-sitter-parsers/golang"
	"github.com/alexaandru/go-tree-sitter-parsers/gomod"
	"github.com/alexaandru/go-tree-sitter-parsers/gosum"
	"github.com/alexaandru/go-tree-sitter-parsers/gotmpl"
	"github.com/alexaandru/go-tree-sitter-parsers/gowork"
	"github.com/alexaandru/go-tree-sitter-parsers/gpg"
	"github.com/alexaandru/go-tree-sitter-parsers/graphql"
	"github.com/alexaandru/go-tree-sitter-parsers/gstlaunch"
	"github.com/alexaandru/go-tree-sitter-parsers/hack"
	"github.com/alexaandru/go-tree-sitter-parsers/hare"
	"github.com/alexaandru/go-tree-sitter-parsers/haskell"
	"github.com/alexaandru/go-tree-sitter-parsers/haskell_persistent"
	"github.com/alexaandru/go-tree-sitter-parsers/hcl"
	"github.com/alexaandru/go-tree-sitter-parsers/heex"
	"github.com/alexaandru/go-tree-sitter-parsers/helm"
	"github.com/alexaandru/go-tree-sitter-parsers/hjson"
	"github.com/alexaandru/go-tree-sitter-parsers/hlsl"
	"github.com/alexaandru/go-tree-sitter-parsers/hlsplaylist"
	"github.com/alexaandru/go-tree-sitter-parsers/hocon"
	"github.com/alexaandru/go-tree-sitter-parsers/hoon"
	"github.com/alexaandru/go-tree-sitter-parsers/html"
	"github.com/alexaandru/go-tree-sitter-parsers/htmldjango"
	"github.com/alexaandru/go-tree-sitter-parsers/http"
	"github.com/alexaandru/go-tree-sitter-parsers/hurl"
	"github.com/alexaandru/go-tree-sitter-parsers/hyprlang"
	"github.com/alexaandru/go-tree-sitter-parsers/ini"
	"github.com/alexaandru/go-tree-sitter-parsers/ispc"
	"github.com/alexaandru/go-tree-sitter-parsers/janet_simple"
	"github.com/alexaandru/go-tree-sitter-parsers/java"
	"github.com/alexaandru/go-tree-sitter-parsers/javascript"
	"github.com/alexaandru/go-tree-sitter-parsers/jq"
	"github.com/alexaandru/go-tree-sitter-parsers/jsdoc"
	"github.com/alexaandru/go-tree-sitter-parsers/json"
	"github.com/alexaandru/go-tree-sitter-parsers/json5"
	"github.com/alexaandru/go-tree-sitter-parsers/jsonnet"
	"github.com/alexaandru/go-tree-sitter-parsers/julia"
	"github.com/alexaandru/go-tree-sitter-parsers/kconfig"
	"github.com/alexaandru/go-tree-sitter-parsers/kdl"
	"github.com/alexaandru/go-tree-sitter-parsers/kotlin"
	"github.com/alexaandru/go-tree-sitter-parsers/kusto"
	"github.com/alexaandru/go-tree-sitter-parsers/lalrpop"
	"github.com/alexaandru/go-tree-sitter-parsers/ledger"
	"github.com/alexaandru/go-tree-sitter-parsers/leo"
	"github.com/alexaandru/go-tree-sitter-parsers/linkerscript"
	"github.com/alexaandru/go-tree-sitter-parsers/liquidsoap"
	"github.com/alexaandru/go-tree-sitter-parsers/llvm"
	"github.com/alexaandru/go-tree-sitter-parsers/lua"
	"github.com/alexaandru/go-tree-sitter-parsers/luadoc"
	"github.com/alexaandru/go-tree-sitter-parsers/luap"
	"github.com/alexaandru/go-tree-sitter-parsers/luau"
	"github.com/alexaandru/go-tree-sitter-parsers/m68k"
	"github.com/alexaandru/go-tree-sitter-parsers/make"
	"github.com/alexaandru/go-tree-sitter-parsers/markdown"
	"github.com/alexaandru/go-tree-sitter-parsers/markdown_inline"
	"github.com/alexaandru/go-tree-sitter-parsers/matlab"
	"github.com/alexaandru/go-tree-sitter-parsers/menhir"
	"github.com/alexaandru/go-tree-sitter-parsers/mermaid"
	"github.com/alexaandru/go-tree-sitter-parsers/meson"
	"github.com/alexaandru/go-tree-sitter-parsers/muttrc"
	"github.com/alexaandru/go-tree-sitter-parsers/nasm"
	"github.com/alexaandru/go-tree-sitter-parsers/nickel"
	"github.com/alexaandru/go-tree-sitter-parsers/nim"
	"github.com/alexaandru/go-tree-sitter-parsers/nim_format_string"
	"github.com/alexaandru/go-tree-sitter-parsers/ninja"
	"github.com/alexaandru/go-tree-sitter-parsers/nix"
	"github.com/alexaandru/go-tree-sitter-parsers/norg"
	"github.com/alexaandru/go-tree-sitter-parsers/nqc"
	"github.com/alexaandru/go-tree-sitter-parsers/objc"
	"github.com/alexaandru/go-tree-sitter-parsers/objdump"
	"github.com/alexaandru/go-tree-sitter-parsers/ocaml"
	"github.com/alexaandru/go-tree-sitter-parsers/ocaml_interface"
	"github.com/alexaandru/go-tree-sitter-parsers/ocamllex"
	"github.com/alexaandru/go-tree-sitter-parsers/odin"
	"github.com/alexaandru/go-tree-sitter-parsers/org"
	"github.com/alexaandru/go-tree-sitter-parsers/pascal"
	"github.com/alexaandru/go-tree-sitter-parsers/passwd"
	"github.com/alexaandru/go-tree-sitter-parsers/pem"
	"github.com/alexaandru/go-tree-sitter-parsers/perl"
	"github.com/alexaandru/go-tree-sitter-parsers/php"
	"github.com/alexaandru/go-tree-sitter-parsers/php_only"
	"github.com/alexaandru/go-tree-sitter-parsers/phpdoc"
	"github.com/alexaandru/go-tree-sitter-parsers/pioasm"
	"github.com/alexaandru/go-tree-sitter-parsers/po"
	"github.com/alexaandru/go-tree-sitter-parsers/poe_filter"
	"github.com/alexaandru/go-tree-sitter-parsers/pony"
	"github.com/alexaandru/go-tree-sitter-parsers/printf"
	"github.com/alexaandru/go-tree-sitter-parsers/prisma"
	"github.com/alexaandru/go-tree-sitter-parsers/promql"
	"github.com/alexaandru/go-tree-sitter-parsers/properties"
	"github.com/alexaandru/go-tree-sitter-parsers/proto"
	"github.com/alexaandru/go-tree-sitter-parsers/prql"
	"github.com/alexaandru/go-tree-sitter-parsers/psv"
	"github.com/alexaandru/go-tree-sitter-parsers/pug"
	"github.com/alexaandru/go-tree-sitter-parsers/puppet"
	"github.com/alexaandru/go-tree-sitter-parsers/purescript"
	"github.com/alexaandru/go-tree-sitter-parsers/pymanifest"
	"github.com/alexaandru/go-tree-sitter-parsers/python"
	"github.com/alexaandru/go-tree-sitter-parsers/ql"
	"github.com/alexaandru/go-tree-sitter-parsers/qmljs"
	"github.com/alexaandru/go-tree-sitter-parsers/query"
	"github.com/alexaandru/go-tree-sitter-parsers/r"
	"github.com/alexaandru/go-tree-sitter-parsers/racket"
	"github.com/alexaandru/go-tree-sitter-parsers/rasi"
	"github.com/alexaandru/go-tree-sitter-parsers/rbs"
	"github.com/alexaandru/go-tree-sitter-parsers/re2c"
	"github.com/alexaandru/go-tree-sitter-parsers/readline"
	"github.com/alexaandru/go-tree-sitter-parsers/regex"
	"github.com/alexaandru/go-tree-sitter-parsers/rego"
	"github.com/alexaandru/go-tree-sitter-parsers/requirements"
	"github.com/alexaandru/go-tree-sitter-parsers/risor"
	"github.com/alexaandru/go-tree-sitter-parsers/rnoweb"
	"github.com/alexaandru/go-tree-sitter-parsers/robot"
	"github.com/alexaandru/go-tree-sitter-parsers/ron"
	"github.com/alexaandru/go-tree-sitter-parsers/ruby"
	"github.com/alexaandru/go-tree-sitter-parsers/rust"
	"github.com/alexaandru/go-tree-sitter-parsers/scala"
	"github.com/alexaandru/go-tree-sitter-parsers/scheme"
	"github.com/alexaandru/go-tree-sitter-parsers/scss"
	"github.com/alexaandru/go-tree-sitter-parsers/slang"
	"github.com/alexaandru/go-tree-sitter-parsers/slint"
	"github.com/alexaandru/go-tree-sitter-parsers/smithy"
	"github.com/alexaandru/go-tree-sitter-parsers/snakemake"
	"github.com/alexaandru/go-tree-sitter-parsers/solidity"
	"github.com/alexaandru/go-tree-sitter-parsers/soql"
	"github.com/alexaandru/go-tree-sitter-parsers/sosl"
	"github.com/alexaandru/go-tree-sitter-parsers/sourcepawn"
	"github.com/alexaandru/go-tree-sitter-parsers/sparql"
	"github.com/alexaandru/go-tree-sitter-parsers/sql"
	"github.com/alexaandru/go-tree-sitter-parsers/squirrel"
	"github.com/alexaandru/go-tree-sitter-parsers/ssh_config"
	"github.com/alexaandru/go-tree-sitter-parsers/starlark"
	"github.com/alexaandru/go-tree-sitter-parsers/strace"
	"github.com/alexaandru/go-tree-sitter-parsers/styled"
	"github.com/alexaandru/go-tree-sitter-parsers/supercollider"
	"github.com/alexaandru/go-tree-sitter-parsers/svelte"
	"github.com/alexaandru/go-tree-sitter-parsers/toml"
	"github.com/alexaandru/go-tree-sitter-parsers/tsv"
	"github.com/alexaandru/go-tree-sitter-parsers/tsx"
	"github.com/alexaandru/go-tree-sitter-parsers/typescript"
	"github.com/alexaandru/go-tree-sitter-parsers/vue"
	"github.com/alexaandru/go-tree-sitter-parsers/xml"
	"github.com/alexaandru/go-tree-sitter-parsers/yaml"
	"github.com/alexaandru/go-tree-sitter-parsers/zig"
)

var langNameFuncs = map[string]func() *sitter.Language{
	"ada":                ada.GetLanguage,
	"agda":               agda.GetLanguage,
	"apex":               apex.GetLanguage,
	"arduino":            arduino.GetLanguage,
	"asm":                asm.GetLanguage,
	"astro":              astro.GetLanguage,
	"authzed":            authzed.GetLanguage,
	"awk":                awk.GetLanguage,
	"bash":               bash.GetLanguage,
	"bass":               bass.GetLanguage,
	// FIXME: beancount and org cannot be used by the same app, as they both define some common methods.
	//"beancount":          beancount.GetLanguage,
	"bibtex":             bibtex.GetLanguage,
	"bicep":              bicep.GetLanguage,
	"bitbake":            bitbake.GetLanguage,
	"c":                  c.GetLanguage,
	"c_sharp":            c_sharp.GetLanguage,
	"cairo":              cairo.GetLanguage,
	"capnp":              capnp.GetLanguage,
	"chatito":            chatito.GetLanguage,
	"clojure":            clojure.GetLanguage,
	"cmake":              cmake.GetLanguage,
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
	"dockerfile":         dockerfile.GetLanguage,
	"dot":                dot.GetLanguage,
	"doxygen":            doxygen.GetLanguage,
	"dtd":                dtd.GetLanguage,
	"ebnf":               ebnf.GetLanguage,
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
	"go":                 golang.GetLanguage,
	"godot_resource":     godot_resource.GetLanguage,
	"gomod":              gomod.GetLanguage,
	"gosum":              gosum.GetLanguage,
	"gotmpl":             gotmpl.GetLanguage,
	"gowork":             gowork.GetLanguage,
	"gpg":                gpg.GetLanguage,
	"graphql":            graphql.GetLanguage,
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
	"ini":                ini.GetLanguage,
	"ispc":               ispc.GetLanguage,
	"janet_simple":       janet_simple.GetLanguage,
	"java":               java.GetLanguage,
	"javascript":         javascript.GetLanguage,
	"jq":                 jq.GetLanguage,
	"jsdoc":              jsdoc.GetLanguage,
	"json":               json.GetLanguage,
	"json5":              json5.GetLanguage,
	"jsonnet":            jsonnet.GetLanguage,
	"julia":              julia.GetLanguage,
	"kconfig":            kconfig.GetLanguage,
	"kdl":                kdl.GetLanguage,
	"kotlin":             kotlin.GetLanguage,
	"kusto":              kusto.GetLanguage,
	"lalrpop":            lalrpop.GetLanguage,
	"ledger":             ledger.GetLanguage,
	"leo":                leo.GetLanguage,
	"linkerscript":       linkerscript.GetLanguage,
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
	"muttrc":             muttrc.GetLanguage,
	"nasm":               nasm.GetLanguage,
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
	"poe_filter":         poe_filter.GetLanguage,
	"pony":               pony.GetLanguage,
	"printf":             printf.GetLanguage,
	"prisma":             prisma.GetLanguage,
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
	"qmljs":              qmljs.GetLanguage,
	"query":              query.GetLanguage,
	"r":                  r.GetLanguage,
	"racket":             racket.GetLanguage,
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
	"ron":                ron.GetLanguage,
	"ruby":               ruby.GetLanguage,
	"rust":               rust.GetLanguage,
	"scala":              scala.GetLanguage,
	"scheme":             scheme.GetLanguage,
	"scss":               scss.GetLanguage,
	"slang":              slang.GetLanguage,
	"slint":              slint.GetLanguage,
	"smithy":             smithy.GetLanguage,
	"snakemake":          snakemake.GetLanguage,
	"solidity":           solidity.GetLanguage,
	"soql":               soql.GetLanguage,
	"sosl":               sosl.GetLanguage,
	"sourcepawn":         sourcepawn.GetLanguage,
	"sparql":             sparql.GetLanguage,
	"sql":                sql.GetLanguage,
	"squirrel":           squirrel.GetLanguage,
	"ssh_config":         ssh_config.GetLanguage,
	"starlark":           starlark.GetLanguage,
	"strace":             strace.GetLanguage,
	"styled":             styled.GetLanguage,
	"supercollider":      supercollider.GetLanguage,
	"svelte":             svelte.GetLanguage,
	"toml":               toml.GetLanguage,
	"tsv":                tsv.GetLanguage,
	"tsx":                tsx.GetLanguage,
	"typescript":         typescript.GetLanguage,
	"vue":                vue.GetLanguage,
	"xml":                xml.GetLanguage,
	"yaml":               yaml.GetLanguage,
	"zig":                zig.GetLanguage,
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

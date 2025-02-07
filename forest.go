// Package forest makes all the parsers, queries and filetype detection.
//
// This includes every single parser, as long as it is not pending
// (even new/experimental, etc.).
//
// The parsers, queries and filetype detection work in tandem: the exact
// same language returned by filetype detection, can be used to pull in
// the language parser as well as the corresponding queries.
package forest

import (
	"embed"
	enc_json "encoding/json"
	"path/filepath"
	"regexp"
	"slices"
	"strings"
	"sync"
	"unsafe"

	"github.com/alexaandru/go-sitter-forest/abap"
	"github.com/alexaandru/go-sitter-forest/abl"
	"github.com/alexaandru/go-sitter-forest/ada"
	"github.com/alexaandru/go-sitter-forest/agda"
	"github.com/alexaandru/go-sitter-forest/aiken"
	"github.com/alexaandru/go-sitter-forest/al"
	"github.com/alexaandru/go-sitter-forest/alcha"
	"github.com/alexaandru/go-sitter-forest/amber"
	"github.com/alexaandru/go-sitter-forest/angular"
	"github.com/alexaandru/go-sitter-forest/animationtxt"
	"github.com/alexaandru/go-sitter-forest/ansible"
	"github.com/alexaandru/go-sitter-forest/anzu"
	"github.com/alexaandru/go-sitter-forest/apex"
	"github.com/alexaandru/go-sitter-forest/applesoft"
	"github.com/alexaandru/go-sitter-forest/arduino"
	"github.com/alexaandru/go-sitter-forest/asciidoc"
	"github.com/alexaandru/go-sitter-forest/asciidoc_inline"
	"github.com/alexaandru/go-sitter-forest/asm"
	"github.com/alexaandru/go-sitter-forest/astro"
	"github.com/alexaandru/go-sitter-forest/august"
	"github.com/alexaandru/go-sitter-forest/authzed"
	"github.com/alexaandru/go-sitter-forest/awa5_rs"
	"github.com/alexaandru/go-sitter-forest/awatalk"
	"github.com/alexaandru/go-sitter-forest/awk"
	"github.com/alexaandru/go-sitter-forest/bara"
	"github.com/alexaandru/go-sitter-forest/barq"
	"github.com/alexaandru/go-sitter-forest/bash"
	"github.com/alexaandru/go-sitter-forest/bass"
	"github.com/alexaandru/go-sitter-forest/beancount"
	"github.com/alexaandru/go-sitter-forest/bend"
	"github.com/alexaandru/go-sitter-forest/bibtex"
	"github.com/alexaandru/go-sitter-forest/bicep"
	"github.com/alexaandru/go-sitter-forest/bitbake"
	"github.com/alexaandru/go-sitter-forest/blade"
	"github.com/alexaandru/go-sitter-forest/blueprint"
	"github.com/alexaandru/go-sitter-forest/bluespec"
	"github.com/alexaandru/go-sitter-forest/bond"
	"github.com/alexaandru/go-sitter-forest/bp"
	"github.com/alexaandru/go-sitter-forest/bqn"
	"github.com/alexaandru/go-sitter-forest/brightscript"
	"github.com/alexaandru/go-sitter-forest/bruno"
	"github.com/alexaandru/go-sitter-forest/c"
	"github.com/alexaandru/go-sitter-forest/c3"
	"github.com/alexaandru/go-sitter-forest/c_sharp"
	"github.com/alexaandru/go-sitter-forest/ca65"
	"github.com/alexaandru/go-sitter-forest/cairo"
	"github.com/alexaandru/go-sitter-forest/calc"
	"github.com/alexaandru/go-sitter-forest/capnp"
	"github.com/alexaandru/go-sitter-forest/carbon"
	"github.com/alexaandru/go-sitter-forest/cds"
	"github.com/alexaandru/go-sitter-forest/cedar"
	"github.com/alexaandru/go-sitter-forest/cel"
	"github.com/alexaandru/go-sitter-forest/cfengine"
	"github.com/alexaandru/go-sitter-forest/cg"
	"github.com/alexaandru/go-sitter-forest/cgsql"
	"github.com/alexaandru/go-sitter-forest/chatito"
	"github.com/alexaandru/go-sitter-forest/circom"
	"github.com/alexaandru/go-sitter-forest/clarity"
	"github.com/alexaandru/go-sitter-forest/cleancopy"
	"github.com/alexaandru/go-sitter-forest/clingo"
	"github.com/alexaandru/go-sitter-forest/clojure"
	"github.com/alexaandru/go-sitter-forest/cloudflare"
	"github.com/alexaandru/go-sitter-forest/cmake"
	"github.com/alexaandru/go-sitter-forest/cmdl"
	"github.com/alexaandru/go-sitter-forest/cobol"
	"github.com/alexaandru/go-sitter-forest/cognate"
	"github.com/alexaandru/go-sitter-forest/comment"
	"github.com/alexaandru/go-sitter-forest/commonlisp"
	ConTeXt "github.com/alexaandru/go-sitter-forest/context"
	"github.com/alexaandru/go-sitter-forest/cooklang"
	"github.com/alexaandru/go-sitter-forest/core"
	"github.com/alexaandru/go-sitter-forest/corn"
	"github.com/alexaandru/go-sitter-forest/cpon"
	"github.com/alexaandru/go-sitter-forest/cpp"
	"github.com/alexaandru/go-sitter-forest/crystal"
	"github.com/alexaandru/go-sitter-forest/css"
	"github.com/alexaandru/go-sitter-forest/csv"
	"github.com/alexaandru/go-sitter-forest/cuda"
	"github.com/alexaandru/go-sitter-forest/cue"
	"github.com/alexaandru/go-sitter-forest/cylc"
	"github.com/alexaandru/go-sitter-forest/d"
	"github.com/alexaandru/go-sitter-forest/d2"
	"github.com/alexaandru/go-sitter-forest/dale"
	"github.com/alexaandru/go-sitter-forest/dart"
	"github.com/alexaandru/go-sitter-forest/dataweave"
	"github.com/alexaandru/go-sitter-forest/dbml"
	"github.com/alexaandru/go-sitter-forest/desktop"
	"github.com/alexaandru/go-sitter-forest/devicetree"
	"github.com/alexaandru/go-sitter-forest/dezyne"
	"github.com/alexaandru/go-sitter-forest/dhall"
	"github.com/alexaandru/go-sitter-forest/diff"
	"github.com/alexaandru/go-sitter-forest/disassembly"
	"github.com/alexaandru/go-sitter-forest/djot"
	"github.com/alexaandru/go-sitter-forest/djot_inline"
	"github.com/alexaandru/go-sitter-forest/dockerfile"
	"github.com/alexaandru/go-sitter-forest/dot"
	"github.com/alexaandru/go-sitter-forest/dotenv"
	"github.com/alexaandru/go-sitter-forest/doxygen"
	"github.com/alexaandru/go-sitter-forest/dtd"
	"github.com/alexaandru/go-sitter-forest/dune"
	"github.com/alexaandru/go-sitter-forest/earthfile"
	"github.com/alexaandru/go-sitter-forest/ebnf"
	"github.com/alexaandru/go-sitter-forest/editorconfig"
	"github.com/alexaandru/go-sitter-forest/eds"
	"github.com/alexaandru/go-sitter-forest/eex"
	"github.com/alexaandru/go-sitter-forest/effekt"
	"github.com/alexaandru/go-sitter-forest/eiffel"
	"github.com/alexaandru/go-sitter-forest/elisp"
	"github.com/alexaandru/go-sitter-forest/elixir"
	"github.com/alexaandru/go-sitter-forest/elm"
	"github.com/alexaandru/go-sitter-forest/elsa"
	"github.com/alexaandru/go-sitter-forest/elvish"
	"github.com/alexaandru/go-sitter-forest/embedded_template"
	"github.com/alexaandru/go-sitter-forest/epics_cmd"
	"github.com/alexaandru/go-sitter-forest/epics_db"
	"github.com/alexaandru/go-sitter-forest/epics_msi_substitution"
	"github.com/alexaandru/go-sitter-forest/epics_msi_template"
	"github.com/alexaandru/go-sitter-forest/erlang"
	"github.com/alexaandru/go-sitter-forest/facility"
	"github.com/alexaandru/go-sitter-forest/factor"
	"github.com/alexaandru/go-sitter-forest/familymarkup"
	"github.com/alexaandru/go-sitter-forest/fastbuild"
	"github.com/alexaandru/go-sitter-forest/faust"
	"github.com/alexaandru/go-sitter-forest/fe"
	"github.com/alexaandru/go-sitter-forest/fennel"
	"github.com/alexaandru/go-sitter-forest/fidl"
	"github.com/alexaandru/go-sitter-forest/fin"
	"github.com/alexaandru/go-sitter-forest/firrtl"
	"github.com/alexaandru/go-sitter-forest/fish"
	"github.com/alexaandru/go-sitter-forest/flamingo"
	"github.com/alexaandru/go-sitter-forest/fluentbit"
	"github.com/alexaandru/go-sitter-forest/foam"
	"github.com/alexaandru/go-sitter-forest/forth"
	"github.com/alexaandru/go-sitter-forest/fortran"
	"github.com/alexaandru/go-sitter-forest/frostlang"
	"github.com/alexaandru/go-sitter-forest/fsh"
	"github.com/alexaandru/go-sitter-forest/fsharp"
	"github.com/alexaandru/go-sitter-forest/fsharp_signature"
	FunC "github.com/alexaandru/go-sitter-forest/func"
	"github.com/alexaandru/go-sitter-forest/fusion"
	"github.com/alexaandru/go-sitter-forest/gab"
	"github.com/alexaandru/go-sitter-forest/galvan"
	"github.com/alexaandru/go-sitter-forest/gap"
	"github.com/alexaandru/go-sitter-forest/gaptst"
	"github.com/alexaandru/go-sitter-forest/gdscript"
	"github.com/alexaandru/go-sitter-forest/gdshader"
	"github.com/alexaandru/go-sitter-forest/gemfilelock"
	"github.com/alexaandru/go-sitter-forest/gherkin"
	"github.com/alexaandru/go-sitter-forest/ghostty"
	"github.com/alexaandru/go-sitter-forest/git_config"
	"github.com/alexaandru/go-sitter-forest/git_rebase"
	"github.com/alexaandru/go-sitter-forest/gitattributes"
	"github.com/alexaandru/go-sitter-forest/gitcommit"
	"github.com/alexaandru/go-sitter-forest/gitignore"
	"github.com/alexaandru/go-sitter-forest/gleam"
	"github.com/alexaandru/go-sitter-forest/glimmer"
	"github.com/alexaandru/go-sitter-forest/glimmer_javascript"
	"github.com/alexaandru/go-sitter-forest/glimmer_typescript"
	"github.com/alexaandru/go-sitter-forest/glint"
	"github.com/alexaandru/go-sitter-forest/glsl"
	"github.com/alexaandru/go-sitter-forest/gn"
	"github.com/alexaandru/go-sitter-forest/gnuplot"
	Go "github.com/alexaandru/go-sitter-forest/go"
	"github.com/alexaandru/go-sitter-forest/gobra"
	"github.com/alexaandru/go-sitter-forest/goctl"
	"github.com/alexaandru/go-sitter-forest/godot_resource"
	"github.com/alexaandru/go-sitter-forest/gomod"
	"github.com/alexaandru/go-sitter-forest/gooscript"
	"github.com/alexaandru/go-sitter-forest/gosum"
	"github.com/alexaandru/go-sitter-forest/gotmpl"
	"github.com/alexaandru/go-sitter-forest/gowork"
	"github.com/alexaandru/go-sitter-forest/gpg"
	"github.com/alexaandru/go-sitter-forest/gram"
	"github.com/alexaandru/go-sitter-forest/graphql"
	"github.com/alexaandru/go-sitter-forest/gren"
	"github.com/alexaandru/go-sitter-forest/gritql"
	"github.com/alexaandru/go-sitter-forest/groovy"
	"github.com/alexaandru/go-sitter-forest/gstlaunch"
	"github.com/alexaandru/go-sitter-forest/hack"
	"github.com/alexaandru/go-sitter-forest/haml"
	"github.com/alexaandru/go-sitter-forest/hare"
	"github.com/alexaandru/go-sitter-forest/haskell"
	"github.com/alexaandru/go-sitter-forest/haskell_persistent"
	"github.com/alexaandru/go-sitter-forest/haxe"
	"github.com/alexaandru/go-sitter-forest/hcl"
	"github.com/alexaandru/go-sitter-forest/heex"
	"github.com/alexaandru/go-sitter-forest/helm"
	"github.com/alexaandru/go-sitter-forest/hjson"
	"github.com/alexaandru/go-sitter-forest/hl7"
	"github.com/alexaandru/go-sitter-forest/hlsl"
	"github.com/alexaandru/go-sitter-forest/hlsplaylist"
	"github.com/alexaandru/go-sitter-forest/hocon"
	"github.com/alexaandru/go-sitter-forest/hoon"
	"github.com/alexaandru/go-sitter-forest/html"
	"github.com/alexaandru/go-sitter-forest/htmlaskama"
	"github.com/alexaandru/go-sitter-forest/htmldjango"
	"github.com/alexaandru/go-sitter-forest/http"
	"github.com/alexaandru/go-sitter-forest/http2"
	"github.com/alexaandru/go-sitter-forest/hungarian"
	"github.com/alexaandru/go-sitter-forest/hurl"
	"github.com/alexaandru/go-sitter-forest/hy"
	"github.com/alexaandru/go-sitter-forest/hygen_template"
	"github.com/alexaandru/go-sitter-forest/hylo"
	"github.com/alexaandru/go-sitter-forest/hyprlang"
	"github.com/alexaandru/go-sitter-forest/i3config"
	"github.com/alexaandru/go-sitter-forest/idl"
	"github.com/alexaandru/go-sitter-forest/idris"
	"github.com/alexaandru/go-sitter-forest/ignis"
	"github.com/alexaandru/go-sitter-forest/ini"
	"github.com/alexaandru/go-sitter-forest/ink"
	"github.com/alexaandru/go-sitter-forest/inko"
	"github.com/alexaandru/go-sitter-forest/integerbasic"
	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"github.com/alexaandru/go-sitter-forest/internal/automation/util"
	"github.com/alexaandru/go-sitter-forest/ipkg"
	"github.com/alexaandru/go-sitter-forest/ispc"
	"github.com/alexaandru/go-sitter-forest/jai"
	"github.com/alexaandru/go-sitter-forest/janet"
	"github.com/alexaandru/go-sitter-forest/jasmin"
	"github.com/alexaandru/go-sitter-forest/java"
	"github.com/alexaandru/go-sitter-forest/javascript"
	"github.com/alexaandru/go-sitter-forest/jinja"
	"github.com/alexaandru/go-sitter-forest/jinja_inline"
	"github.com/alexaandru/go-sitter-forest/jq"
	"github.com/alexaandru/go-sitter-forest/jsdoc"
	"github.com/alexaandru/go-sitter-forest/json"
	"github.com/alexaandru/go-sitter-forest/json5"
	"github.com/alexaandru/go-sitter-forest/jsonc"
	"github.com/alexaandru/go-sitter-forest/jsonnet"
	"github.com/alexaandru/go-sitter-forest/jule"
	"github.com/alexaandru/go-sitter-forest/julia"
	"github.com/alexaandru/go-sitter-forest/just"
	"github.com/alexaandru/go-sitter-forest/kamailio_cfg"
	"github.com/alexaandru/go-sitter-forest/kanshi"
	"github.com/alexaandru/go-sitter-forest/kappa"
	"github.com/alexaandru/go-sitter-forest/kcl"
	"github.com/alexaandru/go-sitter-forest/kconfig"
	"github.com/alexaandru/go-sitter-forest/kdl"
	"github.com/alexaandru/go-sitter-forest/koan"
	"github.com/alexaandru/go-sitter-forest/koka"
	"github.com/alexaandru/go-sitter-forest/kon"
	"github.com/alexaandru/go-sitter-forest/kos"
	"github.com/alexaandru/go-sitter-forest/kotlin"
	"github.com/alexaandru/go-sitter-forest/koto"
	"github.com/alexaandru/go-sitter-forest/kusto"
	"github.com/alexaandru/go-sitter-forest/lalrpop"
	"github.com/alexaandru/go-sitter-forest/lart"
	"github.com/alexaandru/go-sitter-forest/lat"
	"github.com/alexaandru/go-sitter-forest/latex"
	"github.com/alexaandru/go-sitter-forest/latte"
	"github.com/alexaandru/go-sitter-forest/ldg"
	"github.com/alexaandru/go-sitter-forest/ledger"
	"github.com/alexaandru/go-sitter-forest/leo"
	"github.com/alexaandru/go-sitter-forest/lexc"
	"github.com/alexaandru/go-sitter-forest/lexd"
	"github.com/alexaandru/go-sitter-forest/lilypond"
	"github.com/alexaandru/go-sitter-forest/lilypond_scheme"
	"github.com/alexaandru/go-sitter-forest/linkerscript"
	"github.com/alexaandru/go-sitter-forest/liquid"
	"github.com/alexaandru/go-sitter-forest/liquidsoap"
	"github.com/alexaandru/go-sitter-forest/lithia"
	"github.com/alexaandru/go-sitter-forest/llvm"
	"github.com/alexaandru/go-sitter-forest/lookml"
	"github.com/alexaandru/go-sitter-forest/lox"
	"github.com/alexaandru/go-sitter-forest/lua"
	"github.com/alexaandru/go-sitter-forest/luadoc"
	"github.com/alexaandru/go-sitter-forest/luap"
	"github.com/alexaandru/go-sitter-forest/luau"
	"github.com/alexaandru/go-sitter-forest/m68k"
	"github.com/alexaandru/go-sitter-forest/magik"
	"github.com/alexaandru/go-sitter-forest/make"
	"github.com/alexaandru/go-sitter-forest/mandbconfig"
	"github.com/alexaandru/go-sitter-forest/markdown"
	"github.com/alexaandru/go-sitter-forest/markdown_inline"
	"github.com/alexaandru/go-sitter-forest/marte"
	"github.com/alexaandru/go-sitter-forest/matlab"
	"github.com/alexaandru/go-sitter-forest/mcfuncx"
	"github.com/alexaandru/go-sitter-forest/menhir"
	"github.com/alexaandru/go-sitter-forest/merlin6502"
	"github.com/alexaandru/go-sitter-forest/mermaid"
	"github.com/alexaandru/go-sitter-forest/meson"
	"github.com/alexaandru/go-sitter-forest/mips"
	"github.com/alexaandru/go-sitter-forest/mlir"
	"github.com/alexaandru/go-sitter-forest/modelica"
	"github.com/alexaandru/go-sitter-forest/moonbit"
	"github.com/alexaandru/go-sitter-forest/moonscript"
	"github.com/alexaandru/go-sitter-forest/motoko"
	"github.com/alexaandru/go-sitter-forest/move"
	"github.com/alexaandru/go-sitter-forest/move_on_aptos"
	"github.com/alexaandru/go-sitter-forest/mustache"
	"github.com/alexaandru/go-sitter-forest/muttrc"
	"github.com/alexaandru/go-sitter-forest/mxml"
	"github.com/alexaandru/go-sitter-forest/mylang"
	"github.com/alexaandru/go-sitter-forest/nasm"
	"github.com/alexaandru/go-sitter-forest/nelua"
	"github.com/alexaandru/go-sitter-forest/nesfab"
	"github.com/alexaandru/go-sitter-forest/nftables"
	"github.com/alexaandru/go-sitter-forest/nginx"
	"github.com/alexaandru/go-sitter-forest/nickel"
	"github.com/alexaandru/go-sitter-forest/nim"
	"github.com/alexaandru/go-sitter-forest/nim_format_string"
	"github.com/alexaandru/go-sitter-forest/ninja"
	"github.com/alexaandru/go-sitter-forest/nix"
	"github.com/alexaandru/go-sitter-forest/norg"
	"github.com/alexaandru/go-sitter-forest/note"
	"github.com/alexaandru/go-sitter-forest/nqc"
	"github.com/alexaandru/go-sitter-forest/nu"
	"github.com/alexaandru/go-sitter-forest/objc"
	"github.com/alexaandru/go-sitter-forest/objdump"
	"github.com/alexaandru/go-sitter-forest/ocaml"
	"github.com/alexaandru/go-sitter-forest/ocaml_interface"
	"github.com/alexaandru/go-sitter-forest/ocamllex"
	"github.com/alexaandru/go-sitter-forest/odin"
	"github.com/alexaandru/go-sitter-forest/org"
	"github.com/alexaandru/go-sitter-forest/ott"
	"github.com/alexaandru/go-sitter-forest/pact"
	"github.com/alexaandru/go-sitter-forest/pascal"
	"github.com/alexaandru/go-sitter-forest/passwd"
	"github.com/alexaandru/go-sitter-forest/pdxinfo"
	"github.com/alexaandru/go-sitter-forest/pem"
	"github.com/alexaandru/go-sitter-forest/perl"
	"github.com/alexaandru/go-sitter-forest/perm"
	"github.com/alexaandru/go-sitter-forest/pgn"
	"github.com/alexaandru/go-sitter-forest/php"
	"github.com/alexaandru/go-sitter-forest/php_only"
	"github.com/alexaandru/go-sitter-forest/phpdoc"
	"github.com/alexaandru/go-sitter-forest/pic"
	"github.com/alexaandru/go-sitter-forest/pint"
	"github.com/alexaandru/go-sitter-forest/pioasm"
	"github.com/alexaandru/go-sitter-forest/pkl"
	"github.com/alexaandru/go-sitter-forest/plantuml"
	"github.com/alexaandru/go-sitter-forest/po"
	"github.com/alexaandru/go-sitter-forest/pod"
	"github.com/alexaandru/go-sitter-forest/poe_filter"
	"github.com/alexaandru/go-sitter-forest/pony"
	"github.com/alexaandru/go-sitter-forest/postscript"
	"github.com/alexaandru/go-sitter-forest/poweron"
	"github.com/alexaandru/go-sitter-forest/powershell"
	"github.com/alexaandru/go-sitter-forest/printf"
	"github.com/alexaandru/go-sitter-forest/prisma"
	"github.com/alexaandru/go-sitter-forest/problog"
	"github.com/alexaandru/go-sitter-forest/prolog"
	"github.com/alexaandru/go-sitter-forest/promql"
	"github.com/alexaandru/go-sitter-forest/properties"
	"github.com/alexaandru/go-sitter-forest/proto"
	"github.com/alexaandru/go-sitter-forest/proxima"
	"github.com/alexaandru/go-sitter-forest/prql"
	"github.com/alexaandru/go-sitter-forest/psv"
	"github.com/alexaandru/go-sitter-forest/pug"
	"github.com/alexaandru/go-sitter-forest/puppet"
	"github.com/alexaandru/go-sitter-forest/purescript"
	"github.com/alexaandru/go-sitter-forest/pymanifest"
	"github.com/alexaandru/go-sitter-forest/pyrope"
	"github.com/alexaandru/go-sitter-forest/python"
	"github.com/alexaandru/go-sitter-forest/qbe"
	"github.com/alexaandru/go-sitter-forest/ql"
	"github.com/alexaandru/go-sitter-forest/qmldir"
	"github.com/alexaandru/go-sitter-forest/qmljs"
	"github.com/alexaandru/go-sitter-forest/quakec"
	"github.com/alexaandru/go-sitter-forest/query"
	"github.com/alexaandru/go-sitter-forest/quint"
	"github.com/alexaandru/go-sitter-forest/r"
	"github.com/alexaandru/go-sitter-forest/racket"
	"github.com/alexaandru/go-sitter-forest/ralph"
	"github.com/alexaandru/go-sitter-forest/rasi"
	"github.com/alexaandru/go-sitter-forest/razor"
	"github.com/alexaandru/go-sitter-forest/rbs"
	"github.com/alexaandru/go-sitter-forest/rcl"
	"github.com/alexaandru/go-sitter-forest/re2c"
	"github.com/alexaandru/go-sitter-forest/readline"
	"github.com/alexaandru/go-sitter-forest/regex"
	"github.com/alexaandru/go-sitter-forest/rego"
	"github.com/alexaandru/go-sitter-forest/requirements"
	"github.com/alexaandru/go-sitter-forest/rescript"
	"github.com/alexaandru/go-sitter-forest/risor"
	"github.com/alexaandru/go-sitter-forest/rnoweb"
	"github.com/alexaandru/go-sitter-forest/robot"
	"github.com/alexaandru/go-sitter-forest/robots"
	"github.com/alexaandru/go-sitter-forest/roc"
	"github.com/alexaandru/go-sitter-forest/ron"
	"github.com/alexaandru/go-sitter-forest/rstml"
	"github.com/alexaandru/go-sitter-forest/rsx"
	"github.com/alexaandru/go-sitter-forest/rtx"
	"github.com/alexaandru/go-sitter-forest/ruby"
	"github.com/alexaandru/go-sitter-forest/runescript"
	"github.com/alexaandru/go-sitter-forest/rust"
	"github.com/alexaandru/go-sitter-forest/rust_with_rstml"
	"github.com/alexaandru/go-sitter-forest/sage"
	"github.com/alexaandru/go-sitter-forest/scala"
	"github.com/alexaandru/go-sitter-forest/scfg"
	"github.com/alexaandru/go-sitter-forest/scheme"
	"github.com/alexaandru/go-sitter-forest/scss"
	"github.com/alexaandru/go-sitter-forest/sdml"
	"github.com/alexaandru/go-sitter-forest/sflog"
	"github.com/alexaandru/go-sitter-forest/shosts"
	"github.com/alexaandru/go-sitter-forest/simula"
	"github.com/alexaandru/go-sitter-forest/sincere"
	"github.com/alexaandru/go-sitter-forest/slang"
	"github.com/alexaandru/go-sitter-forest/slim"
	"github.com/alexaandru/go-sitter-forest/slint"
	"github.com/alexaandru/go-sitter-forest/smali"
	"github.com/alexaandru/go-sitter-forest/smith"
	"github.com/alexaandru/go-sitter-forest/smithy"
	"github.com/alexaandru/go-sitter-forest/sml"
	"github.com/alexaandru/go-sitter-forest/snakemake"
	"github.com/alexaandru/go-sitter-forest/snl"
	"github.com/alexaandru/go-sitter-forest/sol"
	"github.com/alexaandru/go-sitter-forest/solidity"
	"github.com/alexaandru/go-sitter-forest/sop"
	"github.com/alexaandru/go-sitter-forest/soql"
	"github.com/alexaandru/go-sitter-forest/sosl"
	"github.com/alexaandru/go-sitter-forest/sourcepawn"
	"github.com/alexaandru/go-sitter-forest/sparql"
	"github.com/alexaandru/go-sitter-forest/spicy"
	"github.com/alexaandru/go-sitter-forest/sql"
	"github.com/alexaandru/go-sitter-forest/sql_bigquery"
	"github.com/alexaandru/go-sitter-forest/sqlite"
	"github.com/alexaandru/go-sitter-forest/squirrel"
	"github.com/alexaandru/go-sitter-forest/ssh_client_config"
	"github.com/alexaandru/go-sitter-forest/ssh_config"
	"github.com/alexaandru/go-sitter-forest/starlark"
	"github.com/alexaandru/go-sitter-forest/strace"
	"github.com/alexaandru/go-sitter-forest/streamdevice_proto"
	"github.com/alexaandru/go-sitter-forest/structurizr"
	"github.com/alexaandru/go-sitter-forest/styled"
	"github.com/alexaandru/go-sitter-forest/supercollider"
	"github.com/alexaandru/go-sitter-forest/superhtml"
	"github.com/alexaandru/go-sitter-forest/surface"
	"github.com/alexaandru/go-sitter-forest/surrealql"
	"github.com/alexaandru/go-sitter-forest/sus"
	"github.com/alexaandru/go-sitter-forest/svelte"
	"github.com/alexaandru/go-sitter-forest/sway"
	"github.com/alexaandru/go-sitter-forest/swift"
	"github.com/alexaandru/go-sitter-forest/sxhkdrc"
	"github.com/alexaandru/go-sitter-forest/syphon"
	"github.com/alexaandru/go-sitter-forest/systemtap"
	"github.com/alexaandru/go-sitter-forest/systemverilog"
	"github.com/alexaandru/go-sitter-forest/t32"
	"github.com/alexaandru/go-sitter-forest/tablegen"
	"github.com/alexaandru/go-sitter-forest/tact"
	"github.com/alexaandru/go-sitter-forest/talon"
	"github.com/alexaandru/go-sitter-forest/tcl"
	"github.com/alexaandru/go-sitter-forest/teal"
	"github.com/alexaandru/go-sitter-forest/templ"
	"github.com/alexaandru/go-sitter-forest/tera"
	"github.com/alexaandru/go-sitter-forest/terra"
	"github.com/alexaandru/go-sitter-forest/test"
	"github.com/alexaandru/go-sitter-forest/textproto"
	"github.com/alexaandru/go-sitter-forest/thrift"
	"github.com/alexaandru/go-sitter-forest/tiger"
	"github.com/alexaandru/go-sitter-forest/tlaplus"
	"github.com/alexaandru/go-sitter-forest/tmux"
	"github.com/alexaandru/go-sitter-forest/tnsl"
	"github.com/alexaandru/go-sitter-forest/todolang"
	"github.com/alexaandru/go-sitter-forest/todotxt"
	"github.com/alexaandru/go-sitter-forest/toml"
	"github.com/alexaandru/go-sitter-forest/tort"
	"github.com/alexaandru/go-sitter-forest/tsv"
	"github.com/alexaandru/go-sitter-forest/tsx"
	"github.com/alexaandru/go-sitter-forest/tup"
	"github.com/alexaandru/go-sitter-forest/turtle"
	"github.com/alexaandru/go-sitter-forest/twig"
	"github.com/alexaandru/go-sitter-forest/twolc"
	"github.com/alexaandru/go-sitter-forest/typescript"
	"github.com/alexaandru/go-sitter-forest/typespec"
	"github.com/alexaandru/go-sitter-forest/typoscript"
	"github.com/alexaandru/go-sitter-forest/typst"
	"github.com/alexaandru/go-sitter-forest/udev"
	"github.com/alexaandru/go-sitter-forest/uiua"
	"github.com/alexaandru/go-sitter-forest/ungrammar"
	"github.com/alexaandru/go-sitter-forest/unison"
	"github.com/alexaandru/go-sitter-forest/ursa"
	"github.com/alexaandru/go-sitter-forest/usd"
	"github.com/alexaandru/go-sitter-forest/uxntal"
	"github.com/alexaandru/go-sitter-forest/v"
	"github.com/alexaandru/go-sitter-forest/vala"
	"github.com/alexaandru/go-sitter-forest/vento"
	"github.com/alexaandru/go-sitter-forest/verilog"
	"github.com/alexaandru/go-sitter-forest/vhdl"
	"github.com/alexaandru/go-sitter-forest/vhs"
	"github.com/alexaandru/go-sitter-forest/vim"
	"github.com/alexaandru/go-sitter-forest/vimdoc"
	"github.com/alexaandru/go-sitter-forest/virdant"
	"github.com/alexaandru/go-sitter-forest/virgil"
	"github.com/alexaandru/go-sitter-forest/vrl"
	"github.com/alexaandru/go-sitter-forest/vue"
	"github.com/alexaandru/go-sitter-forest/walnut"
	"github.com/alexaandru/go-sitter-forest/wbproto"
	"github.com/alexaandru/go-sitter-forest/wgsl"
	"github.com/alexaandru/go-sitter-forest/wgsl_bevy"
	"github.com/alexaandru/go-sitter-forest/wing"
	"github.com/alexaandru/go-sitter-forest/wit"
	"github.com/alexaandru/go-sitter-forest/woml"
	"github.com/alexaandru/go-sitter-forest/wtf"
	"github.com/alexaandru/go-sitter-forest/xcompose"
	"github.com/alexaandru/go-sitter-forest/xfst"
	"github.com/alexaandru/go-sitter-forest/xml"
	"github.com/alexaandru/go-sitter-forest/xresources"
	"github.com/alexaandru/go-sitter-forest/yadl"
	"github.com/alexaandru/go-sitter-forest/yaml"
	"github.com/alexaandru/go-sitter-forest/yang"
	"github.com/alexaandru/go-sitter-forest/yaral"
	"github.com/alexaandru/go-sitter-forest/yarnlock"
	"github.com/alexaandru/go-sitter-forest/yuck"
	"github.com/alexaandru/go-sitter-forest/zathurarc"
	"github.com/alexaandru/go-sitter-forest/zeek"
	"github.com/alexaandru/go-sitter-forest/zig"
	"github.com/alexaandru/go-sitter-forest/ziggy"
	"github.com/alexaandru/go-sitter-forest/ziggy_schema"
	"github.com/alexaandru/go-sitter-forest/zoomba"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

// Query fetching preference.
const (
	_ byte = iota

	NvimFirst   // Fetch both, prefer nvim.
	NativeFirst // Fetch both, prefer native.
	NvimOnly    // Fetch only from nvim.
	NativeOnly  // Fetch only from sitter repo.

)

//go:embed grammars.json
var info []byte

var languageFuncs = map[string]func() unsafe.Pointer{
	"abap":                   abap.GetLanguage,
	"abl":                    abl.GetLanguage,
	"ada":                    ada.GetLanguage,
	"agda":                   agda.GetLanguage,
	"aiken":                  aiken.GetLanguage,
	"al":                     al.GetLanguage,
	"alcha":                  alcha.GetLanguage,
	"amber":                  amber.GetLanguage,
	"angular":                angular.GetLanguage,
	"animationtxt":           animationtxt.GetLanguage,
	"ansible":                ansible.GetLanguage,
	"anzu":                   anzu.GetLanguage,
	"apex":                   apex.GetLanguage,
	"applesoft":              applesoft.GetLanguage,
	"arduino":                arduino.GetLanguage,
	"asciidoc":               asciidoc.GetLanguage,
	"asciidoc_inline":        asciidoc_inline.GetLanguage,
	"asm":                    asm.GetLanguage,
	"astro":                  astro.GetLanguage,
	"august":                 august.GetLanguage,
	"authzed":                authzed.GetLanguage,
	"awa5_rs":                awa5_rs.GetLanguage,
	"awatalk":                awatalk.GetLanguage,
	"awk":                    awk.GetLanguage,
	"bara":                   bara.GetLanguage,
	"barq":                   barq.GetLanguage,
	"bash":                   bash.GetLanguage,
	"bass":                   bass.GetLanguage,
	"beancount":              beancount.GetLanguage,
	"bend":                   bend.GetLanguage,
	"bibtex":                 bibtex.GetLanguage,
	"bicep":                  bicep.GetLanguage,
	"bitbake":                bitbake.GetLanguage,
	"blade":                  blade.GetLanguage,
	"blueprint":              blueprint.GetLanguage,
	"bluespec":               bluespec.GetLanguage,
	"bond":                   bond.GetLanguage,
	"bp":                     bp.GetLanguage,
	"bqn":                    bqn.GetLanguage,
	"brightscript":           brightscript.GetLanguage,
	"bruno":                  bruno.GetLanguage,
	"c":                      c.GetLanguage,
	"c3":                     c3.GetLanguage,
	"c_sharp":                c_sharp.GetLanguage,
	"ca65":                   ca65.GetLanguage,
	"cairo":                  cairo.GetLanguage,
	"calc":                   calc.GetLanguage,
	"capnp":                  capnp.GetLanguage,
	"carbon":                 carbon.GetLanguage,
	"cds":                    cds.GetLanguage,
	"cedar":                  cedar.GetLanguage,
	"cel":                    cel.GetLanguage,
	"cfengine":               cfengine.GetLanguage,
	"cg":                     cg.GetLanguage,
	"cgsql":                  cgsql.GetLanguage,
	"chatito":                chatito.GetLanguage,
	"circom":                 circom.GetLanguage,
	"clarity":                clarity.GetLanguage,
	"cleancopy":              cleancopy.GetLanguage,
	"clingo":                 clingo.GetLanguage,
	"clojure":                clojure.GetLanguage,
	"cloudflare":             cloudflare.GetLanguage,
	"cmake":                  cmake.GetLanguage,
	"cmdl":                   cmdl.GetLanguage,
	"cobol":                  cobol.GetLanguage,
	"cognate":                cognate.GetLanguage,
	"comment":                comment.GetLanguage,
	"commonlisp":             commonlisp.GetLanguage,
	"context":                ConTeXt.GetLanguage,
	"cooklang":               cooklang.GetLanguage,
	"core":                   core.GetLanguage,
	"corn":                   corn.GetLanguage,
	"cpon":                   cpon.GetLanguage,
	"cpp":                    cpp.GetLanguage,
	"crystal":                crystal.GetLanguage,
	"css":                    css.GetLanguage,
	"csv":                    csv.GetLanguage,
	"cuda":                   cuda.GetLanguage,
	"cue":                    cue.GetLanguage,
	"cylc":                   cylc.GetLanguage,
	"d":                      d.GetLanguage,
	"d2":                     d2.GetLanguage,
	"dale":                   dale.GetLanguage,
	"dart":                   dart.GetLanguage,
	"dataweave":              dataweave.GetLanguage,
	"dbml":                   dbml.GetLanguage,
	"desktop":                desktop.GetLanguage,
	"devicetree":             devicetree.GetLanguage,
	"dezyne":                 dezyne.GetLanguage,
	"dhall":                  dhall.GetLanguage,
	"diff":                   diff.GetLanguage,
	"disassembly":            disassembly.GetLanguage,
	"djot":                   djot.GetLanguage,
	"djot_inline":            djot_inline.GetLanguage,
	"dockerfile":             dockerfile.GetLanguage,
	"dot":                    dot.GetLanguage,
	"dotenv":                 dotenv.GetLanguage,
	"doxygen":                doxygen.GetLanguage,
	"dtd":                    dtd.GetLanguage,
	"dune":                   dune.GetLanguage,
	"earthfile":              earthfile.GetLanguage,
	"ebnf":                   ebnf.GetLanguage,
	"editorconfig":           editorconfig.GetLanguage,
	"eds":                    eds.GetLanguage,
	"eex":                    eex.GetLanguage,
	"effekt":                 effekt.GetLanguage,
	"eiffel":                 eiffel.GetLanguage,
	"elisp":                  elisp.GetLanguage,
	"elixir":                 elixir.GetLanguage,
	"elm":                    elm.GetLanguage,
	"elsa":                   elsa.GetLanguage,
	"elvish":                 elvish.GetLanguage,
	"embedded_template":      embedded_template.GetLanguage,
	"epics_cmd":              epics_cmd.GetLanguage,
	"epics_db":               epics_db.GetLanguage,
	"epics_msi_substitution": epics_msi_substitution.GetLanguage,
	"epics_msi_template":     epics_msi_template.GetLanguage,
	"erlang":                 erlang.GetLanguage,
	"facility":               facility.GetLanguage,
	"factor":                 factor.GetLanguage,
	"familymarkup":           familymarkup.GetLanguage,
	"fastbuild":              fastbuild.GetLanguage,
	"faust":                  faust.GetLanguage,
	"fe":                     fe.GetLanguage,
	"fennel":                 fennel.GetLanguage,
	"fidl":                   fidl.GetLanguage,
	"fin":                    fin.GetLanguage,
	"firrtl":                 firrtl.GetLanguage,
	"fish":                   fish.GetLanguage,
	"flamingo":               flamingo.GetLanguage,
	"fluentbit":              fluentbit.GetLanguage,
	"foam":                   foam.GetLanguage,
	"forth":                  forth.GetLanguage,
	"fortran":                fortran.GetLanguage,
	"frostlang":              frostlang.GetLanguage,
	"fsh":                    fsh.GetLanguage,
	"fsharp":                 fsharp.GetLanguage,
	"fsharp_signature":       fsharp_signature.GetLanguage,
	"func":                   FunC.GetLanguage,
	"fusion":                 fusion.GetLanguage,
	"gab":                    gab.GetLanguage,
	"galvan":                 galvan.GetLanguage,
	"gap":                    gap.GetLanguage,
	"gaptst":                 gaptst.GetLanguage,
	"gdscript":               gdscript.GetLanguage,
	"gdshader":               gdshader.GetLanguage,
	"gemfilelock":            gemfilelock.GetLanguage,
	"gherkin":                gherkin.GetLanguage,
	"ghostty":                ghostty.GetLanguage,
	"git_config":             git_config.GetLanguage,
	"git_rebase":             git_rebase.GetLanguage,
	"gitattributes":          gitattributes.GetLanguage,
	"gitcommit":              gitcommit.GetLanguage,
	"gitignore":              gitignore.GetLanguage,
	"gleam":                  gleam.GetLanguage,
	"glimmer":                glimmer.GetLanguage,
	"glimmer_javascript":     glimmer_javascript.GetLanguage,
	"glimmer_typescript":     glimmer_typescript.GetLanguage,
	"glint":                  glint.GetLanguage,
	"glsl":                   glsl.GetLanguage,
	"gn":                     gn.GetLanguage,
	"gnuplot":                gnuplot.GetLanguage,
	"go":                     Go.GetLanguage,
	"gobra":                  gobra.GetLanguage,
	"goctl":                  goctl.GetLanguage,
	"godot_resource":         godot_resource.GetLanguage,
	"gomod":                  gomod.GetLanguage,
	"gooscript":              gooscript.GetLanguage,
	"gosum":                  gosum.GetLanguage,
	"gotmpl":                 gotmpl.GetLanguage,
	"gowork":                 gowork.GetLanguage,
	"gpg":                    gpg.GetLanguage,
	"gram":                   gram.GetLanguage,
	"graphql":                graphql.GetLanguage,
	"gren":                   gren.GetLanguage,
	"gritql":                 gritql.GetLanguage,
	"groovy":                 groovy.GetLanguage,
	"gstlaunch":              gstlaunch.GetLanguage,
	"hack":                   hack.GetLanguage,
	"haml":                   haml.GetLanguage,
	"hare":                   hare.GetLanguage,
	"haskell":                haskell.GetLanguage,
	"haskell_persistent":     haskell_persistent.GetLanguage,
	"haxe":                   haxe.GetLanguage,
	"hcl":                    hcl.GetLanguage,
	"heex":                   heex.GetLanguage,
	"helm":                   helm.GetLanguage,
	"hjson":                  hjson.GetLanguage,
	"hl7":                    hl7.GetLanguage,
	"hlsl":                   hlsl.GetLanguage,
	"hlsplaylist":            hlsplaylist.GetLanguage,
	"hocon":                  hocon.GetLanguage,
	"hoon":                   hoon.GetLanguage,
	"html":                   html.GetLanguage,
	"htmlaskama":             htmlaskama.GetLanguage,
	"htmldjango":             htmldjango.GetLanguage,
	"http":                   http.GetLanguage,
	"http2":                  http2.GetLanguage,
	"hungarian":              hungarian.GetLanguage,
	"hurl":                   hurl.GetLanguage,
	"hy":                     hy.GetLanguage,
	"hygen_template":         hygen_template.GetLanguage,
	"hylo":                   hylo.GetLanguage,
	"hyprlang":               hyprlang.GetLanguage,
	"i3config":               i3config.GetLanguage,
	"idl":                    idl.GetLanguage,
	"idris":                  idris.GetLanguage,
	"ignis":                  ignis.GetLanguage,
	"ini":                    ini.GetLanguage,
	"ink":                    ink.GetLanguage,
	"inko":                   inko.GetLanguage,
	"integerbasic":           integerbasic.GetLanguage,
	"ipkg":                   ipkg.GetLanguage,
	"ispc":                   ispc.GetLanguage,
	"jai":                    jai.GetLanguage,
	"janet":                  janet.GetLanguage,
	"jasmin":                 jasmin.GetLanguage,
	"java":                   java.GetLanguage,
	"javascript":             javascript.GetLanguage,
	"jinja":                  jinja.GetLanguage,
	"jinja_inline":           jinja_inline.GetLanguage,
	"jq":                     jq.GetLanguage,
	"jsdoc":                  jsdoc.GetLanguage,
	"json":                   json.GetLanguage,
	"json5":                  json5.GetLanguage,
	"jsonc":                  jsonc.GetLanguage,
	"jsonnet":                jsonnet.GetLanguage,
	"jule":                   jule.GetLanguage,
	"julia":                  julia.GetLanguage,
	"just":                   just.GetLanguage,
	"kamailio_cfg":           kamailio_cfg.GetLanguage,
	"kanshi":                 kanshi.GetLanguage,
	"kappa":                  kappa.GetLanguage,
	"kcl":                    kcl.GetLanguage,
	"kconfig":                kconfig.GetLanguage,
	"kdl":                    kdl.GetLanguage,
	"koan":                   koan.GetLanguage,
	"koka":                   koka.GetLanguage,
	"kon":                    kon.GetLanguage,
	"kos":                    kos.GetLanguage,
	"kotlin":                 kotlin.GetLanguage,
	"koto":                   koto.GetLanguage,
	"kusto":                  kusto.GetLanguage,
	"lalrpop":                lalrpop.GetLanguage,
	"lart":                   lart.GetLanguage,
	"lat":                    lat.GetLanguage,
	"latex":                  latex.GetLanguage,
	"latte":                  latte.GetLanguage,
	"ldg":                    ldg.GetLanguage,
	"ledger":                 ledger.GetLanguage,
	"leo":                    leo.GetLanguage,
	"lexc":                   lexc.GetLanguage,
	"lexd":                   lexd.GetLanguage,
	"lilypond":               lilypond.GetLanguage,
	"lilypond_scheme":        lilypond_scheme.GetLanguage,
	"linkerscript":           linkerscript.GetLanguage,
	"liquid":                 liquid.GetLanguage,
	"liquidsoap":             liquidsoap.GetLanguage,
	"lithia":                 lithia.GetLanguage,
	"llvm":                   llvm.GetLanguage,
	"lookml":                 lookml.GetLanguage,
	"lox":                    lox.GetLanguage,
	"lua":                    lua.GetLanguage,
	"luadoc":                 luadoc.GetLanguage,
	"luap":                   luap.GetLanguage,
	"luau":                   luau.GetLanguage,
	"m68k":                   m68k.GetLanguage,
	"magik":                  magik.GetLanguage,
	"make":                   make.GetLanguage,
	"mandbconfig":            mandbconfig.GetLanguage,
	"markdown":               markdown.GetLanguage,
	"markdown_inline":        markdown_inline.GetLanguage,
	"marte":                  marte.GetLanguage,
	"matlab":                 matlab.GetLanguage,
	"mcfuncx":                mcfuncx.GetLanguage,
	"menhir":                 menhir.GetLanguage,
	"merlin6502":             merlin6502.GetLanguage,
	"mermaid":                mermaid.GetLanguage,
	"meson":                  meson.GetLanguage,
	"mips":                   mips.GetLanguage,
	"mlir":                   mlir.GetLanguage,
	"modelica":               modelica.GetLanguage,
	"moonbit":                moonbit.GetLanguage,
	"moonscript":             moonscript.GetLanguage,
	"motoko":                 motoko.GetLanguage,
	"move":                   move.GetLanguage,
	"move_on_aptos":          move_on_aptos.GetLanguage,
	"mustache":               mustache.GetLanguage,
	"muttrc":                 muttrc.GetLanguage,
	"mxml":                   mxml.GetLanguage,
	"mylang":                 mylang.GetLanguage,
	"nasm":                   nasm.GetLanguage,
	"nelua":                  nelua.GetLanguage,
	"nesfab":                 nesfab.GetLanguage,
	"nftables":               nftables.GetLanguage,
	"nginx":                  nginx.GetLanguage,
	"nickel":                 nickel.GetLanguage,
	"nim":                    nim.GetLanguage,
	"nim_format_string":      nim_format_string.GetLanguage,
	"ninja":                  ninja.GetLanguage,
	"nix":                    nix.GetLanguage,
	"norg":                   norg.GetLanguage,
	"note":                   note.GetLanguage,
	"nqc":                    nqc.GetLanguage,
	"nu":                     nu.GetLanguage,
	"objc":                   objc.GetLanguage,
	"objdump":                objdump.GetLanguage,
	"ocaml":                  ocaml.GetLanguage,
	"ocaml_interface":        ocaml_interface.GetLanguage,
	"ocamllex":               ocamllex.GetLanguage,
	"odin":                   odin.GetLanguage,
	"org":                    org.GetLanguage,
	"ott":                    ott.GetLanguage,
	"pact":                   pact.GetLanguage,
	"pascal":                 pascal.GetLanguage,
	"passwd":                 passwd.GetLanguage,
	"pdxinfo":                pdxinfo.GetLanguage,
	"pem":                    pem.GetLanguage,
	"perl":                   perl.GetLanguage,
	"perm":                   perm.GetLanguage,
	"pgn":                    pgn.GetLanguage,
	"php":                    php.GetLanguage,
	"php_only":               php_only.GetLanguage,
	"phpdoc":                 phpdoc.GetLanguage,
	"pic":                    pic.GetLanguage,
	"pint":                   pint.GetLanguage,
	"pioasm":                 pioasm.GetLanguage,
	"pkl":                    pkl.GetLanguage,
	"plantuml":               plantuml.GetLanguage,
	"po":                     po.GetLanguage,
	"pod":                    pod.GetLanguage,
	"poe_filter":             poe_filter.GetLanguage,
	"pony":                   pony.GetLanguage,
	"postscript":             postscript.GetLanguage,
	"poweron":                poweron.GetLanguage,
	"powershell":             powershell.GetLanguage,
	"printf":                 printf.GetLanguage,
	"prisma":                 prisma.GetLanguage,
	"problog":                problog.GetLanguage,
	"prolog":                 prolog.GetLanguage,
	"promql":                 promql.GetLanguage,
	"properties":             properties.GetLanguage,
	"proto":                  proto.GetLanguage,
	"proxima":                proxima.GetLanguage,
	"prql":                   prql.GetLanguage,
	"psv":                    psv.GetLanguage,
	"pug":                    pug.GetLanguage,
	"puppet":                 puppet.GetLanguage,
	"purescript":             purescript.GetLanguage,
	"pymanifest":             pymanifest.GetLanguage,
	"pyrope":                 pyrope.GetLanguage,
	"python":                 python.GetLanguage,
	"qbe":                    qbe.GetLanguage,
	"ql":                     ql.GetLanguage,
	"qmldir":                 qmldir.GetLanguage,
	"qmljs":                  qmljs.GetLanguage,
	"quakec":                 quakec.GetLanguage,
	"query":                  query.GetLanguage,
	"quint":                  quint.GetLanguage,
	"r":                      r.GetLanguage,
	"racket":                 racket.GetLanguage,
	"ralph":                  ralph.GetLanguage,
	"rasi":                   rasi.GetLanguage,
	"razor":                  razor.GetLanguage,
	"rbs":                    rbs.GetLanguage,
	"rcl":                    rcl.GetLanguage,
	"re2c":                   re2c.GetLanguage,
	"readline":               readline.GetLanguage,
	"regex":                  regex.GetLanguage,
	"rego":                   rego.GetLanguage,
	"requirements":           requirements.GetLanguage,
	"rescript":               rescript.GetLanguage,
	"risor":                  risor.GetLanguage,
	"rnoweb":                 rnoweb.GetLanguage,
	"robot":                  robot.GetLanguage,
	"robots":                 robots.GetLanguage,
	"roc":                    roc.GetLanguage,
	"ron":                    ron.GetLanguage,
	"rstml":                  rstml.GetLanguage,
	"rsx":                    rsx.GetLanguage,
	"rtx":                    rtx.GetLanguage,
	"ruby":                   ruby.GetLanguage,
	"runescript":             runescript.GetLanguage,
	"rust":                   rust.GetLanguage,
	"rust_with_rstml":        rust_with_rstml.GetLanguage,
	"sage":                   sage.GetLanguage,
	"scala":                  scala.GetLanguage,
	"scfg":                   scfg.GetLanguage,
	"scheme":                 scheme.GetLanguage,
	"scss":                   scss.GetLanguage,
	"sdml":                   sdml.GetLanguage,
	"sflog":                  sflog.GetLanguage,
	"shosts":                 shosts.GetLanguage,
	"simula":                 simula.GetLanguage,
	"sincere":                sincere.GetLanguage,
	"slang":                  slang.GetLanguage,
	"slim":                   slim.GetLanguage,
	"slint":                  slint.GetLanguage,
	"smali":                  smali.GetLanguage,
	"smith":                  smith.GetLanguage,
	"smithy":                 smithy.GetLanguage,
	"sml":                    sml.GetLanguage,
	"snakemake":              snakemake.GetLanguage,
	"snl":                    snl.GetLanguage,
	"sol":                    sol.GetLanguage,
	"solidity":               solidity.GetLanguage,
	"sop":                    sop.GetLanguage,
	"soql":                   soql.GetLanguage,
	"sosl":                   sosl.GetLanguage,
	"sourcepawn":             sourcepawn.GetLanguage,
	"sparql":                 sparql.GetLanguage,
	"spicy":                  spicy.GetLanguage,
	"sql":                    sql.GetLanguage,
	"sql_bigquery":           sql_bigquery.GetLanguage,
	"sqlite":                 sqlite.GetLanguage,
	"squirrel":               squirrel.GetLanguage,
	"ssh_client_config":      ssh_client_config.GetLanguage,
	"ssh_config":             ssh_config.GetLanguage,
	"starlark":               starlark.GetLanguage,
	"strace":                 strace.GetLanguage,
	"streamdevice_proto":     streamdevice_proto.GetLanguage,
	"structurizr":            structurizr.GetLanguage,
	"styled":                 styled.GetLanguage,
	"supercollider":          supercollider.GetLanguage,
	"superhtml":              superhtml.GetLanguage,
	"surface":                surface.GetLanguage,
	"surrealql":              surrealql.GetLanguage,
	"sus":                    sus.GetLanguage,
	"svelte":                 svelte.GetLanguage,
	"sway":                   sway.GetLanguage,
	"swift":                  swift.GetLanguage,
	"sxhkdrc":                sxhkdrc.GetLanguage,
	"syphon":                 syphon.GetLanguage,
	"systemtap":              systemtap.GetLanguage,
	"systemverilog":          systemverilog.GetLanguage,
	"t32":                    t32.GetLanguage,
	"tablegen":               tablegen.GetLanguage,
	"tact":                   tact.GetLanguage,
	"talon":                  talon.GetLanguage,
	"tcl":                    tcl.GetLanguage,
	"teal":                   teal.GetLanguage,
	"templ":                  templ.GetLanguage,
	"tera":                   tera.GetLanguage,
	"terra":                  terra.GetLanguage,
	"terraform":              hcl.GetLanguage,
	"test":                   test.GetLanguage,
	"textproto":              textproto.GetLanguage,
	"thrift":                 thrift.GetLanguage,
	"tiger":                  tiger.GetLanguage,
	"tlaplus":                tlaplus.GetLanguage,
	"tmux":                   tmux.GetLanguage,
	"tnsl":                   tnsl.GetLanguage,
	"todolang":               todolang.GetLanguage,
	"todotxt":                todotxt.GetLanguage,
	"toml":                   toml.GetLanguage,
	"tort":                   tort.GetLanguage,
	"tsv":                    tsv.GetLanguage,
	"tsx":                    tsx.GetLanguage,
	"tup":                    tup.GetLanguage,
	"turtle":                 turtle.GetLanguage,
	"twig":                   twig.GetLanguage,
	"twolc":                  twolc.GetLanguage,
	"typescript":             typescript.GetLanguage,
	"typespec":               typespec.GetLanguage,
	"typoscript":             typoscript.GetLanguage,
	"typst":                  typst.GetLanguage,
	"udev":                   udev.GetLanguage,
	"uiua":                   uiua.GetLanguage,
	"ungrammar":              ungrammar.GetLanguage,
	"unison":                 unison.GetLanguage,
	"ursa":                   ursa.GetLanguage,
	"usd":                    usd.GetLanguage,
	"uxntal":                 uxntal.GetLanguage,
	"v":                      v.GetLanguage,
	"vala":                   vala.GetLanguage,
	"vento":                  vento.GetLanguage,
	"verilog":                verilog.GetLanguage,
	"vhdl":                   vhdl.GetLanguage,
	"vhs":                    vhs.GetLanguage,
	"vim":                    vim.GetLanguage,
	"vimdoc":                 vimdoc.GetLanguage,
	"virdant":                virdant.GetLanguage,
	"virgil":                 virgil.GetLanguage,
	"vrl":                    vrl.GetLanguage,
	"vue":                    vue.GetLanguage,
	"walnut":                 walnut.GetLanguage,
	"wbproto":                wbproto.GetLanguage,
	"wgsl":                   wgsl.GetLanguage,
	"wgsl_bevy":              wgsl_bevy.GetLanguage,
	"wing":                   wing.GetLanguage,
	"wit":                    wit.GetLanguage,
	"woml":                   woml.GetLanguage,
	"wtf":                    wtf.GetLanguage,
	"xcompose":               xcompose.GetLanguage,
	"xfst":                   xfst.GetLanguage,
	"xml":                    xml.GetLanguage,
	"xresources":             xresources.GetLanguage,
	"yadl":                   yadl.GetLanguage,
	"yaml":                   yaml.GetLanguage,
	"yang":                   yang.GetLanguage,
	"yaral":                  yaral.GetLanguage,
	"yarnlock":               yarnlock.GetLanguage,
	"yuck":                   yuck.GetLanguage,
	"zathurarc":              zathurarc.GetLanguage,
	"zeek":                   zeek.GetLanguage,
	"zig":                    zig.GetLanguage,
	"ziggy":                  ziggy.GetLanguage,
	"ziggy_schema":           ziggy_schema.GetLanguage,
	"zoomba":                 zoomba.GetLanguage,
}

var queryFuncs = map[string]func(string, ...byte) []byte{
	"abap":                   abap.GetQuery,
	"abl":                    abl.GetQuery,
	"ada":                    ada.GetQuery,
	"agda":                   agda.GetQuery,
	"aiken":                  aiken.GetQuery,
	"al":                     al.GetQuery,
	"alcha":                  alcha.GetQuery,
	"amber":                  amber.GetQuery,
	"angular":                angular.GetQuery,
	"animationtxt":           animationtxt.GetQuery,
	"ansible":                ansible.GetQuery,
	"anzu":                   anzu.GetQuery,
	"apex":                   apex.GetQuery,
	"applesoft":              applesoft.GetQuery,
	"arduino":                arduino.GetQuery,
	"asciidoc":               asciidoc.GetQuery,
	"asciidoc_inline":        asciidoc_inline.GetQuery,
	"asm":                    asm.GetQuery,
	"astro":                  astro.GetQuery,
	"august":                 august.GetQuery,
	"authzed":                authzed.GetQuery,
	"awa5_rs":                awa5_rs.GetQuery,
	"awatalk":                awatalk.GetQuery,
	"awk":                    awk.GetQuery,
	"bara":                   bara.GetQuery,
	"barq":                   barq.GetQuery,
	"bash":                   bash.GetQuery,
	"bass":                   bass.GetQuery,
	"beancount":              beancount.GetQuery,
	"bend":                   bend.GetQuery,
	"bibtex":                 bibtex.GetQuery,
	"bicep":                  bicep.GetQuery,
	"bitbake":                bitbake.GetQuery,
	"blade":                  blade.GetQuery,
	"blueprint":              blueprint.GetQuery,
	"bluespec":               bluespec.GetQuery,
	"bond":                   bond.GetQuery,
	"bp":                     bp.GetQuery,
	"bqn":                    bqn.GetQuery,
	"brightscript":           brightscript.GetQuery,
	"bruno":                  bruno.GetQuery,
	"c":                      c.GetQuery,
	"c3":                     c3.GetQuery,
	"c_sharp":                c_sharp.GetQuery,
	"ca65":                   ca65.GetQuery,
	"cairo":                  cairo.GetQuery,
	"calc":                   calc.GetQuery,
	"capnp":                  capnp.GetQuery,
	"carbon":                 carbon.GetQuery,
	"cds":                    cds.GetQuery,
	"cedar":                  cedar.GetQuery,
	"cel":                    cel.GetQuery,
	"cfengine":               cfengine.GetQuery,
	"cg":                     cg.GetQuery,
	"cgsql":                  cgsql.GetQuery,
	"chatito":                chatito.GetQuery,
	"circom":                 circom.GetQuery,
	"clarity":                clarity.GetQuery,
	"cleancopy":              cleancopy.GetQuery,
	"clingo":                 clingo.GetQuery,
	"clojure":                clojure.GetQuery,
	"cloudflare":             cloudflare.GetQuery,
	"cmake":                  cmake.GetQuery,
	"cmdl":                   cmdl.GetQuery,
	"cobol":                  cobol.GetQuery,
	"cognate":                cognate.GetQuery,
	"comment":                comment.GetQuery,
	"commonlisp":             commonlisp.GetQuery,
	"context":                ConTeXt.GetQuery,
	"cooklang":               cooklang.GetQuery,
	"core":                   core.GetQuery,
	"corn":                   corn.GetQuery,
	"cpon":                   cpon.GetQuery,
	"cpp":                    cpp.GetQuery,
	"crystal":                crystal.GetQuery,
	"css":                    css.GetQuery,
	"csv":                    csv.GetQuery,
	"cuda":                   cuda.GetQuery,
	"cue":                    cue.GetQuery,
	"cylc":                   cylc.GetQuery,
	"d":                      d.GetQuery,
	"d2":                     d2.GetQuery,
	"dale":                   dale.GetQuery,
	"dart":                   dart.GetQuery,
	"dataweave":              dataweave.GetQuery,
	"dbml":                   dbml.GetQuery,
	"desktop":                desktop.GetQuery,
	"devicetree":             devicetree.GetQuery,
	"dezyne":                 dezyne.GetQuery,
	"dhall":                  dhall.GetQuery,
	"diff":                   diff.GetQuery,
	"disassembly":            disassembly.GetQuery,
	"djot":                   djot.GetQuery,
	"djot_inline":            djot_inline.GetQuery,
	"dockerfile":             dockerfile.GetQuery,
	"dot":                    dot.GetQuery,
	"dotenv":                 dotenv.GetQuery,
	"doxygen":                doxygen.GetQuery,
	"dtd":                    dtd.GetQuery,
	"dune":                   dune.GetQuery,
	"earthfile":              earthfile.GetQuery,
	"ebnf":                   ebnf.GetQuery,
	"editorconfig":           editorconfig.GetQuery,
	"eds":                    eds.GetQuery,
	"eex":                    eex.GetQuery,
	"effekt":                 effekt.GetQuery,
	"eiffel":                 eiffel.GetQuery,
	"elisp":                  elisp.GetQuery,
	"elixir":                 elixir.GetQuery,
	"elm":                    elm.GetQuery,
	"elsa":                   elsa.GetQuery,
	"elvish":                 elvish.GetQuery,
	"embedded_template":      embedded_template.GetQuery,
	"epics_cmd":              epics_cmd.GetQuery,
	"epics_db":               epics_db.GetQuery,
	"epics_msi_substitution": epics_msi_substitution.GetQuery,
	"epics_msi_template":     epics_msi_template.GetQuery,
	"erlang":                 erlang.GetQuery,
	"facility":               facility.GetQuery,
	"factor":                 factor.GetQuery,
	"familymarkup":           familymarkup.GetQuery,
	"fastbuild":              fastbuild.GetQuery,
	"faust":                  faust.GetQuery,
	"fe":                     fe.GetQuery,
	"fennel":                 fennel.GetQuery,
	"fidl":                   fidl.GetQuery,
	"fin":                    fin.GetQuery,
	"firrtl":                 firrtl.GetQuery,
	"fish":                   fish.GetQuery,
	"flamingo":               flamingo.GetQuery,
	"fluentbit":              fluentbit.GetQuery,
	"foam":                   foam.GetQuery,
	"forth":                  forth.GetQuery,
	"fortran":                fortran.GetQuery,
	"frostlang":              frostlang.GetQuery,
	"fsh":                    fsh.GetQuery,
	"fsharp":                 fsharp.GetQuery,
	"fsharp_signature":       fsharp_signature.GetQuery,
	"func":                   FunC.GetQuery,
	"fusion":                 fusion.GetQuery,
	"gab":                    gab.GetQuery,
	"galvan":                 galvan.GetQuery,
	"gap":                    gap.GetQuery,
	"gaptst":                 gaptst.GetQuery,
	"gdscript":               gdscript.GetQuery,
	"gdshader":               gdshader.GetQuery,
	"gemfilelock":            gemfilelock.GetQuery,
	"gherkin":                gherkin.GetQuery,
	"ghostty":                ghostty.GetQuery,
	"git_config":             git_config.GetQuery,
	"git_rebase":             git_rebase.GetQuery,
	"gitattributes":          gitattributes.GetQuery,
	"gitcommit":              gitcommit.GetQuery,
	"gitignore":              gitignore.GetQuery,
	"gleam":                  gleam.GetQuery,
	"glimmer":                glimmer.GetQuery,
	"glimmer_javascript":     glimmer_javascript.GetQuery,
	"glimmer_typescript":     glimmer_typescript.GetQuery,
	"glint":                  glint.GetQuery,
	"glsl":                   glsl.GetQuery,
	"gn":                     gn.GetQuery,
	"gnuplot":                gnuplot.GetQuery,
	"go":                     Go.GetQuery,
	"gobra":                  gobra.GetQuery,
	"goctl":                  goctl.GetQuery,
	"godot_resource":         godot_resource.GetQuery,
	"gomod":                  gomod.GetQuery,
	"gooscript":              gooscript.GetQuery,
	"gosum":                  gosum.GetQuery,
	"gotmpl":                 gotmpl.GetQuery,
	"gowork":                 gowork.GetQuery,
	"gpg":                    gpg.GetQuery,
	"gram":                   gram.GetQuery,
	"graphql":                graphql.GetQuery,
	"gren":                   gren.GetQuery,
	"gritql":                 gritql.GetQuery,
	"groovy":                 groovy.GetQuery,
	"gstlaunch":              gstlaunch.GetQuery,
	"hack":                   hack.GetQuery,
	"haml":                   haml.GetQuery,
	"hare":                   hare.GetQuery,
	"haskell":                haskell.GetQuery,
	"haskell_persistent":     haskell_persistent.GetQuery,
	"haxe":                   haxe.GetQuery,
	"hcl":                    hcl.GetQuery,
	"heex":                   heex.GetQuery,
	"helm":                   helm.GetQuery,
	"hjson":                  hjson.GetQuery,
	"hl7":                    hl7.GetQuery,
	"hlsl":                   hlsl.GetQuery,
	"hlsplaylist":            hlsplaylist.GetQuery,
	"hocon":                  hocon.GetQuery,
	"hoon":                   hoon.GetQuery,
	"html":                   html.GetQuery,
	"htmlaskama":             htmlaskama.GetQuery,
	"htmldjango":             htmldjango.GetQuery,
	"http":                   http.GetQuery,
	"http2":                  http2.GetQuery,
	"hungarian":              hungarian.GetQuery,
	"hurl":                   hurl.GetQuery,
	"hy":                     hy.GetQuery,
	"hygen_template":         hygen_template.GetQuery,
	"hylo":                   hylo.GetQuery,
	"hyprlang":               hyprlang.GetQuery,
	"i3config":               i3config.GetQuery,
	"idl":                    idl.GetQuery,
	"idris":                  idris.GetQuery,
	"ignis":                  ignis.GetQuery,
	"ini":                    ini.GetQuery,
	"ink":                    ink.GetQuery,
	"inko":                   inko.GetQuery,
	"integerbasic":           integerbasic.GetQuery,
	"ipkg":                   ipkg.GetQuery,
	"ispc":                   ispc.GetQuery,
	"jai":                    jai.GetQuery,
	"janet":                  janet.GetQuery,
	"jasmin":                 jasmin.GetQuery,
	"java":                   java.GetQuery,
	"javascript":             javascript.GetQuery,
	"jinja":                  jinja.GetQuery,
	"jinja_inline":           jinja_inline.GetQuery,
	"jq":                     jq.GetQuery,
	"jsdoc":                  jsdoc.GetQuery,
	"json":                   json.GetQuery,
	"json5":                  json5.GetQuery,
	"jsonc":                  jsonc.GetQuery,
	"jsonnet":                jsonnet.GetQuery,
	"jule":                   jule.GetQuery,
	"julia":                  julia.GetQuery,
	"just":                   just.GetQuery,
	"kamailio_cfg":           kamailio_cfg.GetQuery,
	"kanshi":                 kanshi.GetQuery,
	"kappa":                  kappa.GetQuery,
	"kcl":                    kcl.GetQuery,
	"kconfig":                kconfig.GetQuery,
	"kdl":                    kdl.GetQuery,
	"koan":                   koan.GetQuery,
	"koka":                   koka.GetQuery,
	"kon":                    kon.GetQuery,
	"kos":                    kos.GetQuery,
	"kotlin":                 kotlin.GetQuery,
	"koto":                   koto.GetQuery,
	"kusto":                  kusto.GetQuery,
	"lalrpop":                lalrpop.GetQuery,
	"lart":                   lart.GetQuery,
	"lat":                    lat.GetQuery,
	"latex":                  latex.GetQuery,
	"latte":                  latte.GetQuery,
	"ldg":                    ldg.GetQuery,
	"ledger":                 ledger.GetQuery,
	"leo":                    leo.GetQuery,
	"lexc":                   lexc.GetQuery,
	"lexd":                   lexd.GetQuery,
	"lilypond":               lilypond.GetQuery,
	"lilypond_scheme":        lilypond_scheme.GetQuery,
	"linkerscript":           linkerscript.GetQuery,
	"liquid":                 liquid.GetQuery,
	"liquidsoap":             liquidsoap.GetQuery,
	"lithia":                 lithia.GetQuery,
	"llvm":                   llvm.GetQuery,
	"lookml":                 lookml.GetQuery,
	"lox":                    lox.GetQuery,
	"lua":                    lua.GetQuery,
	"luadoc":                 luadoc.GetQuery,
	"luap":                   luap.GetQuery,
	"luau":                   luau.GetQuery,
	"m68k":                   m68k.GetQuery,
	"magik":                  magik.GetQuery,
	"make":                   make.GetQuery,
	"mandbconfig":            mandbconfig.GetQuery,
	"markdown":               markdown.GetQuery,
	"markdown_inline":        markdown_inline.GetQuery,
	"marte":                  marte.GetQuery,
	"matlab":                 matlab.GetQuery,
	"mcfuncx":                mcfuncx.GetQuery,
	"menhir":                 menhir.GetQuery,
	"merlin6502":             merlin6502.GetQuery,
	"mermaid":                mermaid.GetQuery,
	"meson":                  meson.GetQuery,
	"mips":                   mips.GetQuery,
	"mlir":                   mlir.GetQuery,
	"modelica":               modelica.GetQuery,
	"moonbit":                moonbit.GetQuery,
	"moonscript":             moonscript.GetQuery,
	"motoko":                 motoko.GetQuery,
	"move":                   move.GetQuery,
	"move_on_aptos":          move_on_aptos.GetQuery,
	"mustache":               mustache.GetQuery,
	"muttrc":                 muttrc.GetQuery,
	"mxml":                   mxml.GetQuery,
	"mylang":                 mylang.GetQuery,
	"nasm":                   nasm.GetQuery,
	"nelua":                  nelua.GetQuery,
	"nesfab":                 nesfab.GetQuery,
	"nftables":               nftables.GetQuery,
	"nginx":                  nginx.GetQuery,
	"nickel":                 nickel.GetQuery,
	"nim":                    nim.GetQuery,
	"nim_format_string":      nim_format_string.GetQuery,
	"ninja":                  ninja.GetQuery,
	"nix":                    nix.GetQuery,
	"norg":                   norg.GetQuery,
	"note":                   note.GetQuery,
	"nqc":                    nqc.GetQuery,
	"nu":                     nu.GetQuery,
	"objc":                   objc.GetQuery,
	"objdump":                objdump.GetQuery,
	"ocaml":                  ocaml.GetQuery,
	"ocaml_interface":        ocaml_interface.GetQuery,
	"ocamllex":               ocamllex.GetQuery,
	"odin":                   odin.GetQuery,
	"org":                    org.GetQuery,
	"ott":                    ott.GetQuery,
	"pact":                   pact.GetQuery,
	"pascal":                 pascal.GetQuery,
	"passwd":                 passwd.GetQuery,
	"pdxinfo":                pdxinfo.GetQuery,
	"pem":                    pem.GetQuery,
	"perl":                   perl.GetQuery,
	"perm":                   perm.GetQuery,
	"pgn":                    pgn.GetQuery,
	"php":                    php.GetQuery,
	"php_only":               php_only.GetQuery,
	"phpdoc":                 phpdoc.GetQuery,
	"pic":                    pic.GetQuery,
	"pint":                   pint.GetQuery,
	"pioasm":                 pioasm.GetQuery,
	"pkl":                    pkl.GetQuery,
	"plantuml":               plantuml.GetQuery,
	"po":                     po.GetQuery,
	"pod":                    pod.GetQuery,
	"poe_filter":             poe_filter.GetQuery,
	"pony":                   pony.GetQuery,
	"postscript":             postscript.GetQuery,
	"poweron":                poweron.GetQuery,
	"powershell":             powershell.GetQuery,
	"printf":                 printf.GetQuery,
	"prisma":                 prisma.GetQuery,
	"problog":                problog.GetQuery,
	"prolog":                 prolog.GetQuery,
	"promql":                 promql.GetQuery,
	"properties":             properties.GetQuery,
	"proto":                  proto.GetQuery,
	"proxima":                proxima.GetQuery,
	"prql":                   prql.GetQuery,
	"psv":                    psv.GetQuery,
	"pug":                    pug.GetQuery,
	"puppet":                 puppet.GetQuery,
	"purescript":             purescript.GetQuery,
	"pymanifest":             pymanifest.GetQuery,
	"pyrope":                 pyrope.GetQuery,
	"python":                 python.GetQuery,
	"qbe":                    qbe.GetQuery,
	"ql":                     ql.GetQuery,
	"qmldir":                 qmldir.GetQuery,
	"qmljs":                  qmljs.GetQuery,
	"quakec":                 quakec.GetQuery,
	"query":                  query.GetQuery,
	"quint":                  quint.GetQuery,
	"r":                      r.GetQuery,
	"racket":                 racket.GetQuery,
	"ralph":                  ralph.GetQuery,
	"rasi":                   rasi.GetQuery,
	"razor":                  razor.GetQuery,
	"rbs":                    rbs.GetQuery,
	"rcl":                    rcl.GetQuery,
	"re2c":                   re2c.GetQuery,
	"readline":               readline.GetQuery,
	"regex":                  regex.GetQuery,
	"rego":                   rego.GetQuery,
	"requirements":           requirements.GetQuery,
	"rescript":               rescript.GetQuery,
	"risor":                  risor.GetQuery,
	"rnoweb":                 rnoweb.GetQuery,
	"robot":                  robot.GetQuery,
	"robots":                 robots.GetQuery,
	"roc":                    roc.GetQuery,
	"ron":                    ron.GetQuery,
	"rstml":                  rstml.GetQuery,
	"rsx":                    rsx.GetQuery,
	"rtx":                    rtx.GetQuery,
	"ruby":                   ruby.GetQuery,
	"runescript":             runescript.GetQuery,
	"rust":                   rust.GetQuery,
	"rust_with_rstml":        rust_with_rstml.GetQuery,
	"sage":                   sage.GetQuery,
	"scala":                  scala.GetQuery,
	"scfg":                   scfg.GetQuery,
	"scheme":                 scheme.GetQuery,
	"scss":                   scss.GetQuery,
	"sdml":                   sdml.GetQuery,
	"sflog":                  sflog.GetQuery,
	"shosts":                 shosts.GetQuery,
	"simula":                 simula.GetQuery,
	"sincere":                sincere.GetQuery,
	"slang":                  slang.GetQuery,
	"slim":                   slim.GetQuery,
	"slint":                  slint.GetQuery,
	"smali":                  smali.GetQuery,
	"smith":                  smith.GetQuery,
	"smithy":                 smithy.GetQuery,
	"sml":                    sml.GetQuery,
	"snakemake":              snakemake.GetQuery,
	"snl":                    snl.GetQuery,
	"sol":                    sol.GetQuery,
	"solidity":               solidity.GetQuery,
	"sop":                    sop.GetQuery,
	"soql":                   soql.GetQuery,
	"sosl":                   sosl.GetQuery,
	"sourcepawn":             sourcepawn.GetQuery,
	"sparql":                 sparql.GetQuery,
	"spicy":                  spicy.GetQuery,
	"sql":                    sql.GetQuery,
	"sql_bigquery":           sql_bigquery.GetQuery,
	"sqlite":                 sqlite.GetQuery,
	"squirrel":               squirrel.GetQuery,
	"ssh_client_config":      ssh_client_config.GetQuery,
	"ssh_config":             ssh_config.GetQuery,
	"starlark":               starlark.GetQuery,
	"strace":                 strace.GetQuery,
	"streamdevice_proto":     streamdevice_proto.GetQuery,
	"structurizr":            structurizr.GetQuery,
	"styled":                 styled.GetQuery,
	"supercollider":          supercollider.GetQuery,
	"superhtml":              superhtml.GetQuery,
	"surface":                surface.GetQuery,
	"surrealql":              surrealql.GetQuery,
	"sus":                    sus.GetQuery,
	"svelte":                 svelte.GetQuery,
	"sway":                   sway.GetQuery,
	"swift":                  swift.GetQuery,
	"sxhkdrc":                sxhkdrc.GetQuery,
	"syphon":                 syphon.GetQuery,
	"systemtap":              systemtap.GetQuery,
	"systemverilog":          systemverilog.GetQuery,
	"t32":                    t32.GetQuery,
	"tablegen":               tablegen.GetQuery,
	"tact":                   tact.GetQuery,
	"talon":                  talon.GetQuery,
	"tcl":                    tcl.GetQuery,
	"teal":                   teal.GetQuery,
	"templ":                  templ.GetQuery,
	"tera":                   tera.GetQuery,
	"terra":                  terra.GetQuery,
	"terraform":              hcl.GetQuery,
	"test":                   test.GetQuery,
	"textproto":              textproto.GetQuery,
	"thrift":                 thrift.GetQuery,
	"tiger":                  tiger.GetQuery,
	"tlaplus":                tlaplus.GetQuery,
	"tmux":                   tmux.GetQuery,
	"tnsl":                   tnsl.GetQuery,
	"todolang":               todolang.GetQuery,
	"todotxt":                todotxt.GetQuery,
	"toml":                   toml.GetQuery,
	"tort":                   tort.GetQuery,
	"tsv":                    tsv.GetQuery,
	"tsx":                    tsx.GetQuery,
	"tup":                    tup.GetQuery,
	"turtle":                 turtle.GetQuery,
	"twig":                   twig.GetQuery,
	"twolc":                  twolc.GetQuery,
	"typescript":             typescript.GetQuery,
	"typespec":               typespec.GetQuery,
	"typoscript":             typoscript.GetQuery,
	"typst":                  typst.GetQuery,
	"udev":                   udev.GetQuery,
	"uiua":                   uiua.GetQuery,
	"ungrammar":              ungrammar.GetQuery,
	"unison":                 unison.GetQuery,
	"ursa":                   ursa.GetQuery,
	"usd":                    usd.GetQuery,
	"uxntal":                 uxntal.GetQuery,
	"v":                      v.GetQuery,
	"vala":                   vala.GetQuery,
	"vento":                  vento.GetQuery,
	"verilog":                verilog.GetQuery,
	"vhdl":                   vhdl.GetQuery,
	"vhs":                    vhs.GetQuery,
	"vim":                    vim.GetQuery,
	"vimdoc":                 vimdoc.GetQuery,
	"virdant":                virdant.GetQuery,
	"virgil":                 virgil.GetQuery,
	"vrl":                    vrl.GetQuery,
	"vue":                    vue.GetQuery,
	"walnut":                 walnut.GetQuery,
	"wbproto":                wbproto.GetQuery,
	"wgsl":                   wgsl.GetQuery,
	"wgsl_bevy":              wgsl_bevy.GetQuery,
	"wing":                   wing.GetQuery,
	"wit":                    wit.GetQuery,
	"woml":                   woml.GetQuery,
	"wtf":                    wtf.GetQuery,
	"xcompose":               xcompose.GetQuery,
	"xfst":                   xfst.GetQuery,
	"xml":                    xml.GetQuery,
	"xresources":             xresources.GetQuery,
	"yadl":                   yadl.GetQuery,
	"yaml":                   yaml.GetQuery,
	"yang":                   yang.GetQuery,
	"yaral":                  yaral.GetQuery,
	"yarnlock":               yarnlock.GetQuery,
	"yuck":                   yuck.GetQuery,
	"zathurarc":              zathurarc.GetQuery,
	"zeek":                   zeek.GetQuery,
	"zig":                    zig.GetQuery,
	"ziggy":                  ziggy.GetQuery,
	"ziggy_schema":           ziggy_schema.GetQuery,
	"zoomba":                 zoomba.GetQuery,
}

var (
	grammars grammar.Grammars
	// Making the colon optional is risky: most places use it AND
	// there are many places that do NOT use it and mean something else...
	rxInherits    = regexp.MustCompile(`^\s*;\s*inherits:?\s*(.*?)\n`)
	nvimRemaining = filepath.Join("internal", "queries", "nvim_remaining")
	cache         = sync.Map{}
)

//go:embed internal/queries/nvim_remaining/*/*.scm
var remainingQueries embed.FS

// GetLanguage returns the corresponding TS language function for given lang,
// and caches it so that language copies are not created unnecessarily.
func GetLanguage(lang string) (l *sitter.Language) {
	if x, ok := cache.Load(lang); ok {
		return x.(*sitter.Language) //nolint:forcetypeassert // safe
	}

	l = sitter.NewLanguage(languageFuncs[lang]())

	cache.Store(lang, l)

	return
}

// GetQuery returns (if it exists) the `kind`.scm query for `lang` language,
// using the DefaultPreference, resolving "inherits" directives, recursively.
// You should omit the ".scm" extension.
func GetQuery(lang, kind string, opts ...byte) (out []byte) {
	kind = strings.TrimSuffix(kind, ".scm") + ".scm"

	q := queryFuncs[lang]
	if q == nil {
		q = getQueryFromRemainingNvim(lang, opts...)
	}

	if q != nil {
		out = q(kind, opts...)
	}

	if len(out) == 0 {
		return
	}

	// FIXME: Temporary, until lua-match is implemented upstream.
	out = util.QueryLuaMatch2Match(out)

	mx := rxInherits.FindSubmatch(out)
	if mx == nil {
		return
	}

	inherited := strings.Split(string(mx[1]), ",")
	for _, in := range inherited {
		out2 := GetQuery(in, kind, opts...)
		if len(out2) == 0 {
			continue
		}

		out = slices.Concat(out2, []byte{10, 10}, out)
	}

	return
}

func getQueryFromRemainingNvim(lang string, opts ...byte) func(string, ...byte) []byte {
	if len(opts) > 0 && opts[0] == NativeOnly {
		return nil
	}

	return func(kind string, _ ...byte) (out []byte) {
		out, err := remainingQueries.ReadFile(filepath.Join(nvimRemaining, lang, kind))
		if err != nil || len(out) == 0 {
			// TODO: log somewhere/somehow.
			return nil
		}

		return
	}
}

// SupportedLanguages returns the list of supported languages' names.
func SupportedLanguages() []string {
	return grammars.Supported()
}

// SupportedLanguage checks if the given language is supported.
func SupportedLanguage(lang string) bool {
	return slices.Index(SupportedLanguages(), lang) >= 0
}

// Info returns the language parser (grammar) related information.
// TODO: Hmm, now that we also have queries, should it include info about them too?
// Or offer a similar function?
func Info(lang string) (gr *grammar.Grammar) {
	gr, _ = grammars.Find(lang) //nolint:errcheck // the returned grammar is a pointer, will only be set if there is no error.
	return
}

func init() {
	if err := enc_json.Unmarshal(info, &grammars); err != nil {
		panic(err)
	}

	if err := ft.load(ftDetect); err != nil {
		panic(err)
	}
}

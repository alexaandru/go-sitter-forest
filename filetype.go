package forest

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"slices"
	"strings"
)

// TODO: Handle languages sharing file extension
// (.fs=Forth+F#, .v=Verilog+V, .ldg=ldg+ledger, .scm=scheme+query, etc.).
type ftDetector struct {
	byGlob,
	byPath,
	byBasename,
	byExt map[string]string
}

var (
	sep = string(os.PathSeparator)

	filetypes = ftDetector{
		byGlob: map[string]string{
			"queries/*.scm":            "query",
			"queries/*/*.scm":          "query",
			"queries/*/*/*.scm":        "query",
			"go-sitter-forest/*/*.scm": "query",
		},
		byPath:     map[string]string{},
		byBasename: map[string]string{},
		byExt:      map[string]string{},
	}

	ftByBasename = map[string][]string{
		"clojure":    base("init.trans", ".trans"),
		"dockerfile": base("Containerfile", "Dockerfile", "dockerfile"),
		"doxygen":    base("Doxyfile"),
		"gomod":      base("go.mod"),
		"gosum":      base("go.sum"),
		"gowork":     base("go.work"),
		"make":       base("Makefile", "makefile"),
		"passwd":     base("passwd", "passwd-"),
		"ruby":       base("Rakefile", "Gemfile", "Puppetfile"),
		"gitcommit":  base("TAG_EDITMSG", "MERGE_MSG", "COMMIT_EDITMSG", "NOTES_EDITMSG", "EDIT_DESCRIPTION"),
	}

	ftByExt = map[string][]string{
		"abap":               ext("abap"),
		"ada":                ext("ada", "adb", "ads", "gpr"),
		"agda":               ext("agda"),
		"aiken":              ext("aiken"),
		"amber":              ext("amber"),
		"angular":            ext("angular"),
		"apex":               ext("apex"),
		"arduino":            ext("ino", "pde"),
		"asm":                ext("asm"),
		"astro":              ext("astro"),
		"august":             ext("august"),
		"authzed":            ext("authzed"),
		"awk":                ext("awk", "gawk"),
		"bash":               ext("sh"),
		"bass":               ext("bass"),
		"beancount":          ext("beancount"),
		"bend":               ext("bend"),
		"bibtex":             ext("bib"),
		"bicep":              ext("bicep", "bicepparam"),
		"bitbake":            ext("bb", "bbappend", "bbclass"),
		"blade":              ext("blade"),
		"blueprint":          ext("blp"),
		"bluespec":           ext("bsv"),
		"bp":                 ext("bp"),
		"brightscript":       ext("brs"),
		"c":                  ext("c", "h", "hh"),
		"c_sharp":            ext("cs"),
		"ca65":               ext("ca65"),
		"cairo":              ext("cairo"),
		"calc":               ext("calc"),
		"capnp":              ext("capnp"),
		"cds":                ext("cds"),
		"cedar":              ext("cedar"),
		"cel":                ext("cel"),
		"cg":                 ext("cg"),
		"chatito":            ext("chatito"),
		"circom":             ext("circom"),
		"clarity":            ext("clarity"),
		"cleancopy":          ext("cleancopy"),
		"clingo":             ext("clingo"),
		"clojure":            ext("clj", "cljc", "cljs", "cljx"),
		"cmake":              ext("cmake"),
		"cobol":              ext("cbl", "ccp", "cob"),
		"cognate":            ext("cognate"),
		"comment":            ext("comment"),
		"commonlisp":         ext("cl", "el", "lisp"),
		"context":            ext("mkii", "mkiv", "mklx", "mkvi", "mkxl"),
		"cooklang":           ext("cook"),
		"corn":               ext("corn"),
		"cpon":               ext("cpon"),
		"cpp":                ext("C", "H", "c++", "cc", "cpp", "hpp"),
		"crystal":            ext("cr"),
		"css":                ext("css"),
		"csv":                ext("csv"),
		"cuda":               ext("cu", "cuh"),
		"cue":                ext("cue"),
		"d":                  ext("d"),
		"dale":               ext("dale"),
		"dart":               ext("dart", "drt"),
		"devicetree":         ext("dts"),
		"dhall":              ext("dhall"),
		"diff":               ext("diff"),
		"disassembly":        ext("disassembly"),
		"djot":               ext("djot"),
		"dot":                ext("dot"),
		"dotenv":             ext("dotenv", "env"),
		"dtd":                ext("dtd"),
		"earthfile":          ext("earthfile"),
		"ebnf":               ext("ebnf"),
		"editorconfig":       ext("editorconfig"),
		"eds":                ext("eds"),
		"eex":                ext("eex"),
		"elixir":             ext("ex", "exs"),
		"elm":                ext("elm"),
		"elsa":               ext("elsa"),
		"elvish":             ext("elv"),
		"embedded_template":  ext("embedded_template"),
		"erlang":             ext("erl", "hrl"),
		"facility":           ext("facility"),
		"familymarkup":       ext("familymarkup"),
		"fastbuild":          ext("fastbuild"),
		"faust":              ext("faust"),
		"fennel":             ext("fnl"),
		"fidl":               ext("fidl"),
		"fin":                ext("fin"),
		"firrtl":             ext("fir"),
		"fish":               ext("fish"),
		"flamingo":           ext("flamingo"),
		"fluentbit":          ext("fluentbit"),
		"foam":               ext("foam"),
		"forth":              ext("4th", "fth"),
		"fortran":            ext("F03", "F08", "F77", "F90", "F95", "FOR", "FPP", "FTN", "f", "f03", "f08", "f77", "f90", "f95", "for", "fortran", "fpp", "ftn"),
		"fsh":                ext("fsh"),
		"func":               ext("func"),
		"fusion":             ext("fusion"),
		"gdscript":           ext("gd"),
		"gdshader":           ext("gdshader", "shader"),
		"gemfilelock":        ext("gemfilelock"),
		"gherkin":            ext("gherkin"),
		"git_config":         ext("git_config"),
		"git_rebase":         ext("git_rebase"),
		"gitattributes":      ext("gitattributes"),
		"gitignore":          ext("gitignore"),
		"gleam":              ext("gleam"),
		"glimmer":            ext("gjs", "gts"),
		"glint":              ext("glint"),
		"glsl":               ext("glsl"),
		"gn":                 ext("gn", "gni"),
		"gnuplot":            ext("gnuplot", "gpi"),
		"go":                 ext("go"),
		"gobra":              ext("gobra"),
		"goctl":              ext("goctl"),
		"godot_resource":     ext("godot_resource"),
		"gotmpl":             ext("tmpl"),
		"gpg":                ext("gpg"),
		"graphql":            ext("gql", "graphql", "graphqls"),
		"gren":               ext("gren"),
		"groovy":             ext("gradle", "groovy"),
		"gstlaunch":          ext("gstlaunch"),
		"hack":               ext("hack", "hackpartial"),
		"haml":               ext("haml"),
		"hare":               ext("ha"),
		"haskell":            ext("hs", "hs-boot", "hsc", "hsig"),
		"haskell_persistent": ext("persistentmodels"),
		"hcl":                ext("hcl"),
		"heex":               ext("heex"),
		"helm":               ext("helm"),
		"hjson":              ext("hjson"),
		"hlsl":               ext("hlsl"),
		"hlsplaylist":        ext("hlsplaylist"),
		"hocon":              ext("hocon"),
		"hoon":               ext("hoon"),
		"html":               ext("htm", "html"),
		"htmlaskama":         ext("htmlaskama"),
		"htmldjango":         ext("htmldjango"),
		"http":               ext("http"),
		"http2":              ext("http2"),
		"hungarian":          ext("hungarian"),
		"hurl":               ext("hurl"),
		"hyprlang":           ext("hyprlang"),
		"idl":                ext("idl"),
		"idris":              ext("idris"),
		"ignis":              ext("ignis"),
		"ini":                ext("INI", "ini"),
		"ink":                ext("ink"),
		"inko":               ext("inko"),
		"ispc":               ext("ispc"),
		"janet_simple":       ext("janet"),
		"java":               ext("jav", "java"),
		"javascript":         ext("js"),
		"jq":                 ext("jq"),
		"jsdoc":              ext("jsdoc"),
		"json":               ext("json"),
		"json5":              ext("json5"),
		"jsonc":              ext("jsonc"),
		"jsonnet":            ext("jsonnet", "libsonnet"),
		"julia":              ext("jl"),
		"just":               ext("just"),
		"kcl":                ext("kcl"),
		"kconfig":            ext("kconfig"),
		"kdl":                ext("kdl"),
		"koan":               ext("koan"),
		"kotlin":             ext("kt", "ktm", "kts"),
		"koto":               ext("koto"),
		"kusto":              ext("kusto"),
		"lalrpop":            ext("lalrpop"),
		"latex":              ext("tex"),
		"ldg":                ext("ldg"),
		"ledger":             ext("journal", "ledger"),
		"leo":                ext("leo"),
		"lexc":               ext("lexc"),
		"lexd":               ext("lexd"),
		"linkerscript":       ext("linkerscript"),
		"liquid":             ext("liquid"),
		"liquidsoap":         ext("liq"),
		"llvm":               ext("llvm"),
		"lox":                ext("lox"),
		"lua":                ext("lua", "rockspec"),
		"luadoc":             ext("luadoc"),
		"luap":               ext("luap"),
		"luau":               ext("luau"),
		"m68k":               ext("m68k"),
		"make":               ext("mk", "mak", "make", "makefile"),
		"markdown":           ext("md"),
		"markdown_inline":    ext("markdown_inline"),
		"matlab":             ext("matlab"),
		"mcfuncx":            ext("mcfuncx"),
		"menhir":             ext("menhir"),
		"mermaid":            ext("mermaid", "mmd", "mmdc"),
		"meson":              ext("meson"),
		"mlir":               ext("mlir"),
		"motoko":             ext("motoko"),
		"move":               ext("move"),
		"move_on_aptos":      ext("move_on_aptos"),
		"muttrc":             ext("muttrc"),
		"nasm":               ext("nasm"),
		"nesfab":             ext("nesfab"),
		"nginx":              ext("nginx"),
		"nickel":             ext("nickel"),
		"nim":                ext("nim", "nims", "nimble"),
		"nim_format_string":  ext("nim_format_string"),
		"ninja":              ext("ninja"),
		"nix":                ext("nix"),
		"norg":               ext("norg"),
		"note":               ext("note"),
		"nqc":                ext("nqc"),
		"objc":               ext("m"),
		"objdump":            ext("objdump"),
		"ocaml":              ext("ml", "mli", "mlip", "mll", "mlp", "mlt", "mly"),
		"ocaml_interface":    ext("ocaml_interface"),
		"ocamllex":           ext("ocamllex"),
		"odin":               ext("odin"),
		"org":                ext("org", "org_archive"),
		"ott":                ext("ott"),
		"pascal":             ext("pas", "pp"),
		"pem":                ext("pem"),
		"perl":               ext("pl"),
		"php":                ext("php"),
		"php_only":           ext("php_only"),
		"phpdoc":             ext("phpdoc"),
		"pioasm":             ext("pio"),
		"po":                 ext("po", "pot"),
		"pod":                ext("pod"),
		"poe_filter":         ext("filter"),
		"pony":               ext("pony"),
		"printf":             ext("printf"),
		"prisma":             ext("prisma"),
		"problog":            ext("problog"),
		"prolog":             ext("pdb"),
		"promql":             ext("promql"),
		"properties":         ext("properties"),
		"proto":              ext("proto"),
		"prql":               ext("prql"),
		"psv":                ext("psv"),
		"pug":                ext("pug"),
		"puppet":             ext("puppet"),
		"purescript":         ext("purs"),
		"pymanifest":         ext("pymanifest"),
		"pyrope":             ext("pyrope"),
		"python":             ext("py"),
		"ql":                 ext("ql", "qll"),
		"qmldir":             ext("qmldir"),
		"qmljs":              ext("qmljs"),
		"r":                  ext("R"),
		"racket":             ext("rkt", "rktd", "rktl"),
		"ralph":              ext("ralph"),
		"rasi":               ext("rasi"),
		"rbs":                ext("rbs"),
		"re2c":               ext("re2c"),
		"readline":           ext("readline"),
		"regex":              ext("regex"),
		"rego":               ext("rego"),
		"requirements":       ext("pip"),
		"risor":              ext("risor"),
		"rnoweb":             ext("Rnw", "Snw", "rnw", "snw"),
		"robot":              ext("resource", "robot"),
		"robots":             ext("robots"),
		"roc":                ext("roc"),
		"ron":                ext("ron"),
		"rtx":                ext("rtx"),
		"ruby":               ext("builder", "gemspec", "rake", "rb"),
		"rust":               ext("rs"),
		"scala":              ext("scala"),
		"scfg":               ext("scfg"),
		"scheme":             ext("scheme", "sld", "ss", "scm"),
		"scss":               ext("scss"),
		"sdml":               ext("sdml"),
		"sincere":            ext("sincere"),
		"slang":              ext("slang"),
		"slim":               ext("slim"),
		"slint":              ext("slint"),
		"smali":              ext("smali"),
		"smithy":             ext("smithy"),
		"sml":                ext("sml"),
		"snakemake":          ext("smk"),
		"solidity":           ext("sol"),
		"soql":               ext("soql"),
		"sosl":               ext("sosl"),
		"sourcepawn":         ext("sourcepawn"),
		"sparql":             ext("rq", "sparql"),
		"sql":                ext("sql"),
		"sql_bigquery":       ext("sql_bigquery"),
		"sqlite":             ext("sqlite"),
		"squirrel":           ext("nut"),
		"ssh_client_config":  ext("ssh_client_config"),
		"ssh_config":         ext("ssh_config"),
		"starlark":           ext("ipd", "star", "starlark"),
		"strace":             ext("strace"),
		"styled":             ext("styled"),
		"supercollider":      ext("quark", "scd"),
		"surface":            ext("sface", "surface"),
		"surrealql":          ext("surrealql"),
		"sus":                ext("sus"),
		"svelte":             ext("svelte"),
		"swift":              ext("swift"),
		"sxhkdrc":            ext("sxhkdrc"),
		"syphon":             ext("syphon"),
		"systemtap":          ext("stp"),
		"systemverilog":      ext("systemverilog"),
		"t32":                ext("t32"),
		"tablegen":           ext("td"),
		"tact":               ext("tact"),
		"tcl":                ext("tcl"),
		"teal":               ext("teal"),
		"templ":              ext("templ"),
		"terraform":          ext("tf"),
		"textproto":          ext("textproto"),
		"thrift":             ext("thrift"),
		"tiger":              ext("tiger"),
		"tlaplus":            ext("tlaplus"),
		"tmux":               ext("tmux"),
		"tnsl":               ext("tnsl"),
		"todolang":           ext("todolang"),
		"todotxt":            ext("todotxt"),
		"toml":               ext("toml"),
		"tort":               ext("tort"),
		"tsv":                ext("tsv"),
		"tsx":                ext("tsx"),
		"turtle":             ext("ttl"),
		"twig":               ext("twig"),
		"twolc":              ext("twolc"),
		"typescript":         ext("ts"),
		"typespec":           ext("typespec"),
		"typoscript":         ext("typoscript"),
		"typst":              ext("typst"),
		"udev":               ext("udev"),
		"ungrammar":          ext("ungrammar"),
		"unison":             ext("unison"),
		"usd":                ext("usd"),
		"uxntal":             ext("uxntal"),
		"v":                  ext("vlang", "vsh", "vv"),
		"vala":               ext("vala"),
		"vento":              ext("vto"),
		"verilog":            ext("v"),
		"vhs":                ext("vhs"),
		"vim":                ext("vim"),
		"vimdoc":             ext("vimdoc"),
		"virdant":            ext("virdant"),
		"virgil":             ext("virgil"),
		"vue":                ext("vue"),
		"walnut":             ext("walnut"),
		"wgsl":               ext("wgsl"),
		"wgsl_bevy":          ext("wgsl_bevy"),
		"wing":               ext("wing"),
		"wit":                ext("wit"),
		"woml":               ext("woml"),
		"xcompose":           ext("xcompose"),
		"xfst":               ext("xfst"),
		"xml":                ext("xml"),
		"yaml":               ext("yaml", "yml"),
		"yang":               ext("yang"),
		"yuck":               ext("yuck"),
		"zathurarc":          ext("zathurarc"),
		"zig":                ext("zig", "zon"),
	}
)

// DetectLang detects the language name based on given file path.
// The given fpath should preferably be the absolute path as that guarantees
// that all the detectors can be used. It can however work with relative
// paths, the filename alone or even with just the file extension (including
// leading dot) alone. However the success rate will correspondingly be
// reduced due to the inability to use all the detectors available.
func DetectLanguage(fpath string) string {
	return filetypes.detect(fpath)
}

// RegisterLanguage allows end users to register their own mappings,
// potentially overriding existing ones. Typical use would be for
// languages not maintained by this library, or overriding ambiguous
// ones (i.e. v vs. verilog for .v, ldg or ledger for .ldg, etc.).
//
// The pattern pat can be a glob, an absolute path, a filename or
// a file extension (incl. the leading dot).
func RegisterLanguage(pat, lang string) error {
	return filetypes.register(pat, lang)
}

var (
	errMissingPattern  = errors.New("pattern is missing")
	errMissingLanguage = errors.New("language is missing")
	errInvalidLanguage = errors.New("language is invalid")
)

func (d *ftDetector) register(pat, lang string) (err error) {
	switch {
	case pat == "":
		return errMissingPattern
	case lang == "":
		return errMissingLanguage
	case slices.Index(SupportedLanguages(), lang) < 0:
		return fmt.Errorf("%w: %q", errInvalidLanguage, lang)
	}

	switch {
	case contains(pat, "*", "[", "?"):
		if d.byGlob == nil {
			d.byGlob = map[string]string{}
		}

		d.byGlob[pat] = lang
	case contains(pat, sep):
		if d.byPath == nil {
			d.byPath = map[string]string{}
		}

		d.byPath[pat] = lang
	case strings.HasPrefix(pat, "."):
		if d.byExt == nil {
			d.byExt = map[string]string{}
		}

		d.byExt[pat] = lang
	default:
		if d.byBasename == nil {
			d.byBasename = map[string]string{}
		}

		d.byBasename[pat] = lang
	}

	return
}

func (d ftDetector) detect(fname string) string {
	for glob, lang := range d.byGlob {
		// NOTE: We do not want to alter the fname for future iteratios,
		// nor for the remaining checks.
		fname := fname

		countGlob, countFname := strings.Count(glob, sep), strings.Count(fname, sep)
		if countFname < countGlob {
			continue
		} else if countFname != countGlob {
			comps := []string{}

			// we need the subpath from fname having as many levels as glob
			for range countGlob + 1 {
				comps = append([]string{filepath.Base(fname)}, comps...)
				fname = filepath.Dir(fname)
			}

			fname = strings.Join(comps, sep)
		}

		if ok, err := filepath.Match(glob, fname); err == nil && ok {
			return lang
		}
	}

	if v, ok := d.byPath[fname]; ok {
		return v
	}

	if v, ok := d.byBasename[filepath.Base(fname)]; ok {
		return v
	}

	if v, ok := d.byExt[filepath.Ext(fname)]; ok {
		return v
	}

	return "unknown"
}

func ext(exts ...string) (out []string) {
	for _, ext := range exts {
		out = append(out, "."+ext)
	}

	return
}

func base(names ...string) []string {
	return names
}

func contains(s string, opts ...string) (ok bool) {
	for _, opt := range opts {
		if strings.Contains(s, opt) {
			return true
		}
	}

	return
}

func init() {
	for lang, exts := range ftByExt {
		for _, ext := range exts {
			if prev, ok := filetypes.byExt[ext]; ok {
				panic(fmt.Sprintf("%q extension is registered twice: {%q, %q}", ext, prev, lang))
			}

			filetypes.byExt[ext] = lang
		}
	}

	for lang, names := range ftByBasename {
		for _, name := range names {
			if prev, ok := filetypes.byBasename[name]; ok {
				panic(fmt.Sprintf("%q name is registered twice: {%q, %q}", name, prev, lang))
			}

			filetypes.byBasename[name] = lang
		}
	}
}

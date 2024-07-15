package forest

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"slices"
	"strings"
)

// ftDetector is responsible for detecting the filetype based on various
// mechanisms, such as by glob, by full path, by basename or by extension,
// in that specific order.
type ftDetector struct {
	byGlob,
	byPath,
	byBasename,
	byExt map[string]string
}

var (
	sep = string(os.PathSeparator)

	filetype = ftDetector{
		byGlob: map[string]string{
			"queries/*.scm":            "query",
			"queries/*/*.scm":          "query",
			"queries/*/*/*.scm":        "query",
			"go-sitter-forest/*/*.scm": "query",
			"nginx/*":                  "nginx",
			"nginx/*/*":                "nginx",
			"nginx/*/*/*":              "nginx",
			"*/ssh/sshd_config":        "ssh_config",
			"*/ssh/ssh_config":         "ssh_config",
			"ssh/ssh_config.d/*":       "ssh_config",
			"*/.ssh/config":            "ssh_client_config",
			"*/.git/config":            "git_config",
			"hypr*.conf":               "hyprlang",
		},
		byPath:     map[string]string{},
		byBasename: map[string]string{},
		byExt:      map[string]string{},
	}

	byBasenameInverted = map[string][]string{
		"clojure":       base("init.trans", ".trans"),
		"dockerfile":    base("Containerfile", "Dockerfile", "dockerfile"),
		"doxygen":       base("Doxyfile"),
		"earthfile":     base("Earthfile"),
		"editorconfig":  base(".editorconfig"),
		"gemfilelock":   base("Gemfile.lock"),
		"git_config":    base(".gitconfig", ".gitmodules"),
		"git_rebase":    base("git-rebase-todo"),
		"gitattributes": base(".gitattributes"),
		"gitcommit":     base("TAG_EDITMSG", "MERGE_MSG", "COMMIT_EDITMSG", "NOTES_EDITMSG", "EDIT_DESCRIPTION"),
		"gitignore":     base(".gitignore", ".ignore"),
		"gomod":         base("go.mod"),
		"gosum":         base("go.sum", "go.work.sum"),
		"gowork":        base("go.work"),
		"json":          base("Pipfile.lock", "flake.lock", ".prettierrc", ".babelrc", ".eslintrc"),
		"make":          base("Makefile", "makefile"),
		"passwd":        base("passwd", "passwd-"),
		"requirements":  base("requirements.txt", "constraints.txt", "requirements.in"),
		"robots":        base("robots.txt"),
		"ruby":          base("Rakefile", "Gemfile", "Puppetfile", ".irbrc", "irbrc", ".irb_history", "irb_history", "Vagrantfile"),
		"toml":          base("Pipfile", "Cargo.lock"),
	}

	// If ext is == lang you can omit it (i.e. .scala and scala, .go and go, etc.)
	byExtInverted = map[string][]string{
		"abap":               nil,
		"ada":                ext("ada", "adb", "ads", "gpr"),
		"agda":               nil,
		"aiken":              nil,
		"amber":              nil,
		"angular":            nil,
		"apex":               nil,
		"arduino":            ext("ino", "pde"),
		"asm":                nil,
		"astro":              nil,
		"august":             nil,
		"authzed":            nil,
		"awk":                ext("awk", "gawk"),
		"bash":               ext("sh"),
		"bass":               nil,
		"beancount":          nil,
		"bend":               nil,
		"bibtex":             ext("bib"),
		"bicep":              ext("bicep", "bicepparam"),
		"bitbake":            ext("bb", "bbappend", "bbclass"),
		"blade":              nil,
		"blueprint":          ext("blp"),
		"bluespec":           ext("bsv"),
		"bp":                 nil,
		"brightscript":       ext("brs"),
		"c":                  ext("c", "h", "hh"),
		"c_sharp":            ext("cs"),
		"ca65":               nil,
		"cairo":              nil,
		"calc":               nil,
		"capnp":              nil,
		"cds":                nil,
		"cedar":              nil,
		"cel":                nil,
		"cg":                 nil,
		"chatito":            nil,
		"circom":             nil,
		"clarity":            nil,
		"cleancopy":          nil,
		"clingo":             nil,
		"clojure":            ext("clj", "cljc", "cljs", "cljx"),
		"cmake":              nil,
		"cobol":              ext("cbl", "ccp", "cob"),
		"cognate":            nil,
		"comment":            nil,
		"commonlisp":         ext("cl", "el", "lisp"),
		"context":            ext("mkii", "mkiv", "mklx", "mkvi", "mkxl"),
		"cooklang":           ext("cook"),
		"corn":               nil,
		"cpon":               nil,
		"cpp":                ext("C", "H", "c++", "cc", "cpp", "hpp"),
		"crystal":            ext("cr"),
		"css":                nil,
		"csv":                nil,
		"cuda":               ext("cu", "cuh"),
		"cue":                nil,
		"d":                  nil,
		"dale":               nil,
		"dart":               ext("dart", "drt"),
		"devicetree":         ext("dts"),
		"dhall":              nil,
		"diff":               nil,
		"disassembly":        nil,
		"djot":               nil,
		"dot":                nil,
		"dotenv":             ext("dotenv", "env"),
		"dtd":                nil,
		"ebnf":               nil,
		"eds":                nil,
		"eex":                nil,
		"elixir":             ext("ex", "exs"),
		"elm":                nil,
		"elsa":               nil,
		"elvish":             ext("elv"),
		"embedded_template":  nil,
		"erlang":             ext("erl", "hrl"),
		"facility":           nil,
		"familymarkup":       nil,
		"fastbuild":          nil,
		"faust":              nil,
		"fennel":             ext("fnl"),
		"fidl":               nil,
		"fin":                nil,
		"firrtl":             ext("fir"),
		"fish":               nil,
		"flamingo":           nil,
		"fluentbit":          nil,
		"foam":               nil,
		"forth":              ext("4th", "fth"),
		"fortran":            ext("F03", "F08", "F77", "F90", "F95", "FOR", "FPP", "FTN", "f", "f03", "f08", "f77", "f90", "f95", "for", "fortran", "fpp", "ftn"),
		"fsh":                nil,
		"func":               nil,
		"fusion":             nil,
		"gdscript":           ext("gd"),
		"gdshader":           ext("gdshader", "shader"),
		"gherkin":            nil,
		"gleam":              nil,
		"glimmer":            ext("gjs", "gts"),
		"glint":              nil,
		"glsl":               nil,
		"gn":                 ext("gn", "gni"),
		"gnuplot":            ext("gnuplot", "gpi"),
		"go":                 nil,
		"gobra":              nil,
		"goctl":              nil,
		"godot_resource":     nil,
		"gotmpl":             ext("tmpl"),
		"gpg":                nil,
		"graphql":            ext("gql", "graphql", "graphqls"),
		"gren":               nil,
		"groovy":             ext("gradle", "groovy"),
		"gstlaunch":          nil,
		"hack":               ext("hack", "hackpartial"),
		"haml":               nil,
		"hare":               ext("ha"),
		"haskell":            ext("hs", "hs-boot", "hsc", "hsig"),
		"haskell_persistent": ext("persistentmodels"),
		"hcl":                nil,
		"heex":               nil,
		"helm":               nil,
		"hjson":              nil,
		"hlsl":               nil,
		"hlsplaylist":        nil,
		"hocon":              nil,
		"hoon":               nil,
		"html":               ext("htm", "html"),
		"htmlaskama":         nil,
		"htmldjango":         nil,
		"http":               nil,
		"http2":              nil,
		"hungarian":          nil,
		"hurl":               nil,
		"hyprlang":           nil,
		"idl":                nil,
		"idris":              nil,
		"ignis":              nil,
		"ini":                ext("INI", "ini"),
		"ink":                nil,
		"inko":               nil,
		"ispc":               nil,
		"janet_simple":       ext("janet"),
		"java":               ext("jav", "java"),
		"javascript":         ext("js"),
		"jq":                 nil,
		"jsdoc":              nil,
		"json":               nil,
		"json5":              nil,
		"jsonc":              nil,
		"jsonnet":            ext("jsonnet", "libsonnet"),
		"julia":              ext("jl"),
		"just":               nil,
		"kcl":                nil,
		"kconfig":            nil,
		"kdl":                nil,
		"koan":               nil,
		"kotlin":             ext("kt", "ktm", "kts"),
		"koto":               nil,
		"kusto":              nil,
		"lalrpop":            nil,
		"latex":              ext("tex"),
		"ldg":                nil,
		"ledger":             ext("journal", "ledger"),
		"leo":                nil,
		"lexc":               nil,
		"lexd":               nil,
		"linkerscript":       nil,
		"liquid":             nil,
		"liquidsoap":         ext("liq"),
		"llvm":               nil,
		"lox":                nil,
		"lua":                ext("lua", "rockspec"),
		"luadoc":             nil,
		"luap":               nil,
		"luau":               nil,
		"m68k":               nil,
		"make":               ext("mk", "mak", "make", "makefile"),
		"markdown":           ext("md"),
		"markdown_inline":    ext("markdown_inline"),
		"matlab":             ext("M"),
		"mcfuncx":            nil,
		"menhir":             nil,
		"mermaid":            ext("mermaid", "mmd", "mmdc"),
		"meson":              nil,
		"mlir":               nil,
		"motoko":             nil,
		"move":               nil,
		"move_on_aptos":      ext("move_on_aptos"),
		"muttrc":             nil,
		"nasm":               nil,
		"nesfab":             nil,
		"nickel":             nil,
		"nim":                ext("nim", "nims", "nimble"),
		"nim_format_string":  ext("nim_format_string"),
		"ninja":              nil,
		"nix":                nil,
		"norg":               nil,
		"note":               nil,
		"nqc":                nil,
		"objc":               ext("m"),
		"objdump":            nil,
		"ocaml":              ext("ml", "mli", "mlip", "mll", "mlp", "mlt", "mly"),
		"ocaml_interface":    nil,
		"ocamllex":           nil,
		"odin":               nil,
		"org":                ext("org", "org_archive"),
		"ott":                nil,
		"pascal":             ext("pas", "pp"),
		"pem":                nil,
		"perl":               ext("pl"),
		"php":                nil,
		"php_only":           nil,
		"phpdoc":             nil,
		"pioasm":             ext("pio"),
		"po":                 ext("po", "pot"),
		"pod":                nil,
		"poe_filter":         ext("filter"),
		"pony":               nil,
		"printf":             nil,
		"prisma":             nil,
		"problog":            nil,
		"prolog":             ext("pdb"),
		"promql":             nil,
		"properties":         nil,
		"proto":              nil,
		"prql":               nil,
		"psv":                nil,
		"pug":                nil,
		"puppet":             nil,
		"purescript":         ext("purs"),
		"pymanifest":         nil,
		"pyrope":             nil,
		"python":             ext("py"),
		"ql":                 ext("ql", "qll"),
		"qmldir":             nil,
		"qmljs":              nil,
		"r":                  ext("R"),
		"racket":             ext("rkt", "rktd", "rktl"),
		"ralph":              nil,
		"rasi":               nil,
		"rbs":                nil,
		"re2c":               nil,
		"readline":           nil,
		"regex":              nil,
		"rego":               nil,
		"requirements":       ext("pip"),
		"risor":              nil,
		"rnoweb":             ext("Rnw", "Snw", "rnw", "snw"),
		"robot":              ext("resource", "robot"),
		"roc":                nil,
		"ron":                nil,
		"rtx":                nil,
		"ruby":               ext("builder", "gemspec", "rake", "rb"),
		"rust":               ext("rs"),
		"scala":              nil,
		"scfg":               nil,
		"scheme":             ext("scheme", "sld", "ss", "scm"),
		"scss":               nil,
		"sdml":               nil,
		"sincere":            nil,
		"slang":              nil,
		"slim":               nil,
		"slint":              nil,
		"smali":              nil,
		"smithy":             nil,
		"sml":                nil,
		"snakemake":          ext("smk"),
		"solidity":           ext("sol"),
		"soql":               nil,
		"sosl":               nil,
		"sourcepawn":         nil,
		"sparql":             ext("rq", "sparql"),
		"sql":                nil,
		"sql_bigquery":       ext("sql_bigquery"),
		"sqlite":             nil,
		"squirrel":           ext("nut"),
		"starlark":           ext("ipd", "star", "starlark"),
		"strace":             nil,
		"styled":             nil,
		"supercollider":      ext("quark", "scd"),
		"surface":            ext("sface", "surface"),
		"surrealql":          nil,
		"sus":                nil,
		"svelte":             nil,
		"swift":              nil,
		"sxhkdrc":            nil,
		"syphon":             nil,
		"systemtap":          ext("stp"),
		"systemverilog":      nil,
		"t32":                nil,
		"tablegen":           ext("td"),
		"tact":               nil,
		"tcl":                nil,
		"teal":               nil,
		"templ":              nil,
		"terraform":          ext("tf"),
		"textproto":          nil,
		"thrift":             nil,
		"tiger":              nil,
		"tlaplus":            nil,
		"tmux":               nil,
		"tnsl":               nil,
		"todolang":           nil,
		"todotxt":            nil,
		"toml":               nil,
		"tort":               nil,
		"tsv":                nil,
		"tsx":                nil,
		"turtle":             ext("ttl"),
		"twig":               nil,
		"twolc":              nil,
		"typescript":         ext("ts"),
		"typespec":           nil,
		"typoscript":         nil,
		"typst":              nil,
		"udev":               nil,
		"ungrammar":          nil,
		"unison":             nil,
		"usd":                nil,
		"uxntal":             nil,
		"v":                  ext("vlang", "vsh", "vv"),
		"vala":               nil,
		"vento":              ext("vto"),
		"verilog":            ext("v"),
		"vhs":                nil,
		"vim":                nil,
		"vimdoc":             nil,
		"virdant":            nil,
		"virgil":             nil,
		"vue":                nil,
		"walnut":             nil,
		"wgsl":               nil,
		"wgsl_bevy":          nil,
		"wing":               nil,
		"wit":                nil,
		"woml":               nil,
		"xcompose":           nil,
		"xfst":               nil,
		"xml":                ext("xml", "rss"),
		"yaml":               ext("yaml", "yml"),
		"yang":               nil,
		"yuck":               nil,
		"zathurarc":          nil,
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
	return filetype.detect(fpath)
}

// RegisterLanguage allows end users to register their own mappings,
// potentially overriding existing ones. Typical use would be for
// languages not maintained by this library, or overriding ambiguous
// ones (i.e. v vs. verilog for .v, ldg or ledger for .ldg, etc.).
//
// The pattern pat can be a glob, an absolute path, a filename or
// a file extension (incl. the leading dot).
func RegisterLanguage(pat, lang string) error {
	return filetype.register(pat, lang)
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
	for lang, exts := range byExtInverted {
		if len(exts) == 0 {
			exts = []string{"." + lang}
		}

		for _, ext := range exts {
			if prev, ok := filetype.byExt[ext]; ok {
				panic(fmt.Sprintf("%q extension is registered twice: {%q, %q}", ext, prev, lang))
			}

			filetype.byExt[ext] = lang
		}
	}

	for lang, names := range byBasenameInverted {
		for _, name := range names {
			if prev, ok := filetype.byBasename[name]; ok {
				panic(fmt.Sprintf("%q name is registered twice: {%q, %q}", name, prev, lang))
			}

			filetype.byBasename[name] = lang
		}
	}
}

package forest

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"reflect"
	"slices"
	"strings"
	"sync"
	"testing"

	"golang.org/x/exp/maps"
)

func TestFTDetectorLoad(t *testing.T) {
	t.Skip("Tested implicitly via the entire test suite: if it passes, then the loading worked as expected")
}

func TestDetectLanguage(t *testing.T) { //nolint:funlen,tparallel // no, subtests MUST NOT call t.Parallel here!
	t.Parallel()

	// Patterns starting with dot will be interpreted as file extensions
	// and be prefixed with "foobar". If you want to test an actual file
	// starting with a dot, simply use a path in front of it (foo/.somefile).
	testCases := []struct{ s, exp string }{
		{".4th", "forth"},
		{".C", "cpp"},
		{".F03", "fortran"},
		{".F08", "fortran"},
		{".F77", "fortran"},
		{".F90", "fortran"},
		{".F95", "fortran"},
		{".FOR", "fortran"},
		{".FPP", "fortran"},
		{".FTN", "fortran"},
		{".H", "cpp"},
		{".INI", "ini"},
		{".M", "matlab"},
		{".R", "r"},
		{".Rnw", "rnoweb"},
		{".Snw", "rnoweb"},
		{".abap", "abap"},
		{".ada", "ada"},
		{".adb", "ada"},
		{".ads", "ada"},
		{".agda", "agda"},
		{".aiken", "aiken"},
		{".amber", "amber"},
		{".angular", "angular"},
		{".apex", "apex"},
		{".asm", "asm"},
		{".astro", "astro"},
		{".august", "august"},
		{".authzed", "authzed"},
		{".awk", "awk"},
		{".bass", "bass"},
		{".bb", "bitbake"},
		{".bbappend", "bitbake"},
		{".bbclass", "bitbake"},
		{".beancount", "beancount"},
		{".bend", "bend"},
		{".bib", "bibtex"},
		{".bicep", "bicep"},
		{".bicepparam", "bicep"},
		{".blade", "blade"},
		{".blp", "blueprint"},
		{".bp", "bp"},
		{".brs", "brightscript"},
		{".bsv", "bluespec"},
		{".builder", "ruby"},
		{".c", "c"},
		{".c++", "cpp"},
		{".ca65", "ca65"},
		{".cairo", "cairo"},
		{".calc", "calc"},
		{".capnp", "capnp"},
		{".cbl", "cobol"},
		{".cc", "cpp"},
		{".ccp", "cobol"},
		{".cds", "cds"},
		{".cedar", "cedar"},
		{".cel", "cel"},
		{".cg", "cg"},
		{".chatito", "chatito"},
		{".circom", "circom"},
		{".cl", "commonlisp"},
		{".clarity", "clarity"},
		{".cleancopy", "cleancopy"},
		{".clingo", "clingo"},
		{".clj", "clojure"},
		{".cljc", "clojure"},
		{".cljs", "clojure"},
		{".cljx", "clojure"},
		{".cmake", "cmake"},
		{".cob", "cobol"},
		{".cognate", "cognate"},
		{".comment", "comment"},
		{".cook", "cooklang"},
		{".corn", "corn"},
		{".cpon", "cpon"},
		{".cpp", "cpp"},
		{".cr", "crystal"},
		{".cs", "c_sharp"},
		{".css", "css"},
		{".csv", "csv"},
		{".cu", "cuda"},
		{".cue", "cue"},
		{".cuh", "cuda"},
		{".d", "d"},
		{".dale", "dale"},
		{".dart", "dart"},
		{".dhall", "dhall"},
		{".diff", "diff"},
		{".disassembly", "disassembly"},
		{".djot", "djot"},
		{".dot", "dot"},
		{".dotenv", "dotenv"},
		{".drt", "dart"},
		{".dtd", "dtd"},
		{".dts", "devicetree"},
		{".ebnf", "ebnf"},
		{".eds", "eds"},
		{".eex", "eex"},
		{".el", "commonlisp"},
		{".elm", "elm"},
		{".elsa", "elsa"},
		{".elv", "elvish"},
		{".embedded_template", "embedded_template"},
		{".env", "dotenv"},
		{".erl", "erlang"},
		{".ex", "elixir"},
		{".exs", "elixir"},
		{".f", "fortran"},
		{".f03", "fortran"},
		{".f08", "fortran"},
		{".f77", "fortran"},
		{".f90", "fortran"},
		{".f95", "fortran"},
		{".facility", "facility"},
		{".familymarkup", "familymarkup"},
		{".fastbuild", "fastbuild"},
		{".faust", "faust"},
		{".fidl", "fidl"},
		{".filter", "poe_filter"},
		{".fin", "fin"},
		{".fir", "firrtl"},
		{".fish", "fish"},
		{".flamingo", "flamingo"},
		{".fluentbit", "fluentbit"},
		{".fnl", "fennel"},
		{".foam", "foam"},
		{".for", "fortran"},
		{".fortran", "fortran"},
		{".fpp", "fortran"},
		{".fsh", "fsh"},
		{".fth", "forth"},
		{".ftn", "fortran"},
		{".func", "func"},
		{".fusion", "fusion"},
		{".gawk", "awk"},
		{".gd", "gdscript"},
		{".gdshader", "gdshader"},
		{".gemspec", "ruby"},
		{".gherkin", "gherkin"},
		{".gjs", "glimmer"},
		{".gleam", "gleam"},
		{".glint", "glint"},
		{".glsl", "glsl"},
		{".gn", "gn"},
		{".gni", "gn"},
		{".gnuplot", "gnuplot"},
		{".go", "go"},
		{".gobra", "gobra"},
		{".goctl", "goctl"},
		{".godot_resource", "godot_resource"},
		{".gpg", "gpg"},
		{".gpi", "gnuplot"},
		{".gpr", "ada"},
		{".gql", "graphql"},
		{".gradle", "groovy"},
		{".graphql", "graphql"},
		{".graphqls", "graphql"},
		{".gren", "gren"},
		{".groovy", "groovy"},
		{".gstlaunch", "gstlaunch"},
		{".gts", "glimmer"},
		{".h", "c"},
		{".ha", "hare"},
		{".hack", "hack"},
		{".hackpartial", "hack"},
		{".haml", "haml"},
		{".hcl", "hcl"},
		{".heex", "heex"},
		{".helm", "helm"},
		{".hh", "c"},
		{".hjson", "hjson"},
		{".hlsl", "hlsl"},
		{".hlsplaylist", "hlsplaylist"},
		{".hocon", "hocon"},
		{".hoon", "hoon"},
		{".hpp", "cpp"},
		{".hrl", "erlang"},
		{".hs", "haskell"},
		{".hs-boot", "haskell"},
		{".hsc", "haskell"},
		{".hsig", "haskell"},
		{".htm", "html"},
		{".html", "html"},
		{".htmlaskama", "htmlaskama"},
		{".htmldjango", "htmldjango"},
		{".http", "http"},
		{".http2", "http2"},
		{".hungarian", "hungarian"},
		{".hurl", "hurl"},
		{".hyprlang", "hyprlang"},
		{".idl", "idl"},
		{".idris", "idris"},
		{".ignis", "ignis"},
		{".ini", "ini"},
		{".ink", "ink"},
		{".inko", "inko"},
		{".ino", "arduino"},
		{".ipd", "starlark"},
		{".ispc", "ispc"},
		{".janet", "janet_simple"},
		{".jav", "java"},
		{".java", "java"},
		{".jl", "julia"},
		{".journal", "ledger"},
		{".jq", "jq"},
		{".js", "javascript"},
		{".jsdoc", "jsdoc"},
		{".json", "json"},
		{".json5", "json5"},
		{".jsonc", "jsonc"},
		{".jsonnet", "jsonnet"},
		{".just", "just"},
		{".kcl", "kcl"},
		{".kconfig", "kconfig"},
		{".kdl", "kdl"},
		{".koan", "koan"},
		{".koto", "koto"},
		{".kt", "kotlin"},
		{".ktm", "kotlin"},
		{".kts", "kotlin"},
		{".kusto", "kusto"},
		{".lalrpop", "lalrpop"},
		{".ldg", "ldg"},
		{".ledger", "ledger"},
		{".leo", "leo"},
		{".lexc", "lexc"},
		{".lexd", "lexd"},
		{".libsonnet", "jsonnet"},
		{".linkerscript", "linkerscript"},
		{".liq", "liquidsoap"},
		{".liquid", "liquid"},
		{".lisp", "commonlisp"},
		{".llvm", "llvm"},
		{".lox", "lox"},
		{".lua", "lua"},
		{".luadoc", "luadoc"},
		{".luap", "luap"},
		{".luau", "luau"},
		{".m", "objc"},
		{".m68k", "m68k"},
		{".mak", "make"},
		{".make", "make"},
		{".makefile", "make"},
		{".markdown_inline", "markdown_inline"},
		{".mcfuncx", "mcfuncx"},
		{".md", "markdown"},
		{".menhir", "menhir"},
		{".mermaid", "mermaid"},
		{".meson", "meson"},
		{".mk", "make"},
		{".mkii", "context"},
		{".mkiv", "context"},
		{".mklx", "context"},
		{".mkvi", "context"},
		{".mkxl", "context"},
		{".ml", "ocaml"},
		{".mli", "ocaml"},
		{".mlip", "ocaml"},
		{".mlir", "mlir"},
		{".mll", "ocaml"},
		{".mlp", "ocaml"},
		{".mlt", "ocaml"},
		{".mly", "ocaml"},
		{".mmd", "mermaid"},
		{".mmdc", "mermaid"},
		{".motoko", "motoko"},
		{".move", "move"},
		{".move_on_aptos", "move_on_aptos"},
		{".muttrc", "muttrc"},
		{".nasm", "nasm"},
		{".nesfab", "nesfab"},
		{".nickel", "nickel"},
		{".nim", "nim"},
		{".nim_format_string", "nim_format_string"},
		{".nimble", "nim"},
		{".nims", "nim"},
		{".ninja", "ninja"},
		{".nix", "nix"},
		{".norg", "norg"},
		{".note", "note"},
		{".nqc", "nqc"},
		{".nut", "squirrel"},
		{".objdump", "objdump"},
		{".ocaml_interface", "ocaml_interface"},
		{".ocamllex", "ocamllex"},
		{".odin", "odin"},
		{".org", "org"},
		{".org_archive", "org"},
		{".ott", "ott"},
		{".pas", "pascal"},
		{".pdb", "prolog"},
		{".pde", "arduino"},
		{".pem", "pem"},
		{".persistentmodels", "haskell_persistent"},
		{".php", "php"},
		{".php_only", "php_only"},
		{".phpdoc", "phpdoc"},
		{".pio", "pioasm"},
		{".pip", "requirements"},
		{".pl", "perl"},
		{".po", "po"},
		{".pod", "pod"},
		{".pony", "pony"},
		{".pot", "po"},
		{".pp", "pascal"},
		{".printf", "printf"},
		{".prisma", "prisma"},
		{".problog", "problog"},
		{".promql", "promql"},
		{".properties", "properties"},
		{".proto", "proto"},
		{".prql", "prql"},
		{".psv", "psv"},
		{".pug", "pug"},
		{".puppet", "puppet"},
		{".purs", "purescript"},
		{".py", "python"},
		{".pymanifest", "pymanifest"},
		{".pyrope", "pyrope"},
		{".ql", "ql"},
		{".qll", "ql"},
		{".qmldir", "qmldir"},
		{".qmljs", "qmljs"},
		{".quark", "supercollider"},
		{".rake", "ruby"},
		{".ralph", "ralph"},
		{".rasi", "rasi"},
		{".rb", "ruby"},
		{".rbs", "rbs"},
		{".re2c", "re2c"},
		{".readline", "readline"},
		{".regex", "regex"},
		{".rego", "rego"},
		{".resource", "robot"},
		{".risor", "risor"},
		{".rkt", "racket"},
		{".rktd", "racket"},
		{".rktl", "racket"},
		{".rnw", "rnoweb"},
		{".robot", "robot"},
		{".roc", "roc"},
		{".rockspec", "lua"},
		{".ron", "ron"},
		{".rq", "sparql"},
		{".rs", "rust"},
		{".rss", "xml"},
		{".rtx", "rtx"},
		{".scala", "scala"},
		{".scd", "supercollider"},
		{".scfg", "scfg"},
		{".scheme", "scheme"},
		{".scm", "scheme"},
		{".scss", "scss"},
		{".sdml", "sdml"},
		{".sface", "surface"},
		{".sh", "bash"},
		{".shader", "gdshader"},
		{".sincere", "sincere"},
		{".slang", "slang"},
		{".sld", "scheme"},
		{".slim", "slim"},
		{".slint", "slint"},
		{".smali", "smali"},
		{".smithy", "smithy"},
		{".smk", "snakemake"},
		{".sml", "sml"},
		{".snw", "rnoweb"},
		{".sol", "solidity"},
		{".soql", "soql"},
		{".sosl", "sosl"},
		{".sourcepawn", "sourcepawn"},
		{".sparql", "sparql"},
		{".sql", "sql"},
		{".sql_bigquery", "sql_bigquery"},
		{".sqlite", "sqlite"},
		{".ss", "scheme"},
		{".star", "starlark"},
		{".starlark", "starlark"},
		{".stp", "systemtap"},
		{".strace", "strace"},
		{".styled", "styled"},
		{".surface", "surface"},
		{".surrealql", "surrealql"},
		{".sus", "sus"},
		{".svelte", "svelte"},
		{".swift", "swift"},
		{".sxhkdrc", "sxhkdrc"},
		{".syphon", "syphon"},
		{".systemverilog", "systemverilog"},
		{".t32", "t32"},
		{".tact", "tact"},
		{".tcl", "tcl"},
		{".td", "tablegen"},
		{".teal", "teal"},
		{".templ", "templ"},
		{".tex", "latex"},
		{".textproto", "textproto"},
		{".tf", "terraform"},
		{".thrift", "thrift"},
		{".tiger", "tiger"},
		{".tlaplus", "tlaplus"},
		{".tmpl", "gotmpl"},
		{".tmux", "tmux"},
		{".tnsl", "tnsl"},
		{".todolang", "todolang"},
		{".todotxt", "todotxt"},
		{".toml", "toml"},
		{".tort", "tort"},
		{".ts", "typescript"},
		{".tsv", "tsv"},
		{".tsx", "tsx"},
		{".ttl", "turtle"},
		{".twig", "twig"},
		{".twolc", "twolc"},
		{".typespec", "typespec"},
		{".typoscript", "typoscript"},
		{".typst", "typst"},
		{".udev", "udev"},
		{".ungrammar", "ungrammar"},
		{".unison", "unison"},
		{".usd", "usd"},
		{".uxntal", "uxntal"},
		{".v", "verilog"},
		{".vala", "vala"},
		{".vhs", "vhs"},
		{".vim", "vim"},
		{".vimdoc", "vimdoc"},
		{".virdant", "virdant"},
		{".virgil", "virgil"},
		{".vlang", "v"},
		{".vsh", "v"},
		{".vto", "vento"},
		{".vue", "vue"},
		{".vv", "v"},
		{".walnut", "walnut"},
		{".wgsl", "wgsl"},
		{".wgsl_bevy", "wgsl_bevy"},
		{".wing", "wing"},
		{".wit", "wit"},
		{".woml", "woml"},
		{".xcompose", "xcompose"},
		{".xfst", "xfst"},
		{".xml", "xml"},
		{".yaml", "yaml"},
		{".yang", "yang"},
		{".yml", "yaml"},
		{".yuck", "yuck"},
		{".zathurarc", "zathurarc"},
		{".zig", "zig"},
		{".zon", "zig"},
		{"/etc/ssh/ssh_config", "ssh_config"},
		{"/etc/ssh/ssh_config.d/foobar", "ssh_config"},
		{"/etc/ssh/sshd_config", "ssh_config"},
		{"/home/foobar/.gitattributes", "gitattributes"},
		{"/home/foobar/.ignore", "gitignore"},
		{"/home/foobar/.ssh/config", "ssh_client_config"},
		{"COMMIT_EDITMSG", "gitcommit"},
		{"Containerfile", "dockerfile"},
		{"Dockerfile", "dockerfile"},
		{"Doxyfile", "doxygen"},
		{"EDIT_DESCRIPTION", "gitcommit"},
		{"Earthfile", "earthfile"},
		{"Gemfile", "ruby"},
		{"Gemfile.lock", "gemfilelock"},
		{"MERGE_MSG", "gitcommit"},
		{"Makefile", "make"},
		{"NOTES_EDITMSG", "gitcommit"},
		{"Puppetfile", "ruby"},
		{"Rakefile", "ruby"},
		{"TAG_EDITMSG", "gitcommit"},
		{"bogus", "unknown"},
		{"dockerfile", "dockerfile"},
		{"foo/.babelrc", "json"},
		{"foo/.editorconfig", "editorconfig"},
		{"foo/.eslintrc", "json"},
		{"foo/.git/config", "git_config"},
		{"foo/.gitattributes", "gitattributes"},
		{"foo/.gitconfig", "git_config"},
		{"foo/.gitignore", "gitignore"},
		{"foo/.gitmodules", "git_config"},
		{"foo/.ignore", "gitignore"},
		{"foo/.irb_history", "ruby"},
		{"foo/.irbrc", "ruby"},
		{"foo/.prettierrc", "json"},
		{"foo/.trans", "clojure"},
		{"foo/Cargo.lock", "toml"},
		{"foo/Pipfile", "toml"},
		{"foo/Pipfile.lock", "json"},
		{"foo/Vagrantfile", "ruby"},
		{"foo/constraints.txt", "requirements"},
		{"foo/flake.lock", "json"},
		{"foo/git-rebase-todo", "git_rebase"},
		{"foo/go.work.sum", "gosum"},
		{"foo/hyprfoo.conf", "hyprlang"},
		{"foo/irb_history", "ruby"},
		{"foo/irbrc", "ruby"},
		{"foo/requirements.in", "requirements"},
		{"foo/requirements.txt", "requirements"},
		{"foo/robots.txt", "robots"},
		{"go-sitter-forest/foobar/folds.scm", "query"},
		{"go.mod", "gomod"},
		{"go.sum", "gosum"},
		{"go.work", "gowork"},
		{"init.trans", "clojure"},
		{"internal/testdata/modeline_prolog1", "prolog"},
		{"internal/testdata/modeline_v1.v", "v"},
		{"internal/testdata/modeline_verilog1.v", "verilog"},
		{"makefile", "make"},
		{"nginx/a/b/c/d/foo", "unknown"},
		{"nginx/conf", "nginx"},
		{"nginx/platform1/server3/base.conf", "nginx"},
		{"nginx/server1/conf", "nginx"},
		{"nginx/server2/common.conf", "nginx"},
		{"nginx/some.conf", "nginx"},
		{"passwd", "passwd"},
		{"passwd-", "passwd"},
		{"queries/foo.scm", "query"},
		{"queries/foo/bar.scm", "query"},
		{"queries/foo/bar/baz.scm", "query"},
		{"queries/foo/bar/baz/foobar.scm", "scheme"},
	}

	allLangs, _ := filepath.Glob("*/binding.go")
	for i, lang := range allLangs {
		allLangs[i] = filepath.Dir(lang)
	}

	testedLangs := &sync.Map{}
	testedComponents := &sync.Map{}
	for _, tc := range testCases {
		testedComponents.Store(tc.s, true)
		t.Run(tc.s+":"+tc.exp, func(t *testing.T) {
			s := tc.s
			if strings.HasPrefix(s, ".") {
				s = "foobar" + s
			}

			if act := DetectLanguage(s); act != tc.exp {
				t.Fatalf("Expected %q got %q", tc.exp, act)
			}

			// Only try out this scenario with non-paths (basically, extensions+basename).
			// With paths, we may actually need to find the file on disk.
			if !strings.Contains(s, string(os.PathSeparator)) {
				s = filepath.Join("foo", "bar", "baz", s)
				if act := DetectLanguage(s); act != tc.exp {
					t.Fatalf("Expected %q got %q", tc.exp, act)
				}
			}

			testedLangs.Store(tc.exp, true)
		})
	}

	testedLangs.Range(func(k, _ any) bool {
		allLangs = slices.DeleteFunc(allLangs, func(s string) bool { return s == k.(string) })
		return true
	})

	if len(allLangs) > 0 {
		t.Fatalf("These langs have no test cases: %v", allLangs)
	}

	exts := maps.Keys(ft.Ext)
	bases := maps.Keys(ft.Basename)
	paths := maps.Keys(ft.Fullpath)

	testedComponents.Range(func(k, _ any) bool {
		key := k.(string)
		fn := func(s string) bool { return s == key || filepath.Base(key) == s || filepath.Ext(key) == s }
		exts, bases, paths = slices.DeleteFunc(exts, fn),
			slices.DeleteFunc(bases, fn),
			slices.DeleteFunc(paths, fn)

		return true
	})

	if len(exts) > 0 {
		t.Fatalf("These exts have no test cases: %v", exts)
	}

	if len(bases) > 0 {
		t.Fatalf("These bases have no test cases: %v", bases)
	}

	if len(paths) > 0 {
		t.Fatalf("These paths have no test cases: %v", paths)
	}
}

func TestRegisterLanguage(t *testing.T) {
	d := ftDetector{}
	zero := ftDetector{}
	ftTodolang := ftDetector{
		Glob:     map[string]string{"foos/*.foo": "todolang"},
		Fullpath: map[string]string{".foos/bar/.foo": "todolang"},
		Ext:      map[string]string{".foo": "todolang"},
		Basename: map[string]string{"foo": "todolang"},
	}
	testCases := []struct {
		pat, lang string
		expErr    error
		exp       ftDetector
	}{
		{"", "", errMissingPattern, zero},
		{"", "go", errMissingPattern, zero},
		{"foo", "", errMissingLanguage, zero},
		{"foo", "bogus", errInvalidLanguage, zero},
		{"foos/*.foo", "todolang", nil, ftDetector{
			Glob: map[string]string{"foos/*.foo": "todolang"},
		}},
		{".foos/bar/.foo", "todolang", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "todolang"},
			Fullpath: map[string]string{".foos/bar/.foo": "todolang"},
		}},
		{".foo", "todolang", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "todolang"},
			Fullpath: map[string]string{".foos/bar/.foo": "todolang"},
			Ext:      map[string]string{".foo": "todolang"},
		}},
		{"foo", "todolang", nil, ftTodolang},
		// Repeat the above (should be no difference).
		{"foos/*.foo", "todolang", nil, ftTodolang},
		{".foos/bar/.foo", "todolang", nil, ftTodolang},
		{".foo", "todolang", nil, ftTodolang},
		{"foo", "todolang", nil, ftTodolang},
		// Repeat, but this time change lang (must overwrite it).
		{"foos/*.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "todolang"},
			Ext:      map[string]string{".foo": "todolang"},
			Basename: map[string]string{"foo": "todolang"},
		}},
		{".foos/bar/.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "todolang"},
			Basename: map[string]string{"foo": "todolang"},
		}},
		{".foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
			Basename: map[string]string{"foo": "todolang"},
		}},
		{"foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
			Basename: map[string]string{"foo": "comment"},
		}},
		// Repeat, but this time change pat (should add it).
		{"foosa/*.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", "foosa/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
			Basename: map[string]string{"foo": "comment"},
		}},
		{".foosa/bar/.foo", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", "foosa/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment"},
			Basename: map[string]string{"foo": "comment"},
		}},
		{".foosa", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", "foosa/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment", ".foosa": "comment"},
			Basename: map[string]string{"foo": "comment"},
		}},
		{"foosa", "comment", nil, ftDetector{
			Glob:     map[string]string{"foos/*.foo": "comment", "foosa/*.foo": "comment"},
			Fullpath: map[string]string{".foos/bar/.foo": "comment", ".foosa/bar/.foo": "comment"},
			Ext:      map[string]string{".foo": "comment", ".foosa": "comment"},
			Basename: map[string]string{"foo": "comment", "foosa": "comment"},
		}},
	}

	for _, tc := range testCases {
		t.Run(tc.pat+":"+tc.lang, func(t *testing.T) {
			if err := d.register(tc.pat, tc.lang); !errors.Is(err, tc.expErr) {
				t.Fatalf("Expected error %v got %v", tc.expErr, err)
			} else if !reflect.DeepEqual(d, tc.exp) {
				t.Fatalf("Expected %v got %#v", tc.exp, d)
			}
		})
	}
}

type modeTest struct {
	modeline, exp string
}

func TestDetectByModeline(t *testing.T) {
	t.Skip("Tested implicitly via TestDetectLanguage()")
}

func TestExtractFromModeline(t *testing.T) {
	testCases := []modeTest{
		{"", ""},
		{"ft=go", ""},
		{"filetype=go", ""},
		{":filetype=go:", ""},
		{":set filetype=go:", ""},
	}

	for _, vi := range []string{"Vim", "Vi", "vim", "vi", "ex", "Vox", "vox"} {
		for _, pre := range []string{"", " ", "ts=4 ", " ts=4 ", "ts=4:", " ts=4 : ", "set ", " set ", "set ts=4 "} {
			for _, cmd := range []string{"ft", "filetype", "syntax", "ft ", "filetype ", "syntax ", "ft     ", "filetype\t\t\t  ", "syntax   \t\t   \t\t   "} {
				for _, post := range []string{"", " ", "\t", "    ", "   \t   \t   "} {
					testCases = append(testCases, modeTest{fmt.Sprintf("%s:%s%s=%sgo:", vi, pre, cmd, post), "go"})
				}
			}
		}
	}

	for _, tc := range testCases {
		t.Run(tc.modeline, func(t *testing.T) {
			if act := extractFromModeline(tc.modeline); act != tc.exp {
				t.Fatalf("Expected %q got %q for %q", tc.exp, act, tc.modeline)
			}
		})
	}
}

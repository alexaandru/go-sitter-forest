//nolint:forbidigo // ok in here, we're main!
package main

import (
	"bytes"
	"cmp"
	"context"
	"crypto/sha256"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"log/slog"
	"maps"
	"net/http"
	"net/url"
	"os"
	"os/exec"
	"path"
	"path/filepath"
	"regexp"
	"slices"
	"strings"
	"sync"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"golang.org/x/sync/errgroup"
	"golang.org/x/sync/semaphore"
)

const (
	force        = true
	plugFmt      = "%s:\n\t@go build -trimpath -buildmode=plugin -tags plugin github.com/alexaandru/go-sitter-forest/%s"
	grammarsJSON = "grammars.json"
	grammarJSON  = "grammar.json"
	grammarJS    = "grammar.js"
	upToDate     = "(up-to-date)"

	nvimTreeSiterURL = "https://github.com/nvim-treesitter/nvim-treesitter"
)

var (
	grammars = grammar.Grammars{}

	replaceMap = map[string]string{
		`"../../common/scanner.h"`: `"scanner.h"`,
		//`"../../../include/scanner.h"`:   `"scanner.h"`,.
		`"../../../common/scanner.h"`:    `"scanner.h"`,
		`"tree_sitter/parser.h"`:         `"parser.h"`,
		`"tree_sitter_comment/parser.c"`: `"_parser.c"`,
		`"tree_sitter_comment/parser.h"`: `"_parser.h"`,
		`"tree_sitter_comment/tokens.h"`: `"tokens.h"`,
		`"tree_sitter_rst/scanner.c"`:    `"_scanner.c"`,
		`"tree_sitter_rst/scanner.h"`:    `"scanner.h"`,
		`"tree_sitter_rst/tokens.h"`:     `"tokens.h"`,
		`"tree_sitter/array.h"`:          `"array.h"`,
		`"tree_sitter/alloc.h"`:          `"alloc.h"`,
		// VHDL.
		`"libraries/std/env.h"`:             `"env.h"`,
		`"../../TokenType.h"`:               `"TokenType.h"`,
		`"libraries/std/standard.h"`:        `"standard.h"`,
		`"libraries/std/textio.h"`:          `"textio.h"`,
		`"libraries/ieee/std_logic_1164.h"`: `"std_logic_1164.h"`,
		`"libraries/ieee/numeric_std.h"`:    `"numeric_std.h"`,
		`"libraries/ieee/fixed_pkg.h"`:      `"fixed_pkg.h"`,
		`"libraries/ieee/float_pkg.h"`:      `"float_pkg.h"`,
		`"libraries/ieee/math_real.h"`:      `"math_real.h"`,
		`"libraries/ieee/math_complex.h"`:   `"math_complex.h"`,
		// Glimmer_typescript.
		`"./tree-sitter-typescript/scanner.h"`: `"scanner.h"`,
	}

	logFile *os.File
	logger  *slog.Logger

	nonRedirectingClient = new(http.Client)

	rxReq = regexp.MustCompile(`require\(['"](\..*?)['"]\)`)

	sem = semaphore.NewWeighted(4)

	errUnknownCmd = errors.New("unknown command, must be one of: check-updates, update-all, [force-]update <lang>, update-bindings")
)

func checkUpdates() error {
	fmt.Printf("%-40s\t%-10s\t%s\n%s\n", "Language", "Branch", "Status", strings.Repeat("─", 100))

	return grammars.ForEach(func(gr *grammar.Grammar) (err error) {
		if gr.SkipUpdate {
			return
		}

		if err = gr.FetchNewVersion(); err != nil {
			return
		}

		status := upToDate
		if nextVersion := gr.NewVersion(); nextVersion != nil {
			status = fmt.Sprintf("(update available: %s -> %s)", gr.Revision, nextVersion.Revision)
		} else if !gr.SkipGenerate && gr.GrammarSha == "" {
			status = "(grammar was never re-generated)"
		}

		if status != upToDate {
			fmt.Printf("%-40s\t%-10s\t%s\n", gr.Language, gr.Reference, status)
		}

		return
	})
}

// checkIfRedirect checks if the repo URL redirects to some other URL, in which
// case it auto-updates the grammar to use the final URL and skip the redirect.
func checkIfRedirect(gr *grammar.Grammar) {
	req, err := http.NewRequestWithContext(context.TODO(), http.MethodGet, gr.URL, http.NoBody)
	if err != nil {
		logger.Error("checkIfRedirect", "err", err)
		return
	}

	resp, err := nonRedirectingClient.Do(req)
	if err != nil {
		return
	}

	resp.Body.Close() //nolint:errcheck // ok

	if resp.StatusCode != http.StatusMovedPermanently {
		return
	}

	var loc *url.URL

	if loc, err = resp.Location(); err == nil {
		logger.Warn("Obsolete URL", "grammar", gr.Language, "old", gr.URL, "new", loc.String())
		gr.URL = loc.String()
	} else {
		logger.Warn("Obsolete URL", "grammar", gr.Language, "old", gr.URL, "err", err)
	}
}

func updateAll(force bool) (err error) {
	fmt.Println("Updating all (applicable) languages ...")

	if err = grammars.ForEach(func(gr *grammar.Grammar) error {
		if gr.SkipUpdate {
			return nil
		}

		return update(gr, force)
	}); err != nil {
		return
	}

	if err = updatePluginsMakefile(); err != nil {
		return
	}

	if err = fetchQueries(&grammar.Grammar{Language: "nvim_treesitter", URL: nvimTreeSiterURL}); err != nil {
		return
	}

	if err = updateGrammars(); err != nil {
		return
	}

	return updateForest()
}

func updateBindings() error {
	fmt.Println("Updating all languages' binding.go files ...")

	return grammars.ForEach(func(gr *grammar.Grammar) error {
		return createBindings(gr.Language, force)
	})
}

func updatePluginsMakefile() (err error) {
	mkFileContent := []string{}
	mkFileTargets := []string{}
	mux := sync.Mutex{}

	if err = grammars.ForEach(func(gr *grammar.Grammar) error {
		mux.Lock()
		defer mux.Unlock()

		target := "plugin-" + gr.Language
		mkFileTargets = append(mkFileTargets, target)
		mkFileContent = append(mkFileContent, fmt.Sprintf(plugFmt, target, gr.Language))

		return nil
	}); err != nil {
		return
	}

	slices.Sort(mkFileContent)
	slices.Sort(mkFileTargets)

	content := slices.Concat([]string{"# NOTE: This file is generated automatically! DO NOT EDIT!\n\nplugin-all: " +
		strings.Join(mkFileTargets, " ")},
		mkFileContent)

	return os.WriteFile("Plugins.make", []byte(strings.Join(content, "\n\n")), 0o640)
}

func updateGrammars() (err error) {
	slices.SortFunc(grammars, func(a, b *grammar.Grammar) int {
		return cmp.Compare(a.Language, b.Language)
	})

	if err = writeJSON(grammarsJSON, grammars); err != nil {
		return
	}

	if err = grammars.ForEach(func(gr *grammar.Grammar) error {
		return writeJSON(filepath.Join(gr.Language, grammarJSON), gr)
	}); err != nil {
		return
	}

	return updateParsersMd()
}

func update(gr *grammar.Grammar, force bool) (err error) {
	if gr.SkipUpdate {
		return
	}

	checkIfRedirect(gr)

	if err = gr.FetchNewVersion(); err != nil {
		return
	}

	var msg, newSha string

	v := gr.NewVersion()

	if !gr.SkipGenerate {
		if newSha, err = downloadGrammar(gr); err != nil {
			return
		}
	}

	switch {
	case v != nil:
		msg, gr.Version = fmt.Sprintf("new version (%q -> %q)", gr.Revision, v.Revision), v
	case newSha != "" && newSha != gr.GrammarSha:
		msg = fmt.Sprintf("grammar sha differs (%q -> %q)", gr.GrammarSha, newSha)
	case force:
		msg = "forced update"
	default:
		return
	}

	fmt.Printf("%-20s%s\n", gr.Language, msg)

	if err = downloadFiles(gr); err != nil {
		return
	}

	if gr.SkipGenerate {
		return
	}

	if newSha != "" {
		gr.GrammarSha = newSha
		if err = regenerateGrammar(gr); err != nil {
			return
		}
	}

	silentQueryUpdates = true

	return fetchQueries(gr)
}

// downloads the grammar.js file and any local dependencies (files that are required by it).
func downloadGrammar(grRO *grammar.Grammar) (newSha string, err error) { //nolint:funlen,gocognit // FIXME: This is waaaaay too long and doing waaaaay too much!
	// We need to temporarily alter gr in here because in case of failure
	// we do not want the grammars.js to be updatd with the new info.
	gr, shas := *grRO, map[string]string{}

	os.RemoveAll(filepath.Join("tmp", gr.Language)) //nolint:errcheck // don't care about error, folder might not exist

	src, dst := grammarJS, filepath.Join("tmp", gr.Language, grammarJS)
	if gr.SrcRoot != "" {
		src = path.Join(gr.SrcRoot, grammarJS)
	}

	if err = makeDir(filepath.Dir(dst)); err != nil {
		return
	}

	if gr.Language == "vim" {
		// NOTE: Apparently, vim fails to create the src folder when needed.
		if err = makeDir(filepath.Join(filepath.Dir(dst), "src")); err != nil {
			return
		}
	}

	v := gr.NewVersion()
	if v != nil {
		gr.Version = v
	}

	var uri string

	if uri, err = gr.ContentURL(); err != nil {
		return
	}

	grammarJsURL := uri + src

	var grc []byte

	if grc, err = fetchFile(grammarJsURL); err != nil {
		return
	}

	shas[grammarJS] = fmt.Sprintf("%x", sha256.Sum256(grc))
	replMap := map[string]string{
		`export default `: `module.exports = `,
		// Patching broken grammars so that they compile.
		// This is a bit "brute-force", but seems to do the job ¯\_(ツ)_/¯.
		`/u{[\da-fA-F]+}/`:    `/u[\da-fA-F]+/`,
		`/u{[0-9a-fA-F]+}/`:   `/u[0-9a-fA-F]+/`,
		`/u{[0-9a-fA-F ]+}/`:  `/u[0-9a-fA-F]+/`,
		`/x{[0-9a-fA-F]+}/`:   `/x[0-9a-fA-F]+/`,
		`/{([^}\n\\]|\\.)+}/`: `/\{([^}\n\\]|\\.)+\}/`,
		// This is for sparql.
		`token.immediate(
		choice(
		  ...PN_CHARS_U,
		  /[0-9]/
		),
		optional(seq(
		  repeat(choice(
			...PN_CHARS,
			'.'
		  )),
		  choice(...PN_CHARS)
		))
	  )`: `token.immediate(seq(
		choice(
		  ...PN_CHARS_U,
		  /[0-9]/
		),
		optional(seq(
		  repeat(choice(
			...PN_CHARS,
			'.'
		  )),
		  choice(...PN_CHARS)
		))
	  ))`,
		// This is for lexc.
		`require("tree-sitter-xfst/grammar")`: `require("./grammar2.js")`,
		// This is for galvan.
		`require("../helpers")`:    `require("./helpers.js")`,
		`require("../precedence")`: `require("./precedence.js")`,
		`require('../precedence')`: `require("./precedence.js")`,
		// This is for terra.
		`require('tree-sitter-lua/grammar')`: `require('@tree-sitter-grammars/tree-sitter-lua/grammar')`,
	}

	for _, file := range extractDeps(gr.Language, grc) {
		base := path.Base(file)
		if base == "grammar.js" {
			// We must also check to not overwrite grammar.js file when pulling deps.
			base = "grammar2.js"
		}

		switch gr.Language {
		case "dtd", "xml":
			switch file {
			case "../common.js":
				replMap["../common"] = "common.js"
				continue
			case "../common/index.js":
				base = "common.js"
			default:
				replMap[file] = base
			}
		case "lat":
			if file == "./grammar_maker.js" {
				file = "./grammar_maker.ts"
				base = "grammar_maker.ts"
			}
		default:
			replMap[file] = base
		}

		// NOTE: Here we download from URLs with ../ ./ etc. in them.
		// Looks fine for Github, untested for the others though.
		fsrc, fdst := uri+path.Dir(src)+"/"+file, filepath.Join("tmp", gr.Language, base)

		var b []byte //nolint:varnamelen // ok

		if b, err = fetchFile(fsrc); err != nil {
			return
		}

		// FIXME: DRY this!
		for k, v := range replMap {
			if strings.HasSuffix(v, ".js") {
				v = "./" + v
			}

			b = bytes.ReplaceAll(b, []byte(k), []byte(v))

			k = k[:len(k)-3]

			b = bytes.ReplaceAll(b, []byte("'"+k+"'"), []byte("'"+v+"'"))
			b = bytes.ReplaceAll(b, []byte(`"`+k+`"`), []byte("'"+v+"'"))
		}

		var ok bool

		if ok, err = fileExists(fdst); err != nil {
			return
		}

		if ok {
			return "", fmt.Errorf("file %s already exists", fdst)
		}

		shas[base] = fmt.Sprintf("%x", sha256.Sum256(b))

		if err = os.WriteFile(fdst, b, 0o640); err != nil {
			return
		}
	}

	for k, v := range replMap {
		if strings.HasSuffix(v, ".js") {
			v = "./" + v
		}

		grc = bytes.ReplaceAll(grc, []byte(k), []byte(v))

		k = k[:len(k)-3]

		grc = bytes.ReplaceAll(grc, []byte("'"+k+"'"), []byte("'"+v+"'"))
		grc = bytes.ReplaceAll(grc, []byte(`"`+k+`"`), []byte("'"+v+"'"))
	}

	if err = os.WriteFile(dst, grc, 0o640); err != nil {
		return
	}

	var ok bool

	gr2 := filepath.Join("tmp", gr.Language, "grammar2.js")
	if ok, err = fileExists(gr2); err != nil {
		return
	}

	if ok {
		var gr2b []byte

		if gr2b, err = os.ReadFile(gr2); err != nil {
			return
		}

		for k, v := range replMap {
			v = "./" + v
			gr2b = bytes.ReplaceAll(gr2b, []byte(k), []byte(v))

			k = k[:len(k)-3]
			gr2b = bytes.ReplaceAll(gr2b, []byte("'"+k+"'"), []byte("'"+v+"'"))
		}

		if err = os.WriteFile(gr2, gr2b, 0o640); err != nil {
			return
		}
	}

	// If there's only one sha, return it.
	if len(shas) == 1 {
		for _, v := range shas {
			return v, nil
		}
	}

	keys := []string{}

	for k := range shas {
		keys = append(keys, k)
	}

	slices.Sort(keys)

	n := sha256.New()

	for _, k := range keys {
		if _, err = n.Write([]byte(shas[k])); err != nil {
			return
		}
	}

	return fmt.Sprintf("%x", n.Sum(nil)), nil //nolint:perfsprint // TODO
}

func extractDeps(lang string, content []byte) (deps []string) {
	raw := rxReq.FindAllStringSubmatch(string(content), -1)
	if len(raw) == 0 && !bytes.Contains(content, []byte("tree-sitter-xfst/grammar")) {
		return
	}

	for _, m := range raw {
		if z := m[1]; z != "" {
			if !strings.HasSuffix(z, ".js") {
				z += ".js"
			}

			if lang == "haxe" && strings.Contains(z, "grammar-types") {
				// It's commented out.
				continue
			}

			deps = append(deps, z)
		}
	}

	switch lang {
	case "apex":
		deps = append(deps, "../common/soql-grammar.js")
	case "dtd", "xml":
		deps = append(deps, "../common/index.js")
	case "sosl":
		deps = append(deps, "../common/soql-grammar.js", "../common/common.js")
	case "soql":
		deps = append(deps, "../common/common.js")
	case "haskell", "haskell_persistent", "purescript":
		deps = append(deps, "./grammar/util.js")
	case "markdown", "markdown_inline":
		deps = append(deps, "../common/html_entities.json")
	case "unison":
		deps = append(deps, "./grammar/precedences.js", "./grammar/function-application.js")
	case "idris":
		deps = append(deps, "./grammar/util.js")
	case "lexc":
		deps = append(deps, "../tree-sitter-xfst/grammar.js")
	case "rust_with_rstml", "rstml":
		deps = append(deps, "../rust.grammar.js")
	case "galvan":
		deps = append(deps, "precedence.js")
	}

	return
}

func downloadFiles(gr *grammar.Grammar) (err error) {
	if err = makeDir(gr.Language); err != nil {
		return
	}

	if err = createBindings(gr.Language); err != nil {
		return
	}

	g := new(errgroup.Group)

	var files map[string]string

	if files, err = gr.FilesMap(); err != nil {
		return
	}

	for src, dst := range files {
		g.Go(func() error { return downloadFile(gr.Language, src, dst) })
	}

	if err = g.Wait(); err != nil {
		return
	}

	// For these grammars 1st file is included into the 2nd file and it causes
	// cgo to compile the 1st one twice and throw duplicate symbols error.
	switch gr.Language {
	case "unison":
		err = combineFiles("maybe.c", "scanner.c", gr)
	case "comment":
		err = combineFiles("chars.c", "scanner.c", gr, "touch")
	case "perl":
		err = combineFiles("bsearch.c", "tsp_unicode.h", gr)
	}

	return
}

func regenerateGrammar(gr *grammar.Grammar) (err error) {
	if err = sem.Acquire(context.TODO(), 1); err != nil {
		return
	}

	defer sem.Release(1)

	tmpPath := filepath.Join("tmp", gr.Language)
	cmd := exec.Command("npx", "tree-sitter", "generate")
	cmd.Dir = tmpPath

	var (
		cmdOut []byte
		hFiles []string
	)

	if cmdOut, err = cmd.CombinedOutput(); err != nil {
		fmt.Println(string(cmdOut))
		return
	}

	if hFiles, err = filepath.Glob(filepath.Join(tmpPath, "src", "tree_sitter", "*.h")); err != nil {
		return
	}

	files := append(hFiles, filepath.Join(tmpPath, "src", "parser.c")) //nolint:gocritic // ok
	filesMap := map[string]string{}

	for _, file := range files {
		filesMap[file] = filepath.Join(gr.Language, filepath.Base(file))
	}

	for src, dst := range filesMap {
		var b []byte

		if b, err = os.ReadFile(src); err != nil {
			return
		}

		if err = putFile(b, gr.Language, dst); err != nil {
			return
		}
	}

	return
}

func createBindings(lang string, opts ...bool) (err error) {
	force := false
	if len(opts) > 0 {
		force = opts[0]
	}

	for toPath, content := range mkBindingMap(lang) {
		var found bool

		if found, err = fileExists(toPath); err != nil {
			return // Allow force overwriting except for binding_test.go.
		} else if !found || (force && filepath.Base(toPath) != "binding_test.go") {
			if err = createBindingFile(toPath, content); err != nil {
				return
			}
		}
	}

	return
}

func createBindingFile(toPath, content string) error {
	return os.WriteFile(toPath, []byte(content), 0o640)
}

func downloadFile(lang, uri, toPath string) (err error) {
	b, err := fetchFile(uri)
	if err != nil {
		file := path.Base(uri)
		if file == "alloc.h" || file == "array.h" {
			logger.Warn("header file not found", "file", file, "lang", lang)
			return nil
		}

		return
	}

	return putFile(b, lang, toPath)
}

func putFile(content []byte, lang, toPath string) error {
	reMap := maps.Clone(replaceMap)

	switch filepath.Base(toPath) {
	case "tag.h":
		// This identifier is common across tag.h files and causes issues.
		// It needs it's own unique name per lang.
		reMap["TAG_TYPES_BY_TAG_NAME"] = "TAG_TYPES_BY_TAG_NAME_" + lang
	case "scanner.c", "scanner.cc", "scanner.h", "parser.h", "typescript-scanner.h", "_parser.c", "chars.c", "chars.h", "_scanner.c", "TokenTree.inc":
		// These identifiers clash between many (org, beancount, etc.) parsers.
		// They also need their own unique name per lang.
		reMap[" serialize("] = fmt.Sprintf(" serialize_%s(", lang)
		reMap[" deserialize("] = fmt.Sprintf(" deserialize_%s(", lang)
		reMap["->serialize("] = fmt.Sprintf("->serialize_%s(", lang)
		reMap["->deserialize("] = fmt.Sprintf("->deserialize_%s(", lang)
		reMap[" state_new("] = fmt.Sprintf(" state_new_%s(", lang)
		reMap[" scan("] = fmt.Sprintf(" scan_%s(", lang)
		reMap[" scanner_reset("] = fmt.Sprintf(" scanner_reset_%s(", lang)
		reMap["!scan("] = fmt.Sprintf("!scan_%s(", lang)
		reMap["->scan("] = fmt.Sprintf("->scan_%s(", lang)
		reMap["advance("] = fmt.Sprintf("advance_%s(", lang)
		reMap["advance ("] = fmt.Sprintf("advance_%s(", lang)
		reMap["void (*advance)(TSLexer *, bool)"] = fmt.Sprintf("void (*advance_%s)(TSLexer *, bool)", lang)
		reMap[" skip("] = fmt.Sprintf(" skip_%s(", lang)
		reMap["\nskip("] = fmt.Sprintf("\nskip_%s(", lang)
		reMap["is_upper("] = fmt.Sprintf("is_upper_%s(", lang)
		reMap["is_digit("] = fmt.Sprintf("is_digit_%s(", lang)
		reMap["is_newline("] = fmt.Sprintf("is_newline_%s(", lang)
		reMap["is_space("] = fmt.Sprintf("is_space_%s(", lang)
		reMap["is_internal_char("] = fmt.Sprintf("is_internal_char_%s(", lang)
	}

	if slices.Contains([]string{"_scanner.c", "chars.c", "chars.h"}, filepath.Base(toPath)) {
		reMap[`"parser.c"`] = `"_parser.c"`
		reMap[`"parser.h"`] = `"_parser.h"`
		reMap[`"scanner.c"`] = `"_scanner.c"`
	}

	for old, new := range reMap {
		content = bytes.ReplaceAll(content, []byte(old), []byte(new))
	}

	return os.WriteFile(toPath, content, 0o640)
}

func fetchFile(uri string) (b []byte, err error) {
	var resp *http.Response

	if resp, err = http.Get(uri); err != nil { //nolint:gosec,noctx // ok
		return
	}

	defer resp.Body.Close() //nolint:errcheck // ok, readonly

	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("incorrect response status code: %d when downloading %q", resp.StatusCode, uri)
	}

	return io.ReadAll(resp.Body)
}

func writeJSON(fname string, content any) error {
	b, err := json.MarshalIndent(content, "", "  ")
	if err != nil {
		return err
	}

	return os.WriteFile(fname, b, 0o640)
}

func updateParsersMd() error { //nolint:funlen // TODO
	f, err := os.Create("PARSERS.md")
	if err != nil {
		return fmt.Errorf("creating PARSERS.md error: %w", err)
	}

	planned, skipped, implemented, withQueries := 0, 0, 0, 0
	text := `# %d Supported Parsers

%d pending, %d skipped regeneration, %d missing queries

<!--This entire file is automatically updated via automation, do NOT edit anything in here!-->
<!--parserinfo-->
`

	for _, gr := range grammars {
		lang := gr.Language
		if gr.AltName != "" {
			lang = gr.AltName
		}

		checked := "x"
		if gr.Pending {
			checked = " "
		}

		maint := ""

		if x := gr.MaintainedBy; x != "" {
			doc := ""
			if gr.Doc != "" {
				doc = "; "

				if gr.SkipGenerate || gr.SkipUpdate {
					doc += "❌"
				}

				doc += gr.Doc
			}

			maint = fmt.Sprintf(" (maintained by %s%s)", x, doc)
		}

		switch {
		case gr.Pending:
			planned++
		case gr.SkipGenerate:
			implemented++
			skipped++
		default:
			implemented++
		}

		attr := ""
		if gr.GrammarSha != "" {
			attr = " 🗸"
		}

		if scms, _ := filepath.Glob(filepath.Join(gr.Language, "*.scm")); len(scms) > 1 { //nolint:errcheck // ok
			if attr == " 🗸" {
				attr = " ✔️"
			} else {
				attr = " 🔍"
			}

			withQueries++
		}

		text += fmt.Sprintf("- [%s] [%s](%s)%s%s\n", checked, lang, gr.URL, attr, maint)
	}

	text += "<!--parserinfo-->\n\nLegend:\n" +
		"- [x] ✔️parser files regenerated from `grammar.js` and queries are available;\n" +
		"- [x] 🗸 parser files regenerated from `grammar.js`, no queries though;\n" +
		"- [x] 🔍 queries are available;\n" +
		"- [x] ❌ parser files copied from the repo;\n" +
		"- [ ] parser not implemented (pending).\n"

	if _, err = fmt.Fprintf(f, text, implemented, planned, skipped, implemented-withQueries); err != nil {
		return fmt.Errorf("writing PARSERS.md error: %w", err)
	}

	if err = f.Close(); err != nil {
		return fmt.Errorf("saving PARSERS.md error: %w", err)
	}

	return nil
}

func combineFiles(from, into string, gr *grammar.Grammar, opts ...string) (err error) {
	extra := ""
	if len(opts) > 0 {
		extra = opts[0]
	}

	touch := false
	if extra == "touch" {
		touch, extra = true, ""
	}

	f1 := path.Join(gr.Language, from)
	f2 := path.Join(gr.Language, into)

	var f1b, f2b []byte

	if f1b, err = os.ReadFile(f1); err != nil {
		return
	}

	if f2b, err = os.ReadFile(f2); err != nil {
		return
	}

	if err = os.Remove(f1); err != nil {
		return
	}

	if touch {
		var f *os.File

		if f, err = os.Create(f1); err != nil {
			return
		}

		if err = f.Close(); err != nil {
			return
		}
	}

	// Combine both files into one.
	b := bytes.Join([][]byte{[]byte(extra), f1b, f2b}, []byte("\n"))
	// Remove include expression.
	b = bytes.ReplaceAll(b, []byte(`#include "./`+from+`"`), []byte(""))
	b = bytes.ReplaceAll(b, []byte(`#include "`+from+`"`), []byte(""))

	return os.WriteFile(filepath.Join(gr.Language, into), b, 0o640)
}

func main() { //nolint:funlen // ok
	defer func() {
		if err := logFile.Close(); err != nil {
			fmt.Println("Failed to close the logfile:", err)
		}
	}()

	args := os.Args[1:]
	if len(args) < 1 {
		die("command expected")
	}

	var (
		err error
		gr  *grammar.Grammar
	)

	switch cmd := args[0]; {
	case cmd == "check-updates":
		err = checkUpdates()
	case cmd == "force-update-all" || cmd == "update-all":
		err = updateAll(strings.HasPrefix(cmd, "force-"))
	case cmd == "update-bindings":
		err = updateBindings()
	case cmd == "update-queries":
		err = updateQueries()
	case cmd == "update-forest":
		err = updateForest()
	case strings.HasPrefix(cmd, "update-queries-"):
		switch lang := cmd[15:]; lang {
		case "nvim_treesitter":
			gr = &grammar.Grammar{Language: lang, URL: nvimTreeSiterURL}
		default:
			if gr, err = grammars.Find(lang); err != nil {
				break
			}
		}

		err = fetchQueries(gr)
	default:
		lang, force := "", false

		switch {
		case strings.HasPrefix(cmd, "update-"):
			lang = cmd[7:]
		case strings.HasPrefix(cmd, "force-update-"):
			force = true
			lang = cmd[13:]
		}

		if lang == "" {
			err = errUnknownCmd

			break
		}

		if gr, err = grammars.Find(lang); err != nil {
			break
		}

		if err = update(gr, force); err != nil {
			break
		}

		err = updateGrammars()
	}

	if err != nil {
		die(err)
	}
}

func init() {
	b, err := os.ReadFile(grammarsJSON)
	if err != nil {
		die(err)
	}

	err = json.Unmarshal(b, &grammars)
	if err != nil {
		die(err)
	}

	newMap := maps.Clone(replaceMap)

	for k, v := range replaceMap {
		k = `<` + strings.Trim(k, `"`) + `>`
		newMap[k] = v
	}

	replaceMap = newMap

	if logFile, err = os.OpenFile("auto.log", os.O_CREATE|os.O_APPEND|os.O_WRONLY, 0o640); err != nil {
		die(err)
	}

	logger = slog.New(slog.NewJSONHandler(logFile, nil))

	nonRedirectingClient.CheckRedirect = func(req *http.Request, via []*http.Request) error {
		return errors.New("Redirect")
	}
}

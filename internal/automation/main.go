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
)

var (
	errUnknownCmd = fmt.Errorf("unknown command, must be one of: check-updates, update-all, [force-]update <lang>, update-bindings")
	grammars      = Grammars{}
	replaceMap    = map[string]string{
		`"../../common/scanner.h"`: `"scanner.h"`,
		//`"../../../include/scanner.h"`:   `"scanner.h"`,
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
	}

	logFile *os.File
	logger  *slog.Logger
)

func checkUpdates() error {
	fmt.Printf("%-40s\t%-10s\t%s\n%s\n", "Language", "Branch", "Status", strings.Repeat("─", 100))

	return forEachGrammar(func(gr *grammar.Grammar) (err error) {
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

var nonRedirectingClient = new(http.Client)

// checkIfRedirect checks if the repo URL redirects to some other URL, in which
// case it auto-updates the grammar to use the final URL and skip the redirect.
func checkIfRedirect(gr *grammar.Grammar) {
	req, err := http.NewRequest("GET", gr.URL, nil)
	if err != nil {
		logger.Error("checkIfRedirect", "err", err)
	}

	resp, _ := nonRedirectingClient.Do(req)
	if resp != nil && resp.StatusCode == http.StatusMovedPermanently {
		loc, err := resp.Location()
		if err == nil {
			logger.Warn("Obsolete URL", "grammar", gr.Language, "old", gr.URL, "new", loc.String())
			gr.URL = loc.String()
		} else {
			logger.Warn("Obsolete URL", "grammar", gr.Language, "old", gr.URL, "err", err)
		}
	}
}

func updateAll(force bool) (err error) {
	fmt.Println("Updating all (applicable) languages ...")

	if err = forEachGrammar(func(gr *grammar.Grammar) error {
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

	return updateGrammars()
}

func updateBindings() error {
	fmt.Println("Updating all languages' binding.go files ...")

	return forEachGrammar(func(gr *grammar.Grammar) error {
		return createBindings(gr.Language, force)
	})
}

func updatePluginsMakefile() (err error) {
	mkFileContent := []string{}
	mkFileTargets := []string{}
	mux := sync.Mutex{}

	_ = forEachGrammar(func(gr *grammar.Grammar) error {
		mux.Lock()
		defer mux.Unlock()

		target := "plugin-" + gr.Language
		mkFileTargets = append(mkFileTargets, target)
		mkFileContent = append(mkFileContent, fmt.Sprintf(plugFmt, target, gr.Language))

		return nil
	})

	slices.Sort(mkFileContent)
	slices.Sort(mkFileTargets)

	content := slices.Concat([]string{"# NOTE: This file is generated automatically! DO NOT EDIT!\n\nplugin-all: " +
		strings.Join(mkFileTargets, " ")},
		mkFileContent)

	return os.WriteFile("Plugins.make", []byte(strings.Join(content, "\n\n")), 0o644)
}

func updateGrammars() (err error) {
	slices.SortFunc(grammars, func(a, b *grammar.Grammar) int {
		return cmp.Compare(a.Language, b.Language)
	})

	if err = writeJSON(grammarsJSON, grammars); err != nil {
		return
	}

	if err = forEachGrammar(func(gr *grammar.Grammar) error {
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

	msg, newSha, v := "", "", gr.NewVersion()

	if !gr.SkipGenerate {
		if newSha, err = downloadGrammar(gr); err != nil {
			return
		}
	}

	if v != nil {
		msg, gr.Version = fmt.Sprintf("new version (%q -> %q)", gr.Revision, v.Revision), v
	} else if newSha != "" && newSha != gr.GrammarSha {
		msg = fmt.Sprintf("grammar sha differs (%q -> %q)", gr.GrammarSha, newSha)
	} else if force {
		msg = "forced update"
	} else {
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

	return
}

// downloads the grammar.js file and any local dependencies
// (files that are required by it).
// FIXME: This is waaaaay too long and doing waaaaay too much.
// It does the job though :-)
func downloadGrammar(grRO *grammar.Grammar) (newSha string, err error) {
	// We need to temporarily alter gr in here because in case of
	// failure we do not want the grammars.js to be updatd with the
	// new info.
	gr, shas := *grRO, map[string]string{}

	oldFiles, _ := filepath.Glob(filepath.Join("tmp", gr.Language, "*.*"))
	for _, file := range oldFiles {
		if err = os.Remove(file); err != nil {
			return
		}
	}

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

	var url string

	if url, err = gr.ContentURL(); err != nil {
		return
	}

	grammarJsUrl := url + src

	var grc []byte

	if grc, err = fetchFile(grammarJsUrl); err != nil {
		return
	}

	shas[grammarJS] = fmt.Sprintf("%x", sha256.Sum256(grc))
	replMap := map[string]string{
		// Patching broken grammars so that they compile.
		// This is a bit "brute-force", but seems to do the job :-)
		`/u{[\da-fA-F]+}/`:   `/u[\da-fA-F]+/`,
		`/u{[0-9a-fA-F]+}/`:  `/u[0-9a-fA-F]+/`,
		`/u{[0-9a-fA-F ]+}/`: `/u[0-9a-fA-F]+/`,
		`/x{[0-9a-fA-F]+}/`:  `/x[0-9a-fA-F]+/`,
		// This is for sparql:
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
	}

	for _, file := range extractDeps(gr.Language, grc) {
		var b []byte

		base := path.Base(file)
		if base == "grammar.js" {
			// We must also check to not overwrite grammar.js file when pulling deps.
			base = "grammar2.js"
		}

		if gr.Language == "dtd" || gr.Language == "xml" {
			if file == "../common.js" {
				replMap["../common"] = "common.js"

				continue
			} else if file == "../common/index.js" {
				base = "common.js"
			} else {
				replMap[file] = base
			}
		} else {
			replMap[file] = base
		}

		// NOTE: Here we download from URLs with ../ ./ etc. in them.
		// Looks fine for Github, untested for the others though.
		fsrc, fdst := url+path.Dir(src)+"/"+file, filepath.Join("tmp", gr.Language, base)

		if b, err = fetchFile(fsrc); err != nil {
			return
		}

		var ok bool

		if ok, err = fileExists(fdst); err != nil {
			return
		}

		if ok {
			return "", fmt.Errorf("file %s already exists", fdst)
		}

		shas[base] = fmt.Sprintf("%x", sha256.Sum256(b))
		if err = os.WriteFile(fdst, b, 0o644); err != nil {
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

	if err = os.WriteFile(dst, grc, 0o644); err != nil {
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

	return fmt.Sprintf("%x", n.Sum(nil)), nil
}

var rxReq = regexp.MustCompile(`require\(['"](\..*?)['"]\)`)

func extractDeps(lang string, content []byte) (files []string) {
	raw := rxReq.FindAllStringSubmatch(string(content), -1)
	if len(raw) == 0 {
		return nil
	}

	x := []string{}
	for _, m := range raw {
		if z := m[1]; z != "" {
			if !strings.HasSuffix(z, ".js") {
				z += ".js"
			}

			x = append(x, z)
		}
	}

	switch lang {
	case "apex":
		x = append(x, "../common/soql-grammar.js")
	case "dtd", "xml":
		x = append(x, "../common/index.js")
	case "sosl":
		x = append(x, "../common/soql-grammar.js", "../common/common.js")
	case "soql":
		x = append(x, "../common/common.js")
	case "haskell", "haskell_persistent", "purescript":
		x = append(x, "./grammar/util.js")
	case "markdown", "markdown_inline":
		x = append(x, "../common/html_entities.json")
	case "unison":
		x = append(x, "./grammar/precedences.js", "./grammar/function-application.js")
	}

	return x
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
	}

	return
}

var sem = semaphore.NewWeighted(4)

func regenerateGrammar(gr *grammar.Grammar) (err error) {
	if err = sem.Acquire(context.TODO(), 1); err != nil {
		return
	}

	defer sem.Release(1)

	tmpPath := filepath.Join("tmp", gr.Language)
	cmd := exec.Command("npx", "tree-sitter", "generate")
	cmd.Dir = tmpPath

	var (
		b      []byte
		hFiles []string
	)

	if b, err = cmd.CombinedOutput(); err != nil {
		fmt.Println(string(b))

		return
	}

	if hFiles, err = filepath.Glob(filepath.Join(tmpPath, "src", "tree_sitter", "*.h")); err != nil {
		return
	}

	files := append(hFiles, filepath.Join(tmpPath, "src", "parser.c"))
	filesMap := map[string]string{}

	for _, file := range files {
		filesMap[file] = filepath.Join(gr.Language, filepath.Base(file))
	}

	for src, dst := range filesMap {
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
		if found, err := fileExists(toPath); err != nil {
			return err // Allow force overwriting except for binding_test.go.
		} else if !found || (force && filepath.Base(toPath) != "binding_test.go") {
			if err = createBindingFile(toPath, content); err != nil {
				return err
			}
		}
	}

	return
}

func createBindingFile(toPath, content string) error {
	return os.WriteFile(toPath, []byte(content), 0o644)
}

func downloadFile(lang, url, toPath string) error {
	b, err := fetchFile(url)
	if err != nil {
		file := path.Base(url)
		if file == "alloc.h" || file == "array.h" {
			logger.Warn("header file not found", "file", file, "lang", lang)

			return nil
		}

		return err
	}

	return putFile(b, lang, toPath)
}

func putFile(b []byte, lang, toPath string) error {
	reMap := maps.Clone(replaceMap)

	switch filepath.Base(toPath) {
	case "tag.h":
		// This identifier is common across tag.h files and causes issues.
		// It needs it's own unique name per lang.
		reMap["TAG_TYPES_BY_TAG_NAME"] = "TAG_TYPES_BY_TAG_NAME_" + lang
	case "scanner.c", "scanner.cc", "scanner.h", "parser.h", "typescript-scanner.h", "_parser.c", "chars.c", "chars.h", "_scanner.c":
		// These identifiers clash between many (org, beancount, etc.) parsers.
		// They also need their own unique name per lang.
		reMap[" serialize("] = fmt.Sprintf(" serialize_%s(", lang)
		reMap[" deserialize("] = fmt.Sprintf(" deserialize_%s(", lang)
		reMap["->serialize("] = fmt.Sprintf("->serialize_%s(", lang)
		reMap["->deserialize("] = fmt.Sprintf("->deserialize_%s(", lang)
		reMap[" state_new("] = fmt.Sprintf(" state_new_%s(", lang)
		reMap[" scan("] = fmt.Sprintf(" scan_%s(", lang)
		reMap["!scan("] = fmt.Sprintf("!scan_%s(", lang)
		reMap["->scan("] = fmt.Sprintf("->scan_%s(", lang)
		reMap["advance("] = fmt.Sprintf("advance_%s(", lang)
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
		b = bytes.ReplaceAll(b, []byte(old), []byte(new))
	}

	return os.WriteFile(toPath, b, 0o644)
}

func fetchFile(url string) (b []byte, err error) {
	var resp *http.Response

	if resp, err = http.Get(url); err != nil {
		return
	}

	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("incorrect response status code: %d when downloading %q", resp.StatusCode, url)
	}

	return io.ReadAll(resp.Body)
}

func writeJSON(fname string, content any) error {
	b, err := json.MarshalIndent(content, "", "  ")
	if err != nil {
		return err
	}

	return os.WriteFile(fname, b, 0o644)
}

func updateParsersMd() error {
	f, err := os.Create("PARSERS.md")
	if err != nil {
		return fmt.Errorf("creating PARSERS.md error: %w", err)
	}

	planned, skipped, implemented := 0, 0, 0
	text := `# %d Supported Parsers

%d pending, %d skipped regeneration

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
				doc = "; ❌" + gr.Doc
			}

			maint = fmt.Sprintf(" (maintained by %s%s)", x, doc)
		}

		if gr.Pending {
			planned++
		} else if gr.SkipGenerate {
			implemented++
			skipped++
		} else {
			implemented++
		}

		attr := ""
		if gr.GrammarSha != "" {
			attr = " ✔️ "
		}

		text += fmt.Sprintf("- [%s] [%s](%s)%s%s\n", checked, lang, gr.URL, attr, maint)
	}

	text += "<!--parserinfo-->\n\nLegend:\n" +
		"- [x] ✔️ parser files regenerated from `grammar.js`;\n" +
		"- [x] ❌ parser files copied from the repo;\n" +
		"- [ ] parser not implemented (pending).\n"

	if _, err = fmt.Fprintf(f, text, implemented, planned, skipped); err != nil {
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

	// combine both files into one
	b := bytes.Join([][]byte{[]byte(extra), f1b, f2b}, []byte("\n"))
	// remove include expression
	b = bytes.ReplaceAll(b, []byte(`#include "./`+from+`"`), []byte(""))
	b = bytes.ReplaceAll(b, []byte(`#include "`+from+`"`), []byte(""))

	return os.WriteFile(filepath.Join(gr.Language, into), b, 0o644)
}

func main() {
	defer logFile.Close()

	args := os.Args[1:]
	if len(args) < 1 {
		die("command expected")
	}

	var err error

	switch cmd := args[0]; cmd {
	case "check-updates":
		err = checkUpdates()
	case "force-update-all", "update-all":
		err = updateAll(strings.HasPrefix(cmd, "force-"))
	case "update-bindings":
		err = updateBindings()
	default:
		i, lang, force := 0, "", false

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

		if i, err = grammars.Find(lang); err != nil {
			break
		}

		if err = update(grammars[i], force); err != nil {
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

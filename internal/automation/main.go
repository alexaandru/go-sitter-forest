package main

import (
	"bytes"
	"cmp"
	"context"
	"crypto/sha256"
	"encoding/json"
	"fmt"
	"io"
	"log/slog"
	"maps"
	"net/http"
	"os"
	"os/exec"
	"path"
	"path/filepath"
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
)

var (
	errUnknownCmd = fmt.Errorf("unknown command, must be one of: check-updates, update-all, [force-]update <lang>, update-bindings, create-plugins, update-grammars")
	grammars      = Grammars{}
	replaceMap    = map[string]string{
		`"../../common/scanner.h"`:       `"scanner.h"`,
		`"../../../include/scanner.h"`:   `"scanner.h"`,
		`"tree_sitter/parser.h"`:         `"parser.h"`,
		`"tree_sitter_comment/parser.c"`: `"parser.c"`, // Needed for Comment.
		`"tree_sitter_comment/tokens.h"`: `"tokens.h"`, // Needed for Comment.
		`"tree_sitter/array.h"`:          `"array.h"`,
		`"tree_sitter/alloc.h"`:          `"alloc.h"`,
	}

	logFile *os.File
	logger  *slog.Logger
)

func checkUpdates() error {
	fmt.Printf("%-40s\t%-10s\t%s\n%s\n", "Language", "Reference", "Status", strings.Repeat("─", 100))

	return forEachGrammar(func(gr *grammar.Grammar) (err error) {
		if err = gr.FetchNewVersion(); err != nil {
			return
		}

		status := "(up-to-date)"
		if nextVersion := gr.NewVersion(); nextVersion != nil && gr.Reference == nextVersion.Reference {
			status = fmt.Sprintf("(update available: %s -> %s)", gr.Revision, nextVersion.Revision)
		} else if nextVersion != nil {
			status = fmt.Sprintf("(update available: %s -> %s)", gr.Reference, nextVersion.Reference)
		}

		fmt.Printf("%-40s\t%-10s\t%s\n", gr.Language, gr.Reference, status)

		return
	})
}

func updateAll() (err error) {
	return forEachGrammar(func(gr *grammar.Grammar) (err error) {
		return update(gr, !force)
	})
}

func updateBindings() error {
	return forEachGrammar(func(gr *grammar.Grammar) (err error) {
		return createBindings(gr.Language, force)
	})
}

func createPlugins() (err error) {
	mkFileContent := []string{}
	mkFileTargets := []string{}
	mux := sync.Mutex{}

	if err = forEachGrammar(func(gr *grammar.Grammar) error {
		mux.Lock()
		defer mux.Unlock()

		target := "plugin-" + gr.Language
		mkFileTargets = append(mkFileTargets, target)
		mkFileContent = append(mkFileContent, fmt.Sprintf(plugFmt, target, gr.Language))

		return createPlugin(gr.Language)
	}); err != nil {
		return
	}

	slices.Sort(mkFileContent)
	slices.Sort(mkFileTargets)

	content := slices.Concat([]string{"plugin-all: " + strings.Join(mkFileTargets, " ")},
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
		fmt.Printf("%-20snothing to do\n", gr.Language)

		return
	}

	fmt.Printf("%-20s%s\n", gr.Language, msg)

	if err = downloadFiles(gr); err != nil {
		return
	}

	if gr.SkipGenerate {
		gr.GrammarSha = ""

		return
	}

	if newSha != "" {
		gr.GrammarSha = newSha
		err = regenerateGrammar(gr)
	}

	return
}

func downloadGrammar(grRO *grammar.Grammar) (newSha string, err error) {
	// We need to temporarily alter gr in here.
	gr := *grRO

	src, dst := grammarJS, filepath.Join("tmp", gr.Language, grammarJS)
	if gr.SrcRoot != "" {
		src = path.Join(gr.SrcRoot, grammarJS)
	}

	if err = makeDir(filepath.Dir(dst)); err != nil {
		return
	}

	v := gr.NewVersion()
	if v != nil {
		gr.Version = v
	}

	var url string

	if url, err = gr.ContentURL(); err != nil {
		return
	}

	url += src

	var b []byte

	if b, err = fetchFile(url); err != nil {
		return
	}

	newSha = fmt.Sprintf("%x", sha256.Sum256(b))
	err = os.WriteFile(dst, b, 0o644)

	return
}

func downloadFiles(gr *grammar.Grammar) (err error) {
	if err = makeDir(gr.Language); err != nil {
		return
	}

	if err = createBindings(gr.Language); err != nil {
		return
	}

	if err = createPlugin(gr.Language); err != nil {
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

	if gr.Language == "yaml" {
		err = fixYaml(gr)
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
			return err // Allow force overwriting of the binding.go file alone.
		} else if !found || (force && filepath.Base(toPath) == "binding.go") {
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

func createPlugin(lang string) error {
	toPath := filepath.Join(lang, "plugin.go")
	if ok, _ := fileExists(toPath); ok {
		return nil
	}

	if err := makeDir(filepath.Dir(toPath)); err != nil {
		return err
	}

	return os.WriteFile(toPath, []byte(fmt.Sprintf(bindingTpl, "//go:build plugin", "main", lang, lang)), 0o644)
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
	case "scanner.c", "scanner.h":
		// These identifiers clash between org and beancount parsers.
		// They also need their own unique name per lang.
		reMap[" serialize("] = fmt.Sprintf(" serialize_%s(", lang)
		reMap[" deserialize("] = fmt.Sprintf(" deserialize_%s(", lang)
		reMap[" scan("] = fmt.Sprintf(" scan_%s(", lang)
		reMap["!scan("] = fmt.Sprintf("!scan_%s(", lang)
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

// TODO: DRY.
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

	text += "<!--parserinfo-->\n\nLegend: ✔️ parser files regenerated from grammar.js.\n\n(the ones where parser regeneration is skipped still work but they may (or not) be generated with the exact same TreeSitter version as the sitter library)\n"

	if _, err = fmt.Fprintf(f, text, implemented, planned, skipped); err != nil {
		return fmt.Errorf("writing PARSERS.md error: %w", err)
	}

	if err = f.Close(); err != nil {
		return fmt.Errorf("saving PARSERS.md error: %w", err)
	}

	return nil
}

// For yaml grammar scanner.cc includes schema.generated.cc file and it causes
// cgo to compile schema.generated.cc twice and throw duplicate symbols error.
func fixYaml(gr *grammar.Grammar) error {
	f1 := path.Join(gr.Language, "schema.generated.cc")
	f2 := path.Join(gr.Language, "scanner.cc")

	f1b, err := os.ReadFile(f1)
	if err != nil {
		return err
	}

	f2b, err := os.ReadFile(f2)
	if err != nil {
		return err
	}

	if err = os.Remove(f1); err != nil {
		return err
	}

	// combine both files into one
	b := bytes.Join([][]byte{[]byte(`#include "parser.h"`), f1b, f2b}, []byte("\n"))
	// remove include expression
	b = bytes.ReplaceAll(b, []byte(`#include "./schema.generated.cc"`), []byte(""))

	return os.WriteFile(fmt.Sprintf("%s/scanner.cc", gr.Language), b, 0o644)
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
	case "update-all":
		fmt.Println("Updating all (applicable) languages ...")

		if err = updateAll(); err != nil {
			break
		}

		err = updateGrammars()
	case "update-bindings":
		fmt.Println("Updating all languages' binding.go files ...")

		err = updateBindings()
	case "create-plugins":
		fmt.Println("Creating plugins for all languages ...")

		err = createPlugins()
	case "update-grammars":
		fmt.Println("Updating grammars.json ...")

		err = updateGrammars()
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
}

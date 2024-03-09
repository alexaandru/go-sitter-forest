package main

import (
	"bytes"
	"cmp"
	"encoding/json"
	"fmt"
	"io"
	"maps"
	"net/http"
	"os"
	"path"
	"path/filepath"
	"slices"
	"strings"
	"sync"

	"github.com/alexaandru/go-sitter-forest/internal/automation/grammar"
	"golang.org/x/sync/errgroup"
)

type Grammars []*grammar.Grammar

func (gx Grammars) Find(lang string) (i int, err error) {
	i = slices.IndexFunc(grammars, func(x *grammar.Grammar) bool {
		return x.Language == lang
	})

	if i < 0 {
		err = fmt.Errorf("grammar %q not found", lang)
	}

	return
}

const (
	force   = true
	plugFmt = "%s:\n\t@go build -trimpath -buildmode=plugin -tags plugin github.com/alexaandru/go-sitter-forest/%s"
)

var (
	errUnknownCmd = fmt.Errorf("unknown command, must be one of: check-updates, update-all, [force-]update <lang>, update-bindings, create-plugins, update-grammars")
	grammarsJson  = "grammars.json"
	grammars      = Grammars{}
	replaceMap    = map[string]string{
		`"../../common/scanner.h"`:       `"scanner.h"`,
		`"tree_sitter/parser.h"`:         `"parser.h"`,
		`"tree_sitter_comment/parser.c"`: `"parser.c"`, // Needed for Comment.
		`"tree_sitter_comment/tokens.h"`: `"tokens.h"`, // Needed for Comment.
		`"tree_sitter/array.h"`:          `"array.h"`,  // Needed for Python.
		`"tree_sitter/alloc.h"`:          `"alloc.h"`,  // Needed for Python.
	}
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

		return nil
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

	err = forEachGrammar(func(gr *grammar.Grammar) (err error) {
		mux.Lock()
		defer mux.Unlock()

		target := "plugin-" + gr.Language
		mkFileTargets = append(mkFileTargets, target)
		mkFileContent = append(mkFileContent, fmt.Sprintf(plugFmt, target, gr.Language))

		return createPlugin(gr.Language)
	})
	if err != nil {
		return
	}

	slices.Sort(mkFileContent)
	slices.Sort(mkFileTargets)

	content := slices.Concat([]string{"plugin-all: " + strings.Join(mkFileTargets, " ")}, mkFileContent)

	return os.WriteFile("Plugins.make", []byte(strings.Join(content, "\n\n")), 0o644)
}

func updateGrammars() (err error) {
	slices.SortFunc(grammars, func(a, b *grammar.Grammar) int {
		return cmp.Compare(strings.ToLower(a.Language), strings.ToLower(b.Language))
	})

	if err = writeJSON(grammarsJson, grammars); err != nil {
		return
	}

	err = forEachGrammar(func(gr *grammar.Grammar) error {
		return writeJSON(filepath.Join(gr.Language, "grammar.json"), gr)
	})
	if err != nil {
		return
	}

	return updateParsersMd()
}

func update(gr *grammar.Grammar, force bool) (err error) {
	if gr.NeedsGenerate {
		return
	}

	if err = gr.FetchNewVersion(); err != nil {
		return
	}

	if v := gr.NewVersion(); v == nil {
		if !force {
			fmt.Printf("%-20sgrammar is not outdated\n", gr.Language)

			return
		}

		fmt.Printf("%-20sre-downloading up-to-date grammar: ", gr.Language)
	} else {
		fmt.Printf("%-20supdating\n", gr.Language)
		gr.Version = v
	}

	return downloadGrammar(gr)
}

func downloadGrammar(gr *grammar.Grammar) (err error) {
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

	for src, dst := range gr.FilesMap() {
		g.Go(func() error { return downloadFile(gr.Language, src, dst) })
	}

	if err = g.Wait(); err != nil {
		return
	}

	if gr.Language == "yaml" {
		err = fixYaml(gr)
	}

	fmt.Println("OK")

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
		return err
	}

	reMap := maps.Clone(replaceMap)

	if filepath.Base(toPath) == "tag.h" {
		// This identifier is common across tag.h files and causes issues.
		// It needs it's own unique name per lang.
		reMap["TAG_TYPES_BY_TAG_NAME"] = "TAG_TYPES_BY_TAG_NAME_" + lang
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

	planned, implemented := 0, 0
	text := `# %d Supported Parsers

%d pending

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
			maint = fmt.Sprintf(" (maintained by %s)", x)
		}

		if gr.Pending {
			planned++
		} else {
			implemented++
		}

		text += fmt.Sprintf("- [%s] [%s](%s)%s\n", checked, lang, gr.URL, maint)
	}

	text += "<!--parserinfo-->\n"

	if _, err = fmt.Fprintf(f, text, implemented, planned); err != nil {
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
	b, err := os.ReadFile(grammarsJson)
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
}

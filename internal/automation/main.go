//go:build tools

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

	"github.com/alexaandru/go-tree-sitter-parsers/internal/automation/grammar"
	"golang.org/x/sync/errgroup"
)

var (
	errUnknownCmd = fmt.Errorf("unknown command! Must be one of: check-updates, update-all, [force-]update <lang>")
	grammarsJson  = filepath.Join("internal", "automation", "grammars.json")
	grammars      []*grammar.Grammar
	replaceMap    = map[string]string{
		`"../../common/scanner.h"`: `"scanner.h"`,
		`"tree_sitter/parser.h"`:   `"parser.h"`,
		`"tree_sitter/array.h"`:    `"array.h"`, // Needed for Python.
		`"tree_sitter/alloc.h"`:    `"alloc.h"`, // Needed for Python.
	}
)

func checkUpdates() error {
	if err := fetchNewVersions(); err != nil {
		return err
	}

	fmt.Printf("%-40s\t%-10s\t%s\n%s\n", "Language", "Reference", "Status", strings.Repeat("─", 100))

	for _, gr := range grammars {
		if gr.Pending {
			continue
		}

		status := "(up-to-date)"
		if nextVersion := gr.NewVersion(); nextVersion != nil && gr.Reference == nextVersion.Reference {
			status = fmt.Sprintf("(update available: %s -> %s)", gr.Revision, nextVersion.Revision)
		} else if nextVersion != nil {
			status = fmt.Sprintf("(update available: %s -> %s)", gr.Reference, nextVersion.Reference)
		}

		fmt.Printf("%-40s\t%-10s\t%s\n", gr.Language, gr.Reference, status)
	}

	return nil
}

func fetchNewVersions() error {
	g := new(errgroup.Group)

	for _, gr := range grammars {
		g.Go(func() error { return gr.FetchNewVersion() })
	}

	return g.Wait()
}

func update(lang string, force bool) (err error) {
	i := slices.IndexFunc(grammars, func(x *grammar.Grammar) bool {
		return x.Language == lang
	})
	if i < 0 {
		return fmt.Errorf("grammar %q not found", lang)
	}

	gr := grammars[i]
	if err = gr.FetchNewVersion(); err != nil {
		return
	}

	if v := gr.NewVersion(); v == nil {
		if !force {
			quit("grammar is not outdated")
		} else {
			fmt.Println("re-downloading up-to-date grammar")
		}
	} else {
		gr.Version = v
	}

	if err = downloadGrammar(gr); err != nil {
		return
	}

	return writeGrammarsFile()
}

func updateAll() (err error) {
	if err = fetchNewVersions(); err != nil {
		return
	}

	g := new(errgroup.Group)
	for _, gr := range grammars {
		if gr.Skip {
			fmt.Printf("Skipping %q: %s\n", gr.Language, gr.Doc)

			continue
		}

		if gr.Pending {
			continue
		}

		v := gr.NewVersion()
		if v == nil {
			continue
		}

		gr.Version = v

		g.Go(func() error { return downloadGrammar(gr) })
	}

	if err = g.Wait(); err != nil {
		return
	}

	return writeGrammarsFile()
}

func downloadGrammar(gr *grammar.Grammar) (err error) {
	if err = makeDir(gr.Language); err != nil {
		return
	}

	if err = createBindingFilesIfMissing(gr.Language); err != nil {
		return
	}

	defer fmt.Println("successfully downloaded")

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

	return
}

// creates a map between file paths to write to and corresponding content
func mkBindingMap(lang string) (out map[string]string) {
	out = map[string]string{}
	for k, v := range tplBindings {
		out[filepath.Join(lang, k)] = fmt.Sprintf(v, lang, lang, lang)
	}

	return
}

func createBindingFilesIfMissing(lang string) (err error) {
	for toPath, content := range mkBindingMap(lang) {
		if found, err := fileExists(toPath); err != nil {
			return err
		} else if !found {
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

func writeGrammarsFile() error {
	slices.SortFunc(grammars, func(a, b *grammar.Grammar) int {
		return cmp.Compare(strings.ToLower(a.Language), strings.ToLower(b.Language))
	})

	b, err := json.MarshalIndent(grammars, "", "  ")
	if err != nil {
		return fmt.Errorf("marshaling grammars file error: %w", err)
	}

	if err = os.WriteFile(grammarsJson, b, 0o644); err != nil {
		return err
	}

	return updateParsersMd()
}

func updateParsersMd() error {
	f, err := os.Create("PARSERS.md")
	if err != nil {
		return fmt.Errorf("creating PARSERS.md error: %v", err)
	}

	planned, implemented := 0, 0
	text := `# Supported Parsers

This is the list of all parsers, both implemented (%d) and planned (%d).
The end goal is parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages).

<!--This entire file is automatically updated via automation, do NOT edit anything in here!-->
<!--parserinfo-->
`
	for _, gr := range grammars {
		lang := gr.Language
		if lang == "query" {
			lang = "Tree-Sitter query language"
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
		return fmt.Errorf("writing PARSERS.md error: %v", err)
	}

	if err = f.Close(); err != nil {
		return fmt.Errorf("saving PARSERS.md error: %v", err)
	}

	return nil
}

// for yaml grammar scanner.cc includes schema.generated.cc file
// it causes cgo to compile schema.generated.cc twice and throw duplicate symbols error
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
	case "update", "force-update":
		if len(args) < 2 {
			die("language argument is missing")
		}

		err = update(args[1], cmd == "force-update")
	case "update-all":
		err = updateAll()
	default:
		err = errUnknownCmd
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

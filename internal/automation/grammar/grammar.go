// Package grammar holds the main structure that the automation operates with: the Grammar.
// That encapsulates all the information we need in order to automate the updates of the
// various aspects related to the parsers (parsers themselves, associated queries, the
// documentation, etc.).
package grammar

import (
	"bytes"
	"errors"
	"fmt"
	"os/exec"
	"path"
	"slices"
	"strings"
)

// Grammar holds all the information related to one language grammar.
// If a repository exposes multiple languages (like typescript which
// exposes both typescript and tsx) each one will have its own separate
// Grammar definition.
type Grammar struct {
	// Version holds the associated version information.
	*Version

	// The newVersion is used during updates: if an update is available, it
	// will be populated, acting both as a "flag" and holding the data for
	// the update. On success this will become the new Version.
	newVersion *Version

	// GrammarSha holds the SHA256 of the `grammar.js` (and all .js deps: TBD).
	// Is used for determining if regeneration of parser files is needed.
	GrammarSha string `json:"grammarSha,omitempty"`

	// Language name. The same as folder name and nvim_treesitter query name.
	Language string `json:"language"`

	// AltName is used when the language name is unclear by itself.
	AltName string `json:"altName,omitempty"`

	// URL holds the parser repo URL.
	URL string `json:"url"`

	// Doc holds maintenance related notes. Typically used for grammars with
	// problems.
	Doc string `json:"doc,omitempty"`

	// Description holds end users facing description.
	// Optional, only populated when needed (at least for now).
	Description string `json:"description,omitempty"`

	// MaintainedBy indicates the repo maintainers.
	MaintainedBy string `json:"maintainedBy,omitempty"`

	// SrcRoot holds the source root when it differs from the default (src).
	// Particularly useful for repos that expose multiple grammars.
	SrcRoot string `json:"srcRoot,omitempty"`

	// Files holds a list of files of interest from the repo.
	//
	// It MUST NOT include parser generated files (parser.c, parser.h,
	// alloc.h, array.h) nor `grammar.js` which are automatically
	// inferred.
	// Only manual files (scanner.c or .js deps for grammar.js).
	//
	// They can be bare filenames, in which case they will be
	// fetched from the "source" folder, otherwise, if they include
	// a slash, they will be considered repo absolute paths.
	Files []string `json:"files,omitempty"`

	// SkipGenerate flag is used to skip parser regeneration from `grammar.js`,
	// for the files that cannot be regenerated. That way, they continue to use
	// the parser files provided by their repo, which may or may not be generated
	// with the latest version of TreeSitter, which is the whole point of doing
	// the regeneration locally.
	SkipGenerate bool `json:"skip,omitempty"`

	// SkipUpdate skips updates for the given parser.
	// Can be used when a parser becomes temporarily unbuildable.
	SkipUpdate bool `json:"skipUpdate,omitempty"`

	// Pending indicates to completly ignore this grammar, as not-yet-implemented.
	Pending bool `json:"pending,omitempty"`
}

// Version holds the grammar version related info.
type Version struct {
	// Reference points to the branch to be used for updates.
	Reference string `json:"reference"`
	// Revision points to the latest revision we used for updating the grammar.
	Revision string `json:"revision"`
}

const guc = "https://raw.githubusercontent.com/%s/%s/"

var (
	errUnkHosting = errors.New("unrecognized source code hosting")
	parserFiles   = []string{"parser.c", "parser.h", "array.h", "alloc.h"}
)

// FetchNewVersion attempts to fetch a new version, for the grammar.
// If there is a new version, then gr.newVersion will be populated
// and can be used for the upgrade.
func (gr *Grammar) FetchNewVersion() error {
	rev, err := fetchLastCommit(gr.URL, gr.Reference)
	if err != nil {
		return err
	}

	if rev != gr.Revision {
		gr.newVersion = &Version{Reference: gr.Reference, Revision: rev}
	}

	return nil
}

// NewVersion returns the new version, if one is available.
func (gr *Grammar) NewVersion() *Version {
	return gr.newVersion
}

// FilesMap returns a map between remote files (to download) and local files (to save to).
// Features:
//   - determines the source inside repo based on default (src) or provided SrcRoot field;
//   - auto fills in parser.h
//   - maps plain filenames (no / in name) to resolved source dir;
//   - maps filepaths (has / in name) to root of repo;
//   - destination for all files is a file (no subfolders, everything is flattened out)
//     inside the gr.Language folder.
func (gr *Grammar) FilesMap() (out map[string]string, err error) {
	var url string

	if url, err = gr.ContentURL(); err != nil {
		return
	}

	root := "src"
	if gr.SrcRoot != "" {
		root = path.Join(gr.SrcRoot, root)
	}

	out = map[string]string{}
	add := func(pat string) {
		var src, dst string

		switch {
		case strings.Contains(pat, "/"):
			src, dst = pat, path.Base(pat)

			if gr.Language == "comment" || gr.Language == "rst" {
				if slices.Contains(parserFiles, dst) || dst == "scanner.c" {
					dst = "_" + dst
				}
			}
		case pat == "parser.h" || pat == "alloc.h" || pat == "array.h":
			src, dst = path.Join(root, "tree_sitter", pat), pat
		default:
			src, dst = path.Join(root, pat), pat
		}

		out[url+src] = path.Join(gr.Language, dst)
	}

	files := gr.Files
	if gr.SkipGenerate {
		files = append(files, parserFiles...)
	}

	for _, f := range files {
		add(f)
	}

	return
}

// ContentURL returns the base URL for accessing content for the Grammar.
// It can handle several git hosting providers.
func (gr *Grammar) ContentURL() (url string, err error) {
	switch {
	case strings.Contains(gr.URL, "github.com"):
		url = fmt.Sprintf(guc, strings.TrimPrefix(gr.URL, "https://github.com/"), gr.Revision)
	case strings.Contains(gr.URL, "gitlab.com"):
		url = fmt.Sprintf("%s/-/raw/%s/", gr.URL, gr.Reference)
	case strings.Contains(gr.URL, "git.sr.ht"):
		url = fmt.Sprintf("%s/blob/%s/", gr.URL, gr.Revision)
	case strings.Contains(gr.URL, "codeberg.org"):
		url = fmt.Sprintf("%s/raw/branch/%s/", gr.URL, gr.Reference)
	default:
		err = errUnkHosting
	}

	return
}

func (gr *Grammar) String() string {
	return fmt.Sprintf(`%s, src: "%s@%s", sha: %q`, gr.Language, gr.URL, gr.Reference, gr.Revision)
}

func fetchLastCommit(repository, branch string) (sha string, err error) {
	cmd := exec.Command("git", "ls-remote", "--heads", repository, fmt.Sprint("refs/heads/", branch)) //nolint:gosec // false positive, content for command comes from this very repo

	var b []byte

	if b, err = cmd.Output(); err != nil {
		err = fmt.Errorf("fetching %s@%s: %w: %s", repository, branch, err, string(err.(*exec.ExitError).Stderr)) //nolint:forcetypeassert,errorlint // TODO

		return
	}

	// FIXME: Use a regex instead.

	lines := bytes.Split(b, []byte{'\n'})
	line := lines[0]

	// FIXME: Send this line to the log file.
	if bytes.HasPrefix(line, []byte("warning:")) {
		if len(lines) > 1 {
			line = lines[1]
		} else {
			err = fmt.Errorf("cannot get sha for %s", repository)

			return
		}
	}

	return strings.Split(string(line), "\t")[0], nil
}

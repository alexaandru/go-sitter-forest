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

	// SrcRoot holds the source root when it differs from the default (src).
	// Particularly useful for repos that expose multiple grammars.
	SrcRoot string `json:"srcRoot,omitempty"`

	// MaintainedBy indicates the repo maintainers.
	MaintainedBy string `json:"maintainedBy,omitempty"`

	// SkipGenerate flag is used to skip parser regeneration from `grammar.js`,
	// for the files that cannot be regenerated. That way, they continue to use
	// the parser files provided by their repo, which may or may not be generated
	// with the latest version of TreeSitter, which is the whole point of doing
	// the regeneration locally.
	SkipGenerate bool `json:"skip,omitempty"`

	// Pending indicates to completly ignore this grammar, as not-yet-implemented.
	Pending bool `json:"pending,omitempty"`

	// GrammarSha holds the SHA256 of the `grammar.js` (and all .js deps: TBD).
	// Is used for determining if regeneration of parser files is needed.
	GrammarSha string `json:"grammarSha,omitempty"`

	*Version
	newVersion *Version
}

type Version struct {
	Reference string `json:"reference"`
	Revision  string `json:"revision"`
}

const guc = "https://raw.githubusercontent.com/%s/%s/"

var errUnkHosting = errors.New("unrecognized source code hosting")

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

var parserFiles = []string{"parser.c", "parser.h", "array.h", "alloc.h"}

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

	src := "src"
	if gr.SrcRoot != "" {
		src = path.Join(gr.SrcRoot, src)
	}

	out = map[string]string{}
	add := func(pat string) {
		var k, v string

		switch {
		case strings.Contains(pat, "/"):
			k, v = pat, path.Base(pat)

			if gr.Language == "comment" || gr.Language == "rst" {
				if slices.Contains(parserFiles, v) || v == "scanner.c" {
					v = "_" + v
				}
			}
		case pat == "parser.h" || pat == "alloc.h" || pat == "array.h":
			k, v = path.Join(src, "tree_sitter", pat), pat
		default:
			k, v = path.Join(src, pat), pat
		}

		out[url+k] = path.Join(gr.Language, v)
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

func (gr *Grammar) ContentURL() (url string, err error) {
	switch {
	case strings.Contains(gr.URL, "github.com"):
		url = fmt.Sprintf(guc, strings.TrimPrefix(gr.URL, "https://github.com/"), gr.Revision)
	case strings.Contains(gr.URL, "gitlab.com"):
		url = fmt.Sprintf("%s/-/raw/%s/", gr.URL, gr.Reference)
	case strings.Contains(gr.URL, "git.sr.ht"):
		url = fmt.Sprintf("%s/blob/%s/", gr.URL, gr.Revision)
	default:
		err = errUnkHosting
	}

	return
}

func (gr *Grammar) String() string {
	return fmt.Sprintf(`%s, src: "%s@%s", sha: %q`, gr.Language, gr.URL, gr.Reference, gr.Revision)
}

func fetchLastCommit(repository, branch string) (sha string, err error) {
	cmd := exec.Command("git", "ls-remote", "--heads", repository, fmt.Sprint("refs/heads/", branch))

	var b []byte

	if b, err = cmd.Output(); err != nil {
		err = fmt.Errorf("fetching %s@%s: %w: %s", repository, branch, err, string(err.(*exec.ExitError).Stderr))

		return
	}

	// FIXME: Use a regex instead.

	lines := bytes.Split(b, []byte{'\n'})
	line := lines[0]
	if bytes.HasPrefix(line, []byte("warning:")) {
		// FIXME: Send this line to the log file.
		// fmt.Println(string(line))

		if len(lines) > 1 {
			line = lines[1]
		} else {
			err = fmt.Errorf("cannot get sha for %s", repository)

			return
		}
	}

	return strings.Split(string(line), "\t")[0], nil
}

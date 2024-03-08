package grammar

import (
	"fmt"
	"os/exec"
	"path"
	"strings"
)

// Grammar holds all the information related to one language grammar.
// If a repository exposes multiple languages (like typescript which
// exposes both typescript and tsx) each one will need its own separate
// Grammar entry in the grammar.json file.
type Grammar struct {
	// Language name. The same as folder name and nvim_treesitter query name.
	// In rare cases where it cannot also be used as go package name
	// (such as `package go` or `package func`) a capitalzed version of the
	// name is used (Go and FunC respectively).
	Language string `json:"language"`

	// Sometimes the name used for the lang can be unclear.
	// In those cases an alternate name for the language is also recorded.
	AltName string `json:"altName,omitempty"`

	// At the tile of writing this it MUST be a Github repo URL.
	URL string `json:"url"`

	// Optional documentation. Typically used for grammars with
	// problems (like Perl and SQL which are currently manually updated).
	Doc string `json:"doc,omitempty"`

	// List of files of interest from the repo.
	// They can be just filenames, in which case they will be
	// fetch from the "source" folder, otherwise, if they include
	// a slash, they will be considered repo absolute paths.
	// Most of the time, just "parser.c" is enough.
	// You MUST NOT pass "parser.h", that is inferred automatically.
	Files []string `json:"files"`

	// Normally the root for src folder is the root of the repo.
	// However, there are repos hosting multiple grammars, in which
	// case they will have a diffrent source for each. If that's the
	// case, use SrcRoot to indicate that root folder for src (but NOT
	// including src).
	SrcRoot string `json:"srcRoot,omitempty"`

	// Repo maintainers.
	MaintainedBy string `json:"maintainedBy,omitempty"`

	// Flag to skip this grammar from updates (but not from checks).
	Skip bool `json:"skip,omitempty"`

	// Flag to completly ignore this grammar, as not-yet-implemented.
	Pending bool `json:"pending,omitempty"`

	// Flag to mark this grammar as experimental.
	Experimental bool `json:"experimental,omitempty"`

	// Some parsers to not ship the generated files.
	// In those cases tree-sitter is needed to generate them,
	// before they can be copied over. This flag indicates those cases.
	NeedsGenerate bool `json:"needsGenerate,omitempty"`

	*Version
	newVersion *Version
}

type Version struct {
	Reference string `json:"reference"`
	Revision  string `json:"revision"`
}

const guc = "https://raw.githubusercontent.com/%s/%s/"

// FetchNewVersion attempts to fetch a new version, for the grammar.
// If there is a new version, then gr.newVersion will be populated
// and can be used for the upgrade.
func (gr *Grammar) FetchNewVersion() (err error) {
	var tag, rev string

	if strings.HasPrefix(gr.Reference, "v") {
		if tag, rev, err = fetchLastTag(gr.URL); err != nil {
			return
		}

		if tag != gr.Reference {
			gr.newVersion = &Version{Reference: tag, Revision: rev}
		}
	} else {
		if rev, err = fetchLastCommit(gr.URL, gr.Reference); err != nil {
			return
		}

		if rev != gr.Revision {
			gr.newVersion = &Version{Reference: gr.Reference, Revision: rev}
		}
	}

	return
}

// NewVersion retuns the new version, if one is available.
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
func (gr *Grammar) FilesMap() map[string]string {
	url, src := gr.contentURL(), "src"
	if gr.SrcRoot != "" {
		src = path.Join(gr.SrcRoot, src)
	}

	out := map[string]string{}
	add := func(pat string) {
		var k, v string

		if strings.Contains(pat, "/") {
			k, v = pat, path.Base(pat)
		} else if pat == "parser.h" {
			k, v = path.Join(src, "tree_sitter", pat), pat
		} else {
			k, v = path.Join(src, pat), pat
		}

		out[url+k] = path.Join(gr.Language, v)
	}

	add("parser.h")
	for _, f := range gr.Files {
		add(f)
	}

	return out
}

func (gr *Grammar) contentURL() string {
	switch {
	case strings.Contains(gr.URL, "github.com"):
		return fmt.Sprintf(guc, strings.TrimPrefix(gr.URL, "https://github.com/"), gr.Revision)
	case strings.Contains(gr.URL, "gitlab.com"):
		return fmt.Sprintf("%s/-/raw/%s/", gr.URL, gr.Reference)
	case strings.Contains(gr.URL, "git.sr.ht"):
		return fmt.Sprintf("%s/blob/%s/", gr.URL, gr.Revision)
	default:
		return "unrecognized source code hosting"
	}
}

func fetchLastTag(repository string) (tag string, rev string, err error) {
	cmd := exec.Command("git", "ls-remote", "--tags", "--sort", "-v:refname", repository, "v*")

	var b []byte

	if b, err = cmd.Output(); err != nil {
		return
	}

	line := strings.SplitN(string(b), "\n", 2)[0]
	parts := strings.Split(line, "\t")

	tag = strings.TrimRight(strings.Split(parts[1], "/")[2], "^{}")
	rev = strings.Split(parts[0], "^")[0]

	return
}

func fetchLastCommit(repository, branch string) (sha string, err error) {
	cmd := exec.Command("git", "ls-remote", "--heads", repository, fmt.Sprint("refs/heads/", branch))

	var b []byte

	if b, err = cmd.Output(); err != nil {
		return
	}

	return strings.Split(string(b), "\t")[0], nil
}

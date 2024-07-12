package forest

import (
	"embed"
	"path"
	"strings"
)

type FetchPreference int

const (
	_ FetchPreference = iota

	NvimOnly    // fetch only from nvim_treesitter
	NativeOnly  // fetch only from sitter repo
	NvimFirst   // fetch both, prefer nvim
	NativeFirst // fetch both, prefer native

)

//go:embed internal/queries/nvim_treesitter/*/*.scm
//go:embed internal/queries/*/*.scm
var queries embed.FS

var DefaultPreference = NvimFirst

var iq = path.Join("internal", "queries")

// GetQuery returns (if it exists) the `kind`.scm query for `lang` language,
// using the DefaultPreference.
// You should omit the ".scm" extension.
func GetQuery(lang, kind string) (out []byte) {
	switch kind = strings.TrimSuffix(kind, ".scm"); DefaultPreference {
	case NvimOnly:
		return getNvim(lang, kind)
	case NativeOnly:
		return getNative(lang, kind)
	case NvimFirst:
		return getNvimFirst(lang, kind)
	case NativeFirst:
		return getNativeFirst(lang, kind)
	default:
		return nil
	}
}

func getNvim(lang, kind string) (out []byte) {
	return get(path.Join(iq, "nvim_treesitter", lang, kind+".scm"))
}

func getNative(lang, kind string) (out []byte) {
	return get(path.Join(iq, lang, kind+".scm"))
}

func getNvimFirst(lang, kind string) (out []byte) {
	if out = getNvim(lang, kind); len(out) > 0 {
		return
	}

	return getNative(lang, kind)
}

func getNativeFirst(lang, kind string) (out []byte) {
	if out = getNative(lang, kind); len(out) > 0 {
		return
	}

	return getNvim(lang, kind)
}

func get(src string) (out []byte) {
	out, _ = queries.ReadFile(src)
	return
}

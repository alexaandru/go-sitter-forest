# a Go 🌳 Sitter Forest

_Where a Gopher wanders around and meets lots of 🌳 Sitters..._

First of all, giving credits where they are due:

This repository started as a fork of @smacker's [go-tree-sitter](https://github.com/smacker/go-tree-sitter) repo
until I realized I don't want to also handle the bindings library itself
in the same project (i.e. the stuff in the root of the repo, exposing `sitter.Language` type
itself & co.), I just want a (big) collection of all the [tree-sitter](https://github.com/tree-sitter/tree-sitter)
parsers I can add.

So here it is: started with the parsers and the automation from the above
mentioned repo then added a bunch more parsers on top of it and updated
automation (to support more parsers and also to automatically update the
[PARSERS.md](PARSERS.md) file, git tags, etc.).

The credits for the parsers go to all the parsers' respective authors
(see [grammars.json](grammars.json) for the source of each and all of the parsers).

This repository **does NOT implement any parsers at all**, it simply automates
pulling them in from upstream, re-generating them from `grammar.js` and
providing the Go bindings with it.

See [PARSERS.md](PARSERS.md) for the list of supported parsers.
The end goal is to maintain parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages)
and to add any other parsers I find, so that it becomes as complete
as possible.

For contributing (or just to see how the automation works) see [CONTRIBUTING.md](CONTRIBUTING.md).

## Differences

- ~490 parsers in this repo vs. ~30 in the parent repo;
- all (but 7) are regenerated from `grammar.js` (via `tree-sitter generate`)
  instead of copying the pre-generated files from the parser repo;
- end-to-end "tree-sitter version alignment", see below,
- [queries fetching](#queries) mechanism, so that you can get the queries along
  with the parsers;
- [filetype detection](#file-type-detection) mechanism that allows
  to quickly determine which parser and/or query you should pull for
  a given file (see [filetype.json](filetype.json));
- [3 different ways you can use parsers](#usage);
- kept up to date pretty much on a daily basis with the parsers' changes;
- kept up to date with [tree-sitter](https://github.com/tree-sitter/tree-sitter);
- constantly adding new parsers as they become available, even
  new/experimental ones;
- tests suite to ensure all the parsers in the repo can actually parse
  content (can build & run successfully).

### Tree-Sitter Version Alignment

This library is designed to ensure that we are aligned end-to-end with
the latest tree-sitter version:

- the bindings library [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare)
  (itself forked from the same repo - see it's own README for why and/or differences),
- the `tree-sitter-cli` in [package.json](package.json) and consequently
- the generated parsers included, ALL use the same tree-sitter version
  (generally the latest).

Contrast that with the parent repo where bindings lag quite a bit
behind tree-sitter (was last updated to v0.22.5) and then on top of that,
the parsers' files (`parser.c`, `parser.h`, etc.) are copied from the
parser repos, meaning that they are each built with whatever version
happened to be last built by the parsers' repo maintainers, so it
can vary greatly from each other AND from the version the bindings
are built with.

Just as an example, in the parent repo, **toml** parser
was generated with `https://github.com/ikatyang/tree-sitter/tree/fc5a692`
which is `v0.19.3~10` of **tree-sitter**, vs. in here where it was
last rebuilt with `v0.24.2` (actually, with `0.24.4` but there were no
changes in `parser.c` so nothing was committed).

## Naming Conventions

The language name used is the same as TreeSitter language name (the `name` exported
by grammar.js) and the same as the query folder name in `nvim_treesitter` (where
applicable).

This keeps things simple and consistent.

In rare cases, the Go package name differs from the language name:

- `go` actually has the package name `Go` because `package go` does not go well in Go
  (pun intended) but otherwise the language name remains "go";
- `func` language, same problem as above, so package name is actually `FunC`
  (but everything else is `func` as normal: folder, language name, etc.);
- `context` language, same problem (conflict with stdlib `context` package)
  so it uses the name `ConTeXt`;
- `COBOL` language is named `COBOL` in grammar.js but we expose it as `cobol`
  (for aligning with the rest of the parsers);
- `dotenv` language is named `env` in grammar.js but we expose it as `dotenv`;
- `walnut` language is named `cwal` in grammar.js but we retain it as `walnut`;
- `janet` language is named `janet_simple` in grammar.js but in here is
  simply named `janet`;
- `verilog` from `https://github.com/gmlarumbe/tree-sitter-systemverilog` is renamed
  to `systemverilog` to disambiguate it from the plain `verilog` grammar.

Also, some languages may have names that are not very straightforward acronyms.
In those cases, an `altName` field will be populated, i.e. `requirements` language
has an `altName` of `Pip requirements`, `query` has `Tree-Sitter Query Language`
and so on. Search [grammars.json](grammars.json) for your grammar of interest.

## Usage

### Parsers

See the README in [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare),
as well as the `example_*.go` files in this repo.

This repo only gives you the `GetLanguage()` function, you will still use the sibling
repo for all your interactions with the tree.

You can use the parsers in this repo in several ways:

#### 1. Standalone

You can use the parsers one (or more) at a time, as you'd use any other Go package:

```Go
package main

import (
	"context"
	"fmt"

	"github.com/alexaandru/go-sitter-forest/risor"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("print('It works!')\n")
	node, err := sitter.Parse(context.TODO(), content, sitter.NewLanguage(risor.GetLanguage()))
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
}
```

Please note that in standalone mode, the `GetLanguage()` returns an `unsafe.Pointer`
rather than a `*sitter.Language`. To pass it to `sitter.Parse()` or `parser.SetLanguage()`
you need to wrap it in `sitter.NewLanguage()` as above.

The rationale is to enable end users to use the parsers with the bindings library
of their choice, whether it's @smacker's library or [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare).

#### 2. In Bulk

If (and only IF) you want to use ALL (or most of) the parsers (beware, your binary
size **will be huge**, as in 350MB+ huge) then you can use the root (`forest`) package:

```Go
package main

import (
	"context"
	"fmt"

	forest "github.com/alexaandru/go-sitter-forest"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("print('It works!')\n")
	parser := sitter.NewParser()
	parser.SetLanguage(forest.GetLanguage("risor"))

	tree, err := parser.Parse(context.TODO(), nil, content)
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(tree.RootNode())
}
```

this way you can fetch and use any of the parsers dynamically, without having to
manually import them. You should rarely need this though, unless you're writing
a text editor or something.

Note that unlike individual mode, the `forest.GetLanguage()` returns
a `*sitter.Language` which can be passed directly to `parser.SetLanguage()`.

#### 3. As a Plugin

A third way, ~and perhaps the most convenient~ (no, it's not, it's \~300MB with all
parsers built into the binary whereas all parsers built as plugins took \~1400MB
for all 354 parsers), is to use the included [Plugins.make](Plugins.make)
makefile, which allows easy creation of any and all plugins. Simply copy it to
your repo, and then you can easily `make -f Plugins.make plugin-risor`, etc. or
use the `plugin-all` target which creates all the plugins.

Then you can selectively use them in your app using the [plugins mechanism](https://pkg.go.dev/plugin).

**IMPORTANT:** You **MUST** use `-trimpath` when building your app, when using plugins
(the [Plugins.make](Plugins.make) file already includes it, but the app that uses them also needs it).

#### 4. Your Own Way

You can mix and match the above, obviously.

Probably the best approach would be to build your own "mini-forest", using the forest
package as a template but only including the languages you are interested in.

I'm not excluding offering "mini forests" in the future, guarded by build tags,
if I ever figure some subsets that make sense (most used/popular/known/whatever).

#### Info

Each individual parser (as well as the bulk loader) offers an `Info()` function
which can be used to retrieve information about a parser. It exposes it's entry
from `grammars.json` either raw (as a string holding the JSON encoded entry)
or as an object (only available in bulk mode).

The returned `Grammar` type implements `Stringer` so it should give a nice summary
when printed (to screen or logs, etc.).

### Queries

The root package not only includes the "parsers forest" but also
the corresponding queries. The queries are compiled from two sources:

1. `nvim_treesitter` project and
2. the individual sitter repos' own `queries` folders.

The queries are embedded in the packages (at the time of writing this, for 359 parsers,
the queries are only 11MB) and they can be fetched exactly the same as languages,
just replace `GetLanguage()` with `GetQuery(kind)` or `forest.GetQuery(lang, kind)`.
They are available for standalone packages, plugins as well as forest itself.

The kind is one of {`highlights`, `indent`, `folds`, etc.} (preferably without the
".scm" extension, but will work with it included as well). I.e. to get the highlights
query for Go, one would call `forest.GetQuery("go", "highlights")`.

You can optionally pass the query lookup preference, see the `NvimFirst`, `NativeFirst`,
etc. in `forest.go` for details, as in: `forest.GetQuery("go", "highlights", forest.NvimOnly)`.

The queries respect the "inherits:" directive (nvim_treesitter specific), recursively,
returning the final query with all inherited queries included, at the forest level.
The individual packages' own GetQuery() obviously cannot do that, since they do not
have access to other parsers' own queries, only the forest has that. See `forest.GetQuery()`
on how to replicate that on your end if using the individual packages.

### File Type Detection

The root package also includes a file type detector:
`forest.DetectLanguage(<abs path|rel path|filename>)`. For best results, the absolute
path to the file should be provided as that enables all the available detectors, in
order of priority:

- **shebang** or [vim modeline](https://vimdoc.sourceforge.net/htmldoc/options.html#modeline) -
  whichever is available on the 1st 255 bytes of the file;
- [**glob**](https://pkg.go.dev/path/filepath#Match) matching against the path tail
  (i.e. `*/*/foo.txt` will match `.../a/b/foo.txt` regardless of the rest of the path),
- file **name**;
- file **extension**.

The language name is obviously the same as parser and query name.

You can optionally register your own "patterns" (only for languages that are part of the
forest, as they are validated against it) or override existing patterns (particularly
useful where there is file extension clashing, like both V and Verilog using `.v` file
extension - you can opt for one or the other, etc.). See `forest.RegisterLanguage()` for
details.

You can inspect the mapping in the [filetype.json](filetype.json) file.

## Parser Code Changes

For transparency, any and all changes made to the parsers' (and, to be clear, I
include in this term ALL the files coming from parsers, not just parser.c) files
are documented below.

For one thing ALL changes are fully automated (any exceptions are noted below),
no change is ever made manually, so inspecting the automation should give you a
clear picture of all the changes performed to the code, changes which are detailed below:

- the include paths are rewritten to use a flat structure (i.e. `"tree_sitter/parser.h"`
  becomes `"parser.h"`); This is needed so that the files are part of the same package,
  plus it also makes automation simpler;
- for `unison` the `scanner` file includes `maybe.c` which causes `cgo` to include the file twice and throw duplicate symbols error.
  The solution chosen was to copy the content of the included file into the scanner file and set
  the included file to zero bytes; this way all the code is in one file and the compilation is possible;
- similar to `unison`, `comment` and `perl` also use the same technique of combining C files;
- for parsers that include a `tag.h` file: the `TAG_TYPES_BY_TAG_NAME` variable clashes
  between them (when those parsers are all included into one app). The solution chosen
  was to rename the variable by adding the `_<lang>` suffix, i.e., we currently have:
  - `TAG_TYPES_BY_TAG_NAME_astro`;
  - `TAG_TYPES_BY_TAG_NAME_html`;
  - `TAG_TYPES_BY_TAG_NAME_svelte`;
  - `TAG_TYPES_BY_TAG_NAME_vue`;
- for parsers that define `serialize()`, `deserialize()`, `scan()` (and a few others)
  (i.e. `org`, `beancount`, `html` & a few others): the offending identifiers are
  renamed by appending the `_<lang>` suffix to them (i.e. `serialize` -> `serialize_org`, etc.);
  See the `putFile()` function in `internal/automation/main.go` for details;
- some parsers' `grammar.js` files were not yet updated to work with latest TreeSitter,
  in which case we hot patch them before regenerating the parser. See the `replMap` in
  `downloadGrammar()` function.

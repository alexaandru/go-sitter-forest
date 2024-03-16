# a Go Sitter Forest 🌳

_Where a Gopher wanders around and meets lots of 🌳 Sitters..._

First of all, giving credits where they are due:

This repository started as a fork of @smacker's [go-tree-sitter](https://github.com/smacker/go-tree-sitter) repo
until I realized I don't want to also handle the bindings library itself
(i.e. the stuff in the root of the repo, exposing `sitter.Language` type
itself & co.), I just want a (big) collection of all the [tree-sitter](https://github.com/tree-sitter/tree-sitter)
parsers I can add and still use the bindings library from the original repo.

So here it is: started with the parsers and the automation from the above
mentioned repo then added a bunch more parsers on top of it and updated
automation (to support more parsers and also to automatically update the
PARSERS.md file, etc/).

See [Parsers](PARSERS.md) for a list of supported (and planned) parsers.
The end goal is (at least) parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages).

## Versions & Status

Latest [tree-sitter](https://github.com/tree-sitter/tree-sitter) version is `v0.22.1`. [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare)
`v1.1.0` uses that latest version (and this project uses that
latest version of `go-tree-sitter-bare`).

As for the parsers in this repo:

- most of the parsers were updated to regenerate the `parser.{c,h}` files
  using the latest `tree-sitter` (they are marked with a heavy checkmark
  in [PARSERS.md](PARSERS.md) and they do NOT have the `skip` flag set
  in [grammars.json](grammars.json); this is preferred way going further;
- the other parsers could not yet be regenerated locally. They can still
  be used just fine, but they will use whatever `parser.{c,h}` files they
  have in the upstream repo, which may or may not have been compiled with
  the latest `tree-sitter` version. In general they should work too though,
  that's how this project started, with downloaded files only, after all.
  All parsers have tests and they all pass.

So there it is, we try to converge towards using the same `tree-sitter`
version everywhere.

## Naming Convention

The lang name used is the same as tree sitter lang name (lower case, underscore
instead of spaces) and the same as the query folder name.

This keeps things simple and consistent.

In rare cases, the Go package name differs from the language name:

- `go` actually has the package name `Go` because `package go` does not go well in Go
  (pun intended) but otherwise the language name remains "go";
- `func` language, same problem as above, so package name is actually `FunC`
  (but everything else is `func` as normal: folder, lang name, etc.).

Also, some languages may have names that are not very straightforward acronyms.
In those cases, an `altName` field will be populated, i.e. `requirements` lang
has an `altName` of `Pip requirements`, `query` has `Tree-Sitter Query Language`
and so on. Search [grammar.json](grammars.json) for
your grammar of interest.

## Usage

See the [README](https://github.com/smacker/go-tree-sitter/blob/master/README.md) in go-tree-sitter.

This repo only gives you the `GetLanguage()` part, you will still use the parent
repo for all your interactions with the tree.

You can use the parsers in here exactly the same way (import them one by one, etc.):

```Go
package main

import (
	"context"
	"fmt"

	"github.com/alexaandru/go-sitter-forest/go"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("package main; func main() { println(`It works!`) }")
	node, err := sitter.ParseCtx(context.TODO(), content, go.GetLanguage())
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
}
```

Additionally, if (and only IF) you want to use ALL the parsers (beware, your binary
size **will be huge**, as in 200MB+ huge) then you can use the root package, i.e.:

```Go
package main

import (
	"context"
	"fmt"

	forest "github.com/alexaandru/go-sitter-forest"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("package main; func main() { println(`It works!`) }")
	parser := sitter.NewParser()
	parser.SetLanguage(forest.Lang("go")())

	tree, err := parser.ParseCtx(context.TODO(), nil, content)
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(tree.RootNode())
}
```

this way you can fetch and use any of the parsers, without having to manually import
all of them. You should rarely need this though, unless you're writing a text editor
or something.

A third way, ~and perhaps the most convenient~ (no, it's not, it's \~200MB with all
parsers built into the binary whereas all parsers built as plugins take \~1.65GB),
is to use the included [Plugins.make](Plugins.make)
makefile, which allows easy creation of any and all plugins. Simply copy it to
your repo, and then you can easily `make -f Plugins.make plugin-ada`, etc. or
use the `plugin-all` target which creates all the plugins.

Then you can selectively use them in your app using the [plugins mechanism](https://pkg.go.dev/plugin).

**IMPORTANT:** You must use `-trimpath` when building your app, when using plugins
(the [Plugins.make](Plugins.make) file already includes it, but the app that uses them also needs it).

### Info

Besides getting the `GetLanguage()` function for each lang, you can also retrieve
it's information (it's corresponding `grammars.json` entry) via the `Info()` function
available in all 3 usage modes: library, "bulk loader" (forest package) and plugin,
though the format differs between them (bulk loader returns a Grammar object whereas
in the other two modes, it returns a string holding the raw JSON, for simplicity).

The returned `Grammar` type implements `Stringer` so it should give a nice summary
when printed (to screen or logs, etc.).

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
- for YAML, the grammar `scanner.cc` includes `schema.generated.cc` file which causes `cgo`
  to compile schema.generated.cc twice and throw duplicate symbols error. The solution
  chosen was to copy the content `schema.generated.cc` into `scanner.cc` and set the former
  to zero bytes; this way all the code is in one file and the compilation is possible;
- for parsers that include a `tag.h` file: the `TAG_TYPES_BY_TAG_NAME` variable clashes
  between them (when those parsers are all included into one app). The solution chosen
  was to rename the variable by adding the `_<lang>` suffix, i.e., we currently have:
  - `TAG_TYPES_BY_TAG_NAME_astro`;
  - `TAG_TYPES_BY_TAG_NAME_html`;
  - `TAG_TYPES_BY_TAG_NAME_svelte`;
  - `TAG_TYPES_BY_TAG_NAME_vue`;
- for parsers that define `serialize()`, `deserialize()` and `scan()` in `scanner.c`
  (i.e. `org` and `beancount`): the offending identifiers are renamed by appending
  the `_<lang>` suffix to them (i.e. `serialize` -> `serialize_org`, etc.);
- **EXCEPTION MANUAL CHANGE**: `poe_filter/parser.c` is currently invalid upon generation
  (is missing a right paren at line 6216, col 50 - I added it manually).

## Roadmap

- resolve the issues that prevent us from rebuilding all parsers from grammars:
  - many have local deps that also need to be downloaded (and local paths adjusted);
  - many have the same error related to a decimal regex;
  - some of them throw errors;
- need some automation around working with so many Go modules, in particular:
  - updating tag on a parser after a parser update to its next major/minor/path no.;
  - updating forest (root package) to point to the latest tag of a parser after
    a parser update;
  - updating the tag for the forest itself;
  - also need to update the parsers automation to create a Go module for a new
    parser automatically.

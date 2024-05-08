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
PARSERS.md file, git tags, etc.).

See [PARSERS.md](PARSERS.md) for the list of supported parsers.
The end goal is (at least) parity with [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages).

For contributing (or just to see how the automation works) see [CONTRIBUTING.md](CONTRIBUTING.md).

## Naming Conventions

The language name used is the same as TreeSitter language name (lower case, underscore
instead of spaces) and the same as the query folder name in `nvim_treesitter`.

This keeps things simple and consistent.

In rare cases, the Go package name differs from the language name:

- `go` actually has the package name `Go` because `package go` does not go well in Go
  (pun intended) but otherwise the language name remains "go";
- `func` language, same problem as above, so package name is actually `FunC`
  (but everything else is `func` as normal: folder, language name, etc.).

Also, some languages may have names that are not very straightforward acronyms.
In those cases, an `altName` field will be populated, i.e. `requirements` language
has an `altName` of `Pip requirements`, `query` has `Tree-Sitter Query Language`
and so on. Search [grammar.json](grammars.json) for your grammar of interest.

## Usage

See the README in [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare),
as well as the `example_*.go` files in this repo.

This repo only gives you the `GetLanguage()` function, you will still use the sibling
repo for all your interactions with the tree.

You can use the parsers in this repo in 3 main ways:

### 1. Standalone

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
	node, err := sitter.ParseCtx(context.TODO(), content, risor.GetLanguage())
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
}
```

### 2. In Bulk

If (and only IF) you want to use ALL (or most of) the parsers (beware, your binary
size **will be huge**, as in 200MB+ huge) then you can use the root (`forest`) package:

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
	parser.SetLanguage(forest.GetLanguage("risor")())

	tree, err := parser.ParseCtx(context.TODO(), nil, content)
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

### 3. As a Plugin

A third way, ~and perhaps the most convenient~ (no, it's not, it's \~200MB with all
parsers built into the binary whereas all parsers built as plugins took \~1650MB
last time I built them all (which granted, was several versions ago, before upgrading
to `TreeSitter` v0.22.1)), is to use the included [Plugins.make](Plugins.make)
makefile, which allows easy creation of any and all plugins. Simply copy it to
your repo, and then you can easily `make -f Plugins.make plugin-risor`, etc. or
use the `plugin-all` target which creates all the plugins.

Then you can selectively use them in your app using the [plugins mechanism](https://pkg.go.dev/plugin).

**IMPORTANT:** You **MUST** use `-trimpath` when building your app, when using plugins
(the [Plugins.make](Plugins.make) file already includes it, but the app that uses them also needs it).

### Info

Each individual parser (as well as the bulk loader) offers an `Info()` function
which can be used to retrieve information about a parser. It exposes it's entry
from `grammars.json` either raw (as a string holding the JSON encoded entry)
or as an object (only available in bulk mode).

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
- for `unison` the `scanner` file includes `maybe.c` which causes `cgo` to include the file twice and throw duplicate symbols error.
  The solution chosen was to copy the content of the included file into the scanner file and set
  the included file to zero bytes; this way all the code is in one file and the compilation is possible;
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
  `downloadGrammar()` function;
- **EXCEPTION MANUAL CHANGE**: `poe_filter/parser.c` is currently invalid upon generation
  (is missing a right paren at line 6216, col 50 - I added it manually).

## Versions & Status

We are currently aligned with TreeSitter `v0.22.2`: [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare)
`v1.1.1` uses `v0.22.2` (and this project uses that latest version of
`go-tree-sitter-bare`) and the included [package.json](package.json)
(which is used for regenerating grammars) is using the same version.

As for the parsers in this repo:

- almost of the parsers are now regenerating the `parser.{c,h}` files
  using the latest `tree-sitter` (they are marked with a heavy checkmark
  in [PARSERS.md](PARSERS.md) and they do NOT have the `skip` flag set
  in [grammars.json](grammars.json)); this is preferred way going further;
- a few parsers could not yet be regenerated locally. They can still
  be used just fine, but they will use whatever `parser.{c,h}` files they
  have in the upstream repo, which may or may not have been compiled with
  the latest `tree-sitter` version (most likely not, or we'd also be able
  to regenerate them). In general they should work too though, that's how
  this project started after all, with downloaded files only.

So there it is, we try to converge towards using the same `tree-sitter`
version everywhere, and keeping up with it too.

## TODO

- need to update the parsers automation to create a Go module for a new parser automatically;
- need to be able to auto-delete files deleted remotely (i.e. if a scanner.c or whatever is deleted
  from the source repo, we should also be deleting it locally).

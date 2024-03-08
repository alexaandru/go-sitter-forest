# Go Bindings for Tree Sitter Parsers

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

## Naming Convention

The lang name used is the same as tree sitter lang name (lower case, underscore
instead of spaces) and the same as the query folder name.

This keeps things simple and consistent.

In rare cases, the Go package name differs from the language name: 
- `go` actually has the package `Go` because `package go` does not go well in Go
  (pun intended) but otherwise the language name remains "go";
- `func` language, same problem as above, so package name is actually `FunC`
  (but everything else is `func` as normal: folder, lang name, etc.).

Also, some languages may have names that are not very straightforward acronyms.
In those cases, an `altName` field will be populated, i.e. `requirements` lang
has an `altName` of `Pip requirements`, `query` has `Tree-Sitter Query Language`
and so on. Search [grammar.json](/internal/automation/grammars.json) for
your grammar of interest.

## Usage

See the [README](https://github.com/smacker/go-tree-sitter/blob/master/README.md) in go-tree-sitter.

This repo only gives you the `GetLanguage()` part, you will still use the parent
repo for all your interactions with the tree.

You can use the parsers in here exactly the same way (import them one by one, etc.):

```Go
package main

import (
    "fmt"
    "context"

    "github.com/alexaandru/go-tree-sitter-parsers/ada"
    sitter "github.com/smacker/go-tree-sitter"
)

func main() {
    content := []byte("your source code goes here")
    parser := sitter.NewParser()
    parser.SetLanguage(ada.GetLanguage())

    tree, err := parser.ParseCtx(context.TODO(), nil, content);
    if err != nil {
        fmt.Println(err)
    } else {
        // Do something interesting with the parsed tree...
        fmt.Println(tree)
    }
}
```

Additionally, if (and only IF) you want to use ALL the parsers (beware, your binary
size **will be huge**, as in 200MB+ huge) then you can use the root package, i.e.:

```Go
package main

import parsers "github.com/alexaandru/go-tree-sitter-parsers"

func main() {
    lang := parsers.Lang("go") // or any other

    // Do something fun with lang in here...
}
```

this way you can fetch and use any of the parsers, without having to manually import
all of them. You should rarely need this though, unless you're writing a text editor
or something.

## Parser Code Changes

For transparency, any and all changes made to the parsers' (and, to be clear, I
include in this term ALL the files coming from parsers, not just parser.c) files
are documented below.

For one thing ALL changes are fully automated, no change is ever made manually,
so inspecting the automation should give you a clear picture of all the changes
performed to the code, changes which are detailed below:

- the include paths are rewritten to use a flat structure (i.e. `"tree_sitter/parser.h"`
  becomes `"parser.h"`); This makes the automation simpler as we download all files from
  whatever folders are on the source on a single folder on destination;
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
  - `TAG_TYPES_BY_TAG_NAME_vue`.

## Roadmap

- add all the remaining parsers (and keep them up to date);
- find a way to automate currently not-automated parsers: perl, sql & co. - they do not
  commit the generated files to the repo, so the current automation doesn't work on them;
- (maybe) add nvim_treesitter queries in here too, as a submodule.
  Parsers are of limited use without a complementary set of good queries;
- (maybe) expose them also as plugins? Since the end goal is ~260+ parsers,
  embedding them all in a binary will be "unpleasant" to say the least. If I
  can make it easier for end users to generate them all as plugins, that would
  be nice.

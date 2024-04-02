# Contributing Guidelines

1. do **NOT** contribute any C code. I cannot possibly review MBs of code and I will
   NOT accept PRs with code that I cannot review; This includes running the
   automation and submitting a PR with the results of running that;
2. if you do want to contribute a new parser, only contribute it's `grammars.json`
   entry alone (and or any amendments are needed to automation in order to
   build that new parser) BUT not the files that are generated as a result
   of parsing (in fact, to keep things simple, no parser files at all).
3. test cases for parsers (i.e. `code` in `binding_test.go`): some of the test
   cases in there are quite poor quality and/or cause the parser to emit ERRORs;
   Any help with coming up with better test cases is more than welcome.
   You can identify the problematic ones via `make tests_with_bad_test_cases`.

## Automation

Automation is the heart of this project, maintaining 260+ parsers without it
would be impossible.

The [Makefile](Makefile) is pretty clean and self explanatory, but in short:

- `check-updates`: checks to see if there are any updates; This is based solely
  on the latest commit's sha; While it can be useful to know if there are updates,
  this is just an optional step, `update-all` will perform the same check anyway;
- `[force-]update-all`: will run `update` for all languages that have pending updates
  (the check is the same as above); If force updated, the update will happen
  unconditionally (even if the commit sha did not change);
- `[force-]update-%`: where `%` is any of the folders in the root of this repo (with the
  exception of `internal`) will update that respective parser. For most parsers
  that means:
  1. download the manual C files (`scanner.c`, etc.) if any;
  2. download `grammar.js` and it's dependencies (extracted automatically from it),
  3. rebuild the parser (via `npx tree-sitter generate`);
- for the few parsers where regeneration is not possible, 2 and 3 above are
  replaced with: download the generated files too (`parser.c`, `parser.h`, `alloc.h` and `array.h`);
- `update-bindings`: rarely needed, will update the binding files (binding.go, binding_test.go) in bulk
  (will create them if they do not exist, it's safe to run it whenever); no longer
  routinely needed as the binding files are auto-created during each "dowloadFiles()" call
  (so even for a new parser, they are now created automatically), however it may still be
  useful, should the binding file template change.

## Test Coverage

![unit test coverage](unit.svg)

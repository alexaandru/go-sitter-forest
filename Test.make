# vim:set ft=make:

# Testing related targets.

test: check_forest test_only

test_only:
	@go list -f '{{.Dir}}' -m | xargs go test -vet=all -cover -covermode=atomic -coverprofile=parsers.cov
	@go test -vet=all -cover -covermode=atomic -coverprofile=forest.cov ./...
	@gocovmerge parsers.cov forest.cov > unit.cov

check_forest:
	@diff <(grep \\.GetLanguage forest.go|cut -f2 -d'"'|sort) <(jq -r '.[]|select(.pending == null)|.language' grammars.json|sort)

cover_map: test
	@go-cover-treemap -coverprofile unit.cov > unit.svg

check_submodules:
	@echo "The list below shows all langs that do NOT have a Go module"
	@echo "(no putput below this line == success)"
	@find . -maxdepth 1 -type d ! -path ./.git ! -path ./internal ! -exec test -e "{}/go.mod" ';' -print

tests_with_bad_test_cases:
	@echo These tests have the test case with errors in them or are plainly skipped.
	@echo It would be nice to have successful test cases only.
	@echo "(and maybe a few separate error ones too, but that's another story)"
	@echo
	@grep -lE "(ERROR|Skip)" */binding_test.go
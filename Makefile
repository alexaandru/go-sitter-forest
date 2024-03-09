check-updates update-all update-bindings create-plugins update-grammars:
	@go run ./internal/automation $@

update-% force-update-%:
	@go run ./internal/automation $@

test: check_parsers.go
	@go test -vet=all -cover -covermode=atomic -coverprofile=unit.cov ./...

cover_map: test
	@go-cover-treemap -coverprofile unit.cov > unit.svg

check_parsers.go:
	@diff <(grep GetLanguage forest.go|cut -f2 -d'"'|sort) <(jq -r '.[]|select(.skip == null and .pending == null)|.language' grammars.json|sort)

tests_with_bad_test_cases:
	@echo These tests have the test case with errors in them or are plainly skipped.
	@echo It would be nice to have successful test cases only.
	@echo "(and maybe a few separate error ones too, but that's another story)"
	@echo
	@grep -lE "(ERROR|Skip)" */binding_test.go

include Plugins.make

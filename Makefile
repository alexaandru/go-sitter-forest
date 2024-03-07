check-updates:
	@go run -tags tools ./internal/automation check-updates

update-all:
	@echo Updating all ...
	@go run -tags tools ./internal/automation update-all

update-%: %
	@echo Updating lang $* ...
	@go run -tags tools ./internal/automation update $*

force-update-%: %
	@echo "Updating lang (forced) $*" ...
	@go run -tags tools ./internal/automation force-update $*

test:
	@go test -vet=all ./...

tests_with_bad_test_cases:
	@echo These tests have the test case with errors in them or are plainly skipped.
	@echo It would be nice to have successful test cases only.
	@echo "(and maybe a few separate error ones too, but that's another story)"
	@echo
	@grep -lE "(ERROR|Skip)" */binding_test.go

.DEFAULT: update-all

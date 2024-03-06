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

.DEFAULT: update-all

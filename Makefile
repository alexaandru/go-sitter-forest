update-all:
	@echo Updating all ...
	@go run -tags tools ./internal/automation update-all

update-%: %
	@echo Updating lang $* ...
	@go run -tags tools ./internal/automation update $*

force-update-%: %
	@echo "Updating lang (forced) $*" ...
	@go run -tags tools ./internal/automation update $* -force

.DEFAULT: update-all

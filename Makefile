check-updates update-all force-update-all update-bindings:
	@go run ./internal/automation $@

update-% force-update-%:
	@go run ./internal/automation $@

include Plugins.make
include Test.make
include Util.make

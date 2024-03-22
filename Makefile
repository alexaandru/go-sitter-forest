check-updates update-all update-bindings create-plugins update-grammars:
	@go run ./internal/automation $@

update-% force-update-%:
	@go run ./internal/automation $@

include Plugins.make
include Test.make
include Util.make

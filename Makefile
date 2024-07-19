.DEFAULT_GOAL := check

include *.make

check-updates update-all update-queries force-update-all update-bindings update-forest:
	@go run ./internal/automation $@

update-% force-update-% update-queries-%:
	@lang=$@; lang=$${lang#update-queries-}; lang=$${lang#force-update-}; lang=$${lang#update-}; \
		if [ "$$lang" != "nvim_treesitter" ]; then touch "$${lang}/_keep.scm"; fi
	@go run ./internal/automation $@

update: update-all test
	@git add -u .
	@git add */*.c */*.h */*.scm
	@git status
	@echo "Press enter to continue, Ctrl-C to exit"
	@read x && git commit -m Updated\ parsers && git push
	@make -s auto_tag auto_update_forest

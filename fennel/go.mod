module github.com/alexaandru/go-sitter-forest/fennel

go 1.22.1

require github.com/alexaandru/go-tree-sitter-bare v1.1.1

retract (
	v1.5.6 // Was a messed up experiment.
	v1.4.0 // Messed up with rebase.
)

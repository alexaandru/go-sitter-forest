package forest_test

import (
	"context"
	"fmt"

	forest "github.com/alexaandru/go-sitter-forest"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func ExampleLang() {
	content := []byte("package main; func main() { println(`It works!`) }")
	parser := sitter.NewParser()
	parser.SetLanguage(forest.Lang("go")())

	tree, err := parser.ParseCtx(context.TODO(), nil, content)
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(tree.RootNode())
	// Output: (source_file (package_clause (package_identifier)) (function_declaration name: (identifier) parameters: (parameter_list) body: (block (expression_statement (call_expression function: (identifier) arguments: (argument_list (raw_string_literal)))))))
}

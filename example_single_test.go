package forest_test

import (
	"context"
	"fmt"

	Go "github.com/alexaandru/go-sitter-forest/go"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func ExampleGetLanguage() {
	content := []byte("package main; func main() { println(`It works!`) }")
	node, err := sitter.ParseCtx(context.TODO(), content, Go.GetLanguage())
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
	// Output: (source_file (package_clause (package_identifier)) (function_declaration name: (identifier) parameters: (parameter_list) body: (block (expression_statement (call_expression function: (identifier) arguments: (argument_list (raw_string_literal)))))))
}

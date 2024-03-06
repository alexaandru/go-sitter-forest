package main

import (
	"fmt"
	"os"
)

func makeDir(path string) error {
	return os.MkdirAll(path, 0o755)
}

func die(msg any, rest ...any) {
	fmt.Printf(fmt.Sprint(msg), rest...)
	fmt.Println()
	os.Exit(1)
}

func quit(msg any, rest ...any) {
	fmt.Printf(fmt.Sprint(msg), rest...)
	fmt.Println()
	os.Exit(0)
}

package main

import (
	"fmt"
	"os"
)

func makeDir(path string) error {
	return os.MkdirAll(path, 0o755)
}

func fileExists(path string) (ok bool, err error) {
	if _, err = os.Stat(path); err == nil {
		return true, nil
	}

	if os.IsNotExist(err) {
		return false, nil
	}

	return
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

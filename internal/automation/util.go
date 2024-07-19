package main

import (
	"fmt"
	"os"
	"os/exec"
)

func makeDir(path string) error {
	return os.MkdirAll(path, 0o750)
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

func runCmd(dir, comm string, args ...string) (err error) {
	cmd := exec.Command(comm, args...)
	cmd.Dir = dir

	var b []byte

	if b, err = cmd.CombinedOutput(); err != nil {
		fmt.Println(string(b)) //nolint:forbidigo // TODO, for now it's quite useful as is.
	}

	return
}

func die(msg any) {
	if logFile != nil {
		logFile.Close() //nolint:errcheck // well, we were ask to die, every function for itself!
	}

	fmt.Println(msg) //nolint:forbidigo // dying silently is sad.
	os.Exit(1)
}

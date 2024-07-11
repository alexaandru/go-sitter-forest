//go:build !plugin

package amber_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/amber"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `// Script for detecting unwanted bots on our sites and blocking their IPs.
// Usage: ./bot-detector.sh <LOG_FILE_PATH>
// The script is triggered by a cronjob every 10 minutes.

import * from "std"

main (args) {
  if len(args) < 1 {
    echo "Path to log file missing."
    echo "Usage: bot-detector.sh <logfile>"
    echo "       bot-detector.sh /var/log/nginx/access.log"
    exit(1)
  }

  let logfile = args[0]
  $ test -r {logfile} $ failed {
    echo "File not found or not readable: {logfile}"
    exit(1)
  }

  let start = parse($ date +%s $?)?

  // Get server IP address for excluding.
  let server_ip = $ hostname -i $?

  // We want to check the previous hour and the current hour.
  let timeframes = ["1 hour ago", "now"]
  loop timeframe in timeframes {
    if timeframe == "1 hour ago" {
      echo "Checking the previous hour..."
    } else {
      echo "Checking the current hour..."
    }

    let hour_timestamp = $ date "+%d/%b/%Y:%H" -d "{timeframe}" $?
    // Get the top 20 IP addresses that accessed job pages for the given hour
    // timestamp. Includes a count per IP address in the format: "<count> <ip>".
    // Only check GET requests to certain job-related paths.
    // Ignore requests from well-behaved bots that send a bot user agent.
    // Never block requests from Google in the user agent.
    // Exclude requests to /files/ paths.
    // Check the top 20 results.
    let ip_log = unsafe $ grep -e "{hour_timestamp}" "{logfile}" | \
      grep \
        -e "GET /job/" \
        -e "GET /jobs/" \
        -e "GET /stelle/" \
        -e "GET /stellen/" \
        -e "GET /stellenangebot/" \
        -e "GET /de/stelle/" \
        -e "GET /de/stellen/" \
        -e "GET /de/stellenangebot/" | \
      grep -i -v "bot" | \
      grep -v "Google" | \
      grep -v /files/ | \
      awk '\{print \$1}' | sort | uniq -c | sort -nr | \
      grep -v "{server_ip}" | \
      head -n 20 $

    loop line in lines(ip_log) {
      let parts = split(line, " ")
      let count = parse(parts[0])?
      // Skip IP addresses that sent less than 1000 requests.
      if count < 1000 {
        continue
      }

      let ip = parts[1]
      silent unsafe $ grep "{ip}" /etc/ipblocklist.txt $
      if status == 0 {
        echo "IP address {ip} is already blocked."
        continue
      }
      silent unsafe $ grep "{ip}" /etc/ipexcludedlist.txt $
      if status == 0 {
        echo "IP address {ip} is allow-listed and will not be blocked."
        continue
      }
      echo "Blocking IP address: {ip} ({count} requests)"
      $ echo "{ip}" >> /etc/ipblocklist.txt $?
      $ echo "\$(date) | IP addess {ip} added to the block list, RPH={count}" >> /var/log/bot-detector.log $?
    }
  }
  let end = parse($ date +%s $?)?
  let duration = end - start
  echo "Execution time: {duration} seconds"
}
`
	expected = "(source_file (comment) (comment) (comment) (import_statement (string)) (main_block (variable) (block (if_cond (binop (function_call (variable) (variable)) (number)) (block (builtin (string)) (builtin (string)) (builtin (string)) (builtin (ERROR) (number)) (ERROR))) (variable_init (variable_assignment (variable) (subscript_expression (variable) (subscript (number))))) (command (command_option) (interpolation (variable)) (handler (handler_failed (block (builtin (string (interpolation (variable)))) (builtin (ERROR) (number)) (ERROR))))) (variable_init (variable_assignment (variable) (function_call (variable) (command (handler (handler_propagation))) (handler (handler_propagation))))) (comment) (variable_init (variable_assignment (variable) (command (command_option) (handler (handler_propagation))))) (comment) (ERROR (variable) (ERROR) (subscript (ERROR (string)) (string))) (loop_iter (variable) (variable) (block (if_cond (binop (variable) (string)) (block (builtin (string))) (block (builtin (string)))) (variable_init (variable_assignment (variable) (command (command_option) (interpolation (variable)) (handler (handler_propagation))))) (comment) (comment) (comment) (comment) (comment) (comment) (comment) (variable_init (variable_assignment (variable) (unop (command (command_option) (interpolation (variable)) (interpolation (variable)) (escape_sequence) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (command_option) (escape_sequence) (command_option) (escape_sequence) (command_option) (escape_sequence) (escape_sequence) (escape_sequence) (ERROR (UNEXPECTED ''') (UNEXPECTED ' ') (UNEXPECTED ' ') (UNEXPECTED ' ') (UNEXPECTED 'r')) (escape_sequence) (command_option) (interpolation (variable)) (escape_sequence) (command_option))))) (loop_iter (variable) (function_call (variable) (variable)) (block (variable_init (variable_assignment (variable) (function_call (variable) (variable) (string)))) (variable_init (variable_assignment (variable) (function_call (variable) (subscript_expression (variable) (subscript (number))) (handler (handler_propagation))))) (comment) (if_cond (binop (variable) (number)) (block (loop_control_flow))) (variable_init (variable_assignment (variable) (subscript_expression (variable) (subscript (number))))) (unop (unop (command (interpolation (variable))))) (if_cond (binop (variable) (number)) (block (builtin (string (interpolation (variable)))) (loop_control_flow))) (unop (unop (command (interpolation (variable))))) (if_cond (binop (variable) (number)) (block (builtin (string (interpolation (variable)))) (loop_control_flow))) (builtin (string (interpolation (variable)) (interpolation (variable)))) (command (interpolation (variable)) (handler (handler_propagation))) (command (escape_sequence) (interpolation (variable)) (interpolation (variable)) (command_option) (handler (handler_propagation))))))) (variable_init (variable_assignment (variable) (function_call (variable) (command (handler (handler_propagation))) (handler (handler_propagation))))) (variable_init (variable_assignment (variable) (variable))) (unop (variable)) (builtin (string (interpolation (variable)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), amber.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

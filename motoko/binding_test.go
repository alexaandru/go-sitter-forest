//go:build !plugin

package motoko_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/motoko"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `/* a *generic* quicksort class
   - inplace sorting of mutable arrays of T, for any type T
*/

type Array<T> = [var T];

class QS<T>(cmp : (T, T) -> Int) {
  public func quicksort(a : Array<T>, lo : Nat, hi : Nat) {
   	if (lo < hi) {
      let p = partition(a, lo, hi);
	    quicksort(a, lo, p);
	    quicksort(a, p + 1, hi); 
	  }
  };

  func swap(a : Array<T>, i : Nat, j : Nat) {
    let temp = a[i];
    a[i] := a[j];
    a[j] := temp;
  };

  func trace<T>(v : T) {};
   
  func partition(a : Array<T>, lo : Nat, hi : Nat) : Nat {
    trace<Array<T>>(a);
    let pivot = a[lo];
    var i = lo;
    var j = hi;
    loop {
      while (cmp(a[i], pivot) < 0) {
        i += 1;
      };
      while (cmp(a[j], pivot) > 0) {
        j -= 1;
      };
      if (i >= j) return j;
      swap(a, i, j);
      i += 1;
      j -= 1;
    };
  };
};

func cmpi(i : Int, j : Int) : Int = i - j;
let qs = QS<Int>(cmpi);
let a : Array<Int> = [var 8, 8, 3, 9, 5, 2];
qs.quicksort(a, 0, a.size() - 1);
`
	expected = "(prog (blockcomment) (dec (dec_type name: (name) (typ_bind binding: (name)) type: (typ (typ_array (typ (typ_id name: (name))))))) (dec (dec_class name: (name) (typ_bind binding: (name)) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_func param: (typ_tuple (typ_item (typ (typ_id name: (name)))) (typ_item (typ (typ_id name: (name))))) return: (typ_id name: (name)))))) (dec_field vis: (vis) (dec (dec_func name: (name) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_id name: (name) (typ_args (typ (typ_id name: (name))))))) (pat_bin (name) pat_type: (typ (typ_id name: (name)))) (pat_bin (name) pat_type: (typ (typ_id name: (name))))) body: (block (dec (if antecedent: (exp_plain (exp (exp_bin arg0: (name) arg1: (name)))) consequence: (block (dec (dec_let pat: (pat (name)) value: (exp (call invoked: (name) arg: (exp_plain (exp (name)) (exp (name)) (exp (name))))))) (dec (call invoked: (name) arg: (exp_plain (exp (name)) (exp (name)) (exp (name))))) (dec (call invoked: (name) arg: (exp_plain (exp (name)) (exp (exp_bin arg0: (name) arg1: (exp_plain (nat)))) (exp (name)))))))))))) (dec_field (dec (dec_func name: (name) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_id name: (name) (typ_args (typ (typ_id name: (name))))))) (pat_bin (name) pat_type: (typ (typ_id name: (name)))) (pat_bin (name) pat_type: (typ (typ_id name: (name))))) body: (block (dec (dec_let pat: (pat (name)) value: (exp (exp_post (name) index: (exp (name)))))) (dec (assign binding: (exp_post (name) index: (exp (name))) value: (exp (exp_post (name) index: (exp (name)))))) (dec (assign binding: (exp_post (name) index: (exp (name))) value: (exp (name)))))))) (dec_field (dec (dec_func name: (name) (typ_bind binding: (name)) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_id name: (name))))) body: (block)))) (dec_field (dec (dec_func name: (name) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_id name: (name) (typ_args (typ (typ_id name: (name))))))) (pat_bin (name) pat_type: (typ (typ_id name: (name)))) (pat_bin (name) pat_type: (typ (typ_id name: (name))))) return_type: (typ (typ_id name: (name))) body: (block (dec (call invoked: (name) (typ (typ_id name: (name) (typ_args (typ (typ_id name: (name)))))) arg: (exp_plain (exp (name))))) (dec (dec_let pat: (pat (name)) value: (exp (exp_post (name) index: (exp (name)))))) (dec (dec_var name: (name) value: (exp (name)))) (dec (dec_var name: (name) value: (exp (name)))) (dec (loop (block (dec (while control: (exp_plain (exp (exp_bin arg0: (call invoked: (name) arg: (exp_plain (exp (exp_post (name) index: (exp (name)))) (exp (name)))) arg1: (exp_plain (nat))))) body: (block (dec (binassign binding: (name) value: (exp (exp_plain (nat)))))))) (dec (while control: (exp_plain (exp (exp_bin arg0: (call invoked: (name) arg: (exp_plain (exp (exp_post (name) index: (exp (name)))) (exp (name)))) arg1: (exp_plain (nat))))) body: (block (dec (binassign binding: (name) value: (exp (exp_plain (nat)))))))) (dec (if antecedent: (exp_plain (exp (exp_bin arg0: (name) arg1: (name)))) consequence: (exp (return with: (exp (name)))))) (dec (call invoked: (name) arg: (exp_plain (exp (name)) (exp (name)) (exp (name))))) (dec (binassign binding: (name) value: (exp (exp_plain (nat))))) (dec (binassign binding: (name) value: (exp (exp_plain (nat)))))))))))))) (dec (dec_func name: (name) pat: (pat_tuple (pat_bin (name) pat_type: (typ (typ_id name: (name)))) (pat_bin (name) pat_type: (typ (typ_id name: (name))))) return_type: (typ (typ_id name: (name))) body: (exp (exp_bin arg0: (name) arg1: (name))))) (dec (dec_let pat: (pat (name)) value: (exp (call invoked: (name) (typ (typ_id name: (name))) arg: (exp_plain (exp (name))))))) (dec (dec_let pat: (pat (pat_bin (name) pat_type: (typ (typ_id name: (name) (typ_args (typ (typ_id name: (name)))))))) value: (exp (array (exp_plain (nat)) (exp_plain (nat)) (exp_plain (nat)) (exp_plain (nat)) (exp_plain (nat)) (exp_plain (nat)))))) (dec (call invoked: (exp_post (name) member: (name)) arg: (exp_plain (exp (name)) (exp (exp_plain (nat))) (exp (exp_bin arg0: (call invoked: (exp_post (name) member: (name)) arg: (exp_plain)) arg1: (exp_plain (nat))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), motoko.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

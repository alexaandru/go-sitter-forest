//go:build !plugin

package sdml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/sdml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `module invoice <https://example.com/rentals/> version "2023-12-21" <https://example.com/v2/rentals/> is
  ; Part of a larger example.

  import [dc skos xsd:decimal xsd:date xsd:string]

  import customers:foo
  import finance
  import vehicles

  @skos:release = xsd:date("2023-08-12")
  @skos:definition = "hello"

  structure DateRange is
    assert valid_date_range is
      forall self, self.end_date >= self.start_date
    end
    start_date -> xsd:date
    end_date -> xsd:date
  end

  structure OdometerRange is
    start_miles -> vehicles:OdometerReading
    end_miles -> vehicles:OdometerReading is
      assert valid_range = "self.end_miles >= self.start_miles"
    end
  end

  entity Invoice is
    identity id -> integer

    customer -> customers:Customer
    vehicle -> vehicles:Vehicle
    rental_dates -> DateRange
    mileage -> OdometerRange

    day_rate -> finance:CurrencyRate
    mile_rate -> finance:CurrencyRate
    discount -> finance:DiscountPercentage

  end

  datatype Name <- xsd:string is
    @xsd:minLength = true
    @xsd:maxLength = 25
  end

  datatype InvoiceId <- opaque integer

  event InvoiceCreated source Invoice is
    at -> xsd:dateTime
  end

  event InvoicePayed source Invoice is
    at -> xsd:dateTime
  end

  event InvoiceOverdue source Invoice is
    at -> xsd:dateTime
  end

  structure Payment is
    received -> xsd:dateTime
    amount -> finance:CurrencyAmount
    kind -> finance:PaymentKind
  end

  enum Terms of
    Immediate is
      @skos:preLabel = "NOW"
    end
    ThirtyDays
    SixtyDays
  end

  union PaymentKind of
    Cash
    Card as Plastic
  end

end
`
	expected = "(module name: (identifier) base: (iri) version_info: (quoted_string) version_uri: (iri) body: (module_body (line_comment) (import_statement (module_import name: (identifier)) (module_import name: (identifier)) (member_import name: (qualified_identifier module: (identifier) member: (identifier))) (member_import name: (qualified_identifier module: (identifier) member: (identifier))) (member_import name: (qualified_identifier module: (identifier) member: (identifier)))) (import_statement (member_import name: (qualified_identifier module: (identifier) member: (identifier)))) (import_statement (module_import name: (identifier))) (import_statement (module_import name: (identifier))) (annotation (annotation_property name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (value (value_constructor name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (simple_value (string (quoted_string))))))) (annotation (annotation_property name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (value (simple_value (string (quoted_string)))))) (definition (structure_def name: (identifier) body: (structured_body (annotation (constraint name: (identifier) body: (formal_constraint body: (constraint_sentence (quantified_sentence binding: (quantified_variable_binding quantifier: (universal) binding: (quantified_variable source: (reserved_self))) body: (constraint_sentence (simple_sentence (inequation lhs: (term (function_composition subject: (reserved_self) name: (identifier))) relation: (greater_than_or_equal) rhs: (term (function_composition subject: (reserved_self) name: (identifier))))))))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (structure_def name: (identifier) body: (structured_body (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))) body: (annotation_only_body (annotation (constraint name: (identifier) body: (informal_constraint value: (quoted_string)))))))))) (definition (entity_def name: (identifier) body: (entity_body identity: (entity_identity identity: (member (member_def name: (identifier) target: (type_reference (builtin_simple_type))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (identifier))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (identifier))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (data_type_def name: (identifier) base: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) body: (annotation_only_body (annotation (annotation_property name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (value (simple_value (boolean (boolean_truth)))))) (annotation (annotation_property name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (value (simple_value (integer)))))))) (definition (data_type_def name: (identifier) opaque: (opaque) base: (builtin_simple_type))) (definition (event_def name: (identifier) source: (identifier_reference (identifier)) body: (structured_body (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (event_def name: (identifier) source: (identifier_reference (identifier)) body: (structured_body (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (event_def name: (identifier) source: (identifier_reference (identifier)) body: (structured_body (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (structure_def name: (identifier) body: (structured_body (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier)))))) (member (member_def name: (identifier) target: (type_reference (identifier_reference (qualified_identifier module: (identifier) member: (identifier))))))))) (definition (enum_def name: (identifier) body: (enum_body (value_variant name: (identifier) body: (annotation_only_body (annotation (annotation_property name: (identifier_reference (qualified_identifier module: (identifier) member: (identifier))) value: (value (simple_value (string (quoted_string)))))))) (value_variant name: (identifier)) (value_variant name: (identifier))))) (definition (union_def name: (identifier) body: (union_body (type_variant name: (identifier_reference (identifier))) (type_variant name: (identifier_reference (identifier)) rename: (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), sdml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

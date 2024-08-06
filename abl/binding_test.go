//go:build !plugin

package abl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/abl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
 /*------------------------------------------------------------------------
    File        : Util.cls
    Description : Utility class for various methods that do not fit neatly into
                  existing class structures.
    Author(s)   : Abe Voelker
    Created     : Sat Jun 26 16:05:14 CDT 2010
    Notes       :
  ----------------------------------------------------------------------*/

USING Progress.Lang.*.


CLASS email.Util USE-WIDGET-POOL FINAL:

    DEFINE PRIVATE STATIC VARIABLE cMonthMap AS CHARACTER EXTENT 12 INITIAL
      ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"].

    /* Converts ABL DateTime-TZ default string format (07/21/2010 21:16:47.141-05:00) */
    /* to Email standard format (21 Jul 2010 21:16:47 -0500) */
    METHOD PUBLIC STATIC CHARACTER ABLDateTimeToEmail(INPUT ipdttzDateTime AS DATETIME-TZ):
        RETURN STRING(DAY(ipdttzDateTime))  + " " + cMonthMap[MONTH(ipdttzDateTime)] + " " +
               STRING(YEAR(ipdttzDateTime)) + " " +
               STRING( INTEGER( TRUNCATE( MTIME( ipdttzDateTime ) / 1000, 0 ) ), "HH:MM:SS" ) + " " +
               ABLTimeZoneToString(TIMEZONE(ipdttzDateTime)).
    END METHOD.

    METHOD PUBLIC STATIC CHARACTER ABLDateTimeToEmail(INPUT ipdtDateTime AS DATETIME):
        RETURN ABLDateTimeToEmail(DATETIME-TZ(ipdtDateTime)). /* Time zone will be session value */
    END METHOD.

    /* Note: ABL MODULO function returns incorrect values for negative numbers! */
    METHOD PUBLIC STATIC CHARACTER ABLTimeZoneToString(INPUT ipiTimeZone AS INTEGER):
        RETURN STRING(TRUNCATE(ipiTimeZone / 60, 0), "-99") + STRING(ABSOLUTE(ipiTimeZone) MODULO 60, "99").
    END METHOD.

    /* Converts input plain text into base64-encoded, email-standard width string data */
    METHOD PUBLIC STATIC LONGCHAR ConvertDataToBase64(INPUT iplcNonEncodedData AS LONGCHAR):
        DEFINE VARIABLE lcPreBase64Data    AS LONGCHAR NO-UNDO.
        DEFINE VARIABLE lcPostBase64Data   AS LONGCHAR NO-UNDO.
        DEFINE VARIABLE mptrPostBase64Data AS MEMPTR   NO-UNDO.
        DEFINE VARIABLE i                  AS INTEGER  NO-UNDO.

        /* Read file into MEMPTR and convert it to base-64 */
        COPY-LOB FROM OBJECT iplcNonEncodedData TO mptrPostBase64Data.
        lcPreBase64Data = BASE64-ENCODE(mptrPostBase64Data).
        SET-SIZE(mptrPostBase64Data) = 0. /* Free memory */

        /* Convert base-64 data into 77-char width lines (for email standard) */
        DO i=1 TO LENGTH(lcPreBase64Data) BY 77:
            ASSIGN lcPostBase64Data = lcPostBase64Data + SUBSTRING(lcPreBase64Data, i, 77) + CHR(13) + CHR(10).
        END.

        RETURN lcPostBase64Data.
    END METHOD.

END CLASS.
`
	expected = "(source_code (comment) (using_statement (qualified_name (identifier) (identifier))) (class_statement name: (qualified_name (identifier) (identifier)) (use_widget_pool) (final) (ERROR (access_tuning) (scope_tuning) (identifier) (ERROR (primitive_type) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)) (identifier) (identifier)) (comment) (comment) (class_body (method_definition (access_tuning) (scope_tuning) return_type: (primitive_type) (identifier) (function_parameter (function_parameter_mode) (identifier) (primitive_type)) (body (return_statement (additive_expression (additive_expression (additive_expression (additive_expression (additive_expression (additive_expression (additive_expression (additive_expression (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (identifier))))) (double_quoted_string)) (function_call function: (identifier) (function_call_argument (identifier)))) (ERROR (identifier)) (double_quoted_string)) (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (identifier)))))) (double_quoted_string)) (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (multiplicative_expression (function_call function: (identifier) (function_call_argument (identifier))) (number_literal))) (function_call_argument (number_literal)))))) (function_call_argument (double_quoted_string)))) (double_quoted_string)) (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (identifier))))))))) (method_definition (access_tuning) (scope_tuning) return_type: (primitive_type) (identifier) (function_parameter (function_parameter_mode) (identifier) (primitive_type)) (body (return_statement (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (identifier))))))) (comment)) (comment) (method_definition (access_tuning) (scope_tuning) return_type: (primitive_type) (identifier) (function_parameter (function_parameter_mode) (identifier) (primitive_type)) (body (return_statement (additive_expression (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (multiplicative_expression (identifier) (number_literal))) (function_call_argument (number_literal)))) (function_call_argument (double_quoted_string))) (function_call function: (identifier) (function_call_argument (function_call function: (identifier) (function_call_argument (identifier)))) (ERROR (identifier)) (function_call_argument (double_quoted_string))))))) (comment) (method_definition (access_tuning) (scope_tuning) return_type: (primitive_type) (identifier) (function_parameter (function_parameter_mode) (identifier) (primitive_type)) (body (variable_definition name: (identifier) type: (primitive_type) (variable_tuning)) (variable_definition name: (identifier) type: (primitive_type) (variable_tuning)) (variable_definition name: (identifier) type: (primitive_type) (variable_tuning)) (variable_definition name: (identifier) type: (primitive_type) (variable_tuning)) (comment) (abl_statement statement: (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)) (variable_assignment (assignment (identifier) (function_call function: (identifier) (function_call_argument (identifier))))) (variable_assignment (assignment (identifier) (ERROR (function_call_argument (identifier))) (number_literal))) (comment) (comment) (do_block (to_phrase (assignment (identifier) (number_literal)) (function_call function: (identifier) (function_call_argument (identifier))) (number_literal)) (body (assign_statement (assignment (identifier) (additive_expression (additive_expression (additive_expression (identifier) (function_call function: (identifier) (function_call_argument (identifier)) (function_call_argument (identifier)) (function_call_argument (number_literal)))) (function_call function: (identifier) (function_call_argument (number_literal)))) (function_call function: (identifier) (function_call_argument (number_literal)))))))) (return_statement (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), abl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

//go:build !plugin

package abap_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/abap"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `REPORT zprod.

TYPES: BEGIN OF ty_final,
  matnr TYPE mara-matnr,
  werks TYPE marc-werks,
  maktx TYPE makt-maktx,
  plnum TYPE plaf-plnum,
  gsmng TYPE plaf-gsmng,
  pedtr TYPE plaf-pedtr,
  aufnr TYPE afpo-aufnr,
  DGLTS TYPE afpo-DGLTS,
  psmng TYPE afpo-psmng,
  meins TYPE afpo-meins,
  bwart TYPE mseg-bwart,
  menge TYPE mseg-menge,
  budat_mkpf TYPE mseg-budat_mkpf,
  END OF ty_final.

data: it_final type STANDARD TABLE OF ty_final,
      wa_final type ty_final.
  DATA: smatnr TYPE mara-matnr,
        swerks TYPE marc-werks.

  SELECTION-SCREEN BEGIN OF BLOCK a.
    SELECT-OPTIONS: s_matnr FOR smatnr,
    s_werks FOR swerks.

  SELECTION-SCREEN END OF BLOCK a.

  START-OF-SELECTION.
  select a~matnr b~werks c~maktx d~plnum d~gsmng d~pedtr e~aufnr e~DGLTS
    e~psmng e~meins f~bwart f~menge f~meins f~budat_mkpf 
    into CORRESPONDING FIELDS OF table it_final
    from mara as a
    INNER JOIN marc as b on a~matnr = b~matnr
    INNER JOIN makt as c on a~matnr = c~matnr
    INNER JOIN plaf as d on a~matnr = d~matnr and b~werks = d~plwrk
    INNER JOIN afpo as e on a~matnr = e~matnr and b~werks = e~pwerk
    INNER JOIN mseg as f on a~matnr = f~matnr and b~werks = f~werks and bwart = '101'
    where a~matnr in s_matnr
    and b~werks in s_werks.
  END-OF-SELECTION.

  sort it_final by matnr plnum ASCENDING.
  delete ADJACENT DUPLICATES FROM it_final COMPARING plnum.

  DATA: lr_alv          TYPE REF TO cl_salv_table.
    TRY.
        CALL METHOD cl_salv_table=>factory
          EXPORTING
            list_display = if_salv_c_bool_sap=>false
          IMPORTING
            r_salv_table = lr_alv
          CHANGING
            t_table      = it_final.
        ##NO_HANDLER.
      CATCH cx_salv_msg .
    ENDTRY.
    CALL METHOD lr_alv->display.`
	expected = "(program (report_statement (name)) (macro_include name: (name) (ERROR) (parameter_list (name) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name) (name) (structured_data_object (structure_name) (component_name)) (ERROR) (name))) (chained_variable_declaration (variable (name) (typing (type))) (variable (name) (typing (type)))) (chained_variable_declaration (variable (name) (typing (type))) (ERROR (name)) (variable (name) (typing (type))) (ERROR (name))) (ERROR (structured_data_object (structure_name) (component_name))) (macro_include name: (name) (parameter_list (name) (name) (name))) (ERROR (name)) (macro_include name: (name) (parameter_list (name) (name) (ERROR) (name) (name) (name))) (ERROR (structured_data_object (structure_name) (component_name))) (macro_include name: (name) (parameter_list (name) (name) (name))) (ERROR (structured_data_object (structure_name) (component_name) (component_name)) (name) (UNEXPECTED '~')) (macro_include name: (name) (parameter_list (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (ERROR) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (ERROR) (character_literal) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name) (name) (name) (ERROR (UNEXPECTED '~')) (name) (name) (name))) (ERROR (structured_data_object (structure_name) (component_name) (component_name))) (macro_include name: (name) (parameter_list (name) (name) (name) (name) (name))) (macro_include name: (name) (parameter_list (name) (name) (name) (name) (name) (name))) (chained_variable_declaration (variable (name) (typing (type)))) (try_catch_statement (ERROR) (try_block (macro_include name: (name) (parameter_list (attribute_access_static class: (name) attribute: (name)) (name) (name) (ERROR) (attribute_access_static class: (name) attribute: (name)) (name) (name) (ERROR) (name) (name) (name) (ERROR) (name))) (ERROR (UNEXPECTED '#')) (macro_include name: (name))) (catch_statement exception: (name))) (ERROR (name) (name) (name)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), abap.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}

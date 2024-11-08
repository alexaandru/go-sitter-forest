(string) @string
((string) @float
 ;; TODO: make this case insensitive somehow
 (#match? @float "^[+-]?(([0-9]+([.][0-9]*)?|[.][0-9]+)(e[+-]?[0-9]+)?|0x[0-9a-f]+([.][0-9a-f]*)?(p[+-]?[0-9]+)?|inf(inity)?|nan)$"))
(escape_sequence) @string.special

(record_name) @constant

(menu_definition name: (_) @type)
(menu_choice name: (_) @constant)

(field_definition type: (_) @type)
(field_definition type: (_) @type.builtin
 (#any-of? @type.builtin
  "DBF_STRING" "DBF_CHAR" "DBF_UCHAR" "DBF_SHORT" "DBF_USHORT" "DBF_LONG"
  "DBF_ULONG" "DBF_FLOAT" "DBF_DOUBLE" "DBF_ENUM" "DBF_MENU" "DBF_DEVICE"
  "DBF_INLINK" "DBF_OUTLINK" "DBF_FWDLINK" "DBF_NOACCESS"))

((field_item) @function)
((field_item) @function.builtin
 (#any-of? @function.builtin
  "asl" "initial" "promptgroup" "prompt" "special" "pp" "interest" "base"
  "size" "extra" "menu" "prop"))

(field_descriptor
 (field_item) @_asl
 value: (_) @constant.builtin
 (#eq? @_asl "asl")
 (#any-of? @constant.builtin
  "ASL0" "ASL1"))

(field_descriptor
 (field_item) @_special
 value: (_) @constant.builtin
 (#eq? @_special "special")
 (#any-of? @constant.builtin
  "SPC_MOD" "SPC_NOMOD" "SPC_DBADDR" "SPC_SCAN" "SPC_ALARMACK" "SPC_AS"
  "SPC_RESET" "SPC_LINCONV" "SPC_CALC"))

(field_descriptor
 (field_item) @_pp
 value: (_) @boolean
 (#eq? @_pp "pp")
 (#any-of? @boolean
  "FALSE" "TRUE"))

(field_descriptor
 (field_item) @_base
 value: (_) @constant.builtin
 (#eq? @_base "base")
 (#any-of? @constant.builtin
  "DECIMAL" "HEX"))

(field_descriptor
 (field_item) @_prop
 value: (_) @boolean
 (#eq? @_prop "prop")
 (#any-of? @boolean
  "YES" "NO"))

(record_type) @type
((record_type) @type.builtin
 (#any-of? @type.builtin
  "aai" "aao" "ai" "ao" "aSub" "bi" "bo" "calc" "calcout" "compress" "dfanout"
  "event" "fanout" "histogram" "longin" "longout" "int64in" "int64out" "mbbi"
  "mbbiDirect" "mbbo" "mbboDirect" "permissive" "printf" "sel" "seq" "state"
  "stringin" "stringout" "lsi" "lso" "subArray" "sub" "waveform"))

(device_support_declaration
 link_type: (_) @constant.builtin
 (#any-of? @constant.builtin
  "CONSTANT" "PV_LINK" "VME_IO" "CAMAC_IO" "AB_IO" "GPIB_IO" "BITBUS_IO"
  "INST_IO" "BBGPIB_IO" "RF_IO" "VXI_IO"))

(variable_declaration name: (_) @variable)
(variable_declaration type: (_) @type)

(function_declaration name: (_) @function)

(double) @float

((field_name) @variable.builtin
 (#any-of? @variable.builtin
  "NAME" "DESC" "ASG" "SCAN" "PINI" "PHAS" "EVNT" "TSE" "TSEL" "DTYP" "DISV"
  "DISA" "SDIS" "MLOK" "MLIS" "DISP" "PROC" "STAT" "SEVR" "NSTA" "NSEV" "ACKS"
  "ACKT" "DISS" "LCNT" "PACT" "PUTF" "RPRO" "ASP" "PPN" "PPNR" "SPVT" "RSET"
  "DSET" "DPVT" "RDES" "LSET" "PRIO" "TPRO" "BKPT" "UDF" "UDFS" "TIME" "FLNK"
  "VAL" "PREC" "INP" "EGU" "HOPR" "LOPR" "NELM" "FTVL" "NORD" "BPTR" "SIML"
  "SIMM" "SIMS" "SIOL" "MPST" "APST" "HASH" "VAL" "PREC" "OUT" "EGU" "HOPR"
  "LOPR" "NELM" "FTVL" "NORD" "BPTR" "SIML" "SIMM" "SIMS" "SIOL" "MPST" "APST"
  "HASH" "VAL" "INP" "PREC" "LINR" "EGUF" "EGUL" "EGU" "HOPR" "LOPR" "AOFF"
  "ASLO" "SMOO" "HIHI" "LOLO" "HIGH" "LOW" "HHSV" "LLSV" "HSV" "LSV" "HYST"
  "AFTC" "ADEL" "MDEL" "LALM" "AFVL" "ALST" "MLST" "ESLO" "EOFF" "ROFF" "PBRK"
  "INIT" "LBRK" "RVAL" "ORAW" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "VAL" "OVAL"
  "OUT" "OROC" "DOL" "OMSL" "OIF" "PREC" "LINR" "EGUF" "EGUL" "EGU" "ROFF"
  "EOFF" "ESLO" "DRVH" "DRVL" "HOPR" "LOPR" "AOFF" "ASLO" "HIHI" "LOLO" "HIGH"
  "LOW" "HHSV" "LLSV" "HSV" "LSV" "HYST" "ADEL" "MDEL" "RVAL" "ORAW" "RBV"
  "ORBV" "PVAL" "LALM" "ALST" "MLST" "PBRK" "INIT" "LBRK" "SIOL" "SIML" "SIMM"
  "SIMS" "IVOA" "IVOV" "OMOD" "VAL" "OVAL" "INAM" "LFLG" "SUBL" "SNAM" "ONAM"
  "SADR" "CADR" "BRSV" "PREC" "EFLG" "INPA" "INPB" "INPC" "INPD" "INPE" "INPF"
  "INPG" "INPH" "INPI" "INPJ" "INPK" "INPL" "INPM" "INPN" "INPO" "INPP" "INPQ"
  "INPR" "INPS" "INPT" "INPU" "A" "B" "C" "D" "E" "F" "G" "H" "I" "J" "K" "L"
  "M" "N" "O" "P" "Q" "R" "S" "T" "U" "FTA" "FTB" "FTC" "FTD" "FTE" "FTF" "FTG"
  "FTH" "FTI" "FTJ" "FTK" "FTL" "FTM" "FTN" "FTO" "FTP" "FTQ" "FTR" "FTS" "FTT"
  "FTU" "NOA" "NOB" "NOC" "NOD" "NOE" "NOF" "NOG" "NOH" "NOI" "NOJ" "NOK" "NOL"
  "NOM" "NON" "NOO" "NOP" "NOQ" "NOR" "NOS" "NOT" "NOU" "NEA" "NEB" "NEC" "NED"
  "NEE" "NEF" "NEG" "NEH" "NEI" "NEJ" "NEK" "NEL" "NEM" "NEN" "NEO" "NEP" "NEQ"
  "NER" "NES" "NET" "NEU" "OUTA" "OUTB" "OUTC" "OUTD" "OUTE" "OUTF" "OUTG"
  "OUTH" "OUTI" "OUTJ" "OUTK" "OUTL" "OUTM" "OUTN" "OUTO" "OUTP" "OUTQ" "OUTR"
  "OUTS" "OUTT" "OUTU" "VALA" "VALB" "VALC" "VALD" "VALE" "VALF" "VALG" "VALH"
  "VALI" "VALJ" "VALK" "VALL" "VALM" "VALN" "VALO" "VALP" "VALQ" "VALR" "VALS"
  "VALT" "VALU" "OVLA" "OVLB" "OVLC" "OVLD" "OVLE" "OVLF" "OVLG" "OVLH" "OVLI"
  "OVLJ" "OVLK" "OVLL" "OVLM" "OVLN" "OVLO" "OVLP" "OVLQ" "OVLR" "OVLS" "OVLT"
  "OVLU" "FTVA" "FTVB" "FTVC" "FTVD" "FTVE" "FTVF" "FTVG" "FTVH" "FTVI" "FTVJ"
  "FTVK" "FTVL" "FTVM" "FTVN" "FTVO" "FTVP" "FTVQ" "FTVR" "FTVS" "FTVT" "FTVU"
  "NOVA" "NOVB" "NOVC" "NOVD" "NOVE" "NOVF" "NOVG" "NOVH" "NOVI" "NOVJ" "NOVK"
  "NOVL" "NOVM" "NOVN" "NOVO" "NOVP" "NOVQ" "NOVR" "NOVS" "NOVT" "NOVU" "NEVA"
  "NEVB" "NEVC" "NEVD" "NEVE" "NEVF" "NEVG" "NEVH" "NEVI" "NEVJ" "NEVK" "NEVL"
  "NEVM" "NEVN" "NEVO" "NEVP" "NEVQ" "NEVR" "NEVS" "NEVT" "NEVU" "ONVA" "ONVB"
  "ONVC" "ONVD" "ONVE" "ONVF" "ONVG" "ONVH" "ONVI" "ONVJ" "ONVK" "ONVL" "ONVM"
  "ONVN" "ONVO" "ONVP" "ONVQ" "ONVR" "ONVS" "ONVT" "ONVU" "INP" "VAL" "ZSV"
  "OSV" "COSV" "ZNAM" "ONAM" "RVAL" "ORAW" "MASK" "LALM" "MLST" "SIOL" "SVAL"
  "SIML" "SIMM" "SIMS" "VAL" "OMSL" "DOL" "OUT" "HIGH" "ZNAM" "ONAM" "RVAL"
  "ORAW" "MASK" "RPVT" "WDPT" "ZSV" "OSV" "COSV" "RBV" "ORBV" "MLST" "LALM"
  "SIOL" "SIML" "SIMM" "SIMS" "IVOA" "IVOV" "RPVT" "VAL" "PVAL" "CALC" "CLCV"
  "INPA" "INPB" "INPC" "INPD" "INPE" "INPF" "INPG" "INPH" "INPI" "INPJ" "INPK"
  "INPL" "OUT" "INAV" "INBV" "INCV" "INDV" "INEV" "INFV" "INGV" "INHV" "INIV"
  "INJV" "INKV" "INLV" "OUTV" "OOPT" "ODLY" "DLYA" "DOPT" "OCAL" "OCLV" "OEVT"
  "EPVT" "IVOA" "IVOV" "EGU" "PREC" "HOPR" "LOPR" "HIHI" "LOLO" "HIGH" "LOW"
  "HHSV" "LLSV" "HSV" "LSV" "HYST" "ADEL" "MDEL" "A" "B" "C" "D" "E" "F" "G"
  "H" "I" "J" "K" "L" "OVAL" "LA" "LB" "LC" "LD" "LE" "LF" "LG" "LH" "LI" "LJ"
  "LK" "LL" "POVL" "LALM" "ALST" "MLST" "RPCL" "ORPC" "VAL" "CALC" "INPA"
  "INPB" "INPC" "INPD" "INPE" "INPF" "INPG" "INPH" "INPI" "INPJ" "INPK" "INPL"
  "EGU" "PREC" "HOPR" "LOPR" "HIHI" "LOLO" "HIGH" "LOW" "HHSV" "LLSV" "HSV"
  "LSV" "AFTC" "AFVL" "HYST" "ADEL" "MDEL" "A" "B" "C" "D" "E" "F" "G" "H" "I"
  "J" "K" "L" "LA" "LB" "LC" "LD" "LE" "LF" "LG" "LH" "LI" "LJ" "LK" "LL"
  "LALM" "ALST" "MLST" "RPCL" "VAL" "INP" "RES" "ALG" "NSAM" "N" "IHIL" "ILIL"
  "HOPR" "LOPR" "PREC" "EGU" "OFF" "NUSE" "OUSE" "BPTR" "SPTR" "WPTR" "INPN"
  "CVB" "INX" "VAL" "SELM" "SELN" "SELL" "OUTA" "OUTB" "OUTC" "OUTD" "OUTE"
  "OUTF" "OUTG" "OUTH" "DOL" "OMSL" "EGU" "PREC" "HOPR" "LOPR" "HIHI" "LOLO"
  "HIGH" "LOW" "HHSV" "LLSV" "HSV" "LSV" "HYST" "ADEL" "MDEL" "LALM" "ALST"
  "MLST" "VAL" "EPVT" "INP" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "VAL" "SELM"
  "SELN" "SELL" "OFFS" "SHFT" "LNK0" "LNK1" "LNK2" "LNK3" "LNK4" "LNK5" "LNK6"
  "LNK7" "LNK8" "LNK9" "LNKA" "LNKB" "LNKC" "LNKD" "LNKE" "LNKF" "VAL" "NELM"
  "CSTA" "CMD" "ULIM" "LLIM" "WDTH" "SGNL" "PREC" "SVL" "BPTR" "WDOG" "MDEL"
  "MCNT" "SDEL" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "HOPR" "LOPR" "VAL" "INP"
  "EGU" "HOPR" "LOPR" "HIHI" "LOLO" "HIGH" "LOW" "HHSV" "LLSV" "HSV" "LSV"
  "HYST" "AFTC" "AFVL" "ADEL" "MDEL" "LALM" "ALST" "MLST" "SIOL" "SVAL" "SIML"
  "SIMM" "SIMS" "VAL" "OUT" "DOL" "OMSL" "EGU" "DRVH" "DRVL" "HOPR" "LOPR"
  "HIHI" "LOLO" "HIGH" "LOW" "HHSV" "LLSV" "HSV" "LSV" "HYST" "ADEL" "MDEL"
  "LALM" "ALST" "MLST" "SIOL" "SIML" "SIMM" "SIMS" "IVOA" "IVOV" "VAL" "OVAL"
  "SIZV" "LEN" "OLEN" "INP" "MPST" "APST" "SIML" "SIMM" "SIMS" "SIOL" "VAL"
  "OVAL" "SIZV" "LEN" "OLEN" "DOL" "IVOA" "IVOV" "OMSL" "OUT" "MPST" "APST"
  "SIML" "SIMM" "SIMS" "SIOL" "VAL" "NOBT" "INP" "RVAL" "ORAW" "MASK" "MLST"
  "SHFT" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "B0" "B1" "B2" "B3" "B4" "B5" "B6"
  "B7" "B8" "B9" "BA" "BB" "BC" "BD" "BE" "BF" "VAL" "NOBT" "INP" "ZRVL" "ONVL"
  "TWVL" "THVL" "FRVL" "FVVL" "SXVL" "SVVL" "EIVL" "NIVL" "TEVL" "ELVL" "TVVL"
  "TTVL" "FTVL" "FFVL" "ZRST" "ONST" "TWST" "THST" "FRST" "FVST" "SXST" "SVST"
  "EIST" "NIST" "TEST" "ELST" "TVST" "TTST" "FTST" "FFST" "ZRSV" "ONSV" "TWSV"
  "THSV" "FRSV" "FVSV" "SXSV" "SVSV" "EISV" "NISV" "TESV" "ELSV" "TVSV" "TTSV"
  "FTSV" "FFSV" "AFTC" "AFVL" "UNSV" "COSV" "RVAL" "ORAW" "MASK" "MLST" "LALM"
  "SDEF" "SHFT" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "VAL" "OMSL" "NOBT" "DOL"
  "OUT" "B0" "B1" "B2" "B3" "B4" "B5" "B6" "B7" "B8" "B9" "BA" "BB" "BC" "BD"
  "BE" "BF" "RVAL" "ORAW" "RBV" "ORBV" "MASK" "MLST" "SHFT" "SIOL" "SIML"
  "SIMM" "SIMS" "IVOA" "IVOV" "VAL" "DOL" "OMSL" "NOBT" "OUT" "ZRVL" "ONVL"
  "TWVL" "THVL" "FRVL" "FVVL" "SXVL" "SVVL" "EIVL" "NIVL" "TEVL" "ELVL" "TVVL"
  "TTVL" "FTVL" "FFVL" "ZRST" "ONST" "TWST" "THST" "FRST" "FVST" "SXST" "SVST"
  "EIST" "NIST" "TEST" "ELST" "TVST" "TTST" "FTST" "FFST" "ZRSV" "ONSV" "TWSV"
  "THSV" "FRSV" "FVSV" "SXSV" "SVSV" "EISV" "NISV" "TESV" "ELSV" "TVSV" "TTSV"
  "FTSV" "FFSV" "UNSV" "COSV" "RVAL" "ORAW" "RBV" "ORBV" "MASK" "MLST" "LALM"
  "SDEF" "SHFT" "SIOL" "SIML" "SIMM" "SIMS" "IVOA" "IVOV" "LABL" "VAL" "OVAL"
  "WFLG" "OFLG" "VAL" "SIZV" "LEN" "OUT" "FMT" "IVLS" "INP0" "INP1" "INP2"
  "INP3" "INP4" "INP5" "INP6" "INP7" "INP8" "INP9" "VAL" "SELM" "SELN" "PREC"
  "NVL" "INPA" "INPB" "INPC" "INPD" "INPE" "INPF" "INPG" "INPH" "INPI" "INPJ"
  "INPK" "INPL" "EGU" "HOPR" "LOPR" "HIHI" "LOLO" "HIGH" "LOW" "HHSV" "LLSV"
  "HSV" "LSV" "HYST" "ADEL" "MDEL" "A" "B" "C" "D" "E" "F" "G" "H" "I" "J" "K"
  "L" "LA" "LB" "LC" "LD" "LE" "LF" "LG" "LH" "LI" "LJ" "LK" "LL" "LALM" "ALST"
  "MLST" "NLST" "VAL" "SELM" "SELN" "SELL" "OFFS" "SHFT" "OLDN" "PREC" "DLY0"
  "DOL0" "DO0" "LNK0" "DLY1" "DOL1" "DO1" "LNK1" "DLY2" "DOL2" "DO2" "LNK2"
  "DLY3" "DOL3" "DO3" "LNK3" "DLY4" "DOL4" "DO4" "LNK4" "DLY5" "DOL5" "DO5"
  "LNK5" "DLY6" "DOL6" "DO6" "LNK6" "DLY7" "DOL7" "DO7" "LNK7" "DLY8" "DOL8"
  "DO8" "LNK8" "DLY9" "DOL9" "DO9" "LNK9" "DLYA" "DOLA" "DOA" "LNKA" "DLYB"
  "DOLB" "DOB" "LNKB" "DLYC" "DOLC" "DOC" "LNKC" "DLYD" "DOLD" "DOD" "LNKD"
  "DLYE" "DOLE" "DOE" "LNKE" "DLYF" "DOLF" "DOF" "LNKF" "VAL" "OVAL" "VAL"
  "OVAL" "INP" "MPST" "APST" "SIOL" "SVAL" "SIML" "SIMM" "SIMS" "VAL" "OVAL"
  "DOL" "OMSL" "OUT" "MPST" "APST" "SIOL" "SIML" "SIMM" "SIMS" "IVOA" "IVOV"
  "VAL" "PREC" "FTVL" "INP" "EGU" "HOPR" "LOPR" "MALM" "NELM" "INDX" "BUSY"
  "NORD" "BPTR" "VAL" "INAM" "SNAM" "SADR" "INPA" "INPB" "INPC" "INPD" "INPE"
  "INPF" "INPG" "INPH" "INPI" "INPJ" "INPK" "INPL" "EGU" "HOPR" "LOPR" "HIHI"
  "LOLO" "HIGH" "LOW" "PREC" "BRSV" "HHSV" "LLSV" "HSV" "LSV" "HYST" "ADEL"
  "MDEL" "A" "B" "C" "D" "E" "F" "G" "H" "I" "J" "K" "L" "LA" "LB" "LC" "LD"
  "LE" "LF" "LG" "LH" "LI" "LJ" "LK" "LL" "LALM" "ALST" "MLST" "VAL" "RARM"
  "PREC" "INP" "EGU" "HOPR" "LOPR" "NELM" "FTVL" "BUSY" "NORD" "BPTR" "SIOL"
  "SIML" "SIMM" "SIMS" "MPST" "APST" "HASH" "VERS" "VAL" "PREC" "PRE" "OPRE"
  "SM" "OSM" "AR" "OAR" "AFT" "OAFT" "PPV" "RPV" "DPV" "TPV" "OPPV" "ORPV"
  "ODPV" "OTPV" "SP" "OSP" "EP" "OEP" "NP" "ONP" "SC" "OSC" "AQT" "OAQT" "MP"
  "IMP" "ACT" "IACT" "LOAD" "OLOAD" "GO" "OGO" "STEP" "LSTP" "VERS" "VAL"
  "SMSG" "CMND" "ALRT" "RPVT" "MPTS" "EXSC" "XSC" "PXSC" "BUSY" "KILL" "WAIT"
  "WCNT" "AWCT" "WTNG" "AWAIT" "AAWAIT" "DATA" "REFD" "NPTS" "FPTS" "FFO" "CPT"
  "BCPT" "DPT" "PCPT" "PASM" "TOLP" "TLAP" "ATIME" "T1PV" "T2PV" "T3PV" "T4PV"
  "A1PV" "BSPV" "ASPV" "BSWAIT" "ASWAIT" "P1NV" "P2NV" "P3NV" "P4NV" "R1NV"
  "R2NV" "R3NV" "R4NV" "T1NV" "T2NV" "T3NV" "T4NV" "A1NV" "BSNV" "ASNV""BSCD"
  "ASCD" "PAUS" "LPAU" "PDLY" "DDLY" "RDLY" "FAZE" "ACQM" "ACQT" "DSTATE"
  "COPYTO"))

(field
 name: (_) @_field
 value: (string) @variable
 (#match? @_field "LNK|INP|^OUT$"))

(comment) @comment

[ "${" "{" "}" "$(" "(" ")" ] @punctuation.bracket
[ "," "%" ] @punctuation.delimiter

[
 "path"
 "addpath"
 "include"
 "menu"
 "choice"
 "recordtype"
 "field"
 "device"
 "driver"
 "link"
 "registrar"
 "function"
 "variable"
 "breaktable"
 "record"
 "grecord"
 "info"
 "alias"
] @keyword

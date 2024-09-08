(
  (escaped_word) @keyword
  (#match? @keyword "^\\\\(a(?:ccepts|ddlyrics|l(?:ias|ternative))|book(?:(?:part)?)|c(?:h(?:ange|ord(?:mode|s))|on(?:sists|text))|d(?:e(?:fault(?:(?:child)?)|nies|scription)|rum(?:mode|s))|etc|figure(?:mode|s)|header|l(?:ayout|yric(?:mode|s(?:(?:to)?)))|m(?:arkup(?:(?:list)?)|idi)|n(?:ame|ew|otemode)|override|paper|re(?:move|(?:pea|s|ver)t)|s(?:core|e(?:quential|t)|imultaneous)|t(?:empo|ype)|unset|with)$")
)

(
  (escaped_word) @identifier.core.function
  (#match? @identifier.core.function "^\\\\(=|a(?:bsolute|cci(?:accatura|dentalStyle)|dd(?:ChordShape|InstrumentDefinition|Quote)|fter(?:(?:Grace)?)|l(?:low(?:PageTurn|VoltaHook)|terBroken)|mbitusAfter|pp(?:endToTag|ly(?:Context|Music|Output)|oggiatura)|ssertBeam(?:Quant|Slope)|utoChange)|b(?:a(?:lloon(?:(?:(?:Grob)?)Text)|r(?:(?:NumberCheck)?))|e(?:amExceptions|nd(?:After|Hold|StartLevel))|ookOutput(?:Name|Suffix)|reathe)|c(?:aesura|hordRepeats|lef|o(?:daMark|mp(?:oundMeter|ressMMRests))|rossStaff|ue(?:Clef(?:(?:Unset)?)|During(?:(?:WithClef)?)))|d(?:e(?:(?:adNot|fineBarLin)e)|isplay(?:LilyMusic|Music|Scheme)|ropNote)|e(?:n(?:ablePolymeter|dSpanners)|ventChords)|f(?:eatherDurations|i(?:nger|xed)|ootnote)|gr(?:ace|obdescriptions)|h(?:armonic(?:By(?:Fret|Ratio)|Note|sOn)|ide)|in(?:StaffSegno|cipit|herit-acceptability|strumentSwitch|ver(?:sion|tChords))|jump|k(?:e(?:epWithTag|y)|illCues)|la(?:bel|nguage(?:(?:(?:Restor|SaveAndChang)e)?))|m(?:a(?:gnify(?:Music|Staff)|ke(?:Clusters|DefaultStringTuning)|rk(?:(?:upMap)?))|odal(?:Inversion|Transpose)|usicMap)|noPage(?:Break|Turn)|o(?:ctaveCheck|ffset|mit|nce|ttava|verride(?:Property|TimeSignatureSettings))|p(?:a(?:ge(?:Break|Turn)|lmMute(?:(?:On)?)|r(?:allelMusic|enthesize|t(?:Combine(?:(?:Down|Force|Up)?)|ial)))|hrasingSlurDashPattern|itchedTrill|ointAndClick(?:O(?:ff|n)|Types)|r(?:eBend(?:(?:Hold)?)|operty(?:Override|Revert|Set|Tweak|Unset))|ushToTag)|quoteDuring|r(?:aiseNote|e(?:duceChords|lative|moveWithTag|setRelativeOctave|trograde|vertTimeSignatureSettings)|ightHandFinger)|s(?:caleDurations|e(?:ctionLabel|gnoMark|ttingsFrom)|h(?:ape|iftDurations)|ingle|kip|l(?:ashedGrace|urDashPattern)|t(?:affHighlight|orePredefinedDiagram|ringTuning|yledNoteHeads))|t(?:a(?:bChordRepe(?:ats|tition)|g(?:(?:Group)?))|e(?:mporary|xt(?:(?:(?:End)?)Mark))|i(?:eDashPattern|me(?:(?:s)?))|ocItem|ranspos(?:e(?:(?:dCueDuring)?)|ition)|uplet(?:(?:Span)?)|weak)|un(?:do|fold(?:Repeats|ed))|v(?:o(?:i(?:ces|d)|lta)|shape)|withMusicProperty|xNote)$")
)

(
  (escaped_word) @identifier.core.global
  (#match? @identifier.core.global "^\\\\(a(?:ccent|iken(?:Heads(?:(?:Minor)?)|ThinHeads(?:(?:Minor)?))|llowBreak|r(?:abicStringNumbers|peggio(?:(?:Arrow(?:Down|Up)|Bracket|Normal|Parenthesis(?:(?:Dashed)?))?))|uto(?:B(?:eamO(?:ff|n)|reaksO(?:ff|n))|LineBreaksO(?:ff|n)|PageBreaksO(?:ff|n)))|b(?:a(?:lloonLengthO(?:ff|n)|ssFigure(?:ExtendersO(?:ff|n)|StaffAlignment(?:Down|Neutral|Up)))|reak(?:(?:DynamicSpan)?))|c(?:adenzaO(?:ff|n)|o(?:da|mpressEmptyMeasures)|r(?:(?:esc(?:(?:Hairpin|TextCresc)?))?))|d(?:ash(?:Bang|D(?:ash|ot)|Hat|Larger|Plus|Underscore)|e(?:adNotesO(?:ff|n)|cr(?:(?:esc)?)|fault(?:NoteHeads|TimeSignature)|precated(?:cresc|dim|end(?:cresc|dim)))|im(?:(?:Hairpin|TextD(?:ecr(?:(?:esc)?)|im))?)|o(?:ts(?:Down|Neutral|Up)|wn(?:bow|mordent|prall))|ynamic(?:Down|Neutral|Up))|e(?:asyHeadsO(?:ff|n)|nd(?:SkipNCs|cr(?:(?:esc)?)|d(?:ecr(?:(?:esc)?)|im))|pisem(?:Finis|Initium)|spressivo|xpandEmptyMeasures)|f(?:ermata|ff(?:(?:f(?:(?:f)?))?)|ine|lageolet|renchChords|unkHeads(?:(?:Minor)?)|[fpz])|g(?:ermanChords|li(?:de|ssando))|h(?:a(?:lfopen|rmonic(?:(?:sOff)?)|ydnturn)|enze(?:(?:long|short)fermata)|ide(?:Notes|S(?:plitTiedTabNotes|taffSwitch))|uge)|i(?:gnatzekExceptionMusic|mprovisationO(?:ff|n)|talianChords)|kievanO(?:ff|n)|l(?:a(?:issezVibrer|rge)|heel|ineprall|ongfermata|toe)|m(?:ar(?:cato|kLengthO(?:ff|n))|e(?:dianChordGridStyle|lisma(?:(?:End)?)|rgeDifferently(?:DottedO(?:ff|n)|HeadedO(?:ff|n)))|ordent|[fp])|n(?:ewSpacingSection|o(?:B(?:eam|reak)|rmalsize)|umericTimeSignature)|o(?:neVoice|pen)|p(?:a(?:lmMuteOff|rtCombine(?:A(?:part|utomatic)|Chords|SoloI(?:(?:I)?)|Unisono))|hrasingSlur(?:D(?:ashed|o(?:tted|wn))|Half(?:(?:Dashe|Soli)d)|Neutral|Solid|Up)|ortato|p(?:(?:p(?:(?:p(?:(?:p)?))?))?)|r(?:all(?:(?:down|mordent|prall|up)?)|edefinedFretboardsO(?:ff|n)))|r(?:e(?:peatTie|verseturn)|fz|heel|omanStringNumbers|toe)|s(?:acredHarpHeads(?:(?:Minor)?)|e(?:ction|gno|miGermanChords|tDefaultDurationToQuarter)|f(?:[fpz])|h(?:iftO(?:ff|n(?:(?:n(?:(?:n)?))?))|o(?:rtfermata|wS(?:plitTiedTabNotes|taffSwitch)))|ignumcongruentiae|kipNC(?:(?:s)?)|l(?:ashturn|ur(?:D(?:ashed|o(?:tted|wn))|Half(?:(?:Dashe|Soli)d)|Neutral|Solid|Up))|mall|nappizzicato|o(?:stenutoO(?:ff|n)|uthernHarmonyHeads(?:(?:Minor)?))|pp|t(?:a(?:ccat(?:(?:(?:issim)?)o)|rt(?:A(?:(?:cciacc|ppoggi)aturaMusic)|Gr(?:ace(?:Music|Slur)|oup)|Measure(?:Count|Spanner)|S(?:lashedGraceMusic|taff)|T(?:(?:ext|rill)Span)))|em(?:Down|Neutral|Up)|op(?:A(?:(?:cciacc|ppoggi)aturaMusic)|Gr(?:ace(?:Music|Slur)|oup)|Measure(?:Count|Spanner)|S(?:lashedGraceMusic|taff(?:(?:Highlight)?))|T(?:(?:ext|rill)Span)|ped))|ustainO(?:ff|n)|[fp])|t(?:abFullNotation|e(?:eny|nuto|xt(?:LengthO(?:ff|n)|Spanner(?:Down|Neutral|Up)))|humb|i(?:e(?:D(?:ashed|o(?:tted|wn))|Half(?:(?:Dashe|Soli)d)|Neutral|Solid|Up)|ny)|r(?:eCorde|ill)|u(?:plet(?:Down|Neutral|Up)|rn))|u(?:n(?:HideNotes|aCorda)|p(?:bow|mordent|prall))|v(?:arcoda|ery(?:(?:long|short)fermata)|o(?:ice(?:Four(?:(?:Style)?)|NeutralStyle|One(?:(?:Style)?)|T(?:hree(?:(?:Style)?)|wo(?:(?:Style)?)))|welTransition))|walkerHeads(?:(?:Minor)?)|xNotesO(?:ff|n)|[fnp])$")
)

(
  (escaped_word) @identifier.core.function.markup
  (#match? @identifier.core.function.markup "^\\\\(a(?:bs-fontsize|ccidental|lign-on-other|rrow-head|uto-footnote)|b(?:ackslashed-digit|eam|o(?:ld|x)|racket)|c(?:aps|enter-(?:(?:alig|colum)n)|har|ircle|o(?:da|lumn(?:(?:-lines)?)|m(?:bine|pound-meter)|n(?:cat|ditional-trill-markup))|ustomTabClef)|d(?:i(?:r-column|scant)|ouble(?:flat|sharp)|raw-(?:(?:circl|(?:(?:d(?:(?:ash|ott)ed-)|h|squiggle-)?)lin)e)|ynamic)|e(?:llipse|psfile|yeglasses)|f(?:ermata|i(?:gured-bass|ll(?:-(?:line|with-pattern)|ed-box)|nger|rst-visible)|lat|o(?:nt(?:Caps|size)|otnote)|r(?:action|e(?:eBass|t-diagram(?:(?:-(?:(?:ter|verbo)se))?))|omproperty))|general-align|h(?:a(?:lign|rp-pedal)|bracket|center-in|(?:spac|ug)e)|i(?:f|talic)|justif(?:ied-lines|y(?:(?:-(?:field|line|string))?))|l(?:arge(?:(?:r)?)|eft-(?:align|brace|column)|ine|o(?:okup|wer))|m(?:a(?:gnify|p-markup-commands|rk(?:alphabet|letter))|edium|u(?:lti-measure-rest-by-number|sicglyph))|n(?:atural|o(?:rmal(?:-(?:size-su(?:b|per)|text)|size)|te(?:(?:-by-number)?))|u(?:ll|mber))|o(?:n-the-fly|v(?:al|er(?:lay|ride-lines|tie)))|p(?:a(?:d-(?:around|markup|(?:(?:to-bo)?)x)|ge-(?:link|ref)|renthesize|t(?:h|tern))|o(?:lygon|stscript)|roperty-recursive|ut-adjacent)|r(?:aise|e(?:place|st(?:(?:-by-number)?))|hythm|ight-(?:align|brace|column)|o(?:man|tate|unded-box))|s(?:ans|c(?:ale|ore-lines)|e(?:gno|mi(?:flat|sharp)|squi(?:flat|sharp))|harp|imple|lashed-digit|mall(?:(?:Caps|er)?)|t(?:dBass(?:(?:IV|V(?:(?:I)?))?)|encil|r(?:ing-lines|ut))|u(?:b|per))|t(?:able(?:(?:-of-contents)?)|e(?:eny|xt)|i(?:e(?:(?:d-lyric)?)|ny)|r(?:ans(?:late(?:(?:-scaled)?)|parent)|iangle)|ypewriter)|u(?:n(?:der(?:(?:lin|ti)e)|less)|pright)|v(?:arcoda|center|(?:erbatim-fil|spac)e)|w(?:hiteout|ith-(?:color|dimension(?:(?:-from|s(?:(?:-from)?))?)|link|outline|string-transformer|true-dimension(?:(?:s)?)|url)|o(?:odwind-diagram|rdwrap(?:(?:-(?:field|internal|lines|string(?:(?:-internal)?)))?))))$")
)

(
  (symbol) @identifier.core.type.graphical_object
  (#match? @identifier.core.type.graphical_object "^(A(?:ccidental(?:(?:Cautionary|Placement|Suggestion)?)|mbitus(?:(?:Accidental|Line|NoteHead)?)|rpeggio)|B(?:a(?:lloonText|r(?:Line|Number)|ssFigure(?:(?:Alignment(?:(?:Positioning)?)|Bracket|Continuation|Line)?))|e(?:am|nd(?:(?:Aft|Spann)er))|rea(?:kAlign(?:Group|ment)|thingSign))|C(?:aesuraScript|enteredBarNumber(?:(?:LineSpanner)?)|hord(?:(?:Nam|Squar)e)|l(?:ef(?:(?:Modifier)?)|usterSpanner(?:(?:Beacon)?))|o(?:daMark|mbineTextScript|ntrolPo(?:int|lygon))|u(?:e(?:(?:(?:End)?)Clef)|stos))|D(?:ivisio|o(?:t(?:Column|s)|uble(?:PercentRepeat(?:(?:Counter)?)|RepeatSlash))|urationLine|ynamic(?:LineSpanner|Text(?:(?:Spanner)?)))|Episema|F(?:inger(?:GlideSpanner|ing(?:(?:Column)?))|lag|ootnote|retBoard)|G(?:lissando|r(?:aceSpacing|id(?:ChordName|Line|Point)))|H(?:airpin|orizontalBracket(?:(?:Text)?))|Instrument(?:Name|Switch)|JumpScript|K(?:ey(?:Cancellation|Signature)|ievanLigature)|L(?:aissezVibrerTie(?:(?:Column)?)|e(?:dgerLineSpanner|ftEdge)|igatureBracket|yric(?:Extender|Hyphen|RepeatCount|Space|Text))|M(?:e(?:asure(?:Counter|Grouping|Spanner)|lodyItem|nsuralLigature|tronomeMark)|ultiMeasureRest(?:(?:Number|(?:Scrip|Tex)t)?))|No(?:nMusicalPaperColumn|te(?:Col(?:(?:lisio|um)n)|Head|Name|Spacing))|OttavaBracket|P(?:a(?:perColumn|rentheses)|ercentRepeat(?:(?:Counter)?)|hrasingSlur|ianoPedalBracket)|Re(?:hearsalMark|peat(?:Slash|Tie(?:(?:Column)?))|st(?:(?:Collision)?))|S(?:cript(?:(?:Column|Row)?)|e(?:ctionLabel|gnoMark)|ignumRepetitionis|lur|ostenutoPedal(?:(?:LineSpanner)?)|pa(?:cingSpanner|nBar(?:(?:Stub)?))|t(?:a(?:ff(?:Ellipsis|Grouper|Highlight|S(?:pacing|ymbol))|nzaNumber)|em(?:(?:Stub|Tremolo)?)|r(?:(?:ingNumb|okeFing)er))|ustainPedal(?:(?:LineSpanner)?)|ystem(?:(?:Start(?:B(?:ar|rac(?:e|ket))|Square))?))|T(?:abNoteHead|ext(?:Mark|S(?:cript|panner))|i(?:e(?:(?:Column)?)|meSignature)|rill(?:Pitch(?:Accidental|Group|Head|Parentheses)|Spanner)|uplet(?:Bracket|Number))|UnaCordaPedal(?:(?:LineSpanner)?)|V(?:aticanaLigature|erticalA(?:lignment|xisGroup)|o(?:iceFollower|ltaBracket(?:(?:Spanner)?)|welTransition)))$")
)

(
  (symbol) @identifier.core.type.context
  (#match? @identifier.core.type.context "^(C(?:ho(?:irStaff|rd(?:Grid(?:(?:Score)?)|Names))|ueVoice)|D(?:evnull|rum(?:Staff|Voice)|ynamics)|F(?:(?:iguredBas|retBoard)s)|G(?:lobal|r(?:andStaff|egorianTranscription(?:Lyrics|Staff|Voice)))|InternalGregorianStaff|Kievan(?:Staff|Voice)|Lyrics|Mensural(?:Staff|Voice)|N(?:oteNames|ullVoice)|OneStaff|P(?:etrucci(?:Staff|Voice)|ianoStaff)|RhythmicStaff|S(?:core|ta(?:ff(?:(?:Group)?)|ndaloneRhythm(?:S(?:core|taff)|Voice)))|T(?:ab(?:Staff|Voice)|iming)|V(?:aticana(?:Lyrics|Staff|Voice)|oice))$")
)

(
  (symbol) @identifier.core.type.translator
  (#match? @identifier.core.type.translator "^((?:A(?:(?:ccidental|lteration_glyph|mbitus|rpeggio|uto_beam|xis_group)_engrave)|B(?:(?:a(?:(?:lloon|r(?:(?:_number)?))_engrav)|e(?:a(?:m_(?:collision_engrav|engrav|perform)|t_(?:engrav|perform))|nd_(?:(?:(?:spanner_)?)engrav))|rea(?:(?:k_al|thing_s)ign_engrav))e)|C(?:(?:aesura_engrav|entered_bar_number_align_engrav|hord_(?:(?:name|square|tremolo)_engrav)|l(?:(?:ef|uster_spanner)_engrav)|o(?:llision_engrav|mpletion_(?:(?:heads|rest)_engrav)|n(?:current_hairpin_engrav|trol_track_perform))|u(?:(?:e_clef|rrent_chord_text|stos)_engrav))e)|D(?:(?:ivisio_engrav|o(?:(?:t(?:_column|s)|uble_percent_repeat)_engrav)|rum_note(?:_perform|s_engrav)|uration_line_engrav|ynamic_(?:align_engrav|engrav|perform))e)|E(?:(?:pisema|xtender)_engrave)|F(?:(?:i(?:gured_bass(?:(?:_position)?)|nger(?:_glide|ing(?:(?:_column)?)))|o(?:nt_size|otnote|rbid_line_break)|retboard)_engrave)|G(?:(?:lissando|r(?:ace(?:(?:_(?:auto_beam|beam|spacing))?)|id_(?:chord_name|line_span|point)|ob_pq))_engrave)|H(?:(?:orizontal_bracket|yphen)_engrave)|Instrument_(?:(?:name|switch)_engrave)|Jump_engrave|K(?:(?:e(?:ep_alive_together_engrav|y_(?:engrav|perform))|ievan_ligature_engrav)e)|L(?:(?:aissez_vibrer_engrav|edger_line_engrav|igature_bracket_engrav|yric_(?:engrav|perform|repeat_count_engrav))e)|M(?:ark_(?:engrave|performe|tracking_translato)|(?:e(?:(?:asure_(?:counter|grouping|spanner)|lody|nsural_ligature|rge_(?:(?:mmrest_number|rest)s)|tronome_mark)_engrav)|idi_control_change_perform|ulti_measure_rest_engrav)e)|N(?:(?:ew_fingering_engrav|o(?:n_musical_script_column_engrav|te_(?:head(?:(?:_line|s)_engrav)|name_engrav|perform|spacing_engrav)))e)|O(?:(?:ttava_spanner|utput_property)_engrave)|P(?:(?:a(?:(?:ge_turn|per_column|r(?:enthesis|t_combine))_engrav)|ercent_repeat_engrav|hrasing_slur_engrav|i(?:ano_pedal_(?:align_engrav|engrav|perform)|tch(?:(?:_squash|ed_trill)_engrav))|ure_from_neighbor_engrav)e)|R(?:(?:e(?:peat_(?:(?:acknowledg|ti)e)|st(?:(?:_collision)?))|hythmic_column)_engrave)|S(?:(?:cript_(?:(?:(?:(?:column|row)_)?)engrav)|eparating_line_group_engrav|how_control_points_engrav|ignum_repetitionis_engrav|kip_typesetting_engrav|l(?:ash_repeat_engrav|ur_(?:engrav|perform))|pa(?:(?:cing|n(?:_(?:arpeggio|bar(?:(?:_stub)?)|stem)|ner_(?:break_forbid|tracking)))_engrav)|t(?:a(?:ff_(?:collecting_engrav|highlight_engrav|perform|symbol_engrav)|nza_number_(?:(?:(?:align_)?)engrav))|em_engrav)|ystem_start_delimiter_engrav)e)|T(?:ab_(?:(?:note_heads|staff_symbol|tie_follow)_engrave)|e(?:(?:mpo_perform|xt_(?:(?:(?:(?:mark|spanner)_)?)engrav))e)|i(?:e_(?:(?:engrav|perform)e)|m(?:e_signature_(?:(?:engrav|perform)e)|ing_translato))|(?:rill_spanner|uplet|weak)_engrave)|V(?:(?:aticana_ligature|ertical_align|olta)_engrave))r)$")
)

(
  (symbol) @identifier.core.property.context
  (#match? @identifier.core.property.context "^(a(?:DueText|ccidentalGrouping|dditional(?:BassStrings|PitchPrefix)|l(?:ign(?:(?:Above|Below)Context)|ter(?:ationGlyphs|native(?:Number(?:(?:ingStyle)?)|Restores)))|ssociatedVoice(?:(?:Context|Type)?)|uto(?:Accidentals|Beam(?:Check|ing)|Cautionaries))|b(?:a(?:r(?:Check(?:LastFail|Synchronize)|ExtraVelocity|Number(?:Formatter|Visibility))|seMoment)|ea(?:m(?:Exceptions|HalfMeasure|MelismaBusy)|t(?:ExtraVelocity|Structure))|reathMark(?:Definitions|Type)|usyGrobs)|c(?:aesuraType(?:(?:Transform)?)|enterBarNumbers|hord(?:Changes|N(?:ame(?:Exceptions|Function|(?:LowercaseMin|Separat)or)|oteNamer)|(?:PrefixSpac|RootNam)er)|lef(?:Glyph|Position|Transposition(?:(?:Formatter|Style)?))|o(?:daMark(?:Count|Formatter)|mpletion(?:Busy|Factor|Unit)|(?:nnectArpeggio|untPercentRepeat)s)|re(?:ate(?:KeyOnClefChange|Spacing)|scendo(?:Spanner|Text))|u(?:eClef(?:Glyph|Position|Transposition(?:(?:Formatter|Style)?))|rrent(?:Bar(?:Line|Number)|C(?:hord(?:Cause|Text)|ommandColumn)|MusicalColumn|(?:Performance|Rehearsal)MarkEvent)))|d(?:alSegnoTextFormatter|e(?:crescendo(?:Spanner|Text)|faultStrings)|ouble(?:Repeat(?:(?:(?:Segno)?)BarType)|Slurs)|rum(?:(?:Pitch|Style)Table)|ynamicAbsoluteVolumeFunction)|e(?:nd(?:AtSkip|Repeat(?:(?:(?:Segno)?)BarType))|x(?:plicit(?:(?:C(?:(?:(?:ueC)?)lef)|KeySignature)Visibility)|t(?:endersOverRests|raNatural)))|f(?:i(?:guredBass(?:AlterationDirection|CenterContinuations|Formatter|LargeNumberAlignment|Plus(?:Direction|StrokedAlist))|n(?:al(?:FineTextVisibility|izations)|e(?:BarType|S(?:(?:(?:tartRepeatS)?)egnoBarType)|Text)|geringOrientations)|rstClef)|o(?:llowVoice|ntSize|r(?:bidBreak(?:(?:BetweenBarLines)?)|ce(?:Break|Clef)))|retLabels)|g(?:lissandoMap|r(?:aceSettings|idInterval))|h(?:a(?:ndleNegativeFrets|rmonic(?:(?:Accidental|Dot)s)|s(?:AxisGroup|StaffSpacing))|ighStringOne)|i(?:gnore(?:Bar(?:(?:(?:Number)?)Checks)|FiguredBassRest|Melismata)|mplicitBassFigures|n(?:cludeGraceNotes|itialTimeSignatureVisibility|strument(?:CueName|Equalizer|Name|Transposition)|ternalBarNumber))|ke(?:epAliveInterfaces|yAlteration(?:Order|s))|l(?:ast(?:Chord|KeyAlterations)|ocalAlterations|yric(?:MelismaAlignment|RepeatCountFormatter))|m(?:a(?:gnifyStaffValue|jorSevenSymbol|ximumFretStretch)|e(?:asure(?:BarType|Length|Position|StartNow)|lismaBusy(?:(?:Properties)?)|tronomeMarkFormatter)|i(?:d(?:dleC(?:C(?:(?:lef|ue)Position)|Offset|Position)|i(?:Balance|Ch(?:annelMapping|orusLevel)|Expression|Instrument|M(?:aximumVolume|ergeUnisons|inimumVolume)|PanPosition|ReverbLevel|SkipOffset))|n(?:imum(?:Fret|PageTurnLength|RepeatLengthForPageTurn)|orChordModifier)))|n(?:o(?:ChordSymbol|te(?:Name(?:Function|Separator)|ToFretFunction))|ullAccidentals)|o(?:ttava(?:StartNow|tion(?:(?:Markups)?))|utput)|p(?:art(?:Combine(?:Forced|TextsOnNote)|ialBusy)|edal(?:S(?:ostenutoSt(?:rings|yle)|ustainSt(?:rings|yle))|UnaCordaSt(?:rings|yle))|r(?:edefinedDiagramTable|int(?:AccidentalNames|KeyCancellation|NotesLanguage|(?:OctaveName|PartCombineText)s)|oportionalNotationDuration))|quoted(?:(?:(?:Cue)?)EventTypes)|r(?:e(?:hearsalMark(?:(?:Formatter)?)|peatCo(?:mmands|untVisibility)|st(?:CompletionBusy|NumberThreshold|rainOpenStrings))|ootSystem)|s(?:criptDefinitions|e(?:archForVoice|ctionBarType|gno(?:BarType|Mark(?:Count|Formatter)|Style))|h(?:apeNoteStyles|ort(?:(?:Instrument|Vocal)Name))|kip(?:Bars|Typesetting)|l(?:ashChordSeparator|urMelismaBusy)|olo(?:(?:(?:II)?)Text)|quashedPosition|t(?:a(?:ffLineLayoutFunction|nza|rt(?:At(?:NoteColumn|Skip)|Repeat(?:(?:(?:Segno)?)BarType))|vesFound)|em(?:(?:Lef|Righ)tBeamCount)|r(?:i(?:ctBeatBeaming|ng(?:FretFingerList|NumberOrientations|OneTopmost|Tunings))|okeFingerOrientations))|u(?:bdivideBeams|ggestAccidentals|pportNonIntegerFret|spend(?:MelodyDecisions|RestMerging))|ystemStartDelimiter(?:(?:Hierarchy)?))|t(?:ab(?:StaffLineLayoutFunction|latureFormat)|empo(?:(?:HideNo|WholesPerMinu)te)|i(?:e(?:MelismaBusy|WaitForNote)|m(?:eSignature(?:Fraction|Settings)|ing))|o(?:nic|pLevelAlignment)|uplet(?:FullLength(?:(?:Note)?)|SpannerDuration))|u(?:nderlyingRepeatBarType|seBassFigureExtenders)|vo(?:calName|ltaSpannerDuration)|whichBar)$")
)

(
  (
    (escaped_word) @identifier.core.function
    (#match? @identifier.core.function "^\\\\tweak$")
  )
  .
  (
    (symbol) @identifier.core.property.graphical_object
    (#match? @identifier.core.property.graphical_object "^(X\-(?:a(?:lign\-on\-main\-noteheads|ttachment)|common|extent|offset|positions)|Y\-(?:attachment|common|(?:exten|offse)t)|a(?:ccidental\-grob(?:(?:s)?)|d(?:d\-(?:cauda|join|stem(?:(?:\-support)?))|jacent\-(?:(?:pure\-height|spanner)s))|fter\-line\-breaking|l(?:ign\-dir|l(?:\-elements|ow\-(?:loose\-spacing|span\-bar))|teration(?:(?:\-(?:(?:(?:glyph\-name\-)?)alist))?))|nnotation(?:(?:\-(?:balloon|line))?)|r(?:peggio\-direction|row\-(?:(?:leng|wid)th))|scendens|u(?:ctum|to(?:\-knee\-gap|matically\-numbered))|v(?:erage\-spacing\-wishes|oid\-(?:note\-head|s(?:cripts|lur)))|x(?:es|is\-group\-parent\-(?:[XY])))|b(?:a(?:r(?:\-extent|s)|se(?:\-shortest\-duration|line\-skip))|e(?:am(?:(?:\-(?:segments|thickness|width)|ed\-stem\-shorten|ing|let\-(?:default\-length|max\-length\-proportion))?)|fore\-line\-breaking|gin\-of\-line\-visible|nd\-me|tween\-cols|zier)|ound(?:\-(?:alignment\-interfaces|details|p(?:adding|refatory\-paddings))|ed\-by\-me)|r(?:acket(?:(?:\-(?:flare|text|visibility))?)|eak(?:\-(?:align(?:\-(?:anchor(?:(?:\-alignment)?)|orders|symbol(?:(?:s)?))|ment)|overshoot|visibility)|able)|oken\-bound\-padding))|c(?:0\-position|a(?:use|vum)|hord\-(?:dots\-limit|names)|ircled\-tip|l(?:(?:ef\-alignment|ip\-edge)s)|o(?:l(?:l(?:apse\-height|ision\-(?:interfaces|voice\-only))|or|umns)|mmon\-shortest\-duration|n(?:c(?:(?:avenes|urrent\-hairpin)s)|ditional\-elements|nect\-to\-neighbor|t(?:ext\-info|rol\-points))|unt\-from|vered\-grobs)|ross\-staff)|d(?:a(?:mping|sh(?:\-(?:definition|fraction|period)|ed\-edge))|e(?:fault\-(?:direction|staff\-staff\-spacing)|lta\-position|minutum|(?:scenden|tail)s)|i(?:git\-names|rection(?:(?:\-source)?)|splay\-cautionary)|o(?:t(?:(?:\-(?:count|negative\-kern|placement\-list|stencil)|s)?)|uble\-stem\-separation)|uration\-log)|e(?:ccentricity|dge\-(?:(?:heigh|tex)t)|lements|n(?:(?:compass\-objec|dpoint\-alignmen)ts)|x(?:pand\-limit|tr(?:a\-(?:dy|offset|spacing\-(?:height|width))|oversion)))|f(?:a\-(?:merge\-direction|styles)|i(?:gures|lled)|l(?:a(?:g(?:(?:\-(?:count|style))?)|t\-positions)|exa\-(?:height|interval|width))|o(?:nt(?:(?:\-(?:encoding|f(?:amily|eatures)|name|s(?:eries|(?:hap|iz)e)))?)|otnote(?:(?:\-(?:music|stencil|text)|s\-(?:(?:after|before)\-line\-breaking))?)|rce(?:\-hshift|d(?:(?:\-spacing)?)))|r(?:action|e(?:nch\-beaming(?:(?:\-stem\-adjustment)?)|t\-diagram\-details))|ull\-(?:length\-(?:padding|to\-extent)|(?:measure\-extra\-spac|size\-chang)e))|g(?:ap(?:(?:\-count)?)|l(?:issando\-(?:index|skip)|yph(?:(?:\-(?:left|name|right))?))|r(?:a(?:ce\-spacing|phical)|ow\-direction))|h(?:a(?:ir\-thickness|rp\-pedal\-details|s\-span\-bar)|e(?:ad(?:\-(?:direction|width)|s)|ight(?:(?:\-limit)?))|ide\-tied\-accidental\-after\-break|orizon(?:\-padding|tal\-s(?:hift|kylines)))|i(?:d(?:(?:eal\-distances)?)|gnore\-(?:ambitus|collision)|mp(?:licit|ortant\-column\-ranks)|n(?:\-note\-(?:direction|padding|stencil)|clinatum|dex|(?:spect\-quant|terface)s)|tems\-worth\-living)|k(?:e(?:ep\-(?:alive\-with|inside\-line)|rn)|nee(?:(?:\-(?:spacing\-correction|to\-beam))?))|l(?:a(?:bels|yer)|e(?:ast\-squares\-dy|dger\-(?:extra|line\-thickness|positions(?:(?:\-function)?))|ft\-(?:bound\-info|items|n(?:eighbor|umber\-text)|padding)|ngth(?:(?:\-fraction)?))|i(?:gature\-flexa|ne(?:\-(?:break\-(?:pe(?:nalty|rmission)|system\-details)|count|(?:position|thicknes)s)|a))|ong\-text)|m(?:a(?:in\-extent|ke\-dead\-when|x(?:\-(?:beam\-connect|symbol\-separation)|imum\-gap)|ybe\-loose)|e(?:asure\-(?:count|division(?:(?:\-(?:(?:chord\-placement|lines)\-alist))?)|length)|lody\-spanner|rge\-differently\-(?:(?:dott|head)ed)|ta)|inimum\-(?:X\-extent|Y\-extent|distance(?:(?:s)?)|length(?:(?:\-(?:after\-break|fraction))?)|space|translations\-alist))|n(?:e(?:ighbors|utral\-(?:(?:direc|posi)tion)|xt)|o(?:\-(?:ledgers|stem\-extend)|n(?:\-(?:break\-align\-symbols|default|musical)|staff\-(?:(?:non|(?:(?:un)?)related)staff\-spacing))|rmal(?:(?:\-stem|ized\-endpoint)s)|te\-(?:col(?:lision(?:(?:\-threshold)?)|umns)|head(?:(?:s)?)|names))|umber(?:\-(?:range\-separator|type)|ing\-assertion\-function))|o(?:riscus|ut(?:put\-attributes|side\-staff\-(?:horizontal\-padding|p(?:adding|lacement\-directive|riority))))|p(?:a(?:cked\-spacing|dding(?:(?:\-pairs)?)|ge\-(?:break\-pe(?:nalty|rmission)|number|turn\-pe(?:nalty|rmission))|rent(?:\-alignment\-(?:[XY])|hesi(?:s\-(?:friends|id)|zed)))|e(?:dal\-text|s\-or\-flexa)|osition(?:ing\-done|s)|r(?:ef(?:(?:er\-dotted\-righ|ix\-se)t)|imitive|otrusion)|ure\-(?:Y\-(?:common|extent|offset\-in\-progress)|relevant\-(?:(?:grob|item|spanner)s)))|qu(?:antize(?:\-position|d\-positions)|ilisma)|r(?:a(?:nk\-on\-page|tio)|e(?:move\-(?:empty|first|layer)|placement\-alist|st(?:(?:\-collision|ore\-first|s)?))|hythmic\-location|ight\-(?:bound\-info|items|n(?:eighbor|umber\-text)|padding)|o(?:tation|und(?:\-up\-(?:exceptions|to\-longer\-rest)|ed)))|s(?:ame\-direction\-correction|cript(?:\-(?:column|priority|stencil)|s)|e(?:gno\-kern|lf\-alignment\-(?:[XY]))|h(?:a(?:pe|rp\-positions)|o(?:rte(?:n(?:(?:\-pair)?)|st\-(?:duration\-space|(?:playing|starter)\-duration))|w\-(?:(?:control\-point|(?:horizont|vertic)al\-skyline)s)))|i(?:de\-(?:axis|relative\-direction|support\-elements)|ze)|k(?:(?:ip\-quant|yline\-(?:(?:horizont|vertic)al\-padd))ing)|l(?:ash\-negative\-kern|ope|ur(?:(?:\-padding)?))|nap\-radius|p(?:a(?:c(?:e\-(?:alist|increment|to\-barline)|ing(?:(?:\-(?:increment|pair|wishes))?))|n(?:\-start|ner\-(?:broken|id|placement)))|rings\-and\-rods)|t(?:a(?:cking\-dir|ff(?:\-(?:affinity|grouper|p(?:adding|osition)|s(?:pace|taff\-spacing|ymbol))|group\-staff\-spacing))|e(?:m(?:(?:\-(?:attachment|begin\-position|info|spacing\-correction)|let\-length|s)?)|ncil(?:(?:s)?))|icky\-host|r(?:ict\-(?:(?:grac|not)e\-spacing)|o(?:ke\-style|pha))|yle)|ystem\-Y\-offset)|t(?:ext(?:(?:\-(?:alignment\-(?:[XY])|direction))?)|hick(?:(?:(?:\-thick)?)ness)|ie(?:(?:\-configuration|s)?)|o(?:\-barline|ward\-stem\-shift(?:(?:\-in\-column)?))|r(?:ansparent|emolo\-flag)|uplet(?:\-(?:number|s(?:lur|tart))|s))|u(?:niform\-stretching|s(?:able\-duration\-logs|e(?:\-skylines|d)))|v(?:ertical\-(?:alignment|skyline(?:(?:(?:\-element)?)s))|i(?:rga|sible\-over\-note\-heads)|oiced\-position)|w(?:h(?:en|iteout(?:(?:\-style)?))|id(?:ened\-extent|th)|o(?:odwind\-diagram\-details|rd\-space))|x\-offset|zigzag\-(?:(?:leng|wid)th))$")
  )
)

(property_expression
  (
    (symbol) @identifier.core.property.graphical_object
    (#match? @identifier.core.property.graphical_object "^(X\-(?:a(?:lign\-on\-main\-noteheads|ttachment)|common|extent|offset|positions)|Y\-(?:attachment|common|(?:exten|offse)t)|a(?:ccidental\-grob(?:(?:s)?)|d(?:d\-(?:cauda|join|stem(?:(?:\-support)?))|jacent\-(?:(?:pure\-height|spanner)s))|fter\-line\-breaking|l(?:ign\-dir|l(?:\-elements|ow\-(?:loose\-spacing|span\-bar))|teration(?:(?:\-(?:(?:(?:glyph\-name\-)?)alist))?))|nnotation(?:(?:\-(?:balloon|line))?)|r(?:peggio\-direction|row\-(?:(?:leng|wid)th))|scendens|u(?:ctum|to(?:\-knee\-gap|matically\-numbered))|v(?:erage\-spacing\-wishes|oid\-(?:note\-head|s(?:cripts|lur)))|x(?:es|is\-group\-parent\-(?:[XY])))|b(?:a(?:r(?:\-extent|s)|se(?:\-shortest\-duration|line\-skip))|e(?:am(?:(?:\-(?:segments|thickness|width)|ed\-stem\-shorten|ing|let\-(?:default\-length|max\-length\-proportion))?)|fore\-line\-breaking|gin\-of\-line\-visible|nd\-me|tween\-cols|zier)|ound(?:\-(?:alignment\-interfaces|details|p(?:adding|refatory\-paddings))|ed\-by\-me)|r(?:acket(?:(?:\-(?:flare|text|visibility))?)|eak(?:\-(?:align(?:\-(?:anchor(?:(?:\-alignment)?)|orders|symbol(?:(?:s)?))|ment)|overshoot|visibility)|able)|oken\-bound\-padding))|c(?:0\-position|a(?:use|vum)|hord\-(?:dots\-limit|names)|ircled\-tip|l(?:(?:ef\-alignment|ip\-edge)s)|o(?:l(?:l(?:apse\-height|ision\-(?:interfaces|voice\-only))|or|umns)|mmon\-shortest\-duration|n(?:c(?:(?:avenes|urrent\-hairpin)s)|ditional\-elements|nect\-to\-neighbor|t(?:ext\-info|rol\-points))|unt\-from|vered\-grobs)|ross\-staff)|d(?:a(?:mping|sh(?:\-(?:definition|fraction|period)|ed\-edge))|e(?:fault\-(?:direction|staff\-staff\-spacing)|lta\-position|minutum|(?:scenden|tail)s)|i(?:git\-names|rection(?:(?:\-source)?)|splay\-cautionary)|o(?:t(?:(?:\-(?:count|negative\-kern|placement\-list|stencil)|s)?)|uble\-stem\-separation)|uration\-log)|e(?:ccentricity|dge\-(?:(?:heigh|tex)t)|lements|n(?:(?:compass\-objec|dpoint\-alignmen)ts)|x(?:pand\-limit|tr(?:a\-(?:dy|offset|spacing\-(?:height|width))|oversion)))|f(?:a\-(?:merge\-direction|styles)|i(?:gures|lled)|l(?:a(?:g(?:(?:\-(?:count|style))?)|t\-positions)|exa\-(?:height|interval|width))|o(?:nt(?:(?:\-(?:encoding|f(?:amily|eatures)|name|s(?:eries|(?:hap|iz)e)))?)|otnote(?:(?:\-(?:music|stencil|text)|s\-(?:(?:after|before)\-line\-breaking))?)|rce(?:\-hshift|d(?:(?:\-spacing)?)))|r(?:action|e(?:nch\-beaming(?:(?:\-stem\-adjustment)?)|t\-diagram\-details))|ull\-(?:length\-(?:padding|to\-extent)|(?:measure\-extra\-spac|size\-chang)e))|g(?:ap(?:(?:\-count)?)|l(?:issando\-(?:index|skip)|yph(?:(?:\-(?:left|name|right))?))|r(?:a(?:ce\-spacing|phical)|ow\-direction))|h(?:a(?:ir\-thickness|rp\-pedal\-details|s\-span\-bar)|e(?:ad(?:\-(?:direction|width)|s)|ight(?:(?:\-limit)?))|ide\-tied\-accidental\-after\-break|orizon(?:\-padding|tal\-s(?:hift|kylines)))|i(?:d(?:(?:eal\-distances)?)|gnore\-(?:ambitus|collision)|mp(?:licit|ortant\-column\-ranks)|n(?:\-note\-(?:direction|padding|stencil)|clinatum|dex|(?:spect\-quant|terface)s)|tems\-worth\-living)|k(?:e(?:ep\-(?:alive\-with|inside\-line)|rn)|nee(?:(?:\-(?:spacing\-correction|to\-beam))?))|l(?:a(?:bels|yer)|e(?:ast\-squares\-dy|dger\-(?:extra|line\-thickness|positions(?:(?:\-function)?))|ft\-(?:bound\-info|items|n(?:eighbor|umber\-text)|padding)|ngth(?:(?:\-fraction)?))|i(?:gature\-flexa|ne(?:\-(?:break\-(?:pe(?:nalty|rmission)|system\-details)|count|(?:position|thicknes)s)|a))|ong\-text)|m(?:a(?:in\-extent|ke\-dead\-when|x(?:\-(?:beam\-connect|symbol\-separation)|imum\-gap)|ybe\-loose)|e(?:asure\-(?:count|division(?:(?:\-(?:(?:chord\-placement|lines)\-alist))?)|length)|lody\-spanner|rge\-differently\-(?:(?:dott|head)ed)|ta)|inimum\-(?:X\-extent|Y\-extent|distance(?:(?:s)?)|length(?:(?:\-(?:after\-break|fraction))?)|space|translations\-alist))|n(?:e(?:ighbors|utral\-(?:(?:direc|posi)tion)|xt)|o(?:\-(?:ledgers|stem\-extend)|n(?:\-(?:break\-align\-symbols|default|musical)|staff\-(?:(?:non|(?:(?:un)?)related)staff\-spacing))|rmal(?:(?:\-stem|ized\-endpoint)s)|te\-(?:col(?:lision(?:(?:\-threshold)?)|umns)|head(?:(?:s)?)|names))|umber(?:\-(?:range\-separator|type)|ing\-assertion\-function))|o(?:riscus|ut(?:put\-attributes|side\-staff\-(?:horizontal\-padding|p(?:adding|lacement\-directive|riority))))|p(?:a(?:cked\-spacing|dding(?:(?:\-pairs)?)|ge\-(?:break\-pe(?:nalty|rmission)|number|turn\-pe(?:nalty|rmission))|rent(?:\-alignment\-(?:[XY])|hesi(?:s\-(?:friends|id)|zed)))|e(?:dal\-text|s\-or\-flexa)|osition(?:ing\-done|s)|r(?:ef(?:(?:er\-dotted\-righ|ix\-se)t)|imitive|otrusion)|ure\-(?:Y\-(?:common|extent|offset\-in\-progress)|relevant\-(?:(?:grob|item|spanner)s)))|qu(?:antize(?:\-position|d\-positions)|ilisma)|r(?:a(?:nk\-on\-page|tio)|e(?:move\-(?:empty|first|layer)|placement\-alist|st(?:(?:\-collision|ore\-first|s)?))|hythmic\-location|ight\-(?:bound\-info|items|n(?:eighbor|umber\-text)|padding)|o(?:tation|und(?:\-up\-(?:exceptions|to\-longer\-rest)|ed)))|s(?:ame\-direction\-correction|cript(?:\-(?:column|priority|stencil)|s)|e(?:gno\-kern|lf\-alignment\-(?:[XY]))|h(?:a(?:pe|rp\-positions)|o(?:rte(?:n(?:(?:\-pair)?)|st\-(?:duration\-space|(?:playing|starter)\-duration))|w\-(?:(?:control\-point|(?:horizont|vertic)al\-skyline)s)))|i(?:de\-(?:axis|relative\-direction|support\-elements)|ze)|k(?:(?:ip\-quant|yline\-(?:(?:horizont|vertic)al\-padd))ing)|l(?:ash\-negative\-kern|ope|ur(?:(?:\-padding)?))|nap\-radius|p(?:a(?:c(?:e\-(?:alist|increment|to\-barline)|ing(?:(?:\-(?:increment|pair|wishes))?))|n(?:\-start|ner\-(?:broken|id|placement)))|rings\-and\-rods)|t(?:a(?:cking\-dir|ff(?:\-(?:affinity|grouper|p(?:adding|osition)|s(?:pace|taff\-spacing|ymbol))|group\-staff\-spacing))|e(?:m(?:(?:\-(?:attachment|begin\-position|info|spacing\-correction)|let\-length|s)?)|ncil(?:(?:s)?))|icky\-host|r(?:ict\-(?:(?:grac|not)e\-spacing)|o(?:ke\-style|pha))|yle)|ystem\-Y\-offset)|t(?:ext(?:(?:\-(?:alignment\-(?:[XY])|direction))?)|hick(?:(?:(?:\-thick)?)ness)|ie(?:(?:\-configuration|s)?)|o(?:\-barline|ward\-stem\-shift(?:(?:\-in\-column)?))|r(?:ansparent|emolo\-flag)|uplet(?:\-(?:number|s(?:lur|tart))|s))|u(?:niform\-stretching|s(?:able\-duration\-logs|e(?:\-skylines|d)))|v(?:ertical\-(?:alignment|skyline(?:(?:(?:\-element)?)s))|i(?:rga|sible\-over\-note\-heads)|oiced\-position)|w(?:h(?:en|iteout(?:(?:\-style)?))|id(?:ened\-extent|th)|o(?:odwind\-diagram\-details|rd\-space))|x\-offset|zigzag\-(?:(?:leng|wid)th))$")
  )
)

(
  (
    (escaped_word) @identifier.core.function
    (#match? @identifier.core.function "^\\\\clef$")
  )
  .
  (
    (symbol) @identifier.core.constant.clef
    (#match? @identifier.core.constant.clef "^(GG|alto(?:(?:varC)?)|ba(?:ritone(?:(?:var(?:[CF]))?)|ss)|french|hufnagel\-do\-fa|kievan\-do|m(?:e(?:nsural\-(?:[fg])|zzosoprano)|oderntab)|pe(?:rcussion|trucci\-(?:[fg]))|s(?:oprano|ubbass)|t(?:ab|enor(?:(?:G|varC)?)|reble)|v(?:ar(?:C|baritone|percussion)|iolin)|[CFG])$")
  )
)

(
  (
    (escaped_word) @identifier.core.function
    (#match? @identifier.core.function "^\\\\key$")
  )
  .
  (symbol)
  .
  (
    (escaped_word) @identifier.core.constant.scale
    (#match? @identifier.core.constant.scale "^\\\\(aeolian|dorian|ionian|l(?:(?:ocr|yd)ian)|m(?:ajor|i(?:nor|xolydian))|phrygian)$")
  )
)

(
  (
    (escaped_word) @identifier.core.function
    (#match? @identifier.core.function "^\\\\repeat$")
  )
  .
  (
    (symbol) @identifier.core.constant.repeat_type
    (#match? @identifier.core.constant.repeat_type "^(percent|segno|tremolo|unfold|volta)$")
  )
)

(
  (
    (escaped_word) @keyword
    (#match? @keyword "^\\\\paper$")
  )
  .
  (expression_block
    (
      (escaped_word) @identifier.core.constant.unit
      (#match? @identifier.core.constant.unit "^\\\\(cm|in|mm|pt|staff\-space)$")
    )
  )
)

(
  (
    (escaped_word) @keyword
    (#match? @keyword "^\\\\chordmode$")
  )
  .
  (expression_block
    (
      (symbol) @keyword.operator
      (#match? @keyword.operator "^(aug|dim|m(?:(?:aj)?))$")
    )
  )
)

(
  (
    (escaped_word) @identifier.core.function
    (#match? @identifier.core.function "^\\\\language$")
  )
  .
  (
    (symbol) @identifier.core.constant.language
    (#match? @identifier.core.constant.language "^(arabic|catal(?:an|à)|deutsch|e(?:nglish|spa(?:(?:[nñ])ol))|français|italiano|n(?:ederlands|orsk)|portugu(?:(?:[eê])s)|s(?:uomi|venska)|vlaams)$")
  )
)

(
  (
    (escaped_word) @keyword
    (#match? @keyword "^\\\\paper$")
  )
  .
  (expression_block
    (assignment_lhs
      [
        (
          (symbol) @identifier.core.variable
          (#match? @identifier.core.variable "^(auto\-first\-page\-number|b(?:asic\-distance|inding\-offset|lank\-(?:(?:(?:last\-)?)page\-penalty)|o(?:okTitleMarkup|ttom\-margin))|check\-consistency|even(?:(?:Foot|Head)erMarkup)|f(?:irst\-page\-number|ootnote\-separator\-markup)|horizontal\-shift|in(?:dent|ner\-margin)|l(?:ast\-bottom\-spacing|eft\-margin|ine\-width)|m(?:a(?:rkup\-(?:(?:markup|system)\-spacing)|x\-systems\-per\-page)|in(?:(?:\-systems\-per\-pag|imum\-distanc)e))|o(?:dd(?:(?:Foot|Head)erMarkup)|uter\-margin)|p(?:a(?:dding|ge\-(?:breaking(?:(?:\-system\-system\-spacing)?)|count|number\-type|spacing\-weight)|per\-(?:height|width))|rint\-(?:all\-headers|first\-page\-number))|r(?:agged\-(?:bottom|last(?:(?:\-bottom)?)|right)|ight\-margin)|s(?:core(?:\-(?:(?:markup|system)\-spacing)|TitleMarkup)|hort\-indent|tretchability|ystem(?:\-(?:count|s(?:eparator\-markup|ystem\-spacing))|s\-per\-page))|t(?:op\-(?:mar(?:gin|kup\-spacing)|system\-spacing)|wo\-sided))$")
        )

        (property_expression
          (
            (symbol) @identifier.core.variable
            (#match? @identifier.core.variable "^(auto\-first\-page\-number|b(?:asic\-distance|inding\-offset|lank\-(?:(?:(?:last\-)?)page\-penalty)|o(?:okTitleMarkup|ttom\-margin))|check\-consistency|even(?:(?:Foot|Head)erMarkup)|f(?:irst\-page\-number|ootnote\-separator\-markup)|horizontal\-shift|in(?:dent|ner\-margin)|l(?:ast\-bottom\-spacing|eft\-margin|ine\-width)|m(?:a(?:rkup\-(?:(?:markup|system)\-spacing)|x\-systems\-per\-page)|in(?:(?:\-systems\-per\-pag|imum\-distanc)e))|o(?:dd(?:(?:Foot|Head)erMarkup)|uter\-margin)|p(?:a(?:dding|ge\-(?:breaking(?:(?:\-system\-system\-spacing)?)|count|number\-type|spacing\-weight)|per\-(?:height|width))|rint\-(?:all\-headers|first\-page\-number))|r(?:agged\-(?:bottom|last(?:(?:\-bottom)?)|right)|ight\-margin)|s(?:core(?:\-(?:(?:markup|system)\-spacing)|TitleMarkup)|hort\-indent|tretchability|ystem(?:\-(?:count|s(?:eparator\-markup|ystem\-spacing))|s\-per\-page))|t(?:op\-(?:mar(?:gin|kup\-spacing)|system\-spacing)|wo\-sided))$")
          )
        )
      ]
    )
  )
)

(
  (
    (escaped_word) @keyword
    (#match? @keyword "^\\\\paper$")
  )
  .
  (expression_block
    (
      (escaped_word) @identifier.core.variable
      (#match? @identifier.core.variable "^\\\\(auto\-first\-page\-number|b(?:asic\-distance|inding\-offset|lank\-(?:(?:(?:last\-)?)page\-penalty)|o(?:okTitleMarkup|ttom\-margin))|check\-consistency|even(?:(?:Foot|Head)erMarkup)|f(?:irst\-page\-number|ootnote\-separator\-markup)|horizontal\-shift|in(?:dent|ner\-margin)|l(?:ast\-bottom\-spacing|eft\-margin|ine\-width)|m(?:a(?:rkup\-(?:(?:markup|system)\-spacing)|x\-systems\-per\-page)|in(?:(?:\-systems\-per\-pag|imum\-distanc)e))|o(?:dd(?:(?:Foot|Head)erMarkup)|uter\-margin)|p(?:a(?:dding|ge\-(?:breaking(?:(?:\-system\-system\-spacing)?)|count|number\-type|spacing\-weight)|per\-(?:height|width))|rint\-(?:all\-headers|first\-page\-number))|r(?:agged\-(?:bottom|last(?:(?:\-bottom)?)|right)|ight\-margin)|s(?:core(?:\-(?:(?:markup|system)\-spacing)|TitleMarkup)|hort\-indent|tretchability|ystem(?:\-(?:count|s(?:eparator\-markup|ystem\-spacing))|s\-per\-page))|t(?:op\-(?:mar(?:gin|kup\-spacing)|system\-spacing)|wo\-sided))$")
    )
  )
)

(
  (
    (escaped_word) @keyword
    (#match? @keyword "^\\\\header$")
  )
  .
  (expression_block
    (assignment_lhs
      (symbol) @identifier.core.variable
      (#match? @identifier.core.variable "^(arranger|co(?:mposer|pyright)|d(?:edication|octitle)|instrument|lsrtags|meter|opus|p(?:iece|oet)|sub(?:(?:(?:sub)?)title)|t(?:agline|exidoc|itle))$")
    )
  )
)

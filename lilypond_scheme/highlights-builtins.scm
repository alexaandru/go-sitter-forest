(
  (scheme_symbol) @keyword
  (#match? @keyword "^(\\*unspecified\\*|\\.\\.\\.|=>|@@|a(?:dd-to-load-path|nd)|begin(?:(?:-deprecated)?)|c(?:ase(?:(?:-lambda(?:(?:\\*)?))?)|ond(?:(?:-expand)?)|urrent-(?:filename|source-location))|d(?:e(?:bug-set!|f(?:ine(?:(?:\\*|-(?:inlinable|library|m(?:acro|odule)|o(?:(?:n|ption-interfa)ce)|p(?:rivate|ublic)|record-type|syntax(?:(?:-(?:parameter|rule))?)|values))?)|macro(?:(?:-public)?))|lay)|o)|e(?:lse|val-when|xport(?:(?:!|-syntax)?))|false-if-exception|i(?:dentifier-syntax|f|mport|nclude(?:(?:-(?:ci|from-path|library-declarations))?))|l(?:ambda(?:(?:\\*)?)|et(?:(?:\\*(?:(?:-values)?)|-(?:syntax|values)|rec(?:(?:\\*|-syntax)?))?)|ibrary|oad)|match(?:(?:-l(?:ambda(?:(?:\\*)?)|et(?:(?:\\*|rec)?)))?)|or|p(?:arameterize|rint-set!)|qu(?:asi(?:quote|syntax)|ote(?:(?:-syntax)?))|re(?:-export(?:(?:-syntax)?)|ad-set!|quire-extension)|s(?:et!|tart-stack|yntax(?:(?:-(?:case|error|parameterize|rules))?))|u(?:n(?:less|quote(?:(?:-splicing)?)|syntax(?:(?:-splicing)?))|se-modules)|w(?:h(?:en|ile)|ith-(?:ellipsis|fluids|syntax))|[@_λ])$")
)
(
  (scheme_symbol) @identifier.core.function
  (#match? @identifier.core.function "^(\\$sc-dispatch|%(?:char-set-dump|g(?:et-(?:pre-modules-obarray|stack-size)|lobal-site-dir)|init-r(?:(?:delim|w)-builtins)|l(?:ibrary-dir|oad-(?:announce|hook))|make-void-port|p(?:ackage-data-dir|ort-property|rint-module)|resolve-variable|s(?:e(?:arch-load-path|t-port-property!)|ite-(?:(?:(?:ccache-)?)dir)|t(?:art-stack|ring-dump)|ymbol-dump)|warn-auto-compilation-enabled)|->(?:bool|char-set)|1(?:[+-])|a(?:b(?:ort-to-prompt(?:(?:\\*)?)|s(?:(?:olute-file-name\\?)?))|c(?:ce(?:pt|ss\\?)|o(?:ns|s(?:(?:h)?)))|d(?:d(?:-hook!|rinfo:(?:addr|canonname|f(?:am|lags)|protocol|socktype))|just-port-revealed!)|l(?:arm|ist-(?:co(?:ns|py)|delete(?:(?:!)?))|locate-struct)|n(?:d(?:-map|=>)|gle|y)|pp(?:end(?:(?:!|-(?:map(?:(?:!)?)|reverse(?:(?:!)?)))?)|ly)|rray(?:-(?:>list|c(?:ell-(?:ref|set!)|o(?:ntents|py(?:(?:(?:-in-order)?)!)))|dimensions|equal\\?|f(?:ill!|or-each)|in(?:-bounds\\?|dex-map!)|length|map(?:(?:(?:-in-order)?)!)|r(?:ank|ef)|s(?:et!|hape|lice(?:(?:-for-each(?:(?:-in-order)?))?))|type(?:(?:-code)?))|\\?)|s(?:h|in(?:(?:h)?)|s(?:ert-load-verbosity|oc(?:(?:-(?:re(?:f|move!)|set!))?)|q-(?:re(?:f|move!)|set!)|v-(?:re(?:f|move!)|set!)|[qv]))|tan(?:(?:h)?)|utoload-(?:done(?:!|-or-in-progress\\?)|in-progress!))|b(?:a(?:cktrace|sename|tch-mode\\?)|eautify-user-module!|i(?:nd(?:(?:-textdomain-codeset|textdomain)?)|t(?:-(?:count(?:(?:\\*)?)|extract|invert!|position|set\\*!)|vector(?:(?:-(?:>list|bit-(?:(?:clear|set)\\?)|c(?:lear-(?:(?:all-bits|bit(?:(?:s)?))!)|ount(?:(?:-bits)?))|f(?:(?:ill|lip-all-bits)!)|length|position|ref|set(?:(?:(?:-(?:all-bits|bit(?:(?:s)?)))?)!))|\\?)?)))|o(?:(?:olean|und-identifier=)\\?)|reak(?:(?:!)?))|c(?:a(?:a(?:(?:(?:a(?:[ad])|d(?:[ad])|[ad])?)r)|d(?:(?:(?:a(?:[ad])|d(?:[ad])|[ad])?)r)|ll(?:-with-(?:blocked-asyncs|current-continuation|deferred-observers|in(?:clude-port|put-(?:file|string))|module-autoload-lock|output-(?:file|string)|p(?:(?:or|romp)t)|(?:unblocked-async|value)s)|/cc)|nonicalize-path|r(?:(?:\\+cdr)?)|tch)|d(?:(?:(?:a(?:a(?:[ad])|d(?:[ad])|[ad])|d(?:a(?:[ad])|d(?:[ad])|[ad])|[ad])?)r)|e(?:iling(?:(?:-(?:quotient|remainder)|/)?)|ntered(?:-(?:quotient|remainder)|/))|h(?:ar(?:-(?:>integer|alphabetic\\?|ci(?:(?:(?:[<>])=|[<=>])\\?)|downcase|general-category|is-both\\?|lower-case\\?|numeric\\?|ready\\?|set(?:(?:-(?:>(?:list|string)|a(?:djoin(?:(?:!)?)|ny)|c(?:o(?:mplement(?:(?:!)?)|ntains\\?|py|unt)|ursor(?:(?:-next)?))|d(?:elete(?:(?:!)?)|iff(?:\\+intersection(?:(?:!)?)|erence(?:(?:!)?)))|every|f(?:ilter(?:(?:!)?)|o(?:ld|r-each))|hash|intersection(?:(?:!)?)|map|ref|size|un(?:fold(?:(?:!)?)|ion(?:(?:!)?))|xor(?:(?:!)?))|<=|[=?])?)|titlecase|up(?:case|per-case\\?)|whitespace\\?)|(?:(?:(?:[<>])=|[<=>])?)\\?)|dir|mod|own|root)|ircular-list(?:(?:\\?)?)|lose(?:(?:-(?:fdes|(?:(?:(?:in|out)put-)?)port)|dir)?)|o(?:m(?:mand-line|p(?:lex\\?|ose))|n(?:catenate(?:(?:!)?)|d-expand-provide|nect|s(?:(?:-source|[*t])?)|vert-assignment)|py-(?:(?:fil|random-stat|tre)e)|s(?:(?:h)?)|unt)|rypt|termid|urrent-(?:dynamic-state|error-port|input-port|l(?:anguage|oad-port)|module|output-port|time|warning-port))|d(?:atum->(?:random-state|syntax)|e(?:bug-(?:disable|enable|options(?:(?:-interface)?))|f(?:ault-(?:duplicate-binding-(?:handler|procedures)|prompt-tag)|ine(?:!|-module\\*|d\\?))|l(?:ete(?:(?:!|-(?:duplicates(?:(?:!)?)|file)|1!)?)|(?:(?:[qv])1|[qv])!|[qv])|nominator)|i(?:r(?:ectory-stream\\?|name)|splay(?:(?:-(?:application|backtrace|error))?))|o(?:(?:tted-list|ubly-weak-hash-table)\\?)|r(?:ain-input|op(?:(?:-(?:right(?:(?:!)?)|while))?))|up(?:(?:->(?:fdes|(?:(?:in|out)?)port)|2|licate-port)?)|ynamic-(?:call|func|link|object\\?|pointer|state\\?|unlink|wind))|e(?:ffective-version|ighth|n(?:d(?:-of-char-set\\?|(?:gr|host|net|p(?:roto|w)|serv)ent)|sure-batch-mode!|viron)|of-object\\?|q(?:(?:(?:ual|v)?)\\?)|rror|uclidean(?:-(?:quotient|remainder)|/)|v(?:al(?:(?:-string)?)|e(?:n\\?|ry))|x(?:act(?:-(?:>inexact|integer(?:-sqrt|\\?))|\\?)|ception(?:-(?:a(?:ccessor|rgs)|kind|predicate|type\\?)|\\?)|ecl(?:(?:[ep])?)|it|p(?:(?:t)?)))|f(?:32vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|64vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|cntl|d(?:es->(?:inport|outport|ports)|open)|i(?:fth|l(?:e(?:-(?:e(?:ncoding|xists\\?)|is-directory\\?|name-separator\\?|po(?:rt\\?|sition)|set-position)|no)|ter(?:(?:!|-map)?))|n(?:d(?:(?:-tail)?)|ite\\?)|rst)|l(?:o(?:ck|or(?:(?:-(?:quotient|remainder)|/)?))|u(?:id(?:-(?:>parameter|bound\\?|ref(?:(?:\\*)?)|set!|thread-local\\?|unset!)|\\?)|sh-all-ports))|o(?:ld(?:(?:-right)?)|r(?:-each|ce(?:(?:-output)?)|mat)|urth)|r(?:ame(?:-(?:a(?:(?:ddres|rgument)s)|dynamic-link|instruction-pointer|pr(?:evious|ocedure-name)|return-address|s(?:ource|tack-pointer))|\\?)|ee-identifier=\\?)|sync|tell)|g(?:ai-strerror|c(?:(?:-(?:d(?:isable|ump)|enable|run-time|stats)|d)?)|e(?:n(?:erate-temporaries|sym)|t(?:-(?:internal-r(?:(?:eal|un)-time)|output-string|print-state)|a(?:ddrinfo|ffinity)|cwd|e(?:gid|nv|uid)|g(?:id|r(?:(?:ent|gid|nam|oups)?))|host(?:(?:by(?:addr|name)|ent|name)?)|itimer|login|net(?:(?:by(?:addr|name)|ent)?)|p(?:ass|eername|grp|id|pid|r(?:iority|oto(?:(?:byn(?:ame|umber)|ent)?))|w(?:(?:ent|nam|uid)?))|rlimit|s(?:erv(?:(?:by(?:name|port)|ent)?)|id|ock(?:name|opt))|t(?:ext|imeofday)|uid))|mtime|roup:(?:gid|mem|name|passwd))|h(?:ash(?:(?:-(?:c(?:lear!|ount|reate-handle!)|fo(?:ld|r-each(?:(?:-handle)?))|get-handle|map->list|re(?:f|move!)|set!|table\\?)|q-(?:create-handle!|get-handle|re(?:f|move!)|set!)|v-(?:create-handle!|get-handle|re(?:f|move!)|set!)|x-(?:create-handle!|get-handle|re(?:f|move!)|set!)|[qv])?)|o(?:ok(?:-(?:>list|empty\\?)|\\?)|stent:(?:a(?:ddr(?:-list|type)|liases)|length|name)))|i(?:denti(?:fier\\?|ty)|mag-part|n(?:-vicinity|clude-deprecated-features|e(?:t-(?:lnaof|makeaddr|n(?:etof|top)|pton)|xact(?:->exact|\\?))|f(?:(?:\\?)?)|herit-print-state|put-port\\?|stall-r(?:(?:[67])rs!)|te(?:ger(?:-(?:>char|expt|length)|\\?)|raction-environment))|ota|s(?:atty\\?|sue-deprecation-warning))|k(?:eyword(?:-(?:>symbol|like-symbol->keyword)|\\?)|ill|w-arg-ref)|l(?:ast(?:(?:-pair)?)|cm|ength(?:(?:\\+)?)|i(?:nk|st(?:(?:-(?:>(?:array|bitvector|char-set(?:(?:!)?)|f(?:(?:32|64)vector)|s(?:16vector|32vector|64vector|8vector|tring|ymbol)|typed-array|(?:(?:u(?:16|32|64|8))?)vector)|c(?:dr-(?:ref|set!)|opy)|head|index|ref|set!|ta(?:bulate|il))|en|[=?])?))|o(?:ad-(?:compiled|extension|from-path|in-vicinity|user-init)|cal(?:-(?:define(?:(?:-module)?)|re(?:f(?:(?:-module)?)|move)|set!)|time)|g(?:(?:10|and|bit\\?|count|ior|not|test|xor)?)|okup-duplicates-handlers)|s(?:et(?:-(?:adjoin|diff(?:\\+intersection(?:(?:!)?)|erence(?:(?:!)?))|intersection(?:(?:!)?)|union(?:(?:!)?)|xor(?:(?:!)?))|(?:(?:<)?)=)|tat))|m(?:a(?:cro(?:-(?:binding|name|t(?:ransformer|ype))|\\?|expand(?:(?:ed\\?)?))|gnitude|jor-version|ke-(?:a(?:rray|utoload-interface)|bitvector|doubly-weak-hash-table|exception(?:(?:-(?:from-throw|type))?)|f(?:32vector|64vector|luid|resh-user-module)|g(?:eneralized-vector|uardian)|h(?:ash-table|ook)|list|m(?:odule(?:(?:s-in)?)|utable-parameter)|object-property|p(?:arameter|olar|ro(?:cedure-with-setter|m(?:ise|pt-tag)))|re(?:c(?:ord-type|tangular)|gexp)|s(?:16vector|32vector|64vector|8vector|hared-array|o(?:cket-address|ft-port)|rfi-4-vector|t(?:ack|r(?:ing|uct(?:-layout|/(?:no-tail|simple))))|y(?:mbol|ntax-transformer))|t(?:hread-local-fluid|yped-array)|u(?:16vector|32vector|64vector|8vector|n(?:bound-fluid|defined-variable))|v(?:ariable(?:(?:-transformer)?)|ector|table)|weak-(?:(?:key|value)-hash-table))|p(?:!|-in-order)|[px])|e(?:m(?:ber|oize(?:-expression|d-typecode)|[qv])|rge(?:(?:!)?))|i(?:(?:(?:(?:cro|nor)-versio)?)n)|k(?:d(?:ir|temp)|nod|stemp(?:(?:!)?)|time)|o(?:dul(?:e(?:-(?:a(?:(?:d|utoloa)d!)|b(?:inder|ound\\?)|c(?:all-observers|lear!|onstructor)|d(?:e(?:clarative\\?|f(?:er-observers|ine(?:!|-submodule!|d\\?)))|uplicates-handlers)|e(?:(?:nsure-local-variable|xport(?:(?:-all)?))!)|f(?:ilename|or-each)|gen(?:erate-unique-id!|sym)|import-(?:interface|obarray)|kind|local(?:-variable|ly-bound\\?)|m(?:a(?:ke-local-var!|p)|odified)|n(?:ame|ext-unique-id)|ob(?:array(?:(?:-(?:get-handle|re(?:f|move!)|set!))?)|serve(?:(?:-weak|rs)?))|public-interface|re(?:-export!|f(?:(?:-submodule)?)|move!|place(?:!|ments)|verse-lookup)|s(?:e(?:arch|t!)|ubmodule(?:-binder|s)|ymbol-(?:binding|interned\\?|local(?:-binding|ly-interned\\?)))|transformer|u(?:nobserve|se(?:-interfaces!|[!s]))|v(?:ariable|ersion)|weak-observers)|\\?)|o(?:(?:-expt)?))|ve->fdes))|n(?:an(?:(?:\\?)?)|e(?:gat(?:e|ive\\?)|sted-(?:define(?:(?:(?:-module)?)!)|re(?:f(?:(?:-module)?)|move!)|set!)|tent:(?:a(?:ddrtype|liases)|n(?:ame|et))|wline)|gettext|i(?:ce|l\\?|nth)|o(?:op|t(?:(?:-pair\\?)?))|u(?:ll(?:-(?:environment|list\\?)|\\?)|m(?:ber(?:->string|\\?)|erator)))|o(?:bject-(?:>string|address|propert(?:ies|y))|dd\\?|pen(?:(?:-(?:f(?:des|ile)|i(?:nput-(?:file|string)|o-file)|output-(?:file|string))|dir)?)|r-map|utput-port\\?)|p(?:a(?:ir(?:-fo(?:ld(?:(?:-right)?)|r-each)|\\?)|r(?:ameter(?:-(?:converter|fluid)|\\?)|se-path(?:(?:-with-ellipsis)?)|tition(?:(?:!)?))|sswd:(?:dir|g(?:ecos|id)|name|passwd|shell|uid)|use)|eek(?:(?:-char)?)|ipe|k|o(?:rt(?:-(?:>fdes|c(?:losed\\?|o(?:lumn|nversion-strategy))|encoding|f(?:ilename|or-each)|line|mode|revealed|with-print-state)|\\?)|sitive\\?)|r(?:i(?:mitive-(?:_exit|e(?:val|xit)|fork|load(?:(?:-path)?)|move->fdes|read)|nt-(?:disable|e(?:nable|xception)|options(?:(?:-interface)?)))|o(?:ce(?:dure(?:(?:-(?:documentation|minimum-arity|name|propert(?:ies|y)|source|with-setter\\?)|\\?)?)|ss-use-modules)|gram-arguments|mise\\?|per-list\\?|toent:(?:aliases|name|proto)|vide(?:(?:d\\?)?)))|u(?:rify-module!|tenv))|qu(?:(?:i|otien)t)|r(?:a(?:ise(?:(?:-exception)?)|ndom(?:(?:-state-(?:(?:>datu|from-platfor)m)|:(?:exp|hollow-sphere!|normal(?:(?:-vector!)?)|solid-sphere!|uniform))?)|tional(?:\\?|ize))|e(?:a(?:d(?:(?:-(?:char|disable|enable|hash-(?:extend|procedure(?:(?:s)?))|options(?:(?:-interface)?)|syntax)|dir|link)?)|l(?:-part|\\?))|c(?:ord(?:-(?:accessor|constructor|modifier|predicate|type(?:-(?:constructor|descriptor|extensible\\?|fields|has-parent\\?|mutable-fields|name|opaque\\?|p(?:arent(?:(?:s)?)|roperties)|uid)|\\?))|\\?)|v(?:(?:(?:from)?)!))|d(?:irect-port|uce(?:(?:-right)?))|gexp(?:-exec|\\?)|l(?:(?:ease-port-hand|oad-modu)le)|m(?:ainder|ove(?:(?:(?:(?:-hook)?)!)?))|name-file|pl-reader|s(?:et-hook!|olve-(?:(?:interfac|modul|r6rs-interfac)e)|t(?:ore-signals|ricted-vector-sort!))|verse(?:(?:!|-list->string)?)|winddir)|mdir|ound(?:(?:-(?:ash|quotient|remainder)|/)?)|un-hook)|s(?:16vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|32vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|64vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|8vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|ave-module-excursion|c(?:heme-report-environment|m-error)|e(?:arch-path|cond|e(?:d->random-state|k)|l(?:ect|f-evaluating\\?)|nd(?:(?:file|to)?)|rvent:(?:aliases|name|p(?:ort|roto))|t(?:-(?:autoloaded!|c(?:ar!|dr!|urrent-(?:dynamic-state|error-port|input-port|module|output-port))|exception-printer!|module-(?:(?:binder|d(?:eclarative\\?|uplicates-handlers)|filename|kind|n(?:ame|ext-unique-id)|ob(?:array|servers)|public-interface|submodule(?:-binder|s)|transformer|uses|version)!)|object-propert(?:(?:ies|y)!)|p(?:ort-(?:(?:co(?:lumn|nversion-strategy)|encoding|filename|line|revealed)!)|ro(?:cedure-(?:(?:minimum-arity|propert(?:ies|y))!)|gram-arguments))|s(?:(?:ource-propert(?:ies|y)|truct-vtable-name|ymbol-property)!)|tm:(?:gmtoff|hour|isdst|m(?:day|(?:[io])n)|sec|wday|y(?:day|ear)|zone))|affinity|e(?:gid|nv|uid)|g(?:id|r(?:(?:ent|oups)?))|host(?:(?:ent|name)?)|itimer|locale|net(?:(?:ent)?)|p(?:gid|r(?:iority|oto(?:(?:ent)?))|w(?:(?:ent)?))|rlimit|s(?:erv(?:(?:ent)?)|id|ockopt)|ter|uid|vbuf)|venth)|h(?:ared-array-(?:increments|(?:offse|roo)t)|utdown)|i(?:gaction|mple-(?:exceptions|format)|n(?:(?:h)?)|xth)|l(?:eep|oppy-ass(?:oc|[qv]))|o(?:ck(?:addr:(?:addr|f(?:am|lowinfo)|p(?:ath|ort)|scopeid)|et(?:(?:pair)?))|rt(?:(?:!|-list(?:(?:!)?)|ed\\?)?)|urce-propert(?:ies|y))|p(?:an(?:(?:!)?)|lit-at(?:(?:!)?))|qrt|t(?:a(?:ble-sort(?:(?:!)?)|ck(?:-(?:id|length|ref)|\\?)|t(?:(?::(?:atime(?:(?:nsec)?)|bl(?:ksize|ocks)|ctime(?:(?:nsec)?)|dev|gid|ino|m(?:ode|time(?:(?:nsec)?))|nlink|perms|rdev|size|type|uid)|us:(?:exit-val|(?:stop|term)-sig))?))|r(?:error|ftime|ing(?:(?:-(?:>(?:char-set(?:(?:!)?)|list|number|symbol)|a(?:ny(?:(?:-c-code)?)|ppend(?:(?:/shared)?))|bytes-per-char|c(?:apitalize(?:(?:!)?)|i(?:->symbol|<(?:=\\?|[=>?])|=\\?|>(?:=\\?|[=?])|[<=>])|o(?:mpare(?:(?:-ci)?)|n(?:catenate(?:(?:-reverse(?:(?:/shared)?)|/shared)?)|tains(?:(?:-ci)?))|py(?:(?:!)?)|unt))|d(?:elete|owncase(?:(?:!)?)|rop(?:(?:-right)?))|every(?:(?:-c-code)?)|f(?:il(?:l!|ter)|o(?:ld(?:(?:-right)?)|r-each(?:(?:-index)?)))|hash(?:(?:-ci)?)|index(?:(?:-right)?)|join|length|map(?:(?:!)?)|n(?:ormalize-nf(?:k(?:[cd])|[cd])|ull\\?)|p(?:ad(?:(?:-right)?)|refix(?:-(?:ci\\?|length(?:(?:-ci)?))|\\?))|r(?:e(?:f|place|verse(?:(?:!)?))|index)|s(?:et!|kip(?:(?:-right)?)|plit|uffix(?:-(?:ci\\?|length(?:(?:-ci)?))|\\?))|t(?:a(?:bulate|ke(?:(?:-right)?))|itlecase(?:(?:!)?)|okenize|rim(?:(?:-(?:both|right))?))|u(?:nfold(?:(?:-right)?)|pcase(?:(?:!)?)|tf8-length)|xcopy!)|<(?:=\\?|[=>?])|=\\?|>(?:=\\?|[=?])|[<=>?])?)|ptime|uct(?:-(?:layout|ref(?:(?:/unboxed)?)|set!(?:(?:/unboxed)?)|vtable(?:(?:-name|\\?)?))|\\?)))|u(?:bstring(?:(?:-(?:(?:fill|move)!)|/(?:copy|read-only|shared))?)|pports-source-properties\\?)|y(?:m(?:bol(?:(?:-(?:>(?:keyword|string)|append|f(?:ref|set!)|hash|interned\\?|p(?:r(?:ef(?:(?:ix-proc)?)|operty(?:(?:-remove!)?))|set!))|\\?)?)|link)|n(?:c|tax-(?:>datum|source|violation))|stem(?:(?:\\*|-(?:async-mark|error-errno|file-name-convention))?)))|t(?:a(?:ke(?:(?:!|-(?:right|while(?:(?:!)?)))?)|n(?:(?:h)?))|c(?:(?:[gs])etpgrp)|e(?:nth|xtdomain)|h(?:ird|row|unk\\?)|imes|m(?::(?:gmtoff|hour|isdst|m(?:day|(?:[io])n)|sec|wday|y(?:day|ear)|zone)|p(?:file|nam)|s:(?:c(?:lock|(?:[su])time)|(?:[su])time))|r(?:anspose-array|uncate(?:(?:-(?:file|quotient|remainder)|/)?)|y-(?:load-module|module-autoload))|tyname|yped-array\\?|zset)|u(?:16vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|32vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|64vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|8vector(?:(?:-(?:>list|length|ref|set!)|\\?)?)|cs-range->char-set(?:(?:!)?)|mask|n(?:ame|fold(?:(?:-right)?)|memoize-expression|read-(?:char|string)|s(?:etenv|pecified\\?)|zip(?:[12345]))|s(?:e(?:-srfis|r-modules-declarative\\?)|ing-readline\\?|leep)|t(?:ime|sname:(?:machine|nodename|release|sysname|version)))|v(?:a(?:lues|riable(?:-(?:bound\\?|ref|(?:(?:un)?)set!)|\\?))|e(?:ctor(?:(?:-(?:>list|copy|fill!|length|move-(?:(?:lef|righ)t!)|ref|set!)|\\?)?)|rsion(?:(?:-matches\\?)?)))|w(?:a(?:itpid|rn)|eak-(?:(?:key|value)-hash-table\\?)|ith-(?:continuation-barrier|dynamic-state|e(?:rror-to-(?:file|port|string)|xception-handler)|fluid(?:(?:(?:s)?)\\*)|input-from-(?:file|port|string)|output-to-(?:file|port|string)|throw-handler)|rite(?:(?:-char)?))|x(?:cons|substring)|z(?:ero\\?|ip))$")
)
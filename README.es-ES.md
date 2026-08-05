

# Un Bosque 🌳 Sitter de Go

_Donde un Gopher se pasea y se encuentra con muchos 🌳 Sitters..._

En primer lugar, dando crédito a quien se lo merece:

Este repositorio comenzó como un fork del repositorio [go-tree-sitter](https://github.com/smacker/go-tree-sitter) de @smacker
hasta que me di cuenta de que no quería manejar también la biblioteca de bindings en sí
en el mismo proyecto (es decir, lo que hay en la raíz del repositorio, que expone el tipo `sitter.Language`
y demás.), solo quiero una (grande) colección de todos los parsers de [tree-sitter](https://github.com/tree-sitter/tree-sitter)
que pueda añadir.

Así que aquí está: comenzó con los parsers y la automatización del repositorio
mencionado anteriormente, luego se añadieron muchos más parsers sobre esa base y se actualizó
la automatización (para soportar más parsers y también para actualizar automáticamente el
archivo [PARSERS.md](PARSERS.md), las etiquetas de git, etc.).

Los créditos por los parsers corresponden a todos los autores respectivos de los parsers
(consulten [grammars.json](grammars.json) para ver la fuente de cada uno y de todos los parsers).

Este repositorio **NO implementa ningún parser en absoluto**, simplemente automatiza
la descarga desde upstream, la regeneración desde `grammar.js` y
el provisionamiento de los bindings para Go.

Consulten [PARSERS.md](PARSERS.md) para ver la lista de parsers soportados.
El objetivo final es mantener paridad con [nvim_treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#supported-languages)
y añadir cualquier otro parser que encuentre, para que se vuelva lo más
completo posible.

Para contribuir (o simplemente para ver cómo funciona la automatización) consulten [CONTRIBUTING.md](CONTRIBUTING.md).

## Diferencias

- ~490 parsers en este repositorio frente a ~30 en el repositorio padre;
- todos (menos 7) se regeneran desde `grammar.js` (vía `tree-sitter generate`)
  en lugar de copiar los archivos pregenerados del repositorio del parser;
- alineación de versiones de tree-sitter de extremo a extremo, véase más abajo,
- mecanismo de [obtenimiento de queries](#queries), para que puedas obtener las queries junto
  con los parsers;
- mecanismo de [detección de tipo de archivo](#file-type-detection) que permite
  determinar rápidamente qué parser y/o query deberías descargar para
  un archivo dado (consulten [filetype.json](filetype.json));
- [3 formas diferentes de usar los parsers](#usage);
- mantenido bastante actualizado en una base casi diaria con los cambios de los parsers;
- mantenido actualizado con [tree-sitter](https://github.com/tree-sitter/tree-sitter);
- añadiendo constantemente nuevos parsers a medida que están disponibles, incluso
  los nuevos/experimentales;
- suite de pruebas para asegurar que todos los parsers del repositorio pueden realmente parsear
  contenido (pueden compilar y ejecutarse exitosamente).

### Alineación de Versiones de Tree-Sitter

Esta biblioteca está diseñada para asegurar que estemos alineados de extremo a extremo con
la última versión de tree-sitter:

- la biblioteca de bindings [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare)
  (que a su vez es un fork del mismo repositorio - consulten su propio README para el porqué y/o diferencias),
- el `tree-sitter-cli` en [package.json](package.json) y en consecuencia
- los parsers generados incluidos, TODOS usan la misma versión de tree-sitter
  (generalmente la más reciente).

Contrasten esto con el repositorio padre donde los bindings se retrasan bastante
detrás de tree-sitter (se actualizó por última vez a v0.22.5) y encima de eso,
los archivos de los parsers (`parser.c`, `parser.h`, etc.) se copian de los
repos de los parsers, lo que significa que cada uno se compila con la versión que
por casualidad compiló por última vez el mantenedor del repositorio del parser, por lo que
puede variar enormemente entre sí Y de la versión con la que se compil
aron los bindings.

Como ejemplo, en el repositorio padre, el parser **toml**
se generó con `https://github.com/ikatyang/tree-sitter/tree/fc5a692`
que es `v0.19.3~10` de **tree-sitter**, frente a aquí donde se
recompiló por última vez con `v0.24.2` (de hecho, con `0.24.4` pero no hubo
cambios en `parser.c` por lo que nada se commitó).

## Convenciones de Nomenclatura

El nombre del lenguaje utilizado es el mismo que el nombre del lenguaje de TreeSitter (el `name` exportado
por grammar.js) y el mismo que el nombre de la carpeta de queries en `nvim_treesitter` (donde
corresponda).

Esto mantiene las cosas simples y consistentes.

En raros casos, el nombre del paquete Go difiere del nombre del lenguaje:

- `go` en realidad tiene el nombre de paquete `Go` porque `package go` no va bien en Go
  (juego de palabras intencional) pero de lo contrario el nombre del lenguaje permanece como "go";
- lenguaje `func`, mismo problema que arriba, por lo que el nombre del paquete es en realidad `FunC`
  (pero todo lo demás es `func` como de costumbre: carpeta, nombre del lenguaje, etc.);
- lenguaje `context`, mismo problema (conflicto con el paquete `context` de la stdlib)
  por lo que utiliza el nombre `ConTeXt`;
- el lenguaje `COBOL` se llama `COBOL` en grammar.js pero lo exponemos como `cobol`
  (para alinearlo con el resto de los parsers);
- el lenguaje `dotenv` se llama `env` en grammar.js pero lo exponemos como `dotenv`;
- el lenguaje `walnut` se llama `cwal` en grammar.js pero lo mantenemos como `walnut`;
- el lenguaje `janet` se llama `janet_simple` en grammar.js pero aquí es
  simplemente llamado `janet`;
- el lenguaje `cgsql` se llama `cql` en grammar.js frente a cgsql en el nombre del repo,
  mantenemos este último como el nombre;
- `verilog` de `https://github.com/gmlarumbe/tree-sitter-systemverilog` se renombró
  a `systemverilog` para desambiguarlo de la gramática plana `verilog`.

Además, algunos lenguajes pueden tener nombres que no son siglas muy directas.
En esos casos, se poblará un campo `altName`, es decir, el lenguaje `requirements`
tiene un `altName` de `Pip requirements`, `query` tiene `Tree-Sitter Query Language`
y así sucesivamente. Busquen en [grammars.json](grammars.json) su gramática de interés.

## Uso

### Parsers

Consulten el README en [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare),
así como los archivos `example_*.go` en este repositorio.

Este repositorio solo te da la función `GetLanguage()`, seguirás usando el repositorio hermano
para todas tus interacciones con el árbol.

Puedes usar los parsers de este repositorio de varias formas:

#### 1. Independiente (Standalone)

Puedes usar los parsers uno (o más) a la vez, como usarías cualquier otro paquete Go:

```Go
package main

import (
	"context"
	"fmt"

	"github.com/alexaandru/go-sitter-forest/risor"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("print('It works!')\n")
	node, err := sitter.Parse(context.TODO(), content, sitter.NewLanguage(risor.GetLanguage()))
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
}
```

Tengan en cuenta que en modo independiente, `GetLanguage()` devuelve un `unsafe.Pointer`
en lugar de un `*sitter.Language`. Para pasarlo a `sitter.Parse()` o `parser.SetLanguage()`
necesitas envolverlo en `sitter.NewLanguage()` como se muestra arriba.

El razonamiento es permitir que los usuarios finales usen los parsers con la biblioteca de bindings
que elijan, ya sea la biblioteca de @smacker o [go-tree-sitter-bare](https://github.com/alexaandru/go-tree-sitter-bare).

#### 2. En Lote (Bulk)

Si (y solo SI) quieres usar TODOS (o la mayoría de) los parsers (cuidado, tu binario
**será enorme**, como en enorme de 350MB+) entonces puedes usar el paquete raíz (`forest`):

```Go
package main

import (
	"context"
	"fmt"

	forest "github.com/alexaandru/go-sitter-forest"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func main() {
	content := []byte("print('It works!')\n")
	parser := sitter.NewParser()
	parser.SetLanguage(forest.GetLanguage("risor"))

	tree, err := parser.Parse(context.TODO(), nil, content)
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(tree.RootNode())
}
```

de esta forma puedes obtener y usar cualquiera de los parsers dinámicamente, sin tener que
importarlos manualmente. Aunque rara vez necesitarás esto, a menos que estés escribiendo
un editor de texto o algo así.

Nota que a diferencia del modo individual, `forest.GetLanguage()` devuelve
un `*sitter.Language` que se puede pasar directamente a `parser.SetLanguage()`.

#### 3. Como un Plugin

Una tercera forma, ~y quizás la más conveniente~ (no, no lo es, son \~300MB con todos
los parsers compilados en el binario, mientras que todos los parsers compilados como plugins ocuparon \~1400MB
para los 354 parsers), es usar el archivo [Plugins.make](Plugins.make) incluido
(makefile), que permite la creación fácil de cualquier y todos los plugins. Simplemente cópialo a
tu repositorio, y luego podrás fácilmente ejecutar `make -f Plugins.make plugin-risor`, etc. o
usar el objetivo `plugin-all` que crea todos los plugins.

Luego podrás usarlos selectivamente en tu aplicación usando el [mecanismo de plugins](https://pkg.go.dev/plugin).

**IMPORTANTE:** Deberás **USAR** `-trimpath` al compilar tu aplicación, al usar plugins
(el archivo [Plugins.make](Plugins.make) ya lo incluye, pero la aplicación que los usa también lo necesita).

#### 4. A Tu Propia Manera

Puedes mezclar y combinar los anteriores, obviamente.

Probablemente el mejor enfoque sería construir tu propio "mini-bosque", usando el paquete forest
como plantilla pero incluyendo solo los lenguajes que te interesan.

No descarto ofrecer "mini bosques" en el futuro, protegidos por etiquetas de compilación,
si logro definir algunos subconjuntos que tengan sentido (los más usados/populares/conocidos/lo que sea).

#### Información

Cada parser individual (así como el cargador en lote) ofrece una función `Info()`
que puede usarse para recuperar información sobre un parser. Expone su entrada
desde `grammars.json` ya sea en crudo (como una cadena que contiene la entrada codificada en JSON)
o como un objeto (solo disponible en modo lote).

El tipo `Grammar` devuelto implementa `Stringer` por lo que debería dar un buen resumen
al imprimirlo (en pantalla o logs, etc.).

### Queries

El paquete raíz no solo incluye el "bosque de parsers" sino también
las queries correspondientes. Las queries se compilan desde dos fuentes:

1. El proyecto `nvim_treesitter` y
2. Las carpetas `queries` propias de cada repositorio de sitter individual.

Las queries están incrustadas en los paquetes (al momento de escribir esto, para 359 parsers,
las queries solo ocupan 11MB) y pueden obtenerse exactamente igual que los lenguajes,
solo reemplaza `GetLanguage()` por `GetQuery(kind)` o `forest.GetQuery(lang, kind)`.
Están disponibles para paquetes independientes, plugins y el propio forest.

El tipo es uno de {`highlights`, `indent`, `folds`, etc.} (preferiblemente sin la
extensión ".scm", pero también funcionará con ella incluida). Es decir, para obtener la query de highlights
para Go, se llamaría a `forest.GetQuery("go", "highlights")`.

Puedes opcionalmente pasar la preferencia de búsqueda de query, consulten `NvimFirst`, `NativeFirst`,
etc. en `forest.go` para detalles, como en: `forest.GetQuery("go", "highlights", forest.NvimOnly)`.

Las queries respetan la directiva "inherits:" (específica de nvim_treesitter), de forma recursiva,
devolviendo la query final con todas las queries heredadas incluidas, a nivel de forest.
El GetQuery() propio de los paquetes individuales obviamente no puede hacer eso, ya que no
tienen acceso a las queries propias de otros parsers, solo forest tiene eso. Consulten `forest.GetQuery()`
para ver cómo replicar eso en tu lado si usas los paquetes individuales.

### Detección de Tipo de Archivo

El paquete raíz también incluye un detector de tipo de archivo:
`forest.DetectLanguage(<abs path|rel path|filename>)`. Para obtener los mejores resultados, se debe proporcionar la ruta
absoluta al archivo, ya que eso habilita todos los detectores disponibles, en
orden de prioridad:

- **shebang** o [modeline de vim](https://vimdoc.sourceforge.net/htmldoc/options.html#modeline) -
  cualquiera que esté disponible en los primeros 255 bytes del archivo;
- Coincidencia [**glob**](https://pkg.go.dev/path/filepath#Match) contra la cola de la ruta
  (es decir, `*/*/foo.txt` coincidirá con `.../a/b/foo.txt` sin importar el resto de la ruta),
- **nombre** del archivo;
- **extensión** del archivo.

El nombre del lenguaje es obviamente el mismo que el del parser y la query.

Puedes opcionalmente registrar tus propios "patrones" (solo para lenguajes que formen parte del
bosque, ya que se validan contra él) o anular patrones existentes (particularmente
útil donde hay conflicto de extensión de archivo, como V y Verilog usando la extensión `.v`
- puedes optar por uno u otro, etc.). Consulten `forest.RegisterLanguage()` para
más detalles.

Puedes inspeccionar el mapeo en el archivo [filetype.json](filetype.json).

## Cambios en el Código de los Parsers

Por transparencia, todos y cada uno de los cambios realizados en los archivos de los parsers (y, para dejar claro que
incluyo en este término TODOS los archivos que provienen de los parsers, no solo parser.c)
se documentan a continuación.

En primer lugar, TODOS los cambios son totalmente automatizados (cualquier excepción se indica a continuación),
nunca se hace ningún cambio manualmente, por lo que inspeccionar la automatización debería darte
una visión clara de todos los cambios realizados en el código, cambios que se detallan a continuación:

- las rutas de include se reescriben para usar una estructura plana (es decir, `"tree_sitter/parser.h"`
  se convierte en `"parser.h"`); Esto es necesario para que los archivos formen parte del mismo paquete,
  además, también simplifica la automatización;
- para `unison`, el archivo `scanner` incluye `maybe.c` lo que hace que `cgo` incluya el archivo dos veces y lance un error de símbolos duplicados.
  La solución elegida fue copiar el contenido del archivo incluido en el archivo del scanner y establecer
  el archivo incluido a cero bytes; de esta manera todo el código está en un solo archivo y la compilación es posible;
- similar a `unison`, `comment` y `perl` también usan la misma técnica de combinar archivos C;
- para parsers que incluyen un archivo `tag.h`: la variable `TAG_TYPES_BY_TAG_NAME` entra en conflicto
  entre ellos (cuando esos parsers se incluyen todos en una sola aplicación). La solución elegida
  fue renombrar la variable añadiendo el sufijo `_<lang>`, es decir, actualmente tenemos:
  - `TAG_TYPES_BY_TAG_NAME_astro`;
  - `TAG_TYPES_BY_TAG_NAME_html`;
  - `TAG_TYPES_BY_TAG_NAME_svelte`;
  - `TAG_TYPES_BY_TAG_NAME_vue`;
- para parsers que definen `serialize()`, `deserialize()`, `scan()` (y algunos otros)
  (es decir, `org`, `beancount`, `html` y algunos otros): los identificadores conflictivos
  se renombran añadiendo el sufijo `_<lang>` a ellos (es decir, `serialize` -> `serialize_org`, etc.);
  Consulten la función `putFile()` en `internal/automation/main.go` para más detalles;
- los archivos `grammar.js` de algunos parsers aún no se han actualizado para funcionar con la última TreeSitter,
  en cuyo caso los parcheamos sobre la marcha antes de regenerar el parser. Consulten `replMap` en
  la función `downloadGrammar()`.

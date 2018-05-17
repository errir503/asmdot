ASM.
====

Providing an extensible Python framework for building a **fast, zero-copy** assembler.

## History and goal

This project originally aimed to create a fast, minimalist and unopinionated assembler in C
that could live in a single file, and support multiple architectures.

Thus, a Python library was built to transform various instructions from different architectures
into a simple, common AST that supports bitwise and logical expressions, basic flow control
and variables into C code.  
Since code would be generated automatically, other options such as naming conventions and parameter
types could be easily modified when generating it.

However, I soon realized that, since a complete AST was built, it could be easily to extend this
process to not only support C, but also other programming languages.  
At first, the goal was thus to produce bindings to the C API, which is *very* efficient; but since a
complete AST was built anyway, and that a mechanism already existed to distinguish source files and
include files, I decided to make the whole process available in different languages.

As such, ASM. was born. **Parsers** transform data files that define instructions in various architectures
to an AST, which is then transformed by **emitters** into source code in various programming languages.

## Usage

### Generating the sources
```
Usage: translate.py [-h] -a arch.py -e emitter.py [-p] [-b]
                    [-r {size,void}] [-u] [-o OUTPUT-DIR] [-v]
                    [-cc CALLING-CONVENTION]

Generate assembler sources and bindings.

Optional arguments:
  -h, --help                Shows a help message that accounts for all chosen
                            architectures and emitters.
  -v, --verbose             Increase verbosity.

  -a, --arch arch.py        Use the specified architecture translator.
  -e, --emitter emitter.py  Use the specified emitter.

  -b, --bindings            Generate bindings instead of generating full
                            functions.
  -o, --output OUTPUT-DIR   Change the output directory.

C:
  -p, --prefix          Prefix function names by their architecture.
  -cc, --calling-convention CALLING-CONVENTION
                        Specify the calling convention of generated functions.

C#:
  --unsafe              Use raw pointers instead of IntPtr.
```

### Using the C API
```c
#include "./include/x86.h"

void* buffer = malloc(0xff);
void* origin = buffer;

inc_r32(&buffer, eax);
ret(&buffer);

free(origin);
```

### Using the Nim API
```nim
# The Nim language goes very well with ASM., thanks to its UFCS support.
import asmdot/x86

var
  bytes = newSeqOfCap[byte](10)
  buf = addr bytes[0]

buf.inc(eax)
buf.ret()
```

## Status
- Architectures:
  * [ARM](./src/c/arm.c) (generated by [arm.py](./asm/arch/arm.py), **WIP**).
  * [X86](./src/c/x86.c) (generated by [x86.py](./asm/arch/x86.py), **WIP**).
- Sources:
  * [C](./src/c) (generated by [c.py](./asm/lang/c.py)).
  * [C#](./src/csharp) (generated by [csharp.py](./asm/lang/csharp.py)).
  * [Nim](./src/nim) (generated by [nim.py](./asm/lang/nim.py)).
  * [Rust](./src/rust) (generated by [rust.py](./asm/lang/rust.py)).
- Bindings:
  * [C](./include) (generated by [c.py](./asm/lang/c.py)).
  * [Python](./bindings/python) (generated by [python.py](./asm/lang/python.py)).

## Hacking
Python 3.6 is required to run the scripts, since the scripts make heavy use of the new typing
features added in this release. A type-aware linter such as [mypy](http://mypy-lang.org/) is
thus recommended for editing.

### Structure
```
Data files:     arm.txt   x86.txt
                 ║         ║
Parsers:        arm.py    x86.py
                 ╠═════════╝
                AST
                 ╠═════════╦═══════════╗
Emitters:       c.py      csharp.py   python.py
                 ╠═════════╩═══════════╝
                 ║
                 ╠═════════╦═══════════╦═══════════╦════════╗
Gen. sources:   arm.c     x86.c       arm.py      x86.py   ...
```

- Data files are available in the [data](./asm/data) directory.
- Parsers are available in the [arch](./asm/arch) directory.
- The AST is defined in [ir.py](./asm/ir.py).
- Emitters are available in the [lang](./asm/lang) directory.
- Generated source files are either output to the [bindings](./bindings),
  [src](./src) or [include](./include) directories.

Additionally, the [translate.py](./translate.py) script handles the high-level logic of the source code generation, as well as the CLI. It basically manages the communication from one step to the next.

### Adding instructions
Instructions can be added to the [data files](./asm/data) using a simple language that I hope is self-explanatory.  
Typically, a data file contains a single instruction by line, with a format specific to the
target architecture.

Right now, all ARM instructions have been added. Help on x86 and other architectures would be
appreciated.

### Improving parsers
Parsers transform data files to an AST, line by line. Behind the scenes,
parsers are simple scripts that use [Parsy](https://github.com/python-parsy/parsy) as
well as some internal utilities.

Please see the [arch](./asm/arch) directory for some example parsers.

### Adding emitters
Emitters are Python modules of the following form, and are used to extend
the build process. They are used to automate the generation of native code
in various languages, as well as bindings.

All they have to do is transform the simple AST into source code.

Please see the [lang](./asm/lang) directory for some example emitters.

### Using the AST
The AST is defined in the [ast.py](./src/ast.py) file, and mostly consists of the following elements.

#### Function
Every instruction is translated into a function, that itself has a `name`, `full_name`,
`body`, as well as parameters. `full_name` only changes when a single instruction can take
multiple parameters. For example, `mov` is the `name` of both `mov_r32_r32` and `mov_r64_r64`.

Additionally, the body is a simple list of `Statement`s.

#### Statement
Many kinds of statements exist, and they typically make up the whole body of a function. They
contain other informations, such as variable names, or `Expression`s.

#### Expression
Once again, many kinds of expressions exist. For example, `Binary` expressions have an
operator, as well as left and right operands. There are also `Ternary` expressions,
`Call` expressions, etc. In most cases, a translation from an `Expression` tree to a string
is extremely easy.

#### Example
Manipulation of the IR AST can be seen in the [C code generation script](./asm/lang/c.py).

### Utilities
Many utilities are provided to make scripts easier to create and reason about.

If you see anything you don't know about, please file an issue. In the meantime,
that section is a **TODO**.

## Testing
Tests are available in the [tests](./tests) directory, and mostly consist of Python
scripts that compare generated code to [Capstone](http://www.capstone-engine.org) outputs.

[pytest](https://docs.pytest.org/en/latest/) is used for testing, along with
the [Python bindings](./bindings/python).

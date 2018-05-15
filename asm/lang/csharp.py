from asm.emit import *  # pylint: disable=W0614

header = '''using System;
using System.Runtime.InteropServices;

namespace AsmSq
{{
    public static class {}
    {{
        public const string LIBNAME = "asmdot";
'''

class CSharpEmitter(Emitter):
    
    @property
    def language(self):
        return 'csharp'

    @property
    def filename(self):
        return f'{self.arch.capitalize()}.cs'
    
    def __init__(self, args, arg):
        super().__init__(args, arg)
        self.indent = Indent('     ', 2)
    
    def get_type_name(self, ty: IrType) -> str:
        typemap = {
            'reg8' : 'Register8',
            'reg16': 'Register16',
            'reg32': 'Register32',
            'reg64': 'Register64',
            'condition': 'Condition'
        }

        if ty.original in typemap:
            return typemap[ty.original]
        else:
            return ty.original
    
    def emit_header(self, out: IO[str]):
        out.write(header.format(self.arch.capitalize()))
    
    def emit_footer(self, out: IO[str]):
        out.write('\n    }\n}\n')
    
    def emit_expr(self, expr: Expression, out: IO[str]):
        pass
    
    def emit_stmt(self, stmt: Statement, out: IO[str]):
        pass
    
    def emit(self, fun: Function, out: IO[str]):
        if self.bindings:
            self.write(f'[DllImport(LIBNAME, EntryPoint = "{fun.fullname}", CallingConvention = CallingConvention.Cdecl)]\n')
        
        self.write(f'public static {self.returntype} {fun.name}(')

        for name, ctype in fun.params:
            self.write(f'{ctype} {name}, ', indent=False)

        self.write(f'{"ref " if self.mutable_buffer else ""}IntPtr buffer)')

        if self.bindings:
            out.write(';\n')
            return
        
        out.write(' {\n')

        self.indent += 1

        for stmt in fun.body:
            self.emit_stmt(stmt, out)
        
        self.indent -= 1

        out.write('}\n')

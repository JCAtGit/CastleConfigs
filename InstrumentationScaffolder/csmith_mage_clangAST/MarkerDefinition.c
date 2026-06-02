TranslationUnitDecl 0x564f63ccd5e8 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x564f63cce1c0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x564f63ccdbb0 '__int128'
|-TypedefDecl 0x564f63cce230 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x564f63ccdbd0 'unsigned __int128'
|-TypedefDecl 0x564f63cce540 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x564f63cce310 'struct __NSConstantString_tag'
|   `-Record 0x564f63cce288 '__NSConstantString_tag'
|-TypedefDecl 0x564f63ccde68 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x564f63ccde20 'char *'
|   `-BuiltinType 0x564f63ccd690 'char'
|-TypedefDecl 0x564f63cce150 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x564f63cce100 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x564f63ccdf40 'struct __va_list_tag'
|     `-Record 0x564f63ccdec0 '__va_list_tag'
`-FunctionDecl 0x564f63d35660 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/MarkerDefinition.h:3:1, line:7:1> line:4:13 used codemarker_alpha 'void (int)' static
  |-ParmVarDecl 0x564f63d35590 <col:30, col:34> col:34 used markerID 'int'
  |-CompoundStmt 0x564f63d35a70 <col:44, line:7:1>
  | |-DeclStmt 0x564f63d358b8 <line:5:5, col:34>
  | | `-VarDecl 0x564f63d35818 <col:5, col:26> col:18 dummy 'volatile int' cinit
  | |   `-ImplicitCastExpr 0x564f63d358a0 <col:26> 'int' <LValueToRValue>
  | |     `-DeclRefExpr 0x564f63d35880 <col:26> 'int' lvalue ParmVar 0x564f63d35590 'markerID' 'int'
  | `-GCCAsmStmt 0x564f63d359f8 <line:6:2, col:49>
  |   `-ImplicitCastExpr 0x564f63d359e0 <col:29> 'int' <LValueToRValue>
  |     `-DeclRefExpr 0x564f63d35970 <col:29> 'int' lvalue ParmVar 0x564f63d35590 'markerID' 'int'
  |-NoInlineAttr 0x564f63d35710 <line:3:16>
  |-UsedAttr 0x564f63d35768 <col:26>
  `-NoThrowAttr 0x564f63d35790 <col:32>

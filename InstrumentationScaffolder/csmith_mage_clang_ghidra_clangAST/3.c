TranslationUnitDecl 0x5584f3d5a548 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x5584f3d5b1e0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x5584f3d5ab10 '__int128'
|-TypedefDecl 0x5584f3d5b250 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x5584f3d5ab30 'unsigned __int128'
|-TypedefDecl 0x5584f3dab050 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x5584f3d5b340 '__NSConstantString_tag'
|   `-CXXRecord 0x5584f3d5b2a8 '__NSConstantString_tag'
|-TypedefDecl 0x5584f3d5ae08 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x5584f3d5adc0 'char *'
|   `-BuiltinType 0x5584f3d5a5f0 'char'
|-TypedefDecl 0x5584f3d5b170 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list '__va_list_tag[1]'
| `-ConstantArrayType 0x5584f3d5b120 '__va_list_tag[1]' 1 
|   `-RecordType 0x5584f3d5aef0 '__va_list_tag'
|     `-CXXRecord 0x5584f3d5ae60 '__va_list_tag'
|-TypedefDecl 0x5584f3dab0c0 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/3.c:1:1, col:25> col:25 referenced undefined 'unsigned char'
| `-BuiltinType 0x5584f3d5a6b0 'unsigned char'
|-TypedefDecl 0x5584f3dab130 <line:3:1, col:26> col:26 referenced byte 'unsigned char'
| `-BuiltinType 0x5584f3d5a6b0 'unsigned char'
|-TypedefDecl 0x5584f3dab1a0 <line:4:1, col:26> col:26 referenced dwfenc 'unsigned char'
| `-BuiltinType 0x5584f3d5a6b0 'unsigned char'
|-TypedefDecl 0x5584f3dab210 <line:5:1, col:25> col:25 referenced dword 'unsigned int'
| `-BuiltinType 0x5584f3d5a6f0 'unsigned int'
|-TypedefDecl 0x5584f3dab280 <line:6:1, col:26> col:26 referenced qword 'unsigned long'
| `-BuiltinType 0x5584f3d5a710 'unsigned long'
|-TypedefDecl 0x5584f3dab2f0 <line:7:1, col:26> col:26 referenced undefined1 'unsigned char'
| `-BuiltinType 0x5584f3d5a6b0 'unsigned char'
|-TypedefDecl 0x5584f3dab360 <line:8:1, col:25> col:25 referenced undefined4 'unsigned int'
| `-BuiltinType 0x5584f3d5a6f0 'unsigned int'
|-TypedefDecl 0x5584f3dab3d0 <line:9:1, col:26> col:26 referenced undefined8 'unsigned long'
| `-BuiltinType 0x5584f3d5a710 'unsigned long'
|-TypedefDecl 0x5584f3dab440 <line:10:1, col:27> col:27 referenced word 'unsigned short'
| `-BuiltinType 0x5584f3d5a6d0 'unsigned short'
|-CXXRecordDecl 0x5584f3dab498 <line:11:9, col:16> col:16 struct eh_frame_hdr
|-TypedefDecl 0x5584f3dab5a8 <col:1, col:29> col:29 eh_frame_hdr 'struct eh_frame_hdr':'eh_frame_hdr'
| `-ElaboratedType 0x5584f3dab550 'struct eh_frame_hdr' sugar
|   `-RecordType 0x5584f3dab530 'eh_frame_hdr'
|     `-CXXRecord 0x5584f3dab740 'eh_frame_hdr'
|-TypedefDecl 0x5584f3dab698 <col:1, col:44> col:44 Peh_frame_hdr 'struct eh_frame_hdr *'
| `-PointerType 0x5584f3dab640 'struct eh_frame_hdr *'
|   `-ElaboratedType 0x5584f3dab550 'struct eh_frame_hdr' sugar
|     `-RecordType 0x5584f3dab530 'eh_frame_hdr'
|       `-CXXRecord 0x5584f3dab740 'eh_frame_hdr'
|-CXXRecordDecl 0x5584f3dab740 prev 0x5584f3dab498 <line:13:1, line:18:1> line:13:8 struct eh_frame_hdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dab838 <col:1, col:8> col:8 implicit struct eh_frame_hdr
| |-FieldDecl 0x5584f3dab940 <line:14:5, col:10> col:10 eh_frame_hdr_version 'byte':'unsigned char'
| |-FieldDecl 0x5584f3daba00 <line:15:5, col:12> col:12 eh_frame_pointer_encoding 'dwfenc':'unsigned char'
| |-FieldDecl 0x5584f3daba60 <line:16:5, col:12> col:12 eh_frame_desc_entry_count_encoding 'dwfenc':'unsigned char'
| `-FieldDecl 0x5584f3dabac0 <line:17:5, col:12> col:12 eh_frame_table_encoding 'dwfenc':'unsigned char'
|-CXXRecordDecl 0x5584f3dabb28 <line:20:9, col:16> col:16 struct NoteGnuPropertyElement_4
|-TypedefDecl 0x5584f3dabc38 <col:1, col:41> col:41 NoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4':'NoteGnuPropertyElement_4'
| `-ElaboratedType 0x5584f3dabbe0 'struct NoteGnuPropertyElement_4' sugar
|   `-RecordType 0x5584f3dabbc0 'NoteGnuPropertyElement_4'
|     `-CXXRecord 0x5584f3dabdd0 'NoteGnuPropertyElement_4'
|-TypedefDecl 0x5584f3dabd28 <col:1, col:68> col:68 PNoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4 *'
| `-PointerType 0x5584f3dabcd0 'struct NoteGnuPropertyElement_4 *'
|   `-ElaboratedType 0x5584f3dabbe0 'struct NoteGnuPropertyElement_4' sugar
|     `-RecordType 0x5584f3dabbc0 'NoteGnuPropertyElement_4'
|       `-CXXRecord 0x5584f3dabdd0 'NoteGnuPropertyElement_4'
|-CXXRecordDecl 0x5584f3dabdd0 prev 0x5584f3dabb28 <line:22:1, line:26:1> line:22:8 struct NoteGnuPropertyElement_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dabec8 <col:1, col:8> col:8 implicit struct NoteGnuPropertyElement_4
| |-FieldDecl 0x5584f3dcd100 <line:23:5, col:11> col:11 prType 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dcd160 <line:24:5, col:11> col:11 prDatasz 'dword':'unsigned int'
| `-FieldDecl 0x5584f3dcd270 <line:25:5, col:16> col:10 data 'byte[4]'
|-CXXRecordDecl 0x5584f3dcd2d8 <line:28:9, col:16> col:16 struct fde_table_entry
|-TypedefDecl 0x5584f3dcd3e8 <col:1, col:32> col:32 fde_table_entry 'struct fde_table_entry':'fde_table_entry'
| `-ElaboratedType 0x5584f3dcd390 'struct fde_table_entry' sugar
|   `-RecordType 0x5584f3dcd370 'fde_table_entry'
|     `-CXXRecord 0x5584f3dcd580 'fde_table_entry'
|-TypedefDecl 0x5584f3dcd4d8 <col:1, col:50> col:50 Pfde_table_entry 'struct fde_table_entry *'
| `-PointerType 0x5584f3dcd480 'struct fde_table_entry *'
|   `-ElaboratedType 0x5584f3dcd390 'struct fde_table_entry' sugar
|     `-RecordType 0x5584f3dcd370 'fde_table_entry'
|       `-CXXRecord 0x5584f3dcd580 'fde_table_entry'
|-CXXRecordDecl 0x5584f3dcd580 prev 0x5584f3dcd2d8 <line:30:1, line:33:1> line:30:8 struct fde_table_entry definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dcd678 <col:1, col:8> col:8 implicit struct fde_table_entry
| |-FieldDecl 0x5584f3dcd718 <line:31:5, col:11> col:11 initial_loc 'dword':'unsigned int'
| `-FieldDecl 0x5584f3dcd778 <line:32:5, col:11> col:11 data_loc 'dword':'unsigned int'
|-EnumDecl 0x5584f3dcd7e0 <line:35:9, line:112:1> line:35:14 Elf64_DynTag
| |-EnumConstantDecl 0x5584f3dcd8e0 <line:36:5, col:13> col:5 DT_NULL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0e98 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcd8c0 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5584f3dcd8a0 <col:13> 'int' 0
| |-EnumConstantDecl 0x5584f3dcd978 <line:37:5, col:15> col:5 DT_NEEDED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0eb0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcd958 <col:15> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5584f3dcd938 <col:15> 'int' 1
| |-EnumConstantDecl 0x5584f3dcda10 <line:38:5, col:17> col:5 DT_PLTRELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0ec8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcd9f0 <col:17> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5584f3dcd9d0 <col:17> 'int' 2
| |-EnumConstantDecl 0x5584f3dcdaa8 <line:39:5, col:15> col:5 DT_PLTGOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0ee0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcda88 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5584f3dcda68 <col:15> 'int' 3
| |-EnumConstantDecl 0x5584f3dcdb40 <line:40:5, col:13> col:5 DT_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0ef8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdb20 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5584f3dcdb00 <col:13> 'int' 4
| |-EnumConstantDecl 0x5584f3dcdbd8 <line:41:5, col:15> col:5 DT_STRTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f10 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdbb8 <col:15> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5584f3dcdb98 <col:15> 'int' 5
| |-EnumConstantDecl 0x5584f3dcdc70 <line:42:5, col:15> col:5 DT_SYMTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f28 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdc50 <col:15> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5584f3dcdc30 <col:15> 'int' 6
| |-EnumConstantDecl 0x5584f3dcdd08 <line:43:5, col:13> col:5 DT_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f40 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdce8 <col:13> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5584f3dcdcc8 <col:13> 'int' 7
| |-EnumConstantDecl 0x5584f3dcdda0 <line:44:5, col:15> col:5 DT_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f58 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdd80 <col:15> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x5584f3dcdd60 <col:15> 'int' 8
| |-EnumConstantDecl 0x5584f3dcde38 <line:45:5, col:16> col:5 DT_RELAENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f70 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcde18 <col:16> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x5584f3dcddf8 <col:16> 'int' 9
| |-EnumConstantDecl 0x5584f3dcded0 <line:46:5, col:14> col:5 DT_STRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0f88 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdeb0 <col:14> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x5584f3dcde90 <col:14> 'int' 10
| |-EnumConstantDecl 0x5584f3dcdf68 <line:47:5, col:15> col:5 DT_SYMENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0fa0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdf48 <col:15> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x5584f3dcdf28 <col:15> 'int' 11
| |-EnumConstantDecl 0x5584f3dce000 <line:48:5, col:13> col:5 DT_INIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0fb8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcdfe0 <col:13> 'int'
| |     |-value: Int 12
| |     `-IntegerLiteral 0x5584f3dcdfc0 <col:13> 'int' 12
| |-EnumConstantDecl 0x5584f3dced00 <line:49:5, col:13> col:5 DT_FINI 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0fd0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dce078 <col:13> 'int'
| |     |-value: Int 13
| |     `-IntegerLiteral 0x5584f3dce058 <col:13> 'int' 13
| |-EnumConstantDecl 0x5584f3dced98 <line:50:5, col:15> col:5 DT_SONAME 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd0fe8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dced78 <col:15> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x5584f3dced58 <col:15> 'int' 14
| |-EnumConstantDecl 0x5584f3dcee30 <line:51:5, col:14> col:5 DT_RPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1000 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcee10 <col:14> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x5584f3dcedf0 <col:14> 'int' 15
| |-EnumConstantDecl 0x5584f3dceec8 <line:52:5, col:17> col:5 DT_SYMBOLIC 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1018 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dceea8 <col:17> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x5584f3dcee88 <col:17> 'int' 16
| |-EnumConstantDecl 0x5584f3dcef60 <line:53:5, col:12> col:5 DT_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1030 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcef40 <col:12> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x5584f3dcef20 <col:12> 'int' 17
| |-EnumConstantDecl 0x5584f3dceff8 <line:54:5, col:14> col:5 DT_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1048 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcefd8 <col:14> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x5584f3dcefb8 <col:14> 'int' 18
| |-EnumConstantDecl 0x5584f3dcf090 <line:55:5, col:15> col:5 DT_RELENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1060 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf070 <col:15> 'int'
| |     |-value: Int 19
| |     `-IntegerLiteral 0x5584f3dcf050 <col:15> 'int' 19
| |-EnumConstantDecl 0x5584f3dcf128 <line:56:5, col:15> col:5 DT_PLTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1078 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf108 <col:15> 'int'
| |     |-value: Int 20
| |     `-IntegerLiteral 0x5584f3dcf0e8 <col:15> 'int' 20
| |-EnumConstantDecl 0x5584f3dcf1c0 <line:57:5, col:14> col:5 DT_DEBUG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1090 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf1a0 <col:14> 'int'
| |     |-value: Int 21
| |     `-IntegerLiteral 0x5584f3dcf180 <col:14> 'int' 21
| |-EnumConstantDecl 0x5584f3dcf258 <line:58:5, col:16> col:5 DT_TEXTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd10a8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf238 <col:16> 'int'
| |     |-value: Int 22
| |     `-IntegerLiteral 0x5584f3dcf218 <col:16> 'int' 22
| |-EnumConstantDecl 0x5584f3dcf2f0 <line:59:5, col:15> col:5 DT_JMPREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd10c0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf2d0 <col:15> 'int'
| |     |-value: Int 23
| |     `-IntegerLiteral 0x5584f3dcf2b0 <col:15> 'int' 23
| |-EnumConstantDecl 0x5584f3dcf388 <line:60:5, col:17> col:5 DT_BIND_NOW 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd10d8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf368 <col:17> 'int'
| |     |-value: Int 24
| |     `-IntegerLiteral 0x5584f3dcf348 <col:17> 'int' 24
| |-EnumConstantDecl 0x5584f3dcf420 <line:61:5, col:19> col:5 DT_INIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd10f0 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf400 <col:19> 'int'
| |     |-value: Int 25
| |     `-IntegerLiteral 0x5584f3dcf3e0 <col:19> 'int' 25
| |-EnumConstantDecl 0x5584f3dcf4b8 <line:62:5, col:19> col:5 DT_FINI_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1108 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf498 <col:19> 'int'
| |     |-value: Int 26
| |     `-IntegerLiteral 0x5584f3dcf478 <col:19> 'int' 26
| |-EnumConstantDecl 0x5584f3dcf550 <line:63:5, col:21> col:5 DT_INIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1120 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf530 <col:21> 'int'
| |     |-value: Int 27
| |     `-IntegerLiteral 0x5584f3dcf510 <col:21> 'int' 27
| |-EnumConstantDecl 0x5584f3dcf5e8 <line:64:5, col:21> col:5 DT_FINI_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1138 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf5c8 <col:21> 'int'
| |     |-value: Int 28
| |     `-IntegerLiteral 0x5584f3dcf5a8 <col:21> 'int' 28
| |-EnumConstantDecl 0x5584f3dcf680 <line:65:5, col:16> col:5 DT_RUNPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1150 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf660 <col:16> 'int'
| |     |-value: Int 29
| |     `-IntegerLiteral 0x5584f3dcf640 <col:16> 'int' 29
| |-EnumConstantDecl 0x5584f3dcf718 <line:66:5, col:14> col:5 DT_FLAGS 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1168 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf6f8 <col:14> 'int'
| |     |-value: Int 30
| |     `-IntegerLiteral 0x5584f3dcf6d8 <col:14> 'int' 30
| |-EnumConstantDecl 0x5584f3dcf7b0 <line:67:5, col:22> col:5 DT_PREINIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1180 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf790 <col:22> 'int'
| |     |-value: Int 32
| |     `-IntegerLiteral 0x5584f3dcf770 <col:22> 'int' 32
| |-EnumConstantDecl 0x5584f3dcf848 <line:68:5, col:24> col:5 DT_PREINIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1198 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf828 <col:24> 'int'
| |     |-value: Int 33
| |     `-IntegerLiteral 0x5584f3dcf808 <col:24> 'int' 33
| |-EnumConstantDecl 0x5584f3dcf8e0 <line:69:5, col:15> col:5 DT_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd11b0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf8c0 <col:15> 'int'
| |     |-value: Int 35
| |     `-IntegerLiteral 0x5584f3dcf8a0 <col:15> 'int' 35
| |-EnumConstantDecl 0x5584f3dcf978 <line:70:5, col:13> col:5 DT_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd11c8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf958 <col:13> 'int'
| |     |-value: Int 36
| |     `-IntegerLiteral 0x5584f3dcf938 <col:13> 'int' 36
| |-EnumConstantDecl 0x5584f3dcfa10 <line:71:5, col:16> col:5 DT_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd11e0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcf9f0 <col:16> 'int'
| |     |-value: Int 37
| |     `-IntegerLiteral 0x5584f3dcf9d0 <col:16> 'int' 37
| |-EnumConstantDecl 0x5584f3dcfaa8 <line:72:5, col:20> col:5 DT_ANDROID_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd11f8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcfa88 <col:20> 'int'
| |     |-value: Int 1610612751
| |     `-IntegerLiteral 0x5584f3dcfa68 <col:20> 'int' 1610612751
| |-EnumConstantDecl 0x5584f3dcfb40 <line:73:5, col:22> col:5 DT_ANDROID_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1210 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcfb20 <col:22> 'int'
| |     |-value: Int 1610612752
| |     `-IntegerLiteral 0x5584f3dcfb00 <col:22> 'int' 1610612752
| |-EnumConstantDecl 0x5584f3dcfbd8 <line:74:5, col:21> col:5 DT_ANDROID_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1228 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcfbb8 <col:21> 'int'
| |     |-value: Int 1610612753
| |     `-IntegerLiteral 0x5584f3dcfb98 <col:21> 'int' 1610612753
| |-EnumConstantDecl 0x5584f3dcfc70 <line:75:5, col:23> col:5 DT_ANDROID_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1240 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dcfc50 <col:23> 'int'
| |     |-value: Int 1610612754
| |     `-IntegerLiteral 0x5584f3dcfc30 <col:23> 'int' 1610612754
| |-EnumConstantDecl 0x5584f3dd64d0 <line:76:5, col:21> col:5 DT_ANDROID_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1258 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd64b0 <col:21> 'int'
| |     |-value: Int 1879040000
| |     `-IntegerLiteral 0x5584f3dcfcc8 <col:21> 'int' 1879040000
| |-EnumConstantDecl 0x5584f3dd6568 <line:77:5, col:23> col:5 DT_ANDROID_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1270 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6548 <col:23> 'int'
| |     |-value: Int 1879040001
| |     `-IntegerLiteral 0x5584f3dd6528 <col:23> 'int' 1879040001
| |-EnumConstantDecl 0x5584f3dd6600 <line:78:5, col:24> col:5 DT_ANDROID_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1288 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd65e0 <col:24> 'int'
| |     |-value: Int 1879040003
| |     `-IntegerLiteral 0x5584f3dd65c0 <col:24> 'int' 1879040003
| |-EnumConstantDecl 0x5584f3dd6698 <line:79:5, col:22> col:5 DT_GNU_PRELINKED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd12a0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6678 <col:22> 'int'
| |     |-value: Int 1879047669
| |     `-IntegerLiteral 0x5584f3dd6658 <col:22> 'int' 1879047669
| |-EnumConstantDecl 0x5584f3dd6730 <line:80:5, col:23> col:5 DT_GNU_CONFLICTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd12b8 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6710 <col:23> 'int'
| |     |-value: Int 1879047670
| |     `-IntegerLiteral 0x5584f3dd66f0 <col:23> 'int' 1879047670
| |-EnumConstantDecl 0x5584f3dd67c8 <line:81:5, col:22> col:5 DT_GNU_LIBLISTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd12d0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd67a8 <col:22> 'int'
| |     |-value: Int 1879047671
| |     `-IntegerLiteral 0x5584f3dd6788 <col:22> 'int' 1879047671
| |-EnumConstantDecl 0x5584f3dd6860 <line:82:5, col:17> col:5 DT_CHECKSUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd12e8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6840 <col:17> 'int'
| |     |-value: Int 1879047672
| |     `-IntegerLiteral 0x5584f3dd6820 <col:17> 'int' 1879047672
| |-EnumConstantDecl 0x5584f3dd68f8 <line:83:5, col:17> col:5 DT_PLTPADSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1300 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd68d8 <col:17> 'int'
| |     |-value: Int 1879047673
| |     `-IntegerLiteral 0x5584f3dd68b8 <col:17> 'int' 1879047673
| |-EnumConstantDecl 0x5584f3dd6990 <line:84:5, col:16> col:5 DT_MOVEENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1318 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6970 <col:16> 'int'
| |     |-value: Int 1879047674
| |     `-IntegerLiteral 0x5584f3dd6950 <col:16> 'int' 1879047674
| |-EnumConstantDecl 0x5584f3dd6a28 <line:85:5, col:15> col:5 DT_MOVESZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1330 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6a08 <col:15> 'int'
| |     |-value: Int 1879047675
| |     `-IntegerLiteral 0x5584f3dd69e8 <col:15> 'int' 1879047675
| |-EnumConstantDecl 0x5584f3dd6ac0 <line:86:5, col:18> col:5 DT_FEATURE_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1348 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6aa0 <col:18> 'int'
| |     |-value: Int 1879047676
| |     `-IntegerLiteral 0x5584f3dd6a80 <col:18> 'int' 1879047676
| |-EnumConstantDecl 0x5584f3dd6b58 <line:87:5, col:18> col:5 DT_POSFLAG_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1360 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6b38 <col:18> 'int'
| |     |-value: Int 1879047677
| |     `-IntegerLiteral 0x5584f3dd6b18 <col:18> 'int' 1879047677
| |-EnumConstantDecl 0x5584f3dd6bf0 <line:88:5, col:16> col:5 DT_SYMINSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1378 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6bd0 <col:16> 'int'
| |     |-value: Int 1879047678
| |     `-IntegerLiteral 0x5584f3dd6bb0 <col:16> 'int' 1879047678
| |-EnumConstantDecl 0x5584f3dd6c88 <line:89:5, col:17> col:5 DT_SYMINENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1390 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6c68 <col:17> 'int'
| |     |-value: Int 1879047679
| |     `-IntegerLiteral 0x5584f3dd6c48 <col:17> 'int' 1879047679
| |-EnumConstantDecl 0x5584f3dd6d20 <line:90:5, col:18> col:5 DT_GNU_XHASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd13a8 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6d00 <col:18> 'int'
| |     |-value: Int 1879047924
| |     `-IntegerLiteral 0x5584f3dd6ce0 <col:18> 'int' 1879047924
| |-EnumConstantDecl 0x5584f3dd6db8 <line:91:5, col:17> col:5 DT_GNU_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd13c0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6d98 <col:17> 'int'
| |     |-value: Int 1879047925
| |     `-IntegerLiteral 0x5584f3dd6d78 <col:17> 'int' 1879047925
| |-EnumConstantDecl 0x5584f3dd6e50 <line:92:5, col:20> col:5 DT_TLSDESC_PLT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd13d8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6e30 <col:20> 'int'
| |     |-value: Int 1879047926
| |     `-IntegerLiteral 0x5584f3dd6e10 <col:20> 'int' 1879047926
| |-EnumConstantDecl 0x5584f3dd6ee8 <line:93:5, col:20> col:5 DT_TLSDESC_GOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd13f0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6ec8 <col:20> 'int'
| |     |-value: Int 1879047927
| |     `-IntegerLiteral 0x5584f3dd6ea8 <col:20> 'int' 1879047927
| |-EnumConstantDecl 0x5584f3dd6f80 <line:94:5, col:21> col:5 DT_GNU_CONFLICT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1408 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6f60 <col:21> 'int'
| |     |-value: Int 1879047928
| |     `-IntegerLiteral 0x5584f3dd6f40 <col:21> 'int' 1879047928
| |-EnumConstantDecl 0x5584f3dd7018 <line:95:5, col:20> col:5 DT_GNU_LIBLIST 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1420 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6ff8 <col:20> 'int'
| |     |-value: Int 1879047929
| |     `-IntegerLiteral 0x5584f3dd6fd8 <col:20> 'int' 1879047929
| |-EnumConstantDecl 0x5584f3dd70b0 <line:96:5, col:15> col:5 DT_CONFIG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1438 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd7090 <col:15> 'int'
| |     |-value: Int 1879047930
| |     `-IntegerLiteral 0x5584f3dd7070 <col:15> 'int' 1879047930
| |-EnumConstantDecl 0x5584f3dd7148 <line:97:5, col:17> col:5 DT_DEPAUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1450 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd7128 <col:17> 'int'
| |     |-value: Int 1879047931
| |     `-IntegerLiteral 0x5584f3dd7108 <col:17> 'int' 1879047931
| |-EnumConstantDecl 0x5584f3dd71e0 <line:98:5, col:14> col:5 DT_AUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1468 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd71c0 <col:14> 'int'
| |     |-value: Int 1879047932
| |     `-IntegerLiteral 0x5584f3dd71a0 <col:14> 'int' 1879047932
| |-EnumConstantDecl 0x5584f3dd7278 <line:99:5, col:15> col:5 DT_PLTPAD 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1480 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd7258 <col:15> 'int'
| |     |-value: Int 1879047933
| |     `-IntegerLiteral 0x5584f3dd7238 <col:15> 'int' 1879047933
| |-EnumConstantDecl 0x5584f3dd7310 <line:100:5, col:16> col:5 DT_MOVETAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1498 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd72f0 <col:16> 'int'
| |     |-value: Int 1879047934
| |     `-IntegerLiteral 0x5584f3dd72d0 <col:16> 'int' 1879047934
| |-EnumConstantDecl 0x5584f3dd73a8 <line:101:5, col:16> col:5 DT_SYMINFO 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd14b0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd7388 <col:16> 'int'
| |     |-value: Int 1879047935
| |     `-IntegerLiteral 0x5584f3dd7368 <col:16> 'int' 1879047935
| |-EnumConstantDecl 0x5584f3dd7440 <line:102:5, col:15> col:5 DT_VERSYM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd14c8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd7420 <col:15> 'int'
| |     |-value: Int 1879048176
| |     `-IntegerLiteral 0x5584f3dd7400 <col:15> 'int' 1879048176
| |-EnumConstantDecl 0x5584f3dd0980 <line:103:5, col:18> col:5 DT_RELACOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd14e0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0960 <col:18> 'int'
| |     |-value: Int 1879048185
| |     `-IntegerLiteral 0x5584f3dd0940 <col:18> 'int' 1879048185
| |-EnumConstantDecl 0x5584f3dd0a18 <line:104:5, col:17> col:5 DT_RELCOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd14f8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd09f8 <col:17> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x5584f3dd09d8 <col:17> 'int' 1879048186
| |-EnumConstantDecl 0x5584f3dd0ab0 <line:105:5, col:16> col:5 DT_FLAGS_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1510 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0a90 <col:16> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x5584f3dd0a70 <col:16> 'int' 1879048187
| |-EnumConstantDecl 0x5584f3dd0b48 <line:106:5, col:15> col:5 DT_VERDEF 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1528 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0b28 <col:15> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x5584f3dd0b08 <col:15> 'int' 1879048188
| |-EnumConstantDecl 0x5584f3dd0be0 <line:107:5, col:18> col:5 DT_VERDEFNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1540 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0bc0 <col:18> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x5584f3dd0ba0 <col:18> 'int' 1879048189
| |-EnumConstantDecl 0x5584f3dd0c78 <line:108:5, col:16> col:5 DT_VERNEED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1558 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0c58 <col:16> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x5584f3dd0c38 <col:16> 'int' 1879048190
| |-EnumConstantDecl 0x5584f3dd0d10 <line:109:5, col:19> col:5 DT_VERNEEDNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1570 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0cf0 <col:19> 'int'
| |     |-value: Int 1879048191
| |     `-IntegerLiteral 0x5584f3dd0cd0 <col:19> 'int' 1879048191
| |-EnumConstantDecl 0x5584f3dd0da8 <line:110:5, col:18> col:5 DT_AUXILIARY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5584f3dd1588 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd0d88 <col:18> 'int'
| |     |-value: Int 2147483645
| |     `-IntegerLiteral 0x5584f3dd0d68 <col:18> 'int' 2147483645
| `-EnumConstantDecl 0x5584f3dd0e40 <line:111:5, col:15> col:5 DT_FILTER 'Elf64_DynTag'
|   `-ImplicitCastExpr 0x5584f3dd15a0 <col:15> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5584f3dd0e20 <col:15> 'int'
|       |-value: Int 2147483647
|       `-IntegerLiteral 0x5584f3dd0e00 <col:15> 'int' 2147483647
|-TypedefDecl 0x5584f3dd1618 <line:35:1, line:112:3> col:3 Elf64_DynTag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-ElaboratedType 0x5584f3dd15c0 'enum Elf64_DynTag' sugar
|   `-EnumType 0x5584f3dcd880 'Elf64_DynTag'
|     `-Enum 0x5584f3dcd7e0 'Elf64_DynTag'
|-EnumDecl 0x5584f3dd1698 <line:114:9, line:126:1> line:114:14 Elf_ProgramHeaderType
| |-EnumConstantDecl 0x5584f3dd17a0 <line:115:5, col:13> col:5 PT_NULL 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3630 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd1780 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5584f3dd1760 <col:13> 'int' 0
| |-EnumConstantDecl 0x5584f3dd1838 <line:116:5, col:13> col:5 PT_LOAD 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3648 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd1818 <col:13> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5584f3dd17f8 <col:13> 'int' 1
| |-EnumConstantDecl 0x5584f3dd18d0 <line:117:5, col:16> col:5 PT_DYNAMIC 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3660 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd18b0 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5584f3dd1890 <col:16> 'int' 2
| |-EnumConstantDecl 0x5584f3dd31b0 <line:118:5, col:15> col:5 PT_INTERP 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3678 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd3190 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5584f3dd3170 <col:15> 'int' 3
| |-EnumConstantDecl 0x5584f3dd3248 <line:119:5, col:13> col:5 PT_NOTE 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3690 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd3228 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5584f3dd3208 <col:13> 'int' 4
| |-EnumConstantDecl 0x5584f3dd32e0 <line:120:5, col:14> col:5 PT_SHLIB 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd36a8 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd32c0 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5584f3dd32a0 <col:14> 'int' 5
| |-EnumConstantDecl 0x5584f3dd3378 <line:121:5, col:13> col:5 PT_PHDR 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd36c0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd3358 <col:13> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5584f3dd3338 <col:13> 'int' 6
| |-EnumConstantDecl 0x5584f3dd3410 <line:122:5, col:12> col:5 PT_TLS 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd36d8 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd33f0 <col:12> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5584f3dd33d0 <col:12> 'int' 7
| |-EnumConstantDecl 0x5584f3dd34a8 <line:123:5, col:21> col:5 PT_GNU_EH_FRAME 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd36f0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd3488 <col:21> 'int'
| |     |-value: Int 1685382480
| |     `-IntegerLiteral 0x5584f3dd3468 <col:21> 'int' 1685382480
| |-EnumConstantDecl 0x5584f3dd3540 <line:124:5, col:18> col:5 PT_GNU_STACK 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd3708 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd3520 <col:18> 'int'
| |     |-value: Int 1685382481
| |     `-IntegerLiteral 0x5584f3dd3500 <col:18> 'int' 1685382481
| `-EnumConstantDecl 0x5584f3dd35d8 <line:125:5, col:18> col:5 PT_GNU_RELRO 'Elf_ProgramHeaderType'
|   `-ImplicitCastExpr 0x5584f3dd3720 <col:18> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5584f3dd35b8 <col:18> 'int'
|       |-value: Int 1685382482
|       `-IntegerLiteral 0x5584f3dd3598 <col:18> 'int' 1685382482
|-TypedefDecl 0x5584f3dd3798 <line:114:1, line:126:3> col:3 Elf_ProgramHeaderType 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| `-ElaboratedType 0x5584f3dd3740 'enum Elf_ProgramHeaderType' sugar
|   `-EnumType 0x5584f3dd1740 'Elf_ProgramHeaderType'
|     `-Enum 0x5584f3dd1698 'Elf_ProgramHeaderType'
|-CXXRecordDecl 0x5584f3dd3818 <line:128:9, col:16> col:16 struct Elf64_Sym
|-TypedefDecl 0x5584f3dd3928 <col:1, col:26> col:26 Elf64_Sym 'struct Elf64_Sym':'Elf64_Sym'
| `-ElaboratedType 0x5584f3dd38d0 'struct Elf64_Sym' sugar
|   `-RecordType 0x5584f3dd38b0 'Elf64_Sym'
|     `-CXXRecord 0x5584f3dd3ac0 'Elf64_Sym'
|-TypedefDecl 0x5584f3dd3a18 <col:1, col:38> col:38 PElf64_Sym 'struct Elf64_Sym *'
| `-PointerType 0x5584f3dd39c0 'struct Elf64_Sym *'
|   `-ElaboratedType 0x5584f3dd38d0 'struct Elf64_Sym' sugar
|     `-RecordType 0x5584f3dd38b0 'Elf64_Sym'
|       `-CXXRecord 0x5584f3dd3ac0 'Elf64_Sym'
|-CXXRecordDecl 0x5584f3dd3ac0 prev 0x5584f3dd3818 <line:130:1, line:137:1> line:130:8 struct Elf64_Sym definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dd3bb8 <col:1, col:8> col:8 implicit struct Elf64_Sym
| |-FieldDecl 0x5584f3dd3c58 <line:131:5, col:11> col:11 st_name 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dd3cb8 <line:132:5, col:10> col:10 st_info 'byte':'unsigned char'
| |-FieldDecl 0x5584f3dd3d18 <line:133:5, col:10> col:10 st_other 'byte':'unsigned char'
| |-FieldDecl 0x5584f3dd3de0 <line:134:5, col:10> col:10 st_shndx 'word':'unsigned short'
| |-FieldDecl 0x5584f3dd3ea0 <line:135:5, col:11> col:11 st_value 'qword':'unsigned long'
| `-FieldDecl 0x5584f3dd3f00 <line:136:5, col:11> col:11 st_size 'qword':'unsigned long'
|-CXXRecordDecl 0x5584f3dd3f68 <line:139:9, col:16> col:16 struct Elf64_Phdr
|-TypedefDecl 0x5584f3dd4078 <col:1, col:27> col:27 Elf64_Phdr 'struct Elf64_Phdr':'Elf64_Phdr'
| `-ElaboratedType 0x5584f3dd4020 'struct Elf64_Phdr' sugar
|   `-RecordType 0x5584f3dd4000 'Elf64_Phdr'
|     `-CXXRecord 0x5584f3dd4230 'Elf64_Phdr'
|-TypedefDecl 0x5584f3dd4180 <col:1, col:40> col:40 PElf64_Phdr 'struct Elf64_Phdr *'
| `-PointerType 0x5584f3dd4110 'struct Elf64_Phdr *'
|   `-ElaboratedType 0x5584f3dd4020 'struct Elf64_Phdr' sugar
|     `-RecordType 0x5584f3dd4000 'Elf64_Phdr'
|       `-CXXRecord 0x5584f3dd4230 'Elf64_Phdr'
|-CXXRecordDecl 0x5584f3dd4230 prev 0x5584f3dd3f68 <line:141:1, line:150:1> line:141:8 struct Elf64_Phdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dd4328 <col:1, col:8> col:8 implicit struct Elf64_Phdr
| |-FieldDecl 0x5584f3dd4440 <line:142:5, col:32> col:32 p_type 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| |-FieldDecl 0x5584f3dd44a0 <line:143:5, col:11> col:11 p_flags 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dd4500 <line:144:5, col:11> col:11 p_offset 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd4560 <line:145:5, col:11> col:11 p_vaddr 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd45c0 <line:146:5, col:11> col:11 p_paddr 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd4620 <line:147:5, col:11> col:11 p_filesz 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd4680 <line:148:5, col:11> col:11 p_memsz 'qword':'unsigned long'
| `-FieldDecl 0x5584f3dd46e0 <line:149:5, col:11> col:11 p_align 'qword':'unsigned long'
|-CXXRecordDecl 0x5584f3dd4748 <line:152:9, col:16> col:16 struct Elf64_Dyn
|-TypedefDecl 0x5584f3dd4858 <col:1, col:26> col:26 Elf64_Dyn 'struct Elf64_Dyn':'Elf64_Dyn'
| `-ElaboratedType 0x5584f3dd4800 'struct Elf64_Dyn' sugar
|   `-RecordType 0x5584f3dd47e0 'Elf64_Dyn'
|     `-CXXRecord 0x5584f3dd49f0 'Elf64_Dyn'
|-TypedefDecl 0x5584f3dd4948 <col:1, col:38> col:38 PElf64_Dyn 'struct Elf64_Dyn *'
| `-PointerType 0x5584f3dd48f0 'struct Elf64_Dyn *'
|   `-ElaboratedType 0x5584f3dd4800 'struct Elf64_Dyn' sugar
|     `-RecordType 0x5584f3dd47e0 'Elf64_Dyn'
|       `-CXXRecord 0x5584f3dd49f0 'Elf64_Dyn'
|-CXXRecordDecl 0x5584f3dd49f0 prev 0x5584f3dd4748 <line:154:1, line:157:1> line:154:8 struct Elf64_Dyn definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dd4ae8 <col:1, col:8> col:8 implicit struct Elf64_Dyn
| |-FieldDecl 0x5584f3dd4c00 <line:155:5, col:23> col:23 d_tag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-FieldDecl 0x5584f3dd4c60 <line:156:5, col:11> col:11 d_val 'qword':'unsigned long'
|-CXXRecordDecl 0x5584f3dd4cc8 <line:159:9, col:16> col:16 struct Elf64_Shdr
|-TypedefDecl 0x5584f3dd4dd8 <col:1, col:27> col:27 Elf64_Shdr 'struct Elf64_Shdr':'Elf64_Shdr'
| `-ElaboratedType 0x5584f3dd4d80 'struct Elf64_Shdr' sugar
|   `-RecordType 0x5584f3dd4d60 'Elf64_Shdr'
|     `-CXXRecord 0x5584f3dd9880 'Elf64_Shdr'
|-TypedefDecl 0x5584f3dd4ec8 <col:1, col:40> col:40 PElf64_Shdr 'struct Elf64_Shdr *'
| `-PointerType 0x5584f3dd4e70 'struct Elf64_Shdr *'
|   `-ElaboratedType 0x5584f3dd4d80 'struct Elf64_Shdr' sugar
|     `-RecordType 0x5584f3dd4d60 'Elf64_Shdr'
|       `-CXXRecord 0x5584f3dd9880 'Elf64_Shdr'
|-EnumDecl 0x5584f3dd4f40 <line:161:9, line:191:1> line:161:14 Elf_SectionHeaderType
| |-EnumConstantDecl 0x5584f3dd5040 <line:162:5, col:14> col:5 SHT_NULL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd6158 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5020 <col:14> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5584f3dd5000 <col:14> 'int' 0
| |-EnumConstantDecl 0x5584f3dd50d8 <line:163:5, col:18> col:5 SHT_PROGBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd6170 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd50b8 <col:18> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5584f3dd5098 <col:18> 'int' 1
| |-EnumConstantDecl 0x5584f3dd5190 <line:164:5, col:16> col:5 SHT_SYMTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd94e0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5150 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5584f3dd5130 <col:16> 'int' 2
| |-EnumConstantDecl 0x5584f3dd5228 <line:165:5, col:16> col:5 SHT_STRTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd94f8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5208 <col:16> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5584f3dd51e8 <col:16> 'int' 3
| |-EnumConstantDecl 0x5584f3dd52c0 <line:166:5, col:14> col:5 SHT_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9510 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd52a0 <col:14> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5584f3dd5280 <col:14> 'int' 4
| |-EnumConstantDecl 0x5584f3dd5358 <line:167:5, col:14> col:5 SHT_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9528 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5338 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5584f3dd5318 <col:14> 'int' 5
| |-EnumConstantDecl 0x5584f3dd53f0 <line:168:5, col:17> col:5 SHT_DYNAMIC 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9540 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd53d0 <col:17> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5584f3dd53b0 <col:17> 'int' 6
| |-EnumConstantDecl 0x5584f3dd5488 <line:169:5, col:14> col:5 SHT_NOTE 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9558 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5468 <col:14> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5584f3dd5448 <col:14> 'int' 7
| |-EnumConstantDecl 0x5584f3dd5520 <line:170:5, col:16> col:5 SHT_NOBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9570 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5500 <col:16> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x5584f3dd54e0 <col:16> 'int' 8
| |-EnumConstantDecl 0x5584f3dd55b8 <line:171:5, col:13> col:5 SHT_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9588 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5598 <col:13> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x5584f3dd5578 <col:13> 'int' 9
| |-EnumConstantDecl 0x5584f3dd5650 <line:172:5, col:15> col:5 SHT_SHLIB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd95a0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5630 <col:15> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x5584f3dd5610 <col:15> 'int' 10
| |-EnumConstantDecl 0x5584f3dd56e8 <line:173:5, col:16> col:5 SHT_DYNSYM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd95b8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd56c8 <col:16> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x5584f3dd56a8 <col:16> 'int' 11
| |-EnumConstantDecl 0x5584f3dd5780 <line:174:5, col:20> col:5 SHT_INIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd95d0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5760 <col:20> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x5584f3dd5740 <col:20> 'int' 14
| |-EnumConstantDecl 0x5584f3dd5818 <line:175:5, col:20> col:5 SHT_FINI_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd95e8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd57f8 <col:20> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x5584f3dd57d8 <col:20> 'int' 15
| |-EnumConstantDecl 0x5584f3dd58b0 <line:176:5, col:23> col:5 SHT_PREINIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9600 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5890 <col:23> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x5584f3dd5870 <col:23> 'int' 16
| |-EnumConstantDecl 0x5584f3dd5948 <line:177:5, col:15> col:5 SHT_GROUP 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9618 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5928 <col:15> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x5584f3dd5908 <col:15> 'int' 17
| |-EnumConstantDecl 0x5584f3dd59e0 <line:178:5, col:22> col:5 SHT_SYMTAB_SHNDX 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9630 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd59c0 <col:22> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x5584f3dd59a0 <col:22> 'int' 18
| |-EnumConstantDecl 0x5584f3dd5a78 <line:179:5, col:21> col:5 SHT_ANDROID_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9648 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5a58 <col:21> 'int'
| |     |-value: Int 1610612737
| |     `-IntegerLiteral 0x5584f3dd5a38 <col:21> 'int' 1610612737
| |-EnumConstantDecl 0x5584f3dd5b10 <line:180:5, col:22> col:5 SHT_ANDROID_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9660 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5af0 <col:22> 'int'
| |     |-value: Int 1610612738
| |     `-IntegerLiteral 0x5584f3dd5ad0 <col:22> 'int' 1610612738
| |-EnumConstantDecl 0x5584f3dd5ba8 <line:181:5, col:24> col:5 SHT_GNU_ATTRIBUTES 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9678 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5b88 <col:24> 'int'
| |     |-value: Int 1879048181
| |     `-IntegerLiteral 0x5584f3dd5b68 <col:24> 'int' 1879048181
| |-EnumConstantDecl 0x5584f3dd5c40 <line:182:5, col:18> col:5 SHT_GNU_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9690 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5c20 <col:18> 'int'
| |     |-value: Int 1879048182
| |     `-IntegerLiteral 0x5584f3dd5c00 <col:18> 'int' 1879048182
| |-EnumConstantDecl 0x5584f3dd5cd8 <line:183:5, col:21> col:5 SHT_GNU_LIBLIST 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd96a8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5cb8 <col:21> 'int'
| |     |-value: Int 1879048183
| |     `-IntegerLiteral 0x5584f3dd5c98 <col:21> 'int' 1879048183
| |-EnumConstantDecl 0x5584f3dd5d70 <line:184:5, col:18> col:5 SHT_CHECKSUM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd96c0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5d50 <col:18> 'int'
| |     |-value: Int 1879048184
| |     `-IntegerLiteral 0x5584f3dd5d30 <col:18> 'int' 1879048184
| |-EnumConstantDecl 0x5584f3dd5e08 <line:185:5, col:19> col:5 SHT_SUNW_move 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd96d8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5de8 <col:19> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x5584f3dd5dc8 <col:19> 'int' 1879048186
| |-EnumConstantDecl 0x5584f3dd5ea0 <line:186:5, col:21> col:5 SHT_SUNW_COMDAT 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd96f0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5e80 <col:21> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x5584f3dd5e60 <col:21> 'int' 1879048187
| |-EnumConstantDecl 0x5584f3dd5f38 <line:187:5, col:22> col:5 SHT_SUNW_syminfo 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9708 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5f18 <col:22> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x5584f3dd5ef8 <col:22> 'int' 1879048188
| |-EnumConstantDecl 0x5584f3dd5fd0 <line:188:5, col:20> col:5 SHT_GNU_verdef 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9720 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd5fb0 <col:20> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x5584f3dd5f90 <col:20> 'int' 1879048189
| |-EnumConstantDecl 0x5584f3dd6068 <line:189:5, col:21> col:5 SHT_GNU_verneed 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5584f3dd9738 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5584f3dd6048 <col:21> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x5584f3dd6028 <col:21> 'int' 1879048190
| `-EnumConstantDecl 0x5584f3dd6100 <line:190:5, col:20> col:5 SHT_GNU_versym 'Elf_SectionHeaderType'
|   `-ImplicitCastExpr 0x5584f3dd9750 <col:20> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5584f3dd60e0 <col:20> 'int'
|       |-value: Int 1879048191
|       `-IntegerLiteral 0x5584f3dd60c0 <col:20> 'int' 1879048191
|-TypedefDecl 0x5584f3dd97c8 <line:161:1, line:191:3> col:3 Elf_SectionHeaderType 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| `-ElaboratedType 0x5584f3dd9770 'enum Elf_SectionHeaderType' sugar
|   `-EnumType 0x5584f3dd4fe0 'Elf_SectionHeaderType'
|     `-Enum 0x5584f3dd4f40 'Elf_SectionHeaderType'
|-CXXRecordDecl 0x5584f3dd9880 prev 0x5584f3dd4cc8 <line:193:1, line:204:1> line:193:8 struct Elf64_Shdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dd9978 <col:1, col:8> col:8 implicit struct Elf64_Shdr
| |-FieldDecl 0x5584f3dd9a18 <line:194:5, col:11> col:11 sh_name 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dd9af0 <line:195:5, col:32> col:32 sh_type 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| |-FieldDecl 0x5584f3dd9b50 <line:196:5, col:11> col:11 sh_flags 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd9bb0 <line:197:5, col:11> col:11 sh_addr 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd9c10 <line:198:5, col:11> col:11 sh_offset 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd9c70 <line:199:5, col:11> col:11 sh_size 'qword':'unsigned long'
| |-FieldDecl 0x5584f3dd9cd0 <line:200:5, col:11> col:11 sh_link 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dd9d30 <line:201:5, col:11> col:11 sh_info 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dd9d90 <line:202:5, col:11> col:11 sh_addralign 'qword':'unsigned long'
| `-FieldDecl 0x5584f3dd9df0 <line:203:5, col:11> col:11 sh_entsize 'qword':'unsigned long'
|-CXXRecordDecl 0x5584f3dd9e58 <line:206:9, col:16> col:16 struct NoteAbiTag
|-TypedefDecl 0x5584f3dd9f68 <col:1, col:27> col:27 NoteAbiTag 'struct NoteAbiTag':'NoteAbiTag'
| `-ElaboratedType 0x5584f3dd9f10 'struct NoteAbiTag' sugar
|   `-RecordType 0x5584f3dd9ef0 'NoteAbiTag'
|     `-CXXRecord 0x5584f3dda100 'NoteAbiTag'
|-TypedefDecl 0x5584f3dda058 <col:1, col:40> col:40 PNoteAbiTag 'struct NoteAbiTag *'
| `-PointerType 0x5584f3dda000 'struct NoteAbiTag *'
|   `-ElaboratedType 0x5584f3dd9f10 'struct NoteAbiTag' sugar
|     `-RecordType 0x5584f3dd9ef0 'NoteAbiTag'
|       `-CXXRecord 0x5584f3dda100 'NoteAbiTag'
|-CXXRecordDecl 0x5584f3dda100 prev 0x5584f3dd9e58 <line:208:1, line:215:1> line:208:8 struct NoteAbiTag definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3dda1f8 <col:1, col:8> col:8 implicit struct NoteAbiTag
| |-FieldDecl 0x5584f3dda298 <line:209:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dda2f8 <line:210:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dda358 <line:211:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x5584f3dda440 <line:212:5, col:16> col:10 name 'char[4]'
| |-FieldDecl 0x5584f3ddb100 <line:213:5, col:11> col:11 abiType 'dword':'unsigned int'
| `-FieldDecl 0x5584f3ddb210 <line:214:5, col:34> col:11 requiredKernelVersion 'dword[3]'
|-CXXRecordDecl 0x5584f3ddb278 <line:217:9, col:16> col:16 struct Elf64_Rela
|-TypedefDecl 0x5584f3ddb388 <col:1, col:27> col:27 Elf64_Rela 'struct Elf64_Rela':'Elf64_Rela'
| `-ElaboratedType 0x5584f3ddb330 'struct Elf64_Rela' sugar
|   `-RecordType 0x5584f3ddb310 'Elf64_Rela'
|     `-CXXRecord 0x5584f3ddb520 'Elf64_Rela'
|-TypedefDecl 0x5584f3ddb478 <col:1, col:40> col:40 PElf64_Rela 'struct Elf64_Rela *'
| `-PointerType 0x5584f3ddb420 'struct Elf64_Rela *'
|   `-ElaboratedType 0x5584f3ddb330 'struct Elf64_Rela' sugar
|     `-RecordType 0x5584f3ddb310 'Elf64_Rela'
|       `-CXXRecord 0x5584f3ddb520 'Elf64_Rela'
|-CXXRecordDecl 0x5584f3ddb520 prev 0x5584f3ddb278 <line:219:1, line:223:1> line:219:8 struct Elf64_Rela definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3ddb618 <col:1, col:8> col:8 implicit struct Elf64_Rela
| |-FieldDecl 0x5584f3ddb6b8 <line:220:5, col:11> col:11 r_offset 'qword':'unsigned long'
| |-FieldDecl 0x5584f3ddb718 <line:221:5, col:11> col:11 r_info 'qword':'unsigned long'
| `-FieldDecl 0x5584f3ddb778 <line:222:5, col:11> col:11 r_addend 'qword':'unsigned long'
|-CXXRecordDecl 0x5584f3ddb7e0 <line:225:9, col:16> col:16 struct GnuBuildId
|-TypedefDecl 0x5584f3ddb8e8 <col:1, col:27> col:27 GnuBuildId 'struct GnuBuildId':'GnuBuildId'
| `-ElaboratedType 0x5584f3ddb890 'struct GnuBuildId' sugar
|   `-RecordType 0x5584f3ddb870 'GnuBuildId'
|     `-CXXRecord 0x5584f3ddba80 'GnuBuildId'
|-TypedefDecl 0x5584f3ddb9d8 <col:1, col:40> col:40 PGnuBuildId 'struct GnuBuildId *'
| `-PointerType 0x5584f3ddb980 'struct GnuBuildId *'
|   `-ElaboratedType 0x5584f3ddb890 'struct GnuBuildId' sugar
|     `-RecordType 0x5584f3ddb870 'GnuBuildId'
|       `-CXXRecord 0x5584f3ddba80 'GnuBuildId'
|-CXXRecordDecl 0x5584f3ddba80 prev 0x5584f3ddb7e0 <line:227:1, line:233:1> line:227:8 struct GnuBuildId definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3ddbb78 <col:1, col:8> col:8 implicit struct GnuBuildId
| |-FieldDecl 0x5584f3ddbc18 <line:228:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddbc78 <line:229:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddbcd8 <line:230:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddbd88 <line:231:5, col:16> col:10 name 'char[4]'
| `-FieldDecl 0x5584f3ddbea0 <line:232:5, col:17> col:10 hash 'byte[20]'
|-CXXRecordDecl 0x5584f3ddbf08 <line:235:9, col:16> col:16 struct NoteGnuProperty_4
|-TypedefDecl 0x5584f3ddc018 <col:1, col:34> col:34 NoteGnuProperty_4 'struct NoteGnuProperty_4':'NoteGnuProperty_4'
| `-ElaboratedType 0x5584f3ddbfc0 'struct NoteGnuProperty_4' sugar
|   `-RecordType 0x5584f3ddbfa0 'NoteGnuProperty_4'
|     `-CXXRecord 0x5584f3ddca00 'NoteGnuProperty_4'
|-TypedefDecl 0x5584f3ddc958 <col:1, col:54> col:54 PNoteGnuProperty_4 'struct NoteGnuProperty_4 *'
| `-PointerType 0x5584f3ddc0b0 'struct NoteGnuProperty_4 *'
|   `-ElaboratedType 0x5584f3ddbfc0 'struct NoteGnuProperty_4' sugar
|     `-RecordType 0x5584f3ddbfa0 'NoteGnuProperty_4'
|       `-CXXRecord 0x5584f3ddca00 'NoteGnuProperty_4'
|-CXXRecordDecl 0x5584f3ddca00 prev 0x5584f3ddbf08 <line:237:1, line:242:1> line:237:8 struct NoteGnuProperty_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3ddcaf8 <col:1, col:8> col:8 implicit struct NoteGnuProperty_4
| |-FieldDecl 0x5584f3ddcb98 <line:238:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddcbf8 <line:239:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddcc58 <line:240:5, col:11> col:11 type 'dword':'unsigned int'
| `-FieldDecl 0x5584f3ddcd08 <line:241:5, col:16> col:10 name 'char[4]'
|-CXXRecordDecl 0x5584f3ddcd70 <line:244:9, col:16> col:16 struct Elf64_Ehdr
|-TypedefDecl 0x5584f3ddce78 <col:1, col:27> col:27 Elf64_Ehdr 'struct Elf64_Ehdr':'Elf64_Ehdr'
| `-ElaboratedType 0x5584f3ddce20 'struct Elf64_Ehdr' sugar
|   `-RecordType 0x5584f3ddce00 'Elf64_Ehdr'
|     `-CXXRecord 0x5584f3ddd010 'Elf64_Ehdr'
|-TypedefDecl 0x5584f3ddcf68 <col:1, col:40> col:40 PElf64_Ehdr 'struct Elf64_Ehdr *'
| `-PointerType 0x5584f3ddcf10 'struct Elf64_Ehdr *'
|   `-ElaboratedType 0x5584f3ddce20 'struct Elf64_Ehdr' sugar
|     `-RecordType 0x5584f3ddce00 'Elf64_Ehdr'
|       `-CXXRecord 0x5584f3ddd010 'Elf64_Ehdr'
|-CXXRecordDecl 0x5584f3ddd010 prev 0x5584f3ddcd70 <line:246:1, line:268:1> line:246:8 struct Elf64_Ehdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5584f3ddd108 <col:1, col:8> col:8 implicit struct Elf64_Ehdr
| |-FieldDecl 0x5584f3ddd1a8 <line:247:5, col:10> col:10 e_ident_magic_num 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd290 <line:248:5, col:29> col:10 e_ident_magic_str 'char[3]'
| |-FieldDecl 0x5584f3ddd2f0 <line:249:5, col:10> col:10 e_ident_class 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd350 <line:250:5, col:10> col:10 e_ident_data 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd3b0 <line:251:5, col:10> col:10 e_ident_version 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd410 <line:252:5, col:10> col:10 e_ident_osabi 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd470 <line:253:5, col:10> col:10 e_ident_abiversion 'byte':'unsigned char'
| |-FieldDecl 0x5584f3ddd580 <line:254:5, col:23> col:10 e_ident_pad 'byte[7]'
| |-FieldDecl 0x5584f3ddd5e0 <line:255:5, col:10> col:10 e_type 'word':'unsigned short'
| |-FieldDecl 0x5584f3ddd640 <line:256:5, col:10> col:10 e_machine 'word':'unsigned short'
| |-FieldDecl 0x5584f3ddd6a0 <line:257:5, col:11> col:11 e_version 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddd700 <line:258:5, col:11> col:11 e_entry 'qword':'unsigned long'
| |-FieldDecl 0x5584f3ddd760 <line:259:5, col:11> col:11 e_phoff 'qword':'unsigned long'
| |-FieldDecl 0x5584f3ddd7c0 <line:260:5, col:11> col:11 e_shoff 'qword':'unsigned long'
| |-FieldDecl 0x5584f3ddd820 <line:261:5, col:11> col:11 e_flags 'dword':'unsigned int'
| |-FieldDecl 0x5584f3ddd880 <line:262:5, col:10> col:10 e_ehsize 'word':'unsigned short'
| |-FieldDecl 0x5584f3ddd8e0 <line:263:5, col:10> col:10 e_phentsize 'word':'unsigned short'
| |-FieldDecl 0x5584f3dde170 <line:264:5, col:10> col:10 e_phnum 'word':'unsigned short'
| |-FieldDecl 0x5584f3dde1d0 <line:265:5, col:10> col:10 e_shentsize 'word':'unsigned short'
| |-FieldDecl 0x5584f3dde230 <line:266:5, col:10> col:10 e_shnum 'word':'unsigned short'
| `-FieldDecl 0x5584f3dde290 <line:267:5, col:10> col:10 e_shstrndx 'word':'unsigned short'
|-CXXRecordDecl 0x5584f3dde2f8 <line:270:9, col:16> col:16 struct evp_pkey_ctx_st
|-TypedefDecl 0x5584f3dde408 <col:1, col:32> col:32 evp_pkey_ctx_st 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x5584f3dde3b0 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x5584f3dde390 'evp_pkey_ctx_st'
|     `-CXXRecord 0x5584f3dde5a0 'evp_pkey_ctx_st'
|-TypedefDecl 0x5584f3dde4f8 <col:1, col:50> col:50 Pevp_pkey_ctx_st 'struct evp_pkey_ctx_st *'
| `-PointerType 0x5584f3dde4a0 'struct evp_pkey_ctx_st *'
|   `-ElaboratedType 0x5584f3dde3b0 'struct evp_pkey_ctx_st' sugar
|     `-RecordType 0x5584f3dde390 'evp_pkey_ctx_st'
|       `-CXXRecord 0x5584f3dde5a0 'evp_pkey_ctx_st'
|-CXXRecordDecl 0x5584f3dde5a0 prev 0x5584f3dde2f8 <line:272:1, line:273:1> line:272:8 struct evp_pkey_ctx_st definition
| |-DefinitionData pass_in_registers empty aggregate standard_layout trivially_copyable pod trivial literal has_constexpr_non_copy_move_ctor can_const_default_init
| | |-DefaultConstructor exists trivial constexpr needs_implicit defaulted_is_constexpr
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| `-CXXRecordDecl 0x5584f3dde698 <col:1, col:8> col:8 implicit struct evp_pkey_ctx_st
|-TypedefDecl 0x5584f3dde790 <line:275:1, col:32> col:32 referenced EVP_PKEY_CTX 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x5584f3dde740 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x5584f3dde390 'evp_pkey_ctx_st'
|     `-CXXRecord 0x5584f3dde5a0 'evp_pkey_ctx_st'
|-VarDecl 0x5584f3dde860 <line:279:1, col:11> col:11 main 'undefined':'unsigned char'
|-VarDecl 0x5584f3dde980 <line:280:1, col:12> col:12 completed 'undefined1':'unsigned char'
|-VarDecl 0x5584f3ddea60 <line:281:1, col:12> col:12 used crc32_context 'undefined4':'unsigned int'
|-VarDecl 0x5584f3ddeb40 <line:282:1, col:12> col:12 used g_2 'undefined8':'unsigned long'
|-VarDecl 0x5584f3ddec70 <line:283:1, col:16> col:18 used crc32_tab 'undefined1[1024]'
|-FunctionDecl 0x5584f3ddee98 <line:285:1, line:292:1> line:285:5 _init 'int (EVP_PKEY_CTX *)'
| |-ParmVarDecl 0x5584f3dded88 <col:11, col:25> col:25 ctx 'EVP_PKEY_CTX *'
| `-CompoundStmt 0x5584f3ddf0d0 <line:287:1, line:292:1>
|   |-DeclStmt 0x5584f3ddefc8 <line:288:3, col:12>
|   | `-VarDecl 0x5584f3ddef60 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5584f3ddf068 <line:290:3, col:26> '<dependent type>' contains-errors '='
|   | |-DeclRefExpr 0x5584f3ddefe0 <col:3> 'int' lvalue Var 0x5584f3ddef60 'iVar1' 'int'
|   | `-RecoveryExpr 0x5584f3ddf040 <col:11, col:26> '<dependent type>' contains-errors lvalue
|   |   `-UnresolvedLookupExpr 0x5584f3ddf000 <col:11> '<overloaded function type>' lvalue (ADL) = '__gmon_start__' empty
|   `-ReturnStmt 0x5584f3ddf0c0 <line:291:3, col:10>
|     `-ImplicitCastExpr 0x5584f3ddf0a8 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5584f3ddf088 <col:10> 'int' lvalue Var 0x5584f3ddef60 'iVar1' 'int'
|-FunctionDecl 0x5584f3de1b80 <line:296:1, line:301:1> line:296:6 FUN_00400360 'void ()'
| `-CompoundStmt 0x5584f3de1c58 <line:298:1, line:301:1>
|   `-ReturnStmt 0x5584f3de1c48 <line:300:3>
|-FunctionDecl 0x5584f3de1d60 <line:307:1, line:314:1> line:307:5 referenced printf 'int (char *, ...)'
| |-ParmVarDecl 0x5584f3de1c88 <col:12, col:18> col:18 used __format 'char *'
| `-CompoundStmt 0x5584f3de2048 <line:309:1, line:314:1>
|   |-DeclStmt 0x5584f3de1e90 <line:310:3, col:12>
|   | `-VarDecl 0x5584f3de1e28 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5584f3de1fe0 <line:312:3, col:26> 'int' lvalue '='
|   | |-DeclRefExpr 0x5584f3de1ea8 <col:3> 'int' lvalue Var 0x5584f3de1e28 'iVar1' 'int'
|   | `-CallExpr 0x5584f3de1f98 <col:11, col:26> 'int'
|   |   |-ImplicitCastExpr 0x5584f3de1f80 <col:11> 'int (*)(char *, ...)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x5584f3de1f30 <col:11> 'int (char *, ...)' lvalue Function 0x5584f3de1d60 'printf' 'int (char *, ...)'
|   |   `-ImplicitCastExpr 0x5584f3de1fc8 <col:18> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x5584f3de1f10 <col:18> 'char *' lvalue ParmVar 0x5584f3de1c88 '__format' 'char *'
|   `-ReturnStmt 0x5584f3de2038 <line:313:3, col:10>
|     `-ImplicitCastExpr 0x5584f3de2020 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5584f3de2000 <col:10> 'int' lvalue Var 0x5584f3de1e28 'iVar1' 'int'
|-FunctionDecl 0x5584f3de21e8 <line:320:1, line:327:1> line:320:5 used strcmp 'int (char *, char *)'
| |-ParmVarDecl 0x5584f3de2088 <col:12, col:18> col:18 used __s1 'char *'
| |-ParmVarDecl 0x5584f3de2108 <col:23, col:29> col:29 used __s2 'char *'
| `-CompoundStmt 0x5584f3de2518 <line:322:1, line:327:1>
|   |-DeclStmt 0x5584f3de2320 <line:323:3, col:12>
|   | `-VarDecl 0x5584f3de22b8 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5584f3de24b0 <line:325:3, col:27> 'int' lvalue '='
|   | |-DeclRefExpr 0x5584f3de2338 <col:3> 'int' lvalue Var 0x5584f3de22b8 'iVar1' 'int'
|   | `-CallExpr 0x5584f3de2448 <col:11, col:27> 'int'
|   |   |-ImplicitCastExpr 0x5584f3de2430 <col:11> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x5584f3de23e0 <col:11> 'int (char *, char *)' lvalue Function 0x5584f3de21e8 'strcmp' 'int (char *, char *)'
|   |   |-ImplicitCastExpr 0x5584f3de2480 <col:18> 'char *' <LValueToRValue>
|   |   | `-DeclRefExpr 0x5584f3de23a0 <col:18> 'char *' lvalue ParmVar 0x5584f3de2088 '__s1' 'char *'
|   |   `-ImplicitCastExpr 0x5584f3de2498 <col:23> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x5584f3de23c0 <col:23> 'char *' lvalue ParmVar 0x5584f3de2108 '__s2' 'char *'
|   `-ReturnStmt 0x5584f3de2508 <line:326:3, col:10>
|     `-ImplicitCastExpr 0x5584f3de24f0 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5584f3de24d0 <col:10> 'int' lvalue Var 0x5584f3de22b8 'iVar1' 'int'
|-VarDecl 0x5584f3de2550 <line:331:1, col:6> col:6 invalid processEntry 'void'
|-FunctionDecl 0x5584f3de2650 <line:344:1, line:348:1> line:344:6 _dl_relocate_static_pie 'void ()'
| `-CompoundStmt 0x5584f3de2708 <line:346:1, line:348:1>
|   `-ReturnStmt 0x5584f3de26f8 <line:347:3>
|-FunctionDecl 0x5584f3de27b8 <line:355:1, line:359:1> line:355:6 used deregister_tm_clones 'void ()'
| `-CompoundStmt 0x5584f3de2870 <line:357:1, line:359:1>
|   `-ReturnStmt 0x5584f3de2860 <line:358:3>
|-FunctionDecl 0x5584f3de2920 <line:366:1, line:370:1> line:366:6 used register_tm_clones 'void ()'
| `-CompoundStmt 0x5584f3de29d8 <line:368:1, line:370:1>
|   `-ReturnStmt 0x5584f3de29c8 <line:369:3>
|-FunctionDecl 0x5584f3de2ad0 <line:374:1, line:383:1> line:374:6 __do_global_dtors_aux 'void ()'
| `-CompoundStmt 0x5584f3de2d10 <line:376:1, line:383:1>
|   |-IfStmt 0x5584f3de2ce0 <line:377:3, line:381:3>
|   | |-RecoveryExpr 0x5584f3de2b90 <line:377:7, col:22> 'bool' contains-errors
|   | `-CompoundStmt 0x5584f3de2cc0 <col:28, line:381:3>
|   |   |-CallExpr 0x5584f3de2c68 <line:378:5, col:26> 'void'
|   |   | `-ImplicitCastExpr 0x5584f3de2c50 <col:5> 'void (*)()' <FunctionToPointerDecay>
|   |   |   `-DeclRefExpr 0x5584f3de2bf8 <col:5> 'void ()' lvalue Function 0x5584f3de27b8 'deregister_tm_clones' 'void ()'
|   |   `-ReturnStmt 0x5584f3de2cb0 <line:380:5>
|   `-ReturnStmt 0x5584f3de2d00 <line:382:3>
|-FunctionDecl 0x5584f3de2dc8 <line:387:1, line:392:1> line:387:6 frame_dummy 'void ()'
| `-CompoundStmt 0x5584f3de2f28 <line:389:1, line:392:1>
|   |-CallExpr 0x5584f3de2ef0 <line:390:3, col:22> 'void'
|   | `-ImplicitCastExpr 0x5584f3de2ed8 <col:3> 'void (*)()' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x5584f3de2eb8 <col:3> 'void ()' lvalue Function 0x5584f3de2920 'register_tm_clones' 'void ()'
|   `-ReturnStmt 0x5584f3de2f18 <line:391:3>
|-FunctionDecl 0x5584f3de3060 <line:396:1, line:400:1> line:396:12 used codemarker_alpha 'undefined4 (undefined4)'
| |-ParmVarDecl 0x5584f3de2f58 <col:29, col:40> col:40 used param_1 'undefined4':'unsigned int'
| `-CompoundStmt 0x5584f3de3158 <line:398:1, line:400:1>
|   `-ReturnStmt 0x5584f3de3148 <line:399:3, col:10>
|     `-ImplicitCastExpr 0x5584f3de3130 <col:10> 'undefined4':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x5584f3de3110 <col:10> 'undefined4':'unsigned int' lvalue ParmVar 0x5584f3de2f58 'param_1' 'undefined4':'unsigned int'
|-FunctionDecl 0x5584f3de3320 <line:404:1, line:438:1> line:404:12 invalid main 'undefined8 (int, long)'
| |-ParmVarDecl 0x5584f3de3188 <col:17, col:21> col:21 used param_1 'int'
| |-ParmVarDecl 0x5584f3de3208 <col:29, col:34> col:34 used param_2 'long'
| `-CompoundStmt 0x5584f3de7020 <line:406:1, line:438:1>
|   |-DeclStmt 0x5584f3de34a0 <line:407:3, col:12>
|   | `-VarDecl 0x5584f3de3438 <col:3, col:7> col:7 used iVar1 'int'
|   |-DeclStmt 0x5584f3de3538 <line:408:3, col:15>
|   | `-VarDecl 0x5584f3de34d0 <col:3, col:7> col:7 used local_20 'int'
|   |-DeclStmt 0x5584f3de35e0 <line:409:3, col:16>
|   | `-VarDecl 0x5584f3de3578 <col:3, col:8> col:8 referenced invalid local_1c 'int'
|   |-CallExpr 0x5584f3de36f8 <line:411:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de36e0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de3660 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de3728 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de3640 <col:20> 'int' 0
|   |-CallExpr 0x5584f3de37e0 <line:412:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de37c8 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de37a8 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de3810 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de3788 <col:20> 'int' 1
|   |-BinaryOperator 0x5584f3de3868 <line:413:3, col:14> 'int' lvalue '='
|   | |-DeclRefExpr 0x5584f3de3828 <col:3> 'int' lvalue Var 0x5584f3de34d0 'local_20' 'int'
|   | `-IntegerLiteral 0x5584f3de3848 <col:14> 'int' 0
|   |-CallExpr 0x5584f3de3928 <line:414:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de3910 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de38f0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de3958 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de38d0 <col:20> 'int' 2
|   |-IfStmt 0x5584f3de5048 <line:415:3, line:420:3>
|   | |-BinaryOperator 0x5584f3de39c8 <line:415:7, col:18> 'bool' '=='
|   | | |-ImplicitCastExpr 0x5584f3de39b0 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x5584f3de3970 <col:7> 'int' lvalue ParmVar 0x5584f3de3188 'param_1' 'int'
|   | | `-IntegerLiteral 0x5584f3de3990 <col:18> 'int' 2
|   | `-CompoundStmt 0x5584f3de5028 <col:21, line:420:3>
|   |   |-BinaryOperator 0x5584f3de4ef8 <line:416:5, col:47> 'int' lvalue '='
|   |   | |-DeclRefExpr 0x5584f3de39e8 <col:5> 'int' lvalue Var 0x5584f3de3438 'iVar1' 'int'
|   |   | `-CallExpr 0x5584f3de4e78 <col:13, col:47> 'int'
|   |   |   |-ImplicitCastExpr 0x5584f3de4e60 <col:13> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   |   | `-DeclRefExpr 0x5584f3de4e40 <col:13> 'int (char *, char *)' lvalue Function 0x5584f3de21e8 'strcmp' 'int (char *, char *)'
|   |   |   |-ImplicitCastExpr 0x5584f3de4eb0 <col:20, col:42> 'char *' <LValueToRValue>
|   |   |   | `-UnaryOperator 0x5584f3de4da0 <col:20, col:42> 'char *' lvalue prefix '*' cannot overflow
|   |   |   |   `-CStyleCastExpr 0x5584f3de4d78 <col:21, col:42> 'char **' <IntegralToPointer>
|   |   |   |     `-ParenExpr 0x5584f3de4d58 <col:30, col:42> 'long'
|   |   |   |       `-BinaryOperator 0x5584f3de4d00 <col:31, col:41> 'long' '+'
|   |   |   |         |-ImplicitCastExpr 0x5584f3de3a90 <col:31> 'long' <LValueToRValue>
|   |   |   |         | `-DeclRefExpr 0x5584f3de3a50 <col:31> 'long' lvalue ParmVar 0x5584f3de3208 'param_2' 'long'
|   |   |   |         `-ImplicitCastExpr 0x5584f3de3aa8 <col:41> 'long' <IntegralCast>
|   |   |   |           `-IntegerLiteral 0x5584f3de3a70 <col:41> 'int' 8
|   |   |   `-ImplicitCastExpr 0x5584f3de4ee0 <col:44> 'char *' <NoOp>
|   |   |     `-ImplicitCastExpr 0x5584f3de4ec8 <col:44> 'const char *' <ArrayToPointerDecay>
|   |   |       `-StringLiteral 0x5584f3de4e20 <col:44> 'const char[2]' lvalue "1"
|   |   `-IfStmt 0x5584f3de5008 <line:417:5, line:419:5>
|   |     |-BinaryOperator 0x5584f3de4f70 <line:417:9, col:18> 'bool' '=='
|   |     | |-ImplicitCastExpr 0x5584f3de4f58 <col:9> 'int' <LValueToRValue>
|   |     | | `-DeclRefExpr 0x5584f3de4f18 <col:9> 'int' lvalue Var 0x5584f3de3438 'iVar1' 'int'
|   |     | `-IntegerLiteral 0x5584f3de4f38 <col:18> 'int' 0
|   |     `-CompoundStmt 0x5584f3de4ff0 <col:21, line:419:5>
|   |       `-BinaryOperator 0x5584f3de4fd0 <line:418:7, col:18> 'int' lvalue '='
|   |         |-DeclRefExpr 0x5584f3de4f90 <col:7> 'int' lvalue Var 0x5584f3de34d0 'local_20' 'int'
|   |         `-IntegerLiteral 0x5584f3de4fb0 <col:18> 'int' 1
|   |-CallExpr 0x5584f3de5108 <line:421:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de50f0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de50d0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de5138 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de50b0 <col:20> 'int' 3
|   |-RecoveryExpr 0x5584f3de5190 <line:422:3, col:23> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5584f3de5150 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_begin' empty
|   |-CallExpr 0x5584f3de5258 <line:423:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de5240 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de5220 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de5288 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de5200 <col:20> 'int' 4
|   |-RecoveryExpr 0x5584f3de52e0 <line:424:3, col:16> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5584f3de52a0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_gentab' empty
|   |-CallExpr 0x5584f3de53a8 <line:425:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de5390 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de5370 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de53d8 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de5350 <col:20> 'int' 5
|   |-RecoveryExpr 0x5584f3de5430 <line:426:3, col:10> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5584f3de53f0 <col:3> '<overloaded function type>' lvalue (ADL) = 'func_1' empty
|   |-CallExpr 0x5584f3de54f8 <line:427:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5584f3de54e0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5584f3de54c0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5584f3de5528 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5584f3de54a0 <col:20> 'int' 6
|   |-ForStmt 0x5584f3de6e90 <line:428:3, line:435:3>
|   | |-BinaryOperator 0x5584f3de55a8 <line:428:8, col:19> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5584f3de5560 <col:8> '<dependent type>' contains-errors lvalue
|   | | | `-DeclRefExpr 0x5584f3de5540 <col:8> 'int' lvalue Var 0x5584f3de3578 'local_1c' 'int'
|   | | `-IntegerLiteral 0x5584f3de5588 <col:19> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x5584f3de5648 <col:22, col:38> 'bool' contains-errors '<'
|   | | |-CStyleCastExpr 0x5584f3de5600 <col:22, col:27> 'int' contains-errors <Dependent>
|   | | | `-RecoveryExpr 0x5584f3de55c8 <col:27> '<dependent type>' contains-errors lvalue
|   | | `-IntegerLiteral 0x5584f3de5628 <col:38> 'int' 6
|   | |-BinaryOperator 0x5584f3de56e8 <col:41, col:63> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5584f3de5668 <col:41> '<dependent type>' contains-errors lvalue
|   | | `-BinaryOperator 0x5584f3de56c8 <col:52, col:63> '<dependent type>' contains-errors '+'
|   | |   |-RecoveryExpr 0x5584f3de5688 <col:52> '<dependent type>' contains-errors lvalue
|   | |   `-IntegerLiteral 0x5584f3de56a8 <col:63> 'int' 1
|   | `-CompoundStmt 0x5584f3de6e68 <col:66, line:435:3>
|   |   |-RecoveryExpr 0x5584f3de5a58 <line:429:5, col:79> '<dependent type>' contains-errors lvalue
|   |   | |-UnresolvedLookupExpr 0x5584f3de5708 <col:5> '<overloaded function type>' lvalue (ADL) = 'transparent_crc' empty
|   |   | |-CStyleCastExpr 0x5584f3de5980 <col:21, col:57> 'long' contains-errors <Dependent>
|   |   | | `-UnaryOperator 0x5584f3de5950 <col:27, col:57> 'char' contains-errors lvalue prefix '*' cannot overflow
|   |   | |   `-CStyleCastExpr 0x5584f3de5928 <col:28, col:57> 'char *' contains-errors <Dependent>
|   |   | |     `-ParenExpr 0x5584f3de5908 <col:36, col:57> 'undefined8 *' contains-errors
|   |   | |       `-BinaryOperator 0x5584f3de58b0 <col:37, col:49> 'undefined8 *' contains-errors '+'
|   |   | |         |-UnaryOperator 0x5584f3de57d0 <col:37, col:38> 'undefined8 *' prefix '&' cannot overflow
|   |   | |         | `-DeclRefExpr 0x5584f3de5748 <col:38> 'undefined8':'unsigned long' lvalue Var 0x5584f3ddeb40 'g_2' 'undefined8':'unsigned long'
|   |   | |         `-CStyleCastExpr 0x5584f3de5888 <col:44, col:49> 'int' contains-errors <Dependent>
|   |   | |           `-RecoveryExpr 0x5584f3de5850 <col:49> '<dependent type>' contains-errors lvalue
|   |   | |-StringLiteral 0x5584f3de5a10 <col:59> 'const char[10]' lvalue "g_2[i].f0"
|   |   | `-DeclRefExpr 0x5584f3de5a38 <col:71> 'int' lvalue Var 0x5584f3de34d0 'local_20' 'int'
|   |   |-CallExpr 0x5584f3de5b38 <line:430:5, col:23> 'undefined4':'unsigned int'
|   |   | |-ImplicitCastExpr 0x5584f3de5b20 <col:5> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   |   | | `-DeclRefExpr 0x5584f3de5b00 <col:5> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   |   | `-ImplicitCastExpr 0x5584f3de5b68 <col:22> 'undefined4':'unsigned int' <IntegralCast>
|   |   |   `-IntegerLiteral 0x5584f3de5ae0 <col:22> 'int' 7
|   |   `-IfStmt 0x5584f3de6e48 <line:431:5, line:434:5>
|   |     |-BinaryOperator 0x5584f3de5bd8 <line:431:9, col:21> 'bool' '!='
|   |     | |-ImplicitCastExpr 0x5584f3de5bc0 <col:9> 'int' <LValueToRValue>
|   |     | | `-DeclRefExpr 0x5584f3de5b80 <col:9> 'int' lvalue Var 0x5584f3de34d0 'local_20' 'int'
|   |     | `-IntegerLiteral 0x5584f3de5ba0 <col:21> 'int' 0
|   |     `-CompoundStmt 0x5584f3de6e28 <col:24, line:434:5>
|   |       |-CallExpr 0x5584f3de5c98 <line:432:7, col:25> 'undefined4':'unsigned int'
|   |       | |-ImplicitCastExpr 0x5584f3de5c80 <col:7> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   |       | | `-DeclRefExpr 0x5584f3de5c60 <col:7> 'undefined4 (undefined4)' lvalue Function 0x5584f3de3060 'codemarker_alpha' 'undefined4 (undefined4)'
|   |       | `-ImplicitCastExpr 0x5584f3de5cc8 <col:24> 'undefined4':'unsigned int' <IntegralCast>
|   |       |   `-IntegerLiteral 0x5584f3de5c40 <col:24> 'int' 8
|   |       `-RecoveryExpr 0x5584f3de6df8 <line:433:7, col:46> '<dependent type>' contains-errors lvalue
|   |         |-UnresolvedLookupExpr 0x5584f3de6d20 <col:7> '<overloaded function type>' lvalue (ADL) = 'printf' 0x5584f3de1d60
|   |         `-StringLiteral 0x5584f3de6dd0 <col:14> 'const char[14]' lvalue "index = [%d]\n"
|   |-RecoveryExpr 0x5584f3de6fa0 <line:436:3, col:56> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de6ec8 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_end' empty
|   | |-BinaryOperator 0x5584f3de6f60 <col:21, col:37> 'unsigned int' '^'
|   | | |-ImplicitCastExpr 0x5584f3de6f48 <col:21> 'undefined4':'unsigned int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x5584f3de6f08 <col:21> 'undefined4':'unsigned int' lvalue Var 0x5584f3ddea60 'crc32_context' 'undefined4':'unsigned int'
|   | | `-IntegerLiteral 0x5584f3de6f28 <col:37> 'unsigned int' 4294967295
|   | `-DeclRefExpr 0x5584f3de6f80 <col:48> 'int' lvalue Var 0x5584f3de34d0 'local_20' 'int'
|   `-ReturnStmt 0x5584f3de7010 <line:437:3, col:10>
|     `-ImplicitCastExpr 0x5584f3de6ff8 <col:10> 'undefined8':'unsigned long' <IntegralCast>
|       `-IntegerLiteral 0x5584f3de6fd8 <col:10> 'int' 0
|-FunctionDecl 0x5584f3de7158 <line:442:1, line:446:1> line:442:6 platform_main_begin 'void ()'
| `-CompoundStmt 0x5584f3de7210 <line:444:1, line:446:1>
|   `-ReturnStmt 0x5584f3de7200 <line:445:3>
|-FunctionDecl 0x5584f3de72c0 <line:450:1, line:470:1> line:450:6 crc32_gentab 'void ()'
| `-CompoundStmt 0x5584f3de8120 <line:452:1, line:470:1>
|   |-DeclStmt 0x5584f3de73e8 <line:453:3, col:15>
|   | `-VarDecl 0x5584f3de7380 <col:3, col:7> col:7 used local_18 'int'
|   |-DeclStmt 0x5584f3de7490 <line:454:3, col:16>
|   | `-VarDecl 0x5584f3de7428 <col:3, col:8> col:8 referenced invalid local_14 'int'
|   |-DeclStmt 0x5584f3de7538 <line:455:3, col:15>
|   | `-VarDecl 0x5584f3de74d0 <col:3, col:8> col:8 referenced invalid local_c 'int'
|   |-ForStmt 0x5584f3de80d8 <line:457:3, line:468:3>
|   | |-BinaryOperator 0x5584f3de75b8 <line:457:8, col:19> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5584f3de7570 <col:8> '<dependent type>' contains-errors lvalue
|   | | | `-DeclRefExpr 0x5584f3de7550 <col:8> 'int' lvalue Var 0x5584f3de7428 'local_14' 'int'
|   | | `-IntegerLiteral 0x5584f3de7598 <col:19> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x5584f3de7658 <col:22, col:38> 'bool' contains-errors '<'
|   | | |-CStyleCastExpr 0x5584f3de7610 <col:22, col:27> 'int' contains-errors <Dependent>
|   | | | `-RecoveryExpr 0x5584f3de75d8 <col:27> '<dependent type>' contains-errors lvalue
|   | | `-IntegerLiteral 0x5584f3de7638 <col:38> 'int' 256
|   | |-BinaryOperator 0x5584f3de76f8 <col:45, col:67> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5584f3de7678 <col:45> '<dependent type>' contains-errors lvalue
|   | | `-BinaryOperator 0x5584f3de76d8 <col:56, col:67> '<dependent type>' contains-errors '+'
|   | |   |-RecoveryExpr 0x5584f3de7698 <col:56> '<dependent type>' contains-errors lvalue
|   | |   `-IntegerLiteral 0x5584f3de76b8 <col:67> 'int' 1
|   | `-CompoundStmt 0x5584f3de80b8 <col:70, line:468:3>
|   |   |-BinaryOperator 0x5584f3de7780 <line:458:5, col:15> '<dependent type>' contains-errors '='
|   |   | |-RecoveryExpr 0x5584f3de7738 <col:5> '<dependent type>' contains-errors lvalue
|   |   | | `-DeclRefExpr 0x5584f3de7718 <col:5> 'int' lvalue Var 0x5584f3de74d0 'local_c' 'int'
|   |   | `-RecoveryExpr 0x5584f3de7760 <col:15> '<dependent type>' contains-errors lvalue
|   |   `-ForStmt 0x5584f3de7c78 <line:459:5, line:466:5>
|   |     |-BinaryOperator 0x5584f3de77e0 <line:459:10, col:21> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x5584f3de77a0 <col:10> 'int' lvalue Var 0x5584f3de7380 'local_18' 'int'
|   |     | `-IntegerLiteral 0x5584f3de77c0 <col:21> 'int' 8
|   |     |-<<<NULL>>>
|   |     |-BinaryOperator 0x5584f3de7858 <col:24, col:28> 'bool' '<'
|   |     | |-IntegerLiteral 0x5584f3de7800 <col:24> 'int' 0
|   |     | `-ImplicitCastExpr 0x5584f3de7840 <col:28> 'int' <LValueToRValue>
|   |     |   `-DeclRefExpr 0x5584f3de7820 <col:28> 'int' lvalue Var 0x5584f3de7380 'local_18' 'int'
|   |     |-BinaryOperator 0x5584f3de7928 <col:38, col:61> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x5584f3de7878 <col:38> 'int' lvalue Var 0x5584f3de7380 'local_18' 'int'
|   |     | `-BinaryOperator 0x5584f3de7908 <col:49, col:61> 'int' '+'
|   |     |   |-ImplicitCastExpr 0x5584f3de78f0 <col:49> 'int' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x5584f3de7898 <col:49> 'int' lvalue Var 0x5584f3de7380 'local_18' 'int'
|   |     |   `-UnaryOperator 0x5584f3de78d8 <col:60, col:61> 'int' prefix '-'
|   |     |     `-IntegerLiteral 0x5584f3de78b8 <col:61> 'int' 1
|   |     `-CompoundStmt 0x5584f3de7c60 <col:64, line:466:5>
|   |       `-IfStmt 0x5584f3de7c30 <line:460:7, line:465:7> has_else
|   |         |-BinaryOperator 0x5584f3de7a10 <line:460:11, col:28> '<dependent type>' contains-errors '=='
|   |         | |-ParenExpr 0x5584f3de79d0 <col:11, col:23> '<dependent type>' contains-errors
|   |         | | `-BinaryOperator 0x5584f3de79b0 <col:12, col:22> '<dependent type>' contains-errors '&'
|   |         | |   |-RecoveryExpr 0x5584f3de7968 <col:12> '<dependent type>' contains-errors lvalue
|   |         | |   | `-DeclRefExpr 0x5584f3de7948 <col:12> 'int' lvalue Var 0x5584f3de74d0 'local_c' 'int'
|   |         | |   `-IntegerLiteral 0x5584f3de7990 <col:22> 'int' 1
|   |         | `-IntegerLiteral 0x5584f3de79f0 <col:28> 'int' 0
|   |         |-CompoundStmt 0x5584f3de7af8 <col:31, line:462:7>
|   |         | `-BinaryOperator 0x5584f3de7ad8 <line:461:9, col:30> '<dependent type>' contains-errors '='
|   |         |   |-RecoveryExpr 0x5584f3de7a50 <col:9> '<dependent type>' contains-errors lvalue
|   |         |   | `-DeclRefExpr 0x5584f3de7a30 <col:9> 'int' lvalue Var 0x5584f3de74d0 'local_c' 'int'
|   |         |   `-BinaryOperator 0x5584f3de7ab8 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |         |     |-RecoveryExpr 0x5584f3de7a78 <col:19> '<dependent type>' contains-errors lvalue
|   |         |     `-IntegerLiteral 0x5584f3de7a98 <col:30> 'int' 1
|   |         `-CompoundStmt 0x5584f3de7c18 <line:463:12, line:465:7>
|   |           `-BinaryOperator 0x5584f3de7bf8 <line:464:9, col:34> '<dependent type>' contains-errors '='
|   |             |-RecoveryExpr 0x5584f3de7b30 <col:9> '<dependent type>' contains-errors lvalue
|   |             | `-DeclRefExpr 0x5584f3de7b10 <col:9> 'int' lvalue Var 0x5584f3de74d0 'local_c' 'int'
|   |             `-BinaryOperator 0x5584f3de7bd8 <col:19, col:34> '<dependent type>' contains-errors '^'
|   |               |-BinaryOperator 0x5584f3de7b98 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |               | |-RecoveryExpr 0x5584f3de7b58 <col:19> '<dependent type>' contains-errors lvalue
|   |               | `-IntegerLiteral 0x5584f3de7b78 <col:30> 'int' 1
|   |               `-IntegerLiteral 0x5584f3de7bb8 <col:34> 'unsigned int' 3988292384
|   `-ReturnStmt 0x5584f3de8110 <line:469:3>
|-FunctionDecl 0x5584f3de8250 <line:474:1, line:478:1> line:474:12 func_1 'undefined8 ()'
| `-CompoundStmt 0x5584f3de8340 <line:476:1, line:478:1>
|   `-ReturnStmt 0x5584f3de8330 <line:477:3, col:10>
|     `-ImplicitCastExpr 0x5584f3de8318 <col:10> 'undefined8':'unsigned long' <LValueToRValue>
|       `-DeclRefExpr 0x5584f3de82f8 <col:10> 'undefined8':'unsigned long' lvalue Var 0x5584f3ddeb40 'g_2' 'undefined8':'unsigned long'
|-FunctionDecl 0x5584f3de85a0 <line:482:1, line:490:1> line:482:6 transparent_crc 'void (undefined8, undefined8, int)'
| |-ParmVarDecl 0x5584f3de8368 <col:22, col:33> col:33 used param_1 'undefined8':'unsigned long'
| |-ParmVarDecl 0x5584f3de83e0 <col:41, col:52> col:52 used param_2 'undefined8':'unsigned long'
| |-ParmVarDecl 0x5584f3de8460 <col:60, col:64> col:64 used param_3 'int'
| `-CompoundStmt 0x5584f3de88f0 <line:484:1, line:490:1>
|   |-RecoveryExpr 0x5584f3de86c0 <line:485:3, col:23> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de8660 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_8bytes' empty
|   | `-DeclRefExpr 0x5584f3de86a0 <col:16> 'undefined8':'unsigned long' lvalue ParmVar 0x5584f3de8368 'param_1' 'undefined8':'unsigned long'
|   |-IfStmt 0x5584f3de88c0 <line:486:3, line:488:3>
|   | |-BinaryOperator 0x5584f3de8748 <line:486:7, col:18> 'bool' '!='
|   | | |-ImplicitCastExpr 0x5584f3de8730 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x5584f3de86f0 <col:7> 'int' lvalue ParmVar 0x5584f3de8460 'param_3' 'int'
|   | | `-IntegerLiteral 0x5584f3de8710 <col:18> 'int' 0
|   | `-CompoundStmt 0x5584f3de88a8 <col:21, line:488:3>
|   |   `-RecoveryExpr 0x5584f3de8870 <line:487:5, col:92> '<dependent type>' contains-errors lvalue
|   |     |-UnresolvedLookupExpr 0x5584f3de8768 <col:5> '<overloaded function type>' lvalue (ADL) = 'printf' 0x5584f3de1d60
|   |     |-StringLiteral 0x5584f3de8810 <col:12> 'const char[36]' lvalue "...checksum after hashing %s : %lX\n"
|   |     `-DeclRefExpr 0x5584f3de8850 <col:51> 'undefined8':'unsigned long' lvalue ParmVar 0x5584f3de83e0 'param_2' 'undefined8':'unsigned long'
|   `-ReturnStmt 0x5584f3de88e0 <line:489:3>
|-FunctionDecl 0x5584f3de8a10 <line:494:1, line:499:1> line:494:6 invalid platform_main_end 'void (int)'
| |-ParmVarDecl 0x5584f3de8940 <col:24, col:29> col:29 invalid param_1 'int'
| `-CompoundStmt 0x5584f3de8bd8 <line:496:1, line:499:1>
|   |-RecoveryExpr 0x5584f3de8b98 <line:497:3, col:42> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de8ac0 <col:3> '<overloaded function type>' lvalue (ADL) = 'printf' 0x5584f3de1d60
|   | `-StringLiteral 0x5584f3de8b70 <col:10> 'const char[15]' lvalue "checksum = %X\n"
|   `-ReturnStmt 0x5584f3de8bc8 <line:498:3>
|-FunctionDecl 0x5584f3de8cb0 <line:503:1, line:515:1> line:503:6 invalid crc32_8bytes 'void (int)'
| |-ParmVarDecl 0x5584f3de8c20 <col:19, col:25> col:25 referenced invalid param_1 'int'
| `-CompoundStmt 0x5584f3de9878 <line:505:1, line:515:1>
|   |-CallExpr 0x5584f3de8e00 <line:506:3, col:28> '<dependent type>' contains-errors
|   | |-UnresolvedLookupExpr 0x5584f3de8d60 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-BinaryOperator 0x5584f3de8de0 <col:14, col:24> '<dependent type>' contains-errors '&'
|   |   |-RecoveryExpr 0x5584f3de8da0 <col:14> '<dependent type>' contains-errors lvalue
|   |   `-IntegerLiteral 0x5584f3de8dc0 <col:24> 'int' 255
|   |-RecoveryExpr 0x5584f3de8f98 <line:507:3, col:34> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de8e30 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de8f70 <col:14, col:33> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de8f50 <col:20, col:33> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de8ed8 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de8e90 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de8e70 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de8eb8 <col:32> 'int' 8
|   |-RecoveryExpr 0x5584f3de9108 <line:508:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de8fc8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de90e0 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de90c0 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de9070 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de9028 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de9008 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de9050 <col:32> 'int' 16
|   |-RecoveryExpr 0x5584f3de9278 <line:509:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de9138 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de9250 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de9230 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de91e0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de9198 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de9178 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de91c0 <col:32> 'int' 24
|   |-RecoveryExpr 0x5584f3de93e8 <line:510:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de92a8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de93c0 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de93a0 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de9350 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de9308 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de92e8 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de9330 <col:32> 'int' 32
|   |-RecoveryExpr 0x5584f3de9558 <line:511:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de9418 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de9530 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de9510 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de94c0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de9478 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de9458 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de94a0 <col:32> 'int' 40
|   |-RecoveryExpr 0x5584f3de96c8 <line:512:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de9588 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de96a0 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de9680 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de9630 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de95e8 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de95c8 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de9610 <col:32> 'int' 48
|   |-RecoveryExpr 0x5584f3de9838 <line:513:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5584f3de96f8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x5584f3de9810 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x5584f3de97f0 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x5584f3de97a0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x5584f3de9758 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x5584f3de9738 <col:21> 'int' lvalue ParmVar 0x5584f3de8c20 'param_1' 'int'
|   |       `-IntegerLiteral 0x5584f3de9780 <col:32> 'int' 56
|   `-ReturnStmt 0x5584f3de9868 <line:514:3>
|-FunctionDecl 0x5584f3de99f0 <line:519:1, line:525:1> line:519:6 crc32_byte 'void (byte)'
| |-ParmVarDecl 0x5584f3de98e0 <col:17, col:22> col:22 used param_1 'byte':'unsigned char'
| `-CompoundStmt 0x5584f3de9ca8 <line:521:1, line:525:1>
|   `-ReturnStmt 0x5584f3de9c98 <line:524:3>
`-FunctionDecl 0x5584f3de9d58 <line:529:1, line:533:1> line:529:6 _fini 'void ()'
  `-CompoundStmt 0x5584f3de9e10 <line:531:1, line:533:1>
    `-ReturnStmt 0x5584f3de9e00 <line:532:3>

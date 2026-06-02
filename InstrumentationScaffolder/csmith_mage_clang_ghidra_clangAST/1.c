TranslationUnitDecl 0x55d053b1a548 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x55d053b1b1e0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x55d053b1ab10 '__int128'
|-TypedefDecl 0x55d053b1b250 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x55d053b1ab30 'unsigned __int128'
|-TypedefDecl 0x55d053b6b030 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x55d053b1b340 '__NSConstantString_tag'
|   `-CXXRecord 0x55d053b1b2a8 '__NSConstantString_tag'
|-TypedefDecl 0x55d053b1ae08 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x55d053b1adc0 'char *'
|   `-BuiltinType 0x55d053b1a5f0 'char'
|-TypedefDecl 0x55d053b1b170 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list '__va_list_tag[1]'
| `-ConstantArrayType 0x55d053b1b120 '__va_list_tag[1]' 1 
|   `-RecordType 0x55d053b1aef0 '__va_list_tag'
|     `-CXXRecord 0x55d053b1ae60 '__va_list_tag'
|-TypedefDecl 0x55d053b6b0a0 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/1.c:1:1, col:25> col:25 referenced undefined 'unsigned char'
| `-BuiltinType 0x55d053b1a6b0 'unsigned char'
|-TypedefDecl 0x55d053b6b110 <line:3:1, col:26> col:26 referenced byte 'unsigned char'
| `-BuiltinType 0x55d053b1a6b0 'unsigned char'
|-TypedefDecl 0x55d053b6b180 <line:4:1, col:26> col:26 referenced dwfenc 'unsigned char'
| `-BuiltinType 0x55d053b1a6b0 'unsigned char'
|-TypedefDecl 0x55d053b6b1f0 <line:5:1, col:25> col:25 referenced dword 'unsigned int'
| `-BuiltinType 0x55d053b1a6f0 'unsigned int'
|-TypedefDecl 0x55d053b6b260 <line:6:1, col:26> col:26 referenced qword 'unsigned long'
| `-BuiltinType 0x55d053b1a710 'unsigned long'
|-TypedefDecl 0x55d053b6b2d0 <line:7:1, col:26> col:26 referenced undefined1 'unsigned char'
| `-BuiltinType 0x55d053b1a6b0 'unsigned char'
|-TypedefDecl 0x55d053b6b340 <line:8:1, col:25> col:25 referenced undefined4 'unsigned int'
| `-BuiltinType 0x55d053b1a6f0 'unsigned int'
|-TypedefDecl 0x55d053b6b3b0 <line:9:1, col:26> col:26 referenced undefined8 'unsigned long'
| `-BuiltinType 0x55d053b1a710 'unsigned long'
|-TypedefDecl 0x55d053b6b420 <line:10:1, col:27> col:27 referenced word 'unsigned short'
| `-BuiltinType 0x55d053b1a6d0 'unsigned short'
|-CXXRecordDecl 0x55d053b6b478 <line:11:9, col:16> col:16 struct eh_frame_hdr
|-TypedefDecl 0x55d053b6b588 <col:1, col:29> col:29 eh_frame_hdr 'struct eh_frame_hdr':'eh_frame_hdr'
| `-ElaboratedType 0x55d053b6b530 'struct eh_frame_hdr' sugar
|   `-RecordType 0x55d053b6b510 'eh_frame_hdr'
|     `-CXXRecord 0x55d053b6b720 'eh_frame_hdr'
|-TypedefDecl 0x55d053b6b678 <col:1, col:44> col:44 Peh_frame_hdr 'struct eh_frame_hdr *'
| `-PointerType 0x55d053b6b620 'struct eh_frame_hdr *'
|   `-ElaboratedType 0x55d053b6b530 'struct eh_frame_hdr' sugar
|     `-RecordType 0x55d053b6b510 'eh_frame_hdr'
|       `-CXXRecord 0x55d053b6b720 'eh_frame_hdr'
|-CXXRecordDecl 0x55d053b6b720 prev 0x55d053b6b478 <line:13:1, line:18:1> line:13:8 struct eh_frame_hdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b6b818 <col:1, col:8> col:8 implicit struct eh_frame_hdr
| |-FieldDecl 0x55d053b6b920 <line:14:5, col:10> col:10 eh_frame_hdr_version 'byte':'unsigned char'
| |-FieldDecl 0x55d053b6b9e0 <line:15:5, col:12> col:12 eh_frame_pointer_encoding 'dwfenc':'unsigned char'
| |-FieldDecl 0x55d053b6ba40 <line:16:5, col:12> col:12 eh_frame_desc_entry_count_encoding 'dwfenc':'unsigned char'
| `-FieldDecl 0x55d053b6baa0 <line:17:5, col:12> col:12 eh_frame_table_encoding 'dwfenc':'unsigned char'
|-CXXRecordDecl 0x55d053b6bb08 <line:20:9, col:16> col:16 struct NoteGnuPropertyElement_4
|-TypedefDecl 0x55d053b6bc18 <col:1, col:41> col:41 NoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4':'NoteGnuPropertyElement_4'
| `-ElaboratedType 0x55d053b6bbc0 'struct NoteGnuPropertyElement_4' sugar
|   `-RecordType 0x55d053b6bba0 'NoteGnuPropertyElement_4'
|     `-CXXRecord 0x55d053b6bdb0 'NoteGnuPropertyElement_4'
|-TypedefDecl 0x55d053b6bd08 <col:1, col:68> col:68 PNoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4 *'
| `-PointerType 0x55d053b6bcb0 'struct NoteGnuPropertyElement_4 *'
|   `-ElaboratedType 0x55d053b6bbc0 'struct NoteGnuPropertyElement_4' sugar
|     `-RecordType 0x55d053b6bba0 'NoteGnuPropertyElement_4'
|       `-CXXRecord 0x55d053b6bdb0 'NoteGnuPropertyElement_4'
|-CXXRecordDecl 0x55d053b6bdb0 prev 0x55d053b6bb08 <line:22:1, line:26:1> line:22:8 struct NoteGnuPropertyElement_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b6bea8 <col:1, col:8> col:8 implicit struct NoteGnuPropertyElement_4
| |-FieldDecl 0x55d053b8d0e0 <line:23:5, col:11> col:11 prType 'dword':'unsigned int'
| |-FieldDecl 0x55d053b8d140 <line:24:5, col:11> col:11 prDatasz 'dword':'unsigned int'
| `-FieldDecl 0x55d053b8d250 <line:25:5, col:16> col:10 data 'byte[4]'
|-CXXRecordDecl 0x55d053b8d2b8 <line:28:9, col:16> col:16 struct fde_table_entry
|-TypedefDecl 0x55d053b8d3c8 <col:1, col:32> col:32 fde_table_entry 'struct fde_table_entry':'fde_table_entry'
| `-ElaboratedType 0x55d053b8d370 'struct fde_table_entry' sugar
|   `-RecordType 0x55d053b8d350 'fde_table_entry'
|     `-CXXRecord 0x55d053b8d560 'fde_table_entry'
|-TypedefDecl 0x55d053b8d4b8 <col:1, col:50> col:50 Pfde_table_entry 'struct fde_table_entry *'
| `-PointerType 0x55d053b8d460 'struct fde_table_entry *'
|   `-ElaboratedType 0x55d053b8d370 'struct fde_table_entry' sugar
|     `-RecordType 0x55d053b8d350 'fde_table_entry'
|       `-CXXRecord 0x55d053b8d560 'fde_table_entry'
|-CXXRecordDecl 0x55d053b8d560 prev 0x55d053b8d2b8 <line:30:1, line:33:1> line:30:8 struct fde_table_entry definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b8d658 <col:1, col:8> col:8 implicit struct fde_table_entry
| |-FieldDecl 0x55d053b8d6f8 <line:31:5, col:11> col:11 initial_loc 'dword':'unsigned int'
| `-FieldDecl 0x55d053b8d758 <line:32:5, col:11> col:11 data_loc 'dword':'unsigned int'
|-EnumDecl 0x55d053b8d7c0 <line:35:9, line:112:1> line:35:14 Elf64_DynTag
| |-EnumConstantDecl 0x55d053b8d8c0 <line:36:5, col:13> col:5 DT_NULL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90e78 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8d8a0 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55d053b8d880 <col:13> 'int' 0
| |-EnumConstantDecl 0x55d053b8d958 <line:37:5, col:15> col:5 DT_NEEDED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90e90 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8d938 <col:15> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55d053b8d918 <col:15> 'int' 1
| |-EnumConstantDecl 0x55d053b8d9f0 <line:38:5, col:17> col:5 DT_PLTRELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90ea8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8d9d0 <col:17> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55d053b8d9b0 <col:17> 'int' 2
| |-EnumConstantDecl 0x55d053b8da88 <line:39:5, col:15> col:5 DT_PLTGOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90ec0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8da68 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55d053b8da48 <col:15> 'int' 3
| |-EnumConstantDecl 0x55d053b8db20 <line:40:5, col:13> col:5 DT_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90ed8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8db00 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55d053b8dae0 <col:13> 'int' 4
| |-EnumConstantDecl 0x55d053b8dbb8 <line:41:5, col:15> col:5 DT_STRTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90ef0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8db98 <col:15> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55d053b8db78 <col:15> 'int' 5
| |-EnumConstantDecl 0x55d053b8dc50 <line:42:5, col:15> col:5 DT_SYMTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f08 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8dc30 <col:15> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55d053b8dc10 <col:15> 'int' 6
| |-EnumConstantDecl 0x55d053b8dce8 <line:43:5, col:13> col:5 DT_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f20 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8dcc8 <col:13> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55d053b8dca8 <col:13> 'int' 7
| |-EnumConstantDecl 0x55d053b8dd80 <line:44:5, col:15> col:5 DT_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f38 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8dd60 <col:15> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x55d053b8dd40 <col:15> 'int' 8
| |-EnumConstantDecl 0x55d053b8de18 <line:45:5, col:16> col:5 DT_RELAENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f50 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8ddf8 <col:16> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x55d053b8ddd8 <col:16> 'int' 9
| |-EnumConstantDecl 0x55d053b8deb0 <line:46:5, col:14> col:5 DT_STRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f68 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8de90 <col:14> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x55d053b8de70 <col:14> 'int' 10
| |-EnumConstantDecl 0x55d053b8df48 <line:47:5, col:15> col:5 DT_SYMENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f80 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8df28 <col:15> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x55d053b8df08 <col:15> 'int' 11
| |-EnumConstantDecl 0x55d053b8dfe0 <line:48:5, col:13> col:5 DT_INIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90f98 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8dfc0 <col:13> 'int'
| |     |-value: Int 12
| |     `-IntegerLiteral 0x55d053b8dfa0 <col:13> 'int' 12
| |-EnumConstantDecl 0x55d053b8ece0 <line:49:5, col:13> col:5 DT_FINI 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90fb0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8e058 <col:13> 'int'
| |     |-value: Int 13
| |     `-IntegerLiteral 0x55d053b8e038 <col:13> 'int' 13
| |-EnumConstantDecl 0x55d053b8ed78 <line:50:5, col:15> col:5 DT_SONAME 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90fc8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8ed58 <col:15> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x55d053b8ed38 <col:15> 'int' 14
| |-EnumConstantDecl 0x55d053b8ee10 <line:51:5, col:14> col:5 DT_RPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90fe0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8edf0 <col:14> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x55d053b8edd0 <col:14> 'int' 15
| |-EnumConstantDecl 0x55d053b8eea8 <line:52:5, col:17> col:5 DT_SYMBOLIC 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b90ff8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8ee88 <col:17> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x55d053b8ee68 <col:17> 'int' 16
| |-EnumConstantDecl 0x55d053b8ef40 <line:53:5, col:12> col:5 DT_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91010 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8ef20 <col:12> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x55d053b8ef00 <col:12> 'int' 17
| |-EnumConstantDecl 0x55d053b8efd8 <line:54:5, col:14> col:5 DT_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91028 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8efb8 <col:14> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x55d053b8ef98 <col:14> 'int' 18
| |-EnumConstantDecl 0x55d053b8f070 <line:55:5, col:15> col:5 DT_RELENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91040 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f050 <col:15> 'int'
| |     |-value: Int 19
| |     `-IntegerLiteral 0x55d053b8f030 <col:15> 'int' 19
| |-EnumConstantDecl 0x55d053b8f108 <line:56:5, col:15> col:5 DT_PLTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91058 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f0e8 <col:15> 'int'
| |     |-value: Int 20
| |     `-IntegerLiteral 0x55d053b8f0c8 <col:15> 'int' 20
| |-EnumConstantDecl 0x55d053b8f1a0 <line:57:5, col:14> col:5 DT_DEBUG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91070 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f180 <col:14> 'int'
| |     |-value: Int 21
| |     `-IntegerLiteral 0x55d053b8f160 <col:14> 'int' 21
| |-EnumConstantDecl 0x55d053b8f238 <line:58:5, col:16> col:5 DT_TEXTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91088 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f218 <col:16> 'int'
| |     |-value: Int 22
| |     `-IntegerLiteral 0x55d053b8f1f8 <col:16> 'int' 22
| |-EnumConstantDecl 0x55d053b8f2d0 <line:59:5, col:15> col:5 DT_JMPREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b910a0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f2b0 <col:15> 'int'
| |     |-value: Int 23
| |     `-IntegerLiteral 0x55d053b8f290 <col:15> 'int' 23
| |-EnumConstantDecl 0x55d053b8f368 <line:60:5, col:17> col:5 DT_BIND_NOW 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b910b8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f348 <col:17> 'int'
| |     |-value: Int 24
| |     `-IntegerLiteral 0x55d053b8f328 <col:17> 'int' 24
| |-EnumConstantDecl 0x55d053b8f400 <line:61:5, col:19> col:5 DT_INIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b910d0 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f3e0 <col:19> 'int'
| |     |-value: Int 25
| |     `-IntegerLiteral 0x55d053b8f3c0 <col:19> 'int' 25
| |-EnumConstantDecl 0x55d053b8f498 <line:62:5, col:19> col:5 DT_FINI_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b910e8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f478 <col:19> 'int'
| |     |-value: Int 26
| |     `-IntegerLiteral 0x55d053b8f458 <col:19> 'int' 26
| |-EnumConstantDecl 0x55d053b8f530 <line:63:5, col:21> col:5 DT_INIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91100 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f510 <col:21> 'int'
| |     |-value: Int 27
| |     `-IntegerLiteral 0x55d053b8f4f0 <col:21> 'int' 27
| |-EnumConstantDecl 0x55d053b8f5c8 <line:64:5, col:21> col:5 DT_FINI_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91118 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f5a8 <col:21> 'int'
| |     |-value: Int 28
| |     `-IntegerLiteral 0x55d053b8f588 <col:21> 'int' 28
| |-EnumConstantDecl 0x55d053b8f660 <line:65:5, col:16> col:5 DT_RUNPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91130 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f640 <col:16> 'int'
| |     |-value: Int 29
| |     `-IntegerLiteral 0x55d053b8f620 <col:16> 'int' 29
| |-EnumConstantDecl 0x55d053b8f6f8 <line:66:5, col:14> col:5 DT_FLAGS 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91148 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f6d8 <col:14> 'int'
| |     |-value: Int 30
| |     `-IntegerLiteral 0x55d053b8f6b8 <col:14> 'int' 30
| |-EnumConstantDecl 0x55d053b8f790 <line:67:5, col:22> col:5 DT_PREINIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91160 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f770 <col:22> 'int'
| |     |-value: Int 32
| |     `-IntegerLiteral 0x55d053b8f750 <col:22> 'int' 32
| |-EnumConstantDecl 0x55d053b8f828 <line:68:5, col:24> col:5 DT_PREINIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91178 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f808 <col:24> 'int'
| |     |-value: Int 33
| |     `-IntegerLiteral 0x55d053b8f7e8 <col:24> 'int' 33
| |-EnumConstantDecl 0x55d053b8f8c0 <line:69:5, col:15> col:5 DT_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91190 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f8a0 <col:15> 'int'
| |     |-value: Int 35
| |     `-IntegerLiteral 0x55d053b8f880 <col:15> 'int' 35
| |-EnumConstantDecl 0x55d053b8f958 <line:70:5, col:13> col:5 DT_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b911a8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f938 <col:13> 'int'
| |     |-value: Int 36
| |     `-IntegerLiteral 0x55d053b8f918 <col:13> 'int' 36
| |-EnumConstantDecl 0x55d053b8f9f0 <line:71:5, col:16> col:5 DT_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b911c0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8f9d0 <col:16> 'int'
| |     |-value: Int 37
| |     `-IntegerLiteral 0x55d053b8f9b0 <col:16> 'int' 37
| |-EnumConstantDecl 0x55d053b8fa88 <line:72:5, col:20> col:5 DT_ANDROID_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b911d8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8fa68 <col:20> 'int'
| |     |-value: Int 1610612751
| |     `-IntegerLiteral 0x55d053b8fa48 <col:20> 'int' 1610612751
| |-EnumConstantDecl 0x55d053b8fb20 <line:73:5, col:22> col:5 DT_ANDROID_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b911f0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8fb00 <col:22> 'int'
| |     |-value: Int 1610612752
| |     `-IntegerLiteral 0x55d053b8fae0 <col:22> 'int' 1610612752
| |-EnumConstantDecl 0x55d053b8fbb8 <line:74:5, col:21> col:5 DT_ANDROID_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91208 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8fb98 <col:21> 'int'
| |     |-value: Int 1610612753
| |     `-IntegerLiteral 0x55d053b8fb78 <col:21> 'int' 1610612753
| |-EnumConstantDecl 0x55d053b8fc50 <line:75:5, col:23> col:5 DT_ANDROID_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91220 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b8fc30 <col:23> 'int'
| |     |-value: Int 1610612754
| |     `-IntegerLiteral 0x55d053b8fc10 <col:23> 'int' 1610612754
| |-EnumConstantDecl 0x55d053b964b0 <line:76:5, col:21> col:5 DT_ANDROID_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91238 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96490 <col:21> 'int'
| |     |-value: Int 1879040000
| |     `-IntegerLiteral 0x55d053b8fca8 <col:21> 'int' 1879040000
| |-EnumConstantDecl 0x55d053b96548 <line:77:5, col:23> col:5 DT_ANDROID_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91250 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96528 <col:23> 'int'
| |     |-value: Int 1879040001
| |     `-IntegerLiteral 0x55d053b96508 <col:23> 'int' 1879040001
| |-EnumConstantDecl 0x55d053b965e0 <line:78:5, col:24> col:5 DT_ANDROID_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91268 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b965c0 <col:24> 'int'
| |     |-value: Int 1879040003
| |     `-IntegerLiteral 0x55d053b965a0 <col:24> 'int' 1879040003
| |-EnumConstantDecl 0x55d053b96678 <line:79:5, col:22> col:5 DT_GNU_PRELINKED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91280 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96658 <col:22> 'int'
| |     |-value: Int 1879047669
| |     `-IntegerLiteral 0x55d053b96638 <col:22> 'int' 1879047669
| |-EnumConstantDecl 0x55d053b96710 <line:80:5, col:23> col:5 DT_GNU_CONFLICTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91298 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b966f0 <col:23> 'int'
| |     |-value: Int 1879047670
| |     `-IntegerLiteral 0x55d053b966d0 <col:23> 'int' 1879047670
| |-EnumConstantDecl 0x55d053b967a8 <line:81:5, col:22> col:5 DT_GNU_LIBLISTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b912b0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96788 <col:22> 'int'
| |     |-value: Int 1879047671
| |     `-IntegerLiteral 0x55d053b96768 <col:22> 'int' 1879047671
| |-EnumConstantDecl 0x55d053b96840 <line:82:5, col:17> col:5 DT_CHECKSUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b912c8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96820 <col:17> 'int'
| |     |-value: Int 1879047672
| |     `-IntegerLiteral 0x55d053b96800 <col:17> 'int' 1879047672
| |-EnumConstantDecl 0x55d053b968d8 <line:83:5, col:17> col:5 DT_PLTPADSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b912e0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b968b8 <col:17> 'int'
| |     |-value: Int 1879047673
| |     `-IntegerLiteral 0x55d053b96898 <col:17> 'int' 1879047673
| |-EnumConstantDecl 0x55d053b96970 <line:84:5, col:16> col:5 DT_MOVEENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b912f8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96950 <col:16> 'int'
| |     |-value: Int 1879047674
| |     `-IntegerLiteral 0x55d053b96930 <col:16> 'int' 1879047674
| |-EnumConstantDecl 0x55d053b96a08 <line:85:5, col:15> col:5 DT_MOVESZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91310 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b969e8 <col:15> 'int'
| |     |-value: Int 1879047675
| |     `-IntegerLiteral 0x55d053b969c8 <col:15> 'int' 1879047675
| |-EnumConstantDecl 0x55d053b96aa0 <line:86:5, col:18> col:5 DT_FEATURE_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91328 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96a80 <col:18> 'int'
| |     |-value: Int 1879047676
| |     `-IntegerLiteral 0x55d053b96a60 <col:18> 'int' 1879047676
| |-EnumConstantDecl 0x55d053b96b38 <line:87:5, col:18> col:5 DT_POSFLAG_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91340 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96b18 <col:18> 'int'
| |     |-value: Int 1879047677
| |     `-IntegerLiteral 0x55d053b96af8 <col:18> 'int' 1879047677
| |-EnumConstantDecl 0x55d053b96bd0 <line:88:5, col:16> col:5 DT_SYMINSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91358 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96bb0 <col:16> 'int'
| |     |-value: Int 1879047678
| |     `-IntegerLiteral 0x55d053b96b90 <col:16> 'int' 1879047678
| |-EnumConstantDecl 0x55d053b96c68 <line:89:5, col:17> col:5 DT_SYMINENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91370 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96c48 <col:17> 'int'
| |     |-value: Int 1879047679
| |     `-IntegerLiteral 0x55d053b96c28 <col:17> 'int' 1879047679
| |-EnumConstantDecl 0x55d053b96d00 <line:90:5, col:18> col:5 DT_GNU_XHASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91388 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96ce0 <col:18> 'int'
| |     |-value: Int 1879047924
| |     `-IntegerLiteral 0x55d053b96cc0 <col:18> 'int' 1879047924
| |-EnumConstantDecl 0x55d053b96d98 <line:91:5, col:17> col:5 DT_GNU_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b913a0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96d78 <col:17> 'int'
| |     |-value: Int 1879047925
| |     `-IntegerLiteral 0x55d053b96d58 <col:17> 'int' 1879047925
| |-EnumConstantDecl 0x55d053b96e30 <line:92:5, col:20> col:5 DT_TLSDESC_PLT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b913b8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96e10 <col:20> 'int'
| |     |-value: Int 1879047926
| |     `-IntegerLiteral 0x55d053b96df0 <col:20> 'int' 1879047926
| |-EnumConstantDecl 0x55d053b96ec8 <line:93:5, col:20> col:5 DT_TLSDESC_GOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b913d0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96ea8 <col:20> 'int'
| |     |-value: Int 1879047927
| |     `-IntegerLiteral 0x55d053b96e88 <col:20> 'int' 1879047927
| |-EnumConstantDecl 0x55d053b96f60 <line:94:5, col:21> col:5 DT_GNU_CONFLICT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b913e8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96f40 <col:21> 'int'
| |     |-value: Int 1879047928
| |     `-IntegerLiteral 0x55d053b96f20 <col:21> 'int' 1879047928
| |-EnumConstantDecl 0x55d053b96ff8 <line:95:5, col:20> col:5 DT_GNU_LIBLIST 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91400 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96fd8 <col:20> 'int'
| |     |-value: Int 1879047929
| |     `-IntegerLiteral 0x55d053b96fb8 <col:20> 'int' 1879047929
| |-EnumConstantDecl 0x55d053b97090 <line:96:5, col:15> col:5 DT_CONFIG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91418 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b97070 <col:15> 'int'
| |     |-value: Int 1879047930
| |     `-IntegerLiteral 0x55d053b97050 <col:15> 'int' 1879047930
| |-EnumConstantDecl 0x55d053b97128 <line:97:5, col:17> col:5 DT_DEPAUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91430 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b97108 <col:17> 'int'
| |     |-value: Int 1879047931
| |     `-IntegerLiteral 0x55d053b970e8 <col:17> 'int' 1879047931
| |-EnumConstantDecl 0x55d053b971c0 <line:98:5, col:14> col:5 DT_AUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91448 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b971a0 <col:14> 'int'
| |     |-value: Int 1879047932
| |     `-IntegerLiteral 0x55d053b97180 <col:14> 'int' 1879047932
| |-EnumConstantDecl 0x55d053b97258 <line:99:5, col:15> col:5 DT_PLTPAD 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91460 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b97238 <col:15> 'int'
| |     |-value: Int 1879047933
| |     `-IntegerLiteral 0x55d053b97218 <col:15> 'int' 1879047933
| |-EnumConstantDecl 0x55d053b972f0 <line:100:5, col:16> col:5 DT_MOVETAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91478 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b972d0 <col:16> 'int'
| |     |-value: Int 1879047934
| |     `-IntegerLiteral 0x55d053b972b0 <col:16> 'int' 1879047934
| |-EnumConstantDecl 0x55d053b97388 <line:101:5, col:16> col:5 DT_SYMINFO 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91490 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b97368 <col:16> 'int'
| |     |-value: Int 1879047935
| |     `-IntegerLiteral 0x55d053b97348 <col:16> 'int' 1879047935
| |-EnumConstantDecl 0x55d053b97420 <line:102:5, col:15> col:5 DT_VERSYM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b914a8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b97400 <col:15> 'int'
| |     |-value: Int 1879048176
| |     `-IntegerLiteral 0x55d053b973e0 <col:15> 'int' 1879048176
| |-EnumConstantDecl 0x55d053b90960 <line:103:5, col:18> col:5 DT_RELACOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b914c0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90940 <col:18> 'int'
| |     |-value: Int 1879048185
| |     `-IntegerLiteral 0x55d053b90920 <col:18> 'int' 1879048185
| |-EnumConstantDecl 0x55d053b909f8 <line:104:5, col:17> col:5 DT_RELCOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b914d8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b909d8 <col:17> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x55d053b909b8 <col:17> 'int' 1879048186
| |-EnumConstantDecl 0x55d053b90a90 <line:105:5, col:16> col:5 DT_FLAGS_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b914f0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90a70 <col:16> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x55d053b90a50 <col:16> 'int' 1879048187
| |-EnumConstantDecl 0x55d053b90b28 <line:106:5, col:15> col:5 DT_VERDEF 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91508 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90b08 <col:15> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x55d053b90ae8 <col:15> 'int' 1879048188
| |-EnumConstantDecl 0x55d053b90bc0 <line:107:5, col:18> col:5 DT_VERDEFNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91520 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90ba0 <col:18> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x55d053b90b80 <col:18> 'int' 1879048189
| |-EnumConstantDecl 0x55d053b90c58 <line:108:5, col:16> col:5 DT_VERNEED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91538 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90c38 <col:16> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x55d053b90c18 <col:16> 'int' 1879048190
| |-EnumConstantDecl 0x55d053b90cf0 <line:109:5, col:19> col:5 DT_VERNEEDNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91550 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90cd0 <col:19> 'int'
| |     |-value: Int 1879048191
| |     `-IntegerLiteral 0x55d053b90cb0 <col:19> 'int' 1879048191
| |-EnumConstantDecl 0x55d053b90d88 <line:110:5, col:18> col:5 DT_AUXILIARY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55d053b91568 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b90d68 <col:18> 'int'
| |     |-value: Int 2147483645
| |     `-IntegerLiteral 0x55d053b90d48 <col:18> 'int' 2147483645
| `-EnumConstantDecl 0x55d053b90e20 <line:111:5, col:15> col:5 DT_FILTER 'Elf64_DynTag'
|   `-ImplicitCastExpr 0x55d053b91580 <col:15> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55d053b90e00 <col:15> 'int'
|       |-value: Int 2147483647
|       `-IntegerLiteral 0x55d053b90de0 <col:15> 'int' 2147483647
|-TypedefDecl 0x55d053b915f8 <line:35:1, line:112:3> col:3 Elf64_DynTag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-ElaboratedType 0x55d053b915a0 'enum Elf64_DynTag' sugar
|   `-EnumType 0x55d053b8d860 'Elf64_DynTag'
|     `-Enum 0x55d053b8d7c0 'Elf64_DynTag'
|-EnumDecl 0x55d053b91678 <line:114:9, line:126:1> line:114:14 Elf_ProgramHeaderType
| |-EnumConstantDecl 0x55d053b91780 <line:115:5, col:13> col:5 PT_NULL 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93610 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b91760 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55d053b91740 <col:13> 'int' 0
| |-EnumConstantDecl 0x55d053b91818 <line:116:5, col:13> col:5 PT_LOAD 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93628 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b917f8 <col:13> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55d053b917d8 <col:13> 'int' 1
| |-EnumConstantDecl 0x55d053b918b0 <line:117:5, col:16> col:5 PT_DYNAMIC 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93640 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b91890 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55d053b91870 <col:16> 'int' 2
| |-EnumConstantDecl 0x55d053b93190 <line:118:5, col:15> col:5 PT_INTERP 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93658 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b93170 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55d053b93150 <col:15> 'int' 3
| |-EnumConstantDecl 0x55d053b93228 <line:119:5, col:13> col:5 PT_NOTE 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93670 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b93208 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55d053b931e8 <col:13> 'int' 4
| |-EnumConstantDecl 0x55d053b932c0 <line:120:5, col:14> col:5 PT_SHLIB 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b93688 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b932a0 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55d053b93280 <col:14> 'int' 5
| |-EnumConstantDecl 0x55d053b93358 <line:121:5, col:13> col:5 PT_PHDR 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b936a0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b93338 <col:13> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55d053b93318 <col:13> 'int' 6
| |-EnumConstantDecl 0x55d053b933f0 <line:122:5, col:12> col:5 PT_TLS 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b936b8 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b933d0 <col:12> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55d053b933b0 <col:12> 'int' 7
| |-EnumConstantDecl 0x55d053b93488 <line:123:5, col:21> col:5 PT_GNU_EH_FRAME 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b936d0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b93468 <col:21> 'int'
| |     |-value: Int 1685382480
| |     `-IntegerLiteral 0x55d053b93448 <col:21> 'int' 1685382480
| |-EnumConstantDecl 0x55d053b93520 <line:124:5, col:18> col:5 PT_GNU_STACK 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55d053b936e8 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b93500 <col:18> 'int'
| |     |-value: Int 1685382481
| |     `-IntegerLiteral 0x55d053b934e0 <col:18> 'int' 1685382481
| `-EnumConstantDecl 0x55d053b935b8 <line:125:5, col:18> col:5 PT_GNU_RELRO 'Elf_ProgramHeaderType'
|   `-ImplicitCastExpr 0x55d053b93700 <col:18> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55d053b93598 <col:18> 'int'
|       |-value: Int 1685382482
|       `-IntegerLiteral 0x55d053b93578 <col:18> 'int' 1685382482
|-TypedefDecl 0x55d053b93778 <line:114:1, line:126:3> col:3 Elf_ProgramHeaderType 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| `-ElaboratedType 0x55d053b93720 'enum Elf_ProgramHeaderType' sugar
|   `-EnumType 0x55d053b91720 'Elf_ProgramHeaderType'
|     `-Enum 0x55d053b91678 'Elf_ProgramHeaderType'
|-CXXRecordDecl 0x55d053b937f8 <line:128:9, col:16> col:16 struct Elf64_Sym
|-TypedefDecl 0x55d053b93908 <col:1, col:26> col:26 Elf64_Sym 'struct Elf64_Sym':'Elf64_Sym'
| `-ElaboratedType 0x55d053b938b0 'struct Elf64_Sym' sugar
|   `-RecordType 0x55d053b93890 'Elf64_Sym'
|     `-CXXRecord 0x55d053b93aa0 'Elf64_Sym'
|-TypedefDecl 0x55d053b939f8 <col:1, col:38> col:38 PElf64_Sym 'struct Elf64_Sym *'
| `-PointerType 0x55d053b939a0 'struct Elf64_Sym *'
|   `-ElaboratedType 0x55d053b938b0 'struct Elf64_Sym' sugar
|     `-RecordType 0x55d053b93890 'Elf64_Sym'
|       `-CXXRecord 0x55d053b93aa0 'Elf64_Sym'
|-CXXRecordDecl 0x55d053b93aa0 prev 0x55d053b937f8 <line:130:1, line:137:1> line:130:8 struct Elf64_Sym definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b93b98 <col:1, col:8> col:8 implicit struct Elf64_Sym
| |-FieldDecl 0x55d053b93c38 <line:131:5, col:11> col:11 st_name 'dword':'unsigned int'
| |-FieldDecl 0x55d053b93c98 <line:132:5, col:10> col:10 st_info 'byte':'unsigned char'
| |-FieldDecl 0x55d053b93cf8 <line:133:5, col:10> col:10 st_other 'byte':'unsigned char'
| |-FieldDecl 0x55d053b93dc0 <line:134:5, col:10> col:10 st_shndx 'word':'unsigned short'
| |-FieldDecl 0x55d053b93e80 <line:135:5, col:11> col:11 st_value 'qword':'unsigned long'
| `-FieldDecl 0x55d053b93ee0 <line:136:5, col:11> col:11 st_size 'qword':'unsigned long'
|-CXXRecordDecl 0x55d053b93f48 <line:139:9, col:16> col:16 struct Elf64_Phdr
|-TypedefDecl 0x55d053b94058 <col:1, col:27> col:27 Elf64_Phdr 'struct Elf64_Phdr':'Elf64_Phdr'
| `-ElaboratedType 0x55d053b94000 'struct Elf64_Phdr' sugar
|   `-RecordType 0x55d053b93fe0 'Elf64_Phdr'
|     `-CXXRecord 0x55d053b94210 'Elf64_Phdr'
|-TypedefDecl 0x55d053b94160 <col:1, col:40> col:40 PElf64_Phdr 'struct Elf64_Phdr *'
| `-PointerType 0x55d053b940f0 'struct Elf64_Phdr *'
|   `-ElaboratedType 0x55d053b94000 'struct Elf64_Phdr' sugar
|     `-RecordType 0x55d053b93fe0 'Elf64_Phdr'
|       `-CXXRecord 0x55d053b94210 'Elf64_Phdr'
|-CXXRecordDecl 0x55d053b94210 prev 0x55d053b93f48 <line:141:1, line:150:1> line:141:8 struct Elf64_Phdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b94308 <col:1, col:8> col:8 implicit struct Elf64_Phdr
| |-FieldDecl 0x55d053b94420 <line:142:5, col:32> col:32 p_type 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| |-FieldDecl 0x55d053b94480 <line:143:5, col:11> col:11 p_flags 'dword':'unsigned int'
| |-FieldDecl 0x55d053b944e0 <line:144:5, col:11> col:11 p_offset 'qword':'unsigned long'
| |-FieldDecl 0x55d053b94540 <line:145:5, col:11> col:11 p_vaddr 'qword':'unsigned long'
| |-FieldDecl 0x55d053b945a0 <line:146:5, col:11> col:11 p_paddr 'qword':'unsigned long'
| |-FieldDecl 0x55d053b94600 <line:147:5, col:11> col:11 p_filesz 'qword':'unsigned long'
| |-FieldDecl 0x55d053b94660 <line:148:5, col:11> col:11 p_memsz 'qword':'unsigned long'
| `-FieldDecl 0x55d053b946c0 <line:149:5, col:11> col:11 p_align 'qword':'unsigned long'
|-CXXRecordDecl 0x55d053b94728 <line:152:9, col:16> col:16 struct Elf64_Dyn
|-TypedefDecl 0x55d053b94838 <col:1, col:26> col:26 Elf64_Dyn 'struct Elf64_Dyn':'Elf64_Dyn'
| `-ElaboratedType 0x55d053b947e0 'struct Elf64_Dyn' sugar
|   `-RecordType 0x55d053b947c0 'Elf64_Dyn'
|     `-CXXRecord 0x55d053b949d0 'Elf64_Dyn'
|-TypedefDecl 0x55d053b94928 <col:1, col:38> col:38 PElf64_Dyn 'struct Elf64_Dyn *'
| `-PointerType 0x55d053b948d0 'struct Elf64_Dyn *'
|   `-ElaboratedType 0x55d053b947e0 'struct Elf64_Dyn' sugar
|     `-RecordType 0x55d053b947c0 'Elf64_Dyn'
|       `-CXXRecord 0x55d053b949d0 'Elf64_Dyn'
|-CXXRecordDecl 0x55d053b949d0 prev 0x55d053b94728 <line:154:1, line:157:1> line:154:8 struct Elf64_Dyn definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b94ac8 <col:1, col:8> col:8 implicit struct Elf64_Dyn
| |-FieldDecl 0x55d053b94be0 <line:155:5, col:23> col:23 d_tag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-FieldDecl 0x55d053b94c40 <line:156:5, col:11> col:11 d_val 'qword':'unsigned long'
|-CXXRecordDecl 0x55d053b94ca8 <line:159:9, col:16> col:16 struct Elf64_Shdr
|-TypedefDecl 0x55d053b94db8 <col:1, col:27> col:27 Elf64_Shdr 'struct Elf64_Shdr':'Elf64_Shdr'
| `-ElaboratedType 0x55d053b94d60 'struct Elf64_Shdr' sugar
|   `-RecordType 0x55d053b94d40 'Elf64_Shdr'
|     `-CXXRecord 0x55d053b99860 'Elf64_Shdr'
|-TypedefDecl 0x55d053b94ea8 <col:1, col:40> col:40 PElf64_Shdr 'struct Elf64_Shdr *'
| `-PointerType 0x55d053b94e50 'struct Elf64_Shdr *'
|   `-ElaboratedType 0x55d053b94d60 'struct Elf64_Shdr' sugar
|     `-RecordType 0x55d053b94d40 'Elf64_Shdr'
|       `-CXXRecord 0x55d053b99860 'Elf64_Shdr'
|-EnumDecl 0x55d053b94f20 <line:161:9, line:191:1> line:161:14 Elf_SectionHeaderType
| |-EnumConstantDecl 0x55d053b95020 <line:162:5, col:14> col:5 SHT_NULL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b96138 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95000 <col:14> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55d053b94fe0 <col:14> 'int' 0
| |-EnumConstantDecl 0x55d053b950b8 <line:163:5, col:18> col:5 SHT_PROGBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b96150 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95098 <col:18> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55d053b95078 <col:18> 'int' 1
| |-EnumConstantDecl 0x55d053b95170 <line:164:5, col:16> col:5 SHT_SYMTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b994c0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95130 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55d053b95110 <col:16> 'int' 2
| |-EnumConstantDecl 0x55d053b95208 <line:165:5, col:16> col:5 SHT_STRTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b994d8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b951e8 <col:16> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55d053b951c8 <col:16> 'int' 3
| |-EnumConstantDecl 0x55d053b952a0 <line:166:5, col:14> col:5 SHT_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b994f0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95280 <col:14> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55d053b95260 <col:14> 'int' 4
| |-EnumConstantDecl 0x55d053b95338 <line:167:5, col:14> col:5 SHT_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99508 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95318 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55d053b952f8 <col:14> 'int' 5
| |-EnumConstantDecl 0x55d053b953d0 <line:168:5, col:17> col:5 SHT_DYNAMIC 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99520 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b953b0 <col:17> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55d053b95390 <col:17> 'int' 6
| |-EnumConstantDecl 0x55d053b95468 <line:169:5, col:14> col:5 SHT_NOTE 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99538 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95448 <col:14> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55d053b95428 <col:14> 'int' 7
| |-EnumConstantDecl 0x55d053b95500 <line:170:5, col:16> col:5 SHT_NOBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99550 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b954e0 <col:16> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x55d053b954c0 <col:16> 'int' 8
| |-EnumConstantDecl 0x55d053b95598 <line:171:5, col:13> col:5 SHT_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99568 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95578 <col:13> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x55d053b95558 <col:13> 'int' 9
| |-EnumConstantDecl 0x55d053b95630 <line:172:5, col:15> col:5 SHT_SHLIB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99580 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95610 <col:15> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x55d053b955f0 <col:15> 'int' 10
| |-EnumConstantDecl 0x55d053b956c8 <line:173:5, col:16> col:5 SHT_DYNSYM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99598 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b956a8 <col:16> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x55d053b95688 <col:16> 'int' 11
| |-EnumConstantDecl 0x55d053b95760 <line:174:5, col:20> col:5 SHT_INIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b995b0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95740 <col:20> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x55d053b95720 <col:20> 'int' 14
| |-EnumConstantDecl 0x55d053b957f8 <line:175:5, col:20> col:5 SHT_FINI_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b995c8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b957d8 <col:20> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x55d053b957b8 <col:20> 'int' 15
| |-EnumConstantDecl 0x55d053b95890 <line:176:5, col:23> col:5 SHT_PREINIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b995e0 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95870 <col:23> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x55d053b95850 <col:23> 'int' 16
| |-EnumConstantDecl 0x55d053b95928 <line:177:5, col:15> col:5 SHT_GROUP 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b995f8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95908 <col:15> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x55d053b958e8 <col:15> 'int' 17
| |-EnumConstantDecl 0x55d053b959c0 <line:178:5, col:22> col:5 SHT_SYMTAB_SHNDX 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99610 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b959a0 <col:22> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x55d053b95980 <col:22> 'int' 18
| |-EnumConstantDecl 0x55d053b95a58 <line:179:5, col:21> col:5 SHT_ANDROID_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99628 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95a38 <col:21> 'int'
| |     |-value: Int 1610612737
| |     `-IntegerLiteral 0x55d053b95a18 <col:21> 'int' 1610612737
| |-EnumConstantDecl 0x55d053b95af0 <line:180:5, col:22> col:5 SHT_ANDROID_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99640 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95ad0 <col:22> 'int'
| |     |-value: Int 1610612738
| |     `-IntegerLiteral 0x55d053b95ab0 <col:22> 'int' 1610612738
| |-EnumConstantDecl 0x55d053b95b88 <line:181:5, col:24> col:5 SHT_GNU_ATTRIBUTES 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99658 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95b68 <col:24> 'int'
| |     |-value: Int 1879048181
| |     `-IntegerLiteral 0x55d053b95b48 <col:24> 'int' 1879048181
| |-EnumConstantDecl 0x55d053b95c20 <line:182:5, col:18> col:5 SHT_GNU_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99670 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95c00 <col:18> 'int'
| |     |-value: Int 1879048182
| |     `-IntegerLiteral 0x55d053b95be0 <col:18> 'int' 1879048182
| |-EnumConstantDecl 0x55d053b95cb8 <line:183:5, col:21> col:5 SHT_GNU_LIBLIST 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99688 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95c98 <col:21> 'int'
| |     |-value: Int 1879048183
| |     `-IntegerLiteral 0x55d053b95c78 <col:21> 'int' 1879048183
| |-EnumConstantDecl 0x55d053b95d50 <line:184:5, col:18> col:5 SHT_CHECKSUM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b996a0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95d30 <col:18> 'int'
| |     |-value: Int 1879048184
| |     `-IntegerLiteral 0x55d053b95d10 <col:18> 'int' 1879048184
| |-EnumConstantDecl 0x55d053b95de8 <line:185:5, col:19> col:5 SHT_SUNW_move 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b996b8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95dc8 <col:19> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x55d053b95da8 <col:19> 'int' 1879048186
| |-EnumConstantDecl 0x55d053b95e80 <line:186:5, col:21> col:5 SHT_SUNW_COMDAT 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b996d0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95e60 <col:21> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x55d053b95e40 <col:21> 'int' 1879048187
| |-EnumConstantDecl 0x55d053b95f18 <line:187:5, col:22> col:5 SHT_SUNW_syminfo 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b996e8 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95ef8 <col:22> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x55d053b95ed8 <col:22> 'int' 1879048188
| |-EnumConstantDecl 0x55d053b95fb0 <line:188:5, col:20> col:5 SHT_GNU_verdef 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99700 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b95f90 <col:20> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x55d053b95f70 <col:20> 'int' 1879048189
| |-EnumConstantDecl 0x55d053b96048 <line:189:5, col:21> col:5 SHT_GNU_verneed 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55d053b99718 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55d053b96028 <col:21> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x55d053b96008 <col:21> 'int' 1879048190
| `-EnumConstantDecl 0x55d053b960e0 <line:190:5, col:20> col:5 SHT_GNU_versym 'Elf_SectionHeaderType'
|   `-ImplicitCastExpr 0x55d053b99730 <col:20> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55d053b960c0 <col:20> 'int'
|       |-value: Int 1879048191
|       `-IntegerLiteral 0x55d053b960a0 <col:20> 'int' 1879048191
|-TypedefDecl 0x55d053b997a8 <line:161:1, line:191:3> col:3 Elf_SectionHeaderType 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| `-ElaboratedType 0x55d053b99750 'enum Elf_SectionHeaderType' sugar
|   `-EnumType 0x55d053b94fc0 'Elf_SectionHeaderType'
|     `-Enum 0x55d053b94f20 'Elf_SectionHeaderType'
|-CXXRecordDecl 0x55d053b99860 prev 0x55d053b94ca8 <line:193:1, line:204:1> line:193:8 struct Elf64_Shdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b99958 <col:1, col:8> col:8 implicit struct Elf64_Shdr
| |-FieldDecl 0x55d053b999f8 <line:194:5, col:11> col:11 sh_name 'dword':'unsigned int'
| |-FieldDecl 0x55d053b99ad0 <line:195:5, col:32> col:32 sh_type 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| |-FieldDecl 0x55d053b99b30 <line:196:5, col:11> col:11 sh_flags 'qword':'unsigned long'
| |-FieldDecl 0x55d053b99b90 <line:197:5, col:11> col:11 sh_addr 'qword':'unsigned long'
| |-FieldDecl 0x55d053b99bf0 <line:198:5, col:11> col:11 sh_offset 'qword':'unsigned long'
| |-FieldDecl 0x55d053b99c50 <line:199:5, col:11> col:11 sh_size 'qword':'unsigned long'
| |-FieldDecl 0x55d053b99cb0 <line:200:5, col:11> col:11 sh_link 'dword':'unsigned int'
| |-FieldDecl 0x55d053b99d10 <line:201:5, col:11> col:11 sh_info 'dword':'unsigned int'
| |-FieldDecl 0x55d053b99d70 <line:202:5, col:11> col:11 sh_addralign 'qword':'unsigned long'
| `-FieldDecl 0x55d053b99dd0 <line:203:5, col:11> col:11 sh_entsize 'qword':'unsigned long'
|-CXXRecordDecl 0x55d053b99e38 <line:206:9, col:16> col:16 struct NoteAbiTag
|-TypedefDecl 0x55d053b99f48 <col:1, col:27> col:27 NoteAbiTag 'struct NoteAbiTag':'NoteAbiTag'
| `-ElaboratedType 0x55d053b99ef0 'struct NoteAbiTag' sugar
|   `-RecordType 0x55d053b99ed0 'NoteAbiTag'
|     `-CXXRecord 0x55d053b9a0e0 'NoteAbiTag'
|-TypedefDecl 0x55d053b9a038 <col:1, col:40> col:40 PNoteAbiTag 'struct NoteAbiTag *'
| `-PointerType 0x55d053b99fe0 'struct NoteAbiTag *'
|   `-ElaboratedType 0x55d053b99ef0 'struct NoteAbiTag' sugar
|     `-RecordType 0x55d053b99ed0 'NoteAbiTag'
|       `-CXXRecord 0x55d053b9a0e0 'NoteAbiTag'
|-CXXRecordDecl 0x55d053b9a0e0 prev 0x55d053b99e38 <line:208:1, line:215:1> line:208:8 struct NoteAbiTag definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b9a1d8 <col:1, col:8> col:8 implicit struct NoteAbiTag
| |-FieldDecl 0x55d053b9a278 <line:209:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9a2d8 <line:210:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9a338 <line:211:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9a420 <line:212:5, col:16> col:10 name 'char[4]'
| |-FieldDecl 0x55d053b9b0e0 <line:213:5, col:11> col:11 abiType 'dword':'unsigned int'
| `-FieldDecl 0x55d053b9b1f0 <line:214:5, col:34> col:11 requiredKernelVersion 'dword[3]'
|-CXXRecordDecl 0x55d053b9b258 <line:217:9, col:16> col:16 struct Elf64_Rela
|-TypedefDecl 0x55d053b9b368 <col:1, col:27> col:27 Elf64_Rela 'struct Elf64_Rela':'Elf64_Rela'
| `-ElaboratedType 0x55d053b9b310 'struct Elf64_Rela' sugar
|   `-RecordType 0x55d053b9b2f0 'Elf64_Rela'
|     `-CXXRecord 0x55d053b9b500 'Elf64_Rela'
|-TypedefDecl 0x55d053b9b458 <col:1, col:40> col:40 PElf64_Rela 'struct Elf64_Rela *'
| `-PointerType 0x55d053b9b400 'struct Elf64_Rela *'
|   `-ElaboratedType 0x55d053b9b310 'struct Elf64_Rela' sugar
|     `-RecordType 0x55d053b9b2f0 'Elf64_Rela'
|       `-CXXRecord 0x55d053b9b500 'Elf64_Rela'
|-CXXRecordDecl 0x55d053b9b500 prev 0x55d053b9b258 <line:219:1, line:223:1> line:219:8 struct Elf64_Rela definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b9b5f8 <col:1, col:8> col:8 implicit struct Elf64_Rela
| |-FieldDecl 0x55d053b9b698 <line:220:5, col:11> col:11 r_offset 'qword':'unsigned long'
| |-FieldDecl 0x55d053b9b6f8 <line:221:5, col:11> col:11 r_info 'qword':'unsigned long'
| `-FieldDecl 0x55d053b9b758 <line:222:5, col:11> col:11 r_addend 'qword':'unsigned long'
|-CXXRecordDecl 0x55d053b9b7c0 <line:225:9, col:16> col:16 struct GnuBuildId
|-TypedefDecl 0x55d053b9b8c8 <col:1, col:27> col:27 GnuBuildId 'struct GnuBuildId':'GnuBuildId'
| `-ElaboratedType 0x55d053b9b870 'struct GnuBuildId' sugar
|   `-RecordType 0x55d053b9b850 'GnuBuildId'
|     `-CXXRecord 0x55d053b9ba60 'GnuBuildId'
|-TypedefDecl 0x55d053b9b9b8 <col:1, col:40> col:40 PGnuBuildId 'struct GnuBuildId *'
| `-PointerType 0x55d053b9b960 'struct GnuBuildId *'
|   `-ElaboratedType 0x55d053b9b870 'struct GnuBuildId' sugar
|     `-RecordType 0x55d053b9b850 'GnuBuildId'
|       `-CXXRecord 0x55d053b9ba60 'GnuBuildId'
|-CXXRecordDecl 0x55d053b9ba60 prev 0x55d053b9b7c0 <line:227:1, line:233:1> line:227:8 struct GnuBuildId definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b9bb58 <col:1, col:8> col:8 implicit struct GnuBuildId
| |-FieldDecl 0x55d053b9bbf8 <line:228:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9bc58 <line:229:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9bcb8 <line:230:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9bd68 <line:231:5, col:16> col:10 name 'char[4]'
| `-FieldDecl 0x55d053b9be80 <line:232:5, col:17> col:10 hash 'byte[20]'
|-CXXRecordDecl 0x55d053b9bee8 <line:235:9, col:16> col:16 struct NoteGnuProperty_4
|-TypedefDecl 0x55d053b9bff8 <col:1, col:34> col:34 NoteGnuProperty_4 'struct NoteGnuProperty_4':'NoteGnuProperty_4'
| `-ElaboratedType 0x55d053b9bfa0 'struct NoteGnuProperty_4' sugar
|   `-RecordType 0x55d053b9bf80 'NoteGnuProperty_4'
|     `-CXXRecord 0x55d053b9c9e0 'NoteGnuProperty_4'
|-TypedefDecl 0x55d053b9c938 <col:1, col:54> col:54 PNoteGnuProperty_4 'struct NoteGnuProperty_4 *'
| `-PointerType 0x55d053b9c090 'struct NoteGnuProperty_4 *'
|   `-ElaboratedType 0x55d053b9bfa0 'struct NoteGnuProperty_4' sugar
|     `-RecordType 0x55d053b9bf80 'NoteGnuProperty_4'
|       `-CXXRecord 0x55d053b9c9e0 'NoteGnuProperty_4'
|-CXXRecordDecl 0x55d053b9c9e0 prev 0x55d053b9bee8 <line:237:1, line:242:1> line:237:8 struct NoteGnuProperty_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b9cad8 <col:1, col:8> col:8 implicit struct NoteGnuProperty_4
| |-FieldDecl 0x55d053b9cb78 <line:238:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9cbd8 <line:239:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9cc38 <line:240:5, col:11> col:11 type 'dword':'unsigned int'
| `-FieldDecl 0x55d053b9cce8 <line:241:5, col:16> col:10 name 'char[4]'
|-CXXRecordDecl 0x55d053b9cd50 <line:244:9, col:16> col:16 struct Elf64_Ehdr
|-TypedefDecl 0x55d053b9ce58 <col:1, col:27> col:27 Elf64_Ehdr 'struct Elf64_Ehdr':'Elf64_Ehdr'
| `-ElaboratedType 0x55d053b9ce00 'struct Elf64_Ehdr' sugar
|   `-RecordType 0x55d053b9cde0 'Elf64_Ehdr'
|     `-CXXRecord 0x55d053b9cff0 'Elf64_Ehdr'
|-TypedefDecl 0x55d053b9cf48 <col:1, col:40> col:40 PElf64_Ehdr 'struct Elf64_Ehdr *'
| `-PointerType 0x55d053b9cef0 'struct Elf64_Ehdr *'
|   `-ElaboratedType 0x55d053b9ce00 'struct Elf64_Ehdr' sugar
|     `-RecordType 0x55d053b9cde0 'Elf64_Ehdr'
|       `-CXXRecord 0x55d053b9cff0 'Elf64_Ehdr'
|-CXXRecordDecl 0x55d053b9cff0 prev 0x55d053b9cd50 <line:246:1, line:268:1> line:246:8 struct Elf64_Ehdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55d053b9d0e8 <col:1, col:8> col:8 implicit struct Elf64_Ehdr
| |-FieldDecl 0x55d053b9d188 <line:247:5, col:10> col:10 e_ident_magic_num 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d270 <line:248:5, col:29> col:10 e_ident_magic_str 'char[3]'
| |-FieldDecl 0x55d053b9d2d0 <line:249:5, col:10> col:10 e_ident_class 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d330 <line:250:5, col:10> col:10 e_ident_data 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d390 <line:251:5, col:10> col:10 e_ident_version 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d3f0 <line:252:5, col:10> col:10 e_ident_osabi 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d450 <line:253:5, col:10> col:10 e_ident_abiversion 'byte':'unsigned char'
| |-FieldDecl 0x55d053b9d560 <line:254:5, col:23> col:10 e_ident_pad 'byte[7]'
| |-FieldDecl 0x55d053b9d5c0 <line:255:5, col:10> col:10 e_type 'word':'unsigned short'
| |-FieldDecl 0x55d053b9d620 <line:256:5, col:10> col:10 e_machine 'word':'unsigned short'
| |-FieldDecl 0x55d053b9d680 <line:257:5, col:11> col:11 e_version 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9d6e0 <line:258:5, col:11> col:11 e_entry 'qword':'unsigned long'
| |-FieldDecl 0x55d053b9d740 <line:259:5, col:11> col:11 e_phoff 'qword':'unsigned long'
| |-FieldDecl 0x55d053b9d7a0 <line:260:5, col:11> col:11 e_shoff 'qword':'unsigned long'
| |-FieldDecl 0x55d053b9d800 <line:261:5, col:11> col:11 e_flags 'dword':'unsigned int'
| |-FieldDecl 0x55d053b9d860 <line:262:5, col:10> col:10 e_ehsize 'word':'unsigned short'
| |-FieldDecl 0x55d053b9d8c0 <line:263:5, col:10> col:10 e_phentsize 'word':'unsigned short'
| |-FieldDecl 0x55d053b9e150 <line:264:5, col:10> col:10 e_phnum 'word':'unsigned short'
| |-FieldDecl 0x55d053b9e1b0 <line:265:5, col:10> col:10 e_shentsize 'word':'unsigned short'
| |-FieldDecl 0x55d053b9e210 <line:266:5, col:10> col:10 e_shnum 'word':'unsigned short'
| `-FieldDecl 0x55d053b9e270 <line:267:5, col:10> col:10 e_shstrndx 'word':'unsigned short'
|-CXXRecordDecl 0x55d053b9e2d8 <line:270:9, col:16> col:16 struct evp_pkey_ctx_st
|-TypedefDecl 0x55d053b9e3e8 <col:1, col:32> col:32 evp_pkey_ctx_st 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x55d053b9e390 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x55d053b9e370 'evp_pkey_ctx_st'
|     `-CXXRecord 0x55d053b9e580 'evp_pkey_ctx_st'
|-TypedefDecl 0x55d053b9e4d8 <col:1, col:50> col:50 Pevp_pkey_ctx_st 'struct evp_pkey_ctx_st *'
| `-PointerType 0x55d053b9e480 'struct evp_pkey_ctx_st *'
|   `-ElaboratedType 0x55d053b9e390 'struct evp_pkey_ctx_st' sugar
|     `-RecordType 0x55d053b9e370 'evp_pkey_ctx_st'
|       `-CXXRecord 0x55d053b9e580 'evp_pkey_ctx_st'
|-CXXRecordDecl 0x55d053b9e580 prev 0x55d053b9e2d8 <line:272:1, line:273:1> line:272:8 struct evp_pkey_ctx_st definition
| |-DefinitionData pass_in_registers empty aggregate standard_layout trivially_copyable pod trivial literal has_constexpr_non_copy_move_ctor can_const_default_init
| | |-DefaultConstructor exists trivial constexpr needs_implicit defaulted_is_constexpr
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| `-CXXRecordDecl 0x55d053b9e678 <col:1, col:8> col:8 implicit struct evp_pkey_ctx_st
|-TypedefDecl 0x55d053b9e770 <line:275:1, col:32> col:32 referenced EVP_PKEY_CTX 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x55d053b9e720 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x55d053b9e370 'evp_pkey_ctx_st'
|     `-CXXRecord 0x55d053b9e580 'evp_pkey_ctx_st'
|-VarDecl 0x55d053b9e840 <line:279:1, col:11> col:11 main 'undefined':'unsigned char'
|-VarDecl 0x55d053b9e960 <line:280:1, col:12> col:12 completed 'undefined1':'unsigned char'
|-VarDecl 0x55d053b9ea40 <line:281:1, col:12> col:12 used crc32_context 'undefined4':'unsigned int'
|-VarDecl 0x55d053b9eab8 <line:282:1, col:11> col:11 used DAT_004011ba 'undefined':'unsigned char'
|-VarDecl 0x55d053b9eb30 <line:283:1, col:12> col:12 used g_4 'undefined4':'unsigned int'
|-VarDecl 0x55d053b9ec60 <line:284:1, col:16> col:18 used crc32_tab 'undefined1[1024]'
|-VarDecl 0x55d053b9ed90 <line:285:1, col:14> col:16 used g_5 'undefined1[48]'
|-FunctionDecl 0x55d053b9efb8 <line:287:1, line:294:1> line:287:5 _init 'int (EVP_PKEY_CTX *)'
| |-ParmVarDecl 0x55d053b9eea8 <col:11, col:25> col:25 ctx 'EVP_PKEY_CTX *'
| `-CompoundStmt 0x55d053ba1b70 <line:289:1, line:294:1>
|   |-DeclStmt 0x55d053b9f0e8 <line:290:3, col:12>
|   | `-VarDecl 0x55d053b9f080 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55d053ba1b08 <line:292:3, col:26> '<dependent type>' contains-errors '='
|   | |-DeclRefExpr 0x55d053b9f100 <col:3> 'int' lvalue Var 0x55d053b9f080 'iVar1' 'int'
|   | `-RecoveryExpr 0x55d053ba1ae0 <col:11, col:26> '<dependent type>' contains-errors lvalue
|   |   `-UnresolvedLookupExpr 0x55d053ba1aa0 <col:11> '<overloaded function type>' lvalue (ADL) = '__gmon_start__' empty
|   `-ReturnStmt 0x55d053ba1b60 <line:293:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba1b48 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55d053ba1b28 <col:10> 'int' lvalue Var 0x55d053b9f080 'iVar1' 'int'
|-FunctionDecl 0x55d053ba1c60 <line:298:1, line:303:1> line:298:6 FUN_00400360 'void ()'
| `-CompoundStmt 0x55d053ba1d38 <line:300:1, line:303:1>
|   `-ReturnStmt 0x55d053ba1d28 <line:302:3>
|-FunctionDecl 0x55d053ba1e40 <line:309:1, line:316:1> line:309:5 referenced printf 'int (char *, ...)'
| |-ParmVarDecl 0x55d053ba1d68 <col:12, col:18> col:18 used __format 'char *'
| `-CompoundStmt 0x55d053ba2128 <line:311:1, line:316:1>
|   |-DeclStmt 0x55d053ba1f70 <line:312:3, col:12>
|   | `-VarDecl 0x55d053ba1f08 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55d053ba20c0 <line:314:3, col:26> 'int' lvalue '='
|   | |-DeclRefExpr 0x55d053ba1f88 <col:3> 'int' lvalue Var 0x55d053ba1f08 'iVar1' 'int'
|   | `-CallExpr 0x55d053ba2078 <col:11, col:26> 'int'
|   |   |-ImplicitCastExpr 0x55d053ba2060 <col:11> 'int (*)(char *, ...)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x55d053ba2010 <col:11> 'int (char *, ...)' lvalue Function 0x55d053ba1e40 'printf' 'int (char *, ...)'
|   |   `-ImplicitCastExpr 0x55d053ba20a8 <col:18> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x55d053ba1ff0 <col:18> 'char *' lvalue ParmVar 0x55d053ba1d68 '__format' 'char *'
|   `-ReturnStmt 0x55d053ba2118 <line:315:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba2100 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55d053ba20e0 <col:10> 'int' lvalue Var 0x55d053ba1f08 'iVar1' 'int'
|-FunctionDecl 0x55d053ba22c8 <line:322:1, line:329:1> line:322:5 used strcmp 'int (char *, char *)'
| |-ParmVarDecl 0x55d053ba2168 <col:12, col:18> col:18 used __s1 'char *'
| |-ParmVarDecl 0x55d053ba21e8 <col:23, col:29> col:29 used __s2 'char *'
| `-CompoundStmt 0x55d053ba25f8 <line:324:1, line:329:1>
|   |-DeclStmt 0x55d053ba2400 <line:325:3, col:12>
|   | `-VarDecl 0x55d053ba2398 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55d053ba2590 <line:327:3, col:27> 'int' lvalue '='
|   | |-DeclRefExpr 0x55d053ba2418 <col:3> 'int' lvalue Var 0x55d053ba2398 'iVar1' 'int'
|   | `-CallExpr 0x55d053ba2528 <col:11, col:27> 'int'
|   |   |-ImplicitCastExpr 0x55d053ba2510 <col:11> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x55d053ba24c0 <col:11> 'int (char *, char *)' lvalue Function 0x55d053ba22c8 'strcmp' 'int (char *, char *)'
|   |   |-ImplicitCastExpr 0x55d053ba2560 <col:18> 'char *' <LValueToRValue>
|   |   | `-DeclRefExpr 0x55d053ba2480 <col:18> 'char *' lvalue ParmVar 0x55d053ba2168 '__s1' 'char *'
|   |   `-ImplicitCastExpr 0x55d053ba2578 <col:23> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x55d053ba24a0 <col:23> 'char *' lvalue ParmVar 0x55d053ba21e8 '__s2' 'char *'
|   `-ReturnStmt 0x55d053ba25e8 <line:328:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba25d0 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55d053ba25b0 <col:10> 'int' lvalue Var 0x55d053ba2398 'iVar1' 'int'
|-VarDecl 0x55d053ba2630 <line:333:1, col:6> col:6 invalid processEntry 'void'
|-FunctionDecl 0x55d053ba2730 <line:346:1, line:350:1> line:346:6 _dl_relocate_static_pie 'void ()'
| `-CompoundStmt 0x55d053ba27e8 <line:348:1, line:350:1>
|   `-ReturnStmt 0x55d053ba27d8 <line:349:3>
|-FunctionDecl 0x55d053ba2898 <line:357:1, line:361:1> line:357:6 used deregister_tm_clones 'void ()'
| `-CompoundStmt 0x55d053ba2950 <line:359:1, line:361:1>
|   `-ReturnStmt 0x55d053ba2940 <line:360:3>
|-FunctionDecl 0x55d053ba2ab0 <line:368:1, line:372:1> line:368:6 used register_tm_clones 'void ()'
| `-CompoundStmt 0x55d053ba2b68 <line:370:1, line:372:1>
|   `-ReturnStmt 0x55d053ba2b58 <line:371:3>
|-FunctionDecl 0x55d053ba2c18 <line:376:1, line:385:1> line:376:6 __do_global_dtors_aux 'void ()'
| `-CompoundStmt 0x55d053ba2e50 <line:378:1, line:385:1>
|   |-IfStmt 0x55d053ba2e20 <line:379:3, line:383:3>
|   | |-RecoveryExpr 0x55d053ba2cd8 <line:379:7, col:22> 'bool' contains-errors
|   | `-CompoundStmt 0x55d053ba2e00 <col:28, line:383:3>
|   |   |-CallExpr 0x55d053ba2da8 <line:380:5, col:26> 'void'
|   |   | `-ImplicitCastExpr 0x55d053ba2d90 <col:5> 'void (*)()' <FunctionToPointerDecay>
|   |   |   `-DeclRefExpr 0x55d053ba2d40 <col:5> 'void ()' lvalue Function 0x55d053ba2898 'deregister_tm_clones' 'void ()'
|   |   `-ReturnStmt 0x55d053ba2df0 <line:382:5>
|   `-ReturnStmt 0x55d053ba2e40 <line:384:3>
|-FunctionDecl 0x55d053ba2f08 <line:389:1, line:394:1> line:389:6 frame_dummy 'void ()'
| `-CompoundStmt 0x55d053ba3068 <line:391:1, line:394:1>
|   |-CallExpr 0x55d053ba3030 <line:392:3, col:22> 'void'
|   | `-ImplicitCastExpr 0x55d053ba3018 <col:3> 'void (*)()' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x55d053ba2ff8 <col:3> 'void ()' lvalue Function 0x55d053ba2ab0 'register_tm_clones' 'void ()'
|   `-ReturnStmt 0x55d053ba3058 <line:393:3>
|-FunctionDecl 0x55d053ba31a0 <line:398:1, line:402:1> line:398:12 used codemarker_alpha 'undefined4 (undefined4)'
| |-ParmVarDecl 0x55d053ba3098 <col:29, col:40> col:40 used param_1 'undefined4':'unsigned int'
| `-CompoundStmt 0x55d053ba3298 <line:400:1, line:402:1>
|   `-ReturnStmt 0x55d053ba3288 <line:401:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba3270 <col:10> 'undefined4':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55d053ba3250 <col:10> 'undefined4':'unsigned int' lvalue ParmVar 0x55d053ba3098 'param_1' 'undefined4':'unsigned int'
|-FunctionDecl 0x55d053ba34c0 <line:406:1, line:430:1> line:406:12 invalid main 'undefined8 (int, long)'
| |-ParmVarDecl 0x55d053ba3328 <col:17, col:21> col:21 used param_1 'int'
| |-ParmVarDecl 0x55d053ba33a8 <col:29, col:34> col:34 used param_2 'long'
| `-CompoundStmt 0x55d053ba5828 <line:408:1, line:430:1>
|   |-DeclStmt 0x55d053ba3640 <line:409:3, col:12>
|   | `-VarDecl 0x55d053ba35d8 <col:3, col:7> col:7 used iVar1 'int'
|   |-DeclStmt 0x55d053ba36d0 <line:410:3, col:22>
|   | `-VarDecl 0x55d053ba3668 <col:3, col:14> col:14 used local_20 'undefined4':'unsigned int'
|   |-CallExpr 0x55d053ba37e8 <line:412:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba37d0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba3750 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba3818 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba3730 <col:20> 'int' 2
|   |-CallExpr 0x55d053ba38d0 <line:413:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba38b8 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba3898 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba3900 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba3878 <col:20> 'int' 3
|   |-BinaryOperator 0x55d053ba3970 <line:414:3, col:14> 'undefined4':'unsigned int' lvalue '='
|   | |-DeclRefExpr 0x55d053ba3918 <col:3> 'undefined4':'unsigned int' lvalue Var 0x55d053ba3668 'local_20' 'undefined4':'unsigned int'
|   | `-ImplicitCastExpr 0x55d053ba3958 <col:14> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba3938 <col:14> 'int' 0
|   |-CallExpr 0x55d053ba3a30 <line:415:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba3a18 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba39f8 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba3a60 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba39d8 <col:20> 'int' 4
|   |-IfStmt 0x55d053ba5170 <line:416:3, line:421:3>
|   | |-BinaryOperator 0x55d053ba4d18 <line:416:7, col:18> 'bool' '=='
|   | | |-ImplicitCastExpr 0x55d053ba4d00 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55d053ba3a78 <col:7> 'int' lvalue ParmVar 0x55d053ba3328 'param_1' 'int'
|   | | `-IntegerLiteral 0x55d053ba4ce0 <col:18> 'int' 2
|   | `-CompoundStmt 0x55d053ba5150 <col:21, line:421:3>
|   |   |-BinaryOperator 0x55d053ba5008 <line:417:5, col:47> 'int' lvalue '='
|   |   | |-DeclRefExpr 0x55d053ba4d38 <col:5> 'int' lvalue Var 0x55d053ba35d8 'iVar1' 'int'
|   |   | `-CallExpr 0x55d053ba4f88 <col:13, col:47> 'int'
|   |   |   |-ImplicitCastExpr 0x55d053ba4f70 <col:13> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   |   | `-DeclRefExpr 0x55d053ba4f50 <col:13> 'int (char *, char *)' lvalue Function 0x55d053ba22c8 'strcmp' 'int (char *, char *)'
|   |   |   |-ImplicitCastExpr 0x55d053ba4fc0 <col:20, col:42> 'char *' <LValueToRValue>
|   |   |   | `-UnaryOperator 0x55d053ba4eb0 <col:20, col:42> 'char *' lvalue prefix '*' cannot overflow
|   |   |   |   `-CStyleCastExpr 0x55d053ba4e88 <col:21, col:42> 'char **' <IntegralToPointer>
|   |   |   |     `-ParenExpr 0x55d053ba4e68 <col:30, col:42> 'long'
|   |   |   |       `-BinaryOperator 0x55d053ba4e10 <col:31, col:41> 'long' '+'
|   |   |   |         |-ImplicitCastExpr 0x55d053ba4de0 <col:31> 'long' <LValueToRValue>
|   |   |   |         | `-DeclRefExpr 0x55d053ba4da0 <col:31> 'long' lvalue ParmVar 0x55d053ba33a8 'param_2' 'long'
|   |   |   |         `-ImplicitCastExpr 0x55d053ba4df8 <col:41> 'long' <IntegralCast>
|   |   |   |           `-IntegerLiteral 0x55d053ba4dc0 <col:41> 'int' 8
|   |   |   `-ImplicitCastExpr 0x55d053ba4ff0 <col:44> 'char *' <NoOp>
|   |   |     `-ImplicitCastExpr 0x55d053ba4fd8 <col:44> 'const char *' <ArrayToPointerDecay>
|   |   |       `-StringLiteral 0x55d053ba4f30 <col:44> 'const char[2]' lvalue "1"
|   |   `-IfStmt 0x55d053ba5130 <line:418:5, line:420:5>
|   |     |-BinaryOperator 0x55d053ba5080 <line:418:9, col:18> 'bool' '=='
|   |     | |-ImplicitCastExpr 0x55d053ba5068 <col:9> 'int' <LValueToRValue>
|   |     | | `-DeclRefExpr 0x55d053ba5028 <col:9> 'int' lvalue Var 0x55d053ba35d8 'iVar1' 'int'
|   |     | `-IntegerLiteral 0x55d053ba5048 <col:18> 'int' 0
|   |     `-CompoundStmt 0x55d053ba5118 <col:21, line:420:5>
|   |       `-BinaryOperator 0x55d053ba50f8 <line:419:7, col:18> 'undefined4':'unsigned int' lvalue '='
|   |         |-DeclRefExpr 0x55d053ba50a0 <col:7> 'undefined4':'unsigned int' lvalue Var 0x55d053ba3668 'local_20' 'undefined4':'unsigned int'
|   |         `-ImplicitCastExpr 0x55d053ba50e0 <col:18> 'undefined4':'unsigned int' <IntegralCast>
|   |           `-IntegerLiteral 0x55d053ba50c0 <col:18> 'int' 1
|   |-CallExpr 0x55d053ba5230 <line:422:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba5218 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba51f8 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba5260 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba51d8 <col:20> 'int' 5
|   |-RecoveryExpr 0x55d053ba52b8 <line:423:3, col:23> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55d053ba5278 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_begin' empty
|   |-CallExpr 0x55d053ba5380 <line:424:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba5368 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba5348 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba53b0 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba5328 <col:20> 'int' 6
|   |-RecoveryExpr 0x55d053ba5408 <line:425:3, col:16> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55d053ba53c8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_gentab' empty
|   |-RecoveryExpr 0x55d053ba5470 <line:426:3, col:10> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55d053ba5430 <col:3> '<overloaded function type>' lvalue (ADL) = 'func_1' empty
|   |-RecoveryExpr 0x55d053ba5690 <line:427:3, col:51> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba5498 <col:3> '<overloaded function type>' lvalue (ADL) = 'transparent_crc' empty
|   | |-CStyleCastExpr 0x55d053ba5540 <col:19, col:25> 'long' <NoOp>
|   | | `-ImplicitCastExpr 0x55d053ba5528 <col:25> 'long' <IntegralCast> part_of_explicit_cast
|   | |   `-ImplicitCastExpr 0x55d053ba5510 <col:25> 'undefined4':'unsigned int' <LValueToRValue> part_of_explicit_cast
|   | |     `-DeclRefExpr 0x55d053ba54d8 <col:25> 'undefined4':'unsigned int' lvalue Var 0x55d053b9eb30 'g_4' 'undefined4':'unsigned int'
|   | |-UnaryOperator 0x55d053ba55f0 <col:29, col:30> 'undefined *' prefix '&' cannot overflow
|   | | `-DeclRefExpr 0x55d053ba5568 <col:30> 'undefined':'unsigned char' lvalue Var 0x55d053b9eab8 'DAT_004011ba' 'undefined':'unsigned char'
|   | `-DeclRefExpr 0x55d053ba5670 <col:43> 'undefined4':'unsigned int' lvalue Var 0x55d053ba3668 'local_20' 'undefined4':'unsigned int'
|   |-RecoveryExpr 0x55d053ba57a8 <line:428:3, col:56> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba56d0 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_end' empty
|   | |-BinaryOperator 0x55d053ba5768 <col:21, col:37> 'unsigned int' '^'
|   | | |-ImplicitCastExpr 0x55d053ba5750 <col:21> 'undefined4':'unsigned int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55d053ba5710 <col:21> 'undefined4':'unsigned int' lvalue Var 0x55d053b9ea40 'crc32_context' 'undefined4':'unsigned int'
|   | | `-IntegerLiteral 0x55d053ba5730 <col:37> 'unsigned int' 4294967295
|   | `-DeclRefExpr 0x55d053ba5788 <col:48> 'undefined4':'unsigned int' lvalue Var 0x55d053ba3668 'local_20' 'undefined4':'unsigned int'
|   `-ReturnStmt 0x55d053ba5818 <line:429:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba5800 <col:10> 'undefined8':'unsigned long' <IntegralCast>
|       `-IntegerLiteral 0x55d053ba57e0 <col:10> 'int' 0
|-FunctionDecl 0x55d053ba5948 <line:434:1, line:438:1> line:434:6 platform_main_begin 'void ()'
| `-CompoundStmt 0x55d053ba5a00 <line:436:1, line:438:1>
|   `-ReturnStmt 0x55d053ba59f0 <line:437:3>
|-FunctionDecl 0x55d053ba5ab0 <line:442:1, line:462:1> line:442:6 crc32_gentab 'void ()'
| `-CompoundStmt 0x55d053ba76f0 <line:444:1, line:462:1>
|   |-DeclStmt 0x55d053ba5bd8 <line:445:3, col:15>
|   | `-VarDecl 0x55d053ba5b70 <col:3, col:7> col:7 used local_18 'int'
|   |-DeclStmt 0x55d053ba5c80 <line:446:3, col:16>
|   | `-VarDecl 0x55d053ba5c18 <col:3, col:8> col:8 referenced invalid local_14 'int'
|   |-DeclStmt 0x55d053ba6d68 <line:447:3, col:15>
|   | `-VarDecl 0x55d053ba6d00 <col:3, col:8> col:8 referenced invalid local_c 'int'
|   |-ForStmt 0x55d053ba76a8 <line:449:3, line:460:3>
|   | |-BinaryOperator 0x55d053ba6de8 <line:449:8, col:19> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x55d053ba6da0 <col:8> '<dependent type>' contains-errors lvalue
|   | | | `-DeclRefExpr 0x55d053ba6d80 <col:8> 'int' lvalue Var 0x55d053ba5c18 'local_14' 'int'
|   | | `-IntegerLiteral 0x55d053ba6dc8 <col:19> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55d053ba6e88 <col:22, col:38> 'bool' contains-errors '<'
|   | | |-CStyleCastExpr 0x55d053ba6e40 <col:22, col:27> 'int' contains-errors <Dependent>
|   | | | `-RecoveryExpr 0x55d053ba6e08 <col:27> '<dependent type>' contains-errors lvalue
|   | | `-IntegerLiteral 0x55d053ba6e68 <col:38> 'int' 256
|   | |-BinaryOperator 0x55d053ba6f28 <col:45, col:67> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x55d053ba6ea8 <col:45> '<dependent type>' contains-errors lvalue
|   | | `-BinaryOperator 0x55d053ba6f08 <col:56, col:67> '<dependent type>' contains-errors '+'
|   | |   |-RecoveryExpr 0x55d053ba6ec8 <col:56> '<dependent type>' contains-errors lvalue
|   | |   `-IntegerLiteral 0x55d053ba6ee8 <col:67> 'int' 1
|   | `-CompoundStmt 0x55d053ba7688 <col:70, line:460:3>
|   |   |-BinaryOperator 0x55d053ba6fb0 <line:450:5, col:15> '<dependent type>' contains-errors '='
|   |   | |-RecoveryExpr 0x55d053ba6f68 <col:5> '<dependent type>' contains-errors lvalue
|   |   | | `-DeclRefExpr 0x55d053ba6f48 <col:5> 'int' lvalue Var 0x55d053ba6d00 'local_c' 'int'
|   |   | `-RecoveryExpr 0x55d053ba6f90 <col:15> '<dependent type>' contains-errors lvalue
|   |   `-ForStmt 0x55d053ba74a8 <line:451:5, line:458:5>
|   |     |-BinaryOperator 0x55d053ba7010 <line:451:10, col:21> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x55d053ba6fd0 <col:10> 'int' lvalue Var 0x55d053ba5b70 'local_18' 'int'
|   |     | `-IntegerLiteral 0x55d053ba6ff0 <col:21> 'int' 8
|   |     |-<<<NULL>>>
|   |     |-BinaryOperator 0x55d053ba7088 <col:24, col:28> 'bool' '<'
|   |     | |-IntegerLiteral 0x55d053ba7030 <col:24> 'int' 0
|   |     | `-ImplicitCastExpr 0x55d053ba7070 <col:28> 'int' <LValueToRValue>
|   |     |   `-DeclRefExpr 0x55d053ba7050 <col:28> 'int' lvalue Var 0x55d053ba5b70 'local_18' 'int'
|   |     |-BinaryOperator 0x55d053ba7158 <col:38, col:61> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x55d053ba70a8 <col:38> 'int' lvalue Var 0x55d053ba5b70 'local_18' 'int'
|   |     | `-BinaryOperator 0x55d053ba7138 <col:49, col:61> 'int' '+'
|   |     |   |-ImplicitCastExpr 0x55d053ba7120 <col:49> 'int' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d053ba70c8 <col:49> 'int' lvalue Var 0x55d053ba5b70 'local_18' 'int'
|   |     |   `-UnaryOperator 0x55d053ba7108 <col:60, col:61> 'int' prefix '-'
|   |     |     `-IntegerLiteral 0x55d053ba70e8 <col:61> 'int' 1
|   |     `-CompoundStmt 0x55d053ba7490 <col:64, line:458:5>
|   |       `-IfStmt 0x55d053ba7460 <line:452:7, line:457:7> has_else
|   |         |-BinaryOperator 0x55d053ba7240 <line:452:11, col:28> '<dependent type>' contains-errors '=='
|   |         | |-ParenExpr 0x55d053ba7200 <col:11, col:23> '<dependent type>' contains-errors
|   |         | | `-BinaryOperator 0x55d053ba71e0 <col:12, col:22> '<dependent type>' contains-errors '&'
|   |         | |   |-RecoveryExpr 0x55d053ba7198 <col:12> '<dependent type>' contains-errors lvalue
|   |         | |   | `-DeclRefExpr 0x55d053ba7178 <col:12> 'int' lvalue Var 0x55d053ba6d00 'local_c' 'int'
|   |         | |   `-IntegerLiteral 0x55d053ba71c0 <col:22> 'int' 1
|   |         | `-IntegerLiteral 0x55d053ba7220 <col:28> 'int' 0
|   |         |-CompoundStmt 0x55d053ba7328 <col:31, line:454:7>
|   |         | `-BinaryOperator 0x55d053ba7308 <line:453:9, col:30> '<dependent type>' contains-errors '='
|   |         |   |-RecoveryExpr 0x55d053ba7280 <col:9> '<dependent type>' contains-errors lvalue
|   |         |   | `-DeclRefExpr 0x55d053ba7260 <col:9> 'int' lvalue Var 0x55d053ba6d00 'local_c' 'int'
|   |         |   `-BinaryOperator 0x55d053ba72e8 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |         |     |-RecoveryExpr 0x55d053ba72a8 <col:19> '<dependent type>' contains-errors lvalue
|   |         |     `-IntegerLiteral 0x55d053ba72c8 <col:30> 'int' 1
|   |         `-CompoundStmt 0x55d053ba7448 <line:455:12, line:457:7>
|   |           `-BinaryOperator 0x55d053ba7428 <line:456:9, col:34> '<dependent type>' contains-errors '='
|   |             |-RecoveryExpr 0x55d053ba7360 <col:9> '<dependent type>' contains-errors lvalue
|   |             | `-DeclRefExpr 0x55d053ba7340 <col:9> 'int' lvalue Var 0x55d053ba6d00 'local_c' 'int'
|   |             `-BinaryOperator 0x55d053ba7408 <col:19, col:34> '<dependent type>' contains-errors '^'
|   |               |-BinaryOperator 0x55d053ba73c8 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |               | |-RecoveryExpr 0x55d053ba7388 <col:19> '<dependent type>' contains-errors lvalue
|   |               | `-IntegerLiteral 0x55d053ba73a8 <col:30> 'int' 1
|   |               `-IntegerLiteral 0x55d053ba73e8 <col:34> 'unsigned int' 3988292384
|   `-ReturnStmt 0x55d053ba76e0 <line:461:3>
|-FunctionDecl 0x55d053ba7820 <line:466:1, line:479:1> line:466:12 func_1 'undefined4 ()'
| `-CompoundStmt 0x55d053ba8370 <line:468:1, line:479:1>
|   |-DeclStmt 0x55d053ba7948 <line:469:3, col:16>
|   | `-VarDecl 0x55d053ba78e0 <col:3, col:7> col:7 used local_2cc 'int'
|   |-DeclStmt 0x55d053ba7a88 <line:470:3, col:26>
|   | `-VarDecl 0x55d053ba7a20 <col:3, col:25> col:14 used local_38 'undefined8[6]'
|   |-CallExpr 0x55d053ba7b40 <line:472:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba7b28 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba7b08 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba7b70 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba7ae8 <col:20> 'int' 0
|   |-CallExpr 0x55d053ba7c28 <line:473:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55d053ba7c10 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d053ba7bf0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55d053ba31a0 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55d053ba7c58 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55d053ba7bd0 <col:20> 'int' 1
|   |-ForStmt 0x55d053ba8268 <line:474:3, line:476:3>
|   | |-BinaryOperator 0x55d053ba7cb0 <line:474:8, col:20> 'int' lvalue '='
|   | | |-DeclRefExpr 0x55d053ba7c70 <col:8> 'int' lvalue Var 0x55d053ba78e0 'local_2cc' 'int'
|   | | `-IntegerLiteral 0x55d053ba7c90 <col:20> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55d053ba7f58 <col:23, col:35> 'bool' '<'
|   | | |-ImplicitCastExpr 0x55d053ba7f40 <col:23> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55d053ba7cd0 <col:23> 'int' lvalue Var 0x55d053ba78e0 'local_2cc' 'int'
|   | | `-IntegerLiteral 0x55d053ba7f20 <col:35> 'int' 6
|   | |-BinaryOperator 0x55d053ba8010 <col:38, col:62> 'int' lvalue '='
|   | | |-DeclRefExpr 0x55d053ba7f78 <col:38> 'int' lvalue Var 0x55d053ba78e0 'local_2cc' 'int'
|   | | `-BinaryOperator 0x55d053ba7ff0 <col:50, col:62> 'int' '+'
|   | |   |-ImplicitCastExpr 0x55d053ba7fd8 <col:50> 'int' <LValueToRValue>
|   | |   | `-DeclRefExpr 0x55d053ba7f98 <col:50> 'int' lvalue Var 0x55d053ba78e0 'local_2cc' 'int'
|   | |   `-IntegerLiteral 0x55d053ba7fb8 <col:62> 'int' 1
|   | `-CompoundStmt 0x55d053ba8250 <col:65, line:476:3>
|   |   `-RecoveryExpr 0x55d053ba8220 <line:475:5, col:28> '<dependent type>' contains-errors lvalue
|   |     |-ArraySubscriptExpr 0x55d053ba8100 <col:5, col:23> 'undefined8':'unsigned long' lvalue
|   |     | |-ImplicitCastExpr 0x55d053ba80d0 <col:5> 'undefined8 *' <ArrayToPointerDecay>
|   |     | | `-DeclRefExpr 0x55d053ba8030 <col:5> 'undefined8[6]' lvalue Var 0x55d053ba7a20 'local_38' 'undefined8[6]'
|   |     | `-ImplicitCastExpr 0x55d053ba80e8 <col:14> 'int' <LValueToRValue>
|   |     |   `-DeclRefExpr 0x55d053ba8050 <col:14> 'int' lvalue Var 0x55d053ba78e0 'local_2cc' 'int'
|   |     `-UnaryOperator 0x55d053ba81a0 <col:27, col:28> 'undefined4 *' prefix '&' cannot overflow
|   |       `-DeclRefExpr 0x55d053ba8120 <col:28> 'undefined4':'unsigned int' lvalue Var 0x55d053b9eb30 'g_4' 'undefined4':'unsigned int'
|   |-BinaryOperator 0x55d053ba8308 <line:477:3, col:16> '<dependent type>' contains-errors '='
|   | |-RecoveryExpr 0x55d053ba82c0 <col:3, col:7> '<dependent type>' contains-errors lvalue
|   | | `-DeclRefExpr 0x55d053ba82a0 <col:3> 'undefined1[48]' lvalue Var 0x55d053b9ed90 'g_5' 'undefined1[48]'
|   | `-IntegerLiteral 0x55d053ba82e8 <col:16> 'int' 0
|   `-ReturnStmt 0x55d053ba8360 <line:478:3, col:10>
|     `-ImplicitCastExpr 0x55d053ba8348 <col:10> 'undefined4':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55d053ba8328 <col:10> 'undefined4':'unsigned int' lvalue Var 0x55d053b9eb30 'g_4' 'undefined4':'unsigned int'
|-FunctionDecl 0x55d053ba8600 <line:483:1, line:491:1> line:483:6 transparent_crc 'void (undefined8, undefined8, int)'
| |-ParmVarDecl 0x55d053ba83c8 <col:22, col:33> col:33 used param_1 'undefined8':'unsigned long'
| |-ParmVarDecl 0x55d053ba8440 <col:41, col:52> col:52 used param_2 'undefined8':'unsigned long'
| |-ParmVarDecl 0x55d053ba84c0 <col:60, col:64> col:64 used param_3 'int'
| `-CompoundStmt 0x55d053ba8950 <line:485:1, line:491:1>
|   |-RecoveryExpr 0x55d053ba8720 <line:486:3, col:23> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba86c0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_8bytes' empty
|   | `-DeclRefExpr 0x55d053ba8700 <col:16> 'undefined8':'unsigned long' lvalue ParmVar 0x55d053ba83c8 'param_1' 'undefined8':'unsigned long'
|   |-IfStmt 0x55d053ba8920 <line:487:3, line:489:3>
|   | |-BinaryOperator 0x55d053ba87a8 <line:487:7, col:18> 'bool' '!='
|   | | |-ImplicitCastExpr 0x55d053ba8790 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55d053ba8750 <col:7> 'int' lvalue ParmVar 0x55d053ba84c0 'param_3' 'int'
|   | | `-IntegerLiteral 0x55d053ba8770 <col:18> 'int' 0
|   | `-CompoundStmt 0x55d053ba8908 <col:21, line:489:3>
|   |   `-RecoveryExpr 0x55d053ba88d0 <line:488:5, col:92> '<dependent type>' contains-errors lvalue
|   |     |-UnresolvedLookupExpr 0x55d053ba87c8 <col:5> '<overloaded function type>' lvalue (ADL) = 'printf' 0x55d053ba1e40
|   |     |-StringLiteral 0x55d053ba8870 <col:12> 'const char[36]' lvalue "...checksum after hashing %s : %lX\n"
|   |     `-DeclRefExpr 0x55d053ba88b0 <col:51> 'undefined8':'unsigned long' lvalue ParmVar 0x55d053ba8440 'param_2' 'undefined8':'unsigned long'
|   `-ReturnStmt 0x55d053ba8940 <line:490:3>
|-FunctionDecl 0x55d053ba8a70 <line:495:1, line:500:1> line:495:6 invalid platform_main_end 'void (int)'
| |-ParmVarDecl 0x55d053ba89a0 <col:24, col:29> col:29 invalid param_1 'int'
| `-CompoundStmt 0x55d053ba8c38 <line:497:1, line:500:1>
|   |-RecoveryExpr 0x55d053ba8bf8 <line:498:3, col:42> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba8b20 <col:3> '<overloaded function type>' lvalue (ADL) = 'printf' 0x55d053ba1e40
|   | `-StringLiteral 0x55d053ba8bd0 <col:10> 'const char[15]' lvalue "checksum = %X\n"
|   `-ReturnStmt 0x55d053ba8c28 <line:499:3>
|-FunctionDecl 0x55d053ba8d10 <line:504:1, line:516:1> line:504:6 invalid crc32_8bytes 'void (int)'
| |-ParmVarDecl 0x55d053ba8c80 <col:19, col:25> col:25 referenced invalid param_1 'int'
| `-CompoundStmt 0x55d053ba98c8 <line:506:1, line:516:1>
|   |-CallExpr 0x55d053ba8e60 <line:507:3, col:28> '<dependent type>' contains-errors
|   | |-UnresolvedLookupExpr 0x55d053ba8dc0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-BinaryOperator 0x55d053ba8e40 <col:14, col:24> '<dependent type>' contains-errors '&'
|   |   |-RecoveryExpr 0x55d053ba8e00 <col:14> '<dependent type>' contains-errors lvalue
|   |   `-IntegerLiteral 0x55d053ba8e20 <col:24> 'int' 255
|   |-RecoveryExpr 0x55d053ba8fe8 <line:508:3, col:34> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba8e90 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba8fc0 <col:14, col:33> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba8fa0 <col:20, col:33> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba8f50 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba8ef0 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba8ed0 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba8f30 <col:32> 'int' 8
|   |-RecoveryExpr 0x55d053ba9158 <line:509:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba9018 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba9130 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba9110 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba90c0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba9078 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba9058 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba90a0 <col:32> 'int' 16
|   |-RecoveryExpr 0x55d053ba92c8 <line:510:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba9188 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba92a0 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba9280 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba9230 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba91e8 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba91c8 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba9210 <col:32> 'int' 24
|   |-RecoveryExpr 0x55d053ba9438 <line:511:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba92f8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba9410 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba93f0 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba93a0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba9358 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba9338 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba9380 <col:32> 'int' 32
|   |-RecoveryExpr 0x55d053ba95a8 <line:512:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba9468 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba9580 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba9560 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba9510 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba94c8 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba94a8 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba94f0 <col:32> 'int' 40
|   |-RecoveryExpr 0x55d053ba9718 <line:513:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba95d8 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba96f0 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba96d0 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba9680 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba9638 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba9618 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba9660 <col:32> 'int' 48
|   |-RecoveryExpr 0x55d053ba9888 <line:514:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55d053ba9748 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55d053ba9860 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55d053ba9840 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55d053ba97f0 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55d053ba97a8 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55d053ba9788 <col:21> 'int' lvalue ParmVar 0x55d053ba8c80 'param_1' 'int'
|   |       `-IntegerLiteral 0x55d053ba97d0 <col:32> 'int' 56
|   `-ReturnStmt 0x55d053ba98b8 <line:515:3>
|-FunctionDecl 0x55d053ba9a40 <line:520:1, line:526:1> line:520:6 crc32_byte 'void (byte)'
| |-ParmVarDecl 0x55d053ba9930 <col:17, col:22> col:22 used param_1 'byte':'unsigned char'
| `-CompoundStmt 0x55d053ba9cf8 <line:522:1, line:526:1>
|   `-ReturnStmt 0x55d053ba9ce8 <line:525:3>
`-FunctionDecl 0x55d053ba9da8 <line:530:1, line:534:1> line:530:6 _fini 'void ()'
  `-CompoundStmt 0x55d053ba9e60 <line:532:1, line:534:1>
    `-ReturnStmt 0x55d053ba9e50 <line:533:3>

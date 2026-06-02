TranslationUnitDecl 0x55da4f4cc548 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x55da4f4cd1e0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x55da4f4ccb10 '__int128'
|-TypedefDecl 0x55da4f4cd250 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x55da4f4ccb30 'unsigned __int128'
|-TypedefDecl 0x55da4f51cf30 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x55da4f4cd340 '__NSConstantString_tag'
|   `-CXXRecord 0x55da4f4cd2a8 '__NSConstantString_tag'
|-TypedefDecl 0x55da4f4cce08 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x55da4f4ccdc0 'char *'
|   `-BuiltinType 0x55da4f4cc5f0 'char'
|-TypedefDecl 0x55da4f4cd170 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list '__va_list_tag[1]'
| `-ConstantArrayType 0x55da4f4cd120 '__va_list_tag[1]' 1 
|   `-RecordType 0x55da4f4ccef0 '__va_list_tag'
|     `-CXXRecord 0x55da4f4cce60 '__va_list_tag'
|-TypedefDecl 0x55da4f51cfa0 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/6.c:1:1, col:25> col:25 referenced undefined 'unsigned char'
| `-BuiltinType 0x55da4f4cc6b0 'unsigned char'
|-TypedefDecl 0x55da4f51d010 <line:3:1, col:26> col:26 referenced byte 'unsigned char'
| `-BuiltinType 0x55da4f4cc6b0 'unsigned char'
|-TypedefDecl 0x55da4f51d080 <line:4:1, col:26> col:26 referenced dwfenc 'unsigned char'
| `-BuiltinType 0x55da4f4cc6b0 'unsigned char'
|-TypedefDecl 0x55da4f51d0f0 <line:5:1, col:25> col:25 referenced dword 'unsigned int'
| `-BuiltinType 0x55da4f4cc6f0 'unsigned int'
|-TypedefDecl 0x55da4f51d160 <line:6:1, col:26> col:26 referenced qword 'unsigned long'
| `-BuiltinType 0x55da4f4cc710 'unsigned long'
|-TypedefDecl 0x55da4f51d1d0 <line:7:1, col:26> col:26 referenced undefined1 'unsigned char'
| `-BuiltinType 0x55da4f4cc6b0 'unsigned char'
|-TypedefDecl 0x55da4f51d240 <line:8:1, col:25> col:25 referenced undefined4 'unsigned int'
| `-BuiltinType 0x55da4f4cc6f0 'unsigned int'
|-TypedefDecl 0x55da4f51d2b0 <line:9:1, col:26> col:26 referenced undefined8 'unsigned long'
| `-BuiltinType 0x55da4f4cc710 'unsigned long'
|-TypedefDecl 0x55da4f51d320 <line:10:1, col:27> col:27 referenced word 'unsigned short'
| `-BuiltinType 0x55da4f4cc6d0 'unsigned short'
|-CXXRecordDecl 0x55da4f51d378 <line:11:9, col:16> col:16 struct eh_frame_hdr
|-TypedefDecl 0x55da4f51d488 <col:1, col:29> col:29 eh_frame_hdr 'struct eh_frame_hdr':'eh_frame_hdr'
| `-ElaboratedType 0x55da4f51d430 'struct eh_frame_hdr' sugar
|   `-RecordType 0x55da4f51d410 'eh_frame_hdr'
|     `-CXXRecord 0x55da4f51d620 'eh_frame_hdr'
|-TypedefDecl 0x55da4f51d578 <col:1, col:44> col:44 Peh_frame_hdr 'struct eh_frame_hdr *'
| `-PointerType 0x55da4f51d520 'struct eh_frame_hdr *'
|   `-ElaboratedType 0x55da4f51d430 'struct eh_frame_hdr' sugar
|     `-RecordType 0x55da4f51d410 'eh_frame_hdr'
|       `-CXXRecord 0x55da4f51d620 'eh_frame_hdr'
|-CXXRecordDecl 0x55da4f51d620 prev 0x55da4f51d378 <line:13:1, line:18:1> line:13:8 struct eh_frame_hdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f51d718 <col:1, col:8> col:8 implicit struct eh_frame_hdr
| |-FieldDecl 0x55da4f51d820 <line:14:5, col:10> col:10 eh_frame_hdr_version 'byte':'unsigned char'
| |-FieldDecl 0x55da4f51d8e0 <line:15:5, col:12> col:12 eh_frame_pointer_encoding 'dwfenc':'unsigned char'
| |-FieldDecl 0x55da4f51d940 <line:16:5, col:12> col:12 eh_frame_desc_entry_count_encoding 'dwfenc':'unsigned char'
| `-FieldDecl 0x55da4f51d9a0 <line:17:5, col:12> col:12 eh_frame_table_encoding 'dwfenc':'unsigned char'
|-CXXRecordDecl 0x55da4f51da08 <line:20:9, col:16> col:16 struct NoteGnuPropertyElement_4
|-TypedefDecl 0x55da4f51db18 <col:1, col:41> col:41 NoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4':'NoteGnuPropertyElement_4'
| `-ElaboratedType 0x55da4f51dac0 'struct NoteGnuPropertyElement_4' sugar
|   `-RecordType 0x55da4f51daa0 'NoteGnuPropertyElement_4'
|     `-CXXRecord 0x55da4f51dcb0 'NoteGnuPropertyElement_4'
|-TypedefDecl 0x55da4f51dc08 <col:1, col:68> col:68 PNoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4 *'
| `-PointerType 0x55da4f51dbb0 'struct NoteGnuPropertyElement_4 *'
|   `-ElaboratedType 0x55da4f51dac0 'struct NoteGnuPropertyElement_4' sugar
|     `-RecordType 0x55da4f51daa0 'NoteGnuPropertyElement_4'
|       `-CXXRecord 0x55da4f51dcb0 'NoteGnuPropertyElement_4'
|-CXXRecordDecl 0x55da4f51dcb0 prev 0x55da4f51da08 <line:22:1, line:26:1> line:22:8 struct NoteGnuPropertyElement_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f51dda8 <col:1, col:8> col:8 implicit struct NoteGnuPropertyElement_4
| |-FieldDecl 0x55da4f53efe0 <line:23:5, col:11> col:11 prType 'dword':'unsigned int'
| |-FieldDecl 0x55da4f53f040 <line:24:5, col:11> col:11 prDatasz 'dword':'unsigned int'
| `-FieldDecl 0x55da4f53f150 <line:25:5, col:16> col:10 data 'byte[4]'
|-CXXRecordDecl 0x55da4f53f1b8 <line:28:9, col:16> col:16 struct fde_table_entry
|-TypedefDecl 0x55da4f53f2c8 <col:1, col:32> col:32 fde_table_entry 'struct fde_table_entry':'fde_table_entry'
| `-ElaboratedType 0x55da4f53f270 'struct fde_table_entry' sugar
|   `-RecordType 0x55da4f53f250 'fde_table_entry'
|     `-CXXRecord 0x55da4f53f460 'fde_table_entry'
|-TypedefDecl 0x55da4f53f3b8 <col:1, col:50> col:50 Pfde_table_entry 'struct fde_table_entry *'
| `-PointerType 0x55da4f53f360 'struct fde_table_entry *'
|   `-ElaboratedType 0x55da4f53f270 'struct fde_table_entry' sugar
|     `-RecordType 0x55da4f53f250 'fde_table_entry'
|       `-CXXRecord 0x55da4f53f460 'fde_table_entry'
|-CXXRecordDecl 0x55da4f53f460 prev 0x55da4f53f1b8 <line:30:1, line:33:1> line:30:8 struct fde_table_entry definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f53f558 <col:1, col:8> col:8 implicit struct fde_table_entry
| |-FieldDecl 0x55da4f53f5f8 <line:31:5, col:11> col:11 initial_loc 'dword':'unsigned int'
| `-FieldDecl 0x55da4f53f658 <line:32:5, col:11> col:11 data_loc 'dword':'unsigned int'
|-EnumDecl 0x55da4f53f6c0 <line:35:9, line:112:1> line:35:14 Elf64_DynTag
| |-EnumConstantDecl 0x55da4f53f7c0 <line:36:5, col:13> col:5 DT_NULL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542d78 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53f7a0 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55da4f53f780 <col:13> 'int' 0
| |-EnumConstantDecl 0x55da4f53f858 <line:37:5, col:15> col:5 DT_NEEDED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542d90 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53f838 <col:15> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55da4f53f818 <col:15> 'int' 1
| |-EnumConstantDecl 0x55da4f53f8f0 <line:38:5, col:17> col:5 DT_PLTRELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542da8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53f8d0 <col:17> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55da4f53f8b0 <col:17> 'int' 2
| |-EnumConstantDecl 0x55da4f53f988 <line:39:5, col:15> col:5 DT_PLTGOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542dc0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53f968 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55da4f53f948 <col:15> 'int' 3
| |-EnumConstantDecl 0x55da4f53fa20 <line:40:5, col:13> col:5 DT_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542dd8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fa00 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55da4f53f9e0 <col:13> 'int' 4
| |-EnumConstantDecl 0x55da4f53fab8 <line:41:5, col:15> col:5 DT_STRTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542df0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fa98 <col:15> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55da4f53fa78 <col:15> 'int' 5
| |-EnumConstantDecl 0x55da4f53fb50 <line:42:5, col:15> col:5 DT_SYMTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e08 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fb30 <col:15> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55da4f53fb10 <col:15> 'int' 6
| |-EnumConstantDecl 0x55da4f53fbe8 <line:43:5, col:13> col:5 DT_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e20 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fbc8 <col:13> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55da4f53fba8 <col:13> 'int' 7
| |-EnumConstantDecl 0x55da4f53fc80 <line:44:5, col:15> col:5 DT_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e38 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fc60 <col:15> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x55da4f53fc40 <col:15> 'int' 8
| |-EnumConstantDecl 0x55da4f53fd18 <line:45:5, col:16> col:5 DT_RELAENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e50 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fcf8 <col:16> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x55da4f53fcd8 <col:16> 'int' 9
| |-EnumConstantDecl 0x55da4f53fdb0 <line:46:5, col:14> col:5 DT_STRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e68 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fd90 <col:14> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x55da4f53fd70 <col:14> 'int' 10
| |-EnumConstantDecl 0x55da4f53fe48 <line:47:5, col:15> col:5 DT_SYMENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e80 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fe28 <col:15> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x55da4f53fe08 <col:15> 'int' 11
| |-EnumConstantDecl 0x55da4f53fee0 <line:48:5, col:13> col:5 DT_INIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542e98 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53fec0 <col:13> 'int'
| |     |-value: Int 12
| |     `-IntegerLiteral 0x55da4f53fea0 <col:13> 'int' 12
| |-EnumConstantDecl 0x55da4f540be0 <line:49:5, col:13> col:5 DT_FINI 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542eb0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f53ff58 <col:13> 'int'
| |     |-value: Int 13
| |     `-IntegerLiteral 0x55da4f53ff38 <col:13> 'int' 13
| |-EnumConstantDecl 0x55da4f540c78 <line:50:5, col:15> col:5 DT_SONAME 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542ec8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540c58 <col:15> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x55da4f540c38 <col:15> 'int' 14
| |-EnumConstantDecl 0x55da4f540d10 <line:51:5, col:14> col:5 DT_RPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542ee0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540cf0 <col:14> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x55da4f540cd0 <col:14> 'int' 15
| |-EnumConstantDecl 0x55da4f540da8 <line:52:5, col:17> col:5 DT_SYMBOLIC 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542ef8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540d88 <col:17> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x55da4f540d68 <col:17> 'int' 16
| |-EnumConstantDecl 0x55da4f540e40 <line:53:5, col:12> col:5 DT_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f10 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540e20 <col:12> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x55da4f540e00 <col:12> 'int' 17
| |-EnumConstantDecl 0x55da4f540ed8 <line:54:5, col:14> col:5 DT_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f28 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540eb8 <col:14> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x55da4f540e98 <col:14> 'int' 18
| |-EnumConstantDecl 0x55da4f540f70 <line:55:5, col:15> col:5 DT_RELENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f40 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540f50 <col:15> 'int'
| |     |-value: Int 19
| |     `-IntegerLiteral 0x55da4f540f30 <col:15> 'int' 19
| |-EnumConstantDecl 0x55da4f541008 <line:56:5, col:15> col:5 DT_PLTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f58 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f540fe8 <col:15> 'int'
| |     |-value: Int 20
| |     `-IntegerLiteral 0x55da4f540fc8 <col:15> 'int' 20
| |-EnumConstantDecl 0x55da4f5410a0 <line:57:5, col:14> col:5 DT_DEBUG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f70 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541080 <col:14> 'int'
| |     |-value: Int 21
| |     `-IntegerLiteral 0x55da4f541060 <col:14> 'int' 21
| |-EnumConstantDecl 0x55da4f541138 <line:58:5, col:16> col:5 DT_TEXTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542f88 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541118 <col:16> 'int'
| |     |-value: Int 22
| |     `-IntegerLiteral 0x55da4f5410f8 <col:16> 'int' 22
| |-EnumConstantDecl 0x55da4f5411d0 <line:59:5, col:15> col:5 DT_JMPREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542fa0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5411b0 <col:15> 'int'
| |     |-value: Int 23
| |     `-IntegerLiteral 0x55da4f541190 <col:15> 'int' 23
| |-EnumConstantDecl 0x55da4f541268 <line:60:5, col:17> col:5 DT_BIND_NOW 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542fb8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541248 <col:17> 'int'
| |     |-value: Int 24
| |     `-IntegerLiteral 0x55da4f541228 <col:17> 'int' 24
| |-EnumConstantDecl 0x55da4f541300 <line:61:5, col:19> col:5 DT_INIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542fd0 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5412e0 <col:19> 'int'
| |     |-value: Int 25
| |     `-IntegerLiteral 0x55da4f5412c0 <col:19> 'int' 25
| |-EnumConstantDecl 0x55da4f541398 <line:62:5, col:19> col:5 DT_FINI_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f542fe8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541378 <col:19> 'int'
| |     |-value: Int 26
| |     `-IntegerLiteral 0x55da4f541358 <col:19> 'int' 26
| |-EnumConstantDecl 0x55da4f541430 <line:63:5, col:21> col:5 DT_INIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543000 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541410 <col:21> 'int'
| |     |-value: Int 27
| |     `-IntegerLiteral 0x55da4f5413f0 <col:21> 'int' 27
| |-EnumConstantDecl 0x55da4f5414c8 <line:64:5, col:21> col:5 DT_FINI_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543018 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5414a8 <col:21> 'int'
| |     |-value: Int 28
| |     `-IntegerLiteral 0x55da4f541488 <col:21> 'int' 28
| |-EnumConstantDecl 0x55da4f541560 <line:65:5, col:16> col:5 DT_RUNPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543030 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541540 <col:16> 'int'
| |     |-value: Int 29
| |     `-IntegerLiteral 0x55da4f541520 <col:16> 'int' 29
| |-EnumConstantDecl 0x55da4f5415f8 <line:66:5, col:14> col:5 DT_FLAGS 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543048 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5415d8 <col:14> 'int'
| |     |-value: Int 30
| |     `-IntegerLiteral 0x55da4f5415b8 <col:14> 'int' 30
| |-EnumConstantDecl 0x55da4f541690 <line:67:5, col:22> col:5 DT_PREINIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543060 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541670 <col:22> 'int'
| |     |-value: Int 32
| |     `-IntegerLiteral 0x55da4f541650 <col:22> 'int' 32
| |-EnumConstantDecl 0x55da4f541728 <line:68:5, col:24> col:5 DT_PREINIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543078 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541708 <col:24> 'int'
| |     |-value: Int 33
| |     `-IntegerLiteral 0x55da4f5416e8 <col:24> 'int' 33
| |-EnumConstantDecl 0x55da4f5417c0 <line:69:5, col:15> col:5 DT_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543090 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5417a0 <col:15> 'int'
| |     |-value: Int 35
| |     `-IntegerLiteral 0x55da4f541780 <col:15> 'int' 35
| |-EnumConstantDecl 0x55da4f541858 <line:70:5, col:13> col:5 DT_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5430a8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541838 <col:13> 'int'
| |     |-value: Int 36
| |     `-IntegerLiteral 0x55da4f541818 <col:13> 'int' 36
| |-EnumConstantDecl 0x55da4f5418f0 <line:71:5, col:16> col:5 DT_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5430c0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5418d0 <col:16> 'int'
| |     |-value: Int 37
| |     `-IntegerLiteral 0x55da4f5418b0 <col:16> 'int' 37
| |-EnumConstantDecl 0x55da4f541988 <line:72:5, col:20> col:5 DT_ANDROID_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5430d8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541968 <col:20> 'int'
| |     |-value: Int 1610612751
| |     `-IntegerLiteral 0x55da4f541948 <col:20> 'int' 1610612751
| |-EnumConstantDecl 0x55da4f541a20 <line:73:5, col:22> col:5 DT_ANDROID_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5430f0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541a00 <col:22> 'int'
| |     |-value: Int 1610612752
| |     `-IntegerLiteral 0x55da4f5419e0 <col:22> 'int' 1610612752
| |-EnumConstantDecl 0x55da4f541ab8 <line:74:5, col:21> col:5 DT_ANDROID_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543108 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541a98 <col:21> 'int'
| |     |-value: Int 1610612753
| |     `-IntegerLiteral 0x55da4f541a78 <col:21> 'int' 1610612753
| |-EnumConstantDecl 0x55da4f541b50 <line:75:5, col:23> col:5 DT_ANDROID_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543120 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f541b30 <col:23> 'int'
| |     |-value: Int 1610612754
| |     `-IntegerLiteral 0x55da4f541b10 <col:23> 'int' 1610612754
| |-EnumConstantDecl 0x55da4f5483b0 <line:76:5, col:21> col:5 DT_ANDROID_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543138 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548390 <col:21> 'int'
| |     |-value: Int 1879040000
| |     `-IntegerLiteral 0x55da4f541ba8 <col:21> 'int' 1879040000
| |-EnumConstantDecl 0x55da4f548448 <line:77:5, col:23> col:5 DT_ANDROID_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543150 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548428 <col:23> 'int'
| |     |-value: Int 1879040001
| |     `-IntegerLiteral 0x55da4f548408 <col:23> 'int' 1879040001
| |-EnumConstantDecl 0x55da4f5484e0 <line:78:5, col:24> col:5 DT_ANDROID_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543168 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5484c0 <col:24> 'int'
| |     |-value: Int 1879040003
| |     `-IntegerLiteral 0x55da4f5484a0 <col:24> 'int' 1879040003
| |-EnumConstantDecl 0x55da4f548578 <line:79:5, col:22> col:5 DT_GNU_PRELINKED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543180 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548558 <col:22> 'int'
| |     |-value: Int 1879047669
| |     `-IntegerLiteral 0x55da4f548538 <col:22> 'int' 1879047669
| |-EnumConstantDecl 0x55da4f548610 <line:80:5, col:23> col:5 DT_GNU_CONFLICTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543198 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5485f0 <col:23> 'int'
| |     |-value: Int 1879047670
| |     `-IntegerLiteral 0x55da4f5485d0 <col:23> 'int' 1879047670
| |-EnumConstantDecl 0x55da4f5486a8 <line:81:5, col:22> col:5 DT_GNU_LIBLISTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5431b0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548688 <col:22> 'int'
| |     |-value: Int 1879047671
| |     `-IntegerLiteral 0x55da4f548668 <col:22> 'int' 1879047671
| |-EnumConstantDecl 0x55da4f548740 <line:82:5, col:17> col:5 DT_CHECKSUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5431c8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548720 <col:17> 'int'
| |     |-value: Int 1879047672
| |     `-IntegerLiteral 0x55da4f548700 <col:17> 'int' 1879047672
| |-EnumConstantDecl 0x55da4f5487d8 <line:83:5, col:17> col:5 DT_PLTPADSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5431e0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5487b8 <col:17> 'int'
| |     |-value: Int 1879047673
| |     `-IntegerLiteral 0x55da4f548798 <col:17> 'int' 1879047673
| |-EnumConstantDecl 0x55da4f548870 <line:84:5, col:16> col:5 DT_MOVEENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5431f8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548850 <col:16> 'int'
| |     |-value: Int 1879047674
| |     `-IntegerLiteral 0x55da4f548830 <col:16> 'int' 1879047674
| |-EnumConstantDecl 0x55da4f548908 <line:85:5, col:15> col:5 DT_MOVESZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543210 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5488e8 <col:15> 'int'
| |     |-value: Int 1879047675
| |     `-IntegerLiteral 0x55da4f5488c8 <col:15> 'int' 1879047675
| |-EnumConstantDecl 0x55da4f5489a0 <line:86:5, col:18> col:5 DT_FEATURE_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543228 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548980 <col:18> 'int'
| |     |-value: Int 1879047676
| |     `-IntegerLiteral 0x55da4f548960 <col:18> 'int' 1879047676
| |-EnumConstantDecl 0x55da4f548a38 <line:87:5, col:18> col:5 DT_POSFLAG_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543240 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548a18 <col:18> 'int'
| |     |-value: Int 1879047677
| |     `-IntegerLiteral 0x55da4f5489f8 <col:18> 'int' 1879047677
| |-EnumConstantDecl 0x55da4f548ad0 <line:88:5, col:16> col:5 DT_SYMINSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543258 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548ab0 <col:16> 'int'
| |     |-value: Int 1879047678
| |     `-IntegerLiteral 0x55da4f548a90 <col:16> 'int' 1879047678
| |-EnumConstantDecl 0x55da4f548b68 <line:89:5, col:17> col:5 DT_SYMINENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543270 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548b48 <col:17> 'int'
| |     |-value: Int 1879047679
| |     `-IntegerLiteral 0x55da4f548b28 <col:17> 'int' 1879047679
| |-EnumConstantDecl 0x55da4f548c00 <line:90:5, col:18> col:5 DT_GNU_XHASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543288 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548be0 <col:18> 'int'
| |     |-value: Int 1879047924
| |     `-IntegerLiteral 0x55da4f548bc0 <col:18> 'int' 1879047924
| |-EnumConstantDecl 0x55da4f548c98 <line:91:5, col:17> col:5 DT_GNU_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5432a0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548c78 <col:17> 'int'
| |     |-value: Int 1879047925
| |     `-IntegerLiteral 0x55da4f548c58 <col:17> 'int' 1879047925
| |-EnumConstantDecl 0x55da4f548d30 <line:92:5, col:20> col:5 DT_TLSDESC_PLT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5432b8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548d10 <col:20> 'int'
| |     |-value: Int 1879047926
| |     `-IntegerLiteral 0x55da4f548cf0 <col:20> 'int' 1879047926
| |-EnumConstantDecl 0x55da4f548dc8 <line:93:5, col:20> col:5 DT_TLSDESC_GOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5432d0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548da8 <col:20> 'int'
| |     |-value: Int 1879047927
| |     `-IntegerLiteral 0x55da4f548d88 <col:20> 'int' 1879047927
| |-EnumConstantDecl 0x55da4f548e60 <line:94:5, col:21> col:5 DT_GNU_CONFLICT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5432e8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548e40 <col:21> 'int'
| |     |-value: Int 1879047928
| |     `-IntegerLiteral 0x55da4f548e20 <col:21> 'int' 1879047928
| |-EnumConstantDecl 0x55da4f548ef8 <line:95:5, col:20> col:5 DT_GNU_LIBLIST 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543300 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548ed8 <col:20> 'int'
| |     |-value: Int 1879047929
| |     `-IntegerLiteral 0x55da4f548eb8 <col:20> 'int' 1879047929
| |-EnumConstantDecl 0x55da4f548f90 <line:96:5, col:15> col:5 DT_CONFIG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543318 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f548f70 <col:15> 'int'
| |     |-value: Int 1879047930
| |     `-IntegerLiteral 0x55da4f548f50 <col:15> 'int' 1879047930
| |-EnumConstantDecl 0x55da4f549028 <line:97:5, col:17> col:5 DT_DEPAUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543330 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f549008 <col:17> 'int'
| |     |-value: Int 1879047931
| |     `-IntegerLiteral 0x55da4f548fe8 <col:17> 'int' 1879047931
| |-EnumConstantDecl 0x55da4f5490c0 <line:98:5, col:14> col:5 DT_AUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543348 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5490a0 <col:14> 'int'
| |     |-value: Int 1879047932
| |     `-IntegerLiteral 0x55da4f549080 <col:14> 'int' 1879047932
| |-EnumConstantDecl 0x55da4f549158 <line:99:5, col:15> col:5 DT_PLTPAD 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543360 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f549138 <col:15> 'int'
| |     |-value: Int 1879047933
| |     `-IntegerLiteral 0x55da4f549118 <col:15> 'int' 1879047933
| |-EnumConstantDecl 0x55da4f5491f0 <line:100:5, col:16> col:5 DT_MOVETAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543378 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5491d0 <col:16> 'int'
| |     |-value: Int 1879047934
| |     `-IntegerLiteral 0x55da4f5491b0 <col:16> 'int' 1879047934
| |-EnumConstantDecl 0x55da4f549288 <line:101:5, col:16> col:5 DT_SYMINFO 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543390 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f549268 <col:16> 'int'
| |     |-value: Int 1879047935
| |     `-IntegerLiteral 0x55da4f549248 <col:16> 'int' 1879047935
| |-EnumConstantDecl 0x55da4f549320 <line:102:5, col:15> col:5 DT_VERSYM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5433a8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f549300 <col:15> 'int'
| |     |-value: Int 1879048176
| |     `-IntegerLiteral 0x55da4f5492e0 <col:15> 'int' 1879048176
| |-EnumConstantDecl 0x55da4f542860 <line:103:5, col:18> col:5 DT_RELACOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5433c0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542840 <col:18> 'int'
| |     |-value: Int 1879048185
| |     `-IntegerLiteral 0x55da4f542820 <col:18> 'int' 1879048185
| |-EnumConstantDecl 0x55da4f5428f8 <line:104:5, col:17> col:5 DT_RELCOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5433d8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5428d8 <col:17> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x55da4f5428b8 <col:17> 'int' 1879048186
| |-EnumConstantDecl 0x55da4f542990 <line:105:5, col:16> col:5 DT_FLAGS_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f5433f0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542970 <col:16> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x55da4f542950 <col:16> 'int' 1879048187
| |-EnumConstantDecl 0x55da4f542a28 <line:106:5, col:15> col:5 DT_VERDEF 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543408 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542a08 <col:15> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x55da4f5429e8 <col:15> 'int' 1879048188
| |-EnumConstantDecl 0x55da4f542ac0 <line:107:5, col:18> col:5 DT_VERDEFNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543420 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542aa0 <col:18> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x55da4f542a80 <col:18> 'int' 1879048189
| |-EnumConstantDecl 0x55da4f542b58 <line:108:5, col:16> col:5 DT_VERNEED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543438 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542b38 <col:16> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x55da4f542b18 <col:16> 'int' 1879048190
| |-EnumConstantDecl 0x55da4f542bf0 <line:109:5, col:19> col:5 DT_VERNEEDNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543450 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542bd0 <col:19> 'int'
| |     |-value: Int 1879048191
| |     `-IntegerLiteral 0x55da4f542bb0 <col:19> 'int' 1879048191
| |-EnumConstantDecl 0x55da4f542c88 <line:110:5, col:18> col:5 DT_AUXILIARY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x55da4f543468 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f542c68 <col:18> 'int'
| |     |-value: Int 2147483645
| |     `-IntegerLiteral 0x55da4f542c48 <col:18> 'int' 2147483645
| `-EnumConstantDecl 0x55da4f542d20 <line:111:5, col:15> col:5 DT_FILTER 'Elf64_DynTag'
|   `-ImplicitCastExpr 0x55da4f543480 <col:15> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55da4f542d00 <col:15> 'int'
|       |-value: Int 2147483647
|       `-IntegerLiteral 0x55da4f542ce0 <col:15> 'int' 2147483647
|-TypedefDecl 0x55da4f5434f8 <line:35:1, line:112:3> col:3 Elf64_DynTag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-ElaboratedType 0x55da4f5434a0 'enum Elf64_DynTag' sugar
|   `-EnumType 0x55da4f53f760 'Elf64_DynTag'
|     `-Enum 0x55da4f53f6c0 'Elf64_DynTag'
|-EnumDecl 0x55da4f543578 <line:114:9, line:126:1> line:114:14 Elf_ProgramHeaderType
| |-EnumConstantDecl 0x55da4f543680 <line:115:5, col:13> col:5 PT_NULL 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545510 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f543660 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55da4f543640 <col:13> 'int' 0
| |-EnumConstantDecl 0x55da4f543718 <line:116:5, col:13> col:5 PT_LOAD 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545528 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5436f8 <col:13> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55da4f5436d8 <col:13> 'int' 1
| |-EnumConstantDecl 0x55da4f5437b0 <line:117:5, col:16> col:5 PT_DYNAMIC 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545540 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f543790 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55da4f543770 <col:16> 'int' 2
| |-EnumConstantDecl 0x55da4f545090 <line:118:5, col:15> col:5 PT_INTERP 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545558 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f545070 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55da4f545050 <col:15> 'int' 3
| |-EnumConstantDecl 0x55da4f545128 <line:119:5, col:13> col:5 PT_NOTE 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545570 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f545108 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55da4f5450e8 <col:13> 'int' 4
| |-EnumConstantDecl 0x55da4f5451c0 <line:120:5, col:14> col:5 PT_SHLIB 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f545588 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5451a0 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55da4f545180 <col:14> 'int' 5
| |-EnumConstantDecl 0x55da4f545258 <line:121:5, col:13> col:5 PT_PHDR 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f5455a0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f545238 <col:13> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55da4f545218 <col:13> 'int' 6
| |-EnumConstantDecl 0x55da4f5452f0 <line:122:5, col:12> col:5 PT_TLS 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f5455b8 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5452d0 <col:12> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55da4f5452b0 <col:12> 'int' 7
| |-EnumConstantDecl 0x55da4f545388 <line:123:5, col:21> col:5 PT_GNU_EH_FRAME 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f5455d0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f545368 <col:21> 'int'
| |     |-value: Int 1685382480
| |     `-IntegerLiteral 0x55da4f545348 <col:21> 'int' 1685382480
| |-EnumConstantDecl 0x55da4f545420 <line:124:5, col:18> col:5 PT_GNU_STACK 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x55da4f5455e8 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f545400 <col:18> 'int'
| |     |-value: Int 1685382481
| |     `-IntegerLiteral 0x55da4f5453e0 <col:18> 'int' 1685382481
| `-EnumConstantDecl 0x55da4f5454b8 <line:125:5, col:18> col:5 PT_GNU_RELRO 'Elf_ProgramHeaderType'
|   `-ImplicitCastExpr 0x55da4f545600 <col:18> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55da4f545498 <col:18> 'int'
|       |-value: Int 1685382482
|       `-IntegerLiteral 0x55da4f545478 <col:18> 'int' 1685382482
|-TypedefDecl 0x55da4f545678 <line:114:1, line:126:3> col:3 Elf_ProgramHeaderType 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| `-ElaboratedType 0x55da4f545620 'enum Elf_ProgramHeaderType' sugar
|   `-EnumType 0x55da4f543620 'Elf_ProgramHeaderType'
|     `-Enum 0x55da4f543578 'Elf_ProgramHeaderType'
|-CXXRecordDecl 0x55da4f5456f8 <line:128:9, col:16> col:16 struct Elf64_Sym
|-TypedefDecl 0x55da4f545808 <col:1, col:26> col:26 Elf64_Sym 'struct Elf64_Sym':'Elf64_Sym'
| `-ElaboratedType 0x55da4f5457b0 'struct Elf64_Sym' sugar
|   `-RecordType 0x55da4f545790 'Elf64_Sym'
|     `-CXXRecord 0x55da4f5459a0 'Elf64_Sym'
|-TypedefDecl 0x55da4f5458f8 <col:1, col:38> col:38 PElf64_Sym 'struct Elf64_Sym *'
| `-PointerType 0x55da4f5458a0 'struct Elf64_Sym *'
|   `-ElaboratedType 0x55da4f5457b0 'struct Elf64_Sym' sugar
|     `-RecordType 0x55da4f545790 'Elf64_Sym'
|       `-CXXRecord 0x55da4f5459a0 'Elf64_Sym'
|-CXXRecordDecl 0x55da4f5459a0 prev 0x55da4f5456f8 <line:130:1, line:137:1> line:130:8 struct Elf64_Sym definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f545a98 <col:1, col:8> col:8 implicit struct Elf64_Sym
| |-FieldDecl 0x55da4f545b38 <line:131:5, col:11> col:11 st_name 'dword':'unsigned int'
| |-FieldDecl 0x55da4f545b98 <line:132:5, col:10> col:10 st_info 'byte':'unsigned char'
| |-FieldDecl 0x55da4f545bf8 <line:133:5, col:10> col:10 st_other 'byte':'unsigned char'
| |-FieldDecl 0x55da4f545cc0 <line:134:5, col:10> col:10 st_shndx 'word':'unsigned short'
| |-FieldDecl 0x55da4f545d80 <line:135:5, col:11> col:11 st_value 'qword':'unsigned long'
| `-FieldDecl 0x55da4f545de0 <line:136:5, col:11> col:11 st_size 'qword':'unsigned long'
|-CXXRecordDecl 0x55da4f545e48 <line:139:9, col:16> col:16 struct Elf64_Phdr
|-TypedefDecl 0x55da4f545f58 <col:1, col:27> col:27 Elf64_Phdr 'struct Elf64_Phdr':'Elf64_Phdr'
| `-ElaboratedType 0x55da4f545f00 'struct Elf64_Phdr' sugar
|   `-RecordType 0x55da4f545ee0 'Elf64_Phdr'
|     `-CXXRecord 0x55da4f546110 'Elf64_Phdr'
|-TypedefDecl 0x55da4f546060 <col:1, col:40> col:40 PElf64_Phdr 'struct Elf64_Phdr *'
| `-PointerType 0x55da4f545ff0 'struct Elf64_Phdr *'
|   `-ElaboratedType 0x55da4f545f00 'struct Elf64_Phdr' sugar
|     `-RecordType 0x55da4f545ee0 'Elf64_Phdr'
|       `-CXXRecord 0x55da4f546110 'Elf64_Phdr'
|-CXXRecordDecl 0x55da4f546110 prev 0x55da4f545e48 <line:141:1, line:150:1> line:141:8 struct Elf64_Phdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f546208 <col:1, col:8> col:8 implicit struct Elf64_Phdr
| |-FieldDecl 0x55da4f546320 <line:142:5, col:32> col:32 p_type 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| |-FieldDecl 0x55da4f546380 <line:143:5, col:11> col:11 p_flags 'dword':'unsigned int'
| |-FieldDecl 0x55da4f5463e0 <line:144:5, col:11> col:11 p_offset 'qword':'unsigned long'
| |-FieldDecl 0x55da4f546440 <line:145:5, col:11> col:11 p_vaddr 'qword':'unsigned long'
| |-FieldDecl 0x55da4f5464a0 <line:146:5, col:11> col:11 p_paddr 'qword':'unsigned long'
| |-FieldDecl 0x55da4f546500 <line:147:5, col:11> col:11 p_filesz 'qword':'unsigned long'
| |-FieldDecl 0x55da4f546560 <line:148:5, col:11> col:11 p_memsz 'qword':'unsigned long'
| `-FieldDecl 0x55da4f5465c0 <line:149:5, col:11> col:11 p_align 'qword':'unsigned long'
|-CXXRecordDecl 0x55da4f546628 <line:152:9, col:16> col:16 struct Elf64_Dyn
|-TypedefDecl 0x55da4f546738 <col:1, col:26> col:26 Elf64_Dyn 'struct Elf64_Dyn':'Elf64_Dyn'
| `-ElaboratedType 0x55da4f5466e0 'struct Elf64_Dyn' sugar
|   `-RecordType 0x55da4f5466c0 'Elf64_Dyn'
|     `-CXXRecord 0x55da4f5468d0 'Elf64_Dyn'
|-TypedefDecl 0x55da4f546828 <col:1, col:38> col:38 PElf64_Dyn 'struct Elf64_Dyn *'
| `-PointerType 0x55da4f5467d0 'struct Elf64_Dyn *'
|   `-ElaboratedType 0x55da4f5466e0 'struct Elf64_Dyn' sugar
|     `-RecordType 0x55da4f5466c0 'Elf64_Dyn'
|       `-CXXRecord 0x55da4f5468d0 'Elf64_Dyn'
|-CXXRecordDecl 0x55da4f5468d0 prev 0x55da4f546628 <line:154:1, line:157:1> line:154:8 struct Elf64_Dyn definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f5469c8 <col:1, col:8> col:8 implicit struct Elf64_Dyn
| |-FieldDecl 0x55da4f546ae0 <line:155:5, col:23> col:23 d_tag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-FieldDecl 0x55da4f546b40 <line:156:5, col:11> col:11 d_val 'qword':'unsigned long'
|-CXXRecordDecl 0x55da4f546ba8 <line:159:9, col:16> col:16 struct Elf64_Shdr
|-TypedefDecl 0x55da4f546cb8 <col:1, col:27> col:27 Elf64_Shdr 'struct Elf64_Shdr':'Elf64_Shdr'
| `-ElaboratedType 0x55da4f546c60 'struct Elf64_Shdr' sugar
|   `-RecordType 0x55da4f546c40 'Elf64_Shdr'
|     `-CXXRecord 0x55da4f54b760 'Elf64_Shdr'
|-TypedefDecl 0x55da4f546da8 <col:1, col:40> col:40 PElf64_Shdr 'struct Elf64_Shdr *'
| `-PointerType 0x55da4f546d50 'struct Elf64_Shdr *'
|   `-ElaboratedType 0x55da4f546c60 'struct Elf64_Shdr' sugar
|     `-RecordType 0x55da4f546c40 'Elf64_Shdr'
|       `-CXXRecord 0x55da4f54b760 'Elf64_Shdr'
|-EnumDecl 0x55da4f546e20 <line:161:9, line:191:1> line:161:14 Elf_SectionHeaderType
| |-EnumConstantDecl 0x55da4f546f20 <line:162:5, col:14> col:5 SHT_NULL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f548038 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f546f00 <col:14> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x55da4f546ee0 <col:14> 'int' 0
| |-EnumConstantDecl 0x55da4f546fb8 <line:163:5, col:18> col:5 SHT_PROGBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f548050 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f546f98 <col:18> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x55da4f546f78 <col:18> 'int' 1
| |-EnumConstantDecl 0x55da4f547070 <line:164:5, col:16> col:5 SHT_SYMTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b3c0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547030 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x55da4f547010 <col:16> 'int' 2
| |-EnumConstantDecl 0x55da4f547108 <line:165:5, col:16> col:5 SHT_STRTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b3d8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5470e8 <col:16> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x55da4f5470c8 <col:16> 'int' 3
| |-EnumConstantDecl 0x55da4f5471a0 <line:166:5, col:14> col:5 SHT_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b3f0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547180 <col:14> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x55da4f547160 <col:14> 'int' 4
| |-EnumConstantDecl 0x55da4f547238 <line:167:5, col:14> col:5 SHT_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b408 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547218 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x55da4f5471f8 <col:14> 'int' 5
| |-EnumConstantDecl 0x55da4f5472d0 <line:168:5, col:17> col:5 SHT_DYNAMIC 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b420 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5472b0 <col:17> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x55da4f547290 <col:17> 'int' 6
| |-EnumConstantDecl 0x55da4f547368 <line:169:5, col:14> col:5 SHT_NOTE 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b438 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547348 <col:14> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x55da4f547328 <col:14> 'int' 7
| |-EnumConstantDecl 0x55da4f547400 <line:170:5, col:16> col:5 SHT_NOBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b450 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5473e0 <col:16> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x55da4f5473c0 <col:16> 'int' 8
| |-EnumConstantDecl 0x55da4f547498 <line:171:5, col:13> col:5 SHT_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b468 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547478 <col:13> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x55da4f547458 <col:13> 'int' 9
| |-EnumConstantDecl 0x55da4f547530 <line:172:5, col:15> col:5 SHT_SHLIB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b480 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547510 <col:15> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x55da4f5474f0 <col:15> 'int' 10
| |-EnumConstantDecl 0x55da4f5475c8 <line:173:5, col:16> col:5 SHT_DYNSYM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b498 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5475a8 <col:16> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x55da4f547588 <col:16> 'int' 11
| |-EnumConstantDecl 0x55da4f547660 <line:174:5, col:20> col:5 SHT_INIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b4b0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547640 <col:20> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x55da4f547620 <col:20> 'int' 14
| |-EnumConstantDecl 0x55da4f5476f8 <line:175:5, col:20> col:5 SHT_FINI_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b4c8 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5476d8 <col:20> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x55da4f5476b8 <col:20> 'int' 15
| |-EnumConstantDecl 0x55da4f547790 <line:176:5, col:23> col:5 SHT_PREINIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b4e0 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547770 <col:23> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x55da4f547750 <col:23> 'int' 16
| |-EnumConstantDecl 0x55da4f547828 <line:177:5, col:15> col:5 SHT_GROUP 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b4f8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547808 <col:15> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x55da4f5477e8 <col:15> 'int' 17
| |-EnumConstantDecl 0x55da4f5478c0 <line:178:5, col:22> col:5 SHT_SYMTAB_SHNDX 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b510 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5478a0 <col:22> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x55da4f547880 <col:22> 'int' 18
| |-EnumConstantDecl 0x55da4f547958 <line:179:5, col:21> col:5 SHT_ANDROID_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b528 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547938 <col:21> 'int'
| |     |-value: Int 1610612737
| |     `-IntegerLiteral 0x55da4f547918 <col:21> 'int' 1610612737
| |-EnumConstantDecl 0x55da4f5479f0 <line:180:5, col:22> col:5 SHT_ANDROID_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b540 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f5479d0 <col:22> 'int'
| |     |-value: Int 1610612738
| |     `-IntegerLiteral 0x55da4f5479b0 <col:22> 'int' 1610612738
| |-EnumConstantDecl 0x55da4f547a88 <line:181:5, col:24> col:5 SHT_GNU_ATTRIBUTES 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b558 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547a68 <col:24> 'int'
| |     |-value: Int 1879048181
| |     `-IntegerLiteral 0x55da4f547a48 <col:24> 'int' 1879048181
| |-EnumConstantDecl 0x55da4f547b20 <line:182:5, col:18> col:5 SHT_GNU_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b570 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547b00 <col:18> 'int'
| |     |-value: Int 1879048182
| |     `-IntegerLiteral 0x55da4f547ae0 <col:18> 'int' 1879048182
| |-EnumConstantDecl 0x55da4f547bb8 <line:183:5, col:21> col:5 SHT_GNU_LIBLIST 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b588 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547b98 <col:21> 'int'
| |     |-value: Int 1879048183
| |     `-IntegerLiteral 0x55da4f547b78 <col:21> 'int' 1879048183
| |-EnumConstantDecl 0x55da4f547c50 <line:184:5, col:18> col:5 SHT_CHECKSUM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b5a0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547c30 <col:18> 'int'
| |     |-value: Int 1879048184
| |     `-IntegerLiteral 0x55da4f547c10 <col:18> 'int' 1879048184
| |-EnumConstantDecl 0x55da4f547ce8 <line:185:5, col:19> col:5 SHT_SUNW_move 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b5b8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547cc8 <col:19> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x55da4f547ca8 <col:19> 'int' 1879048186
| |-EnumConstantDecl 0x55da4f547d80 <line:186:5, col:21> col:5 SHT_SUNW_COMDAT 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b5d0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547d60 <col:21> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x55da4f547d40 <col:21> 'int' 1879048187
| |-EnumConstantDecl 0x55da4f547e18 <line:187:5, col:22> col:5 SHT_SUNW_syminfo 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b5e8 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547df8 <col:22> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x55da4f547dd8 <col:22> 'int' 1879048188
| |-EnumConstantDecl 0x55da4f547eb0 <line:188:5, col:20> col:5 SHT_GNU_verdef 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b600 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547e90 <col:20> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x55da4f547e70 <col:20> 'int' 1879048189
| |-EnumConstantDecl 0x55da4f547f48 <line:189:5, col:21> col:5 SHT_GNU_verneed 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x55da4f54b618 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x55da4f547f28 <col:21> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x55da4f547f08 <col:21> 'int' 1879048190
| `-EnumConstantDecl 0x55da4f547fe0 <line:190:5, col:20> col:5 SHT_GNU_versym 'Elf_SectionHeaderType'
|   `-ImplicitCastExpr 0x55da4f54b630 <col:20> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x55da4f547fc0 <col:20> 'int'
|       |-value: Int 1879048191
|       `-IntegerLiteral 0x55da4f547fa0 <col:20> 'int' 1879048191
|-TypedefDecl 0x55da4f54b6a8 <line:161:1, line:191:3> col:3 Elf_SectionHeaderType 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| `-ElaboratedType 0x55da4f54b650 'enum Elf_SectionHeaderType' sugar
|   `-EnumType 0x55da4f546ec0 'Elf_SectionHeaderType'
|     `-Enum 0x55da4f546e20 'Elf_SectionHeaderType'
|-CXXRecordDecl 0x55da4f54b760 prev 0x55da4f546ba8 <line:193:1, line:204:1> line:193:8 struct Elf64_Shdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54b858 <col:1, col:8> col:8 implicit struct Elf64_Shdr
| |-FieldDecl 0x55da4f54b8f8 <line:194:5, col:11> col:11 sh_name 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54b9d0 <line:195:5, col:32> col:32 sh_type 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| |-FieldDecl 0x55da4f54ba30 <line:196:5, col:11> col:11 sh_flags 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54ba90 <line:197:5, col:11> col:11 sh_addr 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54baf0 <line:198:5, col:11> col:11 sh_offset 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54bb50 <line:199:5, col:11> col:11 sh_size 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54bbb0 <line:200:5, col:11> col:11 sh_link 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54bc10 <line:201:5, col:11> col:11 sh_info 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54bc70 <line:202:5, col:11> col:11 sh_addralign 'qword':'unsigned long'
| `-FieldDecl 0x55da4f54bcd0 <line:203:5, col:11> col:11 sh_entsize 'qword':'unsigned long'
|-CXXRecordDecl 0x55da4f54bd38 <line:206:9, col:16> col:16 struct NoteAbiTag
|-TypedefDecl 0x55da4f54be48 <col:1, col:27> col:27 NoteAbiTag 'struct NoteAbiTag':'NoteAbiTag'
| `-ElaboratedType 0x55da4f54bdf0 'struct NoteAbiTag' sugar
|   `-RecordType 0x55da4f54bdd0 'NoteAbiTag'
|     `-CXXRecord 0x55da4f54bfe0 'NoteAbiTag'
|-TypedefDecl 0x55da4f54bf38 <col:1, col:40> col:40 PNoteAbiTag 'struct NoteAbiTag *'
| `-PointerType 0x55da4f54bee0 'struct NoteAbiTag *'
|   `-ElaboratedType 0x55da4f54bdf0 'struct NoteAbiTag' sugar
|     `-RecordType 0x55da4f54bdd0 'NoteAbiTag'
|       `-CXXRecord 0x55da4f54bfe0 'NoteAbiTag'
|-CXXRecordDecl 0x55da4f54bfe0 prev 0x55da4f54bd38 <line:208:1, line:215:1> line:208:8 struct NoteAbiTag definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54c0d8 <col:1, col:8> col:8 implicit struct NoteAbiTag
| |-FieldDecl 0x55da4f54c178 <line:209:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54c1d8 <line:210:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54c238 <line:211:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54c320 <line:212:5, col:16> col:10 name 'char[4]'
| |-FieldDecl 0x55da4f54cfe0 <line:213:5, col:11> col:11 abiType 'dword':'unsigned int'
| `-FieldDecl 0x55da4f54d0f0 <line:214:5, col:34> col:11 requiredKernelVersion 'dword[3]'
|-CXXRecordDecl 0x55da4f54d158 <line:217:9, col:16> col:16 struct Elf64_Rela
|-TypedefDecl 0x55da4f54d268 <col:1, col:27> col:27 Elf64_Rela 'struct Elf64_Rela':'Elf64_Rela'
| `-ElaboratedType 0x55da4f54d210 'struct Elf64_Rela' sugar
|   `-RecordType 0x55da4f54d1f0 'Elf64_Rela'
|     `-CXXRecord 0x55da4f54d400 'Elf64_Rela'
|-TypedefDecl 0x55da4f54d358 <col:1, col:40> col:40 PElf64_Rela 'struct Elf64_Rela *'
| `-PointerType 0x55da4f54d300 'struct Elf64_Rela *'
|   `-ElaboratedType 0x55da4f54d210 'struct Elf64_Rela' sugar
|     `-RecordType 0x55da4f54d1f0 'Elf64_Rela'
|       `-CXXRecord 0x55da4f54d400 'Elf64_Rela'
|-CXXRecordDecl 0x55da4f54d400 prev 0x55da4f54d158 <line:219:1, line:223:1> line:219:8 struct Elf64_Rela definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54d4f8 <col:1, col:8> col:8 implicit struct Elf64_Rela
| |-FieldDecl 0x55da4f54d598 <line:220:5, col:11> col:11 r_offset 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54d5f8 <line:221:5, col:11> col:11 r_info 'qword':'unsigned long'
| `-FieldDecl 0x55da4f54d658 <line:222:5, col:11> col:11 r_addend 'qword':'unsigned long'
|-CXXRecordDecl 0x55da4f54d6c0 <line:225:9, col:16> col:16 struct GnuBuildId
|-TypedefDecl 0x55da4f54d7c8 <col:1, col:27> col:27 GnuBuildId 'struct GnuBuildId':'GnuBuildId'
| `-ElaboratedType 0x55da4f54d770 'struct GnuBuildId' sugar
|   `-RecordType 0x55da4f54d750 'GnuBuildId'
|     `-CXXRecord 0x55da4f54d960 'GnuBuildId'
|-TypedefDecl 0x55da4f54d8b8 <col:1, col:40> col:40 PGnuBuildId 'struct GnuBuildId *'
| `-PointerType 0x55da4f54d860 'struct GnuBuildId *'
|   `-ElaboratedType 0x55da4f54d770 'struct GnuBuildId' sugar
|     `-RecordType 0x55da4f54d750 'GnuBuildId'
|       `-CXXRecord 0x55da4f54d960 'GnuBuildId'
|-CXXRecordDecl 0x55da4f54d960 prev 0x55da4f54d6c0 <line:227:1, line:233:1> line:227:8 struct GnuBuildId definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54da58 <col:1, col:8> col:8 implicit struct GnuBuildId
| |-FieldDecl 0x55da4f54daf8 <line:228:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54db58 <line:229:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54dbb8 <line:230:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54dc68 <line:231:5, col:16> col:10 name 'char[4]'
| `-FieldDecl 0x55da4f54dd80 <line:232:5, col:17> col:10 hash 'byte[20]'
|-CXXRecordDecl 0x55da4f54dde8 <line:235:9, col:16> col:16 struct NoteGnuProperty_4
|-TypedefDecl 0x55da4f54def8 <col:1, col:34> col:34 NoteGnuProperty_4 'struct NoteGnuProperty_4':'NoteGnuProperty_4'
| `-ElaboratedType 0x55da4f54dea0 'struct NoteGnuProperty_4' sugar
|   `-RecordType 0x55da4f54de80 'NoteGnuProperty_4'
|     `-CXXRecord 0x55da4f54e8e0 'NoteGnuProperty_4'
|-TypedefDecl 0x55da4f54e838 <col:1, col:54> col:54 PNoteGnuProperty_4 'struct NoteGnuProperty_4 *'
| `-PointerType 0x55da4f54df90 'struct NoteGnuProperty_4 *'
|   `-ElaboratedType 0x55da4f54dea0 'struct NoteGnuProperty_4' sugar
|     `-RecordType 0x55da4f54de80 'NoteGnuProperty_4'
|       `-CXXRecord 0x55da4f54e8e0 'NoteGnuProperty_4'
|-CXXRecordDecl 0x55da4f54e8e0 prev 0x55da4f54dde8 <line:237:1, line:242:1> line:237:8 struct NoteGnuProperty_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54e9d8 <col:1, col:8> col:8 implicit struct NoteGnuProperty_4
| |-FieldDecl 0x55da4f54ea78 <line:238:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54ead8 <line:239:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54eb38 <line:240:5, col:11> col:11 type 'dword':'unsigned int'
| `-FieldDecl 0x55da4f54ebe8 <line:241:5, col:16> col:10 name 'char[4]'
|-CXXRecordDecl 0x55da4f54ec50 <line:244:9, col:16> col:16 struct Elf64_Ehdr
|-TypedefDecl 0x55da4f54ed58 <col:1, col:27> col:27 Elf64_Ehdr 'struct Elf64_Ehdr':'Elf64_Ehdr'
| `-ElaboratedType 0x55da4f54ed00 'struct Elf64_Ehdr' sugar
|   `-RecordType 0x55da4f54ece0 'Elf64_Ehdr'
|     `-CXXRecord 0x55da4f54eef0 'Elf64_Ehdr'
|-TypedefDecl 0x55da4f54ee48 <col:1, col:40> col:40 PElf64_Ehdr 'struct Elf64_Ehdr *'
| `-PointerType 0x55da4f54edf0 'struct Elf64_Ehdr *'
|   `-ElaboratedType 0x55da4f54ed00 'struct Elf64_Ehdr' sugar
|     `-RecordType 0x55da4f54ece0 'Elf64_Ehdr'
|       `-CXXRecord 0x55da4f54eef0 'Elf64_Ehdr'
|-CXXRecordDecl 0x55da4f54eef0 prev 0x55da4f54ec50 <line:246:1, line:268:1> line:246:8 struct Elf64_Ehdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x55da4f54efe8 <col:1, col:8> col:8 implicit struct Elf64_Ehdr
| |-FieldDecl 0x55da4f54f088 <line:247:5, col:10> col:10 e_ident_magic_num 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f170 <line:248:5, col:29> col:10 e_ident_magic_str 'char[3]'
| |-FieldDecl 0x55da4f54f1d0 <line:249:5, col:10> col:10 e_ident_class 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f230 <line:250:5, col:10> col:10 e_ident_data 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f290 <line:251:5, col:10> col:10 e_ident_version 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f2f0 <line:252:5, col:10> col:10 e_ident_osabi 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f350 <line:253:5, col:10> col:10 e_ident_abiversion 'byte':'unsigned char'
| |-FieldDecl 0x55da4f54f460 <line:254:5, col:23> col:10 e_ident_pad 'byte[7]'
| |-FieldDecl 0x55da4f54f4c0 <line:255:5, col:10> col:10 e_type 'word':'unsigned short'
| |-FieldDecl 0x55da4f54f520 <line:256:5, col:10> col:10 e_machine 'word':'unsigned short'
| |-FieldDecl 0x55da4f54f580 <line:257:5, col:11> col:11 e_version 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54f5e0 <line:258:5, col:11> col:11 e_entry 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54f640 <line:259:5, col:11> col:11 e_phoff 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54f6a0 <line:260:5, col:11> col:11 e_shoff 'qword':'unsigned long'
| |-FieldDecl 0x55da4f54f700 <line:261:5, col:11> col:11 e_flags 'dword':'unsigned int'
| |-FieldDecl 0x55da4f54f760 <line:262:5, col:10> col:10 e_ehsize 'word':'unsigned short'
| |-FieldDecl 0x55da4f54f7c0 <line:263:5, col:10> col:10 e_phentsize 'word':'unsigned short'
| |-FieldDecl 0x55da4f550050 <line:264:5, col:10> col:10 e_phnum 'word':'unsigned short'
| |-FieldDecl 0x55da4f5500b0 <line:265:5, col:10> col:10 e_shentsize 'word':'unsigned short'
| |-FieldDecl 0x55da4f550110 <line:266:5, col:10> col:10 e_shnum 'word':'unsigned short'
| `-FieldDecl 0x55da4f550170 <line:267:5, col:10> col:10 e_shstrndx 'word':'unsigned short'
|-CXXRecordDecl 0x55da4f5501d8 <line:270:9, col:16> col:16 struct evp_pkey_ctx_st
|-TypedefDecl 0x55da4f5502e8 <col:1, col:32> col:32 evp_pkey_ctx_st 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x55da4f550290 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x55da4f550270 'evp_pkey_ctx_st'
|     `-CXXRecord 0x55da4f550480 'evp_pkey_ctx_st'
|-TypedefDecl 0x55da4f5503d8 <col:1, col:50> col:50 Pevp_pkey_ctx_st 'struct evp_pkey_ctx_st *'
| `-PointerType 0x55da4f550380 'struct evp_pkey_ctx_st *'
|   `-ElaboratedType 0x55da4f550290 'struct evp_pkey_ctx_st' sugar
|     `-RecordType 0x55da4f550270 'evp_pkey_ctx_st'
|       `-CXXRecord 0x55da4f550480 'evp_pkey_ctx_st'
|-CXXRecordDecl 0x55da4f550480 prev 0x55da4f5501d8 <line:272:1, line:273:1> line:272:8 struct evp_pkey_ctx_st definition
| |-DefinitionData pass_in_registers empty aggregate standard_layout trivially_copyable pod trivial literal has_constexpr_non_copy_move_ctor can_const_default_init
| | |-DefaultConstructor exists trivial constexpr needs_implicit defaulted_is_constexpr
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| `-CXXRecordDecl 0x55da4f550578 <col:1, col:8> col:8 implicit struct evp_pkey_ctx_st
|-TypedefDecl 0x55da4f550670 <line:275:1, col:32> col:32 referenced EVP_PKEY_CTX 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x55da4f550620 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x55da4f550270 'evp_pkey_ctx_st'
|     `-CXXRecord 0x55da4f550480 'evp_pkey_ctx_st'
|-VarDecl 0x55da4f550740 <line:279:1, col:11> col:11 main 'undefined':'unsigned char'
|-VarDecl 0x55da4f550860 <line:280:1, col:12> col:12 completed 'undefined1':'unsigned char'
|-VarDecl 0x55da4f550940 <line:281:1, col:12> col:12 used crc32_context 'undefined4':'unsigned int'
|-VarDecl 0x55da4f5509b8 <line:282:1, col:11> col:11 used DAT_004011ba 'undefined':'unsigned char'
|-VarDecl 0x55da4f550a30 <line:283:1, col:12> col:12 used g_5 'undefined4':'unsigned int'
|-VarDecl 0x55da4f550b60 <line:284:1, col:16> col:18 used crc32_tab 'undefined1[1024]'
|-FunctionDecl 0x55da4f550d88 <line:286:1, line:293:1> line:286:5 _init 'int (EVP_PKEY_CTX *)'
| |-ParmVarDecl 0x55da4f550c78 <col:11, col:25> col:25 ctx 'EVP_PKEY_CTX *'
| `-CompoundStmt 0x55da4f550fc0 <line:288:1, line:293:1>
|   |-DeclStmt 0x55da4f550eb8 <line:289:3, col:12>
|   | `-VarDecl 0x55da4f550e50 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55da4f550f58 <line:291:3, col:26> '<dependent type>' contains-errors '='
|   | |-DeclRefExpr 0x55da4f550ed0 <col:3> 'int' lvalue Var 0x55da4f550e50 'iVar1' 'int'
|   | `-RecoveryExpr 0x55da4f550f30 <col:11, col:26> '<dependent type>' contains-errors lvalue
|   |   `-UnresolvedLookupExpr 0x55da4f550ef0 <col:11> '<overloaded function type>' lvalue (ADL) = '__gmon_start__' empty
|   `-ReturnStmt 0x55da4f550fb0 <line:292:3, col:10>
|     `-ImplicitCastExpr 0x55da4f550f98 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55da4f550f78 <col:10> 'int' lvalue Var 0x55da4f550e50 'iVar1' 'int'
|-FunctionDecl 0x55da4f553a60 <line:297:1, line:302:1> line:297:6 FUN_00400360 'void ()'
| `-CompoundStmt 0x55da4f553b38 <line:299:1, line:302:1>
|   `-ReturnStmt 0x55da4f553b28 <line:301:3>
|-FunctionDecl 0x55da4f553c40 <line:308:1, line:315:1> line:308:5 referenced printf 'int (char *, ...)'
| |-ParmVarDecl 0x55da4f553b68 <col:12, col:18> col:18 used __format 'char *'
| `-CompoundStmt 0x55da4f553f28 <line:310:1, line:315:1>
|   |-DeclStmt 0x55da4f553d70 <line:311:3, col:12>
|   | `-VarDecl 0x55da4f553d08 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55da4f553ec0 <line:313:3, col:26> 'int' lvalue '='
|   | |-DeclRefExpr 0x55da4f553d88 <col:3> 'int' lvalue Var 0x55da4f553d08 'iVar1' 'int'
|   | `-CallExpr 0x55da4f553e78 <col:11, col:26> 'int'
|   |   |-ImplicitCastExpr 0x55da4f553e60 <col:11> 'int (*)(char *, ...)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x55da4f553e10 <col:11> 'int (char *, ...)' lvalue Function 0x55da4f553c40 'printf' 'int (char *, ...)'
|   |   `-ImplicitCastExpr 0x55da4f553ea8 <col:18> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x55da4f553df0 <col:18> 'char *' lvalue ParmVar 0x55da4f553b68 '__format' 'char *'
|   `-ReturnStmt 0x55da4f553f18 <line:314:3, col:10>
|     `-ImplicitCastExpr 0x55da4f553f00 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55da4f553ee0 <col:10> 'int' lvalue Var 0x55da4f553d08 'iVar1' 'int'
|-FunctionDecl 0x55da4f5540c8 <line:321:1, line:328:1> line:321:5 used strcmp 'int (char *, char *)'
| |-ParmVarDecl 0x55da4f553f68 <col:12, col:18> col:18 used __s1 'char *'
| |-ParmVarDecl 0x55da4f553fe8 <col:23, col:29> col:29 used __s2 'char *'
| `-CompoundStmt 0x55da4f5543f8 <line:323:1, line:328:1>
|   |-DeclStmt 0x55da4f554200 <line:324:3, col:12>
|   | `-VarDecl 0x55da4f554198 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x55da4f554390 <line:326:3, col:27> 'int' lvalue '='
|   | |-DeclRefExpr 0x55da4f554218 <col:3> 'int' lvalue Var 0x55da4f554198 'iVar1' 'int'
|   | `-CallExpr 0x55da4f554328 <col:11, col:27> 'int'
|   |   |-ImplicitCastExpr 0x55da4f554310 <col:11> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x55da4f5542c0 <col:11> 'int (char *, char *)' lvalue Function 0x55da4f5540c8 'strcmp' 'int (char *, char *)'
|   |   |-ImplicitCastExpr 0x55da4f554360 <col:18> 'char *' <LValueToRValue>
|   |   | `-DeclRefExpr 0x55da4f554280 <col:18> 'char *' lvalue ParmVar 0x55da4f553f68 '__s1' 'char *'
|   |   `-ImplicitCastExpr 0x55da4f554378 <col:23> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x55da4f5542a0 <col:23> 'char *' lvalue ParmVar 0x55da4f553fe8 '__s2' 'char *'
|   `-ReturnStmt 0x55da4f5543e8 <line:327:3, col:10>
|     `-ImplicitCastExpr 0x55da4f5543d0 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x55da4f5543b0 <col:10> 'int' lvalue Var 0x55da4f554198 'iVar1' 'int'
|-VarDecl 0x55da4f554430 <line:332:1, col:6> col:6 invalid processEntry 'void'
|-FunctionDecl 0x55da4f554530 <line:345:1, line:349:1> line:345:6 _dl_relocate_static_pie 'void ()'
| `-CompoundStmt 0x55da4f5545e8 <line:347:1, line:349:1>
|   `-ReturnStmt 0x55da4f5545d8 <line:348:3>
|-FunctionDecl 0x55da4f554698 <line:356:1, line:360:1> line:356:6 used deregister_tm_clones 'void ()'
| `-CompoundStmt 0x55da4f554750 <line:358:1, line:360:1>
|   `-ReturnStmt 0x55da4f554740 <line:359:3>
|-FunctionDecl 0x55da4f554800 <line:367:1, line:371:1> line:367:6 used register_tm_clones 'void ()'
| `-CompoundStmt 0x55da4f5548b8 <line:369:1, line:371:1>
|   `-ReturnStmt 0x55da4f5548a8 <line:370:3>
|-FunctionDecl 0x55da4f5549b0 <line:375:1, line:384:1> line:375:6 __do_global_dtors_aux 'void ()'
| `-CompoundStmt 0x55da4f554bf0 <line:377:1, line:384:1>
|   |-IfStmt 0x55da4f554bc0 <line:378:3, line:382:3>
|   | |-RecoveryExpr 0x55da4f554a70 <line:378:7, col:22> 'bool' contains-errors
|   | `-CompoundStmt 0x55da4f554ba0 <col:28, line:382:3>
|   |   |-CallExpr 0x55da4f554b48 <line:379:5, col:26> 'void'
|   |   | `-ImplicitCastExpr 0x55da4f554b30 <col:5> 'void (*)()' <FunctionToPointerDecay>
|   |   |   `-DeclRefExpr 0x55da4f554ad8 <col:5> 'void ()' lvalue Function 0x55da4f554698 'deregister_tm_clones' 'void ()'
|   |   `-ReturnStmt 0x55da4f554b90 <line:381:5>
|   `-ReturnStmt 0x55da4f554be0 <line:383:3>
|-FunctionDecl 0x55da4f554ca8 <line:388:1, line:393:1> line:388:6 frame_dummy 'void ()'
| `-CompoundStmt 0x55da4f554e08 <line:390:1, line:393:1>
|   |-CallExpr 0x55da4f554dd0 <line:391:3, col:22> 'void'
|   | `-ImplicitCastExpr 0x55da4f554db8 <col:3> 'void (*)()' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x55da4f554d98 <col:3> 'void ()' lvalue Function 0x55da4f554800 'register_tm_clones' 'void ()'
|   `-ReturnStmt 0x55da4f554df8 <line:392:3>
|-FunctionDecl 0x55da4f554f40 <line:397:1, line:401:1> line:397:12 used codemarker_alpha 'undefined4 (undefined4)'
| |-ParmVarDecl 0x55da4f554e38 <col:29, col:40> col:40 used param_1 'undefined4':'unsigned int'
| `-CompoundStmt 0x55da4f555038 <line:399:1, line:401:1>
|   `-ReturnStmt 0x55da4f555028 <line:400:3, col:10>
|     `-ImplicitCastExpr 0x55da4f555010 <col:10> 'undefined4':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55da4f554ff0 <col:10> 'undefined4':'unsigned int' lvalue ParmVar 0x55da4f554e38 'param_1' 'undefined4':'unsigned int'
|-FunctionDecl 0x55da4f555260 <line:405:1, line:428:1> line:405:12 invalid main 'undefined8 (int, long)'
| |-ParmVarDecl 0x55da4f5550c8 <col:17, col:21> col:21 used param_1 'int'
| |-ParmVarDecl 0x55da4f555148 <col:29, col:34> col:34 used param_2 'long'
| `-CompoundStmt 0x55da4f5584e8 <line:407:1, line:428:1>
|   |-DeclStmt 0x55da4f5553e0 <line:408:3, col:12>
|   | `-VarDecl 0x55da4f555378 <col:3, col:7> col:7 used iVar1 'int'
|   |-DeclStmt 0x55da4f555470 <line:409:3, col:22>
|   | `-VarDecl 0x55da4f555408 <col:3, col:14> col:14 used local_1c 'undefined4':'unsigned int'
|   |-CallExpr 0x55da4f555588 <line:411:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55da4f555570 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55da4f5554f0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55da4f554f40 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55da4f5555b8 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55da4f5554d0 <col:20> 'int' 0
|   |-BinaryOperator 0x55da4f555628 <line:412:3, col:14> 'undefined4':'unsigned int' lvalue '='
|   | |-DeclRefExpr 0x55da4f5555d0 <col:3> 'undefined4':'unsigned int' lvalue Var 0x55da4f555408 'local_1c' 'undefined4':'unsigned int'
|   | `-ImplicitCastExpr 0x55da4f555610 <col:14> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55da4f5555f0 <col:14> 'int' 0
|   |-CallExpr 0x55da4f5556e8 <line:413:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55da4f5556d0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55da4f5556b0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55da4f554f40 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55da4f555718 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55da4f555690 <col:20> 'int' 1
|   |-IfStmt 0x55da4f557e30 <line:414:3, line:419:3>
|   | |-BinaryOperator 0x55da4f555788 <line:414:7, col:18> 'bool' '=='
|   | | |-ImplicitCastExpr 0x55da4f555770 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55da4f555730 <col:7> 'int' lvalue ParmVar 0x55da4f5550c8 'param_1' 'int'
|   | | `-IntegerLiteral 0x55da4f555750 <col:18> 'int' 2
|   | `-CompoundStmt 0x55da4f557e10 <col:21, line:419:3>
|   |   |-BinaryOperator 0x55da4f557cc8 <line:415:5, col:47> 'int' lvalue '='
|   |   | |-DeclRefExpr 0x55da4f5557a8 <col:5> 'int' lvalue Var 0x55da4f555378 'iVar1' 'int'
|   |   | `-CallExpr 0x55da4f557c48 <col:13, col:47> 'int'
|   |   |   |-ImplicitCastExpr 0x55da4f557c30 <col:13> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   |   | `-DeclRefExpr 0x55da4f557c10 <col:13> 'int (char *, char *)' lvalue Function 0x55da4f5540c8 'strcmp' 'int (char *, char *)'
|   |   |   |-ImplicitCastExpr 0x55da4f557c80 <col:20, col:42> 'char *' <LValueToRValue>
|   |   |   | `-UnaryOperator 0x55da4f555920 <col:20, col:42> 'char *' lvalue prefix '*' cannot overflow
|   |   |   |   `-CStyleCastExpr 0x55da4f5558f8 <col:21, col:42> 'char **' <IntegralToPointer>
|   |   |   |     `-ParenExpr 0x55da4f5558d8 <col:30, col:42> 'long'
|   |   |   |       `-BinaryOperator 0x55da4f555880 <col:31, col:41> 'long' '+'
|   |   |   |         |-ImplicitCastExpr 0x55da4f555850 <col:31> 'long' <LValueToRValue>
|   |   |   |         | `-DeclRefExpr 0x55da4f555810 <col:31> 'long' lvalue ParmVar 0x55da4f555148 'param_2' 'long'
|   |   |   |         `-ImplicitCastExpr 0x55da4f555868 <col:41> 'long' <IntegralCast>
|   |   |   |           `-IntegerLiteral 0x55da4f555830 <col:41> 'int' 8
|   |   |   `-ImplicitCastExpr 0x55da4f557cb0 <col:44> 'char *' <NoOp>
|   |   |     `-ImplicitCastExpr 0x55da4f557c98 <col:44> 'const char *' <ArrayToPointerDecay>
|   |   |       `-StringLiteral 0x55da4f557bf0 <col:44> 'const char[2]' lvalue "1"
|   |   `-IfStmt 0x55da4f557df0 <line:416:5, line:418:5>
|   |     |-BinaryOperator 0x55da4f557d40 <line:416:9, col:18> 'bool' '=='
|   |     | |-ImplicitCastExpr 0x55da4f557d28 <col:9> 'int' <LValueToRValue>
|   |     | | `-DeclRefExpr 0x55da4f557ce8 <col:9> 'int' lvalue Var 0x55da4f555378 'iVar1' 'int'
|   |     | `-IntegerLiteral 0x55da4f557d08 <col:18> 'int' 0
|   |     `-CompoundStmt 0x55da4f557dd8 <col:21, line:418:5>
|   |       `-BinaryOperator 0x55da4f557db8 <line:417:7, col:18> 'undefined4':'unsigned int' lvalue '='
|   |         |-DeclRefExpr 0x55da4f557d60 <col:7> 'undefined4':'unsigned int' lvalue Var 0x55da4f555408 'local_1c' 'undefined4':'unsigned int'
|   |         `-ImplicitCastExpr 0x55da4f557da0 <col:18> 'undefined4':'unsigned int' <IntegralCast>
|   |           `-IntegerLiteral 0x55da4f557d80 <col:18> 'int' 1
|   |-CallExpr 0x55da4f557ef0 <line:420:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55da4f557ed8 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55da4f557eb8 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55da4f554f40 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55da4f557f20 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55da4f557e98 <col:20> 'int' 2
|   |-RecoveryExpr 0x55da4f557f78 <line:421:3, col:23> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55da4f557f38 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_begin' empty
|   |-CallExpr 0x55da4f558040 <line:422:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x55da4f558028 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55da4f558008 <col:3> 'undefined4 (undefined4)' lvalue Function 0x55da4f554f40 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x55da4f558070 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55da4f557fe8 <col:20> 'int' 3
|   |-RecoveryExpr 0x55da4f5580c8 <line:423:3, col:16> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55da4f558088 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_gentab' empty
|   |-RecoveryExpr 0x55da4f558130 <line:424:3, col:10> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x55da4f5580f0 <col:3> '<overloaded function type>' lvalue (ADL) = 'func_1' empty
|   |-RecoveryExpr 0x55da4f558350 <line:425:3, col:51> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f558158 <col:3> '<overloaded function type>' lvalue (ADL) = 'transparent_crc' empty
|   | |-CStyleCastExpr 0x55da4f558200 <col:19, col:25> 'long' <NoOp>
|   | | `-ImplicitCastExpr 0x55da4f5581e8 <col:25> 'long' <IntegralCast> part_of_explicit_cast
|   | |   `-ImplicitCastExpr 0x55da4f5581d0 <col:25> 'undefined4':'unsigned int' <LValueToRValue> part_of_explicit_cast
|   | |     `-DeclRefExpr 0x55da4f558198 <col:25> 'undefined4':'unsigned int' lvalue Var 0x55da4f550a30 'g_5' 'undefined4':'unsigned int'
|   | |-UnaryOperator 0x55da4f5582b0 <col:29, col:30> 'undefined *' prefix '&' cannot overflow
|   | | `-DeclRefExpr 0x55da4f558228 <col:30> 'undefined':'unsigned char' lvalue Var 0x55da4f5509b8 'DAT_004011ba' 'undefined':'unsigned char'
|   | `-DeclRefExpr 0x55da4f558330 <col:43> 'undefined4':'unsigned int' lvalue Var 0x55da4f555408 'local_1c' 'undefined4':'unsigned int'
|   |-RecoveryExpr 0x55da4f558468 <line:426:3, col:56> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f558390 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_end' empty
|   | |-BinaryOperator 0x55da4f558428 <col:21, col:37> 'unsigned int' '^'
|   | | |-ImplicitCastExpr 0x55da4f558410 <col:21> 'undefined4':'unsigned int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55da4f5583d0 <col:21> 'undefined4':'unsigned int' lvalue Var 0x55da4f550940 'crc32_context' 'undefined4':'unsigned int'
|   | | `-IntegerLiteral 0x55da4f5583f0 <col:37> 'unsigned int' 4294967295
|   | `-DeclRefExpr 0x55da4f558448 <col:48> 'undefined4':'unsigned int' lvalue Var 0x55da4f555408 'local_1c' 'undefined4':'unsigned int'
|   `-ReturnStmt 0x55da4f5584d8 <line:427:3, col:10>
|     `-ImplicitCastExpr 0x55da4f5584c0 <col:10> 'undefined8':'unsigned long' <IntegralCast>
|       `-IntegerLiteral 0x55da4f5584a0 <col:10> 'int' 0
|-FunctionDecl 0x55da4f558600 <line:432:1, line:436:1> line:432:6 platform_main_begin 'void ()'
| `-CompoundStmt 0x55da4f5586b8 <line:434:1, line:436:1>
|   `-ReturnStmt 0x55da4f5586a8 <line:435:3>
|-FunctionDecl 0x55da4f558768 <line:440:1, line:460:1> line:440:6 crc32_gentab 'void ()'
| `-CompoundStmt 0x55da4f559380 <line:442:1, line:460:1>
|   |-DeclStmt 0x55da4f558890 <line:443:3, col:15>
|   | `-VarDecl 0x55da4f558828 <col:3, col:7> col:7 used local_18 'int'
|   |-DeclStmt 0x55da4f558938 <line:444:3, col:16>
|   | `-VarDecl 0x55da4f5588d0 <col:3, col:8> col:8 referenced invalid local_14 'int'
|   |-DeclStmt 0x55da4f5589e0 <line:445:3, col:15>
|   | `-VarDecl 0x55da4f558978 <col:3, col:8> col:8 referenced invalid local_c 'int'
|   |-ForStmt 0x55da4f559338 <line:447:3, line:458:3>
|   | |-BinaryOperator 0x55da4f558a60 <line:447:8, col:19> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x55da4f558a18 <col:8> '<dependent type>' contains-errors lvalue
|   | | | `-DeclRefExpr 0x55da4f5589f8 <col:8> 'int' lvalue Var 0x55da4f5588d0 'local_14' 'int'
|   | | `-IntegerLiteral 0x55da4f558a40 <col:19> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55da4f558b00 <col:22, col:38> 'bool' contains-errors '<'
|   | | |-CStyleCastExpr 0x55da4f558ab8 <col:22, col:27> 'int' contains-errors <Dependent>
|   | | | `-RecoveryExpr 0x55da4f558a80 <col:27> '<dependent type>' contains-errors lvalue
|   | | `-IntegerLiteral 0x55da4f558ae0 <col:38> 'int' 256
|   | |-BinaryOperator 0x55da4f558ba0 <col:45, col:67> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x55da4f558b20 <col:45> '<dependent type>' contains-errors lvalue
|   | | `-BinaryOperator 0x55da4f558b80 <col:56, col:67> '<dependent type>' contains-errors '+'
|   | |   |-RecoveryExpr 0x55da4f558b40 <col:56> '<dependent type>' contains-errors lvalue
|   | |   `-IntegerLiteral 0x55da4f558b60 <col:67> 'int' 1
|   | `-CompoundStmt 0x55da4f559318 <col:70, line:458:3>
|   |   |-BinaryOperator 0x55da4f558c48 <line:448:5, col:15> '<dependent type>' contains-errors '='
|   |   | |-RecoveryExpr 0x55da4f558c00 <col:5> '<dependent type>' contains-errors lvalue
|   |   | | `-DeclRefExpr 0x55da4f558bc0 <col:5> 'int' lvalue Var 0x55da4f558978 'local_c' 'int'
|   |   | `-RecoveryExpr 0x55da4f558c28 <col:15> '<dependent type>' contains-errors lvalue
|   |   `-ForStmt 0x55da4f559140 <line:449:5, line:456:5>
|   |     |-BinaryOperator 0x55da4f558ca8 <line:449:10, col:21> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x55da4f558c68 <col:10> 'int' lvalue Var 0x55da4f558828 'local_18' 'int'
|   |     | `-IntegerLiteral 0x55da4f558c88 <col:21> 'int' 8
|   |     |-<<<NULL>>>
|   |     |-BinaryOperator 0x55da4f558d20 <col:24, col:28> 'bool' '<'
|   |     | |-IntegerLiteral 0x55da4f558cc8 <col:24> 'int' 0
|   |     | `-ImplicitCastExpr 0x55da4f558d08 <col:28> 'int' <LValueToRValue>
|   |     |   `-DeclRefExpr 0x55da4f558ce8 <col:28> 'int' lvalue Var 0x55da4f558828 'local_18' 'int'
|   |     |-BinaryOperator 0x55da4f558df0 <col:38, col:61> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x55da4f558d40 <col:38> 'int' lvalue Var 0x55da4f558828 'local_18' 'int'
|   |     | `-BinaryOperator 0x55da4f558dd0 <col:49, col:61> 'int' '+'
|   |     |   |-ImplicitCastExpr 0x55da4f558db8 <col:49> 'int' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55da4f558d60 <col:49> 'int' lvalue Var 0x55da4f558828 'local_18' 'int'
|   |     |   `-UnaryOperator 0x55da4f558da0 <col:60, col:61> 'int' prefix '-'
|   |     |     `-IntegerLiteral 0x55da4f558d80 <col:61> 'int' 1
|   |     `-CompoundStmt 0x55da4f559128 <col:64, line:456:5>
|   |       `-IfStmt 0x55da4f5590f8 <line:450:7, line:455:7> has_else
|   |         |-BinaryOperator 0x55da4f558ed8 <line:450:11, col:28> '<dependent type>' contains-errors '=='
|   |         | |-ParenExpr 0x55da4f558e98 <col:11, col:23> '<dependent type>' contains-errors
|   |         | | `-BinaryOperator 0x55da4f558e78 <col:12, col:22> '<dependent type>' contains-errors '&'
|   |         | |   |-RecoveryExpr 0x55da4f558e30 <col:12> '<dependent type>' contains-errors lvalue
|   |         | |   | `-DeclRefExpr 0x55da4f558e10 <col:12> 'int' lvalue Var 0x55da4f558978 'local_c' 'int'
|   |         | |   `-IntegerLiteral 0x55da4f558e58 <col:22> 'int' 1
|   |         | `-IntegerLiteral 0x55da4f558eb8 <col:28> 'int' 0
|   |         |-CompoundStmt 0x55da4f558fc0 <col:31, line:452:7>
|   |         | `-BinaryOperator 0x55da4f558fa0 <line:451:9, col:30> '<dependent type>' contains-errors '='
|   |         |   |-RecoveryExpr 0x55da4f558f18 <col:9> '<dependent type>' contains-errors lvalue
|   |         |   | `-DeclRefExpr 0x55da4f558ef8 <col:9> 'int' lvalue Var 0x55da4f558978 'local_c' 'int'
|   |         |   `-BinaryOperator 0x55da4f558f80 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |         |     |-RecoveryExpr 0x55da4f558f40 <col:19> '<dependent type>' contains-errors lvalue
|   |         |     `-IntegerLiteral 0x55da4f558f60 <col:30> 'int' 1
|   |         `-CompoundStmt 0x55da4f5590e0 <line:453:12, line:455:7>
|   |           `-BinaryOperator 0x55da4f5590c0 <line:454:9, col:34> '<dependent type>' contains-errors '='
|   |             |-RecoveryExpr 0x55da4f558ff8 <col:9> '<dependent type>' contains-errors lvalue
|   |             | `-DeclRefExpr 0x55da4f558fd8 <col:9> 'int' lvalue Var 0x55da4f558978 'local_c' 'int'
|   |             `-BinaryOperator 0x55da4f5590a0 <col:19, col:34> '<dependent type>' contains-errors '^'
|   |               |-BinaryOperator 0x55da4f559060 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |               | |-RecoveryExpr 0x55da4f559020 <col:19> '<dependent type>' contains-errors lvalue
|   |               | `-IntegerLiteral 0x55da4f559040 <col:30> 'int' 1
|   |               `-IntegerLiteral 0x55da4f559080 <col:34> 'unsigned int' 3988292384
|   `-ReturnStmt 0x55da4f559370 <line:459:3>
|-FunctionDecl 0x55da4f559488 <line:464:1, line:468:1> line:464:6 func_1 'long ()'
| `-CompoundStmt 0x55da4f5595d0 <line:466:1, line:468:1>
|   `-ReturnStmt 0x55da4f5595c0 <line:467:3, col:16>
|     `-CStyleCastExpr 0x55da4f559598 <col:10, col:16> 'long' <NoOp>
|       `-ImplicitCastExpr 0x55da4f559580 <col:16> 'long' <IntegralCast> part_of_explicit_cast
|         `-ImplicitCastExpr 0x55da4f559568 <col:16> 'undefined4':'unsigned int' <LValueToRValue> part_of_explicit_cast
|           `-DeclRefExpr 0x55da4f559530 <col:16> 'undefined4':'unsigned int' lvalue Var 0x55da4f550a30 'g_5' 'undefined4':'unsigned int'
|-FunctionDecl 0x55da4f559830 <line:472:1, line:480:1> line:472:6 transparent_crc 'void (undefined8, undefined8, int)'
| |-ParmVarDecl 0x55da4f5595f8 <col:22, col:33> col:33 used param_1 'undefined8':'unsigned long'
| |-ParmVarDecl 0x55da4f559670 <col:41, col:52> col:52 used param_2 'undefined8':'unsigned long'
| |-ParmVarDecl 0x55da4f5596f0 <col:60, col:64> col:64 used param_3 'int'
| `-CompoundStmt 0x55da4f559b80 <line:474:1, line:480:1>
|   |-RecoveryExpr 0x55da4f559950 <line:475:3, col:23> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f5598f0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_8bytes' empty
|   | `-DeclRefExpr 0x55da4f559930 <col:16> 'undefined8':'unsigned long' lvalue ParmVar 0x55da4f5595f8 'param_1' 'undefined8':'unsigned long'
|   |-IfStmt 0x55da4f559b50 <line:476:3, line:478:3>
|   | |-BinaryOperator 0x55da4f5599d8 <line:476:7, col:18> 'bool' '!='
|   | | |-ImplicitCastExpr 0x55da4f5599c0 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55da4f559980 <col:7> 'int' lvalue ParmVar 0x55da4f5596f0 'param_3' 'int'
|   | | `-IntegerLiteral 0x55da4f5599a0 <col:18> 'int' 0
|   | `-CompoundStmt 0x55da4f559b38 <col:21, line:478:3>
|   |   `-RecoveryExpr 0x55da4f559b00 <line:477:5, col:92> '<dependent type>' contains-errors lvalue
|   |     |-UnresolvedLookupExpr 0x55da4f5599f8 <col:5> '<overloaded function type>' lvalue (ADL) = 'printf' 0x55da4f553c40
|   |     |-StringLiteral 0x55da4f559aa0 <col:12> 'const char[36]' lvalue "...checksum after hashing %s : %lX\n"
|   |     `-DeclRefExpr 0x55da4f559ae0 <col:51> 'undefined8':'unsigned long' lvalue ParmVar 0x55da4f559670 'param_2' 'undefined8':'unsigned long'
|   `-ReturnStmt 0x55da4f559b70 <line:479:3>
|-FunctionDecl 0x55da4f559ef0 <line:484:1, line:489:1> line:484:6 invalid platform_main_end 'void (int)'
| |-ParmVarDecl 0x55da4f559e20 <col:24, col:29> col:29 invalid param_1 'int'
| `-CompoundStmt 0x55da4f55a0b8 <line:486:1, line:489:1>
|   |-RecoveryExpr 0x55da4f55a078 <line:487:3, col:42> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f559fa0 <col:3> '<overloaded function type>' lvalue (ADL) = 'printf' 0x55da4f553c40
|   | `-StringLiteral 0x55da4f55a050 <col:10> 'const char[15]' lvalue "checksum = %X\n"
|   `-ReturnStmt 0x55da4f55a0a8 <line:488:3>
|-FunctionDecl 0x55da4f55a190 <line:493:1, line:505:1> line:493:6 invalid crc32_8bytes 'void (int)'
| |-ParmVarDecl 0x55da4f55a100 <col:19, col:25> col:25 referenced invalid param_1 'int'
| `-CompoundStmt 0x55da4f55ad30 <line:495:1, line:505:1>
|   |-CallExpr 0x55da4f55a2e0 <line:496:3, col:28> '<dependent type>' contains-errors
|   | |-UnresolvedLookupExpr 0x55da4f55a240 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-BinaryOperator 0x55da4f55a2c0 <col:14, col:24> '<dependent type>' contains-errors '&'
|   |   |-RecoveryExpr 0x55da4f55a280 <col:14> '<dependent type>' contains-errors lvalue
|   |   `-IntegerLiteral 0x55da4f55a2a0 <col:24> 'int' 255
|   |-RecoveryExpr 0x55da4f55a450 <line:497:3, col:34> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55a310 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55a428 <col:14, col:33> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55a408 <col:20, col:33> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55a3b8 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55a370 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55a350 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55a398 <col:32> 'int' 8
|   |-RecoveryExpr 0x55da4f55a5c0 <line:498:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55a480 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55a598 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55a578 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55a528 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55a4e0 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55a4c0 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55a508 <col:32> 'int' 16
|   |-RecoveryExpr 0x55da4f55a730 <line:499:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55a5f0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55a708 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55a6e8 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55a698 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55a650 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55a630 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55a678 <col:32> 'int' 24
|   |-RecoveryExpr 0x55da4f55a8a0 <line:500:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55a760 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55a878 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55a858 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55a808 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55a7c0 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55a7a0 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55a7e8 <col:32> 'int' 32
|   |-RecoveryExpr 0x55da4f55aa10 <line:501:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55a8d0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55a9e8 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55a9c8 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55a978 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55a930 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55a910 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55a958 <col:32> 'int' 40
|   |-RecoveryExpr 0x55da4f55ab80 <line:502:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55aa40 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55ab58 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55ab38 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55aae8 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55aaa0 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55aa80 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55aac8 <col:32> 'int' 48
|   |-RecoveryExpr 0x55da4f55acf0 <line:503:3, col:37> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x55da4f55abb0 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_byte' empty
|   | `-CStyleCastExpr 0x55da4f55acc8 <col:14, col:36> 'char' contains-errors <Dependent>
|   |   `-ParenExpr 0x55da4f55aca8 <col:20, col:36> '<dependent type>' contains-errors
|   |     `-BinaryOperator 0x55da4f55ac58 <col:21, col:32> '<dependent type>' contains-errors '>>'
|   |       |-RecoveryExpr 0x55da4f55ac10 <col:21> '<dependent type>' contains-errors lvalue
|   |       | `-DeclRefExpr 0x55da4f55abf0 <col:21> 'int' lvalue ParmVar 0x55da4f55a100 'param_1' 'int'
|   |       `-IntegerLiteral 0x55da4f55ac38 <col:32> 'int' 56
|   `-ReturnStmt 0x55da4f55ad20 <line:504:3>
|-FunctionDecl 0x55da4f55aed0 <line:509:1, line:515:1> line:509:6 crc32_byte 'void (byte)'
| |-ParmVarDecl 0x55da4f55ad98 <col:17, col:22> col:22 used param_1 'byte':'unsigned char'
| `-CompoundStmt 0x55da4f55b188 <line:511:1, line:515:1>
|   `-ReturnStmt 0x55da4f55b178 <line:514:3>
`-FunctionDecl 0x55da4f55b238 <line:519:1, line:523:1> line:519:6 _fini 'void ()'
  `-CompoundStmt 0x55da4f55b2f0 <line:521:1, line:523:1>
    `-ReturnStmt 0x55da4f55b2e0 <line:522:3>

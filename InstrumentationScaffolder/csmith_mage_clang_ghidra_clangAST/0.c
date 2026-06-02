TranslationUnitDecl 0x56239986d548 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x56239986e1e0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x56239986db10 '__int128'
|-TypedefDecl 0x56239986e250 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x56239986db30 'unsigned __int128'
|-TypedefDecl 0x5623998bdbf0 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x56239986e340 '__NSConstantString_tag'
|   `-CXXRecord 0x56239986e2a8 '__NSConstantString_tag'
|-TypedefDecl 0x56239986de08 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x56239986ddc0 'char *'
|   `-BuiltinType 0x56239986d5f0 'char'
|-TypedefDecl 0x56239986e170 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list '__va_list_tag[1]'
| `-ConstantArrayType 0x56239986e120 '__va_list_tag[1]' 1 
|   `-RecordType 0x56239986def0 '__va_list_tag'
|     `-CXXRecord 0x56239986de60 '__va_list_tag'
|-TypedefDecl 0x5623998bdc60 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/0.c:1:1, col:25> col:25 referenced undefined 'unsigned char'
| `-BuiltinType 0x56239986d6b0 'unsigned char'
|-TypedefDecl 0x5623998bdcd0 <line:3:1, col:26> col:26 referenced byte 'unsigned char'
| `-BuiltinType 0x56239986d6b0 'unsigned char'
|-TypedefDecl 0x5623998bdd40 <line:4:1, col:26> col:26 referenced dwfenc 'unsigned char'
| `-BuiltinType 0x56239986d6b0 'unsigned char'
|-TypedefDecl 0x5623998bddb0 <line:5:1, col:25> col:25 referenced dword 'unsigned int'
| `-BuiltinType 0x56239986d6f0 'unsigned int'
|-TypedefDecl 0x5623998bde20 <line:6:1, col:26> col:26 referenced qword 'unsigned long'
| `-BuiltinType 0x56239986d710 'unsigned long'
|-TypedefDecl 0x5623998bde90 <line:7:1, col:26> col:26 referenced undefined1 'unsigned char'
| `-BuiltinType 0x56239986d6b0 'unsigned char'
|-TypedefDecl 0x5623998bdf00 <line:8:1, col:25> col:25 referenced undefined4 'unsigned int'
| `-BuiltinType 0x56239986d6f0 'unsigned int'
|-TypedefDecl 0x5623998bdf70 <line:9:1, col:26> col:26 referenced undefined8 'unsigned long'
| `-BuiltinType 0x56239986d710 'unsigned long'
|-TypedefDecl 0x5623998bdfe0 <line:10:1, col:27> col:27 referenced word 'unsigned short'
| `-BuiltinType 0x56239986d6d0 'unsigned short'
|-CXXRecordDecl 0x5623998be038 <line:11:9, col:16> col:16 struct eh_frame_hdr
|-TypedefDecl 0x5623998be148 <col:1, col:29> col:29 eh_frame_hdr 'struct eh_frame_hdr':'eh_frame_hdr'
| `-ElaboratedType 0x5623998be0f0 'struct eh_frame_hdr' sugar
|   `-RecordType 0x5623998be0d0 'eh_frame_hdr'
|     `-CXXRecord 0x5623998be2e0 'eh_frame_hdr'
|-TypedefDecl 0x5623998be238 <col:1, col:44> col:44 Peh_frame_hdr 'struct eh_frame_hdr *'
| `-PointerType 0x5623998be1e0 'struct eh_frame_hdr *'
|   `-ElaboratedType 0x5623998be0f0 'struct eh_frame_hdr' sugar
|     `-RecordType 0x5623998be0d0 'eh_frame_hdr'
|       `-CXXRecord 0x5623998be2e0 'eh_frame_hdr'
|-CXXRecordDecl 0x5623998be2e0 prev 0x5623998be038 <line:13:1, line:18:1> line:13:8 struct eh_frame_hdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998be3d8 <col:1, col:8> col:8 implicit struct eh_frame_hdr
| |-FieldDecl 0x5623998be4e0 <line:14:5, col:10> col:10 eh_frame_hdr_version 'byte':'unsigned char'
| |-FieldDecl 0x5623998be5a0 <line:15:5, col:12> col:12 eh_frame_pointer_encoding 'dwfenc':'unsigned char'
| |-FieldDecl 0x5623998be600 <line:16:5, col:12> col:12 eh_frame_desc_entry_count_encoding 'dwfenc':'unsigned char'
| `-FieldDecl 0x5623998be660 <line:17:5, col:12> col:12 eh_frame_table_encoding 'dwfenc':'unsigned char'
|-CXXRecordDecl 0x5623998be6c8 <line:20:9, col:16> col:16 struct NoteGnuPropertyElement_4
|-TypedefDecl 0x5623998be7d8 <col:1, col:41> col:41 NoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4':'NoteGnuPropertyElement_4'
| `-ElaboratedType 0x5623998be780 'struct NoteGnuPropertyElement_4' sugar
|   `-RecordType 0x5623998be760 'NoteGnuPropertyElement_4'
|     `-CXXRecord 0x5623998be970 'NoteGnuPropertyElement_4'
|-TypedefDecl 0x5623998be8c8 <col:1, col:68> col:68 PNoteGnuPropertyElement_4 'struct NoteGnuPropertyElement_4 *'
| `-PointerType 0x5623998be870 'struct NoteGnuPropertyElement_4 *'
|   `-ElaboratedType 0x5623998be780 'struct NoteGnuPropertyElement_4' sugar
|     `-RecordType 0x5623998be760 'NoteGnuPropertyElement_4'
|       `-CXXRecord 0x5623998be970 'NoteGnuPropertyElement_4'
|-CXXRecordDecl 0x5623998be970 prev 0x5623998be6c8 <line:22:1, line:26:1> line:22:8 struct NoteGnuPropertyElement_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998bea68 <col:1, col:8> col:8 implicit struct NoteGnuPropertyElement_4
| |-FieldDecl 0x5623998dfca0 <line:23:5, col:11> col:11 prType 'dword':'unsigned int'
| |-FieldDecl 0x5623998dfd00 <line:24:5, col:11> col:11 prDatasz 'dword':'unsigned int'
| `-FieldDecl 0x5623998dfe10 <line:25:5, col:16> col:10 data 'byte[4]'
|-CXXRecordDecl 0x5623998dfe78 <line:28:9, col:16> col:16 struct fde_table_entry
|-TypedefDecl 0x5623998dff88 <col:1, col:32> col:32 fde_table_entry 'struct fde_table_entry':'fde_table_entry'
| `-ElaboratedType 0x5623998dff30 'struct fde_table_entry' sugar
|   `-RecordType 0x5623998dff10 'fde_table_entry'
|     `-CXXRecord 0x5623998e0120 'fde_table_entry'
|-TypedefDecl 0x5623998e0078 <col:1, col:50> col:50 Pfde_table_entry 'struct fde_table_entry *'
| `-PointerType 0x5623998e0020 'struct fde_table_entry *'
|   `-ElaboratedType 0x5623998dff30 'struct fde_table_entry' sugar
|     `-RecordType 0x5623998dff10 'fde_table_entry'
|       `-CXXRecord 0x5623998e0120 'fde_table_entry'
|-CXXRecordDecl 0x5623998e0120 prev 0x5623998dfe78 <line:30:1, line:33:1> line:30:8 struct fde_table_entry definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998e0218 <col:1, col:8> col:8 implicit struct fde_table_entry
| |-FieldDecl 0x5623998e02b8 <line:31:5, col:11> col:11 initial_loc 'dword':'unsigned int'
| `-FieldDecl 0x5623998e0318 <line:32:5, col:11> col:11 data_loc 'dword':'unsigned int'
|-EnumDecl 0x5623998e0380 <line:35:9, line:112:1> line:35:14 Elf64_DynTag
| |-EnumConstantDecl 0x5623998e0480 <line:36:5, col:13> col:5 DT_NULL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3a38 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0460 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5623998e0440 <col:13> 'int' 0
| |-EnumConstantDecl 0x5623998e0518 <line:37:5, col:15> col:5 DT_NEEDED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3a50 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e04f8 <col:15> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5623998e04d8 <col:15> 'int' 1
| |-EnumConstantDecl 0x5623998e05b0 <line:38:5, col:17> col:5 DT_PLTRELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3a68 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0590 <col:17> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5623998e0570 <col:17> 'int' 2
| |-EnumConstantDecl 0x5623998e0648 <line:39:5, col:15> col:5 DT_PLTGOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3a80 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0628 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5623998e0608 <col:15> 'int' 3
| |-EnumConstantDecl 0x5623998e06e0 <line:40:5, col:13> col:5 DT_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3a98 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e06c0 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5623998e06a0 <col:13> 'int' 4
| |-EnumConstantDecl 0x5623998e0778 <line:41:5, col:15> col:5 DT_STRTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ab0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0758 <col:15> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5623998e0738 <col:15> 'int' 5
| |-EnumConstantDecl 0x5623998e0810 <line:42:5, col:15> col:5 DT_SYMTAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ac8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e07f0 <col:15> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5623998e07d0 <col:15> 'int' 6
| |-EnumConstantDecl 0x5623998e08a8 <line:43:5, col:13> col:5 DT_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ae0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0888 <col:13> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5623998e0868 <col:13> 'int' 7
| |-EnumConstantDecl 0x5623998e0940 <line:44:5, col:15> col:5 DT_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3af8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0920 <col:15> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x5623998e0900 <col:15> 'int' 8
| |-EnumConstantDecl 0x5623998e09d8 <line:45:5, col:16> col:5 DT_RELAENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b10 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e09b8 <col:16> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x5623998e0998 <col:16> 'int' 9
| |-EnumConstantDecl 0x5623998e0a70 <line:46:5, col:14> col:5 DT_STRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b28 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0a50 <col:14> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x5623998e0a30 <col:14> 'int' 10
| |-EnumConstantDecl 0x5623998e0b08 <line:47:5, col:15> col:5 DT_SYMENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b40 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0ae8 <col:15> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x5623998e0ac8 <col:15> 'int' 11
| |-EnumConstantDecl 0x5623998e0ba0 <line:48:5, col:13> col:5 DT_INIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b58 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0b80 <col:13> 'int'
| |     |-value: Int 12
| |     `-IntegerLiteral 0x5623998e0b60 <col:13> 'int' 12
| |-EnumConstantDecl 0x5623998e18a0 <line:49:5, col:13> col:5 DT_FINI 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b70 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e0c18 <col:13> 'int'
| |     |-value: Int 13
| |     `-IntegerLiteral 0x5623998e0bf8 <col:13> 'int' 13
| |-EnumConstantDecl 0x5623998e1938 <line:50:5, col:15> col:5 DT_SONAME 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3b88 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1918 <col:15> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x5623998e18f8 <col:15> 'int' 14
| |-EnumConstantDecl 0x5623998e19d0 <line:51:5, col:14> col:5 DT_RPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ba0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e19b0 <col:14> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x5623998e1990 <col:14> 'int' 15
| |-EnumConstantDecl 0x5623998e1a68 <line:52:5, col:17> col:5 DT_SYMBOLIC 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3bb8 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1a48 <col:17> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x5623998e1a28 <col:17> 'int' 16
| |-EnumConstantDecl 0x5623998e1b00 <line:53:5, col:12> col:5 DT_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3bd0 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1ae0 <col:12> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x5623998e1ac0 <col:12> 'int' 17
| |-EnumConstantDecl 0x5623998e1b98 <line:54:5, col:14> col:5 DT_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3be8 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1b78 <col:14> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x5623998e1b58 <col:14> 'int' 18
| |-EnumConstantDecl 0x5623998e1c30 <line:55:5, col:15> col:5 DT_RELENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c00 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1c10 <col:15> 'int'
| |     |-value: Int 19
| |     `-IntegerLiteral 0x5623998e1bf0 <col:15> 'int' 19
| |-EnumConstantDecl 0x5623998e1cc8 <line:56:5, col:15> col:5 DT_PLTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c18 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1ca8 <col:15> 'int'
| |     |-value: Int 20
| |     `-IntegerLiteral 0x5623998e1c88 <col:15> 'int' 20
| |-EnumConstantDecl 0x5623998e1d60 <line:57:5, col:14> col:5 DT_DEBUG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c30 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1d40 <col:14> 'int'
| |     |-value: Int 21
| |     `-IntegerLiteral 0x5623998e1d20 <col:14> 'int' 21
| |-EnumConstantDecl 0x5623998e1df8 <line:58:5, col:16> col:5 DT_TEXTREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c48 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1dd8 <col:16> 'int'
| |     |-value: Int 22
| |     `-IntegerLiteral 0x5623998e1db8 <col:16> 'int' 22
| |-EnumConstantDecl 0x5623998e1e90 <line:59:5, col:15> col:5 DT_JMPREL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c60 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1e70 <col:15> 'int'
| |     |-value: Int 23
| |     `-IntegerLiteral 0x5623998e1e50 <col:15> 'int' 23
| |-EnumConstantDecl 0x5623998e1f28 <line:60:5, col:17> col:5 DT_BIND_NOW 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c78 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1f08 <col:17> 'int'
| |     |-value: Int 24
| |     `-IntegerLiteral 0x5623998e1ee8 <col:17> 'int' 24
| |-EnumConstantDecl 0x5623998e1fc0 <line:61:5, col:19> col:5 DT_INIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3c90 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e1fa0 <col:19> 'int'
| |     |-value: Int 25
| |     `-IntegerLiteral 0x5623998e1f80 <col:19> 'int' 25
| |-EnumConstantDecl 0x5623998e2058 <line:62:5, col:19> col:5 DT_FINI_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ca8 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2038 <col:19> 'int'
| |     |-value: Int 26
| |     `-IntegerLiteral 0x5623998e2018 <col:19> 'int' 26
| |-EnumConstantDecl 0x5623998e20f0 <line:63:5, col:21> col:5 DT_INIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3cc0 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e20d0 <col:21> 'int'
| |     |-value: Int 27
| |     `-IntegerLiteral 0x5623998e20b0 <col:21> 'int' 27
| |-EnumConstantDecl 0x5623998e2188 <line:64:5, col:21> col:5 DT_FINI_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3cd8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2168 <col:21> 'int'
| |     |-value: Int 28
| |     `-IntegerLiteral 0x5623998e2148 <col:21> 'int' 28
| |-EnumConstantDecl 0x5623998e2220 <line:65:5, col:16> col:5 DT_RUNPATH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3cf0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2200 <col:16> 'int'
| |     |-value: Int 29
| |     `-IntegerLiteral 0x5623998e21e0 <col:16> 'int' 29
| |-EnumConstantDecl 0x5623998e22b8 <line:66:5, col:14> col:5 DT_FLAGS 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d08 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2298 <col:14> 'int'
| |     |-value: Int 30
| |     `-IntegerLiteral 0x5623998e2278 <col:14> 'int' 30
| |-EnumConstantDecl 0x5623998e2350 <line:67:5, col:22> col:5 DT_PREINIT_ARRAY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d20 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2330 <col:22> 'int'
| |     |-value: Int 32
| |     `-IntegerLiteral 0x5623998e2310 <col:22> 'int' 32
| |-EnumConstantDecl 0x5623998e23e8 <line:68:5, col:24> col:5 DT_PREINIT_ARRAYSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d38 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e23c8 <col:24> 'int'
| |     |-value: Int 33
| |     `-IntegerLiteral 0x5623998e23a8 <col:24> 'int' 33
| |-EnumConstantDecl 0x5623998e2480 <line:69:5, col:15> col:5 DT_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d50 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2460 <col:15> 'int'
| |     |-value: Int 35
| |     `-IntegerLiteral 0x5623998e2440 <col:15> 'int' 35
| |-EnumConstantDecl 0x5623998e2518 <line:70:5, col:13> col:5 DT_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d68 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e24f8 <col:13> 'int'
| |     |-value: Int 36
| |     `-IntegerLiteral 0x5623998e24d8 <col:13> 'int' 36
| |-EnumConstantDecl 0x5623998e25b0 <line:71:5, col:16> col:5 DT_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d80 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2590 <col:16> 'int'
| |     |-value: Int 37
| |     `-IntegerLiteral 0x5623998e2570 <col:16> 'int' 37
| |-EnumConstantDecl 0x5623998e2648 <line:72:5, col:20> col:5 DT_ANDROID_REL 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3d98 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2628 <col:20> 'int'
| |     |-value: Int 1610612751
| |     `-IntegerLiteral 0x5623998e2608 <col:20> 'int' 1610612751
| |-EnumConstantDecl 0x5623998e26e0 <line:73:5, col:22> col:5 DT_ANDROID_RELSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3db0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e26c0 <col:22> 'int'
| |     |-value: Int 1610612752
| |     `-IntegerLiteral 0x5623998e26a0 <col:22> 'int' 1610612752
| |-EnumConstantDecl 0x5623998e2778 <line:74:5, col:21> col:5 DT_ANDROID_RELA 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3dc8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e2758 <col:21> 'int'
| |     |-value: Int 1610612753
| |     `-IntegerLiteral 0x5623998e2738 <col:21> 'int' 1610612753
| |-EnumConstantDecl 0x5623998e2810 <line:75:5, col:23> col:5 DT_ANDROID_RELASZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3de0 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e27f0 <col:23> 'int'
| |     |-value: Int 1610612754
| |     `-IntegerLiteral 0x5623998e27d0 <col:23> 'int' 1610612754
| |-EnumConstantDecl 0x5623998e9070 <line:76:5, col:21> col:5 DT_ANDROID_RELR 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3df8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9050 <col:21> 'int'
| |     |-value: Int 1879040000
| |     `-IntegerLiteral 0x5623998e2868 <col:21> 'int' 1879040000
| |-EnumConstantDecl 0x5623998e9108 <line:77:5, col:23> col:5 DT_ANDROID_RELRSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e10 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e90e8 <col:23> 'int'
| |     |-value: Int 1879040001
| |     `-IntegerLiteral 0x5623998e90c8 <col:23> 'int' 1879040001
| |-EnumConstantDecl 0x5623998e91a0 <line:78:5, col:24> col:5 DT_ANDROID_RELRENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e28 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9180 <col:24> 'int'
| |     |-value: Int 1879040003
| |     `-IntegerLiteral 0x5623998e9160 <col:24> 'int' 1879040003
| |-EnumConstantDecl 0x5623998e9238 <line:79:5, col:22> col:5 DT_GNU_PRELINKED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e40 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9218 <col:22> 'int'
| |     |-value: Int 1879047669
| |     `-IntegerLiteral 0x5623998e91f8 <col:22> 'int' 1879047669
| |-EnumConstantDecl 0x5623998e92d0 <line:80:5, col:23> col:5 DT_GNU_CONFLICTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e58 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e92b0 <col:23> 'int'
| |     |-value: Int 1879047670
| |     `-IntegerLiteral 0x5623998e9290 <col:23> 'int' 1879047670
| |-EnumConstantDecl 0x5623998e9368 <line:81:5, col:22> col:5 DT_GNU_LIBLISTSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e70 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9348 <col:22> 'int'
| |     |-value: Int 1879047671
| |     `-IntegerLiteral 0x5623998e9328 <col:22> 'int' 1879047671
| |-EnumConstantDecl 0x5623998e9400 <line:82:5, col:17> col:5 DT_CHECKSUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3e88 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e93e0 <col:17> 'int'
| |     |-value: Int 1879047672
| |     `-IntegerLiteral 0x5623998e93c0 <col:17> 'int' 1879047672
| |-EnumConstantDecl 0x5623998e9498 <line:83:5, col:17> col:5 DT_PLTPADSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ea0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9478 <col:17> 'int'
| |     |-value: Int 1879047673
| |     `-IntegerLiteral 0x5623998e9458 <col:17> 'int' 1879047673
| |-EnumConstantDecl 0x5623998e9530 <line:84:5, col:16> col:5 DT_MOVEENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3eb8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9510 <col:16> 'int'
| |     |-value: Int 1879047674
| |     `-IntegerLiteral 0x5623998e94f0 <col:16> 'int' 1879047674
| |-EnumConstantDecl 0x5623998e95c8 <line:85:5, col:15> col:5 DT_MOVESZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ed0 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e95a8 <col:15> 'int'
| |     |-value: Int 1879047675
| |     `-IntegerLiteral 0x5623998e9588 <col:15> 'int' 1879047675
| |-EnumConstantDecl 0x5623998e9660 <line:86:5, col:18> col:5 DT_FEATURE_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ee8 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9640 <col:18> 'int'
| |     |-value: Int 1879047676
| |     `-IntegerLiteral 0x5623998e9620 <col:18> 'int' 1879047676
| |-EnumConstantDecl 0x5623998e96f8 <line:87:5, col:18> col:5 DT_POSFLAG_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f00 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e96d8 <col:18> 'int'
| |     |-value: Int 1879047677
| |     `-IntegerLiteral 0x5623998e96b8 <col:18> 'int' 1879047677
| |-EnumConstantDecl 0x5623998e9790 <line:88:5, col:16> col:5 DT_SYMINSZ 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f18 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9770 <col:16> 'int'
| |     |-value: Int 1879047678
| |     `-IntegerLiteral 0x5623998e9750 <col:16> 'int' 1879047678
| |-EnumConstantDecl 0x5623998e9828 <line:89:5, col:17> col:5 DT_SYMINENT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f30 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9808 <col:17> 'int'
| |     |-value: Int 1879047679
| |     `-IntegerLiteral 0x5623998e97e8 <col:17> 'int' 1879047679
| |-EnumConstantDecl 0x5623998e98c0 <line:90:5, col:18> col:5 DT_GNU_XHASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f48 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e98a0 <col:18> 'int'
| |     |-value: Int 1879047924
| |     `-IntegerLiteral 0x5623998e9880 <col:18> 'int' 1879047924
| |-EnumConstantDecl 0x5623998e9958 <line:91:5, col:17> col:5 DT_GNU_HASH 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f60 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9938 <col:17> 'int'
| |     |-value: Int 1879047925
| |     `-IntegerLiteral 0x5623998e9918 <col:17> 'int' 1879047925
| |-EnumConstantDecl 0x5623998e99f0 <line:92:5, col:20> col:5 DT_TLSDESC_PLT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f78 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e99d0 <col:20> 'int'
| |     |-value: Int 1879047926
| |     `-IntegerLiteral 0x5623998e99b0 <col:20> 'int' 1879047926
| |-EnumConstantDecl 0x5623998e9a88 <line:93:5, col:20> col:5 DT_TLSDESC_GOT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3f90 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9a68 <col:20> 'int'
| |     |-value: Int 1879047927
| |     `-IntegerLiteral 0x5623998e9a48 <col:20> 'int' 1879047927
| |-EnumConstantDecl 0x5623998e9b20 <line:94:5, col:21> col:5 DT_GNU_CONFLICT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3fa8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9b00 <col:21> 'int'
| |     |-value: Int 1879047928
| |     `-IntegerLiteral 0x5623998e9ae0 <col:21> 'int' 1879047928
| |-EnumConstantDecl 0x5623998e9bb8 <line:95:5, col:20> col:5 DT_GNU_LIBLIST 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3fc0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9b98 <col:20> 'int'
| |     |-value: Int 1879047929
| |     `-IntegerLiteral 0x5623998e9b78 <col:20> 'int' 1879047929
| |-EnumConstantDecl 0x5623998e9c50 <line:96:5, col:15> col:5 DT_CONFIG 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3fd8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9c30 <col:15> 'int'
| |     |-value: Int 1879047930
| |     `-IntegerLiteral 0x5623998e9c10 <col:15> 'int' 1879047930
| |-EnumConstantDecl 0x5623998e9ce8 <line:97:5, col:17> col:5 DT_DEPAUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e3ff0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9cc8 <col:17> 'int'
| |     |-value: Int 1879047931
| |     `-IntegerLiteral 0x5623998e9ca8 <col:17> 'int' 1879047931
| |-EnumConstantDecl 0x5623998e9d80 <line:98:5, col:14> col:5 DT_AUDIT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4008 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9d60 <col:14> 'int'
| |     |-value: Int 1879047932
| |     `-IntegerLiteral 0x5623998e9d40 <col:14> 'int' 1879047932
| |-EnumConstantDecl 0x5623998e9e18 <line:99:5, col:15> col:5 DT_PLTPAD 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4020 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9df8 <col:15> 'int'
| |     |-value: Int 1879047933
| |     `-IntegerLiteral 0x5623998e9dd8 <col:15> 'int' 1879047933
| |-EnumConstantDecl 0x5623998e9eb0 <line:100:5, col:16> col:5 DT_MOVETAB 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4038 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9e90 <col:16> 'int'
| |     |-value: Int 1879047934
| |     `-IntegerLiteral 0x5623998e9e70 <col:16> 'int' 1879047934
| |-EnumConstantDecl 0x5623998e9f48 <line:101:5, col:16> col:5 DT_SYMINFO 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4050 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9f28 <col:16> 'int'
| |     |-value: Int 1879047935
| |     `-IntegerLiteral 0x5623998e9f08 <col:16> 'int' 1879047935
| |-EnumConstantDecl 0x5623998e9fe0 <line:102:5, col:15> col:5 DT_VERSYM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4068 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e9fc0 <col:15> 'int'
| |     |-value: Int 1879048176
| |     `-IntegerLiteral 0x5623998e9fa0 <col:15> 'int' 1879048176
| |-EnumConstantDecl 0x5623998e3520 <line:103:5, col:18> col:5 DT_RELACOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4080 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3500 <col:18> 'int'
| |     |-value: Int 1879048185
| |     `-IntegerLiteral 0x5623998e34e0 <col:18> 'int' 1879048185
| |-EnumConstantDecl 0x5623998e35b8 <line:104:5, col:17> col:5 DT_RELCOUNT 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4098 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3598 <col:17> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x5623998e3578 <col:17> 'int' 1879048186
| |-EnumConstantDecl 0x5623998e3650 <line:105:5, col:16> col:5 DT_FLAGS_1 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e40b0 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3630 <col:16> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x5623998e3610 <col:16> 'int' 1879048187
| |-EnumConstantDecl 0x5623998e36e8 <line:106:5, col:15> col:5 DT_VERDEF 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e40c8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e36c8 <col:15> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x5623998e36a8 <col:15> 'int' 1879048188
| |-EnumConstantDecl 0x5623998e3780 <line:107:5, col:18> col:5 DT_VERDEFNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e40e0 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3760 <col:18> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x5623998e3740 <col:18> 'int' 1879048189
| |-EnumConstantDecl 0x5623998e3818 <line:108:5, col:16> col:5 DT_VERNEED 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e40f8 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e37f8 <col:16> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x5623998e37d8 <col:16> 'int' 1879048190
| |-EnumConstantDecl 0x5623998e38b0 <line:109:5, col:19> col:5 DT_VERNEEDNUM 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4110 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3890 <col:19> 'int'
| |     |-value: Int 1879048191
| |     `-IntegerLiteral 0x5623998e3870 <col:19> 'int' 1879048191
| |-EnumConstantDecl 0x5623998e3948 <line:110:5, col:18> col:5 DT_AUXILIARY 'Elf64_DynTag'
| | `-ImplicitCastExpr 0x5623998e4128 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e3928 <col:18> 'int'
| |     |-value: Int 2147483645
| |     `-IntegerLiteral 0x5623998e3908 <col:18> 'int' 2147483645
| `-EnumConstantDecl 0x5623998e39e0 <line:111:5, col:15> col:5 DT_FILTER 'Elf64_DynTag'
|   `-ImplicitCastExpr 0x5623998e4140 <col:15> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5623998e39c0 <col:15> 'int'
|       |-value: Int 2147483647
|       `-IntegerLiteral 0x5623998e39a0 <col:15> 'int' 2147483647
|-TypedefDecl 0x5623998e41b8 <line:35:1, line:112:3> col:3 Elf64_DynTag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-ElaboratedType 0x5623998e4160 'enum Elf64_DynTag' sugar
|   `-EnumType 0x5623998e0420 'Elf64_DynTag'
|     `-Enum 0x5623998e0380 'Elf64_DynTag'
|-EnumDecl 0x5623998e4238 <line:114:9, line:126:1> line:114:14 Elf_ProgramHeaderType
| |-EnumConstantDecl 0x5623998e4340 <line:115:5, col:13> col:5 PT_NULL 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e61d0 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e4320 <col:13> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5623998e4300 <col:13> 'int' 0
| |-EnumConstantDecl 0x5623998e43d8 <line:116:5, col:13> col:5 PT_LOAD 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e61e8 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e43b8 <col:13> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5623998e4398 <col:13> 'int' 1
| |-EnumConstantDecl 0x5623998e4470 <line:117:5, col:16> col:5 PT_DYNAMIC 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6200 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e4450 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5623998e4430 <col:16> 'int' 2
| |-EnumConstantDecl 0x5623998e5d50 <line:118:5, col:15> col:5 PT_INTERP 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6218 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e5d30 <col:15> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5623998e5d10 <col:15> 'int' 3
| |-EnumConstantDecl 0x5623998e5de8 <line:119:5, col:13> col:5 PT_NOTE 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6230 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e5dc8 <col:13> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5623998e5da8 <col:13> 'int' 4
| |-EnumConstantDecl 0x5623998e5e80 <line:120:5, col:14> col:5 PT_SHLIB 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6248 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e5e60 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5623998e5e40 <col:14> 'int' 5
| |-EnumConstantDecl 0x5623998e5f18 <line:121:5, col:13> col:5 PT_PHDR 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6260 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e5ef8 <col:13> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5623998e5ed8 <col:13> 'int' 6
| |-EnumConstantDecl 0x5623998e5fb0 <line:122:5, col:12> col:5 PT_TLS 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6278 <col:12> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e5f90 <col:12> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5623998e5f70 <col:12> 'int' 7
| |-EnumConstantDecl 0x5623998e6048 <line:123:5, col:21> col:5 PT_GNU_EH_FRAME 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e6290 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e6028 <col:21> 'int'
| |     |-value: Int 1685382480
| |     `-IntegerLiteral 0x5623998e6008 <col:21> 'int' 1685382480
| |-EnumConstantDecl 0x5623998e60e0 <line:124:5, col:18> col:5 PT_GNU_STACK 'Elf_ProgramHeaderType'
| | `-ImplicitCastExpr 0x5623998e62a8 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e60c0 <col:18> 'int'
| |     |-value: Int 1685382481
| |     `-IntegerLiteral 0x5623998e60a0 <col:18> 'int' 1685382481
| `-EnumConstantDecl 0x5623998e6178 <line:125:5, col:18> col:5 PT_GNU_RELRO 'Elf_ProgramHeaderType'
|   `-ImplicitCastExpr 0x5623998e62c0 <col:18> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5623998e6158 <col:18> 'int'
|       |-value: Int 1685382482
|       `-IntegerLiteral 0x5623998e6138 <col:18> 'int' 1685382482
|-TypedefDecl 0x5623998e6338 <line:114:1, line:126:3> col:3 Elf_ProgramHeaderType 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| `-ElaboratedType 0x5623998e62e0 'enum Elf_ProgramHeaderType' sugar
|   `-EnumType 0x5623998e42e0 'Elf_ProgramHeaderType'
|     `-Enum 0x5623998e4238 'Elf_ProgramHeaderType'
|-CXXRecordDecl 0x5623998e63b8 <line:128:9, col:16> col:16 struct Elf64_Sym
|-TypedefDecl 0x5623998e64c8 <col:1, col:26> col:26 Elf64_Sym 'struct Elf64_Sym':'Elf64_Sym'
| `-ElaboratedType 0x5623998e6470 'struct Elf64_Sym' sugar
|   `-RecordType 0x5623998e6450 'Elf64_Sym'
|     `-CXXRecord 0x5623998e6660 'Elf64_Sym'
|-TypedefDecl 0x5623998e65b8 <col:1, col:38> col:38 PElf64_Sym 'struct Elf64_Sym *'
| `-PointerType 0x5623998e6560 'struct Elf64_Sym *'
|   `-ElaboratedType 0x5623998e6470 'struct Elf64_Sym' sugar
|     `-RecordType 0x5623998e6450 'Elf64_Sym'
|       `-CXXRecord 0x5623998e6660 'Elf64_Sym'
|-CXXRecordDecl 0x5623998e6660 prev 0x5623998e63b8 <line:130:1, line:137:1> line:130:8 struct Elf64_Sym definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998e6758 <col:1, col:8> col:8 implicit struct Elf64_Sym
| |-FieldDecl 0x5623998e67f8 <line:131:5, col:11> col:11 st_name 'dword':'unsigned int'
| |-FieldDecl 0x5623998e6858 <line:132:5, col:10> col:10 st_info 'byte':'unsigned char'
| |-FieldDecl 0x5623998e68b8 <line:133:5, col:10> col:10 st_other 'byte':'unsigned char'
| |-FieldDecl 0x5623998e6980 <line:134:5, col:10> col:10 st_shndx 'word':'unsigned short'
| |-FieldDecl 0x5623998e6a40 <line:135:5, col:11> col:11 st_value 'qword':'unsigned long'
| `-FieldDecl 0x5623998e6aa0 <line:136:5, col:11> col:11 st_size 'qword':'unsigned long'
|-CXXRecordDecl 0x5623998e6b08 <line:139:9, col:16> col:16 struct Elf64_Phdr
|-TypedefDecl 0x5623998e6c18 <col:1, col:27> col:27 Elf64_Phdr 'struct Elf64_Phdr':'Elf64_Phdr'
| `-ElaboratedType 0x5623998e6bc0 'struct Elf64_Phdr' sugar
|   `-RecordType 0x5623998e6ba0 'Elf64_Phdr'
|     `-CXXRecord 0x5623998e6dd0 'Elf64_Phdr'
|-TypedefDecl 0x5623998e6d20 <col:1, col:40> col:40 PElf64_Phdr 'struct Elf64_Phdr *'
| `-PointerType 0x5623998e6cb0 'struct Elf64_Phdr *'
|   `-ElaboratedType 0x5623998e6bc0 'struct Elf64_Phdr' sugar
|     `-RecordType 0x5623998e6ba0 'Elf64_Phdr'
|       `-CXXRecord 0x5623998e6dd0 'Elf64_Phdr'
|-CXXRecordDecl 0x5623998e6dd0 prev 0x5623998e6b08 <line:141:1, line:150:1> line:141:8 struct Elf64_Phdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998e6ec8 <col:1, col:8> col:8 implicit struct Elf64_Phdr
| |-FieldDecl 0x5623998e6fe0 <line:142:5, col:32> col:32 p_type 'enum Elf_ProgramHeaderType':'Elf_ProgramHeaderType'
| |-FieldDecl 0x5623998e7040 <line:143:5, col:11> col:11 p_flags 'dword':'unsigned int'
| |-FieldDecl 0x5623998e70a0 <line:144:5, col:11> col:11 p_offset 'qword':'unsigned long'
| |-FieldDecl 0x5623998e7100 <line:145:5, col:11> col:11 p_vaddr 'qword':'unsigned long'
| |-FieldDecl 0x5623998e7160 <line:146:5, col:11> col:11 p_paddr 'qword':'unsigned long'
| |-FieldDecl 0x5623998e71c0 <line:147:5, col:11> col:11 p_filesz 'qword':'unsigned long'
| |-FieldDecl 0x5623998e7220 <line:148:5, col:11> col:11 p_memsz 'qword':'unsigned long'
| `-FieldDecl 0x5623998e7280 <line:149:5, col:11> col:11 p_align 'qword':'unsigned long'
|-CXXRecordDecl 0x5623998e72e8 <line:152:9, col:16> col:16 struct Elf64_Dyn
|-TypedefDecl 0x5623998e73f8 <col:1, col:26> col:26 Elf64_Dyn 'struct Elf64_Dyn':'Elf64_Dyn'
| `-ElaboratedType 0x5623998e73a0 'struct Elf64_Dyn' sugar
|   `-RecordType 0x5623998e7380 'Elf64_Dyn'
|     `-CXXRecord 0x5623998e7590 'Elf64_Dyn'
|-TypedefDecl 0x5623998e74e8 <col:1, col:38> col:38 PElf64_Dyn 'struct Elf64_Dyn *'
| `-PointerType 0x5623998e7490 'struct Elf64_Dyn *'
|   `-ElaboratedType 0x5623998e73a0 'struct Elf64_Dyn' sugar
|     `-RecordType 0x5623998e7380 'Elf64_Dyn'
|       `-CXXRecord 0x5623998e7590 'Elf64_Dyn'
|-CXXRecordDecl 0x5623998e7590 prev 0x5623998e72e8 <line:154:1, line:157:1> line:154:8 struct Elf64_Dyn definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998e7688 <col:1, col:8> col:8 implicit struct Elf64_Dyn
| |-FieldDecl 0x5623998e77a0 <line:155:5, col:23> col:23 d_tag 'enum Elf64_DynTag':'Elf64_DynTag'
| `-FieldDecl 0x5623998e7800 <line:156:5, col:11> col:11 d_val 'qword':'unsigned long'
|-CXXRecordDecl 0x5623998e7868 <line:159:9, col:16> col:16 struct Elf64_Shdr
|-TypedefDecl 0x5623998e7978 <col:1, col:27> col:27 Elf64_Shdr 'struct Elf64_Shdr':'Elf64_Shdr'
| `-ElaboratedType 0x5623998e7920 'struct Elf64_Shdr' sugar
|   `-RecordType 0x5623998e7900 'Elf64_Shdr'
|     `-CXXRecord 0x5623998ec420 'Elf64_Shdr'
|-TypedefDecl 0x5623998e7a68 <col:1, col:40> col:40 PElf64_Shdr 'struct Elf64_Shdr *'
| `-PointerType 0x5623998e7a10 'struct Elf64_Shdr *'
|   `-ElaboratedType 0x5623998e7920 'struct Elf64_Shdr' sugar
|     `-RecordType 0x5623998e7900 'Elf64_Shdr'
|       `-CXXRecord 0x5623998ec420 'Elf64_Shdr'
|-EnumDecl 0x5623998e7ae0 <line:161:9, line:191:1> line:161:14 Elf_SectionHeaderType
| |-EnumConstantDecl 0x5623998e7be0 <line:162:5, col:14> col:5 SHT_NULL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998e8cf8 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7bc0 <col:14> 'int'
| |     |-value: Int 0
| |     `-IntegerLiteral 0x5623998e7ba0 <col:14> 'int' 0
| |-EnumConstantDecl 0x5623998e7c78 <line:163:5, col:18> col:5 SHT_PROGBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998e8d10 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7c58 <col:18> 'int'
| |     |-value: Int 1
| |     `-IntegerLiteral 0x5623998e7c38 <col:18> 'int' 1
| |-EnumConstantDecl 0x5623998e7d30 <line:164:5, col:16> col:5 SHT_SYMTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec080 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7cf0 <col:16> 'int'
| |     |-value: Int 2
| |     `-IntegerLiteral 0x5623998e7cd0 <col:16> 'int' 2
| |-EnumConstantDecl 0x5623998e7dc8 <line:165:5, col:16> col:5 SHT_STRTAB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec098 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7da8 <col:16> 'int'
| |     |-value: Int 3
| |     `-IntegerLiteral 0x5623998e7d88 <col:16> 'int' 3
| |-EnumConstantDecl 0x5623998e7e60 <line:166:5, col:14> col:5 SHT_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec0b0 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7e40 <col:14> 'int'
| |     |-value: Int 4
| |     `-IntegerLiteral 0x5623998e7e20 <col:14> 'int' 4
| |-EnumConstantDecl 0x5623998e7ef8 <line:167:5, col:14> col:5 SHT_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec0c8 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7ed8 <col:14> 'int'
| |     |-value: Int 5
| |     `-IntegerLiteral 0x5623998e7eb8 <col:14> 'int' 5
| |-EnumConstantDecl 0x5623998e7f90 <line:168:5, col:17> col:5 SHT_DYNAMIC 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec0e0 <col:17> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e7f70 <col:17> 'int'
| |     |-value: Int 6
| |     `-IntegerLiteral 0x5623998e7f50 <col:17> 'int' 6
| |-EnumConstantDecl 0x5623998e8028 <line:169:5, col:14> col:5 SHT_NOTE 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec0f8 <col:14> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8008 <col:14> 'int'
| |     |-value: Int 7
| |     `-IntegerLiteral 0x5623998e7fe8 <col:14> 'int' 7
| |-EnumConstantDecl 0x5623998e80c0 <line:170:5, col:16> col:5 SHT_NOBITS 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec110 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e80a0 <col:16> 'int'
| |     |-value: Int 8
| |     `-IntegerLiteral 0x5623998e8080 <col:16> 'int' 8
| |-EnumConstantDecl 0x5623998e8158 <line:171:5, col:13> col:5 SHT_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec128 <col:13> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8138 <col:13> 'int'
| |     |-value: Int 9
| |     `-IntegerLiteral 0x5623998e8118 <col:13> 'int' 9
| |-EnumConstantDecl 0x5623998e81f0 <line:172:5, col:15> col:5 SHT_SHLIB 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec140 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e81d0 <col:15> 'int'
| |     |-value: Int 10
| |     `-IntegerLiteral 0x5623998e81b0 <col:15> 'int' 10
| |-EnumConstantDecl 0x5623998e8288 <line:173:5, col:16> col:5 SHT_DYNSYM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec158 <col:16> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8268 <col:16> 'int'
| |     |-value: Int 11
| |     `-IntegerLiteral 0x5623998e8248 <col:16> 'int' 11
| |-EnumConstantDecl 0x5623998e8320 <line:174:5, col:20> col:5 SHT_INIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec170 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8300 <col:20> 'int'
| |     |-value: Int 14
| |     `-IntegerLiteral 0x5623998e82e0 <col:20> 'int' 14
| |-EnumConstantDecl 0x5623998e83b8 <line:175:5, col:20> col:5 SHT_FINI_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec188 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8398 <col:20> 'int'
| |     |-value: Int 15
| |     `-IntegerLiteral 0x5623998e8378 <col:20> 'int' 15
| |-EnumConstantDecl 0x5623998e8450 <line:176:5, col:23> col:5 SHT_PREINIT_ARRAY 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec1a0 <col:23> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8430 <col:23> 'int'
| |     |-value: Int 16
| |     `-IntegerLiteral 0x5623998e8410 <col:23> 'int' 16
| |-EnumConstantDecl 0x5623998e84e8 <line:177:5, col:15> col:5 SHT_GROUP 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec1b8 <col:15> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e84c8 <col:15> 'int'
| |     |-value: Int 17
| |     `-IntegerLiteral 0x5623998e84a8 <col:15> 'int' 17
| |-EnumConstantDecl 0x5623998e8580 <line:178:5, col:22> col:5 SHT_SYMTAB_SHNDX 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec1d0 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8560 <col:22> 'int'
| |     |-value: Int 18
| |     `-IntegerLiteral 0x5623998e8540 <col:22> 'int' 18
| |-EnumConstantDecl 0x5623998e8618 <line:179:5, col:21> col:5 SHT_ANDROID_REL 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec1e8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e85f8 <col:21> 'int'
| |     |-value: Int 1610612737
| |     `-IntegerLiteral 0x5623998e85d8 <col:21> 'int' 1610612737
| |-EnumConstantDecl 0x5623998e86b0 <line:180:5, col:22> col:5 SHT_ANDROID_RELA 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec200 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8690 <col:22> 'int'
| |     |-value: Int 1610612738
| |     `-IntegerLiteral 0x5623998e8670 <col:22> 'int' 1610612738
| |-EnumConstantDecl 0x5623998e8748 <line:181:5, col:24> col:5 SHT_GNU_ATTRIBUTES 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec218 <col:24> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8728 <col:24> 'int'
| |     |-value: Int 1879048181
| |     `-IntegerLiteral 0x5623998e8708 <col:24> 'int' 1879048181
| |-EnumConstantDecl 0x5623998e87e0 <line:182:5, col:18> col:5 SHT_GNU_HASH 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec230 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e87c0 <col:18> 'int'
| |     |-value: Int 1879048182
| |     `-IntegerLiteral 0x5623998e87a0 <col:18> 'int' 1879048182
| |-EnumConstantDecl 0x5623998e8878 <line:183:5, col:21> col:5 SHT_GNU_LIBLIST 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec248 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8858 <col:21> 'int'
| |     |-value: Int 1879048183
| |     `-IntegerLiteral 0x5623998e8838 <col:21> 'int' 1879048183
| |-EnumConstantDecl 0x5623998e8910 <line:184:5, col:18> col:5 SHT_CHECKSUM 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec260 <col:18> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e88f0 <col:18> 'int'
| |     |-value: Int 1879048184
| |     `-IntegerLiteral 0x5623998e88d0 <col:18> 'int' 1879048184
| |-EnumConstantDecl 0x5623998e89a8 <line:185:5, col:19> col:5 SHT_SUNW_move 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec278 <col:19> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8988 <col:19> 'int'
| |     |-value: Int 1879048186
| |     `-IntegerLiteral 0x5623998e8968 <col:19> 'int' 1879048186
| |-EnumConstantDecl 0x5623998e8a40 <line:186:5, col:21> col:5 SHT_SUNW_COMDAT 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec290 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8a20 <col:21> 'int'
| |     |-value: Int 1879048187
| |     `-IntegerLiteral 0x5623998e8a00 <col:21> 'int' 1879048187
| |-EnumConstantDecl 0x5623998e8ad8 <line:187:5, col:22> col:5 SHT_SUNW_syminfo 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec2a8 <col:22> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8ab8 <col:22> 'int'
| |     |-value: Int 1879048188
| |     `-IntegerLiteral 0x5623998e8a98 <col:22> 'int' 1879048188
| |-EnumConstantDecl 0x5623998e8b70 <line:188:5, col:20> col:5 SHT_GNU_verdef 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec2c0 <col:20> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8b50 <col:20> 'int'
| |     |-value: Int 1879048189
| |     `-IntegerLiteral 0x5623998e8b30 <col:20> 'int' 1879048189
| |-EnumConstantDecl 0x5623998e8c08 <line:189:5, col:21> col:5 SHT_GNU_verneed 'Elf_SectionHeaderType'
| | `-ImplicitCastExpr 0x5623998ec2d8 <col:21> 'unsigned int' <IntegralCast>
| |   `-ConstantExpr 0x5623998e8be8 <col:21> 'int'
| |     |-value: Int 1879048190
| |     `-IntegerLiteral 0x5623998e8bc8 <col:21> 'int' 1879048190
| `-EnumConstantDecl 0x5623998e8ca0 <line:190:5, col:20> col:5 SHT_GNU_versym 'Elf_SectionHeaderType'
|   `-ImplicitCastExpr 0x5623998ec2f0 <col:20> 'unsigned int' <IntegralCast>
|     `-ConstantExpr 0x5623998e8c80 <col:20> 'int'
|       |-value: Int 1879048191
|       `-IntegerLiteral 0x5623998e8c60 <col:20> 'int' 1879048191
|-TypedefDecl 0x5623998ec368 <line:161:1, line:191:3> col:3 Elf_SectionHeaderType 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| `-ElaboratedType 0x5623998ec310 'enum Elf_SectionHeaderType' sugar
|   `-EnumType 0x5623998e7b80 'Elf_SectionHeaderType'
|     `-Enum 0x5623998e7ae0 'Elf_SectionHeaderType'
|-CXXRecordDecl 0x5623998ec420 prev 0x5623998e7868 <line:193:1, line:204:1> line:193:8 struct Elf64_Shdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998ec518 <col:1, col:8> col:8 implicit struct Elf64_Shdr
| |-FieldDecl 0x5623998ec5b8 <line:194:5, col:11> col:11 sh_name 'dword':'unsigned int'
| |-FieldDecl 0x5623998ec690 <line:195:5, col:32> col:32 sh_type 'enum Elf_SectionHeaderType':'Elf_SectionHeaderType'
| |-FieldDecl 0x5623998ec6f0 <line:196:5, col:11> col:11 sh_flags 'qword':'unsigned long'
| |-FieldDecl 0x5623998ec750 <line:197:5, col:11> col:11 sh_addr 'qword':'unsigned long'
| |-FieldDecl 0x5623998ec7b0 <line:198:5, col:11> col:11 sh_offset 'qword':'unsigned long'
| |-FieldDecl 0x5623998ec810 <line:199:5, col:11> col:11 sh_size 'qword':'unsigned long'
| |-FieldDecl 0x5623998ec870 <line:200:5, col:11> col:11 sh_link 'dword':'unsigned int'
| |-FieldDecl 0x5623998ec8d0 <line:201:5, col:11> col:11 sh_info 'dword':'unsigned int'
| |-FieldDecl 0x5623998ec930 <line:202:5, col:11> col:11 sh_addralign 'qword':'unsigned long'
| `-FieldDecl 0x5623998ec990 <line:203:5, col:11> col:11 sh_entsize 'qword':'unsigned long'
|-CXXRecordDecl 0x5623998ec9f8 <line:206:9, col:16> col:16 struct NoteAbiTag
|-TypedefDecl 0x5623998ecb08 <col:1, col:27> col:27 NoteAbiTag 'struct NoteAbiTag':'NoteAbiTag'
| `-ElaboratedType 0x5623998ecab0 'struct NoteAbiTag' sugar
|   `-RecordType 0x5623998eca90 'NoteAbiTag'
|     `-CXXRecord 0x5623998ecca0 'NoteAbiTag'
|-TypedefDecl 0x5623998ecbf8 <col:1, col:40> col:40 PNoteAbiTag 'struct NoteAbiTag *'
| `-PointerType 0x5623998ecba0 'struct NoteAbiTag *'
|   `-ElaboratedType 0x5623998ecab0 'struct NoteAbiTag' sugar
|     `-RecordType 0x5623998eca90 'NoteAbiTag'
|       `-CXXRecord 0x5623998ecca0 'NoteAbiTag'
|-CXXRecordDecl 0x5623998ecca0 prev 0x5623998ec9f8 <line:208:1, line:215:1> line:208:8 struct NoteAbiTag definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998ecd98 <col:1, col:8> col:8 implicit struct NoteAbiTag
| |-FieldDecl 0x5623998ece38 <line:209:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ece98 <line:210:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ecef8 <line:211:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x5623998ecfe0 <line:212:5, col:16> col:10 name 'char[4]'
| |-FieldDecl 0x5623998edca0 <line:213:5, col:11> col:11 abiType 'dword':'unsigned int'
| `-FieldDecl 0x5623998eddb0 <line:214:5, col:34> col:11 requiredKernelVersion 'dword[3]'
|-CXXRecordDecl 0x5623998ede18 <line:217:9, col:16> col:16 struct Elf64_Rela
|-TypedefDecl 0x5623998edf28 <col:1, col:27> col:27 Elf64_Rela 'struct Elf64_Rela':'Elf64_Rela'
| `-ElaboratedType 0x5623998eded0 'struct Elf64_Rela' sugar
|   `-RecordType 0x5623998edeb0 'Elf64_Rela'
|     `-CXXRecord 0x5623998ee0c0 'Elf64_Rela'
|-TypedefDecl 0x5623998ee018 <col:1, col:40> col:40 PElf64_Rela 'struct Elf64_Rela *'
| `-PointerType 0x5623998edfc0 'struct Elf64_Rela *'
|   `-ElaboratedType 0x5623998eded0 'struct Elf64_Rela' sugar
|     `-RecordType 0x5623998edeb0 'Elf64_Rela'
|       `-CXXRecord 0x5623998ee0c0 'Elf64_Rela'
|-CXXRecordDecl 0x5623998ee0c0 prev 0x5623998ede18 <line:219:1, line:223:1> line:219:8 struct Elf64_Rela definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998ee1b8 <col:1, col:8> col:8 implicit struct Elf64_Rela
| |-FieldDecl 0x5623998ee258 <line:220:5, col:11> col:11 r_offset 'qword':'unsigned long'
| |-FieldDecl 0x5623998ee2b8 <line:221:5, col:11> col:11 r_info 'qword':'unsigned long'
| `-FieldDecl 0x5623998ee318 <line:222:5, col:11> col:11 r_addend 'qword':'unsigned long'
|-CXXRecordDecl 0x5623998ee380 <line:225:9, col:16> col:16 struct GnuBuildId
|-TypedefDecl 0x5623998ee488 <col:1, col:27> col:27 GnuBuildId 'struct GnuBuildId':'GnuBuildId'
| `-ElaboratedType 0x5623998ee430 'struct GnuBuildId' sugar
|   `-RecordType 0x5623998ee410 'GnuBuildId'
|     `-CXXRecord 0x5623998ee620 'GnuBuildId'
|-TypedefDecl 0x5623998ee578 <col:1, col:40> col:40 PGnuBuildId 'struct GnuBuildId *'
| `-PointerType 0x5623998ee520 'struct GnuBuildId *'
|   `-ElaboratedType 0x5623998ee430 'struct GnuBuildId' sugar
|     `-RecordType 0x5623998ee410 'GnuBuildId'
|       `-CXXRecord 0x5623998ee620 'GnuBuildId'
|-CXXRecordDecl 0x5623998ee620 prev 0x5623998ee380 <line:227:1, line:233:1> line:227:8 struct GnuBuildId definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998ee718 <col:1, col:8> col:8 implicit struct GnuBuildId
| |-FieldDecl 0x5623998ee7b8 <line:228:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ee818 <line:229:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ee878 <line:230:5, col:11> col:11 type 'dword':'unsigned int'
| |-FieldDecl 0x5623998ee928 <line:231:5, col:16> col:10 name 'char[4]'
| `-FieldDecl 0x5623998eea40 <line:232:5, col:17> col:10 hash 'byte[20]'
|-CXXRecordDecl 0x5623998eeaa8 <line:235:9, col:16> col:16 struct NoteGnuProperty_4
|-TypedefDecl 0x5623998eebb8 <col:1, col:34> col:34 NoteGnuProperty_4 'struct NoteGnuProperty_4':'NoteGnuProperty_4'
| `-ElaboratedType 0x5623998eeb60 'struct NoteGnuProperty_4' sugar
|   `-RecordType 0x5623998eeb40 'NoteGnuProperty_4'
|     `-CXXRecord 0x5623998ef5a0 'NoteGnuProperty_4'
|-TypedefDecl 0x5623998ef4f8 <col:1, col:54> col:54 PNoteGnuProperty_4 'struct NoteGnuProperty_4 *'
| `-PointerType 0x5623998eec50 'struct NoteGnuProperty_4 *'
|   `-ElaboratedType 0x5623998eeb60 'struct NoteGnuProperty_4' sugar
|     `-RecordType 0x5623998eeb40 'NoteGnuProperty_4'
|       `-CXXRecord 0x5623998ef5a0 'NoteGnuProperty_4'
|-CXXRecordDecl 0x5623998ef5a0 prev 0x5623998eeaa8 <line:237:1, line:242:1> line:237:8 struct NoteGnuProperty_4 definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998ef698 <col:1, col:8> col:8 implicit struct NoteGnuProperty_4
| |-FieldDecl 0x5623998ef738 <line:238:5, col:11> col:11 namesz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ef798 <line:239:5, col:11> col:11 descsz 'dword':'unsigned int'
| |-FieldDecl 0x5623998ef7f8 <line:240:5, col:11> col:11 type 'dword':'unsigned int'
| `-FieldDecl 0x5623998ef8a8 <line:241:5, col:16> col:10 name 'char[4]'
|-CXXRecordDecl 0x5623998ef910 <line:244:9, col:16> col:16 struct Elf64_Ehdr
|-TypedefDecl 0x5623998efa18 <col:1, col:27> col:27 Elf64_Ehdr 'struct Elf64_Ehdr':'Elf64_Ehdr'
| `-ElaboratedType 0x5623998ef9c0 'struct Elf64_Ehdr' sugar
|   `-RecordType 0x5623998ef9a0 'Elf64_Ehdr'
|     `-CXXRecord 0x5623998efbb0 'Elf64_Ehdr'
|-TypedefDecl 0x5623998efb08 <col:1, col:40> col:40 PElf64_Ehdr 'struct Elf64_Ehdr *'
| `-PointerType 0x5623998efab0 'struct Elf64_Ehdr *'
|   `-ElaboratedType 0x5623998ef9c0 'struct Elf64_Ehdr' sugar
|     `-RecordType 0x5623998ef9a0 'Elf64_Ehdr'
|       `-CXXRecord 0x5623998efbb0 'Elf64_Ehdr'
|-CXXRecordDecl 0x5623998efbb0 prev 0x5623998ef910 <line:246:1, line:268:1> line:246:8 struct Elf64_Ehdr definition
| |-DefinitionData pass_in_registers aggregate standard_layout trivially_copyable pod trivial literal
| | |-DefaultConstructor exists trivial needs_implicit
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| |-CXXRecordDecl 0x5623998efca8 <col:1, col:8> col:8 implicit struct Elf64_Ehdr
| |-FieldDecl 0x5623998efd48 <line:247:5, col:10> col:10 e_ident_magic_num 'byte':'unsigned char'
| |-FieldDecl 0x5623998efe30 <line:248:5, col:29> col:10 e_ident_magic_str 'char[3]'
| |-FieldDecl 0x5623998efe90 <line:249:5, col:10> col:10 e_ident_class 'byte':'unsigned char'
| |-FieldDecl 0x5623998efef0 <line:250:5, col:10> col:10 e_ident_data 'byte':'unsigned char'
| |-FieldDecl 0x5623998eff50 <line:251:5, col:10> col:10 e_ident_version 'byte':'unsigned char'
| |-FieldDecl 0x5623998effb0 <line:252:5, col:10> col:10 e_ident_osabi 'byte':'unsigned char'
| |-FieldDecl 0x5623998f0010 <line:253:5, col:10> col:10 e_ident_abiversion 'byte':'unsigned char'
| |-FieldDecl 0x5623998f0120 <line:254:5, col:23> col:10 e_ident_pad 'byte[7]'
| |-FieldDecl 0x5623998f0180 <line:255:5, col:10> col:10 e_type 'word':'unsigned short'
| |-FieldDecl 0x5623998f01e0 <line:256:5, col:10> col:10 e_machine 'word':'unsigned short'
| |-FieldDecl 0x5623998f0240 <line:257:5, col:11> col:11 e_version 'dword':'unsigned int'
| |-FieldDecl 0x5623998f02a0 <line:258:5, col:11> col:11 e_entry 'qword':'unsigned long'
| |-FieldDecl 0x5623998f0300 <line:259:5, col:11> col:11 e_phoff 'qword':'unsigned long'
| |-FieldDecl 0x5623998f0360 <line:260:5, col:11> col:11 e_shoff 'qword':'unsigned long'
| |-FieldDecl 0x5623998f03c0 <line:261:5, col:11> col:11 e_flags 'dword':'unsigned int'
| |-FieldDecl 0x5623998f0420 <line:262:5, col:10> col:10 e_ehsize 'word':'unsigned short'
| |-FieldDecl 0x5623998f0480 <line:263:5, col:10> col:10 e_phentsize 'word':'unsigned short'
| |-FieldDecl 0x5623998f0d10 <line:264:5, col:10> col:10 e_phnum 'word':'unsigned short'
| |-FieldDecl 0x5623998f0d70 <line:265:5, col:10> col:10 e_shentsize 'word':'unsigned short'
| |-FieldDecl 0x5623998f0dd0 <line:266:5, col:10> col:10 e_shnum 'word':'unsigned short'
| `-FieldDecl 0x5623998f0e30 <line:267:5, col:10> col:10 e_shstrndx 'word':'unsigned short'
|-CXXRecordDecl 0x5623998f0e98 <line:270:9, col:16> col:16 struct evp_pkey_ctx_st
|-TypedefDecl 0x5623998f0fa8 <col:1, col:32> col:32 evp_pkey_ctx_st 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x5623998f0f50 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x5623998f0f30 'evp_pkey_ctx_st'
|     `-CXXRecord 0x5623998f1140 'evp_pkey_ctx_st'
|-TypedefDecl 0x5623998f1098 <col:1, col:50> col:50 Pevp_pkey_ctx_st 'struct evp_pkey_ctx_st *'
| `-PointerType 0x5623998f1040 'struct evp_pkey_ctx_st *'
|   `-ElaboratedType 0x5623998f0f50 'struct evp_pkey_ctx_st' sugar
|     `-RecordType 0x5623998f0f30 'evp_pkey_ctx_st'
|       `-CXXRecord 0x5623998f1140 'evp_pkey_ctx_st'
|-CXXRecordDecl 0x5623998f1140 prev 0x5623998f0e98 <line:272:1, line:273:1> line:272:8 struct evp_pkey_ctx_st definition
| |-DefinitionData pass_in_registers empty aggregate standard_layout trivially_copyable pod trivial literal has_constexpr_non_copy_move_ctor can_const_default_init
| | |-DefaultConstructor exists trivial constexpr needs_implicit defaulted_is_constexpr
| | |-CopyConstructor simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveConstructor exists simple trivial needs_implicit
| | |-CopyAssignment simple trivial has_const_param needs_implicit implicit_has_const_param
| | |-MoveAssignment exists simple trivial needs_implicit
| | `-Destructor simple irrelevant trivial needs_implicit
| `-CXXRecordDecl 0x5623998f1238 <col:1, col:8> col:8 implicit struct evp_pkey_ctx_st
|-TypedefDecl 0x5623998f1330 <line:275:1, col:32> col:32 referenced EVP_PKEY_CTX 'struct evp_pkey_ctx_st':'evp_pkey_ctx_st'
| `-ElaboratedType 0x5623998f12e0 'struct evp_pkey_ctx_st' sugar
|   `-RecordType 0x5623998f0f30 'evp_pkey_ctx_st'
|     `-CXXRecord 0x5623998f1140 'evp_pkey_ctx_st'
|-VarDecl 0x5623998f1400 <line:279:1, col:11> col:11 main 'undefined':'unsigned char'
|-VarDecl 0x5623998f1520 <line:280:1, col:12> col:12 completed 'undefined1':'unsigned char'
|-VarDecl 0x5623998f1600 <line:281:1, col:12> col:12 used crc32_context 'undefined4':'unsigned int'
|-VarDecl 0x5623998f1730 <line:282:1, col:16> col:18 used crc32_tab 'undefined1[1024]'
|-FunctionDecl 0x5623998f1958 <line:284:1, line:291:1> line:284:5 _init 'int (EVP_PKEY_CTX *)'
| |-ParmVarDecl 0x5623998f1848 <col:11, col:25> col:25 ctx 'EVP_PKEY_CTX *'
| `-CompoundStmt 0x5623998f1b90 <line:286:1, line:291:1>
|   |-DeclStmt 0x5623998f1a88 <line:287:3, col:12>
|   | `-VarDecl 0x5623998f1a20 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5623998f1b28 <line:289:3, col:26> '<dependent type>' contains-errors '='
|   | |-DeclRefExpr 0x5623998f1aa0 <col:3> 'int' lvalue Var 0x5623998f1a20 'iVar1' 'int'
|   | `-RecoveryExpr 0x5623998f1b00 <col:11, col:26> '<dependent type>' contains-errors lvalue
|   |   `-UnresolvedLookupExpr 0x5623998f1ac0 <col:11> '<overloaded function type>' lvalue (ADL) = '__gmon_start__' empty
|   `-ReturnStmt 0x5623998f1b80 <line:290:3, col:10>
|     `-ImplicitCastExpr 0x5623998f1b68 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5623998f1b48 <col:10> 'int' lvalue Var 0x5623998f1a20 'iVar1' 'int'
|-FunctionDecl 0x5623998f3640 <line:295:1, line:300:1> line:295:6 FUN_00400360 'void ()'
| `-CompoundStmt 0x5623998f3718 <line:297:1, line:300:1>
|   `-ReturnStmt 0x5623998f3708 <line:299:3>
|-FunctionDecl 0x5623998f3820 <line:306:1, line:313:1> line:306:5 referenced printf 'int (char *, ...)'
| |-ParmVarDecl 0x5623998f3748 <col:12, col:18> col:18 used __format 'char *'
| `-CompoundStmt 0x5623998f3b08 <line:308:1, line:313:1>
|   |-DeclStmt 0x5623998f3950 <line:309:3, col:12>
|   | `-VarDecl 0x5623998f38e8 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5623998f3aa0 <line:311:3, col:26> 'int' lvalue '='
|   | |-DeclRefExpr 0x5623998f3968 <col:3> 'int' lvalue Var 0x5623998f38e8 'iVar1' 'int'
|   | `-CallExpr 0x5623998f3a58 <col:11, col:26> 'int'
|   |   |-ImplicitCastExpr 0x5623998f3a40 <col:11> 'int (*)(char *, ...)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x5623998f39f0 <col:11> 'int (char *, ...)' lvalue Function 0x5623998f3820 'printf' 'int (char *, ...)'
|   |   `-ImplicitCastExpr 0x5623998f3a88 <col:18> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x5623998f39d0 <col:18> 'char *' lvalue ParmVar 0x5623998f3748 '__format' 'char *'
|   `-ReturnStmt 0x5623998f3af8 <line:312:3, col:10>
|     `-ImplicitCastExpr 0x5623998f3ae0 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5623998f3ac0 <col:10> 'int' lvalue Var 0x5623998f38e8 'iVar1' 'int'
|-FunctionDecl 0x5623998f3ca8 <line:319:1, line:326:1> line:319:5 used strcmp 'int (char *, char *)'
| |-ParmVarDecl 0x5623998f3b48 <col:12, col:18> col:18 used __s1 'char *'
| |-ParmVarDecl 0x5623998f3bc8 <col:23, col:29> col:29 used __s2 'char *'
| `-CompoundStmt 0x5623998f3fd8 <line:321:1, line:326:1>
|   |-DeclStmt 0x5623998f3de0 <line:322:3, col:12>
|   | `-VarDecl 0x5623998f3d78 <col:3, col:7> col:7 used iVar1 'int'
|   |-BinaryOperator 0x5623998f3f70 <line:324:3, col:27> 'int' lvalue '='
|   | |-DeclRefExpr 0x5623998f3df8 <col:3> 'int' lvalue Var 0x5623998f3d78 'iVar1' 'int'
|   | `-CallExpr 0x5623998f3f08 <col:11, col:27> 'int'
|   |   |-ImplicitCastExpr 0x5623998f3ef0 <col:11> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   | `-DeclRefExpr 0x5623998f3ea0 <col:11> 'int (char *, char *)' lvalue Function 0x5623998f3ca8 'strcmp' 'int (char *, char *)'
|   |   |-ImplicitCastExpr 0x5623998f3f40 <col:18> 'char *' <LValueToRValue>
|   |   | `-DeclRefExpr 0x5623998f3e60 <col:18> 'char *' lvalue ParmVar 0x5623998f3b48 '__s1' 'char *'
|   |   `-ImplicitCastExpr 0x5623998f3f58 <col:23> 'char *' <LValueToRValue>
|   |     `-DeclRefExpr 0x5623998f3e80 <col:23> 'char *' lvalue ParmVar 0x5623998f3bc8 '__s2' 'char *'
|   `-ReturnStmt 0x5623998f3fc8 <line:325:3, col:10>
|     `-ImplicitCastExpr 0x5623998f3fb0 <col:10> 'int' <LValueToRValue>
|       `-DeclRefExpr 0x5623998f3f90 <col:10> 'int' lvalue Var 0x5623998f3d78 'iVar1' 'int'
|-VarDecl 0x5623998f4010 <line:330:1, col:6> col:6 invalid processEntry 'void'
|-FunctionDecl 0x5623998f4110 <line:343:1, line:347:1> line:343:6 _dl_relocate_static_pie 'void ()'
| `-CompoundStmt 0x5623998f41c8 <line:345:1, line:347:1>
|   `-ReturnStmt 0x5623998f41b8 <line:346:3>
|-FunctionDecl 0x5623998f4278 <line:354:1, line:358:1> line:354:6 used deregister_tm_clones 'void ()'
| `-CompoundStmt 0x5623998f4330 <line:356:1, line:358:1>
|   `-ReturnStmt 0x5623998f4320 <line:357:3>
|-FunctionDecl 0x5623998f43e0 <line:365:1, line:369:1> line:365:6 used register_tm_clones 'void ()'
| `-CompoundStmt 0x5623998f4498 <line:367:1, line:369:1>
|   `-ReturnStmt 0x5623998f4488 <line:368:3>
|-FunctionDecl 0x5623998f4548 <line:373:1, line:382:1> line:373:6 __do_global_dtors_aux 'void ()'
| `-CompoundStmt 0x5623998f49c0 <line:375:1, line:382:1>
|   |-IfStmt 0x5623998f4990 <line:376:3, line:380:3>
|   | |-RecoveryExpr 0x5623998f4608 <line:376:7, col:22> 'bool' contains-errors
|   | `-CompoundStmt 0x5623998f4970 <col:28, line:380:3>
|   |   |-CallExpr 0x5623998f4918 <line:377:5, col:26> 'void'
|   |   | `-ImplicitCastExpr 0x5623998f4900 <col:5> 'void (*)()' <FunctionToPointerDecay>
|   |   |   `-DeclRefExpr 0x5623998f48a8 <col:5> 'void ()' lvalue Function 0x5623998f4278 'deregister_tm_clones' 'void ()'
|   |   `-ReturnStmt 0x5623998f4960 <line:379:5>
|   `-ReturnStmt 0x5623998f49b0 <line:381:3>
|-FunctionDecl 0x5623998f4a78 <line:386:1, line:391:1> line:386:6 frame_dummy 'void ()'
| `-CompoundStmt 0x5623998f4bd8 <line:388:1, line:391:1>
|   |-CallExpr 0x5623998f4ba0 <line:389:3, col:22> 'void'
|   | `-ImplicitCastExpr 0x5623998f4b88 <col:3> 'void (*)()' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x5623998f4b68 <col:3> 'void ()' lvalue Function 0x5623998f43e0 'register_tm_clones' 'void ()'
|   `-ReturnStmt 0x5623998f4bc8 <line:390:3>
|-FunctionDecl 0x5623998f4d10 <line:395:1, line:399:1> line:395:12 used codemarker_alpha 'undefined4 (undefined4)'
| |-ParmVarDecl 0x5623998f4c08 <col:29, col:40> col:40 used param_1 'undefined4':'unsigned int'
| `-CompoundStmt 0x5623998f4e08 <line:397:1, line:399:1>
|   `-ReturnStmt 0x5623998f4df8 <line:398:3, col:10>
|     `-ImplicitCastExpr 0x5623998f4de0 <col:10> 'undefined4':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x5623998f4dc0 <col:10> 'undefined4':'unsigned int' lvalue ParmVar 0x5623998f4c08 'param_1' 'undefined4':'unsigned int'
|-FunctionDecl 0x5623998f5030 <line:403:1, line:425:1> line:403:12 invalid main 'undefined8 (int, long)'
| |-ParmVarDecl 0x5623998f4e98 <col:17, col:21> col:21 used param_1 'int'
| |-ParmVarDecl 0x5623998f4f18 <col:29, col:34> col:34 used param_2 'long'
| `-CompoundStmt 0x5623998f6e68 <line:405:1, line:425:1>
|   |-DeclStmt 0x5623998f51b0 <line:406:3, col:12>
|   | `-VarDecl 0x5623998f5148 <col:3, col:7> col:7 used iVar1 'int'
|   |-DeclStmt 0x5623998f5240 <line:407:3, col:22>
|   | `-VarDecl 0x5623998f51d8 <col:3, col:14> col:14 used local_1c 'undefined4':'unsigned int'
|   |-CallExpr 0x5623998f5358 <line:409:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5623998f5340 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5623998f52c0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5623998f4d10 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5623998f5388 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5623998f52a0 <col:20> 'int' 0
|   |-BinaryOperator 0x5623998f53f8 <line:410:3, col:14> 'undefined4':'unsigned int' lvalue '='
|   | |-DeclRefExpr 0x5623998f53a0 <col:3> 'undefined4':'unsigned int' lvalue Var 0x5623998f51d8 'local_1c' 'undefined4':'unsigned int'
|   | `-ImplicitCastExpr 0x5623998f53e0 <col:14> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5623998f53c0 <col:14> 'int' 0
|   |-CallExpr 0x5623998f54b8 <line:411:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5623998f54a0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5623998f5480 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5623998f4d10 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5623998f54e8 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5623998f5460 <col:20> 'int' 1
|   |-IfStmt 0x5623998f69e8 <line:412:3, line:417:3>
|   | |-BinaryOperator 0x5623998f5558 <line:412:7, col:18> 'bool' '=='
|   | | |-ImplicitCastExpr 0x5623998f5540 <col:7> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x5623998f5500 <col:7> 'int' lvalue ParmVar 0x5623998f4e98 'param_1' 'int'
|   | | `-IntegerLiteral 0x5623998f5520 <col:18> 'int' 2
|   | `-CompoundStmt 0x5623998f69c8 <col:21, line:417:3>
|   |   |-BinaryOperator 0x5623998f6880 <line:413:5, col:47> 'int' lvalue '='
|   |   | |-DeclRefExpr 0x5623998f5578 <col:5> 'int' lvalue Var 0x5623998f5148 'iVar1' 'int'
|   |   | `-CallExpr 0x5623998f57c8 <col:13, col:47> 'int'
|   |   |   |-ImplicitCastExpr 0x5623998f57b0 <col:13> 'int (*)(char *, char *)' <FunctionToPointerDecay>
|   |   |   | `-DeclRefExpr 0x5623998f5790 <col:13> 'int (char *, char *)' lvalue Function 0x5623998f3ca8 'strcmp' 'int (char *, char *)'
|   |   |   |-ImplicitCastExpr 0x5623998f5800 <col:20, col:42> 'char *' <LValueToRValue>
|   |   |   | `-UnaryOperator 0x5623998f56f0 <col:20, col:42> 'char *' lvalue prefix '*' cannot overflow
|   |   |   |   `-CStyleCastExpr 0x5623998f56c8 <col:21, col:42> 'char **' <IntegralToPointer>
|   |   |   |     `-ParenExpr 0x5623998f56a8 <col:30, col:42> 'long'
|   |   |   |       `-BinaryOperator 0x5623998f5650 <col:31, col:41> 'long' '+'
|   |   |   |         |-ImplicitCastExpr 0x5623998f5620 <col:31> 'long' <LValueToRValue>
|   |   |   |         | `-DeclRefExpr 0x5623998f55e0 <col:31> 'long' lvalue ParmVar 0x5623998f4f18 'param_2' 'long'
|   |   |   |         `-ImplicitCastExpr 0x5623998f5638 <col:41> 'long' <IntegralCast>
|   |   |   |           `-IntegerLiteral 0x5623998f5600 <col:41> 'int' 8
|   |   |   `-ImplicitCastExpr 0x5623998f5830 <col:44> 'char *' <NoOp>
|   |   |     `-ImplicitCastExpr 0x5623998f5818 <col:44> 'const char *' <ArrayToPointerDecay>
|   |   |       `-StringLiteral 0x5623998f5770 <col:44> 'const char[2]' lvalue "1"
|   |   `-IfStmt 0x5623998f69a8 <line:414:5, line:416:5>
|   |     |-BinaryOperator 0x5623998f68f8 <line:414:9, col:18> 'bool' '=='
|   |     | |-ImplicitCastExpr 0x5623998f68e0 <col:9> 'int' <LValueToRValue>
|   |     | | `-DeclRefExpr 0x5623998f68a0 <col:9> 'int' lvalue Var 0x5623998f5148 'iVar1' 'int'
|   |     | `-IntegerLiteral 0x5623998f68c0 <col:18> 'int' 0
|   |     `-CompoundStmt 0x5623998f6990 <col:21, line:416:5>
|   |       `-BinaryOperator 0x5623998f6970 <line:415:7, col:18> 'undefined4':'unsigned int' lvalue '='
|   |         |-DeclRefExpr 0x5623998f6918 <col:7> 'undefined4':'unsigned int' lvalue Var 0x5623998f51d8 'local_1c' 'undefined4':'unsigned int'
|   |         `-ImplicitCastExpr 0x5623998f6958 <col:18> 'undefined4':'unsigned int' <IntegralCast>
|   |           `-IntegerLiteral 0x5623998f6938 <col:18> 'int' 1
|   |-CallExpr 0x5623998f6aa8 <line:418:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5623998f6a90 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5623998f6a70 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5623998f4d10 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5623998f6ad8 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5623998f6a50 <col:20> 'int' 2
|   |-RecoveryExpr 0x5623998f6b30 <line:419:3, col:23> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5623998f6af0 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_begin' empty
|   |-CallExpr 0x5623998f6bf8 <line:420:3, col:21> 'undefined4':'unsigned int'
|   | |-ImplicitCastExpr 0x5623998f6be0 <col:3> 'undefined4 (*)(undefined4)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x5623998f6bc0 <col:3> 'undefined4 (undefined4)' lvalue Function 0x5623998f4d10 'codemarker_alpha' 'undefined4 (undefined4)'
|   | `-ImplicitCastExpr 0x5623998f6c28 <col:20> 'undefined4':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x5623998f6ba0 <col:20> 'int' 3
|   |-RecoveryExpr 0x5623998f6c80 <line:421:3, col:16> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5623998f6c40 <col:3> '<overloaded function type>' lvalue (ADL) = 'crc32_gentab' empty
|   |-RecoveryExpr 0x5623998f6ce8 <line:422:3, col:10> '<dependent type>' contains-errors lvalue
|   | `-UnresolvedLookupExpr 0x5623998f6ca8 <col:3> '<overloaded function type>' lvalue (ADL) = 'func_1' empty
|   |-RecoveryExpr 0x5623998f6de8 <line:423:3, col:56> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5623998f6d10 <col:3> '<overloaded function type>' lvalue (ADL) = 'platform_main_end' empty
|   | |-BinaryOperator 0x5623998f6da8 <col:21, col:37> 'unsigned int' '^'
|   | | |-ImplicitCastExpr 0x5623998f6d90 <col:21> 'undefined4':'unsigned int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x5623998f6d50 <col:21> 'undefined4':'unsigned int' lvalue Var 0x5623998f1600 'crc32_context' 'undefined4':'unsigned int'
|   | | `-IntegerLiteral 0x5623998f6d70 <col:37> 'unsigned int' 4294967295
|   | `-DeclRefExpr 0x5623998f6dc8 <col:48> 'undefined4':'unsigned int' lvalue Var 0x5623998f51d8 'local_1c' 'undefined4':'unsigned int'
|   `-ReturnStmt 0x5623998f6e58 <line:424:3, col:10>
|     `-ImplicitCastExpr 0x5623998f6e40 <col:10> 'undefined8':'unsigned long' <IntegralCast>
|       `-IntegerLiteral 0x5623998f6e20 <col:10> 'int' 0
|-FunctionDecl 0x5623998f6f78 <line:429:1, line:433:1> line:429:6 platform_main_begin 'void ()'
| `-CompoundStmt 0x5623998f7030 <line:431:1, line:433:1>
|   `-ReturnStmt 0x5623998f7020 <line:432:3>
|-FunctionDecl 0x5623998f70e0 <line:437:1, line:457:1> line:437:6 crc32_gentab 'void ()'
| `-CompoundStmt 0x5623998f9160 <line:439:1, line:457:1>
|   |-DeclStmt 0x5623998f7208 <line:440:3, col:15>
|   | `-VarDecl 0x5623998f71a0 <col:3, col:7> col:7 used local_18 'int'
|   |-DeclStmt 0x5623998f72b0 <line:441:3, col:16>
|   | `-VarDecl 0x5623998f7248 <col:3, col:8> col:8 referenced invalid local_14 'int'
|   |-DeclStmt 0x5623998f7358 <line:442:3, col:15>
|   | `-VarDecl 0x5623998f72f0 <col:3, col:8> col:8 referenced invalid local_c 'int'
|   |-ForStmt 0x5623998f9118 <line:444:3, line:455:3>
|   | |-BinaryOperator 0x5623998f73d8 <line:444:8, col:19> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5623998f7390 <col:8> '<dependent type>' contains-errors lvalue
|   | | | `-DeclRefExpr 0x5623998f7370 <col:8> 'int' lvalue Var 0x5623998f7248 'local_14' 'int'
|   | | `-IntegerLiteral 0x5623998f73b8 <col:19> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x5623998f7478 <col:22, col:38> 'bool' contains-errors '<'
|   | | |-CStyleCastExpr 0x5623998f7430 <col:22, col:27> 'int' contains-errors <Dependent>
|   | | | `-RecoveryExpr 0x5623998f73f8 <col:27> '<dependent type>' contains-errors lvalue
|   | | `-IntegerLiteral 0x5623998f7458 <col:38> 'int' 256
|   | |-BinaryOperator 0x5623998f7518 <col:45, col:67> '<dependent type>' contains-errors '='
|   | | |-RecoveryExpr 0x5623998f7498 <col:45> '<dependent type>' contains-errors lvalue
|   | | `-BinaryOperator 0x5623998f74f8 <col:56, col:67> '<dependent type>' contains-errors '+'
|   | |   |-RecoveryExpr 0x5623998f74b8 <col:56> '<dependent type>' contains-errors lvalue
|   | |   `-IntegerLiteral 0x5623998f74d8 <col:67> 'int' 1
|   | `-CompoundStmt 0x5623998f90f8 <col:70, line:455:3>
|   |   |-BinaryOperator 0x5623998f75a0 <line:445:5, col:15> '<dependent type>' contains-errors '='
|   |   | |-RecoveryExpr 0x5623998f7558 <col:5> '<dependent type>' contains-errors lvalue
|   |   | | `-DeclRefExpr 0x5623998f7538 <col:5> 'int' lvalue Var 0x5623998f72f0 'local_c' 'int'
|   |   | `-RecoveryExpr 0x5623998f7580 <col:15> '<dependent type>' contains-errors lvalue
|   |   `-ForStmt 0x5623998f8ee8 <line:446:5, line:453:5>
|   |     |-BinaryOperator 0x5623998f7600 <line:446:10, col:21> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x5623998f75c0 <col:10> 'int' lvalue Var 0x5623998f71a0 'local_18' 'int'
|   |     | `-IntegerLiteral 0x5623998f75e0 <col:21> 'int' 8
|   |     |-<<<NULL>>>
|   |     |-BinaryOperator 0x5623998f7678 <col:24, col:28> 'bool' '<'
|   |     | |-IntegerLiteral 0x5623998f7620 <col:24> 'int' 0
|   |     | `-ImplicitCastExpr 0x5623998f7660 <col:28> 'int' <LValueToRValue>
|   |     |   `-DeclRefExpr 0x5623998f7640 <col:28> 'int' lvalue Var 0x5623998f71a0 'local_18' 'int'
|   |     |-BinaryOperator 0x5623998f7748 <col:38, col:61> 'int' lvalue '='
|   |     | |-DeclRefExpr 0x5623998f7698 <col:38> 'int' lvalue Var 0x5623998f71a0 'local_18' 'int'
|   |     | `-BinaryOperator 0x5623998f7728 <col:49, col:61> 'int' '+'
|   |     |   |-ImplicitCastExpr 0x5623998f7710 <col:49> 'int' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x5623998f76b8 <col:49> 'int' lvalue Var 0x5623998f71a0 'local_18' 'int'
|   |     |   `-UnaryOperator 0x5623998f76f8 <col:60, col:61> 'int' prefix '-'
|   |     |     `-IntegerLiteral 0x5623998f76d8 <col:61> 'int' 1
|   |     `-CompoundStmt 0x5623998f8ed0 <col:64, line:453:5>
|   |       `-IfStmt 0x5623998f8ea0 <line:447:7, line:452:7> has_else
|   |         |-BinaryOperator 0x5623998f7830 <line:447:11, col:28> '<dependent type>' contains-errors '=='
|   |         | |-ParenExpr 0x5623998f77f0 <col:11, col:23> '<dependent type>' contains-errors
|   |         | | `-BinaryOperator 0x5623998f77d0 <col:12, col:22> '<dependent type>' contains-errors '&'
|   |         | |   |-RecoveryExpr 0x5623998f7788 <col:12> '<dependent type>' contains-errors lvalue
|   |         | |   | `-DeclRefExpr 0x5623998f7768 <col:12> 'int' lvalue Var 0x5623998f72f0 'local_c' 'int'
|   |         | |   `-IntegerLiteral 0x5623998f77b0 <col:22> 'int' 1
|   |         | `-IntegerLiteral 0x5623998f7810 <col:28> 'int' 0
|   |         |-CompoundStmt 0x5623998f8d68 <col:31, line:449:7>
|   |         | `-BinaryOperator 0x5623998f8d48 <line:448:9, col:30> '<dependent type>' contains-errors '='
|   |         |   |-RecoveryExpr 0x5623998f8cc0 <col:9> '<dependent type>' contains-errors lvalue
|   |         |   | `-DeclRefExpr 0x5623998f7850 <col:9> 'int' lvalue Var 0x5623998f72f0 'local_c' 'int'
|   |         |   `-BinaryOperator 0x5623998f8d28 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |         |     |-RecoveryExpr 0x5623998f8ce8 <col:19> '<dependent type>' contains-errors lvalue
|   |         |     `-IntegerLiteral 0x5623998f8d08 <col:30> 'int' 1
|   |         `-CompoundStmt 0x5623998f8e88 <line:450:12, line:452:7>
|   |           `-BinaryOperator 0x5623998f8e68 <line:451:9, col:34> '<dependent type>' contains-errors '='
|   |             |-RecoveryExpr 0x5623998f8da0 <col:9> '<dependent type>' contains-errors lvalue
|   |             | `-DeclRefExpr 0x5623998f8d80 <col:9> 'int' lvalue Var 0x5623998f72f0 'local_c' 'int'
|   |             `-BinaryOperator 0x5623998f8e48 <col:19, col:34> '<dependent type>' contains-errors '^'
|   |               |-BinaryOperator 0x5623998f8e08 <col:19, col:30> '<dependent type>' contains-errors '>>'
|   |               | |-RecoveryExpr 0x5623998f8dc8 <col:19> '<dependent type>' contains-errors lvalue
|   |               | `-IntegerLiteral 0x5623998f8de8 <col:30> 'int' 1
|   |               `-IntegerLiteral 0x5623998f8e28 <col:34> 'unsigned int' 3988292384
|   `-ReturnStmt 0x5623998f9150 <line:456:3>
|-FunctionDecl 0x5623998f9290 <line:461:1, line:465:1> line:461:12 func_1 'undefined8 ()'
| `-CompoundStmt 0x5623998f9380 <line:463:1, line:465:1>
|   `-ReturnStmt 0x5623998f9370 <line:464:3, col:10>
|     `-ImplicitCastExpr 0x5623998f9358 <col:10> 'undefined8':'unsigned long' <IntegralCast>
|       `-IntegerLiteral 0x5623998f9338 <col:10> 'int' 4
|-FunctionDecl 0x5623998f9490 <line:469:1, line:474:1> line:469:6 invalid platform_main_end 'void (int)'
| |-ParmVarDecl 0x5623998f93c0 <col:24, col:29> col:29 invalid param_1 'int'
| `-CompoundStmt 0x5623998f9658 <line:471:1, line:474:1>
|   |-RecoveryExpr 0x5623998f9618 <line:472:3, col:42> '<dependent type>' contains-errors lvalue
|   | |-UnresolvedLookupExpr 0x5623998f9540 <col:3> '<overloaded function type>' lvalue (ADL) = 'printf' 0x5623998f3820
|   | `-StringLiteral 0x5623998f95f0 <col:10> 'const char[15]' lvalue "checksum = %X\n"
|   `-ReturnStmt 0x5623998f9648 <line:473:3>
`-FunctionDecl 0x5623998f9710 <line:478:1, line:482:1> line:478:6 _fini 'void ()'
  `-CompoundStmt 0x5623998f97c8 <line:480:1, line:482:1>
    `-ReturnStmt 0x5623998f97b8 <line:481:3>

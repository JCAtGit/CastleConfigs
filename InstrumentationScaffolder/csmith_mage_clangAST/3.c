TranslationUnitDecl 0x55d3aae99448 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x55d3aae9a020 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x55d3aae99a10 '__int128'
|-TypedefDecl 0x55d3aae9a090 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x55d3aae99a30 'unsigned __int128'
|-TypedefDecl 0x55d3aae9a3a0 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x55d3aae9a170 'struct __NSConstantString_tag'
|   `-Record 0x55d3aae9a0e8 '__NSConstantString_tag'
|-TypedefDecl 0x55d3aae99cc8 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x55d3aae99c80 'char *'
|   `-BuiltinType 0x55d3aae994f0 'char'
|-TypedefDecl 0x55d3aae99fb0 <<invalid sloc>> <invalid sloc> implicit referenced __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x55d3aae99f60 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x55d3aae99da0 'struct __va_list_tag'
|     `-Record 0x55d3aae99d20 '__va_list_tag'
|-FunctionDecl 0x55d3aaf01fd0 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/MarkerDefinition.h:3:1, line:7:1> line:4:13 used codemarker_alpha 'void (int)' static
| |-ParmVarDecl 0x55d3aaf01f00 <col:30, col:34> col:34 used markerID 'int'
| |-CompoundStmt 0x55d3aaf023e0 <col:44, line:7:1>
| | |-DeclStmt 0x55d3aaf02228 <line:5:5, col:34>
| | | `-VarDecl 0x55d3aaf02188 <col:5, col:26> col:18 dummy 'volatile int' cinit
| | |   `-ImplicitCastExpr 0x55d3aaf02210 <col:26> 'int' <LValueToRValue>
| | |     `-DeclRefExpr 0x55d3aaf021f0 <col:26> 'int' lvalue ParmVar 0x55d3aaf01f00 'markerID' 'int'
| | `-GCCAsmStmt 0x55d3aaf02368 <line:6:2, col:49>
| |   `-ImplicitCastExpr 0x55d3aaf02350 <col:29> 'int' <LValueToRValue>
| |     `-DeclRefExpr 0x55d3aaf022e0 <col:29> 'int' lvalue ParmVar 0x55d3aaf01f00 'markerID' 'int'
| |-NoInlineAttr 0x55d3aaf02080 <line:3:16>
| |-UsedAttr 0x55d3aaf020d8 <col:26>
| `-NoThrowAttr 0x55d3aaf02100 <col:32>
|-TypedefDecl 0x55d3aaf02418 </usr/bin/../lib/clang/21/include/__stddef_size_t.h:18:1, col:23> col:23 referenced size_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-FunctionDecl 0x55d3aaf02798 </usr/include/string.h:43:14> col:14 implicit memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf028a0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf02908 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf02970 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf02840 <<invalid sloc>> Implicit 946
| `-NoThrowAttr 0x55d3aaf029f0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf02a18 prev 0x55d3aaf02798 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:43:14 memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf02488 <col:22, col:39> col:39 __dest 'void *restrict'
| |-ParmVarDecl 0x55d3aaf02538 <col:47, col:70> col:70 __src 'const void *restrict'
| |-ParmVarDecl 0x55d3aaf02610 <line:44:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf02b78 <<invalid sloc>> Inherited Implicit 946
| |-NoThrowAttr 0x55d3aaf02ad8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf02b30 <line:555:57, /usr/include/string.h:44:44> 1 2
|-FunctionDecl 0x55d3aaf02de8 <line:47:14> col:14 implicit memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1d0a0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf1d108 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf1d170 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf02e90 <<invalid sloc>> Implicit 948
| `-NoThrowAttr 0x55d3aaf1d1f0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf1d218 prev 0x55d3aaf02de8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:47:14 memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf02bc0 <col:23, col:29> col:29 __dest 'void *'
| |-ParmVarDecl 0x55d3aaf02c40 <col:37, col:49> col:49 __src 'const void *'
| |-ParmVarDecl 0x55d3aaf02cb8 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf1d378 <<invalid sloc>> Inherited Implicit 948
| |-NoThrowAttr 0x55d3aaf1d2d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf1d330 <line:555:57, /usr/include/string.h:48:30> 1 2
|-FunctionDecl 0x55d3aaf1d6c8 <line:54:14> col:14 implicit memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1d7d0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf1d838 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf1d8a0 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55d3aaf1d908 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf1d770 <<invalid sloc>> Implicit 951
|-FunctionDecl 0x55d3aaf1d990 prev 0x55d3aaf1d6c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:54:14 memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1d3c0 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55d3aaf1d440 <col:48, col:71> col:71 __src 'const void *restrict'
| |-ParmVarDecl 0x55d3aaf1d4c0 <line:55:9, col:13> col:13 __c 'int'
| |-ParmVarDecl 0x55d3aaf1d538 <col:18, col:25> col:25 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf1daf8 <<invalid sloc>> Inherited Implicit 951
| |-NoThrowAttr 0x55d3aaf1da58 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf1dab0 <line:555:57, /usr/include/string.h:56:29> 1 2
|-FunctionDecl 0x55d3aaf1dd98 <line:61:14> col:14 implicit memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1dea0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf1df08 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55d3aaf1df70 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf1de40 <<invalid sloc>> Implicit 950
| `-NoThrowAttr 0x55d3aaf1dff0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf1f0d0 prev 0x55d3aaf1dd98 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:61:14 memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1db40 <col:22, col:28> col:28 __s 'void *'
| |-ParmVarDecl 0x55d3aaf1dbc0 <col:33, col:37> col:37 __c 'int'
| |-ParmVarDecl 0x55d3aaf1dc38 <col:42, col:49> col:49 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf1f228 <<invalid sloc>> Inherited Implicit 950
| |-NoThrowAttr 0x55d3aaf1f190 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf1f1e8 <line:555:57, /usr/include/string.h:61:75> 1
|-FunctionDecl 0x55d3aaf1f4e8 <line:64:12> col:12 implicit memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1f5f0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf1f658 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf1f6c0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf1f590 <<invalid sloc>> Implicit 944
|-FunctionDecl 0x55d3aaf1f740 prev 0x55d3aaf1f4e8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:64:12 memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1f270 <col:20, col:32> col:32 __s1 'const void *'
| |-ParmVarDecl 0x55d3aaf1f2f0 <col:38, col:50> col:50 __s2 'const void *'
| |-ParmVarDecl 0x55d3aaf1f368 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf1f8c8 <<invalid sloc>> Inherited Implicit 944
| |-NoThrowAttr 0x55d3aaf1f800 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf1f858 <line:479:45>
| `-NonNullAttr 0x55d3aaf1f880 <line:555:57, /usr/include/string.h:65:49> 1 2
|-FunctionDecl 0x55d3aaf1faf0 <line:80:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:80:12 __memcmpeq 'int (const void *, const void *, size_t)' extern
| |-ParmVarDecl 0x55d3aaf1f910 <col:24, col:36> col:36 __s1 'const void *'
| |-ParmVarDecl 0x55d3aaf1f990 <col:42, col:54> col:54 __s2 'const void *'
| |-ParmVarDecl 0x55d3aaf1fa08 <col:60, col:67> col:67 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf1fbb0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf1fc08 <line:479:45>
| `-NonNullAttr 0x55d3aaf1fc30 <line:555:57, /usr/include/string.h:81:49> 1 2
|-FunctionDecl 0x55d3aaf1fee8 <line:107:14> col:14 implicit memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1fff0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf20058 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55d3aaf200e0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf1ff90 <<invalid sloc>> Implicit 943
| `-NoThrowAttr 0x55d3aaf20160 <col:14> Implicit
|-FunctionDecl 0x55d3aaf20188 prev 0x55d3aaf1fee8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:107:14 memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf1fc90 <col:22, col:34> col:34 __s 'const void *'
| |-ParmVarDecl 0x55d3aaf1fd10 <col:39, col:43> col:43 __c 'int'
| |-ParmVarDecl 0x55d3aaf1fd88 <col:48, col:55> col:55 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf20308 <<invalid sloc>> Inherited Implicit 943
| |-NoThrowAttr 0x55d3aaf20248 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf202a0 <line:479:45>
| `-NonNullAttr 0x55d3aaf202c8 <line:555:57, /usr/include/string.h:108:47> 1
|-FunctionDecl 0x55d3aaf20538 <line:141:14> col:14 implicit strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf20640 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf206a8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf205e0 <<invalid sloc>> Implicit 1238
| `-NoThrowAttr 0x55d3aaf20720 <col:14> Implicit
|-FunctionDecl 0x55d3aaf20748 prev 0x55d3aaf20538 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:141:14 strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf20350 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf203d0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55d3aaf20898 <<invalid sloc>> Inherited Implicit 1238
| |-NoThrowAttr 0x55d3aaf20800 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf20858 <line:555:57, /usr/include/string.h:142:30> 1 2
|-FunctionDecl 0x55d3aaf20b58 <line:144:14> col:14 implicit strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf20c60 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf20cc8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf20d30 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf20c00 <<invalid sloc>> Implicit 1249
| `-NoThrowAttr 0x55d3aaf20db0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf20dd8 prev 0x55d3aaf20b58 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:144:14 strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf208e0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf20960 <line:145:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf209d8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf20f38 <<invalid sloc>> Inherited Implicit 1249
| |-NoThrowAttr 0x55d3aaf20e98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf20ef0 <line:555:57, /usr/include/string.h:146:30> 1 2
|-FunctionDecl 0x55d3aaf210f0 <line:149:14> col:14 implicit strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf211f8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf21260 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf21198 <<invalid sloc>> Implicit 1232
| `-NoThrowAttr 0x55d3aaf212d8 <col:14> Implicit
|-FunctionDecl 0x55d3aaf21300 prev 0x55d3aaf210f0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:149:14 strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf20f80 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf21000 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55d3aaf21458 <<invalid sloc>> Inherited Implicit 1232
| |-NoThrowAttr 0x55d3aaf213b8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf21410 <line:555:57, /usr/include/string.h:150:30> 1 2
|-FunctionDecl 0x55d3aaf21680 <line:152:14> col:14 implicit strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf21788 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf217f0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf21858 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf21728 <<invalid sloc>> Implicit 1245
| `-NoThrowAttr 0x55d3aaf218d8 <col:14> Implicit
|-FunctionDecl 0x55d3aaf21900 prev 0x55d3aaf21680 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:152:14 strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf214a0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf21520 <col:48, col:71> col:71 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf21598 <line:153:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf21a58 <<invalid sloc>> Inherited Implicit 1245
| |-NoThrowAttr 0x55d3aaf219c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf21a18 <line:555:57, /usr/include/string.h:153:45> 1 2
|-FunctionDecl 0x55d3aaf21c48 <line:156:12> col:12 implicit used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf21d50 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf21db8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf21cf0 <<invalid sloc>> Implicit 1236
| `-NoThrowAttr 0x55d3aaf21e30 <col:12> Implicit
|-FunctionDecl 0x55d3aaf21e58 prev 0x55d3aaf21c48 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:156:12 used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf21aa0 <col:20, col:32> col:32 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf21b20 <col:38, col:50> col:50 __s2 'const char *'
| |-BuiltinAttr 0x55d3aaf21fd8 <<invalid sloc>> Inherited Implicit 1236
| |-NoThrowAttr 0x55d3aaf21f10 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf21f68 <line:479:45>
| `-NonNullAttr 0x55d3aaf21f90 <line:555:57, /usr/include/string.h:157:49> 1 2
|-FunctionDecl 0x55d3aaf23008 <line:159:12> col:12 implicit strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf23110 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf23178 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf231e0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf230b0 <<invalid sloc>> Implicit 1247
| `-NoThrowAttr 0x55d3aaf23260 <col:12> Implicit
|-FunctionDecl 0x55d3aaf23288 prev 0x55d3aaf23008 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:159:12 strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf22020 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf22e10 <col:39, col:51> col:51 __s2 'const char *'
| |-ParmVarDecl 0x55d3aaf22e88 <col:57, col:64> col:64 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf23408 <<invalid sloc>> Inherited Implicit 1247
| |-NoThrowAttr 0x55d3aaf23348 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf233a0 <line:479:45>
| `-NonNullAttr 0x55d3aaf233c8 <line:555:57, /usr/include/string.h:160:49> 1 2
|-FunctionDecl 0x55d3aaf235b0 <line:163:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:163:12 strcoll 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf23450 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf234d0 <col:39, col:51> col:51 __s2 'const char *'
| |-NoThrowAttr 0x55d3aaf23668 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf236c0 <line:479:45>
| `-NonNullAttr 0x55d3aaf236e8 <line:555:57, /usr/include/string.h:164:49> 1 2
|-FunctionDecl 0x55d3aaf23990 <line:166:15> col:15 implicit strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf23a98 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf23b00 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf23b68 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf23a38 <<invalid sloc>> Implicit 1279
|-FunctionDecl 0x55d3aaf23be8 prev 0x55d3aaf23990 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:166:15 strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf23740 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf237c0 <line:167:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf23838 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf23d48 <<invalid sloc>> Inherited Implicit 1279
| |-NoThrowAttr 0x55d3aaf23ca8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf23d00 <line:555:57, /usr/include/string.h:168:26> 2
|-RecordDecl 0x55d3aaf23d78 </usr/include/bits/types/__locale_t.h:27:1, line:39:1> line:27:8 struct __locale_struct definition
| |-RecordDecl 0x55d3aaf24520 parent 0x55d3aae99448 <line:30:3, col:10> col:10 struct __locale_data
| |-FieldDecl 0x55d3aaf24748 <col:3, col:37> col:25 __locales 'struct __locale_data *[13]'
| |-FieldDecl 0x55d3aaf247e8 <line:33:3, col:29> col:29 __ctype_b 'const unsigned short *'
| |-FieldDecl 0x55d3aaf24850 <line:34:3, col:14> col:14 __ctype_tolower 'const int *'
| |-FieldDecl 0x55d3aaf248b8 <line:35:3, col:14> col:14 __ctype_toupper 'const int *'
| `-FieldDecl 0x55d3aaf249a8 <line:38:3, col:25> col:15 __names 'const char *[13]'
|-TypedefDecl 0x55d3aaf24ab8 <line:41:1, col:33> col:33 referenced __locale_t 'struct __locale_struct *'
| `-PointerType 0x55d3aaf24a60 'struct __locale_struct *'
|   `-ElaboratedType 0x55d3aaf24a00 'struct __locale_struct' sugar
|     `-RecordType 0x55d3aaf24500 'struct __locale_struct'
|       `-Record 0x55d3aaf23d78 '__locale_struct'
|-TypedefDecl 0x55d3aaf24b80 </usr/include/bits/types/locale_t.h:24:1, col:20> col:20 referenced locale_t '__locale_t':'struct __locale_struct *'
| `-ElaboratedType 0x55d3aaf24b40 '__locale_t' sugar
|   `-TypedefType 0x55d3aaf24b10 '__locale_t' sugar
|     |-Typedef 0x55d3aaf24ab8 '__locale_t'
|     `-PointerType 0x55d3aaf24a60 'struct __locale_struct *'
|       `-ElaboratedType 0x55d3aaf24a00 'struct __locale_struct' sugar
|         `-RecordType 0x55d3aaf24500 'struct __locale_struct'
|           `-Record 0x55d3aaf23d78 '__locale_struct'
|-FunctionDecl 0x55d3aaf24ef8 </usr/include/string.h:175:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:175:12 strcoll_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55d3aaf24bf0 <col:23, col:35> col:35 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf24c70 <col:41, col:53> col:53 __s2 'const char *'
| |-ParmVarDecl 0x55d3aaf24d50 <col:59, col:68> col:68 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55d3aaf24fb8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf25010 <line:479:45>
| `-NonNullAttr 0x55d3aaf25038 <line:555:57, /usr/include/string.h:176:52> 1 2 3
|-FunctionDecl 0x55d3aaf25390 <line:179:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:179:15 strxfrm_l 'size_t (char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55d3aaf25098 <col:26, col:32> col:32 __dest 'char *'
| |-ParmVarDecl 0x55d3aaf25118 <col:40, col:52> col:52 __src 'const char *'
| |-ParmVarDecl 0x55d3aaf25190 <col:59, col:66> col:66 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aaf25208 <line:180:5, col:14> col:14 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55d3aaf25458 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf254b0 <line:555:57, /usr/include/string.h:180:43> 2 4
|-FunctionDecl 0x55d3aaf26628 <line:187:14> col:14 implicit strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55d3aaf26730 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf266d0 <<invalid sloc>> Implicit 1240
| `-NoThrowAttr 0x55d3aaf267a0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf267c8 prev 0x55d3aaf26628 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:187:14 strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55d3aaf26538 <col:22, col:34> col:34 __s 'const char *'
| |-BuiltinAttr 0x55d3aaf26948 <<invalid sloc>> Inherited Implicit 1240
| |-NoThrowAttr 0x55d3aaf26878 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55d3aaf268d0 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55d3aaf26908 <line:555:57, /usr/include/string.h:188:48> 1
|-FunctionDecl 0x55d3aaf26b48 <line:195:14> col:14 implicit strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf26c50 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf26cb8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf26bf0 <<invalid sloc>> Implicit 1272
| `-NoThrowAttr 0x55d3aaf26d30 <col:14> Implicit
|-FunctionDecl 0x55d3aaf26d58 prev 0x55d3aaf26b48 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:195:14 strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf26990 <col:23, col:35> col:35 __string 'const char *'
| |-ParmVarDecl 0x55d3aaf26a08 <col:45, col:52> col:52 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf26ee8 <<invalid sloc>> Inherited Implicit 1272
| |-NoThrowAttr 0x55d3aaf26e10 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55d3aaf26e68 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55d3aaf26ea0 <line:555:57, /usr/include/string.h:196:48> 1
|-FunctionDecl 0x55d3aaf270b8 <line:246:14> col:14 implicit strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf271c0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf27228 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf27160 <<invalid sloc>> Implicit 1234
| `-NoThrowAttr 0x55d3aaf272a0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf272c8 prev 0x55d3aaf270b8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:246:14 strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf26f30 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf26fb0 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55d3aaf27448 <<invalid sloc>> Inherited Implicit 1234
| |-NoThrowAttr 0x55d3aaf27380 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf273d8 <line:479:45>
| `-NonNullAttr 0x55d3aaf27400 <line:555:57, /usr/include/string.h:247:46> 1
|-FunctionDecl 0x55d3aaf275f0 <line:273:14> col:14 implicit strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf276f8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf27760 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf27698 <<invalid sloc>> Implicit 1278
| `-NoThrowAttr 0x55d3aaf277d8 <col:14> Implicit
|-FunctionDecl 0x55d3aaf27800 prev 0x55d3aaf275f0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:273:14 strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf27490 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf27530 <col:40, col:44> col:44 __c 'int'
| |-BuiltinAttr 0x55d3aaf27978 <<invalid sloc>> Inherited Implicit 1278
| |-NoThrowAttr 0x55d3aaf278b8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf27910 <line:479:45>
| `-NonNullAttr 0x55d3aaf27938 <line:555:57, /usr/include/string.h:274:46> 1
|-FunctionDecl 0x55d3aaf27b00 <line:286:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:286:14 strchrnul 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf279c0 <col:25, col:37> col:37 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf27a40 <col:42, col:46> col:46 __c 'int'
| |-NoThrowAttr 0x55d3aaf27bb8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf27c10 <line:479:45>
| `-NonNullAttr 0x55d3aaf27c38 <line:555:57, /usr/include/string.h:287:46> 1
|-FunctionDecl 0x55d3aaf27e70 <line:293:15> col:15 implicit strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf27f78 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf27fe0 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55d3aaf27f18 <<invalid sloc>> Implicit 1262
|-FunctionDecl 0x55d3aaf28058 prev 0x55d3aaf27e70 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:293:15 strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf27c90 <col:24, col:36> col:36 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf27d10 <col:41, col:53> col:53 __reject 'const char *'
| |-BuiltinAttr 0x55d3aaf281d8 <<invalid sloc>> Inherited Implicit 1262
| |-NoThrowAttr 0x55d3aaf28110 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf28168 <line:479:45>
| `-NonNullAttr 0x55d3aaf28190 <line:555:57, /usr/include/string.h:294:49> 1 2
|-FunctionDecl 0x55d3aaf28378 <line:297:15> col:15 implicit strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf28480 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf28540 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf28420 <<invalid sloc>> Implicit 1251
| `-NoThrowAttr 0x55d3aaf285b8 <col:15> Implicit
|-FunctionDecl 0x55d3aaf285e0 prev 0x55d3aaf28378 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:297:15 strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf28220 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf282a0 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55d3aaf28758 <<invalid sloc>> Inherited Implicit 1251
| |-NoThrowAttr 0x55d3aaf28698 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf286f0 <line:479:45>
| `-NonNullAttr 0x55d3aaf28718 <line:555:57, /usr/include/string.h:298:49> 1 2
|-FunctionDecl 0x55d3aaf28948 <line:323:14> col:14 implicit strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf28a50 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf28ab8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf289f0 <<invalid sloc>> Implicit 1276
| `-NoThrowAttr 0x55d3aaf28b30 <col:14> Implicit
|-FunctionDecl 0x55d3aaf28b58 prev 0x55d3aaf28948 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:323:14 strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf287a0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf28820 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55d3aaf28cd8 <<invalid sloc>> Inherited Implicit 1276
| |-NoThrowAttr 0x55d3aaf28c10 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf28c68 <line:479:45>
| `-NonNullAttr 0x55d3aaf28c90 <line:555:57, /usr/include/string.h:324:49> 1 2
|-FunctionDecl 0x55d3aaf28e80 <line:350:14> col:14 implicit strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf28f88 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf28ff0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf28f28 <<invalid sloc>> Implicit 1253
| `-NoThrowAttr 0x55d3aaf29068 <col:14> Implicit
|-FunctionDecl 0x55d3aaf29090 prev 0x55d3aaf28e80 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:350:14 strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf28d20 <col:22, col:34> col:34 __haystack 'const char *'
| |-ParmVarDecl 0x55d3aaf28da0 <col:46, col:58> col:58 __needle 'const char *'
| |-BuiltinAttr 0x55d3aaf29208 <<invalid sloc>> Inherited Implicit 1253
| |-NoThrowAttr 0x55d3aaf29148 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf291a0 <line:479:45>
| `-NonNullAttr 0x55d3aaf291c8 <line:555:57, /usr/include/string.h:351:49> 1 2
|-FunctionDecl 0x55d3aaf29390 <line:356:14> col:14 implicit strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf29498 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf17480 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55d3aaf29438 <<invalid sloc>> Implicit 1261
|-FunctionDecl 0x55d3aaf174f8 prev 0x55d3aaf29390 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:356:14 strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf29250 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55d3aaf292d0 <col:44, col:67> col:67 __delim 'const char *restrict'
| |-BuiltinAttr 0x55d3aaf17648 <<invalid sloc>> Inherited Implicit 1261
| |-NoThrowAttr 0x55d3aaf175b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf17608 <line:555:57, /usr/include/string.h:357:27> 2
|-FunctionDecl 0x55d3aaf17948 <line:361:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:361:14 __strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55d3aaf17690 <col:26, col:43> col:43 __s 'char *restrict'
| |-ParmVarDecl 0x55d3aaf17710 <line:362:5, col:28> col:28 __delim 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf177c8 <line:363:5, col:23> col:23 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55d3aaf17a08 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf17a60 <line:555:57, /usr/include/string.h:364:30> 2 3
|-FunctionDecl 0x55d3aaf17ca8 <line:366:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:366:14 strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55d3aaf17ac0 <col:24, col:41> col:41 __s 'char *restrict'
| |-ParmVarDecl 0x55d3aaf17b40 <col:46, col:69> col:69 __delim 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf17bc0 <line:367:10, col:28> col:28 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55d3aaf17d68 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf17dc0 <line:555:57, /usr/include/string.h:368:30> 2 3
|-FunctionDecl 0x55d3aaf17f80 <line:380:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:380:14 strcasestr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf17e20 <col:26, col:38> col:38 __haystack 'const char *'
| |-ParmVarDecl 0x55d3aaf17ea0 <col:50, col:62> col:62 __needle 'const char *'
| |-NoThrowAttr 0x55d3aaf18038 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf18090 <line:479:45>
| `-NonNullAttr 0x55d3aaf180b8 <line:555:57, /usr/include/string.h:381:49> 1 2
|-FunctionDecl 0x55d3aaf18490 <line:389:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:389:14 memmem 'void *(const void *, size_t, const void *, size_t)' extern
| |-ParmVarDecl 0x55d3aaf18110 <col:22, col:34> col:34 __haystack 'const void *'
| |-ParmVarDecl 0x55d3aaf18188 <col:46, col:53> col:53 __haystacklen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aaf18208 <line:390:8, col:20> col:20 __needle 'const void *'
| |-ParmVarDecl 0x55d3aaf18280 <col:30, col:37> col:37 __needlelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf18558 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf185b0 <line:479:45>
| `-NonNullAttr 0x55d3aaf185d8 <line:555:57, /usr/include/string.h:391:49> 1 3
|-FunctionDecl 0x55d3aaf18810 <line:397:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:397:14 __mempcpy 'void *(void *restrict, const void *restrict, size_t)' extern
| |-ParmVarDecl 0x55d3aaf18630 <col:25, col:42> col:42 __dest 'void *restrict'
| |-ParmVarDecl 0x55d3aaf186b0 <line:398:4, col:27> col:27 __src 'const void *restrict'
| |-ParmVarDecl 0x55d3aaf18728 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf188d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf18928 <line:555:57, /usr/include/string.h:399:30> 1 2
|-FunctionDecl 0x55d3aaf18b60 <line:400:14> col:14 implicit mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf18c68 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf18cd0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf18d38 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf18c08 <<invalid sloc>> Implicit 955
|-FunctionDecl 0x55d3aaf18db8 prev 0x55d3aaf18b60 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:400:14 mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf18980 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55d3aaf18a00 <line:401:9, col:32> col:32 __src 'const void *restrict'
| |-ParmVarDecl 0x55d3aaf18a78 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf18f18 <<invalid sloc>> Inherited Implicit 955
| |-NoThrowAttr 0x55d3aaf18e78 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf18ed0 <line:555:57, /usr/include/string.h:402:30> 1 2
|-FunctionDecl 0x55d3aaf19090 <line:407:15> col:15 implicit strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55d3aaf19198 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf19138 <<invalid sloc>> Implicit 1243
| `-NoThrowAttr 0x55d3aaf19208 <col:15> Implicit
|-FunctionDecl 0x55d3aaf19230 prev 0x55d3aaf19090 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:407:15 strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55d3aaf18f60 <col:23, col:35> col:35 __s 'const char *'
| |-BuiltinAttr 0x55d3aaf193a8 <<invalid sloc>> Inherited Implicit 1243
| |-NoThrowAttr 0x55d3aaf192e0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf19338 <line:479:45>
| `-NonNullAttr 0x55d3aaf19360 <line:555:57, /usr/include/string.h:408:46> 1
|-FunctionDecl 0x55d3aaf2fe80 <line:413:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:413:15 strnlen 'size_t (const char *, size_t)' extern
| |-ParmVarDecl 0x55d3aaf193f0 <col:24, col:36> col:36 __string 'const char *'
| |-ParmVarDecl 0x55d3aaf2fd40 <col:46, col:53> col:53 __maxlen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf2ff38 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf2ff90 <line:479:45>
| `-NonNullAttr 0x55d3aaf2ffb8 <line:555:57, /usr/include/string.h:414:46> 1
|-FunctionDecl 0x55d3aaf300e8 <line:419:14> col:14 implicit strerror 'char *(int)' extern
| |-ParmVarDecl 0x55d3aaf301f0 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55d3aaf30190 <<invalid sloc>> Implicit 1241
|-FunctionDecl 0x55d3aaf30260 prev 0x55d3aaf300e8 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:419:14 strerror 'char *(int)' extern
| |-ParmVarDecl 0x55d3aaf30010 <col:24, col:28> col:28 __errnum 'int'
| |-BuiltinAttr 0x55d3aaf30368 <<invalid sloc>> Inherited Implicit 1241
| `-NoThrowAttr 0x55d3aaf30310 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf30668 </usr/include/string.h:432:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:432:28 strerror_r 'int (int, char *, size_t)' extern
| |-ParmVarDecl 0x55d3aaf303b0 <line:433:8, col:12> col:12 __errnum 'int'
| |-ParmVarDecl 0x55d3aaf30430 <col:22, col:28> col:28 __buf 'char *'
| |-ParmVarDecl 0x55d3aaf304a8 <col:35, col:42> col:42 __buflen 'size_t':'unsigned long'
| |-AsmLabelAttr 0x55d3aaf30710 <<scratch space>:39:1> "__xpg_strerror_r" IsLiteralLabel
| |-NoThrowAttr 0x55d3aaf307a8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf307d0 <line:555:57, /usr/include/string.h:434:38> 2
|-FunctionDecl 0x55d3aaf309c8 <line:458:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:458:14 strerror_l 'char *(int, locale_t)' extern
| |-ParmVarDecl 0x55d3aaf30830 <col:26, col:30> col:30 __errnum 'int'
| |-ParmVarDecl 0x55d3aaf308a8 <col:40, col:49> col:49 __l 'locale_t':'struct __locale_struct *'
| `-NoThrowAttr 0x55d3aaf30a80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf34060 </usr/include/strings.h:34:12> col:12 implicit bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf34168 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf341d0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf34238 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf34108 <<invalid sloc>> Implicit 179
|-FunctionDecl 0x55d3aaf342b8 prev 0x55d3aaf34060 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:34:12 bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf30af0 <col:18, col:30> col:30 __s1 'const void *'
| |-ParmVarDecl 0x55d3aaf30b70 <col:36, col:48> col:48 __s2 'const void *'
| |-ParmVarDecl 0x55d3aaf30be8 <col:54, col:61> col:61 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf34438 <<invalid sloc>> Inherited Implicit 179
| |-NoThrowAttr 0x55d3aaf34378 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf343d0 <line:479:45>
| `-NonNullAttr 0x55d3aaf343f8 <line:555:57, /usr/include/strings.h:35:49> 1 2
|-FunctionDecl 0x55d3aaf346f0 <line:38:13> col:13 implicit bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf347f8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aaf34860 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf348c8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf34798 <<invalid sloc>> Implicit 186
| `-NoThrowAttr 0x55d3aaf34948 <col:13> Implicit
|-FunctionDecl 0x55d3aaf34970 prev 0x55d3aaf346f0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:38:13 bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf34480 <col:20, col:32> col:32 __src 'const void *'
| |-ParmVarDecl 0x55d3aaf34500 <col:39, col:45> col:45 __dest 'void *'
| |-ParmVarDecl 0x55d3aaf34578 <col:53, col:60> col:60 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf34ac8 <<invalid sloc>> Inherited Implicit 186
| |-NoThrowAttr 0x55d3aaf34a30 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf34a88 <line:555:57, /usr/include/strings.h:39:27> 1 2
|-FunctionDecl 0x55d3aaf34cc0 <line:42:13> col:13 implicit bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf34dc8 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aaf34e30 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf34d68 <<invalid sloc>> Implicit 184
| `-NoThrowAttr 0x55d3aaf34ea8 <col:13> Implicit
|-FunctionDecl 0x55d3aaf34ed0 prev 0x55d3aaf34cc0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:42:13 bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf34b10 <col:20, col:26> col:26 __s 'void *'
| |-ParmVarDecl 0x55d3aaf34b88 <col:31, col:38> col:38 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf35028 <<invalid sloc>> Inherited Implicit 184
| |-NoThrowAttr 0x55d3aaf34f88 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf34fe0 <line:555:57, /usr/include/strings.h:42:64> 1
|-FunctionDecl 0x55d3aaf351c8 <line:68:14> col:14 implicit index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf352d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf35338 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf35270 <<invalid sloc>> Implicit 743
| `-NoThrowAttr 0x55d3aaf353b0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf353d8 prev 0x55d3aaf351c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:68:14 index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf35088 <col:21, col:33> col:33 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf35108 <col:38, col:42> col:42 __c 'int'
| |-BuiltinAttr 0x55d3aaf35558 <<invalid sloc>> Inherited Implicit 743
| |-NoThrowAttr 0x55d3aaf35490 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf354e8 <line:479:45>
| `-NonNullAttr 0x55d3aaf35510 <line:555:57, /usr/include/strings.h:69:46> 1
|-FunctionDecl 0x55d3aaf356e0 <line:96:14> col:14 implicit rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf357e8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf35850 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf35788 <<invalid sloc>> Implicit 1098
| `-NoThrowAttr 0x55d3aaf358c8 <col:14> Implicit
|-FunctionDecl 0x55d3aaf358f0 prev 0x55d3aaf356e0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:96:14 rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55d3aaf355a0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55d3aaf35620 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55d3aaf35a68 <<invalid sloc>> Inherited Implicit 1098
| |-NoThrowAttr 0x55d3aaf359a8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf35a00 <line:479:45>
| `-NonNullAttr 0x55d3aaf35a28 <line:555:57, /usr/include/strings.h:97:46> 1
|-FunctionDecl 0x55d3aaf35b88 <line:104:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:104:12 ffs 'int (int)' extern
| |-ParmVarDecl 0x55d3aaf35ab0 <col:17, col:21> col:21 __i 'int'
| |-NoThrowAttr 0x55d3aaf35c38 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf35c90 <line:486:46>
|-FunctionDecl 0x55d3aaf35da8 </usr/include/strings.h:110:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:110:12 ffsl 'int (long)' extern
| |-ParmVarDecl 0x55d3aaf35cd0 <col:18, col:27> col:27 __l 'long'
| |-NoThrowAttr 0x55d3aaf35e58 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf35eb0 <line:486:46>
|-FunctionDecl 0x55d3aaf35fc8 </usr/include/strings.h:111:15, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:111:26 ffsll 'int (long long)' extern
| |-ParmVarDecl 0x55d3aaf35ef0 <col:33, col:47> col:47 __ll 'long long'
| |-NoThrowAttr 0x55d3aaf36088 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf360e0 <line:486:46>
|-FunctionDecl 0x55d3aaf36280 </usr/include/strings.h:116:12> col:12 implicit strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf36388 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf363f0 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55d3aaf36328 <<invalid sloc>> Implicit 1230
|-FunctionDecl 0x55d3aaf36468 prev 0x55d3aaf36280 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:116:12 strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf36120 <col:24, col:36> col:36 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf361a0 <col:42, col:54> col:54 __s2 'const char *'
| |-BuiltinAttr 0x55d3aaf365e8 <<invalid sloc>> Inherited Implicit 1230
| |-NoThrowAttr 0x55d3aaf36520 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf36578 <line:479:45>
| `-NonNullAttr 0x55d3aaf365a0 <line:555:57, /usr/include/strings.h:117:49> 1 2
|-FunctionDecl 0x55d3aaf36810 <line:120:12> col:12 implicit strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf36918 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf36980 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf369e8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf368b8 <<invalid sloc>> Implicit 1270
|-FunctionDecl 0x55d3aaf36a68 prev 0x55d3aaf36810 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:120:12 strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf36630 <col:25, col:37> col:37 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf366b0 <col:43, col:55> col:55 __s2 'const char *'
| |-ParmVarDecl 0x55d3aaf36728 <col:61, col:68> col:68 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf36be8 <<invalid sloc>> Inherited Implicit 1270
| |-NoThrowAttr 0x55d3aaf36b28 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf36b80 <line:479:45>
| `-NonNullAttr 0x55d3aaf36ba8 <line:555:57, /usr/include/strings.h:121:49> 1 2
|-FunctionDecl 0x55d3aaf36e30 <line:128:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:128:12 strcasecmp_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55d3aaf36c30 <col:26, col:38> col:38 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf36cb0 <col:44, col:56> col:56 __s2 'const char *'
| |-ParmVarDecl 0x55d3aaf36d28 <col:62, col:71> col:71 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55d3aaf36ef0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf36f48 <line:479:45>
| `-NonNullAttr 0x55d3aaf36f70 <line:555:57, /usr/include/strings.h:129:52> 1 2 3
|-FunctionDecl 0x55d3aaf37338 <line:133:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:133:12 strncasecmp_l 'int (const char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55d3aaf36fd8 <col:27, col:39> col:39 __s1 'const char *'
| |-ParmVarDecl 0x55d3aaf37090 <col:45, col:57> col:57 __s2 'const char *'
| |-ParmVarDecl 0x55d3aaf37108 <line:134:6, col:13> col:13 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aaf37180 <col:18, col:27> col:27 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55d3aaf37400 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55d3aaf37458 <line:479:45>
| `-NonNullAttr 0x55d3aaf37480 <line:555:57, /usr/include/strings.h:135:52> 1 2 4
|-FunctionDecl 0x55d3aaf37618 </usr/include/string.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:466:13 explicit_bzero 'void (void *, size_t)' extern
| |-ParmVarDecl 0x55d3aaf374e8 <col:29, col:35> col:35 __s 'void *'
| |-ParmVarDecl 0x55d3aaf37560 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf376d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf37728 <line:555:57, /usr/include/string.h:466:73> 1
|-FunctionDecl 0x55d3aaf37968 <line:471:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:471:14 strsep 'char *(char **restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55d3aaf37780 <col:22, col:40> col:40 __stringp 'char **restrict'
| |-ParmVarDecl 0x55d3aaf37800 <line:472:8, col:31> col:31 __delim 'const char *restrict'
| |-NoThrowAttr 0x55d3aaf37a20 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf37a78 <line:555:57, /usr/include/string.h:473:30> 1 2
|-FunctionDecl 0x55d3aaf37b68 <line:478:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:478:14 strsignal 'char *(int)' extern
| |-ParmVarDecl 0x55d3aaf37ad0 <col:25, col:29> col:29 __sig 'int'
| `-NoThrowAttr 0x55d3aaf37c18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf37de8 </usr/include/string.h:489:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:489:14 __stpcpy 'char *(char *restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55d3aaf37c88 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf37d08 <col:49, col:72> col:72 __src 'const char *restrict'
| |-NoThrowAttr 0x55d3aaf37ea0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf37ef8 <line:555:57, /usr/include/string.h:490:30> 1 2
|-FunctionDecl 0x55d3aaf380d8 <line:491:14> col:14 implicit stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf381e0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf38248 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf38180 <<invalid sloc>> Implicit 1224
| `-NoThrowAttr 0x55d3aaf382c0 <col:14> Implicit
|-FunctionDecl 0x55d3aaf382e8 prev 0x55d3aaf380d8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:491:14 stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55d3aaf37f50 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf37fd0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55d3aaf38438 <<invalid sloc>> Inherited Implicit 1224
| |-NoThrowAttr 0x55d3aaf383a0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf383f8 <line:555:57, /usr/include/string.h:492:30> 1 2
|-FunctionDecl 0x55d3aaf38660 <line:496:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:496:14 __stpncpy 'char *(char *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x55d3aaf38480 <col:25, col:42> col:42 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf38500 <line:497:4, col:27> col:27 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf38578 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3aaf38720 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf38778 <line:555:57, /usr/include/string.h:498:30> 1 2
|-FunctionDecl 0x55d3aaf389b0 <line:499:14> col:14 implicit stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf38ab8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf38b20 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf38b88 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55d3aaf38a58 <<invalid sloc>> Implicit 1227
| `-NoThrowAttr 0x55d3aaf38c08 <col:14> Implicit
|-FunctionDecl 0x55d3aaf38c30 prev 0x55d3aaf389b0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:499:14 stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf387d0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf38850 <line:500:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf388c8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf38d88 <<invalid sloc>> Inherited Implicit 1227
| |-NoThrowAttr 0x55d3aaf38cf0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf38d48 <line:555:57, /usr/include/string.h:501:30> 1 2
|-FunctionDecl 0x55d3aaf38fa8 <line:506:15> col:15 implicit strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf390e0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf39148 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf391b0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf39050 <<invalid sloc>> Implicit 1266
|-FunctionDecl 0x55d3aaf39230 prev 0x55d3aaf38fa8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:506:15 strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf38dd0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf38e50 <line:507:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf38ec8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf39388 <<invalid sloc>> Inherited Implicit 1266
| |-NoThrowAttr 0x55d3aaf392f0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf39348 <line:555:57, /usr/include/string.h:508:27> 1 2
|-FunctionDecl 0x55d3aaf395a8 <line:512:15> col:15 implicit strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf396b0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55d3aaf39718 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3aaf39780 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55d3aaf39650 <<invalid sloc>> Implicit 1265
|-FunctionDecl 0x55d3aaf39800 prev 0x55d3aaf395a8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:512:15 strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55d3aaf393d0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55d3aaf39450 <line:513:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55d3aaf394c8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55d3aaf39958 <<invalid sloc>> Inherited Implicit 1265
| |-NoThrowAttr 0x55d3aaf398c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf39918 <line:555:57, /usr/include/string.h:514:27> 1 2
|-TypedefDecl 0x55d3aaf399a0 </usr/include/bits/types.h:31:1, col:23> col:23 __u_char 'unsigned char'
| `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aaf39a10 <line:32:1, col:28> col:28 __u_short 'unsigned short'
| `-BuiltinType 0x55d3aae995d0 'unsigned short'
|-TypedefDecl 0x55d3aaf39a80 <line:33:1, col:22> col:22 __u_int 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf39af0 <line:34:1, col:27> col:27 __u_long 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf39b60 <line:37:1, col:21> col:21 referenced __int8_t 'signed char'
| `-BuiltinType 0x55d3aae99510 'signed char'
|-TypedefDecl 0x55d3aaf39bd0 <line:38:1, col:23> col:23 referenced __uint8_t 'unsigned char'
| `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aaf39c40 <line:39:1, col:26> col:26 referenced __int16_t 'short'
| `-BuiltinType 0x55d3aae99530 'short'
|-TypedefDecl 0x55d3aaf39cb0 <line:40:1, col:28> col:28 referenced __uint16_t 'unsigned short'
| `-BuiltinType 0x55d3aae995d0 'unsigned short'
|-TypedefDecl 0x55d3aaf39d20 <line:41:1, col:20> col:20 referenced __int32_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf39d90 <line:42:1, col:22> col:22 referenced __uint32_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf39e00 <line:44:1, col:25> col:25 referenced __int64_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf39e70 <line:45:1, col:27> col:27 referenced __uint64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf39f40 <line:52:1, col:18> col:18 referenced __int_least8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55d3aaf39f00 '__int8_t' sugar
|   `-TypedefType 0x55d3aaf39ed0 '__int8_t' sugar
|     |-Typedef 0x55d3aaf39b60 '__int8_t'
|     `-BuiltinType 0x55d3aae99510 'signed char'
|-TypedefDecl 0x55d3aaf3a010 <line:53:1, col:19> col:19 referenced __uint_least8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55d3aaf39fd0 '__uint8_t' sugar
|   `-TypedefType 0x55d3aaf39fa0 '__uint8_t' sugar
|     |-Typedef 0x55d3aaf39bd0 '__uint8_t'
|     `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aaf3fa20 <line:54:1, col:19> col:19 referenced __int_least16_t '__int16_t':'short'
| `-ElaboratedType 0x55d3aaf3f9e0 '__int16_t' sugar
|   `-TypedefType 0x55d3aaf3a070 '__int16_t' sugar
|     |-Typedef 0x55d3aaf39c40 '__int16_t'
|     `-BuiltinType 0x55d3aae99530 'short'
|-TypedefDecl 0x55d3aaf3faf0 <line:55:1, col:20> col:20 referenced __uint_least16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55d3aaf3fab0 '__uint16_t' sugar
|   `-TypedefType 0x55d3aaf3fa80 '__uint16_t' sugar
|     |-Typedef 0x55d3aaf39cb0 '__uint16_t'
|     `-BuiltinType 0x55d3aae995d0 'unsigned short'
|-TypedefDecl 0x55d3aaf3fbc0 <line:56:1, col:19> col:19 referenced __int_least32_t '__int32_t':'int'
| `-ElaboratedType 0x55d3aaf3fb80 '__int32_t' sugar
|   `-TypedefType 0x55d3aaf3fb50 '__int32_t' sugar
|     |-Typedef 0x55d3aaf39d20 '__int32_t'
|     `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf3fc90 <line:57:1, col:20> col:20 referenced __uint_least32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55d3aaf3fc50 '__uint32_t' sugar
|   `-TypedefType 0x55d3aaf3fc20 '__uint32_t' sugar
|     |-Typedef 0x55d3aaf39d90 '__uint32_t'
|     `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf3fd60 <line:58:1, col:19> col:19 referenced __int_least64_t '__int64_t':'long'
| `-ElaboratedType 0x55d3aaf3fd20 '__int64_t' sugar
|   `-TypedefType 0x55d3aaf3fcf0 '__int64_t' sugar
|     |-Typedef 0x55d3aaf39e00 '__int64_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf3fe30 <line:59:1, col:20> col:20 referenced __uint_least64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55d3aaf3fdf0 '__uint64_t' sugar
|   `-TypedefType 0x55d3aaf3fdc0 '__uint64_t' sugar
|     |-Typedef 0x55d3aaf39e70 '__uint64_t'
|     `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf3fea0 <line:63:1, col:18> col:18 __quad_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf3ff10 <line:64:1, col:27> col:27 __u_quad_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf3ff80 <line:72:1, col:18> col:18 referenced __intmax_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf3fff0 <line:73:1, col:27> col:27 referenced __uintmax_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40060 <line:137:22, line:145:25> col:25 __dev_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf400d0 <line:137:22, line:146:25> col:25 __uid_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf40140 <line:137:22, line:147:25> col:25 __gid_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf401b0 <line:137:22, line:148:25> col:25 __ino_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40220 <line:137:22, line:149:27> col:27 __ino64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40290 <line:137:22, line:150:26> col:26 __mode_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf40300 <line:137:22, line:151:27> col:27 __nlink_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40370 <line:137:22, line:152:25> col:25 referenced __off_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf403e0 <line:137:22, line:153:27> col:27 referenced __off64_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf40450 <line:137:22, line:154:25> col:25 __pid_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-RecordDecl 0x55d3aaf404a8 </usr/include/bits/typesizes.h:73:24, col:47> col:24 struct definition
| `-FieldDecl 0x55d3aaf405e8 <col:33, col:44> col:37 __val 'int[2]'
|-TypedefDecl 0x55d3aaf40698 </usr/include/bits/types.h:137:22, line:155:26> col:26 __fsid_t 'struct __fsid_t':'__fsid_t'
| `-ElaboratedType 0x55d3aaf40640 'struct __fsid_t' sugar
|   `-RecordType 0x55d3aaf40530 '__fsid_t'
|     `-Record 0x55d3aaf404a8 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x55d3aaf40720 </usr/include/bits/types.h:137:22, line:156:27> col:27 __clock_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf40790 <line:137:22, line:157:26> col:26 __rlim_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40800 <line:137:22, line:158:28> col:28 __rlim64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf40870 <line:137:22, line:159:24> col:24 __id_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf408e0 <line:137:22, line:160:26> col:26 __time_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf40950 <line:137:22, line:161:30> col:30 __useconds_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf47280 <line:137:22, line:162:31> col:31 __suseconds_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf472f0 <line:137:22, line:163:33> col:33 __suseconds64_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47360 <line:137:22, line:165:27> col:27 __daddr_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf473d0 <line:137:22, line:166:25> col:25 __key_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf47440 <line:137:22, line:169:29> col:29 __clockid_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf474b0 <line:137:22, line:172:27> col:27 __timer_t 'void *'
| `-PointerType 0x55d3aae99bf0 'void *'
|   `-BuiltinType 0x55d3aae994b0 'void'
|-TypedefDecl 0x55d3aaf47520 <line:137:22, line:175:29> col:29 __blksize_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47590 <line:137:22, line:180:28> col:28 __blkcnt_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47600 <line:137:22, line:181:30> col:30 __blkcnt64_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47670 <line:137:22, line:184:30> col:30 __fsblkcnt_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf476e0 <line:137:22, line:185:32> col:32 __fsblkcnt64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf47750 <line:137:22, line:188:30> col:30 __fsfilcnt_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf477c0 <line:137:22, line:189:32> col:32 __fsfilcnt64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf47830 <line:137:22, line:192:28> col:28 __fsword_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf478a0 <line:137:22, line:194:27> col:27 referenced __ssize_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47910 <line:137:22, line:197:33> col:33 __syscall_slong_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47980 <line:137:22, line:199:33> col:33 __syscall_ulong_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaf47a50 <line:203:1, col:19> col:19 __loff_t '__off64_t':'long'
| `-ElaboratedType 0x55d3aaf47a10 '__off64_t' sugar
|   `-TypedefType 0x55d3aaf479e0 '__off64_t' sugar
|     |-Typedef 0x55d3aaf403e0 '__off64_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47ac0 <line:204:1, col:15> col:15 __caddr_t 'char *'
| `-PointerType 0x55d3aae99c80 'char *'
|   `-BuiltinType 0x55d3aae994f0 'char'
|-TypedefDecl 0x55d3aaf47b30 <line:137:22, line:207:25> col:25 __intptr_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaf47ba0 <line:137:22, line:210:23> col:23 __socklen_t 'unsigned int'
| `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aaf47c10 <line:215:1, col:13> col:13 __sig_atomic_t 'int'
| `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aaf47cc0 </usr/include/bits/floatn.h:83:1, col:24> col:24 __cfloat128 '_Complex __float128'
| |-ComplexType 0x55d3aaf47d20 '_Complex __float128'
| | `-BuiltinType 0x55d3aae996b0 '__float128'
| `-ModeAttr 0x55d3aaf47d60 <col:52, col:68> __TC__
|-TypedefDecl 0x55d3aaf47dd8 <line:97:1, col:20> col:20 referenced _Float128 '__float128'
| `-BuiltinType 0x55d3aae996b0 '__float128'
|-TypedefDecl 0x55d3aaf47e48 </usr/include/bits/floatn-common.h:214:1, col:15> col:15 _Float32 'float'
| `-BuiltinType 0x55d3aae99650 'float'
|-TypedefDecl 0x55d3aaf47eb8 <line:251:1, col:16> col:16 _Float64 'double'
| `-BuiltinType 0x55d3aae99670 'double'
|-TypedefDecl 0x55d3aaf47f28 <line:268:1, col:16> col:16 _Float32x 'double'
| `-BuiltinType 0x55d3aae99670 'double'
|-TypedefDecl 0x55d3aaf47f98 <line:285:1, col:21> col:21 _Float64x 'long double'
| `-BuiltinType 0x55d3aae99690 'long double'
|-TypedefDecl 0x55d3aaf48008 </usr/include/math.h:167:1, col:15> col:15 float_t 'float'
| |-BuiltinType 0x55d3aae99650 'float'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x55d3aaf48060 <<invalid sloc>>
|-TypedefDecl 0x55d3aaf480d0 <line:168:1, col:16> col:16 double_t 'double'
| |-BuiltinType 0x55d3aae99670 'double'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x55d3aaf48128 <<invalid sloc>>
|-FunctionDecl 0x55d3aaf72370 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> line:20:24 __fpclassify 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf48198 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'double'
| |-NoThrowAttr 0x55d3aaf72420 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf72478 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55d3aaf72550 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> line:24:24 __signbit 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf724b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'double'
| |-NoThrowAttr 0x55d3aaf72600 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf72658 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55d3aaf72730 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> line:29:24 __isinf 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf72698 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'double'
| |-NoThrowAttr 0x55d3aaf727e0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf72838 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55d3aaf72910 <line:33:24> col:24 implicit __finite 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf72a18 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf729b8 <<invalid sloc>> Implicit 1013
| |-NoThrowAttr 0x55d3aaf72a88 <col:24> Implicit
| `-ConstAttr 0x55d3aaf72ab0 <col:24> Implicit
|-FunctionDecl 0x55d3aaf72ad8 prev 0x55d3aaf72910 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> line:33:24 __finite 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf72878 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'double'
| |-BuiltinAttr 0x55d3aaf72c08 <<invalid sloc>> Inherited Implicit 1013
| |-NoThrowAttr 0x55d3aaf72b88 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf72be0 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55d3aaf72ce8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> line:37:24 __isnan 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf72c50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'double'
| |-NoThrowAttr 0x55d3aaf72d98 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf72df0 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55d3aaf72f98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls-helper-functions.h:41:24 __iseqsig 'int (double, double)' extern
| |-ParmVarDecl 0x55d3aaf72e30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'double'
| |-ParmVarDecl 0x55d3aaf72eb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'double'
| `-NoThrowAttr 0x55d3aaf73050 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf73158 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> line:44:24 __issignaling 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf730c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'double'
| |-NoThrowAttr 0x55d3aaf73208 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf73260 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55d3aaf77ff0 </usr/include/bits/mathcalls.h:53:17> col:17 implicit acos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf780f8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf78098 <<invalid sloc>> Implicit 103
| `-NoThrowAttr 0x55d3aaf78168 <col:17> Implicit
|-FunctionDecl 0x55d3aaf78190 prev 0x55d3aaf77ff0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:53:17 acos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf732a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf78298 <<invalid sloc>> Inherited Implicit 103
| `-NoThrowAttr 0x55d3aaf78240 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf78378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:78:1 __acos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf782e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf78428 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf78530 </usr/include/bits/mathcalls.h:55:17> col:17 implicit asin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf78638 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf785d8 <<invalid sloc>> Implicit 138
| `-NoThrowAttr 0x55d3aaf786a8 <col:17> Implicit
|-FunctionDecl 0x55d3aaf786d0 prev 0x55d3aaf78530 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:55:17 asin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf78498 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf787d8 <<invalid sloc>> Inherited Implicit 138
| `-NoThrowAttr 0x55d3aaf78780 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf788b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 __asin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf78820 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf78968 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf78a70 </usr/include/bits/mathcalls.h:57:17> col:17 implicit atan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf78b78 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf78b18 <<invalid sloc>> Implicit 155
| `-NoThrowAttr 0x55d3aaf78be8 <col:17> Implicit
|-FunctionDecl 0x55d3aaf78c10 prev 0x55d3aaf78a70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:57:17 atan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf789d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf78d18 <<invalid sloc>> Inherited Implicit 155
| `-NoThrowAttr 0x55d3aaf78cc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf78df8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __atan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf78d60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf78ea8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf48378 </usr/include/bits/mathcalls.h:59:17> col:17 implicit atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf48480 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf484e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf48420 <<invalid sloc>> Implicit 161
| `-NoThrowAttr 0x55d3aaf48560 <col:17> Implicit
|-FunctionDecl 0x55d3aaf48588 prev 0x55d3aaf48378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:59:17 atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf78f18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x55d3aaf48290 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| |-BuiltinAttr 0x55d3aaf48698 <<invalid sloc>> Inherited Implicit 161
| `-NoThrowAttr 0x55d3aaf48640 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf48800 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 __atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf486e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x55d3aaf48760 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| `-NoThrowAttr 0x55d3aaf488b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf489c0 </usr/include/bits/mathcalls.h:62:17> col:17 implicit cos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf48ac8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf48a68 <<invalid sloc>> Implicit 383
| `-NoThrowAttr 0x55d3aaf48b38 <col:17> Implicit
|-FunctionDecl 0x55d3aaf48b60 prev 0x55d3aaf489c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:62:17 cos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf48928 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| |-BuiltinAttr 0x55d3aaf48c68 <<invalid sloc>> Inherited Implicit 383
| `-NoThrowAttr 0x55d3aaf48c10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf48d48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __cos 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf48cb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| `-NoThrowAttr 0x55d3aaf48df8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf48f00 </usr/include/bits/mathcalls.h:64:17> col:17 implicit sin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf49008 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf48fa8 <<invalid sloc>> Implicit 1179
| `-NoThrowAttr 0x55d3aaf49078 <col:17> Implicit
|-FunctionDecl 0x55d3aaf490a0 prev 0x55d3aaf48f00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:64:17 sin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf48e68 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| |-BuiltinAttr 0x55d3aaf491a8 <<invalid sloc>> Inherited Implicit 1179
| `-NoThrowAttr 0x55d3aaf49150 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7c3e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:88:1 __sin 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf491f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| `-NoThrowAttr 0x55d3aaf7c490 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7c598 </usr/include/bits/mathcalls.h:66:17> col:17 implicit tan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7c6a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7c640 <<invalid sloc>> Implicit 1400
| `-NoThrowAttr 0x55d3aaf7c710 <col:17> Implicit
|-FunctionDecl 0x55d3aaf7c738 prev 0x55d3aaf7c598 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:66:17 tan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7c500 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| |-BuiltinAttr 0x55d3aaf7c840 <<invalid sloc>> Inherited Implicit 1400
| `-NoThrowAttr 0x55d3aaf7c7e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7c920 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:90:1 __tan 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7c888 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| `-NoThrowAttr 0x55d3aaf7c9d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7cad8 </usr/include/bits/mathcalls.h:93:17> col:17 implicit cosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7cbe0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7cb80 <<invalid sloc>> Implicit 391
| `-NoThrowAttr 0x55d3aaf7cc50 <col:17> Implicit
|-FunctionDecl 0x55d3aaf7cc78 prev 0x55d3aaf7cad8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:93:17 cosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7ca40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf7cd80 <<invalid sloc>> Inherited Implicit 391
| `-NoThrowAttr 0x55d3aaf7cd28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7ce60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:93:1 __cosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7cdc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf7cf10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7d018 </usr/include/bits/mathcalls.h:95:17> col:17 implicit sinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7d120 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7d0c0 <<invalid sloc>> Implicit 1198
| `-NoThrowAttr 0x55d3aaf7d190 <col:17> Implicit
|-FunctionDecl 0x55d3aaf7d1b8 prev 0x55d3aaf7d018 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:95:17 sinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7cf80 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf7d2c0 <<invalid sloc>> Inherited Implicit 1198
| `-NoThrowAttr 0x55d3aaf7d268 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf65bd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 __sinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7d308 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf65c80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf65d88 </usr/include/bits/mathcalls.h:97:17> col:17 implicit tanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf65e90 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf65e30 <<invalid sloc>> Implicit 1408
| `-NoThrowAttr 0x55d3aaf65f00 <col:17> Implicit
|-FunctionDecl 0x55d3aaf65f28 prev 0x55d3aaf65d88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:97:17 tanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf65cf0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf66030 <<invalid sloc>> Inherited Implicit 1408
| `-NoThrowAttr 0x55d3aaf65fd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf66110 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __tanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66078 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf661c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf662c8 </usr/include/bits/mathcalls.h:107:17> col:17 implicit acosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf663d0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf66370 <<invalid sloc>> Implicit 111
| `-NoThrowAttr 0x55d3aaf66440 <col:17> Implicit
|-FunctionDecl 0x55d3aaf66468 prev 0x55d3aaf662c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:107:17 acosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66230 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf66570 <<invalid sloc>> Inherited Implicit 111
| `-NoThrowAttr 0x55d3aaf66518 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf66650 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:99:1 __acosh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf665b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf66700 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf66808 </usr/include/bits/mathcalls.h:109:17> col:17 implicit asinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66910 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf668b0 <<invalid sloc>> Implicit 146
| `-NoThrowAttr 0x55d3aaf66980 <col:17> Implicit
|-FunctionDecl 0x55d3aaf669a8 prev 0x55d3aaf66808 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:109:17 asinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66770 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf66ab0 <<invalid sloc>> Inherited Implicit 146
| `-NoThrowAttr 0x55d3aaf66a58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf66be0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 __asinh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66af8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf66c90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf66d98 </usr/include/bits/mathcalls.h:111:17> col:17 implicit atanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66ea0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf66e40 <<invalid sloc>> Implicit 171
| `-NoThrowAttr 0x55d3aaf66f10 <col:17> Implicit
|-FunctionDecl 0x55d3aaf66f38 prev 0x55d3aaf66d98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:111:17 atanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf66d00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf67040 <<invalid sloc>> Inherited Implicit 171
| `-NoThrowAttr 0x55d3aaf66fe8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf67120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __atanh 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf67088 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf671d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf672d8 </usr/include/bits/mathcalls.h:117:17> col:17 implicit exp 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf673e0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf67380 <<invalid sloc>> Implicit 523
| `-NoThrowAttr 0x55d3aaf67450 <col:17> Implicit
|-FunctionDecl 0x55d3aaf67478 prev 0x55d3aaf672d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:117:17 exp 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf67240 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| |-BuiltinAttr 0x55d3aaf67580 <<invalid sloc>> Inherited Implicit 523
| `-NoThrowAttr 0x55d3aaf67528 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf67660 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:105:1 __exp 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf675c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| `-NoThrowAttr 0x55d3aaf67710 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf67918 </usr/include/bits/mathcalls.h:120:13> col:13 implicit frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55d3aaf67a20 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf67a88 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aaf679c0 <<invalid sloc>> Implicit 645
| `-NoThrowAttr 0x55d3aaf67b00 <col:13> Implicit
|-FunctionDecl 0x55d3aaf67b28 prev 0x55d3aaf67918 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:120:13 frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55d3aaf67780 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf67838 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55d3aaf67c48 <<invalid sloc>> Inherited Implicit 645
| `-NoThrowAttr 0x55d3aaf67bf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf67db0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55d3aaf67c90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf67d10 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55d3aaf67e68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf68038 </usr/include/bits/mathcalls.h:123:13> col:13 implicit ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf68140 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf681a8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf680e0 <<invalid sloc>> Implicit 840
| `-NoThrowAttr 0x55d3aaf68220 <col:13> Implicit
|-FunctionDecl 0x55d3aaf68248 prev 0x55d3aaf68038 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:123:13 ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf67ed8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf67f58 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55d3aaf68358 <<invalid sloc>> Inherited Implicit 840
| `-NoThrowAttr 0x55d3aaf68300 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf684c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 __ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf683a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf68420 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55d3aaf68578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf68680 </usr/include/bits/mathcalls.h:126:17> col:17 implicit log 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf68788 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf68728 <<invalid sloc>> Implicit 869
| `-NoThrowAttr 0x55d3aaf687f8 <col:17> Implicit
|-FunctionDecl 0x55d3aaf68820 prev 0x55d3aaf68680 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:126:17 log 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf685e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| |-BuiltinAttr 0x55d3aaf68928 <<invalid sloc>> Inherited Implicit 869
| `-NoThrowAttr 0x55d3aaf688d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf68a08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __log 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf68970 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| `-NoThrowAttr 0x55d3aaf68ab8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf68c00 </usr/include/bits/mathcalls.h:129:17> col:17 implicit log10 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf68d08 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf68ca8 <<invalid sloc>> Implicit 890
| `-NoThrowAttr 0x55d3aaf68d78 <col:17> Implicit
|-FunctionDecl 0x55d3aaf68da0 prev 0x55d3aaf68c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:129:17 log10 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf68b28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf68ea8 <<invalid sloc>> Inherited Implicit 890
| `-NoThrowAttr 0x55d3aaf68e50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf68f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:111:1 __log10 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf68ef0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf69038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf69238 </usr/include/bits/mathcalls.h:132:13> col:13 implicit modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55d3aaf69340 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf693a8 <<invalid sloc>> <invalid sloc> 'double *'
| |-BuiltinAttr 0x55d3aaf692e0 <<invalid sloc>> Implicit 961
| `-NoThrowAttr 0x55d3aaf69420 <col:13> Implicit
|-FunctionDecl 0x55d3aaf69448 prev 0x55d3aaf69238 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:132:13 modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55d3aaf690a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf69158 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-BuiltinAttr 0x55d3aaf69558 <<invalid sloc>> Inherited Implicit 961
| `-NoThrowAttr 0x55d3aaf69500 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf696e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:112:1 __modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55d3aaf695a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf69620 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-NoThrowAttr 0x55d3aaf69798 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf697f0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55d3aaf698e8 <line:156:17> col:17 implicit expm1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf699f0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf69990 <<invalid sloc>> Implicit 546
| `-NoThrowAttr 0x55d3aaf69a60 <col:17> Implicit
|-FunctionDecl 0x55d3aaf69a88 prev 0x55d3aaf698e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:156:17 expm1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf69850 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf69b90 <<invalid sloc>> Inherited Implicit 546
| `-NoThrowAttr 0x55d3aaf69b38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf69ca8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __expm1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf69c10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf69d58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf69e60 </usr/include/bits/mathcalls.h:159:17> col:17 implicit log1p 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf69f68 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf69f08 <<invalid sloc>> Implicit 875
| `-NoThrowAttr 0x55d3aaf69fd8 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6a000 prev 0x55d3aaf69e60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:159:17 log1p 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf69dc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf6a108 <<invalid sloc>> Inherited Implicit 875
| `-NoThrowAttr 0x55d3aaf6a0b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6a1e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:117:1 __log1p 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a150 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf6a298 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6a3a0 </usr/include/bits/mathcalls.h:162:13> col:13 implicit logb 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a4a8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6a448 <<invalid sloc>> Implicit 900
| `-NoThrowAttr 0x55d3aaf6a518 <col:13> Implicit
|-FunctionDecl 0x55d3aaf6a540 prev 0x55d3aaf6a3a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:162:13 logb 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a308 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| |-BuiltinAttr 0x55d3aaf6a648 <<invalid sloc>> Inherited Implicit 900
| `-NoThrowAttr 0x55d3aaf6a5f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6a728 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:118:1 __logb 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a690 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| `-NoThrowAttr 0x55d3aaf6a7d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6a8e0 </usr/include/bits/mathcalls.h:167:17> col:17 implicit exp2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a9e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6a988 <<invalid sloc>> Implicit 529
| `-NoThrowAttr 0x55d3aaf6aa58 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6aa80 prev 0x55d3aaf6a8e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:167:17 exp2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6a848 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf6ab88 <<invalid sloc>> Inherited Implicit 529
| `-NoThrowAttr 0x55d3aaf6ab30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6bcc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:120:1 __exp2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6bc30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf6bd78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6be80 </usr/include/bits/mathcalls.h:170:17> col:17 implicit log2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6bf88 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6bf28 <<invalid sloc>> Implicit 882
| `-NoThrowAttr 0x55d3aaf6bff8 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6c020 prev 0x55d3aaf6be80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:170:17 log2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6bde8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf6c128 <<invalid sloc>> Inherited Implicit 882
| `-NoThrowAttr 0x55d3aaf6c0d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6c208 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:122:1 __log2 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6c170 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf6c2b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6c448 </usr/include/bits/mathcalls.h:177:17> col:17 implicit pow 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6c550 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf6c5b8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6c4f0 <<invalid sloc>> Implicit 1048
| `-NoThrowAttr 0x55d3aaf6c630 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6c658 prev 0x55d3aaf6c448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:177:17 pow 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6c328 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x55d3aaf6c3a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| |-BuiltinAttr 0x55d3aaf6c768 <<invalid sloc>> Inherited Implicit 1048
| `-NoThrowAttr 0x55d3aaf6c710 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6c8d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:124:1 __pow 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6c7b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x55d3aaf6c830 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| `-NoThrowAttr 0x55d3aaf6c988 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6ca90 </usr/include/bits/mathcalls.h:180:13> col:13 implicit sqrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6cb98 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6cb38 <<invalid sloc>> Implicit 1213
| `-NoThrowAttr 0x55d3aaf6cc08 <col:13> Implicit
|-FunctionDecl 0x55d3aaf6cc40 prev 0x55d3aaf6ca90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:180:13 sqrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6c9f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| |-BuiltinAttr 0x55d3aaf6cd48 <<invalid sloc>> Inherited Implicit 1213
| `-NoThrowAttr 0x55d3aaf6ccf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6ce28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:125:1 __sqrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6cd90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| `-NoThrowAttr 0x55d3aaf6ced8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6d068 </usr/include/bits/mathcalls.h:184:17> col:17 implicit hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6d170 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf6d1d8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6d110 <<invalid sloc>> Implicit 731
| `-NoThrowAttr 0x55d3aaf6d250 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6d278 prev 0x55d3aaf6d068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:184:17 hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6cf48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf6cfc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| |-BuiltinAttr 0x55d3aaf6d388 <<invalid sloc>> Inherited Implicit 731
| `-NoThrowAttr 0x55d3aaf6d330 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6d4f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:127:1 __hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6d3d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf6d450 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| `-NoThrowAttr 0x55d3aaf6d5a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6d6b0 </usr/include/bits/mathcalls.h:189:17> col:17 implicit cbrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6d7b8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6d758 <<invalid sloc>> Implicit 298
| |-NoThrowAttr 0x55d3aaf6d828 <col:17> Implicit
| `-ConstAttr 0x55d3aaf6d850 <col:17> Implicit
|-FunctionDecl 0x55d3aaf6d878 prev 0x55d3aaf6d6b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:189:17 cbrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6d618 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| |-BuiltinAttr 0x55d3aaf6d980 <<invalid sloc>> Inherited Implicit 298
| |-ConstAttr 0x55d3aaf6d9b0 <col:17> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf6d928 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6da88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __cbrt 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6d9f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| `-NoThrowAttr 0x55d3aaf6db38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf3a0c0 </usr/include/bits/mathcalls.h:213:14> col:14 implicit ceil 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf3a1c8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf3a168 <<invalid sloc>> Implicit 317
| |-NoThrowAttr 0x55d3aaf3a238 <col:14> Implicit
| `-ConstAttr 0x55d3aaf3a260 <col:14> Implicit
|-FunctionDecl 0x55d3aaf3a288 prev 0x55d3aaf3a0c0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:213:14 ceil 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf6dba8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'double'
| |-BuiltinAttr 0x55d3aaf3a3b8 <<invalid sloc>> Inherited Implicit 317
| |-NoThrowAttr 0x55d3aaf3a338 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf3a390 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55d3aaf3a498 <line:216:14> col:14 implicit used fabs 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf3a5a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf3a540 <<invalid sloc>> Implicit 564
| |-NoThrowAttr 0x55d3aaf3a610 <col:14> Implicit
| `-ConstAttr 0x55d3aaf3a638 <col:14> Implicit
|-FunctionDecl 0x55d3aaf3a660 prev 0x55d3aaf3a498 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:216:14 used fabs 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf3a400 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'double'
| |-BuiltinAttr 0x55d3aaf3a790 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x55d3aaf3a710 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf3a768 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55d3aaf3a870 <line:219:14> col:14 implicit floor 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf3a978 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf3a918 <<invalid sloc>> Implicit 583
| |-NoThrowAttr 0x55d3aaf3a9e8 <col:14> Implicit
| `-ConstAttr 0x55d3aaf3aa10 <col:14> Implicit
|-FunctionDecl 0x55d3aaf3aa38 prev 0x55d3aaf3a870 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:219:14 floor 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf3a7d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'double'
| |-BuiltinAttr 0x55d3aaf3ab68 <<invalid sloc>> Inherited Implicit 583
| |-NoThrowAttr 0x55d3aaf3aae8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf3ab40 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55d3aaf3acd0 <line:222:13> col:13 implicit fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf3add8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf3ae40 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf3ad78 <<invalid sloc>> Implicit 631
| `-NoThrowAttr 0x55d3aaf3aeb8 <col:13> Implicit
|-FunctionDecl 0x55d3aaf3aee0 prev 0x55d3aaf3acd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:222:13 fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf3abb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf3ac30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| |-BuiltinAttr 0x55d3aaf3aff0 <<invalid sloc>> Inherited Implicit 631
| `-NoThrowAttr 0x55d3aaf3af98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7b080 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:131:1 __fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf3b038 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf7afe0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| `-NoThrowAttr 0x55d3aaf7b138 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7b240 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> line:231:23 isinf 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf7b1a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'double'
| |-NoThrowAttr 0x55d3aaf7b2f0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf7b348 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55d3aaf7b420 <line:237:23> col:23 implicit finite 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf7b528 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7b4c8 <<invalid sloc>> Implicit 578
| |-NoThrowAttr 0x55d3aaf7b598 <col:23> Implicit
| `-ConstAttr 0x55d3aaf7b5c0 <col:23> Implicit
|-FunctionDecl 0x55d3aaf7b5e8 prev 0x55d3aaf7b420 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> line:237:23 finite 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf7b388 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'double'
| |-BuiltinAttr 0x55d3aaf7b718 <<invalid sloc>> Inherited Implicit 578
| |-NoThrowAttr 0x55d3aaf7b698 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf7b6f0 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55d3aaf7b880 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:241:13 drem 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7b760 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf7b7e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x55d3aaf7b938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7bac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:132:1 __drem 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7b9a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf7ba28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x55d3aaf7bb80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7bc88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:245:13 significand 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7bbf0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x55d3aaf7bd38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7be40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 __significand 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7bda8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x55d3aaf7bef0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6f510 </usr/include/bits/mathcalls.h:252:14> col:14 implicit copysign 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf6f618 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf6f680 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf6f5b8 <<invalid sloc>> Implicit 361
| |-NoThrowAttr 0x55d3aaf6f6f8 <col:14> Implicit
| `-ConstAttr 0x55d3aaf6f720 <col:14> Implicit
|-FunctionDecl 0x55d3aaf6f748 prev 0x55d3aaf6f510 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:252:14 copysign 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7bf60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf6f470 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'double'
| |-BuiltinAttr 0x55d3aaf6f880 <<invalid sloc>> Inherited Implicit 361
| |-NoThrowAttr 0x55d3aaf6f800 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf6f858 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55d3aaf6f998 <line:257:13> col:13 implicit nan 'double (const char *)' extern
| |-ParmVarDecl 0x55d3aaf6faa0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aaf6fa40 <<invalid sloc>> Implicit 973
| |-NoThrowAttr 0x55d3aaf6fb10 <col:13> Implicit
| `-PureAttr 0x55d3aaf6fb38 <col:13> Implicit
|-FunctionDecl 0x55d3aaf6fb60 prev 0x55d3aaf6f998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:257:13 nan 'double (const char *)' extern
| |-ParmVarDecl 0x55d3aaf6f8c8 <col:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55d3aaf6fc68 <<invalid sloc>> Inherited Implicit 973
| |-PureAttr 0x55d3aaf6fc98 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf6fc10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6fd70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:134:1 __nan 'double (const char *)' extern
| |-ParmVarDecl 0x55d3aaf6fcd8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55d3aaf6fe20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6ff28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> line:267:23 isnan 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf6fe90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'double'
| |-NoThrowAttr 0x55d3aaf6ffd8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf70030 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55d3aaf70108 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:274:13 j0 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf70070 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x55d3aaf701b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf702c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __j0 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf70228 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x55d3aaf70370 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf704b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:275:13 j1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf703e0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x55d3aaf70560 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf70668 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:136:1 __j1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf705d0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x55d3aaf70718 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf708e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:276:13 jn 'double (int, double)' extern
| |-ParmVarDecl 0x55d3aaf70788 <col:19> col:22 'int'
| |-ParmVarDecl 0x55d3aaf70808 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x55d3aaf709a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf70b30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:137:1 __jn 'double (int, double)' extern
| |-ParmVarDecl 0x55d3aaf70a10 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55d3aaf70a90 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x55d3aaf70be8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf70cf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:277:13 y0 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf70c58 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x55d3aaf70da0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf70ea8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 __y0 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf70e10 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x55d3aaf70f58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf71060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:278:13 y1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf70fc8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x55d3aaf71110 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf71218 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:139:1 __y1 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf71180 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x55d3aaf712c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7d3f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:279:13 yn 'double (int, double)' extern
| |-ParmVarDecl 0x55d3aaf71338 <col:19> col:22 'int'
| |-ParmVarDecl 0x55d3aaf713b8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x55d3aaf7d4a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7d638 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __yn 'double (int, double)' extern
| |-ParmVarDecl 0x55d3aaf7d518 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55d3aaf7d598 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x55d3aaf7d6f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7d7f8 </usr/include/bits/mathcalls.h:285:17> col:17 implicit erf 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7d900 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7d8a0 <<invalid sloc>> Implicit 503
| `-NoThrowAttr 0x55d3aaf7d970 <col:17> Implicit
|-FunctionDecl 0x55d3aaf7d998 prev 0x55d3aaf7d7f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:285:17 erf 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7d760 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| |-BuiltinAttr 0x55d3aaf7daa0 <<invalid sloc>> Inherited Implicit 503
| `-NoThrowAttr 0x55d3aaf7da48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7db80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:142:1 __erf 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7dae8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| `-NoThrowAttr 0x55d3aaf7dc30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7dd38 </usr/include/bits/mathcalls.h:286:17> col:17 implicit erfc 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7de40 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7dde0 <<invalid sloc>> Implicit 510
| `-NoThrowAttr 0x55d3aaf7deb0 <col:17> Implicit
|-FunctionDecl 0x55d3aaf7ded8 prev 0x55d3aaf7dd38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:286:17 erfc 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7dca0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| |-BuiltinAttr 0x55d3aaf7dfe0 <<invalid sloc>> Inherited Implicit 510
| `-NoThrowAttr 0x55d3aaf7df88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7e0c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:144:1 __erfc 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e028 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| `-NoThrowAttr 0x55d3aaf7e170 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7e278 </usr/include/bits/mathcalls.h:287:13> col:13 implicit lgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e380 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7e320 <<invalid sloc>> Implicit 848
| `-NoThrowAttr 0x55d3aaf7e400 <col:13> Implicit
|-FunctionDecl 0x55d3aaf7e428 prev 0x55d3aaf7e278 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:287:13 lgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e1e0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| |-BuiltinAttr 0x55d3aaf7e530 <<invalid sloc>> Inherited Implicit 848
| `-NoThrowAttr 0x55d3aaf7e4d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7e610 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __lgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e578 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| `-NoThrowAttr 0x55d3aaf7e6c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7e7c8 </usr/include/bits/mathcalls.h:292:13> col:13 implicit tgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e8d0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7e870 <<invalid sloc>> Implicit 1418
| `-NoThrowAttr 0x55d3aaf7e940 <col:13> Implicit
|-FunctionDecl 0x55d3aaf7e968 prev 0x55d3aaf7e7c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:292:13 tgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7e730 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| |-BuiltinAttr 0x55d3aaf7ea70 <<invalid sloc>> Inherited Implicit 1418
| `-NoThrowAttr 0x55d3aaf7ea18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7eb50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:146:1 __tgamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7eab8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| `-NoThrowAttr 0x55d3aaf7ec00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7ed08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:298:13 gamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7ec70 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x55d3aaf7edb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7eec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:147:1 __gamma 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7ee28 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x55d3aaf7ef70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7f100 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x55d3aaf7efe0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x55d3aaf7f060 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aaf7f1b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7f348 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x55d3aaf7f228 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x55d3aaf7f2a8 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aaf7f410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7f518 </usr/include/bits/mathcalls.h:313:13> col:13 implicit rint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7f620 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7f5c0 <<invalid sloc>> Implicit 1102
| |-ConstAttr 0x55d3aaf7f690 <col:13> Implicit
| `-NoThrowAttr 0x55d3aaf7f6b8 <col:13> Implicit
|-FunctionDecl 0x55d3aaf7f6e0 prev 0x55d3aaf7f518 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:313:13 rint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7f480 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| |-BuiltinAttr 0x55d3aaf7f7e8 <<invalid sloc>> Inherited Implicit 1102
| |-ConstAttr 0x55d3aaf7f818 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf7f790 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7f8f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:151:1 __rint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf7f858 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| `-NoThrowAttr 0x55d3aaf7f9a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7fb30 </usr/include/bits/mathcalls.h:316:13> col:13 implicit nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7fc38 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf7fca0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf7fbd8 <<invalid sloc>> Implicit 993
| `-NoThrowAttr 0x55d3aaf7fd18 <col:13> Implicit
|-FunctionDecl 0x55d3aaf7fd40 prev 0x55d3aaf7fb30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:316:13 nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7fa10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf7fa90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| |-BuiltinAttr 0x55d3aaf7fe50 <<invalid sloc>> Inherited Implicit 993
| `-NoThrowAttr 0x55d3aaf7fdf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf7ffb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:152:1 __nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf7fe98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf7ff18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| `-NoThrowAttr 0x55d3aaf80070 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf80248 </usr/include/bits/mathcalls.h:318:13> col:13 implicit nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55d3aaf80350 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf81430 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf802f0 <<invalid sloc>> Implicit 1000
| `-NoThrowAttr 0x55d3aaf814a8 <col:13> Implicit
|-FunctionDecl 0x55d3aaf814d0 prev 0x55d3aaf80248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:318:13 nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55d3aaf800e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x55d3aaf80160 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55d3aaf815e0 <<invalid sloc>> Inherited Implicit 1000
| `-NoThrowAttr 0x55d3aaf81588 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf81748 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 __nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55d3aaf81628 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x55d3aaf816a8 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55d3aaf81800 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf81990 </usr/include/bits/mathcalls.h:329:13> col:13 implicit remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf81a98 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf81b00 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf81a38 <<invalid sloc>> Implicit 1084
| `-NoThrowAttr 0x55d3aaf81b78 <col:13> Implicit
|-FunctionDecl 0x55d3aaf81ba0 prev 0x55d3aaf81990 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:329:13 remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf81870 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf818f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| |-BuiltinAttr 0x55d3aaf81cb0 <<invalid sloc>> Inherited Implicit 1084
| `-NoThrowAttr 0x55d3aaf81c58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf81e18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf81cf8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x55d3aaf81d78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| `-NoThrowAttr 0x55d3aaf81ed0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf82060 </usr/include/bits/mathcalls.h:333:13> col:13 implicit scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf82168 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf821d0 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf82108 <<invalid sloc>> Implicit 1158
| `-NoThrowAttr 0x55d3aaf82248 <col:13> Implicit
|-FunctionDecl 0x55d3aaf82270 prev 0x55d3aaf82060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:333:13 scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf81f40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x55d3aaf81fc0 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55d3aaf82380 <<invalid sloc>> Inherited Implicit 1158
| `-NoThrowAttr 0x55d3aaf82328 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf824f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:156:1 __scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55d3aaf823c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x55d3aaf82458 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55d3aaf825b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf826b8 </usr/include/bits/mathcalls.h:337:17> col:17 implicit ilogb 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf827c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf82760 <<invalid sloc>> Implicit 739
| `-NoThrowAttr 0x55d3aaf82830 <col:17> Implicit
|-FunctionDecl 0x55d3aaf82858 prev 0x55d3aaf826b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:337:17 ilogb 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf82620 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf82960 <<invalid sloc>> Inherited Implicit 739
| `-NoThrowAttr 0x55d3aaf82908 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf82a40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:157:1 __ilogb 'int (double)' extern
| |-ParmVarDecl 0x55d3aaf829a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf82af0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf82cc8 </usr/include/bits/mathcalls.h:347:13> col:13 implicit scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55d3aaf82dd0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf82e38 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55d3aaf82d70 <<invalid sloc>> Implicit 1152
| `-NoThrowAttr 0x55d3aaf82eb0 <col:13> Implicit
|-FunctionDecl 0x55d3aaf82ed8 prev 0x55d3aaf82cc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:347:13 scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55d3aaf82b60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x55d3aaf82be0 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55d3aaf82fe8 <<invalid sloc>> Inherited Implicit 1152
| `-NoThrowAttr 0x55d3aaf82f90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf83150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:159:1 __scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55d3aaf83030 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x55d3aaf830b0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55d3aaf83208 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf83310 </usr/include/bits/mathcalls.h:351:13> col:13 implicit nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83450 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf833b8 <<invalid sloc>> Implicit 986
| |-NoThrowAttr 0x55d3aaf834c0 <col:13> Implicit
| `-ConstAttr 0x55d3aaf834e8 <col:13> Implicit
|-FunctionDecl 0x55d3aaf83510 prev 0x55d3aaf83310 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:351:13 nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83278 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| |-BuiltinAttr 0x55d3aaf83618 <<invalid sloc>> Inherited Implicit 986
| |-ConstAttr 0x55d3aaf83648 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf835c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf83720 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83688 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| `-NoThrowAttr 0x55d3aaf837d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf838d8 </usr/include/bits/mathcalls.h:355:14> col:14 implicit round 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf839e0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf83980 <<invalid sloc>> Implicit 1126
| |-NoThrowAttr 0x55d3aaf83a50 <col:14> Implicit
| `-ConstAttr 0x55d3aaf83a78 <col:14> Implicit
|-FunctionDecl 0x55d3aaf83aa0 prev 0x55d3aaf838d8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:355:14 round 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83840 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'double'
| |-BuiltinAttr 0x55d3aaf83bd0 <<invalid sloc>> Inherited Implicit 1126
| |-NoThrowAttr 0x55d3aaf83b50 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf83ba8 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55d3aaf83cb0 <line:359:14> col:14 implicit trunc 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83db8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf83d58 <<invalid sloc>> Implicit 1432
| |-NoThrowAttr 0x55d3aaf83e28 <col:14> Implicit
| `-ConstAttr 0x55d3aaf83e50 <col:14> Implicit
|-FunctionDecl 0x55d3aaf83e78 prev 0x55d3aaf83cb0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:359:14 trunc 'double (double)' extern
| |-ParmVarDecl 0x55d3aaf83c18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'double'
| |-BuiltinAttr 0x55d3aaf83fa8 <<invalid sloc>> Inherited Implicit 1432
| |-NoThrowAttr 0x55d3aaf83f28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf83f80 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55d3aaf841e8 <line:364:13> col:13 implicit remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55d3aaf842f0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf84358 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf843c0 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aaf84290 <<invalid sloc>> Implicit 1091
| `-NoThrowAttr 0x55d3aaf849d0 <col:13> Implicit
|-FunctionDecl 0x55d3aaf849f8 prev 0x55d3aaf841e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:364:13 remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55d3aaf83ff0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x55d3aaf84070 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x55d3aaf840f0 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55d3aaf84b10 <<invalid sloc>> Inherited Implicit 1091
| `-NoThrowAttr 0x55d3aaf84ab8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf84d00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:161:1 __remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55d3aaf84b58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x55d3aaf84bd8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x55d3aaf84c58 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55d3aaf84dc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf84f08 </usr/include/bits/mathcalls.h:371:22> col:22 implicit lrint 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf85010 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf84fb0 <<invalid sloc>> Implicit 908
| `-NoThrowAttr 0x55d3aaf85080 <col:22> Implicit
|-FunctionDecl 0x55d3aaf850a8 prev 0x55d3aaf84f08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:371:22 lrint 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf84e30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| |-BuiltinAttr 0x55d3aaf851b0 <<invalid sloc>> Inherited Implicit 908
| `-NoThrowAttr 0x55d3aaf85158 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf85290 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:162:1 __lrint 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf851f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| `-NoThrowAttr 0x55d3aaf85340 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf85488 </usr/include/bits/mathcalls.h:373:27> col:27 implicit llrint 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf85590 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf85530 <<invalid sloc>> Implicit 855
| `-NoThrowAttr 0x55d3aaf85600 <col:27> Implicit
|-FunctionDecl 0x55d3aaf85628 prev 0x55d3aaf85488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:373:27 llrint 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf853b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| |-BuiltinAttr 0x55d3aaf85730 <<invalid sloc>> Inherited Implicit 855
| `-NoThrowAttr 0x55d3aaf856d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf85810 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 __llrint 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf85778 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| `-NoThrowAttr 0x55d3aaf858c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf85b60 </usr/include/bits/mathcalls.h:377:22> col:22 implicit lround 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf85c68 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf85c08 <<invalid sloc>> Implicit 917
| `-NoThrowAttr 0x55d3aaf85cd8 <col:22> Implicit
|-FunctionDecl 0x55d3aaf85d00 prev 0x55d3aaf85b60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:377:22 lround 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf85930 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| |-BuiltinAttr 0x55d3aaf85e08 <<invalid sloc>> Inherited Implicit 917
| `-NoThrowAttr 0x55d3aaf85db0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf85ee8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:164:1 __lround 'long (double)' extern
| |-ParmVarDecl 0x55d3aaf85e50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| `-NoThrowAttr 0x55d3aaf85f98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf860a0 </usr/include/bits/mathcalls.h:379:27> col:27 implicit llround 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf861a8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf86148 <<invalid sloc>> Implicit 861
| `-NoThrowAttr 0x55d3aaf86218 <col:27> Implicit
|-FunctionDecl 0x55d3aaf86240 prev 0x55d3aaf860a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:379:27 llround 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf86008 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| |-BuiltinAttr 0x55d3aaf86348 <<invalid sloc>> Inherited Implicit 861
| `-NoThrowAttr 0x55d3aaf862f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf86428 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __llround 'long long (double)' extern
| |-ParmVarDecl 0x55d3aaf86390 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| `-NoThrowAttr 0x55d3aaf864d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf86668 </usr/include/bits/mathcalls.h:383:13> col:13 implicit fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf86770 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf867d8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf86710 <<invalid sloc>> Implicit 573
| `-NoThrowAttr 0x55d3aaf86850 <col:13> Implicit
|-FunctionDecl 0x55d3aaf86878 prev 0x55d3aaf86668 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:383:13 fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf86548 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf865c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| |-BuiltinAttr 0x55d3aaf86988 <<invalid sloc>> Inherited Implicit 573
| `-NoThrowAttr 0x55d3aaf86930 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf86c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:166:1 __fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf869d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x55d3aaf86a50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| `-NoThrowAttr 0x55d3aaf86cf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf86e88 </usr/include/bits/mathcalls.h:387:14> col:14 implicit fmax 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf86f90 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf86ff8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf86f30 <<invalid sloc>> Implicit 599
| |-NoThrowAttr 0x55d3aaf87070 <col:14> Implicit
| `-ConstAttr 0x55d3aaf87098 <col:14> Implicit
|-FunctionDecl 0x55d3aaf870c0 prev 0x55d3aaf86e88 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:387:14 fmax 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf86d68 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf86de8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'double'
| |-BuiltinAttr 0x55d3aaf871f8 <<invalid sloc>> Inherited Implicit 599
| |-NoThrowAttr 0x55d3aaf87178 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf871d0 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55d3aaf87360 <line:390:14> col:14 implicit fmin 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf87468 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf874d0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf87408 <<invalid sloc>> Implicit 615
| |-NoThrowAttr 0x55d3aaf87548 <col:14> Implicit
| `-ConstAttr 0x55d3aaf87570 <col:14> Implicit
|-FunctionDecl 0x55d3aaf87598 prev 0x55d3aaf87360 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:390:14 fmin 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf87240 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf872c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'double'
| |-BuiltinAttr 0x55d3aaf876d0 <<invalid sloc>> Inherited Implicit 615
| |-NoThrowAttr 0x55d3aaf87650 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf876a8 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55d3aaf87908 <line:394:13> col:13 implicit fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55d3aaf87a10 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf87a78 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55d3aaf87ae0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55d3aaf879b0 <<invalid sloc>> Implicit 591
| |-ConstAttr 0x55d3aaf87b60 <col:13> Implicit
| `-NoThrowAttr 0x55d3aaf87b88 <col:13> Implicit
|-FunctionDecl 0x55d3aaf87df0 prev 0x55d3aaf87908 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:394:13 fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55d3aaf87718 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x55d3aaf87798 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x55d3aaf87818 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| |-BuiltinAttr 0x55d3aaf87f08 <<invalid sloc>> Inherited Implicit 591
| |-ConstAttr 0x55d3aaf87f38 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf87eb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf88120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:168:1 __fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55d3aaf87f78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x55d3aaf87ff8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x55d3aaf88078 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| `-NoThrowAttr 0x55d3aaf881e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf88370 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:489:13 scalb 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf88250 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf882d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x55d3aaf88428 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf885b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 __scalb 'double (double, double)' extern
| |-ParmVarDecl 0x55d3aaf88498 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x55d3aaf88518 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x55d3aaf88670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf887b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:175:1 __fpclassifyf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf886e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'float'
| |-NoThrowAttr 0x55d3aaf88868 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf888c0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55d3aaf88998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:176:1 __signbitf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf88900 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'float'
| |-NoThrowAttr 0x55d3aaf88a48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf88aa0 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55d3aaf88b78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:177:1 __isinff 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf88ae0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'float'
| |-NoThrowAttr 0x55d3aaf88c28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf88c80 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55d3aaf8a330 <<scratch space>:178:1> col:1 implicit __finitef 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf8a438 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8a3d8 <<invalid sloc>> Implicit 1012
| |-NoThrowAttr 0x55d3aaf8a4a8 <col:1> Implicit
| `-ConstAttr 0x55d3aaf8a4d0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8a4f8 prev 0x55d3aaf8a330 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:178:1 __finitef 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf88cc0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'float'
| |-BuiltinAttr 0x55d3aaf8a628 <<invalid sloc>> Inherited Implicit 1012
| |-NoThrowAttr 0x55d3aaf8a5a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf8a600 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55d3aaf8a708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:179:1 __isnanf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf8a670 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'float'
| |-NoThrowAttr 0x55d3aaf8a7b8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf8a810 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55d3aaf8a9b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:180:1 __iseqsigf 'int (float, float)' extern
| |-ParmVarDecl 0x55d3aaf8a850 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'float'
| |-ParmVarDecl 0x55d3aaf8a8d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'float'
| `-NoThrowAttr 0x55d3aaf8aa70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ab78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:181:1 __issignalingf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf8aae0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'float'
| |-NoThrowAttr 0x55d3aaf8ac28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf8ac80 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55d3aaf8ad98 <<scratch space>:184:1> col:1 implicit acosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8aea0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8ae40 <<invalid sloc>> Implicit 101
| `-NoThrowAttr 0x55d3aaf8af10 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8af38 prev 0x55d3aaf8ad98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8acc0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8b040 <<invalid sloc>> Inherited Implicit 101
| `-NoThrowAttr 0x55d3aaf8afe8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8b120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8b088 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8b1d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8b4e0 <<scratch space>:189:1> col:1 implicit asinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8b5e8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8b588 <<invalid sloc>> Implicit 136
| `-NoThrowAttr 0x55d3aaf8b658 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8b680 prev 0x55d3aaf8b4e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8b240 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8b788 <<invalid sloc>> Inherited Implicit 136
| `-NoThrowAttr 0x55d3aaf8b730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8b868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8b7d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8b918 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ba20 <<scratch space>:194:1> col:1 implicit atanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8bb28 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8bac8 <<invalid sloc>> Implicit 153
| `-NoThrowAttr 0x55d3aaf8bb98 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8bbc0 prev 0x55d3aaf8ba20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8b988 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8bcc8 <<invalid sloc>> Inherited Implicit 153
| `-NoThrowAttr 0x55d3aaf8bc70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8bda8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8bd10 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8be58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8c028 <<scratch space>:199:1> col:1 implicit atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf8c130 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf8c198 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8c0d0 <<invalid sloc>> Implicit 159
| `-NoThrowAttr 0x55d3aaf8c210 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8c238 prev 0x55d3aaf8c028 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf8bec8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x55d3aaf8bf48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| |-BuiltinAttr 0x55d3aaf8c348 <<invalid sloc>> Inherited Implicit 159
| `-NoThrowAttr 0x55d3aaf8c2f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8c4f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf8c390 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x55d3aaf8c410 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| `-NoThrowAttr 0x55d3aaf8c5a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8c6b0 <<scratch space>:204:1> col:1 implicit cosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8c7b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8c758 <<invalid sloc>> Implicit 381
| `-NoThrowAttr 0x55d3aaf8c828 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8c850 prev 0x55d3aaf8c6b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 cosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8c618 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| |-BuiltinAttr 0x55d3aaf8c958 <<invalid sloc>> Inherited Implicit 381
| `-NoThrowAttr 0x55d3aaf8c900 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ca38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:206:1 __cosf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8c9a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| `-NoThrowAttr 0x55d3aaf8cae8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8cbf0 <<scratch space>:209:1> col:1 implicit sinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8ccf8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8cc98 <<invalid sloc>> Implicit 1177
| `-NoThrowAttr 0x55d3aaf8cd68 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8cd90 prev 0x55d3aaf8cbf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:209:1 sinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8cb58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| |-BuiltinAttr 0x55d3aaf8ce98 <<invalid sloc>> Inherited Implicit 1177
| `-NoThrowAttr 0x55d3aaf8ce40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8cf78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:211:1 __sinf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8cee0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| `-NoThrowAttr 0x55d3aaf8d028 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8d130 <<scratch space>:214:1> col:1 implicit tanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d238 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8d1d8 <<invalid sloc>> Implicit 1398
| `-NoThrowAttr 0x55d3aaf8d2a8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8d2d0 prev 0x55d3aaf8d130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:214:1 tanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d098 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| |-BuiltinAttr 0x55d3aaf8d3d8 <<invalid sloc>> Inherited Implicit 1398
| `-NoThrowAttr 0x55d3aaf8d380 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8d500 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:216:1 __tanf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d420 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| `-NoThrowAttr 0x55d3aaf8d5b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8d6b8 <<scratch space>:220:1> col:1 implicit coshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d7c0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8d760 <<invalid sloc>> Implicit 389
| `-NoThrowAttr 0x55d3aaf8d830 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8d858 prev 0x55d3aaf8d6b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:220:1 coshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d620 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8d960 <<invalid sloc>> Inherited Implicit 389
| `-NoThrowAttr 0x55d3aaf8d908 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8da40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:222:1 __coshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8d9a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8daf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8dbf8 <<scratch space>:225:1> col:1 implicit sinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8dd00 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8dca0 <<invalid sloc>> Implicit 1196
| `-NoThrowAttr 0x55d3aaf8dd70 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8dd98 prev 0x55d3aaf8dbf8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:225:1 sinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8db60 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8dea0 <<invalid sloc>> Inherited Implicit 1196
| `-NoThrowAttr 0x55d3aaf8de48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8df80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:227:1 __sinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8dee8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8e030 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8e138 <<scratch space>:230:1> col:1 implicit tanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e240 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8e1e0 <<invalid sloc>> Implicit 1406
| `-NoThrowAttr 0x55d3aaf8e2b0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8e2d8 prev 0x55d3aaf8e138 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:230:1 tanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e0a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf8e3e0 <<invalid sloc>> Inherited Implicit 1406
| `-NoThrowAttr 0x55d3aaf8e388 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8e510 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 __tanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e428 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf8e5c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8e6c8 <<scratch space>:235:1> col:1 implicit acoshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e7d0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8e770 <<invalid sloc>> Implicit 109
| `-NoThrowAttr 0x55d3aaf8e840 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8e868 prev 0x55d3aaf8e6c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:235:1 acoshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e630 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf8e970 <<invalid sloc>> Inherited Implicit 109
| `-NoThrowAttr 0x55d3aaf8e918 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ea50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 __acoshf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8e9b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf8eb00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ec08 <<scratch space>:240:1> col:1 implicit asinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8ed10 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8ecb0 <<invalid sloc>> Implicit 144
| `-NoThrowAttr 0x55d3aaf8ed80 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8eda8 prev 0x55d3aaf8ec08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:240:1 asinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8eb70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf8eeb0 <<invalid sloc>> Inherited Implicit 144
| `-NoThrowAttr 0x55d3aaf8ee58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8ef90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 __asinhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8eef8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf8f040 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8f148 <<scratch space>:245:1> col:1 implicit atanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f250 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8f1f0 <<invalid sloc>> Implicit 169
| `-NoThrowAttr 0x55d3aaf8f2c0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8f2e8 prev 0x55d3aaf8f148 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:245:1 atanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f0b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf8f3f0 <<invalid sloc>> Inherited Implicit 169
| `-NoThrowAttr 0x55d3aaf8f398 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8f520 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 __atanhf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f438 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf8f5d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8f6d8 <<scratch space>:250:1> col:1 implicit expf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f7e0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf8f780 <<invalid sloc>> Implicit 521
| `-NoThrowAttr 0x55d3aaf8f850 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8f878 prev 0x55d3aaf8f6d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 expf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f640 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| |-BuiltinAttr 0x55d3aaf8f980 <<invalid sloc>> Inherited Implicit 521
| `-NoThrowAttr 0x55d3aaf8f928 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8fa60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __expf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf8f9c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| `-NoThrowAttr 0x55d3aaf8fb10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf8fce8 <<scratch space>:253:1> col:1 implicit frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55d3aaf8fdf0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf8fe58 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aaf8fd90 <<invalid sloc>> Implicit 643
| `-NoThrowAttr 0x55d3aaf8fed0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf8fef8 prev 0x55d3aaf8fce8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:253:1 frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55d3aaf8fb80 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aaf8fc00 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55d3aaf90008 <<invalid sloc>> Inherited Implicit 643
| `-NoThrowAttr 0x55d3aaf8ffb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf90170 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 __frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55d3aaf90050 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aaf900d0 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55d3aaf90228 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf903f8 <<scratch space>:256:1> col:1 implicit ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf90a10 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf90a78 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf904a0 <<invalid sloc>> Implicit 838
| `-NoThrowAttr 0x55d3aaf90af0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf90b18 prev 0x55d3aaf903f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:256:1 ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf90298 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aaf90318 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55d3aaf90c28 <<invalid sloc>> Inherited Implicit 838
| `-NoThrowAttr 0x55d3aaf90bd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf90d90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:258:1 __ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf90c70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aaf90cf0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55d3aaf90e48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf90f50 <<scratch space>:261:1> col:1 implicit logf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf91058 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf90ff8 <<invalid sloc>> Implicit 867
| `-NoThrowAttr 0x55d3aaf910c8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf910f0 prev 0x55d3aaf90f50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:261:1 logf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf90eb8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| |-BuiltinAttr 0x55d3aaf911f8 <<invalid sloc>> Inherited Implicit 867
| `-NoThrowAttr 0x55d3aaf911a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf912d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:263:1 __logf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf91240 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| `-NoThrowAttr 0x55d3aaf91388 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf91490 <<scratch space>:266:1> col:1 implicit log10f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf91598 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf91538 <<invalid sloc>> Implicit 888
| `-NoThrowAttr 0x55d3aaf91608 <col:1> Implicit
|-FunctionDecl 0x55d3aaf91630 prev 0x55d3aaf91490 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:266:1 log10f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf913f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf91738 <<invalid sloc>> Inherited Implicit 888
| `-NoThrowAttr 0x55d3aaf916e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf91818 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:268:1 __log10f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf91780 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf918c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf91b08 <<scratch space>:269:1> col:1 implicit modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55d3aaf91c10 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf91c78 <<invalid sloc>> <invalid sloc> 'float *'
| |-BuiltinAttr 0x55d3aaf91bb0 <<invalid sloc>> Implicit 959
| `-NoThrowAttr 0x55d3aaf91cf0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf91d18 prev 0x55d3aaf91b08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55d3aaf91938 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aaf91a20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-BuiltinAttr 0x55d3aaf91e28 <<invalid sloc>> Inherited Implicit 959
| `-NoThrowAttr 0x55d3aaf91dd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf91fb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:271:1 __modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55d3aaf91e70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aaf91ef0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-NoThrowAttr 0x55d3aaf92068 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aaf920c0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55d3aaf921b8 <<scratch space>:275:1> col:1 implicit expm1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf922c0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf92260 <<invalid sloc>> Implicit 544
| `-NoThrowAttr 0x55d3aaf92330 <col:1> Implicit
|-FunctionDecl 0x55d3aaf92358 prev 0x55d3aaf921b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 expm1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92120 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf92460 <<invalid sloc>> Inherited Implicit 544
| `-NoThrowAttr 0x55d3aaf92408 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf92540 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __expm1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf924a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf925f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf926f8 <<scratch space>:280:1> col:1 implicit log1pf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92800 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf927a0 <<invalid sloc>> Implicit 873
| `-NoThrowAttr 0x55d3aaf92870 <col:1> Implicit
|-FunctionDecl 0x55d3aaf92898 prev 0x55d3aaf926f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:280:1 log1pf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92660 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aaf929a0 <<invalid sloc>> Inherited Implicit 873
| `-NoThrowAttr 0x55d3aaf92948 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf92ac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:282:1 __log1pf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92a30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aaf92b78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf92c80 <<scratch space>:283:1> col:1 implicit logbf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92d88 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf92d28 <<invalid sloc>> Implicit 898
| `-NoThrowAttr 0x55d3aaf92df8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf92e20 prev 0x55d3aaf92c80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 logbf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92be8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| |-BuiltinAttr 0x55d3aaf92f28 <<invalid sloc>> Inherited Implicit 898
| `-NoThrowAttr 0x55d3aaf92ed0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf93008 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __logbf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf92f70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| `-NoThrowAttr 0x55d3aaf930b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf931c0 <<scratch space>:288:1> col:1 implicit exp2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf932c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf93268 <<invalid sloc>> Implicit 527
| `-NoThrowAttr 0x55d3aaf93338 <col:1> Implicit
|-FunctionDecl 0x55d3aaf93360 prev 0x55d3aaf931c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 exp2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf93128 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf93468 <<invalid sloc>> Inherited Implicit 527
| `-NoThrowAttr 0x55d3aaf93410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf93548 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:290:1 __exp2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf934b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf935f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf93700 <<scratch space>:293:1> col:1 implicit log2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf93808 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf937a8 <<invalid sloc>> Implicit 880
| `-NoThrowAttr 0x55d3aaf93878 <col:1> Implicit
|-FunctionDecl 0x55d3aaf938a0 prev 0x55d3aaf93700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:293:1 log2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf93668 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf939a8 <<invalid sloc>> Inherited Implicit 880
| `-NoThrowAttr 0x55d3aaf93950 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf93ad8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 __log2f 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf93a40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf93b88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf93d18 <<scratch space>:298:1> col:1 implicit powf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf93e20 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf93e88 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf93dc0 <<invalid sloc>> Implicit 1046
| `-NoThrowAttr 0x55d3aaf93f00 <col:1> Implicit
|-FunctionDecl 0x55d3aaf93f28 prev 0x55d3aaf93d18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 powf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf93bf8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x55d3aaf93c78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| |-BuiltinAttr 0x55d3aaf94038 <<invalid sloc>> Inherited Implicit 1046
| `-NoThrowAttr 0x55d3aaf93fe0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf941a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __powf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf94080 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x55d3aaf94100 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| `-NoThrowAttr 0x55d3aaf94258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf94360 <<scratch space>:301:1> col:1 implicit sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf94468 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf94408 <<invalid sloc>> Implicit 1211
| `-NoThrowAttr 0x55d3aaf944d8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf94500 prev 0x55d3aaf94360 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:301:1 sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf942c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| |-BuiltinAttr 0x55d3aaf94608 <<invalid sloc>> Inherited Implicit 1211
| `-NoThrowAttr 0x55d3aaf945b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf946e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 __sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf94650 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| `-NoThrowAttr 0x55d3aaf94798 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf94928 <<scratch space>:306:1> col:1 implicit hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf78fd0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf79038 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf949d0 <<invalid sloc>> Implicit 729
| `-NoThrowAttr 0x55d3aaf790b0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf790d8 prev 0x55d3aaf94928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:306:1 hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf94808 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aaf94888 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| |-BuiltinAttr 0x55d3aaf791e8 <<invalid sloc>> Inherited Implicit 729
| `-NoThrowAttr 0x55d3aaf79190 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf79350 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 __hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf79230 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aaf792b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| `-NoThrowAttr 0x55d3aaf79408 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf79510 <<scratch space>:311:1> col:1 implicit cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79618 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf795b8 <<invalid sloc>> Implicit 296
| |-NoThrowAttr 0x55d3aaf79688 <col:1> Implicit
| `-ConstAttr 0x55d3aaf796b0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf796d8 prev 0x55d3aaf79510 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79478 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| |-BuiltinAttr 0x55d3aaf797e0 <<invalid sloc>> Inherited Implicit 296
| |-ConstAttr 0x55d3aaf79810 <<scratch space>:311:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf79788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf798e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79850 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| `-NoThrowAttr 0x55d3aaf79998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf79aa0 <<scratch space>:3:1> col:1 implicit ceilf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79ba8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf79b48 <<invalid sloc>> Implicit 315
| |-NoThrowAttr 0x55d3aaf79c18 <col:1> Implicit
| `-ConstAttr 0x55d3aaf79c40 <col:1> Implicit
|-FunctionDecl 0x55d3aaf79c68 prev 0x55d3aaf79aa0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:3:1 ceilf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79a08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'float'
| |-BuiltinAttr 0x55d3aaf79d98 <<invalid sloc>> Inherited Implicit 315
| |-NoThrowAttr 0x55d3aaf79d18 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf79d70 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55d3aaf79e78 <<scratch space>:4:1> col:1 implicit used fabsf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa7430 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf79f20 <<invalid sloc>> Implicit 562
| |-NoThrowAttr 0x55d3aafa74a0 <col:1> Implicit
| `-ConstAttr 0x55d3aafa74c8 <col:1> Implicit
|-FunctionDecl 0x55d3aafa74f0 prev 0x55d3aaf79e78 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:4:1 used fabsf 'float (float)' extern
| |-ParmVarDecl 0x55d3aaf79de0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'float'
| |-BuiltinAttr 0x55d3aafa7620 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x55d3aafa75a0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa75f8 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55d3aafa7700 <<scratch space>:5:1> col:1 implicit floorf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa7808 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafa77a8 <<invalid sloc>> Implicit 581
| |-NoThrowAttr 0x55d3aafa7878 <col:1> Implicit
| `-ConstAttr 0x55d3aafa78a0 <col:1> Implicit
|-FunctionDecl 0x55d3aafa78c8 prev 0x55d3aafa7700 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:5:1 floorf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa7668 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'float'
| |-BuiltinAttr 0x55d3aafa79f8 <<invalid sloc>> Inherited Implicit 581
| |-NoThrowAttr 0x55d3aafa7978 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa79d0 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55d3aafa7b60 <<scratch space>:6:1> col:1 implicit fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa7c68 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafa7cd0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafa7c08 <<invalid sloc>> Implicit 629
| `-NoThrowAttr 0x55d3aafa7d48 <col:1> Implicit
|-FunctionDecl 0x55d3aafa7d70 prev 0x55d3aafa7b60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:6:1 fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa7a40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafa7ac0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| |-BuiltinAttr 0x55d3aafa7e80 <<invalid sloc>> Inherited Implicit 629
| `-NoThrowAttr 0x55d3aafa7e28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa7fe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:8:1 __fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa7ec8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafa7f48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| `-NoThrowAttr 0x55d3aafa80a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa81a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:9:1 isinff 'int (float)' extern
| |-ParmVarDecl 0x55d3aafa8110 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'float'
| |-NoThrowAttr 0x55d3aafa8258 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa82b0 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55d3aafa8388 <<scratch space>:10:1> col:1 implicit finitef 'int (float)' extern
| |-ParmVarDecl 0x55d3aafa84a0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafa8440 <<invalid sloc>> Implicit 577
| |-NoThrowAttr 0x55d3aafa8510 <col:1> Implicit
| `-ConstAttr 0x55d3aafa8538 <col:1> Implicit
|-FunctionDecl 0x55d3aafa8560 prev 0x55d3aafa8388 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:10:1 finitef 'int (float)' extern
| |-ParmVarDecl 0x55d3aafa82f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'float'
| |-BuiltinAttr 0x55d3aafa8690 <<invalid sloc>> Inherited Implicit 577
| |-NoThrowAttr 0x55d3aafa8610 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa8668 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55d3aafa87f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:11:1 dremf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa86d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafa8758 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x55d3aafa88b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa8a40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:13:1 __dremf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa8920 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafa89a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x55d3aafa8af8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa8c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:14:1 significandf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa8b68 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x55d3aafa8cb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa8db8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:16:1 __significandf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa8d20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x55d3aafa8e68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa8ff8 <<scratch space>:17:1> col:1 implicit copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa9100 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafa9168 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafa90a0 <<invalid sloc>> Implicit 359
| |-NoThrowAttr 0x55d3aafa91e0 <col:1> Implicit
| `-ConstAttr 0x55d3aafa9208 <col:1> Implicit
|-FunctionDecl 0x55d3aafa9230 prev 0x55d3aafa8ff8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:17:1 copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafa8ed8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aafa8f58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'float'
| |-BuiltinAttr 0x55d3aafa9368 <<invalid sloc>> Inherited Implicit 359
| |-NoThrowAttr 0x55d3aafa92e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa9340 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55d3aafa94b8 <<scratch space>:18:1> col:1 implicit nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55d3aafa95c0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aafa9560 <<invalid sloc>> Implicit 971
| |-NoThrowAttr 0x55d3aafa9630 <col:1> Implicit
| `-PureAttr 0x55d3aafa9658 <col:1> Implicit
|-FunctionDecl 0x55d3aafa9680 prev 0x55d3aafa94b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:18:1 nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55d3aafa93b0 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55d3aafa9788 <<invalid sloc>> Inherited Implicit 971
| |-PureAttr 0x55d3aafa97b8 <<scratch space>:18:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafa9730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa9890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:20:1 __nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55d3aafa97f8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55d3aafa9940 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa9a48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:21:1 isnanf 'int (float)' extern
| |-ParmVarDecl 0x55d3aafa99b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'float'
| |-NoThrowAttr 0x55d3aafa9af8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafa9b50 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55d3aafa9c28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:22:1 j0f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa9b90 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x55d3aafa9cd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa9de0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:24:1 __j0f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa9d48 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x55d3aafa9e90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafa9f98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:25:1 j1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafa9f00 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x55d3aafaa048 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaa150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:27:1 __j1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafaa0b8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x55d3aafaa200 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaa460 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:28:1 jnf 'float (int, float)' extern
| |-ParmVarDecl 0x55d3aafaa270 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafaa2f0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x55d3aafaa518 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaa6a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:30:1 __jnf 'float (int, float)' extern
| |-ParmVarDecl 0x55d3aafaa588 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafaa608 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x55d3aafaa760 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaa868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:31:1 y0f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafaa7d0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x55d3aafaa918 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaaa20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:33:1 __y0f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafaa988 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x55d3aafaaad0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaabd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:34:1 y1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafaab40 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x55d3aafaac88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaad90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:36:1 __y1f 'float (float)' extern
| |-ParmVarDecl 0x55d3aafaacf8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x55d3aafaae40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaafd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:37:1 ynf 'float (int, float)' extern
| |-ParmVarDecl 0x55d3aafaaeb0 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafaaf30 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x55d3aafab088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafab218 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:39:1 __ynf 'float (int, float)' extern
| |-ParmVarDecl 0x55d3aafab0f8 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafab178 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x55d3aafab2d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafab470 <<scratch space>:42:1> col:1 implicit erff 'float (float)' extern
| |-ParmVarDecl 0x55d3aafab578 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafab518 <<invalid sloc>> Implicit 501
| `-NoThrowAttr 0x55d3aafab5e8 <col:1> Implicit
|-FunctionDecl 0x55d3aafab610 prev 0x55d3aafab470 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:42:1 erff 'float (float)' extern
| |-ParmVarDecl 0x55d3aafab340 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| |-BuiltinAttr 0x55d3aafab718 <<invalid sloc>> Inherited Implicit 501
| `-NoThrowAttr 0x55d3aafab6c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafab7f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:44:1 __erff 'float (float)' extern
| |-ParmVarDecl 0x55d3aafab760 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| `-NoThrowAttr 0x55d3aafab8a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafab9b0 <<scratch space>:47:1> col:1 implicit erfcf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafabab8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafaba58 <<invalid sloc>> Implicit 508
| `-NoThrowAttr 0x55d3aafabb28 <col:1> Implicit
|-FunctionDecl 0x55d3aafabb50 prev 0x55d3aafab9b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:47:1 erfcf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafab918 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| |-BuiltinAttr 0x55d3aafabc58 <<invalid sloc>> Inherited Implicit 508
| `-NoThrowAttr 0x55d3aafabc00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafabd38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:49:1 __erfcf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafabca0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| `-NoThrowAttr 0x55d3aafabde8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafabef0 <<scratch space>:50:1> col:1 implicit lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafabff8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafabf98 <<invalid sloc>> Implicit 846
| `-NoThrowAttr 0x55d3aafac068 <col:1> Implicit
|-FunctionDecl 0x55d3aafac090 prev 0x55d3aafabef0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:50:1 lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafabe58 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| |-BuiltinAttr 0x55d3aafac198 <<invalid sloc>> Inherited Implicit 846
| `-NoThrowAttr 0x55d3aafac140 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafac278 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:52:1 __lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafac1e0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| `-NoThrowAttr 0x55d3aafac328 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafac480 <<scratch space>:53:1> col:1 implicit tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafac588 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafac528 <<invalid sloc>> Implicit 1416
| `-NoThrowAttr 0x55d3aafac5f8 <col:1> Implicit
|-FunctionDecl 0x55d3aafac620 prev 0x55d3aafac480 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:53:1 tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafac398 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| |-BuiltinAttr 0x55d3aafac728 <<invalid sloc>> Inherited Implicit 1416
| `-NoThrowAttr 0x55d3aafac6d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafac808 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:55:1 __tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafac770 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| `-NoThrowAttr 0x55d3aafac8b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafac9c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:56:1 gammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafac928 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x55d3aafaca70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafacb78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:58:1 __gammaf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafacae0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x55d3aafacc28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafacdb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:60:1 lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x55d3aafacc98 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x55d3aafacd18 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aaface70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafad000 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:63:1 __lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x55d3aafacee0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x55d3aafacf60 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aafad0b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafad1c0 <<scratch space>:64:1> col:1 implicit rintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafad2c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafad268 <<invalid sloc>> Implicit 1100
| |-ConstAttr 0x55d3aafad338 <col:1> Implicit
| `-NoThrowAttr 0x55d3aafad360 <col:1> Implicit
|-FunctionDecl 0x55d3aafad388 prev 0x55d3aafad1c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:64:1 rintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafad128 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| |-BuiltinAttr 0x55d3aafae4d0 <<invalid sloc>> Inherited Implicit 1100
| |-ConstAttr 0x55d3aafae500 <<scratch space>:64:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafad438 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafae5d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:66:1 __rintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafae540 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| `-NoThrowAttr 0x55d3aafae688 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafae818 <<scratch space>:67:1> col:1 implicit nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafae920 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafae988 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafae8c0 <<invalid sloc>> Implicit 991
| `-NoThrowAttr 0x55d3aafaea00 <col:1> Implicit
|-FunctionDecl 0x55d3aafaea28 prev 0x55d3aafae818 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:67:1 nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafae6f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aafae778 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| |-BuiltinAttr 0x55d3aafaeb38 <<invalid sloc>> Inherited Implicit 991
| `-NoThrowAttr 0x55d3aafaeae0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaeca0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:69:1 __nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafaeb80 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aafaec00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| `-NoThrowAttr 0x55d3aafaed58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaef28 <<scratch space>:70:1> col:1 implicit nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55d3aafaf030 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafaf098 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafaefd0 <<invalid sloc>> Implicit 998
| `-NoThrowAttr 0x55d3aafaf110 <col:1> Implicit
|-FunctionDecl 0x55d3aafaf138 prev 0x55d3aafaef28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:70:1 nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55d3aafaedc8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x55d3aafaee48 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55d3aafaf248 <<invalid sloc>> Inherited Implicit 998
| `-NoThrowAttr 0x55d3aafaf1f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafaf3b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:72:1 __nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55d3aafaf290 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x55d3aafaf310 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55d3aafaf468 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6ad88 <<scratch space>:74:1> col:1 implicit remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf6ae90 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf6aef8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf6ae30 <<invalid sloc>> Implicit 1082
| `-NoThrowAttr 0x55d3aaf6af70 <col:1> Implicit
|-FunctionDecl 0x55d3aaf6af98 prev 0x55d3aaf6ad88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:74:1 remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf6ac68 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aaf6ace8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| |-BuiltinAttr 0x55d3aaf6b0a8 <<invalid sloc>> Inherited Implicit 1082
| `-NoThrowAttr 0x55d3aaf6b050 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6b210 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:76:1 __remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aaf6b0f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x55d3aaf6b170 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| `-NoThrowAttr 0x55d3aaf6b2c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6b458 <<scratch space>:77:1> col:1 implicit scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf6b560 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aaf6b5c8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf6b500 <<invalid sloc>> Implicit 1156
| `-NoThrowAttr 0x55d3aaf6b640 <col:1> Implicit
|-FunctionDecl 0x55d3aaf6b668 prev 0x55d3aaf6b458 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:77:1 scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf6b338 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x55d3aaf6b3b8 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55d3aaf6b778 <<invalid sloc>> Inherited Implicit 1156
| `-NoThrowAttr 0x55d3aaf6b720 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6b8e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:79:1 __scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55d3aaf6b7c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x55d3aaf6b840 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55d3aaf6b998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf6baa0 <<scratch space>:80:1> col:1 implicit ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf6bba8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aaf6bb48 <<invalid sloc>> Implicit 737
| `-NoThrowAttr 0x55d3aafb14c0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb14e8 prev 0x55d3aaf6baa0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55d3aaf6ba08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aafb15f0 <<invalid sloc>> Inherited Implicit 737
| `-NoThrowAttr 0x55d3aafb1598 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb16d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55d3aafb1638 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aafb1780 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb1958 <<scratch space>:84:1> col:1 implicit scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55d3aafb1a60 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb1ac8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55d3aafb1a00 <<invalid sloc>> Implicit 1150
| `-NoThrowAttr 0x55d3aafb1b40 <col:1> Implicit
|-FunctionDecl 0x55d3aafb1b68 prev 0x55d3aafb1958 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55d3aafb17f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x55d3aafb1870 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55d3aafb1c78 <<invalid sloc>> Inherited Implicit 1150
| `-NoThrowAttr 0x55d3aafb1c20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb1de0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55d3aafb1cc0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x55d3aafb1d40 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55d3aafb1e98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb1fa0 <<scratch space>:87:1> col:1 implicit nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb20a8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb2048 <<invalid sloc>> Implicit 984
| |-NoThrowAttr 0x55d3aafb2118 <col:1> Implicit
| `-ConstAttr 0x55d3aafb2140 <col:1> Implicit
|-FunctionDecl 0x55d3aafb2168 prev 0x55d3aafb1fa0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:87:1 nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb1f08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| |-BuiltinAttr 0x55d3aafb2270 <<invalid sloc>> Inherited Implicit 984
| |-ConstAttr 0x55d3aafb22a0 <<scratch space>:87:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafb2218 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb2378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:89:1 __nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb22e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| `-NoThrowAttr 0x55d3aafb2428 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb2568 <<scratch space>:90:1> col:1 implicit roundf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb2670 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb2610 <<invalid sloc>> Implicit 1124
| |-NoThrowAttr 0x55d3aafb26e0 <col:1> Implicit
| `-ConstAttr 0x55d3aafb2708 <col:1> Implicit
|-FunctionDecl 0x55d3aafb2730 prev 0x55d3aafb2568 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:90:1 roundf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb24d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'float'
| |-BuiltinAttr 0x55d3aafb2860 <<invalid sloc>> Inherited Implicit 1124
| |-NoThrowAttr 0x55d3aafb27e0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb2838 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55d3aafb2940 <<scratch space>:91:1> col:1 implicit truncf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb2a48 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb29e8 <<invalid sloc>> Implicit 1430
| |-NoThrowAttr 0x55d3aafb2ab8 <col:1> Implicit
| `-ConstAttr 0x55d3aafb2ae0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb2b08 prev 0x55d3aafb2940 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:91:1 truncf 'float (float)' extern
| |-ParmVarDecl 0x55d3aafb28a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'float'
| |-BuiltinAttr 0x55d3aafb2c38 <<invalid sloc>> Inherited Implicit 1430
| |-NoThrowAttr 0x55d3aafb2bb8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb2c10 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55d3aafb2e78 <<scratch space>:92:1> col:1 implicit remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55d3aafb2f80 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb2fe8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb3050 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aafb2f20 <<invalid sloc>> Implicit 1089
| `-NoThrowAttr 0x55d3aafb30d0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb30f8 prev 0x55d3aafb2e78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:92:1 remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55d3aafb2c80 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x55d3aafb2d00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x55d3aafb2d80 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55d3aafb3210 <<invalid sloc>> Inherited Implicit 1089
| `-NoThrowAttr 0x55d3aafb31b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb3400 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:94:1 __remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55d3aafb3258 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x55d3aafb32d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x55d3aafb3358 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55d3aafb34e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb3628 <<scratch space>:95:1> col:1 implicit lrintf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb3730 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb36d0 <<invalid sloc>> Implicit 906
| `-NoThrowAttr 0x55d3aafb37a0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb37c8 prev 0x55d3aafb3628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 lrintf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb3550 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| |-BuiltinAttr 0x55d3aafb38d0 <<invalid sloc>> Inherited Implicit 906
| `-NoThrowAttr 0x55d3aafb3878 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb39b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __lrintf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb3918 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| `-NoThrowAttr 0x55d3aafb3a60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb3ba8 <<scratch space>:98:1> col:1 implicit llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb3cb0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb3c50 <<invalid sloc>> Implicit 853
| `-NoThrowAttr 0x55d3aafb3d20 <col:1> Implicit
|-FunctionDecl 0x55d3aafb3d48 prev 0x55d3aafb3ba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:98:1 llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb3ad0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| |-BuiltinAttr 0x55d3aafb3e50 <<invalid sloc>> Inherited Implicit 853
| `-NoThrowAttr 0x55d3aafb3df8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb3f30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:100:1 __llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb3e98 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| `-NoThrowAttr 0x55d3aafb3fe0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb40e8 <<scratch space>:101:1> col:1 implicit lroundf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb41f0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb4190 <<invalid sloc>> Implicit 915
| `-NoThrowAttr 0x55d3aafb4260 <col:1> Implicit
|-FunctionDecl 0x55d3aafb4288 prev 0x55d3aafb40e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 lroundf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb4050 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| |-BuiltinAttr 0x55d3aafb4390 <<invalid sloc>> Inherited Implicit 915
| `-NoThrowAttr 0x55d3aafb4338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb44f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __lroundf 'long (float)' extern
| |-ParmVarDecl 0x55d3aafb43d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| `-NoThrowAttr 0x55d3aafb45a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb46a8 <<scratch space>:104:1> col:1 implicit llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb47b0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb4750 <<invalid sloc>> Implicit 859
| `-NoThrowAttr 0x55d3aafb4820 <col:1> Implicit
|-FunctionDecl 0x55d3aafb4848 prev 0x55d3aafb46a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:104:1 llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb4610 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| |-BuiltinAttr 0x55d3aafb4950 <<invalid sloc>> Inherited Implicit 859
| `-NoThrowAttr 0x55d3aafb48f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb4a30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55d3aafb4998 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| `-NoThrowAttr 0x55d3aafb4ae0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb4c70 <<scratch space>:107:1> col:1 implicit fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb4d78 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb4de0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb4d18 <<invalid sloc>> Implicit 571
| `-NoThrowAttr 0x55d3aafb4e58 <col:1> Implicit
|-FunctionDecl 0x55d3aafb4e80 prev 0x55d3aafb4c70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb4b50 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafb4bd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| |-BuiltinAttr 0x55d3aafb4f90 <<invalid sloc>> Inherited Implicit 571
| `-NoThrowAttr 0x55d3aafb4f38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb50f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb4fd8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x55d3aafb5058 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| `-NoThrowAttr 0x55d3aafb51b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb5340 <<scratch space>:111:1> col:1 implicit fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb5448 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb5500 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb53e8 <<invalid sloc>> Implicit 597
| |-NoThrowAttr 0x55d3aafb5578 <col:1> Implicit
| `-ConstAttr 0x55d3aafb55a0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb55c8 prev 0x55d3aafb5340 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:111:1 fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb5220 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aafb52a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'float'
| |-BuiltinAttr 0x55d3aafb5700 <<invalid sloc>> Inherited Implicit 597
| |-NoThrowAttr 0x55d3aafb5680 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb56d8 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55d3aafb5868 <<scratch space>:112:1> col:1 implicit fminf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb5970 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb59d8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb5910 <<invalid sloc>> Implicit 613
| |-NoThrowAttr 0x55d3aafb5a50 <col:1> Implicit
| `-ConstAttr 0x55d3aafb5a78 <col:1> Implicit
|-FunctionDecl 0x55d3aafb5aa0 prev 0x55d3aafb5868 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:112:1 fminf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb5748 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aafb57c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'float'
| |-BuiltinAttr 0x55d3aafb5bd8 <<invalid sloc>> Inherited Implicit 613
| |-NoThrowAttr 0x55d3aafb5b58 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb5bb0 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55d3aafb5e18 <<scratch space>:113:1> col:1 implicit fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55d3aafb5f20 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb5f88 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55d3aafb5ff0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55d3aafb5ec0 <<invalid sloc>> Implicit 589
| |-ConstAttr 0x55d3aafb6070 <col:1> Implicit
| `-NoThrowAttr 0x55d3aafb6098 <col:1> Implicit
|-FunctionDecl 0x55d3aafb60c0 prev 0x55d3aafb5e18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:113:1 fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55d3aafb5c20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x55d3aafb5ca0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x55d3aafb5d20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| |-BuiltinAttr 0x55d3aafb61d8 <<invalid sloc>> Inherited Implicit 589
| |-ConstAttr 0x55d3aafb6208 <<scratch space>:113:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafb6180 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb63f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55d3aafb6248 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x55d3aafb62c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x55d3aafb6348 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| `-NoThrowAttr 0x55d3aafb64b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb6678 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:121:1 scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb6558 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aafb65d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x55d3aafb6730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb68c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:123:1 __scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x55d3aafb67a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x55d3aafb6820 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x55d3aafb6978 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb6ab8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:124:1 __fpclassifyl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb69e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'long double'
| |-NoThrowAttr 0x55d3aafb6b68 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb6bc0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55d3aafb6c98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:125:1 __signbitl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb6c00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'long double'
| |-NoThrowAttr 0x55d3aafb6d48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb6da0 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55d3aafb6e78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:126:1 __isinfl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb6de0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'long double'
| |-NoThrowAttr 0x55d3aafb6f28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb6f80 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55d3aafb7058 <<scratch space>:127:1> col:1 implicit __finitel 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb7160 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb7100 <<invalid sloc>> Implicit 1014
| |-NoThrowAttr 0x55d3aafb71d0 <col:1> Implicit
| `-ConstAttr 0x55d3aafb71f8 <col:1> Implicit
|-FunctionDecl 0x55d3aafb7220 prev 0x55d3aafb7058 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:127:1 __finitel 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb6fc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'long double'
| |-BuiltinAttr 0x55d3aafb7350 <<invalid sloc>> Inherited Implicit 1014
| |-NoThrowAttr 0x55d3aafb72d0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb7328 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55d3aafb7430 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:128:1 __isnanl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb7398 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'long double'
| |-NoThrowAttr 0x55d3aafb74e0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb7550 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55d3aafb76f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __iseqsigl 'int (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafb7590 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'long double'
| |-ParmVarDecl 0x55d3aafb7610 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'long double'
| `-NoThrowAttr 0x55d3aafb77b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb78b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:130:1 __issignalingl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafb7820 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'long double'
| |-NoThrowAttr 0x55d3aafb7968 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafb79c0 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55d3aafb7ad8 <<scratch space>:133:1> col:1 implicit acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb7be0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb7b80 <<invalid sloc>> Implicit 105
| `-NoThrowAttr 0x55d3aafb7c50 <col:1> Implicit
|-FunctionDecl 0x55d3aafb7c78 prev 0x55d3aafb7ad8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb7a00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafb7d80 <<invalid sloc>> Inherited Implicit 105
| `-NoThrowAttr 0x55d3aafb7d28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb7e60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb7dc8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafb7f10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb8018 <<scratch space>:138:1> col:1 implicit asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb8120 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb80c0 <<invalid sloc>> Implicit 140
| `-NoThrowAttr 0x55d3aafb8190 <col:1> Implicit
|-FunctionDecl 0x55d3aafb81b8 prev 0x55d3aafb8018 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb7f80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafb82c0 <<invalid sloc>> Inherited Implicit 140
| `-NoThrowAttr 0x55d3aafb8268 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb83a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb8308 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafb8450 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb8758 <<scratch space>:143:1> col:1 implicit atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb8860 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb8800 <<invalid sloc>> Implicit 157
| `-NoThrowAttr 0x55d3aafb88d0 <col:1> Implicit
|-FunctionDecl 0x55d3aafb88f8 prev 0x55d3aafb8758 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:143:1 atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb86c0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafb8a00 <<invalid sloc>> Inherited Implicit 157
| `-NoThrowAttr 0x55d3aafb89a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb8ae0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb8a48 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafb8b90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb8d68 <<scratch space>:148:1> col:1 implicit atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafb8e70 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafb8ed8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb8e10 <<invalid sloc>> Implicit 163
| `-NoThrowAttr 0x55d3aafb8f50 <col:1> Implicit
|-FunctionDecl 0x55d3aafb8f78 prev 0x55d3aafb8d68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafb8c00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x55d3aafb8c80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| |-BuiltinAttr 0x55d3aafb9088 <<invalid sloc>> Inherited Implicit 163
| `-NoThrowAttr 0x55d3aafb9030 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb91f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafb90d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x55d3aafb9150 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| `-NoThrowAttr 0x55d3aafb92a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb93b0 <<scratch space>:153:1> col:1 implicit cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb94b8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb9458 <<invalid sloc>> Implicit 385
| `-NoThrowAttr 0x55d3aafb9528 <col:1> Implicit
|-FunctionDecl 0x55d3aafb9550 prev 0x55d3aafb93b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9318 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55d3aafb9658 <<invalid sloc>> Inherited Implicit 385
| `-NoThrowAttr 0x55d3aafb9600 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb98f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9860 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55d3aafb99a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb9ab0 <<scratch space>:158:1> col:1 implicit sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9bb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafb9b58 <<invalid sloc>> Implicit 1181
| `-NoThrowAttr 0x55d3aafb9c28 <col:1> Implicit
|-FunctionDecl 0x55d3aafb9c50 prev 0x55d3aafb9ab0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:158:1 sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9a18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55d3aafb9d58 <<invalid sloc>> Inherited Implicit 1181
| `-NoThrowAttr 0x55d3aafb9d00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb9e38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9da0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55d3aafb9ee8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafb9ff0 <<scratch space>:163:1> col:1 implicit tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafba0f8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafba098 <<invalid sloc>> Implicit 1402
| `-NoThrowAttr 0x55d3aafba168 <col:1> Implicit
|-FunctionDecl 0x55d3aafba190 prev 0x55d3aafb9ff0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafb9f58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55d3aafba298 <<invalid sloc>> Inherited Implicit 1402
| `-NoThrowAttr 0x55d3aafba240 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafba378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafba2e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55d3aafba428 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafba530 <<scratch space>:169:1> col:1 implicit coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafba638 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafba5d8 <<invalid sloc>> Implicit 393
| `-NoThrowAttr 0x55d3aafba6a8 <col:1> Implicit
|-FunctionDecl 0x55d3aafba6d0 prev 0x55d3aafba530 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:169:1 coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafba498 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafba7d8 <<invalid sloc>> Inherited Implicit 393
| `-NoThrowAttr 0x55d3aafba780 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafba908 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:171:1 __coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafba870 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafba9b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbaac0 <<scratch space>:174:1> col:1 implicit sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbabc8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbab68 <<invalid sloc>> Implicit 1200
| `-NoThrowAttr 0x55d3aafbac38 <col:1> Implicit
|-FunctionDecl 0x55d3aafbac60 prev 0x55d3aafbaac0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbaa28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafbad68 <<invalid sloc>> Inherited Implicit 1200
| `-NoThrowAttr 0x55d3aafbad10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbae48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:176:1 __sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbadb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafbaef8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbb000 <<scratch space>:179:1> col:1 implicit tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbb108 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbb0a8 <<invalid sloc>> Implicit 1410
| `-NoThrowAttr 0x55d3aafbb178 <col:1> Implicit
|-FunctionDecl 0x55d3aafbb1a0 prev 0x55d3aafbb000 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:179:1 tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbaf68 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafbb2a8 <<invalid sloc>> Inherited Implicit 1410
| `-NoThrowAttr 0x55d3aafbb250 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbb388 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:181:1 __tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbb2f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafbb438 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbb540 <<scratch space>:184:1> col:1 implicit acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbb648 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbb5e8 <<invalid sloc>> Implicit 113
| `-NoThrowAttr 0x55d3aafbb6b8 <col:1> Implicit
|-FunctionDecl 0x55d3aafbb6e0 prev 0x55d3aafbb540 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbb4a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbb7e8 <<invalid sloc>> Inherited Implicit 113
| `-NoThrowAttr 0x55d3aafbb790 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbb918 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbb880 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbb9c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbbad0 <<scratch space>:189:1> col:1 implicit asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbbbd8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbbb78 <<invalid sloc>> Implicit 148
| `-NoThrowAttr 0x55d3aafbbc48 <col:1> Implicit
|-FunctionDecl 0x55d3aafbbc70 prev 0x55d3aafbbad0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbba38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbbd78 <<invalid sloc>> Inherited Implicit 148
| `-NoThrowAttr 0x55d3aafbbd20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbbe58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbbdc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbbf08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbc010 <<scratch space>:194:1> col:1 implicit atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbc118 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbc0b8 <<invalid sloc>> Implicit 173
| `-NoThrowAttr 0x55d3aafbc188 <col:1> Implicit
|-FunctionDecl 0x55d3aafbc1b0 prev 0x55d3aafbc010 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbbf78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbc2b8 <<invalid sloc>> Inherited Implicit 173
| `-NoThrowAttr 0x55d3aafbc260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbc398 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbc300 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbc448 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbc550 <<scratch space>:199:1> col:1 implicit expl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbc658 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbc5f8 <<invalid sloc>> Implicit 525
| `-NoThrowAttr 0x55d3aafbc6c8 <col:1> Implicit
|-FunctionDecl 0x55d3aafbc6f0 prev 0x55d3aafbc550 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 expl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbc4b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55d3aafbc7f8 <<invalid sloc>> Inherited Implicit 525
| `-NoThrowAttr 0x55d3aafbc7a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbc928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __expl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbc890 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55d3aafbc9d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbcba8 <<scratch space>:202:1> col:1 implicit frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55d3aafbccb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafbcd18 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aafbcc50 <<invalid sloc>> Implicit 647
| `-NoThrowAttr 0x55d3aafbcd90 <col:1> Implicit
|-FunctionDecl 0x55d3aafbcdb8 prev 0x55d3aafbcba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:202:1 frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55d3aafbca48 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aafbcac8 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55d3aafbcec8 <<invalid sloc>> Inherited Implicit 647
| `-NoThrowAttr 0x55d3aafbce70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbd030 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 __frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55d3aafbcf10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aafbcf90 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55d3aafbd0e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbd2b8 <<scratch space>:205:1> col:1 implicit ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aafbd3c0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafbd428 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aafbd360 <<invalid sloc>> Implicit 842
| `-NoThrowAttr 0x55d3aafbd4a0 <col:1> Implicit
|-FunctionDecl 0x55d3aafbd4c8 prev 0x55d3aafbd2b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:205:1 ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aafbd158 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aafbd1d8 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55d3aafbd5d8 <<invalid sloc>> Inherited Implicit 842
| `-NoThrowAttr 0x55d3aafbd580 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbd740 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:207:1 __ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aafbd620 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aafbd6a0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55d3aafbd7f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbdac8 <<scratch space>:210:1> col:1 implicit logl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbdbd0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbdb70 <<invalid sloc>> Implicit 871
| `-NoThrowAttr 0x55d3aafbdc40 <col:1> Implicit
|-FunctionDecl 0x55d3aafbdc68 prev 0x55d3aafbdac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:210:1 logl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbda30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55d3aafbdd70 <<invalid sloc>> Inherited Implicit 871
| `-NoThrowAttr 0x55d3aafbdd18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbde50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:212:1 __logl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbddb8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55d3aafbdf00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbe008 <<scratch space>:215:1> col:1 implicit log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbe110 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbe0b0 <<invalid sloc>> Implicit 892
| `-NoThrowAttr 0x55d3aafbe180 <col:1> Implicit
|-FunctionDecl 0x55d3aafbe1a8 prev 0x55d3aafbe008 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:215:1 log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbdf70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbe2b0 <<invalid sloc>> Inherited Implicit 892
| `-NoThrowAttr 0x55d3aafbe258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbe390 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:217:1 __log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbe2f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbe440 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbe648 <<scratch space>:218:1> col:1 implicit modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55d3aafbe750 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafbe7b8 <<invalid sloc>> <invalid sloc> 'long double *'
| |-BuiltinAttr 0x55d3aafbe6f0 <<invalid sloc>> Implicit 963
| `-NoThrowAttr 0x55d3aafbe830 <col:1> Implicit
|-FunctionDecl 0x55d3aafbe858 prev 0x55d3aafbe648 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:218:1 modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55d3aafbe4b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafbe568 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-BuiltinAttr 0x55d3aafbe968 <<invalid sloc>> Inherited Implicit 963
| `-NoThrowAttr 0x55d3aafbe910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbeee0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:220:1 __modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55d3aafbe9b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafbee20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-NoThrowAttr 0x55d3aafbef98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3aafbeff0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55d3aafbf0e8 <<scratch space>:224:1> col:1 implicit expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf1f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbf190 <<invalid sloc>> Implicit 548
| `-NoThrowAttr 0x55d3aafbf260 <col:1> Implicit
|-FunctionDecl 0x55d3aafbf288 prev 0x55d3aafbf0e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:224:1 expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf050 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbf390 <<invalid sloc>> Inherited Implicit 548
| `-NoThrowAttr 0x55d3aafbf338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbf470 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:226:1 __expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf3d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbf520 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbf628 <<scratch space>:229:1> col:1 implicit log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf730 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbf6d0 <<invalid sloc>> Implicit 877
| `-NoThrowAttr 0x55d3aafbf7a0 <col:1> Implicit
|-FunctionDecl 0x55d3aafbf7c8 prev 0x55d3aafbf628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:229:1 log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf590 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aafbf8d0 <<invalid sloc>> Inherited Implicit 877
| `-NoThrowAttr 0x55d3aafbf878 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbf9b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:231:1 __log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbf918 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aafbfa60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafbfb68 <<scratch space>:232:1> col:1 implicit logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbfc70 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafbfc10 <<invalid sloc>> Implicit 902
| `-NoThrowAttr 0x55d3aafbfce0 <col:1> Implicit
|-FunctionDecl 0x55d3aafbfd08 prev 0x55d3aafbfb68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafbfad0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55d3aafc0330 <<invalid sloc>> Inherited Implicit 902
| `-NoThrowAttr 0x55d3aafbfdb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc0410 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:234:1 __logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc0378 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55d3aafc04c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc05c8 <<scratch space>:237:1> col:1 implicit exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc06d0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc0670 <<invalid sloc>> Implicit 531
| `-NoThrowAttr 0x55d3aafc0740 <col:1> Implicit
|-FunctionDecl 0x55d3aafc0768 prev 0x55d3aafc05c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc0530 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafc0870 <<invalid sloc>> Inherited Implicit 531
| `-NoThrowAttr 0x55d3aafc0818 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc0950 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:239:1 __exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc08b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafc0a00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc0b08 <<scratch space>:242:1> col:1 implicit log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc0c10 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc0bb0 <<invalid sloc>> Implicit 884
| `-NoThrowAttr 0x55d3aafc0c80 <col:1> Implicit
|-FunctionDecl 0x55d3aafc0ca8 prev 0x55d3aafc0b08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc0a70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafc0db0 <<invalid sloc>> Inherited Implicit 884
| `-NoThrowAttr 0x55d3aafc0d58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc0e90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:244:1 __log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc0df8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafc0f40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc10d0 <<scratch space>:247:1> col:1 implicit powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc11d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafc1240 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc1178 <<invalid sloc>> Implicit 1050
| `-NoThrowAttr 0x55d3aafc12b8 <col:1> Implicit
|-FunctionDecl 0x55d3aafc1340 prev 0x55d3aafc10d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc0fb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55d3aafc1030 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| |-BuiltinAttr 0x55d3aafc1450 <<invalid sloc>> Inherited Implicit 1050
| `-NoThrowAttr 0x55d3aafc13f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc15b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:249:1 __powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc1498 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55d3aafc1518 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| `-NoThrowAttr 0x55d3aafc1670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc1778 <<scratch space>:250:1> col:1 implicit sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc1880 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc1820 <<invalid sloc>> Implicit 1215
| `-NoThrowAttr 0x55d3aafc18f0 <col:1> Implicit
|-FunctionDecl 0x55d3aafc1918 prev 0x55d3aafc1778 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc16e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55d3aafc1a20 <<invalid sloc>> Inherited Implicit 1215
| `-NoThrowAttr 0x55d3aafc19c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc1b00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc1a68 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55d3aafc1bb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc1d40 <<scratch space>:255:1> col:1 implicit hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc1e48 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafc1eb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc1de8 <<invalid sloc>> Implicit 733
| `-NoThrowAttr 0x55d3aafc1f28 <col:1> Implicit
|-FunctionDecl 0x55d3aafc1f50 prev 0x55d3aafc1d40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc1c20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aafc1ca0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55d3aafc2060 <<invalid sloc>> Inherited Implicit 733
| `-NoThrowAttr 0x55d3aafc2008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc21c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:257:1 __hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc20a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aafc2128 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55d3aafc2280 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc23e8 <<scratch space>:260:1> col:1 implicit cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc24f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc2490 <<invalid sloc>> Implicit 300
| |-NoThrowAttr 0x55d3aafc2560 <col:1> Implicit
| `-ConstAttr 0x55d3aafc2588 <col:1> Implicit
|-FunctionDecl 0x55d3aafc25b0 prev 0x55d3aafc23e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:260:1 cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc2350 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55d3aafc26b8 <<invalid sloc>> Inherited Implicit 300
| |-ConstAttr 0x55d3aafc26e8 <<scratch space>:260:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafc2660 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc27c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:262:1 __cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc2728 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55d3aafc2870 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc2978 <<scratch space>:264:1> col:1 implicit ceill 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc2a80 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc2a20 <<invalid sloc>> Implicit 319
| |-NoThrowAttr 0x55d3aafc2af0 <col:1> Implicit
| `-ConstAttr 0x55d3aafc2b18 <col:1> Implicit
|-FunctionDecl 0x55d3aafc2b40 prev 0x55d3aafc2978 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:264:1 ceill 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc28e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'long double'
| |-BuiltinAttr 0x55d3aafc2c70 <<invalid sloc>> Inherited Implicit 319
| |-NoThrowAttr 0x55d3aafc2bf0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc2c48 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55d3aafc2d50 <<scratch space>:265:1> col:1 implicit fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc2e58 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc2df8 <<invalid sloc>> Implicit 566
| |-NoThrowAttr 0x55d3aafc2ec8 <col:1> Implicit
| `-ConstAttr 0x55d3aafc2ef0 <col:1> Implicit
|-FunctionDecl 0x55d3aafc2f18 prev 0x55d3aafc2d50 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:265:1 fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc2cb8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'long double'
| |-BuiltinAttr 0x55d3aafc3048 <<invalid sloc>> Inherited Implicit 566
| |-NoThrowAttr 0x55d3aafc2fc8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc3020 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55d3aafc3128 <<scratch space>:266:1> col:1 implicit floorl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc3230 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc31d0 <<invalid sloc>> Implicit 585
| |-NoThrowAttr 0x55d3aafc32a0 <col:1> Implicit
| `-ConstAttr 0x55d3aafc32c8 <col:1> Implicit
|-FunctionDecl 0x55d3aafc3360 prev 0x55d3aafc3128 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:266:1 floorl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc3090 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55d3aafc3490 <<invalid sloc>> Inherited Implicit 585
| |-NoThrowAttr 0x55d3aafc3410 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc3468 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55d3aafc35f8 <<scratch space>:267:1> col:1 implicit fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc3700 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafc3768 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc36a0 <<invalid sloc>> Implicit 633
| `-NoThrowAttr 0x55d3aafc37e0 <col:1> Implicit
|-FunctionDecl 0x55d3aafc3808 prev 0x55d3aafc35f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:267:1 fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc34d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafc3558 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| |-BuiltinAttr 0x55d3aafc3918 <<invalid sloc>> Inherited Implicit 633
| `-NoThrowAttr 0x55d3aafc38c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc3a80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 __fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc3960 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafc39e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55d3aafc3b38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc3c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:270:1 isinfl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafc3ba8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'long double'
| |-NoThrowAttr 0x55d3aafc3cf0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc3d48 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55d3aafc3e20 <<scratch space>:271:1> col:1 implicit finitel 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafc3f28 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc3ec8 <<invalid sloc>> Implicit 579
| |-NoThrowAttr 0x55d3aafc3f98 <col:1> Implicit
| `-ConstAttr 0x55d3aafc3fc0 <col:1> Implicit
|-FunctionDecl 0x55d3aafc3fe8 prev 0x55d3aafc3e20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:271:1 finitel 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafc3d88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'long double'
| |-BuiltinAttr 0x55d3aafc4118 <<invalid sloc>> Inherited Implicit 579
| |-NoThrowAttr 0x55d3aafc4098 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc40f0 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55d3aafc4280 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:272:1 dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc4160 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafc41e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55d3aafc4338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc44d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:274:1 __dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc43b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aafc4438 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55d3aafc4590 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc4698 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 significandl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc4600 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x55d3aafc4748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc4850 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __significandl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc47b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x55d3aafc4900 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc4a90 <<scratch space>:278:1> col:1 implicit copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc4b98 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafc4c00 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc4b38 <<invalid sloc>> Implicit 363
| |-NoThrowAttr 0x55d3aafc4c78 <col:1> Implicit
| `-ConstAttr 0x55d3aafc4ca0 <col:1> Implicit
|-FunctionDecl 0x55d3aafc4cc8 prev 0x55d3aafc4a90 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:278:1 copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc4970 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aafc49f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55d3aafc4e00 <<invalid sloc>> Inherited Implicit 363
| |-NoThrowAttr 0x55d3aafc4d80 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc4dd8 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55d3aafc4f18 <<scratch space>:279:1> col:1 implicit nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55d3aafc5020 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3aafc4fc0 <<invalid sloc>> Implicit 975
| |-NoThrowAttr 0x55d3aafc5090 <col:1> Implicit
| `-PureAttr 0x55d3aafc50b8 <col:1> Implicit
|-FunctionDecl 0x55d3aafc50e0 prev 0x55d3aafc4f18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:279:1 nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55d3aafc4e48 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55d3aafc51e8 <<invalid sloc>> Inherited Implicit 975
| |-PureAttr 0x55d3aafc5218 <<scratch space>:279:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafc5190 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc5380 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:281:1 __nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55d3aafc5258 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55d3aafc5430 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc5538 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:282:1 isnanl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aafc54a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'long double'
| |-NoThrowAttr 0x55d3aafc55e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aafc5640 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55d3aafc5718 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 j0l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc5680 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x55d3aafc57c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc58d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __j0l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc5838 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x55d3aafc5980 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc5a88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:286:1 j1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc59f0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x55d3aafc5b38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc5c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 __j1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc5ba8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x55d3aafc5cf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc5ec8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:289:1 jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55d3aafc5d60 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafc5de0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x55d3aafc5f80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6110 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:291:1 __jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55d3aafc5ff0 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafc6070 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x55d3aafc61c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc62d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:292:1 y0l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc6238 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x55d3aafc6390 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6498 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:294:1 __y0l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc6400 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x55d3aafc6548 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6650 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 y1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc65b8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x55d3aafc6700 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6808 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:297:1 __y1l 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc6770 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x55d3aafc68b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6a48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55d3aafc6928 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafc69a8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x55d3aafc6b00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6c90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55d3aafc6b70 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55d3aafc6bf0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x55d3aafc6d48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc6e50 <<scratch space>:303:1> col:1 implicit erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc6f58 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc6ef8 <<invalid sloc>> Implicit 505
| `-NoThrowAttr 0x55d3aafc6fc8 <col:1> Implicit
|-FunctionDecl 0x55d3aafc6ff0 prev 0x55d3aafc6e50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc6db8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| |-BuiltinAttr 0x55d3aafc70f8 <<invalid sloc>> Inherited Implicit 505
| `-NoThrowAttr 0x55d3aafc70a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc71d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:305:1 __erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7140 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| `-NoThrowAttr 0x55d3aafc7288 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc73a0 <<scratch space>:308:1> col:1 implicit erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc74a8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc7448 <<invalid sloc>> Implicit 512
| `-NoThrowAttr 0x55d3aafc7518 <col:1> Implicit
|-FunctionDecl 0x55d3aafc7540 prev 0x55d3aafc73a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc72f8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| |-BuiltinAttr 0x55d3aafc7648 <<invalid sloc>> Inherited Implicit 512
| `-NoThrowAttr 0x55d3aafc75f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc7728 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:310:1 __erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7690 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| `-NoThrowAttr 0x55d3aafc77d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc78e0 <<scratch space>:311:1> col:1 implicit lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc79e8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc7988 <<invalid sloc>> Implicit 850
| `-NoThrowAttr 0x55d3aafc7a58 <col:1> Implicit
|-FunctionDecl 0x55d3aafc7a80 prev 0x55d3aafc78e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7848 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| |-BuiltinAttr 0x55d3aafc7b88 <<invalid sloc>> Inherited Implicit 850
| `-NoThrowAttr 0x55d3aafc7b30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc7c68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7bd0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| `-NoThrowAttr 0x55d3aafc7d18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc7e20 <<scratch space>:314:1> col:1 implicit tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7f28 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc7ec8 <<invalid sloc>> Implicit 1420
| `-NoThrowAttr 0x55d3aafc7f98 <col:1> Implicit
|-FunctionDecl 0x55d3aafc7fc0 prev 0x55d3aafc7e20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:314:1 tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc7d88 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| |-BuiltinAttr 0x55d3aafc80c8 <<invalid sloc>> Inherited Implicit 1420
| `-NoThrowAttr 0x55d3aafc8070 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc81a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:316:1 __tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc8110 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| `-NoThrowAttr 0x55d3aafc8258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc83b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:317:1 gammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc82c8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x55d3aafc8460 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc8568 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:319:1 __gammal 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc84d0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x55d3aafc8618 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc87a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:321:1 lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55d3aafc8688 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x55d3aafc8708 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aafc8860 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc89f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:324:1 __lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55d3aafc88d0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x55d3aafc8950 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55d3aafc8aa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc8bb0 <<scratch space>:325:1> col:1 implicit rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc8cb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc8c58 <<invalid sloc>> Implicit 1104
| |-ConstAttr 0x55d3aafc8d28 <col:1> Implicit
| `-NoThrowAttr 0x55d3aafc8d50 <col:1> Implicit
|-FunctionDecl 0x55d3aafc8d78 prev 0x55d3aafc8bb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:325:1 rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc8b18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55d3aafc8e80 <<invalid sloc>> Inherited Implicit 1104
| |-ConstAttr 0x55d3aafc8eb0 <<scratch space>:325:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aafc8e28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc8f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:327:1 __rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aafc8ef0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55d3aafc9038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aafc91c8 <<scratch space>:328:1> col:1 implicit nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc92d0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aafc9338 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aafc9270 <<invalid sloc>> Implicit 995
| `-NoThrowAttr 0x55d3aaf95640 <col:1> Implicit
|-FunctionDecl 0x55d3aaf95668 prev 0x55d3aafc91c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:328:1 nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aafc90a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aafc9128 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55d3aaf95778 <<invalid sloc>> Inherited Implicit 995
| `-NoThrowAttr 0x55d3aaf95720 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf958e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:330:1 __nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf957c0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aaf95840 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55d3aaf95998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf95b28 <<scratch space>:331:1> col:1 implicit nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf95c30 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf95c98 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf95bd0 <<invalid sloc>> Implicit 1002
| `-NoThrowAttr 0x55d3aaf95d10 <col:1> Implicit
|-FunctionDecl 0x55d3aaf95d38 prev 0x55d3aaf95b28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:331:1 nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf95a08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x55d3aaf95a88 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55d3aaf95e48 <<invalid sloc>> Inherited Implicit 1002
| `-NoThrowAttr 0x55d3aaf95df0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf95fb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:333:1 __nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf95e90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x55d3aaf95f10 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55d3aaf96068 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf961f8 <<scratch space>:335:1> col:1 implicit remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf96300 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf96368 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf962a0 <<invalid sloc>> Implicit 1086
| `-NoThrowAttr 0x55d3aaf963e0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf96408 prev 0x55d3aaf961f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:335:1 remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf960d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aaf96158 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55d3aaf96518 <<invalid sloc>> Inherited Implicit 1086
| `-NoThrowAttr 0x55d3aaf964c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf96880 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:337:1 __remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf96560 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55d3aaf967e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55d3aaf96938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf96ac8 <<scratch space>:338:1> col:1 implicit scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aaf96bd0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf96c38 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55d3aaf96b70 <<invalid sloc>> Implicit 1160
| `-NoThrowAttr 0x55d3aaf96cb0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf96cd8 prev 0x55d3aaf96ac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:338:1 scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aaf969a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55d3aaf96a28 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55d3aaf96de8 <<invalid sloc>> Inherited Implicit 1160
| `-NoThrowAttr 0x55d3aaf96d90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf96f50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:340:1 __scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55d3aaf96e30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55d3aaf96eb0 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55d3aaf97008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf97110 <<scratch space>:341:1> col:1 implicit ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aaf97218 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf971b8 <<invalid sloc>> Implicit 741
| `-NoThrowAttr 0x55d3aaf97288 <col:1> Implicit
|-FunctionDecl 0x55d3aaf972b0 prev 0x55d3aaf97110 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:341:1 ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aaf97078 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aaf973b8 <<invalid sloc>> Inherited Implicit 741
| `-NoThrowAttr 0x55d3aaf97360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf97498 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:343:1 __ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55d3aaf97400 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aaf97548 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf97718 <<scratch space>:345:1> col:1 implicit scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55d3aaf97850 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf978b8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55d3aaf977f0 <<invalid sloc>> Implicit 1154
| `-NoThrowAttr 0x55d3aaf97930 <col:1> Implicit
|-FunctionDecl 0x55d3aaf97958 prev 0x55d3aaf97718 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:345:1 scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55d3aaf975b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55d3aaf97638 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55d3aaf97a68 <<invalid sloc>> Inherited Implicit 1154
| `-NoThrowAttr 0x55d3aaf97a10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf97bd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:347:1 __scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55d3aaf97ab0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55d3aaf97b30 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55d3aaf97c88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf97d90 <<scratch space>:348:1> col:1 implicit nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf97e98 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf97e38 <<invalid sloc>> Implicit 988
| |-NoThrowAttr 0x55d3aaf97f08 <col:1> Implicit
| `-ConstAttr 0x55d3aaf97f30 <col:1> Implicit
|-FunctionDecl 0x55d3aaf97f58 prev 0x55d3aaf97d90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:348:1 nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf97cf8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55d3aaf98060 <<invalid sloc>> Inherited Implicit 988
| |-ConstAttr 0x55d3aaf98090 <<scratch space>:348:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf98008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf98168 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:350:1 __nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf980d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55d3aaf98218 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf98320 <<scratch space>:351:1> col:1 implicit roundl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf98428 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf983c8 <<invalid sloc>> Implicit 1128
| |-NoThrowAttr 0x55d3aaf98498 <col:1> Implicit
| `-ConstAttr 0x55d3aaf984c0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf984e8 prev 0x55d3aaf98320 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:351:1 roundl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf98288 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55d3aaf98618 <<invalid sloc>> Inherited Implicit 1128
| |-NoThrowAttr 0x55d3aaf98598 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf985f0 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55d3aaf986f8 <<scratch space>:352:1> col:1 implicit truncl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf98ad0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf987a0 <<invalid sloc>> Implicit 1434
| |-NoThrowAttr 0x55d3aaf98b40 <col:1> Implicit
| `-ConstAttr 0x55d3aaf98b68 <col:1> Implicit
|-FunctionDecl 0x55d3aaf98b90 prev 0x55d3aaf986f8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:352:1 truncl 'long double (long double)' extern
| |-ParmVarDecl 0x55d3aaf98660 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55d3aaf98cc0 <<invalid sloc>> Inherited Implicit 1434
| |-NoThrowAttr 0x55d3aaf98c40 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf98c98 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55d3aaf98ef8 <<scratch space>:353:1> col:1 implicit remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55d3aaf99000 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf99068 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf990d0 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55d3aaf98fa0 <<invalid sloc>> Implicit 1093
| `-NoThrowAttr 0x55d3aaf99150 <col:1> Implicit
|-FunctionDecl 0x55d3aaf99178 prev 0x55d3aaf98ef8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:353:1 remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55d3aaf98d08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55d3aaf98d88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x55d3aaf98e08 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55d3aaf99290 <<invalid sloc>> Inherited Implicit 1093
| `-NoThrowAttr 0x55d3aaf99238 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf99480 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:355:1 __remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55d3aaf992d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55d3aaf99358 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x55d3aaf993d8 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55d3aaf99540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf99688 <<scratch space>:356:1> col:1 implicit lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf99790 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf99730 <<invalid sloc>> Implicit 910
| `-NoThrowAttr 0x55d3aaf99800 <col:1> Implicit
|-FunctionDecl 0x55d3aaf99828 prev 0x55d3aaf99688 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:356:1 lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf995b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| |-BuiltinAttr 0x55d3aaf99930 <<invalid sloc>> Inherited Implicit 910
| `-NoThrowAttr 0x55d3aaf998d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf99db0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:358:1 __lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf99978 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| `-NoThrowAttr 0x55d3aaf99e60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf99fa8 <<scratch space>:359:1> col:1 implicit llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a0b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9a050 <<invalid sloc>> Implicit 857
| `-NoThrowAttr 0x55d3aaf9a120 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9a148 prev 0x55d3aaf99fa8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:359:1 llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf99ed0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| |-BuiltinAttr 0x55d3aaf9a250 <<invalid sloc>> Inherited Implicit 857
| `-NoThrowAttr 0x55d3aaf9a1f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9a330 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:361:1 __llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a298 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| `-NoThrowAttr 0x55d3aaf9a3e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9a4e8 <<scratch space>:362:1> col:1 implicit lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a5f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9a590 <<invalid sloc>> Implicit 919
| `-NoThrowAttr 0x55d3aaf9a660 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9a688 prev 0x55d3aaf9a4e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:362:1 lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a450 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| |-BuiltinAttr 0x55d3aaf9a790 <<invalid sloc>> Inherited Implicit 919
| `-NoThrowAttr 0x55d3aaf9a738 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9a870 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:364:1 __lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a7d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| `-NoThrowAttr 0x55d3aaf9a920 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9aa28 <<scratch space>:365:1> col:1 implicit llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9ab30 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9aad0 <<invalid sloc>> Implicit 863
| `-NoThrowAttr 0x55d3aaf9aba0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9abc8 prev 0x55d3aaf9aa28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:365:1 llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9a990 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| |-BuiltinAttr 0x55d3aaf9acd0 <<invalid sloc>> Inherited Implicit 863
| `-NoThrowAttr 0x55d3aaf9ac78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9adc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:367:1 __llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55d3aaf9ad18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| `-NoThrowAttr 0x55d3aaf9ae70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9b000 <<scratch space>:368:1> col:1 implicit fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9b108 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf9b170 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9b0a8 <<invalid sloc>> Implicit 575
| `-NoThrowAttr 0x55d3aaf9b1e8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9b210 prev 0x55d3aaf9b000 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:368:1 fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9aee0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9af60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| |-BuiltinAttr 0x55d3aaf9b320 <<invalid sloc>> Inherited Implicit 575
| `-NoThrowAttr 0x55d3aaf9b2c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9b488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:370:1 __fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9b368 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9b3e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55d3aaf9b540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9b6d0 <<scratch space>:372:1> col:1 implicit fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9b7d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf9b840 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9b778 <<invalid sloc>> Implicit 601
| |-NoThrowAttr 0x55d3aaf9b8b8 <col:1> Implicit
| `-ConstAttr 0x55d3aaf9b8e0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9b908 prev 0x55d3aaf9b6d0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:372:1 fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9b5b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9b630 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'long double'
| |-BuiltinAttr 0x55d3aaf9ba40 <<invalid sloc>> Inherited Implicit 601
| |-NoThrowAttr 0x55d3aaf9b9c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9ba18 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55d3aaf9bba8 <<scratch space>:373:1> col:1 implicit fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9bcb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf9bd18 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9bc50 <<invalid sloc>> Implicit 617
| |-NoThrowAttr 0x55d3aaf9bd90 <col:1> Implicit
| `-ConstAttr 0x55d3aaf9c0a0 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9c0c8 prev 0x55d3aaf9bba8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:373:1 fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9ba88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9bb08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'long double'
| |-BuiltinAttr 0x55d3aaf9c200 <<invalid sloc>> Inherited Implicit 617
| |-NoThrowAttr 0x55d3aaf9c180 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9c1d8 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55d3aaf9c438 <<scratch space>:374:1> col:1 implicit fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9c540 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf9c5a8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55d3aaf9c610 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55d3aaf9c4e0 <<invalid sloc>> Implicit 593
| |-ConstAttr 0x55d3aaf9c690 <col:1> Implicit
| `-NoThrowAttr 0x55d3aaf9c6b8 <col:1> Implicit
|-FunctionDecl 0x55d3aaf9c6e0 prev 0x55d3aaf9c438 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:374:1 fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9c248 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9c2c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x55d3aaf9c348 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| |-BuiltinAttr 0x55d3aaf9c7f8 <<invalid sloc>> Inherited Implicit 593
| |-ConstAttr 0x55d3aaf9c828 <<scratch space>:374:1> Inherited Implicit
| `-NoThrowAttr 0x55d3aaf9c7a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9ca10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:376:1 __fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9c868 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9c8e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x55d3aaf9c968 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| `-NoThrowAttr 0x55d3aaf9cad0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9cc60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:382:1 scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9cb40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9cbc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x55d3aaf9cd18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9cea8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:384:1 __scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55d3aaf9cd88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55d3aaf9ce08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x55d3aaf9cf60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9e418 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:4:1 __fpclassifyf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9d030 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9e4c8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9e520 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55d3aaf9e5f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:5:1 __signbitf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9e558 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9e6a0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9e6f8 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55d3aaf9e7c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:6:1 __isinff128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9e730 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9e878 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9e8d0 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55d3aaf9e9a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:7:1 __finitef128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9e908 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9ea50 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9eaa8 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55d3aaf9eb78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:8:1 __isnanf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9eae0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9ec28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9ec80 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55d3aaf9ee58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:9:1 __iseqsigf128 'int (_Float128, _Float128)' extern
| |-ParmVarDecl 0x55d3aaf9ecb8 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x '_Float128':'__float128'
| |-ParmVarDecl 0x55d3aaf9ed30 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y '_Float128':'__float128'
| `-NoThrowAttr 0x55d3aaf9ef10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3aaf9f010 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:10:1 __issignalingf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55d3aaf9ef78 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55d3aaf9f0c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55d3aaf9f118 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-VarDecl 0x55d3aaf9f158 </usr/include/math.h:823:1, col:12> col:12 signgam 'int' extern
|-EnumDecl 0x55d3aaf9f1c0 <line:903:1, line:920:3> line:903:1
| |-EnumConstantDecl 0x55d3aaf9f2c0 <line:905:5, line:906:17> line:905:5 FP_NAN 'int'
| | `-ConstantExpr 0x55d3aaf9f2a0 <line:906:17> 'int'
| |   |-value: Int 0
| |   `-IntegerLiteral 0x55d3aaf9f280 <col:17> 'int' 0
| |-EnumConstantDecl 0x55d3aafa0390 <line:908:5, line:909:22> line:908:5 FP_INFINITE 'int'
| | `-ConstantExpr 0x55d3aaf9f338 <line:909:22> 'int'
| |   |-value: Int 1
| |   `-IntegerLiteral 0x55d3aaf9f318 <col:22> 'int' 1
| |-EnumConstantDecl 0x55d3aafa0428 <line:911:5, line:912:18> line:911:5 FP_ZERO 'int'
| | `-ConstantExpr 0x55d3aafa0408 <line:912:18> 'int'
| |   |-value: Int 2
| |   `-IntegerLiteral 0x55d3aafa03e8 <col:18> 'int' 2
| |-EnumConstantDecl 0x55d3aafa04c0 <line:914:5, line:915:23> line:914:5 FP_SUBNORMAL 'int'
| | `-ConstantExpr 0x55d3aafa04a0 <line:915:23> 'int'
| |   |-value: Int 3
| |   `-IntegerLiteral 0x55d3aafa0480 <col:23> 'int' 3
| `-EnumConstantDecl 0x55d3aafa0558 <line:917:5, line:918:20> line:917:5 FP_NORMAL 'int'
|   `-ConstantExpr 0x55d3aafa0538 <line:918:20> 'int'
|     |-value: Int 4
|     `-IntegerLiteral 0x55d3aafa0518 <col:20> 'int' 4
|-TypedefDecl 0x55d3aafa05c0 </usr/include/bits/stdint-intn.h:24:1, col:18> col:18 referenced int8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55d3aaf39f00 '__int8_t' sugar
|   `-TypedefType 0x55d3aaf39ed0 '__int8_t' sugar
|     |-Typedef 0x55d3aaf39b60 '__int8_t'
|     `-BuiltinType 0x55d3aae99510 'signed char'
|-TypedefDecl 0x55d3aafa0628 <line:25:1, col:19> col:19 referenced int16_t '__int16_t':'short'
| `-ElaboratedType 0x55d3aaf3f9e0 '__int16_t' sugar
|   `-TypedefType 0x55d3aaf3a070 '__int16_t' sugar
|     |-Typedef 0x55d3aaf39c40 '__int16_t'
|     `-BuiltinType 0x55d3aae99530 'short'
|-TypedefDecl 0x55d3aafa0690 <line:26:1, col:19> col:19 referenced int32_t '__int32_t':'int'
| `-ElaboratedType 0x55d3aaf3fb80 '__int32_t' sugar
|   `-TypedefType 0x55d3aaf3fb50 '__int32_t' sugar
|     |-Typedef 0x55d3aaf39d20 '__int32_t'
|     `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aafa06f8 <line:27:1, col:19> col:19 referenced int64_t '__int64_t':'long'
| `-ElaboratedType 0x55d3aaf3fd20 '__int64_t' sugar
|   `-TypedefType 0x55d3aaf3fcf0 '__int64_t' sugar
|     |-Typedef 0x55d3aaf39e00 '__int64_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aafa0760 </usr/include/bits/stdint-uintn.h:24:1, col:19> col:19 referenced uint8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55d3aaf39fd0 '__uint8_t' sugar
|   `-TypedefType 0x55d3aaf39fa0 '__uint8_t' sugar
|     |-Typedef 0x55d3aaf39bd0 '__uint8_t'
|     `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aafa07c8 <line:25:1, col:20> col:20 referenced uint16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55d3aaf3fab0 '__uint16_t' sugar
|   `-TypedefType 0x55d3aaf3fa80 '__uint16_t' sugar
|     |-Typedef 0x55d3aaf39cb0 '__uint16_t'
|     `-BuiltinType 0x55d3aae995d0 'unsigned short'
|-TypedefDecl 0x55d3aafa0830 <line:26:1, col:20> col:20 referenced uint32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55d3aaf3fc50 '__uint32_t' sugar
|   `-TypedefType 0x55d3aaf3fc20 '__uint32_t' sugar
|     |-Typedef 0x55d3aaf39d90 '__uint32_t'
|     `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aafa0898 <line:27:1, col:20> col:20 referenced uint64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55d3aaf3fdf0 '__uint64_t' sugar
|   `-TypedefType 0x55d3aaf3fdc0 '__uint64_t' sugar
|     |-Typedef 0x55d3aaf39e70 '__uint64_t'
|     `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aafa0960 </usr/include/bits/stdint-least.h:25:1, col:24> col:24 int_least8_t '__int_least8_t':'signed char'
| `-ElaboratedType 0x55d3aafa0920 '__int_least8_t' sugar
|   `-TypedefType 0x55d3aafa08f0 '__int_least8_t' sugar
|     |-Typedef 0x55d3aaf39f40 '__int_least8_t'
|     `-ElaboratedType 0x55d3aaf39f00 '__int8_t' sugar
|       `-TypedefType 0x55d3aaf39ed0 '__int8_t' sugar
|         |-Typedef 0x55d3aaf39b60 '__int8_t'
|         `-BuiltinType 0x55d3aae99510 'signed char'
|-TypedefDecl 0x55d3aafa0a30 <line:26:1, col:25> col:25 int_least16_t '__int_least16_t':'short'
| `-ElaboratedType 0x55d3aafa09f0 '__int_least16_t' sugar
|   `-TypedefType 0x55d3aafa09c0 '__int_least16_t' sugar
|     |-Typedef 0x55d3aaf3fa20 '__int_least16_t'
|     `-ElaboratedType 0x55d3aaf3f9e0 '__int16_t' sugar
|       `-TypedefType 0x55d3aaf3a070 '__int16_t' sugar
|         |-Typedef 0x55d3aaf39c40 '__int16_t'
|         `-BuiltinType 0x55d3aae99530 'short'
|-TypedefDecl 0x55d3aafa0b00 <line:27:1, col:25> col:25 int_least32_t '__int_least32_t':'int'
| `-ElaboratedType 0x55d3aafa0ac0 '__int_least32_t' sugar
|   `-TypedefType 0x55d3aafa0a90 '__int_least32_t' sugar
|     |-Typedef 0x55d3aaf3fbc0 '__int_least32_t'
|     `-ElaboratedType 0x55d3aaf3fb80 '__int32_t' sugar
|       `-TypedefType 0x55d3aaf3fb50 '__int32_t' sugar
|         |-Typedef 0x55d3aaf39d20 '__int32_t'
|         `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3aafa0bd0 <line:28:1, col:25> col:25 int_least64_t '__int_least64_t':'long'
| `-ElaboratedType 0x55d3aafa0b90 '__int_least64_t' sugar
|   `-TypedefType 0x55d3aafa0b60 '__int_least64_t' sugar
|     |-Typedef 0x55d3aaf3fd60 '__int_least64_t'
|     `-ElaboratedType 0x55d3aaf3fd20 '__int64_t' sugar
|       `-TypedefType 0x55d3aaf3fcf0 '__int64_t' sugar
|         |-Typedef 0x55d3aaf39e00 '__int64_t'
|         `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aafa0ca0 <line:31:1, col:25> col:25 uint_least8_t '__uint_least8_t':'unsigned char'
| `-ElaboratedType 0x55d3aafa0c60 '__uint_least8_t' sugar
|   `-TypedefType 0x55d3aafa0c30 '__uint_least8_t' sugar
|     |-Typedef 0x55d3aaf3a010 '__uint_least8_t'
|     `-ElaboratedType 0x55d3aaf39fd0 '__uint8_t' sugar
|       `-TypedefType 0x55d3aaf39fa0 '__uint8_t' sugar
|         |-Typedef 0x55d3aaf39bd0 '__uint8_t'
|         `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aafa0d70 <line:32:1, col:26> col:26 uint_least16_t '__uint_least16_t':'unsigned short'
| `-ElaboratedType 0x55d3aafa0d30 '__uint_least16_t' sugar
|   `-TypedefType 0x55d3aafa0d00 '__uint_least16_t' sugar
|     |-Typedef 0x55d3aaf3faf0 '__uint_least16_t'
|     `-ElaboratedType 0x55d3aaf3fab0 '__uint16_t' sugar
|       `-TypedefType 0x55d3aaf3fa80 '__uint16_t' sugar
|         |-Typedef 0x55d3aaf39cb0 '__uint16_t'
|         `-BuiltinType 0x55d3aae995d0 'unsigned short'
|-TypedefDecl 0x55d3aafa0e40 <line:33:1, col:26> col:26 uint_least32_t '__uint_least32_t':'unsigned int'
| `-ElaboratedType 0x55d3aafa0e00 '__uint_least32_t' sugar
|   `-TypedefType 0x55d3aafa0dd0 '__uint_least32_t' sugar
|     |-Typedef 0x55d3aaf3fc90 '__uint_least32_t'
|     `-ElaboratedType 0x55d3aaf3fc50 '__uint32_t' sugar
|       `-TypedefType 0x55d3aaf3fc20 '__uint32_t' sugar
|         |-Typedef 0x55d3aaf39d90 '__uint32_t'
|         `-BuiltinType 0x55d3aae995f0 'unsigned int'
|-TypedefDecl 0x55d3aafa0f10 <line:34:1, col:26> col:26 uint_least64_t '__uint_least64_t':'unsigned long'
| `-ElaboratedType 0x55d3aafa0ed0 '__uint_least64_t' sugar
|   `-TypedefType 0x55d3aafa0ea0 '__uint_least64_t' sugar
|     |-Typedef 0x55d3aaf3fe30 '__uint_least64_t'
|     `-ElaboratedType 0x55d3aaf3fdf0 '__uint64_t' sugar
|       `-TypedefType 0x55d3aaf3fdc0 '__uint64_t' sugar
|         |-Typedef 0x55d3aaf39e70 '__uint64_t'
|         `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aafa0f80 </usr/include/stdint.h:47:1, col:22> col:22 int_fast8_t 'signed char'
| `-BuiltinType 0x55d3aae99510 'signed char'
|-TypedefDecl 0x55d3aafa0ff0 <line:49:1, col:19> col:19 int_fast16_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aafa1060 <line:50:1, col:19> col:19 int_fast32_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aafa10d0 <line:51:1, col:19> col:19 int_fast64_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aafa1140 <line:60:1, col:24> col:24 uint_fast8_t 'unsigned char'
| `-BuiltinType 0x55d3aae995b0 'unsigned char'
|-TypedefDecl 0x55d3aafa11b0 <line:62:1, col:27> col:27 uint_fast16_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aafa1220 <line:63:1, col:27> col:27 uint_fast32_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aafa1290 <line:64:1, col:27> col:27 uint_fast64_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aafa1300 <line:76:1, col:19> col:19 intptr_t 'long'
| `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaff98f0 <line:79:1, col:27> col:27 uintptr_t 'unsigned long'
| `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3aaff99c0 <line:90:1, col:21> col:21 intmax_t '__intmax_t':'long'
| `-ElaboratedType 0x55d3aaff9980 '__intmax_t' sugar
|   `-TypedefType 0x55d3aaff9950 '__intmax_t' sugar
|     |-Typedef 0x55d3aaf3ff80 '__intmax_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3aaff9a90 <line:91:1, col:22> col:22 uintmax_t '__uintmax_t':'unsigned long'
| `-ElaboratedType 0x55d3aaff9a50 '__uintmax_t' sugar
|   `-TypedefType 0x55d3aaff9a20 '__uintmax_t' sugar
|     |-Typedef 0x55d3aaf3fff0 '__uintmax_t'
|     `-BuiltinType 0x55d3aae99610 'unsigned long'
|-FunctionDecl 0x55d3aaff9dd0 </usr/include/assert.h:67:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:67:13 __assert_fail 'void (const char *, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55d3aaff9b00 <col:28, col:40> col:40 __assertion 'const char *'
| |-ParmVarDecl 0x55d3aaff9b80 <col:53, col:65> col:65 __file 'const char *'
| |-ParmVarDecl 0x55d3aaff9c00 <line:68:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x55d3aaff9c80 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x55d3aaff9e98 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55d3aaff9ef0 <line:102:34>
|-FunctionDecl 0x55d3aaffa200 </usr/include/assert.h:72:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:72:13 __assert_perror_fail 'void (int, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55d3aaff9f30 <col:35, col:39> col:39 __errnum 'int'
| |-ParmVarDecl 0x55d3aaff9fb0 <col:49, col:61> col:61 __file 'const char *'
| |-ParmVarDecl 0x55d3aaffa030 <line:73:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x55d3aaffa0b0 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x55d3aaffa2c8 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55d3aaffa320 <line:102:34>
|-FunctionDecl 0x55d3aaffa5a0 </usr/include/assert.h:79:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:79:13 __assert 'void (const char *, const char *, int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55d3aaffa360 <col:23, col:35> col:35 __assertion 'const char *'
| |-ParmVarDecl 0x55d3aaffa3e0 <col:48, col:60> col:60 __file 'const char *'
| |-ParmVarDecl 0x55d3aaffa460 <col:68, col:72> col:72 __line 'int'
| |-NoThrowAttr 0x55d3aaffa660 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55d3aaffa6b8 <line:102:34>
|-TypedefDecl 0x55d3aaffa750 </usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h:12:1, col:27> col:27 referenced __gnuc_va_list '__builtin_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55d3aaffa710 '__builtin_va_list' sugar
|   `-TypedefType 0x55d3aaffa6e0 '__builtin_va_list' sugar
|     |-Typedef 0x55d3aae99fb0 '__builtin_va_list'
|     `-ConstantArrayType 0x55d3aae99f60 'struct __va_list_tag[1]' 1 
|       `-RecordType 0x55d3aae99da0 'struct __va_list_tag'
|         `-Record 0x55d3aae99d20 '__va_list_tag'
|-RecordDecl 0x55d3aaffa7a8 </usr/include/bits/types/__mbstate_t.h:13:9, line:21:1> line:13:9 struct definition
| |-FieldDecl 0x55d3aaffa868 <line:15:3, col:7> col:7 __count 'int'
| |-RecordDecl 0x55d3ab006dd0 <line:16:3, line:20:3> line:16:3 union definition
| | |-FieldDecl 0x55d3ab006e88 <<built-in>:115:23, /usr/include/bits/types/__mbstate_t.h:18:19> col:19 __wch 'unsigned int'
| | `-FieldDecl 0x55d3ab006f70 <line:19:5, col:18> col:10 __wchb 'char[4]'
| `-FieldDecl 0x55d3ab007018 <line:16:3, line:20:5> col:5 __value 'union (unnamed union at /usr/include/bits/types/__mbstate_t.h:16:3)':'union __mbstate_t::(unnamed at /usr/include/bits/types/__mbstate_t.h:16:3)'
|-TypedefDecl 0x55d3ab0070c8 <line:13:1, line:21:3> col:3 referenced __mbstate_t 'struct __mbstate_t':'__mbstate_t'
| `-ElaboratedType 0x55d3ab007070 'struct __mbstate_t' sugar
|   `-RecordType 0x55d3aaffa830 '__mbstate_t'
|     `-Record 0x55d3aaffa7a8 <line:13:9, line:21:1>
|-RecordDecl 0x55d3ab007138 </usr/include/bits/types/__fpos_t.h:10:9, line:14:1> line:10:16 struct _G_fpos_t definition
| |-FieldDecl 0x55d3ab007250 <line:12:3, col:11> col:11 __pos '__off_t':'long'
| `-FieldDecl 0x55d3ab007310 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55d3ab0073b8 <line:10:1, line:14:3> col:3 referenced __fpos_t 'struct _G_fpos_t'
| `-ElaboratedType 0x55d3ab007360 'struct _G_fpos_t' sugar
|   `-RecordType 0x55d3ab0071c0 'struct _G_fpos_t'
|     `-Record 0x55d3ab007138 '_G_fpos_t'
|-RecordDecl 0x55d3ab007428 </usr/include/bits/types/__fpos64_t.h:10:9, line:14:1> line:10:16 struct _G_fpos64_t definition
| |-FieldDecl 0x55d3ab0074e0 <line:12:3, col:13> col:13 __pos '__off64_t':'long'
| `-FieldDecl 0x55d3ab007540 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55d3ab0075e8 <line:10:1, line:14:3> col:3 __fpos64_t 'struct _G_fpos64_t'
| `-ElaboratedType 0x55d3ab007590 'struct _G_fpos64_t' sugar
|   `-RecordType 0x55d3ab0074b0 'struct _G_fpos64_t'
|     `-Record 0x55d3ab007428 '_G_fpos64_t'
|-RecordDecl 0x55d3ab007658 </usr/include/bits/types/__FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55d3ab007750 <line:5:1, col:25> col:25 __FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55d3ab007700 'struct _IO_FILE' sugar
|   `-RecordType 0x55d3ab0076e0 'struct _IO_FILE'
|     `-Record 0x55d3ab007b68 '_IO_FILE'
|-RecordDecl 0x55d3ab0077a8 prev 0x55d3ab007658 </usr/include/bits/types/FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55d3ab007848 <line:7:1, col:25> col:25 referenced FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55d3ab007700 'struct _IO_FILE' sugar
|   `-RecordType 0x55d3ab0076e0 'struct _IO_FILE'
|     `-Record 0x55d3ab007b68 '_IO_FILE'
|-RecordDecl 0x55d3ab0078a0 prev 0x55d3ab0077a8 </usr/include/bits/types/struct_FILE.h:37:1, col:8> col:8 struct _IO_FILE
|-RecordDecl 0x55d3ab007920 <line:38:1, col:8> col:8 struct _IO_marker
|-RecordDecl 0x55d3ab0079c0 <line:39:1, col:8> col:8 struct _IO_codecvt
|-RecordDecl 0x55d3ab007a60 <line:40:1, col:8> col:8 struct _IO_wide_data
|-TypedefDecl 0x55d3ab007b10 <line:45:1, col:14> col:14 referenced _IO_lock_t 'void'
| `-BuiltinType 0x55d3aae994b0 'void'
|-RecordDecl 0x55d3ab007b68 prev 0x55d3ab0078a0 <line:51:1, line:110:1> line:51:8 struct _IO_FILE definition
| |-FieldDecl 0x55d3ab007c00 <line:53:3, col:7> col:7 _flags 'int'
| |-FieldDecl 0x55d3ab007c68 <line:56:3, col:9> col:9 _IO_read_ptr 'char *'
| |-FieldDecl 0x55d3ab007cd0 <line:57:3, col:9> col:9 _IO_read_end 'char *'
| |-FieldDecl 0x55d3ab007d38 <line:58:3, col:9> col:9 _IO_read_base 'char *'
| |-FieldDecl 0x55d3ab00bf80 <line:59:3, col:9> col:9 _IO_write_base 'char *'
| |-FieldDecl 0x55d3ab00bfe8 <line:60:3, col:9> col:9 _IO_write_ptr 'char *'
| |-FieldDecl 0x55d3ab00c050 <line:61:3, col:9> col:9 _IO_write_end 'char *'
| |-FieldDecl 0x55d3ab00c0b8 <line:62:3, col:9> col:9 _IO_buf_base 'char *'
| |-FieldDecl 0x55d3ab00c120 <line:63:3, col:9> col:9 _IO_buf_end 'char *'
| |-FieldDecl 0x55d3ab00c188 <line:66:3, col:9> col:9 _IO_save_base 'char *'
| |-FieldDecl 0x55d3ab00c1f0 <line:67:3, col:9> col:9 _IO_backup_base 'char *'
| |-FieldDecl 0x55d3ab00c258 <line:68:3, col:9> col:9 _IO_save_end 'char *'
| |-FieldDecl 0x55d3ab00c368 <line:70:3, col:22> col:22 _markers 'struct _IO_marker *'
| |-FieldDecl 0x55d3ab00c448 <line:72:3, col:20> col:20 _chain 'struct _IO_FILE *'
| |-FieldDecl 0x55d3ab00c4b0 <line:74:3, col:7> col:7 _fileno 'int'
| |-FieldDecl 0x55d3ab00c558 <line:75:3, col:15> col:7 _flags2 'int'
| | `-ConstantExpr 0x55d3ab00c538 <col:15> 'int'
| |   |-value: Int 24
| |   `-IntegerLiteral 0x55d3ab00c500 <col:15> 'int' 24
| |-FieldDecl 0x55d3ab00c608 <line:77:3, col:26> col:8 _short_backupbuf 'char[1]'
| |-FieldDecl 0x55d3ab00c668 <line:78:3, col:11> col:11 _old_offset '__off_t':'long'
| |-FieldDecl 0x55d3ab00c6d0 <line:81:3, col:18> col:18 _cur_column 'unsigned short'
| |-FieldDecl 0x55d3ab00c738 <line:82:3, col:15> col:15 _vtable_offset 'signed char'
| |-FieldDecl 0x55d3ab00c7e8 <line:83:3, col:19> col:8 _shortbuf 'char[1]'
| |-FieldDecl 0x55d3ab00c8e8 <line:85:3, col:15> col:15 _lock '_IO_lock_t *'
| |-FieldDecl 0x55d3ab00c948 <line:93:3, col:13> col:13 _offset '__off64_t':'long'
| |-FieldDecl 0x55d3ab00ca58 <line:95:3, col:23> col:23 _codecvt 'struct _IO_codecvt *'
| |-FieldDecl 0x55d3ab00cb68 <line:96:3, col:25> col:25 _wide_data 'struct _IO_wide_data *'
| |-FieldDecl 0x55d3ab00cbe0 <line:97:3, col:20> col:20 _freeres_list 'struct _IO_FILE *'
| |-FieldDecl 0x55d3ab00cc48 <line:98:3, col:9> col:9 _freeres_buf 'void *'
| |-FieldDecl 0x55d3ab00cd28 <line:99:3, col:21> col:21 _prevchain 'struct _IO_FILE **'
| |-FieldDecl 0x55d3ab00cd90 <line:100:3, col:7> col:7 _mode 'int'
| |-FieldDecl 0x55d3ab00cdf8 <line:102:3, col:7> col:7 _unused3 'int'
| |-FieldDecl 0x55d3ab00ce58 <line:104:3, col:14> col:14 _total_written '__uint64_t':'unsigned long'
| `-FieldDecl 0x55d3ab00f0a0 <line:109:3, col:56> col:8 _unused2 'char[8]'
|-TypedefDecl 0x55d3ab00f3a0 </usr/include/bits/types/cookie_io_functions_t.h:27:1, line:28:58> line:27:19 referenced cookie_read_function_t '__ssize_t (void *, char *, size_t)'
| `-FunctionProtoType 0x55d3ab00f320 '__ssize_t (void *, char *, size_t)' cdecl
|   |-ElaboratedType 0x55d3ab00f120 '__ssize_t' sugar
|   | `-TypedefType 0x55d3ab00f0f0 '__ssize_t' sugar
|   |   |-Typedef 0x55d3aaf478a0 '__ssize_t'
|   |   `-BuiltinType 0x55d3aae99570 'long'
|   |-PointerType 0x55d3aae99bf0 'void *'
|   | `-BuiltinType 0x55d3aae994b0 'void'
|   |-PointerType 0x55d3aae99c80 'char *'
|   | `-BuiltinType 0x55d3aae994f0 'char'
|   `-ElaboratedType 0x55d3aaf025d0 'size_t' sugar
|     `-TypedefType 0x55d3aaf025a0 'size_t' sugar
|       |-Typedef 0x55d3aaf02418 'size_t'
|       `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3ab00f640 <line:36:1, line:37:59> line:36:19 referenced cookie_write_function_t '__ssize_t (void *, const char *, size_t)'
| `-FunctionProtoType 0x55d3ab00f5c0 '__ssize_t (void *, const char *, size_t)' cdecl
|   |-ElaboratedType 0x55d3ab00f120 '__ssize_t' sugar
|   | `-TypedefType 0x55d3ab00f0f0 '__ssize_t' sugar
|   |   |-Typedef 0x55d3aaf478a0 '__ssize_t'
|   |   `-BuiltinType 0x55d3aae99570 'long'
|   |-PointerType 0x55d3aae99bf0 'void *'
|   | `-BuiltinType 0x55d3aae994b0 'void'
|   |-PointerType 0x55d3aae9a220 'const char *'
|   | `-QualType 0x55d3aae994f1 'const char' const
|   |   `-BuiltinType 0x55d3aae994f0 'char'
|   `-ElaboratedType 0x55d3aaf025d0 'size_t' sugar
|     `-TypedefType 0x55d3aaf025a0 'size_t' sugar
|       |-Typedef 0x55d3aaf02418 'size_t'
|       `-BuiltinType 0x55d3aae99610 'unsigned long'
|-TypedefDecl 0x55d3ab00f958 <line:45:1, col:78> col:13 referenced cookie_seek_function_t 'int (void *, __off64_t *, int)'
| `-FunctionProtoType 0x55d3ab00f8d0 'int (void *, __off64_t *, int)' cdecl
|   |-BuiltinType 0x55d3aae99550 'int'
|   |-PointerType 0x55d3aae99bf0 'void *'
|   | `-BuiltinType 0x55d3aae994b0 'void'
|   |-PointerType 0x55d3ab00f750 '__off64_t *'
|   | `-ElaboratedType 0x55d3aaf47a10 '__off64_t' sugar
|   |   `-TypedefType 0x55d3aaf479e0 '__off64_t' sugar
|   |     |-Typedef 0x55d3aaf403e0 '__off64_t'
|   |     `-BuiltinType 0x55d3aae99570 'long'
|   `-BuiltinType 0x55d3aae99550 'int'
|-TypedefDecl 0x55d3ab00fa98 <line:48:1, col:52> col:13 referenced cookie_close_function_t 'int (void *)'
| `-FunctionProtoType 0x55d3ab00fa30 'int (void *)' cdecl
|   |-BuiltinType 0x55d3aae99550 'int'
|   `-PointerType 0x55d3aae99bf0 'void *'
|     `-BuiltinType 0x55d3aae994b0 'void'
|-RecordDecl 0x55d3ab00faf0 <line:55:9, line:61:1> line:55:16 struct _IO_cookie_io_functions_t definition
| |-FieldDecl 0x55d3ab00fc68 <line:57:3, col:27> col:27 read 'cookie_read_function_t *'
| |-FieldDecl 0x55d3ab00fd98 <line:58:3, col:28> col:28 write 'cookie_write_function_t *'
| |-FieldDecl 0x55d3ab00fec8 <line:59:3, col:27> col:27 seek 'cookie_seek_function_t *'
| `-FieldDecl 0x55d3ab011b28 <line:60:3, col:28> col:28 close 'cookie_close_function_t *'
|-TypedefDecl 0x55d3ab011bd8 <line:55:1, line:61:3> col:3 referenced cookie_io_functions_t 'struct _IO_cookie_io_functions_t'
| `-ElaboratedType 0x55d3ab011b80 'struct _IO_cookie_io_functions_t' sugar
|   `-RecordType 0x55d3ab00fb70 'struct _IO_cookie_io_functions_t'
|     `-Record 0x55d3ab00faf0 '_IO_cookie_io_functions_t'
|-TypedefDecl 0x55d3ab011cc0 </usr/include/stdio.h:53:1, col:24> col:24 va_list '__gnuc_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55d3ab011c80 '__gnuc_va_list' sugar
|   `-TypedefType 0x55d3ab011c50 '__gnuc_va_list' sugar
|     |-Typedef 0x55d3aaffa750 '__gnuc_va_list'
|     `-ElaboratedType 0x55d3aaffa710 '__builtin_va_list' sugar
|       `-TypedefType 0x55d3aaffa6e0 '__builtin_va_list' sugar
|         |-Typedef 0x55d3aae99fb0 '__builtin_va_list'
|         `-ConstantArrayType 0x55d3aae99f60 'struct __va_list_tag[1]' 1 
|           `-RecordType 0x55d3aae99da0 'struct __va_list_tag'
|             `-Record 0x55d3aae99d20 '__va_list_tag'
|-TypedefDecl 0x55d3ab011d28 <line:64:1, col:17> col:17 off_t '__off_t':'long'
| `-ElaboratedType 0x55d3ab007210 '__off_t' sugar
|   `-TypedefType 0x55d3ab0071e0 '__off_t' sugar
|     |-Typedef 0x55d3aaf40370 '__off_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3ab011d90 <line:78:1, col:19> col:19 ssize_t '__ssize_t':'long'
| `-ElaboratedType 0x55d3ab00f120 '__ssize_t' sugar
|   `-TypedefType 0x55d3ab00f0f0 '__ssize_t' sugar
|     |-Typedef 0x55d3aaf478a0 '__ssize_t'
|     `-BuiltinType 0x55d3aae99570 'long'
|-TypedefDecl 0x55d3ab011e60 <line:85:1, col:18> col:18 referenced fpos_t '__fpos_t':'struct _G_fpos_t'
| `-ElaboratedType 0x55d3ab011e20 '__fpos_t' sugar
|   `-TypedefType 0x55d3ab011df0 '__fpos_t' sugar
|     |-Typedef 0x55d3ab0073b8 '__fpos_t'
|     `-ElaboratedType 0x55d3ab007360 'struct _G_fpos_t' sugar
|       `-RecordType 0x55d3ab0071c0 'struct _G_fpos_t'
|         `-Record 0x55d3ab007138 '_G_fpos_t'
|-VarDecl 0x55d3ab011f68 <line:149:1, col:14> col:14 stdin 'FILE *' extern
|-VarDecl 0x55d3ab011fe8 <line:150:1, col:14> col:14 stdout 'FILE *' extern
|-VarDecl 0x55d3ab012068 <line:151:1, col:14> col:14 stderr 'FILE *' extern
|-FunctionDecl 0x55d3ab0121b8 <line:158:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:158:12 remove 'int (const char *)' extern
| |-ParmVarDecl 0x55d3ab0120e8 <col:20, col:32> col:32 __filename 'const char *'
| `-NoThrowAttr 0x55d3ab012268 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab0123f8 </usr/include/stdio.h:160:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:160:12 rename 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55d3ab0122d8 <col:20, col:32> col:32 __old 'const char *'
| |-ParmVarDecl 0x55d3ab012358 <col:39, col:51> col:51 __new 'const char *'
| `-NoThrowAttr 0x55d3ab0124b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab0127a8 </usr/include/stdio.h:164:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:164:12 renameat 'int (int, const char *, int, const char *)' extern
| |-ParmVarDecl 0x55d3ab012520 <col:22, col:26> col:26 __oldfd 'int'
| |-ParmVarDecl 0x55d3ab0125a0 <col:35, col:47> col:47 __old 'const char *'
| |-ParmVarDecl 0x55d3ab012620 <col:54, col:58> col:58 __newfd 'int'
| |-ParmVarDecl 0x55d3ab0126a0 <line:165:8, col:20> col:20 __new 'const char *'
| `-NoThrowAttr 0x55d3ab012870 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab012a18 </usr/include/stdio.h:187:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:187:12 fclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab0128e0 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab013b00 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:187:49> 1
|-FunctionDecl 0x55d3ab013c78 <line:197:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:197:14 tmpfile 'FILE *(void)' extern
| `-RestrictAttr 0x55d3ab013d20 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab013f68 </usr/include/stdio.h:214:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:214:14 tmpnam 'char *(char *)' extern
| |-ParmVarDecl 0x55d3ab013e50 <col:22, col:35> col:26 'char *'
| `-NoThrowAttr 0x55d3ab014018 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab014168 </usr/include/stdio.h:219:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:219:14 tmpnam_r 'char *(char *)' extern
| |-ParmVarDecl 0x55d3ab0140d0 <col:24, col:41> col:29 __s 'char *'
| `-NoThrowAttr 0x55d3ab014218 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab0143a8 </usr/include/stdio.h:231:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:231:14 tempnam 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3ab014288 <col:23, col:35> col:35 __dir 'const char *'
| |-ParmVarDecl 0x55d3ab014308 <col:42, col:54> col:54 __pfx 'const char *'
| |-NoThrowAttr 0x55d3ab014460 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55d3ab0144b8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab0145a0 </usr/include/stdio.h:239:1, col:34> col:12 fflush 'int (FILE *)' extern
| `-ParmVarDecl 0x55d3ab014508 <col:20, col:26> col:26 __stream 'FILE *'
|-FunctionDecl 0x55d3ab014700 <line:248:1, col:43> col:12 fflush_unlocked 'int (FILE *)' extern
| `-ParmVarDecl 0x55d3ab014668 <col:29, col:35> col:35 __stream 'FILE *'
|-FunctionDecl 0x55d3ab0149e0 <line:267:14> col:14 implicit fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3ab014b10 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55d3ab014b78 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55d3ab014a88 <<invalid sloc>> Implicit 636
|-FunctionDecl 0x55d3ab014bf0 prev 0x55d3ab0149e0 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:267:14 fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3ab0147c8 <col:21, col:44> col:44 __filename 'const char *restrict'
| |-ParmVarDecl 0x55d3ab014848 <line:268:7, col:30> col:30 __modes 'const char *restrict'
| |-BuiltinAttr 0x55d3ab014d10 <<invalid sloc>> Inherited Implicit 636
| `-RestrictAttr 0x55d3ab014ca8 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab014fb8 </usr/include/stdio.h:274:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:274:14 freopen 'FILE *(const char *restrict, const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3ab014d58 <col:23, col:46> col:46 __filename 'const char *restrict'
| |-ParmVarDecl 0x55d3ab014dd8 <line:275:9, col:32> col:32 __modes 'const char *restrict'
| |-ParmVarDecl 0x55d3ab014e58 <line:276:9, col:26> col:26 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3ab015078 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:276:55> 3
|-FunctionDecl 0x55d3ab0152a8 <line:302:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:302:14 fdopen 'FILE *(int, const char *)' extern
| |-ParmVarDecl 0x55d3ab015100 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55d3ab015180 <col:32, col:44> col:44 __modes 'const char *'
| |-NoThrowAttr 0x55d3ab015360 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55d3ab0153b8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab0156a8 </usr/include/stdio.h:309:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:309:14 fopencookie 'FILE *(void *restrict, const char *restrict, cookie_io_functions_t)' extern
| |-ParmVarDecl 0x55d3ab015408 <col:27, col:44> col:44 __magic_cookie 'void *restrict'
| |-ParmVarDecl 0x55d3ab015488 <line:310:6, col:29> col:29 __modes 'const char *restrict'
| |-ParmVarDecl 0x55d3ab015560 <line:311:6, col:28> col:28 __io_funcs 'cookie_io_functions_t':'struct _IO_cookie_io_functions_t'
| |-NoThrowAttr 0x55d3ab015768 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55d3ab0157c0 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab015a48 </usr/include/stdio.h:317:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:317:14 fmemopen 'FILE *(void *, size_t, const char *)' extern
| |-ParmVarDecl 0x55d3ab015810 <col:24, col:30> col:30 __s 'void *'
| |-ParmVarDecl 0x55d3ab015888 <col:35, col:42> col:42 __len 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab015908 <col:49, col:61> col:61 __modes 'const char *'
| |-NoThrowAttr 0x55d3ab015b20 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55d3ab015b78 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab015dc8 </usr/include/stdio.h:323:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:323:14 open_memstream 'FILE *(char **, size_t *)' extern
| |-ParmVarDecl 0x55d3ab015bc8 <col:30, col:37> col:37 __bufloc 'char **'
| |-ParmVarDecl 0x55d3ab015ca8 <col:47, col:55> col:55 __sizeloc 'size_t *'
| |-NoThrowAttr 0x55d3ab015e80 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55d3ab015ed8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab0160e0 </usr/include/stdio.h:337:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:337:13 setbuf 'void (FILE *restrict, char *restrict)' extern
| |-ParmVarDecl 0x55d3ab015f28 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab015fa8 <col:48, col:65> col:65 __buf 'char *restrict'
| |-NoThrowAttr 0x55d3ab016198 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab0161f0 <line:555:57, /usr/include/stdio.h:338:16> 1
|-FunctionDecl 0x55d3ab016538 <line:342:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:342:12 setvbuf 'int (FILE *restrict, char *restrict, int, size_t)' extern
| |-ParmVarDecl 0x55d3ab016250 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab0162d0 <col:48, col:65> col:65 __buf 'char *restrict'
| |-ParmVarDecl 0x55d3ab016350 <line:343:7, col:11> col:11 __modes 'int'
| |-ParmVarDecl 0x55d3ab0163c8 <col:20, col:27> col:27 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3ab016600 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab016658 <line:555:57, /usr/include/stdio.h:343:53> 1
|-FunctionDecl 0x55d3ab016900 <line:348:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:348:13 setbuffer 'void (FILE *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55d3ab0166b0 <col:24, col:41> col:41 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab016730 <col:51, col:68> col:68 __buf 'char *restrict'
| |-ParmVarDecl 0x55d3ab0167a8 <line:349:10, col:17> col:17 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55d3ab0169c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab016a18 <line:555:57, /usr/include/stdio.h:349:46> 1
|-FunctionDecl 0x55d3ab016bd0 <line:352:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:352:13 setlinebuf 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab016a70 <col:25, col:31> col:31 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab016c80 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab016cd8 <line:555:57, /usr/include/stdio.h:352:62> 1
|-FunctionDecl 0x55d3ab016f58 <line:360:12> col:12 implicit fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab017060 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab0170c8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab017000 <<invalid sloc>> Implicit 557
| |-FormatAttr 0x55d3ab017140 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55d3ab017178 <col:12> Implicit
|-FunctionDecl 0x55d3ab0171a0 prev 0x55d3ab016f58 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:360:12 fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab016d30 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab016db0 <line:361:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab0172c8 <<invalid sloc>> Inherited Implicit 557
| |-FormatAttr 0x55d3ab0172f8 <line:360:12> Inherited printf 2 3
| |-NoThrowAttr 0x55d3ab017330 <col:12> Inherited Implicit
| `-NonNullAttr 0x55d3ab017258 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:361:58> 1
|-FunctionDecl 0x55d3ab017490 <line:366:12> col:12 implicit used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55d3ab017598 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55d3ab017538 <<invalid sloc>> Implicit 1057
| `-FormatAttr 0x55d3ab017608 <col:12> Implicit printf 1 2
|-FunctionDecl 0x55d3ab017640 prev 0x55d3ab017490 <col:1, col:56> col:12 used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55d3ab017370 <col:20, col:43> col:43 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab017720 <<invalid sloc>> Inherited Implicit 1057
| `-FormatAttr 0x55d3ab017750 <col:12> Inherited printf 1 2
|-FunctionDecl 0x55d3ab017960 <line:368:12> col:12 implicit sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab017a68 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55d3ab017b40 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab017a08 <<invalid sloc>> Implicit 1141
| |-FormatAttr 0x55d3ab017bb8 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55d3ab017bf0 <col:12> Implicit
|-FunctionDecl 0x55d3ab017c18 prev 0x55d3ab017960 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:368:12 sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab0177a0 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55d3ab017820 <line:369:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab017d28 <<invalid sloc>> Inherited Implicit 1141
| |-FormatAttr 0x55d3ab017d58 <line:368:12> Inherited printf 2 3
| `-NoThrowAttr 0x55d3ab017cd0 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55d3ab0180b8 </usr/include/stdio.h:375:12> col:12 implicit vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab0181c0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab018228 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab018290 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab018160 <<invalid sloc>> Implicit 1469
| |-FormatAttr 0x55d3ab018310 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55d3ab018348 <col:12> Implicit
|-FunctionDecl 0x55d3ab018370 prev 0x55d3ab0180b8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:375:12 vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab017da8 <col:22, col:39> col:39 __s 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab017e28 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab017f00 <line:376:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab0184a8 <<invalid sloc>> Inherited Implicit 1469
| |-FormatAttr 0x55d3ab0184d8 <line:375:12> Inherited printf 2 0
| |-NoThrowAttr 0x55d3ab018510 <col:12> Inherited Implicit
| `-NonNullAttr 0x55d3ab018430 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:376:43> 1
|-FunctionDecl 0x55d3ab018730 <line:381:12> col:12 implicit vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab018838 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab0188a0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab0187d8 <<invalid sloc>> Implicit 1454
| |-FormatAttr 0x55d3ab018918 <col:12> Implicit printf 1 0
| `-NoThrowAttr 0x55d3ab018950 <col:12> Implicit
|-FunctionDecl 0x55d3ab018978 prev 0x55d3ab018730 <col:1, col:74> col:12 vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab018550 <col:21, col:44> col:44 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab0185c8 <col:54, col:69> col:69 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab018a60 <<invalid sloc>> Inherited Implicit 1454
| |-FormatAttr 0x55d3ab018a90 <col:12> Inherited printf 1 0
| `-NoThrowAttr 0x55d3ab018ac8 <col:12> Inherited Implicit
|-FunctionDecl 0x55d3ab018dd8 <line:383:12> col:12 implicit vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab018ee0 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55d3ab018f48 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab018fb0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab018e80 <<invalid sloc>> Implicit 1471
| |-FormatAttr 0x55d3ab019030 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55d3ab019068 <col:12> Implicit
|-FunctionDecl 0x55d3ab019090 prev 0x55d3ab018dd8 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:383:12 vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab018b50 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55d3ab018bd0 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab018c48 <line:384:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab0191a8 <<invalid sloc>> Inherited Implicit 1471
| |-FormatAttr 0x55d3ab0191d8 <line:383:12> Inherited printf 2 0
| `-NoThrowAttr 0x55d3ab019150 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55d3ab019510 </usr/include/stdio.h:388:12> col:12 implicit snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab019618 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55d3ab019680 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3ab0196e8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab0195b8 <<invalid sloc>> Implicit 1209
| |-FormatAttr 0x55d3ab019768 <col:12> Implicit printf 3 4
| `-NoThrowAttr 0x55d3ab0197a0 <col:12> Implicit
|-FunctionDecl 0x55d3ab0197c8 prev 0x55d3ab019510 <col:1, line:390:62> line:388:12 snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab019228 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55d3ab0192a0 <col:44, col:51> col:51 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab019320 <line:389:8, col:31> col:31 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab019918 <<invalid sloc>> Inherited Implicit 1209
| |-NoThrowAttr 0x55d3ab019888 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55d3ab0198e0 </usr/include/stdio.h:390:32, col:60> printf 3 4
|-FunctionDecl 0x55d3ab019ce0 <line:392:12> col:12 implicit vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab019de8 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55d3ab019e50 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3ab019eb8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab019f20 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab019d88 <<invalid sloc>> Implicit 1473
| |-FormatAttr 0x55d3ab019fa8 <col:12> Implicit printf 3 0
| `-NoThrowAttr 0x55d3ab019fe0 <col:12> Implicit
|-FunctionDecl 0x55d3ab01a008 prev 0x55d3ab019ce0 <col:1, line:394:62> line:392:12 vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab019960 <col:23, col:40> col:40 __s 'char *restrict'
| |-ParmVarDecl 0x55d3ab0199d8 <col:45, col:52> col:52 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab019a58 <line:393:9, col:32> col:32 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab019ad0 <col:42, col:57> col:57 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01a160 <<invalid sloc>> Inherited Implicit 1473
| |-NoThrowAttr 0x55d3ab01a0d0 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55d3ab01a128 </usr/include/stdio.h:394:32, col:60> printf 3 0
|-FunctionDecl 0x55d3ab01a438 <line:400:1, line:402:62> line:400:12 vasprintf 'int (char **restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01a1a8 <col:23, col:41> col:41 __ptr 'char **restrict'
| |-ParmVarDecl 0x55d3ab01a228 <col:48, col:71> col:71 __f 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01a2a0 <line:401:9, col:24> col:24 __arg 'struct __va_list_tag *'
| |-NoThrowAttr 0x55d3ab01a4f8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55d3ab01a550 </usr/include/stdio.h:402:32, col:60> printf 2 0
|-FunctionDecl 0x55d3ab01a7b0 <line:403:1, line:405:62> line:403:12 __asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01a5a0 <col:24, col:42> col:42 __ptr 'char **restrict'
| |-ParmVarDecl 0x55d3ab01a620 <line:404:10, col:33> col:33 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55d3ab01a868 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55d3ab01a8c0 </usr/include/stdio.h:405:32, col:60> printf 2 3
|-FunctionDecl 0x55d3ab01aa80 <line:406:1, line:408:62> line:406:12 asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01a910 <col:22, col:40> col:40 __ptr 'char **restrict'
| |-ParmVarDecl 0x55d3ab01a990 <line:407:8, col:31> col:31 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55d3ab01ab38 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55d3ab01aba0 </usr/include/stdio.h:408:32, col:60> printf 2 3
|-FunctionDecl 0x55d3ab01ae78 <line:413:1, line:415:52> line:413:12 vdprintf 'int (int, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01abf0 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55d3ab01ac70 <col:32, col:55> col:55 __fmt 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01ace8 <line:414:8, col:23> col:23 __arg 'struct __va_list_tag *'
| `-FormatAttr 0x55d3ab01af38 <line:415:22, col:50> printf 2 0
|-FunctionDecl 0x55d3ab01b1c0 <line:416:1, line:417:52> line:416:12 dprintf 'int (int, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01afb8 <col:21, col:25> col:25 __fd 'int'
| |-ParmVarDecl 0x55d3ab01b038 <col:31, col:54> col:54 __fmt 'const char *restrict'
| `-FormatAttr 0x55d3ab01b278 <line:417:22, col:50> printf 2 3
|-FunctionDecl 0x55d3ab01b438 <line:425:12> col:12 implicit fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01b540 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01b5a8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01b4e0 <<invalid sloc>> Implicit 560
| `-FormatAttr 0x55d3ab01b620 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55d3ab01b658 prev 0x55d3ab01b438 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:425:12 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01b2f8 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01b378 <line:426:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01b788 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55d3ab01b7b8 <line:425:12> Inherited scanf 2 3
| `-NonNullAttr 0x55d3ab01b710 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> 1
|-FunctionDecl 0x55d3ab01b8a0 <line:431:12> col:12 implicit scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01b9a8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01b948 <<invalid sloc>> Implicit 1162
| `-FormatAttr 0x55d3ab01ba18 <col:12> Implicit scanf 1 2
|-FunctionDecl 0x55d3ab01ba50 prev 0x55d3ab01b8a0 <col:1, col:55> col:12 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01b808 <col:19, col:42> col:42 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01bb30 <<invalid sloc>> Inherited Implicit 1162
| `-FormatAttr 0x55d3ab01bb80 <col:12> Inherited scanf 1 2
|-FunctionDecl 0x55d3ab01bd90 <line:433:12> col:12 implicit sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01be98 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01bf00 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01be38 <<invalid sloc>> Implicit 1144
| `-FormatAttr 0x55d3ab01bf78 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55d3ab01bfb0 prev 0x55d3ab01bd90 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:433:12 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01bbd0 <col:20, col:43> col:43 __s 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01bc50 <line:434:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01c0c0 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55d3ab01c0f0 <line:433:12> Inherited scanf 2 3
| `-NoThrowAttr 0x55d3ab01c068 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab01c2e8 prev 0x55d3ab01b658 </usr/include/stdio.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:466:24 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01c140 <col:33, col:50> col:50 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01c1c0 <line:467:5, col:28> col:28 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01c468 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55d3ab01c498 <line:425:12> Inherited scanf 2 3
| |-NonNullAttr 0x55d3ab01c4d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> Inherited 1
| |-AsmLabelAttr 0x55d3ab01c390 <<scratch space>:51:1> "__isoc99_fscanf" IsLiteralLabel
| `-NonNullAttr 0x55d3ab01c420 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:468:46> 1
|-FunctionDecl 0x55d3ab01c630 prev 0x55d3ab01ba50 <line:469:1, /usr/include/sys/cdefs.h:410:79> /usr/include/stdio.h:469:24 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01c530 <col:32, col:55> col:55 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01c760 <<invalid sloc>> Inherited Implicit 1162
| |-FormatAttr 0x55d3ab01c790 <line:431:12> Inherited scanf 1 2
| `-AsmLabelAttr 0x55d3ab01c6d8 <<scratch space>:53:1> "__isoc99_scanf" IsLiteralLabel
|-FunctionDecl 0x55d3ab01c930 prev 0x55d3ab01bfb0 </usr/include/stdio.h:471:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:471:28 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55d3ab01c7e0 <col:37, col:60> col:60 __s 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01c860 <line:472:9, col:32> col:32 __format 'const char *restrict'
| |-BuiltinAttr 0x55d3ab01ca90 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55d3ab01cac0 <line:433:12> Inherited scanf 2 3
| |-AsmLabelAttr 0x55d3ab01c9d8 <<scratch space>:55:1> "__isoc99_sscanf" IsLiteralLabel
| `-NoThrowAttr 0x55d3ab01ca68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab01cd38 </usr/include/stdio.h:493:12> col:12 implicit vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01ce40 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01cea8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01cf10 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01cde0 <<invalid sloc>> Implicit 1451
| `-FormatAttr 0x55d3ab01cf90 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55d3ab01cfc8 prev 0x55d3ab01cd38 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:493:12 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01cb10 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01cba8 <col:43, col:66> col:66 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01cc20 <line:494:7, col:22> col:22 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01d138 <<invalid sloc>> Inherited Implicit 1451
| |-FormatAttr 0x55d3ab01d088 <line:495:22, col:49> scanf 2 0
| `-NonNullAttr 0x55d3ab01d0f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> 1
|-FunctionDecl 0x55d3ab01d2e8 <line:501:12> col:12 implicit vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01d3f0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01d458 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01d390 <<invalid sloc>> Implicit 1461
| `-FormatAttr 0x55d3ab01d4d0 <col:12> Implicit scanf 1 0
|-FunctionDecl 0x55d3ab01d508 prev 0x55d3ab01d2e8 <col:1, line:502:51> line:501:12 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01d180 <col:20, col:43> col:43 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01d1f8 <col:53, col:68> col:68 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01d628 <<invalid sloc>> Inherited Implicit 1461
| `-FormatAttr 0x55d3ab01d5c0 <line:502:22, col:49> scanf 1 0
|-FunctionDecl 0x55d3ab01d948 <line:505:12> col:12 implicit vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01da50 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01dab8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01db20 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01d9f0 <<invalid sloc>> Implicit 1459
| `-FormatAttr 0x55d3ab01dbb8 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55d3ab01dbf0 prev 0x55d3ab01d948 <col:1, line:507:59> line:505:12 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01d670 <col:21, col:44> col:44 __s 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01d6f0 <line:506:7, col:30> col:30 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01d768 <col:40, col:55> col:55 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01dd40 <<invalid sloc>> Inherited Implicit 1459
| |-NoThrowAttr 0x55d3ab01dcb0 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55d3ab01dd08 </usr/include/stdio.h:507:30, col:57> scanf 2 0
|-FunctionDecl 0x55d3ab01dfc8 prev 0x55d3ab01cfc8 <line:543:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:543:24 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01dd88 <line:544:11, col:28> col:28 __s 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab01de08 <line:545:4, col:27> col:27 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01de80 <col:37, col:52> col:52 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01e188 <<invalid sloc>> Inherited Implicit 1451
| |-NonNullAttr 0x55d3ab01e1b8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> Inherited 1
| |-AsmLabelAttr 0x55d3ab01e070 <<scratch space>:59:1> "__isoc99_vfscanf" IsLiteralLabel
| |-FormatAttr 0x55d3ab01e108 </usr/include/stdio.h:547:22, col:49> scanf 2 0
| `-NonNullAttr 0x55d3ab01e140 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:547:72> 1
|-FunctionDecl 0x55d3ab01e3a8 prev 0x55d3ab01d508 <line:548:1, line:550:51> line:548:24 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01e210 <col:33, col:56> col:56 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01e288 <line:549:5, col:20> col:20 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01e518 <<invalid sloc>> Inherited Implicit 1461
| |-AsmLabelAttr 0x55d3ab01e450 <<scratch space>:61:1> "__isoc99_vscanf" IsLiteralLabel
| `-FormatAttr 0x55d3ab01e4e0 </usr/include/stdio.h:550:22, col:49> scanf 1 0
|-FunctionDecl 0x55d3ab01e780 prev 0x55d3ab01dbf0 <line:551:1, line:555:51> line:551:28 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55d3ab01e560 <line:552:8, col:31> col:31 __s 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01e5e0 <line:553:8, col:31> col:31 __format 'const char *restrict'
| |-ParmVarDecl 0x55d3ab01e658 <line:554:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55d3ab01e920 <<invalid sloc>> Inherited Implicit 1459
| |-AsmLabelAttr 0x55d3ab01e828 <<scratch space>:63:1> "__isoc99_vsscanf" IsLiteralLabel
| |-NoThrowAttr 0x55d3ab01e8c0 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55d3ab01e8e8 </usr/include/stdio.h:555:22, col:49> scanf 2 0
|-FunctionDecl 0x55d3ab01ea20 <line:578:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:578:12 fgetc 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab01e968 <col:19, col:25> col:25 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01ead0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:578:48> 1
|-FunctionDecl 0x55d3ab01ec68 <line:579:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:579:12 getc 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab01ebb0 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01ed18 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:579:47> 1
|-FunctionDecl 0x55d3ab01ee58 <line:585:1, col:25> col:12 getchar 'int (void)' extern
|-FunctionDecl 0x55d3ab01efd0 <line:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:592:12 getc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab01ef18 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01f080 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:592:56> 1
|-FunctionDecl 0x55d3ab01f198 <line:593:1, col:34> col:12 getchar_unlocked 'int (void)' extern
|-FunctionDecl 0x55d3ab01f310 <line:603:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:603:12 fgetc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab01f258 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01f3c0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:603:57> 1
|-FunctionDecl 0x55d3ab01f618 <line:611:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:611:12 fputc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3ab01f450 <col:19, col:23> col:23 __c 'int'
| |-ParmVarDecl 0x55d3ab01f4d0 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01f6d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:611:57> 2
|-FunctionDecl 0x55d3ab01f8a0 <line:612:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:612:12 putc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3ab01f760 <col:18, col:22> col:22 __c 'int'
| |-ParmVarDecl 0x55d3ab01f7e0 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01f958 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:612:56> 2
|-FunctionDecl 0x55d3ab01fa78 <line:618:1, col:28> col:12 putchar 'int (int)' extern
| `-ParmVarDecl 0x55d3ab01f9e0 <col:21, col:25> col:25 __c 'int'
|-FunctionDecl 0x55d3ab01fc98 <line:627:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:627:12 fputc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3ab01fb40 <col:28, col:32> col:32 __c 'int'
| |-ParmVarDecl 0x55d3ab01fbd8 <col:37, col:43> col:43 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01fd50 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:627:66> 2
|-FunctionDecl 0x55d3ab01ff20 <line:635:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:635:12 putc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3ab01fde0 <col:27, col:31> col:31 __c 'int'
| |-ParmVarDecl 0x55d3ab01fe60 <col:36, col:42> col:42 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab01ffd8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:635:65> 2
|-FunctionDecl 0x55d3ab0200f8 <line:636:1, col:37> col:12 putchar_unlocked 'int (int)' extern
| `-ParmVarDecl 0x55d3ab020060 <col:30, col:34> col:34 __c 'int'
|-FunctionDecl 0x55d3ab020278 <line:643:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:643:12 getw 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab0201c0 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab020328 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:643:47> 1
|-FunctionDecl 0x55d3ab0204f0 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:646:12 putw 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3ab0203b0 <col:18, col:22> col:22 __w 'int'
| |-ParmVarDecl 0x55d3ab020430 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab0205a8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:646:56> 2
|-FunctionDecl 0x55d3ab020898 <line:654:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:654:14 fgets 'char *(char *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3ab020630 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55d3ab0206b0 <col:43, col:47> col:47 __n 'int'
| |-ParmVarDecl 0x55d3ab020730 <col:52, col:69> col:69 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3ab020958 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:655:72> 3
|-FunctionDecl 0x55d3aafa3570 <line:689:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:689:18 __getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3ab0209e0 <col:30, col:48> col:48 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55d3ab020a60 <line:690:30, col:49> col:49 __n 'size_t *restrict'
| |-ParmVarDecl 0x55d3ab020ae0 <col:54, col:58> col:58 __delimiter 'int'
| |-ParmVarDecl 0x55d3aafa3400 <line:691:30, col:47> col:47 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3aafa3638 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:691:76> 4
|-FunctionDecl 0x55d3aafa3908 <line:692:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:692:18 getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3aafa36c0 <col:28, col:46> col:46 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55d3aafa3740 <line:693:28, col:47> col:47 __n 'size_t *restrict'
| |-ParmVarDecl 0x55d3aafa37c0 <col:52, col:56> col:56 __delimiter 'int'
| |-ParmVarDecl 0x55d3aafa3840 <line:694:28, col:45> col:45 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3aafa39d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:694:74> 4
|-FunctionDecl 0x55d3aafa3cc0 <line:697:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:697:18 getline '__ssize_t (char **restrict, size_t *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3aafa3a60 <col:27, col:45> col:45 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55d3aafa3ae0 <line:698:27, col:46> col:46 __n 'size_t *restrict'
| |-ParmVarDecl 0x55d3aafa3b60 <line:699:27, col:44> col:44 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3aafa3d80 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:699:73> 3
|-FunctionDecl 0x55d3aafa3fd8 <line:707:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:707:12 fputs 'int (const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3aafa3e10 <col:19, col:42> col:42 __s 'const char *restrict'
| |-ParmVarDecl 0x55d3aafa3e90 <col:47, col:64> col:64 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3aafa4090 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:708:16> 2
|-FunctionDecl 0x55d3aafa41b8 <line:714:1, col:33> col:12 puts 'int (const char *)' extern
| `-ParmVarDecl 0x55d3aafa4120 <col:18, col:30> col:30 __s 'const char *'
|-FunctionDecl 0x55d3aafa4410 <line:721:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:721:12 ungetc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55d3aafa4280 <col:20, col:24> col:24 __c 'int'
| |-ParmVarDecl 0x55d3aafa4300 <col:29, col:35> col:35 __stream 'FILE *'
| `-NonNullAttr 0x55d3aafa44c8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:721:58> 2
|-FunctionDecl 0x55d3aafa4880 <line:728:15> col:15 implicit fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55d3aafa4988 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55d3aafa49f0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3aafa4a58 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3aafa4ac0 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55d3aafa4928 <<invalid sloc>> Implicit 640
|-FunctionDecl 0x55d3aafa4b48 prev 0x55d3aafa4880 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:728:15 fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55d3aafa4550 <col:22, col:39> col:39 __ptr 'void *restrict'
| |-ParmVarDecl 0x55d3aafa45c8 <col:46, col:53> col:53 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aafa4640 <line:729:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aafa46c0 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-BuiltinAttr 0x55d3aafa4c88 <<invalid sloc>> Inherited Implicit 640
| `-NonNullAttr 0x55d3aafa4c10 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:730:15> 4
|-FunctionDecl 0x55d3aafa5000 <line:735:15> col:15 implicit fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55d3aafa5108 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55d3aafa5170 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3aafa51d8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55d3aafa5240 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55d3aafa50a8 <<invalid sloc>> Implicit 651
|-FunctionDecl 0x55d3aafa52c8 prev 0x55d3aafa5000 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:735:15 fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55d3aafa4cd0 <col:23, col:46> col:46 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55d3aafa4d48 <col:53, col:60> col:60 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aafa4dc0 <line:736:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3aafa4e40 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-BuiltinAttr 0x55d3ab028be0 <<invalid sloc>> Inherited Implicit 651
| `-NonNullAttr 0x55d3aafa5390 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:736:55> 4
|-FunctionDecl 0x55d3ab028e60 <line:756:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:756:15 fread_unlocked 'size_t (void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3ab028c28 <col:31, col:48> col:48 __ptr 'void *restrict'
| |-ParmVarDecl 0x55d3ab028ca0 <col:55, col:62> col:62 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab028d18 <line:757:10, col:17> col:17 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab028d98 <col:22, col:39> col:39 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3ab028f28 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:758:16> 4
|-FunctionDecl 0x55d3ab0291e8 <line:759:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:759:15 fwrite_unlocked 'size_t (const void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55d3ab028fb0 <col:32, col:55> col:55 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55d3ab029028 <col:62, col:69> col:69 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab0290a0 <line:760:11, col:18> col:18 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab029120 <col:23, col:40> col:40 __stream 'FILE *restrict'
| `-NonNullAttr 0x55d3ab0292b0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:761:16> 4
|-FunctionDecl 0x55d3ab0295a8 <line:769:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:769:12 fseek 'int (FILE *, long, int)' extern
| |-ParmVarDecl 0x55d3ab029340 <col:19, col:25> col:25 __stream 'FILE *'
| |-ParmVarDecl 0x55d3ab0293c0 <col:35, col:44> col:44 __off 'long'
| |-ParmVarDecl 0x55d3ab029440 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55d3ab029668 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:770:16> 1
|-FunctionDecl 0x55d3ab029828 <line:775:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:775:17 ftell 'long (FILE *)' extern
| |-ParmVarDecl 0x55d3ab0296f0 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab0298d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:775:59> 1
|-FunctionDecl 0x55d3ab029a10 <line:780:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:780:13 rewind 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab029960 <col:21, col:27> col:27 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab029ac0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:780:50> 1
|-FunctionDecl 0x55d3ab029d88 <line:793:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:793:12 fseeko 'int (FILE *, __off_t, int)' extern
| |-ParmVarDecl 0x55d3ab029b50 <col:20, col:26> col:26 __stream 'FILE *'
| |-ParmVarDecl 0x55d3ab029bf0 <col:36, col:44> col:44 __off '__off_t':'long'
| |-ParmVarDecl 0x55d3ab029c70 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55d3ab029e48 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:794:16> 1
|-FunctionDecl 0x55d3ab029fc0 <line:799:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:799:16 ftello '__off_t (FILE *)' extern
| |-ParmVarDecl 0x55d3ab029ed0 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab02a070 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:799:59> 1
|-FunctionDecl 0x55d3ab02a388 <line:819:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:819:12 fgetpos 'int (FILE *restrict, fpos_t *restrict)' extern
| |-ParmVarDecl 0x55d3ab02a100 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55d3ab02a248 <col:48, col:67> col:67 __pos 'fpos_t *restrict'
| `-NonNullAttr 0x55d3ab02a440 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:820:16> 1
|-FunctionDecl 0x55d3ab02a6f8 <line:825:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:825:12 fsetpos 'int (FILE *, const fpos_t *)' extern
| |-ParmVarDecl 0x55d3ab02a4d0 <col:21, col:27> col:27 __stream 'FILE *'
| |-ParmVarDecl 0x55d3ab02a5b8 <col:37, col:51> col:51 __pos 'const fpos_t *'
| `-NonNullAttr 0x55d3ab02a7b0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:825:71> 1
|-FunctionDecl 0x55d3ab02a8f0 <line:850:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:850:13 clearerr 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02a840 <col:23, col:29> col:29 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02a9a0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02a9f8 <line:555:57, /usr/include/stdio.h:850:60> 1
|-FunctionDecl 0x55d3ab02ab08 <line:852:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:852:12 feof 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02aa50 <col:18, col:24> col:24 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02abb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02ac30 <line:555:57, /usr/include/stdio.h:852:61> 1
|-FunctionDecl 0x55d3ab02ad48 <line:854:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:854:12 ferror 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02ac90 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02adf8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02ae50 <line:555:57, /usr/include/stdio.h:854:63> 1
|-FunctionDecl 0x55d3ab02af60 <line:858:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:858:13 clearerr_unlocked 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02aeb0 <col:32, col:38> col:38 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02b010 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02b068 <line:555:57, /usr/include/stdio.h:858:69> 1
|-FunctionDecl 0x55d3ab02b178 <line:859:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:859:12 feof_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02b0c0 <col:27, col:33> col:33 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02b228 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02b280 <line:555:57, /usr/include/stdio.h:859:70> 1
|-FunctionDecl 0x55d3ab02b398 <line:860:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:860:12 ferror_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02b2e0 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02b448 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02b4a0 <line:555:57, /usr/include/stdio.h:860:72> 1
|-FunctionDecl 0x55d3ab02b5d0 <line:868:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdio.h:868:13 perror 'void (const char *)' extern
| |-ParmVarDecl 0x55d3ab02b500 <col:21, col:33> col:33 __s 'const char *'
| `-ColdAttr 0x55d3ab02b680 </usr/include/sys/cdefs.h:102:34>
|-FunctionDecl 0x55d3ab02b7a8 </usr/include/stdio.h:873:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:873:12 fileno 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02b6f0 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02b858 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02b8b0 <line:555:57, /usr/include/stdio.h:873:63> 1
|-FunctionDecl 0x55d3ab02b9c8 <line:878:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:878:12 fileno_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02b910 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02ba78 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02bad0 <line:555:57, /usr/include/stdio.h:878:72> 1
|-FunctionDecl 0x55d3ab02bc10 <line:887:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:887:12 pclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02bb30 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55d3ab02bcc0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:887:49> 1
|-FunctionDecl 0x55d3ab02beb8 <line:893:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:893:14 popen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55d3ab02bd50 <col:21, col:33> col:33 __command 'const char *'
| |-ParmVarDecl 0x55d3ab02bdd0 <col:44, col:56> col:56 __modes 'const char *'
| `-RestrictAttr 0x55d3ab02bf70 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55d3ab02c088 </usr/include/stdio.h:901:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:901:14 ctermid 'char *(char *)' extern
| |-ParmVarDecl 0x55d3ab02bff0 <col:23, col:29> col:29 __s 'char *'
| `-NoThrowAttr 0x55d3ab02c138 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55d3ab02c258 </usr/include/stdio.h:931:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:931:13 flockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02c1a8 <col:24, col:30> col:30 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02c308 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02c360 <line:555:57, /usr/include/stdio.h:931:61> 1
|-FunctionDecl 0x55d3ab02c478 <line:935:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:935:12 ftrylockfile 'int (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02c3c0 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02c528 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02c580 <line:555:57, /usr/include/stdio.h:935:69> 1
|-FunctionDecl 0x55d3ab02c690 <line:938:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:938:13 funlockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55d3ab02c5e0 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55d3ab02c740 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55d3ab02c798 <line:555:57, /usr/include/stdio.h:938:63> 1
|-FunctionDecl 0x55d3ab02c888 <line:949:1, col:27> col:12 __uflow 'int (FILE *)' extern
| `-ParmVarDecl 0x55d3ab02c7f0 <col:21, col:26> col:27 'FILE *'
|-FunctionDecl 0x55d3ab02caf8 <line:950:1, col:35> col:12 __overflow 'int (FILE *, int)' extern
| |-ParmVarDecl 0x55d3ab02c950 <col:24, col:29> col:30 'FILE *'
| `-ParmVarDecl 0x55d3ab02c9d0 <col:32> col:35 'int'
|-FunctionDecl 0x55d3ab02cce0 </usr/include/platform_generic.h:42:1, line:46:1> line:43:1 used platform_main_begin 'void (void)' static
| `-CompoundStmt 0x55d3ab02cd88 <line:44:1, line:46:1>
|-FunctionDecl 0x55d3ab02cfb0 <line:48:1, line:120:1> line:49:1 used platform_main_end 'void (uint32_t, int)' static
| |-ParmVarDecl 0x55d3ab02ce10 <col:19, col:28> col:28 used crc 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab02ce90 <col:33, col:37> col:37 flag 'int'
| `-CompoundStmt 0x55d3ab02d1b8 <line:50:1, line:120:1>
|   `-CallExpr 0x55d3ab02d138 <line:56:2, col:32> 'int'
|     |-ImplicitCastExpr 0x55d3ab02d120 <col:2> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x55d3ab02d068 <col:2> 'int (const char *, ...)' Function 0x55d3ab017640 'printf' 'int (const char *, ...)'
|     |-ImplicitCastExpr 0x55d3ab02d188 <col:10> 'const char *' <NoOp>
|     | `-ImplicitCastExpr 0x55d3ab02d170 <col:10> 'char *' <ArrayToPointerDecay>
|     |   `-StringLiteral 0x55d3ab02d088 <col:10> 'char[15]' lvalue "checksum = %X\n"
|     `-ImplicitCastExpr 0x55d3ab02d1a0 <col:29> 'uint32_t':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55d3ab02d0b0 <col:29> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab02ce10 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab02d390 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:25:1> <scratch space>:66:1 safe_unary_minus_func_int8_t_s 'int8_t (int8_t)' static
| |-ParmVarDecl 0x55d3ab02d240 </usr/include/safe_math.h:14:38, col:45> col:45 used si 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02d4d0 <line:15:1, line:25:1>
|   `-ReturnStmt 0x55d3ab02d4c0 <line:17:3, line:24:6>
|     `-ImplicitCastExpr 0x55d3ab02d4a8 <col:5, col:6> 'int8_t':'signed char' <IntegralCast>
|       `-UnaryOperator 0x55d3ab02d490 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55d3ab02d478 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab02d460 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab02d440 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02d240 'si' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02d6c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:39:1> <scratch space>:67:1 safe_add_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55d3ab02d4f8 </usr/include/safe_math.h:28:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02d570 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02d888 <line:29:1, line:39:1>
|   `-ReturnStmt 0x55d3ab02d878 <line:31:3, line:38:15>
|     `-ImplicitCastExpr 0x55d3ab02d860 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x55d3ab02d840 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55d3ab02d820 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x55d3ab02d7d8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab02d7c0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab02d780 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02d4f8 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x55d3ab02d808 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab02d7f0 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x55d3ab02d7a0 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02d570 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02d9c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:53:1> <scratch space>:68:1 safe_sub_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55d3ab02d8b0 </usr/include/safe_math.h:42:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02d928 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02db88 <line:43:1, line:53:1>
|   `-ReturnStmt 0x55d3ab02db78 <line:45:3, line:52:15>
|     `-ImplicitCastExpr 0x55d3ab02db60 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x55d3ab02db40 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55d3ab02db20 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x55d3ab02dad8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab02dac0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab02da80 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02d8b0 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x55d3ab02db08 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab02daf0 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x55d3ab02daa0 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02d928 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02dce0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:67:1> <scratch space>:69:1 safe_mul_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55d3ab02dbb0 </usr/include/safe_math.h:56:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02dc40 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02de80 <line:57:1, line:67:1>
|   `-ReturnStmt 0x55d3ab02de70 <line:59:3, line:66:11>
|     `-ImplicitCastExpr 0x55d3ab02de58 <col:5, col:11> 'int8_t':'signed char' <IntegralCast>
|       `-BinaryOperator 0x55d3ab02de38 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x55d3ab02ddf0 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab02ddd8 <col:5> 'int8_t':'signed char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab02dd98 <col:5> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02dbb0 'si1' 'int8_t':'signed char'
|         `-ImplicitCastExpr 0x55d3ab02de20 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab02de08 <col:11> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab02ddb8 <col:11> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02dc40 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02dfc0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:79:1> <scratch space>:70:1 safe_mod_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55d3ab02dea8 </usr/include/safe_math.h:70:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02df20 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02e540 <line:71:1, line:79:1>
|   `-ReturnStmt 0x55d3ab02e530 <line:73:3, line:78:15>
|     `-ImplicitCastExpr 0x55d3ab02e518 <line:75:5, line:78:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab02e4e8 <line:75:5, line:78:15> 'int'
|         |-ParenExpr 0x55d3ab02e358 <line:75:5, col:56> 'int'
|         | `-BinaryOperator 0x55d3ab02e338 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x55d3ab02e108 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3ab02e0e8 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55d3ab02e0d0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3ab02e0b8 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3ab02e078 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02df20 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55d3ab02e098 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3ab02e318 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x55d3ab02e2f8 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x55d3ab02e1f0 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x55d3ab02e1d0 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55d3ab02e1b8 </usr/include/safe_math.h:75:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55d3ab02e1a0 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55d3ab02e128 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02dea8 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x55d3ab02e180 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x55d3ab02e168 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x55d3ab02e148 <col:22> 'int' 128
|         |       `-ParenExpr 0x55d3ab02e2d8 </usr/include/safe_math.h:75:42, col:54> 'int'
|         |         `-BinaryOperator 0x55d3ab02e2b8 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x55d3ab02e2a0 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55d3ab02e288 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55d3ab02e210 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02df20 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x55d3ab02e268 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x55d3ab02e250 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55d3ab02e230 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x55d3ab02e4d0 <line:76:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab02e4b8 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab02e3b8 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab02e398 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab02e378 </usr/include/safe_math.h:76:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02dea8 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab02e498 <line:78:5, col:15> 'int'
|           `-BinaryOperator 0x55d3ab02e478 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55d3ab02e430 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab02e418 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab02e3d8 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02dea8 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x55d3ab02e460 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3ab02e448 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3ab02e3f8 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02df20 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02e680 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:91:1> <scratch space>:71:1 safe_div_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55d3ab02e568 </usr/include/safe_math.h:82:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02e5e0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55d3ab02ec00 <line:83:1, line:91:1>
|   `-ReturnStmt 0x55d3ab02ebf0 <line:85:3, line:90:15>
|     `-ImplicitCastExpr 0x55d3ab02ebd8 <line:87:5, line:90:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab02eba8 <line:87:5, line:90:15> 'int'
|         |-ParenExpr 0x55d3ab02ea18 <line:87:5, col:56> 'int'
|         | `-BinaryOperator 0x55d3ab02e9f8 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x55d3ab02e7c8 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3ab02e7a8 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55d3ab02e790 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3ab02e778 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3ab02e738 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e5e0 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55d3ab02e758 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3ab02e9d8 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x55d3ab02e9b8 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x55d3ab02e8b0 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x55d3ab02e890 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55d3ab02e878 </usr/include/safe_math.h:87:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55d3ab02e860 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55d3ab02e7e8 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e568 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x55d3ab02e840 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x55d3ab02e828 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x55d3ab02e808 <col:22> 'int' 128
|         |       `-ParenExpr 0x55d3ab02e998 </usr/include/safe_math.h:87:42, col:54> 'int'
|         |         `-BinaryOperator 0x55d3ab02e978 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x55d3ab02e960 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55d3ab02e948 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55d3ab02e8d0 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e5e0 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x55d3ab02e928 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x55d3ab02e910 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55d3ab02e8f0 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x55d3ab02eb90 <line:88:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab02eb78 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab02ea78 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab02ea58 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab02ea38 </usr/include/safe_math.h:88:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e568 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab02eb58 <line:90:5, col:15> 'int'
|           `-BinaryOperator 0x55d3ab02eb38 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55d3ab02eaf0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab02ead8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab02ea98 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e568 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x55d3ab02eb20 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3ab02eb08 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3ab02eab8 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02e5e0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55d3ab02ee18 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:103:1> <scratch space>:72:1 safe_lshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x55d3ab02ec40 </usr/include/safe_math.h:94:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02ecc0 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x55d3ab02f5a8 <line:95:1, line:103:1>
|   `-ReturnStmt 0x55d3ab02f598 <line:97:3, line:102:26>
|     `-ImplicitCastExpr 0x55d3ab02f580 <line:99:5, line:102:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab02f550 <line:99:5, line:102:26> 'int'
|         |-ParenExpr 0x55d3ab02f378 <line:99:5, col:101> 'int'
|         | `-BinaryOperator 0x55d3ab02f358 <col:6, col:100> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab02f190 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x55d3ab02f078 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x55d3ab02ef60 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x55d3ab02ef40 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x55d3ab02ef28 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x55d3ab02ef10 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x55d3ab02eed0 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02ec40 'left' 'int8_t':'signed char'
|         |   | | |   `-IntegerLiteral 0x55d3ab02eef0 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x55d3ab02f058 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x55d3ab02f038 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x55d3ab02eff8 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x55d3ab02efd0 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x55d3ab02efb8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x55d3ab02ef80 <col:27> 'int' lvalue ParmVar 0x55d3ab02ecc0 'right' 'int'
|         |   | |     `-IntegerLiteral 0x55d3ab02f018 <col:36> 'int' 0
|         |   | `-ParenExpr 0x55d3ab02f170 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x55d3ab02f150 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x55d3ab02f110 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3ab02f0e8 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab02f0d0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab02f098 <col:49> 'int' lvalue ParmVar 0x55d3ab02ecc0 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3ab02f130 <col:59> 'int' 32
|         |   `-ParenExpr 0x55d3ab02f338 <col:66, col:100> 'int'
|         |     `-BinaryOperator 0x55d3ab02f318 <col:67, col:99> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab02f300 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab02f2e8 <col:67> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3ab02f1b0 <col:67> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02ec40 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x55d3ab02f2c8 <col:74, col:99> 'int'
|         |         `-BinaryOperator 0x55d3ab02f2a8 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:99:98> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab02f1f0 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x55d3ab02f1d0 <col:21> 'int' 127
|         |           `-ParenExpr 0x55d3ab02f288 </usr/include/safe_math.h:99:87, col:98> 'int'
|         |             `-CStyleCastExpr 0x55d3ab02f260 <col:88, col:93> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab02f248 <col:93> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab02f210 <col:93> 'int' lvalue ParmVar 0x55d3ab02ecc0 'right' 'int'
|         |-ImplicitCastExpr 0x55d3ab02f538 <line:100:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab02f520 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab02f3d8 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab02f3b8 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab02f398 </usr/include/safe_math.h:100:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02ec40 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab02f500 <line:102:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab02f4e0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab02f4c8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab02f4b0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab02f3f8 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02ec40 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55d3ab02f490 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab02f468 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab02f450 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab02f418 <col:20> 'int' lvalue ParmVar 0x55d3ab02ecc0 'right' 'int'
|-FunctionDecl 0x55d3ab02f7a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:115:1> <scratch space>:73:1 safe_lshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab02f5d0 </usr/include/safe_math.h:106:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab02f650 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab030e70 <line:107:1, line:115:1>
|   `-ReturnStmt 0x55d3ab030e60 <line:109:3, line:114:35>
|     `-ImplicitCastExpr 0x55d3ab030e48 <line:111:5, line:114:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab030e18 <line:111:5, line:114:35> 'int'
|         |-ParenExpr 0x55d3ab02fc08 <line:111:5, col:97> 'int'
|         | `-BinaryOperator 0x55d3ab02fbe8 <col:6, col:96> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab02fa20 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x55d3ab02f8f0 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55d3ab02f8d0 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55d3ab02f8b8 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55d3ab02f8a0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55d3ab02f860 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02f5d0 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x55d3ab02f880 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55d3ab02fa00 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x55d3ab02f9e0 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x55d3ab02f988 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x55d3ab02f960 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab02f948 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab02f910 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab02f650 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x55d3ab02f9c8 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x55d3ab02f9a8 <col:46> 'int' 32
|         |   `-ParenExpr 0x55d3ab02fbc8 <col:53, col:96> 'int'
|         |     `-BinaryOperator 0x55d3ab02fba8 <col:54, col:95> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab02fb90 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab02fb78 <col:54> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3ab02fa40 <col:54> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02f5d0 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x55d3ab02fb58 <col:61, col:95> 'int'
|         |         `-BinaryOperator 0x55d3ab02fb38 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:111:94> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab02fa80 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x55d3ab02fa60 <col:21> 'int' 127
|         |           `-ParenExpr 0x55d3ab02fb18 </usr/include/safe_math.h:111:74, col:94> 'unsigned int'
|         |             `-CStyleCastExpr 0x55d3ab02faf0 <col:75, col:89> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab02fad8 <col:89> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab02faa0 <col:89> 'unsigned int' lvalue ParmVar 0x55d3ab02f650 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55d3ab030e00 <line:112:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab030de8 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab030ca0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab030c80 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab030c60 </usr/include/safe_math.h:112:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02f5d0 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab030dc8 <line:114:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab030da8 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab030d90 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab030d78 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab030cc0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab02f5d0 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55d3ab030d58 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab030d30 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab030d18 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab030ce0 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab02f650 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab030fb8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:127:1> <scratch space>:74:1 safe_rshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x55d3ab030e98 </usr/include/safe_math.h:118:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab030f18 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x55d3ab031580 <line:119:1, line:127:1>
|   `-ReturnStmt 0x55d3ab031570 <line:121:3, line:126:26>
|     `-ImplicitCastExpr 0x55d3ab031558 <line:123:5, line:126:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab031528 <line:123:5, line:126:26> 'int'
|         |-ParenExpr 0x55d3ab031350 <line:123:5, col:62> 'int'
|         | `-BinaryOperator 0x55d3ab031330 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab031218 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x55d3ab031100 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55d3ab0310e0 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55d3ab0310c8 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55d3ab0310b0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55d3ab031070 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab030e98 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x55d3ab031090 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55d3ab0311f8 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x55d3ab0311d8 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x55d3ab031198 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3ab031170 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab031158 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab031120 <col:27> 'int' lvalue ParmVar 0x55d3ab030f18 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3ab0311b8 <col:36> 'int' 0
|         |   `-ParenExpr 0x55d3ab031310 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x55d3ab0312f0 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x55d3ab0312b0 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x55d3ab031288 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3ab031270 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3ab031238 <col:49> 'int' lvalue ParmVar 0x55d3ab030f18 'right' 'int'
|         |       `-IntegerLiteral 0x55d3ab0312d0 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab031510 <line:124:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab0314f8 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab0313b0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab031390 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab031370 </usr/include/safe_math.h:124:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab030e98 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab0314d8 <line:126:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab0314b8 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab0314a0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab031488 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab0313d0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab030e98 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55d3ab031468 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab031440 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab031428 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab0313f0 <col:20> 'int' lvalue ParmVar 0x55d3ab030f18 'right' 'int'
|-FunctionDecl 0x55d3ab0316c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:139:1> <scratch space>:75:1 safe_rshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab0315a8 </usr/include/safe_math.h:130:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55d3ab031628 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab031b90 <line:131:1, line:139:1>
|   `-ReturnStmt 0x55d3ab031b80 <line:133:3, line:138:35>
|     `-ImplicitCastExpr 0x55d3ab031b68 <line:135:5, line:138:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab031b38 <line:135:5, line:138:35> 'int'
|         |-ParenExpr 0x55d3ab031960 <line:135:5, col:49> 'int'
|         | `-BinaryOperator 0x55d3ab031940 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x55d3ab031810 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3ab0317f0 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x55d3ab0317d8 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3ab0317c0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3ab031780 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab0315a8 'left' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55d3ab0317a0 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3ab031920 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x55d3ab031900 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x55d3ab0318a8 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x55d3ab031880 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3ab031868 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3ab031830 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab031628 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x55d3ab0318e8 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x55d3ab0318c8 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab031b20 <line:136:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab031b08 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab0319c0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55d3ab0319a0 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55d3ab031980 </usr/include/safe_math.h:136:16> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab0315a8 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55d3ab031ae8 <line:138:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab031ac8 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab031ab0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab031a98 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab0319e0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55d3ab0315a8 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55d3ab031a78 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab031a50 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab031a38 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab031a00 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab031628 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab031dc0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:155:1> <scratch space>:76:1 safe_unary_minus_func_int16_t_s 'int16_t (int16_t)' static
| |-ParmVarDecl 0x55d3ab031c70 </usr/include/safe_math.h:144:39, col:47> col:47 used si 'int16_t':'short'
| `-CompoundStmt 0x55d3ab031f00 <line:145:1, line:155:1>
|   `-ReturnStmt 0x55d3ab031ef0 <line:147:3, line:154:6>
|     `-ImplicitCastExpr 0x55d3ab031ed8 <col:5, col:6> 'int16_t':'short' <IntegralCast>
|       `-UnaryOperator 0x55d3ab031ec0 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55d3ab031ea8 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab031e90 <col:6> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab031e70 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab031c70 'si' 'int16_t':'short'
|-FunctionDecl 0x55d3ab0320f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:169:1> <scratch space>:77:1 safe_add_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55d3ab031f28 </usr/include/safe_math.h:158:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab031fa0 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55d3ab0322b8 <line:159:1, line:169:1>
|   `-ReturnStmt 0x55d3ab0322a8 <line:161:3, line:168:15>
|     `-ImplicitCastExpr 0x55d3ab032290 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x55d3ab032270 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55d3ab032250 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x55d3ab032208 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab0321f0 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab0321b0 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab031f28 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x55d3ab032238 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab032220 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x55d3ab0321d0 <col:12> 'int16_t':'short' lvalue ParmVar 0x55d3ab031fa0 'si2' 'int16_t':'short'
|-FunctionDecl 0x55d3ab0323f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:183:1> <scratch space>:78:1 safe_sub_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55d3ab0322e0 </usr/include/safe_math.h:172:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab032358 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55d3ab0325b8 <line:173:1, line:183:1>
|   `-ReturnStmt 0x55d3ab0325a8 <line:175:3, line:182:15>
|     `-ImplicitCastExpr 0x55d3ab032590 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x55d3ab032570 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55d3ab032550 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x55d3ab032508 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab0324f0 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab0324b0 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab0322e0 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x55d3ab032538 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab032520 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x55d3ab0324d0 <col:12> 'int16_t':'short' lvalue ParmVar 0x55d3ab032358 'si2' 'int16_t':'short'
|-FunctionDecl 0x55d3ab0326f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:197:1> <scratch space>:79:1 safe_mul_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55d3ab0325e0 </usr/include/safe_math.h:186:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab032658 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55d3ab032898 <line:187:1, line:197:1>
|   `-ReturnStmt 0x55d3ab032888 <line:189:3, line:196:11>
|     `-ImplicitCastExpr 0x55d3ab032870 <col:5, col:11> 'int16_t':'short' <IntegralCast>
|       `-BinaryOperator 0x55d3ab032850 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x55d3ab032808 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab0327f0 <col:5> 'int16_t':'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab0327b0 <col:5> 'int16_t':'short' lvalue ParmVar 0x55d3ab0325e0 'si1' 'int16_t':'short'
|         `-ImplicitCastExpr 0x55d3ab032838 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab032820 <col:11> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0327d0 <col:11> 'int16_t':'short' lvalue ParmVar 0x55d3ab032658 'si2' 'int16_t':'short'
|-FunctionDecl 0x55d3ab0329d8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:209:1> <scratch space>:80:1 safe_mod_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55d3ab0328c0 </usr/include/safe_math.h:200:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab032938 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55d3aaf2a890 <line:201:1, line:209:1>
|   `-ReturnStmt 0x55d3aaf2a880 <line:203:3, line:208:15>
|     `-ImplicitCastExpr 0x55d3aaf2a868 <line:205:5, line:208:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aaf2a838 <line:205:5, line:208:15> 'int'
|         |-ParenExpr 0x55d3aaf2a6a8 <line:205:5, col:57> 'int'
|         | `-BinaryOperator 0x55d3aaf2a688 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x55d3ab032b20 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3ab032b00 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55d3ab032ae8 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3ab032ad0 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3ab032a90 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3ab032938 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55d3ab032ab0 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3aaf2a668 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x55d3aaf2a648 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x55d3ab032c48 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x55d3ab032c28 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55d3ab032c10 </usr/include/safe_math.h:205:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55d3ab032bf8 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55d3ab032b40 <col:22> 'int16_t':'short' lvalue ParmVar 0x55d3ab0328c0 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x55d3ab032bd8 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x55d3ab032bb8 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x55d3ab032b80 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x55d3ab032b60 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x55d3ab032b98 <col:29> 'int' 1
|         |       `-ParenExpr 0x55d3aaf2a628 </usr/include/safe_math.h:205:43, col:55> 'int'
|         |         `-BinaryOperator 0x55d3aaf2a608 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x55d3aaf2a5f0 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55d3aaf2a5d8 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55d3aaf2a560 <col:44> 'int16_t':'short' lvalue ParmVar 0x55d3ab032938 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x55d3aaf2a5b8 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x55d3aaf2a5a0 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55d3aaf2a580 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x55d3aaf2a820 <line:206:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aaf2a808 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aaf2a708 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3aaf2a6e8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3aaf2a6c8 </usr/include/safe_math.h:206:16> 'int16_t':'short' lvalue ParmVar 0x55d3ab0328c0 'si1' 'int16_t':'short'
|         `-ParenExpr 0x55d3aaf2a7e8 <line:208:5, col:15> 'int'
|           `-BinaryOperator 0x55d3aaf2a7c8 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55d3aaf2a780 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aaf2a768 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aaf2a728 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab0328c0 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x55d3aaf2a7b0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3aaf2a798 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3aaf2a748 <col:12> 'int16_t':'short' lvalue ParmVar 0x55d3ab032938 'si2' 'int16_t':'short'
|-FunctionDecl 0x55d3aaf2a9d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:221:1> <scratch space>:81:1 safe_div_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55d3aaf2a8b8 </usr/include/safe_math.h:212:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55d3aaf2a930 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55d3aaf2af90 <line:213:1, line:221:1>
|   `-ReturnStmt 0x55d3aaf2af80 <line:215:3, line:220:15>
|     `-ImplicitCastExpr 0x55d3aaf2af68 <line:217:5, line:220:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aaf2af38 <line:217:5, line:220:15> 'int'
|         |-ParenExpr 0x55d3aaf2ada8 <line:217:5, col:57> 'int'
|         | `-BinaryOperator 0x55d3aaf2ad88 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x55d3aaf2ab18 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3aaf2aaf8 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55d3aaf2aae0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3aaf2aac8 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3aaf2aa88 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a930 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55d3aaf2aaa8 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3aaf2ad68 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x55d3aaf2ad48 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x55d3aaf2ac40 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x55d3aaf2ac20 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55d3aaf2ac08 </usr/include/safe_math.h:217:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55d3aaf2abf0 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55d3aaf2ab38 <col:22> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a8b8 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x55d3aaf2abd0 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x55d3aaf2abb0 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x55d3aaf2ab78 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x55d3aaf2ab58 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x55d3aaf2ab90 <col:29> 'int' 1
|         |       `-ParenExpr 0x55d3aaf2ad28 </usr/include/safe_math.h:217:43, col:55> 'int'
|         |         `-BinaryOperator 0x55d3aaf2ad08 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x55d3aaf2acf0 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55d3aaf2acd8 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55d3aaf2ac60 <col:44> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a930 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x55d3aaf2acb8 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x55d3aaf2aca0 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55d3aaf2ac80 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x55d3aaf2af20 <line:218:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aaf2af08 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aaf2ae08 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3aaf2ade8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3aaf2adc8 </usr/include/safe_math.h:218:16> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a8b8 'si1' 'int16_t':'short'
|         `-ParenExpr 0x55d3aaf2aee8 <line:220:5, col:15> 'int'
|           `-BinaryOperator 0x55d3aaf2aec8 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55d3aaf2ae80 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aaf2ae68 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aaf2ae28 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a8b8 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x55d3aaf2aeb0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3aaf2ae98 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3aaf2ae48 <col:12> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2a930 'si2' 'int16_t':'short'
|-FunctionDecl 0x55d3aaf2b188 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:233:1> <scratch space>:82:1 safe_lshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x55d3aaf2afb8 </usr/include/safe_math.h:224:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55d3aaf2b038 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab037048 <line:225:1, line:233:1>
|   `-ReturnStmt 0x55d3ab037038 <line:227:3, line:232:26>
|     `-ImplicitCastExpr 0x55d3ab037020 <line:229:5, line:232:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab036ff0 <line:229:5, line:232:26> 'int'
|         |-ParenExpr 0x55d3ab036e18 <line:229:5, col:102> 'int'
|         | `-BinaryOperator 0x55d3ab036df8 <col:6, col:101> 'int' '||'
|         |   |-BinaryOperator 0x55d3aaf2b500 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x55d3aaf2b3e8 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x55d3aaf2b2d0 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x55d3aaf2b2b0 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x55d3aaf2b298 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x55d3aaf2b280 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x55d3aaf2b240 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2afb8 'left' 'int16_t':'short'
|         |   | | |   `-IntegerLiteral 0x55d3aaf2b260 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x55d3aaf2b3c8 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x55d3aaf2b3a8 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x55d3aaf2b368 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x55d3aaf2b340 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x55d3aaf2b328 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x55d3aaf2b2f0 <col:27> 'int' lvalue ParmVar 0x55d3aaf2b038 'right' 'int'
|         |   | |     `-IntegerLiteral 0x55d3aaf2b388 <col:36> 'int' 0
|         |   | `-ParenExpr 0x55d3aaf2b4e0 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x55d3aaf2b4c0 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x55d3aaf2b480 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3aaf2b458 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3aaf2b440 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3aaf2b408 <col:49> 'int' lvalue ParmVar 0x55d3aaf2b038 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3aaf2b4a0 <col:59> 'int' 32
|         |   `-ParenExpr 0x55d3ab036dd8 <col:66, col:101> 'int'
|         |     `-BinaryOperator 0x55d3ab036db8 <col:67, col:100> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab036da0 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab036d88 <col:67> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3aaf2b520 <col:67> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2afb8 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x55d3ab036d68 <col:74, col:100> 'int'
|         |         `-BinaryOperator 0x55d3ab036d48 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:229:99> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab036c90 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x55d3aaf2b540 <col:22> 'int' 32767
|         |           `-ParenExpr 0x55d3ab036d28 </usr/include/safe_math.h:229:88, col:99> 'int'
|         |             `-CStyleCastExpr 0x55d3ab036d00 <col:89, col:94> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab036ce8 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab036cb0 <col:94> 'int' lvalue ParmVar 0x55d3aaf2b038 'right' 'int'
|         |-ImplicitCastExpr 0x55d3ab036fd8 <line:230:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab036fc0 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab036e78 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3ab036e58 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3ab036e38 </usr/include/safe_math.h:230:16> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2afb8 'left' 'int16_t':'short'
|         `-ParenExpr 0x55d3ab036fa0 <line:232:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab036f80 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab036f68 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab036f50 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab036e98 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3aaf2afb8 'left' 'int16_t':'short'
|             `-ParenExpr 0x55d3ab036f30 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab036f08 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab036ef0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab036eb8 <col:20> 'int' lvalue ParmVar 0x55d3aaf2b038 'right' 'int'
|-FunctionDecl 0x55d3ab037248 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:245:1> <scratch space>:83:1 safe_lshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab037070 </usr/include/safe_math.h:236:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab0370f0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab0378d8 <line:237:1, line:245:1>
|   `-ReturnStmt 0x55d3ab0378c8 <line:239:3, line:244:35>
|     `-ImplicitCastExpr 0x55d3ab0378b0 <line:241:5, line:244:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab037880 <line:241:5, line:244:35> 'int'
|         |-ParenExpr 0x55d3ab0376a8 <line:241:5, col:98> 'int'
|         | `-BinaryOperator 0x55d3ab037688 <col:6, col:97> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab0374c0 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x55d3ab037390 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55d3ab037370 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55d3ab037358 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55d3ab037340 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55d3ab037300 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3ab037070 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x55d3ab037320 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55d3ab0374a0 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x55d3ab037480 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x55d3ab037428 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x55d3ab037400 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab0373e8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab0373b0 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab0370f0 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x55d3ab037468 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x55d3ab037448 <col:46> 'int' 32
|         |   `-ParenExpr 0x55d3ab037668 <col:53, col:97> 'int'
|         |     `-BinaryOperator 0x55d3ab037648 <col:54, col:96> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab037630 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab037618 <col:54> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3ab0374e0 <col:54> 'int16_t':'short' lvalue ParmVar 0x55d3ab037070 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x55d3ab0375f8 <col:61, col:96> 'int'
|         |         `-BinaryOperator 0x55d3ab0375d8 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:241:95> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab037520 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x55d3ab037500 <col:22> 'int' 32767
|         |           `-ParenExpr 0x55d3ab0375b8 </usr/include/safe_math.h:241:75, col:95> 'unsigned int'
|         |             `-CStyleCastExpr 0x55d3ab037590 <col:76, col:90> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab037578 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab037540 <col:90> 'unsigned int' lvalue ParmVar 0x55d3ab0370f0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55d3ab037868 <line:242:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab037850 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab037708 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3ab0376e8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3ab0376c8 </usr/include/safe_math.h:242:16> 'int16_t':'short' lvalue ParmVar 0x55d3ab037070 'left' 'int16_t':'short'
|         `-ParenExpr 0x55d3ab037830 <line:244:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab037810 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab0377f8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab0377e0 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab037728 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab037070 'left' 'int16_t':'short'
|             `-ParenExpr 0x55d3ab0377c0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab037798 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab037780 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab037748 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab0370f0 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab037a20 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:257:1> <scratch space>:84:1 safe_rshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x55d3ab037900 </usr/include/safe_math.h:248:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab037980 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab037fe8 <line:249:1, line:257:1>
|   `-ReturnStmt 0x55d3ab037fd8 <line:251:3, line:256:26>
|     `-ImplicitCastExpr 0x55d3ab037fc0 <line:253:5, line:256:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab037f90 <line:253:5, line:256:26> 'int'
|         |-ParenExpr 0x55d3ab037db8 <line:253:5, col:62> 'int'
|         | `-BinaryOperator 0x55d3ab037d98 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab037c80 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x55d3ab037b68 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55d3ab037b48 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55d3ab037b30 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55d3ab037b18 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55d3ab037ad8 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3ab037900 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x55d3ab037af8 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55d3ab037c60 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x55d3ab037c40 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x55d3ab037c00 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3ab037bd8 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab037bc0 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab037b88 <col:27> 'int' lvalue ParmVar 0x55d3ab037980 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3ab037c20 <col:36> 'int' 0
|         |   `-ParenExpr 0x55d3ab037d78 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x55d3ab037d58 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x55d3ab037d18 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x55d3ab037cf0 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3ab037cd8 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3ab037ca0 <col:49> 'int' lvalue ParmVar 0x55d3ab037980 'right' 'int'
|         |       `-IntegerLiteral 0x55d3ab037d38 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab037f78 <line:254:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab037f60 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab037e18 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3ab037df8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3ab037dd8 </usr/include/safe_math.h:254:16> 'int16_t':'short' lvalue ParmVar 0x55d3ab037900 'left' 'int16_t':'short'
|         `-ParenExpr 0x55d3ab037f40 <line:256:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab037f20 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab037f08 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab037ef0 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab037e38 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab037900 'left' 'int16_t':'short'
|             `-ParenExpr 0x55d3ab037ed0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab037ea8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab037e90 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab037e58 <col:20> 'int' lvalue ParmVar 0x55d3ab037980 'right' 'int'
|-FunctionDecl 0x55d3ab038130 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:269:1> <scratch space>:85:1 safe_rshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab038010 </usr/include/safe_math.h:260:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55d3ab038090 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab0385f8 <line:261:1, line:269:1>
|   `-ReturnStmt 0x55d3ab0385e8 <line:263:3, line:268:35>
|     `-ImplicitCastExpr 0x55d3ab0385d0 <line:265:5, line:268:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab0385a0 <line:265:5, line:268:35> 'int'
|         |-ParenExpr 0x55d3ab0383c8 <line:265:5, col:49> 'int'
|         | `-BinaryOperator 0x55d3ab0383a8 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x55d3ab038278 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55d3ab038258 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x55d3ab038240 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55d3ab038228 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55d3ab0381e8 <col:7> 'int16_t':'short' lvalue ParmVar 0x55d3ab038010 'left' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55d3ab038208 <col:14> 'int' 0
|         |   `-ParenExpr 0x55d3ab038388 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x55d3ab038368 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x55d3ab038310 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x55d3ab0382e8 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3ab0382d0 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3ab038298 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab038090 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x55d3ab038350 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x55d3ab038330 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab038588 <line:266:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab038570 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab038428 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55d3ab038408 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55d3ab0383e8 </usr/include/safe_math.h:266:16> 'int16_t':'short' lvalue ParmVar 0x55d3ab038010 'left' 'int16_t':'short'
|         `-ParenExpr 0x55d3ab038550 <line:268:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab038530 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab038518 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab038500 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab038448 <col:6> 'int16_t':'short' lvalue ParmVar 0x55d3ab038010 'left' 'int16_t':'short'
|             `-ParenExpr 0x55d3ab0384e0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab0384b8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab0384a0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab038468 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab038090 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab038790 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:285:1> <scratch space>:86:1 safe_unary_minus_func_int32_t_s 'int32_t (int32_t)' static
| |-ParmVarDecl 0x55d3ab038680 </usr/include/safe_math.h:274:39, col:47> col:47 used si 'int32_t':'int'
| `-CompoundStmt 0x55d3ab038a58 <line:275:1, line:285:1>
|   `-ReturnStmt 0x55d3ab038a48 <line:277:3, line:284:6>
|     `-ConditionalOperator 0x55d3ab038a18 <line:280:5, line:284:6> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab038930 <line:280:5, col:19> 'int'
|       | `-BinaryOperator 0x55d3ab038910 <col:6, /usr/include/stdint.h:107:35> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab0388f8 </usr/include/safe_math.h:280:6> 'int32_t':'int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab038840 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab038680 'si' 'int32_t':'int'
|       |   `-ParenExpr 0x55d3ab0388d8 </usr/include/stdint.h:107:21, col:35> 'int'
|       |     `-BinaryOperator 0x55d3ab0388b8 <col:22, col:34> 'int' '-'
|       |       |-UnaryOperator 0x55d3ab038880 <col:22, col:23> 'int' prefix '-'
|       |       | `-IntegerLiteral 0x55d3ab038860 <col:23> 'int' 2147483647
|       |       `-IntegerLiteral 0x55d3ab038898 <col:34> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab038a00 </usr/include/safe_math.h:281:5, col:19> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab038990 <col:5, col:19> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab038970 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab038950 </usr/include/safe_math.h:281:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab038680 'si' 'int32_t':'int'
|       `-UnaryOperator 0x55d3ab0389e8 <line:284:5, col:6> 'int32_t':'int' prefix '-'
|         `-ImplicitCastExpr 0x55d3ab0389d0 <col:6> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x55d3ab0389b0 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab038680 'si' 'int32_t':'int'
|-FunctionDecl 0x55d3ab038ca0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:299:1> <scratch space>:87:1 safe_add_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55d3ab038a80 </usr/include/safe_math.h:288:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab038af8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55d3ab0394d8 <line:289:1, line:299:1>
|   `-ReturnStmt 0x55d3ab0394c8 <line:291:3, line:298:15>
|     `-ConditionalOperator 0x55d3ab039498 <line:294:5, line:298:15> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab039350 <line:294:5, col:104> 'int'
|       | `-BinaryOperator 0x55d3ab039330 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x55d3ab038ff8 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x55d3ab038fd8 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x55d3ab038e88 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x55d3ab038dd0 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x55d3ab038db0 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x55d3ab038d98 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x55d3ab038d58 <col:8> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|       |   |   | |   `-IntegerLiteral 0x55d3ab038d78 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x55d3ab038e68 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x55d3ab038e48 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x55d3ab038e30 <col:19> 'int32_t':'int' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x55d3ab038df0 <col:19> 'int32_t':'int' lvalue ParmVar 0x55d3ab038af8 'si2' 'int32_t':'int'
|       |   |   |     `-IntegerLiteral 0x55d3ab038e10 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x55d3ab038fb8 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x55d3ab038f98 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x55d3ab038f80 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x55d3ab038ea8 <col:30> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|       |   |       `-ParenExpr 0x55d3ab038f60 <col:36, col:50> 'int'
|       |   |         `-BinaryOperator 0x55d3ab038f40 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:294:47> 'int' '-'
|       |   |           |-ParenExpr 0x55d3ab038ee8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   |           | `-IntegerLiteral 0x55d3ab038ec8 <col:22> 'int' 2147483647
|       |   |           `-ImplicitCastExpr 0x55d3ab038f28 </usr/include/safe_math.h:294:47> 'int32_t':'int' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x55d3ab038f08 <col:47> 'int32_t':'int' lvalue ParmVar 0x55d3ab038af8 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x55d3ab039310 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x55d3ab0392f0 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x55d3ab039148 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x55d3ab039090 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x55d3ab039070 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x55d3ab039058 <col:59> 'int32_t':'int' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x55d3ab039018 <col:59> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|       |       | |   `-IntegerLiteral 0x55d3ab039038 <col:63> 'int' 0
|       |       | `-ParenExpr 0x55d3ab039128 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x55d3ab039108 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x55d3ab0390f0 <col:70> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55d3ab0390b0 <col:70> 'int32_t':'int' lvalue ParmVar 0x55d3ab038af8 'si2' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x55d3ab0390d0 <col:74> 'int' 0
|       |       `-ParenExpr 0x55d3ab0392d0 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x55d3ab0392b0 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x55d3ab039298 <col:81> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab039168 <col:81> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|       |           `-ParenExpr 0x55d3ab039278 <col:87, col:101> 'int'
|       |             `-BinaryOperator 0x55d3ab039258 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:294:98> 'int' '-'
|       |               |-ParenExpr 0x55d3ab039200 </usr/include/stdint.h:107:21, col:35> 'int'
|       |               | `-BinaryOperator 0x55d3ab0391e0 <col:22, col:34> 'int' '-'
|       |               |   |-UnaryOperator 0x55d3ab0391a8 <col:22, col:23> 'int' prefix '-'
|       |               |   | `-IntegerLiteral 0x55d3ab039188 <col:23> 'int' 2147483647
|       |               |   `-IntegerLiteral 0x55d3ab0391c0 <col:34> 'int' 1
|       |               `-ImplicitCastExpr 0x55d3ab039240 </usr/include/safe_math.h:294:98> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55d3ab039220 <col:98> 'int32_t':'int' lvalue ParmVar 0x55d3ab038af8 'si2' 'int32_t':'int'
|       |-ImplicitCastExpr 0x55d3ab039480 <line:295:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab0393b0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab039390 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab039370 </usr/include/safe_math.h:295:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab039460 <line:298:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab039440 <col:6, col:12> 'int32_t':'int' '+'
|           |-ImplicitCastExpr 0x55d3ab039410 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab0393d0 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab038a80 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55d3ab039428 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0393f0 <col:12> 'int32_t':'int' lvalue ParmVar 0x55d3ab038af8 'si2' 'int32_t':'int'
|-FunctionDecl 0x55d3ab039618 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:313:1> <scratch space>:88:1 safe_sub_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55d3ab039500 </usr/include/safe_math.h:302:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab039578 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55d3ab039c58 <line:303:1, line:313:1>
|   `-ReturnStmt 0x55d3ab039c48 <line:305:3, line:312:15>
|     `-ConditionalOperator 0x55d3ab039c18 <line:308:5, line:312:15> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab039ad0 <line:308:5, col:70> 'int'
|       | `-BinaryOperator 0x55d3ab039ab0 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x55d3ab039a70 <col:6, col:65> 'int'
|       |   | `-BinaryOperator 0x55d3ab039a50 <col:7, col:64> 'int' '&'
|       |   |   |-ParenExpr 0x55d3ab039760 <col:7, col:15> 'int32_t':'int'
|       |   |   | `-BinaryOperator 0x55d3ab039740 <col:8, col:12> 'int32_t':'int' '^'
|       |   |   |   |-ImplicitCastExpr 0x55d3ab039710 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x55d3ab0396d0 <col:8> 'int32_t':'int' lvalue ParmVar 0x55d3ab039500 'si1' 'int32_t':'int'
|       |   |   |   `-ImplicitCastExpr 0x55d3ab039728 <col:12> 'int32_t':'int' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab0396f0 <col:12> 'int32_t':'int' lvalue ParmVar 0x55d3ab039578 'si2' 'int32_t':'int'
|       |   |   `-ParenExpr 0x55d3ab039a30 <col:19, col:64> 'int'
|       |   |     `-BinaryOperator 0x55d3ab039a10 <col:20, col:61> 'int' '^'
|       |   |       |-ParenExpr 0x55d3ab0399b8 <col:20, col:59> 'int'
|       |   |       | `-BinaryOperator 0x55d3ab039998 <col:21, col:56> 'int' '-'
|       |   |       |   |-ParenExpr 0x55d3ab039940 <col:21, col:54> 'int'
|       |   |       |   | `-BinaryOperator 0x55d3ab039920 <col:22, col:53> 'int' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x55d3ab039908 <col:22> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x55d3ab039780 <col:22> 'int32_t':'int' lvalue ParmVar 0x55d3ab039500 'si1' 'int32_t':'int'
|       |   |       |   |   `-ParenExpr 0x55d3ab0398e8 <col:28, col:53> 'int'
|       |   |       |   |     `-BinaryOperator 0x55d3ab0398c8 <col:29, col:52> 'int' '&'
|       |   |       |   |       |-ParenExpr 0x55d3ab039830 <col:29, col:37> 'int32_t':'int'
|       |   |       |   |       | `-BinaryOperator 0x55d3ab039810 <col:30, col:34> 'int32_t':'int' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x55d3ab0397e0 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x55d3ab0397a0 <col:30> 'int32_t':'int' lvalue ParmVar 0x55d3ab039500 'si1' 'int32_t':'int'
|       |   |       |   |       |   `-ImplicitCastExpr 0x55d3ab0397f8 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x55d3ab0397c0 <col:34> 'int32_t':'int' lvalue ParmVar 0x55d3ab039578 'si2' 'int32_t':'int'
|       |   |       |   |       `-ParenExpr 0x55d3ab0398a8 <col:41, col:52> 'int'
|       |   |       |   |         `-UnaryOperator 0x55d3ab039890 <col:42, /usr/include/stdint.h:112:32> 'int' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x55d3ab039870 <col:21, col:32> 'int'
|       |   |       |   |             `-IntegerLiteral 0x55d3ab039850 <col:22> 'int' 2147483647
|       |   |       |   `-ImplicitCastExpr 0x55d3ab039980 </usr/include/safe_math.h:308:56> 'int32_t':'int' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x55d3ab039960 <col:56> 'int32_t':'int' lvalue ParmVar 0x55d3ab039578 'si2' 'int32_t':'int'
|       |   |       `-ImplicitCastExpr 0x55d3ab0399f8 <col:61> 'int32_t':'int' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab0399d8 <col:61> 'int32_t':'int' lvalue ParmVar 0x55d3ab039578 'si2' 'int32_t':'int'
|       |   `-IntegerLiteral 0x55d3ab039a90 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab039c00 <line:309:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab039b30 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab039b10 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab039af0 </usr/include/safe_math.h:309:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab039500 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab039be0 <line:312:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab039bc0 <col:6, col:12> 'int32_t':'int' '-'
|           |-ImplicitCastExpr 0x55d3ab039b90 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab039b50 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab039500 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55d3ab039ba8 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab039b70 <col:12> 'int32_t':'int' lvalue ParmVar 0x55d3ab039578 'si2' 'int32_t':'int'
|-FunctionDecl 0x55d3ab039d98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:327:1> <scratch space>:89:1 safe_mul_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55d3ab039c80 </usr/include/safe_math.h:316:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab039cf8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55d3ab03ac80 <line:317:1, line:327:1>
|   `-ReturnStmt 0x55d3ab03ac70 <line:319:3, line:326:11>
|     `-ConditionalOperator 0x55d3ab03ac40 <line:322:5, line:326:11> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03ab18 <line:322:5, col:248> 'int'
|       | `-BinaryOperator 0x55d3ab03aaf8 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab03a760 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x55d3ab03a428 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x55d3ab03a0f0 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x55d3ab03a0d0 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x55d3ab039f80 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x55d3ab039ec8 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x55d3ab039ea8 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x55d3ab039e90 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x55d3ab039e50 <col:8> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   | | |   | |   `-IntegerLiteral 0x55d3ab039e70 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x55d3ab039f60 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x55d3ab039f40 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x55d3ab039f28 <col:21> 'int32_t':'int' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x55d3ab039ee8 <col:21> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   | | |   |     `-IntegerLiteral 0x55d3ab039f08 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x55d3ab03a0b0 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x55d3ab03a090 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x55d3ab03a078 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x55d3ab039fa0 <col:34> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   | | |       `-ParenExpr 0x55d3ab03a058 <col:40, col:56> 'int'
|       |   | | |         `-BinaryOperator 0x55d3ab03a038 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:53> 'int' '/'
|       |   | | |           |-ParenExpr 0x55d3ab039fe0 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   | | |           | `-IntegerLiteral 0x55d3ab039fc0 <col:22> 'int' 2147483647
|       |   | | |           `-ImplicitCastExpr 0x55d3ab03a020 </usr/include/safe_math.h:322:53> 'int32_t':'int' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x55d3ab03a000 <col:53> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   | | `-ParenExpr 0x55d3ab03a408 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x55d3ab03a3e8 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x55d3ab03a240 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x55d3ab03a188 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x55d3ab03a168 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x55d3ab03a150 <col:65> 'int32_t':'int' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x55d3ab03a110 <col:65> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   | |     | |   `-IntegerLiteral 0x55d3ab03a130 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x55d3ab03a220 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x55d3ab03a200 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x55d3ab03a1e8 <col:78> 'int32_t':'int' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x55d3ab03a1a8 <col:78> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   | |     |     `-IntegerLiteral 0x55d3ab03a1c8 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x55d3ab03a3c8 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x55d3ab03a3a8 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x55d3ab03a390 <col:92> 'int32_t':'int' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x55d3ab03a260 <col:92> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   | |         `-ParenExpr 0x55d3ab03a370 <col:98, col:114> 'int'
|       |   | |           `-BinaryOperator 0x55d3ab03a350 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:111> 'int' '/'
|       |   | |             |-ParenExpr 0x55d3ab03a2f8 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   | |             | `-BinaryOperator 0x55d3ab03a2d8 <col:22, col:34> 'int' '-'
|       |   | |             |   |-UnaryOperator 0x55d3ab03a2a0 <col:22, col:23> 'int' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x55d3ab03a280 <col:23> 'int' 2147483647
|       |   | |             |   `-IntegerLiteral 0x55d3ab03a2b8 <col:34> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x55d3ab03a338 </usr/include/safe_math.h:322:111> 'int32_t':'int' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x55d3ab03a318 <col:111> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   | `-ParenExpr 0x55d3ab03a740 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x55d3ab03a720 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x55d3ab03a578 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x55d3ab03a4c0 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x55d3ab03a4a0 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x55d3ab03a488 <col:123> 'int32_t':'int' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x55d3ab03a448 <col:123> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   |     | |   `-IntegerLiteral 0x55d3ab03a468 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x55d3ab03a558 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x55d3ab03a538 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x55d3ab03a520 <col:137> 'int32_t':'int' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x55d3ab03a4e0 <col:137> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   |     |     `-IntegerLiteral 0x55d3ab03a500 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x55d3ab03a700 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x55d3ab03a6e0 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x55d3ab03a6c8 <col:150> 'int32_t':'int' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x55d3ab03a598 <col:150> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |   |         `-ParenExpr 0x55d3ab03a6a8 <col:156, col:172> 'int'
|       |   |           `-BinaryOperator 0x55d3ab03a688 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:169> 'int' '/'
|       |   |             |-ParenExpr 0x55d3ab03a630 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   |             | `-BinaryOperator 0x55d3ab03a610 <col:22, col:34> 'int' '-'
|       |   |             |   |-UnaryOperator 0x55d3ab03a5d8 <col:22, col:23> 'int' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x55d3ab03a5b8 <col:23> 'int' 2147483647
|       |   |             |   `-IntegerLiteral 0x55d3ab03a5f0 <col:34> 'int' 1
|       |   |             `-ImplicitCastExpr 0x55d3ab03a670 </usr/include/safe_math.h:322:169> 'int32_t':'int' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x55d3ab03a650 <col:169> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x55d3ab03aad8 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x55d3ab03aab8 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x55d3ab03a968 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x55d3ab03a8b0 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x55d3ab03a7f8 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x55d3ab03a7d8 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x55d3ab03a7c0 <col:181> 'int32_t':'int' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x55d3ab03a780 <col:181> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |       | | |   `-IntegerLiteral 0x55d3ab03a7a0 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x55d3ab03a890 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x55d3ab03a870 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x55d3ab03a858 <col:195> 'int32_t':'int' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x55d3ab03a818 <col:195> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |       | |     `-IntegerLiteral 0x55d3ab03a838 <col:202> 'int' 0
|       |       | `-ParenExpr 0x55d3ab03a948 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x55d3ab03a928 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x55d3ab03a910 <col:209> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55d3ab03a8d0 <col:209> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x55d3ab03a8f0 <col:216> 'int' 0
|       |       `-ParenExpr 0x55d3ab03aa98 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x55d3ab03aa78 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x55d3ab03aa60 <col:223> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab03a988 <col:223> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55d3ab03aa40 <col:229, col:245> 'int'
|       |             `-BinaryOperator 0x55d3ab03aa20 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:242> 'int' '/'
|       |               |-ParenExpr 0x55d3ab03a9c8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |               | `-IntegerLiteral 0x55d3ab03a9a8 <col:22> 'int' 2147483647
|       |               `-ImplicitCastExpr 0x55d3ab03aa08 </usr/include/safe_math.h:322:242> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55d3ab03a9e8 <col:242> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       |-ImplicitCastExpr 0x55d3ab03ac28 <line:323:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03ab78 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03ab58 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03ab38 </usr/include/safe_math.h:323:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|       `-BinaryOperator 0x55d3ab03ac08 <line:326:5, col:11> 'int32_t':'int' '*'
|         |-ImplicitCastExpr 0x55d3ab03abd8 <col:5> 'int32_t':'int' <LValueToRValue>
|         | `-DeclRefExpr 0x55d3ab03ab98 <col:5> 'int32_t':'int' lvalue ParmVar 0x55d3ab039c80 'si1' 'int32_t':'int'
|         `-ImplicitCastExpr 0x55d3ab03abf0 <col:11> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x55d3ab03abb8 <col:11> 'int32_t':'int' lvalue ParmVar 0x55d3ab039cf8 'si2' 'int32_t':'int'
|-FunctionDecl 0x55d3ab03add8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:339:1> <scratch space>:90:1 safe_mod_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55d3ab03acc0 </usr/include/safe_math.h:330:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03ad38 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55d3ab03b2f0 <line:331:1, line:339:1>
|   `-ReturnStmt 0x55d3ab03b2e0 <line:333:3, line:338:15>
|     `-ConditionalOperator 0x55d3ab03b2b0 <line:335:5, line:338:15> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03b168 <line:335:5, col:57> 'int'
|       | `-BinaryOperator 0x55d3ab03b148 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55d3ab03af08 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab03aee8 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55d3ab03aed0 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab03ae90 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ad38 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55d3ab03aeb0 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab03b128 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55d3ab03b108 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55d3ab03b018 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55d3ab03aff8 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55d3ab03afe0 </usr/include/safe_math.h:335:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55d3ab03af28 <col:22> 'int32_t':'int' lvalue ParmVar 0x55d3ab03acc0 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x55d3ab03afc0 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x55d3ab03afa0 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x55d3ab03af68 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x55d3ab03af48 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x55d3ab03af80 <col:34> 'int' 1
|       |       `-ParenExpr 0x55d3ab03b0e8 </usr/include/safe_math.h:335:43, col:55> 'int'
|       |         `-BinaryOperator 0x55d3ab03b0c8 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55d3ab03b0b0 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab03b038 <col:44> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ad38 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55d3ab03b090 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x55d3ab03b078 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x55d3ab03b058 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab03b298 <line:336:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03b1c8 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03b1a8 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03b188 </usr/include/safe_math.h:336:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03acc0 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03b278 <line:338:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03b258 <col:6, col:12> 'int32_t':'int' '%'
|           |-ImplicitCastExpr 0x55d3ab03b228 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03b1e8 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03acc0 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55d3ab03b240 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab03b208 <col:12> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ad38 'si2' 'int32_t':'int'
|-FunctionDecl 0x55d3ab03b430 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:351:1> <scratch space>:91:1 safe_div_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55d3ab03b318 </usr/include/safe_math.h:342:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03b390 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55d3ab03b948 <line:343:1, line:351:1>
|   `-ReturnStmt 0x55d3ab03b938 <line:345:3, line:350:15>
|     `-ConditionalOperator 0x55d3ab03b908 <line:347:5, line:350:15> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03b7c0 <line:347:5, col:57> 'int'
|       | `-BinaryOperator 0x55d3ab03b7a0 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55d3ab03b560 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab03b540 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55d3ab03b528 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab03b4e8 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b390 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55d3ab03b508 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab03b780 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55d3ab03b760 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55d3ab03b670 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55d3ab03b650 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55d3ab03b638 </usr/include/safe_math.h:347:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55d3ab03b580 <col:22> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b318 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x55d3ab03b618 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x55d3ab03b5f8 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x55d3ab03b5c0 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x55d3ab03b5a0 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x55d3ab03b5d8 <col:34> 'int' 1
|       |       `-ParenExpr 0x55d3ab03b740 </usr/include/safe_math.h:347:43, col:55> 'int'
|       |         `-BinaryOperator 0x55d3ab03b720 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55d3ab03b708 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab03b690 <col:44> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b390 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55d3ab03b6e8 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x55d3ab03b6d0 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x55d3ab03b6b0 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab03b8f0 <line:348:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03b820 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03b800 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03b7e0 </usr/include/safe_math.h:348:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b318 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03b8d0 <line:350:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03b8b0 <col:6, col:12> 'int32_t':'int' '/'
|           |-ImplicitCastExpr 0x55d3ab03b880 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03b840 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b318 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55d3ab03b898 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab03b860 <col:12> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b390 'si2' 'int32_t':'int'
|-FunctionDecl 0x55d3ab03bb08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:363:1> <scratch space>:92:1 safe_lshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x55d3ab03b970 </usr/include/safe_math.h:354:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03b9f0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab03c220 <line:355:1, line:363:1>
|   `-ReturnStmt 0x55d3ab03c210 <line:357:3, line:362:26>
|     `-ConditionalOperator 0x55d3ab03c1e0 <line:359:5, line:362:26> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03c038 <line:359:5, col:102> 'int'
|       | `-BinaryOperator 0x55d3ab03c018 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab03be68 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x55d3ab03bd50 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x55d3ab03bc38 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x55d3ab03bc18 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x55d3ab03bc00 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x55d3ab03bbc0 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b970 'left' 'int32_t':'int'
|       |   | | |   `-IntegerLiteral 0x55d3ab03bbe0 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x55d3ab03bd30 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x55d3ab03bd10 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x55d3ab03bcd0 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x55d3ab03bca8 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x55d3ab03bc90 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x55d3ab03bc58 <col:27> 'int' lvalue ParmVar 0x55d3ab03b9f0 'right' 'int'
|       |   | |     `-IntegerLiteral 0x55d3ab03bcf0 <col:36> 'int' 0
|       |   | `-ParenExpr 0x55d3ab03be48 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x55d3ab03be28 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab03bde8 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab03bdc0 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab03bda8 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab03bd70 <col:49> 'int' lvalue ParmVar 0x55d3ab03b9f0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab03be08 <col:59> 'int' 32
|       |   `-ParenExpr 0x55d3ab03bff8 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x55d3ab03bfd8 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab03bfc0 <col:67> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab03be88 <col:67> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b970 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x55d3ab03bfa0 <col:74, col:100> 'int'
|       |         `-BinaryOperator 0x55d3ab03bf80 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:359:99> 'int' '>>'
|       |           |-ParenExpr 0x55d3ab03bec8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x55d3ab03bea8 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x55d3ab03bf60 </usr/include/safe_math.h:359:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x55d3ab03bf38 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab03bf20 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab03bee8 <col:94> 'int' lvalue ParmVar 0x55d3ab03b9f0 'right' 'int'
|       |-ImplicitCastExpr 0x55d3ab03c1c8 <line:360:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03c098 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03c078 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03c058 </usr/include/safe_math.h:360:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b970 'left' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03c1a8 <line:362:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03c188 <col:6, col:25> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x55d3ab03c170 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03c0b8 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03b970 'left' 'int32_t':'int'
|           `-ParenExpr 0x55d3ab03c150 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab03c128 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab03c110 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab03c0d8 <col:20> 'int' lvalue ParmVar 0x55d3ab03b9f0 'right' 'int'
|-FunctionDecl 0x55d3ab03c418 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:375:1> <scratch space>:93:1 safe_lshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab03c248 </usr/include/safe_math.h:366:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03c2c8 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab03ca30 <line:367:1, line:375:1>
|   `-ReturnStmt 0x55d3ab03ca20 <line:369:3, line:374:35>
|     `-ConditionalOperator 0x55d3ab03c9f0 <line:371:5, line:374:35> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03c848 <line:371:5, col:98> 'int'
|       | `-BinaryOperator 0x55d3ab03c828 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab03c678 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab03c548 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55d3ab03c528 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55d3ab03c510 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55d3ab03c4d0 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03c248 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x55d3ab03c4f0 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55d3ab03c658 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x55d3ab03c638 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab03c5e0 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x55d3ab03c5b8 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab03c5a0 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab03c568 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab03c2c8 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x55d3ab03c620 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x55d3ab03c600 <col:46> 'int' 32
|       |   `-ParenExpr 0x55d3ab03c808 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x55d3ab03c7e8 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab03c7d0 <col:54> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab03c698 <col:54> 'int32_t':'int' lvalue ParmVar 0x55d3ab03c248 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x55d3ab03c7b0 <col:61, col:96> 'int'
|       |         `-BinaryOperator 0x55d3ab03c790 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:371:95> 'int' '>>'
|       |           |-ParenExpr 0x55d3ab03c6d8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x55d3ab03c6b8 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x55d3ab03c770 </usr/include/safe_math.h:371:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x55d3ab03c748 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab03c730 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab03c6f8 <col:90> 'unsigned int' lvalue ParmVar 0x55d3ab03c2c8 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55d3ab03c9d8 <line:372:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03c8a8 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03c888 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03c868 </usr/include/safe_math.h:372:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03c248 'left' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03c9b8 <line:374:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03c998 <col:6, col:34> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x55d3ab03c980 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03c8c8 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03c248 'left' 'int32_t':'int'
|           `-ParenExpr 0x55d3ab03c960 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab03c938 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab03c920 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab03c8e8 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab03c2c8 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab03cb78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:387:1> <scratch space>:94:1 safe_rshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x55d3ab03ca58 </usr/include/safe_math.h:378:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03cad8 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab03d0f8 <line:379:1, line:387:1>
|   `-ReturnStmt 0x55d3ab03d0e8 <line:381:3, line:386:26>
|     `-ConditionalOperator 0x55d3ab03d0b8 <line:383:5, line:386:26> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03cf10 <line:383:5, col:62> 'int'
|       | `-BinaryOperator 0x55d3ab03cef0 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab03cdd8 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab03ccc0 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55d3ab03cc88 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55d3ab03cc70 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55d3ab03cc30 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ca58 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x55d3ab03cc50 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55d3ab03cdb8 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x55d3ab03cd98 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x55d3ab03cd58 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab03cd30 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab03cd18 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab03cce0 <col:27> 'int' lvalue ParmVar 0x55d3ab03cad8 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab03cd78 <col:36> 'int' 0
|       |   `-ParenExpr 0x55d3ab03ced0 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x55d3ab03ceb0 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x55d3ab03ce70 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x55d3ab03ce48 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab03ce30 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab03cdf8 <col:49> 'int' lvalue ParmVar 0x55d3ab03cad8 'right' 'int'
|       |       `-IntegerLiteral 0x55d3ab03ce90 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab03d0a0 <line:384:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03cf70 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03cf50 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03cf30 </usr/include/safe_math.h:384:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ca58 'left' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03d080 <line:386:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03d060 <col:6, col:25> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x55d3ab03d048 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03cf90 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03ca58 'left' 'int32_t':'int'
|           `-ParenExpr 0x55d3ab03d028 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab03d000 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab03cfe8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab03cfb0 <col:20> 'int' lvalue ParmVar 0x55d3ab03cad8 'right' 'int'
|-FunctionDecl 0x55d3ab03d240 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:399:1> <scratch space>:95:1 safe_rshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab03d120 </usr/include/safe_math.h:390:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55d3ab03d1a0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab03d6a8 <line:391:1, line:399:1>
|   `-ReturnStmt 0x55d3ab03d698 <line:393:3, line:398:35>
|     `-ConditionalOperator 0x55d3ab03d668 <line:395:5, line:398:35> 'int32_t':'int'
|       |-ParenExpr 0x55d3ab03d4c0 <line:395:5, col:49> 'int'
|       | `-BinaryOperator 0x55d3ab03d4a0 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x55d3ab03d370 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab03d350 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x55d3ab03d338 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab03d2f8 <col:7> 'int32_t':'int' lvalue ParmVar 0x55d3ab03d120 'left' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55d3ab03d318 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab03d480 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x55d3ab03d460 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x55d3ab03d408 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x55d3ab03d3e0 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab03d3c8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab03d390 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab03d1a0 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x55d3ab03d448 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x55d3ab03d428 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab03d650 <line:396:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03d520 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55d3ab03d500 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55d3ab03d4e0 </usr/include/safe_math.h:396:16> 'int32_t':'int' lvalue ParmVar 0x55d3ab03d120 'left' 'int32_t':'int'
|       `-ParenExpr 0x55d3ab03d630 <line:398:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x55d3ab03d610 <col:6, col:34> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x55d3ab03d5f8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03d540 <col:6> 'int32_t':'int' lvalue ParmVar 0x55d3ab03d120 'left' 'int32_t':'int'
|           `-ParenExpr 0x55d3ab03d5d8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab03d5b0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab03d598 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab03d560 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab03d1a0 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab03d880 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:416:1> <scratch space>:96:1 safe_unary_minus_func_int64_t_s 'int64_t (int64_t)' static
| |-ParmVarDecl 0x55d3ab03d730 </usr/include/safe_math.h:405:39, col:47> col:47 used si 'int64_t':'long'
| `-CompoundStmt 0x55d3ab03db60 <line:406:1, line:416:1>
|   `-ReturnStmt 0x55d3ab03db50 <line:408:3, line:415:6>
|     `-ConditionalOperator 0x55d3ab03db20 <line:411:5, line:415:6> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab03da38 <line:411:5, col:19> 'int'
|       | `-BinaryOperator 0x55d3ab03da18 <col:6, /usr/include/stdint.h:108:55> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab03da00 </usr/include/safe_math.h:411:6> 'int64_t':'long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab03d930 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab03d730 'si' 'int64_t':'long'
|       |   `-ParenExpr 0x55d3ab03d9e0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |     `-BinaryOperator 0x55d3ab03d9c0 <col:22, col:54> 'long' '-'
|       |       |-UnaryOperator 0x55d3ab03d970 <col:22, <scratch space>:98:1> 'long' prefix '-'
|       |       | `-IntegerLiteral 0x55d3ab03d950 <col:1> 'long' 9223372036854775807
|       |       `-ImplicitCastExpr 0x55d3ab03d9a8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |         `-IntegerLiteral 0x55d3ab03d988 <col:54> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab03db08 </usr/include/safe_math.h:412:5, col:19> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03da98 <col:5, col:19> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab03da78 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab03da58 </usr/include/safe_math.h:412:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab03d730 'si' 'int64_t':'long'
|       `-UnaryOperator 0x55d3ab03daf0 <line:415:5, col:6> 'int64_t':'long' prefix '-'
|         `-ImplicitCastExpr 0x55d3ab03dad8 <col:6> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x55d3ab03dab8 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab03d730 'si' 'int64_t':'long'
|-FunctionDecl 0x55d3ab03dd58 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:430:1> <scratch space>:99:1 safe_add_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55d3ab03db88 </usr/include/safe_math.h:419:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab03dc00 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55d3ab03e608 <line:420:1, line:430:1>
|   `-ReturnStmt 0x55d3ab03e5f8 <line:422:3, line:429:15>
|     `-ConditionalOperator 0x55d3ab03e5c8 <line:425:5, line:429:15> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab03e480 <line:425:5, col:104> 'int'
|       | `-BinaryOperator 0x55d3ab03e460 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x55d3ab03e0e0 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x55d3ab03e0c0 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x55d3ab03df70 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x55d3ab03dea0 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x55d3ab03de80 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x55d3ab03de50 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x55d3ab03de10 <col:8> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|       |   |   | |   `-ImplicitCastExpr 0x55d3ab03de68 <col:12> 'int64_t':'long' <IntegralCast>
|       |   |   | |     `-IntegerLiteral 0x55d3ab03de30 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x55d3ab03df50 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x55d3ab03df30 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x55d3ab03df00 <col:19> 'int64_t':'long' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x55d3ab03dec0 <col:19> 'int64_t':'long' lvalue ParmVar 0x55d3ab03dc00 'si2' 'int64_t':'long'
|       |   |   |     `-ImplicitCastExpr 0x55d3ab03df18 <col:23> 'int64_t':'long' <IntegralCast>
|       |   |   |       `-IntegerLiteral 0x55d3ab03dee0 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x55d3ab03e0a0 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x55d3ab03e080 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x55d3ab03e068 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x55d3ab03df90 <col:30> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|       |   |       `-ParenExpr 0x55d3ab03e048 <col:36, col:50> 'long'
|       |   |         `-BinaryOperator 0x55d3ab03e028 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:425:47> 'long' '-'
|       |   |           |-ParenExpr 0x55d3ab03dfd0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   |           | `-IntegerLiteral 0x55d3ab03dfb0 <<scratch space>:101:1> 'long' 9223372036854775807
|       |   |           `-ImplicitCastExpr 0x55d3ab03e010 </usr/include/safe_math.h:425:47> 'int64_t':'long' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x55d3ab03dff0 <col:47> 'int64_t':'long' lvalue ParmVar 0x55d3ab03dc00 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x55d3ab03e440 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x55d3ab03e420 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x55d3ab03e260 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x55d3ab03e190 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x55d3ab03e170 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x55d3ab03e140 <col:59> 'int64_t':'long' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x55d3ab03e100 <col:59> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|       |       | |   `-ImplicitCastExpr 0x55d3ab03e158 <col:63> 'int64_t':'long' <IntegralCast>
|       |       | |     `-IntegerLiteral 0x55d3ab03e120 <col:63> 'int' 0
|       |       | `-ParenExpr 0x55d3ab03e240 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x55d3ab03e220 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x55d3ab03e1f0 <col:70> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55d3ab03e1b0 <col:70> 'int64_t':'long' lvalue ParmVar 0x55d3ab03dc00 'si2' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x55d3ab03e208 <col:74> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x55d3ab03e1d0 <col:74> 'int' 0
|       |       `-ParenExpr 0x55d3ab03e400 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x55d3ab03e3e0 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x55d3ab03e3c8 <col:81> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab03e280 <col:81> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|       |           `-ParenExpr 0x55d3ab03e3a8 <col:87, col:101> 'long'
|       |             `-BinaryOperator 0x55d3ab03e388 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:425:98> 'long' '-'
|       |               |-ParenExpr 0x55d3ab03e330 </usr/include/stdint.h:108:21, col:55> 'long'
|       |               | `-BinaryOperator 0x55d3ab03e310 <col:22, col:54> 'long' '-'
|       |               |   |-UnaryOperator 0x55d3ab03e2c0 <col:22, <scratch space>:102:1> 'long' prefix '-'
|       |               |   | `-IntegerLiteral 0x55d3ab03e2a0 <col:1> 'long' 9223372036854775807
|       |               |   `-ImplicitCastExpr 0x55d3ab03e2f8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |               |     `-IntegerLiteral 0x55d3ab03e2d8 <col:54> 'int' 1
|       |               `-ImplicitCastExpr 0x55d3ab03e370 </usr/include/safe_math.h:425:98> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55d3ab03e350 <col:98> 'int64_t':'long' lvalue ParmVar 0x55d3ab03dc00 'si2' 'int64_t':'long'
|       |-ImplicitCastExpr 0x55d3ab03e5b0 <line:426:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03e4e0 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab03e4c0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab03e4a0 </usr/include/safe_math.h:426:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab03e590 <line:429:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab03e570 <col:6, col:12> 'int64_t':'long' '+'
|           |-ImplicitCastExpr 0x55d3ab03e540 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03e500 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab03db88 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55d3ab03e558 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab03e520 <col:12> 'int64_t':'long' lvalue ParmVar 0x55d3ab03dc00 'si2' 'int64_t':'long'
|-FunctionDecl 0x55d3ab03e748 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:444:1> <scratch space>:103:1 safe_sub_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55d3ab03e630 </usr/include/safe_math.h:433:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab03e6a8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55d3ab03edb8 <line:434:1, line:444:1>
|   `-ReturnStmt 0x55d3ab03eda8 <line:436:3, line:443:15>
|     `-ConditionalOperator 0x55d3ab03ed78 <line:439:5, line:443:15> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab03ec18 <line:439:5, col:70> 'int'
|       | `-BinaryOperator 0x55d3ab03ebf8 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x55d3ab03eba0 <col:6, col:65> 'long'
|       |   | `-BinaryOperator 0x55d3ab03eb80 <col:7, col:64> 'long' '&'
|       |   |   |-ParenExpr 0x55d3ab03e890 <col:7, col:15> 'int64_t':'long'
|       |   |   | `-BinaryOperator 0x55d3ab03e870 <col:8, col:12> 'int64_t':'long' '^'
|       |   |   |   |-ImplicitCastExpr 0x55d3ab03e840 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x55d3ab03e800 <col:8> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e630 'si1' 'int64_t':'long'
|       |   |   |   `-ImplicitCastExpr 0x55d3ab03e858 <col:12> 'int64_t':'long' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab03e820 <col:12> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e6a8 'si2' 'int64_t':'long'
|       |   |   `-ParenExpr 0x55d3ab03eb60 <col:19, col:64> 'long'
|       |   |     `-BinaryOperator 0x55d3ab03eb40 <col:20, col:61> 'long' '^'
|       |   |       |-ParenExpr 0x55d3ab03eae8 <col:20, col:59> 'long'
|       |   |       | `-BinaryOperator 0x55d3ab03eac8 <col:21, col:56> 'long' '-'
|       |   |       |   |-ParenExpr 0x55d3ab03ea70 <col:21, col:54> 'long'
|       |   |       |   | `-BinaryOperator 0x55d3ab03ea50 <col:22, col:53> 'long' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x55d3ab03ea38 <col:22> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x55d3ab03e8b0 <col:22> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e630 'si1' 'int64_t':'long'
|       |   |       |   |   `-ParenExpr 0x55d3ab03ea18 <col:28, col:53> 'long'
|       |   |       |   |     `-BinaryOperator 0x55d3ab03e9f8 <col:29, col:52> 'long' '&'
|       |   |       |   |       |-ParenExpr 0x55d3ab03e960 <col:29, col:37> 'int64_t':'long'
|       |   |       |   |       | `-BinaryOperator 0x55d3ab03e940 <col:30, col:34> 'int64_t':'long' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x55d3ab03e910 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x55d3ab03e8d0 <col:30> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e630 'si1' 'int64_t':'long'
|       |   |       |   |       |   `-ImplicitCastExpr 0x55d3ab03e928 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x55d3ab03e8f0 <col:34> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e6a8 'si2' 'int64_t':'long'
|       |   |       |   |       `-ParenExpr 0x55d3ab03e9d8 <col:41, col:52> 'long'
|       |   |       |   |         `-UnaryOperator 0x55d3ab03e9c0 <col:42, /usr/include/stdint.h:113:52> 'long' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x55d3ab03e9a0 <col:21, col:52> 'long'
|       |   |       |   |             `-IntegerLiteral 0x55d3ab03e980 <<scratch space>:105:1> 'long' 9223372036854775807
|       |   |       |   `-ImplicitCastExpr 0x55d3ab03eab0 </usr/include/safe_math.h:439:56> 'int64_t':'long' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x55d3ab03ea90 <col:56> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e6a8 'si2' 'int64_t':'long'
|       |   |       `-ImplicitCastExpr 0x55d3ab03eb28 <col:61> 'int64_t':'long' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab03eb08 <col:61> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e6a8 'si2' 'int64_t':'long'
|       |   `-ImplicitCastExpr 0x55d3ab03ebe0 <col:69> 'long' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab03ebc0 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab03ed60 <line:440:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03ec78 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab03ec58 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab03ec38 </usr/include/safe_math.h:440:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e630 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab03ed40 <line:443:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab03ed20 <col:6, col:12> 'int64_t':'long' '-'
|           |-ImplicitCastExpr 0x55d3ab03ecf0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab03ec98 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e630 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55d3ab03ed08 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab03ecd0 <col:12> 'int64_t':'long' lvalue ParmVar 0x55d3ab03e6a8 'si2' 'int64_t':'long'
|-FunctionDecl 0x55d3ab03eef8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:458:1> <scratch space>:106:1 safe_mul_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55d3ab03ede0 </usr/include/safe_math.h:447:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab03ee58 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55d3ab03fee8 <line:448:1, line:458:1>
|   `-ReturnStmt 0x55d3ab03fed8 <line:450:3, line:457:11>
|     `-ConditionalOperator 0x55d3ab03fea8 <line:453:5, line:457:11> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab03fd80 <line:453:5, col:248> 'int'
|       | `-BinaryOperator 0x55d3ab03fd60 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab03f980 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x55d3ab03f600 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x55d3ab03f280 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x55d3ab03f260 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x55d3ab03f110 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x55d3ab03f040 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x55d3ab03f020 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x55d3ab03eff0 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x55d3ab03efb0 <col:8> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   | | |   | |   `-ImplicitCastExpr 0x55d3ab03f008 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |   | |     `-IntegerLiteral 0x55d3ab03efd0 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x55d3ab03f0f0 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x55d3ab03f0d0 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x55d3ab03f0a0 <col:21> 'int64_t':'long' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x55d3ab03f060 <col:21> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   | | |   |     `-ImplicitCastExpr 0x55d3ab03f0b8 <col:27> 'int64_t':'long' <IntegralCast>
|       |   | | |   |       `-IntegerLiteral 0x55d3ab03f080 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x55d3ab03f240 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x55d3ab03f220 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x55d3ab03f208 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x55d3ab03f130 <col:34> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   | | |       `-ParenExpr 0x55d3ab03f1e8 <col:40, col:56> 'long'
|       |   | | |         `-BinaryOperator 0x55d3ab03f1c8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:53> 'long' '/'
|       |   | | |           |-ParenExpr 0x55d3ab03f170 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   | | |           | `-IntegerLiteral 0x55d3ab03f150 <<scratch space>:108:1> 'long' 9223372036854775807
|       |   | | |           `-ImplicitCastExpr 0x55d3ab03f1b0 </usr/include/safe_math.h:453:53> 'int64_t':'long' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x55d3ab03f190 <col:53> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   | | `-ParenExpr 0x55d3ab03f5e0 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x55d3ab03f5c0 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x55d3ab03f400 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x55d3ab03f330 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x55d3ab03f310 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x55d3ab03f2e0 <col:65> 'int64_t':'long' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x55d3ab03f2a0 <col:65> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   | |     | |   `-ImplicitCastExpr 0x55d3ab03f2f8 <col:71> 'int64_t':'long' <IntegralCast>
|       |   | |     | |     `-IntegerLiteral 0x55d3ab03f2c0 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x55d3ab03f3e0 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x55d3ab03f3c0 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x55d3ab03f390 <col:78> 'int64_t':'long' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x55d3ab03f350 <col:78> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   | |     |     `-ImplicitCastExpr 0x55d3ab03f3a8 <col:85> 'int64_t':'long' <IntegralCast>
|       |   | |     |       `-IntegerLiteral 0x55d3ab03f370 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x55d3ab03f5a0 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x55d3ab03f580 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x55d3ab03f568 <col:92> 'int64_t':'long' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x55d3ab03f420 <col:92> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   | |         `-ParenExpr 0x55d3ab03f548 <col:98, col:114> 'long'
|       |   | |           `-BinaryOperator 0x55d3ab03f528 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:111> 'long' '/'
|       |   | |             |-ParenExpr 0x55d3ab03f4d0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   | |             | `-BinaryOperator 0x55d3ab03f4b0 <col:22, col:54> 'long' '-'
|       |   | |             |   |-UnaryOperator 0x55d3ab03f460 <col:22, <scratch space>:109:1> 'long' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x55d3ab03f440 <col:1> 'long' 9223372036854775807
|       |   | |             |   `-ImplicitCastExpr 0x55d3ab03f498 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   | |             |     `-IntegerLiteral 0x55d3ab03f478 <col:54> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x55d3ab03f510 </usr/include/safe_math.h:453:111> 'int64_t':'long' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x55d3ab03f4f0 <col:111> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   | `-ParenExpr 0x55d3ab03f960 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x55d3ab03f940 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x55d3ab03f780 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x55d3ab03f6b0 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x55d3ab03f690 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x55d3ab03f660 <col:123> 'int64_t':'long' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x55d3ab03f620 <col:123> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   |     | |   `-ImplicitCastExpr 0x55d3ab03f678 <col:130> 'int64_t':'long' <IntegralCast>
|       |   |     | |     `-IntegerLiteral 0x55d3ab03f640 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x55d3ab03f760 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x55d3ab03f740 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x55d3ab03f710 <col:137> 'int64_t':'long' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x55d3ab03f6d0 <col:137> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   |     |     `-ImplicitCastExpr 0x55d3ab03f728 <col:143> 'int64_t':'long' <IntegralCast>
|       |   |     |       `-IntegerLiteral 0x55d3ab03f6f0 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x55d3ab03f920 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x55d3ab03f900 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x55d3ab03f8e8 <col:150> 'int64_t':'long' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x55d3ab03f7a0 <col:150> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |   |         `-ParenExpr 0x55d3ab03f8c8 <col:156, col:172> 'long'
|       |   |           `-BinaryOperator 0x55d3ab03f8a8 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:169> 'long' '/'
|       |   |             |-ParenExpr 0x55d3ab03f850 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   |             | `-BinaryOperator 0x55d3ab03f830 <col:22, col:54> 'long' '-'
|       |   |             |   |-UnaryOperator 0x55d3ab03f7e0 <col:22, <scratch space>:110:1> 'long' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x55d3ab03f7c0 <col:1> 'long' 9223372036854775807
|       |   |             |   `-ImplicitCastExpr 0x55d3ab03f818 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   |             |     `-IntegerLiteral 0x55d3ab03f7f8 <col:54> 'int' 1
|       |   |             `-ImplicitCastExpr 0x55d3ab03f890 </usr/include/safe_math.h:453:169> 'int64_t':'long' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x55d3ab03f870 <col:169> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x55d3ab03fd40 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x55d3ab03fd20 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x55d3ab03fbd0 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x55d3ab03fb00 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x55d3ab03fa30 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x55d3ab03fa10 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x55d3ab03f9e0 <col:181> 'int64_t':'long' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x55d3ab03f9a0 <col:181> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |       | | |   `-ImplicitCastExpr 0x55d3ab03f9f8 <col:188> 'int64_t':'long' <IntegralCast>
|       |       | | |     `-IntegerLiteral 0x55d3ab03f9c0 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x55d3ab03fae0 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x55d3ab03fac0 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x55d3ab03fa90 <col:195> 'int64_t':'long' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x55d3ab03fa50 <col:195> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |       | |     `-ImplicitCastExpr 0x55d3ab03faa8 <col:202> 'int64_t':'long' <IntegralCast>
|       |       | |       `-IntegerLiteral 0x55d3ab03fa70 <col:202> 'int' 0
|       |       | `-ParenExpr 0x55d3ab03fbb0 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x55d3ab03fb90 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x55d3ab03fb60 <col:209> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55d3ab03fb20 <col:209> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x55d3ab03fb78 <col:216> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x55d3ab03fb40 <col:216> 'int' 0
|       |       `-ParenExpr 0x55d3ab03fd00 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x55d3ab03fce0 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x55d3ab03fcc8 <col:223> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab03fbf0 <col:223> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|       |           `-ParenExpr 0x55d3ab03fca8 <col:229, col:245> 'long'
|       |             `-BinaryOperator 0x55d3ab03fc88 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:242> 'long' '/'
|       |               |-ParenExpr 0x55d3ab03fc30 </usr/include/stdint.h:113:21, col:52> 'long'
|       |               | `-IntegerLiteral 0x55d3ab03fc10 <<scratch space>:111:1> 'long' 9223372036854775807
|       |               `-ImplicitCastExpr 0x55d3ab03fc70 </usr/include/safe_math.h:453:242> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55d3ab03fc50 <col:242> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       |-ImplicitCastExpr 0x55d3ab03fe90 <line:454:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab03fde0 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab03fdc0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab03fda0 </usr/include/safe_math.h:454:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|       `-BinaryOperator 0x55d3ab03fe70 <line:457:5, col:11> 'int64_t':'long' '*'
|         |-ImplicitCastExpr 0x55d3ab03fe40 <col:5> 'int64_t':'long' <LValueToRValue>
|         | `-DeclRefExpr 0x55d3ab03fe00 <col:5> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ede0 'si1' 'int64_t':'long'
|         `-ImplicitCastExpr 0x55d3ab03fe58 <col:11> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x55d3ab03fe20 <col:11> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ee58 'si2' 'int64_t':'long'
|-FunctionDecl 0x55d3ab040028 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:470:1> <scratch space>:112:1 safe_mod_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55d3ab03ff10 </usr/include/safe_math.h:461:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab03ff88 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55d3ab040588 <line:462:1, line:470:1>
|   `-ReturnStmt 0x55d3ab040578 <line:464:3, line:469:15>
|     `-ConditionalOperator 0x55d3ab040548 <line:466:5, line:469:15> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab040400 <line:466:5, col:57> 'int'
|       | `-BinaryOperator 0x55d3ab0403e0 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55d3ab040170 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab040150 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55d3ab040120 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab0400e0 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff88 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55d3ab040138 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55d3ab040100 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab0403c0 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55d3ab0403a0 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55d3ab040298 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55d3ab040278 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55d3ab040260 </usr/include/safe_math.h:466:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55d3ab040190 <col:22> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff10 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x55d3ab040240 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x55d3ab040220 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x55d3ab0401d0 <col:22, <scratch space>:113:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x55d3ab0401b0 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x55d3ab040208 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x55d3ab0401e8 <col:54> 'int' 1
|       |       `-ParenExpr 0x55d3ab040380 </usr/include/safe_math.h:466:43, col:55> 'int'
|       |         `-BinaryOperator 0x55d3ab040360 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55d3ab040330 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab0402b8 <col:44> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff88 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x55d3ab040348 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x55d3ab040310 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x55d3ab0402f8 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x55d3ab0402d8 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab040530 <line:467:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab040460 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab040440 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab040420 </usr/include/safe_math.h:467:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff10 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab040510 <line:469:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab0404f0 <col:6, col:12> 'int64_t':'long' '%'
|           |-ImplicitCastExpr 0x55d3ab0404c0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab040480 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff10 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55d3ab0404d8 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0404a0 <col:12> 'int64_t':'long' lvalue ParmVar 0x55d3ab03ff88 'si2' 'int64_t':'long'
|-FunctionDecl 0x55d3ab0406c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:482:1> <scratch space>:114:1 safe_div_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55d3ab0405b0 </usr/include/safe_math.h:473:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab040628 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55d3ab040c28 <line:474:1, line:482:1>
|   `-ReturnStmt 0x55d3ab040c18 <line:476:3, line:481:15>
|     `-ConditionalOperator 0x55d3ab040be8 <line:478:5, line:481:15> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab040aa0 <line:478:5, col:57> 'int'
|       | `-BinaryOperator 0x55d3ab040a80 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55d3ab040810 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab0407f0 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55d3ab0407c0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab040780 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab040628 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55d3ab0407d8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55d3ab0407a0 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab040a60 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55d3ab040a40 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55d3ab040938 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55d3ab040918 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55d3ab040900 </usr/include/safe_math.h:478:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55d3ab040830 <col:22> 'int64_t':'long' lvalue ParmVar 0x55d3ab0405b0 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x55d3ab0408e0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x55d3ab0408c0 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x55d3ab040870 <col:22, <scratch space>:115:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x55d3ab040850 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x55d3ab0408a8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x55d3ab040888 <col:54> 'int' 1
|       |       `-ParenExpr 0x55d3ab040a20 </usr/include/safe_math.h:478:43, col:55> 'int'
|       |         `-BinaryOperator 0x55d3ab040a00 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55d3ab0409d0 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55d3ab040958 <col:44> 'int64_t':'long' lvalue ParmVar 0x55d3ab040628 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x55d3ab0409e8 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x55d3ab0409b0 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x55d3ab040998 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x55d3ab040978 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55d3ab040bd0 <line:479:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab040b00 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab040ae0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab040ac0 </usr/include/safe_math.h:479:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab0405b0 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab040bb0 <line:481:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab040b90 <col:6, col:12> 'int64_t':'long' '/'
|           |-ImplicitCastExpr 0x55d3ab040b60 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab040b20 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab0405b0 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55d3ab040b78 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab040b40 <col:12> 'int64_t':'long' lvalue ParmVar 0x55d3ab040628 'si2' 'int64_t':'long'
|-FunctionDecl 0x55d3ab040e38 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:494:1> <scratch space>:116:1 safe_lshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x55d3ab040c50 </usr/include/safe_math.h:485:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab040ce0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab041568 <line:486:1, line:494:1>
|   `-ReturnStmt 0x55d3ab041558 <line:488:3, line:493:26>
|     `-ConditionalOperator 0x55d3ab041528 <line:490:5, line:493:26> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab041380 <line:490:5, col:102> 'int'
|       | `-BinaryOperator 0x55d3ab041360 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab0411b0 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x55d3ab041098 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x55d3ab040f80 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x55d3ab040f60 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x55d3ab040f30 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x55d3ab040ef0 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab040c50 'left' 'int64_t':'long'
|       |   | | |   `-ImplicitCastExpr 0x55d3ab040f48 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |     `-IntegerLiteral 0x55d3ab040f10 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x55d3ab041078 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x55d3ab041058 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x55d3ab041018 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x55d3ab040ff0 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x55d3ab040fd8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x55d3ab040fa0 <col:27> 'int' lvalue ParmVar 0x55d3ab040ce0 'right' 'int'
|       |   | |     `-IntegerLiteral 0x55d3ab041038 <col:36> 'int' 0
|       |   | `-ParenExpr 0x55d3ab041190 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x55d3ab041170 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab041130 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab041108 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab0410f0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab0410b8 <col:49> 'int' lvalue ParmVar 0x55d3ab040ce0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab041150 <col:59> 'int' 32
|       |   `-ParenExpr 0x55d3ab041340 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x55d3ab041320 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab041308 <col:67> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab0411d0 <col:67> 'int64_t':'long' lvalue ParmVar 0x55d3ab040c50 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x55d3ab0412e8 <col:74, col:100> 'long'
|       |         `-BinaryOperator 0x55d3ab0412c8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:490:99> 'long' '>>'
|       |           |-ParenExpr 0x55d3ab041210 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x55d3ab0411f0 <<scratch space>:117:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x55d3ab0412a8 </usr/include/safe_math.h:490:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x55d3ab041280 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab041268 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab041230 <col:94> 'int' lvalue ParmVar 0x55d3ab040ce0 'right' 'int'
|       |-ImplicitCastExpr 0x55d3ab041510 <line:491:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab0413e0 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab0413c0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab0413a0 </usr/include/safe_math.h:491:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab040c50 'left' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab0414f0 <line:493:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab0414d0 <col:6, col:25> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x55d3ab0414b8 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab041400 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab040c50 'left' 'int64_t':'long'
|           `-ParenExpr 0x55d3ab041498 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab041470 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab041458 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab041420 <col:20> 'int' lvalue ParmVar 0x55d3ab040ce0 'right' 'int'
|-FunctionDecl 0x55d3ab041768 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:506:1> <scratch space>:118:1 safe_lshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab041590 </usr/include/safe_math.h:497:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab041610 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab041d98 <line:498:1, line:506:1>
|   `-ReturnStmt 0x55d3ab041d88 <line:500:3, line:505:35>
|     `-ConditionalOperator 0x55d3ab041d58 <line:502:5, line:505:35> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab041bb0 <line:502:5, col:98> 'int'
|       | `-BinaryOperator 0x55d3ab041b90 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab0419e0 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab0418b0 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55d3ab041890 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55d3ab041860 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55d3ab041820 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab041590 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x55d3ab041878 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x55d3ab041840 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55d3ab0419c0 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x55d3ab0419a0 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab041948 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x55d3ab041920 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab041908 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab0418d0 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab041610 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x55d3ab041988 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x55d3ab041968 <col:46> 'int' 32
|       |   `-ParenExpr 0x55d3ab041b70 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x55d3ab041b50 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab041b38 <col:54> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab041a00 <col:54> 'int64_t':'long' lvalue ParmVar 0x55d3ab041590 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x55d3ab041b18 <col:61, col:96> 'long'
|       |         `-BinaryOperator 0x55d3ab041af8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:502:95> 'long' '>>'
|       |           |-ParenExpr 0x55d3ab041a40 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x55d3ab041a20 <<scratch space>:119:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x55d3ab041ad8 </usr/include/safe_math.h:502:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x55d3ab041ab0 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab041a98 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab041a60 <col:90> 'unsigned int' lvalue ParmVar 0x55d3ab041610 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55d3ab041d40 <line:503:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab041c10 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab041bf0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab041bd0 </usr/include/safe_math.h:503:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab041590 'left' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab041d20 <line:505:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab041d00 <col:6, col:34> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x55d3ab041ce8 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab041c30 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab041590 'left' 'int64_t':'long'
|           `-ParenExpr 0x55d3ab041cc8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab041ca0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab041c88 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab041c50 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab041610 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab041ee0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:518:1> <scratch space>:120:1 safe_rshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x55d3ab041dc0 </usr/include/safe_math.h:509:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab041e40 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab042460 <line:510:1, line:518:1>
|   `-ReturnStmt 0x55d3ab042450 <line:512:3, line:517:26>
|     `-ConditionalOperator 0x55d3ab042420 <line:514:5, line:517:26> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab042278 <line:514:5, col:62> 'int'
|       | `-BinaryOperator 0x55d3ab042258 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab042140 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab042028 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55d3ab042008 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55d3ab041fd8 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55d3ab041f98 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab041dc0 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x55d3ab041ff0 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x55d3ab041fb8 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55d3ab042120 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x55d3ab042100 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x55d3ab0420c0 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab042098 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab042080 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab042048 <col:27> 'int' lvalue ParmVar 0x55d3ab041e40 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab0420e0 <col:36> 'int' 0
|       |   `-ParenExpr 0x55d3ab042238 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x55d3ab042218 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x55d3ab0421d8 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x55d3ab0421b0 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab042198 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab042160 <col:49> 'int' lvalue ParmVar 0x55d3ab041e40 'right' 'int'
|       |       `-IntegerLiteral 0x55d3ab0421f8 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab042408 <line:515:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab0422d8 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab0422b8 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab042298 </usr/include/safe_math.h:515:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab041dc0 'left' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab0423e8 <line:517:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab0423c8 <col:6, col:25> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x55d3ab0423b0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab0422f8 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab041dc0 'left' 'int64_t':'long'
|           `-ParenExpr 0x55d3ab042390 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab042368 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab042350 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab042318 <col:20> 'int' lvalue ParmVar 0x55d3ab041e40 'right' 'int'
|-FunctionDecl 0x55d3ab0425a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:530:1> <scratch space>:121:1 safe_rshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab042488 </usr/include/safe_math.h:521:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55d3ab042508 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab042a28 <line:522:1, line:530:1>
|   `-ReturnStmt 0x55d3ab042a18 <line:524:3, line:529:35>
|     `-ConditionalOperator 0x55d3ab0429e8 <line:526:5, line:529:35> 'int64_t':'long'
|       |-ParenExpr 0x55d3ab042840 <line:526:5, col:49> 'int'
|       | `-BinaryOperator 0x55d3ab042820 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x55d3ab0426f0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55d3ab0426d0 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x55d3ab0426a0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab042660 <col:7> 'int64_t':'long' lvalue ParmVar 0x55d3ab042488 'left' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55d3ab0426b8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55d3ab042680 <col:14> 'int' 0
|       |   `-ParenExpr 0x55d3ab042800 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x55d3ab0427e0 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x55d3ab042788 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x55d3ab042760 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab042748 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab042710 <col:36> 'unsigned int' lvalue ParmVar 0x55d3ab042508 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x55d3ab0427c8 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x55d3ab0427a8 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab0429d0 <line:527:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab0428a0 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55d3ab042880 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55d3ab042860 </usr/include/safe_math.h:527:16> 'int64_t':'long' lvalue ParmVar 0x55d3ab042488 'left' 'int64_t':'long'
|       `-ParenExpr 0x55d3ab0429b0 <line:529:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x55d3ab042990 <col:6, col:34> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x55d3ab042978 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab0428c0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55d3ab042488 'left' 'int64_t':'long'
|           `-ParenExpr 0x55d3ab042958 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab042930 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab042918 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab0428e0 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab042508 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab042c00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:543:1> <scratch space>:122:1 safe_unary_minus_func_uint8_t_u 'uint8_t (uint8_t)' static
| |-ParmVarDecl 0x55d3ab042ab0 </usr/include/safe_math.h:539:39, col:47> col:47 used ui 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab043d70 <line:540:1, line:543:1>
|   `-ReturnStmt 0x55d3ab043d60 <line:542:3, col:11>
|     `-ImplicitCastExpr 0x55d3ab043d48 <col:10, col:11> 'uint8_t':'unsigned char' <IntegralCast>
|       `-UnaryOperator 0x55d3ab043d30 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55d3ab043d18 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab043d00 <col:11> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab042cb0 <col:11> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab042ab0 'ui' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab043f68 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:550:1> <scratch space>:123:1 safe_add_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55d3ab043d98 </usr/include/safe_math.h:546:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab043e10 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab044108 <line:547:1, line:550:1>
|   `-ReturnStmt 0x55d3ab0440f8 <line:549:3, col:16>
|     `-ImplicitCastExpr 0x55d3ab0440e0 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55d3ab0440c0 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x55d3ab044078 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab044060 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab044020 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab043d98 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x55d3ab0440a8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab044090 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab044040 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab043e10 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab044248 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:557:1> <scratch space>:124:1 safe_sub_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55d3ab044130 </usr/include/safe_math.h:553:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab0441a8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab0443e8 <line:554:1, line:557:1>
|   `-ReturnStmt 0x55d3ab0443d8 <line:556:3, col:16>
|     `-ImplicitCastExpr 0x55d3ab0443c0 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55d3ab0443a0 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x55d3ab044358 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab044340 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab044300 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044130 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x55d3ab044388 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab044370 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab044320 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab0441a8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab044528 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:564:1> <scratch space>:125:1 safe_mul_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55d3ab044410 </usr/include/safe_math.h:560:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab044488 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab044758 <line:561:1, line:564:1>
|   `-ReturnStmt 0x55d3ab044748 <line:563:3, col:50>
|     `-ImplicitCastExpr 0x55d3ab044730 <col:10, col:50> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55d3ab044710 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x55d3ab044658 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x55d3ab044630 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55d3ab044618 <col:25> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55d3ab0445e0 <col:25> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044410 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab0446f0 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x55d3ab0446c8 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab0446b0 <col:47> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55d3ab044678 <col:47> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044488 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab044898 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:576:1> <scratch space>:126:1 safe_mod_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55d3ab044780 </usr/include/safe_math.h:567:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab0447f8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab044bc8 <line:568:1, line:576:1>
|   `-ReturnStmt 0x55d3ab044bb8 <line:570:3, line:575:15>
|     `-ImplicitCastExpr 0x55d3ab044ba0 <line:572:5, line:575:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab044b70 <line:572:5, line:575:15> 'int'
|         |-ParenExpr 0x55d3ab0449e0 <line:572:5, col:14> 'int'
|         | `-BinaryOperator 0x55d3ab0449c0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55d3ab0449a8 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55d3ab044990 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55d3ab044950 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab0447f8 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x55d3ab044970 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55d3ab044b58 <line:573:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab044b40 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab044a40 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab044a20 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab044a00 </usr/include/safe_math.h:573:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044780 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab044b20 <line:575:5, col:15> 'int'
|           `-BinaryOperator 0x55d3ab044b00 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55d3ab044ab8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab044aa0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab044a60 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044780 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55d3ab044ae8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3ab044ad0 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3ab044a80 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab0447f8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab044d08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:588:1> <scratch space>:127:1 safe_div_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55d3ab044bf0 </usr/include/safe_math.h:579:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab044c68 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab045038 <line:580:1, line:588:1>
|   `-ReturnStmt 0x55d3ab045028 <line:582:3, line:587:15>
|     `-ImplicitCastExpr 0x55d3ab045010 <line:584:5, line:587:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab044fe0 <line:584:5, line:587:15> 'int'
|         |-ParenExpr 0x55d3ab044e50 <line:584:5, col:14> 'int'
|         | `-BinaryOperator 0x55d3ab044e30 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55d3ab044e18 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55d3ab044e00 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55d3ab044dc0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044c68 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x55d3ab044de0 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55d3ab044fc8 <line:585:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab044fb0 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab044eb0 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab044e90 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab044e70 </usr/include/safe_math.h:585:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044bf0 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab044f90 <line:587:5, col:15> 'int'
|           `-BinaryOperator 0x55d3ab044f70 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55d3ab044f28 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab044f10 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab044ed0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044bf0 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55d3ab044f58 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3ab044f40 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3ab044ef0 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab044c68 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55d3ab045238 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:600:1> <scratch space>:128:1 safe_lshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x55d3ab045060 </usr/include/safe_math.h:591:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab0450e0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab0458f8 <line:592:1, line:600:1>
|   `-ReturnStmt 0x55d3ab0458e8 <line:594:3, line:599:26>
|     `-ImplicitCastExpr 0x55d3ab0458d0 <line:596:5, line:599:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab0458a0 <line:596:5, line:599:26> 'int'
|         |-ParenExpr 0x55d3ab0456c8 <line:596:5, col:88> 'int'
|         | `-BinaryOperator 0x55d3ab0456a8 <col:6, col:87> 'int' '||'
|         |   |-BinaryOperator 0x55d3ab0454e0 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x55d3ab0453c8 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x55d3ab0453a8 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x55d3ab045368 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x55d3ab045340 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x55d3ab045328 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x55d3ab0452f0 <col:13> 'int' lvalue ParmVar 0x55d3ab0450e0 'right' 'int'
|         |   | |   `-IntegerLiteral 0x55d3ab045388 <col:22> 'int' 0
|         |   | `-ParenExpr 0x55d3ab0454c0 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x55d3ab0454a0 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x55d3ab045460 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3ab045438 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3ab045420 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3ab0453e8 <col:35> 'int' lvalue ParmVar 0x55d3ab0450e0 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3ab045480 <col:45> 'int' 32
|         |   `-ParenExpr 0x55d3ab045688 <col:52, col:87> 'int'
|         |     `-BinaryOperator 0x55d3ab045668 <col:53, col:86> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab045650 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab045638 <col:53> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3ab045500 <col:53> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045060 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x55d3ab045618 <col:60, col:86> 'int'
|         |         `-BinaryOperator 0x55d3ab0455f8 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:596:85> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab045540 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x55d3ab045520 <col:22> 'int' 255
|         |           `-ParenExpr 0x55d3ab0455d8 </usr/include/safe_math.h:596:74, col:85> 'int'
|         |             `-CStyleCastExpr 0x55d3ab0455b0 <col:75, col:80> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab045598 <col:80> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab045560 <col:80> 'int' lvalue ParmVar 0x55d3ab0450e0 'right' 'int'
|         |-ImplicitCastExpr 0x55d3ab045888 <line:597:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab045870 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab045728 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab045708 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab0456e8 </usr/include/safe_math.h:597:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045060 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab045850 <line:599:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab045830 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab045818 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab045800 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab045748 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045060 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55d3ab0457e0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab0457b8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab0457a0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab045768 <col:20> 'int' lvalue ParmVar 0x55d3ab0450e0 'right' 'int'
|-FunctionDecl 0x55d3ab045af8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:612:1> <scratch space>:129:1 safe_lshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab045920 </usr/include/safe_math.h:603:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab0459a0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab0460c8 <line:604:1, line:612:1>
|   `-ReturnStmt 0x55d3ab0460b8 <line:606:3, line:611:35>
|     `-ImplicitCastExpr 0x55d3ab0460a0 <line:608:5, line:611:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab046070 <line:608:5, line:611:35> 'int'
|         |-ParenExpr 0x55d3ab045e98 <line:608:5, col:84> 'int'
|         | `-BinaryOperator 0x55d3ab045e78 <col:6, col:83> 'int' '||'
|         |   |-ParenExpr 0x55d3ab045ca0 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x55d3ab045c80 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x55d3ab045c28 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x55d3ab045c00 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55d3ab045be8 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55d3ab045bb0 <col:22> 'unsigned int' lvalue ParmVar 0x55d3ab0459a0 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x55d3ab045c68 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x55d3ab045c48 <col:32> 'int' 32
|         |   `-ParenExpr 0x55d3ab045e58 <col:39, col:83> 'int'
|         |     `-BinaryOperator 0x55d3ab045e38 <col:40, col:82> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3ab045e20 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3ab045e08 <col:40> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3ab045cc0 <col:40> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045920 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x55d3ab045de8 <col:47, col:82> 'int'
|         |         `-BinaryOperator 0x55d3ab045dc8 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:608:81> 'int' '>>'
|         |           |-ParenExpr 0x55d3ab045d10 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x55d3ab045ce0 <col:22> 'int' 255
|         |           `-ParenExpr 0x55d3ab045da8 </usr/include/safe_math.h:608:61, col:81> 'unsigned int'
|         |             `-CStyleCastExpr 0x55d3ab045d80 <col:62, col:76> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3ab045d68 <col:76> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3ab045d30 <col:76> 'unsigned int' lvalue ParmVar 0x55d3ab0459a0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55d3ab046058 <line:609:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab046040 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab045ef8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab045ed8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab045eb8 </usr/include/safe_math.h:609:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045920 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab046020 <line:611:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab046000 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3ab045fe8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab045fd0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab045f18 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab045920 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55d3ab045fb0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab045f88 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab045f70 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab045f38 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab0459a0 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab046210 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:624:1> <scratch space>:130:1 safe_rshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x55d3ab0460f0 </usr/include/safe_math.h:615:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab046170 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55d3ab046708 <line:616:1, line:624:1>
|   `-ReturnStmt 0x55d3ab0466f8 <line:618:3, line:623:26>
|     `-ImplicitCastExpr 0x55d3ab0466e0 <line:620:5, line:623:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab0466b0 <line:620:5, line:623:26> 'int'
|         |-ParenExpr 0x55d3ab0464d8 <line:620:5, col:48> 'int'
|         | `-BinaryOperator 0x55d3ab0464b8 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x55d3ab0463a0 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x55d3ab046380 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x55d3ab046340 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x55d3ab046318 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55d3ab046300 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55d3ab0462c8 <col:13> 'int' lvalue ParmVar 0x55d3ab046170 'right' 'int'
|         |   |   `-IntegerLiteral 0x55d3ab046360 <col:22> 'int' 0
|         |   `-ParenExpr 0x55d3ab046498 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x55d3ab046478 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x55d3ab046438 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x55d3ab046410 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3ab0463f8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3ab0463c0 <col:35> 'int' lvalue ParmVar 0x55d3ab046170 'right' 'int'
|         |       `-IntegerLiteral 0x55d3ab046458 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab046698 <line:621:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab046680 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab046538 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab046518 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab0464f8 </usr/include/safe_math.h:621:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab0460f0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab046660 <line:623:5, col:26> 'int'
|           `-BinaryOperator 0x55d3ab046640 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab046628 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab046610 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab046558 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab0460f0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55d3ab0465f0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3ab0465c8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab0465b0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab046578 <col:20> 'int' lvalue ParmVar 0x55d3ab046170 'right' 'int'
|-FunctionDecl 0x55d3ab046850 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:636:1> <scratch space>:131:1 safe_rshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab046730 </usr/include/safe_math.h:627:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55d3ab0467b0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab046c28 <line:628:1, line:636:1>
|   `-ReturnStmt 0x55d3ab046c18 <line:630:3, line:635:35>
|     `-ImplicitCastExpr 0x55d3ab046c00 <line:632:5, line:635:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab046bd0 <line:632:5, line:635:35> 'int'
|         |-ParenExpr 0x55d3ab0469f8 <line:632:5, col:33> 'int'
|         | `-BinaryOperator 0x55d3ab0469d8 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x55d3ab046980 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x55d3ab046958 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x55d3ab046940 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x55d3ab046908 <col:21> 'unsigned int' lvalue ParmVar 0x55d3ab0467b0 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x55d3ab0469c0 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x55d3ab0469a0 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab046bb8 <line:633:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab046ba0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab046a58 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55d3ab046a38 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55d3ab046a18 </usr/include/safe_math.h:633:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab046730 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55d3ab046b80 <line:635:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab046b60 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab046b48 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab046b30 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab046a78 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab046730 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55d3ab046b10 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3ab046ae8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3ab046ad0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3ab046a98 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab0467b0 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab046e00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:645:1> <scratch space>:132:1 safe_unary_minus_func_uint16_t_u 'uint16_t (uint16_t)' static
| |-ParmVarDecl 0x55d3ab046cb0 </usr/include/safe_math.h:641:40, col:49> col:49 used ui 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3ab046f40 <line:642:1, line:645:1>
|   `-ReturnStmt 0x55d3ab046f30 <line:644:3, col:11>
|     `-ImplicitCastExpr 0x55d3ab046f18 <col:10, col:11> 'uint16_t':'unsigned short' <IntegralCast>
|       `-UnaryOperator 0x55d3ab046f00 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55d3ab046ee8 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab046ed0 <col:11> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab046eb0 <col:11> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab046cb0 'ui' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3ab047138 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:652:1> <scratch space>:133:1 safe_add_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55d3ab046f68 </usr/include/safe_math.h:648:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3ab046fe0 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3ab0472d8 <line:649:1, line:652:1>
|   `-ReturnStmt 0x55d3ab0472c8 <line:651:3, col:16>
|     `-ImplicitCastExpr 0x55d3ab0472b0 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55d3ab047290 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x55d3ab047248 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab047230 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab0471f0 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab046f68 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x55d3ab047278 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab047260 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab047210 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab046fe0 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3ab047418 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:659:1> <scratch space>:134:1 safe_sub_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55d3ab047300 </usr/include/safe_math.h:655:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3ab047378 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3ab0475b8 <line:656:1, line:659:1>
|   `-ReturnStmt 0x55d3ab0475a8 <line:658:3, col:16>
|     `-ImplicitCastExpr 0x55d3ab047590 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55d3ab047570 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x55d3ab047528 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab047510 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab0474d0 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab047300 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x55d3ab047558 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55d3ab047540 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0474f0 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab047378 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3ab0476f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:666:1> <scratch space>:135:1 safe_mul_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55d3ab0475e0 </usr/include/safe_math.h:662:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3ab047658 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3ab047928 <line:663:1, line:666:1>
|   `-ReturnStmt 0x55d3ab047918 <line:665:3, col:50>
|     `-ImplicitCastExpr 0x55d3ab047900 <col:10, col:50> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55d3ab0478e0 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x55d3ab047828 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x55d3ab047800 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55d3ab0477e8 <col:25> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55d3ab0477b0 <col:25> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab0475e0 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3ab0478c0 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x55d3ab047898 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab047880 <col:47> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55d3ab047848 <col:47> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab047658 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3ab047a68 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:678:1> <scratch space>:136:1 safe_mod_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55d3ab047950 </usr/include/safe_math.h:669:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3ab0479c8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3aafaf538 <line:670:1, line:678:1>
|   `-ReturnStmt 0x55d3aafaf528 <line:672:3, line:677:15>
|     `-ImplicitCastExpr 0x55d3aafaf510 <line:674:5, line:677:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aafaf4e0 <line:674:5, line:677:15> 'int'
|         |-ParenExpr 0x55d3ab047bb0 <line:674:5, col:14> 'int'
|         | `-BinaryOperator 0x55d3ab047b90 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55d3ab047b78 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55d3ab047b60 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55d3ab047b20 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab0479c8 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x55d3ab047b40 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55d3aafaf4c8 <line:675:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aafaf4b0 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3ab047c10 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3ab047bf0 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3ab047bd0 </usr/include/safe_math.h:675:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab047950 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3ab047cf0 <line:677:5, col:15> 'int'
|           `-BinaryOperator 0x55d3ab047cd0 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55d3ab047c88 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3ab047c70 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3ab047c30 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab047950 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x55d3ab047cb8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3ab047ca0 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3ab047c50 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3ab0479c8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3aafaf678 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:690:1> <scratch space>:137:1 safe_div_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55d3aafaf560 </usr/include/safe_math.h:681:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3aafaf5d8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55d3aafaf9a8 <line:682:1, line:690:1>
|   `-ReturnStmt 0x55d3aafaf998 <line:684:3, line:689:15>
|     `-ImplicitCastExpr 0x55d3aafaf980 <line:686:5, line:689:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aafaf950 <line:686:5, line:689:15> 'int'
|         |-ParenExpr 0x55d3aafaf7c0 <line:686:5, col:14> 'int'
|         | `-BinaryOperator 0x55d3aafaf7a0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55d3aafaf788 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55d3aafaf770 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55d3aafaf730 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf5d8 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x55d3aafaf750 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55d3aafaf938 <line:687:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aafaf920 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aafaf820 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3aafaf800 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3aafaf7e0 </usr/include/safe_math.h:687:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf560 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3aafaf900 <line:689:5, col:15> 'int'
|           `-BinaryOperator 0x55d3aafaf8e0 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55d3aafaf898 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aafaf880 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aafaf840 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf560 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x55d3aafaf8c8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55d3aafaf8b0 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x55d3aafaf860 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf5d8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55d3aafafba8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:702:1> <scratch space>:138:1 safe_lshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x55d3aafaf9d0 </usr/include/safe_math.h:693:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3aafafa50 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3aafb0268 <line:694:1, line:702:1>
|   `-ReturnStmt 0x55d3aafb0258 <line:696:3, line:701:26>
|     `-ImplicitCastExpr 0x55d3aafb0240 <line:698:5, line:701:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aafb0210 <line:698:5, line:701:26> 'int'
|         |-ParenExpr 0x55d3aafb0038 <line:698:5, col:89> 'int'
|         | `-BinaryOperator 0x55d3aafb0018 <col:6, col:88> 'int' '||'
|         |   |-BinaryOperator 0x55d3aafafe50 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x55d3aafafd38 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x55d3aafafd18 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x55d3aafafcd8 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x55d3aafafcb0 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x55d3aafafc98 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x55d3aafafc60 <col:13> 'int' lvalue ParmVar 0x55d3aafafa50 'right' 'int'
|         |   | |   `-IntegerLiteral 0x55d3aafafcf8 <col:22> 'int' 0
|         |   | `-ParenExpr 0x55d3aafafe30 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x55d3aafafe10 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x55d3aafafdd0 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x55d3aafafda8 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55d3aafafd90 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55d3aafafd58 <col:35> 'int' lvalue ParmVar 0x55d3aafafa50 'right' 'int'
|         |   |     `-IntegerLiteral 0x55d3aafafdf0 <col:45> 'int' 32
|         |   `-ParenExpr 0x55d3aafafff8 <col:52, col:88> 'int'
|         |     `-BinaryOperator 0x55d3aafaffd8 <col:53, col:87> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3aafaffc0 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3aafaffa8 <col:53> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3aafafe70 <col:53> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf9d0 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x55d3aafaff88 <col:60, col:87> 'int'
|         |         `-BinaryOperator 0x55d3aafaff68 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:698:86> 'int' '>>'
|         |           |-ParenExpr 0x55d3aafafeb0 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x55d3aafafe90 <col:23> 'int' 65535
|         |           `-ParenExpr 0x55d3aafaff48 </usr/include/safe_math.h:698:75, col:86> 'int'
|         |             `-CStyleCastExpr 0x55d3aafaff20 <col:76, col:81> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3aafaff08 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3aafafed0 <col:81> 'int' lvalue ParmVar 0x55d3aafafa50 'right' 'int'
|         |-ImplicitCastExpr 0x55d3aafb01f8 <line:699:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aafb01e0 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aafb0098 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3aafb0078 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3aafb0058 </usr/include/safe_math.h:699:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf9d0 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3aafb01c0 <line:701:5, col:26> 'int'
|           `-BinaryOperator 0x55d3aafb01a0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3aafb0188 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aafb0170 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aafb00b8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafaf9d0 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55d3aafb0150 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3aafb0128 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3aafb0110 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3aafb00d8 <col:20> 'int' lvalue ParmVar 0x55d3aafafa50 'right' 'int'
|-FunctionDecl 0x55d3aafb0468 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:714:1> <scratch space>:139:1 safe_lshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x55d3aafb0290 </usr/include/safe_math.h:705:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3aafb0310 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3aafb0a28 <line:706:1, line:714:1>
|   `-ReturnStmt 0x55d3aafb0a18 <line:708:3, line:713:35>
|     `-ImplicitCastExpr 0x55d3aafb0a00 <line:710:5, line:713:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aafb09d0 <line:710:5, line:713:35> 'int'
|         |-ParenExpr 0x55d3aafb07f8 <line:710:5, col:85> 'int'
|         | `-BinaryOperator 0x55d3aafb07d8 <col:6, col:84> 'int' '||'
|         |   |-ParenExpr 0x55d3aafb0610 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x55d3aafb05f0 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x55d3aafb0598 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x55d3aafb0570 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55d3aafb0558 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55d3aafb0520 <col:22> 'unsigned int' lvalue ParmVar 0x55d3aafb0310 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x55d3aafb05d8 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x55d3aafb05b8 <col:32> 'int' 32
|         |   `-ParenExpr 0x55d3aafb07b8 <col:39, col:84> 'int'
|         |     `-BinaryOperator 0x55d3aafb0798 <col:40, col:83> 'int' '>'
|         |       |-ImplicitCastExpr 0x55d3aafb0780 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55d3aafb0768 <col:40> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55d3aafb0630 <col:40> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb0290 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x55d3aafb0748 <col:47, col:83> 'int'
|         |         `-BinaryOperator 0x55d3aafb0728 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:710:82> 'int' '>>'
|         |           |-ParenExpr 0x55d3aafb0670 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x55d3aafb0650 <col:23> 'int' 65535
|         |           `-ParenExpr 0x55d3aafb0708 </usr/include/safe_math.h:710:62, col:82> 'unsigned int'
|         |             `-CStyleCastExpr 0x55d3aafb06e0 <col:63, col:77> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55d3aafb06c8 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55d3aafb0690 <col:77> 'unsigned int' lvalue ParmVar 0x55d3aafb0310 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55d3aafb09b8 <line:711:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aafb09a0 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aafb0858 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3aafb0838 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3aafb0818 </usr/include/safe_math.h:711:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb0290 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3aafb0980 <line:713:5, col:35> 'int'
|           `-BinaryOperator 0x55d3aafb0960 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55d3aafb0948 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aafb0930 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aafb0878 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb0290 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55d3aafb0910 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3aafb08e8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3aafb08d0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3aafb0898 <col:29> 'unsigned int' lvalue ParmVar 0x55d3aafb0310 'right' 'unsigned int'
|-FunctionDecl 0x55d3aafb0b70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:726:1> <scratch space>:140:1 safe_rshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x55d3aafb0a50 </usr/include/safe_math.h:717:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3aafb0ad0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3aafb1068 <line:718:1, line:726:1>
|   `-ReturnStmt 0x55d3aafb1058 <line:720:3, line:725:26>
|     `-ImplicitCastExpr 0x55d3aafb1040 <line:722:5, line:725:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3aafb1010 <line:722:5, line:725:26> 'int'
|         |-ParenExpr 0x55d3aafb0e38 <line:722:5, col:48> 'int'
|         | `-BinaryOperator 0x55d3aafb0e18 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x55d3aafb0d00 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x55d3aafb0ce0 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x55d3aafb0ca0 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x55d3aafb0c78 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55d3aafb0c60 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55d3aafb0c28 <col:13> 'int' lvalue ParmVar 0x55d3aafb0ad0 'right' 'int'
|         |   |   `-IntegerLiteral 0x55d3aafb0cc0 <col:22> 'int' 0
|         |   `-ParenExpr 0x55d3aafb0df8 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x55d3aafb0dd8 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x55d3aafb0d98 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x55d3aafb0d70 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55d3aafb0d58 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55d3aafb0d20 <col:35> 'int' lvalue ParmVar 0x55d3aafb0ad0 'right' 'int'
|         |       `-IntegerLiteral 0x55d3aafb0db8 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x55d3aafb0ff8 <line:723:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3aafb0fe0 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aafb0e98 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3aafb0e78 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3aafb0e58 </usr/include/safe_math.h:723:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb0a50 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3aafb0fc0 <line:725:5, col:26> 'int'
|           `-BinaryOperator 0x55d3aafb0fa0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3aafb0f88 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aafb0f70 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aafb0eb8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb0a50 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55d3aafb0f50 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55d3aafb0f28 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3aafb0f10 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3aafb0ed8 <col:20> 'int' lvalue ParmVar 0x55d3aafb0ad0 'right' 'int'
|-FunctionDecl 0x55d3aafb11b0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:738:1> <scratch space>:141:1 safe_rshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x55d3aafb1090 </usr/include/safe_math.h:729:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55d3aafb1110 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab04de10 <line:730:1, line:738:1>
|   `-ReturnStmt 0x55d3ab04de00 <line:732:3, line:737:35>
|     `-ImplicitCastExpr 0x55d3ab04dde8 <line:734:5, line:737:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55d3ab04ddb8 <line:734:5, line:737:35> 'int'
|         |-ParenExpr 0x55d3aafb1358 <line:734:5, col:33> 'int'
|         | `-BinaryOperator 0x55d3aafb1338 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x55d3aafb12e0 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x55d3aafb12b8 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x55d3aafb12a0 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x55d3aafb1268 <col:21> 'unsigned int' lvalue ParmVar 0x55d3aafb1110 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x55d3aafb1320 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x55d3aafb1300 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x55d3ab04dda0 <line:735:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55d3ab04dd88 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55d3aafb13b8 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55d3aafb1398 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55d3aafb1378 </usr/include/safe_math.h:735:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb1090 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55d3ab04dd68 <line:737:5, col:35> 'int'
|           `-BinaryOperator 0x55d3ab04dd48 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55d3ab04dd30 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55d3aafb1490 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55d3aafb13d8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55d3aafb1090 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55d3aafb1470 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55d3aafb1448 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55d3aafb1430 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55d3aafb13f8 <col:29> 'unsigned int' lvalue ParmVar 0x55d3aafb1110 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab04df80 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:747:1> <scratch space>:142:1 safe_unary_minus_func_uint32_t_u 'uint32_t (uint32_t)' static
| |-ParmVarDecl 0x55d3ab04de38 </usr/include/safe_math.h:743:40, col:49> col:49 used ui 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04e090 <line:744:1, line:747:1>
|   `-ReturnStmt 0x55d3ab04e080 <line:746:3, col:11>
|     `-UnaryOperator 0x55d3ab04e068 <col:10, col:11> 'uint32_t':'unsigned int' prefix '-'
|       `-ImplicitCastExpr 0x55d3ab04e050 <col:11> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab04e030 <col:11> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04de38 'ui' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04e288 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:754:1> <scratch space>:143:1 safe_add_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55d3ab04e0b8 </usr/include/safe_math.h:750:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04e130 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04e3e0 <line:751:1, line:754:1>
|   `-ReturnStmt 0x55d3ab04e3d0 <line:753:3, col:16>
|     `-BinaryOperator 0x55d3ab04e3b0 <col:10, col:16> 'uint32_t':'unsigned int' '+'
|       |-ImplicitCastExpr 0x55d3ab04e380 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x55d3ab04e340 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e0b8 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x55d3ab04e398 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab04e360 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e130 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04e520 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:761:1> <scratch space>:144:1 safe_sub_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55d3ab04e408 </usr/include/safe_math.h:757:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04e480 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04e678 <line:758:1, line:761:1>
|   `-ReturnStmt 0x55d3ab04e668 <line:760:3, col:16>
|     `-BinaryOperator 0x55d3ab04e648 <col:10, col:16> 'uint32_t':'unsigned int' '-'
|       |-ImplicitCastExpr 0x55d3ab04e618 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x55d3ab04e5d8 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e408 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x55d3ab04e630 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab04e5f8 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e480 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04e7b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:768:1> <scratch space>:145:1 safe_mul_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55d3ab04e6a0 </usr/include/safe_math.h:764:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04e718 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04e9d0 <line:765:1, line:768:1>
|   `-ReturnStmt 0x55d3ab04e9c0 <line:767:3, col:50>
|     `-BinaryOperator 0x55d3ab04e9a0 <col:10, col:50> 'unsigned int' '*'
|       |-ParenExpr 0x55d3ab04e8e8 <col:10, col:28> 'unsigned int'
|       | `-CStyleCastExpr 0x55d3ab04e8c0 <col:11, col:25> 'unsigned int' <NoOp>
|       |   `-ImplicitCastExpr 0x55d3ab04e8a8 <col:25> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |     `-DeclRefExpr 0x55d3ab04e870 <col:25> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e6a0 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab04e980 <col:32, col:50> 'unsigned int'
|         `-CStyleCastExpr 0x55d3ab04e958 <col:33, col:47> 'unsigned int' <NoOp>
|           `-ImplicitCastExpr 0x55d3ab04e940 <col:47> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|             `-DeclRefExpr 0x55d3ab04e908 <col:47> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e718 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04eb10 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:780:1> <scratch space>:146:1 safe_mod_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55d3ab04e9f8 </usr/include/safe_math.h:771:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04ea70 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04ede0 <line:772:1, line:780:1>
|   `-ReturnStmt 0x55d3ab04edd0 <line:774:3, line:779:15>
|     `-ConditionalOperator 0x55d3ab04eda0 <line:776:5, line:779:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab04ec58 <line:776:5, col:14> 'int'
|       | `-BinaryOperator 0x55d3ab04ec38 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab04ec08 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab04ebc8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ea70 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x55d3ab04ec20 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab04ebe8 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab04ed88 <line:777:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab04ecb8 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab04ec98 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab04ec78 </usr/include/safe_math.h:777:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e9f8 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab04ed68 <line:779:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab04ed48 <col:6, col:12> 'uint32_t':'unsigned int' '%'
|           |-ImplicitCastExpr 0x55d3ab04ed18 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab04ecd8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04e9f8 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x55d3ab04ed30 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab04ecf8 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ea70 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04ef20 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:792:1> <scratch space>:147:1 safe_div_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55d3ab04ee08 </usr/include/safe_math.h:783:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04ee80 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55d3ab04f1f0 <line:784:1, line:792:1>
|   `-ReturnStmt 0x55d3ab04f1e0 <line:786:3, line:791:15>
|     `-ConditionalOperator 0x55d3ab04f1b0 <line:788:5, line:791:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab04f068 <line:788:5, col:14> 'int'
|       | `-BinaryOperator 0x55d3ab04f048 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab04f018 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab04efd8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ee80 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x55d3ab04f030 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab04eff8 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab04f198 <line:789:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab04f0c8 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab04f0a8 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab04f088 </usr/include/safe_math.h:789:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ee08 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab04f178 <line:791:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab04f158 <col:6, col:12> 'uint32_t':'unsigned int' '/'
|           |-ImplicitCastExpr 0x55d3ab04f128 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab04f0e8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ee08 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x55d3ab04f140 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab04f108 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04ee80 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab04f3e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:804:1> <scratch space>:148:1 safe_lshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x55d3ab04f218 </usr/include/safe_math.h:795:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04f298 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3ab04fa48 <line:796:1, line:804:1>
|   `-ReturnStmt 0x55d3ab04fa38 <line:798:3, line:803:26>
|     `-ConditionalOperator 0x55d3ab04fa08 <line:800:5, line:803:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab04f860 <line:800:5, col:89> 'int'
|       | `-BinaryOperator 0x55d3ab04f840 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab04f690 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab04f578 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x55d3ab04f558 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x55d3ab04f518 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x55d3ab04f4f0 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x55d3ab04f4d8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x55d3ab04f4a0 <col:13> 'int' lvalue ParmVar 0x55d3ab04f298 'right' 'int'
|       |   | |   `-IntegerLiteral 0x55d3ab04f538 <col:22> 'int' 0
|       |   | `-ParenExpr 0x55d3ab04f670 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x55d3ab04f650 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab04f610 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab04f5e8 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab04f5d0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab04f598 <col:35> 'int' lvalue ParmVar 0x55d3ab04f298 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab04f630 <col:45> 'int' 32
|       |   `-ParenExpr 0x55d3ab04f820 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x55d3ab04f800 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab04f7e8 <col:53> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab04f6b0 <col:53> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04f218 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x55d3ab04f7c8 <col:60, col:87> 'unsigned int'
|       |         `-BinaryOperator 0x55d3ab04f7a8 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:800:86> 'unsigned int' '>>'
|       |           |-ParenExpr 0x55d3ab04f6f0 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x55d3ab04f6d0 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x55d3ab04f788 </usr/include/safe_math.h:800:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x55d3ab04f760 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab04f748 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab04f710 <col:81> 'int' lvalue ParmVar 0x55d3ab04f298 'right' 'int'
|       |-ImplicitCastExpr 0x55d3ab04f9f0 <line:801:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab04f8c0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab04f8a0 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab04f880 </usr/include/safe_math.h:801:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04f218 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab04f9d0 <line:803:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab04f9b0 <col:6, col:25> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x55d3ab04f998 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab04f8e0 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04f218 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55d3ab04f978 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab04f950 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab04f938 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab04f900 <col:20> 'int' lvalue ParmVar 0x55d3ab04f298 'right' 'int'
|-FunctionDecl 0x55d3ab04fc08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:816:1> <scratch space>:149:1 safe_lshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab04fa70 </usr/include/safe_math.h:807:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab04faf0 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab0511a8 <line:808:1, line:816:1>
|   `-ReturnStmt 0x55d3ab051198 <line:810:3, line:815:35>
|     `-ConditionalOperator 0x55d3ab051168 <line:812:5, line:815:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab050fc0 <line:812:5, col:85> 'int'
|       | `-BinaryOperator 0x55d3ab050fa0 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x55d3ab050df0 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x55d3ab050dd0 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x55d3ab050d78 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x55d3ab050d50 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55d3ab04fcf8 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55d3ab04fcc0 <col:22> 'unsigned int' lvalue ParmVar 0x55d3ab04faf0 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x55d3ab050db8 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55d3ab050d98 <col:32> 'int' 32
|       |   `-ParenExpr 0x55d3ab050f80 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x55d3ab050f60 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab050f48 <col:40> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab050e10 <col:40> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04fa70 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x55d3ab050f28 <col:47, col:83> 'unsigned int'
|       |         `-BinaryOperator 0x55d3ab050f08 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:812:82> 'unsigned int' '>>'
|       |           |-ParenExpr 0x55d3ab050e50 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x55d3ab050e30 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x55d3ab050ee8 </usr/include/safe_math.h:812:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x55d3ab050ec0 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab050ea8 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab050e70 <col:77> 'unsigned int' lvalue ParmVar 0x55d3ab04faf0 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55d3ab051150 <line:813:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab051020 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab051000 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab050fe0 </usr/include/safe_math.h:813:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04fa70 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab051130 <line:815:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab051110 <col:6, col:34> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x55d3ab0510f8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab051040 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab04fa70 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55d3ab0510d8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab0510b0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab051098 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab051060 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab04faf0 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab0512f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:828:1> <scratch space>:150:1 safe_rshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x55d3ab0511d0 </usr/include/safe_math.h:819:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab051250 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3ab0517a0 <line:820:1, line:828:1>
|   `-ReturnStmt 0x55d3ab051790 <line:822:3, line:827:26>
|     `-ConditionalOperator 0x55d3ab051760 <line:824:5, line:827:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab0515b8 <line:824:5, col:48> 'int'
|       | `-BinaryOperator 0x55d3ab051598 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x55d3ab051480 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55d3ab051460 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x55d3ab051420 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x55d3ab0513f8 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55d3ab0513e0 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55d3ab0513a8 <col:13> 'int' lvalue ParmVar 0x55d3ab051250 'right' 'int'
|       |   |   `-IntegerLiteral 0x55d3ab051440 <col:22> 'int' 0
|       |   `-ParenExpr 0x55d3ab051578 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x55d3ab051558 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x55d3ab051518 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x55d3ab0514f0 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab0514d8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab0514a0 <col:35> 'int' lvalue ParmVar 0x55d3ab051250 'right' 'int'
|       |       `-IntegerLiteral 0x55d3ab051538 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab051748 <line:825:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab051618 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab0515f8 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab0515d8 </usr/include/safe_math.h:825:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab0511d0 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab051728 <line:827:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab051708 <col:6, col:25> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x55d3ab0516f0 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab051638 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab0511d0 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55d3ab0516d0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab0516a8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab051690 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab051658 <col:20> 'int' lvalue ParmVar 0x55d3ab051250 'right' 'int'
|-FunctionDecl 0x55d3ab0518e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:840:1> <scratch space>:151:1 safe_rshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab0517c8 </usr/include/safe_math.h:831:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55d3ab051848 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab051c78 <line:832:1, line:840:1>
|   `-ReturnStmt 0x55d3ab051c68 <line:834:3, line:839:35>
|     `-ConditionalOperator 0x55d3ab051c38 <line:836:5, line:839:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55d3ab051a90 <line:836:5, col:33> 'int'
|       | `-BinaryOperator 0x55d3ab051a70 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x55d3ab051a18 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x55d3ab0519f0 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x55d3ab0519d8 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x55d3ab0519a0 <col:21> 'unsigned int' lvalue ParmVar 0x55d3ab051848 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x55d3ab051a58 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab051a38 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab051c20 <line:837:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab051af0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55d3ab051ad0 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55d3ab051ab0 </usr/include/safe_math.h:837:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab0517c8 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55d3ab051c00 <line:839:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55d3ab051be0 <col:6, col:34> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x55d3ab051bc8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab051b10 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55d3ab0517c8 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55d3ab051ba8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab051b80 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab051b68 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab051b30 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab051848 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab051e50 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:850:1> <scratch space>:152:1 safe_unary_minus_func_uint64_t_u 'uint64_t (uint64_t)' static
| |-ParmVarDecl 0x55d3ab051d00 </usr/include/safe_math.h:846:40, col:49> col:49 used ui 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab051f60 <line:847:1, line:850:1>
|   `-ReturnStmt 0x55d3ab051f50 <line:849:3, col:11>
|     `-UnaryOperator 0x55d3ab051f38 <col:10, col:11> 'uint64_t':'unsigned long' prefix '-'
|       `-ImplicitCastExpr 0x55d3ab051f20 <col:11> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab051f00 <col:11> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab051d00 'ui' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab052158 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:857:1> <scratch space>:153:1 safe_add_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55d3ab051f88 </usr/include/safe_math.h:853:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab052000 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab0522b0 <line:854:1, line:857:1>
|   `-ReturnStmt 0x55d3ab0522a0 <line:856:3, col:16>
|     `-BinaryOperator 0x55d3ab052280 <col:10, col:16> 'uint64_t':'unsigned long' '+'
|       |-ImplicitCastExpr 0x55d3ab052250 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x55d3ab052210 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab051f88 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x55d3ab052268 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab052230 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052000 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab0523f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:864:1> <scratch space>:154:1 safe_sub_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55d3ab0522d8 </usr/include/safe_math.h:860:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab052350 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab052548 <line:861:1, line:864:1>
|   `-ReturnStmt 0x55d3ab052538 <line:863:3, col:16>
|     `-BinaryOperator 0x55d3ab052518 <col:10, col:16> 'uint64_t':'unsigned long' '-'
|       |-ImplicitCastExpr 0x55d3ab0524e8 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x55d3ab0524a8 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0522d8 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x55d3ab052500 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55d3ab0524c8 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052350 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab052688 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:871:1> <scratch space>:155:1 safe_mul_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55d3ab052570 </usr/include/safe_math.h:867:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab0525e8 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab0528b8 <line:868:1, line:871:1>
|   `-ReturnStmt 0x55d3ab0528a8 <line:870:3, col:62>
|     `-ImplicitCastExpr 0x55d3ab052890 <col:10, col:62> 'uint64_t':'unsigned long' <IntegralCast>
|       `-BinaryOperator 0x55d3ab052870 <col:10, col:62> 'unsigned long long' '*'
|         |-ParenExpr 0x55d3ab0527b8 <col:10, col:34> 'unsigned long long'
|         | `-CStyleCastExpr 0x55d3ab052790 <col:11, col:31> 'unsigned long long' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55d3ab052778 <col:31> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55d3ab052740 <col:31> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052570 'ui1' 'uint64_t':'unsigned long'
|         `-ParenExpr 0x55d3ab052850 <col:38, col:62> 'unsigned long long'
|           `-CStyleCastExpr 0x55d3ab052828 <col:39, col:59> 'unsigned long long' <IntegralCast>
|             `-ImplicitCastExpr 0x55d3ab052810 <col:59> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55d3ab0527d8 <col:59> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0525e8 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab0529f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:883:1> <scratch space>:156:1 safe_mod_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55d3ab0528e0 </usr/include/safe_math.h:874:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab052958 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab052cc8 <line:875:1, line:883:1>
|   `-ReturnStmt 0x55d3ab052cb8 <line:877:3, line:882:15>
|     `-ConditionalOperator 0x55d3ab052c88 <line:879:5, line:882:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab052b40 <line:879:5, col:14> 'int'
|       | `-BinaryOperator 0x55d3ab052b20 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab052af0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab052ab0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052958 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x55d3ab052b08 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab052ad0 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab052c70 <line:880:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab052ba0 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab052b80 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab052b60 </usr/include/safe_math.h:880:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0528e0 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab052c50 <line:882:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab052c30 <col:6, col:12> 'uint64_t':'unsigned long' '%'
|           |-ImplicitCastExpr 0x55d3ab052c00 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab052bc0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0528e0 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x55d3ab052c18 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab052be0 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052958 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab052e78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:895:1> <scratch space>:157:1 safe_div_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55d3ab052d60 </usr/include/safe_math.h:886:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab052dd8 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab053148 <line:887:1, line:895:1>
|   `-ReturnStmt 0x55d3ab053138 <line:889:3, line:894:15>
|     `-ConditionalOperator 0x55d3ab053108 <line:891:5, line:894:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab052fc0 <line:891:5, col:14> 'int'
|       | `-BinaryOperator 0x55d3ab052fa0 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55d3ab052f70 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55d3ab052f30 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052dd8 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x55d3ab052f88 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab052f50 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55d3ab0530f0 <line:892:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab053020 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab053000 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab052fe0 </usr/include/safe_math.h:892:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052d60 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab0530d0 <line:894:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab0530b0 <col:6, col:12> 'uint64_t':'unsigned long' '/'
|           |-ImplicitCastExpr 0x55d3ab053080 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab053040 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052d60 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x55d3ab053098 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab053060 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab052dd8 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55d3ab053348 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:907:1> <scratch space>:158:1 safe_lshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x55d3ab053170 </usr/include/safe_math.h:898:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab0531f0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3ab0539a8 <line:899:1, line:907:1>
|   `-ReturnStmt 0x55d3ab053998 <line:901:3, line:906:26>
|     `-ConditionalOperator 0x55d3ab053968 <line:903:5, line:906:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab0537c0 <line:903:5, col:89> 'int'
|       | `-BinaryOperator 0x55d3ab0537a0 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x55d3ab0535f0 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x55d3ab0534d8 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x55d3ab0534b8 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x55d3ab053478 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x55d3ab053450 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x55d3ab053438 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x55d3ab053400 <col:13> 'int' lvalue ParmVar 0x55d3ab0531f0 'right' 'int'
|       |   | |   `-IntegerLiteral 0x55d3ab053498 <col:22> 'int' 0
|       |   | `-ParenExpr 0x55d3ab0535d0 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x55d3ab0535b0 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x55d3ab053570 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x55d3ab053548 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55d3ab053530 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55d3ab0534f8 <col:35> 'int' lvalue ParmVar 0x55d3ab0531f0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55d3ab053590 <col:45> 'int' 32
|       |   `-ParenExpr 0x55d3ab053780 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x55d3ab053760 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab053748 <col:53> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab053610 <col:53> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab053170 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x55d3ab053728 <col:60, col:87> 'unsigned long'
|       |         `-BinaryOperator 0x55d3ab053708 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:903:86> 'unsigned long' '>>'
|       |           |-ParenExpr 0x55d3ab053650 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x55d3ab053630 <<scratch space>:159:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x55d3ab0536e8 </usr/include/safe_math.h:903:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x55d3ab0536c0 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab0536a8 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab053670 <col:81> 'int' lvalue ParmVar 0x55d3ab0531f0 'right' 'int'
|       |-ImplicitCastExpr 0x55d3ab053950 <line:904:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab053820 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab053800 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab0537e0 </usr/include/safe_math.h:904:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab053170 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab053930 <line:906:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab053910 <col:6, col:25> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x55d3ab0538f8 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab053840 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab053170 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55d3ab0538d8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab0538b0 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab053898 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab053860 <col:20> 'int' lvalue ParmVar 0x55d3ab0531f0 'right' 'int'
|-FunctionDecl 0x55d3ab053ba8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:919:1> <scratch space>:160:1 safe_lshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab0539d0 </usr/include/safe_math.h:910:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab053a50 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab054108 <line:911:1, line:919:1>
|   `-ReturnStmt 0x55d3ab0540f8 <line:913:3, line:918:35>
|     `-ConditionalOperator 0x55d3ab0540c8 <line:915:5, line:918:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab053f20 <line:915:5, col:85> 'int'
|       | `-BinaryOperator 0x55d3ab053f00 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x55d3ab053d50 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x55d3ab053d30 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x55d3ab053cd8 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x55d3ab053cb0 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55d3ab053c98 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55d3ab053c60 <col:22> 'unsigned int' lvalue ParmVar 0x55d3ab053a50 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x55d3ab053d18 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55d3ab053cf8 <col:32> 'int' 32
|       |   `-ParenExpr 0x55d3ab053ee0 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x55d3ab053ec0 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x55d3ab053ea8 <col:40> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab053d70 <col:40> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0539d0 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x55d3ab053e88 <col:47, col:83> 'unsigned long'
|       |         `-BinaryOperator 0x55d3ab053e68 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:915:82> 'unsigned long' '>>'
|       |           |-ParenExpr 0x55d3ab053db0 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x55d3ab053d90 <<scratch space>:161:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x55d3ab053e48 </usr/include/safe_math.h:915:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x55d3ab053e20 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55d3ab053e08 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55d3ab053dd0 <col:77> 'unsigned int' lvalue ParmVar 0x55d3ab053a50 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55d3ab0540b0 <line:916:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab053f80 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab053f60 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab053f40 </usr/include/safe_math.h:916:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0539d0 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab054090 <line:918:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab054070 <col:6, col:34> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x55d3ab054058 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab053fa0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab0539d0 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55d3ab054038 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab054010 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab053ff8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab053fc0 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab053a50 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab054250 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:931:1> <scratch space>:162:1 safe_rshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x55d3ab054130 </usr/include/safe_math.h:922:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab0541b0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55d3ab054700 <line:923:1, line:931:1>
|   `-ReturnStmt 0x55d3ab0546f0 <line:925:3, line:930:26>
|     `-ConditionalOperator 0x55d3ab0546c0 <line:927:5, line:930:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab054518 <line:927:5, col:48> 'int'
|       | `-BinaryOperator 0x55d3ab0544f8 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x55d3ab0543e0 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55d3ab0543c0 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x55d3ab054380 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x55d3ab054358 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55d3ab054340 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55d3ab054308 <col:13> 'int' lvalue ParmVar 0x55d3ab0541b0 'right' 'int'
|       |   |   `-IntegerLiteral 0x55d3ab0543a0 <col:22> 'int' 0
|       |   `-ParenExpr 0x55d3ab0544d8 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x55d3ab0544b8 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x55d3ab054478 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x55d3ab054450 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55d3ab054438 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55d3ab054400 <col:35> 'int' lvalue ParmVar 0x55d3ab0541b0 'right' 'int'
|       |       `-IntegerLiteral 0x55d3ab054498 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab0546a8 <line:928:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab054578 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab054558 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab054538 </usr/include/safe_math.h:928:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab054130 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab054688 <line:930:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab054668 <col:6, col:25> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x55d3ab054650 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab054598 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab054130 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55d3ab054630 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55d3ab054608 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab0545f0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab0545b8 <col:20> 'int' lvalue ParmVar 0x55d3ab0541b0 'right' 'int'
|-FunctionDecl 0x55d3ab054848 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:943:1> <scratch space>:163:1 safe_rshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x55d3ab054728 </usr/include/safe_math.h:934:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab0547a8 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55d3ab054bd8 <line:935:1, line:943:1>
|   `-ReturnStmt 0x55d3ab054bc8 <line:937:3, line:942:35>
|     `-ConditionalOperator 0x55d3ab054b98 <line:939:5, line:942:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55d3ab0549f0 <line:939:5, col:33> 'int'
|       | `-BinaryOperator 0x55d3ab0549d0 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x55d3ab054978 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x55d3ab054950 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x55d3ab054938 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x55d3ab054900 <col:21> 'unsigned int' lvalue ParmVar 0x55d3ab0547a8 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x55d3ab0549b8 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab054998 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x55d3ab054b80 <line:940:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab054a50 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55d3ab054a30 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55d3ab054a10 </usr/include/safe_math.h:940:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab054728 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55d3ab054b60 <line:942:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55d3ab054b40 <col:6, col:34> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x55d3ab054b28 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab054a70 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab054728 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55d3ab054b08 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55d3ab054ae0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55d3ab054ac8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55d3ab054a90 <col:29> 'unsigned int' lvalue ParmVar 0x55d3ab0547a8 'right' 'unsigned int'
|-FunctionDecl 0x55d3ab054ca0 prev 0x55d3aafa74f0 <line:951:1, col:18> col:7 used fabsf 'float (float)'
| |-ParmVarDecl 0x55d3ab054c08 <col:13> col:18 'float'
| |-BuiltinAttr 0x55d3ab054da0 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x55d3ab054dd0 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x55d3ab054df8 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x55d3ab054ed0 prev 0x55d3aaf3a660 </usr/include/safe_math.h:952:1, col:19> col:8 used fabs 'double (double)'
| |-ParmVarDecl 0x55d3ab054e38 <col:13> col:19 'double'
| |-BuiltinAttr 0x55d3ab054fb0 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x55d3ab054fe0 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x55d3ab055008 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x55d3ab0551a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:965:1> <scratch space>:164:1 safe_add_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55d3ab055048 </usr/include/safe_math.h:956:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55d3ab0550c8 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55d3ab055650 <line:957:1, line:965:1>
|   `-ReturnStmt 0x55d3ab055640 <line:959:3, line:964:15>
|     `-ConditionalOperator 0x55d3ab055610 <line:961:5, line:964:15> 'float'
|       |-ParenExpr 0x55d3ab0554e8 <line:961:5, col:59> 'int'
|       | `-BinaryOperator 0x55d3ab0554c8 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x55d3ab055418 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x55d3ab055400 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab055258 <col:6> 'float (float)' Function 0x55d3ab054ca0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55d3ab0553a8 <col:12, col:38> 'float' '+'
|       |   |   |-ParenExpr 0x55d3ab0552f0 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x55d3ab0552d0 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab055278 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55d3ab0552b8 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab055298 <col:20> 'float' lvalue ParmVar 0x55d3ab055048 'sf1' 'float'
|       |   |   `-ParenExpr 0x55d3ab055388 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x55d3ab055368 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x55d3ab055310 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55d3ab055350 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab055330 <col:35> 'float' lvalue ParmVar 0x55d3ab0550c8 'sf2' 'float'
|       |   `-ParenExpr 0x55d3ab0554a8 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x55d3ab055488 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x55d3ab055448 </usr/include/safe_math.h:961:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x55d3ab055468 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55d3ab0555f8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab055528 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55d3ab055508 </usr/include/safe_math.h:962:15> 'float' lvalue ParmVar 0x55d3ab055048 'sf1' 'float'
|       `-ParenExpr 0x55d3ab0555d8 <line:964:5, col:15> 'float'
|         `-BinaryOperator 0x55d3ab0555b8 <col:6, col:12> 'float' '+'
|           |-ImplicitCastExpr 0x55d3ab055588 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab055548 <col:6> 'float' lvalue ParmVar 0x55d3ab055048 'sf1' 'float'
|           `-ImplicitCastExpr 0x55d3ab0555a0 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab055568 <col:12> 'float' lvalue ParmVar 0x55d3ab0550c8 'sf2' 'float'
|-FunctionDecl 0x55d3ab0557a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:977:1> <scratch space>:2:1 safe_sub_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55d3ab055680 </usr/include/safe_math.h:968:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55d3ab055700 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55d3ab055c20 <line:969:1, line:977:1>
|   `-ReturnStmt 0x55d3ab055c10 <line:971:3, line:976:15>
|     `-ConditionalOperator 0x55d3ab055be0 <line:973:5, line:976:15> 'float'
|       |-ParenExpr 0x55d3ab055ab8 <line:973:5, col:59> 'int'
|       | `-BinaryOperator 0x55d3ab055a98 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x55d3ab0559e8 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x55d3ab0559d0 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab055860 <col:6> 'float (float)' Function 0x55d3ab054ca0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55d3ab0559b0 <col:12, col:38> 'float' '-'
|       |   |   |-ParenExpr 0x55d3ab0558f8 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x55d3ab0558d8 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab055880 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55d3ab0558c0 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab0558a0 <col:20> 'float' lvalue ParmVar 0x55d3ab055680 'sf1' 'float'
|       |   |   `-ParenExpr 0x55d3ab055990 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x55d3ab055970 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x55d3ab055918 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55d3ab055958 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab055938 <col:35> 'float' lvalue ParmVar 0x55d3ab055700 'sf2' 'float'
|       |   `-ParenExpr 0x55d3ab055a78 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x55d3ab055a58 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x55d3ab055a18 </usr/include/safe_math.h:973:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x55d3ab055a38 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55d3ab055bc8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab055af8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55d3ab055ad8 </usr/include/safe_math.h:974:15> 'float' lvalue ParmVar 0x55d3ab055680 'sf1' 'float'
|       `-ParenExpr 0x55d3ab055ba8 <line:976:5, col:15> 'float'
|         `-BinaryOperator 0x55d3ab055b88 <col:6, col:12> 'float' '-'
|           |-ImplicitCastExpr 0x55d3ab055b58 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab055b18 <col:6> 'float' lvalue ParmVar 0x55d3ab055680 'sf1' 'float'
|           `-ImplicitCastExpr 0x55d3ab055b70 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab055b38 <col:12> 'float' lvalue ParmVar 0x55d3ab055700 'sf2' 'float'
|-FunctionDecl 0x55d3ab055d78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:993:1> <scratch space>:3:1 safe_mul_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55d3ab055c50 </usr/include/safe_math.h:980:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55d3ab055cd0 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55d3ab056250 <line:981:1, line:993:1>
|   `-ReturnStmt 0x55d3ab056240 <line:983:3, line:992:15>
|     `-ConditionalOperator 0x55d3ab056210 <line:986:5, line:992:15> 'float'
|       |-ParenExpr 0x55d3ab0560e8 <line:986:5, col:94> 'int'
|       | `-BinaryOperator 0x55d3ab0560c8 <col:6, col:93> 'int' '>'
|       |   |-CallExpr 0x55d3ab055fb8 <col:6, col:52> 'float'
|       |   | |-ImplicitCastExpr 0x55d3ab055fa0 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab055e30 <col:6> 'float (float)' Function 0x55d3ab054ca0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55d3ab055f80 <col:12, col:51> 'float' '*'
|       |   |   |-ParenExpr 0x55d3ab055ec8 <col:12, col:30> 'float'
|       |   |   | `-BinaryOperator 0x55d3ab055ea8 <col:13, col:27> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab055e50 <col:13> 'float' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x55d3ab055e90 <col:27> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab055e70 <col:27> 'float' lvalue ParmVar 0x55d3ab055c50 'sf1' 'float'
|       |   |   `-ParenExpr 0x55d3ab055f60 <col:34, col:51> 'float'
|       |   |     `-BinaryOperator 0x55d3ab055f40 <col:35, col:48> 'float' '*'
|       |   |       |-FloatingLiteral 0x55d3ab055ee8 <col:35> 'float' 3.725290e-09
|       |   |       `-ImplicitCastExpr 0x55d3ab055f28 <col:48> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab055f08 <col:48> 'float' lvalue ParmVar 0x55d3ab055cd0 'sf2' 'float'
|       |   `-ParenExpr 0x55d3ab0560a8 <col:56, col:93> 'float'
|       |     `-BinaryOperator 0x55d3ab056088 <col:57, col:92> 'float' '*'
|       |       |-FloatingLiteral 0x55d3ab055fe8 <col:57> 'float' 7.888609e-31
|       |       `-ParenExpr 0x55d3ab056068 <col:71, col:92> 'float'
|       |         `-BinaryOperator 0x55d3ab056048 <col:72, <built-in>:151:21> 'float' '*'
|       |           |-FloatingLiteral 0x55d3ab056008 </usr/include/safe_math.h:986:72> 'float' 3.725290e-09
|       |           `-FloatingLiteral 0x55d3ab056028 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55d3ab0561f8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab056128 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55d3ab056108 </usr/include/safe_math.h:990:15> 'float' lvalue ParmVar 0x55d3ab055c50 'sf1' 'float'
|       `-ParenExpr 0x55d3ab0561d8 <line:992:5, col:15> 'float'
|         `-BinaryOperator 0x55d3ab0561b8 <col:6, col:12> 'float' '*'
|           |-ImplicitCastExpr 0x55d3ab056188 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab056148 <col:6> 'float' lvalue ParmVar 0x55d3ab055c50 'sf1' 'float'
|           `-ImplicitCastExpr 0x55d3ab0561a0 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab056168 <col:12> 'float' lvalue ParmVar 0x55d3ab055cd0 'sf2' 'float'
|-FunctionDecl 0x55d3ab0563a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1009:1> <scratch space>:4:1 safe_div_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55d3ab056280 </usr/include/safe_math.h:996:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55d3ab056300 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55d3ab056ab8 <line:997:1, line:1009:1>
|   `-ReturnStmt 0x55d3ab056aa8 <line:999:3, line:1008:15>
|     `-ConditionalOperator 0x55d3ab056a78 <line:1002:5, line:1008:15> 'float'
|       |-ParenExpr 0x55d3ab056950 <line:1002:5, col:139> 'int'
|       | `-BinaryOperator 0x55d3ab056930 <col:6, col:138> 'int' '&&'
|       |   |-ParenExpr 0x55d3ab056540 <col:6, col:24> 'int'
|       |   | `-BinaryOperator 0x55d3ab056520 <col:7, col:20> 'int' '<'
|       |   |   |-CallExpr 0x55d3ab0564b8 <col:7, col:16> 'float'
|       |   |   | |-ImplicitCastExpr 0x55d3ab0564a0 <col:7> 'float (*)(float)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x55d3ab056460 <col:7> 'float (float)' Function 0x55d3ab054ca0 'fabsf' 'float (float)'
|       |   |   | `-ImplicitCastExpr 0x55d3ab0564e8 <col:13> 'float' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x55d3ab056480 <col:13> 'float' lvalue ParmVar 0x55d3ab056300 'sf2' 'float'
|       |   |   `-FloatingLiteral 0x55d3ab056500 <col:20> 'float' 1.000000e+00
|       |   `-ParenExpr 0x55d3ab056910 <col:29, col:138> 'int'
|       |     `-ParenExpr 0x55d3ab0568f0 <col:30, col:137> 'int'
|       |       `-BinaryOperator 0x55d3ab0568d0 <col:31, col:136> 'int' '||'
|       |         |-ParenExpr 0x55d3ab0565d8 <col:31, col:43> 'int'
|       |         | `-BinaryOperator 0x55d3ab0565b8 <col:32, col:39> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x55d3ab0565a0 <col:32> 'float' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x55d3ab056560 <col:32> 'float' lvalue ParmVar 0x55d3ab056300 'sf2' 'float'
|       |         |   `-FloatingLiteral 0x55d3ab056580 <col:39> 'float' 0.000000e+00
|       |         `-BinaryOperator 0x55d3ab0568b0 <col:48, col:136> 'int' '>'
|       |           |-ParenExpr 0x55d3ab0567b0 <col:48, col:95> 'float'
|       |           | `-CallExpr 0x55d3ab056780 <col:49, col:94> 'float'
|       |           |   |-ImplicitCastExpr 0x55d3ab056768 <col:49> 'float (*)(float)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x55d3ab0565f8 <col:49> 'float (float)' Function 0x55d3ab054ca0 'fabsf' 'float (float)'
|       |           |   `-BinaryOperator 0x55d3ab056748 <col:55, col:93> 'float' '/'
|       |           |     |-ParenExpr 0x55d3ab056690 <col:55, col:72> 'float'
|       |           |     | `-BinaryOperator 0x55d3ab056670 <col:56, col:69> 'float' '*'
|       |           |     |   |-FloatingLiteral 0x55d3ab056618 <col:56> 'float' 1.776357e-15
|       |           |     |   `-ImplicitCastExpr 0x55d3ab056658 <col:69> 'float' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x55d3ab056638 <col:69> 'float' lvalue ParmVar 0x55d3ab056280 'sf1' 'float'
|       |           |     `-ParenExpr 0x55d3ab056728 <col:76, col:93> 'float'
|       |           |       `-BinaryOperator 0x55d3ab056708 <col:77, col:90> 'float' '*'
|       |           |         |-FloatingLiteral 0x55d3ab0566b0 <col:77> 'float' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x55d3ab0566f0 <col:90> 'float' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x55d3ab0566d0 <col:90> 'float' lvalue ParmVar 0x55d3ab056300 'sf2' 'float'
|       |           `-ParenExpr 0x55d3ab056890 <col:99, col:136> 'float'
|       |             `-BinaryOperator 0x55d3ab056870 <col:100, col:135> 'float' '*'
|       |               |-FloatingLiteral 0x55d3ab0567d0 <col:100> 'float' 7.888609e-31
|       |               `-ParenExpr 0x55d3ab056850 <col:114, col:135> 'float'
|       |                 `-BinaryOperator 0x55d3ab056830 <col:115, <built-in>:151:21> 'float' '*'
|       |                   |-FloatingLiteral 0x55d3ab0567f0 </usr/include/safe_math.h:1002:115> 'float' 1.776357e-15
|       |                   `-FloatingLiteral 0x55d3ab056810 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55d3ab056a60 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab056990 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55d3ab056970 </usr/include/safe_math.h:1006:15> 'float' lvalue ParmVar 0x55d3ab056280 'sf1' 'float'
|       `-ParenExpr 0x55d3ab056a40 <line:1008:5, col:15> 'float'
|         `-BinaryOperator 0x55d3ab056a20 <col:6, col:12> 'float' '/'
|           |-ImplicitCastExpr 0x55d3ab0569f0 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab0569b0 <col:6> 'float' lvalue ParmVar 0x55d3ab056280 'sf1' 'float'
|           `-ImplicitCastExpr 0x55d3ab056a08 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0569d0 <col:12> 'float' lvalue ParmVar 0x55d3ab056300 'sf2' 'float'
|-FunctionDecl 0x55d3ab056c40 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1024:1> <scratch space>:5:1 safe_add_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55d3ab056ae8 </usr/include/safe_math.h:1015:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55d3ab056b68 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55d3ab058130 <line:1016:1, line:1024:1>
|   `-ReturnStmt 0x55d3ab058120 <line:1018:3, line:1023:15>
|     `-ConditionalOperator 0x55d3ab0580f0 <line:1020:5, line:1023:15> 'double'
|       |-ParenExpr 0x55d3ab057fc8 <line:1020:5, col:55> 'int'
|       | `-BinaryOperator 0x55d3ab057fa8 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x55d3ab057ef8 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x55d3ab057ee0 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab056cf8 <col:6> 'double (double)' Function 0x55d3ab054ed0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55d3ab057e88 <col:11, col:35> 'double' '+'
|       |   |   |-ParenExpr 0x55d3ab057dd0 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x55d3ab057db0 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab056d18 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55d3ab056d58 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab056d38 <col:18> 'double' lvalue ParmVar 0x55d3ab056ae8 'sf1' 'double'
|       |   |   `-ParenExpr 0x55d3ab057e68 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x55d3ab057e48 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x55d3ab057df0 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55d3ab057e30 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab057e10 <col:32> 'double' lvalue ParmVar 0x55d3ab056b68 'sf2' 'double'
|       |   `-ParenExpr 0x55d3ab057f88 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x55d3ab057f68 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x55d3ab057f28 </usr/include/safe_math.h:1020:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x55d3ab057f48 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55d3ab0580d8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab058008 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55d3ab057fe8 </usr/include/safe_math.h:1021:15> 'double' lvalue ParmVar 0x55d3ab056ae8 'sf1' 'double'
|       `-ParenExpr 0x55d3ab0580b8 <line:1023:5, col:15> 'double'
|         `-BinaryOperator 0x55d3ab058098 <col:6, col:12> 'double' '+'
|           |-ImplicitCastExpr 0x55d3ab058068 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab058028 <col:6> 'double' lvalue ParmVar 0x55d3ab056ae8 'sf1' 'double'
|           `-ImplicitCastExpr 0x55d3ab058080 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab058048 <col:12> 'double' lvalue ParmVar 0x55d3ab056b68 'sf2' 'double'
|-FunctionDecl 0x55d3ab058288 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1036:1> <scratch space>:6:1 safe_sub_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55d3ab058160 </usr/include/safe_math.h:1027:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55d3ab0581e0 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55d3ab058700 <line:1028:1, line:1036:1>
|   `-ReturnStmt 0x55d3ab0586f0 <line:1030:3, line:1035:15>
|     `-ConditionalOperator 0x55d3ab0586c0 <line:1032:5, line:1035:15> 'double'
|       |-ParenExpr 0x55d3ab058598 <line:1032:5, col:55> 'int'
|       | `-BinaryOperator 0x55d3ab058578 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x55d3ab0584c8 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x55d3ab0584b0 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab058340 <col:6> 'double (double)' Function 0x55d3ab054ed0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55d3ab058490 <col:11, col:35> 'double' '-'
|       |   |   |-ParenExpr 0x55d3ab0583d8 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x55d3ab0583b8 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab058360 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55d3ab0583a0 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab058380 <col:18> 'double' lvalue ParmVar 0x55d3ab058160 'sf1' 'double'
|       |   |   `-ParenExpr 0x55d3ab058470 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x55d3ab058450 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x55d3ab0583f8 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55d3ab058438 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab058418 <col:32> 'double' lvalue ParmVar 0x55d3ab0581e0 'sf2' 'double'
|       |   `-ParenExpr 0x55d3ab058558 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x55d3ab058538 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x55d3ab0584f8 </usr/include/safe_math.h:1032:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x55d3ab058518 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55d3ab0586a8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab0585d8 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55d3ab0585b8 </usr/include/safe_math.h:1033:15> 'double' lvalue ParmVar 0x55d3ab058160 'sf1' 'double'
|       `-ParenExpr 0x55d3ab058688 <line:1035:5, col:15> 'double'
|         `-BinaryOperator 0x55d3ab058668 <col:6, col:12> 'double' '-'
|           |-ImplicitCastExpr 0x55d3ab058638 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab0585f8 <col:6> 'double' lvalue ParmVar 0x55d3ab058160 'sf1' 'double'
|           `-ImplicitCastExpr 0x55d3ab058650 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab058618 <col:12> 'double' lvalue ParmVar 0x55d3ab0581e0 'sf2' 'double'
|-FunctionDecl 0x55d3ab058858 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1052:1> <scratch space>:7:1 safe_mul_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55d3ab058730 </usr/include/safe_math.h:1039:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55d3ab0587b0 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55d3ab058d30 <line:1040:1, line:1052:1>
|   `-ReturnStmt 0x55d3ab058d20 <line:1042:3, line:1051:15>
|     `-ConditionalOperator 0x55d3ab058cf0 <line:1045:5, line:1051:15> 'double'
|       |-ParenExpr 0x55d3ab058bc8 <line:1045:5, col:91> 'int'
|       | `-BinaryOperator 0x55d3ab058ba8 <col:6, col:90> 'int' '>'
|       |   |-CallExpr 0x55d3ab058a98 <col:6, col:50> 'double'
|       |   | |-ImplicitCastExpr 0x55d3ab058a80 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55d3ab058910 <col:6> 'double (double)' Function 0x55d3ab054ed0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55d3ab058a60 <col:11, col:49> 'double' '*'
|       |   |   |-ParenExpr 0x55d3ab0589a8 <col:11, col:28> 'double'
|       |   |   | `-BinaryOperator 0x55d3ab058988 <col:12, col:25> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55d3ab058930 <col:12> 'double' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x55d3ab058970 <col:25> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55d3ab058950 <col:25> 'double' lvalue ParmVar 0x55d3ab058730 'sf1' 'double'
|       |   |   `-ParenExpr 0x55d3ab058a40 <col:32, col:49> 'double'
|       |   |     `-BinaryOperator 0x55d3ab058a20 <col:33, col:46> 'double' '*'
|       |   |       |-FloatingLiteral 0x55d3ab0589c8 <col:33> 'double' 7.051541e-279
|       |   |       `-ImplicitCastExpr 0x55d3ab058a08 <col:46> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55d3ab0589e8 <col:46> 'double' lvalue ParmVar 0x55d3ab0587b0 'sf2' 'double'
|       |   `-ParenExpr 0x55d3ab058b88 <col:54, col:90> 'double'
|       |     `-BinaryOperator 0x55d3ab058b68 <col:55, col:89> 'double' '*'
|       |       |-FloatingLiteral 0x55d3ab058ac8 <col:55> 'double' 7.888609e-31
|       |       `-ParenExpr 0x55d3ab058b48 <col:68, col:89> 'double'
|       |         `-BinaryOperator 0x55d3ab058b28 <col:69, <built-in>:166:21> 'double' '*'
|       |           |-FloatingLiteral 0x55d3ab058ae8 </usr/include/safe_math.h:1045:69> 'double' 7.051541e-279
|       |           `-FloatingLiteral 0x55d3ab058b08 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55d3ab058cd8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab058c08 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55d3ab058be8 </usr/include/safe_math.h:1049:15> 'double' lvalue ParmVar 0x55d3ab058730 'sf1' 'double'
|       `-ParenExpr 0x55d3ab058cb8 <line:1051:5, col:15> 'double'
|         `-BinaryOperator 0x55d3ab058c98 <col:6, col:12> 'double' '*'
|           |-ImplicitCastExpr 0x55d3ab058c68 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab058c28 <col:6> 'double' lvalue ParmVar 0x55d3ab058730 'sf1' 'double'
|           `-ImplicitCastExpr 0x55d3ab058c80 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab058c48 <col:12> 'double' lvalue ParmVar 0x55d3ab0587b0 'sf2' 'double'
|-FunctionDecl 0x55d3ab058e88 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1068:1> <scratch space>:8:1 safe_div_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55d3ab058d60 </usr/include/safe_math.h:1055:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55d3ab058de0 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55d3ab059598 <line:1056:1, line:1068:1>
|   `-ReturnStmt 0x55d3ab059588 <line:1058:3, line:1067:15>
|     `-ConditionalOperator 0x55d3ab059558 <line:1061:5, line:1067:15> 'double'
|       |-ParenExpr 0x55d3ab059430 <line:1061:5, col:133> 'int'
|       | `-BinaryOperator 0x55d3ab059410 <col:6, col:132> 'int' '&&'
|       |   |-ParenExpr 0x55d3ab059020 <col:6, col:22> 'int'
|       |   | `-BinaryOperator 0x55d3ab059000 <col:7, col:19> 'int' '<'
|       |   |   |-CallExpr 0x55d3ab058f98 <col:7, col:15> 'double'
|       |   |   | |-ImplicitCastExpr 0x55d3ab058f80 <col:7> 'double (*)(double)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x55d3ab058f40 <col:7> 'double (double)' Function 0x55d3ab054ed0 'fabs' 'double (double)'
|       |   |   | `-ImplicitCastExpr 0x55d3ab058fc8 <col:12> 'double' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x55d3ab058f60 <col:12> 'double' lvalue ParmVar 0x55d3ab058de0 'sf2' 'double'
|       |   |   `-FloatingLiteral 0x55d3ab058fe0 <col:19> 'double' 1.000000e+00
|       |   `-ParenExpr 0x55d3ab0593f0 <col:27, col:132> 'int'
|       |     `-ParenExpr 0x55d3ab0593d0 <col:28, col:131> 'int'
|       |       `-BinaryOperator 0x55d3ab0593b0 <col:29, col:130> 'int' '||'
|       |         |-ParenExpr 0x55d3ab0590b8 <col:29, col:40> 'int'
|       |         | `-BinaryOperator 0x55d3ab059098 <col:30, col:37> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x55d3ab059080 <col:30> 'double' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x55d3ab059040 <col:30> 'double' lvalue ParmVar 0x55d3ab058de0 'sf2' 'double'
|       |         |   `-FloatingLiteral 0x55d3ab059060 <col:37> 'double' 0.000000e+00
|       |         `-BinaryOperator 0x55d3ab059390 <col:45, col:130> 'int' '>'
|       |           |-ParenExpr 0x55d3ab059290 <col:45, col:90> 'double'
|       |           | `-CallExpr 0x55d3ab059260 <col:46, col:89> 'double'
|       |           |   |-ImplicitCastExpr 0x55d3ab059248 <col:46> 'double (*)(double)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x55d3ab0590d8 <col:46> 'double (double)' Function 0x55d3ab054ed0 'fabs' 'double (double)'
|       |           |   `-BinaryOperator 0x55d3ab059228 <col:51, col:88> 'double' '/'
|       |           |     |-ParenExpr 0x55d3ab059170 <col:51, col:68> 'double'
|       |           |     | `-BinaryOperator 0x55d3ab059150 <col:52, col:65> 'double' '*'
|       |           |     |   |-FloatingLiteral 0x55d3ab0590f8 <col:52> 'double' 6.263026e-294
|       |           |     |   `-ImplicitCastExpr 0x55d3ab059138 <col:65> 'double' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x55d3ab059118 <col:65> 'double' lvalue ParmVar 0x55d3ab058d60 'sf1' 'double'
|       |           |     `-ParenExpr 0x55d3ab059208 <col:72, col:88> 'double'
|       |           |       `-BinaryOperator 0x55d3ab0591e8 <col:73, col:85> 'double' '*'
|       |           |         |-FloatingLiteral 0x55d3ab059190 <col:73> 'double' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x55d3ab0591d0 <col:85> 'double' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x55d3ab0591b0 <col:85> 'double' lvalue ParmVar 0x55d3ab058de0 'sf2' 'double'
|       |           `-ParenExpr 0x55d3ab059370 <col:94, col:130> 'double'
|       |             `-BinaryOperator 0x55d3ab059350 <col:95, col:129> 'double' '*'
|       |               |-FloatingLiteral 0x55d3ab0592b0 <col:95> 'double' 7.888609e-31
|       |               `-ParenExpr 0x55d3ab059330 <col:108, col:129> 'double'
|       |                 `-BinaryOperator 0x55d3ab059310 <col:109, <built-in>:166:21> 'double' '*'
|       |                   |-FloatingLiteral 0x55d3ab0592d0 </usr/include/safe_math.h:1061:109> 'double' 6.263026e-294
|       |                   `-FloatingLiteral 0x55d3ab0592f0 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55d3ab059540 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55d3ab059470 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55d3ab059450 </usr/include/safe_math.h:1065:15> 'double' lvalue ParmVar 0x55d3ab058d60 'sf1' 'double'
|       `-ParenExpr 0x55d3ab059520 <line:1067:5, col:15> 'double'
|         `-BinaryOperator 0x55d3ab059500 <col:6, col:12> 'double' '/'
|           |-ImplicitCastExpr 0x55d3ab0594d0 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55d3ab059490 <col:6> 'double' lvalue ParmVar 0x55d3ab058d60 'sf1' 'double'
|           `-ImplicitCastExpr 0x55d3ab0594e8 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55d3ab0594b0 <col:12> 'double' lvalue ParmVar 0x55d3ab058de0 'sf2' 'double'
|-FunctionDecl 0x55d3ab0596d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1205:1> <scratch space>:9:1 safe_convert_func_float_to_int32_t 'int32_t (float)' static
| |-ParmVarDecl 0x55d3ab0595c8 </usr/include/safe_math.h:1196:42, col:48> col:48 used sf1 'float'
| `-CompoundStmt 0x55d3ab059b28 <line:1197:1, line:1205:1>
|   `-ReturnStmt 0x55d3ab059b18 <line:1199:3, line:1204:20>
|     `-ConditionalOperator 0x55d3ab059ae8 <line:1201:5, line:1204:20> 'int'
|       |-ParenExpr 0x55d3ab059998 <line:1201:5, col:46> 'int'
|       | `-BinaryOperator 0x55d3ab059978 <col:6, col:45> 'int' '||'
|       |   |-ParenExpr 0x55d3ab059888 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55d3ab059868 <col:7, /usr/include/stdint.h:107:35> 'int' '<='
|       |   |   |-ImplicitCastExpr 0x55d3ab059838 </usr/include/safe_math.h:1201:7> 'float' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab059780 <col:7> 'float' lvalue ParmVar 0x55d3ab0595c8 'sf1' 'float'
|       |   |   `-ImplicitCastExpr 0x55d3ab059850 </usr/include/stdint.h:107:21, col:35> 'float' <IntegralToFloating>
|       |   |     `-ParenExpr 0x55d3ab059818 <col:21, col:35> 'int'
|       |   |       `-BinaryOperator 0x55d3ab0597f8 <col:22, col:34> 'int' '-'
|       |   |         |-UnaryOperator 0x55d3ab0597c0 <col:22, col:23> 'int' prefix '-'
|       |   |         | `-IntegerLiteral 0x55d3ab0597a0 <col:23> 'int' 2147483647
|       |   |         `-IntegerLiteral 0x55d3ab0597d8 <col:34> 'int' 1
|       |   `-ParenExpr 0x55d3ab059958 </usr/include/safe_math.h:1201:28, col:45> 'int'
|       |     `-BinaryOperator 0x55d3ab059938 <col:29, /usr/include/stdint.h:112:32> 'int' '>='
|       |       |-ImplicitCastExpr 0x55d3ab059908 </usr/include/safe_math.h:1201:29> 'float' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55d3ab0598a8 <col:29> 'float' lvalue ParmVar 0x55d3ab0595c8 'sf1' 'float'
|       |       `-ImplicitCastExpr 0x55d3ab059920 </usr/include/stdint.h:112:21, col:32> 'float' <IntegralToFloating>
|       |         `-ParenExpr 0x55d3ab0598e8 <col:21, col:32> 'int'
|       |           `-IntegerLiteral 0x55d3ab0598c8 <col:22> 'int' 2147483647
|       |-ParenExpr 0x55d3ab0599f8 </usr/include/random_inc.h:79:26, col:32> 'int'
|       | `-ParenExpr 0x55d3ab0599d8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   `-IntegerLiteral 0x55d3ab0599b8 <col:22> 'int' 2147483647
|       `-ParenExpr 0x55d3ab059ac8 </usr/include/safe_math.h:1204:5, col:20> 'int32_t':'int'
|         `-CStyleCastExpr 0x55d3ab059aa0 <col:6, col:19> 'int32_t':'int' <FloatingToIntegral>
|           `-ImplicitCastExpr 0x55d3ab059a88 <col:15, col:19> 'float' <LValueToRValue> part_of_explicit_cast
|             `-ParenExpr 0x55d3ab059a68 <col:15, col:19> 'float' lvalue
|               `-DeclRefExpr 0x55d3ab059a18 <col:16> 'float' lvalue ParmVar 0x55d3ab0595c8 'sf1' 'float'
|-VarDecl 0x55d3ab059c00 </usr/include/csmith.h:47:1, col:30> col:17 used crc32_tab 'uint32_t[256]' static
|-VarDecl 0x55d3ab059c78 <line:48:1, col:33> col:17 used crc32_context 'uint32_t':'unsigned int' static cinit
| `-ImplicitCastExpr 0x55d3ab059d00 <col:33> 'uint32_t':'unsigned int' <IntegralCast>
|   `-IntegerLiteral 0x55d3ab059ce0 <col:33> 'unsigned long' 4294967295
|-FunctionDecl 0x55d3ab05ae58 <line:50:1, line:68:1> line:51:1 used crc32_gentab 'void (void)' static
| `-CompoundStmt 0x55d3ab05b928 <line:52:1, line:68:1>
|   |-DeclStmt 0x55d3ab05af78 <line:53:2, col:14>
|   | `-VarDecl 0x55d3ab05af10 <col:2, col:11> col:11 used crc 'uint32_t':'unsigned int'
|   |-DeclStmt 0x55d3ab05b040 <line:54:2, col:36>
|   | `-VarDecl 0x55d3ab05afa0 <col:2, col:24> col:17 used poly 'const uint32_t':'const unsigned int' cinit
|   |   `-ImplicitCastExpr 0x55d3ab05b028 <col:24> 'uint32_t':'unsigned int' <IntegralCast>
|   |     `-IntegerLiteral 0x55d3ab05b008 <col:24> 'unsigned long' 3988292384
|   |-DeclStmt 0x55d3ab05b170 <line:55:2, col:10>
|   | |-VarDecl 0x55d3ab05b070 <col:2, col:6> col:6 used i 'int'
|   | `-VarDecl 0x55d3ab05b0f0 <col:2, col:9> col:9 used j 'int'
|   `-ForStmt 0x55d3ab05b8f0 <line:57:2, line:67:2>
|     |-BinaryOperator 0x55d3ab05b1c8 <line:57:7, col:11> 'int' '='
|     | |-DeclRefExpr 0x55d3ab05b188 <col:7> 'int' lvalue Var 0x55d3ab05b070 'i' 'int'
|     | `-IntegerLiteral 0x55d3ab05b1a8 <col:11> 'int' 0
|     |-<<<NULL>>>
|     |-BinaryOperator 0x55d3ab05b240 <col:14, col:18> 'int' '<'
|     | |-ImplicitCastExpr 0x55d3ab05b228 <col:14> 'int' <LValueToRValue>
|     | | `-DeclRefExpr 0x55d3ab05b1e8 <col:14> 'int' lvalue Var 0x55d3ab05b070 'i' 'int'
|     | `-IntegerLiteral 0x55d3ab05b208 <col:18> 'int' 256
|     |-UnaryOperator 0x55d3ab05b280 <col:23, col:24> 'int' postfix '++'
|     | `-DeclRefExpr 0x55d3ab05b260 <col:23> 'int' lvalue Var 0x55d3ab05b070 'i' 'int'
|     `-CompoundStmt 0x55d3ab05b8c8 <col:28, line:67:2>
|       |-BinaryOperator 0x55d3ab05b308 <line:58:3, col:9> 'uint32_t':'unsigned int' '='
|       | |-DeclRefExpr 0x55d3ab05b298 <col:3> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|       | `-ImplicitCastExpr 0x55d3ab05b2f0 <col:9> 'uint32_t':'unsigned int' <IntegralCast>
|       |   `-ImplicitCastExpr 0x55d3ab05b2d8 <col:9> 'int' <LValueToRValue>
|       |     `-DeclRefExpr 0x55d3ab05b2b8 <col:9> 'int' lvalue Var 0x55d3ab05b070 'i' 'int'
|       |-ForStmt 0x55d3ab05b740 <line:59:3, line:65:3>
|       | |-BinaryOperator 0x55d3ab05b368 <line:59:8, col:12> 'int' '='
|       | | |-DeclRefExpr 0x55d3ab05b328 <col:8> 'int' lvalue Var 0x55d3ab05b0f0 'j' 'int'
|       | | `-IntegerLiteral 0x55d3ab05b348 <col:12> 'int' 8
|       | |-<<<NULL>>>
|       | |-BinaryOperator 0x55d3ab05b3e0 <col:15, col:19> 'int' '>'
|       | | |-ImplicitCastExpr 0x55d3ab05b3c8 <col:15> 'int' <LValueToRValue>
|       | | | `-DeclRefExpr 0x55d3ab05b388 <col:15> 'int' lvalue Var 0x55d3ab05b0f0 'j' 'int'
|       | | `-IntegerLiteral 0x55d3ab05b3a8 <col:19> 'int' 0
|       | |-UnaryOperator 0x55d3ab05b420 <col:22, col:23> 'int' postfix '--'
|       | | `-DeclRefExpr 0x55d3ab05b400 <col:22> 'int' lvalue Var 0x55d3ab05b0f0 'j' 'int'
|       | `-CompoundStmt 0x55d3ab05b728 <col:27, line:65:3>
|       |   `-IfStmt 0x55d3ab05b6f8 <line:60:4, line:64:4> has_else
|       |     |-BinaryOperator 0x55d3ab05b4a8 <line:60:8, col:14> 'uint32_t':'unsigned int' '&'
|       |     | |-ImplicitCastExpr 0x55d3ab05b478 <col:8> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     | | `-DeclRefExpr 0x55d3ab05b438 <col:8> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|       |     | `-ImplicitCastExpr 0x55d3ab05b490 <col:14> 'uint32_t':'unsigned int' <IntegralCast>
|       |     |   `-IntegerLiteral 0x55d3ab05b458 <col:14> 'int' 1
|       |     |-CompoundStmt 0x55d3ab05b640 <col:17, line:62:4>
|       |     | `-BinaryOperator 0x55d3ab05b5d8 <line:61:5, col:24> 'uint32_t':'unsigned int' '='
|       |     |   |-DeclRefExpr 0x55d3ab05b4c8 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|       |     |   `-BinaryOperator 0x55d3ab05b5b8 <col:11, col:24> 'uint32_t':'unsigned int' '^'
|       |     |     |-ParenExpr 0x55d3ab05b560 <col:11, col:20> 'uint32_t':'unsigned int'
|       |     |     | `-BinaryOperator 0x55d3ab05b540 <col:12, col:19> 'uint32_t':'unsigned int' '>>'
|       |     |     |   |-ImplicitCastExpr 0x55d3ab05b528 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |     |   | `-DeclRefExpr 0x55d3ab05b4e8 <col:12> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|       |     |     |   `-IntegerLiteral 0x55d3ab05b508 <col:19> 'int' 1
|       |     |     `-ImplicitCastExpr 0x55d3ab05b5a0 <col:24> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |       `-DeclRefExpr 0x55d3ab05b580 <col:24> 'const uint32_t':'const unsigned int' lvalue Var 0x55d3ab05afa0 'poly' 'const uint32_t':'const unsigned int'
|       |     `-CompoundStmt 0x55d3ab05b6e0 <line:62:11, line:64:4>
|       |       `-CompoundAssignOperator 0x55d3ab05b6b0 <line:63:5, col:13> 'uint32_t':'unsigned int' '>>=' ComputeLHSTy='uint32_t':'unsigned int' ComputeResultTy='uint32_t':'unsigned int'
|       |         |-DeclRefExpr 0x55d3ab05b658 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|       |         `-IntegerLiteral 0x55d3ab05b678 <col:13> 'int' 1
|       `-BinaryOperator 0x55d3ab05b8a8 <line:66:3, col:18> 'uint32_t':'unsigned int' '='
|         |-ArraySubscriptExpr 0x55d3ab05b850 <col:3, col:14> 'uint32_t':'unsigned int' lvalue
|         | |-ImplicitCastExpr 0x55d3ab05b820 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|         | | `-DeclRefExpr 0x55d3ab05b778 <col:3> 'uint32_t[256]' lvalue Var 0x55d3ab059c00 'crc32_tab' 'uint32_t[256]'
|         | `-ImplicitCastExpr 0x55d3ab05b838 <col:13> 'int' <LValueToRValue>
|         |   `-DeclRefExpr 0x55d3ab05b798 <col:13> 'int' lvalue Var 0x55d3ab05b070 'i' 'int'
|         `-ImplicitCastExpr 0x55d3ab05b890 <col:18> 'uint32_t':'unsigned int' <LValueToRValue>
|           `-DeclRefExpr 0x55d3ab05b870 <col:18> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab05af10 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55d3ab05ba70 <line:70:1, line:75:1> line:71:1 used crc32_byte 'void (uint8_t)' static
| |-ParmVarDecl 0x55d3ab05b968 <col:13, col:21> col:21 used b 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55d3ab05be20 <col:24, line:75:1>
|   `-BinaryOperator 0x55d3ab05be00 <line:72:2, line:74:39> 'uint32_t':'unsigned int' '='
|     |-DeclRefExpr 0x55d3ab05bb20 <line:72:2> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
|     `-BinaryOperator 0x55d3ab05bde0 <line:73:3, line:74:39> 'uint32_t':'unsigned int' '^'
|       |-ParenExpr 0x55d3ab05bc30 <line:73:3, col:37> 'uint32_t':'unsigned int'
|       | `-BinaryOperator 0x55d3ab05bc10 <col:4, col:27> 'uint32_t':'unsigned int' '&'
|       |   |-ParenExpr 0x55d3ab05bbb8 <col:4, col:23> 'uint32_t':'unsigned int'
|       |   | `-BinaryOperator 0x55d3ab05bb98 <col:5, col:22> 'uint32_t':'unsigned int' '>>'
|       |   |   |-ImplicitCastExpr 0x55d3ab05bb80 <col:5> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55d3ab05bb40 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
|       |   |   `-IntegerLiteral 0x55d3ab05bb60 <col:22> 'int' 8
|       |   `-ImplicitCastExpr 0x55d3ab05bbf8 <col:27> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55d3ab05bbd8 <col:27> 'int' 16777215
|       `-ImplicitCastExpr 0x55d3ab05bdc8 <line:74:3, col:39> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-ArraySubscriptExpr 0x55d3ab05bda8 <col:3, col:39> 'uint32_t':'unsigned int' lvalue
|           |-ImplicitCastExpr 0x55d3ab05bd90 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|           | `-DeclRefExpr 0x55d3ab05bc50 <col:3> 'uint32_t[256]' lvalue Var 0x55d3ab059c00 'crc32_tab' 'uint32_t[256]'
|           `-BinaryOperator 0x55d3ab05bd70 <col:13, col:35> 'uint32_t':'unsigned int' '&'
|             |-ParenExpr 0x55d3ab05bd18 <col:13, col:31> 'uint32_t':'unsigned int'
|             | `-BinaryOperator 0x55d3ab05bcf8 <col:14, col:30> 'uint32_t':'unsigned int' '^'
|             |   |-ImplicitCastExpr 0x55d3ab05bcb0 <col:14> 'uint32_t':'unsigned int' <LValueToRValue>
|             |   | `-DeclRefExpr 0x55d3ab05bc70 <col:14> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
|             |   `-ImplicitCastExpr 0x55d3ab05bce0 <col:30> 'uint32_t':'unsigned int' <IntegralCast>
|             |     `-ImplicitCastExpr 0x55d3ab05bcc8 <col:30> 'uint8_t':'unsigned char' <LValueToRValue>
|             |       `-DeclRefExpr 0x55d3ab05bc90 <col:30> 'uint8_t':'unsigned char' lvalue ParmVar 0x55d3ab05b968 'b' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55d3ab05bd58 <col:35> 'uint32_t':'unsigned int' <IntegralCast>
|               `-IntegerLiteral 0x55d3ab05bd38 <col:35> 'int' 255
|-FunctionDecl 0x55d3ab05bf50 <line:96:1, line:107:1> line:97:1 used crc32_8bytes 'void (uint64_t)' static
| |-ParmVarDecl 0x55d3ab05be48 <col:15, col:24> col:24 used val 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55d3ab05cbe0 <line:98:1, line:107:1>
|   |-CallExpr 0x55d3ab05c188 <line:99:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c170 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c000 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c1b8 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c0f0 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c098 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c078 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c060 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c020 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c040 <col:20> 'int' 0
|   |     `-ImplicitCastExpr 0x55d3ab05c0d8 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c0b8 <col:25> 'int' 255
|   |-CallExpr 0x55d3ab05c2f8 <line:100:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c2e0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c1d0 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c328 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c2c0 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c268 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c248 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c230 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c1f0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c210 <col:20> 'int' 8
|   |     `-ImplicitCastExpr 0x55d3ab05c2a8 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c288 <col:25> 'int' 255
|   |-CallExpr 0x55d3ab05c468 <line:101:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c450 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c340 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c498 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c430 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c3d8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c3b8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c3a0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c360 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c380 <col:20> 'int' 16
|   |     `-ImplicitCastExpr 0x55d3ab05c418 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c3f8 <col:26> 'int' 255
|   |-CallExpr 0x55d3ab05c5d8 <line:102:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c5c0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c4b0 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c608 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c5a0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c548 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c528 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c510 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c4d0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c4f0 <col:20> 'int' 24
|   |     `-ImplicitCastExpr 0x55d3ab05c588 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c568 <col:26> 'int' 255
|   |-CallExpr 0x55d3ab05c748 <line:103:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c730 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c620 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c778 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c710 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c6b8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c698 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c680 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c640 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c660 <col:20> 'int' 32
|   |     `-ImplicitCastExpr 0x55d3ab05c6f8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c6d8 <col:26> 'int' 255
|   |-CallExpr 0x55d3ab05c8b8 <line:104:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05c8a0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c790 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05c8e8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c880 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c828 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c808 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c7f0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c7b0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c7d0 <col:20> 'int' 40
|   |     `-ImplicitCastExpr 0x55d3ab05c868 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c848 <col:26> 'int' 255
|   |-CallExpr 0x55d3ab05ca28 <line:105:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05ca10 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05c900 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55d3ab05ca58 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55d3ab05c9f0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55d3ab05c998 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55d3ab05c978 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55d3ab05c960 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55d3ab05c920 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55d3ab05c940 <col:20> 'int' 48
|   |     `-ImplicitCastExpr 0x55d3ab05c9d8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55d3ab05c9b8 <col:26> 'int' 255
|   `-CallExpr 0x55d3ab05cb98 <line:106:2, col:30> 'void'
|     |-ImplicitCastExpr 0x55d3ab05cb80 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x55d3ab05ca70 <col:2> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|     `-ImplicitCastExpr 0x55d3ab05cbc8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55d3ab05cb60 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|         |-ParenExpr 0x55d3ab05cb08 <col:14, col:22> 'uint64_t':'unsigned long'
|         | `-BinaryOperator 0x55d3ab05cae8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|         |   |-ImplicitCastExpr 0x55d3ab05cad0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|         |   | `-DeclRefExpr 0x55d3ab05ca90 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05be48 'val' 'uint64_t':'unsigned long'
|         |   `-IntegerLiteral 0x55d3ab05cab0 <col:20> 'int' 56
|         `-ImplicitCastExpr 0x55d3ab05cb48 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|           `-IntegerLiteral 0x55d3ab05cb28 <col:26> 'int' 255
|-FunctionDecl 0x55d3ab05dec0 <line:109:1, line:116:1> line:110:1 used transparent_crc 'void (uint64_t, char *, int)' static
| |-ParmVarDecl 0x55d3ab05cc40 <col:18, col:27> col:27 used val 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55d3ab05ccc0 <col:32, col:38> col:38 used vname 'char *'
| |-ParmVarDecl 0x55d3ab05cd40 <col:45, col:49> col:49 used flag 'int'
| `-CompoundStmt 0x55d3ab05e2f0 <line:111:1, line:116:1>
|   |-CallExpr 0x55d3ab05e038 <line:112:2, col:18> 'void'
|   | |-ImplicitCastExpr 0x55d3ab05e020 <col:2> 'void (*)(uint64_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55d3ab05df80 <col:2> 'void (uint64_t)' Function 0x55d3ab05bf50 'crc32_8bytes' 'void (uint64_t)'
|   | `-ImplicitCastExpr 0x55d3ab05e068 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |   `-DeclRefExpr 0x55d3ab05dfa0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55d3ab05cc40 'val' 'uint64_t':'unsigned long'
|   `-IfStmt 0x55d3ab05e2d0 <line:113:2, line:115:2>
|     |-ImplicitCastExpr 0x55d3ab05e0a0 <line:113:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x55d3ab05e080 <col:6> 'int' lvalue ParmVar 0x55d3ab05cd40 'flag' 'int'
|     `-CompoundStmt 0x55d3ab05e2b8 <col:12, line:115:2>
|       `-CallExpr 0x55d3ab05e230 <line:114:5, col:87> 'int'
|         |-ImplicitCastExpr 0x55d3ab05e218 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x55d3ab05e0b8 <col:5> 'int (const char *, ...)' Function 0x55d3ab017640 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x55d3ab05e288 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x55d3ab05e270 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x55d3ab05e110 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x55d3ab05e2a0 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x55d3ab05e150 <col:52> 'char *' lvalue ParmVar 0x55d3ab05ccc0 'vname' 'char *'
|         `-BinaryOperator 0x55d3ab05e1e0 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x55d3ab05e1c8 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab05e1b0 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab05e170 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x55d3ab05e190 <col:75> 'unsigned long' 4294967295
|-FunctionDecl 0x55d3ab05e5a0 <line:120:1, line:130:1> line:121:1 transparent_crc_bytes 'void (char *, int, char *, int)' static
| |-ParmVarDecl 0x55d3ab05e328 <col:24, col:30> col:30 used ptr 'char *'
| |-ParmVarDecl 0x55d3ab05e3a8 <col:35, col:39> col:39 used nbytes 'int'
| |-ParmVarDecl 0x55d3ab05e428 <col:47, col:53> col:53 used vname 'char *'
| |-ParmVarDecl 0x55d3ab05e4a8 <col:60, col:64> col:64 used flag 'int'
| `-CompoundStmt 0x55d3ab05ebd8 <line:122:1, line:130:1>
|   |-DeclStmt 0x55d3ab05e6e8 <line:123:5, col:10>
|   | `-VarDecl 0x55d3ab05e680 <col:5, col:9> col:9 used i 'int'
|   |-ForStmt 0x55d3ab05e968 <line:124:5, line:126:5>
|   | |-BinaryOperator 0x55d3ab05e740 <line:124:10, col:12> 'int' '='
|   | | |-DeclRefExpr 0x55d3ab05e700 <col:10> 'int' lvalue Var 0x55d3ab05e680 'i' 'int'
|   | | `-IntegerLiteral 0x55d3ab05e720 <col:12> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55d3ab05e7d0 <col:15, col:17> 'int' '<'
|   | | |-ImplicitCastExpr 0x55d3ab05e7a0 <col:15> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55d3ab05e760 <col:15> 'int' lvalue Var 0x55d3ab05e680 'i' 'int'
|   | | `-ImplicitCastExpr 0x55d3ab05e7b8 <col:17> 'int' <LValueToRValue>
|   | |   `-DeclRefExpr 0x55d3ab05e780 <col:17> 'int' lvalue ParmVar 0x55d3ab05e3a8 'nbytes' 'int'
|   | |-UnaryOperator 0x55d3ab05e810 <col:25, col:26> 'int' postfix '++'
|   | | `-DeclRefExpr 0x55d3ab05e7f0 <col:25> 'int' lvalue Var 0x55d3ab05e680 'i' 'int'
|   | `-CompoundStmt 0x55d3ab05e950 <col:30, line:126:5>
|   |   `-CallExpr 0x55d3ab05e8f0 <line:125:9, col:26> 'void'
|   |     |-ImplicitCastExpr 0x55d3ab05e8d8 <col:9> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   |     | `-DeclRefExpr 0x55d3ab05e828 <col:9> 'void (uint8_t)' Function 0x55d3ab05ba70 'crc32_byte' 'void (uint8_t)'
|   |     `-ImplicitCastExpr 0x55d3ab05e938 <col:20, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |       `-ImplicitCastExpr 0x55d3ab05e920 <col:20, col:25> 'char' <LValueToRValue>
|   |         `-ArraySubscriptExpr 0x55d3ab05e8b8 <col:20, col:25> 'char' lvalue
|   |           |-ImplicitCastExpr 0x55d3ab05e888 <col:20> 'char *' <LValueToRValue>
|   |           | `-DeclRefExpr 0x55d3ab05e848 <col:20> 'char *' lvalue ParmVar 0x55d3ab05e328 'ptr' 'char *'
|   |           `-ImplicitCastExpr 0x55d3ab05e8a0 <col:24> 'int' <LValueToRValue>
|   |             `-DeclRefExpr 0x55d3ab05e868 <col:24> 'int' lvalue Var 0x55d3ab05e680 'i' 'int'
|   `-IfStmt 0x55d3ab05ebb8 <line:127:2, line:129:2>
|     |-ImplicitCastExpr 0x55d3ab05e9c0 <line:127:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x55d3ab05e9a0 <col:6> 'int' lvalue ParmVar 0x55d3ab05e4a8 'flag' 'int'
|     `-CompoundStmt 0x55d3ab05eba0 <col:12, line:129:2>
|       `-CallExpr 0x55d3ab05eb18 <line:128:5, col:87> 'int'
|         |-ImplicitCastExpr 0x55d3ab05eb00 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x55d3ab05e9d8 <col:5> 'int (const char *, ...)' Function 0x55d3ab017640 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x55d3ab05eb70 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x55d3ab05eb58 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x55d3ab05e9f8 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x55d3ab05eb88 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x55d3ab05ea38 <col:52> 'char *' lvalue ParmVar 0x55d3ab05e428 'vname' 'char *'
|         `-BinaryOperator 0x55d3ab05eac8 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x55d3ab05eab0 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x55d3ab05ea98 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x55d3ab05ea58 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x55d3ab05ea78 <col:75> 'unsigned long' 4294967295
|-VarDecl 0x55d3ab05ec18 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/3.c:13:1, col:13> col:13 __undefined 'long' static
|-RecordDecl 0x55d3ab05ec80 <line:16:1, line:22:1> line:16:7 union U1 definition
| |-FieldDecl 0x55d3ab05ed30 <line:17:3, col:10> col:10 referenced f0 'int8_t':'signed char'
| |-FieldDecl 0x55d3ab05edd8 <line:18:3, col:17> col:12 f1 'unsigned int'
| | `-ConstantExpr 0x55d3ab05edb8 <col:17> 'int'
| |   |-value: Int 14
| |   `-IntegerLiteral 0x55d3ab05ed80 <col:17> 'int' 14
| |-FieldDecl 0x55d3ab05ee80 <line:19:3, col:17> col:12 f2 'unsigned int'
| | `-ConstantExpr 0x55d3ab05ee60 <col:17> 'int'
| |   |-value: Int 14
| |   `-IntegerLiteral 0x55d3ab05ee28 <col:17> 'int' 14
| |-FieldDecl 0x55d3ab05eee0 <line:20:3, col:12> col:12 f3 'uint64_t':'unsigned long'
| `-FieldDecl 0x55d3ab05ef40 <line:21:3, col:20> col:20 f4 'volatile int64_t':'volatile long'
|-VarDecl 0x55d3ab05f110 <line:25:1, col:73> col:17 used g_2 'union U1[6]' static cinit
| `-InitListExpr 0x55d3ab05f4b8 <col:26, col:73> 'union U1[6]'
|   |-InitListExpr 0x55d3ab05f538 <col:27, col:33> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|   | `-ImplicitCastExpr 0x55d3ab05f580 <col:28> 'int8_t':'signed char' <IntegralCast>
|   |   `-IntegerLiteral 0x55d3ab05f178 <col:28> 'long' 179
|   |-InitListExpr 0x55d3ab05f5a8 <col:36, col:39> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|   | `-ImplicitCastExpr 0x55d3ab05f5f0 <col:37> 'int8_t':'signed char' <IntegralCast>
|   |   `-IntegerLiteral 0x55d3ab05f1e0 <col:37> 'long' 1
|   |-InitListExpr 0x55d3ab05f618 <col:42, col:48> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|   | `-ImplicitCastExpr 0x55d3ab05f660 <col:43> 'int8_t':'signed char' <IntegralCast>
|   |   `-IntegerLiteral 0x55d3ab05f248 <col:43> 'long' 179
|   |-InitListExpr 0x55d3ab05f688 <col:51, col:57> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|   | `-ImplicitCastExpr 0x55d3ab05f6d0 <col:52> 'int8_t':'signed char' <IntegralCast>
|   |   `-IntegerLiteral 0x55d3ab05f2b0 <col:52> 'long' 179
|   |-InitListExpr 0x55d3ab05f6f8 <col:60, col:63> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|   | `-ImplicitCastExpr 0x55d3ab05f740 <col:61> 'int8_t':'signed char' <IntegralCast>
|   |   `-IntegerLiteral 0x55d3ab05f318 <col:61> 'long' 1
|   `-InitListExpr 0x55d3ab05f768 <col:66, col:72> 'union U1' field Field 0x55d3ab05ed30 'f0' 'int8_t':'signed char'
|     `-ImplicitCastExpr 0x55d3ab05f7b0 <col:67> 'int8_t':'signed char' <IntegralCast>
|       `-IntegerLiteral 0x55d3ab05f380 <col:67> 'long' 179
|-FunctionDecl 0x55d3ab05f920 <line:28:1, col:53> col:42 used func_1 'union U1 (void)' static
| `-OptimizeNoneAttr 0x55d3ab05f9c8 <col:16>
|-FunctionDecl 0x55d3ab05fac8 prev 0x55d3ab05f920 <line:36:1, col:90> col:42 used func_1 'union U1 (void)' static
| |-CompoundStmt 0x55d3ab05fce0 <col:55, col:90> MathErrno=1
| | `-ReturnStmt 0x55d3ab05fcd0 <col:75, col:87>
| |   `-ImplicitCastExpr 0x55d3ab05fcb0 <col:82, col:87> 'union U1' <LValueToRValue> MathErrno=1
| |     `-ArraySubscriptExpr 0x55d3ab05fc90 <col:82, col:87> 'union U1' lvalue
| |       |-ImplicitCastExpr 0x55d3ab05fc70 <col:82> 'union U1 *' <ArrayToPointerDecay> MathErrno=1
| |       | `-DeclRefExpr 0x55d3ab05fbc8 <col:82> 'union U1[6]' lvalue Var 0x55d3ab05f110 'g_2' 'union U1[6]'
| |       `-IntegerLiteral 0x55d3ab05fbe8 <col:86> 'int' 0
| `-OptimizeNoneAttr 0x55d3ab05fb70 <col:16>
`-FunctionDecl 0x55d3ab05ff58 <line:39:1, line:65:1> line:39:30 main 'int (int, char **)'
  |-ParmVarDecl 0x55d3ab05fd18 <col:35, col:39> col:39 used argc 'int'
  |-ParmVarDecl 0x55d3ab05fe30 <col:45, col:56> col:51 used argv 'char **'
  |-CompoundStmt 0x55d3ab061568 <col:59, line:65:1> MathErrno=1
  | |-CallExpr 0x55d3ab060100 <line:40:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab0600e0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab060068 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab060088 <col:20> 'int' 0
  | |-DeclStmt 0x55d3ab0601b8 <line:41:3, col:8>
  | | `-VarDecl 0x55d3ab060150 <col:3, col:7> col:7 used i 'int'
  | |-CallExpr 0x55d3ab060230 <line:42:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab060210 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab0601d0 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab0601f0 <col:20> 'int' 1
  | |-DeclStmt 0x55d3ab060308 <line:43:3, col:27>
  | | `-VarDecl 0x55d3ab060280 <col:3, col:26> col:7 used print_hash_value 'int' cinit
  | |   `-IntegerLiteral 0x55d3ab0602e8 <col:26> 'int' 0
  | |-CallExpr 0x55d3ab060380 <line:44:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab060360 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab060320 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab060340 <col:20> 'int' 2
  | |-IfStmt 0x55d3ab060740 <line:45:3, line:47:3>
  | | |-BinaryOperator 0x55d3ab060698 <line:45:7, col:44> 'int' '&&' MathErrno=1
  | | | |-BinaryOperator 0x55d3ab060418 <col:7, col:15> 'int' '==' MathErrno=1
  | | | | |-ImplicitCastExpr 0x55d3ab0603f8 <col:7> 'int' <LValueToRValue> MathErrno=1
  | | | | | `-DeclRefExpr 0x55d3ab0603b8 <col:7> 'int' lvalue ParmVar 0x55d3ab05fd18 'argc' 'int'
  | | | | `-IntegerLiteral 0x55d3ab0603d8 <col:15> 'int' 2
  | | | `-BinaryOperator 0x55d3ab060670 <col:20, col:44> 'int' '==' MathErrno=1
  | | |   |-CallExpr 0x55d3ab060590 <col:20, col:39> 'int' MathErrno=1
  | | |   | |-ImplicitCastExpr 0x55d3ab060570 <col:20> 'int (*)(const char *, const char *)' <FunctionToPointerDecay> MathErrno=1
  | | |   | | `-DeclRefExpr 0x55d3ab060440 <col:20> 'int (const char *, const char *)' Function 0x55d3aaf21e58 'strcmp' 'int (const char *, const char *)'
  | | |   | |-ImplicitCastExpr 0x55d3ab0605f0 <col:27, col:33> 'const char *' <NoOp> MathErrno=1
  | | |   | | `-ImplicitCastExpr 0x55d3ab0605d0 <col:27, col:33> 'char *' <LValueToRValue> MathErrno=1
  | | |   | |   `-ArraySubscriptExpr 0x55d3ab0604c0 <col:27, col:33> 'char *' lvalue
  | | |   | |     |-ImplicitCastExpr 0x55d3ab0604a0 <col:27> 'char **' <LValueToRValue> MathErrno=1
  | | |   | |     | `-DeclRefExpr 0x55d3ab060460 <col:27> 'char **' lvalue ParmVar 0x55d3ab05fe30 'argv' 'char **'
  | | |   | |     `-IntegerLiteral 0x55d3ab060480 <col:32> 'int' 1
  | | |   | `-ImplicitCastExpr 0x55d3ab060630 <col:36> 'const char *' <NoOp> MathErrno=1
  | | |   |   `-ImplicitCastExpr 0x55d3ab060610 <col:36> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | |   |     `-StringLiteral 0x55d3ab0604e0 <col:36> 'char[2]' lvalue "1"
  | | |   `-IntegerLiteral 0x55d3ab060650 <col:44> 'int' 0
  | | `-CompoundStmt 0x55d3ab060728 <col:47, line:47:3>
  | |   `-BinaryOperator 0x55d3ab060700 <line:46:5, col:24> 'int' '=' MathErrno=1
  | |     |-DeclRefExpr 0x55d3ab0606c0 <col:5> 'int' lvalue Var 0x55d3ab060280 'print_hash_value' 'int'
  | |     `-IntegerLiteral 0x55d3ab0606e0 <col:24> 'int' 1
  | |-CallExpr 0x55d3ab0607c0 <line:48:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab0607a0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab060760 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab060780 <col:20> 'int' 3
  | |-CallExpr 0x55d3ab060870 <line:49:3, col:23> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x55d3ab060850 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55d3ab0607f8 <col:3> 'void (void)' Function 0x55d3ab02cce0 'platform_main_begin' 'void (void)'
  | |-CallExpr 0x55d3ab060900 <line:50:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab0608e0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab0608a0 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab0608c0 <col:20> 'int' 4
  | |-CallExpr 0x55d3ab060978 <line:51:3, col:16> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x55d3ab060958 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55d3ab060938 <col:3> 'void (void)' Function 0x55d3ab05ae58 'crc32_gentab' 'void (void)'
  | |-CallExpr 0x55d3ab060a08 <line:52:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab0609e8 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab0609a8 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab0609c8 <col:20> 'int' 5
  | |-CallExpr 0x55d3ab060ae0 <line:53:3, col:10> 'union U1' MathErrno=1
  | | `-ImplicitCastExpr 0x55d3ab060ac0 <col:3> 'union U1 (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55d3ab060a40 <col:3> 'union U1 (void)' Function 0x55d3ab05fac8 'func_1' 'union U1 (void)'
  | |-CallExpr 0x55d3ab060b70 <line:54:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab060b50 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab060b10 <col:3> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55d3ab060b30 <col:20> 'int' 6
  | |-ForStmt 0x55d3ab0612f0 <line:55:3, line:62:3>
  | | |-BinaryOperator 0x55d3ab060be8 <line:55:8, col:12> 'int' '=' MathErrno=1
  | | | |-DeclRefExpr 0x55d3ab060ba8 <col:8> 'int' lvalue Var 0x55d3ab060150 'i' 'int'
  | | | `-IntegerLiteral 0x55d3ab060bc8 <col:12> 'int' 0
  | | |-<<<NULL>>>
  | | |-BinaryOperator 0x55d3ab060c70 <col:15, col:19> 'int' '<' MathErrno=1
  | | | |-ImplicitCastExpr 0x55d3ab060c50 <col:15> 'int' <LValueToRValue> MathErrno=1
  | | | | `-DeclRefExpr 0x55d3ab060c10 <col:15> 'int' lvalue Var 0x55d3ab060150 'i' 'int'
  | | | `-IntegerLiteral 0x55d3ab060c30 <col:19> 'int' 6
  | | |-UnaryOperator 0x55d3ab060cb8 <col:22, col:23> 'int' postfix '++' MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab060c98 <col:22> 'int' lvalue Var 0x55d3ab060150 'i' 'int'
  | | `-CompoundStmt 0x55d3ab0612c8 <col:27, line:62:3>
  | |   |-CallExpr 0x55d3ab060ed0 <line:56:5, col:61> 'void' MathErrno=1
  | |   | |-ImplicitCastExpr 0x55d3ab060eb0 <col:5> 'void (*)(uint64_t, char *, int)' <FunctionToPointerDecay> MathErrno=1
  | |   | | `-DeclRefExpr 0x55d3ab060cd8 <col:5> 'void (uint64_t, char *, int)' Function 0x55d3ab05dec0 'transparent_crc' 'void (uint64_t, char *, int)'
  | |   | |-ImplicitCastExpr 0x55d3ab060f38 <col:21, col:28> 'uint64_t':'unsigned long' <IntegralCast> MathErrno=1
  | |   | | `-ImplicitCastExpr 0x55d3ab060f18 <col:21, col:28> 'int8_t':'signed char' <LValueToRValue> MathErrno=1
  | |   | |   `-MemberExpr 0x55d3ab060d98 <col:21, col:28> 'int8_t':'signed char' lvalue .f0 0x55d3ab05ed30
  | |   | |     `-ArraySubscriptExpr 0x55d3ab060d78 <col:21, col:26> 'union U1' lvalue
  | |   | |       |-ImplicitCastExpr 0x55d3ab060d38 <col:21> 'union U1 *' <ArrayToPointerDecay> MathErrno=1
  | |   | |       | `-DeclRefExpr 0x55d3ab060cf8 <col:21> 'union U1[6]' lvalue Var 0x55d3ab05f110 'g_2' 'union U1[6]'
  | |   | |       `-ImplicitCastExpr 0x55d3ab060d58 <col:25> 'int' <LValueToRValue> MathErrno=1
  | |   | |         `-DeclRefExpr 0x55d3ab060d18 <col:25> 'int' lvalue Var 0x55d3ab060150 'i' 'int'
  | |   | |-ImplicitCastExpr 0x55d3ab060f58 <col:32> 'char *' <ArrayToPointerDecay> MathErrno=1
  | |   | | `-StringLiteral 0x55d3ab060e00 <col:32> 'char[10]' lvalue "g_2[i].f0"
  | |   | `-ImplicitCastExpr 0x55d3ab060f78 <col:45> 'int' <LValueToRValue> MathErrno=1
  | |   |   `-DeclRefExpr 0x55d3ab060e28 <col:45> 'int' lvalue Var 0x55d3ab060280 'print_hash_value' 'int'
  | |   |-CallExpr 0x55d3ab060ff8 <line:57:5, col:23> 'void' MathErrno=1
  | |   | |-ImplicitCastExpr 0x55d3ab060fd8 <col:5> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | |   | | `-DeclRefExpr 0x55d3ab060f98 <col:5> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | |   | `-IntegerLiteral 0x55d3ab060fb8 <col:22> 'int' 7
  | |   `-IfStmt 0x55d3ab0612a8 <line:58:5, line:61:5>
  | |     |-ImplicitCastExpr 0x55d3ab061050 <line:58:9> 'int' <LValueToRValue> MathErrno=1
  | |     | `-DeclRefExpr 0x55d3ab061030 <col:9> 'int' lvalue Var 0x55d3ab060280 'print_hash_value' 'int'
  | |     `-CompoundStmt 0x55d3ab061288 <col:27, line:61:5>
  | |       |-CallExpr 0x55d3ab0610d0 <line:59:7, col:25> 'void' MathErrno=1
  | |       | |-ImplicitCastExpr 0x55d3ab0610b0 <col:7> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | |       | | `-DeclRefExpr 0x55d3ab061070 <col:7> 'void (int)' Function 0x55d3aaf01fd0 'codemarker_alpha' 'void (int)'
  | |       | `-IntegerLiteral 0x55d3ab061090 <col:24> 'int' 8
  | |       `-CallExpr 0x55d3ab0611e8 <line:60:7, col:33> 'int' MathErrno=1
  | |         |-ImplicitCastExpr 0x55d3ab0611c8 <col:7> 'int (*)(const char *, ...)' <FunctionToPointerDecay> MathErrno=1
  | |         | `-DeclRefExpr 0x55d3ab061108 <col:7> 'int (const char *, ...)' Function 0x55d3ab017640 'printf' 'int (const char *, ...)'
  | |         |-ImplicitCastExpr 0x55d3ab061248 <col:14> 'const char *' <NoOp> MathErrno=1
  | |         | `-ImplicitCastExpr 0x55d3ab061228 <col:14> 'char *' <ArrayToPointerDecay> MathErrno=1
  | |         |   `-StringLiteral 0x55d3ab061160 <col:14> 'char[14]' lvalue "index = [%d]\n"
  | |         `-ImplicitCastExpr 0x55d3ab061268 <col:32> 'int' <LValueToRValue> MathErrno=1
  | |           `-DeclRefExpr 0x55d3ab061188 <col:32> 'int' lvalue Var 0x55d3ab060150 'i' 'int'
  | |-CallExpr 0x55d3ab061490 <line:63:3, col:67> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55d3ab061470 <col:3> 'void (*)(uint32_t, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55d3ab061328 <col:3> 'void (uint32_t, int)' Function 0x55d3ab02cfb0 'platform_main_end' 'void (uint32_t, int)'
  | | |-ImplicitCastExpr 0x55d3ab0614d0 <col:21, col:37> 'uint32_t':'unsigned int' <IntegralCast> MathErrno=1
  | | | `-BinaryOperator 0x55d3ab0613c8 <col:21, col:37> 'unsigned long' '^' MathErrno=1
  | | |   |-ImplicitCastExpr 0x55d3ab0613a8 <col:21> 'unsigned long' <IntegralCast> MathErrno=1
  | | |   | `-ImplicitCastExpr 0x55d3ab061388 <col:21> 'uint32_t':'unsigned int' <LValueToRValue> MathErrno=1
  | | |   |   `-DeclRefExpr 0x55d3ab061348 <col:21> 'uint32_t':'unsigned int' lvalue Var 0x55d3ab059c78 'crc32_context' 'uint32_t':'unsigned int'
  | | |   `-IntegerLiteral 0x55d3ab061368 <col:37> 'unsigned long' 4294967295
  | | `-ImplicitCastExpr 0x55d3ab0614f0 <col:51> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x55d3ab0613f0 <col:51> 'int' lvalue Var 0x55d3ab060280 'print_hash_value' 'int'
  | `-ReturnStmt 0x55d3ab061530 <line:64:3, col:10>
  |   `-IntegerLiteral 0x55d3ab061510 <col:10> 'int' 0
  `-OptimizeNoneAttr 0x55d3ab060010 <line:39:16>

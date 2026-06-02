TranslationUnitDecl 0x555dfef8a448 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x555dfef8b020 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x555dfef8aa10 '__int128'
|-TypedefDecl 0x555dfef8b090 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x555dfef8aa30 'unsigned __int128'
|-TypedefDecl 0x555dfef8b3a0 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x555dfef8b170 'struct __NSConstantString_tag'
|   `-Record 0x555dfef8b0e8 '__NSConstantString_tag'
|-TypedefDecl 0x555dfef8acc8 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x555dfef8ac80 'char *'
|   `-BuiltinType 0x555dfef8a4f0 'char'
|-TypedefDecl 0x555dfef8afb0 <<invalid sloc>> <invalid sloc> implicit referenced __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x555dfef8af60 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x555dfef8ada0 'struct __va_list_tag'
|     `-Record 0x555dfef8ad20 '__va_list_tag'
|-FunctionDecl 0x555dfeff2df0 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/MarkerDefinition.h:3:1, line:7:1> line:4:13 used codemarker_alpha 'void (int)' static
| |-ParmVarDecl 0x555dfeff2d20 <col:30, col:34> col:34 used markerID 'int'
| |-CompoundStmt 0x555dfeff3200 <col:44, line:7:1>
| | |-DeclStmt 0x555dfeff3048 <line:5:5, col:34>
| | | `-VarDecl 0x555dfeff2fa8 <col:5, col:26> col:18 dummy 'volatile int' cinit
| | |   `-ImplicitCastExpr 0x555dfeff3030 <col:26> 'int' <LValueToRValue>
| | |     `-DeclRefExpr 0x555dfeff3010 <col:26> 'int' lvalue ParmVar 0x555dfeff2d20 'markerID' 'int'
| | `-GCCAsmStmt 0x555dfeff3188 <line:6:2, col:49>
| |   `-ImplicitCastExpr 0x555dfeff3170 <col:29> 'int' <LValueToRValue>
| |     `-DeclRefExpr 0x555dfeff3100 <col:29> 'int' lvalue ParmVar 0x555dfeff2d20 'markerID' 'int'
| |-NoInlineAttr 0x555dfeff2ea0 <line:3:16>
| |-UsedAttr 0x555dfeff2ef8 <col:26>
| `-NoThrowAttr 0x555dfeff2f20 <col:32>
|-TypedefDecl 0x555dfeff3238 </usr/bin/../lib/clang/21/include/__stddef_size_t.h:18:1, col:23> col:23 referenced size_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-FunctionDecl 0x555dfeff35b8 </usr/include/string.h:43:14> col:14 implicit memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dfeff36c0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dfeff3728 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dfeff3790 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dfeff3660 <<invalid sloc>> Implicit 946
| `-NoThrowAttr 0x555dfeff3810 <col:14> Implicit
|-FunctionDecl 0x555dfeff3838 prev 0x555dfeff35b8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:43:14 memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dfeff32a8 <col:22, col:39> col:39 __dest 'void *restrict'
| |-ParmVarDecl 0x555dfeff3358 <col:47, col:70> col:70 __src 'const void *restrict'
| |-ParmVarDecl 0x555dfeff3430 <line:44:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dfeff3998 <<invalid sloc>> Inherited Implicit 946
| |-NoThrowAttr 0x555dfeff38f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dfeff3950 <line:555:57, /usr/include/string.h:44:44> 1 2
|-FunctionDecl 0x555dfeff3c08 <line:47:14> col:14 implicit memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff00dec0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff00df28 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff00df90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dfeff3cb0 <<invalid sloc>> Implicit 948
| `-NoThrowAttr 0x555dff00e010 <col:14> Implicit
|-FunctionDecl 0x555dff00e038 prev 0x555dfeff3c08 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:47:14 memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dfeff39e0 <col:23, col:29> col:29 __dest 'void *'
| |-ParmVarDecl 0x555dfeff3a60 <col:37, col:49> col:49 __src 'const void *'
| |-ParmVarDecl 0x555dfeff3ad8 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff00e198 <<invalid sloc>> Inherited Implicit 948
| |-NoThrowAttr 0x555dff00e0f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff00e150 <line:555:57, /usr/include/string.h:48:30> 1 2
|-FunctionDecl 0x555dff00e4e8 <line:54:14> col:14 implicit memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff00e5f0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff00e658 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff00e6c0 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x555dff00e728 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff00e590 <<invalid sloc>> Implicit 951
|-FunctionDecl 0x555dff00e7b0 prev 0x555dff00e4e8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:54:14 memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff00e1e0 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x555dff00e260 <col:48, col:71> col:71 __src 'const void *restrict'
| |-ParmVarDecl 0x555dff00e2e0 <line:55:9, col:13> col:13 __c 'int'
| |-ParmVarDecl 0x555dff00e358 <col:18, col:25> col:25 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff00e918 <<invalid sloc>> Inherited Implicit 951
| |-NoThrowAttr 0x555dff00e878 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff00e8d0 <line:555:57, /usr/include/string.h:56:29> 1 2
|-FunctionDecl 0x555dff00ebb8 <line:61:14> col:14 implicit memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff00ecc0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff00ed28 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x555dff00ed90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff00ec60 <<invalid sloc>> Implicit 950
| `-NoThrowAttr 0x555dff00ee10 <col:14> Implicit
|-FunctionDecl 0x555dff00fef0 prev 0x555dff00ebb8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:61:14 memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff00e960 <col:22, col:28> col:28 __s 'void *'
| |-ParmVarDecl 0x555dff00e9e0 <col:33, col:37> col:37 __c 'int'
| |-ParmVarDecl 0x555dff00ea58 <col:42, col:49> col:49 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff010048 <<invalid sloc>> Inherited Implicit 950
| |-NoThrowAttr 0x555dff00ffb0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff010008 <line:555:57, /usr/include/string.h:61:75> 1
|-FunctionDecl 0x555dff010308 <line:64:12> col:12 implicit memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff010410 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff010478 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff0104e0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff0103b0 <<invalid sloc>> Implicit 944
|-FunctionDecl 0x555dff010560 prev 0x555dff010308 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:64:12 memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff010090 <col:20, col:32> col:32 __s1 'const void *'
| |-ParmVarDecl 0x555dff010110 <col:38, col:50> col:50 __s2 'const void *'
| |-ParmVarDecl 0x555dff010188 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff0106e8 <<invalid sloc>> Inherited Implicit 944
| |-NoThrowAttr 0x555dff010620 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff010678 <line:479:45>
| `-NonNullAttr 0x555dff0106a0 <line:555:57, /usr/include/string.h:65:49> 1 2
|-FunctionDecl 0x555dff010910 <line:80:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:80:12 __memcmpeq 'int (const void *, const void *, size_t)' extern
| |-ParmVarDecl 0x555dff010730 <col:24, col:36> col:36 __s1 'const void *'
| |-ParmVarDecl 0x555dff0107b0 <col:42, col:54> col:54 __s2 'const void *'
| |-ParmVarDecl 0x555dff010828 <col:60, col:67> col:67 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff0109d0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff010a28 <line:479:45>
| `-NonNullAttr 0x555dff010a50 <line:555:57, /usr/include/string.h:81:49> 1 2
|-FunctionDecl 0x555dff010d08 <line:107:14> col:14 implicit memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff010e10 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff010e78 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x555dff010f00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff010db0 <<invalid sloc>> Implicit 943
| `-NoThrowAttr 0x555dff010f80 <col:14> Implicit
|-FunctionDecl 0x555dff010fa8 prev 0x555dff010d08 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:107:14 memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x555dff010ab0 <col:22, col:34> col:34 __s 'const void *'
| |-ParmVarDecl 0x555dff010b30 <col:39, col:43> col:43 __c 'int'
| |-ParmVarDecl 0x555dff010ba8 <col:48, col:55> col:55 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff011128 <<invalid sloc>> Inherited Implicit 943
| |-NoThrowAttr 0x555dff011068 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0110c0 <line:479:45>
| `-NonNullAttr 0x555dff0110e8 <line:555:57, /usr/include/string.h:108:47> 1
|-FunctionDecl 0x555dff011358 <line:141:14> col:14 implicit strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff011460 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff0114c8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff011400 <<invalid sloc>> Implicit 1238
| `-NoThrowAttr 0x555dff011540 <col:14> Implicit
|-FunctionDecl 0x555dff011568 prev 0x555dff011358 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:141:14 strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff011170 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff0111f0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x555dff0116b8 <<invalid sloc>> Inherited Implicit 1238
| |-NoThrowAttr 0x555dff011620 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff011678 <line:555:57, /usr/include/string.h:142:30> 1 2
|-FunctionDecl 0x555dff011978 <line:144:14> col:14 implicit strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff011a80 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff011ae8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff011b50 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff011a20 <<invalid sloc>> Implicit 1249
| `-NoThrowAttr 0x555dff011bd0 <col:14> Implicit
|-FunctionDecl 0x555dff011bf8 prev 0x555dff011978 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:144:14 strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff011700 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff011780 <line:145:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff0117f8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff011d58 <<invalid sloc>> Inherited Implicit 1249
| |-NoThrowAttr 0x555dff011cb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff011d10 <line:555:57, /usr/include/string.h:146:30> 1 2
|-FunctionDecl 0x555dff011f10 <line:149:14> col:14 implicit strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff012018 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff012080 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff011fb8 <<invalid sloc>> Implicit 1232
| `-NoThrowAttr 0x555dff0120f8 <col:14> Implicit
|-FunctionDecl 0x555dff012120 prev 0x555dff011f10 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:149:14 strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff011da0 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff011e20 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x555dff012278 <<invalid sloc>> Inherited Implicit 1232
| |-NoThrowAttr 0x555dff0121d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff012230 <line:555:57, /usr/include/string.h:150:30> 1 2
|-FunctionDecl 0x555dff0124a0 <line:152:14> col:14 implicit strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0125a8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff012610 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff012678 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff012548 <<invalid sloc>> Implicit 1245
| `-NoThrowAttr 0x555dff0126f8 <col:14> Implicit
|-FunctionDecl 0x555dff012720 prev 0x555dff0124a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:152:14 strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0122c0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff012340 <col:48, col:71> col:71 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff0123b8 <line:153:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff012878 <<invalid sloc>> Inherited Implicit 1245
| |-NoThrowAttr 0x555dff0127e0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff012838 <line:555:57, /usr/include/string.h:153:45> 1 2
|-FunctionDecl 0x555dff012a68 <line:156:12> col:12 implicit used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff012b70 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff012bd8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff012b10 <<invalid sloc>> Implicit 1236
| `-NoThrowAttr 0x555dff012c50 <col:12> Implicit
|-FunctionDecl 0x555dff012c78 prev 0x555dff012a68 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:156:12 used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff0128c0 <col:20, col:32> col:32 __s1 'const char *'
| |-ParmVarDecl 0x555dff012940 <col:38, col:50> col:50 __s2 'const char *'
| |-BuiltinAttr 0x555dff012df8 <<invalid sloc>> Inherited Implicit 1236
| |-NoThrowAttr 0x555dff012d30 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff012d88 <line:479:45>
| `-NonNullAttr 0x555dff012db0 <line:555:57, /usr/include/string.h:157:49> 1 2
|-FunctionDecl 0x555dff013e28 <line:159:12> col:12 implicit strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff013f30 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff013f98 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff014000 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff013ed0 <<invalid sloc>> Implicit 1247
| `-NoThrowAttr 0x555dff014080 <col:12> Implicit
|-FunctionDecl 0x555dff0140a8 prev 0x555dff013e28 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:159:12 strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff012e40 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x555dff013c30 <col:39, col:51> col:51 __s2 'const char *'
| |-ParmVarDecl 0x555dff013ca8 <col:57, col:64> col:64 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff014228 <<invalid sloc>> Inherited Implicit 1247
| |-NoThrowAttr 0x555dff014168 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0141c0 <line:479:45>
| `-NonNullAttr 0x555dff0141e8 <line:555:57, /usr/include/string.h:160:49> 1 2
|-FunctionDecl 0x555dff0143d0 <line:163:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:163:12 strcoll 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff014270 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x555dff0142f0 <col:39, col:51> col:51 __s2 'const char *'
| |-NoThrowAttr 0x555dff014488 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0144e0 <line:479:45>
| `-NonNullAttr 0x555dff014508 <line:555:57, /usr/include/string.h:164:49> 1 2
|-FunctionDecl 0x555dff0147b0 <line:166:15> col:15 implicit strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0148b8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff014920 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff014988 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff014858 <<invalid sloc>> Implicit 1279
|-FunctionDecl 0x555dff014a08 prev 0x555dff0147b0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:166:15 strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff014560 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff0145e0 <line:167:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff014658 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff014b68 <<invalid sloc>> Inherited Implicit 1279
| |-NoThrowAttr 0x555dff014ac8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff014b20 <line:555:57, /usr/include/string.h:168:26> 2
|-RecordDecl 0x555dff014b98 </usr/include/bits/types/__locale_t.h:27:1, line:39:1> line:27:8 struct __locale_struct definition
| |-RecordDecl 0x555dff015340 parent 0x555dfef8a448 <line:30:3, col:10> col:10 struct __locale_data
| |-FieldDecl 0x555dff015568 <col:3, col:37> col:25 __locales 'struct __locale_data *[13]'
| |-FieldDecl 0x555dff015608 <line:33:3, col:29> col:29 __ctype_b 'const unsigned short *'
| |-FieldDecl 0x555dff015670 <line:34:3, col:14> col:14 __ctype_tolower 'const int *'
| |-FieldDecl 0x555dff0156d8 <line:35:3, col:14> col:14 __ctype_toupper 'const int *'
| `-FieldDecl 0x555dff0157c8 <line:38:3, col:25> col:15 __names 'const char *[13]'
|-TypedefDecl 0x555dff0158d8 <line:41:1, col:33> col:33 referenced __locale_t 'struct __locale_struct *'
| `-PointerType 0x555dff015880 'struct __locale_struct *'
|   `-ElaboratedType 0x555dff015820 'struct __locale_struct' sugar
|     `-RecordType 0x555dff015320 'struct __locale_struct'
|       `-Record 0x555dff014b98 '__locale_struct'
|-TypedefDecl 0x555dff0159a0 </usr/include/bits/types/locale_t.h:24:1, col:20> col:20 referenced locale_t '__locale_t':'struct __locale_struct *'
| `-ElaboratedType 0x555dff015960 '__locale_t' sugar
|   `-TypedefType 0x555dff015930 '__locale_t' sugar
|     |-Typedef 0x555dff0158d8 '__locale_t'
|     `-PointerType 0x555dff015880 'struct __locale_struct *'
|       `-ElaboratedType 0x555dff015820 'struct __locale_struct' sugar
|         `-RecordType 0x555dff015320 'struct __locale_struct'
|           `-Record 0x555dff014b98 '__locale_struct'
|-FunctionDecl 0x555dff015d18 </usr/include/string.h:175:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:175:12 strcoll_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x555dff015a10 <col:23, col:35> col:35 __s1 'const char *'
| |-ParmVarDecl 0x555dff015a90 <col:41, col:53> col:53 __s2 'const char *'
| |-ParmVarDecl 0x555dff015b70 <col:59, col:68> col:68 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x555dff015dd8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff015e30 <line:479:45>
| `-NonNullAttr 0x555dff015e58 <line:555:57, /usr/include/string.h:176:52> 1 2 3
|-FunctionDecl 0x555dff0161b0 <line:179:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:179:15 strxfrm_l 'size_t (char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x555dff015eb8 <col:26, col:32> col:32 __dest 'char *'
| |-ParmVarDecl 0x555dff015f38 <col:40, col:52> col:52 __src 'const char *'
| |-ParmVarDecl 0x555dff015fb0 <col:59, col:66> col:66 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff016028 <line:180:5, col:14> col:14 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x555dff016278 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff0162d0 <line:555:57, /usr/include/string.h:180:43> 2 4
|-FunctionDecl 0x555dff017448 <line:187:14> col:14 implicit strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x555dff017550 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff0174f0 <<invalid sloc>> Implicit 1240
| `-NoThrowAttr 0x555dff0175c0 <col:14> Implicit
|-FunctionDecl 0x555dff0175e8 prev 0x555dff017448 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:187:14 strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x555dff017358 <col:22, col:34> col:34 __s 'const char *'
| |-BuiltinAttr 0x555dff017768 <<invalid sloc>> Inherited Implicit 1240
| |-NoThrowAttr 0x555dff017698 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x555dff0176f0 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x555dff017728 <line:555:57, /usr/include/string.h:188:48> 1
|-FunctionDecl 0x555dff017968 <line:195:14> col:14 implicit strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff017a70 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff017ad8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff017a10 <<invalid sloc>> Implicit 1272
| `-NoThrowAttr 0x555dff017b50 <col:14> Implicit
|-FunctionDecl 0x555dff017b78 prev 0x555dff017968 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:195:14 strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0177b0 <col:23, col:35> col:35 __string 'const char *'
| |-ParmVarDecl 0x555dff017828 <col:45, col:52> col:52 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff017d08 <<invalid sloc>> Inherited Implicit 1272
| |-NoThrowAttr 0x555dff017c30 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x555dff017c88 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x555dff017cc0 <line:555:57, /usr/include/string.h:196:48> 1
|-FunctionDecl 0x555dff017ed8 <line:246:14> col:14 implicit strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff017fe0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff018048 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff017f80 <<invalid sloc>> Implicit 1234
| `-NoThrowAttr 0x555dff0180c0 <col:14> Implicit
|-FunctionDecl 0x555dff0180e8 prev 0x555dff017ed8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:246:14 strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff017d50 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x555dff017dd0 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x555dff018268 <<invalid sloc>> Inherited Implicit 1234
| |-NoThrowAttr 0x555dff0181a0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0181f8 <line:479:45>
| `-NonNullAttr 0x555dff018220 <line:555:57, /usr/include/string.h:247:46> 1
|-FunctionDecl 0x555dff018410 <line:273:14> col:14 implicit strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff018518 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff018580 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff0184b8 <<invalid sloc>> Implicit 1278
| `-NoThrowAttr 0x555dff0185f8 <col:14> Implicit
|-FunctionDecl 0x555dff018620 prev 0x555dff018410 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:273:14 strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff0182b0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x555dff018350 <col:40, col:44> col:44 __c 'int'
| |-BuiltinAttr 0x555dff018798 <<invalid sloc>> Inherited Implicit 1278
| |-NoThrowAttr 0x555dff0186d8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff018730 <line:479:45>
| `-NonNullAttr 0x555dff018758 <line:555:57, /usr/include/string.h:274:46> 1
|-FunctionDecl 0x555dff018920 <line:286:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:286:14 strchrnul 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff0187e0 <col:25, col:37> col:37 __s 'const char *'
| |-ParmVarDecl 0x555dff018860 <col:42, col:46> col:46 __c 'int'
| |-NoThrowAttr 0x555dff0189d8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff018a30 <line:479:45>
| `-NonNullAttr 0x555dff018a58 <line:555:57, /usr/include/string.h:287:46> 1
|-FunctionDecl 0x555dff018c90 <line:293:15> col:15 implicit strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff018d98 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff018e00 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x555dff018d38 <<invalid sloc>> Implicit 1262
|-FunctionDecl 0x555dff018e78 prev 0x555dff018c90 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:293:15 strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff018ab0 <col:24, col:36> col:36 __s 'const char *'
| |-ParmVarDecl 0x555dff018b30 <col:41, col:53> col:53 __reject 'const char *'
| |-BuiltinAttr 0x555dff018ff8 <<invalid sloc>> Inherited Implicit 1262
| |-NoThrowAttr 0x555dff018f30 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff018f88 <line:479:45>
| `-NonNullAttr 0x555dff018fb0 <line:555:57, /usr/include/string.h:294:49> 1 2
|-FunctionDecl 0x555dff019198 <line:297:15> col:15 implicit strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff0192a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff019360 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff019240 <<invalid sloc>> Implicit 1251
| `-NoThrowAttr 0x555dff0193d8 <col:15> Implicit
|-FunctionDecl 0x555dff019400 prev 0x555dff019198 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:297:15 strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff019040 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x555dff0190c0 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x555dff019578 <<invalid sloc>> Inherited Implicit 1251
| |-NoThrowAttr 0x555dff0194b8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff019510 <line:479:45>
| `-NonNullAttr 0x555dff019538 <line:555:57, /usr/include/string.h:298:49> 1 2
|-FunctionDecl 0x555dff019768 <line:323:14> col:14 implicit strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff019870 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff0198d8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff019810 <<invalid sloc>> Implicit 1276
| `-NoThrowAttr 0x555dff019950 <col:14> Implicit
|-FunctionDecl 0x555dff019978 prev 0x555dff019768 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:323:14 strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff0195c0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x555dff019640 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x555dff019af8 <<invalid sloc>> Inherited Implicit 1276
| |-NoThrowAttr 0x555dff019a30 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff019a88 <line:479:45>
| `-NonNullAttr 0x555dff019ab0 <line:555:57, /usr/include/string.h:324:49> 1 2
|-FunctionDecl 0x555dff019ca0 <line:350:14> col:14 implicit strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff019da8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff019e10 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff019d48 <<invalid sloc>> Implicit 1253
| `-NoThrowAttr 0x555dff019e88 <col:14> Implicit
|-FunctionDecl 0x555dff019eb0 prev 0x555dff019ca0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:350:14 strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff019b40 <col:22, col:34> col:34 __haystack 'const char *'
| |-ParmVarDecl 0x555dff019bc0 <col:46, col:58> col:58 __needle 'const char *'
| |-BuiltinAttr 0x555dff01a028 <<invalid sloc>> Inherited Implicit 1253
| |-NoThrowAttr 0x555dff019f68 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff019fc0 <line:479:45>
| `-NonNullAttr 0x555dff019fe8 <line:555:57, /usr/include/string.h:351:49> 1 2
|-FunctionDecl 0x555dff01a1b0 <line:356:14> col:14 implicit strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff01a2b8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff0082a0 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x555dff01a258 <<invalid sloc>> Implicit 1261
|-FunctionDecl 0x555dff008318 prev 0x555dff01a1b0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:356:14 strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff01a070 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x555dff01a0f0 <col:44, col:67> col:67 __delim 'const char *restrict'
| |-BuiltinAttr 0x555dff008468 <<invalid sloc>> Inherited Implicit 1261
| |-NoThrowAttr 0x555dff0083d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff008428 <line:555:57, /usr/include/string.h:357:27> 2
|-FunctionDecl 0x555dff008768 <line:361:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:361:14 __strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x555dff0084b0 <col:26, col:43> col:43 __s 'char *restrict'
| |-ParmVarDecl 0x555dff008530 <line:362:5, col:28> col:28 __delim 'const char *restrict'
| |-ParmVarDecl 0x555dff0085e8 <line:363:5, col:23> col:23 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x555dff008828 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff008880 <line:555:57, /usr/include/string.h:364:30> 2 3
|-FunctionDecl 0x555dff008ac8 <line:366:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:366:14 strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x555dff0088e0 <col:24, col:41> col:41 __s 'char *restrict'
| |-ParmVarDecl 0x555dff008960 <col:46, col:69> col:69 __delim 'const char *restrict'
| |-ParmVarDecl 0x555dff0089e0 <line:367:10, col:28> col:28 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x555dff008b88 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff008be0 <line:555:57, /usr/include/string.h:368:30> 2 3
|-FunctionDecl 0x555dff008da0 <line:380:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:380:14 strcasestr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff008c40 <col:26, col:38> col:38 __haystack 'const char *'
| |-ParmVarDecl 0x555dff008cc0 <col:50, col:62> col:62 __needle 'const char *'
| |-NoThrowAttr 0x555dff008e58 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff008eb0 <line:479:45>
| `-NonNullAttr 0x555dff008ed8 <line:555:57, /usr/include/string.h:381:49> 1 2
|-FunctionDecl 0x555dff0092b0 <line:389:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:389:14 memmem 'void *(const void *, size_t, const void *, size_t)' extern
| |-ParmVarDecl 0x555dff008f30 <col:22, col:34> col:34 __haystack 'const void *'
| |-ParmVarDecl 0x555dff008fa8 <col:46, col:53> col:53 __haystacklen 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff009028 <line:390:8, col:20> col:20 __needle 'const void *'
| |-ParmVarDecl 0x555dff0090a0 <col:30, col:37> col:37 __needlelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff009378 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0093d0 <line:479:45>
| `-NonNullAttr 0x555dff0093f8 <line:555:57, /usr/include/string.h:391:49> 1 3
|-FunctionDecl 0x555dff009630 <line:397:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:397:14 __mempcpy 'void *(void *restrict, const void *restrict, size_t)' extern
| |-ParmVarDecl 0x555dff009450 <col:25, col:42> col:42 __dest 'void *restrict'
| |-ParmVarDecl 0x555dff0094d0 <line:398:4, col:27> col:27 __src 'const void *restrict'
| |-ParmVarDecl 0x555dff009548 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff0096f0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff009748 <line:555:57, /usr/include/string.h:399:30> 1 2
|-FunctionDecl 0x555dff009980 <line:400:14> col:14 implicit mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff009a88 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff009af0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff009b58 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff009a28 <<invalid sloc>> Implicit 955
|-FunctionDecl 0x555dff009bd8 prev 0x555dff009980 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:400:14 mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0097a0 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x555dff009820 <line:401:9, col:32> col:32 __src 'const void *restrict'
| |-ParmVarDecl 0x555dff009898 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff009d38 <<invalid sloc>> Inherited Implicit 955
| |-NoThrowAttr 0x555dff009c98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff009cf0 <line:555:57, /usr/include/string.h:402:30> 1 2
|-FunctionDecl 0x555dff009eb0 <line:407:15> col:15 implicit strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x555dff009fb8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff009f58 <<invalid sloc>> Implicit 1243
| `-NoThrowAttr 0x555dff00a028 <col:15> Implicit
|-FunctionDecl 0x555dff00a050 prev 0x555dff009eb0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:407:15 strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x555dff009d80 <col:23, col:35> col:35 __s 'const char *'
| |-BuiltinAttr 0x555dff00a1c8 <<invalid sloc>> Inherited Implicit 1243
| |-NoThrowAttr 0x555dff00a100 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff00a158 <line:479:45>
| `-NonNullAttr 0x555dff00a180 <line:555:57, /usr/include/string.h:408:46> 1
|-FunctionDecl 0x555dff020ca0 <line:413:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:413:15 strnlen 'size_t (const char *, size_t)' extern
| |-ParmVarDecl 0x555dff00a210 <col:24, col:36> col:36 __string 'const char *'
| |-ParmVarDecl 0x555dff020b60 <col:46, col:53> col:53 __maxlen 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff020d58 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff020db0 <line:479:45>
| `-NonNullAttr 0x555dff020dd8 <line:555:57, /usr/include/string.h:414:46> 1
|-FunctionDecl 0x555dff020f08 <line:419:14> col:14 implicit strerror 'char *(int)' extern
| |-ParmVarDecl 0x555dff021010 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x555dff020fb0 <<invalid sloc>> Implicit 1241
|-FunctionDecl 0x555dff021080 prev 0x555dff020f08 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:419:14 strerror 'char *(int)' extern
| |-ParmVarDecl 0x555dff020e30 <col:24, col:28> col:28 __errnum 'int'
| |-BuiltinAttr 0x555dff021188 <<invalid sloc>> Inherited Implicit 1241
| `-NoThrowAttr 0x555dff021130 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff021488 </usr/include/string.h:432:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:432:28 strerror_r 'int (int, char *, size_t)' extern
| |-ParmVarDecl 0x555dff0211d0 <line:433:8, col:12> col:12 __errnum 'int'
| |-ParmVarDecl 0x555dff021250 <col:22, col:28> col:28 __buf 'char *'
| |-ParmVarDecl 0x555dff0212c8 <col:35, col:42> col:42 __buflen 'size_t':'unsigned long'
| |-AsmLabelAttr 0x555dff021530 <<scratch space>:39:1> "__xpg_strerror_r" IsLiteralLabel
| |-NoThrowAttr 0x555dff0215c8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff0215f0 <line:555:57, /usr/include/string.h:434:38> 2
|-FunctionDecl 0x555dff0217e8 <line:458:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:458:14 strerror_l 'char *(int, locale_t)' extern
| |-ParmVarDecl 0x555dff021650 <col:26, col:30> col:30 __errnum 'int'
| |-ParmVarDecl 0x555dff0216c8 <col:40, col:49> col:49 __l 'locale_t':'struct __locale_struct *'
| `-NoThrowAttr 0x555dff0218a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff024e80 </usr/include/strings.h:34:12> col:12 implicit bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff024f88 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff024ff0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff025058 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff024f28 <<invalid sloc>> Implicit 179
|-FunctionDecl 0x555dff0250d8 prev 0x555dff024e80 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:34:12 bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff021910 <col:18, col:30> col:30 __s1 'const void *'
| |-ParmVarDecl 0x555dff021990 <col:36, col:48> col:48 __s2 'const void *'
| |-ParmVarDecl 0x555dff021a08 <col:54, col:61> col:61 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff025258 <<invalid sloc>> Inherited Implicit 179
| |-NoThrowAttr 0x555dff025198 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0251f0 <line:479:45>
| `-NonNullAttr 0x555dff025218 <line:555:57, /usr/include/strings.h:35:49> 1 2
|-FunctionDecl 0x555dff025510 <line:38:13> col:13 implicit bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff025618 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff025680 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff0256e8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff0255b8 <<invalid sloc>> Implicit 186
| `-NoThrowAttr 0x555dff025768 <col:13> Implicit
|-FunctionDecl 0x555dff025790 prev 0x555dff025510 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:38:13 bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0252a0 <col:20, col:32> col:32 __src 'const void *'
| |-ParmVarDecl 0x555dff025320 <col:39, col:45> col:45 __dest 'void *'
| |-ParmVarDecl 0x555dff025398 <col:53, col:60> col:60 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff0258e8 <<invalid sloc>> Inherited Implicit 186
| |-NoThrowAttr 0x555dff025850 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff0258a8 <line:555:57, /usr/include/strings.h:39:27> 1 2
|-FunctionDecl 0x555dff025ae0 <line:42:13> col:13 implicit bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff025be8 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff025c50 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff025b88 <<invalid sloc>> Implicit 184
| `-NoThrowAttr 0x555dff025cc8 <col:13> Implicit
|-FunctionDecl 0x555dff025cf0 prev 0x555dff025ae0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:42:13 bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x555dff025930 <col:20, col:26> col:26 __s 'void *'
| |-ParmVarDecl 0x555dff0259a8 <col:31, col:38> col:38 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff025e48 <<invalid sloc>> Inherited Implicit 184
| |-NoThrowAttr 0x555dff025da8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff025e00 <line:555:57, /usr/include/strings.h:42:64> 1
|-FunctionDecl 0x555dff025fe8 <line:68:14> col:14 implicit index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff0260f0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff026158 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff026090 <<invalid sloc>> Implicit 743
| `-NoThrowAttr 0x555dff0261d0 <col:14> Implicit
|-FunctionDecl 0x555dff0261f8 prev 0x555dff025fe8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:68:14 index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff025ea8 <col:21, col:33> col:33 __s 'const char *'
| |-ParmVarDecl 0x555dff025f28 <col:38, col:42> col:42 __c 'int'
| |-BuiltinAttr 0x555dff026378 <<invalid sloc>> Inherited Implicit 743
| |-NoThrowAttr 0x555dff0262b0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff026308 <line:479:45>
| `-NonNullAttr 0x555dff026330 <line:555:57, /usr/include/strings.h:69:46> 1
|-FunctionDecl 0x555dff026500 <line:96:14> col:14 implicit rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff026608 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff026670 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff0265a8 <<invalid sloc>> Implicit 1098
| `-NoThrowAttr 0x555dff0266e8 <col:14> Implicit
|-FunctionDecl 0x555dff026710 prev 0x555dff026500 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:96:14 rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x555dff0263c0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x555dff026440 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x555dff026888 <<invalid sloc>> Inherited Implicit 1098
| |-NoThrowAttr 0x555dff0267c8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff026820 <line:479:45>
| `-NonNullAttr 0x555dff026848 <line:555:57, /usr/include/strings.h:97:46> 1
|-FunctionDecl 0x555dff0269a8 <line:104:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:104:12 ffs 'int (int)' extern
| |-ParmVarDecl 0x555dff0268d0 <col:17, col:21> col:21 __i 'int'
| |-NoThrowAttr 0x555dff026a58 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff026ab0 <line:486:46>
|-FunctionDecl 0x555dff026bc8 </usr/include/strings.h:110:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:110:12 ffsl 'int (long)' extern
| |-ParmVarDecl 0x555dff026af0 <col:18, col:27> col:27 __l 'long'
| |-NoThrowAttr 0x555dff026c78 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff026cd0 <line:486:46>
|-FunctionDecl 0x555dff026de8 </usr/include/strings.h:111:15, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:111:26 ffsll 'int (long long)' extern
| |-ParmVarDecl 0x555dff026d10 <col:33, col:47> col:47 __ll 'long long'
| |-NoThrowAttr 0x555dff026ea8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff026f00 <line:486:46>
|-FunctionDecl 0x555dff0270a0 </usr/include/strings.h:116:12> col:12 implicit strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff0271a8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff027210 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x555dff027148 <<invalid sloc>> Implicit 1230
|-FunctionDecl 0x555dff027288 prev 0x555dff0270a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:116:12 strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff026f40 <col:24, col:36> col:36 __s1 'const char *'
| |-ParmVarDecl 0x555dff026fc0 <col:42, col:54> col:54 __s2 'const char *'
| |-BuiltinAttr 0x555dff027408 <<invalid sloc>> Inherited Implicit 1230
| |-NoThrowAttr 0x555dff027340 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff027398 <line:479:45>
| `-NonNullAttr 0x555dff0273c0 <line:555:57, /usr/include/strings.h:117:49> 1 2
|-FunctionDecl 0x555dff027630 <line:120:12> col:12 implicit strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff027738 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff0277a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff027808 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff0276d8 <<invalid sloc>> Implicit 1270
|-FunctionDecl 0x555dff027888 prev 0x555dff027630 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:120:12 strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff027450 <col:25, col:37> col:37 __s1 'const char *'
| |-ParmVarDecl 0x555dff0274d0 <col:43, col:55> col:55 __s2 'const char *'
| |-ParmVarDecl 0x555dff027548 <col:61, col:68> col:68 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff027a08 <<invalid sloc>> Inherited Implicit 1270
| |-NoThrowAttr 0x555dff027948 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff0279a0 <line:479:45>
| `-NonNullAttr 0x555dff0279c8 <line:555:57, /usr/include/strings.h:121:49> 1 2
|-FunctionDecl 0x555dff027c50 <line:128:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:128:12 strcasecmp_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x555dff027a50 <col:26, col:38> col:38 __s1 'const char *'
| |-ParmVarDecl 0x555dff027ad0 <col:44, col:56> col:56 __s2 'const char *'
| |-ParmVarDecl 0x555dff027b48 <col:62, col:71> col:71 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x555dff027d10 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff027d68 <line:479:45>
| `-NonNullAttr 0x555dff027d90 <line:555:57, /usr/include/strings.h:129:52> 1 2 3
|-FunctionDecl 0x555dff028158 <line:133:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:133:12 strncasecmp_l 'int (const char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x555dff027df8 <col:27, col:39> col:39 __s1 'const char *'
| |-ParmVarDecl 0x555dff027eb0 <col:45, col:57> col:57 __s2 'const char *'
| |-ParmVarDecl 0x555dff027f28 <line:134:6, col:13> col:13 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff027fa0 <col:18, col:27> col:27 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x555dff028220 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x555dff028278 <line:479:45>
| `-NonNullAttr 0x555dff0282a0 <line:555:57, /usr/include/strings.h:135:52> 1 2 4
|-FunctionDecl 0x555dff028438 </usr/include/string.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:466:13 explicit_bzero 'void (void *, size_t)' extern
| |-ParmVarDecl 0x555dff028308 <col:29, col:35> col:35 __s 'void *'
| |-ParmVarDecl 0x555dff028380 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff0284f0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff028548 <line:555:57, /usr/include/string.h:466:73> 1
|-FunctionDecl 0x555dff028788 <line:471:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:471:14 strsep 'char *(char **restrict, const char *restrict)' extern
| |-ParmVarDecl 0x555dff0285a0 <col:22, col:40> col:40 __stringp 'char **restrict'
| |-ParmVarDecl 0x555dff028620 <line:472:8, col:31> col:31 __delim 'const char *restrict'
| |-NoThrowAttr 0x555dff028840 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff028898 <line:555:57, /usr/include/string.h:473:30> 1 2
|-FunctionDecl 0x555dff028988 <line:478:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:478:14 strsignal 'char *(int)' extern
| |-ParmVarDecl 0x555dff0288f0 <col:25, col:29> col:29 __sig 'int'
| `-NoThrowAttr 0x555dff028a38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff028c08 </usr/include/string.h:489:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:489:14 __stpcpy 'char *(char *restrict, const char *restrict)' extern
| |-ParmVarDecl 0x555dff028aa8 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff028b28 <col:49, col:72> col:72 __src 'const char *restrict'
| |-NoThrowAttr 0x555dff028cc0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff028d18 <line:555:57, /usr/include/string.h:490:30> 1 2
|-FunctionDecl 0x555dff028ef8 <line:491:14> col:14 implicit stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff029000 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff029068 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff028fa0 <<invalid sloc>> Implicit 1224
| `-NoThrowAttr 0x555dff0290e0 <col:14> Implicit
|-FunctionDecl 0x555dff029108 prev 0x555dff028ef8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:491:14 stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x555dff028d70 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff028df0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x555dff029258 <<invalid sloc>> Inherited Implicit 1224
| |-NoThrowAttr 0x555dff0291c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff029218 <line:555:57, /usr/include/string.h:492:30> 1 2
|-FunctionDecl 0x555dff029480 <line:496:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:496:14 __stpncpy 'char *(char *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x555dff0292a0 <col:25, col:42> col:42 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff029320 <line:497:4, col:27> col:27 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff029398 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff029540 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff029598 <line:555:57, /usr/include/string.h:498:30> 1 2
|-FunctionDecl 0x555dff0297d0 <line:499:14> col:14 implicit stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0298d8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff029940 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff0299a8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x555dff029878 <<invalid sloc>> Implicit 1227
| `-NoThrowAttr 0x555dff029a28 <col:14> Implicit
|-FunctionDecl 0x555dff029a50 prev 0x555dff0297d0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:499:14 stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff0295f0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff029670 <line:500:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff0296e8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff029ba8 <<invalid sloc>> Inherited Implicit 1227
| |-NoThrowAttr 0x555dff029b10 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff029b68 <line:555:57, /usr/include/string.h:501:30> 1 2
|-FunctionDecl 0x555dff029dc8 <line:506:15> col:15 implicit strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff029f00 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff029f68 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff029fd0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff029e70 <<invalid sloc>> Implicit 1266
|-FunctionDecl 0x555dff02a050 prev 0x555dff029dc8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:506:15 strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff029bf0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff029c70 <line:507:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff029ce8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff02a1a8 <<invalid sloc>> Inherited Implicit 1266
| |-NoThrowAttr 0x555dff02a110 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff02a168 <line:555:57, /usr/include/string.h:508:27> 1 2
|-FunctionDecl 0x555dff02a3c8 <line:512:15> col:15 implicit strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff02a4d0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x555dff02a538 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff02a5a0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x555dff02a470 <<invalid sloc>> Implicit 1265
|-FunctionDecl 0x555dff02a620 prev 0x555dff02a3c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:512:15 strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x555dff02a1f0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x555dff02a270 <line:513:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x555dff02a2e8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x555dff02a778 <<invalid sloc>> Inherited Implicit 1265
| |-NoThrowAttr 0x555dff02a6e0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff02a738 <line:555:57, /usr/include/string.h:514:27> 1 2
|-TypedefDecl 0x555dff02a7c0 </usr/include/bits/types.h:31:1, col:23> col:23 __u_char 'unsigned char'
| `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff02a830 <line:32:1, col:28> col:28 __u_short 'unsigned short'
| `-BuiltinType 0x555dfef8a5d0 'unsigned short'
|-TypedefDecl 0x555dff02a8a0 <line:33:1, col:22> col:22 __u_int 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff02a910 <line:34:1, col:27> col:27 __u_long 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff02a980 <line:37:1, col:21> col:21 referenced __int8_t 'signed char'
| `-BuiltinType 0x555dfef8a510 'signed char'
|-TypedefDecl 0x555dff02a9f0 <line:38:1, col:23> col:23 referenced __uint8_t 'unsigned char'
| `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff02aa60 <line:39:1, col:26> col:26 referenced __int16_t 'short'
| `-BuiltinType 0x555dfef8a530 'short'
|-TypedefDecl 0x555dff02aad0 <line:40:1, col:28> col:28 referenced __uint16_t 'unsigned short'
| `-BuiltinType 0x555dfef8a5d0 'unsigned short'
|-TypedefDecl 0x555dff02ab40 <line:41:1, col:20> col:20 referenced __int32_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff02abb0 <line:42:1, col:22> col:22 referenced __uint32_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff02ac20 <line:44:1, col:25> col:25 referenced __int64_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff02ac90 <line:45:1, col:27> col:27 referenced __uint64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff02ad60 <line:52:1, col:18> col:18 referenced __int_least8_t '__int8_t':'signed char'
| `-ElaboratedType 0x555dff02ad20 '__int8_t' sugar
|   `-TypedefType 0x555dff02acf0 '__int8_t' sugar
|     |-Typedef 0x555dff02a980 '__int8_t'
|     `-BuiltinType 0x555dfef8a510 'signed char'
|-TypedefDecl 0x555dff02ae30 <line:53:1, col:19> col:19 referenced __uint_least8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x555dff02adf0 '__uint8_t' sugar
|   `-TypedefType 0x555dff02adc0 '__uint8_t' sugar
|     |-Typedef 0x555dff02a9f0 '__uint8_t'
|     `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff030840 <line:54:1, col:19> col:19 referenced __int_least16_t '__int16_t':'short'
| `-ElaboratedType 0x555dff030800 '__int16_t' sugar
|   `-TypedefType 0x555dff02ae90 '__int16_t' sugar
|     |-Typedef 0x555dff02aa60 '__int16_t'
|     `-BuiltinType 0x555dfef8a530 'short'
|-TypedefDecl 0x555dff030910 <line:55:1, col:20> col:20 referenced __uint_least16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x555dff0308d0 '__uint16_t' sugar
|   `-TypedefType 0x555dff0308a0 '__uint16_t' sugar
|     |-Typedef 0x555dff02aad0 '__uint16_t'
|     `-BuiltinType 0x555dfef8a5d0 'unsigned short'
|-TypedefDecl 0x555dff0309e0 <line:56:1, col:19> col:19 referenced __int_least32_t '__int32_t':'int'
| `-ElaboratedType 0x555dff0309a0 '__int32_t' sugar
|   `-TypedefType 0x555dff030970 '__int32_t' sugar
|     |-Typedef 0x555dff02ab40 '__int32_t'
|     `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff030ab0 <line:57:1, col:20> col:20 referenced __uint_least32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x555dff030a70 '__uint32_t' sugar
|   `-TypedefType 0x555dff030a40 '__uint32_t' sugar
|     |-Typedef 0x555dff02abb0 '__uint32_t'
|     `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff030b80 <line:58:1, col:19> col:19 referenced __int_least64_t '__int64_t':'long'
| `-ElaboratedType 0x555dff030b40 '__int64_t' sugar
|   `-TypedefType 0x555dff030b10 '__int64_t' sugar
|     |-Typedef 0x555dff02ac20 '__int64_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff030c50 <line:59:1, col:20> col:20 referenced __uint_least64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x555dff030c10 '__uint64_t' sugar
|   `-TypedefType 0x555dff030be0 '__uint64_t' sugar
|     |-Typedef 0x555dff02ac90 '__uint64_t'
|     `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff030cc0 <line:63:1, col:18> col:18 __quad_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff030d30 <line:64:1, col:27> col:27 __u_quad_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff030da0 <line:72:1, col:18> col:18 referenced __intmax_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff030e10 <line:73:1, col:27> col:27 referenced __uintmax_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff030e80 <line:137:22, line:145:25> col:25 __dev_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff030ef0 <line:137:22, line:146:25> col:25 __uid_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff030f60 <line:137:22, line:147:25> col:25 __gid_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff030fd0 <line:137:22, line:148:25> col:25 __ino_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff031040 <line:137:22, line:149:27> col:27 __ino64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff0310b0 <line:137:22, line:150:26> col:26 __mode_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff031120 <line:137:22, line:151:27> col:27 __nlink_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff031190 <line:137:22, line:152:25> col:25 referenced __off_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff031200 <line:137:22, line:153:27> col:27 referenced __off64_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff031270 <line:137:22, line:154:25> col:25 __pid_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-RecordDecl 0x555dff0312c8 </usr/include/bits/typesizes.h:73:24, col:47> col:24 struct definition
| `-FieldDecl 0x555dff031408 <col:33, col:44> col:37 __val 'int[2]'
|-TypedefDecl 0x555dff0314b8 </usr/include/bits/types.h:137:22, line:155:26> col:26 __fsid_t 'struct __fsid_t':'__fsid_t'
| `-ElaboratedType 0x555dff031460 'struct __fsid_t' sugar
|   `-RecordType 0x555dff031350 '__fsid_t'
|     `-Record 0x555dff0312c8 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x555dff031540 </usr/include/bits/types.h:137:22, line:156:27> col:27 __clock_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0315b0 <line:137:22, line:157:26> col:26 __rlim_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff031620 <line:137:22, line:158:28> col:28 __rlim64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff031690 <line:137:22, line:159:24> col:24 __id_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff031700 <line:137:22, line:160:26> col:26 __time_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff031770 <line:137:22, line:161:30> col:30 __useconds_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff0380a0 <line:137:22, line:162:31> col:31 __suseconds_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff038110 <line:137:22, line:163:33> col:33 __suseconds64_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff038180 <line:137:22, line:165:27> col:27 __daddr_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff0381f0 <line:137:22, line:166:25> col:25 __key_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff038260 <line:137:22, line:169:29> col:29 __clockid_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff0382d0 <line:137:22, line:172:27> col:27 __timer_t 'void *'
| `-PointerType 0x555dfef8abf0 'void *'
|   `-BuiltinType 0x555dfef8a4b0 'void'
|-TypedefDecl 0x555dff038340 <line:137:22, line:175:29> col:29 __blksize_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0383b0 <line:137:22, line:180:28> col:28 __blkcnt_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff038420 <line:137:22, line:181:30> col:30 __blkcnt64_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff038490 <line:137:22, line:184:30> col:30 __fsblkcnt_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff038500 <line:137:22, line:185:32> col:32 __fsblkcnt64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff038570 <line:137:22, line:188:30> col:30 __fsfilcnt_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff0385e0 <line:137:22, line:189:32> col:32 __fsfilcnt64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff038650 <line:137:22, line:192:28> col:28 __fsword_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0386c0 <line:137:22, line:194:27> col:27 referenced __ssize_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff038730 <line:137:22, line:197:33> col:33 __syscall_slong_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0387a0 <line:137:22, line:199:33> col:33 __syscall_ulong_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff038870 <line:203:1, col:19> col:19 __loff_t '__off64_t':'long'
| `-ElaboratedType 0x555dff038830 '__off64_t' sugar
|   `-TypedefType 0x555dff038800 '__off64_t' sugar
|     |-Typedef 0x555dff031200 '__off64_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0388e0 <line:204:1, col:15> col:15 __caddr_t 'char *'
| `-PointerType 0x555dfef8ac80 'char *'
|   `-BuiltinType 0x555dfef8a4f0 'char'
|-TypedefDecl 0x555dff038950 <line:137:22, line:207:25> col:25 __intptr_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0389c0 <line:137:22, line:210:23> col:23 __socklen_t 'unsigned int'
| `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff038a30 <line:215:1, col:13> col:13 __sig_atomic_t 'int'
| `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff038ae0 </usr/include/bits/floatn.h:83:1, col:24> col:24 __cfloat128 '_Complex __float128'
| |-ComplexType 0x555dff038b40 '_Complex __float128'
| | `-BuiltinType 0x555dfef8a6b0 '__float128'
| `-ModeAttr 0x555dff038b80 <col:52, col:68> __TC__
|-TypedefDecl 0x555dff038bf8 <line:97:1, col:20> col:20 referenced _Float128 '__float128'
| `-BuiltinType 0x555dfef8a6b0 '__float128'
|-TypedefDecl 0x555dff038c68 </usr/include/bits/floatn-common.h:214:1, col:15> col:15 _Float32 'float'
| `-BuiltinType 0x555dfef8a650 'float'
|-TypedefDecl 0x555dff038cd8 <line:251:1, col:16> col:16 _Float64 'double'
| `-BuiltinType 0x555dfef8a670 'double'
|-TypedefDecl 0x555dff038d48 <line:268:1, col:16> col:16 _Float32x 'double'
| `-BuiltinType 0x555dfef8a670 'double'
|-TypedefDecl 0x555dff038db8 <line:285:1, col:21> col:21 _Float64x 'long double'
| `-BuiltinType 0x555dfef8a690 'long double'
|-TypedefDecl 0x555dff038e28 </usr/include/math.h:167:1, col:15> col:15 float_t 'float'
| |-BuiltinType 0x555dfef8a650 'float'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x555dff038e80 <<invalid sloc>>
|-TypedefDecl 0x555dff038ef0 <line:168:1, col:16> col:16 double_t 'double'
| |-BuiltinType 0x555dfef8a670 'double'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x555dff038f48 <<invalid sloc>>
|-FunctionDecl 0x555dff063190 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> line:20:24 __fpclassify 'int (double)' extern
| |-ParmVarDecl 0x555dff038fb8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'double'
| |-NoThrowAttr 0x555dff063240 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff063298 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x555dff063370 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> line:24:24 __signbit 'int (double)' extern
| |-ParmVarDecl 0x555dff0632d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'double'
| |-NoThrowAttr 0x555dff063420 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff063478 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x555dff063550 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> line:29:24 __isinf 'int (double)' extern
| |-ParmVarDecl 0x555dff0634b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'double'
| |-NoThrowAttr 0x555dff063600 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff063658 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x555dff063730 <line:33:24> col:24 implicit __finite 'int (double)' extern
| |-ParmVarDecl 0x555dff063838 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0637d8 <<invalid sloc>> Implicit 1013
| |-NoThrowAttr 0x555dff0638a8 <col:24> Implicit
| `-ConstAttr 0x555dff0638d0 <col:24> Implicit
|-FunctionDecl 0x555dff0638f8 prev 0x555dff063730 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> line:33:24 __finite 'int (double)' extern
| |-ParmVarDecl 0x555dff063698 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'double'
| |-BuiltinAttr 0x555dff063a28 <<invalid sloc>> Inherited Implicit 1013
| |-NoThrowAttr 0x555dff0639a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff063a00 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x555dff063b08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> line:37:24 __isnan 'int (double)' extern
| |-ParmVarDecl 0x555dff063a70 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'double'
| |-NoThrowAttr 0x555dff063bb8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff063c10 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x555dff063db8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls-helper-functions.h:41:24 __iseqsig 'int (double, double)' extern
| |-ParmVarDecl 0x555dff063c50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'double'
| |-ParmVarDecl 0x555dff063cd0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'double'
| `-NoThrowAttr 0x555dff063e70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff063f78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> line:44:24 __issignaling 'int (double)' extern
| |-ParmVarDecl 0x555dff063ee0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'double'
| |-NoThrowAttr 0x555dff064028 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff064080 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x555dff068e10 </usr/include/bits/mathcalls.h:53:17> col:17 implicit acos 'double (double)' extern
| |-ParmVarDecl 0x555dff068f18 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff068eb8 <<invalid sloc>> Implicit 103
| `-NoThrowAttr 0x555dff068f88 <col:17> Implicit
|-FunctionDecl 0x555dff068fb0 prev 0x555dff068e10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:53:17 acos 'double (double)' extern
| |-ParmVarDecl 0x555dff0640c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff0690b8 <<invalid sloc>> Inherited Implicit 103
| `-NoThrowAttr 0x555dff069060 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff069198 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:78:1 __acos 'double (double)' extern
| |-ParmVarDecl 0x555dff069100 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff069248 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff069350 </usr/include/bits/mathcalls.h:55:17> col:17 implicit asin 'double (double)' extern
| |-ParmVarDecl 0x555dff069458 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0693f8 <<invalid sloc>> Implicit 138
| `-NoThrowAttr 0x555dff0694c8 <col:17> Implicit
|-FunctionDecl 0x555dff0694f0 prev 0x555dff069350 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:55:17 asin 'double (double)' extern
| |-ParmVarDecl 0x555dff0692b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff0695f8 <<invalid sloc>> Inherited Implicit 138
| `-NoThrowAttr 0x555dff0695a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0696d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 __asin 'double (double)' extern
| |-ParmVarDecl 0x555dff069640 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff069788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff069890 </usr/include/bits/mathcalls.h:57:17> col:17 implicit atan 'double (double)' extern
| |-ParmVarDecl 0x555dff069998 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff069938 <<invalid sloc>> Implicit 155
| `-NoThrowAttr 0x555dff069a08 <col:17> Implicit
|-FunctionDecl 0x555dff069a30 prev 0x555dff069890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:57:17 atan 'double (double)' extern
| |-ParmVarDecl 0x555dff0697f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff069b38 <<invalid sloc>> Inherited Implicit 155
| `-NoThrowAttr 0x555dff069ae0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff069c18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __atan 'double (double)' extern
| |-ParmVarDecl 0x555dff069b80 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff069cc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff039198 </usr/include/bits/mathcalls.h:59:17> col:17 implicit atan2 'double (double, double)' extern
| |-ParmVarDecl 0x555dff0392a0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff039308 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff039240 <<invalid sloc>> Implicit 161
| `-NoThrowAttr 0x555dff039380 <col:17> Implicit
|-FunctionDecl 0x555dff0393a8 prev 0x555dff039198 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:59:17 atan2 'double (double, double)' extern
| |-ParmVarDecl 0x555dff069d38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x555dff0390b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| |-BuiltinAttr 0x555dff0394b8 <<invalid sloc>> Inherited Implicit 161
| `-NoThrowAttr 0x555dff039460 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff039620 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 __atan2 'double (double, double)' extern
| |-ParmVarDecl 0x555dff039500 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x555dff039580 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| `-NoThrowAttr 0x555dff0396d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0397e0 </usr/include/bits/mathcalls.h:62:17> col:17 implicit cos 'double (double)' extern
| |-ParmVarDecl 0x555dff0398e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff039888 <<invalid sloc>> Implicit 383
| `-NoThrowAttr 0x555dff039958 <col:17> Implicit
|-FunctionDecl 0x555dff039980 prev 0x555dff0397e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:62:17 cos 'double (double)' extern
| |-ParmVarDecl 0x555dff039748 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| |-BuiltinAttr 0x555dff039a88 <<invalid sloc>> Inherited Implicit 383
| `-NoThrowAttr 0x555dff039a30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff039b68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __cos 'double (double)' extern
| |-ParmVarDecl 0x555dff039ad0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| `-NoThrowAttr 0x555dff039c18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff039d20 </usr/include/bits/mathcalls.h:64:17> col:17 implicit sin 'double (double)' extern
| |-ParmVarDecl 0x555dff039e28 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff039dc8 <<invalid sloc>> Implicit 1179
| `-NoThrowAttr 0x555dff039e98 <col:17> Implicit
|-FunctionDecl 0x555dff039ec0 prev 0x555dff039d20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:64:17 sin 'double (double)' extern
| |-ParmVarDecl 0x555dff039c88 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| |-BuiltinAttr 0x555dff039fc8 <<invalid sloc>> Inherited Implicit 1179
| `-NoThrowAttr 0x555dff039f70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06d200 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:88:1 __sin 'double (double)' extern
| |-ParmVarDecl 0x555dff03a010 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| `-NoThrowAttr 0x555dff06d2b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06d3b8 </usr/include/bits/mathcalls.h:66:17> col:17 implicit tan 'double (double)' extern
| |-ParmVarDecl 0x555dff06d4c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06d460 <<invalid sloc>> Implicit 1400
| `-NoThrowAttr 0x555dff06d530 <col:17> Implicit
|-FunctionDecl 0x555dff06d558 prev 0x555dff06d3b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:66:17 tan 'double (double)' extern
| |-ParmVarDecl 0x555dff06d320 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| |-BuiltinAttr 0x555dff06d660 <<invalid sloc>> Inherited Implicit 1400
| `-NoThrowAttr 0x555dff06d608 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06d740 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:90:1 __tan 'double (double)' extern
| |-ParmVarDecl 0x555dff06d6a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| `-NoThrowAttr 0x555dff06d7f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06d8f8 </usr/include/bits/mathcalls.h:93:17> col:17 implicit cosh 'double (double)' extern
| |-ParmVarDecl 0x555dff06da00 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06d9a0 <<invalid sloc>> Implicit 391
| `-NoThrowAttr 0x555dff06da70 <col:17> Implicit
|-FunctionDecl 0x555dff06da98 prev 0x555dff06d8f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:93:17 cosh 'double (double)' extern
| |-ParmVarDecl 0x555dff06d860 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff06dba0 <<invalid sloc>> Inherited Implicit 391
| `-NoThrowAttr 0x555dff06db48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06dc80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:93:1 __cosh 'double (double)' extern
| |-ParmVarDecl 0x555dff06dbe8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff06dd30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06de38 </usr/include/bits/mathcalls.h:95:17> col:17 implicit sinh 'double (double)' extern
| |-ParmVarDecl 0x555dff06df40 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06dee0 <<invalid sloc>> Implicit 1198
| `-NoThrowAttr 0x555dff06dfb0 <col:17> Implicit
|-FunctionDecl 0x555dff06dfd8 prev 0x555dff06de38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:95:17 sinh 'double (double)' extern
| |-ParmVarDecl 0x555dff06dda0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff06e0e0 <<invalid sloc>> Inherited Implicit 1198
| `-NoThrowAttr 0x555dff06e088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0569f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 __sinh 'double (double)' extern
| |-ParmVarDecl 0x555dff06e128 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff056aa0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff056ba8 </usr/include/bits/mathcalls.h:97:17> col:17 implicit tanh 'double (double)' extern
| |-ParmVarDecl 0x555dff056cb0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff056c50 <<invalid sloc>> Implicit 1408
| `-NoThrowAttr 0x555dff056d20 <col:17> Implicit
|-FunctionDecl 0x555dff056d48 prev 0x555dff056ba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:97:17 tanh 'double (double)' extern
| |-ParmVarDecl 0x555dff056b10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff056e50 <<invalid sloc>> Inherited Implicit 1408
| `-NoThrowAttr 0x555dff056df8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff056f30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __tanh 'double (double)' extern
| |-ParmVarDecl 0x555dff056e98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff056fe0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0570e8 </usr/include/bits/mathcalls.h:107:17> col:17 implicit acosh 'double (double)' extern
| |-ParmVarDecl 0x555dff0571f0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff057190 <<invalid sloc>> Implicit 111
| `-NoThrowAttr 0x555dff057260 <col:17> Implicit
|-FunctionDecl 0x555dff057288 prev 0x555dff0570e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:107:17 acosh 'double (double)' extern
| |-ParmVarDecl 0x555dff057050 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff057390 <<invalid sloc>> Inherited Implicit 111
| `-NoThrowAttr 0x555dff057338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff057470 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:99:1 __acosh 'double (double)' extern
| |-ParmVarDecl 0x555dff0573d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff057520 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff057628 </usr/include/bits/mathcalls.h:109:17> col:17 implicit asinh 'double (double)' extern
| |-ParmVarDecl 0x555dff057730 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0576d0 <<invalid sloc>> Implicit 146
| `-NoThrowAttr 0x555dff0577a0 <col:17> Implicit
|-FunctionDecl 0x555dff0577c8 prev 0x555dff057628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:109:17 asinh 'double (double)' extern
| |-ParmVarDecl 0x555dff057590 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff0578d0 <<invalid sloc>> Inherited Implicit 146
| `-NoThrowAttr 0x555dff057878 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff057a00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 __asinh 'double (double)' extern
| |-ParmVarDecl 0x555dff057918 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff057ab0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff057bb8 </usr/include/bits/mathcalls.h:111:17> col:17 implicit atanh 'double (double)' extern
| |-ParmVarDecl 0x555dff057cc0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff057c60 <<invalid sloc>> Implicit 171
| `-NoThrowAttr 0x555dff057d30 <col:17> Implicit
|-FunctionDecl 0x555dff057d58 prev 0x555dff057bb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:111:17 atanh 'double (double)' extern
| |-ParmVarDecl 0x555dff057b20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff057e60 <<invalid sloc>> Inherited Implicit 171
| `-NoThrowAttr 0x555dff057e08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff057f40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __atanh 'double (double)' extern
| |-ParmVarDecl 0x555dff057ea8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff057ff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0580f8 </usr/include/bits/mathcalls.h:117:17> col:17 implicit exp 'double (double)' extern
| |-ParmVarDecl 0x555dff058200 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0581a0 <<invalid sloc>> Implicit 523
| `-NoThrowAttr 0x555dff058270 <col:17> Implicit
|-FunctionDecl 0x555dff058298 prev 0x555dff0580f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:117:17 exp 'double (double)' extern
| |-ParmVarDecl 0x555dff058060 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| |-BuiltinAttr 0x555dff0583a0 <<invalid sloc>> Inherited Implicit 523
| `-NoThrowAttr 0x555dff058348 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff058480 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:105:1 __exp 'double (double)' extern
| |-ParmVarDecl 0x555dff0583e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| `-NoThrowAttr 0x555dff058530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff058738 </usr/include/bits/mathcalls.h:120:13> col:13 implicit frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x555dff058840 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff0588a8 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff0587e0 <<invalid sloc>> Implicit 645
| `-NoThrowAttr 0x555dff058920 <col:13> Implicit
|-FunctionDecl 0x555dff058948 prev 0x555dff058738 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:120:13 frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x555dff0585a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff058658 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x555dff058a68 <<invalid sloc>> Inherited Implicit 645
| `-NoThrowAttr 0x555dff058a10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff058bd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x555dff058ab0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff058b30 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x555dff058c88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff058e58 </usr/include/bits/mathcalls.h:123:13> col:13 implicit ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x555dff058f60 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff058fc8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff058f00 <<invalid sloc>> Implicit 840
| `-NoThrowAttr 0x555dff059040 <col:13> Implicit
|-FunctionDecl 0x555dff059068 prev 0x555dff058e58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:123:13 ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x555dff058cf8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff058d78 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x555dff059178 <<invalid sloc>> Inherited Implicit 840
| `-NoThrowAttr 0x555dff059120 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0592e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 __ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x555dff0591c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff059240 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x555dff059398 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0594a0 </usr/include/bits/mathcalls.h:126:17> col:17 implicit log 'double (double)' extern
| |-ParmVarDecl 0x555dff0595a8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff059548 <<invalid sloc>> Implicit 869
| `-NoThrowAttr 0x555dff059618 <col:17> Implicit
|-FunctionDecl 0x555dff059640 prev 0x555dff0594a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:126:17 log 'double (double)' extern
| |-ParmVarDecl 0x555dff059408 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| |-BuiltinAttr 0x555dff059748 <<invalid sloc>> Inherited Implicit 869
| `-NoThrowAttr 0x555dff0596f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff059828 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __log 'double (double)' extern
| |-ParmVarDecl 0x555dff059790 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| `-NoThrowAttr 0x555dff0598d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff059a20 </usr/include/bits/mathcalls.h:129:17> col:17 implicit log10 'double (double)' extern
| |-ParmVarDecl 0x555dff059b28 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff059ac8 <<invalid sloc>> Implicit 890
| `-NoThrowAttr 0x555dff059b98 <col:17> Implicit
|-FunctionDecl 0x555dff059bc0 prev 0x555dff059a20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:129:17 log10 'double (double)' extern
| |-ParmVarDecl 0x555dff059948 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff059cc8 <<invalid sloc>> Inherited Implicit 890
| `-NoThrowAttr 0x555dff059c70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff059da8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:111:1 __log10 'double (double)' extern
| |-ParmVarDecl 0x555dff059d10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff059e58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05a058 </usr/include/bits/mathcalls.h:132:13> col:13 implicit modf 'double (double, double *)' extern
| |-ParmVarDecl 0x555dff05a160 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff05a1c8 <<invalid sloc>> <invalid sloc> 'double *'
| |-BuiltinAttr 0x555dff05a100 <<invalid sloc>> Implicit 961
| `-NoThrowAttr 0x555dff05a240 <col:13> Implicit
|-FunctionDecl 0x555dff05a268 prev 0x555dff05a058 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:132:13 modf 'double (double, double *)' extern
| |-ParmVarDecl 0x555dff059ec8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff059f78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-BuiltinAttr 0x555dff05a378 <<invalid sloc>> Inherited Implicit 961
| `-NoThrowAttr 0x555dff05a320 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05a500 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:112:1 __modf 'double (double, double *)' extern
| |-ParmVarDecl 0x555dff05a3c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff05a440 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-NoThrowAttr 0x555dff05a5b8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff05a610 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x555dff05a708 <line:156:17> col:17 implicit expm1 'double (double)' extern
| |-ParmVarDecl 0x555dff05a810 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05a7b0 <<invalid sloc>> Implicit 546
| `-NoThrowAttr 0x555dff05a880 <col:17> Implicit
|-FunctionDecl 0x555dff05a8a8 prev 0x555dff05a708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:156:17 expm1 'double (double)' extern
| |-ParmVarDecl 0x555dff05a670 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff05a9b0 <<invalid sloc>> Inherited Implicit 546
| `-NoThrowAttr 0x555dff05a958 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05aac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __expm1 'double (double)' extern
| |-ParmVarDecl 0x555dff05aa30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff05ab78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05ac80 </usr/include/bits/mathcalls.h:159:17> col:17 implicit log1p 'double (double)' extern
| |-ParmVarDecl 0x555dff05ad88 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05ad28 <<invalid sloc>> Implicit 875
| `-NoThrowAttr 0x555dff05adf8 <col:17> Implicit
|-FunctionDecl 0x555dff05ae20 prev 0x555dff05ac80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:159:17 log1p 'double (double)' extern
| |-ParmVarDecl 0x555dff05abe8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff05af28 <<invalid sloc>> Inherited Implicit 875
| `-NoThrowAttr 0x555dff05aed0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05b008 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:117:1 __log1p 'double (double)' extern
| |-ParmVarDecl 0x555dff05af70 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff05b0b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05b1c0 </usr/include/bits/mathcalls.h:162:13> col:13 implicit logb 'double (double)' extern
| |-ParmVarDecl 0x555dff05b2c8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05b268 <<invalid sloc>> Implicit 900
| `-NoThrowAttr 0x555dff05b338 <col:13> Implicit
|-FunctionDecl 0x555dff05b360 prev 0x555dff05b1c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:162:13 logb 'double (double)' extern
| |-ParmVarDecl 0x555dff05b128 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| |-BuiltinAttr 0x555dff05b468 <<invalid sloc>> Inherited Implicit 900
| `-NoThrowAttr 0x555dff05b410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05b548 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:118:1 __logb 'double (double)' extern
| |-ParmVarDecl 0x555dff05b4b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| `-NoThrowAttr 0x555dff05b5f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05b700 </usr/include/bits/mathcalls.h:167:17> col:17 implicit exp2 'double (double)' extern
| |-ParmVarDecl 0x555dff05b808 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05b7a8 <<invalid sloc>> Implicit 529
| `-NoThrowAttr 0x555dff05b878 <col:17> Implicit
|-FunctionDecl 0x555dff05b8a0 prev 0x555dff05b700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:167:17 exp2 'double (double)' extern
| |-ParmVarDecl 0x555dff05b668 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff05b9a8 <<invalid sloc>> Inherited Implicit 529
| `-NoThrowAttr 0x555dff05b950 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05cae8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:120:1 __exp2 'double (double)' extern
| |-ParmVarDecl 0x555dff05ca50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff05cb98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05cca0 </usr/include/bits/mathcalls.h:170:17> col:17 implicit log2 'double (double)' extern
| |-ParmVarDecl 0x555dff05cda8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05cd48 <<invalid sloc>> Implicit 882
| `-NoThrowAttr 0x555dff05ce18 <col:17> Implicit
|-FunctionDecl 0x555dff05ce40 prev 0x555dff05cca0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:170:17 log2 'double (double)' extern
| |-ParmVarDecl 0x555dff05cc08 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff05cf48 <<invalid sloc>> Inherited Implicit 882
| `-NoThrowAttr 0x555dff05cef0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05d028 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:122:1 __log2 'double (double)' extern
| |-ParmVarDecl 0x555dff05cf90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff05d0d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05d268 </usr/include/bits/mathcalls.h:177:17> col:17 implicit pow 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05d370 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff05d3d8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05d310 <<invalid sloc>> Implicit 1048
| `-NoThrowAttr 0x555dff05d450 <col:17> Implicit
|-FunctionDecl 0x555dff05d478 prev 0x555dff05d268 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:177:17 pow 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05d148 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x555dff05d1c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| |-BuiltinAttr 0x555dff05d588 <<invalid sloc>> Inherited Implicit 1048
| `-NoThrowAttr 0x555dff05d530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05d6f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:124:1 __pow 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05d5d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x555dff05d650 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| `-NoThrowAttr 0x555dff05d7a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05d8b0 </usr/include/bits/mathcalls.h:180:13> col:13 implicit sqrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05d9b8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05d958 <<invalid sloc>> Implicit 1213
| `-NoThrowAttr 0x555dff05da28 <col:13> Implicit
|-FunctionDecl 0x555dff05da60 prev 0x555dff05d8b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:180:13 sqrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05d818 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| |-BuiltinAttr 0x555dff05db68 <<invalid sloc>> Inherited Implicit 1213
| `-NoThrowAttr 0x555dff05db10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05dc48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:125:1 __sqrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05dbb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| `-NoThrowAttr 0x555dff05dcf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05de88 </usr/include/bits/mathcalls.h:184:17> col:17 implicit hypot 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05df90 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff05dff8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05df30 <<invalid sloc>> Implicit 731
| `-NoThrowAttr 0x555dff05e070 <col:17> Implicit
|-FunctionDecl 0x555dff05e098 prev 0x555dff05de88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:184:17 hypot 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05dd68 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff05dde8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| |-BuiltinAttr 0x555dff05e1a8 <<invalid sloc>> Inherited Implicit 731
| `-NoThrowAttr 0x555dff05e150 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05e310 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:127:1 __hypot 'double (double, double)' extern
| |-ParmVarDecl 0x555dff05e1f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff05e270 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| `-NoThrowAttr 0x555dff05e3c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05e4d0 </usr/include/bits/mathcalls.h:189:17> col:17 implicit cbrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05e5d8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff05e578 <<invalid sloc>> Implicit 298
| |-NoThrowAttr 0x555dff05e648 <col:17> Implicit
| `-ConstAttr 0x555dff05e670 <col:17> Implicit
|-FunctionDecl 0x555dff05e698 prev 0x555dff05e4d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:189:17 cbrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05e438 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| |-BuiltinAttr 0x555dff05e7a0 <<invalid sloc>> Inherited Implicit 298
| |-ConstAttr 0x555dff05e7d0 <col:17> Inherited Implicit
| `-NoThrowAttr 0x555dff05e748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05e8a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __cbrt 'double (double)' extern
| |-ParmVarDecl 0x555dff05e810 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| `-NoThrowAttr 0x555dff05e958 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff02aee0 </usr/include/bits/mathcalls.h:213:14> col:14 implicit ceil 'double (double)' extern
| |-ParmVarDecl 0x555dff02afe8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff02af88 <<invalid sloc>> Implicit 317
| |-NoThrowAttr 0x555dff02b058 <col:14> Implicit
| `-ConstAttr 0x555dff02b080 <col:14> Implicit
|-FunctionDecl 0x555dff02b0a8 prev 0x555dff02aee0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:213:14 ceil 'double (double)' extern
| |-ParmVarDecl 0x555dff05e9c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'double'
| |-BuiltinAttr 0x555dff02b1d8 <<invalid sloc>> Inherited Implicit 317
| |-NoThrowAttr 0x555dff02b158 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff02b1b0 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x555dff02b2b8 <line:216:14> col:14 implicit used fabs 'double (double)' extern
| |-ParmVarDecl 0x555dff02b3c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff02b360 <<invalid sloc>> Implicit 564
| |-NoThrowAttr 0x555dff02b430 <col:14> Implicit
| `-ConstAttr 0x555dff02b458 <col:14> Implicit
|-FunctionDecl 0x555dff02b480 prev 0x555dff02b2b8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:216:14 used fabs 'double (double)' extern
| |-ParmVarDecl 0x555dff02b220 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'double'
| |-BuiltinAttr 0x555dff02b5b0 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x555dff02b530 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff02b588 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x555dff02b690 <line:219:14> col:14 implicit floor 'double (double)' extern
| |-ParmVarDecl 0x555dff02b798 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff02b738 <<invalid sloc>> Implicit 583
| |-NoThrowAttr 0x555dff02b808 <col:14> Implicit
| `-ConstAttr 0x555dff02b830 <col:14> Implicit
|-FunctionDecl 0x555dff02b858 prev 0x555dff02b690 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:219:14 floor 'double (double)' extern
| |-ParmVarDecl 0x555dff02b5f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'double'
| |-BuiltinAttr 0x555dff02b988 <<invalid sloc>> Inherited Implicit 583
| |-NoThrowAttr 0x555dff02b908 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff02b960 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x555dff02baf0 <line:222:13> col:13 implicit fmod 'double (double, double)' extern
| |-ParmVarDecl 0x555dff02bbf8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff02bc60 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff02bb98 <<invalid sloc>> Implicit 631
| `-NoThrowAttr 0x555dff02bcd8 <col:13> Implicit
|-FunctionDecl 0x555dff02bd00 prev 0x555dff02baf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:222:13 fmod 'double (double, double)' extern
| |-ParmVarDecl 0x555dff02b9d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff02ba50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| |-BuiltinAttr 0x555dff02be10 <<invalid sloc>> Inherited Implicit 631
| `-NoThrowAttr 0x555dff02bdb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06bea0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:131:1 __fmod 'double (double, double)' extern
| |-ParmVarDecl 0x555dff02be58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff06be00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| `-NoThrowAttr 0x555dff06bf58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06c060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> line:231:23 isinf 'int (double)' extern
| |-ParmVarDecl 0x555dff06bfc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'double'
| |-NoThrowAttr 0x555dff06c110 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff06c168 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x555dff06c240 <line:237:23> col:23 implicit finite 'int (double)' extern
| |-ParmVarDecl 0x555dff06c348 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06c2e8 <<invalid sloc>> Implicit 578
| |-NoThrowAttr 0x555dff06c3b8 <col:23> Implicit
| `-ConstAttr 0x555dff06c3e0 <col:23> Implicit
|-FunctionDecl 0x555dff06c408 prev 0x555dff06c240 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> line:237:23 finite 'int (double)' extern
| |-ParmVarDecl 0x555dff06c1a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'double'
| |-BuiltinAttr 0x555dff06c538 <<invalid sloc>> Inherited Implicit 578
| |-NoThrowAttr 0x555dff06c4b8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff06c510 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x555dff06c6a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:241:13 drem 'double (double, double)' extern
| |-ParmVarDecl 0x555dff06c580 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff06c600 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x555dff06c758 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06c8e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:132:1 __drem 'double (double, double)' extern
| |-ParmVarDecl 0x555dff06c7c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff06c848 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x555dff06c9a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06caa8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:245:13 significand 'double (double)' extern
| |-ParmVarDecl 0x555dff06ca10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x555dff06cb58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06cc60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 __significand 'double (double)' extern
| |-ParmVarDecl 0x555dff06cbc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x555dff06cd10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff060330 </usr/include/bits/mathcalls.h:252:14> col:14 implicit copysign 'double (double, double)' extern
| |-ParmVarDecl 0x555dff060438 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff0604a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0603d8 <<invalid sloc>> Implicit 361
| |-NoThrowAttr 0x555dff060518 <col:14> Implicit
| `-ConstAttr 0x555dff060540 <col:14> Implicit
|-FunctionDecl 0x555dff060568 prev 0x555dff060330 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:252:14 copysign 'double (double, double)' extern
| |-ParmVarDecl 0x555dff06cd80 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff060290 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'double'
| |-BuiltinAttr 0x555dff0606a0 <<invalid sloc>> Inherited Implicit 361
| |-NoThrowAttr 0x555dff060620 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff060678 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x555dff0607b8 <line:257:13> col:13 implicit nan 'double (const char *)' extern
| |-ParmVarDecl 0x555dff0608c0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff060860 <<invalid sloc>> Implicit 973
| |-NoThrowAttr 0x555dff060930 <col:13> Implicit
| `-PureAttr 0x555dff060958 <col:13> Implicit
|-FunctionDecl 0x555dff060980 prev 0x555dff0607b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:257:13 nan 'double (const char *)' extern
| |-ParmVarDecl 0x555dff0606e8 <col:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x555dff060a88 <<invalid sloc>> Inherited Implicit 973
| |-PureAttr 0x555dff060ab8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x555dff060a30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff060b90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:134:1 __nan 'double (const char *)' extern
| |-ParmVarDecl 0x555dff060af8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x555dff060c40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff060d48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> line:267:23 isnan 'int (double)' extern
| |-ParmVarDecl 0x555dff060cb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'double'
| |-NoThrowAttr 0x555dff060df8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff060e50 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x555dff060f28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:274:13 j0 'double (double)' extern
| |-ParmVarDecl 0x555dff060e90 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x555dff060fd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0610e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __j0 'double (double)' extern
| |-ParmVarDecl 0x555dff061048 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x555dff061190 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0612d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:275:13 j1 'double (double)' extern
| |-ParmVarDecl 0x555dff061200 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x555dff061380 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:136:1 __j1 'double (double)' extern
| |-ParmVarDecl 0x555dff0613f0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x555dff061538 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:276:13 jn 'double (int, double)' extern
| |-ParmVarDecl 0x555dff0615a8 <col:19> col:22 'int'
| |-ParmVarDecl 0x555dff061628 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x555dff0617c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061950 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:137:1 __jn 'double (int, double)' extern
| |-ParmVarDecl 0x555dff061830 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x555dff0618b0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x555dff061a08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061b10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:277:13 y0 'double (double)' extern
| |-ParmVarDecl 0x555dff061a78 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x555dff061bc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061cc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 __y0 'double (double)' extern
| |-ParmVarDecl 0x555dff061c30 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x555dff061d78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff061e80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:278:13 y1 'double (double)' extern
| |-ParmVarDecl 0x555dff061de8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x555dff061f30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff062038 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:139:1 __y1 'double (double)' extern
| |-ParmVarDecl 0x555dff061fa0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x555dff0620e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06e210 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:279:13 yn 'double (int, double)' extern
| |-ParmVarDecl 0x555dff062158 <col:19> col:22 'int'
| |-ParmVarDecl 0x555dff0621d8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x555dff06e2c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06e458 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __yn 'double (int, double)' extern
| |-ParmVarDecl 0x555dff06e338 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x555dff06e3b8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x555dff06e510 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06e618 </usr/include/bits/mathcalls.h:285:17> col:17 implicit erf 'double (double)' extern
| |-ParmVarDecl 0x555dff06e720 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06e6c0 <<invalid sloc>> Implicit 503
| `-NoThrowAttr 0x555dff06e790 <col:17> Implicit
|-FunctionDecl 0x555dff06e7b8 prev 0x555dff06e618 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:285:17 erf 'double (double)' extern
| |-ParmVarDecl 0x555dff06e580 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| |-BuiltinAttr 0x555dff06e8c0 <<invalid sloc>> Inherited Implicit 503
| `-NoThrowAttr 0x555dff06e868 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06e9a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:142:1 __erf 'double (double)' extern
| |-ParmVarDecl 0x555dff06e908 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| `-NoThrowAttr 0x555dff06ea50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06eb58 </usr/include/bits/mathcalls.h:286:17> col:17 implicit erfc 'double (double)' extern
| |-ParmVarDecl 0x555dff06ec60 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06ec00 <<invalid sloc>> Implicit 510
| `-NoThrowAttr 0x555dff06ecd0 <col:17> Implicit
|-FunctionDecl 0x555dff06ecf8 prev 0x555dff06eb58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:286:17 erfc 'double (double)' extern
| |-ParmVarDecl 0x555dff06eac0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| |-BuiltinAttr 0x555dff06ee00 <<invalid sloc>> Inherited Implicit 510
| `-NoThrowAttr 0x555dff06eda8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06eee0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:144:1 __erfc 'double (double)' extern
| |-ParmVarDecl 0x555dff06ee48 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| `-NoThrowAttr 0x555dff06ef90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06f098 </usr/include/bits/mathcalls.h:287:13> col:13 implicit lgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f1a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06f140 <<invalid sloc>> Implicit 848
| `-NoThrowAttr 0x555dff06f220 <col:13> Implicit
|-FunctionDecl 0x555dff06f248 prev 0x555dff06f098 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:287:13 lgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f000 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| |-BuiltinAttr 0x555dff06f350 <<invalid sloc>> Inherited Implicit 848
| `-NoThrowAttr 0x555dff06f2f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06f430 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __lgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f398 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| `-NoThrowAttr 0x555dff06f4e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06f5e8 </usr/include/bits/mathcalls.h:292:13> col:13 implicit tgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f6f0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff06f690 <<invalid sloc>> Implicit 1418
| `-NoThrowAttr 0x555dff06f760 <col:13> Implicit
|-FunctionDecl 0x555dff06f788 prev 0x555dff06f5e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:292:13 tgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f550 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| |-BuiltinAttr 0x555dff06f890 <<invalid sloc>> Inherited Implicit 1418
| `-NoThrowAttr 0x555dff06f838 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06f970 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:146:1 __tgamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06f8d8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| `-NoThrowAttr 0x555dff06fa20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06fb28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:298:13 gamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06fa90 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x555dff06fbd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06fce0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:147:1 __gamma 'double (double)' extern
| |-ParmVarDecl 0x555dff06fc48 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x555dff06fd90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06ff20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x555dff06fe00 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x555dff06fe80 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff06ffd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff070168 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x555dff070048 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x555dff0700c8 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff070230 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff070338 </usr/include/bits/mathcalls.h:313:13> col:13 implicit rint 'double (double)' extern
| |-ParmVarDecl 0x555dff070440 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0703e0 <<invalid sloc>> Implicit 1102
| |-ConstAttr 0x555dff0704b0 <col:13> Implicit
| `-NoThrowAttr 0x555dff0704d8 <col:13> Implicit
|-FunctionDecl 0x555dff070500 prev 0x555dff070338 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:313:13 rint 'double (double)' extern
| |-ParmVarDecl 0x555dff0702a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| |-BuiltinAttr 0x555dff070608 <<invalid sloc>> Inherited Implicit 1102
| |-ConstAttr 0x555dff070638 <col:13> Inherited Implicit
| `-NoThrowAttr 0x555dff0705b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff070710 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:151:1 __rint 'double (double)' extern
| |-ParmVarDecl 0x555dff070678 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| `-NoThrowAttr 0x555dff0707c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff070950 </usr/include/bits/mathcalls.h:316:13> col:13 implicit nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x555dff070a58 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff070ac0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0709f8 <<invalid sloc>> Implicit 993
| `-NoThrowAttr 0x555dff070b38 <col:13> Implicit
|-FunctionDecl 0x555dff070b60 prev 0x555dff070950 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:316:13 nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x555dff070830 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff0708b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| |-BuiltinAttr 0x555dff070c70 <<invalid sloc>> Inherited Implicit 993
| `-NoThrowAttr 0x555dff070c18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff070dd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:152:1 __nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x555dff070cb8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff070d38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| `-NoThrowAttr 0x555dff070e90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff071068 </usr/include/bits/mathcalls.h:318:13> col:13 implicit nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x555dff071170 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff072250 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff071110 <<invalid sloc>> Implicit 1000
| `-NoThrowAttr 0x555dff0722c8 <col:13> Implicit
|-FunctionDecl 0x555dff0722f0 prev 0x555dff071068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:318:13 nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x555dff070f00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x555dff070f80 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x555dff072400 <<invalid sloc>> Inherited Implicit 1000
| `-NoThrowAttr 0x555dff0723a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff072568 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 __nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x555dff072448 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x555dff0724c8 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x555dff072620 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0727b0 </usr/include/bits/mathcalls.h:329:13> col:13 implicit remainder 'double (double, double)' extern
| |-ParmVarDecl 0x555dff0728b8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff072920 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff072858 <<invalid sloc>> Implicit 1084
| `-NoThrowAttr 0x555dff072998 <col:13> Implicit
|-FunctionDecl 0x555dff0729c0 prev 0x555dff0727b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:329:13 remainder 'double (double, double)' extern
| |-ParmVarDecl 0x555dff072690 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff072710 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| |-BuiltinAttr 0x555dff072ad0 <<invalid sloc>> Inherited Implicit 1084
| `-NoThrowAttr 0x555dff072a78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff072c38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __remainder 'double (double, double)' extern
| |-ParmVarDecl 0x555dff072b18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x555dff072b98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| `-NoThrowAttr 0x555dff072cf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff072e80 </usr/include/bits/mathcalls.h:333:13> col:13 implicit scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x555dff072f88 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff072ff0 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff072f28 <<invalid sloc>> Implicit 1158
| `-NoThrowAttr 0x555dff073068 <col:13> Implicit
|-FunctionDecl 0x555dff073090 prev 0x555dff072e80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:333:13 scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x555dff072d60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x555dff072de0 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x555dff0731a0 <<invalid sloc>> Inherited Implicit 1158
| `-NoThrowAttr 0x555dff073148 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff073318 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:156:1 __scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x555dff0731e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x555dff073278 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x555dff0733d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0734d8 </usr/include/bits/mathcalls.h:337:17> col:17 implicit ilogb 'int (double)' extern
| |-ParmVarDecl 0x555dff0735e0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff073580 <<invalid sloc>> Implicit 739
| `-NoThrowAttr 0x555dff073650 <col:17> Implicit
|-FunctionDecl 0x555dff073678 prev 0x555dff0734d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:337:17 ilogb 'int (double)' extern
| |-ParmVarDecl 0x555dff073440 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff073780 <<invalid sloc>> Inherited Implicit 739
| `-NoThrowAttr 0x555dff073728 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff073860 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:157:1 __ilogb 'int (double)' extern
| |-ParmVarDecl 0x555dff0737c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff073910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff073ae8 </usr/include/bits/mathcalls.h:347:13> col:13 implicit scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x555dff073bf0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff073c58 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x555dff073b90 <<invalid sloc>> Implicit 1152
| `-NoThrowAttr 0x555dff073cd0 <col:13> Implicit
|-FunctionDecl 0x555dff073cf8 prev 0x555dff073ae8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:347:13 scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x555dff073980 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x555dff073a00 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x555dff073e08 <<invalid sloc>> Inherited Implicit 1152
| `-NoThrowAttr 0x555dff073db0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff073f70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:159:1 __scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x555dff073e50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x555dff073ed0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x555dff074028 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff074130 </usr/include/bits/mathcalls.h:351:13> col:13 implicit nearbyint 'double (double)' extern
| |-ParmVarDecl 0x555dff074270 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0741d8 <<invalid sloc>> Implicit 986
| |-NoThrowAttr 0x555dff0742e0 <col:13> Implicit
| `-ConstAttr 0x555dff074308 <col:13> Implicit
|-FunctionDecl 0x555dff074330 prev 0x555dff074130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:351:13 nearbyint 'double (double)' extern
| |-ParmVarDecl 0x555dff074098 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| |-BuiltinAttr 0x555dff074438 <<invalid sloc>> Inherited Implicit 986
| |-ConstAttr 0x555dff074468 <col:13> Inherited Implicit
| `-NoThrowAttr 0x555dff0743e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff074540 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __nearbyint 'double (double)' extern
| |-ParmVarDecl 0x555dff0744a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| `-NoThrowAttr 0x555dff0745f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0746f8 </usr/include/bits/mathcalls.h:355:14> col:14 implicit round 'double (double)' extern
| |-ParmVarDecl 0x555dff074800 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0747a0 <<invalid sloc>> Implicit 1126
| |-NoThrowAttr 0x555dff074870 <col:14> Implicit
| `-ConstAttr 0x555dff074898 <col:14> Implicit
|-FunctionDecl 0x555dff0748c0 prev 0x555dff0746f8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:355:14 round 'double (double)' extern
| |-ParmVarDecl 0x555dff074660 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'double'
| |-BuiltinAttr 0x555dff0749f0 <<invalid sloc>> Inherited Implicit 1126
| |-NoThrowAttr 0x555dff074970 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0749c8 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x555dff074ad0 <line:359:14> col:14 implicit trunc 'double (double)' extern
| |-ParmVarDecl 0x555dff074bd8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff074b78 <<invalid sloc>> Implicit 1432
| |-NoThrowAttr 0x555dff074c48 <col:14> Implicit
| `-ConstAttr 0x555dff074c70 <col:14> Implicit
|-FunctionDecl 0x555dff074c98 prev 0x555dff074ad0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:359:14 trunc 'double (double)' extern
| |-ParmVarDecl 0x555dff074a38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'double'
| |-BuiltinAttr 0x555dff074dc8 <<invalid sloc>> Inherited Implicit 1432
| |-NoThrowAttr 0x555dff074d48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff074da0 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x555dff075008 <line:364:13> col:13 implicit remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x555dff075110 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff075178 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff0751e0 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff0750b0 <<invalid sloc>> Implicit 1091
| `-NoThrowAttr 0x555dff0757f0 <col:13> Implicit
|-FunctionDecl 0x555dff075818 prev 0x555dff075008 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:364:13 remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x555dff074e10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x555dff074e90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x555dff074f10 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x555dff075930 <<invalid sloc>> Inherited Implicit 1091
| `-NoThrowAttr 0x555dff0758d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff075b20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:161:1 __remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x555dff075978 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x555dff0759f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x555dff075a78 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x555dff075be0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff075d28 </usr/include/bits/mathcalls.h:371:22> col:22 implicit lrint 'long (double)' extern
| |-ParmVarDecl 0x555dff075e30 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff075dd0 <<invalid sloc>> Implicit 908
| `-NoThrowAttr 0x555dff075ea0 <col:22> Implicit
|-FunctionDecl 0x555dff075ec8 prev 0x555dff075d28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:371:22 lrint 'long (double)' extern
| |-ParmVarDecl 0x555dff075c50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| |-BuiltinAttr 0x555dff075fd0 <<invalid sloc>> Inherited Implicit 908
| `-NoThrowAttr 0x555dff075f78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0760b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:162:1 __lrint 'long (double)' extern
| |-ParmVarDecl 0x555dff076018 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| `-NoThrowAttr 0x555dff076160 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0762a8 </usr/include/bits/mathcalls.h:373:27> col:27 implicit llrint 'long long (double)' extern
| |-ParmVarDecl 0x555dff0763b0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff076350 <<invalid sloc>> Implicit 855
| `-NoThrowAttr 0x555dff076420 <col:27> Implicit
|-FunctionDecl 0x555dff076448 prev 0x555dff0762a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:373:27 llrint 'long long (double)' extern
| |-ParmVarDecl 0x555dff0761d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| |-BuiltinAttr 0x555dff076550 <<invalid sloc>> Inherited Implicit 855
| `-NoThrowAttr 0x555dff0764f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff076630 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 __llrint 'long long (double)' extern
| |-ParmVarDecl 0x555dff076598 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| `-NoThrowAttr 0x555dff0766e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff076980 </usr/include/bits/mathcalls.h:377:22> col:22 implicit lround 'long (double)' extern
| |-ParmVarDecl 0x555dff076a88 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff076a28 <<invalid sloc>> Implicit 917
| `-NoThrowAttr 0x555dff076af8 <col:22> Implicit
|-FunctionDecl 0x555dff076b20 prev 0x555dff076980 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:377:22 lround 'long (double)' extern
| |-ParmVarDecl 0x555dff076750 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| |-BuiltinAttr 0x555dff076c28 <<invalid sloc>> Inherited Implicit 917
| `-NoThrowAttr 0x555dff076bd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff076d08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:164:1 __lround 'long (double)' extern
| |-ParmVarDecl 0x555dff076c70 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| `-NoThrowAttr 0x555dff076db8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff076ec0 </usr/include/bits/mathcalls.h:379:27> col:27 implicit llround 'long long (double)' extern
| |-ParmVarDecl 0x555dff076fc8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff076f68 <<invalid sloc>> Implicit 861
| `-NoThrowAttr 0x555dff077038 <col:27> Implicit
|-FunctionDecl 0x555dff077060 prev 0x555dff076ec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:379:27 llround 'long long (double)' extern
| |-ParmVarDecl 0x555dff076e28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| |-BuiltinAttr 0x555dff077168 <<invalid sloc>> Inherited Implicit 861
| `-NoThrowAttr 0x555dff077110 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff077248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __llround 'long long (double)' extern
| |-ParmVarDecl 0x555dff0771b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| `-NoThrowAttr 0x555dff0772f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff077488 </usr/include/bits/mathcalls.h:383:13> col:13 implicit fdim 'double (double, double)' extern
| |-ParmVarDecl 0x555dff077590 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff0775f8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff077530 <<invalid sloc>> Implicit 573
| `-NoThrowAttr 0x555dff077670 <col:13> Implicit
|-FunctionDecl 0x555dff077698 prev 0x555dff077488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:383:13 fdim 'double (double, double)' extern
| |-ParmVarDecl 0x555dff077368 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff0773e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| |-BuiltinAttr 0x555dff0777a8 <<invalid sloc>> Inherited Implicit 573
| `-NoThrowAttr 0x555dff077750 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff077a60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:166:1 __fdim 'double (double, double)' extern
| |-ParmVarDecl 0x555dff0777f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x555dff077870 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| `-NoThrowAttr 0x555dff077b18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff077ca8 </usr/include/bits/mathcalls.h:387:14> col:14 implicit fmax 'double (double, double)' extern
| |-ParmVarDecl 0x555dff077db0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff077e18 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff077d50 <<invalid sloc>> Implicit 599
| |-NoThrowAttr 0x555dff077e90 <col:14> Implicit
| `-ConstAttr 0x555dff077eb8 <col:14> Implicit
|-FunctionDecl 0x555dff077ee0 prev 0x555dff077ca8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:387:14 fmax 'double (double, double)' extern
| |-ParmVarDecl 0x555dff077b88 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff077c08 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'double'
| |-BuiltinAttr 0x555dff078018 <<invalid sloc>> Inherited Implicit 599
| |-NoThrowAttr 0x555dff077f98 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff077ff0 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x555dff078180 <line:390:14> col:14 implicit fmin 'double (double, double)' extern
| |-ParmVarDecl 0x555dff078288 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff0782f0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff078228 <<invalid sloc>> Implicit 615
| |-NoThrowAttr 0x555dff078368 <col:14> Implicit
| `-ConstAttr 0x555dff078390 <col:14> Implicit
|-FunctionDecl 0x555dff0783b8 prev 0x555dff078180 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:390:14 fmin 'double (double, double)' extern
| |-ParmVarDecl 0x555dff078060 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff0780e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'double'
| |-BuiltinAttr 0x555dff0784f0 <<invalid sloc>> Inherited Implicit 615
| |-NoThrowAttr 0x555dff078470 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0784c8 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x555dff078728 <line:394:13> col:13 implicit fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x555dff078830 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff078898 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x555dff078900 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x555dff0787d0 <<invalid sloc>> Implicit 591
| |-ConstAttr 0x555dff078980 <col:13> Implicit
| `-NoThrowAttr 0x555dff0789a8 <col:13> Implicit
|-FunctionDecl 0x555dff078c10 prev 0x555dff078728 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:394:13 fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x555dff078538 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x555dff0785b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x555dff078638 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| |-BuiltinAttr 0x555dff078d28 <<invalid sloc>> Inherited Implicit 591
| |-ConstAttr 0x555dff078d58 <col:13> Inherited Implicit
| `-NoThrowAttr 0x555dff078cd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff078f40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:168:1 __fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x555dff078d98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x555dff078e18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x555dff078e98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| `-NoThrowAttr 0x555dff079000 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff079190 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:489:13 scalb 'double (double, double)' extern
| |-ParmVarDecl 0x555dff079070 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff0790f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x555dff079248 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0793d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 __scalb 'double (double, double)' extern
| |-ParmVarDecl 0x555dff0792b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x555dff079338 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x555dff079490 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0795d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:175:1 __fpclassifyf 'int (float)' extern
| |-ParmVarDecl 0x555dff079500 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'float'
| |-NoThrowAttr 0x555dff079688 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0796e0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x555dff0797b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:176:1 __signbitf 'int (float)' extern
| |-ParmVarDecl 0x555dff079720 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'float'
| |-NoThrowAttr 0x555dff079868 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0798c0 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x555dff079998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:177:1 __isinff 'int (float)' extern
| |-ParmVarDecl 0x555dff079900 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'float'
| |-NoThrowAttr 0x555dff079a48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff079aa0 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x555dff07b150 <<scratch space>:178:1> col:1 implicit __finitef 'int (float)' extern
| |-ParmVarDecl 0x555dff07b258 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07b1f8 <<invalid sloc>> Implicit 1012
| |-NoThrowAttr 0x555dff07b2c8 <col:1> Implicit
| `-ConstAttr 0x555dff07b2f0 <col:1> Implicit
|-FunctionDecl 0x555dff07b318 prev 0x555dff07b150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:178:1 __finitef 'int (float)' extern
| |-ParmVarDecl 0x555dff079ae0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'float'
| |-BuiltinAttr 0x555dff07b448 <<invalid sloc>> Inherited Implicit 1012
| |-NoThrowAttr 0x555dff07b3c8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff07b420 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x555dff07b528 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:179:1 __isnanf 'int (float)' extern
| |-ParmVarDecl 0x555dff07b490 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'float'
| |-NoThrowAttr 0x555dff07b5d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff07b630 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x555dff07b7d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:180:1 __iseqsigf 'int (float, float)' extern
| |-ParmVarDecl 0x555dff07b670 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'float'
| |-ParmVarDecl 0x555dff07b6f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'float'
| `-NoThrowAttr 0x555dff07b890 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07b998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:181:1 __issignalingf 'int (float)' extern
| |-ParmVarDecl 0x555dff07b900 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'float'
| |-NoThrowAttr 0x555dff07ba48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff07baa0 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x555dff07bbb8 <<scratch space>:184:1> col:1 implicit acosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07bcc0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07bc60 <<invalid sloc>> Implicit 101
| `-NoThrowAttr 0x555dff07bd30 <col:1> Implicit
|-FunctionDecl 0x555dff07bd58 prev 0x555dff07bbb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07bae0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07be60 <<invalid sloc>> Inherited Implicit 101
| `-NoThrowAttr 0x555dff07be08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07bf40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07bea8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07bff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07c300 <<scratch space>:189:1> col:1 implicit asinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07c408 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07c3a8 <<invalid sloc>> Implicit 136
| `-NoThrowAttr 0x555dff07c478 <col:1> Implicit
|-FunctionDecl 0x555dff07c4a0 prev 0x555dff07c300 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07c060 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07c5a8 <<invalid sloc>> Inherited Implicit 136
| `-NoThrowAttr 0x555dff07c550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07c688 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07c5f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07c738 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07c840 <<scratch space>:194:1> col:1 implicit atanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07c948 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07c8e8 <<invalid sloc>> Implicit 153
| `-NoThrowAttr 0x555dff07c9b8 <col:1> Implicit
|-FunctionDecl 0x555dff07c9e0 prev 0x555dff07c840 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07c7a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07cae8 <<invalid sloc>> Inherited Implicit 153
| `-NoThrowAttr 0x555dff07ca90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07cbc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07cb30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07cc78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07ce48 <<scratch space>:199:1> col:1 implicit atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x555dff07cf50 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff07cfb8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07cef0 <<invalid sloc>> Implicit 159
| `-NoThrowAttr 0x555dff07d030 <col:1> Implicit
|-FunctionDecl 0x555dff07d058 prev 0x555dff07ce48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x555dff07cce8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x555dff07cd68 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| |-BuiltinAttr 0x555dff07d168 <<invalid sloc>> Inherited Implicit 159
| `-NoThrowAttr 0x555dff07d110 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07d310 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x555dff07d1b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x555dff07d230 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| `-NoThrowAttr 0x555dff07d3c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07d4d0 <<scratch space>:204:1> col:1 implicit cosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07d5d8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07d578 <<invalid sloc>> Implicit 381
| `-NoThrowAttr 0x555dff07d648 <col:1> Implicit
|-FunctionDecl 0x555dff07d670 prev 0x555dff07d4d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 cosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07d438 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| |-BuiltinAttr 0x555dff07d778 <<invalid sloc>> Inherited Implicit 381
| `-NoThrowAttr 0x555dff07d720 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07d858 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:206:1 __cosf 'float (float)' extern
| |-ParmVarDecl 0x555dff07d7c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| `-NoThrowAttr 0x555dff07d908 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07da10 <<scratch space>:209:1> col:1 implicit sinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07db18 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07dab8 <<invalid sloc>> Implicit 1177
| `-NoThrowAttr 0x555dff07db88 <col:1> Implicit
|-FunctionDecl 0x555dff07dbb0 prev 0x555dff07da10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:209:1 sinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07d978 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| |-BuiltinAttr 0x555dff07dcb8 <<invalid sloc>> Inherited Implicit 1177
| `-NoThrowAttr 0x555dff07dc60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07dd98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:211:1 __sinf 'float (float)' extern
| |-ParmVarDecl 0x555dff07dd00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| `-NoThrowAttr 0x555dff07de48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07df50 <<scratch space>:214:1> col:1 implicit tanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e058 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07dff8 <<invalid sloc>> Implicit 1398
| `-NoThrowAttr 0x555dff07e0c8 <col:1> Implicit
|-FunctionDecl 0x555dff07e0f0 prev 0x555dff07df50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:214:1 tanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07deb8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| |-BuiltinAttr 0x555dff07e1f8 <<invalid sloc>> Inherited Implicit 1398
| `-NoThrowAttr 0x555dff07e1a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07e320 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:216:1 __tanf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e240 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| `-NoThrowAttr 0x555dff07e3d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07e4d8 <<scratch space>:220:1> col:1 implicit coshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e5e0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07e580 <<invalid sloc>> Implicit 389
| `-NoThrowAttr 0x555dff07e650 <col:1> Implicit
|-FunctionDecl 0x555dff07e678 prev 0x555dff07e4d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:220:1 coshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e440 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07e780 <<invalid sloc>> Inherited Implicit 389
| `-NoThrowAttr 0x555dff07e728 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07e860 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:222:1 __coshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e7c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07e910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07ea18 <<scratch space>:225:1> col:1 implicit sinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07eb20 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07eac0 <<invalid sloc>> Implicit 1196
| `-NoThrowAttr 0x555dff07eb90 <col:1> Implicit
|-FunctionDecl 0x555dff07ebb8 prev 0x555dff07ea18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:225:1 sinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07e980 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07ecc0 <<invalid sloc>> Inherited Implicit 1196
| `-NoThrowAttr 0x555dff07ec68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07eda0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:227:1 __sinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07ed08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07ee50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07ef58 <<scratch space>:230:1> col:1 implicit tanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f060 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07f000 <<invalid sloc>> Implicit 1406
| `-NoThrowAttr 0x555dff07f0d0 <col:1> Implicit
|-FunctionDecl 0x555dff07f0f8 prev 0x555dff07ef58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:230:1 tanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07eec0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff07f200 <<invalid sloc>> Inherited Implicit 1406
| `-NoThrowAttr 0x555dff07f1a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07f330 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 __tanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f248 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff07f3e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07f4e8 <<scratch space>:235:1> col:1 implicit acoshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f5f0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07f590 <<invalid sloc>> Implicit 109
| `-NoThrowAttr 0x555dff07f660 <col:1> Implicit
|-FunctionDecl 0x555dff07f688 prev 0x555dff07f4e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:235:1 acoshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f450 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff07f790 <<invalid sloc>> Inherited Implicit 109
| `-NoThrowAttr 0x555dff07f738 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07f870 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 __acoshf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f7d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff07f920 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07fa28 <<scratch space>:240:1> col:1 implicit asinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07fb30 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff07fad0 <<invalid sloc>> Implicit 144
| `-NoThrowAttr 0x555dff07fba0 <col:1> Implicit
|-FunctionDecl 0x555dff07fbc8 prev 0x555dff07fa28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:240:1 asinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07f990 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff07fcd0 <<invalid sloc>> Inherited Implicit 144
| `-NoThrowAttr 0x555dff07fc78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07fdb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 __asinhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07fd18 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff07fe60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff07ff68 <<scratch space>:245:1> col:1 implicit atanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff080070 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff080010 <<invalid sloc>> Implicit 169
| `-NoThrowAttr 0x555dff0800e0 <col:1> Implicit
|-FunctionDecl 0x555dff080108 prev 0x555dff07ff68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:245:1 atanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff07fed0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff080210 <<invalid sloc>> Inherited Implicit 169
| `-NoThrowAttr 0x555dff0801b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff080340 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 __atanhf 'float (float)' extern
| |-ParmVarDecl 0x555dff080258 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff0803f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0804f8 <<scratch space>:250:1> col:1 implicit expf 'float (float)' extern
| |-ParmVarDecl 0x555dff080600 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0805a0 <<invalid sloc>> Implicit 521
| `-NoThrowAttr 0x555dff080670 <col:1> Implicit
|-FunctionDecl 0x555dff080698 prev 0x555dff0804f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 expf 'float (float)' extern
| |-ParmVarDecl 0x555dff080460 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| |-BuiltinAttr 0x555dff0807a0 <<invalid sloc>> Inherited Implicit 521
| `-NoThrowAttr 0x555dff080748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff080880 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __expf 'float (float)' extern
| |-ParmVarDecl 0x555dff0807e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| `-NoThrowAttr 0x555dff080930 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff080b08 <<scratch space>:253:1> col:1 implicit frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x555dff080c10 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff080c78 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff080bb0 <<invalid sloc>> Implicit 643
| `-NoThrowAttr 0x555dff080cf0 <col:1> Implicit
|-FunctionDecl 0x555dff080d18 prev 0x555dff080b08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:253:1 frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x555dff0809a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff080a20 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x555dff080e28 <<invalid sloc>> Inherited Implicit 643
| `-NoThrowAttr 0x555dff080dd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff080f90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 __frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x555dff080e70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff080ef0 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x555dff081048 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff081218 <<scratch space>:256:1> col:1 implicit ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff081830 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff081898 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff0812c0 <<invalid sloc>> Implicit 838
| `-NoThrowAttr 0x555dff081910 <col:1> Implicit
|-FunctionDecl 0x555dff081938 prev 0x555dff081218 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:256:1 ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff0810b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff081138 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x555dff081a48 <<invalid sloc>> Inherited Implicit 838
| `-NoThrowAttr 0x555dff0819f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff081bb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:258:1 __ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff081a90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff081b10 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x555dff081c68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff081d70 <<scratch space>:261:1> col:1 implicit logf 'float (float)' extern
| |-ParmVarDecl 0x555dff081e78 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff081e18 <<invalid sloc>> Implicit 867
| `-NoThrowAttr 0x555dff081ee8 <col:1> Implicit
|-FunctionDecl 0x555dff081f10 prev 0x555dff081d70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:261:1 logf 'float (float)' extern
| |-ParmVarDecl 0x555dff081cd8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| |-BuiltinAttr 0x555dff082018 <<invalid sloc>> Inherited Implicit 867
| `-NoThrowAttr 0x555dff081fc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0820f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:263:1 __logf 'float (float)' extern
| |-ParmVarDecl 0x555dff082060 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| `-NoThrowAttr 0x555dff0821a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0822b0 <<scratch space>:266:1> col:1 implicit log10f 'float (float)' extern
| |-ParmVarDecl 0x555dff0823b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff082358 <<invalid sloc>> Implicit 888
| `-NoThrowAttr 0x555dff082428 <col:1> Implicit
|-FunctionDecl 0x555dff082450 prev 0x555dff0822b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:266:1 log10f 'float (float)' extern
| |-ParmVarDecl 0x555dff082218 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff082558 <<invalid sloc>> Inherited Implicit 888
| `-NoThrowAttr 0x555dff082500 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff082638 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:268:1 __log10f 'float (float)' extern
| |-ParmVarDecl 0x555dff0825a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff0826e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff082928 <<scratch space>:269:1> col:1 implicit modff 'float (float, float *)' extern
| |-ParmVarDecl 0x555dff082a30 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff082a98 <<invalid sloc>> <invalid sloc> 'float *'
| |-BuiltinAttr 0x555dff0829d0 <<invalid sloc>> Implicit 959
| `-NoThrowAttr 0x555dff082b10 <col:1> Implicit
|-FunctionDecl 0x555dff082b38 prev 0x555dff082928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 modff 'float (float, float *)' extern
| |-ParmVarDecl 0x555dff082758 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff082840 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-BuiltinAttr 0x555dff082c48 <<invalid sloc>> Inherited Implicit 959
| `-NoThrowAttr 0x555dff082bf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff082dd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:271:1 __modff 'float (float, float *)' extern
| |-ParmVarDecl 0x555dff082c90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff082d10 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-NoThrowAttr 0x555dff082e88 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff082ee0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x555dff082fd8 <<scratch space>:275:1> col:1 implicit expm1f 'float (float)' extern
| |-ParmVarDecl 0x555dff0830e0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff083080 <<invalid sloc>> Implicit 544
| `-NoThrowAttr 0x555dff083150 <col:1> Implicit
|-FunctionDecl 0x555dff083178 prev 0x555dff082fd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 expm1f 'float (float)' extern
| |-ParmVarDecl 0x555dff082f40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff083280 <<invalid sloc>> Inherited Implicit 544
| `-NoThrowAttr 0x555dff083228 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff083360 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __expm1f 'float (float)' extern
| |-ParmVarDecl 0x555dff0832c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff083410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff083518 <<scratch space>:280:1> col:1 implicit log1pf 'float (float)' extern
| |-ParmVarDecl 0x555dff083620 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0835c0 <<invalid sloc>> Implicit 873
| `-NoThrowAttr 0x555dff083690 <col:1> Implicit
|-FunctionDecl 0x555dff0836b8 prev 0x555dff083518 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:280:1 log1pf 'float (float)' extern
| |-ParmVarDecl 0x555dff083480 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff0837c0 <<invalid sloc>> Inherited Implicit 873
| `-NoThrowAttr 0x555dff083768 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0838e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:282:1 __log1pf 'float (float)' extern
| |-ParmVarDecl 0x555dff083850 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff083998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff083aa0 <<scratch space>:283:1> col:1 implicit logbf 'float (float)' extern
| |-ParmVarDecl 0x555dff083ba8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff083b48 <<invalid sloc>> Implicit 898
| `-NoThrowAttr 0x555dff083c18 <col:1> Implicit
|-FunctionDecl 0x555dff083c40 prev 0x555dff083aa0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 logbf 'float (float)' extern
| |-ParmVarDecl 0x555dff083a08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| |-BuiltinAttr 0x555dff083d48 <<invalid sloc>> Inherited Implicit 898
| `-NoThrowAttr 0x555dff083cf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff083e28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __logbf 'float (float)' extern
| |-ParmVarDecl 0x555dff083d90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| `-NoThrowAttr 0x555dff083ed8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff083fe0 <<scratch space>:288:1> col:1 implicit exp2f 'float (float)' extern
| |-ParmVarDecl 0x555dff0840e8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff084088 <<invalid sloc>> Implicit 527
| `-NoThrowAttr 0x555dff084158 <col:1> Implicit
|-FunctionDecl 0x555dff084180 prev 0x555dff083fe0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 exp2f 'float (float)' extern
| |-ParmVarDecl 0x555dff083f48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff084288 <<invalid sloc>> Inherited Implicit 527
| `-NoThrowAttr 0x555dff084230 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff084368 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:290:1 __exp2f 'float (float)' extern
| |-ParmVarDecl 0x555dff0842d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff084418 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff084520 <<scratch space>:293:1> col:1 implicit log2f 'float (float)' extern
| |-ParmVarDecl 0x555dff084628 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0845c8 <<invalid sloc>> Implicit 880
| `-NoThrowAttr 0x555dff084698 <col:1> Implicit
|-FunctionDecl 0x555dff0846c0 prev 0x555dff084520 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:293:1 log2f 'float (float)' extern
| |-ParmVarDecl 0x555dff084488 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff0847c8 <<invalid sloc>> Inherited Implicit 880
| `-NoThrowAttr 0x555dff084770 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0848f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 __log2f 'float (float)' extern
| |-ParmVarDecl 0x555dff084860 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff0849a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff084b38 <<scratch space>:298:1> col:1 implicit powf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff084c40 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff084ca8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff084be0 <<invalid sloc>> Implicit 1046
| `-NoThrowAttr 0x555dff084d20 <col:1> Implicit
|-FunctionDecl 0x555dff084d48 prev 0x555dff084b38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 powf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff084a18 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x555dff084a98 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| |-BuiltinAttr 0x555dff084e58 <<invalid sloc>> Inherited Implicit 1046
| `-NoThrowAttr 0x555dff084e00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff084fc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __powf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff084ea0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x555dff084f20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| `-NoThrowAttr 0x555dff085078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff085180 <<scratch space>:301:1> col:1 implicit sqrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff085288 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff085228 <<invalid sloc>> Implicit 1211
| `-NoThrowAttr 0x555dff0852f8 <col:1> Implicit
|-FunctionDecl 0x555dff085320 prev 0x555dff085180 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:301:1 sqrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff0850e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| |-BuiltinAttr 0x555dff085428 <<invalid sloc>> Inherited Implicit 1211
| `-NoThrowAttr 0x555dff0853d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff085508 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 __sqrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff085470 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| `-NoThrowAttr 0x555dff0855b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff085748 <<scratch space>:306:1> col:1 implicit hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff069df0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff069e58 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0857f0 <<invalid sloc>> Implicit 729
| `-NoThrowAttr 0x555dff069ed0 <col:1> Implicit
|-FunctionDecl 0x555dff069ef8 prev 0x555dff085748 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:306:1 hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff085628 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff0856a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| |-BuiltinAttr 0x555dff06a008 <<invalid sloc>> Inherited Implicit 729
| `-NoThrowAttr 0x555dff069fb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06a170 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 __hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff06a050 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff06a0d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| `-NoThrowAttr 0x555dff06a228 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06a330 <<scratch space>:311:1> col:1 implicit cbrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff06a438 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff06a3d8 <<invalid sloc>> Implicit 296
| |-NoThrowAttr 0x555dff06a4a8 <col:1> Implicit
| `-ConstAttr 0x555dff06a4d0 <col:1> Implicit
|-FunctionDecl 0x555dff06a4f8 prev 0x555dff06a330 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 cbrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff06a298 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| |-BuiltinAttr 0x555dff06a600 <<invalid sloc>> Inherited Implicit 296
| |-ConstAttr 0x555dff06a630 <<scratch space>:311:1> Inherited Implicit
| `-NoThrowAttr 0x555dff06a5a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06a708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __cbrtf 'float (float)' extern
| |-ParmVarDecl 0x555dff06a670 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| `-NoThrowAttr 0x555dff06a7b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff06a8c0 <<scratch space>:3:1> col:1 implicit ceilf 'float (float)' extern
| |-ParmVarDecl 0x555dff06a9c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff06a968 <<invalid sloc>> Implicit 315
| |-NoThrowAttr 0x555dff06aa38 <col:1> Implicit
| `-ConstAttr 0x555dff06aa60 <col:1> Implicit
|-FunctionDecl 0x555dff06aa88 prev 0x555dff06a8c0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:3:1 ceilf 'float (float)' extern
| |-ParmVarDecl 0x555dff06a828 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'float'
| |-BuiltinAttr 0x555dff06abb8 <<invalid sloc>> Inherited Implicit 315
| |-NoThrowAttr 0x555dff06ab38 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff06ab90 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x555dff06ac98 <<scratch space>:4:1> col:1 implicit used fabsf 'float (float)' extern
| |-ParmVarDecl 0x555dff098250 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff06ad40 <<invalid sloc>> Implicit 562
| |-NoThrowAttr 0x555dff0982c0 <col:1> Implicit
| `-ConstAttr 0x555dff0982e8 <col:1> Implicit
|-FunctionDecl 0x555dff098310 prev 0x555dff06ac98 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:4:1 used fabsf 'float (float)' extern
| |-ParmVarDecl 0x555dff06ac00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'float'
| |-BuiltinAttr 0x555dff098440 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x555dff0983c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff098418 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x555dff098520 <<scratch space>:5:1> col:1 implicit floorf 'float (float)' extern
| |-ParmVarDecl 0x555dff098628 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0985c8 <<invalid sloc>> Implicit 581
| |-NoThrowAttr 0x555dff098698 <col:1> Implicit
| `-ConstAttr 0x555dff0986c0 <col:1> Implicit
|-FunctionDecl 0x555dff0986e8 prev 0x555dff098520 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:5:1 floorf 'float (float)' extern
| |-ParmVarDecl 0x555dff098488 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'float'
| |-BuiltinAttr 0x555dff098818 <<invalid sloc>> Inherited Implicit 581
| |-NoThrowAttr 0x555dff098798 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0987f0 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x555dff098980 <<scratch space>:6:1> col:1 implicit fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff098a88 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff098af0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff098a28 <<invalid sloc>> Implicit 629
| `-NoThrowAttr 0x555dff098b68 <col:1> Implicit
|-FunctionDecl 0x555dff098b90 prev 0x555dff098980 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:6:1 fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff098860 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff0988e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| |-BuiltinAttr 0x555dff098ca0 <<invalid sloc>> Inherited Implicit 629
| `-NoThrowAttr 0x555dff098c48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff098e08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:8:1 __fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff098ce8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff098d68 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| `-NoThrowAttr 0x555dff098ec0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff098fc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:9:1 isinff 'int (float)' extern
| |-ParmVarDecl 0x555dff098f30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'float'
| |-NoThrowAttr 0x555dff099078 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0990d0 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x555dff0991a8 <<scratch space>:10:1> col:1 implicit finitef 'int (float)' extern
| |-ParmVarDecl 0x555dff0992c0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff099260 <<invalid sloc>> Implicit 577
| |-NoThrowAttr 0x555dff099330 <col:1> Implicit
| `-ConstAttr 0x555dff099358 <col:1> Implicit
|-FunctionDecl 0x555dff099380 prev 0x555dff0991a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:10:1 finitef 'int (float)' extern
| |-ParmVarDecl 0x555dff099110 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'float'
| |-BuiltinAttr 0x555dff0994b0 <<invalid sloc>> Inherited Implicit 577
| |-NoThrowAttr 0x555dff099430 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff099488 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x555dff099618 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:11:1 dremf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0994f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff099578 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x555dff0996d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff099860 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:13:1 __dremf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff099740 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff0997c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x555dff099918 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff099a20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:14:1 significandf 'float (float)' extern
| |-ParmVarDecl 0x555dff099988 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x555dff099ad0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff099bd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:16:1 __significandf 'float (float)' extern
| |-ParmVarDecl 0x555dff099b40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x555dff099c88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff099e18 <<scratch space>:17:1> col:1 implicit copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff099f20 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff099f88 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff099ec0 <<invalid sloc>> Implicit 359
| |-NoThrowAttr 0x555dff09a000 <col:1> Implicit
| `-ConstAttr 0x555dff09a028 <col:1> Implicit
|-FunctionDecl 0x555dff09a050 prev 0x555dff099e18 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:17:1 copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff099cf8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff099d78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'float'
| |-BuiltinAttr 0x555dff09a188 <<invalid sloc>> Inherited Implicit 359
| |-NoThrowAttr 0x555dff09a108 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff09a160 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x555dff09a2d8 <<scratch space>:18:1> col:1 implicit nanf 'float (const char *)' extern
| |-ParmVarDecl 0x555dff09a3e0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff09a380 <<invalid sloc>> Implicit 971
| |-NoThrowAttr 0x555dff09a450 <col:1> Implicit
| `-PureAttr 0x555dff09a478 <col:1> Implicit
|-FunctionDecl 0x555dff09a4a0 prev 0x555dff09a2d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:18:1 nanf 'float (const char *)' extern
| |-ParmVarDecl 0x555dff09a1d0 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x555dff09a5a8 <<invalid sloc>> Inherited Implicit 971
| |-PureAttr 0x555dff09a5d8 <<scratch space>:18:1> Inherited Implicit
| `-NoThrowAttr 0x555dff09a550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09a6b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:20:1 __nanf 'float (const char *)' extern
| |-ParmVarDecl 0x555dff09a618 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x555dff09a760 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09a868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:21:1 isnanf 'int (float)' extern
| |-ParmVarDecl 0x555dff09a7d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'float'
| |-NoThrowAttr 0x555dff09a918 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff09a970 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x555dff09aa48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:22:1 j0f 'float (float)' extern
| |-ParmVarDecl 0x555dff09a9b0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x555dff09aaf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09ac00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:24:1 __j0f 'float (float)' extern
| |-ParmVarDecl 0x555dff09ab68 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x555dff09acb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09adb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:25:1 j1f 'float (float)' extern
| |-ParmVarDecl 0x555dff09ad20 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x555dff09ae68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09af70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:27:1 __j1f 'float (float)' extern
| |-ParmVarDecl 0x555dff09aed8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x555dff09b020 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09b280 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:28:1 jnf 'float (int, float)' extern
| |-ParmVarDecl 0x555dff09b090 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x555dff09b110 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x555dff09b338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09b4c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:30:1 __jnf 'float (int, float)' extern
| |-ParmVarDecl 0x555dff09b3a8 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x555dff09b428 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x555dff09b580 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09b688 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:31:1 y0f 'float (float)' extern
| |-ParmVarDecl 0x555dff09b5f0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x555dff09b738 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09b840 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:33:1 __y0f 'float (float)' extern
| |-ParmVarDecl 0x555dff09b7a8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x555dff09b8f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09b9f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:34:1 y1f 'float (float)' extern
| |-ParmVarDecl 0x555dff09b960 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x555dff09baa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09bbb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:36:1 __y1f 'float (float)' extern
| |-ParmVarDecl 0x555dff09bb18 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x555dff09bc60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09bdf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:37:1 ynf 'float (int, float)' extern
| |-ParmVarDecl 0x555dff09bcd0 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x555dff09bd50 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x555dff09bea8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09c038 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:39:1 __ynf 'float (int, float)' extern
| |-ParmVarDecl 0x555dff09bf18 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x555dff09bf98 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x555dff09c0f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09c290 <<scratch space>:42:1> col:1 implicit erff 'float (float)' extern
| |-ParmVarDecl 0x555dff09c398 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09c338 <<invalid sloc>> Implicit 501
| `-NoThrowAttr 0x555dff09c408 <col:1> Implicit
|-FunctionDecl 0x555dff09c430 prev 0x555dff09c290 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:42:1 erff 'float (float)' extern
| |-ParmVarDecl 0x555dff09c160 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| |-BuiltinAttr 0x555dff09c538 <<invalid sloc>> Inherited Implicit 501
| `-NoThrowAttr 0x555dff09c4e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09c618 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:44:1 __erff 'float (float)' extern
| |-ParmVarDecl 0x555dff09c580 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| `-NoThrowAttr 0x555dff09c6c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09c7d0 <<scratch space>:47:1> col:1 implicit erfcf 'float (float)' extern
| |-ParmVarDecl 0x555dff09c8d8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09c878 <<invalid sloc>> Implicit 508
| `-NoThrowAttr 0x555dff09c948 <col:1> Implicit
|-FunctionDecl 0x555dff09c970 prev 0x555dff09c7d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:47:1 erfcf 'float (float)' extern
| |-ParmVarDecl 0x555dff09c738 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| |-BuiltinAttr 0x555dff09ca78 <<invalid sloc>> Inherited Implicit 508
| `-NoThrowAttr 0x555dff09ca20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09cb58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:49:1 __erfcf 'float (float)' extern
| |-ParmVarDecl 0x555dff09cac0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| `-NoThrowAttr 0x555dff09cc08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09cd10 <<scratch space>:50:1> col:1 implicit lgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09ce18 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09cdb8 <<invalid sloc>> Implicit 846
| `-NoThrowAttr 0x555dff09ce88 <col:1> Implicit
|-FunctionDecl 0x555dff09ceb0 prev 0x555dff09cd10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:50:1 lgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09cc78 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| |-BuiltinAttr 0x555dff09cfb8 <<invalid sloc>> Inherited Implicit 846
| `-NoThrowAttr 0x555dff09cf60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09d098 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:52:1 __lgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d000 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| `-NoThrowAttr 0x555dff09d148 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09d2a0 <<scratch space>:53:1> col:1 implicit tgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d3a8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09d348 <<invalid sloc>> Implicit 1416
| `-NoThrowAttr 0x555dff09d418 <col:1> Implicit
|-FunctionDecl 0x555dff09d440 prev 0x555dff09d2a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:53:1 tgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d1b8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| |-BuiltinAttr 0x555dff09d548 <<invalid sloc>> Inherited Implicit 1416
| `-NoThrowAttr 0x555dff09d4f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09d628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:55:1 __tgammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d590 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| `-NoThrowAttr 0x555dff09d6d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09d7e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:56:1 gammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d748 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x555dff09d890 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09d998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:58:1 __gammaf 'float (float)' extern
| |-ParmVarDecl 0x555dff09d900 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x555dff09da48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09dbd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:60:1 lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x555dff09dab8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x555dff09db38 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff09dc90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09de20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:63:1 __lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x555dff09dd00 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x555dff09dd80 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff09ded8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09dfe0 <<scratch space>:64:1> col:1 implicit rintf 'float (float)' extern
| |-ParmVarDecl 0x555dff09e0e8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09e088 <<invalid sloc>> Implicit 1100
| |-ConstAttr 0x555dff09e158 <col:1> Implicit
| `-NoThrowAttr 0x555dff09e180 <col:1> Implicit
|-FunctionDecl 0x555dff09e1a8 prev 0x555dff09dfe0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:64:1 rintf 'float (float)' extern
| |-ParmVarDecl 0x555dff09df48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| |-BuiltinAttr 0x555dff09f2f0 <<invalid sloc>> Inherited Implicit 1100
| |-ConstAttr 0x555dff09f320 <<scratch space>:64:1> Inherited Implicit
| `-NoThrowAttr 0x555dff09e258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09f3f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:66:1 __rintf 'float (float)' extern
| |-ParmVarDecl 0x555dff09f360 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| `-NoThrowAttr 0x555dff09f4a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09f638 <<scratch space>:67:1> col:1 implicit nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff09f740 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff09f7a8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff09f6e0 <<invalid sloc>> Implicit 991
| `-NoThrowAttr 0x555dff09f820 <col:1> Implicit
|-FunctionDecl 0x555dff09f848 prev 0x555dff09f638 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:67:1 nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff09f518 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff09f598 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| |-BuiltinAttr 0x555dff09f958 <<invalid sloc>> Inherited Implicit 991
| `-NoThrowAttr 0x555dff09f900 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09fac0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:69:1 __nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff09f9a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff09fa20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| `-NoThrowAttr 0x555dff09fb78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff09fd48 <<scratch space>:70:1> col:1 implicit nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x555dff09fe50 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff09feb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff09fdf0 <<invalid sloc>> Implicit 998
| `-NoThrowAttr 0x555dff09ff30 <col:1> Implicit
|-FunctionDecl 0x555dff09ff58 prev 0x555dff09fd48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:70:1 nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x555dff09fbe8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x555dff09fc68 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x555dff0a0068 <<invalid sloc>> Inherited Implicit 998
| `-NoThrowAttr 0x555dff0a0010 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a01d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:72:1 __nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x555dff0a00b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x555dff0a0130 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x555dff0a0288 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05bba8 <<scratch space>:74:1> col:1 implicit remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff05bcb0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff05bd18 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff05bc50 <<invalid sloc>> Implicit 1082
| `-NoThrowAttr 0x555dff05bd90 <col:1> Implicit
|-FunctionDecl 0x555dff05bdb8 prev 0x555dff05bba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:74:1 remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff05ba88 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff05bb08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| |-BuiltinAttr 0x555dff05bec8 <<invalid sloc>> Inherited Implicit 1082
| `-NoThrowAttr 0x555dff05be70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05c030 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:76:1 __remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff05bf10 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x555dff05bf90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| `-NoThrowAttr 0x555dff05c0e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05c278 <<scratch space>:77:1> col:1 implicit scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff05c380 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff05c3e8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff05c320 <<invalid sloc>> Implicit 1156
| `-NoThrowAttr 0x555dff05c460 <col:1> Implicit
|-FunctionDecl 0x555dff05c488 prev 0x555dff05c278 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:77:1 scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff05c158 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x555dff05c1d8 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x555dff05c598 <<invalid sloc>> Inherited Implicit 1156
| `-NoThrowAttr 0x555dff05c540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05c700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:79:1 __scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x555dff05c5e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x555dff05c660 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x555dff05c7b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff05c8c0 <<scratch space>:80:1> col:1 implicit ilogbf 'int (float)' extern
| |-ParmVarDecl 0x555dff05c9c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff05c968 <<invalid sloc>> Implicit 737
| `-NoThrowAttr 0x555dff0a22e0 <col:1> Implicit
|-FunctionDecl 0x555dff0a2308 prev 0x555dff05c8c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 ilogbf 'int (float)' extern
| |-ParmVarDecl 0x555dff05c828 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff0a2410 <<invalid sloc>> Inherited Implicit 737
| `-NoThrowAttr 0x555dff0a23b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a24f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __ilogbf 'int (float)' extern
| |-ParmVarDecl 0x555dff0a2458 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff0a25a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a2778 <<scratch space>:84:1> col:1 implicit scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x555dff0a2880 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a28e8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x555dff0a2820 <<invalid sloc>> Implicit 1150
| `-NoThrowAttr 0x555dff0a2960 <col:1> Implicit
|-FunctionDecl 0x555dff0a2988 prev 0x555dff0a2778 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x555dff0a2610 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x555dff0a2690 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x555dff0a2a98 <<invalid sloc>> Inherited Implicit 1150
| `-NoThrowAttr 0x555dff0a2a40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a2c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x555dff0a2ae0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x555dff0a2b60 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x555dff0a2cb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a2dc0 <<scratch space>:87:1> col:1 implicit nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a2ec8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a2e68 <<invalid sloc>> Implicit 984
| |-NoThrowAttr 0x555dff0a2f38 <col:1> Implicit
| `-ConstAttr 0x555dff0a2f60 <col:1> Implicit
|-FunctionDecl 0x555dff0a2f88 prev 0x555dff0a2dc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:87:1 nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a2d28 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| |-BuiltinAttr 0x555dff0a3090 <<invalid sloc>> Inherited Implicit 984
| |-ConstAttr 0x555dff0a30c0 <<scratch space>:87:1> Inherited Implicit
| `-NoThrowAttr 0x555dff0a3038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a3198 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:89:1 __nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a3100 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| `-NoThrowAttr 0x555dff0a3248 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a3388 <<scratch space>:90:1> col:1 implicit roundf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a3490 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a3430 <<invalid sloc>> Implicit 1124
| |-NoThrowAttr 0x555dff0a3500 <col:1> Implicit
| `-ConstAttr 0x555dff0a3528 <col:1> Implicit
|-FunctionDecl 0x555dff0a3550 prev 0x555dff0a3388 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:90:1 roundf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a32f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'float'
| |-BuiltinAttr 0x555dff0a3680 <<invalid sloc>> Inherited Implicit 1124
| |-NoThrowAttr 0x555dff0a3600 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a3658 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x555dff0a3760 <<scratch space>:91:1> col:1 implicit truncf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a3868 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a3808 <<invalid sloc>> Implicit 1430
| |-NoThrowAttr 0x555dff0a38d8 <col:1> Implicit
| `-ConstAttr 0x555dff0a3900 <col:1> Implicit
|-FunctionDecl 0x555dff0a3928 prev 0x555dff0a3760 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:91:1 truncf 'float (float)' extern
| |-ParmVarDecl 0x555dff0a36c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'float'
| |-BuiltinAttr 0x555dff0a3a58 <<invalid sloc>> Inherited Implicit 1430
| |-NoThrowAttr 0x555dff0a39d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a3a30 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x555dff0a3c98 <<scratch space>:92:1> col:1 implicit remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x555dff0a3da0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a3e08 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a3e70 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff0a3d40 <<invalid sloc>> Implicit 1089
| `-NoThrowAttr 0x555dff0a3ef0 <col:1> Implicit
|-FunctionDecl 0x555dff0a3f18 prev 0x555dff0a3c98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:92:1 remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x555dff0a3aa0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x555dff0a3b20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x555dff0a3ba0 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x555dff0a4030 <<invalid sloc>> Inherited Implicit 1089
| `-NoThrowAttr 0x555dff0a3fd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a4220 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:94:1 __remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x555dff0a4078 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x555dff0a40f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x555dff0a4178 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x555dff0a4300 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a4448 <<scratch space>:95:1> col:1 implicit lrintf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a4550 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a44f0 <<invalid sloc>> Implicit 906
| `-NoThrowAttr 0x555dff0a45c0 <col:1> Implicit
|-FunctionDecl 0x555dff0a45e8 prev 0x555dff0a4448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 lrintf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a4370 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| |-BuiltinAttr 0x555dff0a46f0 <<invalid sloc>> Inherited Implicit 906
| `-NoThrowAttr 0x555dff0a4698 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a47d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __lrintf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a4738 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| `-NoThrowAttr 0x555dff0a4880 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a49c8 <<scratch space>:98:1> col:1 implicit llrintf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a4ad0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a4a70 <<invalid sloc>> Implicit 853
| `-NoThrowAttr 0x555dff0a4b40 <col:1> Implicit
|-FunctionDecl 0x555dff0a4b68 prev 0x555dff0a49c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:98:1 llrintf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a48f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| |-BuiltinAttr 0x555dff0a4c70 <<invalid sloc>> Inherited Implicit 853
| `-NoThrowAttr 0x555dff0a4c18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a4d50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:100:1 __llrintf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a4cb8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| `-NoThrowAttr 0x555dff0a4e00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a4f08 <<scratch space>:101:1> col:1 implicit lroundf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a5010 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a4fb0 <<invalid sloc>> Implicit 915
| `-NoThrowAttr 0x555dff0a5080 <col:1> Implicit
|-FunctionDecl 0x555dff0a50a8 prev 0x555dff0a4f08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 lroundf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a4e70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| |-BuiltinAttr 0x555dff0a51b0 <<invalid sloc>> Inherited Implicit 915
| `-NoThrowAttr 0x555dff0a5158 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a5310 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __lroundf 'long (float)' extern
| |-ParmVarDecl 0x555dff0a51f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| `-NoThrowAttr 0x555dff0a53c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a54c8 <<scratch space>:104:1> col:1 implicit llroundf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a55d0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a5570 <<invalid sloc>> Implicit 859
| `-NoThrowAttr 0x555dff0a5640 <col:1> Implicit
|-FunctionDecl 0x555dff0a5668 prev 0x555dff0a54c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:104:1 llroundf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a5430 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| |-BuiltinAttr 0x555dff0a5770 <<invalid sloc>> Inherited Implicit 859
| `-NoThrowAttr 0x555dff0a5718 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a5850 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __llroundf 'long long (float)' extern
| |-ParmVarDecl 0x555dff0a57b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| `-NoThrowAttr 0x555dff0a5900 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a5a90 <<scratch space>:107:1> col:1 implicit fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a5b98 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a5c00 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a5b38 <<invalid sloc>> Implicit 571
| `-NoThrowAttr 0x555dff0a5c78 <col:1> Implicit
|-FunctionDecl 0x555dff0a5ca0 prev 0x555dff0a5a90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a5970 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff0a59f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| |-BuiltinAttr 0x555dff0a5db0 <<invalid sloc>> Inherited Implicit 571
| `-NoThrowAttr 0x555dff0a5d58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a5f18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a5df8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x555dff0a5e78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| `-NoThrowAttr 0x555dff0a5fd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a6160 <<scratch space>:111:1> col:1 implicit fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a6268 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a6320 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a6208 <<invalid sloc>> Implicit 597
| |-NoThrowAttr 0x555dff0a6398 <col:1> Implicit
| `-ConstAttr 0x555dff0a63c0 <col:1> Implicit
|-FunctionDecl 0x555dff0a63e8 prev 0x555dff0a6160 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:111:1 fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a6040 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff0a60c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'float'
| |-BuiltinAttr 0x555dff0a6520 <<invalid sloc>> Inherited Implicit 597
| |-NoThrowAttr 0x555dff0a64a0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a64f8 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x555dff0a6688 <<scratch space>:112:1> col:1 implicit fminf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a6790 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a67f8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a6730 <<invalid sloc>> Implicit 613
| |-NoThrowAttr 0x555dff0a6870 <col:1> Implicit
| `-ConstAttr 0x555dff0a6898 <col:1> Implicit
|-FunctionDecl 0x555dff0a68c0 prev 0x555dff0a6688 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:112:1 fminf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a6568 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff0a65e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'float'
| |-BuiltinAttr 0x555dff0a69f8 <<invalid sloc>> Inherited Implicit 613
| |-NoThrowAttr 0x555dff0a6978 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a69d0 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x555dff0a6c38 <<scratch space>:113:1> col:1 implicit fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x555dff0a6d40 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a6da8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x555dff0a6e10 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x555dff0a6ce0 <<invalid sloc>> Implicit 589
| |-ConstAttr 0x555dff0a6e90 <col:1> Implicit
| `-NoThrowAttr 0x555dff0a6eb8 <col:1> Implicit
|-FunctionDecl 0x555dff0a6ee0 prev 0x555dff0a6c38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:113:1 fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x555dff0a6a40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x555dff0a6ac0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x555dff0a6b40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| |-BuiltinAttr 0x555dff0a6ff8 <<invalid sloc>> Inherited Implicit 589
| |-ConstAttr 0x555dff0a7028 <<scratch space>:113:1> Inherited Implicit
| `-NoThrowAttr 0x555dff0a6fa0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a7210 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x555dff0a7068 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x555dff0a70e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x555dff0a7168 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| `-NoThrowAttr 0x555dff0a72d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a7498 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:121:1 scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a7378 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff0a73f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x555dff0a7550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a76e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:123:1 __scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x555dff0a75c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x555dff0a7640 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x555dff0a7798 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a78d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:124:1 __fpclassifyl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a7808 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'long double'
| |-NoThrowAttr 0x555dff0a7988 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a79e0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x555dff0a7ab8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:125:1 __signbitl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a7a20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'long double'
| |-NoThrowAttr 0x555dff0a7b68 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a7bc0 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x555dff0a7c98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:126:1 __isinfl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a7c00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'long double'
| |-NoThrowAttr 0x555dff0a7d48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a7da0 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x555dff0a7e78 <<scratch space>:127:1> col:1 implicit __finitel 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a7f80 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0a7f20 <<invalid sloc>> Implicit 1014
| |-NoThrowAttr 0x555dff0a7ff0 <col:1> Implicit
| `-ConstAttr 0x555dff0a8018 <col:1> Implicit
|-FunctionDecl 0x555dff0a8040 prev 0x555dff0a7e78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:127:1 __finitel 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a7de0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'long double'
| |-BuiltinAttr 0x555dff0a8170 <<invalid sloc>> Inherited Implicit 1014
| |-NoThrowAttr 0x555dff0a80f0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a8148 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x555dff0a8250 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:128:1 __isnanl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a81b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'long double'
| |-NoThrowAttr 0x555dff0a8300 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a8370 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x555dff0a8518 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __iseqsigl 'int (long double, long double)' extern
| |-ParmVarDecl 0x555dff0a83b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'long double'
| |-ParmVarDecl 0x555dff0a8430 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'long double'
| `-NoThrowAttr 0x555dff0a85d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a86d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:130:1 __issignalingl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0a8640 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'long double'
| |-NoThrowAttr 0x555dff0a8788 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0a87e0 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x555dff0a88f8 <<scratch space>:133:1> col:1 implicit acosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a8a00 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0a89a0 <<invalid sloc>> Implicit 105
| `-NoThrowAttr 0x555dff0a8a70 <col:1> Implicit
|-FunctionDecl 0x555dff0a8a98 prev 0x555dff0a88f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 acosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a8820 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0a8ba0 <<invalid sloc>> Inherited Implicit 105
| `-NoThrowAttr 0x555dff0a8b48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a8c80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __acosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a8be8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0a8d30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a8e38 <<scratch space>:138:1> col:1 implicit asinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a8f40 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0a8ee0 <<invalid sloc>> Implicit 140
| `-NoThrowAttr 0x555dff0a8fb0 <col:1> Implicit
|-FunctionDecl 0x555dff0a8fd8 prev 0x555dff0a8e38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 asinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a8da0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0a90e0 <<invalid sloc>> Inherited Implicit 140
| `-NoThrowAttr 0x555dff0a9088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a91c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __asinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a9128 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0a9270 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a9578 <<scratch space>:143:1> col:1 implicit atanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a9680 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0a9620 <<invalid sloc>> Implicit 157
| `-NoThrowAttr 0x555dff0a96f0 <col:1> Implicit
|-FunctionDecl 0x555dff0a9718 prev 0x555dff0a9578 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:143:1 atanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a94e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0a9820 <<invalid sloc>> Inherited Implicit 157
| `-NoThrowAttr 0x555dff0a97c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a9900 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __atanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0a9868 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0a99b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0a9b88 <<scratch space>:148:1> col:1 implicit atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0a9c90 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0a9cf8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0a9c30 <<invalid sloc>> Implicit 163
| `-NoThrowAttr 0x555dff0a9d70 <col:1> Implicit
|-FunctionDecl 0x555dff0a9d98 prev 0x555dff0a9b88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0a9a20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x555dff0a9aa0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| |-BuiltinAttr 0x555dff0a9ea8 <<invalid sloc>> Inherited Implicit 163
| `-NoThrowAttr 0x555dff0a9e50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aa010 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0a9ef0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x555dff0a9f70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| `-NoThrowAttr 0x555dff0aa0c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aa1d0 <<scratch space>:153:1> col:1 implicit cosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aa2d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0aa278 <<invalid sloc>> Implicit 385
| `-NoThrowAttr 0x555dff0aa348 <col:1> Implicit
|-FunctionDecl 0x555dff0aa370 prev 0x555dff0aa1d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 cosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aa138 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| |-BuiltinAttr 0x555dff0aa478 <<invalid sloc>> Inherited Implicit 385
| `-NoThrowAttr 0x555dff0aa420 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aa718 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __cosl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aa680 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| `-NoThrowAttr 0x555dff0aa7c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aa8d0 <<scratch space>:158:1> col:1 implicit sinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aa9d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0aa978 <<invalid sloc>> Implicit 1181
| `-NoThrowAttr 0x555dff0aaa48 <col:1> Implicit
|-FunctionDecl 0x555dff0aaa70 prev 0x555dff0aa8d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:158:1 sinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aa838 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| |-BuiltinAttr 0x555dff0aab78 <<invalid sloc>> Inherited Implicit 1181
| `-NoThrowAttr 0x555dff0aab20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aac58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __sinl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aabc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| `-NoThrowAttr 0x555dff0aad08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aae10 <<scratch space>:163:1> col:1 implicit tanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aaf18 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0aaeb8 <<invalid sloc>> Implicit 1402
| `-NoThrowAttr 0x555dff0aaf88 <col:1> Implicit
|-FunctionDecl 0x555dff0aafb0 prev 0x555dff0aae10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 tanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aad78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| |-BuiltinAttr 0x555dff0ab0b8 <<invalid sloc>> Inherited Implicit 1402
| `-NoThrowAttr 0x555dff0ab060 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ab198 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __tanl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab100 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| `-NoThrowAttr 0x555dff0ab248 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ab350 <<scratch space>:169:1> col:1 implicit coshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab458 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ab3f8 <<invalid sloc>> Implicit 393
| `-NoThrowAttr 0x555dff0ab4c8 <col:1> Implicit
|-FunctionDecl 0x555dff0ab4f0 prev 0x555dff0ab350 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:169:1 coshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab2b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0ab5f8 <<invalid sloc>> Inherited Implicit 393
| `-NoThrowAttr 0x555dff0ab5a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ab728 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:171:1 __coshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab690 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0ab7d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ab8e0 <<scratch space>:174:1> col:1 implicit sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab9e8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ab988 <<invalid sloc>> Implicit 1200
| `-NoThrowAttr 0x555dff0aba58 <col:1> Implicit
|-FunctionDecl 0x555dff0aba80 prev 0x555dff0ab8e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ab848 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0abb88 <<invalid sloc>> Inherited Implicit 1200
| `-NoThrowAttr 0x555dff0abb30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0abc68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:176:1 __sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0abbd0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0abd18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0abe20 <<scratch space>:179:1> col:1 implicit tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0abf28 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0abec8 <<invalid sloc>> Implicit 1410
| `-NoThrowAttr 0x555dff0abf98 <col:1> Implicit
|-FunctionDecl 0x555dff0abfc0 prev 0x555dff0abe20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:179:1 tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0abd88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0ac0c8 <<invalid sloc>> Inherited Implicit 1410
| `-NoThrowAttr 0x555dff0ac070 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ac1a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:181:1 __tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac110 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0ac258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ac360 <<scratch space>:184:1> col:1 implicit acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac468 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ac408 <<invalid sloc>> Implicit 113
| `-NoThrowAttr 0x555dff0ac4d8 <col:1> Implicit
|-FunctionDecl 0x555dff0ac500 prev 0x555dff0ac360 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac2c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0ac608 <<invalid sloc>> Inherited Implicit 113
| `-NoThrowAttr 0x555dff0ac5b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ac738 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac6a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0ac7e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ac8f0 <<scratch space>:189:1> col:1 implicit asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac9f8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ac998 <<invalid sloc>> Implicit 148
| `-NoThrowAttr 0x555dff0aca68 <col:1> Implicit
|-FunctionDecl 0x555dff0aca90 prev 0x555dff0ac8f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ac858 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0acb98 <<invalid sloc>> Inherited Implicit 148
| `-NoThrowAttr 0x555dff0acb40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0acc78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0acbe0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0acd28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ace30 <<scratch space>:194:1> col:1 implicit atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0acf38 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0aced8 <<invalid sloc>> Implicit 173
| `-NoThrowAttr 0x555dff0acfa8 <col:1> Implicit
|-FunctionDecl 0x555dff0acfd0 prev 0x555dff0ace30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0acd98 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0ad0d8 <<invalid sloc>> Inherited Implicit 173
| `-NoThrowAttr 0x555dff0ad080 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ad1b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ad120 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0ad268 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ad370 <<scratch space>:199:1> col:1 implicit expl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ad478 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ad418 <<invalid sloc>> Implicit 525
| `-NoThrowAttr 0x555dff0ad4e8 <col:1> Implicit
|-FunctionDecl 0x555dff0ad510 prev 0x555dff0ad370 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 expl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ad2d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| |-BuiltinAttr 0x555dff0ad618 <<invalid sloc>> Inherited Implicit 525
| `-NoThrowAttr 0x555dff0ad5c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ad748 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __expl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ad6b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| `-NoThrowAttr 0x555dff0ad7f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ad9c8 <<scratch space>:202:1> col:1 implicit frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x555dff0adad0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0adb38 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff0ada70 <<invalid sloc>> Implicit 647
| `-NoThrowAttr 0x555dff0adbb0 <col:1> Implicit
|-FunctionDecl 0x555dff0adbd8 prev 0x555dff0ad9c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:202:1 frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x555dff0ad868 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff0ad8e8 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x555dff0adce8 <<invalid sloc>> Inherited Implicit 647
| `-NoThrowAttr 0x555dff0adc90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ade50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 __frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x555dff0add30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff0addb0 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x555dff0adf08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ae0d8 <<scratch space>:205:1> col:1 implicit ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff0ae1e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0ae248 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff0ae180 <<invalid sloc>> Implicit 842
| `-NoThrowAttr 0x555dff0ae2c0 <col:1> Implicit
|-FunctionDecl 0x555dff0ae2e8 prev 0x555dff0ae0d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:205:1 ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff0adf78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff0adff8 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x555dff0ae3f8 <<invalid sloc>> Inherited Implicit 842
| `-NoThrowAttr 0x555dff0ae3a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ae560 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:207:1 __ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff0ae440 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff0ae4c0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x555dff0ae618 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0ae8e8 <<scratch space>:210:1> col:1 implicit logl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ae9f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ae990 <<invalid sloc>> Implicit 871
| `-NoThrowAttr 0x555dff0aea60 <col:1> Implicit
|-FunctionDecl 0x555dff0aea88 prev 0x555dff0ae8e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:210:1 logl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0ae850 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| |-BuiltinAttr 0x555dff0aeb90 <<invalid sloc>> Inherited Implicit 871
| `-NoThrowAttr 0x555dff0aeb38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aec70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:212:1 __logl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aebd8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| `-NoThrowAttr 0x555dff0aed20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0aee28 <<scratch space>:215:1> col:1 implicit log10l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aef30 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0aeed0 <<invalid sloc>> Implicit 892
| `-NoThrowAttr 0x555dff0aefa0 <col:1> Implicit
|-FunctionDecl 0x555dff0aefc8 prev 0x555dff0aee28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:215:1 log10l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0aed90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0af0d0 <<invalid sloc>> Inherited Implicit 892
| `-NoThrowAttr 0x555dff0af078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0af1b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:217:1 __log10l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0af118 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0af260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0af468 <<scratch space>:218:1> col:1 implicit modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x555dff0af570 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0af5d8 <<invalid sloc>> <invalid sloc> 'long double *'
| |-BuiltinAttr 0x555dff0af510 <<invalid sloc>> Implicit 963
| `-NoThrowAttr 0x555dff0af650 <col:1> Implicit
|-FunctionDecl 0x555dff0af678 prev 0x555dff0af468 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:218:1 modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x555dff0af2d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0af388 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-BuiltinAttr 0x555dff0af788 <<invalid sloc>> Inherited Implicit 963
| `-NoThrowAttr 0x555dff0af730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0afd00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:220:1 __modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x555dff0af7d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0afc40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-NoThrowAttr 0x555dff0afdb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff0afe10 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x555dff0aff08 <<scratch space>:224:1> col:1 implicit expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b0010 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0affb0 <<invalid sloc>> Implicit 548
| `-NoThrowAttr 0x555dff0b0080 <col:1> Implicit
|-FunctionDecl 0x555dff0b00a8 prev 0x555dff0aff08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:224:1 expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0afe70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0b01b0 <<invalid sloc>> Inherited Implicit 548
| `-NoThrowAttr 0x555dff0b0158 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b0290 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:226:1 __expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b01f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0b0340 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b0448 <<scratch space>:229:1> col:1 implicit log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b0550 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b04f0 <<invalid sloc>> Implicit 877
| `-NoThrowAttr 0x555dff0b05c0 <col:1> Implicit
|-FunctionDecl 0x555dff0b05e8 prev 0x555dff0b0448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:229:1 log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b03b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0b06f0 <<invalid sloc>> Inherited Implicit 877
| `-NoThrowAttr 0x555dff0b0698 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b07d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:231:1 __log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b0738 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff0b0880 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b0988 <<scratch space>:232:1> col:1 implicit logbl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b0a90 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b0a30 <<invalid sloc>> Implicit 902
| `-NoThrowAttr 0x555dff0b0b00 <col:1> Implicit
|-FunctionDecl 0x555dff0b0b28 prev 0x555dff0b0988 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 logbl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b08f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| |-BuiltinAttr 0x555dff0b1150 <<invalid sloc>> Inherited Implicit 902
| `-NoThrowAttr 0x555dff0b0bd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b1230 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:234:1 __logbl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b1198 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| `-NoThrowAttr 0x555dff0b12e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b13e8 <<scratch space>:237:1> col:1 implicit exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b14f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b1490 <<invalid sloc>> Implicit 531
| `-NoThrowAttr 0x555dff0b1560 <col:1> Implicit
|-FunctionDecl 0x555dff0b1588 prev 0x555dff0b13e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b1350 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0b1690 <<invalid sloc>> Inherited Implicit 531
| `-NoThrowAttr 0x555dff0b1638 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b1770 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:239:1 __exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b16d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0b1820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b1928 <<scratch space>:242:1> col:1 implicit log2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b1a30 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b19d0 <<invalid sloc>> Implicit 884
| `-NoThrowAttr 0x555dff0b1aa0 <col:1> Implicit
|-FunctionDecl 0x555dff0b1ac8 prev 0x555dff0b1928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 log2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b1890 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0b1bd0 <<invalid sloc>> Inherited Implicit 884
| `-NoThrowAttr 0x555dff0b1b78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b1cb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:244:1 __log2l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b1c18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0b1d60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b1ef0 <<scratch space>:247:1> col:1 implicit powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b1ff8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0b2060 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b1f98 <<invalid sloc>> Implicit 1050
| `-NoThrowAttr 0x555dff0b20d8 <col:1> Implicit
|-FunctionDecl 0x555dff0b2160 prev 0x555dff0b1ef0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b1dd0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x555dff0b1e50 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| |-BuiltinAttr 0x555dff0b2270 <<invalid sloc>> Inherited Implicit 1050
| `-NoThrowAttr 0x555dff0b2218 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b23d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:249:1 __powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b22b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x555dff0b2338 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| `-NoThrowAttr 0x555dff0b2490 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b2598 <<scratch space>:250:1> col:1 implicit sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b26a0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b2640 <<invalid sloc>> Implicit 1215
| `-NoThrowAttr 0x555dff0b2710 <col:1> Implicit
|-FunctionDecl 0x555dff0b2738 prev 0x555dff0b2598 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b2500 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| |-BuiltinAttr 0x555dff0b2840 <<invalid sloc>> Inherited Implicit 1215
| `-NoThrowAttr 0x555dff0b27e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b2920 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b2888 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| `-NoThrowAttr 0x555dff0b29d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b2b60 <<scratch space>:255:1> col:1 implicit hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b2c68 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0b2cd0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b2c08 <<invalid sloc>> Implicit 733
| `-NoThrowAttr 0x555dff0b2d48 <col:1> Implicit
|-FunctionDecl 0x555dff0b2d70 prev 0x555dff0b2b60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b2a40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff0b2ac0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| |-BuiltinAttr 0x555dff0b2e80 <<invalid sloc>> Inherited Implicit 733
| `-NoThrowAttr 0x555dff0b2e28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b2fe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:257:1 __hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b2ec8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff0b2f48 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| `-NoThrowAttr 0x555dff0b30a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b3208 <<scratch space>:260:1> col:1 implicit cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3310 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b32b0 <<invalid sloc>> Implicit 300
| |-NoThrowAttr 0x555dff0b3380 <col:1> Implicit
| `-ConstAttr 0x555dff0b33a8 <col:1> Implicit
|-FunctionDecl 0x555dff0b33d0 prev 0x555dff0b3208 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:260:1 cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3170 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| |-BuiltinAttr 0x555dff0b34d8 <<invalid sloc>> Inherited Implicit 300
| |-ConstAttr 0x555dff0b3508 <<scratch space>:260:1> Inherited Implicit
| `-NoThrowAttr 0x555dff0b3480 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b35e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:262:1 __cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3548 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| `-NoThrowAttr 0x555dff0b3690 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b3798 <<scratch space>:264:1> col:1 implicit ceill 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b38a0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b3840 <<invalid sloc>> Implicit 319
| |-NoThrowAttr 0x555dff0b3910 <col:1> Implicit
| `-ConstAttr 0x555dff0b3938 <col:1> Implicit
|-FunctionDecl 0x555dff0b3960 prev 0x555dff0b3798 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:264:1 ceill 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3700 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'long double'
| |-BuiltinAttr 0x555dff0b3a90 <<invalid sloc>> Inherited Implicit 319
| |-NoThrowAttr 0x555dff0b3a10 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b3a68 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x555dff0b3b70 <<scratch space>:265:1> col:1 implicit fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3c78 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b3c18 <<invalid sloc>> Implicit 566
| |-NoThrowAttr 0x555dff0b3ce8 <col:1> Implicit
| `-ConstAttr 0x555dff0b3d10 <col:1> Implicit
|-FunctionDecl 0x555dff0b3d38 prev 0x555dff0b3b70 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:265:1 fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3ad8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'long double'
| |-BuiltinAttr 0x555dff0b3e68 <<invalid sloc>> Inherited Implicit 566
| |-NoThrowAttr 0x555dff0b3de8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b3e40 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x555dff0b3f48 <<scratch space>:266:1> col:1 implicit floorl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b4050 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b3ff0 <<invalid sloc>> Implicit 585
| |-NoThrowAttr 0x555dff0b40c0 <col:1> Implicit
| `-ConstAttr 0x555dff0b40e8 <col:1> Implicit
|-FunctionDecl 0x555dff0b4180 prev 0x555dff0b3f48 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:266:1 floorl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b3eb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'long double'
| |-BuiltinAttr 0x555dff0b42b0 <<invalid sloc>> Inherited Implicit 585
| |-NoThrowAttr 0x555dff0b4230 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b4288 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x555dff0b4418 <<scratch space>:267:1> col:1 implicit fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b4520 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0b4588 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b44c0 <<invalid sloc>> Implicit 633
| `-NoThrowAttr 0x555dff0b4600 <col:1> Implicit
|-FunctionDecl 0x555dff0b4628 prev 0x555dff0b4418 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:267:1 fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b42f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0b4378 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| |-BuiltinAttr 0x555dff0b4738 <<invalid sloc>> Inherited Implicit 633
| `-NoThrowAttr 0x555dff0b46e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b48a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 __fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b4780 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0b4800 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| `-NoThrowAttr 0x555dff0b4958 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b4a60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:270:1 isinfl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0b49c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'long double'
| |-NoThrowAttr 0x555dff0b4b10 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b4b68 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x555dff0b4c40 <<scratch space>:271:1> col:1 implicit finitel 'int (long double)' extern
| |-ParmVarDecl 0x555dff0b4d48 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b4ce8 <<invalid sloc>> Implicit 579
| |-NoThrowAttr 0x555dff0b4db8 <col:1> Implicit
| `-ConstAttr 0x555dff0b4de0 <col:1> Implicit
|-FunctionDecl 0x555dff0b4e08 prev 0x555dff0b4c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:271:1 finitel 'int (long double)' extern
| |-ParmVarDecl 0x555dff0b4ba8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'long double'
| |-BuiltinAttr 0x555dff0b4f38 <<invalid sloc>> Inherited Implicit 579
| |-NoThrowAttr 0x555dff0b4eb8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b4f10 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x555dff0b50a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:272:1 dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b4f80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0b5000 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x555dff0b5158 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b52f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:274:1 __dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b51d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff0b5258 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x555dff0b53b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b54b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 significandl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b5420 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x555dff0b5568 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b5670 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __significandl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b55d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x555dff0b5720 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b58b0 <<scratch space>:278:1> col:1 implicit copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b59b8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0b5a20 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b5958 <<invalid sloc>> Implicit 363
| |-NoThrowAttr 0x555dff0b5a98 <col:1> Implicit
| `-ConstAttr 0x555dff0b5ac0 <col:1> Implicit
|-FunctionDecl 0x555dff0b5ae8 prev 0x555dff0b58b0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:278:1 copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b5790 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff0b5810 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'long double'
| |-BuiltinAttr 0x555dff0b5c20 <<invalid sloc>> Inherited Implicit 363
| |-NoThrowAttr 0x555dff0b5ba0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b5bf8 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x555dff0b5d38 <<scratch space>:279:1> col:1 implicit nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x555dff0b5e40 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff0b5de0 <<invalid sloc>> Implicit 975
| |-NoThrowAttr 0x555dff0b5eb0 <col:1> Implicit
| `-PureAttr 0x555dff0b5ed8 <col:1> Implicit
|-FunctionDecl 0x555dff0b5f00 prev 0x555dff0b5d38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:279:1 nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x555dff0b5c68 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x555dff0b6008 <<invalid sloc>> Inherited Implicit 975
| |-PureAttr 0x555dff0b6038 <<scratch space>:279:1> Inherited Implicit
| `-NoThrowAttr 0x555dff0b5fb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b61a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:281:1 __nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x555dff0b6078 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x555dff0b6250 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b6358 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:282:1 isnanl 'int (long double)' extern
| |-ParmVarDecl 0x555dff0b62c0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'long double'
| |-NoThrowAttr 0x555dff0b6408 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff0b6460 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x555dff0b6538 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 j0l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b64a0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x555dff0b65e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b66f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __j0l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b6658 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x555dff0b67a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b68a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:286:1 j1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b6810 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x555dff0b6958 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b6a60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 __j1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b69c8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x555dff0b6b10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b6ce8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:289:1 jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x555dff0b6b80 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x555dff0b6c00 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x555dff0b6da0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b6f30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:291:1 __jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x555dff0b6e10 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x555dff0b6e90 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x555dff0b6fe8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b70f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:292:1 y0l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7058 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x555dff0b71b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b72b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:294:1 __y0l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7220 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x555dff0b7368 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7470 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 y1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b73d8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x555dff0b7520 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:297:1 __y1l 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7590 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x555dff0b76d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x555dff0b7748 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x555dff0b77c8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x555dff0b7920 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7ab0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x555dff0b7990 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x555dff0b7a10 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x555dff0b7b68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7c70 <<scratch space>:303:1> col:1 implicit erfl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7d78 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b7d18 <<invalid sloc>> Implicit 505
| `-NoThrowAttr 0x555dff0b7de8 <col:1> Implicit
|-FunctionDecl 0x555dff0b7e10 prev 0x555dff0b7c70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 erfl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7bd8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| |-BuiltinAttr 0x555dff0b7f18 <<invalid sloc>> Inherited Implicit 505
| `-NoThrowAttr 0x555dff0b7ec0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b7ff8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:305:1 __erfl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b7f60 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| `-NoThrowAttr 0x555dff0b80a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b81c0 <<scratch space>:308:1> col:1 implicit erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b82c8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b8268 <<invalid sloc>> Implicit 512
| `-NoThrowAttr 0x555dff0b8338 <col:1> Implicit
|-FunctionDecl 0x555dff0b8360 prev 0x555dff0b81c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8118 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| |-BuiltinAttr 0x555dff0b8468 <<invalid sloc>> Inherited Implicit 512
| `-NoThrowAttr 0x555dff0b8410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b8548 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:310:1 __erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b84b0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| `-NoThrowAttr 0x555dff0b85f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b8700 <<scratch space>:311:1> col:1 implicit lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8808 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b87a8 <<invalid sloc>> Implicit 850
| `-NoThrowAttr 0x555dff0b8878 <col:1> Implicit
|-FunctionDecl 0x555dff0b88a0 prev 0x555dff0b8700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8668 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| |-BuiltinAttr 0x555dff0b89a8 <<invalid sloc>> Inherited Implicit 850
| `-NoThrowAttr 0x555dff0b8950 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b8a88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b89f0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| `-NoThrowAttr 0x555dff0b8b38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b8c40 <<scratch space>:314:1> col:1 implicit tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8d48 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b8ce8 <<invalid sloc>> Implicit 1420
| `-NoThrowAttr 0x555dff0b8db8 <col:1> Implicit
|-FunctionDecl 0x555dff0b8de0 prev 0x555dff0b8c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:314:1 tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8ba8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| |-BuiltinAttr 0x555dff0b8ee8 <<invalid sloc>> Inherited Implicit 1420
| `-NoThrowAttr 0x555dff0b8e90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b8fc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:316:1 __tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b8f30 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| `-NoThrowAttr 0x555dff0b9078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b91d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:317:1 gammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b90e8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x555dff0b9280 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b9388 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:319:1 __gammal 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b92f0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x555dff0b9438 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b95c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:321:1 lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x555dff0b94a8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x555dff0b9528 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff0b9680 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b9810 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:324:1 __lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x555dff0b96f0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x555dff0b9770 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x555dff0b98c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b99d0 <<scratch space>:325:1> col:1 implicit rintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b9ad8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0b9a78 <<invalid sloc>> Implicit 1104
| |-ConstAttr 0x555dff0b9b48 <col:1> Implicit
| `-NoThrowAttr 0x555dff0b9b70 <col:1> Implicit
|-FunctionDecl 0x555dff0b9b98 prev 0x555dff0b99d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:325:1 rintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b9938 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| |-BuiltinAttr 0x555dff0b9ca0 <<invalid sloc>> Inherited Implicit 1104
| |-ConstAttr 0x555dff0b9cd0 <<scratch space>:325:1> Inherited Implicit
| `-NoThrowAttr 0x555dff0b9c48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b9da8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:327:1 __rintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0b9d10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| `-NoThrowAttr 0x555dff0b9e58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0b9fe8 <<scratch space>:328:1> col:1 implicit nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0ba0f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0ba158 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0ba090 <<invalid sloc>> Implicit 995
| `-NoThrowAttr 0x555dff086460 <col:1> Implicit
|-FunctionDecl 0x555dff086488 prev 0x555dff0b9fe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:328:1 nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0b9ec8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff0b9f48 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| |-BuiltinAttr 0x555dff086598 <<invalid sloc>> Inherited Implicit 995
| `-NoThrowAttr 0x555dff086540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff086700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:330:1 __nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff0865e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff086660 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| `-NoThrowAttr 0x555dff0867b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff086948 <<scratch space>:331:1> col:1 implicit nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff086a50 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff086ab8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0869f0 <<invalid sloc>> Implicit 1002
| `-NoThrowAttr 0x555dff086b30 <col:1> Implicit
|-FunctionDecl 0x555dff086b58 prev 0x555dff086948 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:331:1 nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff086828 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x555dff0868a8 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x555dff086c68 <<invalid sloc>> Inherited Implicit 1002
| `-NoThrowAttr 0x555dff086c10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff086dd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:333:1 __nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff086cb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x555dff086d30 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x555dff086e88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff087018 <<scratch space>:335:1> col:1 implicit remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff087120 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff087188 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0870c0 <<invalid sloc>> Implicit 1086
| `-NoThrowAttr 0x555dff087200 <col:1> Implicit
|-FunctionDecl 0x555dff087228 prev 0x555dff087018 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:335:1 remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff086ef8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff086f78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| |-BuiltinAttr 0x555dff087338 <<invalid sloc>> Inherited Implicit 1086
| `-NoThrowAttr 0x555dff0872e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0876a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:337:1 __remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff087380 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x555dff087600 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| `-NoThrowAttr 0x555dff087758 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0878e8 <<scratch space>:338:1> col:1 implicit scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff0879f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff087a58 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x555dff087990 <<invalid sloc>> Implicit 1160
| `-NoThrowAttr 0x555dff087ad0 <col:1> Implicit
|-FunctionDecl 0x555dff087af8 prev 0x555dff0878e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:338:1 scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff0877c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x555dff087848 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x555dff087c08 <<invalid sloc>> Inherited Implicit 1160
| `-NoThrowAttr 0x555dff087bb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff087d70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:340:1 __scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x555dff087c50 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x555dff087cd0 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x555dff087e28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff087f30 <<scratch space>:341:1> col:1 implicit ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x555dff088038 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff087fd8 <<invalid sloc>> Implicit 741
| `-NoThrowAttr 0x555dff0880a8 <col:1> Implicit
|-FunctionDecl 0x555dff0880d0 prev 0x555dff087f30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:341:1 ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x555dff087e98 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff0881d8 <<invalid sloc>> Inherited Implicit 741
| `-NoThrowAttr 0x555dff088180 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0882b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:343:1 __ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x555dff088220 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff088368 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff088538 <<scratch space>:345:1> col:1 implicit scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x555dff088670 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff0886d8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x555dff088610 <<invalid sloc>> Implicit 1154
| `-NoThrowAttr 0x555dff088750 <col:1> Implicit
|-FunctionDecl 0x555dff088778 prev 0x555dff088538 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:345:1 scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x555dff0883d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x555dff088458 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x555dff088888 <<invalid sloc>> Inherited Implicit 1154
| `-NoThrowAttr 0x555dff088830 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff0889f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:347:1 __scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x555dff0888d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x555dff088950 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x555dff088aa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff088bb0 <<scratch space>:348:1> col:1 implicit nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff088cb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff088c58 <<invalid sloc>> Implicit 988
| |-NoThrowAttr 0x555dff088d28 <col:1> Implicit
| `-ConstAttr 0x555dff088d50 <col:1> Implicit
|-FunctionDecl 0x555dff088d78 prev 0x555dff088bb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:348:1 nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff088b18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| |-BuiltinAttr 0x555dff088e80 <<invalid sloc>> Inherited Implicit 988
| |-ConstAttr 0x555dff088eb0 <<scratch space>:348:1> Inherited Implicit
| `-NoThrowAttr 0x555dff088e28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff088f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:350:1 __nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff088ef0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| `-NoThrowAttr 0x555dff089038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff089140 <<scratch space>:351:1> col:1 implicit roundl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff089248 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0891e8 <<invalid sloc>> Implicit 1128
| |-NoThrowAttr 0x555dff0892b8 <col:1> Implicit
| `-ConstAttr 0x555dff0892e0 <col:1> Implicit
|-FunctionDecl 0x555dff089308 prev 0x555dff089140 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:351:1 roundl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0890a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'long double'
| |-BuiltinAttr 0x555dff089438 <<invalid sloc>> Inherited Implicit 1128
| |-NoThrowAttr 0x555dff0893b8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff089410 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x555dff089518 <<scratch space>:352:1> col:1 implicit truncl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff0898f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff0895c0 <<invalid sloc>> Implicit 1434
| |-NoThrowAttr 0x555dff089960 <col:1> Implicit
| `-ConstAttr 0x555dff089988 <col:1> Implicit
|-FunctionDecl 0x555dff0899b0 prev 0x555dff089518 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:352:1 truncl 'long double (long double)' extern
| |-ParmVarDecl 0x555dff089480 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'long double'
| |-BuiltinAttr 0x555dff089ae0 <<invalid sloc>> Inherited Implicit 1434
| |-NoThrowAttr 0x555dff089a60 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff089ab8 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x555dff089d18 <<scratch space>:353:1> col:1 implicit remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x555dff089e20 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff089e88 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff089ef0 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x555dff089dc0 <<invalid sloc>> Implicit 1093
| `-NoThrowAttr 0x555dff089f70 <col:1> Implicit
|-FunctionDecl 0x555dff089f98 prev 0x555dff089d18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:353:1 remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x555dff089b28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x555dff089ba8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x555dff089c28 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x555dff08a0b0 <<invalid sloc>> Inherited Implicit 1093
| `-NoThrowAttr 0x555dff08a058 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08a2a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:355:1 __remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x555dff08a0f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x555dff08a178 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x555dff08a1f8 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x555dff08a360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08a4a8 <<scratch space>:356:1> col:1 implicit lrintl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08a5b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08a550 <<invalid sloc>> Implicit 910
| `-NoThrowAttr 0x555dff08a620 <col:1> Implicit
|-FunctionDecl 0x555dff08a648 prev 0x555dff08a4a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:356:1 lrintl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08a3d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| |-BuiltinAttr 0x555dff08a750 <<invalid sloc>> Inherited Implicit 910
| `-NoThrowAttr 0x555dff08a6f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08abd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:358:1 __lrintl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08a798 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| `-NoThrowAttr 0x555dff08ac80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08adc8 <<scratch space>:359:1> col:1 implicit llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08aed0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08ae70 <<invalid sloc>> Implicit 857
| `-NoThrowAttr 0x555dff08af40 <col:1> Implicit
|-FunctionDecl 0x555dff08af68 prev 0x555dff08adc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:359:1 llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08acf0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| |-BuiltinAttr 0x555dff08b070 <<invalid sloc>> Inherited Implicit 857
| `-NoThrowAttr 0x555dff08b018 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08b150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:361:1 __llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08b0b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| `-NoThrowAttr 0x555dff08b200 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08b308 <<scratch space>:362:1> col:1 implicit lroundl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08b410 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08b3b0 <<invalid sloc>> Implicit 919
| `-NoThrowAttr 0x555dff08b480 <col:1> Implicit
|-FunctionDecl 0x555dff08b4a8 prev 0x555dff08b308 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:362:1 lroundl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08b270 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| |-BuiltinAttr 0x555dff08b5b0 <<invalid sloc>> Inherited Implicit 919
| `-NoThrowAttr 0x555dff08b558 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08b690 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:364:1 __lroundl 'long (long double)' extern
| |-ParmVarDecl 0x555dff08b5f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| `-NoThrowAttr 0x555dff08b740 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08b848 <<scratch space>:365:1> col:1 implicit llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08b950 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08b8f0 <<invalid sloc>> Implicit 863
| `-NoThrowAttr 0x555dff08b9c0 <col:1> Implicit
|-FunctionDecl 0x555dff08b9e8 prev 0x555dff08b848 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:365:1 llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08b7b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| |-BuiltinAttr 0x555dff08baf0 <<invalid sloc>> Inherited Implicit 863
| `-NoThrowAttr 0x555dff08ba98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08bbe0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:367:1 __llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x555dff08bb38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| `-NoThrowAttr 0x555dff08bc90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08be20 <<scratch space>:368:1> col:1 implicit fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08bf28 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff08bf90 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08bec8 <<invalid sloc>> Implicit 575
| `-NoThrowAttr 0x555dff08c008 <col:1> Implicit
|-FunctionDecl 0x555dff08c030 prev 0x555dff08be20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:368:1 fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08bd00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff08bd80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| |-BuiltinAttr 0x555dff08c140 <<invalid sloc>> Inherited Implicit 575
| `-NoThrowAttr 0x555dff08c0e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08c2a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:370:1 __fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08c188 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x555dff08c208 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| `-NoThrowAttr 0x555dff08c360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08c4f0 <<scratch space>:372:1> col:1 implicit fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08c5f8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff08c660 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08c598 <<invalid sloc>> Implicit 601
| |-NoThrowAttr 0x555dff08c6d8 <col:1> Implicit
| `-ConstAttr 0x555dff08c700 <col:1> Implicit
|-FunctionDecl 0x555dff08c728 prev 0x555dff08c4f0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:372:1 fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08c3d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff08c450 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'long double'
| |-BuiltinAttr 0x555dff08c860 <<invalid sloc>> Inherited Implicit 601
| |-NoThrowAttr 0x555dff08c7e0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08c838 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x555dff08c9c8 <<scratch space>:373:1> col:1 implicit fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08cad0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff08cb38 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08ca70 <<invalid sloc>> Implicit 617
| |-NoThrowAttr 0x555dff08cbb0 <col:1> Implicit
| `-ConstAttr 0x555dff08cec0 <col:1> Implicit
|-FunctionDecl 0x555dff08cee8 prev 0x555dff08c9c8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:373:1 fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08c8a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff08c928 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'long double'
| |-BuiltinAttr 0x555dff08d020 <<invalid sloc>> Inherited Implicit 617
| |-NoThrowAttr 0x555dff08cfa0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08cff8 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x555dff08d258 <<scratch space>:374:1> col:1 implicit fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x555dff08d360 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff08d3c8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x555dff08d430 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x555dff08d300 <<invalid sloc>> Implicit 593
| |-ConstAttr 0x555dff08d4b0 <col:1> Implicit
| `-NoThrowAttr 0x555dff08d4d8 <col:1> Implicit
|-FunctionDecl 0x555dff08d500 prev 0x555dff08d258 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:374:1 fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x555dff08d068 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x555dff08d0e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x555dff08d168 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| |-BuiltinAttr 0x555dff08d618 <<invalid sloc>> Inherited Implicit 593
| |-ConstAttr 0x555dff08d648 <<scratch space>:374:1> Inherited Implicit
| `-NoThrowAttr 0x555dff08d5c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08d830 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:376:1 __fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x555dff08d688 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x555dff08d708 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x555dff08d788 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| `-NoThrowAttr 0x555dff08d8f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08da80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:382:1 scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08d960 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff08d9e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x555dff08db38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08dcc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:384:1 __scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x555dff08dba8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x555dff08dc28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x555dff08dd80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08f238 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:4:1 __fpclassifyf128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08de50 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08f2e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08f340 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x555dff08f410 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:5:1 __signbitf128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08f378 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08f4c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08f518 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x555dff08f5e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:6:1 __isinff128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08f550 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08f698 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08f6f0 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x555dff08f7c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:7:1 __finitef128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08f728 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08f870 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08f8c8 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x555dff08f998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:8:1 __isnanf128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08f900 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08fa48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08faa0 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x555dff08fc78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:9:1 __iseqsigf128 'int (_Float128, _Float128)' extern
| |-ParmVarDecl 0x555dff08fad8 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x '_Float128':'__float128'
| |-ParmVarDecl 0x555dff08fb50 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y '_Float128':'__float128'
| `-NoThrowAttr 0x555dff08fd30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff08fe30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:10:1 __issignalingf128 'int (_Float128)' extern
| |-ParmVarDecl 0x555dff08fd98 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value '_Float128':'__float128'
| |-NoThrowAttr 0x555dff08fee0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x555dff08ff38 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-VarDecl 0x555dff08ff78 </usr/include/math.h:823:1, col:12> col:12 signgam 'int' extern
|-EnumDecl 0x555dff08ffe0 <line:903:1, line:920:3> line:903:1
| |-EnumConstantDecl 0x555dff0900e0 <line:905:5, line:906:17> line:905:5 FP_NAN 'int'
| | `-ConstantExpr 0x555dff0900c0 <line:906:17> 'int'
| |   |-value: Int 0
| |   `-IntegerLiteral 0x555dff0900a0 <col:17> 'int' 0
| |-EnumConstantDecl 0x555dff0911b0 <line:908:5, line:909:22> line:908:5 FP_INFINITE 'int'
| | `-ConstantExpr 0x555dff090158 <line:909:22> 'int'
| |   |-value: Int 1
| |   `-IntegerLiteral 0x555dff090138 <col:22> 'int' 1
| |-EnumConstantDecl 0x555dff091248 <line:911:5, line:912:18> line:911:5 FP_ZERO 'int'
| | `-ConstantExpr 0x555dff091228 <line:912:18> 'int'
| |   |-value: Int 2
| |   `-IntegerLiteral 0x555dff091208 <col:18> 'int' 2
| |-EnumConstantDecl 0x555dff0912e0 <line:914:5, line:915:23> line:914:5 FP_SUBNORMAL 'int'
| | `-ConstantExpr 0x555dff0912c0 <line:915:23> 'int'
| |   |-value: Int 3
| |   `-IntegerLiteral 0x555dff0912a0 <col:23> 'int' 3
| `-EnumConstantDecl 0x555dff091378 <line:917:5, line:918:20> line:917:5 FP_NORMAL 'int'
|   `-ConstantExpr 0x555dff091358 <line:918:20> 'int'
|     |-value: Int 4
|     `-IntegerLiteral 0x555dff091338 <col:20> 'int' 4
|-TypedefDecl 0x555dff0913e0 </usr/include/bits/stdint-intn.h:24:1, col:18> col:18 referenced int8_t '__int8_t':'signed char'
| `-ElaboratedType 0x555dff02ad20 '__int8_t' sugar
|   `-TypedefType 0x555dff02acf0 '__int8_t' sugar
|     |-Typedef 0x555dff02a980 '__int8_t'
|     `-BuiltinType 0x555dfef8a510 'signed char'
|-TypedefDecl 0x555dff091448 <line:25:1, col:19> col:19 referenced int16_t '__int16_t':'short'
| `-ElaboratedType 0x555dff030800 '__int16_t' sugar
|   `-TypedefType 0x555dff02ae90 '__int16_t' sugar
|     |-Typedef 0x555dff02aa60 '__int16_t'
|     `-BuiltinType 0x555dfef8a530 'short'
|-TypedefDecl 0x555dff0914b0 <line:26:1, col:19> col:19 referenced int32_t '__int32_t':'int'
| `-ElaboratedType 0x555dff0309a0 '__int32_t' sugar
|   `-TypedefType 0x555dff030970 '__int32_t' sugar
|     |-Typedef 0x555dff02ab40 '__int32_t'
|     `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff091518 <line:27:1, col:19> col:19 referenced int64_t '__int64_t':'long'
| `-ElaboratedType 0x555dff030b40 '__int64_t' sugar
|   `-TypedefType 0x555dff030b10 '__int64_t' sugar
|     |-Typedef 0x555dff02ac20 '__int64_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff091580 </usr/include/bits/stdint-uintn.h:24:1, col:19> col:19 referenced uint8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x555dff02adf0 '__uint8_t' sugar
|   `-TypedefType 0x555dff02adc0 '__uint8_t' sugar
|     |-Typedef 0x555dff02a9f0 '__uint8_t'
|     `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff0915e8 <line:25:1, col:20> col:20 referenced uint16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x555dff0308d0 '__uint16_t' sugar
|   `-TypedefType 0x555dff0308a0 '__uint16_t' sugar
|     |-Typedef 0x555dff02aad0 '__uint16_t'
|     `-BuiltinType 0x555dfef8a5d0 'unsigned short'
|-TypedefDecl 0x555dff091650 <line:26:1, col:20> col:20 referenced uint32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x555dff030a70 '__uint32_t' sugar
|   `-TypedefType 0x555dff030a40 '__uint32_t' sugar
|     |-Typedef 0x555dff02abb0 '__uint32_t'
|     `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff0916b8 <line:27:1, col:20> col:20 referenced uint64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x555dff030c10 '__uint64_t' sugar
|   `-TypedefType 0x555dff030be0 '__uint64_t' sugar
|     |-Typedef 0x555dff02ac90 '__uint64_t'
|     `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff091780 </usr/include/bits/stdint-least.h:25:1, col:24> col:24 int_least8_t '__int_least8_t':'signed char'
| `-ElaboratedType 0x555dff091740 '__int_least8_t' sugar
|   `-TypedefType 0x555dff091710 '__int_least8_t' sugar
|     |-Typedef 0x555dff02ad60 '__int_least8_t'
|     `-ElaboratedType 0x555dff02ad20 '__int8_t' sugar
|       `-TypedefType 0x555dff02acf0 '__int8_t' sugar
|         |-Typedef 0x555dff02a980 '__int8_t'
|         `-BuiltinType 0x555dfef8a510 'signed char'
|-TypedefDecl 0x555dff091850 <line:26:1, col:25> col:25 int_least16_t '__int_least16_t':'short'
| `-ElaboratedType 0x555dff091810 '__int_least16_t' sugar
|   `-TypedefType 0x555dff0917e0 '__int_least16_t' sugar
|     |-Typedef 0x555dff030840 '__int_least16_t'
|     `-ElaboratedType 0x555dff030800 '__int16_t' sugar
|       `-TypedefType 0x555dff02ae90 '__int16_t' sugar
|         |-Typedef 0x555dff02aa60 '__int16_t'
|         `-BuiltinType 0x555dfef8a530 'short'
|-TypedefDecl 0x555dff091920 <line:27:1, col:25> col:25 int_least32_t '__int_least32_t':'int'
| `-ElaboratedType 0x555dff0918e0 '__int_least32_t' sugar
|   `-TypedefType 0x555dff0918b0 '__int_least32_t' sugar
|     |-Typedef 0x555dff0309e0 '__int_least32_t'
|     `-ElaboratedType 0x555dff0309a0 '__int32_t' sugar
|       `-TypedefType 0x555dff030970 '__int32_t' sugar
|         |-Typedef 0x555dff02ab40 '__int32_t'
|         `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff0919f0 <line:28:1, col:25> col:25 int_least64_t '__int_least64_t':'long'
| `-ElaboratedType 0x555dff0919b0 '__int_least64_t' sugar
|   `-TypedefType 0x555dff091980 '__int_least64_t' sugar
|     |-Typedef 0x555dff030b80 '__int_least64_t'
|     `-ElaboratedType 0x555dff030b40 '__int64_t' sugar
|       `-TypedefType 0x555dff030b10 '__int64_t' sugar
|         |-Typedef 0x555dff02ac20 '__int64_t'
|         `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff091ac0 <line:31:1, col:25> col:25 uint_least8_t '__uint_least8_t':'unsigned char'
| `-ElaboratedType 0x555dff091a80 '__uint_least8_t' sugar
|   `-TypedefType 0x555dff091a50 '__uint_least8_t' sugar
|     |-Typedef 0x555dff02ae30 '__uint_least8_t'
|     `-ElaboratedType 0x555dff02adf0 '__uint8_t' sugar
|       `-TypedefType 0x555dff02adc0 '__uint8_t' sugar
|         |-Typedef 0x555dff02a9f0 '__uint8_t'
|         `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff091b90 <line:32:1, col:26> col:26 uint_least16_t '__uint_least16_t':'unsigned short'
| `-ElaboratedType 0x555dff091b50 '__uint_least16_t' sugar
|   `-TypedefType 0x555dff091b20 '__uint_least16_t' sugar
|     |-Typedef 0x555dff030910 '__uint_least16_t'
|     `-ElaboratedType 0x555dff0308d0 '__uint16_t' sugar
|       `-TypedefType 0x555dff0308a0 '__uint16_t' sugar
|         |-Typedef 0x555dff02aad0 '__uint16_t'
|         `-BuiltinType 0x555dfef8a5d0 'unsigned short'
|-TypedefDecl 0x555dff091c60 <line:33:1, col:26> col:26 uint_least32_t '__uint_least32_t':'unsigned int'
| `-ElaboratedType 0x555dff091c20 '__uint_least32_t' sugar
|   `-TypedefType 0x555dff091bf0 '__uint_least32_t' sugar
|     |-Typedef 0x555dff030ab0 '__uint_least32_t'
|     `-ElaboratedType 0x555dff030a70 '__uint32_t' sugar
|       `-TypedefType 0x555dff030a40 '__uint32_t' sugar
|         |-Typedef 0x555dff02abb0 '__uint32_t'
|         `-BuiltinType 0x555dfef8a5f0 'unsigned int'
|-TypedefDecl 0x555dff091d30 <line:34:1, col:26> col:26 uint_least64_t '__uint_least64_t':'unsigned long'
| `-ElaboratedType 0x555dff091cf0 '__uint_least64_t' sugar
|   `-TypedefType 0x555dff091cc0 '__uint_least64_t' sugar
|     |-Typedef 0x555dff030c50 '__uint_least64_t'
|     `-ElaboratedType 0x555dff030c10 '__uint64_t' sugar
|       `-TypedefType 0x555dff030be0 '__uint64_t' sugar
|         |-Typedef 0x555dff02ac90 '__uint64_t'
|         `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff091da0 </usr/include/stdint.h:47:1, col:22> col:22 int_fast8_t 'signed char'
| `-BuiltinType 0x555dfef8a510 'signed char'
|-TypedefDecl 0x555dff091e10 <line:49:1, col:19> col:19 int_fast16_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff091e80 <line:50:1, col:19> col:19 int_fast32_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff091ef0 <line:51:1, col:19> col:19 int_fast64_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff091f60 <line:60:1, col:24> col:24 uint_fast8_t 'unsigned char'
| `-BuiltinType 0x555dfef8a5b0 'unsigned char'
|-TypedefDecl 0x555dff091fd0 <line:62:1, col:27> col:27 uint_fast16_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff092040 <line:63:1, col:27> col:27 uint_fast32_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff0920b0 <line:64:1, col:27> col:27 uint_fast64_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff092120 <line:76:1, col:19> col:19 intptr_t 'long'
| `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0ea710 <line:79:1, col:27> col:27 uintptr_t 'unsigned long'
| `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff0ea7e0 <line:90:1, col:21> col:21 intmax_t '__intmax_t':'long'
| `-ElaboratedType 0x555dff0ea7a0 '__intmax_t' sugar
|   `-TypedefType 0x555dff0ea770 '__intmax_t' sugar
|     |-Typedef 0x555dff030da0 '__intmax_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff0ea8b0 <line:91:1, col:22> col:22 uintmax_t '__uintmax_t':'unsigned long'
| `-ElaboratedType 0x555dff0ea870 '__uintmax_t' sugar
|   `-TypedefType 0x555dff0ea840 '__uintmax_t' sugar
|     |-Typedef 0x555dff030e10 '__uintmax_t'
|     `-BuiltinType 0x555dfef8a610 'unsigned long'
|-FunctionDecl 0x555dff0eabf0 </usr/include/assert.h:67:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:67:13 __assert_fail 'void (const char *, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x555dff0ea920 <col:28, col:40> col:40 __assertion 'const char *'
| |-ParmVarDecl 0x555dff0ea9a0 <col:53, col:65> col:65 __file 'const char *'
| |-ParmVarDecl 0x555dff0eaa20 <line:68:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x555dff0eaaa0 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x555dff0eacb8 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x555dff0ead10 <line:102:34>
|-FunctionDecl 0x555dff0eb020 </usr/include/assert.h:72:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:72:13 __assert_perror_fail 'void (int, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x555dff0ead50 <col:35, col:39> col:39 __errnum 'int'
| |-ParmVarDecl 0x555dff0eadd0 <col:49, col:61> col:61 __file 'const char *'
| |-ParmVarDecl 0x555dff0eae50 <line:73:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x555dff0eaed0 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x555dff0eb0e8 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x555dff0eb140 <line:102:34>
|-FunctionDecl 0x555dff0eb3c0 </usr/include/assert.h:79:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:79:13 __assert 'void (const char *, const char *, int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x555dff0eb180 <col:23, col:35> col:35 __assertion 'const char *'
| |-ParmVarDecl 0x555dff0eb200 <col:48, col:60> col:60 __file 'const char *'
| |-ParmVarDecl 0x555dff0eb280 <col:68, col:72> col:72 __line 'int'
| |-NoThrowAttr 0x555dff0eb480 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x555dff0eb4d8 <line:102:34>
|-TypedefDecl 0x555dff0eb570 </usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h:12:1, col:27> col:27 referenced __gnuc_va_list '__builtin_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x555dff0eb530 '__builtin_va_list' sugar
|   `-TypedefType 0x555dff0eb500 '__builtin_va_list' sugar
|     |-Typedef 0x555dfef8afb0 '__builtin_va_list'
|     `-ConstantArrayType 0x555dfef8af60 'struct __va_list_tag[1]' 1 
|       `-RecordType 0x555dfef8ada0 'struct __va_list_tag'
|         `-Record 0x555dfef8ad20 '__va_list_tag'
|-RecordDecl 0x555dff0eb5c8 </usr/include/bits/types/__mbstate_t.h:13:9, line:21:1> line:13:9 struct definition
| |-FieldDecl 0x555dff0eb688 <line:15:3, col:7> col:7 __count 'int'
| |-RecordDecl 0x555dff0f7bf0 <line:16:3, line:20:3> line:16:3 union definition
| | |-FieldDecl 0x555dff0f7ca8 <<built-in>:115:23, /usr/include/bits/types/__mbstate_t.h:18:19> col:19 __wch 'unsigned int'
| | `-FieldDecl 0x555dff0f7d90 <line:19:5, col:18> col:10 __wchb 'char[4]'
| `-FieldDecl 0x555dff0f7e38 <line:16:3, line:20:5> col:5 __value 'union (unnamed union at /usr/include/bits/types/__mbstate_t.h:16:3)':'union __mbstate_t::(unnamed at /usr/include/bits/types/__mbstate_t.h:16:3)'
|-TypedefDecl 0x555dff0f7ee8 <line:13:1, line:21:3> col:3 referenced __mbstate_t 'struct __mbstate_t':'__mbstate_t'
| `-ElaboratedType 0x555dff0f7e90 'struct __mbstate_t' sugar
|   `-RecordType 0x555dff0eb650 '__mbstate_t'
|     `-Record 0x555dff0eb5c8 <line:13:9, line:21:1>
|-RecordDecl 0x555dff0f7f58 </usr/include/bits/types/__fpos_t.h:10:9, line:14:1> line:10:16 struct _G_fpos_t definition
| |-FieldDecl 0x555dff0f8070 <line:12:3, col:11> col:11 __pos '__off_t':'long'
| `-FieldDecl 0x555dff0f8130 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x555dff0f81d8 <line:10:1, line:14:3> col:3 referenced __fpos_t 'struct _G_fpos_t'
| `-ElaboratedType 0x555dff0f8180 'struct _G_fpos_t' sugar
|   `-RecordType 0x555dff0f7fe0 'struct _G_fpos_t'
|     `-Record 0x555dff0f7f58 '_G_fpos_t'
|-RecordDecl 0x555dff0f8248 </usr/include/bits/types/__fpos64_t.h:10:9, line:14:1> line:10:16 struct _G_fpos64_t definition
| |-FieldDecl 0x555dff0f8300 <line:12:3, col:13> col:13 __pos '__off64_t':'long'
| `-FieldDecl 0x555dff0f8360 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x555dff0f8408 <line:10:1, line:14:3> col:3 __fpos64_t 'struct _G_fpos64_t'
| `-ElaboratedType 0x555dff0f83b0 'struct _G_fpos64_t' sugar
|   `-RecordType 0x555dff0f82d0 'struct _G_fpos64_t'
|     `-Record 0x555dff0f8248 '_G_fpos64_t'
|-RecordDecl 0x555dff0f8478 </usr/include/bits/types/__FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x555dff0f8570 <line:5:1, col:25> col:25 __FILE 'struct _IO_FILE'
| `-ElaboratedType 0x555dff0f8520 'struct _IO_FILE' sugar
|   `-RecordType 0x555dff0f8500 'struct _IO_FILE'
|     `-Record 0x555dff0f8988 '_IO_FILE'
|-RecordDecl 0x555dff0f85c8 prev 0x555dff0f8478 </usr/include/bits/types/FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x555dff0f8668 <line:7:1, col:25> col:25 referenced FILE 'struct _IO_FILE'
| `-ElaboratedType 0x555dff0f8520 'struct _IO_FILE' sugar
|   `-RecordType 0x555dff0f8500 'struct _IO_FILE'
|     `-Record 0x555dff0f8988 '_IO_FILE'
|-RecordDecl 0x555dff0f86c0 prev 0x555dff0f85c8 </usr/include/bits/types/struct_FILE.h:37:1, col:8> col:8 struct _IO_FILE
|-RecordDecl 0x555dff0f8740 <line:38:1, col:8> col:8 struct _IO_marker
|-RecordDecl 0x555dff0f87e0 <line:39:1, col:8> col:8 struct _IO_codecvt
|-RecordDecl 0x555dff0f8880 <line:40:1, col:8> col:8 struct _IO_wide_data
|-TypedefDecl 0x555dff0f8930 <line:45:1, col:14> col:14 referenced _IO_lock_t 'void'
| `-BuiltinType 0x555dfef8a4b0 'void'
|-RecordDecl 0x555dff0f8988 prev 0x555dff0f86c0 <line:51:1, line:110:1> line:51:8 struct _IO_FILE definition
| |-FieldDecl 0x555dff0f8a20 <line:53:3, col:7> col:7 _flags 'int'
| |-FieldDecl 0x555dff0f8a88 <line:56:3, col:9> col:9 _IO_read_ptr 'char *'
| |-FieldDecl 0x555dff0f8af0 <line:57:3, col:9> col:9 _IO_read_end 'char *'
| |-FieldDecl 0x555dff0f8b58 <line:58:3, col:9> col:9 _IO_read_base 'char *'
| |-FieldDecl 0x555dff0fcda0 <line:59:3, col:9> col:9 _IO_write_base 'char *'
| |-FieldDecl 0x555dff0fce08 <line:60:3, col:9> col:9 _IO_write_ptr 'char *'
| |-FieldDecl 0x555dff0fce70 <line:61:3, col:9> col:9 _IO_write_end 'char *'
| |-FieldDecl 0x555dff0fced8 <line:62:3, col:9> col:9 _IO_buf_base 'char *'
| |-FieldDecl 0x555dff0fcf40 <line:63:3, col:9> col:9 _IO_buf_end 'char *'
| |-FieldDecl 0x555dff0fcfa8 <line:66:3, col:9> col:9 _IO_save_base 'char *'
| |-FieldDecl 0x555dff0fd010 <line:67:3, col:9> col:9 _IO_backup_base 'char *'
| |-FieldDecl 0x555dff0fd078 <line:68:3, col:9> col:9 _IO_save_end 'char *'
| |-FieldDecl 0x555dff0fd188 <line:70:3, col:22> col:22 _markers 'struct _IO_marker *'
| |-FieldDecl 0x555dff0fd268 <line:72:3, col:20> col:20 _chain 'struct _IO_FILE *'
| |-FieldDecl 0x555dff0fd2d0 <line:74:3, col:7> col:7 _fileno 'int'
| |-FieldDecl 0x555dff0fd378 <line:75:3, col:15> col:7 _flags2 'int'
| | `-ConstantExpr 0x555dff0fd358 <col:15> 'int'
| |   |-value: Int 24
| |   `-IntegerLiteral 0x555dff0fd320 <col:15> 'int' 24
| |-FieldDecl 0x555dff0fd428 <line:77:3, col:26> col:8 _short_backupbuf 'char[1]'
| |-FieldDecl 0x555dff0fd488 <line:78:3, col:11> col:11 _old_offset '__off_t':'long'
| |-FieldDecl 0x555dff0fd4f0 <line:81:3, col:18> col:18 _cur_column 'unsigned short'
| |-FieldDecl 0x555dff0fd558 <line:82:3, col:15> col:15 _vtable_offset 'signed char'
| |-FieldDecl 0x555dff0fd608 <line:83:3, col:19> col:8 _shortbuf 'char[1]'
| |-FieldDecl 0x555dff0fd708 <line:85:3, col:15> col:15 _lock '_IO_lock_t *'
| |-FieldDecl 0x555dff0fd768 <line:93:3, col:13> col:13 _offset '__off64_t':'long'
| |-FieldDecl 0x555dff0fd878 <line:95:3, col:23> col:23 _codecvt 'struct _IO_codecvt *'
| |-FieldDecl 0x555dff0fd988 <line:96:3, col:25> col:25 _wide_data 'struct _IO_wide_data *'
| |-FieldDecl 0x555dff0fda00 <line:97:3, col:20> col:20 _freeres_list 'struct _IO_FILE *'
| |-FieldDecl 0x555dff0fda68 <line:98:3, col:9> col:9 _freeres_buf 'void *'
| |-FieldDecl 0x555dff0fdb48 <line:99:3, col:21> col:21 _prevchain 'struct _IO_FILE **'
| |-FieldDecl 0x555dff0fdbb0 <line:100:3, col:7> col:7 _mode 'int'
| |-FieldDecl 0x555dff0fdc18 <line:102:3, col:7> col:7 _unused3 'int'
| |-FieldDecl 0x555dff0fdc78 <line:104:3, col:14> col:14 _total_written '__uint64_t':'unsigned long'
| `-FieldDecl 0x555dff0ffec0 <line:109:3, col:56> col:8 _unused2 'char[8]'
|-TypedefDecl 0x555dff1001c0 </usr/include/bits/types/cookie_io_functions_t.h:27:1, line:28:58> line:27:19 referenced cookie_read_function_t '__ssize_t (void *, char *, size_t)'
| `-FunctionProtoType 0x555dff100140 '__ssize_t (void *, char *, size_t)' cdecl
|   |-ElaboratedType 0x555dff0fff40 '__ssize_t' sugar
|   | `-TypedefType 0x555dff0fff10 '__ssize_t' sugar
|   |   |-Typedef 0x555dff0386c0 '__ssize_t'
|   |   `-BuiltinType 0x555dfef8a570 'long'
|   |-PointerType 0x555dfef8abf0 'void *'
|   | `-BuiltinType 0x555dfef8a4b0 'void'
|   |-PointerType 0x555dfef8ac80 'char *'
|   | `-BuiltinType 0x555dfef8a4f0 'char'
|   `-ElaboratedType 0x555dfeff33f0 'size_t' sugar
|     `-TypedefType 0x555dfeff33c0 'size_t' sugar
|       |-Typedef 0x555dfeff3238 'size_t'
|       `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff100460 <line:36:1, line:37:59> line:36:19 referenced cookie_write_function_t '__ssize_t (void *, const char *, size_t)'
| `-FunctionProtoType 0x555dff1003e0 '__ssize_t (void *, const char *, size_t)' cdecl
|   |-ElaboratedType 0x555dff0fff40 '__ssize_t' sugar
|   | `-TypedefType 0x555dff0fff10 '__ssize_t' sugar
|   |   |-Typedef 0x555dff0386c0 '__ssize_t'
|   |   `-BuiltinType 0x555dfef8a570 'long'
|   |-PointerType 0x555dfef8abf0 'void *'
|   | `-BuiltinType 0x555dfef8a4b0 'void'
|   |-PointerType 0x555dfef8b220 'const char *'
|   | `-QualType 0x555dfef8a4f1 'const char' const
|   |   `-BuiltinType 0x555dfef8a4f0 'char'
|   `-ElaboratedType 0x555dfeff33f0 'size_t' sugar
|     `-TypedefType 0x555dfeff33c0 'size_t' sugar
|       |-Typedef 0x555dfeff3238 'size_t'
|       `-BuiltinType 0x555dfef8a610 'unsigned long'
|-TypedefDecl 0x555dff100778 <line:45:1, col:78> col:13 referenced cookie_seek_function_t 'int (void *, __off64_t *, int)'
| `-FunctionProtoType 0x555dff1006f0 'int (void *, __off64_t *, int)' cdecl
|   |-BuiltinType 0x555dfef8a550 'int'
|   |-PointerType 0x555dfef8abf0 'void *'
|   | `-BuiltinType 0x555dfef8a4b0 'void'
|   |-PointerType 0x555dff100570 '__off64_t *'
|   | `-ElaboratedType 0x555dff038830 '__off64_t' sugar
|   |   `-TypedefType 0x555dff038800 '__off64_t' sugar
|   |     |-Typedef 0x555dff031200 '__off64_t'
|   |     `-BuiltinType 0x555dfef8a570 'long'
|   `-BuiltinType 0x555dfef8a550 'int'
|-TypedefDecl 0x555dff1008b8 <line:48:1, col:52> col:13 referenced cookie_close_function_t 'int (void *)'
| `-FunctionProtoType 0x555dff100850 'int (void *)' cdecl
|   |-BuiltinType 0x555dfef8a550 'int'
|   `-PointerType 0x555dfef8abf0 'void *'
|     `-BuiltinType 0x555dfef8a4b0 'void'
|-RecordDecl 0x555dff100910 <line:55:9, line:61:1> line:55:16 struct _IO_cookie_io_functions_t definition
| |-FieldDecl 0x555dff100a88 <line:57:3, col:27> col:27 read 'cookie_read_function_t *'
| |-FieldDecl 0x555dff100bb8 <line:58:3, col:28> col:28 write 'cookie_write_function_t *'
| |-FieldDecl 0x555dff100ce8 <line:59:3, col:27> col:27 seek 'cookie_seek_function_t *'
| `-FieldDecl 0x555dff102948 <line:60:3, col:28> col:28 close 'cookie_close_function_t *'
|-TypedefDecl 0x555dff1029f8 <line:55:1, line:61:3> col:3 referenced cookie_io_functions_t 'struct _IO_cookie_io_functions_t'
| `-ElaboratedType 0x555dff1029a0 'struct _IO_cookie_io_functions_t' sugar
|   `-RecordType 0x555dff100990 'struct _IO_cookie_io_functions_t'
|     `-Record 0x555dff100910 '_IO_cookie_io_functions_t'
|-TypedefDecl 0x555dff102ae0 </usr/include/stdio.h:53:1, col:24> col:24 va_list '__gnuc_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x555dff102aa0 '__gnuc_va_list' sugar
|   `-TypedefType 0x555dff102a70 '__gnuc_va_list' sugar
|     |-Typedef 0x555dff0eb570 '__gnuc_va_list'
|     `-ElaboratedType 0x555dff0eb530 '__builtin_va_list' sugar
|       `-TypedefType 0x555dff0eb500 '__builtin_va_list' sugar
|         |-Typedef 0x555dfef8afb0 '__builtin_va_list'
|         `-ConstantArrayType 0x555dfef8af60 'struct __va_list_tag[1]' 1 
|           `-RecordType 0x555dfef8ada0 'struct __va_list_tag'
|             `-Record 0x555dfef8ad20 '__va_list_tag'
|-TypedefDecl 0x555dff102b48 <line:64:1, col:17> col:17 off_t '__off_t':'long'
| `-ElaboratedType 0x555dff0f8030 '__off_t' sugar
|   `-TypedefType 0x555dff0f8000 '__off_t' sugar
|     |-Typedef 0x555dff031190 '__off_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff102bb0 <line:78:1, col:19> col:19 ssize_t '__ssize_t':'long'
| `-ElaboratedType 0x555dff0fff40 '__ssize_t' sugar
|   `-TypedefType 0x555dff0fff10 '__ssize_t' sugar
|     |-Typedef 0x555dff0386c0 '__ssize_t'
|     `-BuiltinType 0x555dfef8a570 'long'
|-TypedefDecl 0x555dff102c80 <line:85:1, col:18> col:18 referenced fpos_t '__fpos_t':'struct _G_fpos_t'
| `-ElaboratedType 0x555dff102c40 '__fpos_t' sugar
|   `-TypedefType 0x555dff102c10 '__fpos_t' sugar
|     |-Typedef 0x555dff0f81d8 '__fpos_t'
|     `-ElaboratedType 0x555dff0f8180 'struct _G_fpos_t' sugar
|       `-RecordType 0x555dff0f7fe0 'struct _G_fpos_t'
|         `-Record 0x555dff0f7f58 '_G_fpos_t'
|-VarDecl 0x555dff102d88 <line:149:1, col:14> col:14 stdin 'FILE *' extern
|-VarDecl 0x555dff102e08 <line:150:1, col:14> col:14 stdout 'FILE *' extern
|-VarDecl 0x555dff102e88 <line:151:1, col:14> col:14 stderr 'FILE *' extern
|-FunctionDecl 0x555dff102fd8 <line:158:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:158:12 remove 'int (const char *)' extern
| |-ParmVarDecl 0x555dff102f08 <col:20, col:32> col:32 __filename 'const char *'
| `-NoThrowAttr 0x555dff103088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff103218 </usr/include/stdio.h:160:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:160:12 rename 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x555dff1030f8 <col:20, col:32> col:32 __old 'const char *'
| |-ParmVarDecl 0x555dff103178 <col:39, col:51> col:51 __new 'const char *'
| `-NoThrowAttr 0x555dff1032d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff1035c8 </usr/include/stdio.h:164:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:164:12 renameat 'int (int, const char *, int, const char *)' extern
| |-ParmVarDecl 0x555dff103340 <col:22, col:26> col:26 __oldfd 'int'
| |-ParmVarDecl 0x555dff1033c0 <col:35, col:47> col:47 __old 'const char *'
| |-ParmVarDecl 0x555dff103440 <col:54, col:58> col:58 __newfd 'int'
| |-ParmVarDecl 0x555dff1034c0 <line:165:8, col:20> col:20 __new 'const char *'
| `-NoThrowAttr 0x555dff103690 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff103838 </usr/include/stdio.h:187:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:187:12 fclose 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff103700 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x555dff104920 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:187:49> 1
|-FunctionDecl 0x555dff104a98 <line:197:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:197:14 tmpfile 'FILE *(void)' extern
| `-RestrictAttr 0x555dff104b40 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff104d88 </usr/include/stdio.h:214:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:214:14 tmpnam 'char *(char *)' extern
| |-ParmVarDecl 0x555dff104c70 <col:22, col:35> col:26 'char *'
| `-NoThrowAttr 0x555dff104e38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff104f88 </usr/include/stdio.h:219:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:219:14 tmpnam_r 'char *(char *)' extern
| |-ParmVarDecl 0x555dff104ef0 <col:24, col:41> col:29 __s 'char *'
| `-NoThrowAttr 0x555dff105038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff1051c8 </usr/include/stdio.h:231:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:231:14 tempnam 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff1050a8 <col:23, col:35> col:35 __dir 'const char *'
| |-ParmVarDecl 0x555dff105128 <col:42, col:54> col:54 __pfx 'const char *'
| |-NoThrowAttr 0x555dff105280 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x555dff1052d8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff1053c0 </usr/include/stdio.h:239:1, col:34> col:12 fflush 'int (FILE *)' extern
| `-ParmVarDecl 0x555dff105328 <col:20, col:26> col:26 __stream 'FILE *'
|-FunctionDecl 0x555dff105520 <line:248:1, col:43> col:12 fflush_unlocked 'int (FILE *)' extern
| `-ParmVarDecl 0x555dff105488 <col:29, col:35> col:35 __stream 'FILE *'
|-FunctionDecl 0x555dff105800 <line:267:14> col:14 implicit fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff105930 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x555dff105998 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x555dff1058a8 <<invalid sloc>> Implicit 636
|-FunctionDecl 0x555dff105a10 prev 0x555dff105800 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:267:14 fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff1055e8 <col:21, col:44> col:44 __filename 'const char *restrict'
| |-ParmVarDecl 0x555dff105668 <line:268:7, col:30> col:30 __modes 'const char *restrict'
| |-BuiltinAttr 0x555dff105b30 <<invalid sloc>> Inherited Implicit 636
| `-RestrictAttr 0x555dff105ac8 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff105dd8 </usr/include/stdio.h:274:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:274:14 freopen 'FILE *(const char *restrict, const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff105b78 <col:23, col:46> col:46 __filename 'const char *restrict'
| |-ParmVarDecl 0x555dff105bf8 <line:275:9, col:32> col:32 __modes 'const char *restrict'
| |-ParmVarDecl 0x555dff105c78 <line:276:9, col:26> col:26 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff105e98 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:276:55> 3
|-FunctionDecl 0x555dff1060c8 <line:302:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:302:14 fdopen 'FILE *(int, const char *)' extern
| |-ParmVarDecl 0x555dff105f20 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x555dff105fa0 <col:32, col:44> col:44 __modes 'const char *'
| |-NoThrowAttr 0x555dff106180 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x555dff1061d8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff1064c8 </usr/include/stdio.h:309:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:309:14 fopencookie 'FILE *(void *restrict, const char *restrict, cookie_io_functions_t)' extern
| |-ParmVarDecl 0x555dff106228 <col:27, col:44> col:44 __magic_cookie 'void *restrict'
| |-ParmVarDecl 0x555dff1062a8 <line:310:6, col:29> col:29 __modes 'const char *restrict'
| |-ParmVarDecl 0x555dff106380 <line:311:6, col:28> col:28 __io_funcs 'cookie_io_functions_t':'struct _IO_cookie_io_functions_t'
| |-NoThrowAttr 0x555dff106588 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x555dff1065e0 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff106868 </usr/include/stdio.h:317:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:317:14 fmemopen 'FILE *(void *, size_t, const char *)' extern
| |-ParmVarDecl 0x555dff106630 <col:24, col:30> col:30 __s 'void *'
| |-ParmVarDecl 0x555dff1066a8 <col:35, col:42> col:42 __len 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff106728 <col:49, col:61> col:61 __modes 'const char *'
| |-NoThrowAttr 0x555dff106940 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x555dff106998 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff106be8 </usr/include/stdio.h:323:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:323:14 open_memstream 'FILE *(char **, size_t *)' extern
| |-ParmVarDecl 0x555dff1069e8 <col:30, col:37> col:37 __bufloc 'char **'
| |-ParmVarDecl 0x555dff106ac8 <col:47, col:55> col:55 __sizeloc 'size_t *'
| |-NoThrowAttr 0x555dff106ca0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x555dff106cf8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff106f00 </usr/include/stdio.h:337:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:337:13 setbuf 'void (FILE *restrict, char *restrict)' extern
| |-ParmVarDecl 0x555dff106d48 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff106dc8 <col:48, col:65> col:65 __buf 'char *restrict'
| |-NoThrowAttr 0x555dff106fb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff107010 <line:555:57, /usr/include/stdio.h:338:16> 1
|-FunctionDecl 0x555dff107358 <line:342:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:342:12 setvbuf 'int (FILE *restrict, char *restrict, int, size_t)' extern
| |-ParmVarDecl 0x555dff107070 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff1070f0 <col:48, col:65> col:65 __buf 'char *restrict'
| |-ParmVarDecl 0x555dff107170 <line:343:7, col:11> col:11 __modes 'int'
| |-ParmVarDecl 0x555dff1071e8 <col:20, col:27> col:27 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff107420 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff107478 <line:555:57, /usr/include/stdio.h:343:53> 1
|-FunctionDecl 0x555dff107720 <line:348:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:348:13 setbuffer 'void (FILE *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x555dff1074d0 <col:24, col:41> col:41 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff107550 <col:51, col:68> col:68 __buf 'char *restrict'
| |-ParmVarDecl 0x555dff1075c8 <line:349:10, col:17> col:17 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x555dff1077e0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff107838 <line:555:57, /usr/include/stdio.h:349:46> 1
|-FunctionDecl 0x555dff1079f0 <line:352:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:352:13 setlinebuf 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff107890 <col:25, col:31> col:31 __stream 'FILE *'
| |-NoThrowAttr 0x555dff107aa0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff107af8 <line:555:57, /usr/include/stdio.h:352:62> 1
|-FunctionDecl 0x555dff107d78 <line:360:12> col:12 implicit fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff107e80 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x555dff107ee8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff107e20 <<invalid sloc>> Implicit 557
| |-FormatAttr 0x555dff107f60 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x555dff107f98 <col:12> Implicit
|-FunctionDecl 0x555dff107fc0 prev 0x555dff107d78 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:360:12 fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff107b50 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff107bd0 <line:361:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff1080e8 <<invalid sloc>> Inherited Implicit 557
| |-FormatAttr 0x555dff108118 <line:360:12> Inherited printf 2 3
| |-NoThrowAttr 0x555dff108150 <col:12> Inherited Implicit
| `-NonNullAttr 0x555dff108078 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:361:58> 1
|-FunctionDecl 0x555dff1082b0 <line:366:12> col:12 implicit used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x555dff1083b8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x555dff108358 <<invalid sloc>> Implicit 1057
| `-FormatAttr 0x555dff108428 <col:12> Implicit printf 1 2
|-FunctionDecl 0x555dff108460 prev 0x555dff1082b0 <col:1, col:56> col:12 used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x555dff108190 <col:20, col:43> col:43 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff108540 <<invalid sloc>> Inherited Implicit 1057
| `-FormatAttr 0x555dff108570 <col:12> Inherited printf 1 2
|-FunctionDecl 0x555dff108780 <line:368:12> col:12 implicit sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff108888 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x555dff108960 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff108828 <<invalid sloc>> Implicit 1141
| |-FormatAttr 0x555dff1089d8 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x555dff108a10 <col:12> Implicit
|-FunctionDecl 0x555dff108a38 prev 0x555dff108780 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:368:12 sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff1085c0 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x555dff108640 <line:369:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff108b48 <<invalid sloc>> Inherited Implicit 1141
| |-FormatAttr 0x555dff108b78 <line:368:12> Inherited printf 2 3
| `-NoThrowAttr 0x555dff108af0 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x555dff108ed8 </usr/include/stdio.h:375:12> col:12 implicit vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff108fe0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x555dff109048 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff1090b0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff108f80 <<invalid sloc>> Implicit 1469
| |-FormatAttr 0x555dff109130 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x555dff109168 <col:12> Implicit
|-FunctionDecl 0x555dff109190 prev 0x555dff108ed8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:375:12 vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff108bc8 <col:22, col:39> col:39 __s 'FILE *restrict'
| |-ParmVarDecl 0x555dff108c48 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff108d20 <line:376:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff1092c8 <<invalid sloc>> Inherited Implicit 1469
| |-FormatAttr 0x555dff1092f8 <line:375:12> Inherited printf 2 0
| |-NoThrowAttr 0x555dff109330 <col:12> Inherited Implicit
| `-NonNullAttr 0x555dff109250 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:376:43> 1
|-FunctionDecl 0x555dff109550 <line:381:12> col:12 implicit vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff109658 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff1096c0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff1095f8 <<invalid sloc>> Implicit 1454
| |-FormatAttr 0x555dff109738 <col:12> Implicit printf 1 0
| `-NoThrowAttr 0x555dff109770 <col:12> Implicit
|-FunctionDecl 0x555dff109798 prev 0x555dff109550 <col:1, col:74> col:12 vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff109370 <col:21, col:44> col:44 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff1093e8 <col:54, col:69> col:69 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff109880 <<invalid sloc>> Inherited Implicit 1454
| |-FormatAttr 0x555dff1098b0 <col:12> Inherited printf 1 0
| `-NoThrowAttr 0x555dff1098e8 <col:12> Inherited Implicit
|-FunctionDecl 0x555dff109bf8 <line:383:12> col:12 implicit vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff109d00 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x555dff109d68 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff109dd0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff109ca0 <<invalid sloc>> Implicit 1471
| |-FormatAttr 0x555dff109e50 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x555dff109e88 <col:12> Implicit
|-FunctionDecl 0x555dff109eb0 prev 0x555dff109bf8 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:383:12 vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff109970 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x555dff1099f0 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff109a68 <line:384:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff109fc8 <<invalid sloc>> Inherited Implicit 1471
| |-FormatAttr 0x555dff109ff8 <line:383:12> Inherited printf 2 0
| `-NoThrowAttr 0x555dff109f70 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x555dff10a330 </usr/include/stdio.h:388:12> col:12 implicit snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10a438 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x555dff10a4a0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff10a508 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff10a3d8 <<invalid sloc>> Implicit 1209
| |-FormatAttr 0x555dff10a588 <col:12> Implicit printf 3 4
| `-NoThrowAttr 0x555dff10a5c0 <col:12> Implicit
|-FunctionDecl 0x555dff10a5e8 prev 0x555dff10a330 <col:1, line:390:62> line:388:12 snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10a048 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x555dff10a0c0 <col:44, col:51> col:51 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff10a140 <line:389:8, col:31> col:31 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10a738 <<invalid sloc>> Inherited Implicit 1209
| |-NoThrowAttr 0x555dff10a6a8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x555dff10a700 </usr/include/stdio.h:390:32, col:60> printf 3 4
|-FunctionDecl 0x555dff10ab00 <line:392:12> col:12 implicit vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10ac08 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x555dff10ac70 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff10acd8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10ad40 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10aba8 <<invalid sloc>> Implicit 1473
| |-FormatAttr 0x555dff10adc8 <col:12> Implicit printf 3 0
| `-NoThrowAttr 0x555dff10ae00 <col:12> Implicit
|-FunctionDecl 0x555dff10ae28 prev 0x555dff10ab00 <col:1, line:394:62> line:392:12 vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10a780 <col:23, col:40> col:40 __s 'char *restrict'
| |-ParmVarDecl 0x555dff10a7f8 <col:45, col:52> col:52 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff10a878 <line:393:9, col:32> col:32 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10a8f0 <col:42, col:57> col:57 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10af80 <<invalid sloc>> Inherited Implicit 1473
| |-NoThrowAttr 0x555dff10aef0 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x555dff10af48 </usr/include/stdio.h:394:32, col:60> printf 3 0
|-FunctionDecl 0x555dff10b258 <line:400:1, line:402:62> line:400:12 vasprintf 'int (char **restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10afc8 <col:23, col:41> col:41 __ptr 'char **restrict'
| |-ParmVarDecl 0x555dff10b048 <col:48, col:71> col:71 __f 'const char *restrict'
| |-ParmVarDecl 0x555dff10b0c0 <line:401:9, col:24> col:24 __arg 'struct __va_list_tag *'
| |-NoThrowAttr 0x555dff10b318 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x555dff10b370 </usr/include/stdio.h:402:32, col:60> printf 2 0
|-FunctionDecl 0x555dff10b5d0 <line:403:1, line:405:62> line:403:12 __asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10b3c0 <col:24, col:42> col:42 __ptr 'char **restrict'
| |-ParmVarDecl 0x555dff10b440 <line:404:10, col:33> col:33 __fmt 'const char *restrict'
| |-NoThrowAttr 0x555dff10b688 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x555dff10b6e0 </usr/include/stdio.h:405:32, col:60> printf 2 3
|-FunctionDecl 0x555dff10b8a0 <line:406:1, line:408:62> line:406:12 asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10b730 <col:22, col:40> col:40 __ptr 'char **restrict'
| |-ParmVarDecl 0x555dff10b7b0 <line:407:8, col:31> col:31 __fmt 'const char *restrict'
| |-NoThrowAttr 0x555dff10b958 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x555dff10b9c0 </usr/include/stdio.h:408:32, col:60> printf 2 3
|-FunctionDecl 0x555dff10bc98 <line:413:1, line:415:52> line:413:12 vdprintf 'int (int, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10ba10 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x555dff10ba90 <col:32, col:55> col:55 __fmt 'const char *restrict'
| |-ParmVarDecl 0x555dff10bb08 <line:414:8, col:23> col:23 __arg 'struct __va_list_tag *'
| `-FormatAttr 0x555dff10bd58 <line:415:22, col:50> printf 2 0
|-FunctionDecl 0x555dff10bfe0 <line:416:1, line:417:52> line:416:12 dprintf 'int (int, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10bdd8 <col:21, col:25> col:25 __fd 'int'
| |-ParmVarDecl 0x555dff10be58 <col:31, col:54> col:54 __fmt 'const char *restrict'
| `-FormatAttr 0x555dff10c098 <line:417:22, col:50> printf 2 3
|-FunctionDecl 0x555dff10c258 <line:425:12> col:12 implicit fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10c360 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x555dff10c3c8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff10c300 <<invalid sloc>> Implicit 560
| `-FormatAttr 0x555dff10c440 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x555dff10c478 prev 0x555dff10c258 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:425:12 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10c118 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff10c198 <line:426:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10c5a8 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x555dff10c5d8 <line:425:12> Inherited scanf 2 3
| `-NonNullAttr 0x555dff10c530 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> 1
|-FunctionDecl 0x555dff10c6c0 <line:431:12> col:12 implicit scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10c7c8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff10c768 <<invalid sloc>> Implicit 1162
| `-FormatAttr 0x555dff10c838 <col:12> Implicit scanf 1 2
|-FunctionDecl 0x555dff10c870 prev 0x555dff10c6c0 <col:1, col:55> col:12 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10c628 <col:19, col:42> col:42 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10c950 <<invalid sloc>> Inherited Implicit 1162
| `-FormatAttr 0x555dff10c9a0 <col:12> Inherited scanf 1 2
|-FunctionDecl 0x555dff10cbb0 <line:433:12> col:12 implicit sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10ccb8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10cd20 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x555dff10cc58 <<invalid sloc>> Implicit 1144
| `-FormatAttr 0x555dff10cd98 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x555dff10cdd0 prev 0x555dff10cbb0 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:433:12 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10c9f0 <col:20, col:43> col:43 __s 'const char *restrict'
| |-ParmVarDecl 0x555dff10ca70 <line:434:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10cee0 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x555dff10cf10 <line:433:12> Inherited scanf 2 3
| `-NoThrowAttr 0x555dff10ce88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff10d108 prev 0x555dff10c478 </usr/include/stdio.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:466:24 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10cf60 <col:33, col:50> col:50 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff10cfe0 <line:467:5, col:28> col:28 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10d288 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x555dff10d2b8 <line:425:12> Inherited scanf 2 3
| |-NonNullAttr 0x555dff10d2f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> Inherited 1
| |-AsmLabelAttr 0x555dff10d1b0 <<scratch space>:51:1> "__isoc99_fscanf" IsLiteralLabel
| `-NonNullAttr 0x555dff10d240 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:468:46> 1
|-FunctionDecl 0x555dff10d450 prev 0x555dff10c870 <line:469:1, /usr/include/sys/cdefs.h:410:79> /usr/include/stdio.h:469:24 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10d350 <col:32, col:55> col:55 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10d580 <<invalid sloc>> Inherited Implicit 1162
| |-FormatAttr 0x555dff10d5b0 <line:431:12> Inherited scanf 1 2
| `-AsmLabelAttr 0x555dff10d4f8 <<scratch space>:53:1> "__isoc99_scanf" IsLiteralLabel
|-FunctionDecl 0x555dff10d750 prev 0x555dff10cdd0 </usr/include/stdio.h:471:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:471:28 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x555dff10d600 <col:37, col:60> col:60 __s 'const char *restrict'
| |-ParmVarDecl 0x555dff10d680 <line:472:9, col:32> col:32 __format 'const char *restrict'
| |-BuiltinAttr 0x555dff10d8b0 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x555dff10d8e0 <line:433:12> Inherited scanf 2 3
| |-AsmLabelAttr 0x555dff10d7f8 <<scratch space>:55:1> "__isoc99_sscanf" IsLiteralLabel
| `-NoThrowAttr 0x555dff10d888 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff10db58 </usr/include/stdio.h:493:12> col:12 implicit vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10dc60 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x555dff10dcc8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10dd30 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10dc00 <<invalid sloc>> Implicit 1451
| `-FormatAttr 0x555dff10ddb0 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x555dff10dde8 prev 0x555dff10db58 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:493:12 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10d930 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-ParmVarDecl 0x555dff10d9c8 <col:43, col:66> col:66 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10da40 <line:494:7, col:22> col:22 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10df58 <<invalid sloc>> Inherited Implicit 1451
| |-FormatAttr 0x555dff10dea8 <line:495:22, col:49> scanf 2 0
| `-NonNullAttr 0x555dff10df10 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> 1
|-FunctionDecl 0x555dff10e108 <line:501:12> col:12 implicit vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10e210 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10e278 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10e1b0 <<invalid sloc>> Implicit 1461
| `-FormatAttr 0x555dff10e2f0 <col:12> Implicit scanf 1 0
|-FunctionDecl 0x555dff10e328 prev 0x555dff10e108 <col:1, line:502:51> line:501:12 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10dfa0 <col:20, col:43> col:43 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10e018 <col:53, col:68> col:68 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10e448 <<invalid sloc>> Inherited Implicit 1461
| `-FormatAttr 0x555dff10e3e0 <line:502:22, col:49> scanf 1 0
|-FunctionDecl 0x555dff10e768 <line:505:12> col:12 implicit vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10e870 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10e8d8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x555dff10e940 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10e810 <<invalid sloc>> Implicit 1459
| `-FormatAttr 0x555dff10e9d8 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x555dff10ea10 prev 0x555dff10e768 <col:1, line:507:59> line:505:12 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10e490 <col:21, col:44> col:44 __s 'const char *restrict'
| |-ParmVarDecl 0x555dff10e510 <line:506:7, col:30> col:30 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10e588 <col:40, col:55> col:55 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10eb60 <<invalid sloc>> Inherited Implicit 1459
| |-NoThrowAttr 0x555dff10ead0 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x555dff10eb28 </usr/include/stdio.h:507:30, col:57> scanf 2 0
|-FunctionDecl 0x555dff10ede8 prev 0x555dff10dde8 <line:543:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:543:24 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10eba8 <line:544:11, col:28> col:28 __s 'FILE *restrict'
| |-ParmVarDecl 0x555dff10ec28 <line:545:4, col:27> col:27 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10eca0 <col:37, col:52> col:52 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10efa8 <<invalid sloc>> Inherited Implicit 1451
| |-NonNullAttr 0x555dff10efd8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> Inherited 1
| |-AsmLabelAttr 0x555dff10ee90 <<scratch space>:59:1> "__isoc99_vfscanf" IsLiteralLabel
| |-FormatAttr 0x555dff10ef28 </usr/include/stdio.h:547:22, col:49> scanf 2 0
| `-NonNullAttr 0x555dff10ef60 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:547:72> 1
|-FunctionDecl 0x555dff10f1c8 prev 0x555dff10e328 <line:548:1, line:550:51> line:548:24 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10f030 <col:33, col:56> col:56 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10f0a8 <line:549:5, col:20> col:20 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10f338 <<invalid sloc>> Inherited Implicit 1461
| |-AsmLabelAttr 0x555dff10f270 <<scratch space>:61:1> "__isoc99_vscanf" IsLiteralLabel
| `-FormatAttr 0x555dff10f300 </usr/include/stdio.h:550:22, col:49> scanf 1 0
|-FunctionDecl 0x555dff10f5a0 prev 0x555dff10ea10 <line:551:1, line:555:51> line:551:28 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x555dff10f380 <line:552:8, col:31> col:31 __s 'const char *restrict'
| |-ParmVarDecl 0x555dff10f400 <line:553:8, col:31> col:31 __format 'const char *restrict'
| |-ParmVarDecl 0x555dff10f478 <line:554:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x555dff10f740 <<invalid sloc>> Inherited Implicit 1459
| |-AsmLabelAttr 0x555dff10f648 <<scratch space>:63:1> "__isoc99_vsscanf" IsLiteralLabel
| |-NoThrowAttr 0x555dff10f6e0 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x555dff10f708 </usr/include/stdio.h:555:22, col:49> scanf 2 0
|-FunctionDecl 0x555dff10f840 <line:578:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:578:12 fgetc 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff10f788 <col:19, col:25> col:25 __stream 'FILE *'
| `-NonNullAttr 0x555dff10f8f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:578:48> 1
|-FunctionDecl 0x555dff10fa88 <line:579:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:579:12 getc 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff10f9d0 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x555dff10fb38 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:579:47> 1
|-FunctionDecl 0x555dff10fc78 <line:585:1, col:25> col:12 getchar 'int (void)' extern
|-FunctionDecl 0x555dff10fdf0 <line:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:592:12 getc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff10fd38 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x555dff10fea0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:592:56> 1
|-FunctionDecl 0x555dff10ffb8 <line:593:1, col:34> col:12 getchar_unlocked 'int (void)' extern
|-FunctionDecl 0x555dff110130 <line:603:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:603:12 fgetc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff110078 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x555dff1101e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:603:57> 1
|-FunctionDecl 0x555dff110438 <line:611:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:611:12 fputc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff110270 <col:19, col:23> col:23 __c 'int'
| |-ParmVarDecl 0x555dff1102f0 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x555dff1104f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:611:57> 2
|-FunctionDecl 0x555dff1106c0 <line:612:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:612:12 putc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff110580 <col:18, col:22> col:22 __c 'int'
| |-ParmVarDecl 0x555dff110600 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x555dff110778 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:612:56> 2
|-FunctionDecl 0x555dff110898 <line:618:1, col:28> col:12 putchar 'int (int)' extern
| `-ParmVarDecl 0x555dff110800 <col:21, col:25> col:25 __c 'int'
|-FunctionDecl 0x555dff110ab8 <line:627:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:627:12 fputc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff110960 <col:28, col:32> col:32 __c 'int'
| |-ParmVarDecl 0x555dff1109f8 <col:37, col:43> col:43 __stream 'FILE *'
| `-NonNullAttr 0x555dff110b70 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:627:66> 2
|-FunctionDecl 0x555dff110d40 <line:635:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:635:12 putc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff110c00 <col:27, col:31> col:31 __c 'int'
| |-ParmVarDecl 0x555dff110c80 <col:36, col:42> col:42 __stream 'FILE *'
| `-NonNullAttr 0x555dff110df8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:635:65> 2
|-FunctionDecl 0x555dff110f18 <line:636:1, col:37> col:12 putchar_unlocked 'int (int)' extern
| `-ParmVarDecl 0x555dff110e80 <col:30, col:34> col:34 __c 'int'
|-FunctionDecl 0x555dff111098 <line:643:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:643:12 getw 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff110fe0 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x555dff111148 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:643:47> 1
|-FunctionDecl 0x555dff111310 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:646:12 putw 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff1111d0 <col:18, col:22> col:22 __w 'int'
| |-ParmVarDecl 0x555dff111250 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x555dff1113c8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:646:56> 2
|-FunctionDecl 0x555dff1116b8 <line:654:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:654:14 fgets 'char *(char *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff111450 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x555dff1114d0 <col:43, col:47> col:47 __n 'int'
| |-ParmVarDecl 0x555dff111550 <col:52, col:69> col:69 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff111778 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:655:72> 3
|-FunctionDecl 0x555dff094390 <line:689:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:689:18 __getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff111800 <col:30, col:48> col:48 __lineptr 'char **restrict'
| |-ParmVarDecl 0x555dff111880 <line:690:30, col:49> col:49 __n 'size_t *restrict'
| |-ParmVarDecl 0x555dff111900 <col:54, col:58> col:58 __delimiter 'int'
| |-ParmVarDecl 0x555dff094220 <line:691:30, col:47> col:47 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff094458 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:691:76> 4
|-FunctionDecl 0x555dff094728 <line:692:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:692:18 getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff0944e0 <col:28, col:46> col:46 __lineptr 'char **restrict'
| |-ParmVarDecl 0x555dff094560 <line:693:28, col:47> col:47 __n 'size_t *restrict'
| |-ParmVarDecl 0x555dff0945e0 <col:52, col:56> col:56 __delimiter 'int'
| |-ParmVarDecl 0x555dff094660 <line:694:28, col:45> col:45 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff0947f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:694:74> 4
|-FunctionDecl 0x555dff094ae0 <line:697:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:697:18 getline '__ssize_t (char **restrict, size_t *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff094880 <col:27, col:45> col:45 __lineptr 'char **restrict'
| |-ParmVarDecl 0x555dff094900 <line:698:27, col:46> col:46 __n 'size_t *restrict'
| |-ParmVarDecl 0x555dff094980 <line:699:27, col:44> col:44 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff094ba0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:699:73> 3
|-FunctionDecl 0x555dff094df8 <line:707:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:707:12 fputs 'int (const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff094c30 <col:19, col:42> col:42 __s 'const char *restrict'
| |-ParmVarDecl 0x555dff094cb0 <col:47, col:64> col:64 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff094eb0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:708:16> 2
|-FunctionDecl 0x555dff094fd8 <line:714:1, col:33> col:12 puts 'int (const char *)' extern
| `-ParmVarDecl 0x555dff094f40 <col:18, col:30> col:30 __s 'const char *'
|-FunctionDecl 0x555dff095230 <line:721:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:721:12 ungetc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x555dff0950a0 <col:20, col:24> col:24 __c 'int'
| |-ParmVarDecl 0x555dff095120 <col:29, col:35> col:35 __stream 'FILE *'
| `-NonNullAttr 0x555dff0952e8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:721:58> 2
|-FunctionDecl 0x555dff0956a0 <line:728:15> col:15 implicit fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x555dff0957a8 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x555dff095810 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff095878 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff0958e0 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x555dff095748 <<invalid sloc>> Implicit 640
|-FunctionDecl 0x555dff095968 prev 0x555dff0956a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:728:15 fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x555dff095370 <col:22, col:39> col:39 __ptr 'void *restrict'
| |-ParmVarDecl 0x555dff0953e8 <col:46, col:53> col:53 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff095460 <line:729:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff0954e0 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-BuiltinAttr 0x555dff095aa8 <<invalid sloc>> Inherited Implicit 640
| `-NonNullAttr 0x555dff095a30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:730:15> 4
|-FunctionDecl 0x555dff095e20 <line:735:15> col:15 implicit fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x555dff095f28 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x555dff095f90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff095ff8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x555dff096060 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x555dff095ec8 <<invalid sloc>> Implicit 651
|-FunctionDecl 0x555dff0960e8 prev 0x555dff095e20 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:735:15 fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x555dff095af0 <col:23, col:46> col:46 __ptr 'const void *restrict'
| |-ParmVarDecl 0x555dff095b68 <col:53, col:60> col:60 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff095be0 <line:736:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff095c60 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-BuiltinAttr 0x555dff119a00 <<invalid sloc>> Inherited Implicit 651
| `-NonNullAttr 0x555dff0961b0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:736:55> 4
|-FunctionDecl 0x555dff119c80 <line:756:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:756:15 fread_unlocked 'size_t (void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff119a48 <col:31, col:48> col:48 __ptr 'void *restrict'
| |-ParmVarDecl 0x555dff119ac0 <col:55, col:62> col:62 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff119b38 <line:757:10, col:17> col:17 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff119bb8 <col:22, col:39> col:39 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff119d48 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:758:16> 4
|-FunctionDecl 0x555dff11a008 <line:759:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:759:15 fwrite_unlocked 'size_t (const void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x555dff119dd0 <col:32, col:55> col:55 __ptr 'const void *restrict'
| |-ParmVarDecl 0x555dff119e48 <col:62, col:69> col:69 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff119ec0 <line:760:11, col:18> col:18 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x555dff119f40 <col:23, col:40> col:40 __stream 'FILE *restrict'
| `-NonNullAttr 0x555dff11a0d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:761:16> 4
|-FunctionDecl 0x555dff11a3c8 <line:769:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:769:12 fseek 'int (FILE *, long, int)' extern
| |-ParmVarDecl 0x555dff11a160 <col:19, col:25> col:25 __stream 'FILE *'
| |-ParmVarDecl 0x555dff11a1e0 <col:35, col:44> col:44 __off 'long'
| |-ParmVarDecl 0x555dff11a260 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x555dff11a488 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:770:16> 1
|-FunctionDecl 0x555dff11a648 <line:775:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:775:17 ftell 'long (FILE *)' extern
| |-ParmVarDecl 0x555dff11a510 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x555dff11a6f8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:775:59> 1
|-FunctionDecl 0x555dff11a830 <line:780:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:780:13 rewind 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff11a780 <col:21, col:27> col:27 __stream 'FILE *'
| `-NonNullAttr 0x555dff11a8e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:780:50> 1
|-FunctionDecl 0x555dff11aba8 <line:793:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:793:12 fseeko 'int (FILE *, __off_t, int)' extern
| |-ParmVarDecl 0x555dff11a970 <col:20, col:26> col:26 __stream 'FILE *'
| |-ParmVarDecl 0x555dff11aa10 <col:36, col:44> col:44 __off '__off_t':'long'
| |-ParmVarDecl 0x555dff11aa90 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x555dff11ac68 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:794:16> 1
|-FunctionDecl 0x555dff11ade0 <line:799:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:799:16 ftello '__off_t (FILE *)' extern
| |-ParmVarDecl 0x555dff11acf0 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x555dff11ae90 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:799:59> 1
|-FunctionDecl 0x555dff11b1a8 <line:819:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:819:12 fgetpos 'int (FILE *restrict, fpos_t *restrict)' extern
| |-ParmVarDecl 0x555dff11af20 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x555dff11b068 <col:48, col:67> col:67 __pos 'fpos_t *restrict'
| `-NonNullAttr 0x555dff11b260 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:820:16> 1
|-FunctionDecl 0x555dff11b518 <line:825:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:825:12 fsetpos 'int (FILE *, const fpos_t *)' extern
| |-ParmVarDecl 0x555dff11b2f0 <col:21, col:27> col:27 __stream 'FILE *'
| |-ParmVarDecl 0x555dff11b3d8 <col:37, col:51> col:51 __pos 'const fpos_t *'
| `-NonNullAttr 0x555dff11b5d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:825:71> 1
|-FunctionDecl 0x555dff11b710 <line:850:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:850:13 clearerr 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff11b660 <col:23, col:29> col:29 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11b7c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11b818 <line:555:57, /usr/include/stdio.h:850:60> 1
|-FunctionDecl 0x555dff11b928 <line:852:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:852:12 feof 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11b870 <col:18, col:24> col:24 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11b9d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11ba50 <line:555:57, /usr/include/stdio.h:852:61> 1
|-FunctionDecl 0x555dff11bb68 <line:854:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:854:12 ferror 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11bab0 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11bc18 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11bc70 <line:555:57, /usr/include/stdio.h:854:63> 1
|-FunctionDecl 0x555dff11bd80 <line:858:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:858:13 clearerr_unlocked 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff11bcd0 <col:32, col:38> col:38 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11be30 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11be88 <line:555:57, /usr/include/stdio.h:858:69> 1
|-FunctionDecl 0x555dff11bf98 <line:859:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:859:12 feof_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11bee0 <col:27, col:33> col:33 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11c048 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11c0a0 <line:555:57, /usr/include/stdio.h:859:70> 1
|-FunctionDecl 0x555dff11c1b8 <line:860:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:860:12 ferror_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11c100 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11c268 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11c2c0 <line:555:57, /usr/include/stdio.h:860:72> 1
|-FunctionDecl 0x555dff11c3f0 <line:868:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdio.h:868:13 perror 'void (const char *)' extern
| |-ParmVarDecl 0x555dff11c320 <col:21, col:33> col:33 __s 'const char *'
| `-ColdAttr 0x555dff11c4a0 </usr/include/sys/cdefs.h:102:34>
|-FunctionDecl 0x555dff11c5c8 </usr/include/stdio.h:873:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:873:12 fileno 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11c510 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11c678 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11c6d0 <line:555:57, /usr/include/stdio.h:873:63> 1
|-FunctionDecl 0x555dff11c7e8 <line:878:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:878:12 fileno_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11c730 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11c898 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11c8f0 <line:555:57, /usr/include/stdio.h:878:72> 1
|-FunctionDecl 0x555dff11ca30 <line:887:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:887:12 pclose 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11c950 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x555dff11cae0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:887:49> 1
|-FunctionDecl 0x555dff11ccd8 <line:893:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:893:14 popen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x555dff11cb70 <col:21, col:33> col:33 __command 'const char *'
| |-ParmVarDecl 0x555dff11cbf0 <col:44, col:56> col:56 __modes 'const char *'
| `-RestrictAttr 0x555dff11cd90 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x555dff11cea8 </usr/include/stdio.h:901:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:901:14 ctermid 'char *(char *)' extern
| |-ParmVarDecl 0x555dff11ce10 <col:23, col:29> col:29 __s 'char *'
| `-NoThrowAttr 0x555dff11cf58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x555dff11d078 </usr/include/stdio.h:931:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:931:13 flockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff11cfc8 <col:24, col:30> col:30 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11d128 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11d180 <line:555:57, /usr/include/stdio.h:931:61> 1
|-FunctionDecl 0x555dff11d298 <line:935:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:935:12 ftrylockfile 'int (FILE *)' extern
| |-ParmVarDecl 0x555dff11d1e0 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11d348 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11d3a0 <line:555:57, /usr/include/stdio.h:935:69> 1
|-FunctionDecl 0x555dff11d4b0 <line:938:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:938:13 funlockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x555dff11d400 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x555dff11d560 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x555dff11d5b8 <line:555:57, /usr/include/stdio.h:938:63> 1
|-FunctionDecl 0x555dff11d6a8 <line:949:1, col:27> col:12 __uflow 'int (FILE *)' extern
| `-ParmVarDecl 0x555dff11d610 <col:21, col:26> col:27 'FILE *'
|-FunctionDecl 0x555dff11d918 <line:950:1, col:35> col:12 __overflow 'int (FILE *, int)' extern
| |-ParmVarDecl 0x555dff11d770 <col:24, col:29> col:30 'FILE *'
| `-ParmVarDecl 0x555dff11d7f0 <col:32> col:35 'int'
|-FunctionDecl 0x555dff11db00 </usr/include/platform_generic.h:42:1, line:46:1> line:43:1 used platform_main_begin 'void (void)' static
| `-CompoundStmt 0x555dff11dba8 <line:44:1, line:46:1>
|-FunctionDecl 0x555dff11ddd0 <line:48:1, line:120:1> line:49:1 used platform_main_end 'void (uint32_t, int)' static
| |-ParmVarDecl 0x555dff11dc30 <col:19, col:28> col:28 used crc 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff11dcb0 <col:33, col:37> col:37 flag 'int'
| `-CompoundStmt 0x555dff11dfd8 <line:50:1, line:120:1>
|   `-CallExpr 0x555dff11df58 <line:56:2, col:32> 'int'
|     |-ImplicitCastExpr 0x555dff11df40 <col:2> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x555dff11de88 <col:2> 'int (const char *, ...)' Function 0x555dff108460 'printf' 'int (const char *, ...)'
|     |-ImplicitCastExpr 0x555dff11dfa8 <col:10> 'const char *' <NoOp>
|     | `-ImplicitCastExpr 0x555dff11df90 <col:10> 'char *' <ArrayToPointerDecay>
|     |   `-StringLiteral 0x555dff11dea8 <col:10> 'char[15]' lvalue "checksum = %X\n"
|     `-ImplicitCastExpr 0x555dff11dfc0 <col:29> 'uint32_t':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x555dff11ded0 <col:29> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff11dc30 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff11e1b0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:25:1> <scratch space>:66:1 safe_unary_minus_func_int8_t_s 'int8_t (int8_t)' static
| |-ParmVarDecl 0x555dff11e060 </usr/include/safe_math.h:14:38, col:45> col:45 used si 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11e2f0 <line:15:1, line:25:1>
|   `-ReturnStmt 0x555dff11e2e0 <line:17:3, line:24:6>
|     `-ImplicitCastExpr 0x555dff11e2c8 <col:5, col:6> 'int8_t':'signed char' <IntegralCast>
|       `-UnaryOperator 0x555dff11e2b0 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x555dff11e298 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff11e280 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x555dff11e260 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e060 'si' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11e4e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:39:1> <scratch space>:67:1 safe_add_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x555dff11e318 </usr/include/safe_math.h:28:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11e390 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11e6a8 <line:29:1, line:39:1>
|   `-ReturnStmt 0x555dff11e698 <line:31:3, line:38:15>
|     `-ImplicitCastExpr 0x555dff11e680 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x555dff11e660 <col:5, col:15> 'int'
|         `-BinaryOperator 0x555dff11e640 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x555dff11e5f8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff11e5e0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff11e5a0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e318 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x555dff11e628 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff11e610 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x555dff11e5c0 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e390 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11e7e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:53:1> <scratch space>:68:1 safe_sub_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x555dff11e6d0 </usr/include/safe_math.h:42:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11e748 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11e9a8 <line:43:1, line:53:1>
|   `-ReturnStmt 0x555dff11e998 <line:45:3, line:52:15>
|     `-ImplicitCastExpr 0x555dff11e980 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x555dff11e960 <col:5, col:15> 'int'
|         `-BinaryOperator 0x555dff11e940 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x555dff11e8f8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff11e8e0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff11e8a0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e6d0 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x555dff11e928 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff11e910 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x555dff11e8c0 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e748 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11eb00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:67:1> <scratch space>:69:1 safe_mul_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x555dff11e9d0 </usr/include/safe_math.h:56:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11ea60 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11eca0 <line:57:1, line:67:1>
|   `-ReturnStmt 0x555dff11ec90 <line:59:3, line:66:11>
|     `-ImplicitCastExpr 0x555dff11ec78 <col:5, col:11> 'int8_t':'signed char' <IntegralCast>
|       `-BinaryOperator 0x555dff11ec58 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x555dff11ec10 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff11ebf8 <col:5> 'int8_t':'signed char' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff11ebb8 <col:5> 'int8_t':'signed char' lvalue ParmVar 0x555dff11e9d0 'si1' 'int8_t':'signed char'
|         `-ImplicitCastExpr 0x555dff11ec40 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff11ec28 <col:11> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x555dff11ebd8 <col:11> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ea60 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11ede0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:79:1> <scratch space>:70:1 safe_mod_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x555dff11ecc8 </usr/include/safe_math.h:70:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11ed40 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11f360 <line:71:1, line:79:1>
|   `-ReturnStmt 0x555dff11f350 <line:73:3, line:78:15>
|     `-ImplicitCastExpr 0x555dff11f338 <line:75:5, line:78:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff11f308 <line:75:5, line:78:15> 'int'
|         |-ParenExpr 0x555dff11f178 <line:75:5, col:56> 'int'
|         | `-BinaryOperator 0x555dff11f158 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x555dff11ef28 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff11ef08 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x555dff11eef0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff11eed8 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff11ee98 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ed40 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x555dff11eeb8 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff11f138 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x555dff11f118 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x555dff11f010 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x555dff11eff0 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x555dff11efd8 </usr/include/safe_math.h:75:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x555dff11efc0 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x555dff11ef48 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ecc8 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x555dff11efa0 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x555dff11ef88 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x555dff11ef68 <col:22> 'int' 128
|         |       `-ParenExpr 0x555dff11f0f8 </usr/include/safe_math.h:75:42, col:54> 'int'
|         |         `-BinaryOperator 0x555dff11f0d8 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x555dff11f0c0 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x555dff11f0a8 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x555dff11f030 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ed40 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x555dff11f088 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x555dff11f070 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x555dff11f050 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x555dff11f2f0 <line:76:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff11f2d8 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff11f1d8 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff11f1b8 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff11f198 </usr/include/safe_math.h:76:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ecc8 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff11f2b8 <line:78:5, col:15> 'int'
|           `-BinaryOperator 0x555dff11f298 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x555dff11f250 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff11f238 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff11f1f8 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ecc8 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x555dff11f280 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff11f268 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff11f218 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x555dff11ed40 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11f4a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:91:1> <scratch space>:71:1 safe_div_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x555dff11f388 </usr/include/safe_math.h:82:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11f400 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x555dff11fa20 <line:83:1, line:91:1>
|   `-ReturnStmt 0x555dff11fa10 <line:85:3, line:90:15>
|     `-ImplicitCastExpr 0x555dff11f9f8 <line:87:5, line:90:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff11f9c8 <line:87:5, line:90:15> 'int'
|         |-ParenExpr 0x555dff11f838 <line:87:5, col:56> 'int'
|         | `-BinaryOperator 0x555dff11f818 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x555dff11f5e8 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff11f5c8 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x555dff11f5b0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff11f598 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff11f558 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f400 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x555dff11f578 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff11f7f8 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x555dff11f7d8 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x555dff11f6d0 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x555dff11f6b0 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x555dff11f698 </usr/include/safe_math.h:87:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x555dff11f680 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x555dff11f608 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f388 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x555dff11f660 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x555dff11f648 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x555dff11f628 <col:22> 'int' 128
|         |       `-ParenExpr 0x555dff11f7b8 </usr/include/safe_math.h:87:42, col:54> 'int'
|         |         `-BinaryOperator 0x555dff11f798 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x555dff11f780 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x555dff11f768 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x555dff11f6f0 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f400 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x555dff11f748 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x555dff11f730 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x555dff11f710 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x555dff11f9b0 <line:88:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff11f998 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff11f898 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff11f878 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff11f858 </usr/include/safe_math.h:88:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f388 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff11f978 <line:90:5, col:15> 'int'
|           `-BinaryOperator 0x555dff11f958 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x555dff11f910 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff11f8f8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff11f8b8 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f388 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x555dff11f940 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff11f928 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff11f8d8 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x555dff11f400 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x555dff11fc38 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:103:1> <scratch space>:72:1 safe_lshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x555dff11fa60 </usr/include/safe_math.h:94:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff11fae0 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x555dff1203c8 <line:95:1, line:103:1>
|   `-ReturnStmt 0x555dff1203b8 <line:97:3, line:102:26>
|     `-ImplicitCastExpr 0x555dff1203a0 <line:99:5, line:102:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff120370 <line:99:5, line:102:26> 'int'
|         |-ParenExpr 0x555dff120198 <line:99:5, col:101> 'int'
|         | `-BinaryOperator 0x555dff120178 <col:6, col:100> 'int' '||'
|         |   |-BinaryOperator 0x555dff11ffb0 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x555dff11fe98 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x555dff11fd80 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x555dff11fd60 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x555dff11fd48 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x555dff11fd30 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x555dff11fcf0 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff11fa60 'left' 'int8_t':'signed char'
|         |   | | |   `-IntegerLiteral 0x555dff11fd10 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x555dff11fe78 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x555dff11fe58 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x555dff11fe18 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x555dff11fdf0 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x555dff11fdd8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x555dff11fda0 <col:27> 'int' lvalue ParmVar 0x555dff11fae0 'right' 'int'
|         |   | |     `-IntegerLiteral 0x555dff11fe38 <col:36> 'int' 0
|         |   | `-ParenExpr 0x555dff11ff90 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x555dff11ff70 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x555dff11ff30 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff11ff08 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff11fef0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff11feb8 <col:49> 'int' lvalue ParmVar 0x555dff11fae0 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff11ff50 <col:59> 'int' 32
|         |   `-ParenExpr 0x555dff120158 <col:66, col:100> 'int'
|         |     `-BinaryOperator 0x555dff120138 <col:67, col:99> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff120120 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff120108 <col:67> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff11ffd0 <col:67> 'int8_t':'signed char' lvalue ParmVar 0x555dff11fa60 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x555dff1200e8 <col:74, col:99> 'int'
|         |         `-BinaryOperator 0x555dff1200c8 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:99:98> 'int' '>>'
|         |           |-ParenExpr 0x555dff120010 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x555dff11fff0 <col:21> 'int' 127
|         |           `-ParenExpr 0x555dff1200a8 </usr/include/safe_math.h:99:87, col:98> 'int'
|         |             `-CStyleCastExpr 0x555dff120080 <col:88, col:93> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff120068 <col:93> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff120030 <col:93> 'int' lvalue ParmVar 0x555dff11fae0 'right' 'int'
|         |-ImplicitCastExpr 0x555dff120358 <line:100:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff120340 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff1201f8 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff1201d8 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff1201b8 </usr/include/safe_math.h:100:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff11fa60 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff120320 <line:102:5, col:26> 'int'
|           `-BinaryOperator 0x555dff120300 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff1202e8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff1202d0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff120218 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff11fa60 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x555dff1202b0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff120288 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff120270 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff120238 <col:20> 'int' lvalue ParmVar 0x555dff11fae0 'right' 'int'
|-FunctionDecl 0x555dff1205c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:115:1> <scratch space>:73:1 safe_lshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1203f0 </usr/include/safe_math.h:106:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff120470 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x555dff121c90 <line:107:1, line:115:1>
|   `-ReturnStmt 0x555dff121c80 <line:109:3, line:114:35>
|     `-ImplicitCastExpr 0x555dff121c68 <line:111:5, line:114:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff121c38 <line:111:5, line:114:35> 'int'
|         |-ParenExpr 0x555dff120a28 <line:111:5, col:97> 'int'
|         | `-BinaryOperator 0x555dff120a08 <col:6, col:96> 'int' '||'
|         |   |-BinaryOperator 0x555dff120840 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x555dff120710 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x555dff1206f0 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x555dff1206d8 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x555dff1206c0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x555dff120680 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff1203f0 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x555dff1206a0 <col:14> 'int' 0
|         |   | `-ParenExpr 0x555dff120820 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x555dff120800 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x555dff1207a8 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x555dff120780 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff120768 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff120730 <col:36> 'unsigned int' lvalue ParmVar 0x555dff120470 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x555dff1207e8 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x555dff1207c8 <col:46> 'int' 32
|         |   `-ParenExpr 0x555dff1209e8 <col:53, col:96> 'int'
|         |     `-BinaryOperator 0x555dff1209c8 <col:54, col:95> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff1209b0 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff120998 <col:54> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff120860 <col:54> 'int8_t':'signed char' lvalue ParmVar 0x555dff1203f0 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x555dff120978 <col:61, col:95> 'int'
|         |         `-BinaryOperator 0x555dff120958 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:111:94> 'int' '>>'
|         |           |-ParenExpr 0x555dff1208a0 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x555dff120880 <col:21> 'int' 127
|         |           `-ParenExpr 0x555dff120938 </usr/include/safe_math.h:111:74, col:94> 'unsigned int'
|         |             `-CStyleCastExpr 0x555dff120910 <col:75, col:89> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff1208f8 <col:89> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff1208c0 <col:89> 'unsigned int' lvalue ParmVar 0x555dff120470 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x555dff121c20 <line:112:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff121c08 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff121ac0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff121aa0 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff121a80 </usr/include/safe_math.h:112:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff1203f0 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff121be8 <line:114:5, col:35> 'int'
|           `-BinaryOperator 0x555dff121bc8 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff121bb0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff121b98 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff121ae0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff1203f0 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x555dff121b78 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff121b50 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff121b38 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff121b00 <col:29> 'unsigned int' lvalue ParmVar 0x555dff120470 'right' 'unsigned int'
|-FunctionDecl 0x555dff121dd8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:127:1> <scratch space>:74:1 safe_rshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x555dff121cb8 </usr/include/safe_math.h:118:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff121d38 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x555dff1223a0 <line:119:1, line:127:1>
|   `-ReturnStmt 0x555dff122390 <line:121:3, line:126:26>
|     `-ImplicitCastExpr 0x555dff122378 <line:123:5, line:126:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff122348 <line:123:5, line:126:26> 'int'
|         |-ParenExpr 0x555dff122170 <line:123:5, col:62> 'int'
|         | `-BinaryOperator 0x555dff122150 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x555dff122038 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x555dff121f20 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x555dff121f00 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x555dff121ee8 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x555dff121ed0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x555dff121e90 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff121cb8 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x555dff121eb0 <col:14> 'int' 0
|         |   | `-ParenExpr 0x555dff122018 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x555dff121ff8 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x555dff121fb8 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff121f90 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff121f78 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff121f40 <col:27> 'int' lvalue ParmVar 0x555dff121d38 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff121fd8 <col:36> 'int' 0
|         |   `-ParenExpr 0x555dff122130 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x555dff122110 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x555dff1220d0 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x555dff1220a8 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff122090 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff122058 <col:49> 'int' lvalue ParmVar 0x555dff121d38 'right' 'int'
|         |       `-IntegerLiteral 0x555dff1220f0 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x555dff122330 <line:124:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff122318 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff1221d0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff1221b0 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff122190 </usr/include/safe_math.h:124:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff121cb8 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff1222f8 <line:126:5, col:26> 'int'
|           `-BinaryOperator 0x555dff1222d8 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff1222c0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff1222a8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff1221f0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff121cb8 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x555dff122288 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff122260 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff122248 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff122210 <col:20> 'int' lvalue ParmVar 0x555dff121d38 'right' 'int'
|-FunctionDecl 0x555dff1224e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:139:1> <scratch space>:75:1 safe_rshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1223c8 </usr/include/safe_math.h:130:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x555dff122448 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x555dff1229b0 <line:131:1, line:139:1>
|   `-ReturnStmt 0x555dff1229a0 <line:133:3, line:138:35>
|     `-ImplicitCastExpr 0x555dff122988 <line:135:5, line:138:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x555dff122958 <line:135:5, line:138:35> 'int'
|         |-ParenExpr 0x555dff122780 <line:135:5, col:49> 'int'
|         | `-BinaryOperator 0x555dff122760 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x555dff122630 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff122610 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x555dff1225f8 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff1225e0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff1225a0 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x555dff1223c8 'left' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x555dff1225c0 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff122740 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x555dff122720 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x555dff1226c8 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x555dff1226a0 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff122688 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff122650 <col:36> 'unsigned int' lvalue ParmVar 0x555dff122448 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x555dff122708 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x555dff1226e8 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x555dff122940 <line:136:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff122928 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff1227e0 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x555dff1227c0 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x555dff1227a0 </usr/include/safe_math.h:136:16> 'int8_t':'signed char' lvalue ParmVar 0x555dff1223c8 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x555dff122908 <line:138:5, col:35> 'int'
|           `-BinaryOperator 0x555dff1228e8 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff1228d0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff1228b8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff122800 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x555dff1223c8 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x555dff122898 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff122870 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff122858 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff122820 <col:29> 'unsigned int' lvalue ParmVar 0x555dff122448 'right' 'unsigned int'
|-FunctionDecl 0x555dff122be0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:155:1> <scratch space>:76:1 safe_unary_minus_func_int16_t_s 'int16_t (int16_t)' static
| |-ParmVarDecl 0x555dff122a90 </usr/include/safe_math.h:144:39, col:47> col:47 used si 'int16_t':'short'
| `-CompoundStmt 0x555dff122d20 <line:145:1, line:155:1>
|   `-ReturnStmt 0x555dff122d10 <line:147:3, line:154:6>
|     `-ImplicitCastExpr 0x555dff122cf8 <col:5, col:6> 'int16_t':'short' <IntegralCast>
|       `-UnaryOperator 0x555dff122ce0 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x555dff122cc8 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff122cb0 <col:6> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x555dff122c90 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff122a90 'si' 'int16_t':'short'
|-FunctionDecl 0x555dff122f18 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:169:1> <scratch space>:77:1 safe_add_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x555dff122d48 </usr/include/safe_math.h:158:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x555dff122dc0 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x555dff1230d8 <line:159:1, line:169:1>
|   `-ReturnStmt 0x555dff1230c8 <line:161:3, line:168:15>
|     `-ImplicitCastExpr 0x555dff1230b0 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x555dff123090 <col:5, col:15> 'int'
|         `-BinaryOperator 0x555dff123070 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x555dff123028 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff123010 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff122fd0 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff122d48 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x555dff123058 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff123040 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x555dff122ff0 <col:12> 'int16_t':'short' lvalue ParmVar 0x555dff122dc0 'si2' 'int16_t':'short'
|-FunctionDecl 0x555dff123218 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:183:1> <scratch space>:78:1 safe_sub_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x555dff123100 </usr/include/safe_math.h:172:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x555dff123178 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x555dff1233d8 <line:173:1, line:183:1>
|   `-ReturnStmt 0x555dff1233c8 <line:175:3, line:182:15>
|     `-ImplicitCastExpr 0x555dff1233b0 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x555dff123390 <col:5, col:15> 'int'
|         `-BinaryOperator 0x555dff123370 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x555dff123328 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff123310 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff1232d0 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff123100 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x555dff123358 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff123340 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x555dff1232f0 <col:12> 'int16_t':'short' lvalue ParmVar 0x555dff123178 'si2' 'int16_t':'short'
|-FunctionDecl 0x555dff123518 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:197:1> <scratch space>:79:1 safe_mul_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x555dff123400 </usr/include/safe_math.h:186:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x555dff123478 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x555dff1236b8 <line:187:1, line:197:1>
|   `-ReturnStmt 0x555dff1236a8 <line:189:3, line:196:11>
|     `-ImplicitCastExpr 0x555dff123690 <col:5, col:11> 'int16_t':'short' <IntegralCast>
|       `-BinaryOperator 0x555dff123670 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x555dff123628 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff123610 <col:5> 'int16_t':'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff1235d0 <col:5> 'int16_t':'short' lvalue ParmVar 0x555dff123400 'si1' 'int16_t':'short'
|         `-ImplicitCastExpr 0x555dff123658 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff123640 <col:11> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x555dff1235f0 <col:11> 'int16_t':'short' lvalue ParmVar 0x555dff123478 'si2' 'int16_t':'short'
|-FunctionDecl 0x555dff1237f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:209:1> <scratch space>:80:1 safe_mod_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x555dff1236e0 </usr/include/safe_math.h:200:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x555dff123758 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x555dff01b6b0 <line:201:1, line:209:1>
|   `-ReturnStmt 0x555dff01b6a0 <line:203:3, line:208:15>
|     `-ImplicitCastExpr 0x555dff01b688 <line:205:5, line:208:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff01b658 <line:205:5, line:208:15> 'int'
|         |-ParenExpr 0x555dff01b4c8 <line:205:5, col:57> 'int'
|         | `-BinaryOperator 0x555dff01b4a8 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x555dff123940 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff123920 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x555dff123908 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff1238f0 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff1238b0 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff123758 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x555dff1238d0 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff01b488 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x555dff01b468 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x555dff123a68 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x555dff123a48 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x555dff123a30 </usr/include/safe_math.h:205:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x555dff123a18 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x555dff123960 <col:22> 'int16_t':'short' lvalue ParmVar 0x555dff1236e0 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x555dff1239f8 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x555dff1239d8 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x555dff1239a0 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x555dff123980 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x555dff1239b8 <col:29> 'int' 1
|         |       `-ParenExpr 0x555dff01b448 </usr/include/safe_math.h:205:43, col:55> 'int'
|         |         `-BinaryOperator 0x555dff01b428 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x555dff01b410 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x555dff01b3f8 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x555dff01b380 <col:44> 'int16_t':'short' lvalue ParmVar 0x555dff123758 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x555dff01b3d8 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x555dff01b3c0 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x555dff01b3a0 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x555dff01b640 <line:206:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff01b628 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff01b528 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff01b508 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff01b4e8 </usr/include/safe_math.h:206:16> 'int16_t':'short' lvalue ParmVar 0x555dff1236e0 'si1' 'int16_t':'short'
|         `-ParenExpr 0x555dff01b608 <line:208:5, col:15> 'int'
|           `-BinaryOperator 0x555dff01b5e8 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x555dff01b5a0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff01b588 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff01b548 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff1236e0 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x555dff01b5d0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff01b5b8 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff01b568 <col:12> 'int16_t':'short' lvalue ParmVar 0x555dff123758 'si2' 'int16_t':'short'
|-FunctionDecl 0x555dff01b7f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:221:1> <scratch space>:81:1 safe_div_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x555dff01b6d8 </usr/include/safe_math.h:212:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x555dff01b750 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x555dff01bdb0 <line:213:1, line:221:1>
|   `-ReturnStmt 0x555dff01bda0 <line:215:3, line:220:15>
|     `-ImplicitCastExpr 0x555dff01bd88 <line:217:5, line:220:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff01bd58 <line:217:5, line:220:15> 'int'
|         |-ParenExpr 0x555dff01bbc8 <line:217:5, col:57> 'int'
|         | `-BinaryOperator 0x555dff01bba8 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x555dff01b938 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff01b918 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x555dff01b900 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff01b8e8 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff01b8a8 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff01b750 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x555dff01b8c8 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff01bb88 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x555dff01bb68 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x555dff01ba60 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x555dff01ba40 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x555dff01ba28 </usr/include/safe_math.h:217:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x555dff01ba10 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x555dff01b958 <col:22> 'int16_t':'short' lvalue ParmVar 0x555dff01b6d8 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x555dff01b9f0 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x555dff01b9d0 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x555dff01b998 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x555dff01b978 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x555dff01b9b0 <col:29> 'int' 1
|         |       `-ParenExpr 0x555dff01bb48 </usr/include/safe_math.h:217:43, col:55> 'int'
|         |         `-BinaryOperator 0x555dff01bb28 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x555dff01bb10 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x555dff01baf8 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x555dff01ba80 <col:44> 'int16_t':'short' lvalue ParmVar 0x555dff01b750 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x555dff01bad8 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x555dff01bac0 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x555dff01baa0 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x555dff01bd40 <line:218:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff01bd28 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff01bc28 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff01bc08 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff01bbe8 </usr/include/safe_math.h:218:16> 'int16_t':'short' lvalue ParmVar 0x555dff01b6d8 'si1' 'int16_t':'short'
|         `-ParenExpr 0x555dff01bd08 <line:220:5, col:15> 'int'
|           `-BinaryOperator 0x555dff01bce8 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x555dff01bca0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff01bc88 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff01bc48 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff01b6d8 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x555dff01bcd0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff01bcb8 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff01bc68 <col:12> 'int16_t':'short' lvalue ParmVar 0x555dff01b750 'si2' 'int16_t':'short'
|-FunctionDecl 0x555dff01bfa8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:233:1> <scratch space>:82:1 safe_lshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x555dff01bdd8 </usr/include/safe_math.h:224:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x555dff01be58 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff127e68 <line:225:1, line:233:1>
|   `-ReturnStmt 0x555dff127e58 <line:227:3, line:232:26>
|     `-ImplicitCastExpr 0x555dff127e40 <line:229:5, line:232:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff127e10 <line:229:5, line:232:26> 'int'
|         |-ParenExpr 0x555dff127c38 <line:229:5, col:102> 'int'
|         | `-BinaryOperator 0x555dff127c18 <col:6, col:101> 'int' '||'
|         |   |-BinaryOperator 0x555dff01c320 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x555dff01c208 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x555dff01c0f0 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x555dff01c0d0 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x555dff01c0b8 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x555dff01c0a0 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x555dff01c060 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff01bdd8 'left' 'int16_t':'short'
|         |   | | |   `-IntegerLiteral 0x555dff01c080 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x555dff01c1e8 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x555dff01c1c8 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x555dff01c188 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x555dff01c160 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x555dff01c148 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x555dff01c110 <col:27> 'int' lvalue ParmVar 0x555dff01be58 'right' 'int'
|         |   | |     `-IntegerLiteral 0x555dff01c1a8 <col:36> 'int' 0
|         |   | `-ParenExpr 0x555dff01c300 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x555dff01c2e0 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x555dff01c2a0 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff01c278 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff01c260 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff01c228 <col:49> 'int' lvalue ParmVar 0x555dff01be58 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff01c2c0 <col:59> 'int' 32
|         |   `-ParenExpr 0x555dff127bf8 <col:66, col:101> 'int'
|         |     `-BinaryOperator 0x555dff127bd8 <col:67, col:100> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff127bc0 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff127ba8 <col:67> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff01c340 <col:67> 'int16_t':'short' lvalue ParmVar 0x555dff01bdd8 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x555dff127b88 <col:74, col:100> 'int'
|         |         `-BinaryOperator 0x555dff127b68 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:229:99> 'int' '>>'
|         |           |-ParenExpr 0x555dff127ab0 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x555dff01c360 <col:22> 'int' 32767
|         |           `-ParenExpr 0x555dff127b48 </usr/include/safe_math.h:229:88, col:99> 'int'
|         |             `-CStyleCastExpr 0x555dff127b20 <col:89, col:94> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff127b08 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff127ad0 <col:94> 'int' lvalue ParmVar 0x555dff01be58 'right' 'int'
|         |-ImplicitCastExpr 0x555dff127df8 <line:230:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff127de0 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff127c98 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff127c78 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff127c58 </usr/include/safe_math.h:230:16> 'int16_t':'short' lvalue ParmVar 0x555dff01bdd8 'left' 'int16_t':'short'
|         `-ParenExpr 0x555dff127dc0 <line:232:5, col:26> 'int'
|           `-BinaryOperator 0x555dff127da0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff127d88 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff127d70 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff127cb8 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff01bdd8 'left' 'int16_t':'short'
|             `-ParenExpr 0x555dff127d50 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff127d28 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff127d10 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff127cd8 <col:20> 'int' lvalue ParmVar 0x555dff01be58 'right' 'int'
|-FunctionDecl 0x555dff128068 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:245:1> <scratch space>:83:1 safe_lshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x555dff127e90 </usr/include/safe_math.h:236:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x555dff127f10 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff1286f8 <line:237:1, line:245:1>
|   `-ReturnStmt 0x555dff1286e8 <line:239:3, line:244:35>
|     `-ImplicitCastExpr 0x555dff1286d0 <line:241:5, line:244:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff1286a0 <line:241:5, line:244:35> 'int'
|         |-ParenExpr 0x555dff1284c8 <line:241:5, col:98> 'int'
|         | `-BinaryOperator 0x555dff1284a8 <col:6, col:97> 'int' '||'
|         |   |-BinaryOperator 0x555dff1282e0 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x555dff1281b0 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x555dff128190 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x555dff128178 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x555dff128160 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x555dff128120 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff127e90 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x555dff128140 <col:14> 'int' 0
|         |   | `-ParenExpr 0x555dff1282c0 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x555dff1282a0 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x555dff128248 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x555dff128220 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff128208 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff1281d0 <col:36> 'unsigned int' lvalue ParmVar 0x555dff127f10 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x555dff128288 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x555dff128268 <col:46> 'int' 32
|         |   `-ParenExpr 0x555dff128488 <col:53, col:97> 'int'
|         |     `-BinaryOperator 0x555dff128468 <col:54, col:96> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff128450 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff128438 <col:54> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff128300 <col:54> 'int16_t':'short' lvalue ParmVar 0x555dff127e90 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x555dff128418 <col:61, col:96> 'int'
|         |         `-BinaryOperator 0x555dff1283f8 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:241:95> 'int' '>>'
|         |           |-ParenExpr 0x555dff128340 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x555dff128320 <col:22> 'int' 32767
|         |           `-ParenExpr 0x555dff1283d8 </usr/include/safe_math.h:241:75, col:95> 'unsigned int'
|         |             `-CStyleCastExpr 0x555dff1283b0 <col:76, col:90> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff128398 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff128360 <col:90> 'unsigned int' lvalue ParmVar 0x555dff127f10 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x555dff128688 <line:242:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff128670 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff128528 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff128508 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff1284e8 </usr/include/safe_math.h:242:16> 'int16_t':'short' lvalue ParmVar 0x555dff127e90 'left' 'int16_t':'short'
|         `-ParenExpr 0x555dff128650 <line:244:5, col:35> 'int'
|           `-BinaryOperator 0x555dff128630 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff128618 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff128600 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff128548 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff127e90 'left' 'int16_t':'short'
|             `-ParenExpr 0x555dff1285e0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff1285b8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff1285a0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff128568 <col:29> 'unsigned int' lvalue ParmVar 0x555dff127f10 'right' 'unsigned int'
|-FunctionDecl 0x555dff128840 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:257:1> <scratch space>:84:1 safe_rshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x555dff128720 </usr/include/safe_math.h:248:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x555dff1287a0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff128e08 <line:249:1, line:257:1>
|   `-ReturnStmt 0x555dff128df8 <line:251:3, line:256:26>
|     `-ImplicitCastExpr 0x555dff128de0 <line:253:5, line:256:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff128db0 <line:253:5, line:256:26> 'int'
|         |-ParenExpr 0x555dff128bd8 <line:253:5, col:62> 'int'
|         | `-BinaryOperator 0x555dff128bb8 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x555dff128aa0 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x555dff128988 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x555dff128968 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x555dff128950 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x555dff128938 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x555dff1288f8 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff128720 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x555dff128918 <col:14> 'int' 0
|         |   | `-ParenExpr 0x555dff128a80 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x555dff128a60 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x555dff128a20 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff1289f8 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff1289e0 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff1289a8 <col:27> 'int' lvalue ParmVar 0x555dff1287a0 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff128a40 <col:36> 'int' 0
|         |   `-ParenExpr 0x555dff128b98 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x555dff128b78 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x555dff128b38 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x555dff128b10 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff128af8 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff128ac0 <col:49> 'int' lvalue ParmVar 0x555dff1287a0 'right' 'int'
|         |       `-IntegerLiteral 0x555dff128b58 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x555dff128d98 <line:254:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff128d80 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff128c38 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff128c18 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff128bf8 </usr/include/safe_math.h:254:16> 'int16_t':'short' lvalue ParmVar 0x555dff128720 'left' 'int16_t':'short'
|         `-ParenExpr 0x555dff128d60 <line:256:5, col:26> 'int'
|           `-BinaryOperator 0x555dff128d40 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff128d28 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff128d10 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff128c58 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff128720 'left' 'int16_t':'short'
|             `-ParenExpr 0x555dff128cf0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff128cc8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff128cb0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff128c78 <col:20> 'int' lvalue ParmVar 0x555dff1287a0 'right' 'int'
|-FunctionDecl 0x555dff128f50 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:269:1> <scratch space>:85:1 safe_rshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x555dff128e30 </usr/include/safe_math.h:260:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x555dff128eb0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff129418 <line:261:1, line:269:1>
|   `-ReturnStmt 0x555dff129408 <line:263:3, line:268:35>
|     `-ImplicitCastExpr 0x555dff1293f0 <line:265:5, line:268:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x555dff1293c0 <line:265:5, line:268:35> 'int'
|         |-ParenExpr 0x555dff1291e8 <line:265:5, col:49> 'int'
|         | `-BinaryOperator 0x555dff1291c8 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x555dff129098 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x555dff129078 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x555dff129060 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x555dff129048 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x555dff129008 <col:7> 'int16_t':'short' lvalue ParmVar 0x555dff128e30 'left' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x555dff129028 <col:14> 'int' 0
|         |   `-ParenExpr 0x555dff1291a8 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x555dff129188 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x555dff129130 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x555dff129108 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff1290f0 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff1290b8 <col:36> 'unsigned int' lvalue ParmVar 0x555dff128eb0 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x555dff129170 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x555dff129150 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x555dff1293a8 <line:266:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff129390 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff129248 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x555dff129228 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x555dff129208 </usr/include/safe_math.h:266:16> 'int16_t':'short' lvalue ParmVar 0x555dff128e30 'left' 'int16_t':'short'
|         `-ParenExpr 0x555dff129370 <line:268:5, col:35> 'int'
|           `-BinaryOperator 0x555dff129350 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff129338 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff129320 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff129268 <col:6> 'int16_t':'short' lvalue ParmVar 0x555dff128e30 'left' 'int16_t':'short'
|             `-ParenExpr 0x555dff129300 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff1292d8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff1292c0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff129288 <col:29> 'unsigned int' lvalue ParmVar 0x555dff128eb0 'right' 'unsigned int'
|-FunctionDecl 0x555dff1295b0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:285:1> <scratch space>:86:1 safe_unary_minus_func_int32_t_s 'int32_t (int32_t)' static
| |-ParmVarDecl 0x555dff1294a0 </usr/include/safe_math.h:274:39, col:47> col:47 used si 'int32_t':'int'
| `-CompoundStmt 0x555dff129878 <line:275:1, line:285:1>
|   `-ReturnStmt 0x555dff129868 <line:277:3, line:284:6>
|     `-ConditionalOperator 0x555dff129838 <line:280:5, line:284:6> 'int32_t':'int'
|       |-ParenExpr 0x555dff129750 <line:280:5, col:19> 'int'
|       | `-BinaryOperator 0x555dff129730 <col:6, /usr/include/stdint.h:107:35> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff129718 </usr/include/safe_math.h:280:6> 'int32_t':'int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff129660 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff1294a0 'si' 'int32_t':'int'
|       |   `-ParenExpr 0x555dff1296f8 </usr/include/stdint.h:107:21, col:35> 'int'
|       |     `-BinaryOperator 0x555dff1296d8 <col:22, col:34> 'int' '-'
|       |       |-UnaryOperator 0x555dff1296a0 <col:22, col:23> 'int' prefix '-'
|       |       | `-IntegerLiteral 0x555dff129680 <col:23> 'int' 2147483647
|       |       `-IntegerLiteral 0x555dff1296b8 <col:34> 'int' 1
|       |-ImplicitCastExpr 0x555dff129820 </usr/include/safe_math.h:281:5, col:19> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff1297b0 <col:5, col:19> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff129790 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff129770 </usr/include/safe_math.h:281:16> 'int32_t':'int' lvalue ParmVar 0x555dff1294a0 'si' 'int32_t':'int'
|       `-UnaryOperator 0x555dff129808 <line:284:5, col:6> 'int32_t':'int' prefix '-'
|         `-ImplicitCastExpr 0x555dff1297f0 <col:6> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x555dff1297d0 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff1294a0 'si' 'int32_t':'int'
|-FunctionDecl 0x555dff129ac0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:299:1> <scratch space>:87:1 safe_add_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x555dff1298a0 </usr/include/safe_math.h:288:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x555dff129918 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x555dff12a2f8 <line:289:1, line:299:1>
|   `-ReturnStmt 0x555dff12a2e8 <line:291:3, line:298:15>
|     `-ConditionalOperator 0x555dff12a2b8 <line:294:5, line:298:15> 'int32_t':'int'
|       |-ParenExpr 0x555dff12a170 <line:294:5, col:104> 'int'
|       | `-BinaryOperator 0x555dff12a150 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x555dff129e18 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x555dff129df8 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x555dff129ca8 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x555dff129bf0 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x555dff129bd0 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x555dff129bb8 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x555dff129b78 <col:8> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|       |   |   | |   `-IntegerLiteral 0x555dff129b98 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x555dff129c88 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x555dff129c68 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x555dff129c50 <col:19> 'int32_t':'int' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x555dff129c10 <col:19> 'int32_t':'int' lvalue ParmVar 0x555dff129918 'si2' 'int32_t':'int'
|       |   |   |     `-IntegerLiteral 0x555dff129c30 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x555dff129dd8 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x555dff129db8 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x555dff129da0 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x555dff129cc8 <col:30> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|       |   |       `-ParenExpr 0x555dff129d80 <col:36, col:50> 'int'
|       |   |         `-BinaryOperator 0x555dff129d60 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:294:47> 'int' '-'
|       |   |           |-ParenExpr 0x555dff129d08 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   |           | `-IntegerLiteral 0x555dff129ce8 <col:22> 'int' 2147483647
|       |   |           `-ImplicitCastExpr 0x555dff129d48 </usr/include/safe_math.h:294:47> 'int32_t':'int' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x555dff129d28 <col:47> 'int32_t':'int' lvalue ParmVar 0x555dff129918 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x555dff12a130 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x555dff12a110 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x555dff129f68 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x555dff129eb0 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x555dff129e90 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x555dff129e78 <col:59> 'int32_t':'int' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x555dff129e38 <col:59> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|       |       | |   `-IntegerLiteral 0x555dff129e58 <col:63> 'int' 0
|       |       | `-ParenExpr 0x555dff129f48 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x555dff129f28 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x555dff129f10 <col:70> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x555dff129ed0 <col:70> 'int32_t':'int' lvalue ParmVar 0x555dff129918 'si2' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x555dff129ef0 <col:74> 'int' 0
|       |       `-ParenExpr 0x555dff12a0f0 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x555dff12a0d0 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x555dff12a0b8 <col:81> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff129f88 <col:81> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|       |           `-ParenExpr 0x555dff12a098 <col:87, col:101> 'int'
|       |             `-BinaryOperator 0x555dff12a078 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:294:98> 'int' '-'
|       |               |-ParenExpr 0x555dff12a020 </usr/include/stdint.h:107:21, col:35> 'int'
|       |               | `-BinaryOperator 0x555dff12a000 <col:22, col:34> 'int' '-'
|       |               |   |-UnaryOperator 0x555dff129fc8 <col:22, col:23> 'int' prefix '-'
|       |               |   | `-IntegerLiteral 0x555dff129fa8 <col:23> 'int' 2147483647
|       |               |   `-IntegerLiteral 0x555dff129fe0 <col:34> 'int' 1
|       |               `-ImplicitCastExpr 0x555dff12a060 </usr/include/safe_math.h:294:98> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x555dff12a040 <col:98> 'int32_t':'int' lvalue ParmVar 0x555dff129918 'si2' 'int32_t':'int'
|       |-ImplicitCastExpr 0x555dff12a2a0 <line:295:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12a1d0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12a1b0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12a190 </usr/include/safe_math.h:295:16> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|       `-ParenExpr 0x555dff12a280 <line:298:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12a260 <col:6, col:12> 'int32_t':'int' '+'
|           |-ImplicitCastExpr 0x555dff12a230 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12a1f0 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff1298a0 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x555dff12a248 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12a210 <col:12> 'int32_t':'int' lvalue ParmVar 0x555dff129918 'si2' 'int32_t':'int'
|-FunctionDecl 0x555dff12a438 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:313:1> <scratch space>:88:1 safe_sub_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x555dff12a320 </usr/include/safe_math.h:302:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x555dff12a398 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x555dff12aa78 <line:303:1, line:313:1>
|   `-ReturnStmt 0x555dff12aa68 <line:305:3, line:312:15>
|     `-ConditionalOperator 0x555dff12aa38 <line:308:5, line:312:15> 'int32_t':'int'
|       |-ParenExpr 0x555dff12a8f0 <line:308:5, col:70> 'int'
|       | `-BinaryOperator 0x555dff12a8d0 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x555dff12a890 <col:6, col:65> 'int'
|       |   | `-BinaryOperator 0x555dff12a870 <col:7, col:64> 'int' '&'
|       |   |   |-ParenExpr 0x555dff12a580 <col:7, col:15> 'int32_t':'int'
|       |   |   | `-BinaryOperator 0x555dff12a560 <col:8, col:12> 'int32_t':'int' '^'
|       |   |   |   |-ImplicitCastExpr 0x555dff12a530 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x555dff12a4f0 <col:8> 'int32_t':'int' lvalue ParmVar 0x555dff12a320 'si1' 'int32_t':'int'
|       |   |   |   `-ImplicitCastExpr 0x555dff12a548 <col:12> 'int32_t':'int' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff12a510 <col:12> 'int32_t':'int' lvalue ParmVar 0x555dff12a398 'si2' 'int32_t':'int'
|       |   |   `-ParenExpr 0x555dff12a850 <col:19, col:64> 'int'
|       |   |     `-BinaryOperator 0x555dff12a830 <col:20, col:61> 'int' '^'
|       |   |       |-ParenExpr 0x555dff12a7d8 <col:20, col:59> 'int'
|       |   |       | `-BinaryOperator 0x555dff12a7b8 <col:21, col:56> 'int' '-'
|       |   |       |   |-ParenExpr 0x555dff12a760 <col:21, col:54> 'int'
|       |   |       |   | `-BinaryOperator 0x555dff12a740 <col:22, col:53> 'int' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x555dff12a728 <col:22> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x555dff12a5a0 <col:22> 'int32_t':'int' lvalue ParmVar 0x555dff12a320 'si1' 'int32_t':'int'
|       |   |       |   |   `-ParenExpr 0x555dff12a708 <col:28, col:53> 'int'
|       |   |       |   |     `-BinaryOperator 0x555dff12a6e8 <col:29, col:52> 'int' '&'
|       |   |       |   |       |-ParenExpr 0x555dff12a650 <col:29, col:37> 'int32_t':'int'
|       |   |       |   |       | `-BinaryOperator 0x555dff12a630 <col:30, col:34> 'int32_t':'int' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x555dff12a600 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x555dff12a5c0 <col:30> 'int32_t':'int' lvalue ParmVar 0x555dff12a320 'si1' 'int32_t':'int'
|       |   |       |   |       |   `-ImplicitCastExpr 0x555dff12a618 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x555dff12a5e0 <col:34> 'int32_t':'int' lvalue ParmVar 0x555dff12a398 'si2' 'int32_t':'int'
|       |   |       |   |       `-ParenExpr 0x555dff12a6c8 <col:41, col:52> 'int'
|       |   |       |   |         `-UnaryOperator 0x555dff12a6b0 <col:42, /usr/include/stdint.h:112:32> 'int' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x555dff12a690 <col:21, col:32> 'int'
|       |   |       |   |             `-IntegerLiteral 0x555dff12a670 <col:22> 'int' 2147483647
|       |   |       |   `-ImplicitCastExpr 0x555dff12a7a0 </usr/include/safe_math.h:308:56> 'int32_t':'int' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x555dff12a780 <col:56> 'int32_t':'int' lvalue ParmVar 0x555dff12a398 'si2' 'int32_t':'int'
|       |   |       `-ImplicitCastExpr 0x555dff12a818 <col:61> 'int32_t':'int' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff12a7f8 <col:61> 'int32_t':'int' lvalue ParmVar 0x555dff12a398 'si2' 'int32_t':'int'
|       |   `-IntegerLiteral 0x555dff12a8b0 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x555dff12aa20 <line:309:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12a950 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12a930 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12a910 </usr/include/safe_math.h:309:16> 'int32_t':'int' lvalue ParmVar 0x555dff12a320 'si1' 'int32_t':'int'
|       `-ParenExpr 0x555dff12aa00 <line:312:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12a9e0 <col:6, col:12> 'int32_t':'int' '-'
|           |-ImplicitCastExpr 0x555dff12a9b0 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12a970 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12a320 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x555dff12a9c8 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12a990 <col:12> 'int32_t':'int' lvalue ParmVar 0x555dff12a398 'si2' 'int32_t':'int'
|-FunctionDecl 0x555dff12abb8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:327:1> <scratch space>:89:1 safe_mul_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x555dff12aaa0 </usr/include/safe_math.h:316:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x555dff12ab18 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x555dff12baa0 <line:317:1, line:327:1>
|   `-ReturnStmt 0x555dff12ba90 <line:319:3, line:326:11>
|     `-ConditionalOperator 0x555dff12ba60 <line:322:5, line:326:11> 'int32_t':'int'
|       |-ParenExpr 0x555dff12b938 <line:322:5, col:248> 'int'
|       | `-BinaryOperator 0x555dff12b918 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x555dff12b580 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x555dff12b248 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x555dff12af10 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x555dff12aef0 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x555dff12ada0 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x555dff12ace8 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x555dff12acc8 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x555dff12acb0 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x555dff12ac70 <col:8> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   | | |   | |   `-IntegerLiteral 0x555dff12ac90 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x555dff12ad80 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x555dff12ad60 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x555dff12ad48 <col:21> 'int32_t':'int' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x555dff12ad08 <col:21> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   | | |   |     `-IntegerLiteral 0x555dff12ad28 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x555dff12aed0 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x555dff12aeb0 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x555dff12ae98 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x555dff12adc0 <col:34> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   | | |       `-ParenExpr 0x555dff12ae78 <col:40, col:56> 'int'
|       |   | | |         `-BinaryOperator 0x555dff12ae58 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:53> 'int' '/'
|       |   | | |           |-ParenExpr 0x555dff12ae00 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   | | |           | `-IntegerLiteral 0x555dff12ade0 <col:22> 'int' 2147483647
|       |   | | |           `-ImplicitCastExpr 0x555dff12ae40 </usr/include/safe_math.h:322:53> 'int32_t':'int' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x555dff12ae20 <col:53> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   | | `-ParenExpr 0x555dff12b228 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x555dff12b208 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x555dff12b060 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x555dff12afa8 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x555dff12af88 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x555dff12af70 <col:65> 'int32_t':'int' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x555dff12af30 <col:65> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   | |     | |   `-IntegerLiteral 0x555dff12af50 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x555dff12b040 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x555dff12b020 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x555dff12b008 <col:78> 'int32_t':'int' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x555dff12afc8 <col:78> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   | |     |     `-IntegerLiteral 0x555dff12afe8 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x555dff12b1e8 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x555dff12b1c8 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x555dff12b1b0 <col:92> 'int32_t':'int' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x555dff12b080 <col:92> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   | |         `-ParenExpr 0x555dff12b190 <col:98, col:114> 'int'
|       |   | |           `-BinaryOperator 0x555dff12b170 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:111> 'int' '/'
|       |   | |             |-ParenExpr 0x555dff12b118 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   | |             | `-BinaryOperator 0x555dff12b0f8 <col:22, col:34> 'int' '-'
|       |   | |             |   |-UnaryOperator 0x555dff12b0c0 <col:22, col:23> 'int' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x555dff12b0a0 <col:23> 'int' 2147483647
|       |   | |             |   `-IntegerLiteral 0x555dff12b0d8 <col:34> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x555dff12b158 </usr/include/safe_math.h:322:111> 'int32_t':'int' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x555dff12b138 <col:111> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   | `-ParenExpr 0x555dff12b560 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x555dff12b540 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x555dff12b398 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x555dff12b2e0 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x555dff12b2c0 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x555dff12b2a8 <col:123> 'int32_t':'int' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x555dff12b268 <col:123> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   |     | |   `-IntegerLiteral 0x555dff12b288 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x555dff12b378 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x555dff12b358 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x555dff12b340 <col:137> 'int32_t':'int' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x555dff12b300 <col:137> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   |     |     `-IntegerLiteral 0x555dff12b320 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x555dff12b520 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x555dff12b500 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x555dff12b4e8 <col:150> 'int32_t':'int' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x555dff12b3b8 <col:150> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |   |         `-ParenExpr 0x555dff12b4c8 <col:156, col:172> 'int'
|       |   |           `-BinaryOperator 0x555dff12b4a8 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:169> 'int' '/'
|       |   |             |-ParenExpr 0x555dff12b450 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   |             | `-BinaryOperator 0x555dff12b430 <col:22, col:34> 'int' '-'
|       |   |             |   |-UnaryOperator 0x555dff12b3f8 <col:22, col:23> 'int' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x555dff12b3d8 <col:23> 'int' 2147483647
|       |   |             |   `-IntegerLiteral 0x555dff12b410 <col:34> 'int' 1
|       |   |             `-ImplicitCastExpr 0x555dff12b490 </usr/include/safe_math.h:322:169> 'int32_t':'int' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x555dff12b470 <col:169> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x555dff12b8f8 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x555dff12b8d8 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x555dff12b788 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x555dff12b6d0 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x555dff12b618 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x555dff12b5f8 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x555dff12b5e0 <col:181> 'int32_t':'int' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x555dff12b5a0 <col:181> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |       | | |   `-IntegerLiteral 0x555dff12b5c0 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x555dff12b6b0 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x555dff12b690 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x555dff12b678 <col:195> 'int32_t':'int' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x555dff12b638 <col:195> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |       | |     `-IntegerLiteral 0x555dff12b658 <col:202> 'int' 0
|       |       | `-ParenExpr 0x555dff12b768 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x555dff12b748 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x555dff12b730 <col:209> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x555dff12b6f0 <col:209> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x555dff12b710 <col:216> 'int' 0
|       |       `-ParenExpr 0x555dff12b8b8 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x555dff12b898 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x555dff12b880 <col:223> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff12b7a8 <col:223> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x555dff12b860 <col:229, col:245> 'int'
|       |             `-BinaryOperator 0x555dff12b840 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:242> 'int' '/'
|       |               |-ParenExpr 0x555dff12b7e8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |               | `-IntegerLiteral 0x555dff12b7c8 <col:22> 'int' 2147483647
|       |               `-ImplicitCastExpr 0x555dff12b828 </usr/include/safe_math.h:322:242> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x555dff12b808 <col:242> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       |-ImplicitCastExpr 0x555dff12ba48 <line:323:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12b998 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12b978 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12b958 </usr/include/safe_math.h:323:16> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|       `-BinaryOperator 0x555dff12ba28 <line:326:5, col:11> 'int32_t':'int' '*'
|         |-ImplicitCastExpr 0x555dff12b9f8 <col:5> 'int32_t':'int' <LValueToRValue>
|         | `-DeclRefExpr 0x555dff12b9b8 <col:5> 'int32_t':'int' lvalue ParmVar 0x555dff12aaa0 'si1' 'int32_t':'int'
|         `-ImplicitCastExpr 0x555dff12ba10 <col:11> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x555dff12b9d8 <col:11> 'int32_t':'int' lvalue ParmVar 0x555dff12ab18 'si2' 'int32_t':'int'
|-FunctionDecl 0x555dff12bbf8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:339:1> <scratch space>:90:1 safe_mod_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x555dff12bae0 </usr/include/safe_math.h:330:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x555dff12bb58 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x555dff12c110 <line:331:1, line:339:1>
|   `-ReturnStmt 0x555dff12c100 <line:333:3, line:338:15>
|     `-ConditionalOperator 0x555dff12c0d0 <line:335:5, line:338:15> 'int32_t':'int'
|       |-ParenExpr 0x555dff12bf88 <line:335:5, col:57> 'int'
|       | `-BinaryOperator 0x555dff12bf68 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x555dff12bd28 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff12bd08 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x555dff12bcf0 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff12bcb0 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12bb58 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x555dff12bcd0 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff12bf48 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x555dff12bf28 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x555dff12be38 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x555dff12be18 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x555dff12be00 </usr/include/safe_math.h:335:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x555dff12bd48 <col:22> 'int32_t':'int' lvalue ParmVar 0x555dff12bae0 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x555dff12bde0 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x555dff12bdc0 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x555dff12bd88 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x555dff12bd68 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x555dff12bda0 <col:34> 'int' 1
|       |       `-ParenExpr 0x555dff12bf08 </usr/include/safe_math.h:335:43, col:55> 'int'
|       |         `-BinaryOperator 0x555dff12bee8 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x555dff12bed0 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff12be58 <col:44> 'int32_t':'int' lvalue ParmVar 0x555dff12bb58 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x555dff12beb0 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x555dff12be98 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x555dff12be78 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x555dff12c0b8 <line:336:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12bfe8 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12bfc8 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12bfa8 </usr/include/safe_math.h:336:16> 'int32_t':'int' lvalue ParmVar 0x555dff12bae0 'si1' 'int32_t':'int'
|       `-ParenExpr 0x555dff12c098 <line:338:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12c078 <col:6, col:12> 'int32_t':'int' '%'
|           |-ImplicitCastExpr 0x555dff12c048 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12c008 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12bae0 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x555dff12c060 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12c028 <col:12> 'int32_t':'int' lvalue ParmVar 0x555dff12bb58 'si2' 'int32_t':'int'
|-FunctionDecl 0x555dff12c250 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:351:1> <scratch space>:91:1 safe_div_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x555dff12c138 </usr/include/safe_math.h:342:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x555dff12c1b0 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x555dff12c768 <line:343:1, line:351:1>
|   `-ReturnStmt 0x555dff12c758 <line:345:3, line:350:15>
|     `-ConditionalOperator 0x555dff12c728 <line:347:5, line:350:15> 'int32_t':'int'
|       |-ParenExpr 0x555dff12c5e0 <line:347:5, col:57> 'int'
|       | `-BinaryOperator 0x555dff12c5c0 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x555dff12c380 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff12c360 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x555dff12c348 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff12c308 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12c1b0 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x555dff12c328 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff12c5a0 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x555dff12c580 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x555dff12c490 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x555dff12c470 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x555dff12c458 </usr/include/safe_math.h:347:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x555dff12c3a0 <col:22> 'int32_t':'int' lvalue ParmVar 0x555dff12c138 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x555dff12c438 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x555dff12c418 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x555dff12c3e0 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x555dff12c3c0 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x555dff12c3f8 <col:34> 'int' 1
|       |       `-ParenExpr 0x555dff12c560 </usr/include/safe_math.h:347:43, col:55> 'int'
|       |         `-BinaryOperator 0x555dff12c540 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x555dff12c528 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff12c4b0 <col:44> 'int32_t':'int' lvalue ParmVar 0x555dff12c1b0 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x555dff12c508 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x555dff12c4f0 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x555dff12c4d0 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x555dff12c710 <line:348:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12c640 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12c620 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12c600 </usr/include/safe_math.h:348:16> 'int32_t':'int' lvalue ParmVar 0x555dff12c138 'si1' 'int32_t':'int'
|       `-ParenExpr 0x555dff12c6f0 <line:350:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12c6d0 <col:6, col:12> 'int32_t':'int' '/'
|           |-ImplicitCastExpr 0x555dff12c6a0 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12c660 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12c138 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x555dff12c6b8 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12c680 <col:12> 'int32_t':'int' lvalue ParmVar 0x555dff12c1b0 'si2' 'int32_t':'int'
|-FunctionDecl 0x555dff12c928 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:363:1> <scratch space>:92:1 safe_lshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x555dff12c790 </usr/include/safe_math.h:354:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x555dff12c810 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff12d040 <line:355:1, line:363:1>
|   `-ReturnStmt 0x555dff12d030 <line:357:3, line:362:26>
|     `-ConditionalOperator 0x555dff12d000 <line:359:5, line:362:26> 'int32_t':'int'
|       |-ParenExpr 0x555dff12ce58 <line:359:5, col:102> 'int'
|       | `-BinaryOperator 0x555dff12ce38 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x555dff12cc88 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x555dff12cb70 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x555dff12ca58 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x555dff12ca38 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x555dff12ca20 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x555dff12c9e0 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12c790 'left' 'int32_t':'int'
|       |   | | |   `-IntegerLiteral 0x555dff12ca00 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x555dff12cb50 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x555dff12cb30 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x555dff12caf0 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x555dff12cac8 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x555dff12cab0 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x555dff12ca78 <col:27> 'int' lvalue ParmVar 0x555dff12c810 'right' 'int'
|       |   | |     `-IntegerLiteral 0x555dff12cb10 <col:36> 'int' 0
|       |   | `-ParenExpr 0x555dff12cc68 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x555dff12cc48 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x555dff12cc08 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff12cbe0 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff12cbc8 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff12cb90 <col:49> 'int' lvalue ParmVar 0x555dff12c810 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff12cc28 <col:59> 'int' 32
|       |   `-ParenExpr 0x555dff12ce18 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x555dff12cdf8 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff12cde0 <col:67> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff12cca8 <col:67> 'int32_t':'int' lvalue ParmVar 0x555dff12c790 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x555dff12cdc0 <col:74, col:100> 'int'
|       |         `-BinaryOperator 0x555dff12cda0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:359:99> 'int' '>>'
|       |           |-ParenExpr 0x555dff12cce8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x555dff12ccc8 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x555dff12cd80 </usr/include/safe_math.h:359:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x555dff12cd58 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff12cd40 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff12cd08 <col:94> 'int' lvalue ParmVar 0x555dff12c810 'right' 'int'
|       |-ImplicitCastExpr 0x555dff12cfe8 <line:360:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12ceb8 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12ce98 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12ce78 </usr/include/safe_math.h:360:16> 'int32_t':'int' lvalue ParmVar 0x555dff12c790 'left' 'int32_t':'int'
|       `-ParenExpr 0x555dff12cfc8 <line:362:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12cfa8 <col:6, col:25> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x555dff12cf90 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12ced8 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12c790 'left' 'int32_t':'int'
|           `-ParenExpr 0x555dff12cf70 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff12cf48 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff12cf30 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff12cef8 <col:20> 'int' lvalue ParmVar 0x555dff12c810 'right' 'int'
|-FunctionDecl 0x555dff12d238 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:375:1> <scratch space>:93:1 safe_lshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x555dff12d068 </usr/include/safe_math.h:366:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x555dff12d0e8 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff12d850 <line:367:1, line:375:1>
|   `-ReturnStmt 0x555dff12d840 <line:369:3, line:374:35>
|     `-ConditionalOperator 0x555dff12d810 <line:371:5, line:374:35> 'int32_t':'int'
|       |-ParenExpr 0x555dff12d668 <line:371:5, col:98> 'int'
|       | `-BinaryOperator 0x555dff12d648 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x555dff12d498 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x555dff12d368 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x555dff12d348 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x555dff12d330 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x555dff12d2f0 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12d068 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x555dff12d310 <col:14> 'int' 0
|       |   | `-ParenExpr 0x555dff12d478 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x555dff12d458 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x555dff12d400 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x555dff12d3d8 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff12d3c0 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff12d388 <col:36> 'unsigned int' lvalue ParmVar 0x555dff12d0e8 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x555dff12d440 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x555dff12d420 <col:46> 'int' 32
|       |   `-ParenExpr 0x555dff12d628 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x555dff12d608 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff12d5f0 <col:54> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff12d4b8 <col:54> 'int32_t':'int' lvalue ParmVar 0x555dff12d068 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x555dff12d5d0 <col:61, col:96> 'int'
|       |         `-BinaryOperator 0x555dff12d5b0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:371:95> 'int' '>>'
|       |           |-ParenExpr 0x555dff12d4f8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x555dff12d4d8 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x555dff12d590 </usr/include/safe_math.h:371:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x555dff12d568 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff12d550 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff12d518 <col:90> 'unsigned int' lvalue ParmVar 0x555dff12d0e8 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x555dff12d7f8 <line:372:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12d6c8 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12d6a8 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12d688 </usr/include/safe_math.h:372:16> 'int32_t':'int' lvalue ParmVar 0x555dff12d068 'left' 'int32_t':'int'
|       `-ParenExpr 0x555dff12d7d8 <line:374:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12d7b8 <col:6, col:34> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x555dff12d7a0 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12d6e8 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12d068 'left' 'int32_t':'int'
|           `-ParenExpr 0x555dff12d780 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff12d758 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff12d740 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff12d708 <col:29> 'unsigned int' lvalue ParmVar 0x555dff12d0e8 'right' 'unsigned int'
|-FunctionDecl 0x555dff12d998 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:387:1> <scratch space>:94:1 safe_rshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x555dff12d878 </usr/include/safe_math.h:378:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x555dff12d8f8 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff12df18 <line:379:1, line:387:1>
|   `-ReturnStmt 0x555dff12df08 <line:381:3, line:386:26>
|     `-ConditionalOperator 0x555dff12ded8 <line:383:5, line:386:26> 'int32_t':'int'
|       |-ParenExpr 0x555dff12dd30 <line:383:5, col:62> 'int'
|       | `-BinaryOperator 0x555dff12dd10 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x555dff12dbf8 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x555dff12dae0 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x555dff12daa8 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x555dff12da90 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x555dff12da50 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12d878 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x555dff12da70 <col:14> 'int' 0
|       |   | `-ParenExpr 0x555dff12dbd8 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x555dff12dbb8 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x555dff12db78 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff12db50 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff12db38 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff12db00 <col:27> 'int' lvalue ParmVar 0x555dff12d8f8 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff12db98 <col:36> 'int' 0
|       |   `-ParenExpr 0x555dff12dcf0 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x555dff12dcd0 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x555dff12dc90 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x555dff12dc68 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff12dc50 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff12dc18 <col:49> 'int' lvalue ParmVar 0x555dff12d8f8 'right' 'int'
|       |       `-IntegerLiteral 0x555dff12dcb0 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x555dff12dec0 <line:384:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12dd90 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12dd70 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12dd50 </usr/include/safe_math.h:384:16> 'int32_t':'int' lvalue ParmVar 0x555dff12d878 'left' 'int32_t':'int'
|       `-ParenExpr 0x555dff12dea0 <line:386:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12de80 <col:6, col:25> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x555dff12de68 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12ddb0 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12d878 'left' 'int32_t':'int'
|           `-ParenExpr 0x555dff12de48 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff12de20 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff12de08 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff12ddd0 <col:20> 'int' lvalue ParmVar 0x555dff12d8f8 'right' 'int'
|-FunctionDecl 0x555dff12e060 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:399:1> <scratch space>:95:1 safe_rshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x555dff12df40 </usr/include/safe_math.h:390:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x555dff12dfc0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff12e4c8 <line:391:1, line:399:1>
|   `-ReturnStmt 0x555dff12e4b8 <line:393:3, line:398:35>
|     `-ConditionalOperator 0x555dff12e488 <line:395:5, line:398:35> 'int32_t':'int'
|       |-ParenExpr 0x555dff12e2e0 <line:395:5, col:49> 'int'
|       | `-BinaryOperator 0x555dff12e2c0 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x555dff12e190 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff12e170 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x555dff12e158 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff12e118 <col:7> 'int32_t':'int' lvalue ParmVar 0x555dff12df40 'left' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x555dff12e138 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff12e2a0 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x555dff12e280 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x555dff12e228 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x555dff12e200 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff12e1e8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff12e1b0 <col:36> 'unsigned int' lvalue ParmVar 0x555dff12dfc0 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x555dff12e268 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x555dff12e248 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x555dff12e470 <line:396:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x555dff12e340 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x555dff12e320 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x555dff12e300 </usr/include/safe_math.h:396:16> 'int32_t':'int' lvalue ParmVar 0x555dff12df40 'left' 'int32_t':'int'
|       `-ParenExpr 0x555dff12e450 <line:398:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x555dff12e430 <col:6, col:34> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x555dff12e418 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12e360 <col:6> 'int32_t':'int' lvalue ParmVar 0x555dff12df40 'left' 'int32_t':'int'
|           `-ParenExpr 0x555dff12e3f8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff12e3d0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff12e3b8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff12e380 <col:29> 'unsigned int' lvalue ParmVar 0x555dff12dfc0 'right' 'unsigned int'
|-FunctionDecl 0x555dff12e6a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:416:1> <scratch space>:96:1 safe_unary_minus_func_int64_t_s 'int64_t (int64_t)' static
| |-ParmVarDecl 0x555dff12e550 </usr/include/safe_math.h:405:39, col:47> col:47 used si 'int64_t':'long'
| `-CompoundStmt 0x555dff12e980 <line:406:1, line:416:1>
|   `-ReturnStmt 0x555dff12e970 <line:408:3, line:415:6>
|     `-ConditionalOperator 0x555dff12e940 <line:411:5, line:415:6> 'int64_t':'long'
|       |-ParenExpr 0x555dff12e858 <line:411:5, col:19> 'int'
|       | `-BinaryOperator 0x555dff12e838 <col:6, /usr/include/stdint.h:108:55> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff12e820 </usr/include/safe_math.h:411:6> 'int64_t':'long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff12e750 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff12e550 'si' 'int64_t':'long'
|       |   `-ParenExpr 0x555dff12e800 </usr/include/stdint.h:108:21, col:55> 'long'
|       |     `-BinaryOperator 0x555dff12e7e0 <col:22, col:54> 'long' '-'
|       |       |-UnaryOperator 0x555dff12e790 <col:22, <scratch space>:98:1> 'long' prefix '-'
|       |       | `-IntegerLiteral 0x555dff12e770 <col:1> 'long' 9223372036854775807
|       |       `-ImplicitCastExpr 0x555dff12e7c8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |         `-IntegerLiteral 0x555dff12e7a8 <col:54> 'int' 1
|       |-ImplicitCastExpr 0x555dff12e928 </usr/include/safe_math.h:412:5, col:19> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff12e8b8 <col:5, col:19> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff12e898 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff12e878 </usr/include/safe_math.h:412:16> 'int64_t':'long' lvalue ParmVar 0x555dff12e550 'si' 'int64_t':'long'
|       `-UnaryOperator 0x555dff12e910 <line:415:5, col:6> 'int64_t':'long' prefix '-'
|         `-ImplicitCastExpr 0x555dff12e8f8 <col:6> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x555dff12e8d8 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff12e550 'si' 'int64_t':'long'
|-FunctionDecl 0x555dff12eb78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:430:1> <scratch space>:99:1 safe_add_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x555dff12e9a8 </usr/include/safe_math.h:419:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x555dff12ea20 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x555dff12f428 <line:420:1, line:430:1>
|   `-ReturnStmt 0x555dff12f418 <line:422:3, line:429:15>
|     `-ConditionalOperator 0x555dff12f3e8 <line:425:5, line:429:15> 'int64_t':'long'
|       |-ParenExpr 0x555dff12f2a0 <line:425:5, col:104> 'int'
|       | `-BinaryOperator 0x555dff12f280 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x555dff12ef00 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x555dff12eee0 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x555dff12ed90 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x555dff12ecc0 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x555dff12eca0 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x555dff12ec70 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x555dff12ec30 <col:8> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|       |   |   | |   `-ImplicitCastExpr 0x555dff12ec88 <col:12> 'int64_t':'long' <IntegralCast>
|       |   |   | |     `-IntegerLiteral 0x555dff12ec50 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x555dff12ed70 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x555dff12ed50 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x555dff12ed20 <col:19> 'int64_t':'long' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x555dff12ece0 <col:19> 'int64_t':'long' lvalue ParmVar 0x555dff12ea20 'si2' 'int64_t':'long'
|       |   |   |     `-ImplicitCastExpr 0x555dff12ed38 <col:23> 'int64_t':'long' <IntegralCast>
|       |   |   |       `-IntegerLiteral 0x555dff12ed00 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x555dff12eec0 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x555dff12eea0 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x555dff12ee88 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x555dff12edb0 <col:30> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|       |   |       `-ParenExpr 0x555dff12ee68 <col:36, col:50> 'long'
|       |   |         `-BinaryOperator 0x555dff12ee48 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:425:47> 'long' '-'
|       |   |           |-ParenExpr 0x555dff12edf0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   |           | `-IntegerLiteral 0x555dff12edd0 <<scratch space>:101:1> 'long' 9223372036854775807
|       |   |           `-ImplicitCastExpr 0x555dff12ee30 </usr/include/safe_math.h:425:47> 'int64_t':'long' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x555dff12ee10 <col:47> 'int64_t':'long' lvalue ParmVar 0x555dff12ea20 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x555dff12f260 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x555dff12f240 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x555dff12f080 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x555dff12efb0 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x555dff12ef90 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x555dff12ef60 <col:59> 'int64_t':'long' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x555dff12ef20 <col:59> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|       |       | |   `-ImplicitCastExpr 0x555dff12ef78 <col:63> 'int64_t':'long' <IntegralCast>
|       |       | |     `-IntegerLiteral 0x555dff12ef40 <col:63> 'int' 0
|       |       | `-ParenExpr 0x555dff12f060 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x555dff12f040 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x555dff12f010 <col:70> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x555dff12efd0 <col:70> 'int64_t':'long' lvalue ParmVar 0x555dff12ea20 'si2' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x555dff12f028 <col:74> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x555dff12eff0 <col:74> 'int' 0
|       |       `-ParenExpr 0x555dff12f220 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x555dff12f200 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x555dff12f1e8 <col:81> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff12f0a0 <col:81> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|       |           `-ParenExpr 0x555dff12f1c8 <col:87, col:101> 'long'
|       |             `-BinaryOperator 0x555dff12f1a8 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:425:98> 'long' '-'
|       |               |-ParenExpr 0x555dff12f150 </usr/include/stdint.h:108:21, col:55> 'long'
|       |               | `-BinaryOperator 0x555dff12f130 <col:22, col:54> 'long' '-'
|       |               |   |-UnaryOperator 0x555dff12f0e0 <col:22, <scratch space>:102:1> 'long' prefix '-'
|       |               |   | `-IntegerLiteral 0x555dff12f0c0 <col:1> 'long' 9223372036854775807
|       |               |   `-ImplicitCastExpr 0x555dff12f118 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |               |     `-IntegerLiteral 0x555dff12f0f8 <col:54> 'int' 1
|       |               `-ImplicitCastExpr 0x555dff12f190 </usr/include/safe_math.h:425:98> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x555dff12f170 <col:98> 'int64_t':'long' lvalue ParmVar 0x555dff12ea20 'si2' 'int64_t':'long'
|       |-ImplicitCastExpr 0x555dff12f3d0 <line:426:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff12f300 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff12f2e0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff12f2c0 </usr/include/safe_math.h:426:16> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|       `-ParenExpr 0x555dff12f3b0 <line:429:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x555dff12f390 <col:6, col:12> 'int64_t':'long' '+'
|           |-ImplicitCastExpr 0x555dff12f360 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12f320 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff12e9a8 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x555dff12f378 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12f340 <col:12> 'int64_t':'long' lvalue ParmVar 0x555dff12ea20 'si2' 'int64_t':'long'
|-FunctionDecl 0x555dff12f568 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:444:1> <scratch space>:103:1 safe_sub_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x555dff12f450 </usr/include/safe_math.h:433:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x555dff12f4c8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x555dff12fbd8 <line:434:1, line:444:1>
|   `-ReturnStmt 0x555dff12fbc8 <line:436:3, line:443:15>
|     `-ConditionalOperator 0x555dff12fb98 <line:439:5, line:443:15> 'int64_t':'long'
|       |-ParenExpr 0x555dff12fa38 <line:439:5, col:70> 'int'
|       | `-BinaryOperator 0x555dff12fa18 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x555dff12f9c0 <col:6, col:65> 'long'
|       |   | `-BinaryOperator 0x555dff12f9a0 <col:7, col:64> 'long' '&'
|       |   |   |-ParenExpr 0x555dff12f6b0 <col:7, col:15> 'int64_t':'long'
|       |   |   | `-BinaryOperator 0x555dff12f690 <col:8, col:12> 'int64_t':'long' '^'
|       |   |   |   |-ImplicitCastExpr 0x555dff12f660 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x555dff12f620 <col:8> 'int64_t':'long' lvalue ParmVar 0x555dff12f450 'si1' 'int64_t':'long'
|       |   |   |   `-ImplicitCastExpr 0x555dff12f678 <col:12> 'int64_t':'long' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff12f640 <col:12> 'int64_t':'long' lvalue ParmVar 0x555dff12f4c8 'si2' 'int64_t':'long'
|       |   |   `-ParenExpr 0x555dff12f980 <col:19, col:64> 'long'
|       |   |     `-BinaryOperator 0x555dff12f960 <col:20, col:61> 'long' '^'
|       |   |       |-ParenExpr 0x555dff12f908 <col:20, col:59> 'long'
|       |   |       | `-BinaryOperator 0x555dff12f8e8 <col:21, col:56> 'long' '-'
|       |   |       |   |-ParenExpr 0x555dff12f890 <col:21, col:54> 'long'
|       |   |       |   | `-BinaryOperator 0x555dff12f870 <col:22, col:53> 'long' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x555dff12f858 <col:22> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x555dff12f6d0 <col:22> 'int64_t':'long' lvalue ParmVar 0x555dff12f450 'si1' 'int64_t':'long'
|       |   |       |   |   `-ParenExpr 0x555dff12f838 <col:28, col:53> 'long'
|       |   |       |   |     `-BinaryOperator 0x555dff12f818 <col:29, col:52> 'long' '&'
|       |   |       |   |       |-ParenExpr 0x555dff12f780 <col:29, col:37> 'int64_t':'long'
|       |   |       |   |       | `-BinaryOperator 0x555dff12f760 <col:30, col:34> 'int64_t':'long' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x555dff12f730 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x555dff12f6f0 <col:30> 'int64_t':'long' lvalue ParmVar 0x555dff12f450 'si1' 'int64_t':'long'
|       |   |       |   |       |   `-ImplicitCastExpr 0x555dff12f748 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x555dff12f710 <col:34> 'int64_t':'long' lvalue ParmVar 0x555dff12f4c8 'si2' 'int64_t':'long'
|       |   |       |   |       `-ParenExpr 0x555dff12f7f8 <col:41, col:52> 'long'
|       |   |       |   |         `-UnaryOperator 0x555dff12f7e0 <col:42, /usr/include/stdint.h:113:52> 'long' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x555dff12f7c0 <col:21, col:52> 'long'
|       |   |       |   |             `-IntegerLiteral 0x555dff12f7a0 <<scratch space>:105:1> 'long' 9223372036854775807
|       |   |       |   `-ImplicitCastExpr 0x555dff12f8d0 </usr/include/safe_math.h:439:56> 'int64_t':'long' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x555dff12f8b0 <col:56> 'int64_t':'long' lvalue ParmVar 0x555dff12f4c8 'si2' 'int64_t':'long'
|       |   |       `-ImplicitCastExpr 0x555dff12f948 <col:61> 'int64_t':'long' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff12f928 <col:61> 'int64_t':'long' lvalue ParmVar 0x555dff12f4c8 'si2' 'int64_t':'long'
|       |   `-ImplicitCastExpr 0x555dff12fa00 <col:69> 'long' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff12f9e0 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x555dff12fb80 <line:440:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff12fa98 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff12fa78 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff12fa58 </usr/include/safe_math.h:440:16> 'int64_t':'long' lvalue ParmVar 0x555dff12f450 'si1' 'int64_t':'long'
|       `-ParenExpr 0x555dff12fb60 <line:443:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x555dff12fb40 <col:6, col:12> 'int64_t':'long' '-'
|           |-ImplicitCastExpr 0x555dff12fb10 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff12fab8 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff12f450 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x555dff12fb28 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff12faf0 <col:12> 'int64_t':'long' lvalue ParmVar 0x555dff12f4c8 'si2' 'int64_t':'long'
|-FunctionDecl 0x555dff12fd18 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:458:1> <scratch space>:106:1 safe_mul_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x555dff12fc00 </usr/include/safe_math.h:447:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x555dff12fc78 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x555dff130d08 <line:448:1, line:458:1>
|   `-ReturnStmt 0x555dff130cf8 <line:450:3, line:457:11>
|     `-ConditionalOperator 0x555dff130cc8 <line:453:5, line:457:11> 'int64_t':'long'
|       |-ParenExpr 0x555dff130ba0 <line:453:5, col:248> 'int'
|       | `-BinaryOperator 0x555dff130b80 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x555dff1307a0 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x555dff130420 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x555dff1300a0 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x555dff130080 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x555dff12ff30 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x555dff12fe60 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x555dff12fe40 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x555dff12fe10 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x555dff12fdd0 <col:8> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   | | |   | |   `-ImplicitCastExpr 0x555dff12fe28 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |   | |     `-IntegerLiteral 0x555dff12fdf0 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x555dff12ff10 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x555dff12fef0 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x555dff12fec0 <col:21> 'int64_t':'long' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x555dff12fe80 <col:21> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   | | |   |     `-ImplicitCastExpr 0x555dff12fed8 <col:27> 'int64_t':'long' <IntegralCast>
|       |   | | |   |       `-IntegerLiteral 0x555dff12fea0 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x555dff130060 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x555dff130040 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x555dff130028 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x555dff12ff50 <col:34> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   | | |       `-ParenExpr 0x555dff130008 <col:40, col:56> 'long'
|       |   | | |         `-BinaryOperator 0x555dff12ffe8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:53> 'long' '/'
|       |   | | |           |-ParenExpr 0x555dff12ff90 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   | | |           | `-IntegerLiteral 0x555dff12ff70 <<scratch space>:108:1> 'long' 9223372036854775807
|       |   | | |           `-ImplicitCastExpr 0x555dff12ffd0 </usr/include/safe_math.h:453:53> 'int64_t':'long' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x555dff12ffb0 <col:53> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   | | `-ParenExpr 0x555dff130400 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x555dff1303e0 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x555dff130220 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x555dff130150 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x555dff130130 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x555dff130100 <col:65> 'int64_t':'long' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x555dff1300c0 <col:65> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   | |     | |   `-ImplicitCastExpr 0x555dff130118 <col:71> 'int64_t':'long' <IntegralCast>
|       |   | |     | |     `-IntegerLiteral 0x555dff1300e0 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x555dff130200 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x555dff1301e0 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x555dff1301b0 <col:78> 'int64_t':'long' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x555dff130170 <col:78> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   | |     |     `-ImplicitCastExpr 0x555dff1301c8 <col:85> 'int64_t':'long' <IntegralCast>
|       |   | |     |       `-IntegerLiteral 0x555dff130190 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x555dff1303c0 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x555dff1303a0 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x555dff130388 <col:92> 'int64_t':'long' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x555dff130240 <col:92> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   | |         `-ParenExpr 0x555dff130368 <col:98, col:114> 'long'
|       |   | |           `-BinaryOperator 0x555dff130348 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:111> 'long' '/'
|       |   | |             |-ParenExpr 0x555dff1302f0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   | |             | `-BinaryOperator 0x555dff1302d0 <col:22, col:54> 'long' '-'
|       |   | |             |   |-UnaryOperator 0x555dff130280 <col:22, <scratch space>:109:1> 'long' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x555dff130260 <col:1> 'long' 9223372036854775807
|       |   | |             |   `-ImplicitCastExpr 0x555dff1302b8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   | |             |     `-IntegerLiteral 0x555dff130298 <col:54> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x555dff130330 </usr/include/safe_math.h:453:111> 'int64_t':'long' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x555dff130310 <col:111> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   | `-ParenExpr 0x555dff130780 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x555dff130760 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x555dff1305a0 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x555dff1304d0 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x555dff1304b0 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x555dff130480 <col:123> 'int64_t':'long' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x555dff130440 <col:123> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   |     | |   `-ImplicitCastExpr 0x555dff130498 <col:130> 'int64_t':'long' <IntegralCast>
|       |   |     | |     `-IntegerLiteral 0x555dff130460 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x555dff130580 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x555dff130560 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x555dff130530 <col:137> 'int64_t':'long' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x555dff1304f0 <col:137> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   |     |     `-ImplicitCastExpr 0x555dff130548 <col:143> 'int64_t':'long' <IntegralCast>
|       |   |     |       `-IntegerLiteral 0x555dff130510 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x555dff130740 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x555dff130720 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x555dff130708 <col:150> 'int64_t':'long' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x555dff1305c0 <col:150> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |   |         `-ParenExpr 0x555dff1306e8 <col:156, col:172> 'long'
|       |   |           `-BinaryOperator 0x555dff1306c8 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:169> 'long' '/'
|       |   |             |-ParenExpr 0x555dff130670 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   |             | `-BinaryOperator 0x555dff130650 <col:22, col:54> 'long' '-'
|       |   |             |   |-UnaryOperator 0x555dff130600 <col:22, <scratch space>:110:1> 'long' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x555dff1305e0 <col:1> 'long' 9223372036854775807
|       |   |             |   `-ImplicitCastExpr 0x555dff130638 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   |             |     `-IntegerLiteral 0x555dff130618 <col:54> 'int' 1
|       |   |             `-ImplicitCastExpr 0x555dff1306b0 </usr/include/safe_math.h:453:169> 'int64_t':'long' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x555dff130690 <col:169> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x555dff130b60 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x555dff130b40 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x555dff1309f0 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x555dff130920 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x555dff130850 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x555dff130830 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x555dff130800 <col:181> 'int64_t':'long' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x555dff1307c0 <col:181> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |       | | |   `-ImplicitCastExpr 0x555dff130818 <col:188> 'int64_t':'long' <IntegralCast>
|       |       | | |     `-IntegerLiteral 0x555dff1307e0 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x555dff130900 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x555dff1308e0 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x555dff1308b0 <col:195> 'int64_t':'long' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x555dff130870 <col:195> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |       | |     `-ImplicitCastExpr 0x555dff1308c8 <col:202> 'int64_t':'long' <IntegralCast>
|       |       | |       `-IntegerLiteral 0x555dff130890 <col:202> 'int' 0
|       |       | `-ParenExpr 0x555dff1309d0 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x555dff1309b0 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x555dff130980 <col:209> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x555dff130940 <col:209> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x555dff130998 <col:216> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x555dff130960 <col:216> 'int' 0
|       |       `-ParenExpr 0x555dff130b20 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x555dff130b00 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x555dff130ae8 <col:223> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff130a10 <col:223> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|       |           `-ParenExpr 0x555dff130ac8 <col:229, col:245> 'long'
|       |             `-BinaryOperator 0x555dff130aa8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:242> 'long' '/'
|       |               |-ParenExpr 0x555dff130a50 </usr/include/stdint.h:113:21, col:52> 'long'
|       |               | `-IntegerLiteral 0x555dff130a30 <<scratch space>:111:1> 'long' 9223372036854775807
|       |               `-ImplicitCastExpr 0x555dff130a90 </usr/include/safe_math.h:453:242> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x555dff130a70 <col:242> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       |-ImplicitCastExpr 0x555dff130cb0 <line:454:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff130c00 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff130be0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff130bc0 </usr/include/safe_math.h:454:16> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|       `-BinaryOperator 0x555dff130c90 <line:457:5, col:11> 'int64_t':'long' '*'
|         |-ImplicitCastExpr 0x555dff130c60 <col:5> 'int64_t':'long' <LValueToRValue>
|         | `-DeclRefExpr 0x555dff130c20 <col:5> 'int64_t':'long' lvalue ParmVar 0x555dff12fc00 'si1' 'int64_t':'long'
|         `-ImplicitCastExpr 0x555dff130c78 <col:11> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x555dff130c40 <col:11> 'int64_t':'long' lvalue ParmVar 0x555dff12fc78 'si2' 'int64_t':'long'
|-FunctionDecl 0x555dff130e48 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:470:1> <scratch space>:112:1 safe_mod_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x555dff130d30 </usr/include/safe_math.h:461:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x555dff130da8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x555dff1313a8 <line:462:1, line:470:1>
|   `-ReturnStmt 0x555dff131398 <line:464:3, line:469:15>
|     `-ConditionalOperator 0x555dff131368 <line:466:5, line:469:15> 'int64_t':'long'
|       |-ParenExpr 0x555dff131220 <line:466:5, col:57> 'int'
|       | `-BinaryOperator 0x555dff131200 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x555dff130f90 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff130f70 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x555dff130f40 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff130f00 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff130da8 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x555dff130f58 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x555dff130f20 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff1311e0 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x555dff1311c0 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x555dff1310b8 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x555dff131098 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x555dff131080 </usr/include/safe_math.h:466:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x555dff130fb0 <col:22> 'int64_t':'long' lvalue ParmVar 0x555dff130d30 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x555dff131060 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x555dff131040 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x555dff130ff0 <col:22, <scratch space>:113:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x555dff130fd0 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x555dff131028 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x555dff131008 <col:54> 'int' 1
|       |       `-ParenExpr 0x555dff1311a0 </usr/include/safe_math.h:466:43, col:55> 'int'
|       |         `-BinaryOperator 0x555dff131180 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x555dff131150 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff1310d8 <col:44> 'int64_t':'long' lvalue ParmVar 0x555dff130da8 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x555dff131168 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x555dff131130 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x555dff131118 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x555dff1310f8 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x555dff131350 <line:467:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff131280 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff131260 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff131240 </usr/include/safe_math.h:467:16> 'int64_t':'long' lvalue ParmVar 0x555dff130d30 'si1' 'int64_t':'long'
|       `-ParenExpr 0x555dff131330 <line:469:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x555dff131310 <col:6, col:12> 'int64_t':'long' '%'
|           |-ImplicitCastExpr 0x555dff1312e0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff1312a0 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff130d30 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x555dff1312f8 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff1312c0 <col:12> 'int64_t':'long' lvalue ParmVar 0x555dff130da8 'si2' 'int64_t':'long'
|-FunctionDecl 0x555dff1314e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:482:1> <scratch space>:114:1 safe_div_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x555dff1313d0 </usr/include/safe_math.h:473:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x555dff131448 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x555dff131a48 <line:474:1, line:482:1>
|   `-ReturnStmt 0x555dff131a38 <line:476:3, line:481:15>
|     `-ConditionalOperator 0x555dff131a08 <line:478:5, line:481:15> 'int64_t':'long'
|       |-ParenExpr 0x555dff1318c0 <line:478:5, col:57> 'int'
|       | `-BinaryOperator 0x555dff1318a0 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x555dff131630 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff131610 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x555dff1315e0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff1315a0 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff131448 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x555dff1315f8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x555dff1315c0 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff131880 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x555dff131860 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x555dff131758 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x555dff131738 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x555dff131720 </usr/include/safe_math.h:478:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x555dff131650 <col:22> 'int64_t':'long' lvalue ParmVar 0x555dff1313d0 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x555dff131700 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x555dff1316e0 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x555dff131690 <col:22, <scratch space>:115:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x555dff131670 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x555dff1316c8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x555dff1316a8 <col:54> 'int' 1
|       |       `-ParenExpr 0x555dff131840 </usr/include/safe_math.h:478:43, col:55> 'int'
|       |         `-BinaryOperator 0x555dff131820 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x555dff1317f0 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x555dff131778 <col:44> 'int64_t':'long' lvalue ParmVar 0x555dff131448 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x555dff131808 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x555dff1317d0 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x555dff1317b8 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x555dff131798 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x555dff1319f0 <line:479:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff131920 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff131900 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff1318e0 </usr/include/safe_math.h:479:16> 'int64_t':'long' lvalue ParmVar 0x555dff1313d0 'si1' 'int64_t':'long'
|       `-ParenExpr 0x555dff1319d0 <line:481:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x555dff1319b0 <col:6, col:12> 'int64_t':'long' '/'
|           |-ImplicitCastExpr 0x555dff131980 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff131940 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff1313d0 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x555dff131998 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff131960 <col:12> 'int64_t':'long' lvalue ParmVar 0x555dff131448 'si2' 'int64_t':'long'
|-FunctionDecl 0x555dff131c58 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:494:1> <scratch space>:116:1 safe_lshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x555dff131a70 </usr/include/safe_math.h:485:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x555dff131b00 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff132388 <line:486:1, line:494:1>
|   `-ReturnStmt 0x555dff132378 <line:488:3, line:493:26>
|     `-ConditionalOperator 0x555dff132348 <line:490:5, line:493:26> 'int64_t':'long'
|       |-ParenExpr 0x555dff1321a0 <line:490:5, col:102> 'int'
|       | `-BinaryOperator 0x555dff132180 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x555dff131fd0 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x555dff131eb8 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x555dff131da0 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x555dff131d80 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x555dff131d50 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x555dff131d10 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff131a70 'left' 'int64_t':'long'
|       |   | | |   `-ImplicitCastExpr 0x555dff131d68 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |     `-IntegerLiteral 0x555dff131d30 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x555dff131e98 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x555dff131e78 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x555dff131e38 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x555dff131e10 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x555dff131df8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x555dff131dc0 <col:27> 'int' lvalue ParmVar 0x555dff131b00 'right' 'int'
|       |   | |     `-IntegerLiteral 0x555dff131e58 <col:36> 'int' 0
|       |   | `-ParenExpr 0x555dff131fb0 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x555dff131f90 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x555dff131f50 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff131f28 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff131f10 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff131ed8 <col:49> 'int' lvalue ParmVar 0x555dff131b00 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff131f70 <col:59> 'int' 32
|       |   `-ParenExpr 0x555dff132160 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x555dff132140 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff132128 <col:67> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff131ff0 <col:67> 'int64_t':'long' lvalue ParmVar 0x555dff131a70 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x555dff132108 <col:74, col:100> 'long'
|       |         `-BinaryOperator 0x555dff1320e8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:490:99> 'long' '>>'
|       |           |-ParenExpr 0x555dff132030 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x555dff132010 <<scratch space>:117:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x555dff1320c8 </usr/include/safe_math.h:490:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x555dff1320a0 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff132088 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff132050 <col:94> 'int' lvalue ParmVar 0x555dff131b00 'right' 'int'
|       |-ImplicitCastExpr 0x555dff132330 <line:491:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff132200 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff1321e0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff1321c0 </usr/include/safe_math.h:491:16> 'int64_t':'long' lvalue ParmVar 0x555dff131a70 'left' 'int64_t':'long'
|       `-ParenExpr 0x555dff132310 <line:493:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x555dff1322f0 <col:6, col:25> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x555dff1322d8 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff132220 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff131a70 'left' 'int64_t':'long'
|           `-ParenExpr 0x555dff1322b8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff132290 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff132278 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff132240 <col:20> 'int' lvalue ParmVar 0x555dff131b00 'right' 'int'
|-FunctionDecl 0x555dff132588 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:506:1> <scratch space>:118:1 safe_lshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1323b0 </usr/include/safe_math.h:497:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x555dff132430 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff132bb8 <line:498:1, line:506:1>
|   `-ReturnStmt 0x555dff132ba8 <line:500:3, line:505:35>
|     `-ConditionalOperator 0x555dff132b78 <line:502:5, line:505:35> 'int64_t':'long'
|       |-ParenExpr 0x555dff1329d0 <line:502:5, col:98> 'int'
|       | `-BinaryOperator 0x555dff1329b0 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x555dff132800 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x555dff1326d0 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x555dff1326b0 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x555dff132680 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x555dff132640 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff1323b0 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x555dff132698 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x555dff132660 <col:14> 'int' 0
|       |   | `-ParenExpr 0x555dff1327e0 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x555dff1327c0 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x555dff132768 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x555dff132740 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff132728 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff1326f0 <col:36> 'unsigned int' lvalue ParmVar 0x555dff132430 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x555dff1327a8 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x555dff132788 <col:46> 'int' 32
|       |   `-ParenExpr 0x555dff132990 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x555dff132970 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff132958 <col:54> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff132820 <col:54> 'int64_t':'long' lvalue ParmVar 0x555dff1323b0 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x555dff132938 <col:61, col:96> 'long'
|       |         `-BinaryOperator 0x555dff132918 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:502:95> 'long' '>>'
|       |           |-ParenExpr 0x555dff132860 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x555dff132840 <<scratch space>:119:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x555dff1328f8 </usr/include/safe_math.h:502:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x555dff1328d0 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff1328b8 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff132880 <col:90> 'unsigned int' lvalue ParmVar 0x555dff132430 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x555dff132b60 <line:503:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff132a30 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff132a10 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff1329f0 </usr/include/safe_math.h:503:16> 'int64_t':'long' lvalue ParmVar 0x555dff1323b0 'left' 'int64_t':'long'
|       `-ParenExpr 0x555dff132b40 <line:505:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x555dff132b20 <col:6, col:34> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x555dff132b08 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff132a50 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff1323b0 'left' 'int64_t':'long'
|           `-ParenExpr 0x555dff132ae8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff132ac0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff132aa8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff132a70 <col:29> 'unsigned int' lvalue ParmVar 0x555dff132430 'right' 'unsigned int'
|-FunctionDecl 0x555dff132d00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:518:1> <scratch space>:120:1 safe_rshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x555dff132be0 </usr/include/safe_math.h:509:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x555dff132c60 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff133280 <line:510:1, line:518:1>
|   `-ReturnStmt 0x555dff133270 <line:512:3, line:517:26>
|     `-ConditionalOperator 0x555dff133240 <line:514:5, line:517:26> 'int64_t':'long'
|       |-ParenExpr 0x555dff133098 <line:514:5, col:62> 'int'
|       | `-BinaryOperator 0x555dff133078 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x555dff132f60 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x555dff132e48 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x555dff132e28 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x555dff132df8 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x555dff132db8 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff132be0 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x555dff132e10 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x555dff132dd8 <col:14> 'int' 0
|       |   | `-ParenExpr 0x555dff132f40 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x555dff132f20 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x555dff132ee0 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff132eb8 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff132ea0 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff132e68 <col:27> 'int' lvalue ParmVar 0x555dff132c60 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff132f00 <col:36> 'int' 0
|       |   `-ParenExpr 0x555dff133058 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x555dff133038 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x555dff132ff8 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x555dff132fd0 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff132fb8 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff132f80 <col:49> 'int' lvalue ParmVar 0x555dff132c60 'right' 'int'
|       |       `-IntegerLiteral 0x555dff133018 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x555dff133228 <line:515:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff1330f8 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff1330d8 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff1330b8 </usr/include/safe_math.h:515:16> 'int64_t':'long' lvalue ParmVar 0x555dff132be0 'left' 'int64_t':'long'
|       `-ParenExpr 0x555dff133208 <line:517:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x555dff1331e8 <col:6, col:25> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x555dff1331d0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff133118 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff132be0 'left' 'int64_t':'long'
|           `-ParenExpr 0x555dff1331b0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff133188 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff133170 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff133138 <col:20> 'int' lvalue ParmVar 0x555dff132c60 'right' 'int'
|-FunctionDecl 0x555dff1333c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:530:1> <scratch space>:121:1 safe_rshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1332a8 </usr/include/safe_math.h:521:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x555dff133328 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff133848 <line:522:1, line:530:1>
|   `-ReturnStmt 0x555dff133838 <line:524:3, line:529:35>
|     `-ConditionalOperator 0x555dff133808 <line:526:5, line:529:35> 'int64_t':'long'
|       |-ParenExpr 0x555dff133660 <line:526:5, col:49> 'int'
|       | `-BinaryOperator 0x555dff133640 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x555dff133510 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x555dff1334f0 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x555dff1334c0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff133480 <col:7> 'int64_t':'long' lvalue ParmVar 0x555dff1332a8 'left' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x555dff1334d8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x555dff1334a0 <col:14> 'int' 0
|       |   `-ParenExpr 0x555dff133620 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x555dff133600 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x555dff1335a8 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x555dff133580 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff133568 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff133530 <col:36> 'unsigned int' lvalue ParmVar 0x555dff133328 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x555dff1335e8 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x555dff1335c8 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x555dff1337f0 <line:527:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x555dff1336c0 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x555dff1336a0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x555dff133680 </usr/include/safe_math.h:527:16> 'int64_t':'long' lvalue ParmVar 0x555dff1332a8 'left' 'int64_t':'long'
|       `-ParenExpr 0x555dff1337d0 <line:529:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x555dff1337b0 <col:6, col:34> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x555dff133798 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff1336e0 <col:6> 'int64_t':'long' lvalue ParmVar 0x555dff1332a8 'left' 'int64_t':'long'
|           `-ParenExpr 0x555dff133778 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff133750 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff133738 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff133700 <col:29> 'unsigned int' lvalue ParmVar 0x555dff133328 'right' 'unsigned int'
|-FunctionDecl 0x555dff133a20 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:543:1> <scratch space>:122:1 safe_unary_minus_func_uint8_t_u 'uint8_t (uint8_t)' static
| |-ParmVarDecl 0x555dff1338d0 </usr/include/safe_math.h:539:39, col:47> col:47 used ui 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff134b90 <line:540:1, line:543:1>
|   `-ReturnStmt 0x555dff134b80 <line:542:3, col:11>
|     `-ImplicitCastExpr 0x555dff134b68 <col:10, col:11> 'uint8_t':'unsigned char' <IntegralCast>
|       `-UnaryOperator 0x555dff134b50 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x555dff134b38 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff134b20 <col:11> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x555dff133ad0 <col:11> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff1338d0 'ui' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff134d88 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:550:1> <scratch space>:123:1 safe_add_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x555dff134bb8 </usr/include/safe_math.h:546:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff134c30 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff134f28 <line:547:1, line:550:1>
|   `-ReturnStmt 0x555dff134f18 <line:549:3, col:16>
|     `-ImplicitCastExpr 0x555dff134f00 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x555dff134ee0 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x555dff134e98 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff134e80 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff134e40 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff134bb8 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x555dff134ec8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff134eb0 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x555dff134e60 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff134c30 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff135068 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:557:1> <scratch space>:124:1 safe_sub_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x555dff134f50 </usr/include/safe_math.h:553:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff134fc8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff135208 <line:554:1, line:557:1>
|   `-ReturnStmt 0x555dff1351f8 <line:556:3, col:16>
|     `-ImplicitCastExpr 0x555dff1351e0 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x555dff1351c0 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x555dff135178 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff135160 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff135120 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff134f50 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x555dff1351a8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff135190 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x555dff135140 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff134fc8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff135348 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:564:1> <scratch space>:125:1 safe_mul_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x555dff135230 </usr/include/safe_math.h:560:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff1352a8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff135578 <line:561:1, line:564:1>
|   `-ReturnStmt 0x555dff135568 <line:563:3, col:50>
|     `-ImplicitCastExpr 0x555dff135550 <col:10, col:50> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x555dff135530 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x555dff135478 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x555dff135450 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x555dff135438 <col:25> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x555dff135400 <col:25> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135230 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff135510 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x555dff1354e8 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff1354d0 <col:47> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x555dff135498 <col:47> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff1352a8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff1356b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:576:1> <scratch space>:126:1 safe_mod_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x555dff1355a0 </usr/include/safe_math.h:567:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff135618 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff1359e8 <line:568:1, line:576:1>
|   `-ReturnStmt 0x555dff1359d8 <line:570:3, line:575:15>
|     `-ImplicitCastExpr 0x555dff1359c0 <line:572:5, line:575:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff135990 <line:572:5, line:575:15> 'int'
|         |-ParenExpr 0x555dff135800 <line:572:5, col:14> 'int'
|         | `-BinaryOperator 0x555dff1357e0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x555dff1357c8 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x555dff1357b0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x555dff135770 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135618 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x555dff135790 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x555dff135978 <line:573:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff135960 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff135860 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff135840 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff135820 </usr/include/safe_math.h:573:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff1355a0 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff135940 <line:575:5, col:15> 'int'
|           `-BinaryOperator 0x555dff135920 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x555dff1358d8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff1358c0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff135880 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff1355a0 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x555dff135908 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff1358f0 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff1358a0 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135618 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff135b28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:588:1> <scratch space>:127:1 safe_div_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x555dff135a10 </usr/include/safe_math.h:579:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff135a88 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff135e58 <line:580:1, line:588:1>
|   `-ReturnStmt 0x555dff135e48 <line:582:3, line:587:15>
|     `-ImplicitCastExpr 0x555dff135e30 <line:584:5, line:587:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff135e00 <line:584:5, line:587:15> 'int'
|         |-ParenExpr 0x555dff135c70 <line:584:5, col:14> 'int'
|         | `-BinaryOperator 0x555dff135c50 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x555dff135c38 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x555dff135c20 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x555dff135be0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135a88 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x555dff135c00 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x555dff135de8 <line:585:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff135dd0 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff135cd0 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff135cb0 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff135c90 </usr/include/safe_math.h:585:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135a10 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff135db0 <line:587:5, col:15> 'int'
|           `-BinaryOperator 0x555dff135d90 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x555dff135d48 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff135d30 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff135cf0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135a10 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x555dff135d78 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff135d60 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff135d10 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135a88 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x555dff136058 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:600:1> <scratch space>:128:1 safe_lshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x555dff135e80 </usr/include/safe_math.h:591:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff135f00 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff136718 <line:592:1, line:600:1>
|   `-ReturnStmt 0x555dff136708 <line:594:3, line:599:26>
|     `-ImplicitCastExpr 0x555dff1366f0 <line:596:5, line:599:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff1366c0 <line:596:5, line:599:26> 'int'
|         |-ParenExpr 0x555dff1364e8 <line:596:5, col:88> 'int'
|         | `-BinaryOperator 0x555dff1364c8 <col:6, col:87> 'int' '||'
|         |   |-BinaryOperator 0x555dff136300 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x555dff1361e8 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x555dff1361c8 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x555dff136188 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x555dff136160 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x555dff136148 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x555dff136110 <col:13> 'int' lvalue ParmVar 0x555dff135f00 'right' 'int'
|         |   | |   `-IntegerLiteral 0x555dff1361a8 <col:22> 'int' 0
|         |   | `-ParenExpr 0x555dff1362e0 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x555dff1362c0 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x555dff136280 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff136258 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff136240 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff136208 <col:35> 'int' lvalue ParmVar 0x555dff135f00 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff1362a0 <col:45> 'int' 32
|         |   `-ParenExpr 0x555dff1364a8 <col:52, col:87> 'int'
|         |     `-BinaryOperator 0x555dff136488 <col:53, col:86> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff136470 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff136458 <col:53> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff136320 <col:53> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135e80 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x555dff136438 <col:60, col:86> 'int'
|         |         `-BinaryOperator 0x555dff136418 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:596:85> 'int' '>>'
|         |           |-ParenExpr 0x555dff136360 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x555dff136340 <col:22> 'int' 255
|         |           `-ParenExpr 0x555dff1363f8 </usr/include/safe_math.h:596:74, col:85> 'int'
|         |             `-CStyleCastExpr 0x555dff1363d0 <col:75, col:80> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff1363b8 <col:80> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff136380 <col:80> 'int' lvalue ParmVar 0x555dff135f00 'right' 'int'
|         |-ImplicitCastExpr 0x555dff1366a8 <line:597:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff136690 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff136548 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff136528 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff136508 </usr/include/safe_math.h:597:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135e80 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff136670 <line:599:5, col:26> 'int'
|           `-BinaryOperator 0x555dff136650 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff136638 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff136620 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff136568 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff135e80 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x555dff136600 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff1365d8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff1365c0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff136588 <col:20> 'int' lvalue ParmVar 0x555dff135f00 'right' 'int'
|-FunctionDecl 0x555dff136918 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:612:1> <scratch space>:129:1 safe_lshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x555dff136740 </usr/include/safe_math.h:603:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff1367c0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff136ee8 <line:604:1, line:612:1>
|   `-ReturnStmt 0x555dff136ed8 <line:606:3, line:611:35>
|     `-ImplicitCastExpr 0x555dff136ec0 <line:608:5, line:611:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff136e90 <line:608:5, line:611:35> 'int'
|         |-ParenExpr 0x555dff136cb8 <line:608:5, col:84> 'int'
|         | `-BinaryOperator 0x555dff136c98 <col:6, col:83> 'int' '||'
|         |   |-ParenExpr 0x555dff136ac0 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x555dff136aa0 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x555dff136a48 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x555dff136a20 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x555dff136a08 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x555dff1369d0 <col:22> 'unsigned int' lvalue ParmVar 0x555dff1367c0 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x555dff136a88 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x555dff136a68 <col:32> 'int' 32
|         |   `-ParenExpr 0x555dff136c78 <col:39, col:83> 'int'
|         |     `-BinaryOperator 0x555dff136c58 <col:40, col:82> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff136c40 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff136c28 <col:40> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff136ae0 <col:40> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff136740 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x555dff136c08 <col:47, col:82> 'int'
|         |         `-BinaryOperator 0x555dff136be8 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:608:81> 'int' '>>'
|         |           |-ParenExpr 0x555dff136b30 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x555dff136b00 <col:22> 'int' 255
|         |           `-ParenExpr 0x555dff136bc8 </usr/include/safe_math.h:608:61, col:81> 'unsigned int'
|         |             `-CStyleCastExpr 0x555dff136ba0 <col:62, col:76> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff136b88 <col:76> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff136b50 <col:76> 'unsigned int' lvalue ParmVar 0x555dff1367c0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x555dff136e78 <line:609:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff136e60 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff136d18 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff136cf8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff136cd8 </usr/include/safe_math.h:609:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff136740 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff136e40 <line:611:5, col:35> 'int'
|           `-BinaryOperator 0x555dff136e20 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff136e08 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff136df0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff136d38 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff136740 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x555dff136dd0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff136da8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff136d90 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff136d58 <col:29> 'unsigned int' lvalue ParmVar 0x555dff1367c0 'right' 'unsigned int'
|-FunctionDecl 0x555dff137030 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:624:1> <scratch space>:130:1 safe_rshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x555dff136f10 </usr/include/safe_math.h:615:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff136f90 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x555dff137528 <line:616:1, line:624:1>
|   `-ReturnStmt 0x555dff137518 <line:618:3, line:623:26>
|     `-ImplicitCastExpr 0x555dff137500 <line:620:5, line:623:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff1374d0 <line:620:5, line:623:26> 'int'
|         |-ParenExpr 0x555dff1372f8 <line:620:5, col:48> 'int'
|         | `-BinaryOperator 0x555dff1372d8 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x555dff1371c0 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x555dff1371a0 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x555dff137160 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x555dff137138 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x555dff137120 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x555dff1370e8 <col:13> 'int' lvalue ParmVar 0x555dff136f90 'right' 'int'
|         |   |   `-IntegerLiteral 0x555dff137180 <col:22> 'int' 0
|         |   `-ParenExpr 0x555dff1372b8 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x555dff137298 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x555dff137258 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x555dff137230 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff137218 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff1371e0 <col:35> 'int' lvalue ParmVar 0x555dff136f90 'right' 'int'
|         |       `-IntegerLiteral 0x555dff137278 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x555dff1374b8 <line:621:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff1374a0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff137358 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff137338 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff137318 </usr/include/safe_math.h:621:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff136f10 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff137480 <line:623:5, col:26> 'int'
|           `-BinaryOperator 0x555dff137460 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff137448 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff137430 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff137378 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff136f10 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x555dff137410 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff1373e8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff1373d0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff137398 <col:20> 'int' lvalue ParmVar 0x555dff136f90 'right' 'int'
|-FunctionDecl 0x555dff137670 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:636:1> <scratch space>:131:1 safe_rshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x555dff137550 </usr/include/safe_math.h:627:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x555dff1375d0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x555dff137a48 <line:628:1, line:636:1>
|   `-ReturnStmt 0x555dff137a38 <line:630:3, line:635:35>
|     `-ImplicitCastExpr 0x555dff137a20 <line:632:5, line:635:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x555dff1379f0 <line:632:5, line:635:35> 'int'
|         |-ParenExpr 0x555dff137818 <line:632:5, col:33> 'int'
|         | `-BinaryOperator 0x555dff1377f8 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x555dff1377a0 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x555dff137778 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x555dff137760 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x555dff137728 <col:21> 'unsigned int' lvalue ParmVar 0x555dff1375d0 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x555dff1377e0 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x555dff1377c0 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x555dff1379d8 <line:633:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff1379c0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x555dff137878 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x555dff137858 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x555dff137838 </usr/include/safe_math.h:633:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff137550 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x555dff1379a0 <line:635:5, col:35> 'int'
|           `-BinaryOperator 0x555dff137980 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff137968 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff137950 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff137898 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff137550 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x555dff137930 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff137908 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff1378f0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff1378b8 <col:29> 'unsigned int' lvalue ParmVar 0x555dff1375d0 'right' 'unsigned int'
|-FunctionDecl 0x555dff137c20 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:645:1> <scratch space>:132:1 safe_unary_minus_func_uint16_t_u 'uint16_t (uint16_t)' static
| |-ParmVarDecl 0x555dff137ad0 </usr/include/safe_math.h:641:40, col:49> col:49 used ui 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff137d60 <line:642:1, line:645:1>
|   `-ReturnStmt 0x555dff137d50 <line:644:3, col:11>
|     `-ImplicitCastExpr 0x555dff137d38 <col:10, col:11> 'uint16_t':'unsigned short' <IntegralCast>
|       `-UnaryOperator 0x555dff137d20 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x555dff137d08 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff137cf0 <col:11> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x555dff137cd0 <col:11> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff137ad0 'ui' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff137f58 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:652:1> <scratch space>:133:1 safe_add_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x555dff137d88 </usr/include/safe_math.h:648:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff137e00 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff1380f8 <line:649:1, line:652:1>
|   `-ReturnStmt 0x555dff1380e8 <line:651:3, col:16>
|     `-ImplicitCastExpr 0x555dff1380d0 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x555dff1380b0 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x555dff138068 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff138050 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff138010 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff137d88 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x555dff138098 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff138080 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x555dff138030 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff137e00 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff138238 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:659:1> <scratch space>:134:1 safe_sub_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x555dff138120 </usr/include/safe_math.h:655:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff138198 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff1383d8 <line:656:1, line:659:1>
|   `-ReturnStmt 0x555dff1383c8 <line:658:3, col:16>
|     `-ImplicitCastExpr 0x555dff1383b0 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x555dff138390 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x555dff138348 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff138330 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff1382f0 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138120 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x555dff138378 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x555dff138360 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x555dff138310 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138198 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff138518 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:666:1> <scratch space>:135:1 safe_mul_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x555dff138400 </usr/include/safe_math.h:662:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff138478 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff138748 <line:663:1, line:666:1>
|   `-ReturnStmt 0x555dff138738 <line:665:3, col:50>
|     `-ImplicitCastExpr 0x555dff138720 <col:10, col:50> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x555dff138700 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x555dff138648 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x555dff138620 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x555dff138608 <col:25> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x555dff1385d0 <col:25> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138400 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff1386e0 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x555dff1386b8 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff1386a0 <col:47> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x555dff138668 <col:47> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138478 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff138888 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:678:1> <scratch space>:136:1 safe_mod_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x555dff138770 </usr/include/safe_math.h:669:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff1387e8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff0a0358 <line:670:1, line:678:1>
|   `-ReturnStmt 0x555dff0a0348 <line:672:3, line:677:15>
|     `-ImplicitCastExpr 0x555dff0a0330 <line:674:5, line:677:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff0a0300 <line:674:5, line:677:15> 'int'
|         |-ParenExpr 0x555dff1389d0 <line:674:5, col:14> 'int'
|         | `-BinaryOperator 0x555dff1389b0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x555dff138998 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x555dff138980 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x555dff138940 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff1387e8 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x555dff138960 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x555dff0a02e8 <line:675:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff0a02d0 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff138a30 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff138a10 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff1389f0 </usr/include/safe_math.h:675:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138770 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff138b10 <line:677:5, col:15> 'int'
|           `-BinaryOperator 0x555dff138af0 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x555dff138aa8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff138a90 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff138a50 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff138770 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x555dff138ad8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff138ac0 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff138a70 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff1387e8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff0a0498 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:690:1> <scratch space>:137:1 safe_div_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x555dff0a0380 </usr/include/safe_math.h:681:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff0a03f8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x555dff0a07c8 <line:682:1, line:690:1>
|   `-ReturnStmt 0x555dff0a07b8 <line:684:3, line:689:15>
|     `-ImplicitCastExpr 0x555dff0a07a0 <line:686:5, line:689:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff0a0770 <line:686:5, line:689:15> 'int'
|         |-ParenExpr 0x555dff0a05e0 <line:686:5, col:14> 'int'
|         | `-BinaryOperator 0x555dff0a05c0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x555dff0a05a8 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x555dff0a0590 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x555dff0a0550 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a03f8 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x555dff0a0570 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x555dff0a0758 <line:687:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff0a0740 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff0a0640 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff0a0620 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff0a0600 </usr/include/safe_math.h:687:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a0380 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff0a0720 <line:689:5, col:15> 'int'
|           `-BinaryOperator 0x555dff0a0700 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x555dff0a06b8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff0a06a0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff0a0660 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a0380 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x555dff0a06e8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x555dff0a06d0 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x555dff0a0680 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a03f8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x555dff0a09c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:702:1> <scratch space>:138:1 safe_lshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x555dff0a07f0 </usr/include/safe_math.h:693:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff0a0870 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff0a1088 <line:694:1, line:702:1>
|   `-ReturnStmt 0x555dff0a1078 <line:696:3, line:701:26>
|     `-ImplicitCastExpr 0x555dff0a1060 <line:698:5, line:701:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff0a1030 <line:698:5, line:701:26> 'int'
|         |-ParenExpr 0x555dff0a0e58 <line:698:5, col:89> 'int'
|         | `-BinaryOperator 0x555dff0a0e38 <col:6, col:88> 'int' '||'
|         |   |-BinaryOperator 0x555dff0a0c70 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x555dff0a0b58 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x555dff0a0b38 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x555dff0a0af8 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x555dff0a0ad0 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x555dff0a0ab8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x555dff0a0a80 <col:13> 'int' lvalue ParmVar 0x555dff0a0870 'right' 'int'
|         |   | |   `-IntegerLiteral 0x555dff0a0b18 <col:22> 'int' 0
|         |   | `-ParenExpr 0x555dff0a0c50 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x555dff0a0c30 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x555dff0a0bf0 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x555dff0a0bc8 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x555dff0a0bb0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x555dff0a0b78 <col:35> 'int' lvalue ParmVar 0x555dff0a0870 'right' 'int'
|         |   |     `-IntegerLiteral 0x555dff0a0c10 <col:45> 'int' 32
|         |   `-ParenExpr 0x555dff0a0e18 <col:52, col:88> 'int'
|         |     `-BinaryOperator 0x555dff0a0df8 <col:53, col:87> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff0a0de0 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff0a0dc8 <col:53> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff0a0c90 <col:53> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a07f0 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x555dff0a0da8 <col:60, col:87> 'int'
|         |         `-BinaryOperator 0x555dff0a0d88 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:698:86> 'int' '>>'
|         |           |-ParenExpr 0x555dff0a0cd0 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x555dff0a0cb0 <col:23> 'int' 65535
|         |           `-ParenExpr 0x555dff0a0d68 </usr/include/safe_math.h:698:75, col:86> 'int'
|         |             `-CStyleCastExpr 0x555dff0a0d40 <col:76, col:81> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff0a0d28 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff0a0cf0 <col:81> 'int' lvalue ParmVar 0x555dff0a0870 'right' 'int'
|         |-ImplicitCastExpr 0x555dff0a1018 <line:699:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff0a1000 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff0a0eb8 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff0a0e98 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff0a0e78 </usr/include/safe_math.h:699:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a07f0 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff0a0fe0 <line:701:5, col:26> 'int'
|           `-BinaryOperator 0x555dff0a0fc0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff0a0fa8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff0a0f90 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff0a0ed8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a07f0 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x555dff0a0f70 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff0a0f48 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff0a0f30 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff0a0ef8 <col:20> 'int' lvalue ParmVar 0x555dff0a0870 'right' 'int'
|-FunctionDecl 0x555dff0a1288 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:714:1> <scratch space>:139:1 safe_lshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x555dff0a10b0 </usr/include/safe_math.h:705:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff0a1130 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff0a1848 <line:706:1, line:714:1>
|   `-ReturnStmt 0x555dff0a1838 <line:708:3, line:713:35>
|     `-ImplicitCastExpr 0x555dff0a1820 <line:710:5, line:713:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff0a17f0 <line:710:5, line:713:35> 'int'
|         |-ParenExpr 0x555dff0a1618 <line:710:5, col:85> 'int'
|         | `-BinaryOperator 0x555dff0a15f8 <col:6, col:84> 'int' '||'
|         |   |-ParenExpr 0x555dff0a1430 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x555dff0a1410 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x555dff0a13b8 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x555dff0a1390 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x555dff0a1378 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x555dff0a1340 <col:22> 'unsigned int' lvalue ParmVar 0x555dff0a1130 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x555dff0a13f8 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x555dff0a13d8 <col:32> 'int' 32
|         |   `-ParenExpr 0x555dff0a15d8 <col:39, col:84> 'int'
|         |     `-BinaryOperator 0x555dff0a15b8 <col:40, col:83> 'int' '>'
|         |       |-ImplicitCastExpr 0x555dff0a15a0 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x555dff0a1588 <col:40> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x555dff0a1450 <col:40> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a10b0 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x555dff0a1568 <col:47, col:83> 'int'
|         |         `-BinaryOperator 0x555dff0a1548 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:710:82> 'int' '>>'
|         |           |-ParenExpr 0x555dff0a1490 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x555dff0a1470 <col:23> 'int' 65535
|         |           `-ParenExpr 0x555dff0a1528 </usr/include/safe_math.h:710:62, col:82> 'unsigned int'
|         |             `-CStyleCastExpr 0x555dff0a1500 <col:63, col:77> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x555dff0a14e8 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x555dff0a14b0 <col:77> 'unsigned int' lvalue ParmVar 0x555dff0a1130 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x555dff0a17d8 <line:711:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff0a17c0 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff0a1678 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff0a1658 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff0a1638 </usr/include/safe_math.h:711:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a10b0 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff0a17a0 <line:713:5, col:35> 'int'
|           `-BinaryOperator 0x555dff0a1780 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x555dff0a1768 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff0a1750 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff0a1698 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a10b0 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x555dff0a1730 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff0a1708 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff0a16f0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff0a16b8 <col:29> 'unsigned int' lvalue ParmVar 0x555dff0a1130 'right' 'unsigned int'
|-FunctionDecl 0x555dff0a1990 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:726:1> <scratch space>:140:1 safe_rshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x555dff0a1870 </usr/include/safe_math.h:717:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff0a18f0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff0a1e88 <line:718:1, line:726:1>
|   `-ReturnStmt 0x555dff0a1e78 <line:720:3, line:725:26>
|     `-ImplicitCastExpr 0x555dff0a1e60 <line:722:5, line:725:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff0a1e30 <line:722:5, line:725:26> 'int'
|         |-ParenExpr 0x555dff0a1c58 <line:722:5, col:48> 'int'
|         | `-BinaryOperator 0x555dff0a1c38 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x555dff0a1b20 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x555dff0a1b00 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x555dff0a1ac0 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x555dff0a1a98 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x555dff0a1a80 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x555dff0a1a48 <col:13> 'int' lvalue ParmVar 0x555dff0a18f0 'right' 'int'
|         |   |   `-IntegerLiteral 0x555dff0a1ae0 <col:22> 'int' 0
|         |   `-ParenExpr 0x555dff0a1c18 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x555dff0a1bf8 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x555dff0a1bb8 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x555dff0a1b90 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x555dff0a1b78 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x555dff0a1b40 <col:35> 'int' lvalue ParmVar 0x555dff0a18f0 'right' 'int'
|         |       `-IntegerLiteral 0x555dff0a1bd8 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x555dff0a1e18 <line:723:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff0a1e00 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff0a1cb8 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff0a1c98 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff0a1c78 </usr/include/safe_math.h:723:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a1870 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff0a1de0 <line:725:5, col:26> 'int'
|           `-BinaryOperator 0x555dff0a1dc0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff0a1da8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff0a1d90 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff0a1cd8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a1870 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x555dff0a1d70 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x555dff0a1d48 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff0a1d30 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff0a1cf8 <col:20> 'int' lvalue ParmVar 0x555dff0a18f0 'right' 'int'
|-FunctionDecl 0x555dff0a1fd0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:738:1> <scratch space>:141:1 safe_rshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x555dff0a1eb0 </usr/include/safe_math.h:729:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x555dff0a1f30 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff13ec30 <line:730:1, line:738:1>
|   `-ReturnStmt 0x555dff13ec20 <line:732:3, line:737:35>
|     `-ImplicitCastExpr 0x555dff13ec08 <line:734:5, line:737:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x555dff13ebd8 <line:734:5, line:737:35> 'int'
|         |-ParenExpr 0x555dff0a2178 <line:734:5, col:33> 'int'
|         | `-BinaryOperator 0x555dff0a2158 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x555dff0a2100 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x555dff0a20d8 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x555dff0a20c0 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x555dff0a2088 <col:21> 'unsigned int' lvalue ParmVar 0x555dff0a1f30 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x555dff0a2140 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x555dff0a2120 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x555dff13ebc0 <line:735:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x555dff13eba8 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x555dff0a21d8 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x555dff0a21b8 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x555dff0a2198 </usr/include/safe_math.h:735:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a1eb0 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x555dff13eb88 <line:737:5, col:35> 'int'
|           `-BinaryOperator 0x555dff13eb68 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x555dff13eb50 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x555dff0a22b0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x555dff0a21f8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x555dff0a1eb0 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x555dff0a2290 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x555dff0a2268 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x555dff0a2250 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x555dff0a2218 <col:29> 'unsigned int' lvalue ParmVar 0x555dff0a1f30 'right' 'unsigned int'
|-FunctionDecl 0x555dff13eda0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:747:1> <scratch space>:142:1 safe_unary_minus_func_uint32_t_u 'uint32_t (uint32_t)' static
| |-ParmVarDecl 0x555dff13ec58 </usr/include/safe_math.h:743:40, col:49> col:49 used ui 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff13eeb0 <line:744:1, line:747:1>
|   `-ReturnStmt 0x555dff13eea0 <line:746:3, col:11>
|     `-UnaryOperator 0x555dff13ee88 <col:10, col:11> 'uint32_t':'unsigned int' prefix '-'
|       `-ImplicitCastExpr 0x555dff13ee70 <col:11> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x555dff13ee50 <col:11> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13ec58 'ui' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff13f0a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:754:1> <scratch space>:143:1 safe_add_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x555dff13eed8 </usr/include/safe_math.h:750:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff13ef50 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff13f200 <line:751:1, line:754:1>
|   `-ReturnStmt 0x555dff13f1f0 <line:753:3, col:16>
|     `-BinaryOperator 0x555dff13f1d0 <col:10, col:16> 'uint32_t':'unsigned int' '+'
|       |-ImplicitCastExpr 0x555dff13f1a0 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x555dff13f160 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13eed8 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x555dff13f1b8 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x555dff13f180 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13ef50 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff13f340 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:761:1> <scratch space>:144:1 safe_sub_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x555dff13f228 </usr/include/safe_math.h:757:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff13f2a0 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff13f498 <line:758:1, line:761:1>
|   `-ReturnStmt 0x555dff13f488 <line:760:3, col:16>
|     `-BinaryOperator 0x555dff13f468 <col:10, col:16> 'uint32_t':'unsigned int' '-'
|       |-ImplicitCastExpr 0x555dff13f438 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x555dff13f3f8 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f228 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x555dff13f450 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x555dff13f418 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f2a0 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff13f5d8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:768:1> <scratch space>:145:1 safe_mul_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x555dff13f4c0 </usr/include/safe_math.h:764:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff13f538 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff13f7f0 <line:765:1, line:768:1>
|   `-ReturnStmt 0x555dff13f7e0 <line:767:3, col:50>
|     `-BinaryOperator 0x555dff13f7c0 <col:10, col:50> 'unsigned int' '*'
|       |-ParenExpr 0x555dff13f708 <col:10, col:28> 'unsigned int'
|       | `-CStyleCastExpr 0x555dff13f6e0 <col:11, col:25> 'unsigned int' <NoOp>
|       |   `-ImplicitCastExpr 0x555dff13f6c8 <col:25> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |     `-DeclRefExpr 0x555dff13f690 <col:25> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f4c0 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff13f7a0 <col:32, col:50> 'unsigned int'
|         `-CStyleCastExpr 0x555dff13f778 <col:33, col:47> 'unsigned int' <NoOp>
|           `-ImplicitCastExpr 0x555dff13f760 <col:47> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|             `-DeclRefExpr 0x555dff13f728 <col:47> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f538 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff13f930 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:780:1> <scratch space>:146:1 safe_mod_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x555dff13f818 </usr/include/safe_math.h:771:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff13f890 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff13fc00 <line:772:1, line:780:1>
|   `-ReturnStmt 0x555dff13fbf0 <line:774:3, line:779:15>
|     `-ConditionalOperator 0x555dff13fbc0 <line:776:5, line:779:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff13fa78 <line:776:5, col:14> 'int'
|       | `-BinaryOperator 0x555dff13fa58 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff13fa28 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff13f9e8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f890 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x555dff13fa40 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff13fa08 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x555dff13fba8 <line:777:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff13fad8 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff13fab8 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff13fa98 </usr/include/safe_math.h:777:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f818 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff13fb88 <line:779:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff13fb68 <col:6, col:12> 'uint32_t':'unsigned int' '%'
|           |-ImplicitCastExpr 0x555dff13fb38 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff13faf8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f818 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x555dff13fb50 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff13fb18 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13f890 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff13fd40 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:792:1> <scratch space>:147:1 safe_div_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x555dff13fc28 </usr/include/safe_math.h:783:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff13fca0 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x555dff140010 <line:784:1, line:792:1>
|   `-ReturnStmt 0x555dff140000 <line:786:3, line:791:15>
|     `-ConditionalOperator 0x555dff13ffd0 <line:788:5, line:791:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff13fe88 <line:788:5, col:14> 'int'
|       | `-BinaryOperator 0x555dff13fe68 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff13fe38 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff13fdf8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13fca0 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x555dff13fe50 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff13fe18 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x555dff13ffb8 <line:789:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff13fee8 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff13fec8 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff13fea8 </usr/include/safe_math.h:789:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13fc28 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff13ff98 <line:791:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff13ff78 <col:6, col:12> 'uint32_t':'unsigned int' '/'
|           |-ImplicitCastExpr 0x555dff13ff48 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff13ff08 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13fc28 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x555dff13ff60 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x555dff13ff28 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff13fca0 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff140208 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:804:1> <scratch space>:148:1 safe_lshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x555dff140038 </usr/include/safe_math.h:795:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff1400b8 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff140868 <line:796:1, line:804:1>
|   `-ReturnStmt 0x555dff140858 <line:798:3, line:803:26>
|     `-ConditionalOperator 0x555dff140828 <line:800:5, line:803:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff140680 <line:800:5, col:89> 'int'
|       | `-BinaryOperator 0x555dff140660 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x555dff1404b0 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x555dff140398 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x555dff140378 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x555dff140338 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x555dff140310 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x555dff1402f8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x555dff1402c0 <col:13> 'int' lvalue ParmVar 0x555dff1400b8 'right' 'int'
|       |   | |   `-IntegerLiteral 0x555dff140358 <col:22> 'int' 0
|       |   | `-ParenExpr 0x555dff140490 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x555dff140470 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x555dff140430 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff140408 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff1403f0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff1403b8 <col:35> 'int' lvalue ParmVar 0x555dff1400b8 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff140450 <col:45> 'int' 32
|       |   `-ParenExpr 0x555dff140640 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x555dff140620 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff140608 <col:53> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff1404d0 <col:53> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140038 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x555dff1405e8 <col:60, col:87> 'unsigned int'
|       |         `-BinaryOperator 0x555dff1405c8 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:800:86> 'unsigned int' '>>'
|       |           |-ParenExpr 0x555dff140510 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x555dff1404f0 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x555dff1405a8 </usr/include/safe_math.h:800:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x555dff140580 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff140568 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff140530 <col:81> 'int' lvalue ParmVar 0x555dff1400b8 'right' 'int'
|       |-ImplicitCastExpr 0x555dff140810 <line:801:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff1406e0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff1406c0 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff1406a0 </usr/include/safe_math.h:801:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140038 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff1407f0 <line:803:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff1407d0 <col:6, col:25> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x555dff1407b8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff140700 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140038 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x555dff140798 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff140770 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff140758 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff140720 <col:20> 'int' lvalue ParmVar 0x555dff1400b8 'right' 'int'
|-FunctionDecl 0x555dff140a28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:816:1> <scratch space>:149:1 safe_lshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x555dff140890 </usr/include/safe_math.h:807:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff140910 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff141fc8 <line:808:1, line:816:1>
|   `-ReturnStmt 0x555dff141fb8 <line:810:3, line:815:35>
|     `-ConditionalOperator 0x555dff141f88 <line:812:5, line:815:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff141de0 <line:812:5, col:85> 'int'
|       | `-BinaryOperator 0x555dff141dc0 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x555dff141c10 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x555dff141bf0 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x555dff141b98 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x555dff141b70 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x555dff140b18 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x555dff140ae0 <col:22> 'unsigned int' lvalue ParmVar 0x555dff140910 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x555dff141bd8 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x555dff141bb8 <col:32> 'int' 32
|       |   `-ParenExpr 0x555dff141da0 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x555dff141d80 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff141d68 <col:40> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff141c30 <col:40> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140890 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x555dff141d48 <col:47, col:83> 'unsigned int'
|       |         `-BinaryOperator 0x555dff141d28 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:812:82> 'unsigned int' '>>'
|       |           |-ParenExpr 0x555dff141c70 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x555dff141c50 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x555dff141d08 </usr/include/safe_math.h:812:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x555dff141ce0 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff141cc8 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff141c90 <col:77> 'unsigned int' lvalue ParmVar 0x555dff140910 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x555dff141f70 <line:813:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff141e40 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff141e20 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff141e00 </usr/include/safe_math.h:813:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140890 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff141f50 <line:815:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff141f30 <col:6, col:34> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x555dff141f18 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff141e60 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff140890 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x555dff141ef8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff141ed0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff141eb8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff141e80 <col:29> 'unsigned int' lvalue ParmVar 0x555dff140910 'right' 'unsigned int'
|-FunctionDecl 0x555dff142110 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:828:1> <scratch space>:150:1 safe_rshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x555dff141ff0 </usr/include/safe_math.h:819:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff142070 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff1425c0 <line:820:1, line:828:1>
|   `-ReturnStmt 0x555dff1425b0 <line:822:3, line:827:26>
|     `-ConditionalOperator 0x555dff142580 <line:824:5, line:827:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff1423d8 <line:824:5, col:48> 'int'
|       | `-BinaryOperator 0x555dff1423b8 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x555dff1422a0 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x555dff142280 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x555dff142240 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x555dff142218 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x555dff142200 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x555dff1421c8 <col:13> 'int' lvalue ParmVar 0x555dff142070 'right' 'int'
|       |   |   `-IntegerLiteral 0x555dff142260 <col:22> 'int' 0
|       |   `-ParenExpr 0x555dff142398 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x555dff142378 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x555dff142338 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x555dff142310 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff1422f8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff1422c0 <col:35> 'int' lvalue ParmVar 0x555dff142070 'right' 'int'
|       |       `-IntegerLiteral 0x555dff142358 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x555dff142568 <line:825:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff142438 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff142418 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff1423f8 </usr/include/safe_math.h:825:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff141ff0 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff142548 <line:827:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff142528 <col:6, col:25> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x555dff142510 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff142458 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff141ff0 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x555dff1424f0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff1424c8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff1424b0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff142478 <col:20> 'int' lvalue ParmVar 0x555dff142070 'right' 'int'
|-FunctionDecl 0x555dff142708 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:840:1> <scratch space>:151:1 safe_rshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1425e8 </usr/include/safe_math.h:831:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x555dff142668 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff142a98 <line:832:1, line:840:1>
|   `-ReturnStmt 0x555dff142a88 <line:834:3, line:839:35>
|     `-ConditionalOperator 0x555dff142a58 <line:836:5, line:839:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x555dff1428b0 <line:836:5, col:33> 'int'
|       | `-BinaryOperator 0x555dff142890 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x555dff142838 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x555dff142810 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x555dff1427f8 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x555dff1427c0 <col:21> 'unsigned int' lvalue ParmVar 0x555dff142668 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x555dff142878 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff142858 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x555dff142a40 <line:837:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x555dff142910 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x555dff1428f0 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x555dff1428d0 </usr/include/safe_math.h:837:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff1425e8 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x555dff142a20 <line:839:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x555dff142a00 <col:6, col:34> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x555dff1429e8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff142930 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x555dff1425e8 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x555dff1429c8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff1429a0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff142988 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff142950 <col:29> 'unsigned int' lvalue ParmVar 0x555dff142668 'right' 'unsigned int'
|-FunctionDecl 0x555dff142c70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:850:1> <scratch space>:152:1 safe_unary_minus_func_uint64_t_u 'uint64_t (uint64_t)' static
| |-ParmVarDecl 0x555dff142b20 </usr/include/safe_math.h:846:40, col:49> col:49 used ui 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff142d80 <line:847:1, line:850:1>
|   `-ReturnStmt 0x555dff142d70 <line:849:3, col:11>
|     `-UnaryOperator 0x555dff142d58 <col:10, col:11> 'uint64_t':'unsigned long' prefix '-'
|       `-ImplicitCastExpr 0x555dff142d40 <col:11> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x555dff142d20 <col:11> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff142b20 'ui' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff142f78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:857:1> <scratch space>:153:1 safe_add_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x555dff142da8 </usr/include/safe_math.h:853:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff142e20 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff1430d0 <line:854:1, line:857:1>
|   `-ReturnStmt 0x555dff1430c0 <line:856:3, col:16>
|     `-BinaryOperator 0x555dff1430a0 <col:10, col:16> 'uint64_t':'unsigned long' '+'
|       |-ImplicitCastExpr 0x555dff143070 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x555dff143030 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff142da8 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x555dff143088 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x555dff143050 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff142e20 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff143210 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:864:1> <scratch space>:154:1 safe_sub_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x555dff1430f8 </usr/include/safe_math.h:860:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff143170 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff143368 <line:861:1, line:864:1>
|   `-ReturnStmt 0x555dff143358 <line:863:3, col:16>
|     `-BinaryOperator 0x555dff143338 <col:10, col:16> 'uint64_t':'unsigned long' '-'
|       |-ImplicitCastExpr 0x555dff143308 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x555dff1432c8 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff1430f8 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x555dff143320 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x555dff1432e8 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143170 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff1434a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:871:1> <scratch space>:155:1 safe_mul_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x555dff143390 </usr/include/safe_math.h:867:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff143408 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff1436d8 <line:868:1, line:871:1>
|   `-ReturnStmt 0x555dff1436c8 <line:870:3, col:62>
|     `-ImplicitCastExpr 0x555dff1436b0 <col:10, col:62> 'uint64_t':'unsigned long' <IntegralCast>
|       `-BinaryOperator 0x555dff143690 <col:10, col:62> 'unsigned long long' '*'
|         |-ParenExpr 0x555dff1435d8 <col:10, col:34> 'unsigned long long'
|         | `-CStyleCastExpr 0x555dff1435b0 <col:11, col:31> 'unsigned long long' <IntegralCast>
|         |   `-ImplicitCastExpr 0x555dff143598 <col:31> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x555dff143560 <col:31> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143390 'ui1' 'uint64_t':'unsigned long'
|         `-ParenExpr 0x555dff143670 <col:38, col:62> 'unsigned long long'
|           `-CStyleCastExpr 0x555dff143648 <col:39, col:59> 'unsigned long long' <IntegralCast>
|             `-ImplicitCastExpr 0x555dff143630 <col:59> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x555dff1435f8 <col:59> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143408 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff143818 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:883:1> <scratch space>:156:1 safe_mod_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x555dff143700 </usr/include/safe_math.h:874:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff143778 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff143ae8 <line:875:1, line:883:1>
|   `-ReturnStmt 0x555dff143ad8 <line:877:3, line:882:15>
|     `-ConditionalOperator 0x555dff143aa8 <line:879:5, line:882:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff143960 <line:879:5, col:14> 'int'
|       | `-BinaryOperator 0x555dff143940 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff143910 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff1438d0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143778 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x555dff143928 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff1438f0 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x555dff143a90 <line:880:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff1439c0 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff1439a0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff143980 </usr/include/safe_math.h:880:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143700 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff143a70 <line:882:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff143a50 <col:6, col:12> 'uint64_t':'unsigned long' '%'
|           |-ImplicitCastExpr 0x555dff143a20 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff1439e0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143700 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x555dff143a38 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff143a00 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143778 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff143c98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:895:1> <scratch space>:157:1 safe_div_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x555dff143b80 </usr/include/safe_math.h:886:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff143bf8 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff143f68 <line:887:1, line:895:1>
|   `-ReturnStmt 0x555dff143f58 <line:889:3, line:894:15>
|     `-ConditionalOperator 0x555dff143f28 <line:891:5, line:894:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff143de0 <line:891:5, col:14> 'int'
|       | `-BinaryOperator 0x555dff143dc0 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x555dff143d90 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x555dff143d50 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143bf8 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x555dff143da8 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff143d70 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x555dff143f10 <line:892:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff143e40 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff143e20 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff143e00 </usr/include/safe_math.h:892:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143b80 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff143ef0 <line:894:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff143ed0 <col:6, col:12> 'uint64_t':'unsigned long' '/'
|           |-ImplicitCastExpr 0x555dff143ea0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff143e60 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143b80 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x555dff143eb8 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x555dff143e80 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143bf8 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x555dff144168 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:907:1> <scratch space>:158:1 safe_lshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x555dff143f90 </usr/include/safe_math.h:898:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff144010 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff1447c8 <line:899:1, line:907:1>
|   `-ReturnStmt 0x555dff1447b8 <line:901:3, line:906:26>
|     `-ConditionalOperator 0x555dff144788 <line:903:5, line:906:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff1445e0 <line:903:5, col:89> 'int'
|       | `-BinaryOperator 0x555dff1445c0 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x555dff144410 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x555dff1442f8 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x555dff1442d8 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x555dff144298 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x555dff144270 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x555dff144258 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x555dff144220 <col:13> 'int' lvalue ParmVar 0x555dff144010 'right' 'int'
|       |   | |   `-IntegerLiteral 0x555dff1442b8 <col:22> 'int' 0
|       |   | `-ParenExpr 0x555dff1443f0 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x555dff1443d0 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x555dff144390 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x555dff144368 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x555dff144350 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x555dff144318 <col:35> 'int' lvalue ParmVar 0x555dff144010 'right' 'int'
|       |   |     `-IntegerLiteral 0x555dff1443b0 <col:45> 'int' 32
|       |   `-ParenExpr 0x555dff1445a0 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x555dff144580 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff144568 <col:53> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff144430 <col:53> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143f90 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x555dff144548 <col:60, col:87> 'unsigned long'
|       |         `-BinaryOperator 0x555dff144528 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:903:86> 'unsigned long' '>>'
|       |           |-ParenExpr 0x555dff144470 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x555dff144450 <<scratch space>:159:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x555dff144508 </usr/include/safe_math.h:903:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x555dff1444e0 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff1444c8 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff144490 <col:81> 'int' lvalue ParmVar 0x555dff144010 'right' 'int'
|       |-ImplicitCastExpr 0x555dff144770 <line:904:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff144640 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff144620 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff144600 </usr/include/safe_math.h:904:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143f90 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff144750 <line:906:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff144730 <col:6, col:25> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x555dff144718 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff144660 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff143f90 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x555dff1446f8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff1446d0 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff1446b8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff144680 <col:20> 'int' lvalue ParmVar 0x555dff144010 'right' 'int'
|-FunctionDecl 0x555dff1449c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:919:1> <scratch space>:160:1 safe_lshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x555dff1447f0 </usr/include/safe_math.h:910:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff144870 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff144f28 <line:911:1, line:919:1>
|   `-ReturnStmt 0x555dff144f18 <line:913:3, line:918:35>
|     `-ConditionalOperator 0x555dff144ee8 <line:915:5, line:918:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff144d40 <line:915:5, col:85> 'int'
|       | `-BinaryOperator 0x555dff144d20 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x555dff144b70 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x555dff144b50 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x555dff144af8 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x555dff144ad0 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x555dff144ab8 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x555dff144a80 <col:22> 'unsigned int' lvalue ParmVar 0x555dff144870 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x555dff144b38 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x555dff144b18 <col:32> 'int' 32
|       |   `-ParenExpr 0x555dff144d00 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x555dff144ce0 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x555dff144cc8 <col:40> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff144b90 <col:40> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff1447f0 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x555dff144ca8 <col:47, col:83> 'unsigned long'
|       |         `-BinaryOperator 0x555dff144c88 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:915:82> 'unsigned long' '>>'
|       |           |-ParenExpr 0x555dff144bd0 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x555dff144bb0 <<scratch space>:161:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x555dff144c68 </usr/include/safe_math.h:915:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x555dff144c40 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x555dff144c28 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x555dff144bf0 <col:77> 'unsigned int' lvalue ParmVar 0x555dff144870 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x555dff144ed0 <line:916:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff144da0 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff144d80 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff144d60 </usr/include/safe_math.h:916:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff1447f0 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff144eb0 <line:918:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff144e90 <col:6, col:34> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x555dff144e78 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff144dc0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff1447f0 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x555dff144e58 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff144e30 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff144e18 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff144de0 <col:29> 'unsigned int' lvalue ParmVar 0x555dff144870 'right' 'unsigned int'
|-FunctionDecl 0x555dff145070 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:931:1> <scratch space>:162:1 safe_rshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x555dff144f50 </usr/include/safe_math.h:922:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff144fd0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x555dff145520 <line:923:1, line:931:1>
|   `-ReturnStmt 0x555dff145510 <line:925:3, line:930:26>
|     `-ConditionalOperator 0x555dff1454e0 <line:927:5, line:930:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff145338 <line:927:5, col:48> 'int'
|       | `-BinaryOperator 0x555dff145318 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x555dff145200 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x555dff1451e0 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x555dff1451a0 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x555dff145178 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x555dff145160 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x555dff145128 <col:13> 'int' lvalue ParmVar 0x555dff144fd0 'right' 'int'
|       |   |   `-IntegerLiteral 0x555dff1451c0 <col:22> 'int' 0
|       |   `-ParenExpr 0x555dff1452f8 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x555dff1452d8 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x555dff145298 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x555dff145270 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x555dff145258 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x555dff145220 <col:35> 'int' lvalue ParmVar 0x555dff144fd0 'right' 'int'
|       |       `-IntegerLiteral 0x555dff1452b8 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x555dff1454c8 <line:928:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff145398 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff145378 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff145358 </usr/include/safe_math.h:928:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff144f50 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff1454a8 <line:930:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff145488 <col:6, col:25> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x555dff145470 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff1453b8 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff144f50 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x555dff145450 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x555dff145428 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x555dff145410 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff1453d8 <col:20> 'int' lvalue ParmVar 0x555dff144fd0 'right' 'int'
|-FunctionDecl 0x555dff145668 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:943:1> <scratch space>:163:1 safe_rshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x555dff145548 </usr/include/safe_math.h:934:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff1455c8 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x555dff1459f8 <line:935:1, line:943:1>
|   `-ReturnStmt 0x555dff1459e8 <line:937:3, line:942:35>
|     `-ConditionalOperator 0x555dff1459b8 <line:939:5, line:942:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x555dff145810 <line:939:5, col:33> 'int'
|       | `-BinaryOperator 0x555dff1457f0 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x555dff145798 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x555dff145770 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x555dff145758 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x555dff145720 <col:21> 'unsigned int' lvalue ParmVar 0x555dff1455c8 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x555dff1457d8 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff1457b8 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x555dff1459a0 <line:940:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x555dff145870 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x555dff145850 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x555dff145830 </usr/include/safe_math.h:940:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff145548 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x555dff145980 <line:942:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x555dff145960 <col:6, col:34> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x555dff145948 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff145890 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff145548 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x555dff145928 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x555dff145900 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x555dff1458e8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x555dff1458b0 <col:29> 'unsigned int' lvalue ParmVar 0x555dff1455c8 'right' 'unsigned int'
|-FunctionDecl 0x555dff145ac0 prev 0x555dff098310 <line:951:1, col:18> col:7 used fabsf 'float (float)'
| |-ParmVarDecl 0x555dff145a28 <col:13> col:18 'float'
| |-BuiltinAttr 0x555dff145bc0 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x555dff145bf0 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x555dff145c18 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x555dff145cf0 prev 0x555dff02b480 </usr/include/safe_math.h:952:1, col:19> col:8 used fabs 'double (double)'
| |-ParmVarDecl 0x555dff145c58 <col:13> col:19 'double'
| |-BuiltinAttr 0x555dff145dd0 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x555dff145e00 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x555dff145e28 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x555dff145fc0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:965:1> <scratch space>:164:1 safe_add_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x555dff145e68 </usr/include/safe_math.h:956:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x555dff145ee8 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x555dff146470 <line:957:1, line:965:1>
|   `-ReturnStmt 0x555dff146460 <line:959:3, line:964:15>
|     `-ConditionalOperator 0x555dff146430 <line:961:5, line:964:15> 'float'
|       |-ParenExpr 0x555dff146308 <line:961:5, col:59> 'int'
|       | `-BinaryOperator 0x555dff1462e8 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x555dff146238 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x555dff146220 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff146078 <col:6> 'float (float)' Function 0x555dff145ac0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x555dff1461c8 <col:12, col:38> 'float' '+'
|       |   |   |-ParenExpr 0x555dff146110 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x555dff1460f0 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x555dff146098 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x555dff1460d8 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff1460b8 <col:20> 'float' lvalue ParmVar 0x555dff145e68 'sf1' 'float'
|       |   |   `-ParenExpr 0x555dff1461a8 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x555dff146188 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x555dff146130 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x555dff146170 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff146150 <col:35> 'float' lvalue ParmVar 0x555dff145ee8 'sf2' 'float'
|       |   `-ParenExpr 0x555dff1462c8 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x555dff1462a8 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x555dff146268 </usr/include/safe_math.h:961:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x555dff146288 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x555dff146418 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x555dff146348 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x555dff146328 </usr/include/safe_math.h:962:15> 'float' lvalue ParmVar 0x555dff145e68 'sf1' 'float'
|       `-ParenExpr 0x555dff1463f8 <line:964:5, col:15> 'float'
|         `-BinaryOperator 0x555dff1463d8 <col:6, col:12> 'float' '+'
|           |-ImplicitCastExpr 0x555dff1463a8 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff146368 <col:6> 'float' lvalue ParmVar 0x555dff145e68 'sf1' 'float'
|           `-ImplicitCastExpr 0x555dff1463c0 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x555dff146388 <col:12> 'float' lvalue ParmVar 0x555dff145ee8 'sf2' 'float'
|-FunctionDecl 0x555dff1465c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:977:1> <scratch space>:2:1 safe_sub_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x555dff1464a0 </usr/include/safe_math.h:968:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x555dff146520 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x555dff146a40 <line:969:1, line:977:1>
|   `-ReturnStmt 0x555dff146a30 <line:971:3, line:976:15>
|     `-ConditionalOperator 0x555dff146a00 <line:973:5, line:976:15> 'float'
|       |-ParenExpr 0x555dff1468d8 <line:973:5, col:59> 'int'
|       | `-BinaryOperator 0x555dff1468b8 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x555dff146808 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x555dff1467f0 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff146680 <col:6> 'float (float)' Function 0x555dff145ac0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x555dff1467d0 <col:12, col:38> 'float' '-'
|       |   |   |-ParenExpr 0x555dff146718 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x555dff1466f8 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x555dff1466a0 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x555dff1466e0 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff1466c0 <col:20> 'float' lvalue ParmVar 0x555dff1464a0 'sf1' 'float'
|       |   |   `-ParenExpr 0x555dff1467b0 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x555dff146790 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x555dff146738 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x555dff146778 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff146758 <col:35> 'float' lvalue ParmVar 0x555dff146520 'sf2' 'float'
|       |   `-ParenExpr 0x555dff146898 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x555dff146878 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x555dff146838 </usr/include/safe_math.h:973:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x555dff146858 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x555dff1469e8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x555dff146918 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x555dff1468f8 </usr/include/safe_math.h:974:15> 'float' lvalue ParmVar 0x555dff1464a0 'sf1' 'float'
|       `-ParenExpr 0x555dff1469c8 <line:976:5, col:15> 'float'
|         `-BinaryOperator 0x555dff1469a8 <col:6, col:12> 'float' '-'
|           |-ImplicitCastExpr 0x555dff146978 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff146938 <col:6> 'float' lvalue ParmVar 0x555dff1464a0 'sf1' 'float'
|           `-ImplicitCastExpr 0x555dff146990 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x555dff146958 <col:12> 'float' lvalue ParmVar 0x555dff146520 'sf2' 'float'
|-FunctionDecl 0x555dff146b98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:993:1> <scratch space>:3:1 safe_mul_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x555dff146a70 </usr/include/safe_math.h:980:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x555dff146af0 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x555dff147070 <line:981:1, line:993:1>
|   `-ReturnStmt 0x555dff147060 <line:983:3, line:992:15>
|     `-ConditionalOperator 0x555dff147030 <line:986:5, line:992:15> 'float'
|       |-ParenExpr 0x555dff146f08 <line:986:5, col:94> 'int'
|       | `-BinaryOperator 0x555dff146ee8 <col:6, col:93> 'int' '>'
|       |   |-CallExpr 0x555dff146dd8 <col:6, col:52> 'float'
|       |   | |-ImplicitCastExpr 0x555dff146dc0 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff146c50 <col:6> 'float (float)' Function 0x555dff145ac0 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x555dff146da0 <col:12, col:51> 'float' '*'
|       |   |   |-ParenExpr 0x555dff146ce8 <col:12, col:30> 'float'
|       |   |   | `-BinaryOperator 0x555dff146cc8 <col:13, col:27> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x555dff146c70 <col:13> 'float' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x555dff146cb0 <col:27> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff146c90 <col:27> 'float' lvalue ParmVar 0x555dff146a70 'sf1' 'float'
|       |   |   `-ParenExpr 0x555dff146d80 <col:34, col:51> 'float'
|       |   |     `-BinaryOperator 0x555dff146d60 <col:35, col:48> 'float' '*'
|       |   |       |-FloatingLiteral 0x555dff146d08 <col:35> 'float' 3.725290e-09
|       |   |       `-ImplicitCastExpr 0x555dff146d48 <col:48> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff146d28 <col:48> 'float' lvalue ParmVar 0x555dff146af0 'sf2' 'float'
|       |   `-ParenExpr 0x555dff146ec8 <col:56, col:93> 'float'
|       |     `-BinaryOperator 0x555dff146ea8 <col:57, col:92> 'float' '*'
|       |       |-FloatingLiteral 0x555dff146e08 <col:57> 'float' 7.888609e-31
|       |       `-ParenExpr 0x555dff146e88 <col:71, col:92> 'float'
|       |         `-BinaryOperator 0x555dff146e68 <col:72, <built-in>:151:21> 'float' '*'
|       |           |-FloatingLiteral 0x555dff146e28 </usr/include/safe_math.h:986:72> 'float' 3.725290e-09
|       |           `-FloatingLiteral 0x555dff146e48 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x555dff147018 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x555dff146f48 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x555dff146f28 </usr/include/safe_math.h:990:15> 'float' lvalue ParmVar 0x555dff146a70 'sf1' 'float'
|       `-ParenExpr 0x555dff146ff8 <line:992:5, col:15> 'float'
|         `-BinaryOperator 0x555dff146fd8 <col:6, col:12> 'float' '*'
|           |-ImplicitCastExpr 0x555dff146fa8 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff146f68 <col:6> 'float' lvalue ParmVar 0x555dff146a70 'sf1' 'float'
|           `-ImplicitCastExpr 0x555dff146fc0 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x555dff146f88 <col:12> 'float' lvalue ParmVar 0x555dff146af0 'sf2' 'float'
|-FunctionDecl 0x555dff1471c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1009:1> <scratch space>:4:1 safe_div_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x555dff1470a0 </usr/include/safe_math.h:996:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x555dff147120 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x555dff1478d8 <line:997:1, line:1009:1>
|   `-ReturnStmt 0x555dff1478c8 <line:999:3, line:1008:15>
|     `-ConditionalOperator 0x555dff147898 <line:1002:5, line:1008:15> 'float'
|       |-ParenExpr 0x555dff147770 <line:1002:5, col:139> 'int'
|       | `-BinaryOperator 0x555dff147750 <col:6, col:138> 'int' '&&'
|       |   |-ParenExpr 0x555dff147360 <col:6, col:24> 'int'
|       |   | `-BinaryOperator 0x555dff147340 <col:7, col:20> 'int' '<'
|       |   |   |-CallExpr 0x555dff1472d8 <col:7, col:16> 'float'
|       |   |   | |-ImplicitCastExpr 0x555dff1472c0 <col:7> 'float (*)(float)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x555dff147280 <col:7> 'float (float)' Function 0x555dff145ac0 'fabsf' 'float (float)'
|       |   |   | `-ImplicitCastExpr 0x555dff147308 <col:13> 'float' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x555dff1472a0 <col:13> 'float' lvalue ParmVar 0x555dff147120 'sf2' 'float'
|       |   |   `-FloatingLiteral 0x555dff147320 <col:20> 'float' 1.000000e+00
|       |   `-ParenExpr 0x555dff147730 <col:29, col:138> 'int'
|       |     `-ParenExpr 0x555dff147710 <col:30, col:137> 'int'
|       |       `-BinaryOperator 0x555dff1476f0 <col:31, col:136> 'int' '||'
|       |         |-ParenExpr 0x555dff1473f8 <col:31, col:43> 'int'
|       |         | `-BinaryOperator 0x555dff1473d8 <col:32, col:39> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x555dff1473c0 <col:32> 'float' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x555dff147380 <col:32> 'float' lvalue ParmVar 0x555dff147120 'sf2' 'float'
|       |         |   `-FloatingLiteral 0x555dff1473a0 <col:39> 'float' 0.000000e+00
|       |         `-BinaryOperator 0x555dff1476d0 <col:48, col:136> 'int' '>'
|       |           |-ParenExpr 0x555dff1475d0 <col:48, col:95> 'float'
|       |           | `-CallExpr 0x555dff1475a0 <col:49, col:94> 'float'
|       |           |   |-ImplicitCastExpr 0x555dff147588 <col:49> 'float (*)(float)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x555dff147418 <col:49> 'float (float)' Function 0x555dff145ac0 'fabsf' 'float (float)'
|       |           |   `-BinaryOperator 0x555dff147568 <col:55, col:93> 'float' '/'
|       |           |     |-ParenExpr 0x555dff1474b0 <col:55, col:72> 'float'
|       |           |     | `-BinaryOperator 0x555dff147490 <col:56, col:69> 'float' '*'
|       |           |     |   |-FloatingLiteral 0x555dff147438 <col:56> 'float' 1.776357e-15
|       |           |     |   `-ImplicitCastExpr 0x555dff147478 <col:69> 'float' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x555dff147458 <col:69> 'float' lvalue ParmVar 0x555dff1470a0 'sf1' 'float'
|       |           |     `-ParenExpr 0x555dff147548 <col:76, col:93> 'float'
|       |           |       `-BinaryOperator 0x555dff147528 <col:77, col:90> 'float' '*'
|       |           |         |-FloatingLiteral 0x555dff1474d0 <col:77> 'float' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x555dff147510 <col:90> 'float' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x555dff1474f0 <col:90> 'float' lvalue ParmVar 0x555dff147120 'sf2' 'float'
|       |           `-ParenExpr 0x555dff1476b0 <col:99, col:136> 'float'
|       |             `-BinaryOperator 0x555dff147690 <col:100, col:135> 'float' '*'
|       |               |-FloatingLiteral 0x555dff1475f0 <col:100> 'float' 7.888609e-31
|       |               `-ParenExpr 0x555dff147670 <col:114, col:135> 'float'
|       |                 `-BinaryOperator 0x555dff147650 <col:115, <built-in>:151:21> 'float' '*'
|       |                   |-FloatingLiteral 0x555dff147610 </usr/include/safe_math.h:1002:115> 'float' 1.776357e-15
|       |                   `-FloatingLiteral 0x555dff147630 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x555dff147880 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x555dff1477b0 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x555dff147790 </usr/include/safe_math.h:1006:15> 'float' lvalue ParmVar 0x555dff1470a0 'sf1' 'float'
|       `-ParenExpr 0x555dff147860 <line:1008:5, col:15> 'float'
|         `-BinaryOperator 0x555dff147840 <col:6, col:12> 'float' '/'
|           |-ImplicitCastExpr 0x555dff147810 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff1477d0 <col:6> 'float' lvalue ParmVar 0x555dff1470a0 'sf1' 'float'
|           `-ImplicitCastExpr 0x555dff147828 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x555dff1477f0 <col:12> 'float' lvalue ParmVar 0x555dff147120 'sf2' 'float'
|-FunctionDecl 0x555dff147a60 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1024:1> <scratch space>:5:1 safe_add_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x555dff147908 </usr/include/safe_math.h:1015:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x555dff147988 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x555dff148f50 <line:1016:1, line:1024:1>
|   `-ReturnStmt 0x555dff148f40 <line:1018:3, line:1023:15>
|     `-ConditionalOperator 0x555dff148f10 <line:1020:5, line:1023:15> 'double'
|       |-ParenExpr 0x555dff148de8 <line:1020:5, col:55> 'int'
|       | `-BinaryOperator 0x555dff148dc8 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x555dff148d18 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x555dff148d00 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff147b18 <col:6> 'double (double)' Function 0x555dff145cf0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x555dff148ca8 <col:11, col:35> 'double' '+'
|       |   |   |-ParenExpr 0x555dff148bf0 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x555dff148bd0 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x555dff147b38 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x555dff147b78 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff147b58 <col:18> 'double' lvalue ParmVar 0x555dff147908 'sf1' 'double'
|       |   |   `-ParenExpr 0x555dff148c88 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x555dff148c68 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x555dff148c10 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x555dff148c50 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff148c30 <col:32> 'double' lvalue ParmVar 0x555dff147988 'sf2' 'double'
|       |   `-ParenExpr 0x555dff148da8 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x555dff148d88 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x555dff148d48 </usr/include/safe_math.h:1020:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x555dff148d68 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x555dff148ef8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x555dff148e28 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x555dff148e08 </usr/include/safe_math.h:1021:15> 'double' lvalue ParmVar 0x555dff147908 'sf1' 'double'
|       `-ParenExpr 0x555dff148ed8 <line:1023:5, col:15> 'double'
|         `-BinaryOperator 0x555dff148eb8 <col:6, col:12> 'double' '+'
|           |-ImplicitCastExpr 0x555dff148e88 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff148e48 <col:6> 'double' lvalue ParmVar 0x555dff147908 'sf1' 'double'
|           `-ImplicitCastExpr 0x555dff148ea0 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x555dff148e68 <col:12> 'double' lvalue ParmVar 0x555dff147988 'sf2' 'double'
|-FunctionDecl 0x555dff1490a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1036:1> <scratch space>:6:1 safe_sub_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x555dff148f80 </usr/include/safe_math.h:1027:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x555dff149000 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x555dff149520 <line:1028:1, line:1036:1>
|   `-ReturnStmt 0x555dff149510 <line:1030:3, line:1035:15>
|     `-ConditionalOperator 0x555dff1494e0 <line:1032:5, line:1035:15> 'double'
|       |-ParenExpr 0x555dff1493b8 <line:1032:5, col:55> 'int'
|       | `-BinaryOperator 0x555dff149398 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x555dff1492e8 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x555dff1492d0 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff149160 <col:6> 'double (double)' Function 0x555dff145cf0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x555dff1492b0 <col:11, col:35> 'double' '-'
|       |   |   |-ParenExpr 0x555dff1491f8 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x555dff1491d8 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x555dff149180 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x555dff1491c0 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff1491a0 <col:18> 'double' lvalue ParmVar 0x555dff148f80 'sf1' 'double'
|       |   |   `-ParenExpr 0x555dff149290 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x555dff149270 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x555dff149218 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x555dff149258 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff149238 <col:32> 'double' lvalue ParmVar 0x555dff149000 'sf2' 'double'
|       |   `-ParenExpr 0x555dff149378 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x555dff149358 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x555dff149318 </usr/include/safe_math.h:1032:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x555dff149338 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x555dff1494c8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x555dff1493f8 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x555dff1493d8 </usr/include/safe_math.h:1033:15> 'double' lvalue ParmVar 0x555dff148f80 'sf1' 'double'
|       `-ParenExpr 0x555dff1494a8 <line:1035:5, col:15> 'double'
|         `-BinaryOperator 0x555dff149488 <col:6, col:12> 'double' '-'
|           |-ImplicitCastExpr 0x555dff149458 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff149418 <col:6> 'double' lvalue ParmVar 0x555dff148f80 'sf1' 'double'
|           `-ImplicitCastExpr 0x555dff149470 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x555dff149438 <col:12> 'double' lvalue ParmVar 0x555dff149000 'sf2' 'double'
|-FunctionDecl 0x555dff149678 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1052:1> <scratch space>:7:1 safe_mul_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x555dff149550 </usr/include/safe_math.h:1039:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x555dff1495d0 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x555dff149b50 <line:1040:1, line:1052:1>
|   `-ReturnStmt 0x555dff149b40 <line:1042:3, line:1051:15>
|     `-ConditionalOperator 0x555dff149b10 <line:1045:5, line:1051:15> 'double'
|       |-ParenExpr 0x555dff1499e8 <line:1045:5, col:91> 'int'
|       | `-BinaryOperator 0x555dff1499c8 <col:6, col:90> 'int' '>'
|       |   |-CallExpr 0x555dff1498b8 <col:6, col:50> 'double'
|       |   | |-ImplicitCastExpr 0x555dff1498a0 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x555dff149730 <col:6> 'double (double)' Function 0x555dff145cf0 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x555dff149880 <col:11, col:49> 'double' '*'
|       |   |   |-ParenExpr 0x555dff1497c8 <col:11, col:28> 'double'
|       |   |   | `-BinaryOperator 0x555dff1497a8 <col:12, col:25> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x555dff149750 <col:12> 'double' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x555dff149790 <col:25> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x555dff149770 <col:25> 'double' lvalue ParmVar 0x555dff149550 'sf1' 'double'
|       |   |   `-ParenExpr 0x555dff149860 <col:32, col:49> 'double'
|       |   |     `-BinaryOperator 0x555dff149840 <col:33, col:46> 'double' '*'
|       |   |       |-FloatingLiteral 0x555dff1497e8 <col:33> 'double' 7.051541e-279
|       |   |       `-ImplicitCastExpr 0x555dff149828 <col:46> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x555dff149808 <col:46> 'double' lvalue ParmVar 0x555dff1495d0 'sf2' 'double'
|       |   `-ParenExpr 0x555dff1499a8 <col:54, col:90> 'double'
|       |     `-BinaryOperator 0x555dff149988 <col:55, col:89> 'double' '*'
|       |       |-FloatingLiteral 0x555dff1498e8 <col:55> 'double' 7.888609e-31
|       |       `-ParenExpr 0x555dff149968 <col:68, col:89> 'double'
|       |         `-BinaryOperator 0x555dff149948 <col:69, <built-in>:166:21> 'double' '*'
|       |           |-FloatingLiteral 0x555dff149908 </usr/include/safe_math.h:1045:69> 'double' 7.051541e-279
|       |           `-FloatingLiteral 0x555dff149928 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x555dff149af8 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x555dff149a28 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x555dff149a08 </usr/include/safe_math.h:1049:15> 'double' lvalue ParmVar 0x555dff149550 'sf1' 'double'
|       `-ParenExpr 0x555dff149ad8 <line:1051:5, col:15> 'double'
|         `-BinaryOperator 0x555dff149ab8 <col:6, col:12> 'double' '*'
|           |-ImplicitCastExpr 0x555dff149a88 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff149a48 <col:6> 'double' lvalue ParmVar 0x555dff149550 'sf1' 'double'
|           `-ImplicitCastExpr 0x555dff149aa0 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x555dff149a68 <col:12> 'double' lvalue ParmVar 0x555dff1495d0 'sf2' 'double'
|-FunctionDecl 0x555dff149ca8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1068:1> <scratch space>:8:1 safe_div_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x555dff149b80 </usr/include/safe_math.h:1055:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x555dff149c00 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x555dff14a3b8 <line:1056:1, line:1068:1>
|   `-ReturnStmt 0x555dff14a3a8 <line:1058:3, line:1067:15>
|     `-ConditionalOperator 0x555dff14a378 <line:1061:5, line:1067:15> 'double'
|       |-ParenExpr 0x555dff14a250 <line:1061:5, col:133> 'int'
|       | `-BinaryOperator 0x555dff14a230 <col:6, col:132> 'int' '&&'
|       |   |-ParenExpr 0x555dff149e40 <col:6, col:22> 'int'
|       |   | `-BinaryOperator 0x555dff149e20 <col:7, col:19> 'int' '<'
|       |   |   |-CallExpr 0x555dff149db8 <col:7, col:15> 'double'
|       |   |   | |-ImplicitCastExpr 0x555dff149da0 <col:7> 'double (*)(double)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x555dff149d60 <col:7> 'double (double)' Function 0x555dff145cf0 'fabs' 'double (double)'
|       |   |   | `-ImplicitCastExpr 0x555dff149de8 <col:12> 'double' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x555dff149d80 <col:12> 'double' lvalue ParmVar 0x555dff149c00 'sf2' 'double'
|       |   |   `-FloatingLiteral 0x555dff149e00 <col:19> 'double' 1.000000e+00
|       |   `-ParenExpr 0x555dff14a210 <col:27, col:132> 'int'
|       |     `-ParenExpr 0x555dff14a1f0 <col:28, col:131> 'int'
|       |       `-BinaryOperator 0x555dff14a1d0 <col:29, col:130> 'int' '||'
|       |         |-ParenExpr 0x555dff149ed8 <col:29, col:40> 'int'
|       |         | `-BinaryOperator 0x555dff149eb8 <col:30, col:37> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x555dff149ea0 <col:30> 'double' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x555dff149e60 <col:30> 'double' lvalue ParmVar 0x555dff149c00 'sf2' 'double'
|       |         |   `-FloatingLiteral 0x555dff149e80 <col:37> 'double' 0.000000e+00
|       |         `-BinaryOperator 0x555dff14a1b0 <col:45, col:130> 'int' '>'
|       |           |-ParenExpr 0x555dff14a0b0 <col:45, col:90> 'double'
|       |           | `-CallExpr 0x555dff14a080 <col:46, col:89> 'double'
|       |           |   |-ImplicitCastExpr 0x555dff14a068 <col:46> 'double (*)(double)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x555dff149ef8 <col:46> 'double (double)' Function 0x555dff145cf0 'fabs' 'double (double)'
|       |           |   `-BinaryOperator 0x555dff14a048 <col:51, col:88> 'double' '/'
|       |           |     |-ParenExpr 0x555dff149f90 <col:51, col:68> 'double'
|       |           |     | `-BinaryOperator 0x555dff149f70 <col:52, col:65> 'double' '*'
|       |           |     |   |-FloatingLiteral 0x555dff149f18 <col:52> 'double' 6.263026e-294
|       |           |     |   `-ImplicitCastExpr 0x555dff149f58 <col:65> 'double' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x555dff149f38 <col:65> 'double' lvalue ParmVar 0x555dff149b80 'sf1' 'double'
|       |           |     `-ParenExpr 0x555dff14a028 <col:72, col:88> 'double'
|       |           |       `-BinaryOperator 0x555dff14a008 <col:73, col:85> 'double' '*'
|       |           |         |-FloatingLiteral 0x555dff149fb0 <col:73> 'double' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x555dff149ff0 <col:85> 'double' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x555dff149fd0 <col:85> 'double' lvalue ParmVar 0x555dff149c00 'sf2' 'double'
|       |           `-ParenExpr 0x555dff14a190 <col:94, col:130> 'double'
|       |             `-BinaryOperator 0x555dff14a170 <col:95, col:129> 'double' '*'
|       |               |-FloatingLiteral 0x555dff14a0d0 <col:95> 'double' 7.888609e-31
|       |               `-ParenExpr 0x555dff14a150 <col:108, col:129> 'double'
|       |                 `-BinaryOperator 0x555dff14a130 <col:109, <built-in>:166:21> 'double' '*'
|       |                   |-FloatingLiteral 0x555dff14a0f0 </usr/include/safe_math.h:1061:109> 'double' 6.263026e-294
|       |                   `-FloatingLiteral 0x555dff14a110 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x555dff14a360 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x555dff14a290 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x555dff14a270 </usr/include/safe_math.h:1065:15> 'double' lvalue ParmVar 0x555dff149b80 'sf1' 'double'
|       `-ParenExpr 0x555dff14a340 <line:1067:5, col:15> 'double'
|         `-BinaryOperator 0x555dff14a320 <col:6, col:12> 'double' '/'
|           |-ImplicitCastExpr 0x555dff14a2f0 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x555dff14a2b0 <col:6> 'double' lvalue ParmVar 0x555dff149b80 'sf1' 'double'
|           `-ImplicitCastExpr 0x555dff14a308 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x555dff14a2d0 <col:12> 'double' lvalue ParmVar 0x555dff149c00 'sf2' 'double'
|-FunctionDecl 0x555dff14a4f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1205:1> <scratch space>:9:1 safe_convert_func_float_to_int32_t 'int32_t (float)' static
| |-ParmVarDecl 0x555dff14a3e8 </usr/include/safe_math.h:1196:42, col:48> col:48 used sf1 'float'
| `-CompoundStmt 0x555dff14a948 <line:1197:1, line:1205:1>
|   `-ReturnStmt 0x555dff14a938 <line:1199:3, line:1204:20>
|     `-ConditionalOperator 0x555dff14a908 <line:1201:5, line:1204:20> 'int'
|       |-ParenExpr 0x555dff14a7b8 <line:1201:5, col:46> 'int'
|       | `-BinaryOperator 0x555dff14a798 <col:6, col:45> 'int' '||'
|       |   |-ParenExpr 0x555dff14a6a8 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x555dff14a688 <col:7, /usr/include/stdint.h:107:35> 'int' '<='
|       |   |   |-ImplicitCastExpr 0x555dff14a658 </usr/include/safe_math.h:1201:7> 'float' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff14a5a0 <col:7> 'float' lvalue ParmVar 0x555dff14a3e8 'sf1' 'float'
|       |   |   `-ImplicitCastExpr 0x555dff14a670 </usr/include/stdint.h:107:21, col:35> 'float' <IntegralToFloating>
|       |   |     `-ParenExpr 0x555dff14a638 <col:21, col:35> 'int'
|       |   |       `-BinaryOperator 0x555dff14a618 <col:22, col:34> 'int' '-'
|       |   |         |-UnaryOperator 0x555dff14a5e0 <col:22, col:23> 'int' prefix '-'
|       |   |         | `-IntegerLiteral 0x555dff14a5c0 <col:23> 'int' 2147483647
|       |   |         `-IntegerLiteral 0x555dff14a5f8 <col:34> 'int' 1
|       |   `-ParenExpr 0x555dff14a778 </usr/include/safe_math.h:1201:28, col:45> 'int'
|       |     `-BinaryOperator 0x555dff14a758 <col:29, /usr/include/stdint.h:112:32> 'int' '>='
|       |       |-ImplicitCastExpr 0x555dff14a728 </usr/include/safe_math.h:1201:29> 'float' <LValueToRValue>
|       |       | `-DeclRefExpr 0x555dff14a6c8 <col:29> 'float' lvalue ParmVar 0x555dff14a3e8 'sf1' 'float'
|       |       `-ImplicitCastExpr 0x555dff14a740 </usr/include/stdint.h:112:21, col:32> 'float' <IntegralToFloating>
|       |         `-ParenExpr 0x555dff14a708 <col:21, col:32> 'int'
|       |           `-IntegerLiteral 0x555dff14a6e8 <col:22> 'int' 2147483647
|       |-ParenExpr 0x555dff14a818 </usr/include/random_inc.h:79:26, col:32> 'int'
|       | `-ParenExpr 0x555dff14a7f8 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   `-IntegerLiteral 0x555dff14a7d8 <col:22> 'int' 2147483647
|       `-ParenExpr 0x555dff14a8e8 </usr/include/safe_math.h:1204:5, col:20> 'int32_t':'int'
|         `-CStyleCastExpr 0x555dff14a8c0 <col:6, col:19> 'int32_t':'int' <FloatingToIntegral>
|           `-ImplicitCastExpr 0x555dff14a8a8 <col:15, col:19> 'float' <LValueToRValue> part_of_explicit_cast
|             `-ParenExpr 0x555dff14a888 <col:15, col:19> 'float' lvalue
|               `-DeclRefExpr 0x555dff14a838 <col:16> 'float' lvalue ParmVar 0x555dff14a3e8 'sf1' 'float'
|-VarDecl 0x555dff14aa20 </usr/include/csmith.h:47:1, col:30> col:17 used crc32_tab 'uint32_t[256]' static
|-VarDecl 0x555dff14aa98 <line:48:1, col:33> col:17 used crc32_context 'uint32_t':'unsigned int' static cinit
| `-ImplicitCastExpr 0x555dff14ab20 <col:33> 'uint32_t':'unsigned int' <IntegralCast>
|   `-IntegerLiteral 0x555dff14ab00 <col:33> 'unsigned long' 4294967295
|-FunctionDecl 0x555dff14bc78 <line:50:1, line:68:1> line:51:1 used crc32_gentab 'void (void)' static
| `-CompoundStmt 0x555dff14c748 <line:52:1, line:68:1>
|   |-DeclStmt 0x555dff14bd98 <line:53:2, col:14>
|   | `-VarDecl 0x555dff14bd30 <col:2, col:11> col:11 used crc 'uint32_t':'unsigned int'
|   |-DeclStmt 0x555dff14be60 <line:54:2, col:36>
|   | `-VarDecl 0x555dff14bdc0 <col:2, col:24> col:17 used poly 'const uint32_t':'const unsigned int' cinit
|   |   `-ImplicitCastExpr 0x555dff14be48 <col:24> 'uint32_t':'unsigned int' <IntegralCast>
|   |     `-IntegerLiteral 0x555dff14be28 <col:24> 'unsigned long' 3988292384
|   |-DeclStmt 0x555dff14bf90 <line:55:2, col:10>
|   | |-VarDecl 0x555dff14be90 <col:2, col:6> col:6 used i 'int'
|   | `-VarDecl 0x555dff14bf10 <col:2, col:9> col:9 used j 'int'
|   `-ForStmt 0x555dff14c710 <line:57:2, line:67:2>
|     |-BinaryOperator 0x555dff14bfe8 <line:57:7, col:11> 'int' '='
|     | |-DeclRefExpr 0x555dff14bfa8 <col:7> 'int' lvalue Var 0x555dff14be90 'i' 'int'
|     | `-IntegerLiteral 0x555dff14bfc8 <col:11> 'int' 0
|     |-<<<NULL>>>
|     |-BinaryOperator 0x555dff14c060 <col:14, col:18> 'int' '<'
|     | |-ImplicitCastExpr 0x555dff14c048 <col:14> 'int' <LValueToRValue>
|     | | `-DeclRefExpr 0x555dff14c008 <col:14> 'int' lvalue Var 0x555dff14be90 'i' 'int'
|     | `-IntegerLiteral 0x555dff14c028 <col:18> 'int' 256
|     |-UnaryOperator 0x555dff14c0a0 <col:23, col:24> 'int' postfix '++'
|     | `-DeclRefExpr 0x555dff14c080 <col:23> 'int' lvalue Var 0x555dff14be90 'i' 'int'
|     `-CompoundStmt 0x555dff14c6e8 <col:28, line:67:2>
|       |-BinaryOperator 0x555dff14c128 <line:58:3, col:9> 'uint32_t':'unsigned int' '='
|       | |-DeclRefExpr 0x555dff14c0b8 <col:3> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|       | `-ImplicitCastExpr 0x555dff14c110 <col:9> 'uint32_t':'unsigned int' <IntegralCast>
|       |   `-ImplicitCastExpr 0x555dff14c0f8 <col:9> 'int' <LValueToRValue>
|       |     `-DeclRefExpr 0x555dff14c0d8 <col:9> 'int' lvalue Var 0x555dff14be90 'i' 'int'
|       |-ForStmt 0x555dff14c560 <line:59:3, line:65:3>
|       | |-BinaryOperator 0x555dff14c188 <line:59:8, col:12> 'int' '='
|       | | |-DeclRefExpr 0x555dff14c148 <col:8> 'int' lvalue Var 0x555dff14bf10 'j' 'int'
|       | | `-IntegerLiteral 0x555dff14c168 <col:12> 'int' 8
|       | |-<<<NULL>>>
|       | |-BinaryOperator 0x555dff14c200 <col:15, col:19> 'int' '>'
|       | | |-ImplicitCastExpr 0x555dff14c1e8 <col:15> 'int' <LValueToRValue>
|       | | | `-DeclRefExpr 0x555dff14c1a8 <col:15> 'int' lvalue Var 0x555dff14bf10 'j' 'int'
|       | | `-IntegerLiteral 0x555dff14c1c8 <col:19> 'int' 0
|       | |-UnaryOperator 0x555dff14c240 <col:22, col:23> 'int' postfix '--'
|       | | `-DeclRefExpr 0x555dff14c220 <col:22> 'int' lvalue Var 0x555dff14bf10 'j' 'int'
|       | `-CompoundStmt 0x555dff14c548 <col:27, line:65:3>
|       |   `-IfStmt 0x555dff14c518 <line:60:4, line:64:4> has_else
|       |     |-BinaryOperator 0x555dff14c2c8 <line:60:8, col:14> 'uint32_t':'unsigned int' '&'
|       |     | |-ImplicitCastExpr 0x555dff14c298 <col:8> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     | | `-DeclRefExpr 0x555dff14c258 <col:8> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|       |     | `-ImplicitCastExpr 0x555dff14c2b0 <col:14> 'uint32_t':'unsigned int' <IntegralCast>
|       |     |   `-IntegerLiteral 0x555dff14c278 <col:14> 'int' 1
|       |     |-CompoundStmt 0x555dff14c460 <col:17, line:62:4>
|       |     | `-BinaryOperator 0x555dff14c3f8 <line:61:5, col:24> 'uint32_t':'unsigned int' '='
|       |     |   |-DeclRefExpr 0x555dff14c2e8 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|       |     |   `-BinaryOperator 0x555dff14c3d8 <col:11, col:24> 'uint32_t':'unsigned int' '^'
|       |     |     |-ParenExpr 0x555dff14c380 <col:11, col:20> 'uint32_t':'unsigned int'
|       |     |     | `-BinaryOperator 0x555dff14c360 <col:12, col:19> 'uint32_t':'unsigned int' '>>'
|       |     |     |   |-ImplicitCastExpr 0x555dff14c348 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |     |   | `-DeclRefExpr 0x555dff14c308 <col:12> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|       |     |     |   `-IntegerLiteral 0x555dff14c328 <col:19> 'int' 1
|       |     |     `-ImplicitCastExpr 0x555dff14c3c0 <col:24> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |       `-DeclRefExpr 0x555dff14c3a0 <col:24> 'const uint32_t':'const unsigned int' lvalue Var 0x555dff14bdc0 'poly' 'const uint32_t':'const unsigned int'
|       |     `-CompoundStmt 0x555dff14c500 <line:62:11, line:64:4>
|       |       `-CompoundAssignOperator 0x555dff14c4d0 <line:63:5, col:13> 'uint32_t':'unsigned int' '>>=' ComputeLHSTy='uint32_t':'unsigned int' ComputeResultTy='uint32_t':'unsigned int'
|       |         |-DeclRefExpr 0x555dff14c478 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|       |         `-IntegerLiteral 0x555dff14c498 <col:13> 'int' 1
|       `-BinaryOperator 0x555dff14c6c8 <line:66:3, col:18> 'uint32_t':'unsigned int' '='
|         |-ArraySubscriptExpr 0x555dff14c670 <col:3, col:14> 'uint32_t':'unsigned int' lvalue
|         | |-ImplicitCastExpr 0x555dff14c640 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|         | | `-DeclRefExpr 0x555dff14c598 <col:3> 'uint32_t[256]' lvalue Var 0x555dff14aa20 'crc32_tab' 'uint32_t[256]'
|         | `-ImplicitCastExpr 0x555dff14c658 <col:13> 'int' <LValueToRValue>
|         |   `-DeclRefExpr 0x555dff14c5b8 <col:13> 'int' lvalue Var 0x555dff14be90 'i' 'int'
|         `-ImplicitCastExpr 0x555dff14c6b0 <col:18> 'uint32_t':'unsigned int' <LValueToRValue>
|           `-DeclRefExpr 0x555dff14c690 <col:18> 'uint32_t':'unsigned int' lvalue Var 0x555dff14bd30 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x555dff14c890 <line:70:1, line:75:1> line:71:1 used crc32_byte 'void (uint8_t)' static
| |-ParmVarDecl 0x555dff14c788 <col:13, col:21> col:21 used b 'uint8_t':'unsigned char'
| `-CompoundStmt 0x555dff14cc40 <col:24, line:75:1>
|   `-BinaryOperator 0x555dff14cc20 <line:72:2, line:74:39> 'uint32_t':'unsigned int' '='
|     |-DeclRefExpr 0x555dff14c940 <line:72:2> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
|     `-BinaryOperator 0x555dff14cc00 <line:73:3, line:74:39> 'uint32_t':'unsigned int' '^'
|       |-ParenExpr 0x555dff14ca50 <line:73:3, col:37> 'uint32_t':'unsigned int'
|       | `-BinaryOperator 0x555dff14ca30 <col:4, col:27> 'uint32_t':'unsigned int' '&'
|       |   |-ParenExpr 0x555dff14c9d8 <col:4, col:23> 'uint32_t':'unsigned int'
|       |   | `-BinaryOperator 0x555dff14c9b8 <col:5, col:22> 'uint32_t':'unsigned int' '>>'
|       |   |   |-ImplicitCastExpr 0x555dff14c9a0 <col:5> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x555dff14c960 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
|       |   |   `-IntegerLiteral 0x555dff14c980 <col:22> 'int' 8
|       |   `-ImplicitCastExpr 0x555dff14ca18 <col:27> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x555dff14c9f8 <col:27> 'int' 16777215
|       `-ImplicitCastExpr 0x555dff14cbe8 <line:74:3, col:39> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-ArraySubscriptExpr 0x555dff14cbc8 <col:3, col:39> 'uint32_t':'unsigned int' lvalue
|           |-ImplicitCastExpr 0x555dff14cbb0 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|           | `-DeclRefExpr 0x555dff14ca70 <col:3> 'uint32_t[256]' lvalue Var 0x555dff14aa20 'crc32_tab' 'uint32_t[256]'
|           `-BinaryOperator 0x555dff14cb90 <col:13, col:35> 'uint32_t':'unsigned int' '&'
|             |-ParenExpr 0x555dff14cb38 <col:13, col:31> 'uint32_t':'unsigned int'
|             | `-BinaryOperator 0x555dff14cb18 <col:14, col:30> 'uint32_t':'unsigned int' '^'
|             |   |-ImplicitCastExpr 0x555dff14cad0 <col:14> 'uint32_t':'unsigned int' <LValueToRValue>
|             |   | `-DeclRefExpr 0x555dff14ca90 <col:14> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
|             |   `-ImplicitCastExpr 0x555dff14cb00 <col:30> 'uint32_t':'unsigned int' <IntegralCast>
|             |     `-ImplicitCastExpr 0x555dff14cae8 <col:30> 'uint8_t':'unsigned char' <LValueToRValue>
|             |       `-DeclRefExpr 0x555dff14cab0 <col:30> 'uint8_t':'unsigned char' lvalue ParmVar 0x555dff14c788 'b' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x555dff14cb78 <col:35> 'uint32_t':'unsigned int' <IntegralCast>
|               `-IntegerLiteral 0x555dff14cb58 <col:35> 'int' 255
|-FunctionDecl 0x555dff14cd70 <line:96:1, line:107:1> line:97:1 used crc32_8bytes 'void (uint64_t)' static
| |-ParmVarDecl 0x555dff14cc68 <col:15, col:24> col:24 used val 'uint64_t':'unsigned long'
| `-CompoundStmt 0x555dff14da00 <line:98:1, line:107:1>
|   |-CallExpr 0x555dff14cfa8 <line:99:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x555dff14cf90 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14ce20 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14cfd8 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14cf10 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14ceb8 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14ce98 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14ce80 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14ce40 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14ce60 <col:20> 'int' 0
|   |     `-ImplicitCastExpr 0x555dff14cef8 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14ced8 <col:25> 'int' 255
|   |-CallExpr 0x555dff14d118 <line:100:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x555dff14d100 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14cff0 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d148 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d0e0 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d088 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d068 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d050 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d010 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d030 <col:20> 'int' 8
|   |     `-ImplicitCastExpr 0x555dff14d0c8 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d0a8 <col:25> 'int' 255
|   |-CallExpr 0x555dff14d288 <line:101:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x555dff14d270 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14d160 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d2b8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d250 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d1f8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d1d8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d1c0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d180 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d1a0 <col:20> 'int' 16
|   |     `-ImplicitCastExpr 0x555dff14d238 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d218 <col:26> 'int' 255
|   |-CallExpr 0x555dff14d3f8 <line:102:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x555dff14d3e0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14d2d0 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d428 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d3c0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d368 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d348 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d330 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d2f0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d310 <col:20> 'int' 24
|   |     `-ImplicitCastExpr 0x555dff14d3a8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d388 <col:26> 'int' 255
|   |-CallExpr 0x555dff14d568 <line:103:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x555dff14d550 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14d440 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d598 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d530 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d4d8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d4b8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d4a0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d460 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d480 <col:20> 'int' 32
|   |     `-ImplicitCastExpr 0x555dff14d518 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d4f8 <col:26> 'int' 255
|   |-CallExpr 0x555dff14d6d8 <line:104:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x555dff14d6c0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14d5b0 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d708 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d6a0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d648 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d628 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d610 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d5d0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d5f0 <col:20> 'int' 40
|   |     `-ImplicitCastExpr 0x555dff14d688 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d668 <col:26> 'int' 255
|   |-CallExpr 0x555dff14d848 <line:105:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x555dff14d830 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14d720 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x555dff14d878 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x555dff14d810 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x555dff14d7b8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x555dff14d798 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x555dff14d780 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x555dff14d740 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x555dff14d760 <col:20> 'int' 48
|   |     `-ImplicitCastExpr 0x555dff14d7f8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x555dff14d7d8 <col:26> 'int' 255
|   `-CallExpr 0x555dff14d9b8 <line:106:2, col:30> 'void'
|     |-ImplicitCastExpr 0x555dff14d9a0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x555dff14d890 <col:2> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|     `-ImplicitCastExpr 0x555dff14d9e8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x555dff14d980 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|         |-ParenExpr 0x555dff14d928 <col:14, col:22> 'uint64_t':'unsigned long'
|         | `-BinaryOperator 0x555dff14d908 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|         |   |-ImplicitCastExpr 0x555dff14d8f0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|         |   | `-DeclRefExpr 0x555dff14d8b0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14cc68 'val' 'uint64_t':'unsigned long'
|         |   `-IntegerLiteral 0x555dff14d8d0 <col:20> 'int' 56
|         `-ImplicitCastExpr 0x555dff14d968 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|           `-IntegerLiteral 0x555dff14d948 <col:26> 'int' 255
|-FunctionDecl 0x555dff14ece0 <line:109:1, line:116:1> line:110:1 used transparent_crc 'void (uint64_t, char *, int)' static
| |-ParmVarDecl 0x555dff14da60 <col:18, col:27> col:27 used val 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x555dff14dae0 <col:32, col:38> col:38 used vname 'char *'
| |-ParmVarDecl 0x555dff14db60 <col:45, col:49> col:49 used flag 'int'
| `-CompoundStmt 0x555dff14f110 <line:111:1, line:116:1>
|   |-CallExpr 0x555dff14ee58 <line:112:2, col:18> 'void'
|   | |-ImplicitCastExpr 0x555dff14ee40 <col:2> 'void (*)(uint64_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x555dff14eda0 <col:2> 'void (uint64_t)' Function 0x555dff14cd70 'crc32_8bytes' 'void (uint64_t)'
|   | `-ImplicitCastExpr 0x555dff14ee88 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |   `-DeclRefExpr 0x555dff14edc0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x555dff14da60 'val' 'uint64_t':'unsigned long'
|   `-IfStmt 0x555dff14f0f0 <line:113:2, line:115:2>
|     |-ImplicitCastExpr 0x555dff14eec0 <line:113:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x555dff14eea0 <col:6> 'int' lvalue ParmVar 0x555dff14db60 'flag' 'int'
|     `-CompoundStmt 0x555dff14f0d8 <col:12, line:115:2>
|       `-CallExpr 0x555dff14f050 <line:114:5, col:87> 'int'
|         |-ImplicitCastExpr 0x555dff14f038 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x555dff14eed8 <col:5> 'int (const char *, ...)' Function 0x555dff108460 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x555dff14f0a8 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x555dff14f090 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x555dff14ef30 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x555dff14f0c0 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x555dff14ef70 <col:52> 'char *' lvalue ParmVar 0x555dff14dae0 'vname' 'char *'
|         `-BinaryOperator 0x555dff14f000 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x555dff14efe8 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff14efd0 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff14ef90 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x555dff14efb0 <col:75> 'unsigned long' 4294967295
|-FunctionDecl 0x555dff14f3c0 <line:120:1, line:130:1> line:121:1 transparent_crc_bytes 'void (char *, int, char *, int)' static
| |-ParmVarDecl 0x555dff14f148 <col:24, col:30> col:30 used ptr 'char *'
| |-ParmVarDecl 0x555dff14f1c8 <col:35, col:39> col:39 used nbytes 'int'
| |-ParmVarDecl 0x555dff14f248 <col:47, col:53> col:53 used vname 'char *'
| |-ParmVarDecl 0x555dff14f2c8 <col:60, col:64> col:64 used flag 'int'
| `-CompoundStmt 0x555dff14f9f8 <line:122:1, line:130:1>
|   |-DeclStmt 0x555dff14f508 <line:123:5, col:10>
|   | `-VarDecl 0x555dff14f4a0 <col:5, col:9> col:9 used i 'int'
|   |-ForStmt 0x555dff14f788 <line:124:5, line:126:5>
|   | |-BinaryOperator 0x555dff14f560 <line:124:10, col:12> 'int' '='
|   | | |-DeclRefExpr 0x555dff14f520 <col:10> 'int' lvalue Var 0x555dff14f4a0 'i' 'int'
|   | | `-IntegerLiteral 0x555dff14f540 <col:12> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x555dff14f5f0 <col:15, col:17> 'int' '<'
|   | | |-ImplicitCastExpr 0x555dff14f5c0 <col:15> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x555dff14f580 <col:15> 'int' lvalue Var 0x555dff14f4a0 'i' 'int'
|   | | `-ImplicitCastExpr 0x555dff14f5d8 <col:17> 'int' <LValueToRValue>
|   | |   `-DeclRefExpr 0x555dff14f5a0 <col:17> 'int' lvalue ParmVar 0x555dff14f1c8 'nbytes' 'int'
|   | |-UnaryOperator 0x555dff14f630 <col:25, col:26> 'int' postfix '++'
|   | | `-DeclRefExpr 0x555dff14f610 <col:25> 'int' lvalue Var 0x555dff14f4a0 'i' 'int'
|   | `-CompoundStmt 0x555dff14f770 <col:30, line:126:5>
|   |   `-CallExpr 0x555dff14f710 <line:125:9, col:26> 'void'
|   |     |-ImplicitCastExpr 0x555dff14f6f8 <col:9> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   |     | `-DeclRefExpr 0x555dff14f648 <col:9> 'void (uint8_t)' Function 0x555dff14c890 'crc32_byte' 'void (uint8_t)'
|   |     `-ImplicitCastExpr 0x555dff14f758 <col:20, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |       `-ImplicitCastExpr 0x555dff14f740 <col:20, col:25> 'char' <LValueToRValue>
|   |         `-ArraySubscriptExpr 0x555dff14f6d8 <col:20, col:25> 'char' lvalue
|   |           |-ImplicitCastExpr 0x555dff14f6a8 <col:20> 'char *' <LValueToRValue>
|   |           | `-DeclRefExpr 0x555dff14f668 <col:20> 'char *' lvalue ParmVar 0x555dff14f148 'ptr' 'char *'
|   |           `-ImplicitCastExpr 0x555dff14f6c0 <col:24> 'int' <LValueToRValue>
|   |             `-DeclRefExpr 0x555dff14f688 <col:24> 'int' lvalue Var 0x555dff14f4a0 'i' 'int'
|   `-IfStmt 0x555dff14f9d8 <line:127:2, line:129:2>
|     |-ImplicitCastExpr 0x555dff14f7e0 <line:127:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x555dff14f7c0 <col:6> 'int' lvalue ParmVar 0x555dff14f2c8 'flag' 'int'
|     `-CompoundStmt 0x555dff14f9c0 <col:12, line:129:2>
|       `-CallExpr 0x555dff14f938 <line:128:5, col:87> 'int'
|         |-ImplicitCastExpr 0x555dff14f920 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x555dff14f7f8 <col:5> 'int (const char *, ...)' Function 0x555dff108460 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x555dff14f990 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x555dff14f978 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x555dff14f818 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x555dff14f9a8 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x555dff14f858 <col:52> 'char *' lvalue ParmVar 0x555dff14f248 'vname' 'char *'
|         `-BinaryOperator 0x555dff14f8e8 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x555dff14f8d0 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x555dff14f8b8 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x555dff14f878 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x555dff14f898 <col:75> 'unsigned long' 4294967295
|-VarDecl 0x555dff14fa38 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/6.c:13:1, col:13> col:13 __undefined 'long' static
|-VarDecl 0x555dff14fab0 <line:17:1, col:22> col:16 used g_5 'int32_t':'int' static cinit
| `-ImplicitCastExpr 0x555dff14fb38 <col:22> 'int32_t':'int' <IntegralCast>
|   `-IntegerLiteral 0x555dff14fb18 <col:22> 'long' 2544148779
|-FunctionDecl 0x555dff14fc90 <line:20:1, col:52> col:41 used func_1 'int64_t (void)' static
| `-OptimizeNoneAttr 0x555dff14fd38 <col:16>
|-FunctionDecl 0x555dff14fe28 prev 0x555dff14fc90 <line:28:1, line:32:1> line:28:41 used func_1 'int64_t (void)' static
| |-CompoundStmt 0x555dff150088 <col:54, line:32:1> MathErrno=1
| | |-DeclStmt 0x555dff14ffc0 <line:29:3, col:40>
| | | `-VarDecl 0x555dff14ff38 <col:3, col:18> col:12 used l_2 'uint64_t':'unsigned long' cinit
| | |   `-IntegerLiteral 0x555dff14ffa0 <col:18> 'unsigned long' 18446744073709551610
| | |-UnaryOperator 0x555dff14fff8 <line:30:3, col:6> 'uint64_t':'unsigned long' postfix '++' MathErrno=1
| | | `-DeclRefExpr 0x555dff14ffd8 <col:3> 'uint64_t':'unsigned long' lvalue Var 0x555dff14ff38 'l_2' 'uint64_t':'unsigned long'
| | `-ReturnStmt 0x555dff150078 <line:31:3, col:10>
| |   `-ImplicitCastExpr 0x555dff150058 <col:10> 'int64_t':'long' <IntegralCast> MathErrno=1
| |     `-ImplicitCastExpr 0x555dff150038 <col:10> 'int32_t':'int' <LValueToRValue> MathErrno=1
| |       `-DeclRefExpr 0x555dff150018 <col:10> 'int32_t':'int' lvalue Var 0x555dff14fab0 'g_5' 'int32_t':'int'
| `-OptimizeNoneAttr 0x555dff14fed0 <line:28:16>
`-FunctionDecl 0x555dff1502f8 <line:35:1, line:50:1> line:35:30 main 'int (int, char **)'
  |-ParmVarDecl 0x555dff1500d0 <col:35, col:39> col:39 used argc 'int'
  |-ParmVarDecl 0x555dff1501d0 <col:45, col:56> col:51 used argv 'char **'
  |-CompoundStmt 0x555dff151128 <col:59, line:50:1> MathErrno=1
  | |-CallExpr 0x555dff1504a0 <line:36:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff150480 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff150408 <col:3> 'void (int)' Function 0x555dfeff2df0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x555dff150428 <col:20> 'int' 0
  | |-DeclStmt 0x555dff150578 <line:37:3, col:27>
  | | `-VarDecl 0x555dff1504f0 <col:3, col:26> col:7 used print_hash_value 'int' cinit
  | |   `-IntegerLiteral 0x555dff150558 <col:26> 'int' 0
  | |-CallExpr 0x555dff1505f0 <line:38:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff1505d0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff150590 <col:3> 'void (int)' Function 0x555dfeff2df0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x555dff1505b0 <col:20> 'int' 1
  | |-IfStmt 0x555dff1509b0 <line:39:3, line:41:3>
  | | |-BinaryOperator 0x555dff150908 <line:39:7, col:44> 'int' '&&' MathErrno=1
  | | | |-BinaryOperator 0x555dff150688 <col:7, col:15> 'int' '==' MathErrno=1
  | | | | |-ImplicitCastExpr 0x555dff150668 <col:7> 'int' <LValueToRValue> MathErrno=1
  | | | | | `-DeclRefExpr 0x555dff150628 <col:7> 'int' lvalue ParmVar 0x555dff1500d0 'argc' 'int'
  | | | | `-IntegerLiteral 0x555dff150648 <col:15> 'int' 2
  | | | `-BinaryOperator 0x555dff1508e0 <col:20, col:44> 'int' '==' MathErrno=1
  | | |   |-CallExpr 0x555dff150800 <col:20, col:39> 'int' MathErrno=1
  | | |   | |-ImplicitCastExpr 0x555dff1507e0 <col:20> 'int (*)(const char *, const char *)' <FunctionToPointerDecay> MathErrno=1
  | | |   | | `-DeclRefExpr 0x555dff1506b0 <col:20> 'int (const char *, const char *)' Function 0x555dff012c78 'strcmp' 'int (const char *, const char *)'
  | | |   | |-ImplicitCastExpr 0x555dff150860 <col:27, col:33> 'const char *' <NoOp> MathErrno=1
  | | |   | | `-ImplicitCastExpr 0x555dff150840 <col:27, col:33> 'char *' <LValueToRValue> MathErrno=1
  | | |   | |   `-ArraySubscriptExpr 0x555dff150730 <col:27, col:33> 'char *' lvalue
  | | |   | |     |-ImplicitCastExpr 0x555dff150710 <col:27> 'char **' <LValueToRValue> MathErrno=1
  | | |   | |     | `-DeclRefExpr 0x555dff1506d0 <col:27> 'char **' lvalue ParmVar 0x555dff1501d0 'argv' 'char **'
  | | |   | |     `-IntegerLiteral 0x555dff1506f0 <col:32> 'int' 1
  | | |   | `-ImplicitCastExpr 0x555dff1508a0 <col:36> 'const char *' <NoOp> MathErrno=1
  | | |   |   `-ImplicitCastExpr 0x555dff150880 <col:36> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | |   |     `-StringLiteral 0x555dff150750 <col:36> 'char[2]' lvalue "1"
  | | |   `-IntegerLiteral 0x555dff1508c0 <col:44> 'int' 0
  | | `-CompoundStmt 0x555dff150998 <col:47, line:41:3>
  | |   `-BinaryOperator 0x555dff150970 <line:40:5, col:24> 'int' '=' MathErrno=1
  | |     |-DeclRefExpr 0x555dff150930 <col:5> 'int' lvalue Var 0x555dff1504f0 'print_hash_value' 'int'
  | |     `-IntegerLiteral 0x555dff150950 <col:24> 'int' 1
  | |-CallExpr 0x555dff150a30 <line:42:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff150a10 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff1509d0 <col:3> 'void (int)' Function 0x555dfeff2df0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x555dff1509f0 <col:20> 'int' 2
  | |-CallExpr 0x555dff150ae0 <line:43:3, col:23> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x555dff150ac0 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x555dff150a68 <col:3> 'void (void)' Function 0x555dff11db00 'platform_main_begin' 'void (void)'
  | |-CallExpr 0x555dff150b70 <line:44:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff150b50 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff150b10 <col:3> 'void (int)' Function 0x555dfeff2df0 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x555dff150b30 <col:20> 'int' 3
  | |-CallExpr 0x555dff150c20 <line:45:3, col:16> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x555dff150bc8 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x555dff150ba8 <col:3> 'void (void)' Function 0x555dff14bc78 'crc32_gentab' 'void (void)'
  | |-CallExpr 0x555dff150cf0 <line:46:3, col:10> 'int64_t':'long' MathErrno=1
  | | `-ImplicitCastExpr 0x555dff150cd0 <col:3> 'int64_t (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x555dff150c50 <col:3> 'int64_t (void)' Function 0x555dff14fe28 'func_1' 'int64_t (void)'
  | |-CallExpr 0x555dff150e20 <line:47:3, col:47> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff150e00 <col:3> 'void (*)(uint64_t, char *, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff150d20 <col:3> 'void (uint64_t, char *, int)' Function 0x555dff14ece0 'transparent_crc' 'void (uint64_t, char *, int)'
  | | |-ImplicitCastExpr 0x555dff150e88 <col:19> 'uint64_t':'unsigned long' <IntegralCast> MathErrno=1
  | | | `-ImplicitCastExpr 0x555dff150e68 <col:19> 'int32_t':'int' <LValueToRValue> MathErrno=1
  | | |   `-DeclRefExpr 0x555dff150d40 <col:19> 'int32_t':'int' lvalue Var 0x555dff14fab0 'g_5' 'int32_t':'int'
  | | |-ImplicitCastExpr 0x555dff150ea8 <col:24> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | | `-StringLiteral 0x555dff150d60 <col:24> 'char[4]' lvalue "g_5"
  | | `-ImplicitCastExpr 0x555dff150ec8 <col:31> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x555dff150d80 <col:31> 'int' lvalue Var 0x555dff1504f0 'print_hash_value' 'int'
  | |-CallExpr 0x555dff151050 <line:48:3, col:67> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x555dff151030 <col:3> 'void (*)(uint32_t, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x555dff150ee8 <col:3> 'void (uint32_t, int)' Function 0x555dff11ddd0 'platform_main_end' 'void (uint32_t, int)'
  | | |-ImplicitCastExpr 0x555dff151090 <col:21, col:37> 'uint32_t':'unsigned int' <IntegralCast> MathErrno=1
  | | | `-BinaryOperator 0x555dff150f88 <col:21, col:37> 'unsigned long' '^' MathErrno=1
  | | |   |-ImplicitCastExpr 0x555dff150f68 <col:21> 'unsigned long' <IntegralCast> MathErrno=1
  | | |   | `-ImplicitCastExpr 0x555dff150f48 <col:21> 'uint32_t':'unsigned int' <LValueToRValue> MathErrno=1
  | | |   |   `-DeclRefExpr 0x555dff150f08 <col:21> 'uint32_t':'unsigned int' lvalue Var 0x555dff14aa98 'crc32_context' 'uint32_t':'unsigned int'
  | | |   `-IntegerLiteral 0x555dff150f28 <col:37> 'unsigned long' 4294967295
  | | `-ImplicitCastExpr 0x555dff1510b0 <col:51> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x555dff150fb0 <col:51> 'int' lvalue Var 0x555dff1504f0 'print_hash_value' 'int'
  | `-ReturnStmt 0x555dff1510f0 <line:49:3, col:10>
  |   `-IntegerLiteral 0x555dff1510d0 <col:10> 'int' 0
  `-OptimizeNoneAttr 0x555dff1503b0 <line:35:16>

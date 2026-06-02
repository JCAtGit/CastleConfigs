TranslationUnitDecl 0x564f7fd18448 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x564f7fd19020 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x564f7fd18a10 '__int128'
|-TypedefDecl 0x564f7fd19090 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x564f7fd18a30 'unsigned __int128'
|-TypedefDecl 0x564f7fd193a0 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x564f7fd19170 'struct __NSConstantString_tag'
|   `-Record 0x564f7fd190e8 '__NSConstantString_tag'
|-TypedefDecl 0x564f7fd18cc8 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x564f7fd18c80 'char *'
|   `-BuiltinType 0x564f7fd184f0 'char'
|-TypedefDecl 0x564f7fd18fb0 <<invalid sloc>> <invalid sloc> implicit referenced __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x564f7fd18f60 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x564f7fd18da0 'struct __va_list_tag'
|     `-Record 0x564f7fd18d20 '__va_list_tag'
|-FunctionDecl 0x564f7fd81750 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/MarkerDefinition.h:3:1, line:7:1> line:4:13 used codemarker_alpha 'void (int)' static
| |-ParmVarDecl 0x564f7fd81680 <col:30, col:34> col:34 used markerID 'int'
| |-CompoundStmt 0x564f7fd81b60 <col:44, line:7:1>
| | |-DeclStmt 0x564f7fd819a8 <line:5:5, col:34>
| | | `-VarDecl 0x564f7fd81908 <col:5, col:26> col:18 dummy 'volatile int' cinit
| | |   `-ImplicitCastExpr 0x564f7fd81990 <col:26> 'int' <LValueToRValue>
| | |     `-DeclRefExpr 0x564f7fd81970 <col:26> 'int' lvalue ParmVar 0x564f7fd81680 'markerID' 'int'
| | `-GCCAsmStmt 0x564f7fd81ae8 <line:6:2, col:49>
| |   `-ImplicitCastExpr 0x564f7fd81ad0 <col:29> 'int' <LValueToRValue>
| |     `-DeclRefExpr 0x564f7fd81a60 <col:29> 'int' lvalue ParmVar 0x564f7fd81680 'markerID' 'int'
| |-NoInlineAttr 0x564f7fd81800 <line:3:16>
| |-UsedAttr 0x564f7fd81858 <col:26>
| `-NoThrowAttr 0x564f7fd81880 <col:32>
|-TypedefDecl 0x564f7fd81b98 </usr/bin/../lib/clang/21/include/__stddef_size_t.h:18:1, col:23> col:23 referenced size_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-FunctionDecl 0x564f7fd81f18 </usr/include/string.h:43:14> col:14 implicit memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd82020 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fd82088 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd820f0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fd81fc0 <<invalid sloc>> Implicit 946
| `-NoThrowAttr 0x564f7fd82170 <col:14> Implicit
|-FunctionDecl 0x564f7fd82198 prev 0x564f7fd81f18 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:43:14 memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd81c08 <col:22, col:39> col:39 __dest 'void *restrict'
| |-ParmVarDecl 0x564f7fd81cb8 <col:47, col:70> col:70 __src 'const void *restrict'
| |-ParmVarDecl 0x564f7fd81d90 <line:44:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd822f8 <<invalid sloc>> Inherited Implicit 946
| |-NoThrowAttr 0x564f7fd82258 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd822b0 <line:555:57, /usr/include/string.h:44:44> 1 2
|-FunctionDecl 0x564f7fd82568 <line:47:14> col:14 implicit memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9c820 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fd9c888 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd9c8f0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fd82610 <<invalid sloc>> Implicit 948
| `-NoThrowAttr 0x564f7fd9c970 <col:14> Implicit
|-FunctionDecl 0x564f7fd9c998 prev 0x564f7fd82568 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:47:14 memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd82340 <col:23, col:29> col:29 __dest 'void *'
| |-ParmVarDecl 0x564f7fd823c0 <col:37, col:49> col:49 __src 'const void *'
| |-ParmVarDecl 0x564f7fd82438 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd9caf8 <<invalid sloc>> Inherited Implicit 948
| |-NoThrowAttr 0x564f7fd9ca58 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd9cab0 <line:555:57, /usr/include/string.h:48:30> 1 2
|-FunctionDecl 0x564f7fd9ce48 <line:54:14> col:14 implicit memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9cf50 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fd9cfb8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd9d020 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x564f7fd9d088 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fd9cef0 <<invalid sloc>> Implicit 951
|-FunctionDecl 0x564f7fd9d110 prev 0x564f7fd9ce48 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:54:14 memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9cb40 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x564f7fd9cbc0 <col:48, col:71> col:71 __src 'const void *restrict'
| |-ParmVarDecl 0x564f7fd9cc40 <line:55:9, col:13> col:13 __c 'int'
| |-ParmVarDecl 0x564f7fd9ccb8 <col:18, col:25> col:25 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd9d278 <<invalid sloc>> Inherited Implicit 951
| |-NoThrowAttr 0x564f7fd9d1d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd9d230 <line:555:57, /usr/include/string.h:56:29> 1 2
|-FunctionDecl 0x564f7fd9d518 <line:61:14> col:14 implicit memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9d620 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fd9d688 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x564f7fd9d6f0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fd9d5c0 <<invalid sloc>> Implicit 950
| `-NoThrowAttr 0x564f7fd9d770 <col:14> Implicit
|-FunctionDecl 0x564f7fd9e850 prev 0x564f7fd9d518 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:61:14 memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9d2c0 <col:22, col:28> col:28 __s 'void *'
| |-ParmVarDecl 0x564f7fd9d340 <col:33, col:37> col:37 __c 'int'
| |-ParmVarDecl 0x564f7fd9d3b8 <col:42, col:49> col:49 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd9e9a8 <<invalid sloc>> Inherited Implicit 950
| |-NoThrowAttr 0x564f7fd9e910 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd9e968 <line:555:57, /usr/include/string.h:61:75> 1
|-FunctionDecl 0x564f7fd9ec68 <line:64:12> col:12 implicit memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9ed70 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd9edd8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd9ee40 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fd9ed10 <<invalid sloc>> Implicit 944
|-FunctionDecl 0x564f7fd9eec0 prev 0x564f7fd9ec68 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:64:12 memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9e9f0 <col:20, col:32> col:32 __s1 'const void *'
| |-ParmVarDecl 0x564f7fd9ea70 <col:38, col:50> col:50 __s2 'const void *'
| |-ParmVarDecl 0x564f7fd9eae8 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd9f048 <<invalid sloc>> Inherited Implicit 944
| |-NoThrowAttr 0x564f7fd9ef80 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd9efd8 <line:479:45>
| `-NonNullAttr 0x564f7fd9f000 <line:555:57, /usr/include/string.h:65:49> 1 2
|-FunctionDecl 0x564f7fd9f270 <line:80:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:80:12 __memcmpeq 'int (const void *, const void *, size_t)' extern
| |-ParmVarDecl 0x564f7fd9f090 <col:24, col:36> col:36 __s1 'const void *'
| |-ParmVarDecl 0x564f7fd9f110 <col:42, col:54> col:54 __s2 'const void *'
| |-ParmVarDecl 0x564f7fd9f188 <col:60, col:67> col:67 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fd9f330 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd9f388 <line:479:45>
| `-NonNullAttr 0x564f7fd9f3b0 <line:555:57, /usr/include/string.h:81:49> 1 2
|-FunctionDecl 0x564f7fd9f668 <line:107:14> col:14 implicit memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9f770 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd9f7d8 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x564f7fd9f860 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fd9f710 <<invalid sloc>> Implicit 943
| `-NoThrowAttr 0x564f7fd9f8e0 <col:14> Implicit
|-FunctionDecl 0x564f7fd9f908 prev 0x564f7fd9f668 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:107:14 memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd9f410 <col:22, col:34> col:34 __s 'const void *'
| |-ParmVarDecl 0x564f7fd9f490 <col:39, col:43> col:43 __c 'int'
| |-ParmVarDecl 0x564f7fd9f508 <col:48, col:55> col:55 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd9fa88 <<invalid sloc>> Inherited Implicit 943
| |-NoThrowAttr 0x564f7fd9f9c8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd9fa20 <line:479:45>
| `-NonNullAttr 0x564f7fd9fa48 <line:555:57, /usr/include/string.h:108:47> 1
|-FunctionDecl 0x564f7fd9fcb8 <line:141:14> col:14 implicit strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fd9fdc0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fd9fe28 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fd9fd60 <<invalid sloc>> Implicit 1238
| `-NoThrowAttr 0x564f7fd9fea0 <col:14> Implicit
|-FunctionDecl 0x564f7fd9fec8 prev 0x564f7fd9fcb8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:141:14 strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fd9fad0 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fd9fb50 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x564f7fda0018 <<invalid sloc>> Inherited Implicit 1238
| |-NoThrowAttr 0x564f7fd9ff80 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd9ffd8 <line:555:57, /usr/include/string.h:142:30> 1 2
|-FunctionDecl 0x564f7fda02d8 <line:144:14> col:14 implicit strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda03e0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fda0448 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda04b0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fda0380 <<invalid sloc>> Implicit 1249
| `-NoThrowAttr 0x564f7fda0530 <col:14> Implicit
|-FunctionDecl 0x564f7fda0558 prev 0x564f7fda02d8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:144:14 strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda0060 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fda00e0 <line:145:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fda0158 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fda06b8 <<invalid sloc>> Inherited Implicit 1249
| |-NoThrowAttr 0x564f7fda0618 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fda0670 <line:555:57, /usr/include/string.h:146:30> 1 2
|-FunctionDecl 0x564f7fda0870 <line:149:14> col:14 implicit strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda0978 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fda09e0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda0918 <<invalid sloc>> Implicit 1232
| `-NoThrowAttr 0x564f7fda0a58 <col:14> Implicit
|-FunctionDecl 0x564f7fda0a80 prev 0x564f7fda0870 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:149:14 strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda0700 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fda0780 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x564f7fda0bd8 <<invalid sloc>> Inherited Implicit 1232
| |-NoThrowAttr 0x564f7fda0b38 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fda0b90 <line:555:57, /usr/include/string.h:150:30> 1 2
|-FunctionDecl 0x564f7fda0e00 <line:152:14> col:14 implicit strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda0f08 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fda0f70 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda0fd8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fda0ea8 <<invalid sloc>> Implicit 1245
| `-NoThrowAttr 0x564f7fda1058 <col:14> Implicit
|-FunctionDecl 0x564f7fda1080 prev 0x564f7fda0e00 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:152:14 strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda0c20 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fda0ca0 <col:48, col:71> col:71 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fda0d18 <line:153:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fda11d8 <<invalid sloc>> Inherited Implicit 1245
| |-NoThrowAttr 0x564f7fda1140 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fda1198 <line:555:57, /usr/include/string.h:153:45> 1 2
|-FunctionDecl 0x564f7fda13c8 <line:156:12> col:12 implicit used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda14d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda1538 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda1470 <<invalid sloc>> Implicit 1236
| `-NoThrowAttr 0x564f7fda15b0 <col:12> Implicit
|-FunctionDecl 0x564f7fda15d8 prev 0x564f7fda13c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:156:12 used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda1220 <col:20, col:32> col:32 __s1 'const char *'
| |-ParmVarDecl 0x564f7fda12a0 <col:38, col:50> col:50 __s2 'const char *'
| |-BuiltinAttr 0x564f7fda1758 <<invalid sloc>> Inherited Implicit 1236
| |-NoThrowAttr 0x564f7fda1690 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda16e8 <line:479:45>
| `-NonNullAttr 0x564f7fda1710 <line:555:57, /usr/include/string.h:157:49> 1 2
|-FunctionDecl 0x564f7fda2788 <line:159:12> col:12 implicit strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda2890 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda28f8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda2960 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fda2830 <<invalid sloc>> Implicit 1247
| `-NoThrowAttr 0x564f7fda29e0 <col:12> Implicit
|-FunctionDecl 0x564f7fda2a08 prev 0x564f7fda2788 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:159:12 strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda17a0 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x564f7fda2590 <col:39, col:51> col:51 __s2 'const char *'
| |-ParmVarDecl 0x564f7fda2608 <col:57, col:64> col:64 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fda2b88 <<invalid sloc>> Inherited Implicit 1247
| |-NoThrowAttr 0x564f7fda2ac8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda2b20 <line:479:45>
| `-NonNullAttr 0x564f7fda2b48 <line:555:57, /usr/include/string.h:160:49> 1 2
|-FunctionDecl 0x564f7fda2d30 <line:163:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:163:12 strcoll 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda2bd0 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x564f7fda2c50 <col:39, col:51> col:51 __s2 'const char *'
| |-NoThrowAttr 0x564f7fda2de8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda2e40 <line:479:45>
| `-NonNullAttr 0x564f7fda2e68 <line:555:57, /usr/include/string.h:164:49> 1 2
|-FunctionDecl 0x564f7fda3110 <line:166:15> col:15 implicit strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda3218 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fda3280 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda32e8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fda31b8 <<invalid sloc>> Implicit 1279
|-FunctionDecl 0x564f7fda3368 prev 0x564f7fda3110 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:166:15 strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda2ec0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fda2f40 <line:167:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fda2fb8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fda34c8 <<invalid sloc>> Inherited Implicit 1279
| |-NoThrowAttr 0x564f7fda3428 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fda3480 <line:555:57, /usr/include/string.h:168:26> 2
|-RecordDecl 0x564f7fda34f8 </usr/include/bits/types/__locale_t.h:27:1, line:39:1> line:27:8 struct __locale_struct definition
| |-RecordDecl 0x564f7fda3ca0 parent 0x564f7fd18448 <line:30:3, col:10> col:10 struct __locale_data
| |-FieldDecl 0x564f7fda3ec8 <col:3, col:37> col:25 __locales 'struct __locale_data *[13]'
| |-FieldDecl 0x564f7fda3f68 <line:33:3, col:29> col:29 __ctype_b 'const unsigned short *'
| |-FieldDecl 0x564f7fda3fd0 <line:34:3, col:14> col:14 __ctype_tolower 'const int *'
| |-FieldDecl 0x564f7fda4038 <line:35:3, col:14> col:14 __ctype_toupper 'const int *'
| `-FieldDecl 0x564f7fda4128 <line:38:3, col:25> col:15 __names 'const char *[13]'
|-TypedefDecl 0x564f7fda4238 <line:41:1, col:33> col:33 referenced __locale_t 'struct __locale_struct *'
| `-PointerType 0x564f7fda41e0 'struct __locale_struct *'
|   `-ElaboratedType 0x564f7fda4180 'struct __locale_struct' sugar
|     `-RecordType 0x564f7fda3c80 'struct __locale_struct'
|       `-Record 0x564f7fda34f8 '__locale_struct'
|-TypedefDecl 0x564f7fda4300 </usr/include/bits/types/locale_t.h:24:1, col:20> col:20 referenced locale_t '__locale_t':'struct __locale_struct *'
| `-ElaboratedType 0x564f7fda42c0 '__locale_t' sugar
|   `-TypedefType 0x564f7fda4290 '__locale_t' sugar
|     |-Typedef 0x564f7fda4238 '__locale_t'
|     `-PointerType 0x564f7fda41e0 'struct __locale_struct *'
|       `-ElaboratedType 0x564f7fda4180 'struct __locale_struct' sugar
|         `-RecordType 0x564f7fda3c80 'struct __locale_struct'
|           `-Record 0x564f7fda34f8 '__locale_struct'
|-FunctionDecl 0x564f7fda4678 </usr/include/string.h:175:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:175:12 strcoll_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x564f7fda4370 <col:23, col:35> col:35 __s1 'const char *'
| |-ParmVarDecl 0x564f7fda43f0 <col:41, col:53> col:53 __s2 'const char *'
| |-ParmVarDecl 0x564f7fda44d0 <col:59, col:68> col:68 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x564f7fda4738 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda4790 <line:479:45>
| `-NonNullAttr 0x564f7fda47b8 <line:555:57, /usr/include/string.h:176:52> 1 2 3
|-FunctionDecl 0x564f7fda4b10 <line:179:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:179:15 strxfrm_l 'size_t (char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x564f7fda4818 <col:26, col:32> col:32 __dest 'char *'
| |-ParmVarDecl 0x564f7fda4898 <col:40, col:52> col:52 __src 'const char *'
| |-ParmVarDecl 0x564f7fda4910 <col:59, col:66> col:66 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fda4988 <line:180:5, col:14> col:14 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x564f7fda4bd8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fda4c30 <line:555:57, /usr/include/string.h:180:43> 2 4
|-FunctionDecl 0x564f7fda5da8 <line:187:14> col:14 implicit strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x564f7fda5eb0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda5e50 <<invalid sloc>> Implicit 1240
| `-NoThrowAttr 0x564f7fda5f20 <col:14> Implicit
|-FunctionDecl 0x564f7fda5f48 prev 0x564f7fda5da8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:187:14 strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x564f7fda5cb8 <col:22, col:34> col:34 __s 'const char *'
| |-BuiltinAttr 0x564f7fda60c8 <<invalid sloc>> Inherited Implicit 1240
| |-NoThrowAttr 0x564f7fda5ff8 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x564f7fda6050 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x564f7fda6088 <line:555:57, /usr/include/string.h:188:48> 1
|-FunctionDecl 0x564f7fda62c8 <line:195:14> col:14 implicit strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda63d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda6438 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fda6370 <<invalid sloc>> Implicit 1272
| `-NoThrowAttr 0x564f7fda64b0 <col:14> Implicit
|-FunctionDecl 0x564f7fda64d8 prev 0x564f7fda62c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:195:14 strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fda6110 <col:23, col:35> col:35 __string 'const char *'
| |-ParmVarDecl 0x564f7fda6188 <col:45, col:52> col:52 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fda6668 <<invalid sloc>> Inherited Implicit 1272
| |-NoThrowAttr 0x564f7fda6590 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x564f7fda65e8 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x564f7fda6620 <line:555:57, /usr/include/string.h:196:48> 1
|-FunctionDecl 0x564f7fda6838 <line:246:14> col:14 implicit strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fda6940 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda69a8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fda68e0 <<invalid sloc>> Implicit 1234
| `-NoThrowAttr 0x564f7fda6a20 <col:14> Implicit
|-FunctionDecl 0x564f7fda6a48 prev 0x564f7fda6838 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:246:14 strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fda66b0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x564f7fda6730 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x564f7fda6bc8 <<invalid sloc>> Inherited Implicit 1234
| |-NoThrowAttr 0x564f7fda6b00 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda6b58 <line:479:45>
| `-NonNullAttr 0x564f7fda6b80 <line:555:57, /usr/include/string.h:247:46> 1
|-FunctionDecl 0x564f7fda6d70 <line:273:14> col:14 implicit strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fda6e78 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda6ee0 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fda6e18 <<invalid sloc>> Implicit 1278
| `-NoThrowAttr 0x564f7fda6f58 <col:14> Implicit
|-FunctionDecl 0x564f7fda6f80 prev 0x564f7fda6d70 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:273:14 strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fda6c10 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x564f7fda6cb0 <col:40, col:44> col:44 __c 'int'
| |-BuiltinAttr 0x564f7fda70f8 <<invalid sloc>> Inherited Implicit 1278
| |-NoThrowAttr 0x564f7fda7038 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda7090 <line:479:45>
| `-NonNullAttr 0x564f7fda70b8 <line:555:57, /usr/include/string.h:274:46> 1
|-FunctionDecl 0x564f7fda7280 <line:286:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:286:14 strchrnul 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fda7140 <col:25, col:37> col:37 __s 'const char *'
| |-ParmVarDecl 0x564f7fda71c0 <col:42, col:46> col:46 __c 'int'
| |-NoThrowAttr 0x564f7fda7338 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda7390 <line:479:45>
| `-NonNullAttr 0x564f7fda73b8 <line:555:57, /usr/include/string.h:287:46> 1
|-FunctionDecl 0x564f7fda75f0 <line:293:15> col:15 implicit strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda76f8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda7760 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x564f7fda7698 <<invalid sloc>> Implicit 1262
|-FunctionDecl 0x564f7fda77d8 prev 0x564f7fda75f0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:293:15 strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda7410 <col:24, col:36> col:36 __s 'const char *'
| |-ParmVarDecl 0x564f7fda7490 <col:41, col:53> col:53 __reject 'const char *'
| |-BuiltinAttr 0x564f7fda7958 <<invalid sloc>> Inherited Implicit 1262
| |-NoThrowAttr 0x564f7fda7890 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda78e8 <line:479:45>
| `-NonNullAttr 0x564f7fda7910 <line:555:57, /usr/include/string.h:294:49> 1 2
|-FunctionDecl 0x564f7fda7af8 <line:297:15> col:15 implicit strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda7c00 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda7cc0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda7ba0 <<invalid sloc>> Implicit 1251
| `-NoThrowAttr 0x564f7fda7d38 <col:15> Implicit
|-FunctionDecl 0x564f7fda7d60 prev 0x564f7fda7af8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:297:15 strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda79a0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x564f7fda7a20 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x564f7fda7ed8 <<invalid sloc>> Inherited Implicit 1251
| |-NoThrowAttr 0x564f7fda7e18 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda7e70 <line:479:45>
| `-NonNullAttr 0x564f7fda7e98 <line:555:57, /usr/include/string.h:298:49> 1 2
|-FunctionDecl 0x564f7fda80c8 <line:323:14> col:14 implicit strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda81d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda8238 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda8170 <<invalid sloc>> Implicit 1276
| `-NoThrowAttr 0x564f7fda82b0 <col:14> Implicit
|-FunctionDecl 0x564f7fda82d8 prev 0x564f7fda80c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:323:14 strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda7f20 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x564f7fda7fa0 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x564f7fda8458 <<invalid sloc>> Inherited Implicit 1276
| |-NoThrowAttr 0x564f7fda8390 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda83e8 <line:479:45>
| `-NonNullAttr 0x564f7fda8410 <line:555:57, /usr/include/string.h:324:49> 1 2
|-FunctionDecl 0x564f7fda8600 <line:350:14> col:14 implicit strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda8708 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fda8770 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fda86a8 <<invalid sloc>> Implicit 1253
| `-NoThrowAttr 0x564f7fda87e8 <col:14> Implicit
|-FunctionDecl 0x564f7fda8810 prev 0x564f7fda8600 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:350:14 strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda84a0 <col:22, col:34> col:34 __haystack 'const char *'
| |-ParmVarDecl 0x564f7fda8520 <col:46, col:58> col:58 __needle 'const char *'
| |-BuiltinAttr 0x564f7fda8988 <<invalid sloc>> Inherited Implicit 1253
| |-NoThrowAttr 0x564f7fda88c8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fda8920 <line:479:45>
| `-NonNullAttr 0x564f7fda8948 <line:555:57, /usr/include/string.h:351:49> 1 2
|-FunctionDecl 0x564f7fda8b10 <line:356:14> col:14 implicit strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda8c18 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fd96c00 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x564f7fda8bb8 <<invalid sloc>> Implicit 1261
|-FunctionDecl 0x564f7fd96c78 prev 0x564f7fda8b10 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:356:14 strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fda89d0 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fda8a50 <col:44, col:67> col:67 __delim 'const char *restrict'
| |-BuiltinAttr 0x564f7fd96dc8 <<invalid sloc>> Inherited Implicit 1261
| |-NoThrowAttr 0x564f7fd96d30 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd96d88 <line:555:57, /usr/include/string.h:357:27> 2
|-FunctionDecl 0x564f7fd970c8 <line:361:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:361:14 __strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x564f7fd96e10 <col:26, col:43> col:43 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fd96e90 <line:362:5, col:28> col:28 __delim 'const char *restrict'
| |-ParmVarDecl 0x564f7fd96f48 <line:363:5, col:23> col:23 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x564f7fd97188 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd971e0 <line:555:57, /usr/include/string.h:364:30> 2 3
|-FunctionDecl 0x564f7fd97428 <line:366:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:366:14 strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x564f7fd97240 <col:24, col:41> col:41 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fd972c0 <col:46, col:69> col:69 __delim 'const char *restrict'
| |-ParmVarDecl 0x564f7fd97340 <line:367:10, col:28> col:28 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x564f7fd974e8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd97540 <line:555:57, /usr/include/string.h:368:30> 2 3
|-FunctionDecl 0x564f7fd97700 <line:380:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:380:14 strcasestr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fd975a0 <col:26, col:38> col:38 __haystack 'const char *'
| |-ParmVarDecl 0x564f7fd97620 <col:50, col:62> col:62 __needle 'const char *'
| |-NoThrowAttr 0x564f7fd977b8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd97810 <line:479:45>
| `-NonNullAttr 0x564f7fd97838 <line:555:57, /usr/include/string.h:381:49> 1 2
|-FunctionDecl 0x564f7fd97c10 <line:389:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:389:14 memmem 'void *(const void *, size_t, const void *, size_t)' extern
| |-ParmVarDecl 0x564f7fd97890 <col:22, col:34> col:34 __haystack 'const void *'
| |-ParmVarDecl 0x564f7fd97908 <col:46, col:53> col:53 __haystacklen 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fd97988 <line:390:8, col:20> col:20 __needle 'const void *'
| |-ParmVarDecl 0x564f7fd97a00 <col:30, col:37> col:37 __needlelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fd97cd8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd97d30 <line:479:45>
| `-NonNullAttr 0x564f7fd97d58 <line:555:57, /usr/include/string.h:391:49> 1 3
|-FunctionDecl 0x564f7fd97f90 <line:397:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:397:14 __mempcpy 'void *(void *restrict, const void *restrict, size_t)' extern
| |-ParmVarDecl 0x564f7fd97db0 <col:25, col:42> col:42 __dest 'void *restrict'
| |-ParmVarDecl 0x564f7fd97e30 <line:398:4, col:27> col:27 __src 'const void *restrict'
| |-ParmVarDecl 0x564f7fd97ea8 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fd98050 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd980a8 <line:555:57, /usr/include/string.h:399:30> 1 2
|-FunctionDecl 0x564f7fd982e0 <line:400:14> col:14 implicit mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd983e8 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fd98450 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fd984b8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fd98388 <<invalid sloc>> Implicit 955
|-FunctionDecl 0x564f7fd98538 prev 0x564f7fd982e0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:400:14 mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fd98100 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x564f7fd98180 <line:401:9, col:32> col:32 __src 'const void *restrict'
| |-ParmVarDecl 0x564f7fd981f8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fd98698 <<invalid sloc>> Inherited Implicit 955
| |-NoThrowAttr 0x564f7fd985f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fd98650 <line:555:57, /usr/include/string.h:402:30> 1 2
|-FunctionDecl 0x564f7fd98810 <line:407:15> col:15 implicit strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x564f7fd98918 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fd988b8 <<invalid sloc>> Implicit 1243
| `-NoThrowAttr 0x564f7fd98988 <col:15> Implicit
|-FunctionDecl 0x564f7fd989b0 prev 0x564f7fd98810 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:407:15 strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x564f7fd986e0 <col:23, col:35> col:35 __s 'const char *'
| |-BuiltinAttr 0x564f7fd98b28 <<invalid sloc>> Inherited Implicit 1243
| |-NoThrowAttr 0x564f7fd98a60 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fd98ab8 <line:479:45>
| `-NonNullAttr 0x564f7fd98ae0 <line:555:57, /usr/include/string.h:408:46> 1
|-FunctionDecl 0x564f7fdaf600 <line:413:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:413:15 strnlen 'size_t (const char *, size_t)' extern
| |-ParmVarDecl 0x564f7fd98b70 <col:24, col:36> col:36 __string 'const char *'
| |-ParmVarDecl 0x564f7fdaf4c0 <col:46, col:53> col:53 __maxlen 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fdaf6b8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdaf710 <line:479:45>
| `-NonNullAttr 0x564f7fdaf738 <line:555:57, /usr/include/string.h:414:46> 1
|-FunctionDecl 0x564f7fdaf868 <line:419:14> col:14 implicit strerror 'char *(int)' extern
| |-ParmVarDecl 0x564f7fdaf970 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x564f7fdaf910 <<invalid sloc>> Implicit 1241
|-FunctionDecl 0x564f7fdaf9e0 prev 0x564f7fdaf868 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:419:14 strerror 'char *(int)' extern
| |-ParmVarDecl 0x564f7fdaf790 <col:24, col:28> col:28 __errnum 'int'
| |-BuiltinAttr 0x564f7fdafae8 <<invalid sloc>> Inherited Implicit 1241
| `-NoThrowAttr 0x564f7fdafa90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdafde8 </usr/include/string.h:432:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:432:28 strerror_r 'int (int, char *, size_t)' extern
| |-ParmVarDecl 0x564f7fdafb30 <line:433:8, col:12> col:12 __errnum 'int'
| |-ParmVarDecl 0x564f7fdafbb0 <col:22, col:28> col:28 __buf 'char *'
| |-ParmVarDecl 0x564f7fdafc28 <col:35, col:42> col:42 __buflen 'size_t':'unsigned long'
| |-AsmLabelAttr 0x564f7fdafe90 <<scratch space>:39:1> "__xpg_strerror_r" IsLiteralLabel
| |-NoThrowAttr 0x564f7fdaff28 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdaff50 <line:555:57, /usr/include/string.h:434:38> 2
|-FunctionDecl 0x564f7fdb0148 <line:458:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:458:14 strerror_l 'char *(int, locale_t)' extern
| |-ParmVarDecl 0x564f7fdaffb0 <col:26, col:30> col:30 __errnum 'int'
| |-ParmVarDecl 0x564f7fdb0028 <col:40, col:49> col:49 __l 'locale_t':'struct __locale_struct *'
| `-NoThrowAttr 0x564f7fdb0200 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdb37e0 </usr/include/strings.h:34:12> col:12 implicit bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb38e8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fdb3950 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fdb39b8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fdb3888 <<invalid sloc>> Implicit 179
|-FunctionDecl 0x564f7fdb3a38 prev 0x564f7fdb37e0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:34:12 bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb0270 <col:18, col:30> col:30 __s1 'const void *'
| |-ParmVarDecl 0x564f7fdb02f0 <col:36, col:48> col:48 __s2 'const void *'
| |-ParmVarDecl 0x564f7fdb0368 <col:54, col:61> col:61 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb3bb8 <<invalid sloc>> Inherited Implicit 179
| |-NoThrowAttr 0x564f7fdb3af8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb3b50 <line:479:45>
| `-NonNullAttr 0x564f7fdb3b78 <line:555:57, /usr/include/strings.h:35:49> 1 2
|-FunctionDecl 0x564f7fdb3e70 <line:38:13> col:13 implicit bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb3f78 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fdb3fe0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fdb4048 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fdb3f18 <<invalid sloc>> Implicit 186
| `-NoThrowAttr 0x564f7fdb40c8 <col:13> Implicit
|-FunctionDecl 0x564f7fdb40f0 prev 0x564f7fdb3e70 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:38:13 bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb3c00 <col:20, col:32> col:32 __src 'const void *'
| |-ParmVarDecl 0x564f7fdb3c80 <col:39, col:45> col:45 __dest 'void *'
| |-ParmVarDecl 0x564f7fdb3cf8 <col:53, col:60> col:60 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb4248 <<invalid sloc>> Inherited Implicit 186
| |-NoThrowAttr 0x564f7fdb41b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb4208 <line:555:57, /usr/include/strings.h:39:27> 1 2
|-FunctionDecl 0x564f7fdb4440 <line:42:13> col:13 implicit bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb4548 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fdb45b0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fdb44e8 <<invalid sloc>> Implicit 184
| `-NoThrowAttr 0x564f7fdb4628 <col:13> Implicit
|-FunctionDecl 0x564f7fdb4650 prev 0x564f7fdb4440 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:42:13 bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb4290 <col:20, col:26> col:26 __s 'void *'
| |-ParmVarDecl 0x564f7fdb4308 <col:31, col:38> col:38 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb47a8 <<invalid sloc>> Inherited Implicit 184
| |-NoThrowAttr 0x564f7fdb4708 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb4760 <line:555:57, /usr/include/strings.h:42:64> 1
|-FunctionDecl 0x564f7fdb4948 <line:68:14> col:14 implicit index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fdb4a50 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb4ab8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fdb49f0 <<invalid sloc>> Implicit 743
| `-NoThrowAttr 0x564f7fdb4b30 <col:14> Implicit
|-FunctionDecl 0x564f7fdb4b58 prev 0x564f7fdb4948 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:68:14 index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fdb4808 <col:21, col:33> col:33 __s 'const char *'
| |-ParmVarDecl 0x564f7fdb4888 <col:38, col:42> col:42 __c 'int'
| |-BuiltinAttr 0x564f7fdb4cd8 <<invalid sloc>> Inherited Implicit 743
| |-NoThrowAttr 0x564f7fdb4c10 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb4c68 <line:479:45>
| `-NonNullAttr 0x564f7fdb4c90 <line:555:57, /usr/include/strings.h:69:46> 1
|-FunctionDecl 0x564f7fdb4e60 <line:96:14> col:14 implicit rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fdb4f68 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb4fd0 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fdb4f08 <<invalid sloc>> Implicit 1098
| `-NoThrowAttr 0x564f7fdb5048 <col:14> Implicit
|-FunctionDecl 0x564f7fdb5070 prev 0x564f7fdb4e60 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:96:14 rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x564f7fdb4d20 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x564f7fdb4da0 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x564f7fdb51e8 <<invalid sloc>> Inherited Implicit 1098
| |-NoThrowAttr 0x564f7fdb5128 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb5180 <line:479:45>
| `-NonNullAttr 0x564f7fdb51a8 <line:555:57, /usr/include/strings.h:97:46> 1
|-FunctionDecl 0x564f7fdb5308 <line:104:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:104:12 ffs 'int (int)' extern
| |-ParmVarDecl 0x564f7fdb5230 <col:17, col:21> col:21 __i 'int'
| |-NoThrowAttr 0x564f7fdb53b8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdb5410 <line:486:46>
|-FunctionDecl 0x564f7fdb5528 </usr/include/strings.h:110:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:110:12 ffsl 'int (long)' extern
| |-ParmVarDecl 0x564f7fdb5450 <col:18, col:27> col:27 __l 'long'
| |-NoThrowAttr 0x564f7fdb55d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdb5630 <line:486:46>
|-FunctionDecl 0x564f7fdb5748 </usr/include/strings.h:111:15, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:111:26 ffsll 'int (long long)' extern
| |-ParmVarDecl 0x564f7fdb5670 <col:33, col:47> col:47 __ll 'long long'
| |-NoThrowAttr 0x564f7fdb5808 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdb5860 <line:486:46>
|-FunctionDecl 0x564f7fdb5a00 </usr/include/strings.h:116:12> col:12 implicit strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fdb5b08 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb5b70 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x564f7fdb5aa8 <<invalid sloc>> Implicit 1230
|-FunctionDecl 0x564f7fdb5be8 prev 0x564f7fdb5a00 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:116:12 strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fdb58a0 <col:24, col:36> col:36 __s1 'const char *'
| |-ParmVarDecl 0x564f7fdb5920 <col:42, col:54> col:54 __s2 'const char *'
| |-BuiltinAttr 0x564f7fdb5d68 <<invalid sloc>> Inherited Implicit 1230
| |-NoThrowAttr 0x564f7fdb5ca0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb5cf8 <line:479:45>
| `-NonNullAttr 0x564f7fdb5d20 <line:555:57, /usr/include/strings.h:117:49> 1 2
|-FunctionDecl 0x564f7fdb5f90 <line:120:12> col:12 implicit strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb6098 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb6100 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb6168 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fdb6038 <<invalid sloc>> Implicit 1270
|-FunctionDecl 0x564f7fdb61e8 prev 0x564f7fdb5f90 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:120:12 strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb5db0 <col:25, col:37> col:37 __s1 'const char *'
| |-ParmVarDecl 0x564f7fdb5e30 <col:43, col:55> col:55 __s2 'const char *'
| |-ParmVarDecl 0x564f7fdb5ea8 <col:61, col:68> col:68 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb6368 <<invalid sloc>> Inherited Implicit 1270
| |-NoThrowAttr 0x564f7fdb62a8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb6300 <line:479:45>
| `-NonNullAttr 0x564f7fdb6328 <line:555:57, /usr/include/strings.h:121:49> 1 2
|-FunctionDecl 0x564f7fdb65b0 <line:128:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:128:12 strcasecmp_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x564f7fdb63b0 <col:26, col:38> col:38 __s1 'const char *'
| |-ParmVarDecl 0x564f7fdb6430 <col:44, col:56> col:56 __s2 'const char *'
| |-ParmVarDecl 0x564f7fdb64a8 <col:62, col:71> col:71 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x564f7fdb6670 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb66c8 <line:479:45>
| `-NonNullAttr 0x564f7fdb66f0 <line:555:57, /usr/include/strings.h:129:52> 1 2 3
|-FunctionDecl 0x564f7fdb6ab8 <line:133:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:133:12 strncasecmp_l 'int (const char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x564f7fdb6758 <col:27, col:39> col:39 __s1 'const char *'
| |-ParmVarDecl 0x564f7fdb6810 <col:45, col:57> col:57 __s2 'const char *'
| |-ParmVarDecl 0x564f7fdb6888 <line:134:6, col:13> col:13 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fdb6900 <col:18, col:27> col:27 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x564f7fdb6b80 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x564f7fdb6bd8 <line:479:45>
| `-NonNullAttr 0x564f7fdb6c00 <line:555:57, /usr/include/strings.h:135:52> 1 2 4
|-FunctionDecl 0x564f7fdb6d98 </usr/include/string.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:466:13 explicit_bzero 'void (void *, size_t)' extern
| |-ParmVarDecl 0x564f7fdb6c68 <col:29, col:35> col:35 __s 'void *'
| |-ParmVarDecl 0x564f7fdb6ce0 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fdb6e50 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb6ea8 <line:555:57, /usr/include/string.h:466:73> 1
|-FunctionDecl 0x564f7fdb70e8 <line:471:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:471:14 strsep 'char *(char **restrict, const char *restrict)' extern
| |-ParmVarDecl 0x564f7fdb6f00 <col:22, col:40> col:40 __stringp 'char **restrict'
| |-ParmVarDecl 0x564f7fdb6f80 <line:472:8, col:31> col:31 __delim 'const char *restrict'
| |-NoThrowAttr 0x564f7fdb71a0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb71f8 <line:555:57, /usr/include/string.h:473:30> 1 2
|-FunctionDecl 0x564f7fdb72e8 <line:478:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:478:14 strsignal 'char *(int)' extern
| |-ParmVarDecl 0x564f7fdb7250 <col:25, col:29> col:29 __sig 'int'
| `-NoThrowAttr 0x564f7fdb7398 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdb7568 </usr/include/string.h:489:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:489:14 __stpcpy 'char *(char *restrict, const char *restrict)' extern
| |-ParmVarDecl 0x564f7fdb7408 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb7488 <col:49, col:72> col:72 __src 'const char *restrict'
| |-NoThrowAttr 0x564f7fdb7620 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb7678 <line:555:57, /usr/include/string.h:490:30> 1 2
|-FunctionDecl 0x564f7fdb7858 <line:491:14> col:14 implicit stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fdb7960 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fdb79c8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fdb7900 <<invalid sloc>> Implicit 1224
| `-NoThrowAttr 0x564f7fdb7a40 <col:14> Implicit
|-FunctionDecl 0x564f7fdb7a68 prev 0x564f7fdb7858 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:491:14 stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x564f7fdb76d0 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb7750 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x564f7fdb7bb8 <<invalid sloc>> Inherited Implicit 1224
| |-NoThrowAttr 0x564f7fdb7b20 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb7b78 <line:555:57, /usr/include/string.h:492:30> 1 2
|-FunctionDecl 0x564f7fdb7de0 <line:496:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:496:14 __stpncpy 'char *(char *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x564f7fdb7c00 <col:25, col:42> col:42 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb7c80 <line:497:4, col:27> col:27 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fdb7cf8 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fdb7ea0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb7ef8 <line:555:57, /usr/include/string.h:498:30> 1 2
|-FunctionDecl 0x564f7fdb8130 <line:499:14> col:14 implicit stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb8238 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fdb82a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb8308 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x564f7fdb81d8 <<invalid sloc>> Implicit 1227
| `-NoThrowAttr 0x564f7fdb8388 <col:14> Implicit
|-FunctionDecl 0x564f7fdb83b0 prev 0x564f7fdb8130 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:499:14 stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb7f50 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb7fd0 <line:500:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fdb8048 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb8508 <<invalid sloc>> Inherited Implicit 1227
| |-NoThrowAttr 0x564f7fdb8470 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb84c8 <line:555:57, /usr/include/string.h:501:30> 1 2
|-FunctionDecl 0x564f7fdb8728 <line:506:15> col:15 implicit strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb8860 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fdb88c8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb8930 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fdb87d0 <<invalid sloc>> Implicit 1266
|-FunctionDecl 0x564f7fdb89b0 prev 0x564f7fdb8728 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:506:15 strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb8550 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb85d0 <line:507:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fdb8648 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb8b08 <<invalid sloc>> Inherited Implicit 1266
| |-NoThrowAttr 0x564f7fdb8a70 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb8ac8 <line:555:57, /usr/include/string.h:508:27> 1 2
|-FunctionDecl 0x564f7fdb8d28 <line:512:15> col:15 implicit strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb8e30 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x564f7fdb8e98 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fdb8f00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x564f7fdb8dd0 <<invalid sloc>> Implicit 1265
|-FunctionDecl 0x564f7fdb8f80 prev 0x564f7fdb8d28 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:512:15 strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x564f7fdb8b50 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x564f7fdb8bd0 <line:513:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x564f7fdb8c48 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x564f7fdb90d8 <<invalid sloc>> Inherited Implicit 1265
| |-NoThrowAttr 0x564f7fdb9040 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fdb9098 <line:555:57, /usr/include/string.h:514:27> 1 2
|-TypedefDecl 0x564f7fdb9120 </usr/include/bits/types.h:31:1, col:23> col:23 __u_char 'unsigned char'
| `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fdb9190 <line:32:1, col:28> col:28 __u_short 'unsigned short'
| `-BuiltinType 0x564f7fd185d0 'unsigned short'
|-TypedefDecl 0x564f7fdb9200 <line:33:1, col:22> col:22 __u_int 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdb9270 <line:34:1, col:27> col:27 __u_long 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdb92e0 <line:37:1, col:21> col:21 referenced __int8_t 'signed char'
| `-BuiltinType 0x564f7fd18510 'signed char'
|-TypedefDecl 0x564f7fdb9350 <line:38:1, col:23> col:23 referenced __uint8_t 'unsigned char'
| `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fdb93c0 <line:39:1, col:26> col:26 referenced __int16_t 'short'
| `-BuiltinType 0x564f7fd18530 'short'
|-TypedefDecl 0x564f7fdb9430 <line:40:1, col:28> col:28 referenced __uint16_t 'unsigned short'
| `-BuiltinType 0x564f7fd185d0 'unsigned short'
|-TypedefDecl 0x564f7fdb94a0 <line:41:1, col:20> col:20 referenced __int32_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdb9510 <line:42:1, col:22> col:22 referenced __uint32_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdb9580 <line:44:1, col:25> col:25 referenced __int64_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdb95f0 <line:45:1, col:27> col:27 referenced __uint64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdb96c0 <line:52:1, col:18> col:18 referenced __int_least8_t '__int8_t':'signed char'
| `-ElaboratedType 0x564f7fdb9680 '__int8_t' sugar
|   `-TypedefType 0x564f7fdb9650 '__int8_t' sugar
|     |-Typedef 0x564f7fdb92e0 '__int8_t'
|     `-BuiltinType 0x564f7fd18510 'signed char'
|-TypedefDecl 0x564f7fdb9790 <line:53:1, col:19> col:19 referenced __uint_least8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x564f7fdb9750 '__uint8_t' sugar
|   `-TypedefType 0x564f7fdb9720 '__uint8_t' sugar
|     |-Typedef 0x564f7fdb9350 '__uint8_t'
|     `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fdbf1a0 <line:54:1, col:19> col:19 referenced __int_least16_t '__int16_t':'short'
| `-ElaboratedType 0x564f7fdbf160 '__int16_t' sugar
|   `-TypedefType 0x564f7fdb97f0 '__int16_t' sugar
|     |-Typedef 0x564f7fdb93c0 '__int16_t'
|     `-BuiltinType 0x564f7fd18530 'short'
|-TypedefDecl 0x564f7fdbf270 <line:55:1, col:20> col:20 referenced __uint_least16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x564f7fdbf230 '__uint16_t' sugar
|   `-TypedefType 0x564f7fdbf200 '__uint16_t' sugar
|     |-Typedef 0x564f7fdb9430 '__uint16_t'
|     `-BuiltinType 0x564f7fd185d0 'unsigned short'
|-TypedefDecl 0x564f7fdbf340 <line:56:1, col:19> col:19 referenced __int_least32_t '__int32_t':'int'
| `-ElaboratedType 0x564f7fdbf300 '__int32_t' sugar
|   `-TypedefType 0x564f7fdbf2d0 '__int32_t' sugar
|     |-Typedef 0x564f7fdb94a0 '__int32_t'
|     `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdbf410 <line:57:1, col:20> col:20 referenced __uint_least32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x564f7fdbf3d0 '__uint32_t' sugar
|   `-TypedefType 0x564f7fdbf3a0 '__uint32_t' sugar
|     |-Typedef 0x564f7fdb9510 '__uint32_t'
|     `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdbf4e0 <line:58:1, col:19> col:19 referenced __int_least64_t '__int64_t':'long'
| `-ElaboratedType 0x564f7fdbf4a0 '__int64_t' sugar
|   `-TypedefType 0x564f7fdbf470 '__int64_t' sugar
|     |-Typedef 0x564f7fdb9580 '__int64_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbf5b0 <line:59:1, col:20> col:20 referenced __uint_least64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x564f7fdbf570 '__uint64_t' sugar
|   `-TypedefType 0x564f7fdbf540 '__uint64_t' sugar
|     |-Typedef 0x564f7fdb95f0 '__uint64_t'
|     `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbf620 <line:63:1, col:18> col:18 __quad_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbf690 <line:64:1, col:27> col:27 __u_quad_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbf700 <line:72:1, col:18> col:18 referenced __intmax_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbf770 <line:73:1, col:27> col:27 referenced __uintmax_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbf7e0 <line:137:22, line:145:25> col:25 __dev_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbf850 <line:137:22, line:146:25> col:25 __uid_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdbf8c0 <line:137:22, line:147:25> col:25 __gid_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdbf930 <line:137:22, line:148:25> col:25 __ino_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbf9a0 <line:137:22, line:149:27> col:27 __ino64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbfa10 <line:137:22, line:150:26> col:26 __mode_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdbfa80 <line:137:22, line:151:27> col:27 __nlink_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbfaf0 <line:137:22, line:152:25> col:25 referenced __off_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbfb60 <line:137:22, line:153:27> col:27 referenced __off64_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbfbd0 <line:137:22, line:154:25> col:25 __pid_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-RecordDecl 0x564f7fdbfc28 </usr/include/bits/typesizes.h:73:24, col:47> col:24 struct definition
| `-FieldDecl 0x564f7fdbfd68 <col:33, col:44> col:37 __val 'int[2]'
|-TypedefDecl 0x564f7fdbfe18 </usr/include/bits/types.h:137:22, line:155:26> col:26 __fsid_t 'struct __fsid_t':'__fsid_t'
| `-ElaboratedType 0x564f7fdbfdc0 'struct __fsid_t' sugar
|   `-RecordType 0x564f7fdbfcb0 '__fsid_t'
|     `-Record 0x564f7fdbfc28 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x564f7fdbfea0 </usr/include/bits/types.h:137:22, line:156:27> col:27 __clock_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdbff10 <line:137:22, line:157:26> col:26 __rlim_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbff80 <line:137:22, line:158:28> col:28 __rlim64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdbfff0 <line:137:22, line:159:24> col:24 __id_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdc0060 <line:137:22, line:160:26> col:26 __time_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc00d0 <line:137:22, line:161:30> col:30 __useconds_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdc6a00 <line:137:22, line:162:31> col:31 __suseconds_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc6a70 <line:137:22, line:163:33> col:33 __suseconds64_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc6ae0 <line:137:22, line:165:27> col:27 __daddr_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdc6b50 <line:137:22, line:166:25> col:25 __key_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdc6bc0 <line:137:22, line:169:29> col:29 __clockid_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdc6c30 <line:137:22, line:172:27> col:27 __timer_t 'void *'
| `-PointerType 0x564f7fd18bf0 'void *'
|   `-BuiltinType 0x564f7fd184b0 'void'
|-TypedefDecl 0x564f7fdc6ca0 <line:137:22, line:175:29> col:29 __blksize_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc6d10 <line:137:22, line:180:28> col:28 __blkcnt_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc6d80 <line:137:22, line:181:30> col:30 __blkcnt64_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc6df0 <line:137:22, line:184:30> col:30 __fsblkcnt_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdc6e60 <line:137:22, line:185:32> col:32 __fsblkcnt64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdc6ed0 <line:137:22, line:188:30> col:30 __fsfilcnt_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdc6f40 <line:137:22, line:189:32> col:32 __fsfilcnt64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdc6fb0 <line:137:22, line:192:28> col:28 __fsword_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc7020 <line:137:22, line:194:27> col:27 referenced __ssize_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc7090 <line:137:22, line:197:33> col:33 __syscall_slong_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc7100 <line:137:22, line:199:33> col:33 __syscall_ulong_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fdc71d0 <line:203:1, col:19> col:19 __loff_t '__off64_t':'long'
| `-ElaboratedType 0x564f7fdc7190 '__off64_t' sugar
|   `-TypedefType 0x564f7fdc7160 '__off64_t' sugar
|     |-Typedef 0x564f7fdbfb60 '__off64_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc7240 <line:204:1, col:15> col:15 __caddr_t 'char *'
| `-PointerType 0x564f7fd18c80 'char *'
|   `-BuiltinType 0x564f7fd184f0 'char'
|-TypedefDecl 0x564f7fdc72b0 <line:137:22, line:207:25> col:25 __intptr_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fdc7320 <line:137:22, line:210:23> col:23 __socklen_t 'unsigned int'
| `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fdc7390 <line:215:1, col:13> col:13 __sig_atomic_t 'int'
| `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fdc7440 </usr/include/bits/floatn.h:83:1, col:24> col:24 __cfloat128 '_Complex __float128'
| |-ComplexType 0x564f7fdc74a0 '_Complex __float128'
| | `-BuiltinType 0x564f7fd186b0 '__float128'
| `-ModeAttr 0x564f7fdc74e0 <col:52, col:68> __TC__
|-TypedefDecl 0x564f7fdc7558 <line:97:1, col:20> col:20 referenced _Float128 '__float128'
| `-BuiltinType 0x564f7fd186b0 '__float128'
|-TypedefDecl 0x564f7fdc75c8 </usr/include/bits/floatn-common.h:214:1, col:15> col:15 _Float32 'float'
| `-BuiltinType 0x564f7fd18650 'float'
|-TypedefDecl 0x564f7fdc7638 <line:251:1, col:16> col:16 _Float64 'double'
| `-BuiltinType 0x564f7fd18670 'double'
|-TypedefDecl 0x564f7fdc76a8 <line:268:1, col:16> col:16 _Float32x 'double'
| `-BuiltinType 0x564f7fd18670 'double'
|-TypedefDecl 0x564f7fdc7718 <line:285:1, col:21> col:21 _Float64x 'long double'
| `-BuiltinType 0x564f7fd18690 'long double'
|-TypedefDecl 0x564f7fdc7788 </usr/include/math.h:167:1, col:15> col:15 float_t 'float'
| |-BuiltinType 0x564f7fd18650 'float'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x564f7fdc77e0 <<invalid sloc>>
|-TypedefDecl 0x564f7fdc7850 <line:168:1, col:16> col:16 double_t 'double'
| |-BuiltinType 0x564f7fd18670 'double'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x564f7fdc78a8 <<invalid sloc>>
|-FunctionDecl 0x564f7fdf1af0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> line:20:24 __fpclassify 'int (double)' extern
| |-ParmVarDecl 0x564f7fdc7918 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'double'
| |-NoThrowAttr 0x564f7fdf1ba0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf1bf8 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x564f7fdf1cd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> line:24:24 __signbit 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf1c38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'double'
| |-NoThrowAttr 0x564f7fdf1d80 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf1dd8 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x564f7fdf1eb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> line:29:24 __isinf 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf1e18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'double'
| |-NoThrowAttr 0x564f7fdf1f60 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf1fb8 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x564f7fdf2090 <line:33:24> col:24 implicit __finite 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf2198 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdf2138 <<invalid sloc>> Implicit 1013
| |-NoThrowAttr 0x564f7fdf2208 <col:24> Implicit
| `-ConstAttr 0x564f7fdf2230 <col:24> Implicit
|-FunctionDecl 0x564f7fdf2258 prev 0x564f7fdf2090 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> line:33:24 __finite 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf1ff8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'double'
| |-BuiltinAttr 0x564f7fdf2388 <<invalid sloc>> Inherited Implicit 1013
| |-NoThrowAttr 0x564f7fdf2308 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf2360 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x564f7fdf2468 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> line:37:24 __isnan 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf23d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'double'
| |-NoThrowAttr 0x564f7fdf2518 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf2570 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x564f7fdf2718 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls-helper-functions.h:41:24 __iseqsig 'int (double, double)' extern
| |-ParmVarDecl 0x564f7fdf25b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'double'
| |-ParmVarDecl 0x564f7fdf2630 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'double'
| `-NoThrowAttr 0x564f7fdf27d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf28d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> line:44:24 __issignaling 'int (double)' extern
| |-ParmVarDecl 0x564f7fdf2840 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'double'
| |-NoThrowAttr 0x564f7fdf2988 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf29e0 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x564f7fdf7770 </usr/include/bits/mathcalls.h:53:17> col:17 implicit acos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf7878 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdf7818 <<invalid sloc>> Implicit 103
| `-NoThrowAttr 0x564f7fdf78e8 <col:17> Implicit
|-FunctionDecl 0x564f7fdf7910 prev 0x564f7fdf7770 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:53:17 acos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf2a20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdf7a18 <<invalid sloc>> Inherited Implicit 103
| `-NoThrowAttr 0x564f7fdf79c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf7af8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:78:1 __acos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf7a60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdf7ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf7cb0 </usr/include/bits/mathcalls.h:55:17> col:17 implicit asin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf7db8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdf7d58 <<invalid sloc>> Implicit 138
| `-NoThrowAttr 0x564f7fdf7e28 <col:17> Implicit
|-FunctionDecl 0x564f7fdf7e50 prev 0x564f7fdf7cb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:55:17 asin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf7c18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdf7f58 <<invalid sloc>> Inherited Implicit 138
| `-NoThrowAttr 0x564f7fdf7f00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf8038 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 __asin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf7fa0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdf80e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf81f0 </usr/include/bits/mathcalls.h:57:17> col:17 implicit atan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf82f8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdf8298 <<invalid sloc>> Implicit 155
| `-NoThrowAttr 0x564f7fdf8368 <col:17> Implicit
|-FunctionDecl 0x564f7fdf8390 prev 0x564f7fdf81f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:57:17 atan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf8158 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdf8498 <<invalid sloc>> Inherited Implicit 155
| `-NoThrowAttr 0x564f7fdf8440 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf8578 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __atan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf84e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdf8628 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdc7af8 </usr/include/bits/mathcalls.h:59:17> col:17 implicit atan2 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdc7c00 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdc7c68 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdc7ba0 <<invalid sloc>> Implicit 161
| `-NoThrowAttr 0x564f7fdc7ce0 <col:17> Implicit
|-FunctionDecl 0x564f7fdc7d08 prev 0x564f7fdc7af8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:59:17 atan2 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdf8698 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x564f7fdc7a10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| |-BuiltinAttr 0x564f7fdc7e18 <<invalid sloc>> Inherited Implicit 161
| `-NoThrowAttr 0x564f7fdc7dc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdc7f80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 __atan2 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdc7e60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x564f7fdc7ee0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| `-NoThrowAttr 0x564f7fdc8038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdc8140 </usr/include/bits/mathcalls.h:62:17> col:17 implicit cos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc8248 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdc81e8 <<invalid sloc>> Implicit 383
| `-NoThrowAttr 0x564f7fdc82b8 <col:17> Implicit
|-FunctionDecl 0x564f7fdc82e0 prev 0x564f7fdc8140 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:62:17 cos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc80a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| |-BuiltinAttr 0x564f7fdc83e8 <<invalid sloc>> Inherited Implicit 383
| `-NoThrowAttr 0x564f7fdc8390 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdc84c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __cos 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc8430 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| `-NoThrowAttr 0x564f7fdc8578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdc8680 </usr/include/bits/mathcalls.h:64:17> col:17 implicit sin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc8788 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdc8728 <<invalid sloc>> Implicit 1179
| `-NoThrowAttr 0x564f7fdc87f8 <col:17> Implicit
|-FunctionDecl 0x564f7fdc8820 prev 0x564f7fdc8680 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:64:17 sin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc85e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| |-BuiltinAttr 0x564f7fdc8928 <<invalid sloc>> Inherited Implicit 1179
| `-NoThrowAttr 0x564f7fdc88d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfbb60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:88:1 __sin 'double (double)' extern
| |-ParmVarDecl 0x564f7fdc8970 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| `-NoThrowAttr 0x564f7fdfbc10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfbd18 </usr/include/bits/mathcalls.h:66:17> col:17 implicit tan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfbe20 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfbdc0 <<invalid sloc>> Implicit 1400
| `-NoThrowAttr 0x564f7fdfbe90 <col:17> Implicit
|-FunctionDecl 0x564f7fdfbeb8 prev 0x564f7fdfbd18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:66:17 tan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfbc80 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| |-BuiltinAttr 0x564f7fdfbfc0 <<invalid sloc>> Inherited Implicit 1400
| `-NoThrowAttr 0x564f7fdfbf68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfc0a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:90:1 __tan 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc008 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| `-NoThrowAttr 0x564f7fdfc150 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfc258 </usr/include/bits/mathcalls.h:93:17> col:17 implicit cosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc360 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfc300 <<invalid sloc>> Implicit 391
| `-NoThrowAttr 0x564f7fdfc3d0 <col:17> Implicit
|-FunctionDecl 0x564f7fdfc3f8 prev 0x564f7fdfc258 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:93:17 cosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc1c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdfc500 <<invalid sloc>> Inherited Implicit 391
| `-NoThrowAttr 0x564f7fdfc4a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfc5e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:93:1 __cosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc548 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdfc690 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfc798 </usr/include/bits/mathcalls.h:95:17> col:17 implicit sinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc8a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfc840 <<invalid sloc>> Implicit 1198
| `-NoThrowAttr 0x564f7fdfc910 <col:17> Implicit
|-FunctionDecl 0x564f7fdfc938 prev 0x564f7fdfc798 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:95:17 sinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfc700 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdfca40 <<invalid sloc>> Inherited Implicit 1198
| `-NoThrowAttr 0x564f7fdfc9e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5350 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 __sinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfca88 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fde5400 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5508 </usr/include/bits/mathcalls.h:97:17> col:17 implicit tanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde5610 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde55b0 <<invalid sloc>> Implicit 1408
| `-NoThrowAttr 0x564f7fde5680 <col:17> Implicit
|-FunctionDecl 0x564f7fde56a8 prev 0x564f7fde5508 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:97:17 tanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde5470 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fde57b0 <<invalid sloc>> Inherited Implicit 1408
| `-NoThrowAttr 0x564f7fde5758 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __tanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde57f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fde5940 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5a48 </usr/include/bits/mathcalls.h:107:17> col:17 implicit acosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde5b50 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde5af0 <<invalid sloc>> Implicit 111
| `-NoThrowAttr 0x564f7fde5bc0 <col:17> Implicit
|-FunctionDecl 0x564f7fde5be8 prev 0x564f7fde5a48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:107:17 acosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde59b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde5cf0 <<invalid sloc>> Inherited Implicit 111
| `-NoThrowAttr 0x564f7fde5c98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5dd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:99:1 __acosh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde5d38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde5e80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde5f88 </usr/include/bits/mathcalls.h:109:17> col:17 implicit asinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6090 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde6030 <<invalid sloc>> Implicit 146
| `-NoThrowAttr 0x564f7fde6100 <col:17> Implicit
|-FunctionDecl 0x564f7fde6128 prev 0x564f7fde5f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:109:17 asinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde5ef0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde6230 <<invalid sloc>> Inherited Implicit 146
| `-NoThrowAttr 0x564f7fde61d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde6360 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 __asinh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6278 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde6410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde6518 </usr/include/bits/mathcalls.h:111:17> col:17 implicit atanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6620 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde65c0 <<invalid sloc>> Implicit 171
| `-NoThrowAttr 0x564f7fde6690 <col:17> Implicit
|-FunctionDecl 0x564f7fde66b8 prev 0x564f7fde6518 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:111:17 atanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6480 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde67c0 <<invalid sloc>> Inherited Implicit 171
| `-NoThrowAttr 0x564f7fde6768 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde68a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __atanh 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6808 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde6950 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde6a58 </usr/include/bits/mathcalls.h:117:17> col:17 implicit exp 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6b60 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde6b00 <<invalid sloc>> Implicit 523
| `-NoThrowAttr 0x564f7fde6bd0 <col:17> Implicit
|-FunctionDecl 0x564f7fde6bf8 prev 0x564f7fde6a58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:117:17 exp 'double (double)' extern
| |-ParmVarDecl 0x564f7fde69c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| |-BuiltinAttr 0x564f7fde6d00 <<invalid sloc>> Inherited Implicit 523
| `-NoThrowAttr 0x564f7fde6ca8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde6de0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:105:1 __exp 'double (double)' extern
| |-ParmVarDecl 0x564f7fde6d48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| `-NoThrowAttr 0x564f7fde6e90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde7098 </usr/include/bits/mathcalls.h:120:13> col:13 implicit frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x564f7fde71a0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fde7208 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fde7140 <<invalid sloc>> Implicit 645
| `-NoThrowAttr 0x564f7fde7280 <col:13> Implicit
|-FunctionDecl 0x564f7fde72a8 prev 0x564f7fde7098 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:120:13 frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x564f7fde6f00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fde6fb8 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x564f7fde73c8 <<invalid sloc>> Inherited Implicit 645
| `-NoThrowAttr 0x564f7fde7370 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde7530 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x564f7fde7410 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fde7490 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x564f7fde75e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde77b8 </usr/include/bits/mathcalls.h:123:13> col:13 implicit ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fde78c0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fde7928 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fde7860 <<invalid sloc>> Implicit 840
| `-NoThrowAttr 0x564f7fde79a0 <col:13> Implicit
|-FunctionDecl 0x564f7fde79c8 prev 0x564f7fde77b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:123:13 ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fde7658 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fde76d8 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x564f7fde7ad8 <<invalid sloc>> Inherited Implicit 840
| `-NoThrowAttr 0x564f7fde7a80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde7c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 __ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fde7b20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fde7ba0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x564f7fde7cf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde7e00 </usr/include/bits/mathcalls.h:126:17> col:17 implicit log 'double (double)' extern
| |-ParmVarDecl 0x564f7fde7f08 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde7ea8 <<invalid sloc>> Implicit 869
| `-NoThrowAttr 0x564f7fde7f78 <col:17> Implicit
|-FunctionDecl 0x564f7fde7fa0 prev 0x564f7fde7e00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:126:17 log 'double (double)' extern
| |-ParmVarDecl 0x564f7fde7d68 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| |-BuiltinAttr 0x564f7fde80a8 <<invalid sloc>> Inherited Implicit 869
| `-NoThrowAttr 0x564f7fde8050 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde8188 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __log 'double (double)' extern
| |-ParmVarDecl 0x564f7fde80f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| `-NoThrowAttr 0x564f7fde8238 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde8380 </usr/include/bits/mathcalls.h:129:17> col:17 implicit log10 'double (double)' extern
| |-ParmVarDecl 0x564f7fde8488 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde8428 <<invalid sloc>> Implicit 890
| `-NoThrowAttr 0x564f7fde84f8 <col:17> Implicit
|-FunctionDecl 0x564f7fde8520 prev 0x564f7fde8380 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:129:17 log10 'double (double)' extern
| |-ParmVarDecl 0x564f7fde82a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde8628 <<invalid sloc>> Inherited Implicit 890
| `-NoThrowAttr 0x564f7fde85d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde8708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:111:1 __log10 'double (double)' extern
| |-ParmVarDecl 0x564f7fde8670 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde87b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde89b8 </usr/include/bits/mathcalls.h:132:13> col:13 implicit modf 'double (double, double *)' extern
| |-ParmVarDecl 0x564f7fde8ac0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fde8b28 <<invalid sloc>> <invalid sloc> 'double *'
| |-BuiltinAttr 0x564f7fde8a60 <<invalid sloc>> Implicit 961
| `-NoThrowAttr 0x564f7fde8ba0 <col:13> Implicit
|-FunctionDecl 0x564f7fde8bc8 prev 0x564f7fde89b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:132:13 modf 'double (double, double *)' extern
| |-ParmVarDecl 0x564f7fde8828 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fde88d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-BuiltinAttr 0x564f7fde8cd8 <<invalid sloc>> Inherited Implicit 961
| `-NoThrowAttr 0x564f7fde8c80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde8e60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:112:1 __modf 'double (double, double *)' extern
| |-ParmVarDecl 0x564f7fde8d20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fde8da0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-NoThrowAttr 0x564f7fde8f18 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fde8f70 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x564f7fde9068 <line:156:17> col:17 implicit expm1 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9170 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde9110 <<invalid sloc>> Implicit 546
| `-NoThrowAttr 0x564f7fde91e0 <col:17> Implicit
|-FunctionDecl 0x564f7fde9208 prev 0x564f7fde9068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:156:17 expm1 'double (double)' extern
| |-ParmVarDecl 0x564f7fde8fd0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde9310 <<invalid sloc>> Inherited Implicit 546
| `-NoThrowAttr 0x564f7fde92b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde9428 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __expm1 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9390 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde94d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde95e0 </usr/include/bits/mathcalls.h:159:17> col:17 implicit log1p 'double (double)' extern
| |-ParmVarDecl 0x564f7fde96e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde9688 <<invalid sloc>> Implicit 875
| `-NoThrowAttr 0x564f7fde9758 <col:17> Implicit
|-FunctionDecl 0x564f7fde9780 prev 0x564f7fde95e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:159:17 log1p 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9548 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fde9888 <<invalid sloc>> Inherited Implicit 875
| `-NoThrowAttr 0x564f7fde9830 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde9968 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:117:1 __log1p 'double (double)' extern
| |-ParmVarDecl 0x564f7fde98d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fde9a18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde9b20 </usr/include/bits/mathcalls.h:162:13> col:13 implicit logb 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9c28 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fde9bc8 <<invalid sloc>> Implicit 900
| `-NoThrowAttr 0x564f7fde9c98 <col:13> Implicit
|-FunctionDecl 0x564f7fde9cc0 prev 0x564f7fde9b20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:162:13 logb 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9a88 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| |-BuiltinAttr 0x564f7fde9dc8 <<invalid sloc>> Inherited Implicit 900
| `-NoThrowAttr 0x564f7fde9d70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fde9ea8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:118:1 __logb 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9e10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| `-NoThrowAttr 0x564f7fde9f58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdea060 </usr/include/bits/mathcalls.h:167:17> col:17 implicit exp2 'double (double)' extern
| |-ParmVarDecl 0x564f7fdea168 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdea108 <<invalid sloc>> Implicit 529
| `-NoThrowAttr 0x564f7fdea1d8 <col:17> Implicit
|-FunctionDecl 0x564f7fdea200 prev 0x564f7fdea060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:167:17 exp2 'double (double)' extern
| |-ParmVarDecl 0x564f7fde9fc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdea308 <<invalid sloc>> Inherited Implicit 529
| `-NoThrowAttr 0x564f7fdea2b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeb448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:120:1 __exp2 'double (double)' extern
| |-ParmVarDecl 0x564f7fdeb3b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdeb4f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeb600 </usr/include/bits/mathcalls.h:170:17> col:17 implicit log2 'double (double)' extern
| |-ParmVarDecl 0x564f7fdeb708 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdeb6a8 <<invalid sloc>> Implicit 882
| `-NoThrowAttr 0x564f7fdeb778 <col:17> Implicit
|-FunctionDecl 0x564f7fdeb7a0 prev 0x564f7fdeb600 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:170:17 log2 'double (double)' extern
| |-ParmVarDecl 0x564f7fdeb568 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fdeb8a8 <<invalid sloc>> Inherited Implicit 882
| `-NoThrowAttr 0x564f7fdeb850 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeb988 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:122:1 __log2 'double (double)' extern
| |-ParmVarDecl 0x564f7fdeb8f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fdeba38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdebbc8 </usr/include/bits/mathcalls.h:177:17> col:17 implicit pow 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdebcd0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdebd38 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdebc70 <<invalid sloc>> Implicit 1048
| `-NoThrowAttr 0x564f7fdebdb0 <col:17> Implicit
|-FunctionDecl 0x564f7fdebdd8 prev 0x564f7fdebbc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:177:17 pow 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdebaa8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x564f7fdebb28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| |-BuiltinAttr 0x564f7fdebee8 <<invalid sloc>> Inherited Implicit 1048
| `-NoThrowAttr 0x564f7fdebe90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdec050 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:124:1 __pow 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdebf30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x564f7fdebfb0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| `-NoThrowAttr 0x564f7fdec108 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdec210 </usr/include/bits/mathcalls.h:180:13> col:13 implicit sqrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fdec318 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdec2b8 <<invalid sloc>> Implicit 1213
| `-NoThrowAttr 0x564f7fdec388 <col:13> Implicit
|-FunctionDecl 0x564f7fdec3c0 prev 0x564f7fdec210 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:180:13 sqrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fdec178 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| |-BuiltinAttr 0x564f7fdec4c8 <<invalid sloc>> Inherited Implicit 1213
| `-NoThrowAttr 0x564f7fdec470 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdec5a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:125:1 __sqrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fdec510 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| `-NoThrowAttr 0x564f7fdec658 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdec7e8 </usr/include/bits/mathcalls.h:184:17> col:17 implicit hypot 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdec8f0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdec958 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdec890 <<invalid sloc>> Implicit 731
| `-NoThrowAttr 0x564f7fdec9d0 <col:17> Implicit
|-FunctionDecl 0x564f7fdec9f8 prev 0x564f7fdec7e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:184:17 hypot 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdec6c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fdec748 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| |-BuiltinAttr 0x564f7fdecb08 <<invalid sloc>> Inherited Implicit 731
| `-NoThrowAttr 0x564f7fdecab0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdecc70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:127:1 __hypot 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdecb50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fdecbd0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| `-NoThrowAttr 0x564f7fdecd28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdece30 </usr/include/bits/mathcalls.h:189:17> col:17 implicit cbrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fdecf38 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdeced8 <<invalid sloc>> Implicit 298
| |-NoThrowAttr 0x564f7fdecfa8 <col:17> Implicit
| `-ConstAttr 0x564f7fdecfd0 <col:17> Implicit
|-FunctionDecl 0x564f7fdecff8 prev 0x564f7fdece30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:189:17 cbrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fdecd98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| |-BuiltinAttr 0x564f7fded100 <<invalid sloc>> Inherited Implicit 298
| |-ConstAttr 0x564f7fded130 <col:17> Inherited Implicit
| `-NoThrowAttr 0x564f7fded0a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fded208 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __cbrt 'double (double)' extern
| |-ParmVarDecl 0x564f7fded170 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| `-NoThrowAttr 0x564f7fded2b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdb9840 </usr/include/bits/mathcalls.h:213:14> col:14 implicit ceil 'double (double)' extern
| |-ParmVarDecl 0x564f7fdb9948 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdb98e8 <<invalid sloc>> Implicit 317
| |-NoThrowAttr 0x564f7fdb99b8 <col:14> Implicit
| `-ConstAttr 0x564f7fdb99e0 <col:14> Implicit
|-FunctionDecl 0x564f7fdb9a08 prev 0x564f7fdb9840 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:213:14 ceil 'double (double)' extern
| |-ParmVarDecl 0x564f7fded328 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'double'
| |-BuiltinAttr 0x564f7fdb9b38 <<invalid sloc>> Inherited Implicit 317
| |-NoThrowAttr 0x564f7fdb9ab8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdb9b10 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x564f7fdb9c18 <line:216:14> col:14 implicit used fabs 'double (double)' extern
| |-ParmVarDecl 0x564f7fdb9d20 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdb9cc0 <<invalid sloc>> Implicit 564
| |-NoThrowAttr 0x564f7fdb9d90 <col:14> Implicit
| `-ConstAttr 0x564f7fdb9db8 <col:14> Implicit
|-FunctionDecl 0x564f7fdb9de0 prev 0x564f7fdb9c18 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:216:14 used fabs 'double (double)' extern
| |-ParmVarDecl 0x564f7fdb9b80 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'double'
| |-BuiltinAttr 0x564f7fdb9f10 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x564f7fdb9e90 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdb9ee8 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x564f7fdb9ff0 <line:219:14> col:14 implicit floor 'double (double)' extern
| |-ParmVarDecl 0x564f7fdba0f8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdba098 <<invalid sloc>> Implicit 583
| |-NoThrowAttr 0x564f7fdba168 <col:14> Implicit
| `-ConstAttr 0x564f7fdba190 <col:14> Implicit
|-FunctionDecl 0x564f7fdba1b8 prev 0x564f7fdb9ff0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:219:14 floor 'double (double)' extern
| |-ParmVarDecl 0x564f7fdb9f58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'double'
| |-BuiltinAttr 0x564f7fdba2e8 <<invalid sloc>> Inherited Implicit 583
| |-NoThrowAttr 0x564f7fdba268 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdba2c0 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x564f7fdba450 <line:222:13> col:13 implicit fmod 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdba558 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdba5c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdba4f8 <<invalid sloc>> Implicit 631
| `-NoThrowAttr 0x564f7fdba638 <col:13> Implicit
|-FunctionDecl 0x564f7fdba660 prev 0x564f7fdba450 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:222:13 fmod 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdba330 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fdba3b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| |-BuiltinAttr 0x564f7fdba770 <<invalid sloc>> Inherited Implicit 631
| `-NoThrowAttr 0x564f7fdba718 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfa800 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:131:1 __fmod 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdba7b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fdfa760 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| `-NoThrowAttr 0x564f7fdfa8b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfa9c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> line:231:23 isinf 'int (double)' extern
| |-ParmVarDecl 0x564f7fdfa928 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'double'
| |-NoThrowAttr 0x564f7fdfaa70 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdfaac8 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x564f7fdfaba0 <line:237:23> col:23 implicit finite 'int (double)' extern
| |-ParmVarDecl 0x564f7fdfaca8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfac48 <<invalid sloc>> Implicit 578
| |-NoThrowAttr 0x564f7fdfad18 <col:23> Implicit
| `-ConstAttr 0x564f7fdfad40 <col:23> Implicit
|-FunctionDecl 0x564f7fdfad68 prev 0x564f7fdfaba0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> line:237:23 finite 'int (double)' extern
| |-ParmVarDecl 0x564f7fdfab08 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'double'
| |-BuiltinAttr 0x564f7fdfae98 <<invalid sloc>> Inherited Implicit 578
| |-NoThrowAttr 0x564f7fdfae18 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdfae70 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x564f7fdfb000 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:241:13 drem 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdfaee0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fdfaf60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x564f7fdfb0b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfb248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:132:1 __drem 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdfb128 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fdfb1a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x564f7fdfb300 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfb408 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:245:13 significand 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfb370 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x564f7fdfb4b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfb5c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 __significand 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfb528 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x564f7fdfb670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeec90 </usr/include/bits/mathcalls.h:252:14> col:14 implicit copysign 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdeed98 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdeee00 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdeed38 <<invalid sloc>> Implicit 361
| |-NoThrowAttr 0x564f7fdeee78 <col:14> Implicit
| `-ConstAttr 0x564f7fdeeea0 <col:14> Implicit
|-FunctionDecl 0x564f7fdeeec8 prev 0x564f7fdeec90 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:252:14 copysign 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdfb6e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fdeebf0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'double'
| |-BuiltinAttr 0x564f7fdef000 <<invalid sloc>> Inherited Implicit 361
| |-NoThrowAttr 0x564f7fdeef80 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdeefd8 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x564f7fdef118 <line:257:13> col:13 implicit nan 'double (const char *)' extern
| |-ParmVarDecl 0x564f7fdef220 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fdef1c0 <<invalid sloc>> Implicit 973
| |-NoThrowAttr 0x564f7fdef290 <col:13> Implicit
| `-PureAttr 0x564f7fdef2b8 <col:13> Implicit
|-FunctionDecl 0x564f7fdef2e0 prev 0x564f7fdef118 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:257:13 nan 'double (const char *)' extern
| |-ParmVarDecl 0x564f7fdef048 <col:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x564f7fdef3e8 <<invalid sloc>> Inherited Implicit 973
| |-PureAttr 0x564f7fdef418 <col:13> Inherited Implicit
| `-NoThrowAttr 0x564f7fdef390 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdef4f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:134:1 __nan 'double (const char *)' extern
| |-ParmVarDecl 0x564f7fdef458 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x564f7fdef5a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdef6a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> line:267:23 isnan 'int (double)' extern
| |-ParmVarDecl 0x564f7fdef610 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'double'
| |-NoThrowAttr 0x564f7fdef758 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdef7b0 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x564f7fdef888 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:274:13 j0 'double (double)' extern
| |-ParmVarDecl 0x564f7fdef7f0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x564f7fdef938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdefa40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __j0 'double (double)' extern
| |-ParmVarDecl 0x564f7fdef9a8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x564f7fdefaf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdefc30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:275:13 j1 'double (double)' extern
| |-ParmVarDecl 0x564f7fdefb60 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x564f7fdefce0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdefde8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:136:1 __j1 'double (double)' extern
| |-ParmVarDecl 0x564f7fdefd50 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x564f7fdefe98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf0068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:276:13 jn 'double (int, double)' extern
| |-ParmVarDecl 0x564f7fdeff08 <col:19> col:22 'int'
| |-ParmVarDecl 0x564f7fdeff88 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x564f7fdf0120 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf02b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:137:1 __jn 'double (int, double)' extern
| |-ParmVarDecl 0x564f7fdf0190 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x564f7fdf0210 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x564f7fdf0368 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf0470 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:277:13 y0 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf03d8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x564f7fdf0520 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf0628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 __y0 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf0590 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x564f7fdf06d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf07e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:278:13 y1 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf0748 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x564f7fdf0890 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf0998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:139:1 __y1 'double (double)' extern
| |-ParmVarDecl 0x564f7fdf0900 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x564f7fdf0a48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfcb70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:279:13 yn 'double (int, double)' extern
| |-ParmVarDecl 0x564f7fdf0ab8 <col:19> col:22 'int'
| |-ParmVarDecl 0x564f7fdf0b38 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x564f7fdfcc28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfcdb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __yn 'double (int, double)' extern
| |-ParmVarDecl 0x564f7fdfcc98 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x564f7fdfcd18 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x564f7fdfce70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfcf78 </usr/include/bits/mathcalls.h:285:17> col:17 implicit erf 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd080 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfd020 <<invalid sloc>> Implicit 503
| `-NoThrowAttr 0x564f7fdfd0f0 <col:17> Implicit
|-FunctionDecl 0x564f7fdfd118 prev 0x564f7fdfcf78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:285:17 erf 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfcee0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| |-BuiltinAttr 0x564f7fdfd220 <<invalid sloc>> Inherited Implicit 503
| `-NoThrowAttr 0x564f7fdfd1c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfd300 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:142:1 __erf 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd268 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| `-NoThrowAttr 0x564f7fdfd3b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfd4b8 </usr/include/bits/mathcalls.h:286:17> col:17 implicit erfc 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd5c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfd560 <<invalid sloc>> Implicit 510
| `-NoThrowAttr 0x564f7fdfd630 <col:17> Implicit
|-FunctionDecl 0x564f7fdfd658 prev 0x564f7fdfd4b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:286:17 erfc 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd420 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| |-BuiltinAttr 0x564f7fdfd760 <<invalid sloc>> Inherited Implicit 510
| `-NoThrowAttr 0x564f7fdfd708 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfd840 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:144:1 __erfc 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd7a8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| `-NoThrowAttr 0x564f7fdfd8f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfd9f8 </usr/include/bits/mathcalls.h:287:13> col:13 implicit lgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfdb00 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfdaa0 <<invalid sloc>> Implicit 848
| `-NoThrowAttr 0x564f7fdfdb80 <col:13> Implicit
|-FunctionDecl 0x564f7fdfdba8 prev 0x564f7fdfd9f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:287:13 lgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfd960 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| |-BuiltinAttr 0x564f7fdfdcb0 <<invalid sloc>> Inherited Implicit 848
| `-NoThrowAttr 0x564f7fdfdc58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfdd90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __lgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfdcf8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| `-NoThrowAttr 0x564f7fdfde40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfdf48 </usr/include/bits/mathcalls.h:292:13> col:13 implicit tgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfe050 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfdff0 <<invalid sloc>> Implicit 1418
| `-NoThrowAttr 0x564f7fdfe0c0 <col:13> Implicit
|-FunctionDecl 0x564f7fdfe0e8 prev 0x564f7fdfdf48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:292:13 tgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfdeb0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| |-BuiltinAttr 0x564f7fdfe1f0 <<invalid sloc>> Inherited Implicit 1418
| `-NoThrowAttr 0x564f7fdfe198 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfe2d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:146:1 __tgamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfe238 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| `-NoThrowAttr 0x564f7fdfe380 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfe488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:298:13 gamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfe3f0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x564f7fdfe538 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfe640 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:147:1 __gamma 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfe5a8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x564f7fdfe6f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfe880 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x564f7fdfe760 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x564f7fdfe7e0 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fdfe938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfeac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x564f7fdfe9a8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x564f7fdfea28 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fdfeb90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdfec98 </usr/include/bits/mathcalls.h:313:13> col:13 implicit rint 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfeda0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdfed40 <<invalid sloc>> Implicit 1102
| |-ConstAttr 0x564f7fdfee10 <col:13> Implicit
| `-NoThrowAttr 0x564f7fdfee38 <col:13> Implicit
|-FunctionDecl 0x564f7fdfee60 prev 0x564f7fdfec98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:313:13 rint 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfec00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| |-BuiltinAttr 0x564f7fdfef68 <<invalid sloc>> Inherited Implicit 1102
| |-ConstAttr 0x564f7fdfef98 <col:13> Inherited Implicit
| `-NoThrowAttr 0x564f7fdfef10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdff070 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:151:1 __rint 'double (double)' extern
| |-ParmVarDecl 0x564f7fdfefd8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| `-NoThrowAttr 0x564f7fdff120 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdff2b0 </usr/include/bits/mathcalls.h:316:13> col:13 implicit nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdff3b8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fdff420 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fdff358 <<invalid sloc>> Implicit 993
| `-NoThrowAttr 0x564f7fdff498 <col:13> Implicit
|-FunctionDecl 0x564f7fdff4c0 prev 0x564f7fdff2b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:316:13 nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdff190 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fdff210 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| |-BuiltinAttr 0x564f7fdff5d0 <<invalid sloc>> Inherited Implicit 993
| `-NoThrowAttr 0x564f7fdff578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdff738 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:152:1 __nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fdff618 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fdff698 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| `-NoThrowAttr 0x564f7fdff7f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdff9c8 </usr/include/bits/mathcalls.h:318:13> col:13 implicit nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x564f7fdffad0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe00bb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fdffa70 <<invalid sloc>> Implicit 1000
| `-NoThrowAttr 0x564f7fe00c28 <col:13> Implicit
|-FunctionDecl 0x564f7fe00c50 prev 0x564f7fdff9c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:318:13 nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x564f7fdff860 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x564f7fdff8e0 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x564f7fe00d60 <<invalid sloc>> Inherited Implicit 1000
| `-NoThrowAttr 0x564f7fe00d08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe00ec8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 __nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x564f7fe00da8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x564f7fe00e28 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x564f7fe00f80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe01110 </usr/include/bits/mathcalls.h:329:13> col:13 implicit remainder 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe01218 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe01280 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe011b8 <<invalid sloc>> Implicit 1084
| `-NoThrowAttr 0x564f7fe012f8 <col:13> Implicit
|-FunctionDecl 0x564f7fe01320 prev 0x564f7fe01110 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:329:13 remainder 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe00ff0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fe01070 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| |-BuiltinAttr 0x564f7fe01430 <<invalid sloc>> Inherited Implicit 1084
| `-NoThrowAttr 0x564f7fe013d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe01598 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __remainder 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe01478 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x564f7fe014f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| `-NoThrowAttr 0x564f7fe01650 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe017e0 </usr/include/bits/mathcalls.h:333:13> col:13 implicit scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fe018e8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe01950 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fe01888 <<invalid sloc>> Implicit 1158
| `-NoThrowAttr 0x564f7fe019c8 <col:13> Implicit
|-FunctionDecl 0x564f7fe019f0 prev 0x564f7fe017e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:333:13 scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fe016c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x564f7fe01740 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x564f7fe01b00 <<invalid sloc>> Inherited Implicit 1158
| `-NoThrowAttr 0x564f7fe01aa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe01c78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:156:1 __scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x564f7fe01b48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x564f7fe01bd8 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x564f7fe01d30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe01e38 </usr/include/bits/mathcalls.h:337:17> col:17 implicit ilogb 'int (double)' extern
| |-ParmVarDecl 0x564f7fe01f40 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe01ee0 <<invalid sloc>> Implicit 739
| `-NoThrowAttr 0x564f7fe01fb0 <col:17> Implicit
|-FunctionDecl 0x564f7fe01fd8 prev 0x564f7fe01e38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:337:17 ilogb 'int (double)' extern
| |-ParmVarDecl 0x564f7fe01da0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fe020e0 <<invalid sloc>> Inherited Implicit 739
| `-NoThrowAttr 0x564f7fe02088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe021c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:157:1 __ilogb 'int (double)' extern
| |-ParmVarDecl 0x564f7fe02128 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fe02270 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe02448 </usr/include/bits/mathcalls.h:347:13> col:13 implicit scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x564f7fe02550 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe025b8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x564f7fe024f0 <<invalid sloc>> Implicit 1152
| `-NoThrowAttr 0x564f7fe02630 <col:13> Implicit
|-FunctionDecl 0x564f7fe02658 prev 0x564f7fe02448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:347:13 scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x564f7fe022e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x564f7fe02360 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x564f7fe02768 <<invalid sloc>> Inherited Implicit 1152
| `-NoThrowAttr 0x564f7fe02710 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe028d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:159:1 __scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x564f7fe027b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x564f7fe02830 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x564f7fe02988 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe02a90 </usr/include/bits/mathcalls.h:351:13> col:13 implicit nearbyint 'double (double)' extern
| |-ParmVarDecl 0x564f7fe02bd0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe02b38 <<invalid sloc>> Implicit 986
| |-NoThrowAttr 0x564f7fe02c40 <col:13> Implicit
| `-ConstAttr 0x564f7fe02c68 <col:13> Implicit
|-FunctionDecl 0x564f7fe02c90 prev 0x564f7fe02a90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:351:13 nearbyint 'double (double)' extern
| |-ParmVarDecl 0x564f7fe029f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| |-BuiltinAttr 0x564f7fe02d98 <<invalid sloc>> Inherited Implicit 986
| |-ConstAttr 0x564f7fe02dc8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x564f7fe02d40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe02ea0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __nearbyint 'double (double)' extern
| |-ParmVarDecl 0x564f7fe02e08 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| `-NoThrowAttr 0x564f7fe02f50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe03058 </usr/include/bits/mathcalls.h:355:14> col:14 implicit round 'double (double)' extern
| |-ParmVarDecl 0x564f7fe03160 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe03100 <<invalid sloc>> Implicit 1126
| |-NoThrowAttr 0x564f7fe031d0 <col:14> Implicit
| `-ConstAttr 0x564f7fe031f8 <col:14> Implicit
|-FunctionDecl 0x564f7fe03220 prev 0x564f7fe03058 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:355:14 round 'double (double)' extern
| |-ParmVarDecl 0x564f7fe02fc0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'double'
| |-BuiltinAttr 0x564f7fe03350 <<invalid sloc>> Inherited Implicit 1126
| |-NoThrowAttr 0x564f7fe032d0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe03328 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x564f7fe03430 <line:359:14> col:14 implicit trunc 'double (double)' extern
| |-ParmVarDecl 0x564f7fe03538 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe034d8 <<invalid sloc>> Implicit 1432
| |-NoThrowAttr 0x564f7fe035a8 <col:14> Implicit
| `-ConstAttr 0x564f7fe035d0 <col:14> Implicit
|-FunctionDecl 0x564f7fe035f8 prev 0x564f7fe03430 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:359:14 trunc 'double (double)' extern
| |-ParmVarDecl 0x564f7fe03398 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'double'
| |-BuiltinAttr 0x564f7fe03728 <<invalid sloc>> Inherited Implicit 1432
| |-NoThrowAttr 0x564f7fe036a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe03700 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x564f7fe03968 <line:364:13> col:13 implicit remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x564f7fe03a70 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe03ad8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe03b40 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fe03a10 <<invalid sloc>> Implicit 1091
| `-NoThrowAttr 0x564f7fe04150 <col:13> Implicit
|-FunctionDecl 0x564f7fe04178 prev 0x564f7fe03968 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:364:13 remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x564f7fe03770 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x564f7fe037f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x564f7fe03870 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x564f7fe04290 <<invalid sloc>> Inherited Implicit 1091
| `-NoThrowAttr 0x564f7fe04238 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe04480 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:161:1 __remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x564f7fe042d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x564f7fe04358 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x564f7fe043d8 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x564f7fe04540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe04688 </usr/include/bits/mathcalls.h:371:22> col:22 implicit lrint 'long (double)' extern
| |-ParmVarDecl 0x564f7fe04790 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe04730 <<invalid sloc>> Implicit 908
| `-NoThrowAttr 0x564f7fe04800 <col:22> Implicit
|-FunctionDecl 0x564f7fe04828 prev 0x564f7fe04688 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:371:22 lrint 'long (double)' extern
| |-ParmVarDecl 0x564f7fe045b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| |-BuiltinAttr 0x564f7fe04930 <<invalid sloc>> Inherited Implicit 908
| `-NoThrowAttr 0x564f7fe048d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe04a10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:162:1 __lrint 'long (double)' extern
| |-ParmVarDecl 0x564f7fe04978 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| `-NoThrowAttr 0x564f7fe04ac0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe04c08 </usr/include/bits/mathcalls.h:373:27> col:27 implicit llrint 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe04d10 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe04cb0 <<invalid sloc>> Implicit 855
| `-NoThrowAttr 0x564f7fe04d80 <col:27> Implicit
|-FunctionDecl 0x564f7fe04da8 prev 0x564f7fe04c08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:373:27 llrint 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe04b30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| |-BuiltinAttr 0x564f7fe04eb0 <<invalid sloc>> Inherited Implicit 855
| `-NoThrowAttr 0x564f7fe04e58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe04f90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 __llrint 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe04ef8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| `-NoThrowAttr 0x564f7fe05040 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe052e0 </usr/include/bits/mathcalls.h:377:22> col:22 implicit lround 'long (double)' extern
| |-ParmVarDecl 0x564f7fe053e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe05388 <<invalid sloc>> Implicit 917
| `-NoThrowAttr 0x564f7fe05458 <col:22> Implicit
|-FunctionDecl 0x564f7fe05480 prev 0x564f7fe052e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:377:22 lround 'long (double)' extern
| |-ParmVarDecl 0x564f7fe050b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| |-BuiltinAttr 0x564f7fe05588 <<invalid sloc>> Inherited Implicit 917
| `-NoThrowAttr 0x564f7fe05530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe05668 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:164:1 __lround 'long (double)' extern
| |-ParmVarDecl 0x564f7fe055d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| `-NoThrowAttr 0x564f7fe05718 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe05820 </usr/include/bits/mathcalls.h:379:27> col:27 implicit llround 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe05928 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe058c8 <<invalid sloc>> Implicit 861
| `-NoThrowAttr 0x564f7fe05998 <col:27> Implicit
|-FunctionDecl 0x564f7fe059c0 prev 0x564f7fe05820 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:379:27 llround 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe05788 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| |-BuiltinAttr 0x564f7fe05ac8 <<invalid sloc>> Inherited Implicit 861
| `-NoThrowAttr 0x564f7fe05a70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe05ba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __llround 'long long (double)' extern
| |-ParmVarDecl 0x564f7fe05b10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| `-NoThrowAttr 0x564f7fe05c58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe05de8 </usr/include/bits/mathcalls.h:383:13> col:13 implicit fdim 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe05ef0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe05f58 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe05e90 <<invalid sloc>> Implicit 573
| `-NoThrowAttr 0x564f7fe05fd0 <col:13> Implicit
|-FunctionDecl 0x564f7fe05ff8 prev 0x564f7fe05de8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:383:13 fdim 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe05cc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fe05d48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| |-BuiltinAttr 0x564f7fe06108 <<invalid sloc>> Inherited Implicit 573
| `-NoThrowAttr 0x564f7fe060b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe063c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:166:1 __fdim 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe06150 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x564f7fe061d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| `-NoThrowAttr 0x564f7fe06478 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe06608 </usr/include/bits/mathcalls.h:387:14> col:14 implicit fmax 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe06710 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe06778 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe066b0 <<invalid sloc>> Implicit 599
| |-NoThrowAttr 0x564f7fe067f0 <col:14> Implicit
| `-ConstAttr 0x564f7fe06818 <col:14> Implicit
|-FunctionDecl 0x564f7fe06840 prev 0x564f7fe06608 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:387:14 fmax 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe064e8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fe06568 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'double'
| |-BuiltinAttr 0x564f7fe06978 <<invalid sloc>> Inherited Implicit 599
| |-NoThrowAttr 0x564f7fe068f8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe06950 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x564f7fe06ae0 <line:390:14> col:14 implicit fmin 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe06be8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe06c50 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe06b88 <<invalid sloc>> Implicit 615
| |-NoThrowAttr 0x564f7fe06cc8 <col:14> Implicit
| `-ConstAttr 0x564f7fe06cf0 <col:14> Implicit
|-FunctionDecl 0x564f7fe06d18 prev 0x564f7fe06ae0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:390:14 fmin 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe069c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fe06a40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'double'
| |-BuiltinAttr 0x564f7fe06e50 <<invalid sloc>> Inherited Implicit 615
| |-NoThrowAttr 0x564f7fe06dd0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe06e28 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x564f7fe07088 <line:394:13> col:13 implicit fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x564f7fe07190 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe071f8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x564f7fe07260 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x564f7fe07130 <<invalid sloc>> Implicit 591
| |-ConstAttr 0x564f7fe072e0 <col:13> Implicit
| `-NoThrowAttr 0x564f7fe07308 <col:13> Implicit
|-FunctionDecl 0x564f7fe07570 prev 0x564f7fe07088 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:394:13 fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x564f7fe06e98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x564f7fe06f18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x564f7fe06f98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| |-BuiltinAttr 0x564f7fe07688 <<invalid sloc>> Inherited Implicit 591
| |-ConstAttr 0x564f7fe076b8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x564f7fe07630 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe078a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:168:1 __fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x564f7fe076f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x564f7fe07778 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x564f7fe077f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| `-NoThrowAttr 0x564f7fe07960 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe07af0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:489:13 scalb 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe079d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fe07a50 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x564f7fe07ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe07d38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 __scalb 'double (double, double)' extern
| |-ParmVarDecl 0x564f7fe07c18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x564f7fe07c98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x564f7fe07df0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe07f38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:175:1 __fpclassifyf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe07e60 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'float'
| |-NoThrowAttr 0x564f7fe07fe8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe08040 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x564f7fe08118 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:176:1 __signbitf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe08080 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'float'
| |-NoThrowAttr 0x564f7fe081c8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe08220 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x564f7fe082f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:177:1 __isinff 'int (float)' extern
| |-ParmVarDecl 0x564f7fe08260 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'float'
| |-NoThrowAttr 0x564f7fe083a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe08400 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x564f7fe09ab0 <<scratch space>:178:1> col:1 implicit __finitef 'int (float)' extern
| |-ParmVarDecl 0x564f7fe09bb8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe09b58 <<invalid sloc>> Implicit 1012
| |-NoThrowAttr 0x564f7fe09c28 <col:1> Implicit
| `-ConstAttr 0x564f7fe09c50 <col:1> Implicit
|-FunctionDecl 0x564f7fe09c78 prev 0x564f7fe09ab0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:178:1 __finitef 'int (float)' extern
| |-ParmVarDecl 0x564f7fe08440 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'float'
| |-BuiltinAttr 0x564f7fe09da8 <<invalid sloc>> Inherited Implicit 1012
| |-NoThrowAttr 0x564f7fe09d28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe09d80 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x564f7fe09e88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:179:1 __isnanf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe09df0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'float'
| |-NoThrowAttr 0x564f7fe09f38 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe09f90 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x564f7fe0a138 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:180:1 __iseqsigf 'int (float, float)' extern
| |-ParmVarDecl 0x564f7fe09fd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'float'
| |-ParmVarDecl 0x564f7fe0a050 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'float'
| `-NoThrowAttr 0x564f7fe0a1f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0a2f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:181:1 __issignalingf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe0a260 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'float'
| |-NoThrowAttr 0x564f7fe0a3a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe0a400 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x564f7fe0a518 <<scratch space>:184:1> col:1 implicit acosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0a620 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0a5c0 <<invalid sloc>> Implicit 101
| `-NoThrowAttr 0x564f7fe0a690 <col:1> Implicit
|-FunctionDecl 0x564f7fe0a6b8 prev 0x564f7fe0a518 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0a440 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0a7c0 <<invalid sloc>> Inherited Implicit 101
| `-NoThrowAttr 0x564f7fe0a768 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0a8a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0a808 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0a950 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0ac60 <<scratch space>:189:1> col:1 implicit asinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0ad68 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0ad08 <<invalid sloc>> Implicit 136
| `-NoThrowAttr 0x564f7fe0add8 <col:1> Implicit
|-FunctionDecl 0x564f7fe0ae00 prev 0x564f7fe0ac60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0a9c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0af08 <<invalid sloc>> Inherited Implicit 136
| `-NoThrowAttr 0x564f7fe0aeb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0afe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0af50 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0b098 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0b1a0 <<scratch space>:194:1> col:1 implicit atanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0b2a8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0b248 <<invalid sloc>> Implicit 153
| `-NoThrowAttr 0x564f7fe0b318 <col:1> Implicit
|-FunctionDecl 0x564f7fe0b340 prev 0x564f7fe0b1a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0b108 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0b448 <<invalid sloc>> Inherited Implicit 153
| `-NoThrowAttr 0x564f7fe0b3f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0b528 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0b490 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0b5d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0b7a8 <<scratch space>:199:1> col:1 implicit atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe0b8b0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe0b918 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0b850 <<invalid sloc>> Implicit 159
| `-NoThrowAttr 0x564f7fe0b990 <col:1> Implicit
|-FunctionDecl 0x564f7fe0b9b8 prev 0x564f7fe0b7a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe0b648 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x564f7fe0b6c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| |-BuiltinAttr 0x564f7fe0bac8 <<invalid sloc>> Inherited Implicit 159
| `-NoThrowAttr 0x564f7fe0ba70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0bc70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe0bb10 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x564f7fe0bb90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| `-NoThrowAttr 0x564f7fe0bd28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0be30 <<scratch space>:204:1> col:1 implicit cosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0bf38 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0bed8 <<invalid sloc>> Implicit 381
| `-NoThrowAttr 0x564f7fe0bfa8 <col:1> Implicit
|-FunctionDecl 0x564f7fe0bfd0 prev 0x564f7fe0be30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 cosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0bd98 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| |-BuiltinAttr 0x564f7fe0c0d8 <<invalid sloc>> Inherited Implicit 381
| `-NoThrowAttr 0x564f7fe0c080 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0c1b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:206:1 __cosf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c120 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| `-NoThrowAttr 0x564f7fe0c268 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0c370 <<scratch space>:209:1> col:1 implicit sinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c478 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0c418 <<invalid sloc>> Implicit 1177
| `-NoThrowAttr 0x564f7fe0c4e8 <col:1> Implicit
|-FunctionDecl 0x564f7fe0c510 prev 0x564f7fe0c370 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:209:1 sinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c2d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| |-BuiltinAttr 0x564f7fe0c618 <<invalid sloc>> Inherited Implicit 1177
| `-NoThrowAttr 0x564f7fe0c5c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0c6f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:211:1 __sinf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c660 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| `-NoThrowAttr 0x564f7fe0c7a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0c8b0 <<scratch space>:214:1> col:1 implicit tanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c9b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0c958 <<invalid sloc>> Implicit 1398
| `-NoThrowAttr 0x564f7fe0ca28 <col:1> Implicit
|-FunctionDecl 0x564f7fe0ca50 prev 0x564f7fe0c8b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:214:1 tanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0c818 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| |-BuiltinAttr 0x564f7fe0cb58 <<invalid sloc>> Inherited Implicit 1398
| `-NoThrowAttr 0x564f7fe0cb00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0cc80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:216:1 __tanf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0cba0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| `-NoThrowAttr 0x564f7fe0cd30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0ce38 <<scratch space>:220:1> col:1 implicit coshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0cf40 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0cee0 <<invalid sloc>> Implicit 389
| `-NoThrowAttr 0x564f7fe0cfb0 <col:1> Implicit
|-FunctionDecl 0x564f7fe0cfd8 prev 0x564f7fe0ce38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:220:1 coshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0cda0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0d0e0 <<invalid sloc>> Inherited Implicit 389
| `-NoThrowAttr 0x564f7fe0d088 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0d1c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:222:1 __coshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d128 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0d270 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0d378 <<scratch space>:225:1> col:1 implicit sinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d480 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0d420 <<invalid sloc>> Implicit 1196
| `-NoThrowAttr 0x564f7fe0d4f0 <col:1> Implicit
|-FunctionDecl 0x564f7fe0d518 prev 0x564f7fe0d378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:225:1 sinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d2e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0d620 <<invalid sloc>> Inherited Implicit 1196
| `-NoThrowAttr 0x564f7fe0d5c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0d700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:227:1 __sinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d668 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0d7b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0d8b8 <<scratch space>:230:1> col:1 implicit tanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d9c0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0d960 <<invalid sloc>> Implicit 1406
| `-NoThrowAttr 0x564f7fe0da30 <col:1> Implicit
|-FunctionDecl 0x564f7fe0da58 prev 0x564f7fe0d8b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:230:1 tanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0d820 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe0db60 <<invalid sloc>> Inherited Implicit 1406
| `-NoThrowAttr 0x564f7fe0db08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0dc90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 __tanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0dba8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe0dd40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0de48 <<scratch space>:235:1> col:1 implicit acoshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0df50 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0def0 <<invalid sloc>> Implicit 109
| `-NoThrowAttr 0x564f7fe0dfc0 <col:1> Implicit
|-FunctionDecl 0x564f7fe0dfe8 prev 0x564f7fe0de48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:235:1 acoshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0ddb0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe0e0f0 <<invalid sloc>> Inherited Implicit 109
| `-NoThrowAttr 0x564f7fe0e098 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0e1d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 __acoshf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e138 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe0e280 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0e388 <<scratch space>:240:1> col:1 implicit asinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e490 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0e430 <<invalid sloc>> Implicit 144
| `-NoThrowAttr 0x564f7fe0e500 <col:1> Implicit
|-FunctionDecl 0x564f7fe0e528 prev 0x564f7fe0e388 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:240:1 asinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e2f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe0e630 <<invalid sloc>> Inherited Implicit 144
| `-NoThrowAttr 0x564f7fe0e5d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0e710 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 __asinhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e678 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe0e7c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0e8c8 <<scratch space>:245:1> col:1 implicit atanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e9d0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0e970 <<invalid sloc>> Implicit 169
| `-NoThrowAttr 0x564f7fe0ea40 <col:1> Implicit
|-FunctionDecl 0x564f7fe0ea68 prev 0x564f7fe0e8c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:245:1 atanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0e830 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe0eb70 <<invalid sloc>> Inherited Implicit 169
| `-NoThrowAttr 0x564f7fe0eb18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0eca0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 __atanhf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0ebb8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe0ed50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0ee58 <<scratch space>:250:1> col:1 implicit expf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0ef60 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe0ef00 <<invalid sloc>> Implicit 521
| `-NoThrowAttr 0x564f7fe0efd0 <col:1> Implicit
|-FunctionDecl 0x564f7fe0eff8 prev 0x564f7fe0ee58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 expf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0edc0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| |-BuiltinAttr 0x564f7fe0f100 <<invalid sloc>> Inherited Implicit 521
| `-NoThrowAttr 0x564f7fe0f0a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0f1e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __expf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe0f148 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| `-NoThrowAttr 0x564f7fe0f290 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0f468 <<scratch space>:253:1> col:1 implicit frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x564f7fe0f570 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe0f5d8 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fe0f510 <<invalid sloc>> Implicit 643
| `-NoThrowAttr 0x564f7fe0f650 <col:1> Implicit
|-FunctionDecl 0x564f7fe0f678 prev 0x564f7fe0f468 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:253:1 frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x564f7fe0f300 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe0f380 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x564f7fe0f788 <<invalid sloc>> Inherited Implicit 643
| `-NoThrowAttr 0x564f7fe0f730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0f8f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 __frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x564f7fe0f7d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe0f850 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x564f7fe0f9a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe0fb78 <<scratch space>:256:1> col:1 implicit ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fe10190 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe101f8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fe0fc20 <<invalid sloc>> Implicit 838
| `-NoThrowAttr 0x564f7fe10270 <col:1> Implicit
|-FunctionDecl 0x564f7fe10298 prev 0x564f7fe0fb78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:256:1 ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fe0fa18 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe0fa98 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x564f7fe103a8 <<invalid sloc>> Inherited Implicit 838
| `-NoThrowAttr 0x564f7fe10350 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe10510 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:258:1 __ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fe103f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe10470 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x564f7fe105c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe106d0 <<scratch space>:261:1> col:1 implicit logf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe107d8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe10778 <<invalid sloc>> Implicit 867
| `-NoThrowAttr 0x564f7fe10848 <col:1> Implicit
|-FunctionDecl 0x564f7fe10870 prev 0x564f7fe106d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:261:1 logf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe10638 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| |-BuiltinAttr 0x564f7fe10978 <<invalid sloc>> Inherited Implicit 867
| `-NoThrowAttr 0x564f7fe10920 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe10a58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:263:1 __logf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe109c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| `-NoThrowAttr 0x564f7fe10b08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe10c10 <<scratch space>:266:1> col:1 implicit log10f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe10d18 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe10cb8 <<invalid sloc>> Implicit 888
| `-NoThrowAttr 0x564f7fe10d88 <col:1> Implicit
|-FunctionDecl 0x564f7fe10db0 prev 0x564f7fe10c10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:266:1 log10f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe10b78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe10eb8 <<invalid sloc>> Inherited Implicit 888
| `-NoThrowAttr 0x564f7fe10e60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe10f98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:268:1 __log10f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe10f00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe11048 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe11288 <<scratch space>:269:1> col:1 implicit modff 'float (float, float *)' extern
| |-ParmVarDecl 0x564f7fe11390 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe113f8 <<invalid sloc>> <invalid sloc> 'float *'
| |-BuiltinAttr 0x564f7fe11330 <<invalid sloc>> Implicit 959
| `-NoThrowAttr 0x564f7fe11470 <col:1> Implicit
|-FunctionDecl 0x564f7fe11498 prev 0x564f7fe11288 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 modff 'float (float, float *)' extern
| |-ParmVarDecl 0x564f7fe110b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe111a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-BuiltinAttr 0x564f7fe115a8 <<invalid sloc>> Inherited Implicit 959
| `-NoThrowAttr 0x564f7fe11550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe11730 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:271:1 __modff 'float (float, float *)' extern
| |-ParmVarDecl 0x564f7fe115f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe11670 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-NoThrowAttr 0x564f7fe117e8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe11840 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x564f7fe11938 <<scratch space>:275:1> col:1 implicit expm1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe11a40 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe119e0 <<invalid sloc>> Implicit 544
| `-NoThrowAttr 0x564f7fe11ab0 <col:1> Implicit
|-FunctionDecl 0x564f7fe11ad8 prev 0x564f7fe11938 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 expm1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe118a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe11be0 <<invalid sloc>> Inherited Implicit 544
| `-NoThrowAttr 0x564f7fe11b88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe11cc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __expm1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe11c28 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe11d70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe11e78 <<scratch space>:280:1> col:1 implicit log1pf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe11f80 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe11f20 <<invalid sloc>> Implicit 873
| `-NoThrowAttr 0x564f7fe11ff0 <col:1> Implicit
|-FunctionDecl 0x564f7fe12018 prev 0x564f7fe11e78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:280:1 log1pf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe11de0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe12120 <<invalid sloc>> Inherited Implicit 873
| `-NoThrowAttr 0x564f7fe120c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:282:1 __log1pf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe121b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe122f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12400 <<scratch space>:283:1> col:1 implicit logbf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12508 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe124a8 <<invalid sloc>> Implicit 898
| `-NoThrowAttr 0x564f7fe12578 <col:1> Implicit
|-FunctionDecl 0x564f7fe125a0 prev 0x564f7fe12400 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 logbf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12368 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| |-BuiltinAttr 0x564f7fe126a8 <<invalid sloc>> Inherited Implicit 898
| `-NoThrowAttr 0x564f7fe12650 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12788 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __logbf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe126f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| `-NoThrowAttr 0x564f7fe12838 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12940 <<scratch space>:288:1> col:1 implicit exp2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12a48 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe129e8 <<invalid sloc>> Implicit 527
| `-NoThrowAttr 0x564f7fe12ab8 <col:1> Implicit
|-FunctionDecl 0x564f7fe12ae0 prev 0x564f7fe12940 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 exp2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe128a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe12be8 <<invalid sloc>> Inherited Implicit 527
| `-NoThrowAttr 0x564f7fe12b90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12cc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:290:1 __exp2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12c30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe12d78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe12e80 <<scratch space>:293:1> col:1 implicit log2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12f88 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe12f28 <<invalid sloc>> Implicit 880
| `-NoThrowAttr 0x564f7fe12ff8 <col:1> Implicit
|-FunctionDecl 0x564f7fe13020 prev 0x564f7fe12e80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:293:1 log2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe12de8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fe13128 <<invalid sloc>> Inherited Implicit 880
| `-NoThrowAttr 0x564f7fe130d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe13258 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 __log2f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe131c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fe13308 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe13498 <<scratch space>:298:1> col:1 implicit powf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe135a0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe13608 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe13540 <<invalid sloc>> Implicit 1046
| `-NoThrowAttr 0x564f7fe13680 <col:1> Implicit
|-FunctionDecl 0x564f7fe136a8 prev 0x564f7fe13498 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 powf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe13378 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x564f7fe133f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| |-BuiltinAttr 0x564f7fe137b8 <<invalid sloc>> Inherited Implicit 1046
| `-NoThrowAttr 0x564f7fe13760 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe13920 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __powf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe13800 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x564f7fe13880 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| `-NoThrowAttr 0x564f7fe139d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe13ae0 <<scratch space>:301:1> col:1 implicit sqrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe13be8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe13b88 <<invalid sloc>> Implicit 1211
| `-NoThrowAttr 0x564f7fe13c58 <col:1> Implicit
|-FunctionDecl 0x564f7fe13c80 prev 0x564f7fe13ae0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:301:1 sqrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe13a48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| |-BuiltinAttr 0x564f7fe13d88 <<invalid sloc>> Inherited Implicit 1211
| `-NoThrowAttr 0x564f7fe13d30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe13e68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 __sqrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe13dd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| `-NoThrowAttr 0x564f7fe13f18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe140a8 <<scratch space>:306:1> col:1 implicit hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fdf8750 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fdf87b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe14150 <<invalid sloc>> Implicit 729
| `-NoThrowAttr 0x564f7fdf8830 <col:1> Implicit
|-FunctionDecl 0x564f7fdf8858 prev 0x564f7fe140a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:306:1 hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe13f88 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fe14008 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| |-BuiltinAttr 0x564f7fdf8968 <<invalid sloc>> Inherited Implicit 729
| `-NoThrowAttr 0x564f7fdf8910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf8ad0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 __hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fdf89b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fdf8a30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| `-NoThrowAttr 0x564f7fdf8b88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf8c90 <<scratch space>:311:1> col:1 implicit cbrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf8d98 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fdf8d38 <<invalid sloc>> Implicit 296
| |-NoThrowAttr 0x564f7fdf8e08 <col:1> Implicit
| `-ConstAttr 0x564f7fdf8e30 <col:1> Implicit
|-FunctionDecl 0x564f7fdf8e58 prev 0x564f7fdf8c90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 cbrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf8bf8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| |-BuiltinAttr 0x564f7fdf8f60 <<invalid sloc>> Inherited Implicit 296
| |-ConstAttr 0x564f7fdf8f90 <<scratch space>:311:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fdf8f08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf9068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __cbrtf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf8fd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| `-NoThrowAttr 0x564f7fdf9118 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdf9220 <<scratch space>:3:1> col:1 implicit ceilf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf9328 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fdf92c8 <<invalid sloc>> Implicit 315
| |-NoThrowAttr 0x564f7fdf9398 <col:1> Implicit
| `-ConstAttr 0x564f7fdf93c0 <col:1> Implicit
|-FunctionDecl 0x564f7fdf93e8 prev 0x564f7fdf9220 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:3:1 ceilf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf9188 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'float'
| |-BuiltinAttr 0x564f7fdf9518 <<invalid sloc>> Inherited Implicit 315
| |-NoThrowAttr 0x564f7fdf9498 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fdf94f0 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x564f7fdf95f8 <<scratch space>:4:1> col:1 implicit used fabsf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe26bb0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fdf96a0 <<invalid sloc>> Implicit 562
| |-NoThrowAttr 0x564f7fe26c20 <col:1> Implicit
| `-ConstAttr 0x564f7fe26c48 <col:1> Implicit
|-FunctionDecl 0x564f7fe26c70 prev 0x564f7fdf95f8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:4:1 used fabsf 'float (float)' extern
| |-ParmVarDecl 0x564f7fdf9560 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'float'
| |-BuiltinAttr 0x564f7fe26da0 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x564f7fe26d20 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe26d78 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x564f7fe26e80 <<scratch space>:5:1> col:1 implicit floorf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe26f88 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe26f28 <<invalid sloc>> Implicit 581
| |-NoThrowAttr 0x564f7fe26ff8 <col:1> Implicit
| `-ConstAttr 0x564f7fe27020 <col:1> Implicit
|-FunctionDecl 0x564f7fe27048 prev 0x564f7fe26e80 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:5:1 floorf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe26de8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'float'
| |-BuiltinAttr 0x564f7fe27178 <<invalid sloc>> Inherited Implicit 581
| |-NoThrowAttr 0x564f7fe270f8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe27150 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x564f7fe272e0 <<scratch space>:6:1> col:1 implicit fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe273e8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe27450 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe27388 <<invalid sloc>> Implicit 629
| `-NoThrowAttr 0x564f7fe274c8 <col:1> Implicit
|-FunctionDecl 0x564f7fe274f0 prev 0x564f7fe272e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:6:1 fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe271c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe27240 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| |-BuiltinAttr 0x564f7fe27600 <<invalid sloc>> Inherited Implicit 629
| `-NoThrowAttr 0x564f7fe275a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe27768 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:8:1 __fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe27648 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe276c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| `-NoThrowAttr 0x564f7fe27820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe27928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:9:1 isinff 'int (float)' extern
| |-ParmVarDecl 0x564f7fe27890 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'float'
| |-NoThrowAttr 0x564f7fe279d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe27a30 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x564f7fe27b08 <<scratch space>:10:1> col:1 implicit finitef 'int (float)' extern
| |-ParmVarDecl 0x564f7fe27c20 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe27bc0 <<invalid sloc>> Implicit 577
| |-NoThrowAttr 0x564f7fe27c90 <col:1> Implicit
| `-ConstAttr 0x564f7fe27cb8 <col:1> Implicit
|-FunctionDecl 0x564f7fe27ce0 prev 0x564f7fe27b08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:10:1 finitef 'int (float)' extern
| |-ParmVarDecl 0x564f7fe27a70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'float'
| |-BuiltinAttr 0x564f7fe27e10 <<invalid sloc>> Inherited Implicit 577
| |-NoThrowAttr 0x564f7fe27d90 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe27de8 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x564f7fe27f78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:11:1 dremf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe27e58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe27ed8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x564f7fe28030 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe281c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:13:1 __dremf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe280a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe28120 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x564f7fe28278 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe28380 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:14:1 significandf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe282e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x564f7fe28430 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe28538 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:16:1 __significandf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe284a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x564f7fe285e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe28778 <<scratch space>:17:1> col:1 implicit copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe28880 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe288e8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe28820 <<invalid sloc>> Implicit 359
| |-NoThrowAttr 0x564f7fe28960 <col:1> Implicit
| `-ConstAttr 0x564f7fe28988 <col:1> Implicit
|-FunctionDecl 0x564f7fe289b0 prev 0x564f7fe28778 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:17:1 copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe28658 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fe286d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'float'
| |-BuiltinAttr 0x564f7fe28ae8 <<invalid sloc>> Inherited Implicit 359
| |-NoThrowAttr 0x564f7fe28a68 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe28ac0 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x564f7fe28c38 <<scratch space>:18:1> col:1 implicit nanf 'float (const char *)' extern
| |-ParmVarDecl 0x564f7fe28d40 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fe28ce0 <<invalid sloc>> Implicit 971
| |-NoThrowAttr 0x564f7fe28db0 <col:1> Implicit
| `-PureAttr 0x564f7fe28dd8 <col:1> Implicit
|-FunctionDecl 0x564f7fe28e00 prev 0x564f7fe28c38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:18:1 nanf 'float (const char *)' extern
| |-ParmVarDecl 0x564f7fe28b30 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x564f7fe28f08 <<invalid sloc>> Inherited Implicit 971
| |-PureAttr 0x564f7fe28f38 <<scratch space>:18:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe28eb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29010 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:20:1 __nanf 'float (const char *)' extern
| |-ParmVarDecl 0x564f7fe28f78 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x564f7fe290c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe291c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:21:1 isnanf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe29130 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'float'
| |-NoThrowAttr 0x564f7fe29278 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe292d0 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x564f7fe293a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:22:1 j0f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe29310 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x564f7fe29458 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29560 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:24:1 __j0f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe294c8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x564f7fe29610 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29718 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:25:1 j1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe29680 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x564f7fe297c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe298d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:27:1 __j1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe29838 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x564f7fe29980 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29be0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:28:1 jnf 'float (int, float)' extern
| |-ParmVarDecl 0x564f7fe299f0 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe29a70 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x564f7fe29c98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29e28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:30:1 __jnf 'float (int, float)' extern
| |-ParmVarDecl 0x564f7fe29d08 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe29d88 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x564f7fe29ee0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe29fe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:31:1 y0f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe29f50 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x564f7fe2a098 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2a1a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:33:1 __y0f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2a108 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x564f7fe2a250 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2a358 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:34:1 y1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2a2c0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x564f7fe2a408 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2a510 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:36:1 __y1f 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2a478 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x564f7fe2a5c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2a750 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:37:1 ynf 'float (int, float)' extern
| |-ParmVarDecl 0x564f7fe2a630 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe2a6b0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x564f7fe2a808 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2a998 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:39:1 __ynf 'float (int, float)' extern
| |-ParmVarDecl 0x564f7fe2a878 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe2a8f8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x564f7fe2aa50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2abf0 <<scratch space>:42:1> col:1 implicit erff 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2acf8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2ac98 <<invalid sloc>> Implicit 501
| `-NoThrowAttr 0x564f7fe2ad68 <col:1> Implicit
|-FunctionDecl 0x564f7fe2ad90 prev 0x564f7fe2abf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:42:1 erff 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2aac0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| |-BuiltinAttr 0x564f7fe2ae98 <<invalid sloc>> Inherited Implicit 501
| `-NoThrowAttr 0x564f7fe2ae40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2af78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:44:1 __erff 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2aee0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| `-NoThrowAttr 0x564f7fe2b028 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2b130 <<scratch space>:47:1> col:1 implicit erfcf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b238 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2b1d8 <<invalid sloc>> Implicit 508
| `-NoThrowAttr 0x564f7fe2b2a8 <col:1> Implicit
|-FunctionDecl 0x564f7fe2b2d0 prev 0x564f7fe2b130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:47:1 erfcf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b098 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| |-BuiltinAttr 0x564f7fe2b3d8 <<invalid sloc>> Inherited Implicit 508
| `-NoThrowAttr 0x564f7fe2b380 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2b4b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:49:1 __erfcf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b420 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| `-NoThrowAttr 0x564f7fe2b568 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2b670 <<scratch space>:50:1> col:1 implicit lgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b778 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2b718 <<invalid sloc>> Implicit 846
| `-NoThrowAttr 0x564f7fe2b7e8 <col:1> Implicit
|-FunctionDecl 0x564f7fe2b810 prev 0x564f7fe2b670 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:50:1 lgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b5d8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| |-BuiltinAttr 0x564f7fe2b918 <<invalid sloc>> Inherited Implicit 846
| `-NoThrowAttr 0x564f7fe2b8c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2b9f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:52:1 __lgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2b960 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| `-NoThrowAttr 0x564f7fe2baa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2bc00 <<scratch space>:53:1> col:1 implicit tgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2bd08 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2bca8 <<invalid sloc>> Implicit 1416
| `-NoThrowAttr 0x564f7fe2bd78 <col:1> Implicit
|-FunctionDecl 0x564f7fe2bda0 prev 0x564f7fe2bc00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:53:1 tgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2bb18 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| |-BuiltinAttr 0x564f7fe2bea8 <<invalid sloc>> Inherited Implicit 1416
| `-NoThrowAttr 0x564f7fe2be50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2bf88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:55:1 __tgammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2bef0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| `-NoThrowAttr 0x564f7fe2c038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2c140 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:56:1 gammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2c0a8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x564f7fe2c1f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2c2f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:58:1 __gammaf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2c260 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x564f7fe2c3a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2c538 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:60:1 lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x564f7fe2c418 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x564f7fe2c498 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fe2c5f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2c780 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:63:1 __lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x564f7fe2c660 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x564f7fe2c6e0 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fe2c838 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2c940 <<scratch space>:64:1> col:1 implicit rintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2ca48 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2c9e8 <<invalid sloc>> Implicit 1100
| |-ConstAttr 0x564f7fe2cab8 <col:1> Implicit
| `-NoThrowAttr 0x564f7fe2cae0 <col:1> Implicit
|-FunctionDecl 0x564f7fe2cb08 prev 0x564f7fe2c940 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:64:1 rintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2c8a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| |-BuiltinAttr 0x564f7fe2dc50 <<invalid sloc>> Inherited Implicit 1100
| |-ConstAttr 0x564f7fe2dc80 <<scratch space>:64:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe2cbb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2dd58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:66:1 __rintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe2dcc0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| `-NoThrowAttr 0x564f7fe2de08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2df98 <<scratch space>:67:1> col:1 implicit nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe2e0a0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe2e108 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe2e040 <<invalid sloc>> Implicit 991
| `-NoThrowAttr 0x564f7fe2e180 <col:1> Implicit
|-FunctionDecl 0x564f7fe2e1a8 prev 0x564f7fe2df98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:67:1 nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe2de78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fe2def8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| |-BuiltinAttr 0x564f7fe2e2b8 <<invalid sloc>> Inherited Implicit 991
| `-NoThrowAttr 0x564f7fe2e260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2e420 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:69:1 __nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe2e300 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fe2e380 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| `-NoThrowAttr 0x564f7fe2e4d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2e6a8 <<scratch space>:70:1> col:1 implicit nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x564f7fe2e7b0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe2e818 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe2e750 <<invalid sloc>> Implicit 998
| `-NoThrowAttr 0x564f7fe2e890 <col:1> Implicit
|-FunctionDecl 0x564f7fe2e8b8 prev 0x564f7fe2e6a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:70:1 nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x564f7fe2e548 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x564f7fe2e5c8 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x564f7fe2e9c8 <<invalid sloc>> Inherited Implicit 998
| `-NoThrowAttr 0x564f7fe2e970 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe2eb30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:72:1 __nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x564f7fe2ea10 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x564f7fe2ea90 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x564f7fe2ebe8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdea508 <<scratch space>:74:1> col:1 implicit remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fdea610 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fdea678 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fdea5b0 <<invalid sloc>> Implicit 1082
| `-NoThrowAttr 0x564f7fdea6f0 <col:1> Implicit
|-FunctionDecl 0x564f7fdea718 prev 0x564f7fdea508 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:74:1 remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fdea3e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fdea468 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| |-BuiltinAttr 0x564f7fdea828 <<invalid sloc>> Inherited Implicit 1082
| `-NoThrowAttr 0x564f7fdea7d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdea990 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:76:1 __remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fdea870 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x564f7fdea8f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| `-NoThrowAttr 0x564f7fdeaa48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeabd8 <<scratch space>:77:1> col:1 implicit scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fdeace0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fdead48 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fdeac80 <<invalid sloc>> Implicit 1156
| `-NoThrowAttr 0x564f7fdeadc0 <col:1> Implicit
|-FunctionDecl 0x564f7fdeade8 prev 0x564f7fdeabd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:77:1 scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fdeaab8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x564f7fdeab38 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x564f7fdeaef8 <<invalid sloc>> Inherited Implicit 1156
| `-NoThrowAttr 0x564f7fdeaea0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeb060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:79:1 __scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x564f7fdeaf40 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x564f7fdeafc0 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x564f7fdeb118 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fdeb220 <<scratch space>:80:1> col:1 implicit ilogbf 'int (float)' extern
| |-ParmVarDecl 0x564f7fdeb328 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fdeb2c8 <<invalid sloc>> Implicit 737
| `-NoThrowAttr 0x564f7fe30c40 <col:1> Implicit
|-FunctionDecl 0x564f7fe30c68 prev 0x564f7fdeb220 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 ilogbf 'int (float)' extern
| |-ParmVarDecl 0x564f7fdeb188 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe30d70 <<invalid sloc>> Inherited Implicit 737
| `-NoThrowAttr 0x564f7fe30d18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe30e50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __ilogbf 'int (float)' extern
| |-ParmVarDecl 0x564f7fe30db8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe30f00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe310d8 <<scratch space>:84:1> col:1 implicit scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x564f7fe311e0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe31248 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x564f7fe31180 <<invalid sloc>> Implicit 1150
| `-NoThrowAttr 0x564f7fe312c0 <col:1> Implicit
|-FunctionDecl 0x564f7fe312e8 prev 0x564f7fe310d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x564f7fe30f70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x564f7fe30ff0 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x564f7fe313f8 <<invalid sloc>> Inherited Implicit 1150
| `-NoThrowAttr 0x564f7fe313a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe31560 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x564f7fe31440 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x564f7fe314c0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x564f7fe31618 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe31720 <<scratch space>:87:1> col:1 implicit nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe31828 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe317c8 <<invalid sloc>> Implicit 984
| |-NoThrowAttr 0x564f7fe31898 <col:1> Implicit
| `-ConstAttr 0x564f7fe318c0 <col:1> Implicit
|-FunctionDecl 0x564f7fe318e8 prev 0x564f7fe31720 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:87:1 nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe31688 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| |-BuiltinAttr 0x564f7fe319f0 <<invalid sloc>> Inherited Implicit 984
| |-ConstAttr 0x564f7fe31a20 <<scratch space>:87:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe31998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe31af8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:89:1 __nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe31a60 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| `-NoThrowAttr 0x564f7fe31ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe31ce8 <<scratch space>:90:1> col:1 implicit roundf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe31df0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe31d90 <<invalid sloc>> Implicit 1124
| |-NoThrowAttr 0x564f7fe31e60 <col:1> Implicit
| `-ConstAttr 0x564f7fe31e88 <col:1> Implicit
|-FunctionDecl 0x564f7fe31eb0 prev 0x564f7fe31ce8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:90:1 roundf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe31c50 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'float'
| |-BuiltinAttr 0x564f7fe31fe0 <<invalid sloc>> Inherited Implicit 1124
| |-NoThrowAttr 0x564f7fe31f60 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe31fb8 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x564f7fe320c0 <<scratch space>:91:1> col:1 implicit truncf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe321c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe32168 <<invalid sloc>> Implicit 1430
| |-NoThrowAttr 0x564f7fe32238 <col:1> Implicit
| `-ConstAttr 0x564f7fe32260 <col:1> Implicit
|-FunctionDecl 0x564f7fe32288 prev 0x564f7fe320c0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:91:1 truncf 'float (float)' extern
| |-ParmVarDecl 0x564f7fe32028 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'float'
| |-BuiltinAttr 0x564f7fe323b8 <<invalid sloc>> Inherited Implicit 1430
| |-NoThrowAttr 0x564f7fe32338 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe32390 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x564f7fe325f8 <<scratch space>:92:1> col:1 implicit remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x564f7fe32700 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe32768 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe327d0 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fe326a0 <<invalid sloc>> Implicit 1089
| `-NoThrowAttr 0x564f7fe32850 <col:1> Implicit
|-FunctionDecl 0x564f7fe32878 prev 0x564f7fe325f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:92:1 remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x564f7fe32400 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x564f7fe32480 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x564f7fe32500 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x564f7fe32990 <<invalid sloc>> Inherited Implicit 1089
| `-NoThrowAttr 0x564f7fe32938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe32b80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:94:1 __remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x564f7fe329d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x564f7fe32a58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x564f7fe32ad8 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x564f7fe32c60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe32da8 <<scratch space>:95:1> col:1 implicit lrintf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe32eb0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe32e50 <<invalid sloc>> Implicit 906
| `-NoThrowAttr 0x564f7fe32f20 <col:1> Implicit
|-FunctionDecl 0x564f7fe32f48 prev 0x564f7fe32da8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 lrintf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe32cd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| |-BuiltinAttr 0x564f7fe33050 <<invalid sloc>> Inherited Implicit 906
| `-NoThrowAttr 0x564f7fe32ff8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe33130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __lrintf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe33098 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| `-NoThrowAttr 0x564f7fe331e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe33328 <<scratch space>:98:1> col:1 implicit llrintf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe33430 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe333d0 <<invalid sloc>> Implicit 853
| `-NoThrowAttr 0x564f7fe334a0 <col:1> Implicit
|-FunctionDecl 0x564f7fe334c8 prev 0x564f7fe33328 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:98:1 llrintf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe33250 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| |-BuiltinAttr 0x564f7fe335d0 <<invalid sloc>> Inherited Implicit 853
| `-NoThrowAttr 0x564f7fe33578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe336b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:100:1 __llrintf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe33618 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| `-NoThrowAttr 0x564f7fe33760 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe33868 <<scratch space>:101:1> col:1 implicit lroundf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe33970 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe33910 <<invalid sloc>> Implicit 915
| `-NoThrowAttr 0x564f7fe339e0 <col:1> Implicit
|-FunctionDecl 0x564f7fe33a08 prev 0x564f7fe33868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 lroundf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe337d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| |-BuiltinAttr 0x564f7fe33b10 <<invalid sloc>> Inherited Implicit 915
| `-NoThrowAttr 0x564f7fe33ab8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe33c70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __lroundf 'long (float)' extern
| |-ParmVarDecl 0x564f7fe33b58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| `-NoThrowAttr 0x564f7fe33d20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe33e28 <<scratch space>:104:1> col:1 implicit llroundf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe33f30 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe33ed0 <<invalid sloc>> Implicit 859
| `-NoThrowAttr 0x564f7fe33fa0 <col:1> Implicit
|-FunctionDecl 0x564f7fe33fc8 prev 0x564f7fe33e28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:104:1 llroundf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe33d90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| |-BuiltinAttr 0x564f7fe340d0 <<invalid sloc>> Inherited Implicit 859
| `-NoThrowAttr 0x564f7fe34078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe341b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __llroundf 'long long (float)' extern
| |-ParmVarDecl 0x564f7fe34118 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| `-NoThrowAttr 0x564f7fe34260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe343f0 <<scratch space>:107:1> col:1 implicit fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe344f8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe34560 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe34498 <<invalid sloc>> Implicit 571
| `-NoThrowAttr 0x564f7fe345d8 <col:1> Implicit
|-FunctionDecl 0x564f7fe34600 prev 0x564f7fe343f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe342d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe34350 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| |-BuiltinAttr 0x564f7fe34710 <<invalid sloc>> Inherited Implicit 571
| `-NoThrowAttr 0x564f7fe346b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe34878 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe34758 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x564f7fe347d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| `-NoThrowAttr 0x564f7fe34930 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe34ac0 <<scratch space>:111:1> col:1 implicit fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe34bc8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe34c80 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe34b68 <<invalid sloc>> Implicit 597
| |-NoThrowAttr 0x564f7fe34cf8 <col:1> Implicit
| `-ConstAttr 0x564f7fe34d20 <col:1> Implicit
|-FunctionDecl 0x564f7fe34d48 prev 0x564f7fe34ac0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:111:1 fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe349a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe34a20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'float'
| |-BuiltinAttr 0x564f7fe34e80 <<invalid sloc>> Inherited Implicit 597
| |-NoThrowAttr 0x564f7fe34e00 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe34e58 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x564f7fe34fe8 <<scratch space>:112:1> col:1 implicit fminf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe350f0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe35158 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe35090 <<invalid sloc>> Implicit 613
| |-NoThrowAttr 0x564f7fe351d0 <col:1> Implicit
| `-ConstAttr 0x564f7fe351f8 <col:1> Implicit
|-FunctionDecl 0x564f7fe35220 prev 0x564f7fe34fe8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:112:1 fminf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe34ec8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe34f48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'float'
| |-BuiltinAttr 0x564f7fe35358 <<invalid sloc>> Inherited Implicit 613
| |-NoThrowAttr 0x564f7fe352d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe35330 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x564f7fe35598 <<scratch space>:113:1> col:1 implicit fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x564f7fe356a0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe35708 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x564f7fe35770 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x564f7fe35640 <<invalid sloc>> Implicit 589
| |-ConstAttr 0x564f7fe357f0 <col:1> Implicit
| `-NoThrowAttr 0x564f7fe35818 <col:1> Implicit
|-FunctionDecl 0x564f7fe35840 prev 0x564f7fe35598 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:113:1 fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x564f7fe353a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x564f7fe35420 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x564f7fe354a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| |-BuiltinAttr 0x564f7fe35958 <<invalid sloc>> Inherited Implicit 589
| |-ConstAttr 0x564f7fe35988 <<scratch space>:113:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe35900 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe35b70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x564f7fe359c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x564f7fe35a48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x564f7fe35ac8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| `-NoThrowAttr 0x564f7fe35c30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe35df8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:121:1 scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe35cd8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe35d58 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x564f7fe35eb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe36040 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:123:1 __scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x564f7fe35f20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x564f7fe35fa0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x564f7fe360f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe36238 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:124:1 __fpclassifyl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36168 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'long double'
| |-NoThrowAttr 0x564f7fe362e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe36340 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x564f7fe36418 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:125:1 __signbitl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36380 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'long double'
| |-NoThrowAttr 0x564f7fe364c8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe36520 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x564f7fe365f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:126:1 __isinfl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36560 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'long double'
| |-NoThrowAttr 0x564f7fe366a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe36700 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x564f7fe367d8 <<scratch space>:127:1> col:1 implicit __finitel 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe368e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe36880 <<invalid sloc>> Implicit 1014
| |-NoThrowAttr 0x564f7fe36950 <col:1> Implicit
| `-ConstAttr 0x564f7fe36978 <col:1> Implicit
|-FunctionDecl 0x564f7fe369a0 prev 0x564f7fe367d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:127:1 __finitel 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36740 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'long double'
| |-BuiltinAttr 0x564f7fe36ad0 <<invalid sloc>> Inherited Implicit 1014
| |-NoThrowAttr 0x564f7fe36a50 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe36aa8 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x564f7fe36bb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:128:1 __isnanl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36b18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'long double'
| |-NoThrowAttr 0x564f7fe36c60 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe36cd0 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x564f7fe36e78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __iseqsigl 'int (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe36d10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'long double'
| |-ParmVarDecl 0x564f7fe36d90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'long double'
| `-NoThrowAttr 0x564f7fe36f30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe37038 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:130:1 __issignalingl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe36fa0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'long double'
| |-NoThrowAttr 0x564f7fe370e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe37140 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x564f7fe37258 <<scratch space>:133:1> col:1 implicit acosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37360 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe37300 <<invalid sloc>> Implicit 105
| `-NoThrowAttr 0x564f7fe373d0 <col:1> Implicit
|-FunctionDecl 0x564f7fe373f8 prev 0x564f7fe37258 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 acosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37180 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe37500 <<invalid sloc>> Inherited Implicit 105
| `-NoThrowAttr 0x564f7fe374a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe375e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __acosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37548 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe37690 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe37798 <<scratch space>:138:1> col:1 implicit asinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe378a0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe37840 <<invalid sloc>> Implicit 140
| `-NoThrowAttr 0x564f7fe37910 <col:1> Implicit
|-FunctionDecl 0x564f7fe37938 prev 0x564f7fe37798 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 asinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37700 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe37a40 <<invalid sloc>> Inherited Implicit 140
| `-NoThrowAttr 0x564f7fe379e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe37b20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __asinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37a88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe37bd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe37ed8 <<scratch space>:143:1> col:1 implicit atanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37fe0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe37f80 <<invalid sloc>> Implicit 157
| `-NoThrowAttr 0x564f7fe38050 <col:1> Implicit
|-FunctionDecl 0x564f7fe38078 prev 0x564f7fe37ed8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:143:1 atanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe37e40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe38180 <<invalid sloc>> Inherited Implicit 157
| `-NoThrowAttr 0x564f7fe38128 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe38260 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __atanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe381c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe38310 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe384e8 <<scratch space>:148:1> col:1 implicit atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe385f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe38658 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe38590 <<invalid sloc>> Implicit 163
| `-NoThrowAttr 0x564f7fe386d0 <col:1> Implicit
|-FunctionDecl 0x564f7fe386f8 prev 0x564f7fe384e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe38380 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x564f7fe38400 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| |-BuiltinAttr 0x564f7fe38808 <<invalid sloc>> Inherited Implicit 163
| `-NoThrowAttr 0x564f7fe387b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe38970 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe38850 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x564f7fe388d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| `-NoThrowAttr 0x564f7fe38a28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe38b30 <<scratch space>:153:1> col:1 implicit cosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe38c38 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe38bd8 <<invalid sloc>> Implicit 385
| `-NoThrowAttr 0x564f7fe38ca8 <col:1> Implicit
|-FunctionDecl 0x564f7fe38cd0 prev 0x564f7fe38b30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 cosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe38a98 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| |-BuiltinAttr 0x564f7fe38dd8 <<invalid sloc>> Inherited Implicit 385
| `-NoThrowAttr 0x564f7fe38d80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe39078 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __cosl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe38fe0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| `-NoThrowAttr 0x564f7fe39128 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe39230 <<scratch space>:158:1> col:1 implicit sinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39338 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe392d8 <<invalid sloc>> Implicit 1181
| `-NoThrowAttr 0x564f7fe393a8 <col:1> Implicit
|-FunctionDecl 0x564f7fe393d0 prev 0x564f7fe39230 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:158:1 sinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39198 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| |-BuiltinAttr 0x564f7fe394d8 <<invalid sloc>> Inherited Implicit 1181
| `-NoThrowAttr 0x564f7fe39480 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe395b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __sinl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39520 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| `-NoThrowAttr 0x564f7fe39668 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe39770 <<scratch space>:163:1> col:1 implicit tanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39878 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe39818 <<invalid sloc>> Implicit 1402
| `-NoThrowAttr 0x564f7fe398e8 <col:1> Implicit
|-FunctionDecl 0x564f7fe39910 prev 0x564f7fe39770 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 tanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe396d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| |-BuiltinAttr 0x564f7fe39a18 <<invalid sloc>> Inherited Implicit 1402
| `-NoThrowAttr 0x564f7fe399c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe39af8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __tanl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39a60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| `-NoThrowAttr 0x564f7fe39ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe39cb0 <<scratch space>:169:1> col:1 implicit coshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39db8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe39d58 <<invalid sloc>> Implicit 393
| `-NoThrowAttr 0x564f7fe39e28 <col:1> Implicit
|-FunctionDecl 0x564f7fe39e50 prev 0x564f7fe39cb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:169:1 coshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39c18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe39f58 <<invalid sloc>> Inherited Implicit 393
| `-NoThrowAttr 0x564f7fe39f00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3a088 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:171:1 __coshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe39ff0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe3a138 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3a240 <<scratch space>:174:1> col:1 implicit sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3a348 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3a2e8 <<invalid sloc>> Implicit 1200
| `-NoThrowAttr 0x564f7fe3a3b8 <col:1> Implicit
|-FunctionDecl 0x564f7fe3a3e0 prev 0x564f7fe3a240 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3a1a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe3a4e8 <<invalid sloc>> Inherited Implicit 1200
| `-NoThrowAttr 0x564f7fe3a490 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3a5c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:176:1 __sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3a530 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe3a678 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3a780 <<scratch space>:179:1> col:1 implicit tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3a888 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3a828 <<invalid sloc>> Implicit 1410
| `-NoThrowAttr 0x564f7fe3a8f8 <col:1> Implicit
|-FunctionDecl 0x564f7fe3a920 prev 0x564f7fe3a780 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:179:1 tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3a6e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe3aa28 <<invalid sloc>> Inherited Implicit 1410
| `-NoThrowAttr 0x564f7fe3a9d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3ab08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:181:1 __tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3aa70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe3abb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3acc0 <<scratch space>:184:1> col:1 implicit acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3adc8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3ad68 <<invalid sloc>> Implicit 113
| `-NoThrowAttr 0x564f7fe3ae38 <col:1> Implicit
|-FunctionDecl 0x564f7fe3ae60 prev 0x564f7fe3acc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3ac28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3af68 <<invalid sloc>> Inherited Implicit 113
| `-NoThrowAttr 0x564f7fe3af10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3b098 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b000 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3b148 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3b250 <<scratch space>:189:1> col:1 implicit asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b358 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3b2f8 <<invalid sloc>> Implicit 148
| `-NoThrowAttr 0x564f7fe3b3c8 <col:1> Implicit
|-FunctionDecl 0x564f7fe3b3f0 prev 0x564f7fe3b250 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b1b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3b4f8 <<invalid sloc>> Inherited Implicit 148
| `-NoThrowAttr 0x564f7fe3b4a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3b5d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b540 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3b688 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3b790 <<scratch space>:194:1> col:1 implicit atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b898 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3b838 <<invalid sloc>> Implicit 173
| `-NoThrowAttr 0x564f7fe3b908 <col:1> Implicit
|-FunctionDecl 0x564f7fe3b930 prev 0x564f7fe3b790 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3b6f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3ba38 <<invalid sloc>> Inherited Implicit 173
| `-NoThrowAttr 0x564f7fe3b9e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3bb18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3ba80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3bbc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3bcd0 <<scratch space>:199:1> col:1 implicit expl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3bdd8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3bd78 <<invalid sloc>> Implicit 525
| `-NoThrowAttr 0x564f7fe3be48 <col:1> Implicit
|-FunctionDecl 0x564f7fe3be70 prev 0x564f7fe3bcd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 expl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3bc38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| |-BuiltinAttr 0x564f7fe3bf78 <<invalid sloc>> Inherited Implicit 525
| `-NoThrowAttr 0x564f7fe3bf20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3c0a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __expl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3c010 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| `-NoThrowAttr 0x564f7fe3c158 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3c328 <<scratch space>:202:1> col:1 implicit frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x564f7fe3c430 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe3c498 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fe3c3d0 <<invalid sloc>> Implicit 647
| `-NoThrowAttr 0x564f7fe3c510 <col:1> Implicit
|-FunctionDecl 0x564f7fe3c538 prev 0x564f7fe3c328 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:202:1 frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x564f7fe3c1c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe3c248 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x564f7fe3c648 <<invalid sloc>> Inherited Implicit 647
| `-NoThrowAttr 0x564f7fe3c5f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3c7b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 __frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x564f7fe3c690 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe3c710 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x564f7fe3c868 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3ca38 <<scratch space>:205:1> col:1 implicit ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe3cb40 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe3cba8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fe3cae0 <<invalid sloc>> Implicit 842
| `-NoThrowAttr 0x564f7fe3cc20 <col:1> Implicit
|-FunctionDecl 0x564f7fe3cc48 prev 0x564f7fe3ca38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:205:1 ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe3c8d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe3c958 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x564f7fe3cd58 <<invalid sloc>> Inherited Implicit 842
| `-NoThrowAttr 0x564f7fe3cd00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3cec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:207:1 __ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe3cda0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe3ce20 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x564f7fe3cf78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3d248 <<scratch space>:210:1> col:1 implicit logl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3d350 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3d2f0 <<invalid sloc>> Implicit 871
| `-NoThrowAttr 0x564f7fe3d3c0 <col:1> Implicit
|-FunctionDecl 0x564f7fe3d3e8 prev 0x564f7fe3d248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:210:1 logl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3d1b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| |-BuiltinAttr 0x564f7fe3d4f0 <<invalid sloc>> Inherited Implicit 871
| `-NoThrowAttr 0x564f7fe3d498 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3d5d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:212:1 __logl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3d538 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| `-NoThrowAttr 0x564f7fe3d680 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3d788 <<scratch space>:215:1> col:1 implicit log10l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3d890 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3d830 <<invalid sloc>> Implicit 892
| `-NoThrowAttr 0x564f7fe3d900 <col:1> Implicit
|-FunctionDecl 0x564f7fe3d928 prev 0x564f7fe3d788 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:215:1 log10l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3d6f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3da30 <<invalid sloc>> Inherited Implicit 892
| `-NoThrowAttr 0x564f7fe3d9d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3db10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:217:1 __log10l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3da78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3dbc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3ddc8 <<scratch space>:218:1> col:1 implicit modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x564f7fe3ded0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe3df38 <<invalid sloc>> <invalid sloc> 'long double *'
| |-BuiltinAttr 0x564f7fe3de70 <<invalid sloc>> Implicit 963
| `-NoThrowAttr 0x564f7fe3dfb0 <col:1> Implicit
|-FunctionDecl 0x564f7fe3dfd8 prev 0x564f7fe3ddc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:218:1 modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x564f7fe3dc30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe3dce8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-BuiltinAttr 0x564f7fe3e0e8 <<invalid sloc>> Inherited Implicit 963
| `-NoThrowAttr 0x564f7fe3e090 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3e660 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:220:1 __modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x564f7fe3e130 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe3e5a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-NoThrowAttr 0x564f7fe3e718 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe3e770 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x564f7fe3e868 <<scratch space>:224:1> col:1 implicit expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3e970 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3e910 <<invalid sloc>> Implicit 548
| `-NoThrowAttr 0x564f7fe3e9e0 <col:1> Implicit
|-FunctionDecl 0x564f7fe3ea08 prev 0x564f7fe3e868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:224:1 expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3e7d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3eb10 <<invalid sloc>> Inherited Implicit 548
| `-NoThrowAttr 0x564f7fe3eab8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3ebf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:226:1 __expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3eb58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3eca0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3eda8 <<scratch space>:229:1> col:1 implicit log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3eeb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3ee50 <<invalid sloc>> Implicit 877
| `-NoThrowAttr 0x564f7fe3ef20 <col:1> Implicit
|-FunctionDecl 0x564f7fe3ef48 prev 0x564f7fe3eda8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:229:1 log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3ed10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe3f050 <<invalid sloc>> Inherited Implicit 877
| `-NoThrowAttr 0x564f7fe3eff8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3f130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:231:1 __log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3f098 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe3f1e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3f2e8 <<scratch space>:232:1> col:1 implicit logbl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3f3f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3f390 <<invalid sloc>> Implicit 902
| `-NoThrowAttr 0x564f7fe3f460 <col:1> Implicit
|-FunctionDecl 0x564f7fe3f488 prev 0x564f7fe3f2e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 logbl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3f250 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| |-BuiltinAttr 0x564f7fe3fab0 <<invalid sloc>> Inherited Implicit 902
| `-NoThrowAttr 0x564f7fe3f538 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3fb90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:234:1 __logbl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3faf8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| `-NoThrowAttr 0x564f7fe3fc40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe3fd48 <<scratch space>:237:1> col:1 implicit exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3fe50 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe3fdf0 <<invalid sloc>> Implicit 531
| `-NoThrowAttr 0x564f7fe3fec0 <col:1> Implicit
|-FunctionDecl 0x564f7fe3fee8 prev 0x564f7fe3fd48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe3fcb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe3fff0 <<invalid sloc>> Inherited Implicit 531
| `-NoThrowAttr 0x564f7fe3ff98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe400d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:239:1 __exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe40038 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe40180 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe40288 <<scratch space>:242:1> col:1 implicit log2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe40390 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe40330 <<invalid sloc>> Implicit 884
| `-NoThrowAttr 0x564f7fe40400 <col:1> Implicit
|-FunctionDecl 0x564f7fe40428 prev 0x564f7fe40288 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 log2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe401f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe40530 <<invalid sloc>> Inherited Implicit 884
| `-NoThrowAttr 0x564f7fe404d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe40610 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:244:1 __log2l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe40578 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe406c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe40850 <<scratch space>:247:1> col:1 implicit powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe40958 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe409c0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe408f8 <<invalid sloc>> Implicit 1050
| `-NoThrowAttr 0x564f7fe40a38 <col:1> Implicit
|-FunctionDecl 0x564f7fe40ac0 prev 0x564f7fe40850 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe40730 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x564f7fe407b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| |-BuiltinAttr 0x564f7fe40bd0 <<invalid sloc>> Inherited Implicit 1050
| `-NoThrowAttr 0x564f7fe40b78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe40d38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:249:1 __powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe40c18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x564f7fe40c98 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| `-NoThrowAttr 0x564f7fe40df0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe40ef8 <<scratch space>:250:1> col:1 implicit sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe41000 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe40fa0 <<invalid sloc>> Implicit 1215
| `-NoThrowAttr 0x564f7fe41070 <col:1> Implicit
|-FunctionDecl 0x564f7fe41098 prev 0x564f7fe40ef8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe40e60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| |-BuiltinAttr 0x564f7fe411a0 <<invalid sloc>> Inherited Implicit 1215
| `-NoThrowAttr 0x564f7fe41148 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe41280 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe411e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| `-NoThrowAttr 0x564f7fe41330 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe414c0 <<scratch space>:255:1> col:1 implicit hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe415c8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe41630 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe41568 <<invalid sloc>> Implicit 733
| `-NoThrowAttr 0x564f7fe416a8 <col:1> Implicit
|-FunctionDecl 0x564f7fe416d0 prev 0x564f7fe414c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe413a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe41420 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| |-BuiltinAttr 0x564f7fe417e0 <<invalid sloc>> Inherited Implicit 733
| `-NoThrowAttr 0x564f7fe41788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe41948 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:257:1 __hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe41828 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe418a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| `-NoThrowAttr 0x564f7fe41a00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe41b68 <<scratch space>:260:1> col:1 implicit cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe41c70 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe41c10 <<invalid sloc>> Implicit 300
| |-NoThrowAttr 0x564f7fe41ce0 <col:1> Implicit
| `-ConstAttr 0x564f7fe41d08 <col:1> Implicit
|-FunctionDecl 0x564f7fe41d30 prev 0x564f7fe41b68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:260:1 cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe41ad0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| |-BuiltinAttr 0x564f7fe41e38 <<invalid sloc>> Inherited Implicit 300
| |-ConstAttr 0x564f7fe41e68 <<scratch space>:260:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe41de0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe41f40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:262:1 __cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe41ea8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| `-NoThrowAttr 0x564f7fe41ff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe420f8 <<scratch space>:264:1> col:1 implicit ceill 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe42200 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe421a0 <<invalid sloc>> Implicit 319
| |-NoThrowAttr 0x564f7fe42270 <col:1> Implicit
| `-ConstAttr 0x564f7fe42298 <col:1> Implicit
|-FunctionDecl 0x564f7fe422c0 prev 0x564f7fe420f8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:264:1 ceill 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe42060 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'long double'
| |-BuiltinAttr 0x564f7fe423f0 <<invalid sloc>> Inherited Implicit 319
| |-NoThrowAttr 0x564f7fe42370 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe423c8 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x564f7fe424d0 <<scratch space>:265:1> col:1 implicit fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe425d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe42578 <<invalid sloc>> Implicit 566
| |-NoThrowAttr 0x564f7fe42648 <col:1> Implicit
| `-ConstAttr 0x564f7fe42670 <col:1> Implicit
|-FunctionDecl 0x564f7fe42698 prev 0x564f7fe424d0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:265:1 fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe42438 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'long double'
| |-BuiltinAttr 0x564f7fe427c8 <<invalid sloc>> Inherited Implicit 566
| |-NoThrowAttr 0x564f7fe42748 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe427a0 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x564f7fe428a8 <<scratch space>:266:1> col:1 implicit floorl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe429b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe42950 <<invalid sloc>> Implicit 585
| |-NoThrowAttr 0x564f7fe42a20 <col:1> Implicit
| `-ConstAttr 0x564f7fe42a48 <col:1> Implicit
|-FunctionDecl 0x564f7fe42ae0 prev 0x564f7fe428a8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:266:1 floorl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe42810 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'long double'
| |-BuiltinAttr 0x564f7fe42c10 <<invalid sloc>> Inherited Implicit 585
| |-NoThrowAttr 0x564f7fe42b90 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe42be8 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x564f7fe42d78 <<scratch space>:267:1> col:1 implicit fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe42e80 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe42ee8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe42e20 <<invalid sloc>> Implicit 633
| `-NoThrowAttr 0x564f7fe42f60 <col:1> Implicit
|-FunctionDecl 0x564f7fe42f88 prev 0x564f7fe42d78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:267:1 fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe42c58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe42cd8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| |-BuiltinAttr 0x564f7fe43098 <<invalid sloc>> Inherited Implicit 633
| `-NoThrowAttr 0x564f7fe43040 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe43200 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 __fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe430e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe43160 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| `-NoThrowAttr 0x564f7fe432b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe433c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:270:1 isinfl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe43328 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'long double'
| |-NoThrowAttr 0x564f7fe43470 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe434c8 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x564f7fe435a0 <<scratch space>:271:1> col:1 implicit finitel 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe436a8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe43648 <<invalid sloc>> Implicit 579
| |-NoThrowAttr 0x564f7fe43718 <col:1> Implicit
| `-ConstAttr 0x564f7fe43740 <col:1> Implicit
|-FunctionDecl 0x564f7fe43768 prev 0x564f7fe435a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:271:1 finitel 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe43508 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'long double'
| |-BuiltinAttr 0x564f7fe43898 <<invalid sloc>> Inherited Implicit 579
| |-NoThrowAttr 0x564f7fe43818 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe43870 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x564f7fe43a00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:272:1 dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe438e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe43960 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x564f7fe43ab8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe43c58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:274:1 __dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe43b38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe43bb8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x564f7fe43d10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe43e18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 significandl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe43d80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x564f7fe43ec8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe43fd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __significandl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe43f38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x564f7fe44080 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe44210 <<scratch space>:278:1> col:1 implicit copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe44318 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe44380 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe442b8 <<invalid sloc>> Implicit 363
| |-NoThrowAttr 0x564f7fe443f8 <col:1> Implicit
| `-ConstAttr 0x564f7fe44420 <col:1> Implicit
|-FunctionDecl 0x564f7fe44448 prev 0x564f7fe44210 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:278:1 copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe440f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe44170 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'long double'
| |-BuiltinAttr 0x564f7fe44580 <<invalid sloc>> Inherited Implicit 363
| |-NoThrowAttr 0x564f7fe44500 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe44558 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x564f7fe44698 <<scratch space>:279:1> col:1 implicit nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x564f7fe447a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fe44740 <<invalid sloc>> Implicit 975
| |-NoThrowAttr 0x564f7fe44810 <col:1> Implicit
| `-PureAttr 0x564f7fe44838 <col:1> Implicit
|-FunctionDecl 0x564f7fe44860 prev 0x564f7fe44698 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:279:1 nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x564f7fe445c8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x564f7fe44968 <<invalid sloc>> Inherited Implicit 975
| |-PureAttr 0x564f7fe44998 <<scratch space>:279:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe44910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe44b00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:281:1 __nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x564f7fe449d8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x564f7fe44bb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe44cb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:282:1 isnanl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe44c20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'long double'
| |-NoThrowAttr 0x564f7fe44d68 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe44dc0 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x564f7fe44e98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 j0l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe44e00 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x564f7fe44f48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45050 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __j0l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe44fb8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x564f7fe45100 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45208 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:286:1 j1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe45170 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x564f7fe452b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe453c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 __j1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe45328 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x564f7fe45470 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45648 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:289:1 jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x564f7fe454e0 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe45560 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x564f7fe45700 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:291:1 __jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x564f7fe45770 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe457f0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x564f7fe45948 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45a50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:292:1 y0l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe459b8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x564f7fe45b10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45c18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:294:1 __y0l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe45b80 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x564f7fe45cc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45dd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 y1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe45d38 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x564f7fe45e80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe45f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:297:1 __y1l 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe45ef0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x564f7fe46038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe461c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x564f7fe460a8 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe46128 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x564f7fe46280 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe46410 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x564f7fe462f0 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x564f7fe46370 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x564f7fe464c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe465d0 <<scratch space>:303:1> col:1 implicit erfl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe466d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe46678 <<invalid sloc>> Implicit 505
| `-NoThrowAttr 0x564f7fe46748 <col:1> Implicit
|-FunctionDecl 0x564f7fe46770 prev 0x564f7fe465d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 erfl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe46538 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| |-BuiltinAttr 0x564f7fe46878 <<invalid sloc>> Inherited Implicit 505
| `-NoThrowAttr 0x564f7fe46820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe46958 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:305:1 __erfl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe468c0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| `-NoThrowAttr 0x564f7fe46a08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe46b20 <<scratch space>:308:1> col:1 implicit erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe46c28 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe46bc8 <<invalid sloc>> Implicit 512
| `-NoThrowAttr 0x564f7fe46c98 <col:1> Implicit
|-FunctionDecl 0x564f7fe46cc0 prev 0x564f7fe46b20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe46a78 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| |-BuiltinAttr 0x564f7fe46dc8 <<invalid sloc>> Inherited Implicit 512
| `-NoThrowAttr 0x564f7fe46d70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe46ea8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:310:1 __erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe46e10 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| `-NoThrowAttr 0x564f7fe46f58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe47060 <<scratch space>:311:1> col:1 implicit lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47168 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe47108 <<invalid sloc>> Implicit 850
| `-NoThrowAttr 0x564f7fe471d8 <col:1> Implicit
|-FunctionDecl 0x564f7fe47200 prev 0x564f7fe47060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe46fc8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| |-BuiltinAttr 0x564f7fe47308 <<invalid sloc>> Inherited Implicit 850
| `-NoThrowAttr 0x564f7fe472b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe473e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47350 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| `-NoThrowAttr 0x564f7fe47498 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe475a0 <<scratch space>:314:1> col:1 implicit tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe476a8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe47648 <<invalid sloc>> Implicit 1420
| `-NoThrowAttr 0x564f7fe47718 <col:1> Implicit
|-FunctionDecl 0x564f7fe47740 prev 0x564f7fe475a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:314:1 tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47508 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| |-BuiltinAttr 0x564f7fe47848 <<invalid sloc>> Inherited Implicit 1420
| `-NoThrowAttr 0x564f7fe477f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe47928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:316:1 __tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47890 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| `-NoThrowAttr 0x564f7fe479d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe47b30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:317:1 gammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47a48 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x564f7fe47be0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe47ce8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:319:1 __gammal 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe47c50 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x564f7fe47d98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe47f28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:321:1 lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x564f7fe47e08 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x564f7fe47e88 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fe47fe0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe48170 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:324:1 __lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x564f7fe48050 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x564f7fe480d0 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x564f7fe48228 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe48330 <<scratch space>:325:1> col:1 implicit rintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe48438 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe483d8 <<invalid sloc>> Implicit 1104
| |-ConstAttr 0x564f7fe484a8 <col:1> Implicit
| `-NoThrowAttr 0x564f7fe484d0 <col:1> Implicit
|-FunctionDecl 0x564f7fe484f8 prev 0x564f7fe48330 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:325:1 rintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe48298 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| |-BuiltinAttr 0x564f7fe48600 <<invalid sloc>> Inherited Implicit 1104
| |-ConstAttr 0x564f7fe48630 <<scratch space>:325:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe485a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe48708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:327:1 __rintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe48670 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| `-NoThrowAttr 0x564f7fe487b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe48948 <<scratch space>:328:1> col:1 implicit nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe48a50 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe48ab8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe489f0 <<invalid sloc>> Implicit 995
| `-NoThrowAttr 0x564f7fe14dc0 <col:1> Implicit
|-FunctionDecl 0x564f7fe14de8 prev 0x564f7fe48948 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:328:1 nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe48828 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe488a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| |-BuiltinAttr 0x564f7fe14ef8 <<invalid sloc>> Inherited Implicit 995
| `-NoThrowAttr 0x564f7fe14ea0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe15060 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:330:1 __nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe14f40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe14fc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| `-NoThrowAttr 0x564f7fe15118 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe152a8 <<scratch space>:331:1> col:1 implicit nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe153b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe15418 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe15350 <<invalid sloc>> Implicit 1002
| `-NoThrowAttr 0x564f7fe15490 <col:1> Implicit
|-FunctionDecl 0x564f7fe154b8 prev 0x564f7fe152a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:331:1 nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe15188 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x564f7fe15208 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x564f7fe155c8 <<invalid sloc>> Inherited Implicit 1002
| `-NoThrowAttr 0x564f7fe15570 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe15730 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:333:1 __nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe15610 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x564f7fe15690 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x564f7fe157e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe15978 <<scratch space>:335:1> col:1 implicit remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe15a80 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe15ae8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe15a20 <<invalid sloc>> Implicit 1086
| `-NoThrowAttr 0x564f7fe15b60 <col:1> Implicit
|-FunctionDecl 0x564f7fe15b88 prev 0x564f7fe15978 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:335:1 remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe15858 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe158d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| |-BuiltinAttr 0x564f7fe15c98 <<invalid sloc>> Inherited Implicit 1086
| `-NoThrowAttr 0x564f7fe15c40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe16000 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:337:1 __remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe15ce0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x564f7fe15f60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| `-NoThrowAttr 0x564f7fe160b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe16248 <<scratch space>:338:1> col:1 implicit scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe16350 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe163b8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x564f7fe162f0 <<invalid sloc>> Implicit 1160
| `-NoThrowAttr 0x564f7fe16430 <col:1> Implicit
|-FunctionDecl 0x564f7fe16458 prev 0x564f7fe16248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:338:1 scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe16128 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x564f7fe161a8 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x564f7fe16568 <<invalid sloc>> Inherited Implicit 1160
| `-NoThrowAttr 0x564f7fe16510 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe166d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:340:1 __scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x564f7fe165b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x564f7fe16630 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x564f7fe16788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe16890 <<scratch space>:341:1> col:1 implicit ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe16998 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe16938 <<invalid sloc>> Implicit 741
| `-NoThrowAttr 0x564f7fe16a08 <col:1> Implicit
|-FunctionDecl 0x564f7fe16a30 prev 0x564f7fe16890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:341:1 ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe167f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe16b38 <<invalid sloc>> Inherited Implicit 741
| `-NoThrowAttr 0x564f7fe16ae0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe16c18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:343:1 __ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x564f7fe16b80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe16cc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe16e98 <<scratch space>:345:1> col:1 implicit scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x564f7fe16fd0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe17038 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x564f7fe16f70 <<invalid sloc>> Implicit 1154
| `-NoThrowAttr 0x564f7fe170b0 <col:1> Implicit
|-FunctionDecl 0x564f7fe170d8 prev 0x564f7fe16e98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:345:1 scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x564f7fe16d38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x564f7fe16db8 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x564f7fe171e8 <<invalid sloc>> Inherited Implicit 1154
| `-NoThrowAttr 0x564f7fe17190 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe17350 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:347:1 __scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x564f7fe17230 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x564f7fe172b0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x564f7fe17408 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe17510 <<scratch space>:348:1> col:1 implicit nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17618 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe175b8 <<invalid sloc>> Implicit 988
| |-NoThrowAttr 0x564f7fe17688 <col:1> Implicit
| `-ConstAttr 0x564f7fe176b0 <col:1> Implicit
|-FunctionDecl 0x564f7fe176d8 prev 0x564f7fe17510 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:348:1 nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17478 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| |-BuiltinAttr 0x564f7fe177e0 <<invalid sloc>> Inherited Implicit 988
| |-ConstAttr 0x564f7fe17810 <<scratch space>:348:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe17788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe178e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:350:1 __nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17850 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| `-NoThrowAttr 0x564f7fe17998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe17aa0 <<scratch space>:351:1> col:1 implicit roundl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17ba8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe17b48 <<invalid sloc>> Implicit 1128
| |-NoThrowAttr 0x564f7fe17c18 <col:1> Implicit
| `-ConstAttr 0x564f7fe17c40 <col:1> Implicit
|-FunctionDecl 0x564f7fe17c68 prev 0x564f7fe17aa0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:351:1 roundl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17a08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'long double'
| |-BuiltinAttr 0x564f7fe17d98 <<invalid sloc>> Inherited Implicit 1128
| |-NoThrowAttr 0x564f7fe17d18 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe17d70 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x564f7fe17e78 <<scratch space>:352:1> col:1 implicit truncl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe18250 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe17f20 <<invalid sloc>> Implicit 1434
| |-NoThrowAttr 0x564f7fe182c0 <col:1> Implicit
| `-ConstAttr 0x564f7fe182e8 <col:1> Implicit
|-FunctionDecl 0x564f7fe18310 prev 0x564f7fe17e78 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:352:1 truncl 'long double (long double)' extern
| |-ParmVarDecl 0x564f7fe17de0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'long double'
| |-BuiltinAttr 0x564f7fe18440 <<invalid sloc>> Inherited Implicit 1434
| |-NoThrowAttr 0x564f7fe183c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe18418 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x564f7fe18678 <<scratch space>:353:1> col:1 implicit remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x564f7fe18780 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe187e8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe18850 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x564f7fe18720 <<invalid sloc>> Implicit 1093
| `-NoThrowAttr 0x564f7fe188d0 <col:1> Implicit
|-FunctionDecl 0x564f7fe188f8 prev 0x564f7fe18678 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:353:1 remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x564f7fe18488 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x564f7fe18508 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x564f7fe18588 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x564f7fe18a10 <<invalid sloc>> Inherited Implicit 1093
| `-NoThrowAttr 0x564f7fe189b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe18c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:355:1 __remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x564f7fe18a58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x564f7fe18ad8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x564f7fe18b58 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x564f7fe18cc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe18e08 <<scratch space>:356:1> col:1 implicit lrintl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe18f10 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe18eb0 <<invalid sloc>> Implicit 910
| `-NoThrowAttr 0x564f7fe18f80 <col:1> Implicit
|-FunctionDecl 0x564f7fe18fa8 prev 0x564f7fe18e08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:356:1 lrintl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe18d30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| |-BuiltinAttr 0x564f7fe190b0 <<invalid sloc>> Inherited Implicit 910
| `-NoThrowAttr 0x564f7fe19058 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe19530 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:358:1 __lrintl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe190f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| `-NoThrowAttr 0x564f7fe195e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe19728 <<scratch space>:359:1> col:1 implicit llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe19830 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe197d0 <<invalid sloc>> Implicit 857
| `-NoThrowAttr 0x564f7fe198a0 <col:1> Implicit
|-FunctionDecl 0x564f7fe198c8 prev 0x564f7fe19728 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:359:1 llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe19650 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| |-BuiltinAttr 0x564f7fe199d0 <<invalid sloc>> Inherited Implicit 857
| `-NoThrowAttr 0x564f7fe19978 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe19ab0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:361:1 __llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe19a18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| `-NoThrowAttr 0x564f7fe19b60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe19c68 <<scratch space>:362:1> col:1 implicit lroundl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe19d70 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe19d10 <<invalid sloc>> Implicit 919
| `-NoThrowAttr 0x564f7fe19de0 <col:1> Implicit
|-FunctionDecl 0x564f7fe19e08 prev 0x564f7fe19c68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:362:1 lroundl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe19bd0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| |-BuiltinAttr 0x564f7fe19f10 <<invalid sloc>> Inherited Implicit 919
| `-NoThrowAttr 0x564f7fe19eb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe19ff0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:364:1 __lroundl 'long (long double)' extern
| |-ParmVarDecl 0x564f7fe19f58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| `-NoThrowAttr 0x564f7fe1a0a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1a1a8 <<scratch space>:365:1> col:1 implicit llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe1a2b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe1a250 <<invalid sloc>> Implicit 863
| `-NoThrowAttr 0x564f7fe1a320 <col:1> Implicit
|-FunctionDecl 0x564f7fe1a348 prev 0x564f7fe1a1a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:365:1 llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe1a110 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| |-BuiltinAttr 0x564f7fe1a450 <<invalid sloc>> Inherited Implicit 863
| `-NoThrowAttr 0x564f7fe1a3f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1a540 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:367:1 __llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x564f7fe1a498 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| `-NoThrowAttr 0x564f7fe1a5f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1a780 <<scratch space>:368:1> col:1 implicit fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1a888 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe1a8f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe1a828 <<invalid sloc>> Implicit 575
| `-NoThrowAttr 0x564f7fe1a968 <col:1> Implicit
|-FunctionDecl 0x564f7fe1a990 prev 0x564f7fe1a780 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:368:1 fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1a660 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe1a6e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| |-BuiltinAttr 0x564f7fe1aaa0 <<invalid sloc>> Inherited Implicit 575
| `-NoThrowAttr 0x564f7fe1aa48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1ac08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:370:1 __fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1aae8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x564f7fe1ab68 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| `-NoThrowAttr 0x564f7fe1acc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1ae50 <<scratch space>:372:1> col:1 implicit fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1af58 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe1afc0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe1aef8 <<invalid sloc>> Implicit 601
| |-NoThrowAttr 0x564f7fe1b038 <col:1> Implicit
| `-ConstAttr 0x564f7fe1b060 <col:1> Implicit
|-FunctionDecl 0x564f7fe1b088 prev 0x564f7fe1ae50 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:372:1 fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1ad30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe1adb0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'long double'
| |-BuiltinAttr 0x564f7fe1b1c0 <<invalid sloc>> Inherited Implicit 601
| |-NoThrowAttr 0x564f7fe1b140 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1b198 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x564f7fe1b328 <<scratch space>:373:1> col:1 implicit fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1b430 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe1b498 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe1b3d0 <<invalid sloc>> Implicit 617
| |-NoThrowAttr 0x564f7fe1b510 <col:1> Implicit
| `-ConstAttr 0x564f7fe1b820 <col:1> Implicit
|-FunctionDecl 0x564f7fe1b848 prev 0x564f7fe1b328 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:373:1 fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1b208 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe1b288 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'long double'
| |-BuiltinAttr 0x564f7fe1b980 <<invalid sloc>> Inherited Implicit 617
| |-NoThrowAttr 0x564f7fe1b900 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1b958 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x564f7fe1bbb8 <<scratch space>:374:1> col:1 implicit fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1bcc0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe1bd28 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x564f7fe1bd90 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x564f7fe1bc60 <<invalid sloc>> Implicit 593
| |-ConstAttr 0x564f7fe1be10 <col:1> Implicit
| `-NoThrowAttr 0x564f7fe1be38 <col:1> Implicit
|-FunctionDecl 0x564f7fe1be60 prev 0x564f7fe1bbb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:374:1 fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1b9c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x564f7fe1ba48 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x564f7fe1bac8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| |-BuiltinAttr 0x564f7fe1bf78 <<invalid sloc>> Inherited Implicit 593
| |-ConstAttr 0x564f7fe1bfa8 <<scratch space>:374:1> Inherited Implicit
| `-NoThrowAttr 0x564f7fe1bf20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1c190 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:376:1 __fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1bfe8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x564f7fe1c068 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x564f7fe1c0e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| `-NoThrowAttr 0x564f7fe1c250 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1c3e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:382:1 scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1c2c0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe1c340 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x564f7fe1c498 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1c628 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:384:1 __scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x564f7fe1c508 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x564f7fe1c588 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x564f7fe1c6e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1db98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:4:1 __fpclassifyf128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1c7b0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1dc48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1dca0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x564f7fe1dd70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:5:1 __signbitf128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1dcd8 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1de20 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1de78 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x564f7fe1df48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:6:1 __isinff128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1deb0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1dff8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1e050 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x564f7fe1e120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:7:1 __finitef128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1e088 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1e1d0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1e228 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x564f7fe1e2f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:8:1 __isnanf128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1e260 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1e3a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1e400 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x564f7fe1e5d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:9:1 __iseqsigf128 'int (_Float128, _Float128)' extern
| |-ParmVarDecl 0x564f7fe1e438 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x '_Float128':'__float128'
| |-ParmVarDecl 0x564f7fe1e4b0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y '_Float128':'__float128'
| `-NoThrowAttr 0x564f7fe1e690 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe1e790 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:10:1 __issignalingf128 'int (_Float128)' extern
| |-ParmVarDecl 0x564f7fe1e6f8 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value '_Float128':'__float128'
| |-NoThrowAttr 0x564f7fe1e840 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x564f7fe1e898 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-VarDecl 0x564f7fe1e8d8 </usr/include/math.h:823:1, col:12> col:12 signgam 'int' extern
|-EnumDecl 0x564f7fe1e940 <line:903:1, line:920:3> line:903:1
| |-EnumConstantDecl 0x564f7fe1ea40 <line:905:5, line:906:17> line:905:5 FP_NAN 'int'
| | `-ConstantExpr 0x564f7fe1ea20 <line:906:17> 'int'
| |   |-value: Int 0
| |   `-IntegerLiteral 0x564f7fe1ea00 <col:17> 'int' 0
| |-EnumConstantDecl 0x564f7fe1fb10 <line:908:5, line:909:22> line:908:5 FP_INFINITE 'int'
| | `-ConstantExpr 0x564f7fe1eab8 <line:909:22> 'int'
| |   |-value: Int 1
| |   `-IntegerLiteral 0x564f7fe1ea98 <col:22> 'int' 1
| |-EnumConstantDecl 0x564f7fe1fba8 <line:911:5, line:912:18> line:911:5 FP_ZERO 'int'
| | `-ConstantExpr 0x564f7fe1fb88 <line:912:18> 'int'
| |   |-value: Int 2
| |   `-IntegerLiteral 0x564f7fe1fb68 <col:18> 'int' 2
| |-EnumConstantDecl 0x564f7fe1fc40 <line:914:5, line:915:23> line:914:5 FP_SUBNORMAL 'int'
| | `-ConstantExpr 0x564f7fe1fc20 <line:915:23> 'int'
| |   |-value: Int 3
| |   `-IntegerLiteral 0x564f7fe1fc00 <col:23> 'int' 3
| `-EnumConstantDecl 0x564f7fe1fcd8 <line:917:5, line:918:20> line:917:5 FP_NORMAL 'int'
|   `-ConstantExpr 0x564f7fe1fcb8 <line:918:20> 'int'
|     |-value: Int 4
|     `-IntegerLiteral 0x564f7fe1fc98 <col:20> 'int' 4
|-TypedefDecl 0x564f7fe1fd40 </usr/include/bits/stdint-intn.h:24:1, col:18> col:18 referenced int8_t '__int8_t':'signed char'
| `-ElaboratedType 0x564f7fdb9680 '__int8_t' sugar
|   `-TypedefType 0x564f7fdb9650 '__int8_t' sugar
|     |-Typedef 0x564f7fdb92e0 '__int8_t'
|     `-BuiltinType 0x564f7fd18510 'signed char'
|-TypedefDecl 0x564f7fe1fda8 <line:25:1, col:19> col:19 referenced int16_t '__int16_t':'short'
| `-ElaboratedType 0x564f7fdbf160 '__int16_t' sugar
|   `-TypedefType 0x564f7fdb97f0 '__int16_t' sugar
|     |-Typedef 0x564f7fdb93c0 '__int16_t'
|     `-BuiltinType 0x564f7fd18530 'short'
|-TypedefDecl 0x564f7fe1fe10 <line:26:1, col:19> col:19 referenced int32_t '__int32_t':'int'
| `-ElaboratedType 0x564f7fdbf300 '__int32_t' sugar
|   `-TypedefType 0x564f7fdbf2d0 '__int32_t' sugar
|     |-Typedef 0x564f7fdb94a0 '__int32_t'
|     `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fe1fe78 <line:27:1, col:19> col:19 referenced int64_t '__int64_t':'long'
| `-ElaboratedType 0x564f7fdbf4a0 '__int64_t' sugar
|   `-TypedefType 0x564f7fdbf470 '__int64_t' sugar
|     |-Typedef 0x564f7fdb9580 '__int64_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe1fee0 </usr/include/bits/stdint-uintn.h:24:1, col:19> col:19 referenced uint8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x564f7fdb9750 '__uint8_t' sugar
|   `-TypedefType 0x564f7fdb9720 '__uint8_t' sugar
|     |-Typedef 0x564f7fdb9350 '__uint8_t'
|     `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fe1ff48 <line:25:1, col:20> col:20 referenced uint16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x564f7fdbf230 '__uint16_t' sugar
|   `-TypedefType 0x564f7fdbf200 '__uint16_t' sugar
|     |-Typedef 0x564f7fdb9430 '__uint16_t'
|     `-BuiltinType 0x564f7fd185d0 'unsigned short'
|-TypedefDecl 0x564f7fe1ffb0 <line:26:1, col:20> col:20 referenced uint32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x564f7fdbf3d0 '__uint32_t' sugar
|   `-TypedefType 0x564f7fdbf3a0 '__uint32_t' sugar
|     |-Typedef 0x564f7fdb9510 '__uint32_t'
|     `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fe20018 <line:27:1, col:20> col:20 referenced uint64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x564f7fdbf570 '__uint64_t' sugar
|   `-TypedefType 0x564f7fdbf540 '__uint64_t' sugar
|     |-Typedef 0x564f7fdb95f0 '__uint64_t'
|     `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe200e0 </usr/include/bits/stdint-least.h:25:1, col:24> col:24 int_least8_t '__int_least8_t':'signed char'
| `-ElaboratedType 0x564f7fe200a0 '__int_least8_t' sugar
|   `-TypedefType 0x564f7fe20070 '__int_least8_t' sugar
|     |-Typedef 0x564f7fdb96c0 '__int_least8_t'
|     `-ElaboratedType 0x564f7fdb9680 '__int8_t' sugar
|       `-TypedefType 0x564f7fdb9650 '__int8_t' sugar
|         |-Typedef 0x564f7fdb92e0 '__int8_t'
|         `-BuiltinType 0x564f7fd18510 'signed char'
|-TypedefDecl 0x564f7fe201b0 <line:26:1, col:25> col:25 int_least16_t '__int_least16_t':'short'
| `-ElaboratedType 0x564f7fe20170 '__int_least16_t' sugar
|   `-TypedefType 0x564f7fe20140 '__int_least16_t' sugar
|     |-Typedef 0x564f7fdbf1a0 '__int_least16_t'
|     `-ElaboratedType 0x564f7fdbf160 '__int16_t' sugar
|       `-TypedefType 0x564f7fdb97f0 '__int16_t' sugar
|         |-Typedef 0x564f7fdb93c0 '__int16_t'
|         `-BuiltinType 0x564f7fd18530 'short'
|-TypedefDecl 0x564f7fe20280 <line:27:1, col:25> col:25 int_least32_t '__int_least32_t':'int'
| `-ElaboratedType 0x564f7fe20240 '__int_least32_t' sugar
|   `-TypedefType 0x564f7fe20210 '__int_least32_t' sugar
|     |-Typedef 0x564f7fdbf340 '__int_least32_t'
|     `-ElaboratedType 0x564f7fdbf300 '__int32_t' sugar
|       `-TypedefType 0x564f7fdbf2d0 '__int32_t' sugar
|         |-Typedef 0x564f7fdb94a0 '__int32_t'
|         `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fe20350 <line:28:1, col:25> col:25 int_least64_t '__int_least64_t':'long'
| `-ElaboratedType 0x564f7fe20310 '__int_least64_t' sugar
|   `-TypedefType 0x564f7fe202e0 '__int_least64_t' sugar
|     |-Typedef 0x564f7fdbf4e0 '__int_least64_t'
|     `-ElaboratedType 0x564f7fdbf4a0 '__int64_t' sugar
|       `-TypedefType 0x564f7fdbf470 '__int64_t' sugar
|         |-Typedef 0x564f7fdb9580 '__int64_t'
|         `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe20420 <line:31:1, col:25> col:25 uint_least8_t '__uint_least8_t':'unsigned char'
| `-ElaboratedType 0x564f7fe203e0 '__uint_least8_t' sugar
|   `-TypedefType 0x564f7fe203b0 '__uint_least8_t' sugar
|     |-Typedef 0x564f7fdb9790 '__uint_least8_t'
|     `-ElaboratedType 0x564f7fdb9750 '__uint8_t' sugar
|       `-TypedefType 0x564f7fdb9720 '__uint8_t' sugar
|         |-Typedef 0x564f7fdb9350 '__uint8_t'
|         `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fe204f0 <line:32:1, col:26> col:26 uint_least16_t '__uint_least16_t':'unsigned short'
| `-ElaboratedType 0x564f7fe204b0 '__uint_least16_t' sugar
|   `-TypedefType 0x564f7fe20480 '__uint_least16_t' sugar
|     |-Typedef 0x564f7fdbf270 '__uint_least16_t'
|     `-ElaboratedType 0x564f7fdbf230 '__uint16_t' sugar
|       `-TypedefType 0x564f7fdbf200 '__uint16_t' sugar
|         |-Typedef 0x564f7fdb9430 '__uint16_t'
|         `-BuiltinType 0x564f7fd185d0 'unsigned short'
|-TypedefDecl 0x564f7fe205c0 <line:33:1, col:26> col:26 uint_least32_t '__uint_least32_t':'unsigned int'
| `-ElaboratedType 0x564f7fe20580 '__uint_least32_t' sugar
|   `-TypedefType 0x564f7fe20550 '__uint_least32_t' sugar
|     |-Typedef 0x564f7fdbf410 '__uint_least32_t'
|     `-ElaboratedType 0x564f7fdbf3d0 '__uint32_t' sugar
|       `-TypedefType 0x564f7fdbf3a0 '__uint32_t' sugar
|         |-Typedef 0x564f7fdb9510 '__uint32_t'
|         `-BuiltinType 0x564f7fd185f0 'unsigned int'
|-TypedefDecl 0x564f7fe20690 <line:34:1, col:26> col:26 uint_least64_t '__uint_least64_t':'unsigned long'
| `-ElaboratedType 0x564f7fe20650 '__uint_least64_t' sugar
|   `-TypedefType 0x564f7fe20620 '__uint_least64_t' sugar
|     |-Typedef 0x564f7fdbf5b0 '__uint_least64_t'
|     `-ElaboratedType 0x564f7fdbf570 '__uint64_t' sugar
|       `-TypedefType 0x564f7fdbf540 '__uint64_t' sugar
|         |-Typedef 0x564f7fdb95f0 '__uint64_t'
|         `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe20700 </usr/include/stdint.h:47:1, col:22> col:22 int_fast8_t 'signed char'
| `-BuiltinType 0x564f7fd18510 'signed char'
|-TypedefDecl 0x564f7fe20770 <line:49:1, col:19> col:19 int_fast16_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe207e0 <line:50:1, col:19> col:19 int_fast32_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe20850 <line:51:1, col:19> col:19 int_fast64_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe208c0 <line:60:1, col:24> col:24 uint_fast8_t 'unsigned char'
| `-BuiltinType 0x564f7fd185b0 'unsigned char'
|-TypedefDecl 0x564f7fe20930 <line:62:1, col:27> col:27 uint_fast16_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe209a0 <line:63:1, col:27> col:27 uint_fast32_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe20a10 <line:64:1, col:27> col:27 uint_fast64_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe20a80 <line:76:1, col:19> col:19 intptr_t 'long'
| `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe79070 <line:79:1, col:27> col:27 uintptr_t 'unsigned long'
| `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe79140 <line:90:1, col:21> col:21 intmax_t '__intmax_t':'long'
| `-ElaboratedType 0x564f7fe79100 '__intmax_t' sugar
|   `-TypedefType 0x564f7fe790d0 '__intmax_t' sugar
|     |-Typedef 0x564f7fdbf700 '__intmax_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe79210 <line:91:1, col:22> col:22 uintmax_t '__uintmax_t':'unsigned long'
| `-ElaboratedType 0x564f7fe791d0 '__uintmax_t' sugar
|   `-TypedefType 0x564f7fe791a0 '__uintmax_t' sugar
|     |-Typedef 0x564f7fdbf770 '__uintmax_t'
|     `-BuiltinType 0x564f7fd18610 'unsigned long'
|-FunctionDecl 0x564f7fe79550 </usr/include/assert.h:67:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:67:13 __assert_fail 'void (const char *, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x564f7fe79280 <col:28, col:40> col:40 __assertion 'const char *'
| |-ParmVarDecl 0x564f7fe79300 <col:53, col:65> col:65 __file 'const char *'
| |-ParmVarDecl 0x564f7fe79380 <line:68:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x564f7fe79400 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x564f7fe79618 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x564f7fe79670 <line:102:34>
|-FunctionDecl 0x564f7fe79980 </usr/include/assert.h:72:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:72:13 __assert_perror_fail 'void (int, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x564f7fe796b0 <col:35, col:39> col:39 __errnum 'int'
| |-ParmVarDecl 0x564f7fe79730 <col:49, col:61> col:61 __file 'const char *'
| |-ParmVarDecl 0x564f7fe797b0 <line:73:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x564f7fe79830 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x564f7fe79a48 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x564f7fe79aa0 <line:102:34>
|-FunctionDecl 0x564f7fe79d20 </usr/include/assert.h:79:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:79:13 __assert 'void (const char *, const char *, int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x564f7fe79ae0 <col:23, col:35> col:35 __assertion 'const char *'
| |-ParmVarDecl 0x564f7fe79b60 <col:48, col:60> col:60 __file 'const char *'
| |-ParmVarDecl 0x564f7fe79be0 <col:68, col:72> col:72 __line 'int'
| |-NoThrowAttr 0x564f7fe79de0 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x564f7fe79e38 <line:102:34>
|-TypedefDecl 0x564f7fe79ed0 </usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h:12:1, col:27> col:27 referenced __gnuc_va_list '__builtin_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x564f7fe79e90 '__builtin_va_list' sugar
|   `-TypedefType 0x564f7fe79e60 '__builtin_va_list' sugar
|     |-Typedef 0x564f7fd18fb0 '__builtin_va_list'
|     `-ConstantArrayType 0x564f7fd18f60 'struct __va_list_tag[1]' 1 
|       `-RecordType 0x564f7fd18da0 'struct __va_list_tag'
|         `-Record 0x564f7fd18d20 '__va_list_tag'
|-RecordDecl 0x564f7fe79f28 </usr/include/bits/types/__mbstate_t.h:13:9, line:21:1> line:13:9 struct definition
| |-FieldDecl 0x564f7fe79fe8 <line:15:3, col:7> col:7 __count 'int'
| |-RecordDecl 0x564f7fe86550 <line:16:3, line:20:3> line:16:3 union definition
| | |-FieldDecl 0x564f7fe86608 <<built-in>:115:23, /usr/include/bits/types/__mbstate_t.h:18:19> col:19 __wch 'unsigned int'
| | `-FieldDecl 0x564f7fe866f0 <line:19:5, col:18> col:10 __wchb 'char[4]'
| `-FieldDecl 0x564f7fe86798 <line:16:3, line:20:5> col:5 __value 'union (unnamed union at /usr/include/bits/types/__mbstate_t.h:16:3)':'union __mbstate_t::(unnamed at /usr/include/bits/types/__mbstate_t.h:16:3)'
|-TypedefDecl 0x564f7fe86848 <line:13:1, line:21:3> col:3 referenced __mbstate_t 'struct __mbstate_t':'__mbstate_t'
| `-ElaboratedType 0x564f7fe867f0 'struct __mbstate_t' sugar
|   `-RecordType 0x564f7fe79fb0 '__mbstate_t'
|     `-Record 0x564f7fe79f28 <line:13:9, line:21:1>
|-RecordDecl 0x564f7fe868b8 </usr/include/bits/types/__fpos_t.h:10:9, line:14:1> line:10:16 struct _G_fpos_t definition
| |-FieldDecl 0x564f7fe869d0 <line:12:3, col:11> col:11 __pos '__off_t':'long'
| `-FieldDecl 0x564f7fe86a90 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x564f7fe86b38 <line:10:1, line:14:3> col:3 referenced __fpos_t 'struct _G_fpos_t'
| `-ElaboratedType 0x564f7fe86ae0 'struct _G_fpos_t' sugar
|   `-RecordType 0x564f7fe86940 'struct _G_fpos_t'
|     `-Record 0x564f7fe868b8 '_G_fpos_t'
|-RecordDecl 0x564f7fe86ba8 </usr/include/bits/types/__fpos64_t.h:10:9, line:14:1> line:10:16 struct _G_fpos64_t definition
| |-FieldDecl 0x564f7fe86c60 <line:12:3, col:13> col:13 __pos '__off64_t':'long'
| `-FieldDecl 0x564f7fe86cc0 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x564f7fe86d68 <line:10:1, line:14:3> col:3 __fpos64_t 'struct _G_fpos64_t'
| `-ElaboratedType 0x564f7fe86d10 'struct _G_fpos64_t' sugar
|   `-RecordType 0x564f7fe86c30 'struct _G_fpos64_t'
|     `-Record 0x564f7fe86ba8 '_G_fpos64_t'
|-RecordDecl 0x564f7fe86dd8 </usr/include/bits/types/__FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x564f7fe86ed0 <line:5:1, col:25> col:25 __FILE 'struct _IO_FILE'
| `-ElaboratedType 0x564f7fe86e80 'struct _IO_FILE' sugar
|   `-RecordType 0x564f7fe86e60 'struct _IO_FILE'
|     `-Record 0x564f7fe872e8 '_IO_FILE'
|-RecordDecl 0x564f7fe86f28 prev 0x564f7fe86dd8 </usr/include/bits/types/FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x564f7fe86fc8 <line:7:1, col:25> col:25 referenced FILE 'struct _IO_FILE'
| `-ElaboratedType 0x564f7fe86e80 'struct _IO_FILE' sugar
|   `-RecordType 0x564f7fe86e60 'struct _IO_FILE'
|     `-Record 0x564f7fe872e8 '_IO_FILE'
|-RecordDecl 0x564f7fe87020 prev 0x564f7fe86f28 </usr/include/bits/types/struct_FILE.h:37:1, col:8> col:8 struct _IO_FILE
|-RecordDecl 0x564f7fe870a0 <line:38:1, col:8> col:8 struct _IO_marker
|-RecordDecl 0x564f7fe87140 <line:39:1, col:8> col:8 struct _IO_codecvt
|-RecordDecl 0x564f7fe871e0 <line:40:1, col:8> col:8 struct _IO_wide_data
|-TypedefDecl 0x564f7fe87290 <line:45:1, col:14> col:14 referenced _IO_lock_t 'void'
| `-BuiltinType 0x564f7fd184b0 'void'
|-RecordDecl 0x564f7fe872e8 prev 0x564f7fe87020 <line:51:1, line:110:1> line:51:8 struct _IO_FILE definition
| |-FieldDecl 0x564f7fe87380 <line:53:3, col:7> col:7 _flags 'int'
| |-FieldDecl 0x564f7fe873e8 <line:56:3, col:9> col:9 _IO_read_ptr 'char *'
| |-FieldDecl 0x564f7fe87450 <line:57:3, col:9> col:9 _IO_read_end 'char *'
| |-FieldDecl 0x564f7fe874b8 <line:58:3, col:9> col:9 _IO_read_base 'char *'
| |-FieldDecl 0x564f7fe8b700 <line:59:3, col:9> col:9 _IO_write_base 'char *'
| |-FieldDecl 0x564f7fe8b768 <line:60:3, col:9> col:9 _IO_write_ptr 'char *'
| |-FieldDecl 0x564f7fe8b7d0 <line:61:3, col:9> col:9 _IO_write_end 'char *'
| |-FieldDecl 0x564f7fe8b838 <line:62:3, col:9> col:9 _IO_buf_base 'char *'
| |-FieldDecl 0x564f7fe8b8a0 <line:63:3, col:9> col:9 _IO_buf_end 'char *'
| |-FieldDecl 0x564f7fe8b908 <line:66:3, col:9> col:9 _IO_save_base 'char *'
| |-FieldDecl 0x564f7fe8b970 <line:67:3, col:9> col:9 _IO_backup_base 'char *'
| |-FieldDecl 0x564f7fe8b9d8 <line:68:3, col:9> col:9 _IO_save_end 'char *'
| |-FieldDecl 0x564f7fe8bae8 <line:70:3, col:22> col:22 _markers 'struct _IO_marker *'
| |-FieldDecl 0x564f7fe8bbc8 <line:72:3, col:20> col:20 _chain 'struct _IO_FILE *'
| |-FieldDecl 0x564f7fe8bc30 <line:74:3, col:7> col:7 _fileno 'int'
| |-FieldDecl 0x564f7fe8bcd8 <line:75:3, col:15> col:7 _flags2 'int'
| | `-ConstantExpr 0x564f7fe8bcb8 <col:15> 'int'
| |   |-value: Int 24
| |   `-IntegerLiteral 0x564f7fe8bc80 <col:15> 'int' 24
| |-FieldDecl 0x564f7fe8bd88 <line:77:3, col:26> col:8 _short_backupbuf 'char[1]'
| |-FieldDecl 0x564f7fe8bde8 <line:78:3, col:11> col:11 _old_offset '__off_t':'long'
| |-FieldDecl 0x564f7fe8be50 <line:81:3, col:18> col:18 _cur_column 'unsigned short'
| |-FieldDecl 0x564f7fe8beb8 <line:82:3, col:15> col:15 _vtable_offset 'signed char'
| |-FieldDecl 0x564f7fe8bf68 <line:83:3, col:19> col:8 _shortbuf 'char[1]'
| |-FieldDecl 0x564f7fe8c068 <line:85:3, col:15> col:15 _lock '_IO_lock_t *'
| |-FieldDecl 0x564f7fe8c0c8 <line:93:3, col:13> col:13 _offset '__off64_t':'long'
| |-FieldDecl 0x564f7fe8c1d8 <line:95:3, col:23> col:23 _codecvt 'struct _IO_codecvt *'
| |-FieldDecl 0x564f7fe8c2e8 <line:96:3, col:25> col:25 _wide_data 'struct _IO_wide_data *'
| |-FieldDecl 0x564f7fe8c360 <line:97:3, col:20> col:20 _freeres_list 'struct _IO_FILE *'
| |-FieldDecl 0x564f7fe8c3c8 <line:98:3, col:9> col:9 _freeres_buf 'void *'
| |-FieldDecl 0x564f7fe8c4a8 <line:99:3, col:21> col:21 _prevchain 'struct _IO_FILE **'
| |-FieldDecl 0x564f7fe8c510 <line:100:3, col:7> col:7 _mode 'int'
| |-FieldDecl 0x564f7fe8c578 <line:102:3, col:7> col:7 _unused3 'int'
| |-FieldDecl 0x564f7fe8c5d8 <line:104:3, col:14> col:14 _total_written '__uint64_t':'unsigned long'
| `-FieldDecl 0x564f7fe8e820 <line:109:3, col:56> col:8 _unused2 'char[8]'
|-TypedefDecl 0x564f7fe8eb20 </usr/include/bits/types/cookie_io_functions_t.h:27:1, line:28:58> line:27:19 referenced cookie_read_function_t '__ssize_t (void *, char *, size_t)'
| `-FunctionProtoType 0x564f7fe8eaa0 '__ssize_t (void *, char *, size_t)' cdecl
|   |-ElaboratedType 0x564f7fe8e8a0 '__ssize_t' sugar
|   | `-TypedefType 0x564f7fe8e870 '__ssize_t' sugar
|   |   |-Typedef 0x564f7fdc7020 '__ssize_t'
|   |   `-BuiltinType 0x564f7fd18570 'long'
|   |-PointerType 0x564f7fd18bf0 'void *'
|   | `-BuiltinType 0x564f7fd184b0 'void'
|   |-PointerType 0x564f7fd18c80 'char *'
|   | `-BuiltinType 0x564f7fd184f0 'char'
|   `-ElaboratedType 0x564f7fd81d50 'size_t' sugar
|     `-TypedefType 0x564f7fd81d20 'size_t' sugar
|       |-Typedef 0x564f7fd81b98 'size_t'
|       `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe8edc0 <line:36:1, line:37:59> line:36:19 referenced cookie_write_function_t '__ssize_t (void *, const char *, size_t)'
| `-FunctionProtoType 0x564f7fe8ed40 '__ssize_t (void *, const char *, size_t)' cdecl
|   |-ElaboratedType 0x564f7fe8e8a0 '__ssize_t' sugar
|   | `-TypedefType 0x564f7fe8e870 '__ssize_t' sugar
|   |   |-Typedef 0x564f7fdc7020 '__ssize_t'
|   |   `-BuiltinType 0x564f7fd18570 'long'
|   |-PointerType 0x564f7fd18bf0 'void *'
|   | `-BuiltinType 0x564f7fd184b0 'void'
|   |-PointerType 0x564f7fd19220 'const char *'
|   | `-QualType 0x564f7fd184f1 'const char' const
|   |   `-BuiltinType 0x564f7fd184f0 'char'
|   `-ElaboratedType 0x564f7fd81d50 'size_t' sugar
|     `-TypedefType 0x564f7fd81d20 'size_t' sugar
|       |-Typedef 0x564f7fd81b98 'size_t'
|       `-BuiltinType 0x564f7fd18610 'unsigned long'
|-TypedefDecl 0x564f7fe8f0d8 <line:45:1, col:78> col:13 referenced cookie_seek_function_t 'int (void *, __off64_t *, int)'
| `-FunctionProtoType 0x564f7fe8f050 'int (void *, __off64_t *, int)' cdecl
|   |-BuiltinType 0x564f7fd18550 'int'
|   |-PointerType 0x564f7fd18bf0 'void *'
|   | `-BuiltinType 0x564f7fd184b0 'void'
|   |-PointerType 0x564f7fe8eed0 '__off64_t *'
|   | `-ElaboratedType 0x564f7fdc7190 '__off64_t' sugar
|   |   `-TypedefType 0x564f7fdc7160 '__off64_t' sugar
|   |     |-Typedef 0x564f7fdbfb60 '__off64_t'
|   |     `-BuiltinType 0x564f7fd18570 'long'
|   `-BuiltinType 0x564f7fd18550 'int'
|-TypedefDecl 0x564f7fe8f218 <line:48:1, col:52> col:13 referenced cookie_close_function_t 'int (void *)'
| `-FunctionProtoType 0x564f7fe8f1b0 'int (void *)' cdecl
|   |-BuiltinType 0x564f7fd18550 'int'
|   `-PointerType 0x564f7fd18bf0 'void *'
|     `-BuiltinType 0x564f7fd184b0 'void'
|-RecordDecl 0x564f7fe8f270 <line:55:9, line:61:1> line:55:16 struct _IO_cookie_io_functions_t definition
| |-FieldDecl 0x564f7fe8f3e8 <line:57:3, col:27> col:27 read 'cookie_read_function_t *'
| |-FieldDecl 0x564f7fe8f518 <line:58:3, col:28> col:28 write 'cookie_write_function_t *'
| |-FieldDecl 0x564f7fe8f648 <line:59:3, col:27> col:27 seek 'cookie_seek_function_t *'
| `-FieldDecl 0x564f7fe912a8 <line:60:3, col:28> col:28 close 'cookie_close_function_t *'
|-TypedefDecl 0x564f7fe91358 <line:55:1, line:61:3> col:3 referenced cookie_io_functions_t 'struct _IO_cookie_io_functions_t'
| `-ElaboratedType 0x564f7fe91300 'struct _IO_cookie_io_functions_t' sugar
|   `-RecordType 0x564f7fe8f2f0 'struct _IO_cookie_io_functions_t'
|     `-Record 0x564f7fe8f270 '_IO_cookie_io_functions_t'
|-TypedefDecl 0x564f7fe91440 </usr/include/stdio.h:53:1, col:24> col:24 va_list '__gnuc_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x564f7fe91400 '__gnuc_va_list' sugar
|   `-TypedefType 0x564f7fe913d0 '__gnuc_va_list' sugar
|     |-Typedef 0x564f7fe79ed0 '__gnuc_va_list'
|     `-ElaboratedType 0x564f7fe79e90 '__builtin_va_list' sugar
|       `-TypedefType 0x564f7fe79e60 '__builtin_va_list' sugar
|         |-Typedef 0x564f7fd18fb0 '__builtin_va_list'
|         `-ConstantArrayType 0x564f7fd18f60 'struct __va_list_tag[1]' 1 
|           `-RecordType 0x564f7fd18da0 'struct __va_list_tag'
|             `-Record 0x564f7fd18d20 '__va_list_tag'
|-TypedefDecl 0x564f7fe914a8 <line:64:1, col:17> col:17 off_t '__off_t':'long'
| `-ElaboratedType 0x564f7fe86990 '__off_t' sugar
|   `-TypedefType 0x564f7fe86960 '__off_t' sugar
|     |-Typedef 0x564f7fdbfaf0 '__off_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe91510 <line:78:1, col:19> col:19 ssize_t '__ssize_t':'long'
| `-ElaboratedType 0x564f7fe8e8a0 '__ssize_t' sugar
|   `-TypedefType 0x564f7fe8e870 '__ssize_t' sugar
|     |-Typedef 0x564f7fdc7020 '__ssize_t'
|     `-BuiltinType 0x564f7fd18570 'long'
|-TypedefDecl 0x564f7fe915e0 <line:85:1, col:18> col:18 referenced fpos_t '__fpos_t':'struct _G_fpos_t'
| `-ElaboratedType 0x564f7fe915a0 '__fpos_t' sugar
|   `-TypedefType 0x564f7fe91570 '__fpos_t' sugar
|     |-Typedef 0x564f7fe86b38 '__fpos_t'
|     `-ElaboratedType 0x564f7fe86ae0 'struct _G_fpos_t' sugar
|       `-RecordType 0x564f7fe86940 'struct _G_fpos_t'
|         `-Record 0x564f7fe868b8 '_G_fpos_t'
|-VarDecl 0x564f7fe916e8 <line:149:1, col:14> col:14 stdin 'FILE *' extern
|-VarDecl 0x564f7fe91768 <line:150:1, col:14> col:14 stdout 'FILE *' extern
|-VarDecl 0x564f7fe917e8 <line:151:1, col:14> col:14 stderr 'FILE *' extern
|-FunctionDecl 0x564f7fe91938 <line:158:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:158:12 remove 'int (const char *)' extern
| |-ParmVarDecl 0x564f7fe91868 <col:20, col:32> col:32 __filename 'const char *'
| `-NoThrowAttr 0x564f7fe919e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe91b78 </usr/include/stdio.h:160:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:160:12 rename 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fe91a58 <col:20, col:32> col:32 __old 'const char *'
| |-ParmVarDecl 0x564f7fe91ad8 <col:39, col:51> col:51 __new 'const char *'
| `-NoThrowAttr 0x564f7fe91c30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe91f28 </usr/include/stdio.h:164:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:164:12 renameat 'int (int, const char *, int, const char *)' extern
| |-ParmVarDecl 0x564f7fe91ca0 <col:22, col:26> col:26 __oldfd 'int'
| |-ParmVarDecl 0x564f7fe91d20 <col:35, col:47> col:47 __old 'const char *'
| |-ParmVarDecl 0x564f7fe91da0 <col:54, col:58> col:58 __newfd 'int'
| |-ParmVarDecl 0x564f7fe91e20 <line:165:8, col:20> col:20 __new 'const char *'
| `-NoThrowAttr 0x564f7fe91ff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe92198 </usr/include/stdio.h:187:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:187:12 fclose 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe92060 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe93280 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:187:49> 1
|-FunctionDecl 0x564f7fe933f8 <line:197:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:197:14 tmpfile 'FILE *(void)' extern
| `-RestrictAttr 0x564f7fe934a0 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe936e8 </usr/include/stdio.h:214:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:214:14 tmpnam 'char *(char *)' extern
| |-ParmVarDecl 0x564f7fe935d0 <col:22, col:35> col:26 'char *'
| `-NoThrowAttr 0x564f7fe93798 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe938e8 </usr/include/stdio.h:219:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:219:14 tmpnam_r 'char *(char *)' extern
| |-ParmVarDecl 0x564f7fe93850 <col:24, col:41> col:29 __s 'char *'
| `-NoThrowAttr 0x564f7fe93998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe93b28 </usr/include/stdio.h:231:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:231:14 tempnam 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fe93a08 <col:23, col:35> col:35 __dir 'const char *'
| |-ParmVarDecl 0x564f7fe93a88 <col:42, col:54> col:54 __pfx 'const char *'
| |-NoThrowAttr 0x564f7fe93be0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x564f7fe93c38 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe93d20 </usr/include/stdio.h:239:1, col:34> col:12 fflush 'int (FILE *)' extern
| `-ParmVarDecl 0x564f7fe93c88 <col:20, col:26> col:26 __stream 'FILE *'
|-FunctionDecl 0x564f7fe93e80 <line:248:1, col:43> col:12 fflush_unlocked 'int (FILE *)' extern
| `-ParmVarDecl 0x564f7fe93de8 <col:29, col:35> col:35 __stream 'FILE *'
|-FunctionDecl 0x564f7fe94160 <line:267:14> col:14 implicit fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fe94290 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x564f7fe942f8 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x564f7fe94208 <<invalid sloc>> Implicit 636
|-FunctionDecl 0x564f7fe94370 prev 0x564f7fe94160 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:267:14 fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7fe93f48 <col:21, col:44> col:44 __filename 'const char *restrict'
| |-ParmVarDecl 0x564f7fe93fc8 <line:268:7, col:30> col:30 __modes 'const char *restrict'
| |-BuiltinAttr 0x564f7fe94490 <<invalid sloc>> Inherited Implicit 636
| `-RestrictAttr 0x564f7fe94428 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe94738 </usr/include/stdio.h:274:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:274:14 freopen 'FILE *(const char *restrict, const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fe944d8 <col:23, col:46> col:46 __filename 'const char *restrict'
| |-ParmVarDecl 0x564f7fe94558 <line:275:9, col:32> col:32 __modes 'const char *restrict'
| |-ParmVarDecl 0x564f7fe945d8 <line:276:9, col:26> col:26 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fe947f8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:276:55> 3
|-FunctionDecl 0x564f7fe94a28 <line:302:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:302:14 fdopen 'FILE *(int, const char *)' extern
| |-ParmVarDecl 0x564f7fe94880 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x564f7fe94900 <col:32, col:44> col:44 __modes 'const char *'
| |-NoThrowAttr 0x564f7fe94ae0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x564f7fe94b38 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe94e28 </usr/include/stdio.h:309:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:309:14 fopencookie 'FILE *(void *restrict, const char *restrict, cookie_io_functions_t)' extern
| |-ParmVarDecl 0x564f7fe94b88 <col:27, col:44> col:44 __magic_cookie 'void *restrict'
| |-ParmVarDecl 0x564f7fe94c08 <line:310:6, col:29> col:29 __modes 'const char *restrict'
| |-ParmVarDecl 0x564f7fe94ce0 <line:311:6, col:28> col:28 __io_funcs 'cookie_io_functions_t':'struct _IO_cookie_io_functions_t'
| |-NoThrowAttr 0x564f7fe94ee8 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x564f7fe94f40 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe951c8 </usr/include/stdio.h:317:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:317:14 fmemopen 'FILE *(void *, size_t, const char *)' extern
| |-ParmVarDecl 0x564f7fe94f90 <col:24, col:30> col:30 __s 'void *'
| |-ParmVarDecl 0x564f7fe95008 <col:35, col:42> col:42 __len 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe95088 <col:49, col:61> col:61 __modes 'const char *'
| |-NoThrowAttr 0x564f7fe952a0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x564f7fe952f8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe95548 </usr/include/stdio.h:323:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:323:14 open_memstream 'FILE *(char **, size_t *)' extern
| |-ParmVarDecl 0x564f7fe95348 <col:30, col:37> col:37 __bufloc 'char **'
| |-ParmVarDecl 0x564f7fe95428 <col:47, col:55> col:55 __sizeloc 'size_t *'
| |-NoThrowAttr 0x564f7fe95600 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x564f7fe95658 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7fe95860 </usr/include/stdio.h:337:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:337:13 setbuf 'void (FILE *restrict, char *restrict)' extern
| |-ParmVarDecl 0x564f7fe956a8 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe95728 <col:48, col:65> col:65 __buf 'char *restrict'
| |-NoThrowAttr 0x564f7fe95918 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe95970 <line:555:57, /usr/include/stdio.h:338:16> 1
|-FunctionDecl 0x564f7fe95cb8 <line:342:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:342:12 setvbuf 'int (FILE *restrict, char *restrict, int, size_t)' extern
| |-ParmVarDecl 0x564f7fe959d0 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe95a50 <col:48, col:65> col:65 __buf 'char *restrict'
| |-ParmVarDecl 0x564f7fe95ad0 <line:343:7, col:11> col:11 __modes 'int'
| |-ParmVarDecl 0x564f7fe95b48 <col:20, col:27> col:27 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fe95d80 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe95dd8 <line:555:57, /usr/include/stdio.h:343:53> 1
|-FunctionDecl 0x564f7fe96080 <line:348:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:348:13 setbuffer 'void (FILE *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x564f7fe95e30 <col:24, col:41> col:41 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe95eb0 <col:51, col:68> col:68 __buf 'char *restrict'
| |-ParmVarDecl 0x564f7fe95f28 <line:349:10, col:17> col:17 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x564f7fe96140 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe96198 <line:555:57, /usr/include/stdio.h:349:46> 1
|-FunctionDecl 0x564f7fe96350 <line:352:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:352:13 setlinebuf 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7fe961f0 <col:25, col:31> col:31 __stream 'FILE *'
| |-NoThrowAttr 0x564f7fe96400 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7fe96458 <line:555:57, /usr/include/stdio.h:352:62> 1
|-FunctionDecl 0x564f7fe966d8 <line:360:12> col:12 implicit fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe967e0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe96848 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe96780 <<invalid sloc>> Implicit 557
| |-FormatAttr 0x564f7fe968c0 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x564f7fe968f8 <col:12> Implicit
|-FunctionDecl 0x564f7fe96920 prev 0x564f7fe966d8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:360:12 fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe964b0 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe96530 <line:361:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe96a48 <<invalid sloc>> Inherited Implicit 557
| |-FormatAttr 0x564f7fe96a78 <line:360:12> Inherited printf 2 3
| |-NoThrowAttr 0x564f7fe96ab0 <col:12> Inherited Implicit
| `-NonNullAttr 0x564f7fe969d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:361:58> 1
|-FunctionDecl 0x564f7fe96c10 <line:366:12> col:12 implicit used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x564f7fe96d18 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x564f7fe96cb8 <<invalid sloc>> Implicit 1057
| `-FormatAttr 0x564f7fe96d88 <col:12> Implicit printf 1 2
|-FunctionDecl 0x564f7fe96dc0 prev 0x564f7fe96c10 <col:1, col:56> col:12 used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x564f7fe96af0 <col:20, col:43> col:43 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe96ea0 <<invalid sloc>> Inherited Implicit 1057
| `-FormatAttr 0x564f7fe96ed0 <col:12> Inherited printf 1 2
|-FunctionDecl 0x564f7fe970e0 <line:368:12> col:12 implicit sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe971e8 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x564f7fe972c0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe97188 <<invalid sloc>> Implicit 1141
| |-FormatAttr 0x564f7fe97338 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x564f7fe97370 <col:12> Implicit
|-FunctionDecl 0x564f7fe97398 prev 0x564f7fe970e0 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:368:12 sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe96f20 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fe96fa0 <line:369:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe974a8 <<invalid sloc>> Inherited Implicit 1141
| |-FormatAttr 0x564f7fe974d8 <line:368:12> Inherited printf 2 3
| `-NoThrowAttr 0x564f7fe97450 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x564f7fe97838 </usr/include/stdio.h:375:12> col:12 implicit vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe97940 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe979a8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe97a10 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe978e0 <<invalid sloc>> Implicit 1469
| |-FormatAttr 0x564f7fe97a90 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x564f7fe97ac8 <col:12> Implicit
|-FunctionDecl 0x564f7fe97af0 prev 0x564f7fe97838 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:375:12 vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe97528 <col:22, col:39> col:39 __s 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe975a8 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe97680 <line:376:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe97c28 <<invalid sloc>> Inherited Implicit 1469
| |-FormatAttr 0x564f7fe97c58 <line:375:12> Inherited printf 2 0
| |-NoThrowAttr 0x564f7fe97c90 <col:12> Inherited Implicit
| `-NonNullAttr 0x564f7fe97bb0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:376:43> 1
|-FunctionDecl 0x564f7fe97eb0 <line:381:12> col:12 implicit vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe97fb8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe98020 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe97f58 <<invalid sloc>> Implicit 1454
| |-FormatAttr 0x564f7fe98098 <col:12> Implicit printf 1 0
| `-NoThrowAttr 0x564f7fe980d0 <col:12> Implicit
|-FunctionDecl 0x564f7fe980f8 prev 0x564f7fe97eb0 <col:1, col:74> col:12 vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe97cd0 <col:21, col:44> col:44 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe97d48 <col:54, col:69> col:69 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe981e0 <<invalid sloc>> Inherited Implicit 1454
| |-FormatAttr 0x564f7fe98210 <col:12> Inherited printf 1 0
| `-NoThrowAttr 0x564f7fe98248 <col:12> Inherited Implicit
|-FunctionDecl 0x564f7fe98558 <line:383:12> col:12 implicit vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe98660 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x564f7fe986c8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe98730 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe98600 <<invalid sloc>> Implicit 1471
| |-FormatAttr 0x564f7fe987b0 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x564f7fe987e8 <col:12> Implicit
|-FunctionDecl 0x564f7fe98810 prev 0x564f7fe98558 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:383:12 vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe982d0 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fe98350 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe983c8 <line:384:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe98928 <<invalid sloc>> Inherited Implicit 1471
| |-FormatAttr 0x564f7fe98958 <line:383:12> Inherited printf 2 0
| `-NoThrowAttr 0x564f7fe988d0 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x564f7fe98c90 </usr/include/stdio.h:388:12> col:12 implicit snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe98d98 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x564f7fe98e00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe98e68 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe98d38 <<invalid sloc>> Implicit 1209
| |-FormatAttr 0x564f7fe98ee8 <col:12> Implicit printf 3 4
| `-NoThrowAttr 0x564f7fe98f20 <col:12> Implicit
|-FunctionDecl 0x564f7fe98f48 prev 0x564f7fe98c90 <col:1, line:390:62> line:388:12 snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe989a8 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fe98a20 <col:44, col:51> col:51 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe98aa0 <line:389:8, col:31> col:31 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe99098 <<invalid sloc>> Inherited Implicit 1209
| |-NoThrowAttr 0x564f7fe99008 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x564f7fe99060 </usr/include/stdio.h:390:32, col:60> printf 3 4
|-FunctionDecl 0x564f7fe99460 <line:392:12> col:12 implicit vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe99568 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x564f7fe995d0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe99638 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe996a0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe99508 <<invalid sloc>> Implicit 1473
| |-FormatAttr 0x564f7fe99728 <col:12> Implicit printf 3 0
| `-NoThrowAttr 0x564f7fe99760 <col:12> Implicit
|-FunctionDecl 0x564f7fe99788 prev 0x564f7fe99460 <col:1, line:394:62> line:392:12 vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe990e0 <col:23, col:40> col:40 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fe99158 <col:45, col:52> col:52 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe991d8 <line:393:9, col:32> col:32 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe99250 <col:42, col:57> col:57 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe998e0 <<invalid sloc>> Inherited Implicit 1473
| |-NoThrowAttr 0x564f7fe99850 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x564f7fe998a8 </usr/include/stdio.h:394:32, col:60> printf 3 0
|-FunctionDecl 0x564f7fe99bb8 <line:400:1, line:402:62> line:400:12 vasprintf 'int (char **restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe99928 <col:23, col:41> col:41 __ptr 'char **restrict'
| |-ParmVarDecl 0x564f7fe999a8 <col:48, col:71> col:71 __f 'const char *restrict'
| |-ParmVarDecl 0x564f7fe99a20 <line:401:9, col:24> col:24 __arg 'struct __va_list_tag *'
| |-NoThrowAttr 0x564f7fe99c78 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x564f7fe99cd0 </usr/include/stdio.h:402:32, col:60> printf 2 0
|-FunctionDecl 0x564f7fe99f30 <line:403:1, line:405:62> line:403:12 __asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe99d20 <col:24, col:42> col:42 __ptr 'char **restrict'
| |-ParmVarDecl 0x564f7fe99da0 <line:404:10, col:33> col:33 __fmt 'const char *restrict'
| |-NoThrowAttr 0x564f7fe99fe8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x564f7fe9a040 </usr/include/stdio.h:405:32, col:60> printf 2 3
|-FunctionDecl 0x564f7fe9a200 <line:406:1, line:408:62> line:406:12 asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9a090 <col:22, col:40> col:40 __ptr 'char **restrict'
| |-ParmVarDecl 0x564f7fe9a110 <line:407:8, col:31> col:31 __fmt 'const char *restrict'
| |-NoThrowAttr 0x564f7fe9a2b8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x564f7fe9a320 </usr/include/stdio.h:408:32, col:60> printf 2 3
|-FunctionDecl 0x564f7fe9a5f8 <line:413:1, line:415:52> line:413:12 vdprintf 'int (int, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9a370 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x564f7fe9a3f0 <col:32, col:55> col:55 __fmt 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9a468 <line:414:8, col:23> col:23 __arg 'struct __va_list_tag *'
| `-FormatAttr 0x564f7fe9a6b8 <line:415:22, col:50> printf 2 0
|-FunctionDecl 0x564f7fe9a940 <line:416:1, line:417:52> line:416:12 dprintf 'int (int, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9a738 <col:21, col:25> col:25 __fd 'int'
| |-ParmVarDecl 0x564f7fe9a7b8 <col:31, col:54> col:54 __fmt 'const char *restrict'
| `-FormatAttr 0x564f7fe9a9f8 <line:417:22, col:50> printf 2 3
|-FunctionDecl 0x564f7fe9abb8 <line:425:12> col:12 implicit fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9acc0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9ad28 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9ac60 <<invalid sloc>> Implicit 560
| `-FormatAttr 0x564f7fe9ada0 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x564f7fe9add8 prev 0x564f7fe9abb8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:425:12 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9aa78 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9aaf8 <line:426:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9af08 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x564f7fe9af38 <line:425:12> Inherited scanf 2 3
| `-NonNullAttr 0x564f7fe9ae90 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> 1
|-FunctionDecl 0x564f7fe9b020 <line:431:12> col:12 implicit scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9b128 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9b0c8 <<invalid sloc>> Implicit 1162
| `-FormatAttr 0x564f7fe9b198 <col:12> Implicit scanf 1 2
|-FunctionDecl 0x564f7fe9b1d0 prev 0x564f7fe9b020 <col:1, col:55> col:12 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9af88 <col:19, col:42> col:42 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9b2b0 <<invalid sloc>> Inherited Implicit 1162
| `-FormatAttr 0x564f7fe9b300 <col:12> Inherited scanf 1 2
|-FunctionDecl 0x564f7fe9b510 <line:433:12> col:12 implicit sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9b618 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9b680 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9b5b8 <<invalid sloc>> Implicit 1144
| `-FormatAttr 0x564f7fe9b6f8 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x564f7fe9b730 prev 0x564f7fe9b510 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:433:12 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9b350 <col:20, col:43> col:43 __s 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9b3d0 <line:434:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9b840 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x564f7fe9b870 <line:433:12> Inherited scanf 2 3
| `-NoThrowAttr 0x564f7fe9b7e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe9ba68 prev 0x564f7fe9add8 </usr/include/stdio.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:466:24 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9b8c0 <col:33, col:50> col:50 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9b940 <line:467:5, col:28> col:28 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9bbe8 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x564f7fe9bc18 <line:425:12> Inherited scanf 2 3
| |-NonNullAttr 0x564f7fe9bc50 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> Inherited 1
| |-AsmLabelAttr 0x564f7fe9bb10 <<scratch space>:51:1> "__isoc99_fscanf" IsLiteralLabel
| `-NonNullAttr 0x564f7fe9bba0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:468:46> 1
|-FunctionDecl 0x564f7fe9bdb0 prev 0x564f7fe9b1d0 <line:469:1, /usr/include/sys/cdefs.h:410:79> /usr/include/stdio.h:469:24 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9bcb0 <col:32, col:55> col:55 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9bee0 <<invalid sloc>> Inherited Implicit 1162
| |-FormatAttr 0x564f7fe9bf10 <line:431:12> Inherited scanf 1 2
| `-AsmLabelAttr 0x564f7fe9be58 <<scratch space>:53:1> "__isoc99_scanf" IsLiteralLabel
|-FunctionDecl 0x564f7fe9c0b0 prev 0x564f7fe9b730 </usr/include/stdio.h:471:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:471:28 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x564f7fe9bf60 <col:37, col:60> col:60 __s 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9bfe0 <line:472:9, col:32> col:32 __format 'const char *restrict'
| |-BuiltinAttr 0x564f7fe9c210 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x564f7fe9c240 <line:433:12> Inherited scanf 2 3
| |-AsmLabelAttr 0x564f7fe9c158 <<scratch space>:55:1> "__isoc99_sscanf" IsLiteralLabel
| `-NoThrowAttr 0x564f7fe9c1e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7fe9c4b8 </usr/include/stdio.h:493:12> col:12 implicit vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9c5c0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9c628 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9c690 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9c560 <<invalid sloc>> Implicit 1451
| `-FormatAttr 0x564f7fe9c710 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x564f7fe9c748 prev 0x564f7fe9c4b8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:493:12 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9c290 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9c328 <col:43, col:66> col:66 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9c3a0 <line:494:7, col:22> col:22 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9c8b8 <<invalid sloc>> Inherited Implicit 1451
| |-FormatAttr 0x564f7fe9c808 <line:495:22, col:49> scanf 2 0
| `-NonNullAttr 0x564f7fe9c870 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> 1
|-FunctionDecl 0x564f7fe9ca68 <line:501:12> col:12 implicit vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9cb70 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9cbd8 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9cb10 <<invalid sloc>> Implicit 1461
| `-FormatAttr 0x564f7fe9cc50 <col:12> Implicit scanf 1 0
|-FunctionDecl 0x564f7fe9cc88 prev 0x564f7fe9ca68 <col:1, line:502:51> line:501:12 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9c900 <col:20, col:43> col:43 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9c978 <col:53, col:68> col:68 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9cda8 <<invalid sloc>> Inherited Implicit 1461
| `-FormatAttr 0x564f7fe9cd40 <line:502:22, col:49> scanf 1 0
|-FunctionDecl 0x564f7fe9d0c8 <line:505:12> col:12 implicit vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9d1d0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9d238 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9d2a0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9d170 <<invalid sloc>> Implicit 1459
| `-FormatAttr 0x564f7fe9d338 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x564f7fe9d370 prev 0x564f7fe9d0c8 <col:1, line:507:59> line:505:12 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9cdf0 <col:21, col:44> col:44 __s 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9ce70 <line:506:7, col:30> col:30 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9cee8 <col:40, col:55> col:55 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9d4c0 <<invalid sloc>> Inherited Implicit 1459
| |-NoThrowAttr 0x564f7fe9d430 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x564f7fe9d488 </usr/include/stdio.h:507:30, col:57> scanf 2 0
|-FunctionDecl 0x564f7fe9d748 prev 0x564f7fe9c748 <line:543:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:543:24 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9d508 <line:544:11, col:28> col:28 __s 'FILE *restrict'
| |-ParmVarDecl 0x564f7fe9d588 <line:545:4, col:27> col:27 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9d600 <col:37, col:52> col:52 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9d908 <<invalid sloc>> Inherited Implicit 1451
| |-NonNullAttr 0x564f7fe9d938 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> Inherited 1
| |-AsmLabelAttr 0x564f7fe9d7f0 <<scratch space>:59:1> "__isoc99_vfscanf" IsLiteralLabel
| |-FormatAttr 0x564f7fe9d888 </usr/include/stdio.h:547:22, col:49> scanf 2 0
| `-NonNullAttr 0x564f7fe9d8c0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:547:72> 1
|-FunctionDecl 0x564f7fe9db28 prev 0x564f7fe9cc88 <line:548:1, line:550:51> line:548:24 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9d990 <col:33, col:56> col:56 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9da08 <line:549:5, col:20> col:20 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9dc98 <<invalid sloc>> Inherited Implicit 1461
| |-AsmLabelAttr 0x564f7fe9dbd0 <<scratch space>:61:1> "__isoc99_vscanf" IsLiteralLabel
| `-FormatAttr 0x564f7fe9dc60 </usr/include/stdio.h:550:22, col:49> scanf 1 0
|-FunctionDecl 0x564f7fe9df00 prev 0x564f7fe9d370 <line:551:1, line:555:51> line:551:28 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x564f7fe9dce0 <line:552:8, col:31> col:31 __s 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9dd60 <line:553:8, col:31> col:31 __format 'const char *restrict'
| |-ParmVarDecl 0x564f7fe9ddd8 <line:554:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x564f7fe9e0a0 <<invalid sloc>> Inherited Implicit 1459
| |-AsmLabelAttr 0x564f7fe9dfa8 <<scratch space>:63:1> "__isoc99_vsscanf" IsLiteralLabel
| |-NoThrowAttr 0x564f7fe9e040 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x564f7fe9e068 </usr/include/stdio.h:555:22, col:49> scanf 2 0
|-FunctionDecl 0x564f7fe9e1a0 <line:578:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:578:12 fgetc 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe9e0e8 <col:19, col:25> col:25 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9e250 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:578:48> 1
|-FunctionDecl 0x564f7fe9e3e8 <line:579:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:579:12 getc 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe9e330 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9e498 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:579:47> 1
|-FunctionDecl 0x564f7fe9e5d8 <line:585:1, col:25> col:12 getchar 'int (void)' extern
|-FunctionDecl 0x564f7fe9e750 <line:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:592:12 getc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe9e698 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9e800 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:592:56> 1
|-FunctionDecl 0x564f7fe9e918 <line:593:1, col:34> col:12 getchar_unlocked 'int (void)' extern
|-FunctionDecl 0x564f7fe9ea90 <line:603:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:603:12 fgetc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe9e9d8 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9eb40 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:603:57> 1
|-FunctionDecl 0x564f7fe9ed98 <line:611:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:611:12 fputc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe9ebd0 <col:19, col:23> col:23 __c 'int'
| |-ParmVarDecl 0x564f7fe9ec50 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9ee50 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:611:57> 2
|-FunctionDecl 0x564f7fe9f020 <line:612:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:612:12 putc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe9eee0 <col:18, col:22> col:22 __c 'int'
| |-ParmVarDecl 0x564f7fe9ef60 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9f0d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:612:56> 2
|-FunctionDecl 0x564f7fe9f1f8 <line:618:1, col:28> col:12 putchar 'int (int)' extern
| `-ParmVarDecl 0x564f7fe9f160 <col:21, col:25> col:25 __c 'int'
|-FunctionDecl 0x564f7fe9f418 <line:627:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:627:12 fputc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe9f2c0 <col:28, col:32> col:32 __c 'int'
| |-ParmVarDecl 0x564f7fe9f358 <col:37, col:43> col:43 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9f4d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:627:66> 2
|-FunctionDecl 0x564f7fe9f6a0 <line:635:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:635:12 putc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe9f560 <col:27, col:31> col:31 __c 'int'
| |-ParmVarDecl 0x564f7fe9f5e0 <col:36, col:42> col:42 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9f758 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:635:65> 2
|-FunctionDecl 0x564f7fe9f878 <line:636:1, col:37> col:12 putchar_unlocked 'int (int)' extern
| `-ParmVarDecl 0x564f7fe9f7e0 <col:30, col:34> col:34 __c 'int'
|-FunctionDecl 0x564f7fe9f9f8 <line:643:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:643:12 getw 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7fe9f940 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9faa8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:643:47> 1
|-FunctionDecl 0x564f7fe9fc70 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:646:12 putw 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe9fb30 <col:18, col:22> col:22 __w 'int'
| |-ParmVarDecl 0x564f7fe9fbb0 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe9fd28 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:646:56> 2
|-FunctionDecl 0x564f7fea0018 <line:654:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:654:14 fgets 'char *(char *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fe9fdb0 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x564f7fe9fe30 <col:43, col:47> col:47 __n 'int'
| |-ParmVarDecl 0x564f7fe9feb0 <col:52, col:69> col:69 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fea00d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:655:72> 3
|-FunctionDecl 0x564f7fe22cf0 <line:689:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:689:18 __getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fea0160 <col:30, col:48> col:48 __lineptr 'char **restrict'
| |-ParmVarDecl 0x564f7fea01e0 <line:690:30, col:49> col:49 __n 'size_t *restrict'
| |-ParmVarDecl 0x564f7fea0260 <col:54, col:58> col:58 __delimiter 'int'
| |-ParmVarDecl 0x564f7fe22b80 <line:691:30, col:47> col:47 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fe22db8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:691:76> 4
|-FunctionDecl 0x564f7fe23088 <line:692:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:692:18 getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fe22e40 <col:28, col:46> col:46 __lineptr 'char **restrict'
| |-ParmVarDecl 0x564f7fe22ec0 <line:693:28, col:47> col:47 __n 'size_t *restrict'
| |-ParmVarDecl 0x564f7fe22f40 <col:52, col:56> col:56 __delimiter 'int'
| |-ParmVarDecl 0x564f7fe22fc0 <line:694:28, col:45> col:45 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fe23150 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:694:74> 4
|-FunctionDecl 0x564f7fe23440 <line:697:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:697:18 getline '__ssize_t (char **restrict, size_t *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fe231e0 <col:27, col:45> col:45 __lineptr 'char **restrict'
| |-ParmVarDecl 0x564f7fe23260 <line:698:27, col:46> col:46 __n 'size_t *restrict'
| |-ParmVarDecl 0x564f7fe232e0 <line:699:27, col:44> col:44 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fe23500 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:699:73> 3
|-FunctionDecl 0x564f7fe23758 <line:707:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:707:12 fputs 'int (const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fe23590 <col:19, col:42> col:42 __s 'const char *restrict'
| |-ParmVarDecl 0x564f7fe23610 <col:47, col:64> col:64 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fe23810 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:708:16> 2
|-FunctionDecl 0x564f7fe23938 <line:714:1, col:33> col:12 puts 'int (const char *)' extern
| `-ParmVarDecl 0x564f7fe238a0 <col:18, col:30> col:30 __s 'const char *'
|-FunctionDecl 0x564f7fe23b90 <line:721:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:721:12 ungetc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x564f7fe23a00 <col:20, col:24> col:24 __c 'int'
| |-ParmVarDecl 0x564f7fe23a80 <col:29, col:35> col:35 __stream 'FILE *'
| `-NonNullAttr 0x564f7fe23c48 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:721:58> 2
|-FunctionDecl 0x564f7fe24000 <line:728:15> col:15 implicit fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x564f7fe24108 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x564f7fe24170 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe241d8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe24240 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x564f7fe240a8 <<invalid sloc>> Implicit 640
|-FunctionDecl 0x564f7fe242c8 prev 0x564f7fe24000 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:728:15 fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x564f7fe23cd0 <col:22, col:39> col:39 __ptr 'void *restrict'
| |-ParmVarDecl 0x564f7fe23d48 <col:46, col:53> col:53 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe23dc0 <line:729:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe23e40 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-BuiltinAttr 0x564f7fe24408 <<invalid sloc>> Inherited Implicit 640
| `-NonNullAttr 0x564f7fe24390 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:730:15> 4
|-FunctionDecl 0x564f7fe24780 <line:735:15> col:15 implicit fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x564f7fe24888 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x564f7fe248f0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe24958 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x564f7fe249c0 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x564f7fe24828 <<invalid sloc>> Implicit 651
|-FunctionDecl 0x564f7fe24a48 prev 0x564f7fe24780 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:735:15 fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x564f7fe24450 <col:23, col:46> col:46 __ptr 'const void *restrict'
| |-ParmVarDecl 0x564f7fe244c8 <col:53, col:60> col:60 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe24540 <line:736:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fe245c0 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-BuiltinAttr 0x564f7fea8360 <<invalid sloc>> Inherited Implicit 651
| `-NonNullAttr 0x564f7fe24b10 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:736:55> 4
|-FunctionDecl 0x564f7fea85e0 <line:756:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:756:15 fread_unlocked 'size_t (void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fea83a8 <col:31, col:48> col:48 __ptr 'void *restrict'
| |-ParmVarDecl 0x564f7fea8420 <col:55, col:62> col:62 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fea8498 <line:757:10, col:17> col:17 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fea8518 <col:22, col:39> col:39 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fea86a8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:758:16> 4
|-FunctionDecl 0x564f7fea8968 <line:759:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:759:15 fwrite_unlocked 'size_t (const void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x564f7fea8730 <col:32, col:55> col:55 __ptr 'const void *restrict'
| |-ParmVarDecl 0x564f7fea87a8 <col:62, col:69> col:69 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fea8820 <line:760:11, col:18> col:18 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x564f7fea88a0 <col:23, col:40> col:40 __stream 'FILE *restrict'
| `-NonNullAttr 0x564f7fea8a30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:761:16> 4
|-FunctionDecl 0x564f7fea8d28 <line:769:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:769:12 fseek 'int (FILE *, long, int)' extern
| |-ParmVarDecl 0x564f7fea8ac0 <col:19, col:25> col:25 __stream 'FILE *'
| |-ParmVarDecl 0x564f7fea8b40 <col:35, col:44> col:44 __off 'long'
| |-ParmVarDecl 0x564f7fea8bc0 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x564f7fea8de8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:770:16> 1
|-FunctionDecl 0x564f7fea8fa8 <line:775:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:775:17 ftell 'long (FILE *)' extern
| |-ParmVarDecl 0x564f7fea8e70 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x564f7fea9058 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:775:59> 1
|-FunctionDecl 0x564f7fea9190 <line:780:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:780:13 rewind 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7fea90e0 <col:21, col:27> col:27 __stream 'FILE *'
| `-NonNullAttr 0x564f7fea9240 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:780:50> 1
|-FunctionDecl 0x564f7fea9508 <line:793:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:793:12 fseeko 'int (FILE *, __off_t, int)' extern
| |-ParmVarDecl 0x564f7fea92d0 <col:20, col:26> col:26 __stream 'FILE *'
| |-ParmVarDecl 0x564f7fea9370 <col:36, col:44> col:44 __off '__off_t':'long'
| |-ParmVarDecl 0x564f7fea93f0 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x564f7fea95c8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:794:16> 1
|-FunctionDecl 0x564f7fea9740 <line:799:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:799:16 ftello '__off_t (FILE *)' extern
| |-ParmVarDecl 0x564f7fea9650 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x564f7fea97f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:799:59> 1
|-FunctionDecl 0x564f7fea9b08 <line:819:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:819:12 fgetpos 'int (FILE *restrict, fpos_t *restrict)' extern
| |-ParmVarDecl 0x564f7fea9880 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x564f7fea99c8 <col:48, col:67> col:67 __pos 'fpos_t *restrict'
| `-NonNullAttr 0x564f7fea9bc0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:820:16> 1
|-FunctionDecl 0x564f7fea9e78 <line:825:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:825:12 fsetpos 'int (FILE *, const fpos_t *)' extern
| |-ParmVarDecl 0x564f7fea9c50 <col:21, col:27> col:27 __stream 'FILE *'
| |-ParmVarDecl 0x564f7fea9d38 <col:37, col:51> col:51 __pos 'const fpos_t *'
| `-NonNullAttr 0x564f7fea9f30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:825:71> 1
|-FunctionDecl 0x564f7feaa070 <line:850:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:850:13 clearerr 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7fea9fc0 <col:23, col:29> col:29 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaa120 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaa178 <line:555:57, /usr/include/stdio.h:850:60> 1
|-FunctionDecl 0x564f7feaa288 <line:852:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:852:12 feof 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feaa1d0 <col:18, col:24> col:24 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaa338 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaa3b0 <line:555:57, /usr/include/stdio.h:852:61> 1
|-FunctionDecl 0x564f7feaa4c8 <line:854:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:854:12 ferror 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feaa410 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaa578 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaa5d0 <line:555:57, /usr/include/stdio.h:854:63> 1
|-FunctionDecl 0x564f7feaa6e0 <line:858:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:858:13 clearerr_unlocked 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7feaa630 <col:32, col:38> col:38 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaa790 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaa7e8 <line:555:57, /usr/include/stdio.h:858:69> 1
|-FunctionDecl 0x564f7feaa8f8 <line:859:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:859:12 feof_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feaa840 <col:27, col:33> col:33 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaa9a8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaaa00 <line:555:57, /usr/include/stdio.h:859:70> 1
|-FunctionDecl 0x564f7feaab18 <line:860:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:860:12 ferror_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feaaa60 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaabc8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feaac20 <line:555:57, /usr/include/stdio.h:860:72> 1
|-FunctionDecl 0x564f7feaad50 <line:868:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdio.h:868:13 perror 'void (const char *)' extern
| |-ParmVarDecl 0x564f7feaac80 <col:21, col:33> col:33 __s 'const char *'
| `-ColdAttr 0x564f7feaae00 </usr/include/sys/cdefs.h:102:34>
|-FunctionDecl 0x564f7feaaf28 </usr/include/stdio.h:873:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:873:12 fileno 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feaae70 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaafd8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feab030 <line:555:57, /usr/include/stdio.h:873:63> 1
|-FunctionDecl 0x564f7feab148 <line:878:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:878:12 fileno_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feab090 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feab1f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feab250 <line:555:57, /usr/include/stdio.h:878:72> 1
|-FunctionDecl 0x564f7feab390 <line:887:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:887:12 pclose 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feab2b0 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x564f7feab440 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:887:49> 1
|-FunctionDecl 0x564f7feab638 <line:893:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:893:14 popen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x564f7feab4d0 <col:21, col:33> col:33 __command 'const char *'
| |-ParmVarDecl 0x564f7feab550 <col:44, col:56> col:56 __modes 'const char *'
| `-RestrictAttr 0x564f7feab6f0 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x564f7feab808 </usr/include/stdio.h:901:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:901:14 ctermid 'char *(char *)' extern
| |-ParmVarDecl 0x564f7feab770 <col:23, col:29> col:29 __s 'char *'
| `-NoThrowAttr 0x564f7feab8b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x564f7feab9d8 </usr/include/stdio.h:931:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:931:13 flockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7feab928 <col:24, col:30> col:30 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feaba88 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feabae0 <line:555:57, /usr/include/stdio.h:931:61> 1
|-FunctionDecl 0x564f7feabbf8 <line:935:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:935:12 ftrylockfile 'int (FILE *)' extern
| |-ParmVarDecl 0x564f7feabb40 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feabca8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feabd00 <line:555:57, /usr/include/stdio.h:935:69> 1
|-FunctionDecl 0x564f7feabe10 <line:938:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:938:13 funlockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x564f7feabd60 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x564f7feabec0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x564f7feabf18 <line:555:57, /usr/include/stdio.h:938:63> 1
|-FunctionDecl 0x564f7feac008 <line:949:1, col:27> col:12 __uflow 'int (FILE *)' extern
| `-ParmVarDecl 0x564f7feabf70 <col:21, col:26> col:27 'FILE *'
|-FunctionDecl 0x564f7feac278 <line:950:1, col:35> col:12 __overflow 'int (FILE *, int)' extern
| |-ParmVarDecl 0x564f7feac0d0 <col:24, col:29> col:30 'FILE *'
| `-ParmVarDecl 0x564f7feac150 <col:32> col:35 'int'
|-FunctionDecl 0x564f7feac460 </usr/include/platform_generic.h:42:1, line:46:1> line:43:1 used platform_main_begin 'void (void)' static
| `-CompoundStmt 0x564f7feac508 <line:44:1, line:46:1>
|-FunctionDecl 0x564f7feac730 <line:48:1, line:120:1> line:49:1 used platform_main_end 'void (uint32_t, int)' static
| |-ParmVarDecl 0x564f7feac590 <col:19, col:28> col:28 used crc 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7feac610 <col:33, col:37> col:37 flag 'int'
| `-CompoundStmt 0x564f7feac938 <line:50:1, line:120:1>
|   `-CallExpr 0x564f7feac8b8 <line:56:2, col:32> 'int'
|     |-ImplicitCastExpr 0x564f7feac8a0 <col:2> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x564f7feac7e8 <col:2> 'int (const char *, ...)' Function 0x564f7fe96dc0 'printf' 'int (const char *, ...)'
|     |-ImplicitCastExpr 0x564f7feac908 <col:10> 'const char *' <NoOp>
|     | `-ImplicitCastExpr 0x564f7feac8f0 <col:10> 'char *' <ArrayToPointerDecay>
|     |   `-StringLiteral 0x564f7feac808 <col:10> 'char[15]' lvalue "checksum = %X\n"
|     `-ImplicitCastExpr 0x564f7feac920 <col:29> 'uint32_t':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x564f7feac830 <col:29> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7feac590 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7feacb10 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:25:1> <scratch space>:66:1 safe_unary_minus_func_int8_t_s 'int8_t (int8_t)' static
| |-ParmVarDecl 0x564f7feac9c0 </usr/include/safe_math.h:14:38, col:45> col:45 used si 'int8_t':'signed char'
| `-CompoundStmt 0x564f7feacc50 <line:15:1, line:25:1>
|   `-ReturnStmt 0x564f7feacc40 <line:17:3, line:24:6>
|     `-ImplicitCastExpr 0x564f7feacc28 <col:5, col:6> 'int8_t':'signed char' <IntegralCast>
|       `-UnaryOperator 0x564f7feacc10 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x564f7feacbf8 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7feacbe0 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feacbc0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feac9c0 'si' 'int8_t':'signed char'
|-FunctionDecl 0x564f7feace48 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:39:1> <scratch space>:67:1 safe_add_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x564f7feacc78 </usr/include/safe_math.h:28:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feaccf0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x564f7fead008 <line:29:1, line:39:1>
|   `-ReturnStmt 0x564f7feacff8 <line:31:3, line:38:15>
|     `-ImplicitCastExpr 0x564f7feacfe0 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x564f7feacfc0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x564f7feacfa0 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x564f7feacf58 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7feacf40 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7feacf00 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feacc78 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x564f7feacf88 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7feacf70 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x564f7feacf20 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x564f7feaccf0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x564f7fead148 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:53:1> <scratch space>:68:1 safe_sub_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x564f7fead030 </usr/include/safe_math.h:42:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7fead0a8 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x564f7fead308 <line:43:1, line:53:1>
|   `-ReturnStmt 0x564f7fead2f8 <line:45:3, line:52:15>
|     `-ImplicitCastExpr 0x564f7fead2e0 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x564f7fead2c0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x564f7fead2a0 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x564f7fead258 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7fead240 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7fead200 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead030 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x564f7fead288 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7fead270 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x564f7fead220 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead0a8 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x564f7fead460 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:67:1> <scratch space>:69:1 safe_mul_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x564f7fead330 </usr/include/safe_math.h:56:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7fead3c0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x564f7fead600 <line:57:1, line:67:1>
|   `-ReturnStmt 0x564f7fead5f0 <line:59:3, line:66:11>
|     `-ImplicitCastExpr 0x564f7fead5d8 <col:5, col:11> 'int8_t':'signed char' <IntegralCast>
|       `-BinaryOperator 0x564f7fead5b8 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x564f7fead570 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fead558 <col:5> 'int8_t':'signed char' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fead518 <col:5> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead330 'si1' 'int8_t':'signed char'
|         `-ImplicitCastExpr 0x564f7fead5a0 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fead588 <col:11> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fead538 <col:11> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead3c0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x564f7fead740 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:79:1> <scratch space>:70:1 safe_mod_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x564f7fead628 </usr/include/safe_math.h:70:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7fead6a0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x564f7feadcc0 <line:71:1, line:79:1>
|   `-ReturnStmt 0x564f7feadcb0 <line:73:3, line:78:15>
|     `-ImplicitCastExpr 0x564f7feadc98 <line:75:5, line:78:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feadc68 <line:75:5, line:78:15> 'int'
|         |-ParenExpr 0x564f7feadad8 <line:75:5, col:56> 'int'
|         | `-BinaryOperator 0x564f7feadab8 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x564f7fead888 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7fead868 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x564f7fead850 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7fead838 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7fead7f8 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead6a0 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x564f7fead818 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7feada98 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x564f7feada78 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x564f7fead970 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x564f7fead950 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x564f7fead938 </usr/include/safe_math.h:75:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x564f7fead920 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x564f7fead8a8 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead628 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x564f7fead900 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x564f7fead8e8 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x564f7fead8c8 <col:22> 'int' 128
|         |       `-ParenExpr 0x564f7feada58 </usr/include/safe_math.h:75:42, col:54> 'int'
|         |         `-BinaryOperator 0x564f7feada38 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x564f7feada20 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x564f7feada08 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x564f7fead990 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead6a0 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x564f7fead9e8 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x564f7fead9d0 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x564f7fead9b0 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x564f7feadc50 <line:76:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feadc38 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feadb38 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feadb18 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feadaf8 </usr/include/safe_math.h:76:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead628 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feadc18 <line:78:5, col:15> 'int'
|           `-BinaryOperator 0x564f7feadbf8 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x564f7feadbb0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feadb98 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feadb58 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead628 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x564f7feadbe0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7feadbc8 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7feadb78 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x564f7fead6a0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x564f7feade00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:91:1> <scratch space>:71:1 safe_div_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x564f7feadce8 </usr/include/safe_math.h:82:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feadd60 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x564f7feae380 <line:83:1, line:91:1>
|   `-ReturnStmt 0x564f7feae370 <line:85:3, line:90:15>
|     `-ImplicitCastExpr 0x564f7feae358 <line:87:5, line:90:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feae328 <line:87:5, line:90:15> 'int'
|         |-ParenExpr 0x564f7feae198 <line:87:5, col:56> 'int'
|         | `-BinaryOperator 0x564f7feae178 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x564f7feadf48 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7feadf28 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x564f7feadf10 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7feadef8 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7feadeb8 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadd60 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x564f7feaded8 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7feae158 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x564f7feae138 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x564f7feae030 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x564f7feae010 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x564f7feadff8 </usr/include/safe_math.h:87:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x564f7feadfe0 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x564f7feadf68 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadce8 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x564f7feadfc0 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x564f7feadfa8 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x564f7feadf88 <col:22> 'int' 128
|         |       `-ParenExpr 0x564f7feae118 </usr/include/safe_math.h:87:42, col:54> 'int'
|         |         `-BinaryOperator 0x564f7feae0f8 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x564f7feae0e0 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x564f7feae0c8 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x564f7feae050 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadd60 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x564f7feae0a8 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x564f7feae090 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x564f7feae070 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x564f7feae310 <line:88:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feae2f8 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feae1f8 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feae1d8 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feae1b8 </usr/include/safe_math.h:88:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadce8 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feae2d8 <line:90:5, col:15> 'int'
|           `-BinaryOperator 0x564f7feae2b8 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x564f7feae270 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feae258 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feae218 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadce8 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x564f7feae2a0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7feae288 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7feae238 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x564f7feadd60 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x564f7feae598 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:103:1> <scratch space>:72:1 safe_lshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x564f7feae3c0 </usr/include/safe_math.h:94:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feae440 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x564f7feaed28 <line:95:1, line:103:1>
|   `-ReturnStmt 0x564f7feaed18 <line:97:3, line:102:26>
|     `-ImplicitCastExpr 0x564f7feaed00 <line:99:5, line:102:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feaecd0 <line:99:5, line:102:26> 'int'
|         |-ParenExpr 0x564f7feaeaf8 <line:99:5, col:101> 'int'
|         | `-BinaryOperator 0x564f7feaead8 <col:6, col:100> 'int' '||'
|         |   |-BinaryOperator 0x564f7feae910 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x564f7feae7f8 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x564f7feae6e0 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x564f7feae6c0 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x564f7feae6a8 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x564f7feae690 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x564f7feae650 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7feae3c0 'left' 'int8_t':'signed char'
|         |   | | |   `-IntegerLiteral 0x564f7feae670 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x564f7feae7d8 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x564f7feae7b8 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x564f7feae778 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x564f7feae750 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x564f7feae738 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x564f7feae700 <col:27> 'int' lvalue ParmVar 0x564f7feae440 'right' 'int'
|         |   | |     `-IntegerLiteral 0x564f7feae798 <col:36> 'int' 0
|         |   | `-ParenExpr 0x564f7feae8f0 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x564f7feae8d0 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x564f7feae890 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7feae868 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7feae850 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7feae818 <col:49> 'int' lvalue ParmVar 0x564f7feae440 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7feae8b0 <col:59> 'int' 32
|         |   `-ParenExpr 0x564f7feaeab8 <col:66, col:100> 'int'
|         |     `-BinaryOperator 0x564f7feaea98 <col:67, col:99> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7feaea80 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7feaea68 <col:67> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7feae930 <col:67> 'int8_t':'signed char' lvalue ParmVar 0x564f7feae3c0 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x564f7feaea48 <col:74, col:99> 'int'
|         |         `-BinaryOperator 0x564f7feaea28 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:99:98> 'int' '>>'
|         |           |-ParenExpr 0x564f7feae970 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x564f7feae950 <col:21> 'int' 127
|         |           `-ParenExpr 0x564f7feaea08 </usr/include/safe_math.h:99:87, col:98> 'int'
|         |             `-CStyleCastExpr 0x564f7feae9e0 <col:88, col:93> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7feae9c8 <col:93> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7feae990 <col:93> 'int' lvalue ParmVar 0x564f7feae440 'right' 'int'
|         |-ImplicitCastExpr 0x564f7feaecb8 <line:100:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feaeca0 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feaeb58 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feaeb38 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feaeb18 </usr/include/safe_math.h:100:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7feae3c0 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feaec80 <line:102:5, col:26> 'int'
|           `-BinaryOperator 0x564f7feaec60 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7feaec48 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feaec30 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feaeb78 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feae3c0 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x564f7feaec10 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7feaebe8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feaebd0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feaeb98 <col:20> 'int' lvalue ParmVar 0x564f7feae440 'right' 'int'
|-FunctionDecl 0x564f7feaef28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:115:1> <scratch space>:73:1 safe_lshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x564f7feaed50 </usr/include/safe_math.h:106:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feaedd0 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x564f7feb05f0 <line:107:1, line:115:1>
|   `-ReturnStmt 0x564f7feb05e0 <line:109:3, line:114:35>
|     `-ImplicitCastExpr 0x564f7feb05c8 <line:111:5, line:114:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb0598 <line:111:5, line:114:35> 'int'
|         |-ParenExpr 0x564f7feaf388 <line:111:5, col:97> 'int'
|         | `-BinaryOperator 0x564f7feaf368 <col:6, col:96> 'int' '||'
|         |   |-BinaryOperator 0x564f7feaf1a0 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x564f7feaf070 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x564f7feaf050 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x564f7feaf038 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x564f7feaf020 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x564f7feaefe0 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7feaed50 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x564f7feaf000 <col:14> 'int' 0
|         |   | `-ParenExpr 0x564f7feaf180 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x564f7feaf160 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x564f7feaf108 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x564f7feaf0e0 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7feaf0c8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7feaf090 <col:36> 'unsigned int' lvalue ParmVar 0x564f7feaedd0 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x564f7feaf148 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x564f7feaf128 <col:46> 'int' 32
|         |   `-ParenExpr 0x564f7feaf348 <col:53, col:96> 'int'
|         |     `-BinaryOperator 0x564f7feaf328 <col:54, col:95> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7feaf310 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7feaf2f8 <col:54> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7feaf1c0 <col:54> 'int8_t':'signed char' lvalue ParmVar 0x564f7feaed50 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x564f7feaf2d8 <col:61, col:95> 'int'
|         |         `-BinaryOperator 0x564f7feaf2b8 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:111:94> 'int' '>>'
|         |           |-ParenExpr 0x564f7feaf200 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x564f7feaf1e0 <col:21> 'int' 127
|         |           `-ParenExpr 0x564f7feaf298 </usr/include/safe_math.h:111:74, col:94> 'unsigned int'
|         |             `-CStyleCastExpr 0x564f7feaf270 <col:75, col:89> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7feaf258 <col:89> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7feaf220 <col:89> 'unsigned int' lvalue ParmVar 0x564f7feaedd0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x564f7feb0580 <line:112:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb0568 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb0420 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feb0400 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feb03e0 </usr/include/safe_math.h:112:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7feaed50 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feb0548 <line:114:5, col:35> 'int'
|           `-BinaryOperator 0x564f7feb0528 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7feb0510 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb04f8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb0440 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feaed50 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x564f7feb04d8 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7feb04b0 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb0498 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb0460 <col:29> 'unsigned int' lvalue ParmVar 0x564f7feaedd0 'right' 'unsigned int'
|-FunctionDecl 0x564f7feb0738 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:127:1> <scratch space>:74:1 safe_rshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x564f7feb0618 </usr/include/safe_math.h:118:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feb0698 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x564f7feb0d00 <line:119:1, line:127:1>
|   `-ReturnStmt 0x564f7feb0cf0 <line:121:3, line:126:26>
|     `-ImplicitCastExpr 0x564f7feb0cd8 <line:123:5, line:126:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb0ca8 <line:123:5, line:126:26> 'int'
|         |-ParenExpr 0x564f7feb0ad0 <line:123:5, col:62> 'int'
|         | `-BinaryOperator 0x564f7feb0ab0 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x564f7feb0998 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x564f7feb0880 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x564f7feb0860 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x564f7feb0848 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x564f7feb0830 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x564f7feb07f0 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0618 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x564f7feb0810 <col:14> 'int' 0
|         |   | `-ParenExpr 0x564f7feb0978 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x564f7feb0958 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x564f7feb0918 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7feb08f0 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7feb08d8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7feb08a0 <col:27> 'int' lvalue ParmVar 0x564f7feb0698 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7feb0938 <col:36> 'int' 0
|         |   `-ParenExpr 0x564f7feb0a90 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x564f7feb0a70 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x564f7feb0a30 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x564f7feb0a08 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7feb09f0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7feb09b8 <col:49> 'int' lvalue ParmVar 0x564f7feb0698 'right' 'int'
|         |       `-IntegerLiteral 0x564f7feb0a50 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x564f7feb0c90 <line:124:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb0c78 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb0b30 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feb0b10 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feb0af0 </usr/include/safe_math.h:124:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0618 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feb0c58 <line:126:5, col:26> 'int'
|           `-BinaryOperator 0x564f7feb0c38 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7feb0c20 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb0c08 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb0b50 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0618 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x564f7feb0be8 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7feb0bc0 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb0ba8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb0b70 <col:20> 'int' lvalue ParmVar 0x564f7feb0698 'right' 'int'
|-FunctionDecl 0x564f7feb0e48 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:139:1> <scratch space>:75:1 safe_rshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x564f7feb0d28 </usr/include/safe_math.h:130:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x564f7feb0da8 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x564f7feb1310 <line:131:1, line:139:1>
|   `-ReturnStmt 0x564f7feb1300 <line:133:3, line:138:35>
|     `-ImplicitCastExpr 0x564f7feb12e8 <line:135:5, line:138:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb12b8 <line:135:5, line:138:35> 'int'
|         |-ParenExpr 0x564f7feb10e0 <line:135:5, col:49> 'int'
|         | `-BinaryOperator 0x564f7feb10c0 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x564f7feb0f90 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7feb0f70 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x564f7feb0f58 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7feb0f40 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7feb0f00 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0d28 'left' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x564f7feb0f20 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7feb10a0 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x564f7feb1080 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x564f7feb1028 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x564f7feb1000 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7feb0fe8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7feb0fb0 <col:36> 'unsigned int' lvalue ParmVar 0x564f7feb0da8 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x564f7feb1068 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x564f7feb1048 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x564f7feb12a0 <line:136:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb1288 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb1140 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x564f7feb1120 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x564f7feb1100 </usr/include/safe_math.h:136:16> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0d28 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x564f7feb1268 <line:138:5, col:35> 'int'
|           `-BinaryOperator 0x564f7feb1248 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7feb1230 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb1218 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb1160 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x564f7feb0d28 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x564f7feb11f8 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7feb11d0 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb11b8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb1180 <col:29> 'unsigned int' lvalue ParmVar 0x564f7feb0da8 'right' 'unsigned int'
|-FunctionDecl 0x564f7feb1540 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:155:1> <scratch space>:76:1 safe_unary_minus_func_int16_t_s 'int16_t (int16_t)' static
| |-ParmVarDecl 0x564f7feb13f0 </usr/include/safe_math.h:144:39, col:47> col:47 used si 'int16_t':'short'
| `-CompoundStmt 0x564f7feb1680 <line:145:1, line:155:1>
|   `-ReturnStmt 0x564f7feb1670 <line:147:3, line:154:6>
|     `-ImplicitCastExpr 0x564f7feb1658 <col:5, col:6> 'int16_t':'short' <IntegralCast>
|       `-UnaryOperator 0x564f7feb1640 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x564f7feb1628 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7feb1610 <col:6> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feb15f0 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb13f0 'si' 'int16_t':'short'
|-FunctionDecl 0x564f7feb1878 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:169:1> <scratch space>:77:1 safe_add_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x564f7feb16a8 </usr/include/safe_math.h:158:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb1720 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x564f7feb1a38 <line:159:1, line:169:1>
|   `-ReturnStmt 0x564f7feb1a28 <line:161:3, line:168:15>
|     `-ImplicitCastExpr 0x564f7feb1a10 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x564f7feb19f0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x564f7feb19d0 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x564f7feb1988 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7feb1970 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7feb1930 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb16a8 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x564f7feb19b8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7feb19a0 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x564f7feb1950 <col:12> 'int16_t':'short' lvalue ParmVar 0x564f7feb1720 'si2' 'int16_t':'short'
|-FunctionDecl 0x564f7feb1b78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:183:1> <scratch space>:78:1 safe_sub_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x564f7feb1a60 </usr/include/safe_math.h:172:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb1ad8 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x564f7feb1d38 <line:173:1, line:183:1>
|   `-ReturnStmt 0x564f7feb1d28 <line:175:3, line:182:15>
|     `-ImplicitCastExpr 0x564f7feb1d10 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x564f7feb1cf0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x564f7feb1cd0 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x564f7feb1c88 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7feb1c70 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7feb1c30 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb1a60 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x564f7feb1cb8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7feb1ca0 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x564f7feb1c50 <col:12> 'int16_t':'short' lvalue ParmVar 0x564f7feb1ad8 'si2' 'int16_t':'short'
|-FunctionDecl 0x564f7feb1e78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:197:1> <scratch space>:79:1 safe_mul_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x564f7feb1d60 </usr/include/safe_math.h:186:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb1dd8 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x564f7feb2018 <line:187:1, line:197:1>
|   `-ReturnStmt 0x564f7feb2008 <line:189:3, line:196:11>
|     `-ImplicitCastExpr 0x564f7feb1ff0 <col:5, col:11> 'int16_t':'short' <IntegralCast>
|       `-BinaryOperator 0x564f7feb1fd0 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x564f7feb1f88 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb1f70 <col:5> 'int16_t':'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7feb1f30 <col:5> 'int16_t':'short' lvalue ParmVar 0x564f7feb1d60 'si1' 'int16_t':'short'
|         `-ImplicitCastExpr 0x564f7feb1fb8 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7feb1fa0 <col:11> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feb1f50 <col:11> 'int16_t':'short' lvalue ParmVar 0x564f7feb1dd8 'si2' 'int16_t':'short'
|-FunctionDecl 0x564f7feb2158 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:209:1> <scratch space>:80:1 safe_mod_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x564f7feb2040 </usr/include/safe_math.h:200:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb20b8 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x564f7fdaa010 <line:201:1, line:209:1>
|   `-ReturnStmt 0x564f7fdaa000 <line:203:3, line:208:15>
|     `-ImplicitCastExpr 0x564f7fda9fe8 <line:205:5, line:208:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fda9fb8 <line:205:5, line:208:15> 'int'
|         |-ParenExpr 0x564f7fda9e28 <line:205:5, col:57> 'int'
|         | `-BinaryOperator 0x564f7fda9e08 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x564f7feb22a0 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7feb2280 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x564f7feb2268 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7feb2250 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7feb2210 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7feb20b8 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x564f7feb2230 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7fda9de8 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x564f7fda9dc8 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x564f7feb23c8 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x564f7feb23a8 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x564f7feb2390 </usr/include/safe_math.h:205:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x564f7feb2378 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x564f7feb22c0 <col:22> 'int16_t':'short' lvalue ParmVar 0x564f7feb2040 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x564f7feb2358 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x564f7feb2338 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x564f7feb2300 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x564f7feb22e0 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x564f7feb2318 <col:29> 'int' 1
|         |       `-ParenExpr 0x564f7fda9da8 </usr/include/safe_math.h:205:43, col:55> 'int'
|         |         `-BinaryOperator 0x564f7fda9d88 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x564f7fda9d70 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x564f7fda9d58 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x564f7fda9ce0 <col:44> 'int16_t':'short' lvalue ParmVar 0x564f7feb20b8 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x564f7fda9d38 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x564f7fda9d20 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x564f7fda9d00 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x564f7fda9fa0 <line:206:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fda9f88 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fda9e88 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7fda9e68 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7fda9e48 </usr/include/safe_math.h:206:16> 'int16_t':'short' lvalue ParmVar 0x564f7feb2040 'si1' 'int16_t':'short'
|         `-ParenExpr 0x564f7fda9f68 <line:208:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fda9f48 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x564f7fda9f00 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fda9ee8 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fda9ea8 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb2040 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x564f7fda9f30 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fda9f18 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fda9ec8 <col:12> 'int16_t':'short' lvalue ParmVar 0x564f7feb20b8 'si2' 'int16_t':'short'
|-FunctionDecl 0x564f7fdaa150 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:221:1> <scratch space>:81:1 safe_div_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x564f7fdaa038 </usr/include/safe_math.h:212:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x564f7fdaa0b0 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x564f7fdaa710 <line:213:1, line:221:1>
|   `-ReturnStmt 0x564f7fdaa700 <line:215:3, line:220:15>
|     `-ImplicitCastExpr 0x564f7fdaa6e8 <line:217:5, line:220:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fdaa6b8 <line:217:5, line:220:15> 'int'
|         |-ParenExpr 0x564f7fdaa528 <line:217:5, col:57> 'int'
|         | `-BinaryOperator 0x564f7fdaa508 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x564f7fdaa298 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7fdaa278 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x564f7fdaa260 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7fdaa248 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7fdaa208 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa0b0 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x564f7fdaa228 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7fdaa4e8 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x564f7fdaa4c8 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x564f7fdaa3c0 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x564f7fdaa3a0 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x564f7fdaa388 </usr/include/safe_math.h:217:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x564f7fdaa370 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x564f7fdaa2b8 <col:22> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa038 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x564f7fdaa350 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x564f7fdaa330 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x564f7fdaa2f8 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x564f7fdaa2d8 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x564f7fdaa310 <col:29> 'int' 1
|         |       `-ParenExpr 0x564f7fdaa4a8 </usr/include/safe_math.h:217:43, col:55> 'int'
|         |         `-BinaryOperator 0x564f7fdaa488 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x564f7fdaa470 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x564f7fdaa458 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x564f7fdaa3e0 <col:44> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa0b0 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x564f7fdaa438 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x564f7fdaa420 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x564f7fdaa400 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x564f7fdaa6a0 <line:218:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fdaa688 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fdaa588 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7fdaa568 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7fdaa548 </usr/include/safe_math.h:218:16> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa038 'si1' 'int16_t':'short'
|         `-ParenExpr 0x564f7fdaa668 <line:220:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fdaa648 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x564f7fdaa600 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fdaa5e8 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fdaa5a8 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa038 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x564f7fdaa630 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fdaa618 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fdaa5c8 <col:12> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa0b0 'si2' 'int16_t':'short'
|-FunctionDecl 0x564f7fdaa908 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:233:1> <scratch space>:82:1 safe_lshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x564f7fdaa738 </usr/include/safe_math.h:224:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x564f7fdaa7b8 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7feb67c8 <line:225:1, line:233:1>
|   `-ReturnStmt 0x564f7feb67b8 <line:227:3, line:232:26>
|     `-ImplicitCastExpr 0x564f7feb67a0 <line:229:5, line:232:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb6770 <line:229:5, line:232:26> 'int'
|         |-ParenExpr 0x564f7feb6598 <line:229:5, col:102> 'int'
|         | `-BinaryOperator 0x564f7feb6578 <col:6, col:101> 'int' '||'
|         |   |-BinaryOperator 0x564f7fdaac80 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x564f7fdaab68 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x564f7fdaaa50 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x564f7fdaaa30 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x564f7fdaaa18 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x564f7fdaaa00 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x564f7fdaa9c0 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa738 'left' 'int16_t':'short'
|         |   | | |   `-IntegerLiteral 0x564f7fdaa9e0 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x564f7fdaab48 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x564f7fdaab28 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x564f7fdaaae8 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x564f7fdaaac0 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x564f7fdaaaa8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x564f7fdaaa70 <col:27> 'int' lvalue ParmVar 0x564f7fdaa7b8 'right' 'int'
|         |   | |     `-IntegerLiteral 0x564f7fdaab08 <col:36> 'int' 0
|         |   | `-ParenExpr 0x564f7fdaac60 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x564f7fdaac40 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x564f7fdaac00 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7fdaabd8 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7fdaabc0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7fdaab88 <col:49> 'int' lvalue ParmVar 0x564f7fdaa7b8 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7fdaac20 <col:59> 'int' 32
|         |   `-ParenExpr 0x564f7feb6558 <col:66, col:101> 'int'
|         |     `-BinaryOperator 0x564f7feb6538 <col:67, col:100> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7feb6520 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7feb6508 <col:67> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7fdaaca0 <col:67> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa738 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x564f7feb64e8 <col:74, col:100> 'int'
|         |         `-BinaryOperator 0x564f7feb64c8 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:229:99> 'int' '>>'
|         |           |-ParenExpr 0x564f7feb6410 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x564f7fdaacc0 <col:22> 'int' 32767
|         |           `-ParenExpr 0x564f7feb64a8 </usr/include/safe_math.h:229:88, col:99> 'int'
|         |             `-CStyleCastExpr 0x564f7feb6480 <col:89, col:94> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7feb6468 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7feb6430 <col:94> 'int' lvalue ParmVar 0x564f7fdaa7b8 'right' 'int'
|         |-ImplicitCastExpr 0x564f7feb6758 <line:230:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb6740 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb65f8 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7feb65d8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7feb65b8 </usr/include/safe_math.h:230:16> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa738 'left' 'int16_t':'short'
|         `-ParenExpr 0x564f7feb6720 <line:232:5, col:26> 'int'
|           `-BinaryOperator 0x564f7feb6700 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7feb66e8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb66d0 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb6618 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7fdaa738 'left' 'int16_t':'short'
|             `-ParenExpr 0x564f7feb66b0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7feb6688 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb6670 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb6638 <col:20> 'int' lvalue ParmVar 0x564f7fdaa7b8 'right' 'int'
|-FunctionDecl 0x564f7feb69c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:245:1> <scratch space>:83:1 safe_lshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x564f7feb67f0 </usr/include/safe_math.h:236:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb6870 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7feb7058 <line:237:1, line:245:1>
|   `-ReturnStmt 0x564f7feb7048 <line:239:3, line:244:35>
|     `-ImplicitCastExpr 0x564f7feb7030 <line:241:5, line:244:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb7000 <line:241:5, line:244:35> 'int'
|         |-ParenExpr 0x564f7feb6e28 <line:241:5, col:98> 'int'
|         | `-BinaryOperator 0x564f7feb6e08 <col:6, col:97> 'int' '||'
|         |   |-BinaryOperator 0x564f7feb6c40 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x564f7feb6b10 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x564f7feb6af0 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x564f7feb6ad8 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x564f7feb6ac0 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x564f7feb6a80 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7feb67f0 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x564f7feb6aa0 <col:14> 'int' 0
|         |   | `-ParenExpr 0x564f7feb6c20 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x564f7feb6c00 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x564f7feb6ba8 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x564f7feb6b80 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7feb6b68 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7feb6b30 <col:36> 'unsigned int' lvalue ParmVar 0x564f7feb6870 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x564f7feb6be8 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x564f7feb6bc8 <col:46> 'int' 32
|         |   `-ParenExpr 0x564f7feb6de8 <col:53, col:97> 'int'
|         |     `-BinaryOperator 0x564f7feb6dc8 <col:54, col:96> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7feb6db0 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7feb6d98 <col:54> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7feb6c60 <col:54> 'int16_t':'short' lvalue ParmVar 0x564f7feb67f0 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x564f7feb6d78 <col:61, col:96> 'int'
|         |         `-BinaryOperator 0x564f7feb6d58 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:241:95> 'int' '>>'
|         |           |-ParenExpr 0x564f7feb6ca0 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x564f7feb6c80 <col:22> 'int' 32767
|         |           `-ParenExpr 0x564f7feb6d38 </usr/include/safe_math.h:241:75, col:95> 'unsigned int'
|         |             `-CStyleCastExpr 0x564f7feb6d10 <col:76, col:90> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7feb6cf8 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7feb6cc0 <col:90> 'unsigned int' lvalue ParmVar 0x564f7feb6870 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x564f7feb6fe8 <line:242:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb6fd0 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb6e88 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7feb6e68 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7feb6e48 </usr/include/safe_math.h:242:16> 'int16_t':'short' lvalue ParmVar 0x564f7feb67f0 'left' 'int16_t':'short'
|         `-ParenExpr 0x564f7feb6fb0 <line:244:5, col:35> 'int'
|           `-BinaryOperator 0x564f7feb6f90 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7feb6f78 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb6f60 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb6ea8 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb67f0 'left' 'int16_t':'short'
|             `-ParenExpr 0x564f7feb6f40 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7feb6f18 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb6f00 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb6ec8 <col:29> 'unsigned int' lvalue ParmVar 0x564f7feb6870 'right' 'unsigned int'
|-FunctionDecl 0x564f7feb71a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:257:1> <scratch space>:84:1 safe_rshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x564f7feb7080 </usr/include/safe_math.h:248:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb7100 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7feb7768 <line:249:1, line:257:1>
|   `-ReturnStmt 0x564f7feb7758 <line:251:3, line:256:26>
|     `-ImplicitCastExpr 0x564f7feb7740 <line:253:5, line:256:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb7710 <line:253:5, line:256:26> 'int'
|         |-ParenExpr 0x564f7feb7538 <line:253:5, col:62> 'int'
|         | `-BinaryOperator 0x564f7feb7518 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x564f7feb7400 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x564f7feb72e8 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x564f7feb72c8 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x564f7feb72b0 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x564f7feb7298 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x564f7feb7258 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7feb7080 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x564f7feb7278 <col:14> 'int' 0
|         |   | `-ParenExpr 0x564f7feb73e0 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x564f7feb73c0 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x564f7feb7380 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7feb7358 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7feb7340 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7feb7308 <col:27> 'int' lvalue ParmVar 0x564f7feb7100 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7feb73a0 <col:36> 'int' 0
|         |   `-ParenExpr 0x564f7feb74f8 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x564f7feb74d8 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x564f7feb7498 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x564f7feb7470 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7feb7458 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7feb7420 <col:49> 'int' lvalue ParmVar 0x564f7feb7100 'right' 'int'
|         |       `-IntegerLiteral 0x564f7feb74b8 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x564f7feb76f8 <line:254:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb76e0 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb7598 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7feb7578 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7feb7558 </usr/include/safe_math.h:254:16> 'int16_t':'short' lvalue ParmVar 0x564f7feb7080 'left' 'int16_t':'short'
|         `-ParenExpr 0x564f7feb76c0 <line:256:5, col:26> 'int'
|           `-BinaryOperator 0x564f7feb76a0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7feb7688 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb7670 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb75b8 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb7080 'left' 'int16_t':'short'
|             `-ParenExpr 0x564f7feb7650 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7feb7628 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb7610 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb75d8 <col:20> 'int' lvalue ParmVar 0x564f7feb7100 'right' 'int'
|-FunctionDecl 0x564f7feb78b0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:269:1> <scratch space>:85:1 safe_rshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x564f7feb7790 </usr/include/safe_math.h:260:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x564f7feb7810 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7feb7d78 <line:261:1, line:269:1>
|   `-ReturnStmt 0x564f7feb7d68 <line:263:3, line:268:35>
|     `-ImplicitCastExpr 0x564f7feb7d50 <line:265:5, line:268:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x564f7feb7d20 <line:265:5, line:268:35> 'int'
|         |-ParenExpr 0x564f7feb7b48 <line:265:5, col:49> 'int'
|         | `-BinaryOperator 0x564f7feb7b28 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x564f7feb79f8 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x564f7feb79d8 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x564f7feb79c0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x564f7feb79a8 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x564f7feb7968 <col:7> 'int16_t':'short' lvalue ParmVar 0x564f7feb7790 'left' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x564f7feb7988 <col:14> 'int' 0
|         |   `-ParenExpr 0x564f7feb7b08 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x564f7feb7ae8 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x564f7feb7a90 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x564f7feb7a68 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7feb7a50 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7feb7a18 <col:36> 'unsigned int' lvalue ParmVar 0x564f7feb7810 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x564f7feb7ad0 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x564f7feb7ab0 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x564f7feb7d08 <line:266:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7feb7cf0 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7feb7ba8 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x564f7feb7b88 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x564f7feb7b68 </usr/include/safe_math.h:266:16> 'int16_t':'short' lvalue ParmVar 0x564f7feb7790 'left' 'int16_t':'short'
|         `-ParenExpr 0x564f7feb7cd0 <line:268:5, col:35> 'int'
|           `-BinaryOperator 0x564f7feb7cb0 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7feb7c98 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7feb7c80 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7feb7bc8 <col:6> 'int16_t':'short' lvalue ParmVar 0x564f7feb7790 'left' 'int16_t':'short'
|             `-ParenExpr 0x564f7feb7c60 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7feb7c38 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7feb7c20 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7feb7be8 <col:29> 'unsigned int' lvalue ParmVar 0x564f7feb7810 'right' 'unsigned int'
|-FunctionDecl 0x564f7feb7f10 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:285:1> <scratch space>:86:1 safe_unary_minus_func_int32_t_s 'int32_t (int32_t)' static
| |-ParmVarDecl 0x564f7feb7e00 </usr/include/safe_math.h:274:39, col:47> col:47 used si 'int32_t':'int'
| `-CompoundStmt 0x564f7feb81d8 <line:275:1, line:285:1>
|   `-ReturnStmt 0x564f7feb81c8 <line:277:3, line:284:6>
|     `-ConditionalOperator 0x564f7feb8198 <line:280:5, line:284:6> 'int32_t':'int'
|       |-ParenExpr 0x564f7feb80b0 <line:280:5, col:19> 'int'
|       | `-BinaryOperator 0x564f7feb8090 <col:6, /usr/include/stdint.h:107:35> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7feb8078 </usr/include/safe_math.h:280:6> 'int32_t':'int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7feb7fc0 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7feb7e00 'si' 'int32_t':'int'
|       |   `-ParenExpr 0x564f7feb8058 </usr/include/stdint.h:107:21, col:35> 'int'
|       |     `-BinaryOperator 0x564f7feb8038 <col:22, col:34> 'int' '-'
|       |       |-UnaryOperator 0x564f7feb8000 <col:22, col:23> 'int' prefix '-'
|       |       | `-IntegerLiteral 0x564f7feb7fe0 <col:23> 'int' 2147483647
|       |       `-IntegerLiteral 0x564f7feb8018 <col:34> 'int' 1
|       |-ImplicitCastExpr 0x564f7feb8180 </usr/include/safe_math.h:281:5, col:19> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7feb8110 <col:5, col:19> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7feb80f0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7feb80d0 </usr/include/safe_math.h:281:16> 'int32_t':'int' lvalue ParmVar 0x564f7feb7e00 'si' 'int32_t':'int'
|       `-UnaryOperator 0x564f7feb8168 <line:284:5, col:6> 'int32_t':'int' prefix '-'
|         `-ImplicitCastExpr 0x564f7feb8150 <col:6> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x564f7feb8130 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7feb7e00 'si' 'int32_t':'int'
|-FunctionDecl 0x564f7feb8420 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:299:1> <scratch space>:87:1 safe_add_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x564f7feb8200 </usr/include/safe_math.h:288:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x564f7feb8278 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x564f7feb8c58 <line:289:1, line:299:1>
|   `-ReturnStmt 0x564f7feb8c48 <line:291:3, line:298:15>
|     `-ConditionalOperator 0x564f7feb8c18 <line:294:5, line:298:15> 'int32_t':'int'
|       |-ParenExpr 0x564f7feb8ad0 <line:294:5, col:104> 'int'
|       | `-BinaryOperator 0x564f7feb8ab0 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x564f7feb8778 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x564f7feb8758 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x564f7feb8608 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x564f7feb8550 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x564f7feb8530 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x564f7feb8518 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x564f7feb84d8 <col:8> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|       |   |   | |   `-IntegerLiteral 0x564f7feb84f8 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x564f7feb85e8 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x564f7feb85c8 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x564f7feb85b0 <col:19> 'int32_t':'int' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x564f7feb8570 <col:19> 'int32_t':'int' lvalue ParmVar 0x564f7feb8278 'si2' 'int32_t':'int'
|       |   |   |     `-IntegerLiteral 0x564f7feb8590 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x564f7feb8738 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x564f7feb8718 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x564f7feb8700 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x564f7feb8628 <col:30> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|       |   |       `-ParenExpr 0x564f7feb86e0 <col:36, col:50> 'int'
|       |   |         `-BinaryOperator 0x564f7feb86c0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:294:47> 'int' '-'
|       |   |           |-ParenExpr 0x564f7feb8668 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   |           | `-IntegerLiteral 0x564f7feb8648 <col:22> 'int' 2147483647
|       |   |           `-ImplicitCastExpr 0x564f7feb86a8 </usr/include/safe_math.h:294:47> 'int32_t':'int' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x564f7feb8688 <col:47> 'int32_t':'int' lvalue ParmVar 0x564f7feb8278 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x564f7feb8a90 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x564f7feb8a70 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x564f7feb88c8 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x564f7feb8810 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x564f7feb87f0 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x564f7feb87d8 <col:59> 'int32_t':'int' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x564f7feb8798 <col:59> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|       |       | |   `-IntegerLiteral 0x564f7feb87b8 <col:63> 'int' 0
|       |       | `-ParenExpr 0x564f7feb88a8 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x564f7feb8888 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x564f7feb8870 <col:70> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x564f7feb8830 <col:70> 'int32_t':'int' lvalue ParmVar 0x564f7feb8278 'si2' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x564f7feb8850 <col:74> 'int' 0
|       |       `-ParenExpr 0x564f7feb8a50 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x564f7feb8a30 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x564f7feb8a18 <col:81> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7feb88e8 <col:81> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|       |           `-ParenExpr 0x564f7feb89f8 <col:87, col:101> 'int'
|       |             `-BinaryOperator 0x564f7feb89d8 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:294:98> 'int' '-'
|       |               |-ParenExpr 0x564f7feb8980 </usr/include/stdint.h:107:21, col:35> 'int'
|       |               | `-BinaryOperator 0x564f7feb8960 <col:22, col:34> 'int' '-'
|       |               |   |-UnaryOperator 0x564f7feb8928 <col:22, col:23> 'int' prefix '-'
|       |               |   | `-IntegerLiteral 0x564f7feb8908 <col:23> 'int' 2147483647
|       |               |   `-IntegerLiteral 0x564f7feb8940 <col:34> 'int' 1
|       |               `-ImplicitCastExpr 0x564f7feb89c0 </usr/include/safe_math.h:294:98> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x564f7feb89a0 <col:98> 'int32_t':'int' lvalue ParmVar 0x564f7feb8278 'si2' 'int32_t':'int'
|       |-ImplicitCastExpr 0x564f7feb8c00 <line:295:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7feb8b30 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7feb8b10 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7feb8af0 </usr/include/safe_math.h:295:16> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|       `-ParenExpr 0x564f7feb8be0 <line:298:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x564f7feb8bc0 <col:6, col:12> 'int32_t':'int' '+'
|           |-ImplicitCastExpr 0x564f7feb8b90 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7feb8b50 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7feb8200 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x564f7feb8ba8 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feb8b70 <col:12> 'int32_t':'int' lvalue ParmVar 0x564f7feb8278 'si2' 'int32_t':'int'
|-FunctionDecl 0x564f7feb8d98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:313:1> <scratch space>:88:1 safe_sub_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x564f7feb8c80 </usr/include/safe_math.h:302:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x564f7feb8cf8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x564f7feb93d8 <line:303:1, line:313:1>
|   `-ReturnStmt 0x564f7feb93c8 <line:305:3, line:312:15>
|     `-ConditionalOperator 0x564f7feb9398 <line:308:5, line:312:15> 'int32_t':'int'
|       |-ParenExpr 0x564f7feb9250 <line:308:5, col:70> 'int'
|       | `-BinaryOperator 0x564f7feb9230 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x564f7feb91f0 <col:6, col:65> 'int'
|       |   | `-BinaryOperator 0x564f7feb91d0 <col:7, col:64> 'int' '&'
|       |   |   |-ParenExpr 0x564f7feb8ee0 <col:7, col:15> 'int32_t':'int'
|       |   |   | `-BinaryOperator 0x564f7feb8ec0 <col:8, col:12> 'int32_t':'int' '^'
|       |   |   |   |-ImplicitCastExpr 0x564f7feb8e90 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x564f7feb8e50 <col:8> 'int32_t':'int' lvalue ParmVar 0x564f7feb8c80 'si1' 'int32_t':'int'
|       |   |   |   `-ImplicitCastExpr 0x564f7feb8ea8 <col:12> 'int32_t':'int' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7feb8e70 <col:12> 'int32_t':'int' lvalue ParmVar 0x564f7feb8cf8 'si2' 'int32_t':'int'
|       |   |   `-ParenExpr 0x564f7feb91b0 <col:19, col:64> 'int'
|       |   |     `-BinaryOperator 0x564f7feb9190 <col:20, col:61> 'int' '^'
|       |   |       |-ParenExpr 0x564f7feb9138 <col:20, col:59> 'int'
|       |   |       | `-BinaryOperator 0x564f7feb9118 <col:21, col:56> 'int' '-'
|       |   |       |   |-ParenExpr 0x564f7feb90c0 <col:21, col:54> 'int'
|       |   |       |   | `-BinaryOperator 0x564f7feb90a0 <col:22, col:53> 'int' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x564f7feb9088 <col:22> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x564f7feb8f00 <col:22> 'int32_t':'int' lvalue ParmVar 0x564f7feb8c80 'si1' 'int32_t':'int'
|       |   |       |   |   `-ParenExpr 0x564f7feb9068 <col:28, col:53> 'int'
|       |   |       |   |     `-BinaryOperator 0x564f7feb9048 <col:29, col:52> 'int' '&'
|       |   |       |   |       |-ParenExpr 0x564f7feb8fb0 <col:29, col:37> 'int32_t':'int'
|       |   |       |   |       | `-BinaryOperator 0x564f7feb8f90 <col:30, col:34> 'int32_t':'int' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x564f7feb8f60 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x564f7feb8f20 <col:30> 'int32_t':'int' lvalue ParmVar 0x564f7feb8c80 'si1' 'int32_t':'int'
|       |   |       |   |       |   `-ImplicitCastExpr 0x564f7feb8f78 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x564f7feb8f40 <col:34> 'int32_t':'int' lvalue ParmVar 0x564f7feb8cf8 'si2' 'int32_t':'int'
|       |   |       |   |       `-ParenExpr 0x564f7feb9028 <col:41, col:52> 'int'
|       |   |       |   |         `-UnaryOperator 0x564f7feb9010 <col:42, /usr/include/stdint.h:112:32> 'int' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x564f7feb8ff0 <col:21, col:32> 'int'
|       |   |       |   |             `-IntegerLiteral 0x564f7feb8fd0 <col:22> 'int' 2147483647
|       |   |       |   `-ImplicitCastExpr 0x564f7feb9100 </usr/include/safe_math.h:308:56> 'int32_t':'int' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x564f7feb90e0 <col:56> 'int32_t':'int' lvalue ParmVar 0x564f7feb8cf8 'si2' 'int32_t':'int'
|       |   |       `-ImplicitCastExpr 0x564f7feb9178 <col:61> 'int32_t':'int' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7feb9158 <col:61> 'int32_t':'int' lvalue ParmVar 0x564f7feb8cf8 'si2' 'int32_t':'int'
|       |   `-IntegerLiteral 0x564f7feb9210 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x564f7feb9380 <line:309:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7feb92b0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7feb9290 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7feb9270 </usr/include/safe_math.h:309:16> 'int32_t':'int' lvalue ParmVar 0x564f7feb8c80 'si1' 'int32_t':'int'
|       `-ParenExpr 0x564f7feb9360 <line:312:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x564f7feb9340 <col:6, col:12> 'int32_t':'int' '-'
|           |-ImplicitCastExpr 0x564f7feb9310 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7feb92d0 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7feb8c80 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x564f7feb9328 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feb92f0 <col:12> 'int32_t':'int' lvalue ParmVar 0x564f7feb8cf8 'si2' 'int32_t':'int'
|-FunctionDecl 0x564f7feb9518 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:327:1> <scratch space>:89:1 safe_mul_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x564f7feb9400 </usr/include/safe_math.h:316:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x564f7feb9478 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x564f7feba400 <line:317:1, line:327:1>
|   `-ReturnStmt 0x564f7feba3f0 <line:319:3, line:326:11>
|     `-ConditionalOperator 0x564f7feba3c0 <line:322:5, line:326:11> 'int32_t':'int'
|       |-ParenExpr 0x564f7feba298 <line:322:5, col:248> 'int'
|       | `-BinaryOperator 0x564f7feba278 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x564f7feb9ee0 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x564f7feb9ba8 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x564f7feb9870 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x564f7feb9850 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x564f7feb9700 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x564f7feb9648 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x564f7feb9628 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x564f7feb9610 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x564f7feb95d0 <col:8> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   | | |   | |   `-IntegerLiteral 0x564f7feb95f0 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x564f7feb96e0 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x564f7feb96c0 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x564f7feb96a8 <col:21> 'int32_t':'int' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x564f7feb9668 <col:21> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   | | |   |     `-IntegerLiteral 0x564f7feb9688 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x564f7feb9830 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x564f7feb9810 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x564f7feb97f8 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x564f7feb9720 <col:34> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   | | |       `-ParenExpr 0x564f7feb97d8 <col:40, col:56> 'int'
|       |   | | |         `-BinaryOperator 0x564f7feb97b8 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:53> 'int' '/'
|       |   | | |           |-ParenExpr 0x564f7feb9760 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   | | |           | `-IntegerLiteral 0x564f7feb9740 <col:22> 'int' 2147483647
|       |   | | |           `-ImplicitCastExpr 0x564f7feb97a0 </usr/include/safe_math.h:322:53> 'int32_t':'int' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x564f7feb9780 <col:53> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   | | `-ParenExpr 0x564f7feb9b88 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x564f7feb9b68 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x564f7feb99c0 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x564f7feb9908 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x564f7feb98e8 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x564f7feb98d0 <col:65> 'int32_t':'int' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x564f7feb9890 <col:65> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   | |     | |   `-IntegerLiteral 0x564f7feb98b0 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x564f7feb99a0 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x564f7feb9980 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x564f7feb9968 <col:78> 'int32_t':'int' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x564f7feb9928 <col:78> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   | |     |     `-IntegerLiteral 0x564f7feb9948 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x564f7feb9b48 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x564f7feb9b28 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x564f7feb9b10 <col:92> 'int32_t':'int' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x564f7feb99e0 <col:92> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   | |         `-ParenExpr 0x564f7feb9af0 <col:98, col:114> 'int'
|       |   | |           `-BinaryOperator 0x564f7feb9ad0 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:111> 'int' '/'
|       |   | |             |-ParenExpr 0x564f7feb9a78 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   | |             | `-BinaryOperator 0x564f7feb9a58 <col:22, col:34> 'int' '-'
|       |   | |             |   |-UnaryOperator 0x564f7feb9a20 <col:22, col:23> 'int' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x564f7feb9a00 <col:23> 'int' 2147483647
|       |   | |             |   `-IntegerLiteral 0x564f7feb9a38 <col:34> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x564f7feb9ab8 </usr/include/safe_math.h:322:111> 'int32_t':'int' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x564f7feb9a98 <col:111> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   | `-ParenExpr 0x564f7feb9ec0 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x564f7feb9ea0 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x564f7feb9cf8 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x564f7feb9c40 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x564f7feb9c20 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x564f7feb9c08 <col:123> 'int32_t':'int' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x564f7feb9bc8 <col:123> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   |     | |   `-IntegerLiteral 0x564f7feb9be8 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x564f7feb9cd8 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x564f7feb9cb8 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x564f7feb9ca0 <col:137> 'int32_t':'int' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x564f7feb9c60 <col:137> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   |     |     `-IntegerLiteral 0x564f7feb9c80 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x564f7feb9e80 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x564f7feb9e60 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x564f7feb9e48 <col:150> 'int32_t':'int' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x564f7feb9d18 <col:150> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |   |         `-ParenExpr 0x564f7feb9e28 <col:156, col:172> 'int'
|       |   |           `-BinaryOperator 0x564f7feb9e08 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:169> 'int' '/'
|       |   |             |-ParenExpr 0x564f7feb9db0 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   |             | `-BinaryOperator 0x564f7feb9d90 <col:22, col:34> 'int' '-'
|       |   |             |   |-UnaryOperator 0x564f7feb9d58 <col:22, col:23> 'int' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x564f7feb9d38 <col:23> 'int' 2147483647
|       |   |             |   `-IntegerLiteral 0x564f7feb9d70 <col:34> 'int' 1
|       |   |             `-ImplicitCastExpr 0x564f7feb9df0 </usr/include/safe_math.h:322:169> 'int32_t':'int' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x564f7feb9dd0 <col:169> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x564f7feba258 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x564f7feba238 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x564f7feba0e8 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x564f7feba030 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x564f7feb9f78 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x564f7feb9f58 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x564f7feb9f40 <col:181> 'int32_t':'int' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x564f7feb9f00 <col:181> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |       | | |   `-IntegerLiteral 0x564f7feb9f20 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x564f7feba010 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x564f7feb9ff0 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x564f7feb9fd8 <col:195> 'int32_t':'int' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x564f7feb9f98 <col:195> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |       | |     `-IntegerLiteral 0x564f7feb9fb8 <col:202> 'int' 0
|       |       | `-ParenExpr 0x564f7feba0c8 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x564f7feba0a8 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x564f7feba090 <col:209> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x564f7feba050 <col:209> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x564f7feba070 <col:216> 'int' 0
|       |       `-ParenExpr 0x564f7feba218 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x564f7feba1f8 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x564f7feba1e0 <col:223> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7feba108 <col:223> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x564f7feba1c0 <col:229, col:245> 'int'
|       |             `-BinaryOperator 0x564f7feba1a0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:242> 'int' '/'
|       |               |-ParenExpr 0x564f7feba148 </usr/include/stdint.h:112:21, col:32> 'int'
|       |               | `-IntegerLiteral 0x564f7feba128 <col:22> 'int' 2147483647
|       |               `-ImplicitCastExpr 0x564f7feba188 </usr/include/safe_math.h:322:242> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x564f7feba168 <col:242> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       |-ImplicitCastExpr 0x564f7feba3a8 <line:323:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7feba2f8 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7feba2d8 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7feba2b8 </usr/include/safe_math.h:323:16> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|       `-BinaryOperator 0x564f7feba388 <line:326:5, col:11> 'int32_t':'int' '*'
|         |-ImplicitCastExpr 0x564f7feba358 <col:5> 'int32_t':'int' <LValueToRValue>
|         | `-DeclRefExpr 0x564f7feba318 <col:5> 'int32_t':'int' lvalue ParmVar 0x564f7feb9400 'si1' 'int32_t':'int'
|         `-ImplicitCastExpr 0x564f7feba370 <col:11> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x564f7feba338 <col:11> 'int32_t':'int' lvalue ParmVar 0x564f7feb9478 'si2' 'int32_t':'int'
|-FunctionDecl 0x564f7feba558 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:339:1> <scratch space>:90:1 safe_mod_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x564f7feba440 </usr/include/safe_math.h:330:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x564f7feba4b8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x564f7febaa70 <line:331:1, line:339:1>
|   `-ReturnStmt 0x564f7febaa60 <line:333:3, line:338:15>
|     `-ConditionalOperator 0x564f7febaa30 <line:335:5, line:338:15> 'int32_t':'int'
|       |-ParenExpr 0x564f7feba8e8 <line:335:5, col:57> 'int'
|       | `-BinaryOperator 0x564f7feba8c8 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x564f7feba688 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7feba668 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x564f7feba650 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7feba610 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7feba4b8 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x564f7feba630 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7feba8a8 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x564f7feba888 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x564f7feba798 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x564f7feba778 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x564f7feba760 </usr/include/safe_math.h:335:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x564f7feba6a8 <col:22> 'int32_t':'int' lvalue ParmVar 0x564f7feba440 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x564f7feba740 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x564f7feba720 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x564f7feba6e8 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x564f7feba6c8 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x564f7feba700 <col:34> 'int' 1
|       |       `-ParenExpr 0x564f7feba868 </usr/include/safe_math.h:335:43, col:55> 'int'
|       |         `-BinaryOperator 0x564f7feba848 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x564f7feba830 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7feba7b8 <col:44> 'int32_t':'int' lvalue ParmVar 0x564f7feba4b8 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x564f7feba810 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x564f7feba7f8 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x564f7feba7d8 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x564f7febaa18 <line:336:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7feba948 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7feba928 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7feba908 </usr/include/safe_math.h:336:16> 'int32_t':'int' lvalue ParmVar 0x564f7feba440 'si1' 'int32_t':'int'
|       `-ParenExpr 0x564f7feba9f8 <line:338:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x564f7feba9d8 <col:6, col:12> 'int32_t':'int' '%'
|           |-ImplicitCastExpr 0x564f7feba9a8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7feba968 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7feba440 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x564f7feba9c0 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7feba988 <col:12> 'int32_t':'int' lvalue ParmVar 0x564f7feba4b8 'si2' 'int32_t':'int'
|-FunctionDecl 0x564f7febabb0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:351:1> <scratch space>:91:1 safe_div_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x564f7febaa98 </usr/include/safe_math.h:342:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x564f7febab10 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x564f7febb0c8 <line:343:1, line:351:1>
|   `-ReturnStmt 0x564f7febb0b8 <line:345:3, line:350:15>
|     `-ConditionalOperator 0x564f7febb088 <line:347:5, line:350:15> 'int32_t':'int'
|       |-ParenExpr 0x564f7febaf40 <line:347:5, col:57> 'int'
|       | `-BinaryOperator 0x564f7febaf20 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x564f7febace0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7febacc0 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x564f7febaca8 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7febac68 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7febab10 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x564f7febac88 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7febaf00 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x564f7febaee0 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x564f7febadf0 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x564f7febadd0 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x564f7febadb8 </usr/include/safe_math.h:347:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x564f7febad00 <col:22> 'int32_t':'int' lvalue ParmVar 0x564f7febaa98 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x564f7febad98 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x564f7febad78 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x564f7febad40 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x564f7febad20 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x564f7febad58 <col:34> 'int' 1
|       |       `-ParenExpr 0x564f7febaec0 </usr/include/safe_math.h:347:43, col:55> 'int'
|       |         `-BinaryOperator 0x564f7febaea0 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x564f7febae88 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7febae10 <col:44> 'int32_t':'int' lvalue ParmVar 0x564f7febab10 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x564f7febae68 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x564f7febae50 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x564f7febae30 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x564f7febb070 <line:348:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7febafa0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7febaf80 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7febaf60 </usr/include/safe_math.h:348:16> 'int32_t':'int' lvalue ParmVar 0x564f7febaa98 'si1' 'int32_t':'int'
|       `-ParenExpr 0x564f7febb050 <line:350:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x564f7febb030 <col:6, col:12> 'int32_t':'int' '/'
|           |-ImplicitCastExpr 0x564f7febb000 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febafc0 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7febaa98 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x564f7febb018 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7febafe0 <col:12> 'int32_t':'int' lvalue ParmVar 0x564f7febab10 'si2' 'int32_t':'int'
|-FunctionDecl 0x564f7febb288 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:363:1> <scratch space>:92:1 safe_lshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x564f7febb0f0 </usr/include/safe_math.h:354:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x564f7febb170 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7febb9a0 <line:355:1, line:363:1>
|   `-ReturnStmt 0x564f7febb990 <line:357:3, line:362:26>
|     `-ConditionalOperator 0x564f7febb960 <line:359:5, line:362:26> 'int32_t':'int'
|       |-ParenExpr 0x564f7febb7b8 <line:359:5, col:102> 'int'
|       | `-BinaryOperator 0x564f7febb798 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x564f7febb5e8 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x564f7febb4d0 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x564f7febb3b8 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x564f7febb398 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x564f7febb380 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x564f7febb340 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7febb0f0 'left' 'int32_t':'int'
|       |   | | |   `-IntegerLiteral 0x564f7febb360 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x564f7febb4b0 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x564f7febb490 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x564f7febb450 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x564f7febb428 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x564f7febb410 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x564f7febb3d8 <col:27> 'int' lvalue ParmVar 0x564f7febb170 'right' 'int'
|       |   | |     `-IntegerLiteral 0x564f7febb470 <col:36> 'int' 0
|       |   | `-ParenExpr 0x564f7febb5c8 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x564f7febb5a8 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x564f7febb568 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7febb540 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7febb528 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7febb4f0 <col:49> 'int' lvalue ParmVar 0x564f7febb170 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7febb588 <col:59> 'int' 32
|       |   `-ParenExpr 0x564f7febb778 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x564f7febb758 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7febb740 <col:67> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7febb608 <col:67> 'int32_t':'int' lvalue ParmVar 0x564f7febb0f0 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x564f7febb720 <col:74, col:100> 'int'
|       |         `-BinaryOperator 0x564f7febb700 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:359:99> 'int' '>>'
|       |           |-ParenExpr 0x564f7febb648 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x564f7febb628 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x564f7febb6e0 </usr/include/safe_math.h:359:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x564f7febb6b8 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7febb6a0 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7febb668 <col:94> 'int' lvalue ParmVar 0x564f7febb170 'right' 'int'
|       |-ImplicitCastExpr 0x564f7febb948 <line:360:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7febb818 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7febb7f8 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7febb7d8 </usr/include/safe_math.h:360:16> 'int32_t':'int' lvalue ParmVar 0x564f7febb0f0 'left' 'int32_t':'int'
|       `-ParenExpr 0x564f7febb928 <line:362:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x564f7febb908 <col:6, col:25> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x564f7febb8f0 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febb838 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7febb0f0 'left' 'int32_t':'int'
|           `-ParenExpr 0x564f7febb8d0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7febb8a8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7febb890 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7febb858 <col:20> 'int' lvalue ParmVar 0x564f7febb170 'right' 'int'
|-FunctionDecl 0x564f7febbb98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:375:1> <scratch space>:93:1 safe_lshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x564f7febb9c8 </usr/include/safe_math.h:366:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x564f7febba48 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7febc1b0 <line:367:1, line:375:1>
|   `-ReturnStmt 0x564f7febc1a0 <line:369:3, line:374:35>
|     `-ConditionalOperator 0x564f7febc170 <line:371:5, line:374:35> 'int32_t':'int'
|       |-ParenExpr 0x564f7febbfc8 <line:371:5, col:98> 'int'
|       | `-BinaryOperator 0x564f7febbfa8 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x564f7febbdf8 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x564f7febbcc8 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x564f7febbca8 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x564f7febbc90 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x564f7febbc50 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7febb9c8 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x564f7febbc70 <col:14> 'int' 0
|       |   | `-ParenExpr 0x564f7febbdd8 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x564f7febbdb8 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x564f7febbd60 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x564f7febbd38 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7febbd20 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7febbce8 <col:36> 'unsigned int' lvalue ParmVar 0x564f7febba48 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x564f7febbda0 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x564f7febbd80 <col:46> 'int' 32
|       |   `-ParenExpr 0x564f7febbf88 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x564f7febbf68 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7febbf50 <col:54> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7febbe18 <col:54> 'int32_t':'int' lvalue ParmVar 0x564f7febb9c8 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x564f7febbf30 <col:61, col:96> 'int'
|       |         `-BinaryOperator 0x564f7febbf10 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:371:95> 'int' '>>'
|       |           |-ParenExpr 0x564f7febbe58 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x564f7febbe38 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x564f7febbef0 </usr/include/safe_math.h:371:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x564f7febbec8 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7febbeb0 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7febbe78 <col:90> 'unsigned int' lvalue ParmVar 0x564f7febba48 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x564f7febc158 <line:372:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7febc028 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7febc008 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7febbfe8 </usr/include/safe_math.h:372:16> 'int32_t':'int' lvalue ParmVar 0x564f7febb9c8 'left' 'int32_t':'int'
|       `-ParenExpr 0x564f7febc138 <line:374:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x564f7febc118 <col:6, col:34> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x564f7febc100 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febc048 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7febb9c8 'left' 'int32_t':'int'
|           `-ParenExpr 0x564f7febc0e0 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7febc0b8 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7febc0a0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7febc068 <col:29> 'unsigned int' lvalue ParmVar 0x564f7febba48 'right' 'unsigned int'
|-FunctionDecl 0x564f7febc2f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:387:1> <scratch space>:94:1 safe_rshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x564f7febc1d8 </usr/include/safe_math.h:378:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x564f7febc258 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7febc878 <line:379:1, line:387:1>
|   `-ReturnStmt 0x564f7febc868 <line:381:3, line:386:26>
|     `-ConditionalOperator 0x564f7febc838 <line:383:5, line:386:26> 'int32_t':'int'
|       |-ParenExpr 0x564f7febc690 <line:383:5, col:62> 'int'
|       | `-BinaryOperator 0x564f7febc670 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x564f7febc558 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x564f7febc440 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x564f7febc408 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x564f7febc3f0 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x564f7febc3b0 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7febc1d8 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x564f7febc3d0 <col:14> 'int' 0
|       |   | `-ParenExpr 0x564f7febc538 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x564f7febc518 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x564f7febc4d8 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7febc4b0 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7febc498 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7febc460 <col:27> 'int' lvalue ParmVar 0x564f7febc258 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7febc4f8 <col:36> 'int' 0
|       |   `-ParenExpr 0x564f7febc650 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x564f7febc630 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x564f7febc5f0 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x564f7febc5c8 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7febc5b0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7febc578 <col:49> 'int' lvalue ParmVar 0x564f7febc258 'right' 'int'
|       |       `-IntegerLiteral 0x564f7febc610 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x564f7febc820 <line:384:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7febc6f0 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7febc6d0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7febc6b0 </usr/include/safe_math.h:384:16> 'int32_t':'int' lvalue ParmVar 0x564f7febc1d8 'left' 'int32_t':'int'
|       `-ParenExpr 0x564f7febc800 <line:386:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x564f7febc7e0 <col:6, col:25> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x564f7febc7c8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febc710 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7febc1d8 'left' 'int32_t':'int'
|           `-ParenExpr 0x564f7febc7a8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7febc780 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7febc768 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7febc730 <col:20> 'int' lvalue ParmVar 0x564f7febc258 'right' 'int'
|-FunctionDecl 0x564f7febc9c0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:399:1> <scratch space>:95:1 safe_rshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x564f7febc8a0 </usr/include/safe_math.h:390:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x564f7febc920 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7febce28 <line:391:1, line:399:1>
|   `-ReturnStmt 0x564f7febce18 <line:393:3, line:398:35>
|     `-ConditionalOperator 0x564f7febcde8 <line:395:5, line:398:35> 'int32_t':'int'
|       |-ParenExpr 0x564f7febcc40 <line:395:5, col:49> 'int'
|       | `-BinaryOperator 0x564f7febcc20 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x564f7febcaf0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7febcad0 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x564f7febcab8 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7febca78 <col:7> 'int32_t':'int' lvalue ParmVar 0x564f7febc8a0 'left' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x564f7febca98 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7febcc00 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x564f7febcbe0 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x564f7febcb88 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x564f7febcb60 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7febcb48 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7febcb10 <col:36> 'unsigned int' lvalue ParmVar 0x564f7febc920 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x564f7febcbc8 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x564f7febcba8 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x564f7febcdd0 <line:396:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x564f7febcca0 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x564f7febcc80 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x564f7febcc60 </usr/include/safe_math.h:396:16> 'int32_t':'int' lvalue ParmVar 0x564f7febc8a0 'left' 'int32_t':'int'
|       `-ParenExpr 0x564f7febcdb0 <line:398:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x564f7febcd90 <col:6, col:34> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x564f7febcd78 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febccc0 <col:6> 'int32_t':'int' lvalue ParmVar 0x564f7febc8a0 'left' 'int32_t':'int'
|           `-ParenExpr 0x564f7febcd58 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7febcd30 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7febcd18 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7febcce0 <col:29> 'unsigned int' lvalue ParmVar 0x564f7febc920 'right' 'unsigned int'
|-FunctionDecl 0x564f7febd000 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:416:1> <scratch space>:96:1 safe_unary_minus_func_int64_t_s 'int64_t (int64_t)' static
| |-ParmVarDecl 0x564f7febceb0 </usr/include/safe_math.h:405:39, col:47> col:47 used si 'int64_t':'long'
| `-CompoundStmt 0x564f7febd2e0 <line:406:1, line:416:1>
|   `-ReturnStmt 0x564f7febd2d0 <line:408:3, line:415:6>
|     `-ConditionalOperator 0x564f7febd2a0 <line:411:5, line:415:6> 'int64_t':'long'
|       |-ParenExpr 0x564f7febd1b8 <line:411:5, col:19> 'int'
|       | `-BinaryOperator 0x564f7febd198 <col:6, /usr/include/stdint.h:108:55> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7febd180 </usr/include/safe_math.h:411:6> 'int64_t':'long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7febd0b0 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febceb0 'si' 'int64_t':'long'
|       |   `-ParenExpr 0x564f7febd160 </usr/include/stdint.h:108:21, col:55> 'long'
|       |     `-BinaryOperator 0x564f7febd140 <col:22, col:54> 'long' '-'
|       |       |-UnaryOperator 0x564f7febd0f0 <col:22, <scratch space>:98:1> 'long' prefix '-'
|       |       | `-IntegerLiteral 0x564f7febd0d0 <col:1> 'long' 9223372036854775807
|       |       `-ImplicitCastExpr 0x564f7febd128 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |         `-IntegerLiteral 0x564f7febd108 <col:54> 'int' 1
|       |-ImplicitCastExpr 0x564f7febd288 </usr/include/safe_math.h:412:5, col:19> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7febd218 <col:5, col:19> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7febd1f8 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7febd1d8 </usr/include/safe_math.h:412:16> 'int64_t':'long' lvalue ParmVar 0x564f7febceb0 'si' 'int64_t':'long'
|       `-UnaryOperator 0x564f7febd270 <line:415:5, col:6> 'int64_t':'long' prefix '-'
|         `-ImplicitCastExpr 0x564f7febd258 <col:6> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x564f7febd238 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febceb0 'si' 'int64_t':'long'
|-FunctionDecl 0x564f7febd4d8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:430:1> <scratch space>:99:1 safe_add_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x564f7febd308 </usr/include/safe_math.h:419:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x564f7febd380 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x564f7febdd88 <line:420:1, line:430:1>
|   `-ReturnStmt 0x564f7febdd78 <line:422:3, line:429:15>
|     `-ConditionalOperator 0x564f7febdd48 <line:425:5, line:429:15> 'int64_t':'long'
|       |-ParenExpr 0x564f7febdc00 <line:425:5, col:104> 'int'
|       | `-BinaryOperator 0x564f7febdbe0 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x564f7febd860 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x564f7febd840 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x564f7febd6f0 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x564f7febd620 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x564f7febd600 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x564f7febd5d0 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x564f7febd590 <col:8> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|       |   |   | |   `-ImplicitCastExpr 0x564f7febd5e8 <col:12> 'int64_t':'long' <IntegralCast>
|       |   |   | |     `-IntegerLiteral 0x564f7febd5b0 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x564f7febd6d0 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x564f7febd6b0 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x564f7febd680 <col:19> 'int64_t':'long' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x564f7febd640 <col:19> 'int64_t':'long' lvalue ParmVar 0x564f7febd380 'si2' 'int64_t':'long'
|       |   |   |     `-ImplicitCastExpr 0x564f7febd698 <col:23> 'int64_t':'long' <IntegralCast>
|       |   |   |       `-IntegerLiteral 0x564f7febd660 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x564f7febd820 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x564f7febd800 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x564f7febd7e8 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x564f7febd710 <col:30> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|       |   |       `-ParenExpr 0x564f7febd7c8 <col:36, col:50> 'long'
|       |   |         `-BinaryOperator 0x564f7febd7a8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:425:47> 'long' '-'
|       |   |           |-ParenExpr 0x564f7febd750 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   |           | `-IntegerLiteral 0x564f7febd730 <<scratch space>:101:1> 'long' 9223372036854775807
|       |   |           `-ImplicitCastExpr 0x564f7febd790 </usr/include/safe_math.h:425:47> 'int64_t':'long' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x564f7febd770 <col:47> 'int64_t':'long' lvalue ParmVar 0x564f7febd380 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x564f7febdbc0 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x564f7febdba0 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x564f7febd9e0 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x564f7febd910 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x564f7febd8f0 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x564f7febd8c0 <col:59> 'int64_t':'long' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x564f7febd880 <col:59> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|       |       | |   `-ImplicitCastExpr 0x564f7febd8d8 <col:63> 'int64_t':'long' <IntegralCast>
|       |       | |     `-IntegerLiteral 0x564f7febd8a0 <col:63> 'int' 0
|       |       | `-ParenExpr 0x564f7febd9c0 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x564f7febd9a0 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x564f7febd970 <col:70> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x564f7febd930 <col:70> 'int64_t':'long' lvalue ParmVar 0x564f7febd380 'si2' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x564f7febd988 <col:74> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x564f7febd950 <col:74> 'int' 0
|       |       `-ParenExpr 0x564f7febdb80 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x564f7febdb60 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x564f7febdb48 <col:81> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7febda00 <col:81> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|       |           `-ParenExpr 0x564f7febdb28 <col:87, col:101> 'long'
|       |             `-BinaryOperator 0x564f7febdb08 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:425:98> 'long' '-'
|       |               |-ParenExpr 0x564f7febdab0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |               | `-BinaryOperator 0x564f7febda90 <col:22, col:54> 'long' '-'
|       |               |   |-UnaryOperator 0x564f7febda40 <col:22, <scratch space>:102:1> 'long' prefix '-'
|       |               |   | `-IntegerLiteral 0x564f7febda20 <col:1> 'long' 9223372036854775807
|       |               |   `-ImplicitCastExpr 0x564f7febda78 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |               |     `-IntegerLiteral 0x564f7febda58 <col:54> 'int' 1
|       |               `-ImplicitCastExpr 0x564f7febdaf0 </usr/include/safe_math.h:425:98> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x564f7febdad0 <col:98> 'int64_t':'long' lvalue ParmVar 0x564f7febd380 'si2' 'int64_t':'long'
|       |-ImplicitCastExpr 0x564f7febdd30 <line:426:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7febdc60 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7febdc40 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7febdc20 </usr/include/safe_math.h:426:16> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|       `-ParenExpr 0x564f7febdd10 <line:429:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x564f7febdcf0 <col:6, col:12> 'int64_t':'long' '+'
|           |-ImplicitCastExpr 0x564f7febdcc0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febdc80 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febd308 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x564f7febdcd8 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7febdca0 <col:12> 'int64_t':'long' lvalue ParmVar 0x564f7febd380 'si2' 'int64_t':'long'
|-FunctionDecl 0x564f7febdec8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:444:1> <scratch space>:103:1 safe_sub_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x564f7febddb0 </usr/include/safe_math.h:433:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x564f7febde28 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x564f7febe538 <line:434:1, line:444:1>
|   `-ReturnStmt 0x564f7febe528 <line:436:3, line:443:15>
|     `-ConditionalOperator 0x564f7febe4f8 <line:439:5, line:443:15> 'int64_t':'long'
|       |-ParenExpr 0x564f7febe398 <line:439:5, col:70> 'int'
|       | `-BinaryOperator 0x564f7febe378 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x564f7febe320 <col:6, col:65> 'long'
|       |   | `-BinaryOperator 0x564f7febe300 <col:7, col:64> 'long' '&'
|       |   |   |-ParenExpr 0x564f7febe010 <col:7, col:15> 'int64_t':'long'
|       |   |   | `-BinaryOperator 0x564f7febdff0 <col:8, col:12> 'int64_t':'long' '^'
|       |   |   |   |-ImplicitCastExpr 0x564f7febdfc0 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x564f7febdf80 <col:8> 'int64_t':'long' lvalue ParmVar 0x564f7febddb0 'si1' 'int64_t':'long'
|       |   |   |   `-ImplicitCastExpr 0x564f7febdfd8 <col:12> 'int64_t':'long' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7febdfa0 <col:12> 'int64_t':'long' lvalue ParmVar 0x564f7febde28 'si2' 'int64_t':'long'
|       |   |   `-ParenExpr 0x564f7febe2e0 <col:19, col:64> 'long'
|       |   |     `-BinaryOperator 0x564f7febe2c0 <col:20, col:61> 'long' '^'
|       |   |       |-ParenExpr 0x564f7febe268 <col:20, col:59> 'long'
|       |   |       | `-BinaryOperator 0x564f7febe248 <col:21, col:56> 'long' '-'
|       |   |       |   |-ParenExpr 0x564f7febe1f0 <col:21, col:54> 'long'
|       |   |       |   | `-BinaryOperator 0x564f7febe1d0 <col:22, col:53> 'long' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x564f7febe1b8 <col:22> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x564f7febe030 <col:22> 'int64_t':'long' lvalue ParmVar 0x564f7febddb0 'si1' 'int64_t':'long'
|       |   |       |   |   `-ParenExpr 0x564f7febe198 <col:28, col:53> 'long'
|       |   |       |   |     `-BinaryOperator 0x564f7febe178 <col:29, col:52> 'long' '&'
|       |   |       |   |       |-ParenExpr 0x564f7febe0e0 <col:29, col:37> 'int64_t':'long'
|       |   |       |   |       | `-BinaryOperator 0x564f7febe0c0 <col:30, col:34> 'int64_t':'long' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x564f7febe090 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x564f7febe050 <col:30> 'int64_t':'long' lvalue ParmVar 0x564f7febddb0 'si1' 'int64_t':'long'
|       |   |       |   |       |   `-ImplicitCastExpr 0x564f7febe0a8 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x564f7febe070 <col:34> 'int64_t':'long' lvalue ParmVar 0x564f7febde28 'si2' 'int64_t':'long'
|       |   |       |   |       `-ParenExpr 0x564f7febe158 <col:41, col:52> 'long'
|       |   |       |   |         `-UnaryOperator 0x564f7febe140 <col:42, /usr/include/stdint.h:113:52> 'long' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x564f7febe120 <col:21, col:52> 'long'
|       |   |       |   |             `-IntegerLiteral 0x564f7febe100 <<scratch space>:105:1> 'long' 9223372036854775807
|       |   |       |   `-ImplicitCastExpr 0x564f7febe230 </usr/include/safe_math.h:439:56> 'int64_t':'long' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x564f7febe210 <col:56> 'int64_t':'long' lvalue ParmVar 0x564f7febde28 'si2' 'int64_t':'long'
|       |   |       `-ImplicitCastExpr 0x564f7febe2a8 <col:61> 'int64_t':'long' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7febe288 <col:61> 'int64_t':'long' lvalue ParmVar 0x564f7febde28 'si2' 'int64_t':'long'
|       |   `-ImplicitCastExpr 0x564f7febe360 <col:69> 'long' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7febe340 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x564f7febe4e0 <line:440:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7febe3f8 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7febe3d8 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7febe3b8 </usr/include/safe_math.h:440:16> 'int64_t':'long' lvalue ParmVar 0x564f7febddb0 'si1' 'int64_t':'long'
|       `-ParenExpr 0x564f7febe4c0 <line:443:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x564f7febe4a0 <col:6, col:12> 'int64_t':'long' '-'
|           |-ImplicitCastExpr 0x564f7febe470 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febe418 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febddb0 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x564f7febe488 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7febe450 <col:12> 'int64_t':'long' lvalue ParmVar 0x564f7febde28 'si2' 'int64_t':'long'
|-FunctionDecl 0x564f7febe678 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:458:1> <scratch space>:106:1 safe_mul_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x564f7febe560 </usr/include/safe_math.h:447:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x564f7febe5d8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x564f7febf668 <line:448:1, line:458:1>
|   `-ReturnStmt 0x564f7febf658 <line:450:3, line:457:11>
|     `-ConditionalOperator 0x564f7febf628 <line:453:5, line:457:11> 'int64_t':'long'
|       |-ParenExpr 0x564f7febf500 <line:453:5, col:248> 'int'
|       | `-BinaryOperator 0x564f7febf4e0 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x564f7febf100 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x564f7febed80 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x564f7febea00 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x564f7febe9e0 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x564f7febe890 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x564f7febe7c0 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x564f7febe7a0 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x564f7febe770 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x564f7febe730 <col:8> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   | | |   | |   `-ImplicitCastExpr 0x564f7febe788 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |   | |     `-IntegerLiteral 0x564f7febe750 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x564f7febe870 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x564f7febe850 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x564f7febe820 <col:21> 'int64_t':'long' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x564f7febe7e0 <col:21> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   | | |   |     `-ImplicitCastExpr 0x564f7febe838 <col:27> 'int64_t':'long' <IntegralCast>
|       |   | | |   |       `-IntegerLiteral 0x564f7febe800 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x564f7febe9c0 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x564f7febe9a0 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x564f7febe988 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x564f7febe8b0 <col:34> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   | | |       `-ParenExpr 0x564f7febe968 <col:40, col:56> 'long'
|       |   | | |         `-BinaryOperator 0x564f7febe948 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:53> 'long' '/'
|       |   | | |           |-ParenExpr 0x564f7febe8f0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   | | |           | `-IntegerLiteral 0x564f7febe8d0 <<scratch space>:108:1> 'long' 9223372036854775807
|       |   | | |           `-ImplicitCastExpr 0x564f7febe930 </usr/include/safe_math.h:453:53> 'int64_t':'long' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x564f7febe910 <col:53> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   | | `-ParenExpr 0x564f7febed60 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x564f7febed40 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x564f7febeb80 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x564f7febeab0 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x564f7febea90 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x564f7febea60 <col:65> 'int64_t':'long' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x564f7febea20 <col:65> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   | |     | |   `-ImplicitCastExpr 0x564f7febea78 <col:71> 'int64_t':'long' <IntegralCast>
|       |   | |     | |     `-IntegerLiteral 0x564f7febea40 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x564f7febeb60 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x564f7febeb40 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x564f7febeb10 <col:78> 'int64_t':'long' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x564f7febead0 <col:78> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   | |     |     `-ImplicitCastExpr 0x564f7febeb28 <col:85> 'int64_t':'long' <IntegralCast>
|       |   | |     |       `-IntegerLiteral 0x564f7febeaf0 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x564f7febed20 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x564f7febed00 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x564f7febece8 <col:92> 'int64_t':'long' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x564f7febeba0 <col:92> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   | |         `-ParenExpr 0x564f7febecc8 <col:98, col:114> 'long'
|       |   | |           `-BinaryOperator 0x564f7febeca8 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:111> 'long' '/'
|       |   | |             |-ParenExpr 0x564f7febec50 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   | |             | `-BinaryOperator 0x564f7febec30 <col:22, col:54> 'long' '-'
|       |   | |             |   |-UnaryOperator 0x564f7febebe0 <col:22, <scratch space>:109:1> 'long' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x564f7febebc0 <col:1> 'long' 9223372036854775807
|       |   | |             |   `-ImplicitCastExpr 0x564f7febec18 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   | |             |     `-IntegerLiteral 0x564f7febebf8 <col:54> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x564f7febec90 </usr/include/safe_math.h:453:111> 'int64_t':'long' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x564f7febec70 <col:111> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   | `-ParenExpr 0x564f7febf0e0 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x564f7febf0c0 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x564f7febef00 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x564f7febee30 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x564f7febee10 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x564f7febede0 <col:123> 'int64_t':'long' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x564f7febeda0 <col:123> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   |     | |   `-ImplicitCastExpr 0x564f7febedf8 <col:130> 'int64_t':'long' <IntegralCast>
|       |   |     | |     `-IntegerLiteral 0x564f7febedc0 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x564f7febeee0 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x564f7febeec0 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x564f7febee90 <col:137> 'int64_t':'long' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x564f7febee50 <col:137> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   |     |     `-ImplicitCastExpr 0x564f7febeea8 <col:143> 'int64_t':'long' <IntegralCast>
|       |   |     |       `-IntegerLiteral 0x564f7febee70 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x564f7febf0a0 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x564f7febf080 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x564f7febf068 <col:150> 'int64_t':'long' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x564f7febef20 <col:150> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |   |         `-ParenExpr 0x564f7febf048 <col:156, col:172> 'long'
|       |   |           `-BinaryOperator 0x564f7febf028 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:169> 'long' '/'
|       |   |             |-ParenExpr 0x564f7febefd0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   |             | `-BinaryOperator 0x564f7febefb0 <col:22, col:54> 'long' '-'
|       |   |             |   |-UnaryOperator 0x564f7febef60 <col:22, <scratch space>:110:1> 'long' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x564f7febef40 <col:1> 'long' 9223372036854775807
|       |   |             |   `-ImplicitCastExpr 0x564f7febef98 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   |             |     `-IntegerLiteral 0x564f7febef78 <col:54> 'int' 1
|       |   |             `-ImplicitCastExpr 0x564f7febf010 </usr/include/safe_math.h:453:169> 'int64_t':'long' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x564f7febeff0 <col:169> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x564f7febf4c0 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x564f7febf4a0 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x564f7febf350 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x564f7febf280 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x564f7febf1b0 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x564f7febf190 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x564f7febf160 <col:181> 'int64_t':'long' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x564f7febf120 <col:181> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |       | | |   `-ImplicitCastExpr 0x564f7febf178 <col:188> 'int64_t':'long' <IntegralCast>
|       |       | | |     `-IntegerLiteral 0x564f7febf140 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x564f7febf260 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x564f7febf240 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x564f7febf210 <col:195> 'int64_t':'long' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x564f7febf1d0 <col:195> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |       | |     `-ImplicitCastExpr 0x564f7febf228 <col:202> 'int64_t':'long' <IntegralCast>
|       |       | |       `-IntegerLiteral 0x564f7febf1f0 <col:202> 'int' 0
|       |       | `-ParenExpr 0x564f7febf330 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x564f7febf310 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x564f7febf2e0 <col:209> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x564f7febf2a0 <col:209> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x564f7febf2f8 <col:216> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x564f7febf2c0 <col:216> 'int' 0
|       |       `-ParenExpr 0x564f7febf480 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x564f7febf460 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x564f7febf448 <col:223> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7febf370 <col:223> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|       |           `-ParenExpr 0x564f7febf428 <col:229, col:245> 'long'
|       |             `-BinaryOperator 0x564f7febf408 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:242> 'long' '/'
|       |               |-ParenExpr 0x564f7febf3b0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |               | `-IntegerLiteral 0x564f7febf390 <<scratch space>:111:1> 'long' 9223372036854775807
|       |               `-ImplicitCastExpr 0x564f7febf3f0 </usr/include/safe_math.h:453:242> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x564f7febf3d0 <col:242> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       |-ImplicitCastExpr 0x564f7febf610 <line:454:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7febf560 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7febf540 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7febf520 </usr/include/safe_math.h:454:16> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|       `-BinaryOperator 0x564f7febf5f0 <line:457:5, col:11> 'int64_t':'long' '*'
|         |-ImplicitCastExpr 0x564f7febf5c0 <col:5> 'int64_t':'long' <LValueToRValue>
|         | `-DeclRefExpr 0x564f7febf580 <col:5> 'int64_t':'long' lvalue ParmVar 0x564f7febe560 'si1' 'int64_t':'long'
|         `-ImplicitCastExpr 0x564f7febf5d8 <col:11> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x564f7febf5a0 <col:11> 'int64_t':'long' lvalue ParmVar 0x564f7febe5d8 'si2' 'int64_t':'long'
|-FunctionDecl 0x564f7febf7a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:470:1> <scratch space>:112:1 safe_mod_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x564f7febf690 </usr/include/safe_math.h:461:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x564f7febf708 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x564f7febfd08 <line:462:1, line:470:1>
|   `-ReturnStmt 0x564f7febfcf8 <line:464:3, line:469:15>
|     `-ConditionalOperator 0x564f7febfcc8 <line:466:5, line:469:15> 'int64_t':'long'
|       |-ParenExpr 0x564f7febfb80 <line:466:5, col:57> 'int'
|       | `-BinaryOperator 0x564f7febfb60 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x564f7febf8f0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7febf8d0 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x564f7febf8a0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7febf860 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7febf708 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x564f7febf8b8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x564f7febf880 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7febfb40 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x564f7febfb20 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x564f7febfa18 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x564f7febf9f8 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x564f7febf9e0 </usr/include/safe_math.h:466:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x564f7febf910 <col:22> 'int64_t':'long' lvalue ParmVar 0x564f7febf690 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x564f7febf9c0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x564f7febf9a0 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x564f7febf950 <col:22, <scratch space>:113:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x564f7febf930 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x564f7febf988 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x564f7febf968 <col:54> 'int' 1
|       |       `-ParenExpr 0x564f7febfb00 </usr/include/safe_math.h:466:43, col:55> 'int'
|       |         `-BinaryOperator 0x564f7febfae0 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x564f7febfab0 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7febfa38 <col:44> 'int64_t':'long' lvalue ParmVar 0x564f7febf708 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x564f7febfac8 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x564f7febfa90 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x564f7febfa78 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x564f7febfa58 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x564f7febfcb0 <line:467:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7febfbe0 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7febfbc0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7febfba0 </usr/include/safe_math.h:467:16> 'int64_t':'long' lvalue ParmVar 0x564f7febf690 'si1' 'int64_t':'long'
|       `-ParenExpr 0x564f7febfc90 <line:469:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x564f7febfc70 <col:6, col:12> 'int64_t':'long' '%'
|           |-ImplicitCastExpr 0x564f7febfc40 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7febfc00 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febf690 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x564f7febfc58 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7febfc20 <col:12> 'int64_t':'long' lvalue ParmVar 0x564f7febf708 'si2' 'int64_t':'long'
|-FunctionDecl 0x564f7febfe48 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:482:1> <scratch space>:114:1 safe_div_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x564f7febfd30 </usr/include/safe_math.h:473:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x564f7febfda8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x564f7fec03a8 <line:474:1, line:482:1>
|   `-ReturnStmt 0x564f7fec0398 <line:476:3, line:481:15>
|     `-ConditionalOperator 0x564f7fec0368 <line:478:5, line:481:15> 'int64_t':'long'
|       |-ParenExpr 0x564f7fec0220 <line:478:5, col:57> 'int'
|       | `-BinaryOperator 0x564f7fec0200 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x564f7febff90 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7febff70 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x564f7febff40 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7febff00 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7febfda8 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x564f7febff58 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x564f7febff20 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7fec01e0 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x564f7fec01c0 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x564f7fec00b8 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x564f7fec0098 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x564f7fec0080 </usr/include/safe_math.h:478:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x564f7febffb0 <col:22> 'int64_t':'long' lvalue ParmVar 0x564f7febfd30 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x564f7fec0060 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x564f7fec0040 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x564f7febfff0 <col:22, <scratch space>:115:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x564f7febffd0 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x564f7fec0028 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x564f7fec0008 <col:54> 'int' 1
|       |       `-ParenExpr 0x564f7fec01a0 </usr/include/safe_math.h:478:43, col:55> 'int'
|       |         `-BinaryOperator 0x564f7fec0180 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x564f7fec0150 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x564f7fec00d8 <col:44> 'int64_t':'long' lvalue ParmVar 0x564f7febfda8 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x564f7fec0168 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x564f7fec0130 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x564f7fec0118 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x564f7fec00f8 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x564f7fec0350 <line:479:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fec0280 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7fec0260 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7fec0240 </usr/include/safe_math.h:479:16> 'int64_t':'long' lvalue ParmVar 0x564f7febfd30 'si1' 'int64_t':'long'
|       `-ParenExpr 0x564f7fec0330 <line:481:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x564f7fec0310 <col:6, col:12> 'int64_t':'long' '/'
|           |-ImplicitCastExpr 0x564f7fec02e0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fec02a0 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7febfd30 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x564f7fec02f8 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec02c0 <col:12> 'int64_t':'long' lvalue ParmVar 0x564f7febfda8 'si2' 'int64_t':'long'
|-FunctionDecl 0x564f7fec05b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:494:1> <scratch space>:116:1 safe_lshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x564f7fec03d0 </usr/include/safe_math.h:485:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x564f7fec0460 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7fec0ce8 <line:486:1, line:494:1>
|   `-ReturnStmt 0x564f7fec0cd8 <line:488:3, line:493:26>
|     `-ConditionalOperator 0x564f7fec0ca8 <line:490:5, line:493:26> 'int64_t':'long'
|       |-ParenExpr 0x564f7fec0b00 <line:490:5, col:102> 'int'
|       | `-BinaryOperator 0x564f7fec0ae0 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x564f7fec0930 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x564f7fec0818 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x564f7fec0700 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x564f7fec06e0 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x564f7fec06b0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x564f7fec0670 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7fec03d0 'left' 'int64_t':'long'
|       |   | | |   `-ImplicitCastExpr 0x564f7fec06c8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |     `-IntegerLiteral 0x564f7fec0690 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x564f7fec07f8 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x564f7fec07d8 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x564f7fec0798 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x564f7fec0770 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x564f7fec0758 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x564f7fec0720 <col:27> 'int' lvalue ParmVar 0x564f7fec0460 'right' 'int'
|       |   | |     `-IntegerLiteral 0x564f7fec07b8 <col:36> 'int' 0
|       |   | `-ParenExpr 0x564f7fec0910 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x564f7fec08f0 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x564f7fec08b0 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7fec0888 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7fec0870 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7fec0838 <col:49> 'int' lvalue ParmVar 0x564f7fec0460 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7fec08d0 <col:59> 'int' 32
|       |   `-ParenExpr 0x564f7fec0ac0 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x564f7fec0aa0 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fec0a88 <col:67> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fec0950 <col:67> 'int64_t':'long' lvalue ParmVar 0x564f7fec03d0 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x564f7fec0a68 <col:74, col:100> 'long'
|       |         `-BinaryOperator 0x564f7fec0a48 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:490:99> 'long' '>>'
|       |           |-ParenExpr 0x564f7fec0990 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x564f7fec0970 <<scratch space>:117:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x564f7fec0a28 </usr/include/safe_math.h:490:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x564f7fec0a00 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7fec09e8 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fec09b0 <col:94> 'int' lvalue ParmVar 0x564f7fec0460 'right' 'int'
|       |-ImplicitCastExpr 0x564f7fec0c90 <line:491:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fec0b60 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7fec0b40 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7fec0b20 </usr/include/safe_math.h:491:16> 'int64_t':'long' lvalue ParmVar 0x564f7fec03d0 'left' 'int64_t':'long'
|       `-ParenExpr 0x564f7fec0c70 <line:493:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x564f7fec0c50 <col:6, col:25> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x564f7fec0c38 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fec0b80 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7fec03d0 'left' 'int64_t':'long'
|           `-ParenExpr 0x564f7fec0c18 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fec0bf0 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fec0bd8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fec0ba0 <col:20> 'int' lvalue ParmVar 0x564f7fec0460 'right' 'int'
|-FunctionDecl 0x564f7fec0ee8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:506:1> <scratch space>:118:1 safe_lshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fec0d10 </usr/include/safe_math.h:497:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x564f7fec0d90 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7fec1518 <line:498:1, line:506:1>
|   `-ReturnStmt 0x564f7fec1508 <line:500:3, line:505:35>
|     `-ConditionalOperator 0x564f7fec14d8 <line:502:5, line:505:35> 'int64_t':'long'
|       |-ParenExpr 0x564f7fec1330 <line:502:5, col:98> 'int'
|       | `-BinaryOperator 0x564f7fec1310 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x564f7fec1160 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x564f7fec1030 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x564f7fec1010 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x564f7fec0fe0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x564f7fec0fa0 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7fec0d10 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x564f7fec0ff8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x564f7fec0fc0 <col:14> 'int' 0
|       |   | `-ParenExpr 0x564f7fec1140 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x564f7fec1120 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x564f7fec10c8 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x564f7fec10a0 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7fec1088 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7fec1050 <col:36> 'unsigned int' lvalue ParmVar 0x564f7fec0d90 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x564f7fec1108 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x564f7fec10e8 <col:46> 'int' 32
|       |   `-ParenExpr 0x564f7fec12f0 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x564f7fec12d0 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fec12b8 <col:54> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fec1180 <col:54> 'int64_t':'long' lvalue ParmVar 0x564f7fec0d10 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x564f7fec1298 <col:61, col:96> 'long'
|       |         `-BinaryOperator 0x564f7fec1278 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:502:95> 'long' '>>'
|       |           |-ParenExpr 0x564f7fec11c0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x564f7fec11a0 <<scratch space>:119:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x564f7fec1258 </usr/include/safe_math.h:502:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x564f7fec1230 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7fec1218 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fec11e0 <col:90> 'unsigned int' lvalue ParmVar 0x564f7fec0d90 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x564f7fec14c0 <line:503:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fec1390 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7fec1370 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7fec1350 </usr/include/safe_math.h:503:16> 'int64_t':'long' lvalue ParmVar 0x564f7fec0d10 'left' 'int64_t':'long'
|       `-ParenExpr 0x564f7fec14a0 <line:505:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x564f7fec1480 <col:6, col:34> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x564f7fec1468 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fec13b0 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7fec0d10 'left' 'int64_t':'long'
|           `-ParenExpr 0x564f7fec1448 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fec1420 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fec1408 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fec13d0 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fec0d90 'right' 'unsigned int'
|-FunctionDecl 0x564f7fec1660 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:518:1> <scratch space>:120:1 safe_rshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x564f7fec1540 </usr/include/safe_math.h:509:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x564f7fec15c0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7fec1be0 <line:510:1, line:518:1>
|   `-ReturnStmt 0x564f7fec1bd0 <line:512:3, line:517:26>
|     `-ConditionalOperator 0x564f7fec1ba0 <line:514:5, line:517:26> 'int64_t':'long'
|       |-ParenExpr 0x564f7fec19f8 <line:514:5, col:62> 'int'
|       | `-BinaryOperator 0x564f7fec19d8 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x564f7fec18c0 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x564f7fec17a8 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x564f7fec1788 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x564f7fec1758 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x564f7fec1718 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7fec1540 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x564f7fec1770 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x564f7fec1738 <col:14> 'int' 0
|       |   | `-ParenExpr 0x564f7fec18a0 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x564f7fec1880 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x564f7fec1840 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7fec1818 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7fec1800 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7fec17c8 <col:27> 'int' lvalue ParmVar 0x564f7fec15c0 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7fec1860 <col:36> 'int' 0
|       |   `-ParenExpr 0x564f7fec19b8 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x564f7fec1998 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x564f7fec1958 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x564f7fec1930 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7fec1918 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7fec18e0 <col:49> 'int' lvalue ParmVar 0x564f7fec15c0 'right' 'int'
|       |       `-IntegerLiteral 0x564f7fec1978 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x564f7fec1b88 <line:515:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fec1a58 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7fec1a38 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7fec1a18 </usr/include/safe_math.h:515:16> 'int64_t':'long' lvalue ParmVar 0x564f7fec1540 'left' 'int64_t':'long'
|       `-ParenExpr 0x564f7fec1b68 <line:517:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x564f7fec1b48 <col:6, col:25> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x564f7fec1b30 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fec1a78 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7fec1540 'left' 'int64_t':'long'
|           `-ParenExpr 0x564f7fec1b10 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fec1ae8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fec1ad0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fec1a98 <col:20> 'int' lvalue ParmVar 0x564f7fec15c0 'right' 'int'
|-FunctionDecl 0x564f7fec1d28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:530:1> <scratch space>:121:1 safe_rshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fec1c08 </usr/include/safe_math.h:521:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x564f7fec1c88 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7fec21a8 <line:522:1, line:530:1>
|   `-ReturnStmt 0x564f7fec2198 <line:524:3, line:529:35>
|     `-ConditionalOperator 0x564f7fec2168 <line:526:5, line:529:35> 'int64_t':'long'
|       |-ParenExpr 0x564f7fec1fc0 <line:526:5, col:49> 'int'
|       | `-BinaryOperator 0x564f7fec1fa0 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x564f7fec1e70 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x564f7fec1e50 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x564f7fec1e20 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7fec1de0 <col:7> 'int64_t':'long' lvalue ParmVar 0x564f7fec1c08 'left' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x564f7fec1e38 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x564f7fec1e00 <col:14> 'int' 0
|       |   `-ParenExpr 0x564f7fec1f80 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x564f7fec1f60 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x564f7fec1f08 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x564f7fec1ee0 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7fec1ec8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7fec1e90 <col:36> 'unsigned int' lvalue ParmVar 0x564f7fec1c88 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x564f7fec1f48 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x564f7fec1f28 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x564f7fec2150 <line:527:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fec2020 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x564f7fec2000 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x564f7fec1fe0 </usr/include/safe_math.h:527:16> 'int64_t':'long' lvalue ParmVar 0x564f7fec1c08 'left' 'int64_t':'long'
|       `-ParenExpr 0x564f7fec2130 <line:529:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x564f7fec2110 <col:6, col:34> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x564f7fec20f8 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fec2040 <col:6> 'int64_t':'long' lvalue ParmVar 0x564f7fec1c08 'left' 'int64_t':'long'
|           `-ParenExpr 0x564f7fec20d8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fec20b0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fec2098 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fec2060 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fec1c88 'right' 'unsigned int'
|-FunctionDecl 0x564f7fec2380 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:543:1> <scratch space>:122:1 safe_unary_minus_func_uint8_t_u 'uint8_t (uint8_t)' static
| |-ParmVarDecl 0x564f7fec2230 </usr/include/safe_math.h:539:39, col:47> col:47 used ui 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec34f0 <line:540:1, line:543:1>
|   `-ReturnStmt 0x564f7fec34e0 <line:542:3, col:11>
|     `-ImplicitCastExpr 0x564f7fec34c8 <col:10, col:11> 'uint8_t':'unsigned char' <IntegralCast>
|       `-UnaryOperator 0x564f7fec34b0 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x564f7fec3498 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec3480 <col:11> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec2430 <col:11> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec2230 'ui' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec36e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:550:1> <scratch space>:123:1 safe_add_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x564f7fec3518 </usr/include/safe_math.h:546:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec3590 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec3888 <line:547:1, line:550:1>
|   `-ReturnStmt 0x564f7fec3878 <line:549:3, col:16>
|     `-ImplicitCastExpr 0x564f7fec3860 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x564f7fec3840 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x564f7fec37f8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec37e0 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fec37a0 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3518 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x564f7fec3828 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec3810 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec37c0 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3590 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec39c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:557:1> <scratch space>:124:1 safe_sub_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x564f7fec38b0 </usr/include/safe_math.h:553:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec3928 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec3b68 <line:554:1, line:557:1>
|   `-ReturnStmt 0x564f7fec3b58 <line:556:3, col:16>
|     `-ImplicitCastExpr 0x564f7fec3b40 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x564f7fec3b20 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x564f7fec3ad8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec3ac0 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fec3a80 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec38b0 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x564f7fec3b08 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec3af0 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec3aa0 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3928 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec3ca8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:564:1> <scratch space>:125:1 safe_mul_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x564f7fec3b90 </usr/include/safe_math.h:560:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec3c08 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec3ed8 <line:561:1, line:564:1>
|   `-ReturnStmt 0x564f7fec3ec8 <line:563:3, col:50>
|     `-ImplicitCastExpr 0x564f7fec3eb0 <col:10, col:50> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x564f7fec3e90 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x564f7fec3dd8 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x564f7fec3db0 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x564f7fec3d98 <col:25> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x564f7fec3d60 <col:25> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3b90 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec3e70 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x564f7fec3e48 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7fec3e30 <col:47> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x564f7fec3df8 <col:47> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3c08 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec4018 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:576:1> <scratch space>:126:1 safe_mod_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x564f7fec3f00 </usr/include/safe_math.h:567:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec3f78 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec4348 <line:568:1, line:576:1>
|   `-ReturnStmt 0x564f7fec4338 <line:570:3, line:575:15>
|     `-ImplicitCastExpr 0x564f7fec4320 <line:572:5, line:575:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec42f0 <line:572:5, line:575:15> 'int'
|         |-ParenExpr 0x564f7fec4160 <line:572:5, col:14> 'int'
|         | `-BinaryOperator 0x564f7fec4140 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x564f7fec4128 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x564f7fec4110 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x564f7fec40d0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3f78 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x564f7fec40f0 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x564f7fec42d8 <line:573:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec42c0 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec41c0 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec41a0 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec4180 </usr/include/safe_math.h:573:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3f00 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec42a0 <line:575:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fec4280 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x564f7fec4238 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec4220 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec41e0 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3f00 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x564f7fec4268 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fec4250 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fec4200 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec3f78 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec4488 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:588:1> <scratch space>:127:1 safe_div_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x564f7fec4370 </usr/include/safe_math.h:579:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec43e8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fec47b8 <line:580:1, line:588:1>
|   `-ReturnStmt 0x564f7fec47a8 <line:582:3, line:587:15>
|     `-ImplicitCastExpr 0x564f7fec4790 <line:584:5, line:587:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec4760 <line:584:5, line:587:15> 'int'
|         |-ParenExpr 0x564f7fec45d0 <line:584:5, col:14> 'int'
|         | `-BinaryOperator 0x564f7fec45b0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x564f7fec4598 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x564f7fec4580 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x564f7fec4540 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec43e8 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x564f7fec4560 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x564f7fec4748 <line:585:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec4730 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec4630 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec4610 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec45f0 </usr/include/safe_math.h:585:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec4370 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec4710 <line:587:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fec46f0 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x564f7fec46a8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec4690 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec4650 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec4370 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x564f7fec46d8 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fec46c0 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fec4670 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec43e8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x564f7fec49b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:600:1> <scratch space>:128:1 safe_lshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x564f7fec47e0 </usr/include/safe_math.h:591:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec4860 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7fec5078 <line:592:1, line:600:1>
|   `-ReturnStmt 0x564f7fec5068 <line:594:3, line:599:26>
|     `-ImplicitCastExpr 0x564f7fec5050 <line:596:5, line:599:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec5020 <line:596:5, line:599:26> 'int'
|         |-ParenExpr 0x564f7fec4e48 <line:596:5, col:88> 'int'
|         | `-BinaryOperator 0x564f7fec4e28 <col:6, col:87> 'int' '||'
|         |   |-BinaryOperator 0x564f7fec4c60 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x564f7fec4b48 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x564f7fec4b28 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x564f7fec4ae8 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x564f7fec4ac0 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x564f7fec4aa8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x564f7fec4a70 <col:13> 'int' lvalue ParmVar 0x564f7fec4860 'right' 'int'
|         |   | |   `-IntegerLiteral 0x564f7fec4b08 <col:22> 'int' 0
|         |   | `-ParenExpr 0x564f7fec4c40 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x564f7fec4c20 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x564f7fec4be0 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7fec4bb8 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7fec4ba0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7fec4b68 <col:35> 'int' lvalue ParmVar 0x564f7fec4860 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7fec4c00 <col:45> 'int' 32
|         |   `-ParenExpr 0x564f7fec4e08 <col:52, col:87> 'int'
|         |     `-BinaryOperator 0x564f7fec4de8 <col:53, col:86> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7fec4dd0 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7fec4db8 <col:53> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7fec4c80 <col:53> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec47e0 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x564f7fec4d98 <col:60, col:86> 'int'
|         |         `-BinaryOperator 0x564f7fec4d78 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:596:85> 'int' '>>'
|         |           |-ParenExpr 0x564f7fec4cc0 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x564f7fec4ca0 <col:22> 'int' 255
|         |           `-ParenExpr 0x564f7fec4d58 </usr/include/safe_math.h:596:74, col:85> 'int'
|         |             `-CStyleCastExpr 0x564f7fec4d30 <col:75, col:80> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7fec4d18 <col:80> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7fec4ce0 <col:80> 'int' lvalue ParmVar 0x564f7fec4860 'right' 'int'
|         |-ImplicitCastExpr 0x564f7fec5008 <line:597:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec4ff0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec4ea8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec4e88 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec4e68 </usr/include/safe_math.h:597:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec47e0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec4fd0 <line:599:5, col:26> 'int'
|           `-BinaryOperator 0x564f7fec4fb0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7fec4f98 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec4f80 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec4ec8 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec47e0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x564f7fec4f60 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7fec4f38 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fec4f20 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fec4ee8 <col:20> 'int' lvalue ParmVar 0x564f7fec4860 'right' 'int'
|-FunctionDecl 0x564f7fec5278 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:612:1> <scratch space>:129:1 safe_lshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fec50a0 </usr/include/safe_math.h:603:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec5120 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7fec5848 <line:604:1, line:612:1>
|   `-ReturnStmt 0x564f7fec5838 <line:606:3, line:611:35>
|     `-ImplicitCastExpr 0x564f7fec5820 <line:608:5, line:611:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec57f0 <line:608:5, line:611:35> 'int'
|         |-ParenExpr 0x564f7fec5618 <line:608:5, col:84> 'int'
|         | `-BinaryOperator 0x564f7fec55f8 <col:6, col:83> 'int' '||'
|         |   |-ParenExpr 0x564f7fec5420 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x564f7fec5400 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x564f7fec53a8 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x564f7fec5380 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x564f7fec5368 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x564f7fec5330 <col:22> 'unsigned int' lvalue ParmVar 0x564f7fec5120 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x564f7fec53e8 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x564f7fec53c8 <col:32> 'int' 32
|         |   `-ParenExpr 0x564f7fec55d8 <col:39, col:83> 'int'
|         |     `-BinaryOperator 0x564f7fec55b8 <col:40, col:82> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7fec55a0 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7fec5588 <col:40> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7fec5440 <col:40> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec50a0 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x564f7fec5568 <col:47, col:82> 'int'
|         |         `-BinaryOperator 0x564f7fec5548 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:608:81> 'int' '>>'
|         |           |-ParenExpr 0x564f7fec5490 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x564f7fec5460 <col:22> 'int' 255
|         |           `-ParenExpr 0x564f7fec5528 </usr/include/safe_math.h:608:61, col:81> 'unsigned int'
|         |             `-CStyleCastExpr 0x564f7fec5500 <col:62, col:76> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7fec54e8 <col:76> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7fec54b0 <col:76> 'unsigned int' lvalue ParmVar 0x564f7fec5120 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x564f7fec57d8 <line:609:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec57c0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec5678 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec5658 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec5638 </usr/include/safe_math.h:609:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec50a0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec57a0 <line:611:5, col:35> 'int'
|           `-BinaryOperator 0x564f7fec5780 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7fec5768 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec5750 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec5698 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec50a0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x564f7fec5730 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7fec5708 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fec56f0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fec56b8 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fec5120 'right' 'unsigned int'
|-FunctionDecl 0x564f7fec5990 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:624:1> <scratch space>:130:1 safe_rshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x564f7fec5870 </usr/include/safe_math.h:615:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec58f0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x564f7fec5e88 <line:616:1, line:624:1>
|   `-ReturnStmt 0x564f7fec5e78 <line:618:3, line:623:26>
|     `-ImplicitCastExpr 0x564f7fec5e60 <line:620:5, line:623:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec5e30 <line:620:5, line:623:26> 'int'
|         |-ParenExpr 0x564f7fec5c58 <line:620:5, col:48> 'int'
|         | `-BinaryOperator 0x564f7fec5c38 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x564f7fec5b20 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x564f7fec5b00 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x564f7fec5ac0 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x564f7fec5a98 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x564f7fec5a80 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x564f7fec5a48 <col:13> 'int' lvalue ParmVar 0x564f7fec58f0 'right' 'int'
|         |   |   `-IntegerLiteral 0x564f7fec5ae0 <col:22> 'int' 0
|         |   `-ParenExpr 0x564f7fec5c18 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x564f7fec5bf8 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x564f7fec5bb8 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x564f7fec5b90 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7fec5b78 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7fec5b40 <col:35> 'int' lvalue ParmVar 0x564f7fec58f0 'right' 'int'
|         |       `-IntegerLiteral 0x564f7fec5bd8 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x564f7fec5e18 <line:621:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec5e00 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec5cb8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec5c98 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec5c78 </usr/include/safe_math.h:621:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec5870 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec5de0 <line:623:5, col:26> 'int'
|           `-BinaryOperator 0x564f7fec5dc0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7fec5da8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec5d90 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec5cd8 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec5870 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x564f7fec5d70 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7fec5d48 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fec5d30 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fec5cf8 <col:20> 'int' lvalue ParmVar 0x564f7fec58f0 'right' 'int'
|-FunctionDecl 0x564f7fec5fd0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:636:1> <scratch space>:131:1 safe_rshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fec5eb0 </usr/include/safe_math.h:627:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x564f7fec5f30 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x564f7fec63a8 <line:628:1, line:636:1>
|   `-ReturnStmt 0x564f7fec6398 <line:630:3, line:635:35>
|     `-ImplicitCastExpr 0x564f7fec6380 <line:632:5, line:635:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x564f7fec6350 <line:632:5, line:635:35> 'int'
|         |-ParenExpr 0x564f7fec6178 <line:632:5, col:33> 'int'
|         | `-BinaryOperator 0x564f7fec6158 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x564f7fec6100 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x564f7fec60d8 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x564f7fec60c0 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x564f7fec6088 <col:21> 'unsigned int' lvalue ParmVar 0x564f7fec5f30 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x564f7fec6140 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x564f7fec6120 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x564f7fec6338 <line:633:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec6320 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec61d8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x564f7fec61b8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x564f7fec6198 </usr/include/safe_math.h:633:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec5eb0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x564f7fec6300 <line:635:5, col:35> 'int'
|           `-BinaryOperator 0x564f7fec62e0 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7fec62c8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec62b0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec61f8 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fec5eb0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x564f7fec6290 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7fec6268 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fec6250 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fec6218 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fec5f30 'right' 'unsigned int'
|-FunctionDecl 0x564f7fec6580 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:645:1> <scratch space>:132:1 safe_unary_minus_func_uint16_t_u 'uint16_t (uint16_t)' static
| |-ParmVarDecl 0x564f7fec6430 </usr/include/safe_math.h:641:40, col:49> col:49 used ui 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fec66c0 <line:642:1, line:645:1>
|   `-ReturnStmt 0x564f7fec66b0 <line:644:3, col:11>
|     `-ImplicitCastExpr 0x564f7fec6698 <col:10, col:11> 'uint16_t':'unsigned short' <IntegralCast>
|       `-UnaryOperator 0x564f7fec6680 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x564f7fec6668 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec6650 <col:11> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec6630 <col:11> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6430 'ui' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fec68b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:652:1> <scratch space>:133:1 safe_add_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x564f7fec66e8 </usr/include/safe_math.h:648:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fec6760 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fec6a58 <line:649:1, line:652:1>
|   `-ReturnStmt 0x564f7fec6a48 <line:651:3, col:16>
|     `-ImplicitCastExpr 0x564f7fec6a30 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x564f7fec6a10 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x564f7fec69c8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec69b0 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fec6970 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec66e8 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x564f7fec69f8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec69e0 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec6990 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6760 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fec6b98 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:659:1> <scratch space>:134:1 safe_sub_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x564f7fec6a80 </usr/include/safe_math.h:655:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fec6af8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fec6d38 <line:656:1, line:659:1>
|   `-ReturnStmt 0x564f7fec6d28 <line:658:3, col:16>
|     `-ImplicitCastExpr 0x564f7fec6d10 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x564f7fec6cf0 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x564f7fec6ca8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fec6c90 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fec6c50 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6a80 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x564f7fec6cd8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x564f7fec6cc0 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fec6c70 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6af8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fec6e78 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:666:1> <scratch space>:135:1 safe_mul_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x564f7fec6d60 </usr/include/safe_math.h:662:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fec6dd8 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fec70a8 <line:663:1, line:666:1>
|   `-ReturnStmt 0x564f7fec7098 <line:665:3, col:50>
|     `-ImplicitCastExpr 0x564f7fec7080 <col:10, col:50> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x564f7fec7060 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x564f7fec6fa8 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x564f7fec6f80 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x564f7fec6f68 <col:25> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x564f7fec6f30 <col:25> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6d60 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fec7040 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x564f7fec7018 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7fec7000 <col:47> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x564f7fec6fc8 <col:47> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec6dd8 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fec71e8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:678:1> <scratch space>:136:1 safe_mod_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x564f7fec70d0 </usr/include/safe_math.h:669:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fec7148 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fe2ecb8 <line:670:1, line:678:1>
|   `-ReturnStmt 0x564f7fe2eca8 <line:672:3, line:677:15>
|     `-ImplicitCastExpr 0x564f7fe2ec90 <line:674:5, line:677:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fe2ec60 <line:674:5, line:677:15> 'int'
|         |-ParenExpr 0x564f7fec7330 <line:674:5, col:14> 'int'
|         | `-BinaryOperator 0x564f7fec7310 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x564f7fec72f8 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x564f7fec72e0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x564f7fec72a0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec7148 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x564f7fec72c0 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x564f7fe2ec48 <line:675:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fe2ec30 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fec7390 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fec7370 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fec7350 </usr/include/safe_math.h:675:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec70d0 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fec7470 <line:677:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fec7450 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x564f7fec7408 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fec73f0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fec73b0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec70d0 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x564f7fec7438 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fec7420 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fec73d0 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fec7148 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fe2edf8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:690:1> <scratch space>:137:1 safe_div_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x564f7fe2ece0 </usr/include/safe_math.h:681:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fe2ed58 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x564f7fe2f128 <line:682:1, line:690:1>
|   `-ReturnStmt 0x564f7fe2f118 <line:684:3, line:689:15>
|     `-ImplicitCastExpr 0x564f7fe2f100 <line:686:5, line:689:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fe2f0d0 <line:686:5, line:689:15> 'int'
|         |-ParenExpr 0x564f7fe2ef40 <line:686:5, col:14> 'int'
|         | `-BinaryOperator 0x564f7fe2ef20 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x564f7fe2ef08 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x564f7fe2eef0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x564f7fe2eeb0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2ed58 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x564f7fe2eed0 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x564f7fe2f0b8 <line:687:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fe2f0a0 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fe2efa0 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fe2ef80 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fe2ef60 </usr/include/safe_math.h:687:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2ece0 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fe2f080 <line:689:5, col:15> 'int'
|           `-BinaryOperator 0x564f7fe2f060 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x564f7fe2f018 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fe2f000 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fe2efc0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2ece0 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x564f7fe2f048 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x564f7fe2f030 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x564f7fe2efe0 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2ed58 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x564f7fe2f328 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:702:1> <scratch space>:138:1 safe_lshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x564f7fe2f150 </usr/include/safe_math.h:693:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fe2f1d0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fe2f9e8 <line:694:1, line:702:1>
|   `-ReturnStmt 0x564f7fe2f9d8 <line:696:3, line:701:26>
|     `-ImplicitCastExpr 0x564f7fe2f9c0 <line:698:5, line:701:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fe2f990 <line:698:5, line:701:26> 'int'
|         |-ParenExpr 0x564f7fe2f7b8 <line:698:5, col:89> 'int'
|         | `-BinaryOperator 0x564f7fe2f798 <col:6, col:88> 'int' '||'
|         |   |-BinaryOperator 0x564f7fe2f5d0 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x564f7fe2f4b8 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x564f7fe2f498 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x564f7fe2f458 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x564f7fe2f430 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x564f7fe2f418 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x564f7fe2f3e0 <col:13> 'int' lvalue ParmVar 0x564f7fe2f1d0 'right' 'int'
|         |   | |   `-IntegerLiteral 0x564f7fe2f478 <col:22> 'int' 0
|         |   | `-ParenExpr 0x564f7fe2f5b0 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x564f7fe2f590 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x564f7fe2f550 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x564f7fe2f528 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x564f7fe2f510 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x564f7fe2f4d8 <col:35> 'int' lvalue ParmVar 0x564f7fe2f1d0 'right' 'int'
|         |   |     `-IntegerLiteral 0x564f7fe2f570 <col:45> 'int' 32
|         |   `-ParenExpr 0x564f7fe2f778 <col:52, col:88> 'int'
|         |     `-BinaryOperator 0x564f7fe2f758 <col:53, col:87> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7fe2f740 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7fe2f728 <col:53> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7fe2f5f0 <col:53> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2f150 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x564f7fe2f708 <col:60, col:87> 'int'
|         |         `-BinaryOperator 0x564f7fe2f6e8 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:698:86> 'int' '>>'
|         |           |-ParenExpr 0x564f7fe2f630 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x564f7fe2f610 <col:23> 'int' 65535
|         |           `-ParenExpr 0x564f7fe2f6c8 </usr/include/safe_math.h:698:75, col:86> 'int'
|         |             `-CStyleCastExpr 0x564f7fe2f6a0 <col:76, col:81> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7fe2f688 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7fe2f650 <col:81> 'int' lvalue ParmVar 0x564f7fe2f1d0 'right' 'int'
|         |-ImplicitCastExpr 0x564f7fe2f978 <line:699:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fe2f960 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fe2f818 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fe2f7f8 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fe2f7d8 </usr/include/safe_math.h:699:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2f150 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fe2f940 <line:701:5, col:26> 'int'
|           `-BinaryOperator 0x564f7fe2f920 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7fe2f908 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fe2f8f0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fe2f838 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2f150 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x564f7fe2f8d0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7fe2f8a8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fe2f890 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fe2f858 <col:20> 'int' lvalue ParmVar 0x564f7fe2f1d0 'right' 'int'
|-FunctionDecl 0x564f7fe2fbe8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:714:1> <scratch space>:139:1 safe_lshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fe2fa10 </usr/include/safe_math.h:705:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fe2fa90 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fe301a8 <line:706:1, line:714:1>
|   `-ReturnStmt 0x564f7fe30198 <line:708:3, line:713:35>
|     `-ImplicitCastExpr 0x564f7fe30180 <line:710:5, line:713:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fe30150 <line:710:5, line:713:35> 'int'
|         |-ParenExpr 0x564f7fe2ff78 <line:710:5, col:85> 'int'
|         | `-BinaryOperator 0x564f7fe2ff58 <col:6, col:84> 'int' '||'
|         |   |-ParenExpr 0x564f7fe2fd90 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x564f7fe2fd70 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x564f7fe2fd18 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x564f7fe2fcf0 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x564f7fe2fcd8 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x564f7fe2fca0 <col:22> 'unsigned int' lvalue ParmVar 0x564f7fe2fa90 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x564f7fe2fd58 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x564f7fe2fd38 <col:32> 'int' 32
|         |   `-ParenExpr 0x564f7fe2ff38 <col:39, col:84> 'int'
|         |     `-BinaryOperator 0x564f7fe2ff18 <col:40, col:83> 'int' '>'
|         |       |-ImplicitCastExpr 0x564f7fe2ff00 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x564f7fe2fee8 <col:40> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x564f7fe2fdb0 <col:40> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2fa10 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x564f7fe2fec8 <col:47, col:83> 'int'
|         |         `-BinaryOperator 0x564f7fe2fea8 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:710:82> 'int' '>>'
|         |           |-ParenExpr 0x564f7fe2fdf0 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x564f7fe2fdd0 <col:23> 'int' 65535
|         |           `-ParenExpr 0x564f7fe2fe88 </usr/include/safe_math.h:710:62, col:82> 'unsigned int'
|         |             `-CStyleCastExpr 0x564f7fe2fe60 <col:63, col:77> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x564f7fe2fe48 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x564f7fe2fe10 <col:77> 'unsigned int' lvalue ParmVar 0x564f7fe2fa90 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x564f7fe30138 <line:711:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fe30120 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fe2ffd8 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fe2ffb8 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fe2ff98 </usr/include/safe_math.h:711:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2fa10 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fe30100 <line:713:5, col:35> 'int'
|           `-BinaryOperator 0x564f7fe300e0 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x564f7fe300c8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fe300b0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fe2fff8 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe2fa10 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x564f7fe30090 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7fe30068 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fe30050 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fe30018 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fe2fa90 'right' 'unsigned int'
|-FunctionDecl 0x564f7fe302f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:726:1> <scratch space>:140:1 safe_rshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x564f7fe301d0 </usr/include/safe_math.h:717:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fe30250 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fe307e8 <line:718:1, line:726:1>
|   `-ReturnStmt 0x564f7fe307d8 <line:720:3, line:725:26>
|     `-ImplicitCastExpr 0x564f7fe307c0 <line:722:5, line:725:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fe30790 <line:722:5, line:725:26> 'int'
|         |-ParenExpr 0x564f7fe305b8 <line:722:5, col:48> 'int'
|         | `-BinaryOperator 0x564f7fe30598 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x564f7fe30480 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x564f7fe30460 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x564f7fe30420 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x564f7fe303f8 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x564f7fe303e0 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x564f7fe303a8 <col:13> 'int' lvalue ParmVar 0x564f7fe30250 'right' 'int'
|         |   |   `-IntegerLiteral 0x564f7fe30440 <col:22> 'int' 0
|         |   `-ParenExpr 0x564f7fe30578 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x564f7fe30558 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x564f7fe30518 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x564f7fe304f0 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x564f7fe304d8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x564f7fe304a0 <col:35> 'int' lvalue ParmVar 0x564f7fe30250 'right' 'int'
|         |       `-IntegerLiteral 0x564f7fe30538 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x564f7fe30778 <line:723:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fe30760 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fe30618 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fe305f8 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fe305d8 </usr/include/safe_math.h:723:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe301d0 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fe30740 <line:725:5, col:26> 'int'
|           `-BinaryOperator 0x564f7fe30720 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7fe30708 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fe306f0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fe30638 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe301d0 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x564f7fe306d0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x564f7fe306a8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fe30690 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fe30658 <col:20> 'int' lvalue ParmVar 0x564f7fe30250 'right' 'int'
|-FunctionDecl 0x564f7fe30930 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:738:1> <scratch space>:141:1 safe_rshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fe30810 </usr/include/safe_math.h:729:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x564f7fe30890 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fecd590 <line:730:1, line:738:1>
|   `-ReturnStmt 0x564f7fecd580 <line:732:3, line:737:35>
|     `-ImplicitCastExpr 0x564f7fecd568 <line:734:5, line:737:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x564f7fecd538 <line:734:5, line:737:35> 'int'
|         |-ParenExpr 0x564f7fe30ad8 <line:734:5, col:33> 'int'
|         | `-BinaryOperator 0x564f7fe30ab8 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x564f7fe30a60 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x564f7fe30a38 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x564f7fe30a20 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x564f7fe309e8 <col:21> 'unsigned int' lvalue ParmVar 0x564f7fe30890 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x564f7fe30aa0 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x564f7fe30a80 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x564f7fecd520 <line:735:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x564f7fecd508 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x564f7fe30b38 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x564f7fe30b18 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x564f7fe30af8 </usr/include/safe_math.h:735:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe30810 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x564f7fecd4e8 <line:737:5, col:35> 'int'
|           `-BinaryOperator 0x564f7fecd4c8 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x564f7fecd4b0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x564f7fe30c10 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x564f7fe30b58 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x564f7fe30810 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x564f7fe30bf0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x564f7fe30bc8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x564f7fe30bb0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x564f7fe30b78 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fe30890 'right' 'unsigned int'
|-FunctionDecl 0x564f7fecd700 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:747:1> <scratch space>:142:1 safe_unary_minus_func_uint32_t_u 'uint32_t (uint32_t)' static
| |-ParmVarDecl 0x564f7fecd5b8 </usr/include/safe_math.h:743:40, col:49> col:49 used ui 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fecd810 <line:744:1, line:747:1>
|   `-ReturnStmt 0x564f7fecd800 <line:746:3, col:11>
|     `-UnaryOperator 0x564f7fecd7e8 <col:10, col:11> 'uint32_t':'unsigned int' prefix '-'
|       `-ImplicitCastExpr 0x564f7fecd7d0 <col:11> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fecd7b0 <col:11> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecd5b8 'ui' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fecda08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:754:1> <scratch space>:143:1 safe_add_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x564f7fecd838 </usr/include/safe_math.h:750:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fecd8b0 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fecdb60 <line:751:1, line:754:1>
|   `-ReturnStmt 0x564f7fecdb50 <line:753:3, col:16>
|     `-BinaryOperator 0x564f7fecdb30 <col:10, col:16> 'uint32_t':'unsigned int' '+'
|       |-ImplicitCastExpr 0x564f7fecdb00 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x564f7fecdac0 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecd838 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x564f7fecdb18 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fecdae0 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecd8b0 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fecdca0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:761:1> <scratch space>:144:1 safe_sub_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x564f7fecdb88 </usr/include/safe_math.h:757:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fecdc00 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fecddf8 <line:758:1, line:761:1>
|   `-ReturnStmt 0x564f7fecdde8 <line:760:3, col:16>
|     `-BinaryOperator 0x564f7fecddc8 <col:10, col:16> 'uint32_t':'unsigned int' '-'
|       |-ImplicitCastExpr 0x564f7fecdd98 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x564f7fecdd58 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecdb88 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x564f7fecddb0 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fecdd78 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecdc00 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fecdf38 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:768:1> <scratch space>:145:1 safe_mul_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x564f7fecde20 </usr/include/safe_math.h:764:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fecde98 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fece150 <line:765:1, line:768:1>
|   `-ReturnStmt 0x564f7fece140 <line:767:3, col:50>
|     `-BinaryOperator 0x564f7fece120 <col:10, col:50> 'unsigned int' '*'
|       |-ParenExpr 0x564f7fece068 <col:10, col:28> 'unsigned int'
|       | `-CStyleCastExpr 0x564f7fece040 <col:11, col:25> 'unsigned int' <NoOp>
|       |   `-ImplicitCastExpr 0x564f7fece028 <col:25> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |     `-DeclRefExpr 0x564f7fecdff0 <col:25> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecde20 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fece100 <col:32, col:50> 'unsigned int'
|         `-CStyleCastExpr 0x564f7fece0d8 <col:33, col:47> 'unsigned int' <NoOp>
|           `-ImplicitCastExpr 0x564f7fece0c0 <col:47> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|             `-DeclRefExpr 0x564f7fece088 <col:47> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecde98 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fece290 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:780:1> <scratch space>:146:1 safe_mod_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x564f7fece178 </usr/include/safe_math.h:771:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fece1f0 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fece560 <line:772:1, line:780:1>
|   `-ReturnStmt 0x564f7fece550 <line:774:3, line:779:15>
|     `-ConditionalOperator 0x564f7fece520 <line:776:5, line:779:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fece3d8 <line:776:5, col:14> 'int'
|       | `-BinaryOperator 0x564f7fece3b8 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7fece388 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7fece348 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece1f0 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x564f7fece3a0 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fece368 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x564f7fece508 <line:777:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fece438 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fece418 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fece3f8 </usr/include/safe_math.h:777:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece178 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fece4e8 <line:779:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fece4c8 <col:6, col:12> 'uint32_t':'unsigned int' '%'
|           |-ImplicitCastExpr 0x564f7fece498 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fece458 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece178 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x564f7fece4b0 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fece478 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece1f0 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fece6a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:792:1> <scratch space>:147:1 safe_div_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x564f7fece588 </usr/include/safe_math.h:783:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fece600 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x564f7fece970 <line:784:1, line:792:1>
|   `-ReturnStmt 0x564f7fece960 <line:786:3, line:791:15>
|     `-ConditionalOperator 0x564f7fece930 <line:788:5, line:791:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fece7e8 <line:788:5, col:14> 'int'
|       | `-BinaryOperator 0x564f7fece7c8 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7fece798 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7fece758 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece600 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x564f7fece7b0 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fece778 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x564f7fece918 <line:789:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fece848 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fece828 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fece808 </usr/include/safe_math.h:789:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece588 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fece8f8 <line:791:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fece8d8 <col:6, col:12> 'uint32_t':'unsigned int' '/'
|           |-ImplicitCastExpr 0x564f7fece8a8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fece868 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece588 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x564f7fece8c0 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fece888 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece600 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7feceb68 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:804:1> <scratch space>:148:1 safe_lshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x564f7fece998 </usr/include/safe_math.h:795:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fecea18 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fecf1c8 <line:796:1, line:804:1>
|   `-ReturnStmt 0x564f7fecf1b8 <line:798:3, line:803:26>
|     `-ConditionalOperator 0x564f7fecf188 <line:800:5, line:803:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fecefe0 <line:800:5, col:89> 'int'
|       | `-BinaryOperator 0x564f7fecefc0 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x564f7fecee10 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x564f7fececf8 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x564f7fececd8 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x564f7fecec98 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x564f7fecec70 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x564f7fecec58 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x564f7fecec20 <col:13> 'int' lvalue ParmVar 0x564f7fecea18 'right' 'int'
|       |   | |   `-IntegerLiteral 0x564f7fececb8 <col:22> 'int' 0
|       |   | `-ParenExpr 0x564f7fecedf0 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x564f7fecedd0 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x564f7feced90 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7feced68 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7feced50 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7feced18 <col:35> 'int' lvalue ParmVar 0x564f7fecea18 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7fecedb0 <col:45> 'int' 32
|       |   `-ParenExpr 0x564f7fecefa0 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x564f7fecef80 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fecef68 <col:53> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fecee30 <col:53> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece998 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x564f7fecef48 <col:60, col:87> 'unsigned int'
|       |         `-BinaryOperator 0x564f7fecef28 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:800:86> 'unsigned int' '>>'
|       |           |-ParenExpr 0x564f7fecee70 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x564f7fecee50 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x564f7fecef08 </usr/include/safe_math.h:800:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x564f7feceee0 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7feceec8 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fecee90 <col:81> 'int' lvalue ParmVar 0x564f7fecea18 'right' 'int'
|       |-ImplicitCastExpr 0x564f7fecf170 <line:801:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fecf040 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fecf020 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fecf000 </usr/include/safe_math.h:801:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece998 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fecf150 <line:803:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fecf130 <col:6, col:25> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x564f7fecf118 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fecf060 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fece998 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x564f7fecf0f8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fecf0d0 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fecf0b8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fecf080 <col:20> 'int' lvalue ParmVar 0x564f7fecea18 'right' 'int'
|-FunctionDecl 0x564f7fecf388 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:816:1> <scratch space>:149:1 safe_lshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fecf1f0 </usr/include/safe_math.h:807:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fecf270 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fed0928 <line:808:1, line:816:1>
|   `-ReturnStmt 0x564f7fed0918 <line:810:3, line:815:35>
|     `-ConditionalOperator 0x564f7fed08e8 <line:812:5, line:815:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fed0740 <line:812:5, col:85> 'int'
|       | `-BinaryOperator 0x564f7fed0720 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x564f7fed0570 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x564f7fed0550 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x564f7fed04f8 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x564f7fed04d0 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x564f7fecf478 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x564f7fecf440 <col:22> 'unsigned int' lvalue ParmVar 0x564f7fecf270 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x564f7fed0538 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x564f7fed0518 <col:32> 'int' 32
|       |   `-ParenExpr 0x564f7fed0700 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x564f7fed06e0 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fed06c8 <col:40> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fed0590 <col:40> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecf1f0 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x564f7fed06a8 <col:47, col:83> 'unsigned int'
|       |         `-BinaryOperator 0x564f7fed0688 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:812:82> 'unsigned int' '>>'
|       |           |-ParenExpr 0x564f7fed05d0 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x564f7fed05b0 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x564f7fed0668 </usr/include/safe_math.h:812:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x564f7fed0640 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7fed0628 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fed05f0 <col:77> 'unsigned int' lvalue ParmVar 0x564f7fecf270 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x564f7fed08d0 <line:813:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed07a0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fed0780 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fed0760 </usr/include/safe_math.h:813:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecf1f0 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fed08b0 <line:815:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fed0890 <col:6, col:34> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x564f7fed0878 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed07c0 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fecf1f0 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x564f7fed0858 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fed0830 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed0818 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed07e0 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fecf270 'right' 'unsigned int'
|-FunctionDecl 0x564f7fed0a70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:828:1> <scratch space>:150:1 safe_rshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x564f7fed0950 </usr/include/safe_math.h:819:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fed09d0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fed0f20 <line:820:1, line:828:1>
|   `-ReturnStmt 0x564f7fed0f10 <line:822:3, line:827:26>
|     `-ConditionalOperator 0x564f7fed0ee0 <line:824:5, line:827:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fed0d38 <line:824:5, col:48> 'int'
|       | `-BinaryOperator 0x564f7fed0d18 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x564f7fed0c00 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x564f7fed0be0 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x564f7fed0ba0 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x564f7fed0b78 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x564f7fed0b60 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x564f7fed0b28 <col:13> 'int' lvalue ParmVar 0x564f7fed09d0 'right' 'int'
|       |   |   `-IntegerLiteral 0x564f7fed0bc0 <col:22> 'int' 0
|       |   `-ParenExpr 0x564f7fed0cf8 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x564f7fed0cd8 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x564f7fed0c98 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x564f7fed0c70 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7fed0c58 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7fed0c20 <col:35> 'int' lvalue ParmVar 0x564f7fed09d0 'right' 'int'
|       |       `-IntegerLiteral 0x564f7fed0cb8 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x564f7fed0ec8 <line:825:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed0d98 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fed0d78 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fed0d58 </usr/include/safe_math.h:825:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fed0950 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fed0ea8 <line:827:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fed0e88 <col:6, col:25> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x564f7fed0e70 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed0db8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fed0950 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x564f7fed0e50 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fed0e28 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed0e10 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed0dd8 <col:20> 'int' lvalue ParmVar 0x564f7fed09d0 'right' 'int'
|-FunctionDecl 0x564f7fed1068 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:840:1> <scratch space>:151:1 safe_rshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fed0f48 </usr/include/safe_math.h:831:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x564f7fed0fc8 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fed13f8 <line:832:1, line:840:1>
|   `-ReturnStmt 0x564f7fed13e8 <line:834:3, line:839:35>
|     `-ConditionalOperator 0x564f7fed13b8 <line:836:5, line:839:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x564f7fed1210 <line:836:5, col:33> 'int'
|       | `-BinaryOperator 0x564f7fed11f0 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x564f7fed1198 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x564f7fed1170 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x564f7fed1158 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x564f7fed1120 <col:21> 'unsigned int' lvalue ParmVar 0x564f7fed0fc8 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x564f7fed11d8 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fed11b8 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x564f7fed13a0 <line:837:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed1270 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x564f7fed1250 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x564f7fed1230 </usr/include/safe_math.h:837:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fed0f48 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x564f7fed1380 <line:839:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x564f7fed1360 <col:6, col:34> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x564f7fed1348 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed1290 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x564f7fed0f48 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x564f7fed1328 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fed1300 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed12e8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed12b0 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fed0fc8 'right' 'unsigned int'
|-FunctionDecl 0x564f7fed15d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:850:1> <scratch space>:152:1 safe_unary_minus_func_uint64_t_u 'uint64_t (uint64_t)' static
| |-ParmVarDecl 0x564f7fed1480 </usr/include/safe_math.h:846:40, col:49> col:49 used ui 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed16e0 <line:847:1, line:850:1>
|   `-ReturnStmt 0x564f7fed16d0 <line:849:3, col:11>
|     `-UnaryOperator 0x564f7fed16b8 <col:10, col:11> 'uint64_t':'unsigned long' prefix '-'
|       `-ImplicitCastExpr 0x564f7fed16a0 <col:11> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fed1680 <col:11> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1480 'ui' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed18d8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:857:1> <scratch space>:153:1 safe_add_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x564f7fed1708 </usr/include/safe_math.h:853:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed1780 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed1a30 <line:854:1, line:857:1>
|   `-ReturnStmt 0x564f7fed1a20 <line:856:3, col:16>
|     `-BinaryOperator 0x564f7fed1a00 <col:10, col:16> 'uint64_t':'unsigned long' '+'
|       |-ImplicitCastExpr 0x564f7fed19d0 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x564f7fed1990 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1708 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x564f7fed19e8 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fed19b0 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1780 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed1b70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:864:1> <scratch space>:154:1 safe_sub_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x564f7fed1a58 </usr/include/safe_math.h:860:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed1ad0 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed1cc8 <line:861:1, line:864:1>
|   `-ReturnStmt 0x564f7fed1cb8 <line:863:3, col:16>
|     `-BinaryOperator 0x564f7fed1c98 <col:10, col:16> 'uint64_t':'unsigned long' '-'
|       |-ImplicitCastExpr 0x564f7fed1c68 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x564f7fed1c28 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1a58 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x564f7fed1c80 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x564f7fed1c48 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1ad0 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed1e08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:871:1> <scratch space>:155:1 safe_mul_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x564f7fed1cf0 </usr/include/safe_math.h:867:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed1d68 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed2038 <line:868:1, line:871:1>
|   `-ReturnStmt 0x564f7fed2028 <line:870:3, col:62>
|     `-ImplicitCastExpr 0x564f7fed2010 <col:10, col:62> 'uint64_t':'unsigned long' <IntegralCast>
|       `-BinaryOperator 0x564f7fed1ff0 <col:10, col:62> 'unsigned long long' '*'
|         |-ParenExpr 0x564f7fed1f38 <col:10, col:34> 'unsigned long long'
|         | `-CStyleCastExpr 0x564f7fed1f10 <col:11, col:31> 'unsigned long long' <IntegralCast>
|         |   `-ImplicitCastExpr 0x564f7fed1ef8 <col:31> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x564f7fed1ec0 <col:31> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1cf0 'ui1' 'uint64_t':'unsigned long'
|         `-ParenExpr 0x564f7fed1fd0 <col:38, col:62> 'unsigned long long'
|           `-CStyleCastExpr 0x564f7fed1fa8 <col:39, col:59> 'unsigned long long' <IntegralCast>
|             `-ImplicitCastExpr 0x564f7fed1f90 <col:59> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x564f7fed1f58 <col:59> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed1d68 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed2178 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:883:1> <scratch space>:156:1 safe_mod_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x564f7fed2060 </usr/include/safe_math.h:874:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed20d8 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed2448 <line:875:1, line:883:1>
|   `-ReturnStmt 0x564f7fed2438 <line:877:3, line:882:15>
|     `-ConditionalOperator 0x564f7fed2408 <line:879:5, line:882:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed22c0 <line:879:5, col:14> 'int'
|       | `-BinaryOperator 0x564f7fed22a0 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7fed2270 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7fed2230 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed20d8 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x564f7fed2288 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fed2250 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x564f7fed23f0 <line:880:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed2320 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed2300 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed22e0 </usr/include/safe_math.h:880:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed2060 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed23d0 <line:882:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed23b0 <col:6, col:12> 'uint64_t':'unsigned long' '%'
|           |-ImplicitCastExpr 0x564f7fed2380 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed2340 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed2060 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x564f7fed2398 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed2360 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed20d8 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed25f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:895:1> <scratch space>:157:1 safe_div_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x564f7fed24e0 </usr/include/safe_math.h:886:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed2558 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fed28c8 <line:887:1, line:895:1>
|   `-ReturnStmt 0x564f7fed28b8 <line:889:3, line:894:15>
|     `-ConditionalOperator 0x564f7fed2888 <line:891:5, line:894:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed2740 <line:891:5, col:14> 'int'
|       | `-BinaryOperator 0x564f7fed2720 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x564f7fed26f0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x564f7fed26b0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed2558 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x564f7fed2708 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fed26d0 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x564f7fed2870 <line:892:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed27a0 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed2780 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed2760 </usr/include/safe_math.h:892:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed24e0 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed2850 <line:894:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed2830 <col:6, col:12> 'uint64_t':'unsigned long' '/'
|           |-ImplicitCastExpr 0x564f7fed2800 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed27c0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed24e0 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x564f7fed2818 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed27e0 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed2558 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x564f7fed2ac8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:907:1> <scratch space>:158:1 safe_lshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x564f7fed28f0 </usr/include/safe_math.h:898:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed2970 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fed3128 <line:899:1, line:907:1>
|   `-ReturnStmt 0x564f7fed3118 <line:901:3, line:906:26>
|     `-ConditionalOperator 0x564f7fed30e8 <line:903:5, line:906:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed2f40 <line:903:5, col:89> 'int'
|       | `-BinaryOperator 0x564f7fed2f20 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x564f7fed2d70 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x564f7fed2c58 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x564f7fed2c38 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x564f7fed2bf8 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x564f7fed2bd0 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x564f7fed2bb8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x564f7fed2b80 <col:13> 'int' lvalue ParmVar 0x564f7fed2970 'right' 'int'
|       |   | |   `-IntegerLiteral 0x564f7fed2c18 <col:22> 'int' 0
|       |   | `-ParenExpr 0x564f7fed2d50 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x564f7fed2d30 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x564f7fed2cf0 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x564f7fed2cc8 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x564f7fed2cb0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x564f7fed2c78 <col:35> 'int' lvalue ParmVar 0x564f7fed2970 'right' 'int'
|       |   |     `-IntegerLiteral 0x564f7fed2d10 <col:45> 'int' 32
|       |   `-ParenExpr 0x564f7fed2f00 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x564f7fed2ee0 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fed2ec8 <col:53> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fed2d90 <col:53> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed28f0 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x564f7fed2ea8 <col:60, col:87> 'unsigned long'
|       |         `-BinaryOperator 0x564f7fed2e88 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:903:86> 'unsigned long' '>>'
|       |           |-ParenExpr 0x564f7fed2dd0 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x564f7fed2db0 <<scratch space>:159:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x564f7fed2e68 </usr/include/safe_math.h:903:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x564f7fed2e40 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7fed2e28 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fed2df0 <col:81> 'int' lvalue ParmVar 0x564f7fed2970 'right' 'int'
|       |-ImplicitCastExpr 0x564f7fed30d0 <line:904:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed2fa0 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed2f80 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed2f60 </usr/include/safe_math.h:904:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed28f0 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed30b0 <line:906:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed3090 <col:6, col:25> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x564f7fed3078 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed2fc0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed28f0 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x564f7fed3058 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fed3030 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed3018 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed2fe0 <col:20> 'int' lvalue ParmVar 0x564f7fed2970 'right' 'int'
|-FunctionDecl 0x564f7fed3328 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:919:1> <scratch space>:160:1 safe_lshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fed3150 </usr/include/safe_math.h:910:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed31d0 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fed3888 <line:911:1, line:919:1>
|   `-ReturnStmt 0x564f7fed3878 <line:913:3, line:918:35>
|     `-ConditionalOperator 0x564f7fed3848 <line:915:5, line:918:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed36a0 <line:915:5, col:85> 'int'
|       | `-BinaryOperator 0x564f7fed3680 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x564f7fed34d0 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x564f7fed34b0 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x564f7fed3458 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x564f7fed3430 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x564f7fed3418 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x564f7fed33e0 <col:22> 'unsigned int' lvalue ParmVar 0x564f7fed31d0 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x564f7fed3498 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x564f7fed3478 <col:32> 'int' 32
|       |   `-ParenExpr 0x564f7fed3660 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x564f7fed3640 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x564f7fed3628 <col:40> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fed34f0 <col:40> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed3150 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x564f7fed3608 <col:47, col:83> 'unsigned long'
|       |         `-BinaryOperator 0x564f7fed35e8 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:915:82> 'unsigned long' '>>'
|       |           |-ParenExpr 0x564f7fed3530 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x564f7fed3510 <<scratch space>:161:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x564f7fed35c8 </usr/include/safe_math.h:915:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x564f7fed35a0 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x564f7fed3588 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x564f7fed3550 <col:77> 'unsigned int' lvalue ParmVar 0x564f7fed31d0 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x564f7fed3830 <line:916:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed3700 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed36e0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed36c0 </usr/include/safe_math.h:916:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed3150 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed3810 <line:918:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed37f0 <col:6, col:34> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x564f7fed37d8 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed3720 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed3150 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x564f7fed37b8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fed3790 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed3778 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed3740 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fed31d0 'right' 'unsigned int'
|-FunctionDecl 0x564f7fed39d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:931:1> <scratch space>:162:1 safe_rshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x564f7fed38b0 </usr/include/safe_math.h:922:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed3930 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x564f7fed3e80 <line:923:1, line:931:1>
|   `-ReturnStmt 0x564f7fed3e70 <line:925:3, line:930:26>
|     `-ConditionalOperator 0x564f7fed3e40 <line:927:5, line:930:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed3c98 <line:927:5, col:48> 'int'
|       | `-BinaryOperator 0x564f7fed3c78 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x564f7fed3b60 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x564f7fed3b40 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x564f7fed3b00 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x564f7fed3ad8 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x564f7fed3ac0 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x564f7fed3a88 <col:13> 'int' lvalue ParmVar 0x564f7fed3930 'right' 'int'
|       |   |   `-IntegerLiteral 0x564f7fed3b20 <col:22> 'int' 0
|       |   `-ParenExpr 0x564f7fed3c58 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x564f7fed3c38 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x564f7fed3bf8 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x564f7fed3bd0 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x564f7fed3bb8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x564f7fed3b80 <col:35> 'int' lvalue ParmVar 0x564f7fed3930 'right' 'int'
|       |       `-IntegerLiteral 0x564f7fed3c18 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x564f7fed3e28 <line:928:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed3cf8 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed3cd8 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed3cb8 </usr/include/safe_math.h:928:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed38b0 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed3e08 <line:930:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed3de8 <col:6, col:25> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x564f7fed3dd0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed3d18 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed38b0 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x564f7fed3db0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x564f7fed3d88 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed3d70 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed3d38 <col:20> 'int' lvalue ParmVar 0x564f7fed3930 'right' 'int'
|-FunctionDecl 0x564f7fed3fc8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:943:1> <scratch space>:163:1 safe_rshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x564f7fed3ea8 </usr/include/safe_math.h:934:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fed3f28 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x564f7fed4358 <line:935:1, line:943:1>
|   `-ReturnStmt 0x564f7fed4348 <line:937:3, line:942:35>
|     `-ConditionalOperator 0x564f7fed4318 <line:939:5, line:942:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x564f7fed4170 <line:939:5, col:33> 'int'
|       | `-BinaryOperator 0x564f7fed4150 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x564f7fed40f8 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x564f7fed40d0 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x564f7fed40b8 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x564f7fed4080 <col:21> 'unsigned int' lvalue ParmVar 0x564f7fed3f28 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x564f7fed4138 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fed4118 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x564f7fed4300 <line:940:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed41d0 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x564f7fed41b0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x564f7fed4190 </usr/include/safe_math.h:940:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed3ea8 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x564f7fed42e0 <line:942:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x564f7fed42c0 <col:6, col:34> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x564f7fed42a8 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed41f0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fed3ea8 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x564f7fed4288 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x564f7fed4260 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x564f7fed4248 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x564f7fed4210 <col:29> 'unsigned int' lvalue ParmVar 0x564f7fed3f28 'right' 'unsigned int'
|-FunctionDecl 0x564f7fed4420 prev 0x564f7fe26c70 <line:951:1, col:18> col:7 used fabsf 'float (float)'
| |-ParmVarDecl 0x564f7fed4388 <col:13> col:18 'float'
| |-BuiltinAttr 0x564f7fed4520 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x564f7fed4550 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x564f7fed4578 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x564f7fed4650 prev 0x564f7fdb9de0 </usr/include/safe_math.h:952:1, col:19> col:8 used fabs 'double (double)'
| |-ParmVarDecl 0x564f7fed45b8 <col:13> col:19 'double'
| |-BuiltinAttr 0x564f7fed4730 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x564f7fed4760 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x564f7fed4788 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x564f7fed4920 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:965:1> <scratch space>:164:1 safe_add_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x564f7fed47c8 </usr/include/safe_math.h:956:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x564f7fed4848 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x564f7fed4dd0 <line:957:1, line:965:1>
|   `-ReturnStmt 0x564f7fed4dc0 <line:959:3, line:964:15>
|     `-ConditionalOperator 0x564f7fed4d90 <line:961:5, line:964:15> 'float'
|       |-ParenExpr 0x564f7fed4c68 <line:961:5, col:59> 'int'
|       | `-BinaryOperator 0x564f7fed4c48 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x564f7fed4b98 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x564f7fed4b80 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed49d8 <col:6> 'float (float)' Function 0x564f7fed4420 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x564f7fed4b28 <col:12, col:38> 'float' '+'
|       |   |   |-ParenExpr 0x564f7fed4a70 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x564f7fed4a50 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed49f8 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x564f7fed4a38 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed4a18 <col:20> 'float' lvalue ParmVar 0x564f7fed47c8 'sf1' 'float'
|       |   |   `-ParenExpr 0x564f7fed4b08 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x564f7fed4ae8 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x564f7fed4a90 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x564f7fed4ad0 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed4ab0 <col:35> 'float' lvalue ParmVar 0x564f7fed4848 'sf2' 'float'
|       |   `-ParenExpr 0x564f7fed4c28 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x564f7fed4c08 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x564f7fed4bc8 </usr/include/safe_math.h:961:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x564f7fed4be8 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x564f7fed4d78 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed4ca8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x564f7fed4c88 </usr/include/safe_math.h:962:15> 'float' lvalue ParmVar 0x564f7fed47c8 'sf1' 'float'
|       `-ParenExpr 0x564f7fed4d58 <line:964:5, col:15> 'float'
|         `-BinaryOperator 0x564f7fed4d38 <col:6, col:12> 'float' '+'
|           |-ImplicitCastExpr 0x564f7fed4d08 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed4cc8 <col:6> 'float' lvalue ParmVar 0x564f7fed47c8 'sf1' 'float'
|           `-ImplicitCastExpr 0x564f7fed4d20 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed4ce8 <col:12> 'float' lvalue ParmVar 0x564f7fed4848 'sf2' 'float'
|-FunctionDecl 0x564f7fed4f28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:977:1> <scratch space>:2:1 safe_sub_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x564f7fed4e00 </usr/include/safe_math.h:968:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x564f7fed4e80 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x564f7fed53a0 <line:969:1, line:977:1>
|   `-ReturnStmt 0x564f7fed5390 <line:971:3, line:976:15>
|     `-ConditionalOperator 0x564f7fed5360 <line:973:5, line:976:15> 'float'
|       |-ParenExpr 0x564f7fed5238 <line:973:5, col:59> 'int'
|       | `-BinaryOperator 0x564f7fed5218 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x564f7fed5168 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x564f7fed5150 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed4fe0 <col:6> 'float (float)' Function 0x564f7fed4420 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x564f7fed5130 <col:12, col:38> 'float' '-'
|       |   |   |-ParenExpr 0x564f7fed5078 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x564f7fed5058 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed5000 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x564f7fed5040 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed5020 <col:20> 'float' lvalue ParmVar 0x564f7fed4e00 'sf1' 'float'
|       |   |   `-ParenExpr 0x564f7fed5110 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x564f7fed50f0 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x564f7fed5098 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x564f7fed50d8 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed50b8 <col:35> 'float' lvalue ParmVar 0x564f7fed4e80 'sf2' 'float'
|       |   `-ParenExpr 0x564f7fed51f8 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x564f7fed51d8 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x564f7fed5198 </usr/include/safe_math.h:973:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x564f7fed51b8 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x564f7fed5348 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed5278 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x564f7fed5258 </usr/include/safe_math.h:974:15> 'float' lvalue ParmVar 0x564f7fed4e00 'sf1' 'float'
|       `-ParenExpr 0x564f7fed5328 <line:976:5, col:15> 'float'
|         `-BinaryOperator 0x564f7fed5308 <col:6, col:12> 'float' '-'
|           |-ImplicitCastExpr 0x564f7fed52d8 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed5298 <col:6> 'float' lvalue ParmVar 0x564f7fed4e00 'sf1' 'float'
|           `-ImplicitCastExpr 0x564f7fed52f0 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed52b8 <col:12> 'float' lvalue ParmVar 0x564f7fed4e80 'sf2' 'float'
|-FunctionDecl 0x564f7fed54f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:993:1> <scratch space>:3:1 safe_mul_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x564f7fed53d0 </usr/include/safe_math.h:980:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x564f7fed5450 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x564f7fed59d0 <line:981:1, line:993:1>
|   `-ReturnStmt 0x564f7fed59c0 <line:983:3, line:992:15>
|     `-ConditionalOperator 0x564f7fed5990 <line:986:5, line:992:15> 'float'
|       |-ParenExpr 0x564f7fed5868 <line:986:5, col:94> 'int'
|       | `-BinaryOperator 0x564f7fed5848 <col:6, col:93> 'int' '>'
|       |   |-CallExpr 0x564f7fed5738 <col:6, col:52> 'float'
|       |   | |-ImplicitCastExpr 0x564f7fed5720 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed55b0 <col:6> 'float (float)' Function 0x564f7fed4420 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x564f7fed5700 <col:12, col:51> 'float' '*'
|       |   |   |-ParenExpr 0x564f7fed5648 <col:12, col:30> 'float'
|       |   |   | `-BinaryOperator 0x564f7fed5628 <col:13, col:27> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed55d0 <col:13> 'float' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x564f7fed5610 <col:27> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed55f0 <col:27> 'float' lvalue ParmVar 0x564f7fed53d0 'sf1' 'float'
|       |   |   `-ParenExpr 0x564f7fed56e0 <col:34, col:51> 'float'
|       |   |     `-BinaryOperator 0x564f7fed56c0 <col:35, col:48> 'float' '*'
|       |   |       |-FloatingLiteral 0x564f7fed5668 <col:35> 'float' 3.725290e-09
|       |   |       `-ImplicitCastExpr 0x564f7fed56a8 <col:48> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed5688 <col:48> 'float' lvalue ParmVar 0x564f7fed5450 'sf2' 'float'
|       |   `-ParenExpr 0x564f7fed5828 <col:56, col:93> 'float'
|       |     `-BinaryOperator 0x564f7fed5808 <col:57, col:92> 'float' '*'
|       |       |-FloatingLiteral 0x564f7fed5768 <col:57> 'float' 7.888609e-31
|       |       `-ParenExpr 0x564f7fed57e8 <col:71, col:92> 'float'
|       |         `-BinaryOperator 0x564f7fed57c8 <col:72, <built-in>:151:21> 'float' '*'
|       |           |-FloatingLiteral 0x564f7fed5788 </usr/include/safe_math.h:986:72> 'float' 3.725290e-09
|       |           `-FloatingLiteral 0x564f7fed57a8 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x564f7fed5978 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed58a8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x564f7fed5888 </usr/include/safe_math.h:990:15> 'float' lvalue ParmVar 0x564f7fed53d0 'sf1' 'float'
|       `-ParenExpr 0x564f7fed5958 <line:992:5, col:15> 'float'
|         `-BinaryOperator 0x564f7fed5938 <col:6, col:12> 'float' '*'
|           |-ImplicitCastExpr 0x564f7fed5908 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed58c8 <col:6> 'float' lvalue ParmVar 0x564f7fed53d0 'sf1' 'float'
|           `-ImplicitCastExpr 0x564f7fed5920 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed58e8 <col:12> 'float' lvalue ParmVar 0x564f7fed5450 'sf2' 'float'
|-FunctionDecl 0x564f7fed5b28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1009:1> <scratch space>:4:1 safe_div_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x564f7fed5a00 </usr/include/safe_math.h:996:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x564f7fed5a80 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x564f7fed6238 <line:997:1, line:1009:1>
|   `-ReturnStmt 0x564f7fed6228 <line:999:3, line:1008:15>
|     `-ConditionalOperator 0x564f7fed61f8 <line:1002:5, line:1008:15> 'float'
|       |-ParenExpr 0x564f7fed60d0 <line:1002:5, col:139> 'int'
|       | `-BinaryOperator 0x564f7fed60b0 <col:6, col:138> 'int' '&&'
|       |   |-ParenExpr 0x564f7fed5cc0 <col:6, col:24> 'int'
|       |   | `-BinaryOperator 0x564f7fed5ca0 <col:7, col:20> 'int' '<'
|       |   |   |-CallExpr 0x564f7fed5c38 <col:7, col:16> 'float'
|       |   |   | |-ImplicitCastExpr 0x564f7fed5c20 <col:7> 'float (*)(float)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x564f7fed5be0 <col:7> 'float (float)' Function 0x564f7fed4420 'fabsf' 'float (float)'
|       |   |   | `-ImplicitCastExpr 0x564f7fed5c68 <col:13> 'float' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x564f7fed5c00 <col:13> 'float' lvalue ParmVar 0x564f7fed5a80 'sf2' 'float'
|       |   |   `-FloatingLiteral 0x564f7fed5c80 <col:20> 'float' 1.000000e+00
|       |   `-ParenExpr 0x564f7fed6090 <col:29, col:138> 'int'
|       |     `-ParenExpr 0x564f7fed6070 <col:30, col:137> 'int'
|       |       `-BinaryOperator 0x564f7fed6050 <col:31, col:136> 'int' '||'
|       |         |-ParenExpr 0x564f7fed5d58 <col:31, col:43> 'int'
|       |         | `-BinaryOperator 0x564f7fed5d38 <col:32, col:39> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x564f7fed5d20 <col:32> 'float' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x564f7fed5ce0 <col:32> 'float' lvalue ParmVar 0x564f7fed5a80 'sf2' 'float'
|       |         |   `-FloatingLiteral 0x564f7fed5d00 <col:39> 'float' 0.000000e+00
|       |         `-BinaryOperator 0x564f7fed6030 <col:48, col:136> 'int' '>'
|       |           |-ParenExpr 0x564f7fed5f30 <col:48, col:95> 'float'
|       |           | `-CallExpr 0x564f7fed5f00 <col:49, col:94> 'float'
|       |           |   |-ImplicitCastExpr 0x564f7fed5ee8 <col:49> 'float (*)(float)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x564f7fed5d78 <col:49> 'float (float)' Function 0x564f7fed4420 'fabsf' 'float (float)'
|       |           |   `-BinaryOperator 0x564f7fed5ec8 <col:55, col:93> 'float' '/'
|       |           |     |-ParenExpr 0x564f7fed5e10 <col:55, col:72> 'float'
|       |           |     | `-BinaryOperator 0x564f7fed5df0 <col:56, col:69> 'float' '*'
|       |           |     |   |-FloatingLiteral 0x564f7fed5d98 <col:56> 'float' 1.776357e-15
|       |           |     |   `-ImplicitCastExpr 0x564f7fed5dd8 <col:69> 'float' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x564f7fed5db8 <col:69> 'float' lvalue ParmVar 0x564f7fed5a00 'sf1' 'float'
|       |           |     `-ParenExpr 0x564f7fed5ea8 <col:76, col:93> 'float'
|       |           |       `-BinaryOperator 0x564f7fed5e88 <col:77, col:90> 'float' '*'
|       |           |         |-FloatingLiteral 0x564f7fed5e30 <col:77> 'float' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x564f7fed5e70 <col:90> 'float' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x564f7fed5e50 <col:90> 'float' lvalue ParmVar 0x564f7fed5a80 'sf2' 'float'
|       |           `-ParenExpr 0x564f7fed6010 <col:99, col:136> 'float'
|       |             `-BinaryOperator 0x564f7fed5ff0 <col:100, col:135> 'float' '*'
|       |               |-FloatingLiteral 0x564f7fed5f50 <col:100> 'float' 7.888609e-31
|       |               `-ParenExpr 0x564f7fed5fd0 <col:114, col:135> 'float'
|       |                 `-BinaryOperator 0x564f7fed5fb0 <col:115, <built-in>:151:21> 'float' '*'
|       |                   |-FloatingLiteral 0x564f7fed5f70 </usr/include/safe_math.h:1002:115> 'float' 1.776357e-15
|       |                   `-FloatingLiteral 0x564f7fed5f90 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x564f7fed61e0 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed6110 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x564f7fed60f0 </usr/include/safe_math.h:1006:15> 'float' lvalue ParmVar 0x564f7fed5a00 'sf1' 'float'
|       `-ParenExpr 0x564f7fed61c0 <line:1008:5, col:15> 'float'
|         `-BinaryOperator 0x564f7fed61a0 <col:6, col:12> 'float' '/'
|           |-ImplicitCastExpr 0x564f7fed6170 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed6130 <col:6> 'float' lvalue ParmVar 0x564f7fed5a00 'sf1' 'float'
|           `-ImplicitCastExpr 0x564f7fed6188 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed6150 <col:12> 'float' lvalue ParmVar 0x564f7fed5a80 'sf2' 'float'
|-FunctionDecl 0x564f7fed63c0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1024:1> <scratch space>:5:1 safe_add_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x564f7fed6268 </usr/include/safe_math.h:1015:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x564f7fed62e8 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x564f7fed78b0 <line:1016:1, line:1024:1>
|   `-ReturnStmt 0x564f7fed78a0 <line:1018:3, line:1023:15>
|     `-ConditionalOperator 0x564f7fed7870 <line:1020:5, line:1023:15> 'double'
|       |-ParenExpr 0x564f7fed7748 <line:1020:5, col:55> 'int'
|       | `-BinaryOperator 0x564f7fed7728 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x564f7fed7678 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x564f7fed7660 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed6478 <col:6> 'double (double)' Function 0x564f7fed4650 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x564f7fed7608 <col:11, col:35> 'double' '+'
|       |   |   |-ParenExpr 0x564f7fed7550 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x564f7fed7530 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed6498 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x564f7fed64d8 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed64b8 <col:18> 'double' lvalue ParmVar 0x564f7fed6268 'sf1' 'double'
|       |   |   `-ParenExpr 0x564f7fed75e8 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x564f7fed75c8 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x564f7fed7570 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x564f7fed75b0 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed7590 <col:32> 'double' lvalue ParmVar 0x564f7fed62e8 'sf2' 'double'
|       |   `-ParenExpr 0x564f7fed7708 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x564f7fed76e8 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x564f7fed76a8 </usr/include/safe_math.h:1020:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x564f7fed76c8 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x564f7fed7858 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed7788 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x564f7fed7768 </usr/include/safe_math.h:1021:15> 'double' lvalue ParmVar 0x564f7fed6268 'sf1' 'double'
|       `-ParenExpr 0x564f7fed7838 <line:1023:5, col:15> 'double'
|         `-BinaryOperator 0x564f7fed7818 <col:6, col:12> 'double' '+'
|           |-ImplicitCastExpr 0x564f7fed77e8 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed77a8 <col:6> 'double' lvalue ParmVar 0x564f7fed6268 'sf1' 'double'
|           `-ImplicitCastExpr 0x564f7fed7800 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed77c8 <col:12> 'double' lvalue ParmVar 0x564f7fed62e8 'sf2' 'double'
|-FunctionDecl 0x564f7fed7a08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1036:1> <scratch space>:6:1 safe_sub_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x564f7fed78e0 </usr/include/safe_math.h:1027:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x564f7fed7960 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x564f7fed7e80 <line:1028:1, line:1036:1>
|   `-ReturnStmt 0x564f7fed7e70 <line:1030:3, line:1035:15>
|     `-ConditionalOperator 0x564f7fed7e40 <line:1032:5, line:1035:15> 'double'
|       |-ParenExpr 0x564f7fed7d18 <line:1032:5, col:55> 'int'
|       | `-BinaryOperator 0x564f7fed7cf8 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x564f7fed7c48 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x564f7fed7c30 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed7ac0 <col:6> 'double (double)' Function 0x564f7fed4650 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x564f7fed7c10 <col:11, col:35> 'double' '-'
|       |   |   |-ParenExpr 0x564f7fed7b58 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x564f7fed7b38 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed7ae0 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x564f7fed7b20 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed7b00 <col:18> 'double' lvalue ParmVar 0x564f7fed78e0 'sf1' 'double'
|       |   |   `-ParenExpr 0x564f7fed7bf0 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x564f7fed7bd0 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x564f7fed7b78 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x564f7fed7bb8 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed7b98 <col:32> 'double' lvalue ParmVar 0x564f7fed7960 'sf2' 'double'
|       |   `-ParenExpr 0x564f7fed7cd8 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x564f7fed7cb8 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x564f7fed7c78 </usr/include/safe_math.h:1032:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x564f7fed7c98 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x564f7fed7e28 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed7d58 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x564f7fed7d38 </usr/include/safe_math.h:1033:15> 'double' lvalue ParmVar 0x564f7fed78e0 'sf1' 'double'
|       `-ParenExpr 0x564f7fed7e08 <line:1035:5, col:15> 'double'
|         `-BinaryOperator 0x564f7fed7de8 <col:6, col:12> 'double' '-'
|           |-ImplicitCastExpr 0x564f7fed7db8 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed7d78 <col:6> 'double' lvalue ParmVar 0x564f7fed78e0 'sf1' 'double'
|           `-ImplicitCastExpr 0x564f7fed7dd0 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed7d98 <col:12> 'double' lvalue ParmVar 0x564f7fed7960 'sf2' 'double'
|-FunctionDecl 0x564f7fed7fd8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1052:1> <scratch space>:7:1 safe_mul_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x564f7fed7eb0 </usr/include/safe_math.h:1039:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x564f7fed7f30 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x564f7fed84b0 <line:1040:1, line:1052:1>
|   `-ReturnStmt 0x564f7fed84a0 <line:1042:3, line:1051:15>
|     `-ConditionalOperator 0x564f7fed8470 <line:1045:5, line:1051:15> 'double'
|       |-ParenExpr 0x564f7fed8348 <line:1045:5, col:91> 'int'
|       | `-BinaryOperator 0x564f7fed8328 <col:6, col:90> 'int' '>'
|       |   |-CallExpr 0x564f7fed8218 <col:6, col:50> 'double'
|       |   | |-ImplicitCastExpr 0x564f7fed8200 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x564f7fed8090 <col:6> 'double (double)' Function 0x564f7fed4650 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x564f7fed81e0 <col:11, col:49> 'double' '*'
|       |   |   |-ParenExpr 0x564f7fed8128 <col:11, col:28> 'double'
|       |   |   | `-BinaryOperator 0x564f7fed8108 <col:12, col:25> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x564f7fed80b0 <col:12> 'double' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x564f7fed80f0 <col:25> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x564f7fed80d0 <col:25> 'double' lvalue ParmVar 0x564f7fed7eb0 'sf1' 'double'
|       |   |   `-ParenExpr 0x564f7fed81c0 <col:32, col:49> 'double'
|       |   |     `-BinaryOperator 0x564f7fed81a0 <col:33, col:46> 'double' '*'
|       |   |       |-FloatingLiteral 0x564f7fed8148 <col:33> 'double' 7.051541e-279
|       |   |       `-ImplicitCastExpr 0x564f7fed8188 <col:46> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x564f7fed8168 <col:46> 'double' lvalue ParmVar 0x564f7fed7f30 'sf2' 'double'
|       |   `-ParenExpr 0x564f7fed8308 <col:54, col:90> 'double'
|       |     `-BinaryOperator 0x564f7fed82e8 <col:55, col:89> 'double' '*'
|       |       |-FloatingLiteral 0x564f7fed8248 <col:55> 'double' 7.888609e-31
|       |       `-ParenExpr 0x564f7fed82c8 <col:68, col:89> 'double'
|       |         `-BinaryOperator 0x564f7fed82a8 <col:69, <built-in>:166:21> 'double' '*'
|       |           |-FloatingLiteral 0x564f7fed8268 </usr/include/safe_math.h:1045:69> 'double' 7.051541e-279
|       |           `-FloatingLiteral 0x564f7fed8288 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x564f7fed8458 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed8388 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x564f7fed8368 </usr/include/safe_math.h:1049:15> 'double' lvalue ParmVar 0x564f7fed7eb0 'sf1' 'double'
|       `-ParenExpr 0x564f7fed8438 <line:1051:5, col:15> 'double'
|         `-BinaryOperator 0x564f7fed8418 <col:6, col:12> 'double' '*'
|           |-ImplicitCastExpr 0x564f7fed83e8 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed83a8 <col:6> 'double' lvalue ParmVar 0x564f7fed7eb0 'sf1' 'double'
|           `-ImplicitCastExpr 0x564f7fed8400 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed83c8 <col:12> 'double' lvalue ParmVar 0x564f7fed7f30 'sf2' 'double'
|-FunctionDecl 0x564f7fed8608 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1068:1> <scratch space>:8:1 safe_div_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x564f7fed84e0 </usr/include/safe_math.h:1055:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x564f7fed8560 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x564f7fed8d18 <line:1056:1, line:1068:1>
|   `-ReturnStmt 0x564f7fed8d08 <line:1058:3, line:1067:15>
|     `-ConditionalOperator 0x564f7fed8cd8 <line:1061:5, line:1067:15> 'double'
|       |-ParenExpr 0x564f7fed8bb0 <line:1061:5, col:133> 'int'
|       | `-BinaryOperator 0x564f7fed8b90 <col:6, col:132> 'int' '&&'
|       |   |-ParenExpr 0x564f7fed87a0 <col:6, col:22> 'int'
|       |   | `-BinaryOperator 0x564f7fed8780 <col:7, col:19> 'int' '<'
|       |   |   |-CallExpr 0x564f7fed8718 <col:7, col:15> 'double'
|       |   |   | |-ImplicitCastExpr 0x564f7fed8700 <col:7> 'double (*)(double)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x564f7fed86c0 <col:7> 'double (double)' Function 0x564f7fed4650 'fabs' 'double (double)'
|       |   |   | `-ImplicitCastExpr 0x564f7fed8748 <col:12> 'double' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x564f7fed86e0 <col:12> 'double' lvalue ParmVar 0x564f7fed8560 'sf2' 'double'
|       |   |   `-FloatingLiteral 0x564f7fed8760 <col:19> 'double' 1.000000e+00
|       |   `-ParenExpr 0x564f7fed8b70 <col:27, col:132> 'int'
|       |     `-ParenExpr 0x564f7fed8b50 <col:28, col:131> 'int'
|       |       `-BinaryOperator 0x564f7fed8b30 <col:29, col:130> 'int' '||'
|       |         |-ParenExpr 0x564f7fed8838 <col:29, col:40> 'int'
|       |         | `-BinaryOperator 0x564f7fed8818 <col:30, col:37> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x564f7fed8800 <col:30> 'double' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x564f7fed87c0 <col:30> 'double' lvalue ParmVar 0x564f7fed8560 'sf2' 'double'
|       |         |   `-FloatingLiteral 0x564f7fed87e0 <col:37> 'double' 0.000000e+00
|       |         `-BinaryOperator 0x564f7fed8b10 <col:45, col:130> 'int' '>'
|       |           |-ParenExpr 0x564f7fed8a10 <col:45, col:90> 'double'
|       |           | `-CallExpr 0x564f7fed89e0 <col:46, col:89> 'double'
|       |           |   |-ImplicitCastExpr 0x564f7fed89c8 <col:46> 'double (*)(double)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x564f7fed8858 <col:46> 'double (double)' Function 0x564f7fed4650 'fabs' 'double (double)'
|       |           |   `-BinaryOperator 0x564f7fed89a8 <col:51, col:88> 'double' '/'
|       |           |     |-ParenExpr 0x564f7fed88f0 <col:51, col:68> 'double'
|       |           |     | `-BinaryOperator 0x564f7fed88d0 <col:52, col:65> 'double' '*'
|       |           |     |   |-FloatingLiteral 0x564f7fed8878 <col:52> 'double' 6.263026e-294
|       |           |     |   `-ImplicitCastExpr 0x564f7fed88b8 <col:65> 'double' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x564f7fed8898 <col:65> 'double' lvalue ParmVar 0x564f7fed84e0 'sf1' 'double'
|       |           |     `-ParenExpr 0x564f7fed8988 <col:72, col:88> 'double'
|       |           |       `-BinaryOperator 0x564f7fed8968 <col:73, col:85> 'double' '*'
|       |           |         |-FloatingLiteral 0x564f7fed8910 <col:73> 'double' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x564f7fed8950 <col:85> 'double' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x564f7fed8930 <col:85> 'double' lvalue ParmVar 0x564f7fed8560 'sf2' 'double'
|       |           `-ParenExpr 0x564f7fed8af0 <col:94, col:130> 'double'
|       |             `-BinaryOperator 0x564f7fed8ad0 <col:95, col:129> 'double' '*'
|       |               |-FloatingLiteral 0x564f7fed8a30 <col:95> 'double' 7.888609e-31
|       |               `-ParenExpr 0x564f7fed8ab0 <col:108, col:129> 'double'
|       |                 `-BinaryOperator 0x564f7fed8a90 <col:109, <built-in>:166:21> 'double' '*'
|       |                   |-FloatingLiteral 0x564f7fed8a50 </usr/include/safe_math.h:1061:109> 'double' 6.263026e-294
|       |                   `-FloatingLiteral 0x564f7fed8a70 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x564f7fed8cc0 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x564f7fed8bf0 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x564f7fed8bd0 </usr/include/safe_math.h:1065:15> 'double' lvalue ParmVar 0x564f7fed84e0 'sf1' 'double'
|       `-ParenExpr 0x564f7fed8ca0 <line:1067:5, col:15> 'double'
|         `-BinaryOperator 0x564f7fed8c80 <col:6, col:12> 'double' '/'
|           |-ImplicitCastExpr 0x564f7fed8c50 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x564f7fed8c10 <col:6> 'double' lvalue ParmVar 0x564f7fed84e0 'sf1' 'double'
|           `-ImplicitCastExpr 0x564f7fed8c68 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x564f7fed8c30 <col:12> 'double' lvalue ParmVar 0x564f7fed8560 'sf2' 'double'
|-FunctionDecl 0x564f7fed8e50 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1205:1> <scratch space>:9:1 safe_convert_func_float_to_int32_t 'int32_t (float)' static
| |-ParmVarDecl 0x564f7fed8d48 </usr/include/safe_math.h:1196:42, col:48> col:48 used sf1 'float'
| `-CompoundStmt 0x564f7fed92a8 <line:1197:1, line:1205:1>
|   `-ReturnStmt 0x564f7fed9298 <line:1199:3, line:1204:20>
|     `-ConditionalOperator 0x564f7fed9268 <line:1201:5, line:1204:20> 'int'
|       |-ParenExpr 0x564f7fed9118 <line:1201:5, col:46> 'int'
|       | `-BinaryOperator 0x564f7fed90f8 <col:6, col:45> 'int' '||'
|       |   |-ParenExpr 0x564f7fed9008 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x564f7fed8fe8 <col:7, /usr/include/stdint.h:107:35> 'int' '<='
|       |   |   |-ImplicitCastExpr 0x564f7fed8fb8 </usr/include/safe_math.h:1201:7> 'float' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7fed8f00 <col:7> 'float' lvalue ParmVar 0x564f7fed8d48 'sf1' 'float'
|       |   |   `-ImplicitCastExpr 0x564f7fed8fd0 </usr/include/stdint.h:107:21, col:35> 'float' <IntegralToFloating>
|       |   |     `-ParenExpr 0x564f7fed8f98 <col:21, col:35> 'int'
|       |   |       `-BinaryOperator 0x564f7fed8f78 <col:22, col:34> 'int' '-'
|       |   |         |-UnaryOperator 0x564f7fed8f40 <col:22, col:23> 'int' prefix '-'
|       |   |         | `-IntegerLiteral 0x564f7fed8f20 <col:23> 'int' 2147483647
|       |   |         `-IntegerLiteral 0x564f7fed8f58 <col:34> 'int' 1
|       |   `-ParenExpr 0x564f7fed90d8 </usr/include/safe_math.h:1201:28, col:45> 'int'
|       |     `-BinaryOperator 0x564f7fed90b8 <col:29, /usr/include/stdint.h:112:32> 'int' '>='
|       |       |-ImplicitCastExpr 0x564f7fed9088 </usr/include/safe_math.h:1201:29> 'float' <LValueToRValue>
|       |       | `-DeclRefExpr 0x564f7fed9028 <col:29> 'float' lvalue ParmVar 0x564f7fed8d48 'sf1' 'float'
|       |       `-ImplicitCastExpr 0x564f7fed90a0 </usr/include/stdint.h:112:21, col:32> 'float' <IntegralToFloating>
|       |         `-ParenExpr 0x564f7fed9068 <col:21, col:32> 'int'
|       |           `-IntegerLiteral 0x564f7fed9048 <col:22> 'int' 2147483647
|       |-ParenExpr 0x564f7fed9178 </usr/include/random_inc.h:79:26, col:32> 'int'
|       | `-ParenExpr 0x564f7fed9158 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   `-IntegerLiteral 0x564f7fed9138 <col:22> 'int' 2147483647
|       `-ParenExpr 0x564f7fed9248 </usr/include/safe_math.h:1204:5, col:20> 'int32_t':'int'
|         `-CStyleCastExpr 0x564f7fed9220 <col:6, col:19> 'int32_t':'int' <FloatingToIntegral>
|           `-ImplicitCastExpr 0x564f7fed9208 <col:15, col:19> 'float' <LValueToRValue> part_of_explicit_cast
|             `-ParenExpr 0x564f7fed91e8 <col:15, col:19> 'float' lvalue
|               `-DeclRefExpr 0x564f7fed9198 <col:16> 'float' lvalue ParmVar 0x564f7fed8d48 'sf1' 'float'
|-VarDecl 0x564f7fed9380 </usr/include/csmith.h:47:1, col:30> col:17 used crc32_tab 'uint32_t[256]' static
|-VarDecl 0x564f7fed93f8 <line:48:1, col:33> col:17 used crc32_context 'uint32_t':'unsigned int' static cinit
| `-ImplicitCastExpr 0x564f7fed9480 <col:33> 'uint32_t':'unsigned int' <IntegralCast>
|   `-IntegerLiteral 0x564f7fed9460 <col:33> 'unsigned long' 4294967295
|-FunctionDecl 0x564f7feda5d8 <line:50:1, line:68:1> line:51:1 used crc32_gentab 'void (void)' static
| `-CompoundStmt 0x564f7fedb0a8 <line:52:1, line:68:1>
|   |-DeclStmt 0x564f7feda6f8 <line:53:2, col:14>
|   | `-VarDecl 0x564f7feda690 <col:2, col:11> col:11 used crc 'uint32_t':'unsigned int'
|   |-DeclStmt 0x564f7feda7c0 <line:54:2, col:36>
|   | `-VarDecl 0x564f7feda720 <col:2, col:24> col:17 used poly 'const uint32_t':'const unsigned int' cinit
|   |   `-ImplicitCastExpr 0x564f7feda7a8 <col:24> 'uint32_t':'unsigned int' <IntegralCast>
|   |     `-IntegerLiteral 0x564f7feda788 <col:24> 'unsigned long' 3988292384
|   |-DeclStmt 0x564f7feda8f0 <line:55:2, col:10>
|   | |-VarDecl 0x564f7feda7f0 <col:2, col:6> col:6 used i 'int'
|   | `-VarDecl 0x564f7feda870 <col:2, col:9> col:9 used j 'int'
|   `-ForStmt 0x564f7fedb070 <line:57:2, line:67:2>
|     |-BinaryOperator 0x564f7feda948 <line:57:7, col:11> 'int' '='
|     | |-DeclRefExpr 0x564f7feda908 <col:7> 'int' lvalue Var 0x564f7feda7f0 'i' 'int'
|     | `-IntegerLiteral 0x564f7feda928 <col:11> 'int' 0
|     |-<<<NULL>>>
|     |-BinaryOperator 0x564f7feda9c0 <col:14, col:18> 'int' '<'
|     | |-ImplicitCastExpr 0x564f7feda9a8 <col:14> 'int' <LValueToRValue>
|     | | `-DeclRefExpr 0x564f7feda968 <col:14> 'int' lvalue Var 0x564f7feda7f0 'i' 'int'
|     | `-IntegerLiteral 0x564f7feda988 <col:18> 'int' 256
|     |-UnaryOperator 0x564f7fedaa00 <col:23, col:24> 'int' postfix '++'
|     | `-DeclRefExpr 0x564f7feda9e0 <col:23> 'int' lvalue Var 0x564f7feda7f0 'i' 'int'
|     `-CompoundStmt 0x564f7fedb048 <col:28, line:67:2>
|       |-BinaryOperator 0x564f7fedaa88 <line:58:3, col:9> 'uint32_t':'unsigned int' '='
|       | |-DeclRefExpr 0x564f7fedaa18 <col:3> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|       | `-ImplicitCastExpr 0x564f7fedaa70 <col:9> 'uint32_t':'unsigned int' <IntegralCast>
|       |   `-ImplicitCastExpr 0x564f7fedaa58 <col:9> 'int' <LValueToRValue>
|       |     `-DeclRefExpr 0x564f7fedaa38 <col:9> 'int' lvalue Var 0x564f7feda7f0 'i' 'int'
|       |-ForStmt 0x564f7fedaec0 <line:59:3, line:65:3>
|       | |-BinaryOperator 0x564f7fedaae8 <line:59:8, col:12> 'int' '='
|       | | |-DeclRefExpr 0x564f7fedaaa8 <col:8> 'int' lvalue Var 0x564f7feda870 'j' 'int'
|       | | `-IntegerLiteral 0x564f7fedaac8 <col:12> 'int' 8
|       | |-<<<NULL>>>
|       | |-BinaryOperator 0x564f7fedab60 <col:15, col:19> 'int' '>'
|       | | |-ImplicitCastExpr 0x564f7fedab48 <col:15> 'int' <LValueToRValue>
|       | | | `-DeclRefExpr 0x564f7fedab08 <col:15> 'int' lvalue Var 0x564f7feda870 'j' 'int'
|       | | `-IntegerLiteral 0x564f7fedab28 <col:19> 'int' 0
|       | |-UnaryOperator 0x564f7fedaba0 <col:22, col:23> 'int' postfix '--'
|       | | `-DeclRefExpr 0x564f7fedab80 <col:22> 'int' lvalue Var 0x564f7feda870 'j' 'int'
|       | `-CompoundStmt 0x564f7fedaea8 <col:27, line:65:3>
|       |   `-IfStmt 0x564f7fedae78 <line:60:4, line:64:4> has_else
|       |     |-BinaryOperator 0x564f7fedac28 <line:60:8, col:14> 'uint32_t':'unsigned int' '&'
|       |     | |-ImplicitCastExpr 0x564f7fedabf8 <col:8> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     | | `-DeclRefExpr 0x564f7fedabb8 <col:8> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|       |     | `-ImplicitCastExpr 0x564f7fedac10 <col:14> 'uint32_t':'unsigned int' <IntegralCast>
|       |     |   `-IntegerLiteral 0x564f7fedabd8 <col:14> 'int' 1
|       |     |-CompoundStmt 0x564f7fedadc0 <col:17, line:62:4>
|       |     | `-BinaryOperator 0x564f7fedad58 <line:61:5, col:24> 'uint32_t':'unsigned int' '='
|       |     |   |-DeclRefExpr 0x564f7fedac48 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|       |     |   `-BinaryOperator 0x564f7fedad38 <col:11, col:24> 'uint32_t':'unsigned int' '^'
|       |     |     |-ParenExpr 0x564f7fedace0 <col:11, col:20> 'uint32_t':'unsigned int'
|       |     |     | `-BinaryOperator 0x564f7fedacc0 <col:12, col:19> 'uint32_t':'unsigned int' '>>'
|       |     |     |   |-ImplicitCastExpr 0x564f7fedaca8 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |     |   | `-DeclRefExpr 0x564f7fedac68 <col:12> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|       |     |     |   `-IntegerLiteral 0x564f7fedac88 <col:19> 'int' 1
|       |     |     `-ImplicitCastExpr 0x564f7fedad20 <col:24> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |       `-DeclRefExpr 0x564f7fedad00 <col:24> 'const uint32_t':'const unsigned int' lvalue Var 0x564f7feda720 'poly' 'const uint32_t':'const unsigned int'
|       |     `-CompoundStmt 0x564f7fedae60 <line:62:11, line:64:4>
|       |       `-CompoundAssignOperator 0x564f7fedae30 <line:63:5, col:13> 'uint32_t':'unsigned int' '>>=' ComputeLHSTy='uint32_t':'unsigned int' ComputeResultTy='uint32_t':'unsigned int'
|       |         |-DeclRefExpr 0x564f7fedadd8 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|       |         `-IntegerLiteral 0x564f7fedadf8 <col:13> 'int' 1
|       `-BinaryOperator 0x564f7fedb028 <line:66:3, col:18> 'uint32_t':'unsigned int' '='
|         |-ArraySubscriptExpr 0x564f7fedafd0 <col:3, col:14> 'uint32_t':'unsigned int' lvalue
|         | |-ImplicitCastExpr 0x564f7fedafa0 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|         | | `-DeclRefExpr 0x564f7fedaef8 <col:3> 'uint32_t[256]' lvalue Var 0x564f7fed9380 'crc32_tab' 'uint32_t[256]'
|         | `-ImplicitCastExpr 0x564f7fedafb8 <col:13> 'int' <LValueToRValue>
|         |   `-DeclRefExpr 0x564f7fedaf18 <col:13> 'int' lvalue Var 0x564f7feda7f0 'i' 'int'
|         `-ImplicitCastExpr 0x564f7fedb010 <col:18> 'uint32_t':'unsigned int' <LValueToRValue>
|           `-DeclRefExpr 0x564f7fedaff0 <col:18> 'uint32_t':'unsigned int' lvalue Var 0x564f7feda690 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x564f7fedb1f0 <line:70:1, line:75:1> line:71:1 used crc32_byte 'void (uint8_t)' static
| |-ParmVarDecl 0x564f7fedb0e8 <col:13, col:21> col:21 used b 'uint8_t':'unsigned char'
| `-CompoundStmt 0x564f7fedb5a0 <col:24, line:75:1>
|   `-BinaryOperator 0x564f7fedb580 <line:72:2, line:74:39> 'uint32_t':'unsigned int' '='
|     |-DeclRefExpr 0x564f7fedb2a0 <line:72:2> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
|     `-BinaryOperator 0x564f7fedb560 <line:73:3, line:74:39> 'uint32_t':'unsigned int' '^'
|       |-ParenExpr 0x564f7fedb3b0 <line:73:3, col:37> 'uint32_t':'unsigned int'
|       | `-BinaryOperator 0x564f7fedb390 <col:4, col:27> 'uint32_t':'unsigned int' '&'
|       |   |-ParenExpr 0x564f7fedb338 <col:4, col:23> 'uint32_t':'unsigned int'
|       |   | `-BinaryOperator 0x564f7fedb318 <col:5, col:22> 'uint32_t':'unsigned int' '>>'
|       |   |   |-ImplicitCastExpr 0x564f7fedb300 <col:5> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x564f7fedb2c0 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
|       |   |   `-IntegerLiteral 0x564f7fedb2e0 <col:22> 'int' 8
|       |   `-ImplicitCastExpr 0x564f7fedb378 <col:27> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x564f7fedb358 <col:27> 'int' 16777215
|       `-ImplicitCastExpr 0x564f7fedb548 <line:74:3, col:39> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-ArraySubscriptExpr 0x564f7fedb528 <col:3, col:39> 'uint32_t':'unsigned int' lvalue
|           |-ImplicitCastExpr 0x564f7fedb510 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|           | `-DeclRefExpr 0x564f7fedb3d0 <col:3> 'uint32_t[256]' lvalue Var 0x564f7fed9380 'crc32_tab' 'uint32_t[256]'
|           `-BinaryOperator 0x564f7fedb4f0 <col:13, col:35> 'uint32_t':'unsigned int' '&'
|             |-ParenExpr 0x564f7fedb498 <col:13, col:31> 'uint32_t':'unsigned int'
|             | `-BinaryOperator 0x564f7fedb478 <col:14, col:30> 'uint32_t':'unsigned int' '^'
|             |   |-ImplicitCastExpr 0x564f7fedb430 <col:14> 'uint32_t':'unsigned int' <LValueToRValue>
|             |   | `-DeclRefExpr 0x564f7fedb3f0 <col:14> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
|             |   `-ImplicitCastExpr 0x564f7fedb460 <col:30> 'uint32_t':'unsigned int' <IntegralCast>
|             |     `-ImplicitCastExpr 0x564f7fedb448 <col:30> 'uint8_t':'unsigned char' <LValueToRValue>
|             |       `-DeclRefExpr 0x564f7fedb410 <col:30> 'uint8_t':'unsigned char' lvalue ParmVar 0x564f7fedb0e8 'b' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x564f7fedb4d8 <col:35> 'uint32_t':'unsigned int' <IntegralCast>
|               `-IntegerLiteral 0x564f7fedb4b8 <col:35> 'int' 255
|-FunctionDecl 0x564f7fedb6d0 <line:96:1, line:107:1> line:97:1 used crc32_8bytes 'void (uint64_t)' static
| |-ParmVarDecl 0x564f7fedb5c8 <col:15, col:24> col:24 used val 'uint64_t':'unsigned long'
| `-CompoundStmt 0x564f7fedc360 <line:98:1, line:107:1>
|   |-CallExpr 0x564f7fedb908 <line:99:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x564f7fedb8f0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedb780 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedb938 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedb870 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedb818 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedb7f8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedb7e0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedb7a0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedb7c0 <col:20> 'int' 0
|   |     `-ImplicitCastExpr 0x564f7fedb858 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedb838 <col:25> 'int' 255
|   |-CallExpr 0x564f7fedba78 <line:100:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x564f7fedba60 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedb950 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedbaa8 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedba40 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedb9e8 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedb9c8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedb9b0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedb970 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedb990 <col:20> 'int' 8
|   |     `-ImplicitCastExpr 0x564f7fedba28 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedba08 <col:25> 'int' 255
|   |-CallExpr 0x564f7fedbbe8 <line:101:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x564f7fedbbd0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedbac0 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedbc18 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedbbb0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedbb58 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedbb38 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedbb20 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedbae0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedbb00 <col:20> 'int' 16
|   |     `-ImplicitCastExpr 0x564f7fedbb98 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedbb78 <col:26> 'int' 255
|   |-CallExpr 0x564f7fedbd58 <line:102:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x564f7fedbd40 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedbc30 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedbd88 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedbd20 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedbcc8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedbca8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedbc90 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedbc50 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedbc70 <col:20> 'int' 24
|   |     `-ImplicitCastExpr 0x564f7fedbd08 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedbce8 <col:26> 'int' 255
|   |-CallExpr 0x564f7fedbec8 <line:103:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x564f7fedbeb0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedbda0 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedbef8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedbe90 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedbe38 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedbe18 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedbe00 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedbdc0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedbde0 <col:20> 'int' 32
|   |     `-ImplicitCastExpr 0x564f7fedbe78 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedbe58 <col:26> 'int' 255
|   |-CallExpr 0x564f7fedc038 <line:104:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x564f7fedc020 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedbf10 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedc068 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedc000 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedbfa8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedbf88 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedbf70 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedbf30 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedbf50 <col:20> 'int' 40
|   |     `-ImplicitCastExpr 0x564f7fedbfe8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedbfc8 <col:26> 'int' 255
|   |-CallExpr 0x564f7fedc1a8 <line:105:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x564f7fedc190 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedc080 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x564f7fedc1d8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x564f7fedc170 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x564f7fedc118 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x564f7fedc0f8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x564f7fedc0e0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x564f7fedc0a0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x564f7fedc0c0 <col:20> 'int' 48
|   |     `-ImplicitCastExpr 0x564f7fedc158 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x564f7fedc138 <col:26> 'int' 255
|   `-CallExpr 0x564f7fedc318 <line:106:2, col:30> 'void'
|     |-ImplicitCastExpr 0x564f7fedc300 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x564f7fedc1f0 <col:2> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|     `-ImplicitCastExpr 0x564f7fedc348 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x564f7fedc2e0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|         |-ParenExpr 0x564f7fedc288 <col:14, col:22> 'uint64_t':'unsigned long'
|         | `-BinaryOperator 0x564f7fedc268 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|         |   |-ImplicitCastExpr 0x564f7fedc250 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|         |   | `-DeclRefExpr 0x564f7fedc210 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedb5c8 'val' 'uint64_t':'unsigned long'
|         |   `-IntegerLiteral 0x564f7fedc230 <col:20> 'int' 56
|         `-ImplicitCastExpr 0x564f7fedc2c8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|           `-IntegerLiteral 0x564f7fedc2a8 <col:26> 'int' 255
|-FunctionDecl 0x564f7fedd640 <line:109:1, line:116:1> line:110:1 used transparent_crc 'void (uint64_t, char *, int)' static
| |-ParmVarDecl 0x564f7fedc3c0 <col:18, col:27> col:27 used val 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x564f7fedc440 <col:32, col:38> col:38 used vname 'char *'
| |-ParmVarDecl 0x564f7fedc4c0 <col:45, col:49> col:49 used flag 'int'
| `-CompoundStmt 0x564f7fedda70 <line:111:1, line:116:1>
|   |-CallExpr 0x564f7fedd7b8 <line:112:2, col:18> 'void'
|   | |-ImplicitCastExpr 0x564f7fedd7a0 <col:2> 'void (*)(uint64_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x564f7fedd700 <col:2> 'void (uint64_t)' Function 0x564f7fedb6d0 'crc32_8bytes' 'void (uint64_t)'
|   | `-ImplicitCastExpr 0x564f7fedd7e8 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |   `-DeclRefExpr 0x564f7fedd720 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x564f7fedc3c0 'val' 'uint64_t':'unsigned long'
|   `-IfStmt 0x564f7fedda50 <line:113:2, line:115:2>
|     |-ImplicitCastExpr 0x564f7fedd820 <line:113:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x564f7fedd800 <col:6> 'int' lvalue ParmVar 0x564f7fedc4c0 'flag' 'int'
|     `-CompoundStmt 0x564f7fedda38 <col:12, line:115:2>
|       `-CallExpr 0x564f7fedd9b0 <line:114:5, col:87> 'int'
|         |-ImplicitCastExpr 0x564f7fedd998 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x564f7fedd838 <col:5> 'int (const char *, ...)' Function 0x564f7fe96dc0 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x564f7fedda08 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x564f7fedd9f0 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x564f7fedd890 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x564f7fedda20 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x564f7fedd8d0 <col:52> 'char *' lvalue ParmVar 0x564f7fedc440 'vname' 'char *'
|         `-BinaryOperator 0x564f7fedd960 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x564f7fedd948 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7fedd930 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7fedd8f0 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x564f7fedd910 <col:75> 'unsigned long' 4294967295
|-FunctionDecl 0x564f7feddd20 <line:120:1, line:130:1> line:121:1 transparent_crc_bytes 'void (char *, int, char *, int)' static
| |-ParmVarDecl 0x564f7feddaa8 <col:24, col:30> col:30 used ptr 'char *'
| |-ParmVarDecl 0x564f7feddb28 <col:35, col:39> col:39 used nbytes 'int'
| |-ParmVarDecl 0x564f7feddba8 <col:47, col:53> col:53 used vname 'char *'
| |-ParmVarDecl 0x564f7feddc28 <col:60, col:64> col:64 used flag 'int'
| `-CompoundStmt 0x564f7fede358 <line:122:1, line:130:1>
|   |-DeclStmt 0x564f7fedde68 <line:123:5, col:10>
|   | `-VarDecl 0x564f7fedde00 <col:5, col:9> col:9 used i 'int'
|   |-ForStmt 0x564f7fede0e8 <line:124:5, line:126:5>
|   | |-BinaryOperator 0x564f7feddec0 <line:124:10, col:12> 'int' '='
|   | | |-DeclRefExpr 0x564f7fedde80 <col:10> 'int' lvalue Var 0x564f7fedde00 'i' 'int'
|   | | `-IntegerLiteral 0x564f7feddea0 <col:12> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x564f7feddf50 <col:15, col:17> 'int' '<'
|   | | |-ImplicitCastExpr 0x564f7feddf20 <col:15> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x564f7feddee0 <col:15> 'int' lvalue Var 0x564f7fedde00 'i' 'int'
|   | | `-ImplicitCastExpr 0x564f7feddf38 <col:17> 'int' <LValueToRValue>
|   | |   `-DeclRefExpr 0x564f7feddf00 <col:17> 'int' lvalue ParmVar 0x564f7feddb28 'nbytes' 'int'
|   | |-UnaryOperator 0x564f7feddf90 <col:25, col:26> 'int' postfix '++'
|   | | `-DeclRefExpr 0x564f7feddf70 <col:25> 'int' lvalue Var 0x564f7fedde00 'i' 'int'
|   | `-CompoundStmt 0x564f7fede0d0 <col:30, line:126:5>
|   |   `-CallExpr 0x564f7fede070 <line:125:9, col:26> 'void'
|   |     |-ImplicitCastExpr 0x564f7fede058 <col:9> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   |     | `-DeclRefExpr 0x564f7feddfa8 <col:9> 'void (uint8_t)' Function 0x564f7fedb1f0 'crc32_byte' 'void (uint8_t)'
|   |     `-ImplicitCastExpr 0x564f7fede0b8 <col:20, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |       `-ImplicitCastExpr 0x564f7fede0a0 <col:20, col:25> 'char' <LValueToRValue>
|   |         `-ArraySubscriptExpr 0x564f7fede038 <col:20, col:25> 'char' lvalue
|   |           |-ImplicitCastExpr 0x564f7fede008 <col:20> 'char *' <LValueToRValue>
|   |           | `-DeclRefExpr 0x564f7feddfc8 <col:20> 'char *' lvalue ParmVar 0x564f7feddaa8 'ptr' 'char *'
|   |           `-ImplicitCastExpr 0x564f7fede020 <col:24> 'int' <LValueToRValue>
|   |             `-DeclRefExpr 0x564f7feddfe8 <col:24> 'int' lvalue Var 0x564f7fedde00 'i' 'int'
|   `-IfStmt 0x564f7fede338 <line:127:2, line:129:2>
|     |-ImplicitCastExpr 0x564f7fede140 <line:127:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x564f7fede120 <col:6> 'int' lvalue ParmVar 0x564f7feddc28 'flag' 'int'
|     `-CompoundStmt 0x564f7fede320 <col:12, line:129:2>
|       `-CallExpr 0x564f7fede298 <line:128:5, col:87> 'int'
|         |-ImplicitCastExpr 0x564f7fede280 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x564f7fede158 <col:5> 'int (const char *, ...)' Function 0x564f7fe96dc0 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x564f7fede2f0 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x564f7fede2d8 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x564f7fede178 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x564f7fede308 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x564f7fede1b8 <col:52> 'char *' lvalue ParmVar 0x564f7feddba8 'vname' 'char *'
|         `-BinaryOperator 0x564f7fede248 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x564f7fede230 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x564f7fede218 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x564f7fede1d8 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x564f7fede1f8 <col:75> 'unsigned long' 4294967295
|-VarDecl 0x564f7fede398 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/1.c:13:1, col:13> col:13 __undefined 'long' static
|-VarDecl 0x564f7fede410 <line:17:1, col:22> col:16 used g_4 'int32_t':'int' static cinit
| `-ImplicitCastExpr 0x564f7fede498 <col:22> 'int32_t':'int' <IntegralCast>
|   `-IntegerLiteral 0x564f7fede478 <col:22> 'long' 1561780005
|-VarDecl 0x564f7fede5f8 <line:18:1, col:70> col:26 used g_5 'int32_t *volatile[6]' static cinit
| `-InitListExpr 0x564f7fede830 <col:35, col:70> 'int32_t *volatile[6]'
|   |-UnaryOperator 0x564f7fede680 <col:36, col:37> 'int32_t *' prefix '&' cannot overflow
|   | `-DeclRefExpr 0x564f7fede660 <col:37> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|   |-UnaryOperator 0x564f7fede6b8 <col:42, col:43> 'int32_t *' prefix '&' cannot overflow
|   | `-DeclRefExpr 0x564f7fede698 <col:43> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|   |-UnaryOperator 0x564f7fede6f0 <col:48, col:49> 'int32_t *' prefix '&' cannot overflow
|   | `-DeclRefExpr 0x564f7fede6d0 <col:49> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|   |-UnaryOperator 0x564f7fede728 <col:54, col:55> 'int32_t *' prefix '&' cannot overflow
|   | `-DeclRefExpr 0x564f7fede708 <col:55> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|   |-UnaryOperator 0x564f7fede760 <col:60, col:61> 'int32_t *' prefix '&' cannot overflow
|   | `-DeclRefExpr 0x564f7fede740 <col:61> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|   `-UnaryOperator 0x564f7fede798 <col:66, col:67> 'int32_t *' prefix '&' cannot overflow
|     `-DeclRefExpr 0x564f7fede778 <col:67> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
|-FunctionDecl 0x564f7fede9e0 <line:21:1, col:51> col:40 used func_1 'int8_t (void)' static
| `-OptimizeNoneAttr 0x564f7fedea88 <col:16>
|-FunctionDecl 0x564f7fedeb78 prev 0x564f7fede9e0 <line:29:1, line:66:1> line:29:40 used func_1 'int8_t (void)' static
| |-CompoundStmt 0x564f7fee45d0 <col:53, line:66:1> MathErrno=1
| | |-DeclStmt 0x564f7feded80 <line:30:3, col:18>
| | | `-VarDecl 0x564f7feded18 <col:3, col:17> col:12 used l_3 'int32_t *[6]'
| | |-DeclStmt 0x564f7fee3e10 <line:31:3, line:57:59>
| | | `-VarDecl 0x564f7fedf028 <line:31:3, line:57:58> line:31:13 l_2 'int32_t **[3][9][3]' cinit
| | |   `-InitListExpr 0x564f7fee2e08 <col:28, line:57:58> 'int32_t **[3][9][3]'
| | |     |-InitListExpr 0x564f7fee2ef0 <line:31:29, line:39:59> 'int32_t **[9][3]'
| | |     | |-InitListExpr 0x564f7fee2f88 <line:31:30, col:58> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedf110 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf0f0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf0d0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf090 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf0b0 <col:36> 'int' 3
| | |     | | |-ImplicitCastExpr 0x564f7fee2fe0 <col:40, col:48> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | | | `-CStyleCastExpr 0x564f7fedf168 <col:40, col:48> 'void *' <NullToPointer> MathErrno=1
| | |     | | |   `-IntegerLiteral 0x564f7fedf130 <col:48> 'int' 0
| | |     | | `-UnaryOperator 0x564f7fedf218 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedf1f8 <col:52, col:57> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedf1d8 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedf198 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedf1b8 <col:56> 'int' 3
| | |     | |-InitListExpr 0x564f7fee3010 <line:32:30, col:58> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedf310 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf2f0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf2d0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf290 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf2b0 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fedf3b0 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf390 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf370 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf330 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf350 <col:45> 'int' 3
| | |     | | `-ImplicitCastExpr 0x564f7fee3068 <col:49, col:57> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | |   `-CStyleCastExpr 0x564f7fedf408 <col:49, col:57> 'void *' <NullToPointer> MathErrno=1
| | |     | |     `-IntegerLiteral 0x564f7fedf3d0 <col:57> 'int' 0
| | |     | |-InitListExpr 0x564f7fee3098 <line:33:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedf510 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf4f0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf4d0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf490 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf4b0 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fedf5c0 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf5a0 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf580 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf530 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf550 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fedf660 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedf640 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedf620 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedf5e0 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedf600 <col:54> 'int' 5
| | |     | |-InitListExpr 0x564f7fee3100 <line:34:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedf758 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf738 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf718 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf6d8 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf6f8 <col:36> 'int' 3
| | |     | | |-UnaryOperator 0x564f7fedf7f8 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf7d8 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf7b8 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf778 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf798 <col:45> 'int' 0
| | |     | | `-UnaryOperator 0x564f7fedf898 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedf878 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedf858 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedf818 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedf838 <col:54> 'int' 3
| | |     | |-InitListExpr 0x564f7fee3168 <line:35:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedf990 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedf970 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf950 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf910 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf930 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fedfa30 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedfa10 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedf9f0 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedf9b0 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedf9d0 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fedfad0 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedfab0 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedfa90 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedfa50 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedfa70 <col:54> 'int' 5
| | |     | |-InitListExpr 0x564f7fee31d0 <line:36:30, col:58> 'int32_t **[3]'
| | |     | | |-ImplicitCastExpr 0x564f7fee3228 <col:31, col:39> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | | | `-CStyleCastExpr 0x564f7fedfb80 <col:31, col:39> 'void *' <NullToPointer> MathErrno=1
| | |     | | |   `-IntegerLiteral 0x564f7fedfb48 <col:39> 'int' 0
| | |     | | |-UnaryOperator 0x564f7fedfc30 <col:42, col:48> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedfc10 <col:43, col:48> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedfbf0 <col:43> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedfbb0 <col:43> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedfbd0 <col:47> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fedfcd0 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedfcb0 <col:52, col:57> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedfc90 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedfc50 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedfc70 <col:56> 'int' 5
| | |     | |-InitListExpr 0x564f7fee3258 <line:37:30, col:58> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedfdc8 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedfda8 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedfd88 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedfd48 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedfd68 <col:36> 'int' 3
| | |     | | |-ImplicitCastExpr 0x564f7fee32b0 <col:40, col:48> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | | | `-CStyleCastExpr 0x564f7fedfe20 <col:40, col:48> 'void *' <NullToPointer> MathErrno=1
| | |     | | |   `-IntegerLiteral 0x564f7fedfde8 <col:48> 'int' 0
| | |     | | `-UnaryOperator 0x564f7fedfed0 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fedfeb0 <col:52, col:57> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fedfe90 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fedfe50 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fedfe70 <col:56> 'int' 3
| | |     | |-InitListExpr 0x564f7fee32e0 <line:38:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fedffc8 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fedffa8 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fedff88 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedff48 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fedff68 <col:36> 'int' 3
| | |     | | |-UnaryOperator 0x564f7fee0068 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0048 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0028 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fedffe8 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0008 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fee0108 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee00e8 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee00c8 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0088 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee00a8 <col:54> 'int' 5
| | |     | `-InitListExpr 0x564f7fee3348 <line:39:30, col:58> 'int32_t **[3]'
| | |     |   |-UnaryOperator 0x564f7fee0200 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     |   | `-ArraySubscriptExpr 0x564f7fee01e0 <col:32, col:37> 'int32_t *' lvalue
| | |     |   |   |-ImplicitCastExpr 0x564f7fee01c0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     |   |   | `-DeclRefExpr 0x564f7fee0180 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     |   |   `-IntegerLiteral 0x564f7fee01a0 <col:36> 'int' 3
| | |     |   |-UnaryOperator 0x564f7fee02a0 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     |   | `-ArraySubscriptExpr 0x564f7fee0280 <col:41, col:46> 'int32_t *' lvalue
| | |     |   |   |-ImplicitCastExpr 0x564f7fee0260 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     |   |   | `-DeclRefExpr 0x564f7fee0220 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     |   |   `-IntegerLiteral 0x564f7fee0240 <col:45> 'int' 5
| | |     |   `-ImplicitCastExpr 0x564f7fee33a0 <col:49, col:57> 'int32_t **' <NullToPointer> MathErrno=1
| | |     |     `-CStyleCastExpr 0x564f7fee02f8 <col:49, col:57> 'void *' <NullToPointer> MathErrno=1
| | |     |       `-IntegerLiteral 0x564f7fee02c0 <col:57> 'int' 0
| | |     |-InitListExpr 0x564f7fee3450 <line:40:29, line:48:57> 'int32_t **[9][3]'
| | |     | |-InitListExpr 0x564f7fee34e8 <line:40:30, col:58> 'int32_t **[3]'
| | |     | | |-ImplicitCastExpr 0x564f7fee3540 <col:31, col:39> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | | | `-CStyleCastExpr 0x564f7fee0440 <col:31, col:39> 'void *' <NullToPointer> MathErrno=1
| | |     | | |   `-IntegerLiteral 0x564f7fee0408 <col:39> 'int' 0
| | |     | | |-UnaryOperator 0x564f7fee04f0 <col:42, col:48> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee04d0 <col:43, col:48> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee04b0 <col:43> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0470 <col:43> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0490 <col:47> 'int' 5
| | |     | | `-UnaryOperator 0x564f7fee0590 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee0570 <col:52, col:57> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee0550 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0510 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee0530 <col:56> 'int' 3
| | |     | |-InitListExpr 0x564f7fee35a0 <line:41:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee0688 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0668 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0648 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0608 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0628 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fee0728 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0708 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee06e8 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee06a8 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee06c8 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fee07c8 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee07a8 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee0788 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0748 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee0768 <col:54> 'int' 3
| | |     | |-InitListExpr 0x564f7fee3608 <line:42:30, col:58> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee08c0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee08a0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0880 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0840 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0860 <col:36> 'int' 3
| | |     | | |-ImplicitCastExpr 0x564f7fee3660 <col:40, col:48> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | | | `-CStyleCastExpr 0x564f7fee0918 <col:40, col:48> 'void *' <NullToPointer> MathErrno=1
| | |     | | |   `-IntegerLiteral 0x564f7fee08e0 <col:48> 'int' 0
| | |     | | `-UnaryOperator 0x564f7fee09c8 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee09a8 <col:52, col:57> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee0988 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0948 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee0968 <col:56> 'int' 3
| | |     | |-InitListExpr 0x564f7fee3690 <line:43:30, col:58> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee0ac0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0aa0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0a80 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0a40 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0a60 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fee0b60 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0b40 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0b20 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0ae0 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0b00 <col:45> 'int' 3
| | |     | | `-ImplicitCastExpr 0x564f7fee36e8 <col:49, col:57> 'int32_t **' <NullToPointer> MathErrno=1
| | |     | |   `-CStyleCastExpr 0x564f7fee0bb8 <col:49, col:57> 'void *' <NullToPointer> MathErrno=1
| | |     | |     `-IntegerLiteral 0x564f7fee0b80 <col:57> 'int' 0
| | |     | |-InitListExpr 0x564f7fee3718 <line:44:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee0cc0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0ca0 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0c80 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0c40 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0c60 <col:36> 'int' 5
| | |     | | |-UnaryOperator 0x564f7fee0d60 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0d40 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0d20 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0ce0 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0d00 <col:45> 'int' 5
| | |     | | `-UnaryOperator 0x564f7fee0e00 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee0de0 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee0dc0 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0d80 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee0da0 <col:54> 'int' 2
| | |     | |-InitListExpr 0x564f7fee3780 <line:45:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee0ef8 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0ed8 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0eb8 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0e78 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0e98 <col:36> 'int' 3
| | |     | | |-UnaryOperator 0x564f7fee0f98 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee0f78 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee0f58 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee0f18 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee0f38 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fee1038 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee1018 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee0ff8 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee0fb8 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee0fd8 <col:54> 'int' 3
| | |     | |-InitListExpr 0x564f7fee37e8 <line:46:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee1130 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee1110 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee10f0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee10b0 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee10d0 <col:36> 'int' 2
| | |     | | |-UnaryOperator 0x564f7fee11d0 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee11b0 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee1190 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee1150 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee1170 <col:45> 'int' 5
| | |     | | `-UnaryOperator 0x564f7fee1270 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee1250 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee1230 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee11f0 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee1210 <col:54> 'int' 3
| | |     | |-InitListExpr 0x564f7fee3850 <line:47:30, col:56> 'int32_t **[3]'
| | |     | | |-UnaryOperator 0x564f7fee1368 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee1348 <col:32, col:37> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee1328 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee12e8 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee1308 <col:36> 'int' 0
| | |     | | |-UnaryOperator 0x564f7fee1408 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | | | `-ArraySubscriptExpr 0x564f7fee13e8 <col:41, col:46> 'int32_t *' lvalue
| | |     | | |   |-ImplicitCastExpr 0x564f7fee13c8 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | |   | `-DeclRefExpr 0x564f7fee1388 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | | |   `-IntegerLiteral 0x564f7fee13a8 <col:45> 'int' 3
| | |     | | `-UnaryOperator 0x564f7fee14a8 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     | |   `-ArraySubscriptExpr 0x564f7fee1488 <col:50, col:55> 'int32_t *' lvalue
| | |     | |     |-ImplicitCastExpr 0x564f7fee1468 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | |     | `-DeclRefExpr 0x564f7fee1428 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | |     `-IntegerLiteral 0x564f7fee1448 <col:54> 'int' 3
| | |     | `-InitListExpr 0x564f7fee38b8 <line:48:30, col:56> 'int32_t **[3]'
| | |     |   |-UnaryOperator 0x564f7fee15b0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     |   | `-ArraySubscriptExpr 0x564f7fee1590 <col:32, col:37> 'int32_t *' lvalue
| | |     |   |   |-ImplicitCastExpr 0x564f7fee1560 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     |   |   | `-DeclRefExpr 0x564f7fee1520 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     |   |   `-IntegerLiteral 0x564f7fee1540 <col:36> 'int' 3
| | |     |   |-UnaryOperator 0x564f7fee1650 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     |   | `-ArraySubscriptExpr 0x564f7fee1630 <col:41, col:46> 'int32_t *' lvalue
| | |     |   |   |-ImplicitCastExpr 0x564f7fee1610 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     |   |   | `-DeclRefExpr 0x564f7fee15d0 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     |   |   `-IntegerLiteral 0x564f7fee15f0 <col:45> 'int' 3
| | |     |   `-UnaryOperator 0x564f7fee16f0 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |     |     `-ArraySubscriptExpr 0x564f7fee16d0 <col:50, col:55> 'int32_t *' lvalue
| | |     |       |-ImplicitCastExpr 0x564f7fee16b0 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     |       | `-DeclRefExpr 0x564f7fee1670 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     |       `-IntegerLiteral 0x564f7fee1690 <col:54> 'int' 3
| | |     `-InitListExpr 0x564f7fee39a0 <line:49:29, line:57:57> 'int32_t **[9][3]'
| | |       |-InitListExpr 0x564f7fee3a38 <line:49:30, col:58> 'int32_t **[3]'
| | |       | |-ImplicitCastExpr 0x564f7fee3a90 <col:31, col:39> 'int32_t **' <NullToPointer> MathErrno=1
| | |       | | `-CStyleCastExpr 0x564f7fee1828 <col:31, col:39> 'void *' <NullToPointer> MathErrno=1
| | |       | |   `-IntegerLiteral 0x564f7fee17f0 <col:39> 'int' 0
| | |       | |-UnaryOperator 0x564f7fee18d8 <col:42, col:48> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee18b8 <col:43, col:48> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1898 <col:43> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1858 <col:43> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1878 <col:47> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee1978 <col:51, col:57> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee1958 <col:52, col:57> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee1938 <col:52> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee18f8 <col:52> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee1918 <col:56> 'int' 2
| | |       |-InitListExpr 0x564f7fee3ac0 <line:50:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee1a70 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1a50 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1a30 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee19f0 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1a10 <col:36> 'int' 3
| | |       | |-UnaryOperator 0x564f7fee1b10 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1af0 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1ad0 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1a90 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1ab0 <col:45> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee1bb0 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee1b90 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee1b70 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee1b30 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee1b50 <col:54> 'int' 0
| | |       |-InitListExpr 0x564f7fee3b28 <line:51:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee1ca8 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1c88 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1c68 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1c28 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1c48 <col:36> 'int' 0
| | |       | |-UnaryOperator 0x564f7fee1d48 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1d28 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1d08 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1cc8 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1ce8 <col:45> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee1de8 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee1dc8 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee1da8 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee1d68 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee1d88 <col:54> 'int' 3
| | |       |-InitListExpr 0x564f7fee3b90 <line:52:30, col:58> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee1ee0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1ec0 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1ea0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1e60 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1e80 <col:36> 'int' 2
| | |       | |-UnaryOperator 0x564f7fee1f80 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee1f60 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee1f40 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee1f00 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee1f20 <col:45> 'int' 3
| | |       | `-ImplicitCastExpr 0x564f7fee3be8 <col:49, col:57> 'int32_t **' <NullToPointer> MathErrno=1
| | |       |   `-CStyleCastExpr 0x564f7fee1fd8 <col:49, col:57> 'void *' <NullToPointer> MathErrno=1
| | |       |     `-IntegerLiteral 0x564f7fee1fa0 <col:57> 'int' 0
| | |       |-InitListExpr 0x564f7fee3c18 <line:53:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee20e0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee20c0 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee20a0 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2060 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee2080 <col:36> 'int' 3
| | |       | |-UnaryOperator 0x564f7fee2180 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee2160 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee2140 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2100 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee2120 <col:45> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee2220 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee2200 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee21e0 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee21a0 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee21c0 <col:54> 'int' 3
| | |       |-InitListExpr 0x564f7fee3c80 <line:54:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee2318 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee22f8 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee22d8 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2298 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee22b8 <col:36> 'int' 3
| | |       | |-UnaryOperator 0x564f7fee23b8 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee2398 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee2378 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2338 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee2358 <col:45> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee2458 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee2438 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee2418 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee23d8 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee23f8 <col:54> 'int' 0
| | |       |-InitListExpr 0x564f7fee3ce8 <line:55:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee2550 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee2530 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee2510 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee24d0 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee24f0 <col:36> 'int' 3
| | |       | |-UnaryOperator 0x564f7fee25f0 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee25d0 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee25b0 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2570 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee2590 <col:45> 'int' 5
| | |       | `-UnaryOperator 0x564f7fee2690 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee2670 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee2650 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee2610 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee2630 <col:54> 'int' 2
| | |       |-InitListExpr 0x564f7fee3d50 <line:56:30, col:56> 'int32_t **[3]'
| | |       | |-UnaryOperator 0x564f7fee2788 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee2768 <col:32, col:37> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee2748 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee2708 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee2728 <col:36> 'int' 3
| | |       | |-UnaryOperator 0x564f7fee2828 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       | | `-ArraySubscriptExpr 0x564f7fee2808 <col:41, col:46> 'int32_t *' lvalue
| | |       | |   |-ImplicitCastExpr 0x564f7fee27e8 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       | |   | `-DeclRefExpr 0x564f7fee27a8 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       | |   `-IntegerLiteral 0x564f7fee27c8 <col:45> 'int' 3
| | |       | `-UnaryOperator 0x564f7fee28c8 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |       |   `-ArraySubscriptExpr 0x564f7fee28a8 <col:50, col:55> 'int32_t *' lvalue
| | |       |     |-ImplicitCastExpr 0x564f7fee2888 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |       |     | `-DeclRefExpr 0x564f7fee2848 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |       |     `-IntegerLiteral 0x564f7fee2868 <col:54> 'int' 3
| | |       `-InitListExpr 0x564f7fee3db8 <line:57:30, col:56> 'int32_t **[3]'
| | |         |-UnaryOperator 0x564f7fee29c0 <col:31, col:37> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |         | `-ArraySubscriptExpr 0x564f7fee29a0 <col:32, col:37> 'int32_t *' lvalue
| | |         |   |-ImplicitCastExpr 0x564f7fee2980 <col:32> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |         |   | `-DeclRefExpr 0x564f7fee2940 <col:32> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |         |   `-IntegerLiteral 0x564f7fee2960 <col:36> 'int' 2
| | |         |-UnaryOperator 0x564f7fee2a60 <col:40, col:46> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |         | `-ArraySubscriptExpr 0x564f7fee2a40 <col:41, col:46> 'int32_t *' lvalue
| | |         |   |-ImplicitCastExpr 0x564f7fee2a20 <col:41> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |         |   | `-DeclRefExpr 0x564f7fee29e0 <col:41> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |         |   `-IntegerLiteral 0x564f7fee2a00 <col:45> 'int' 5
| | |         `-UnaryOperator 0x564f7fee2b00 <col:49, col:55> 'int32_t **' prefix '&' cannot overflow MathErrno=1
| | |           `-ArraySubscriptExpr 0x564f7fee2ae0 <col:50, col:55> 'int32_t *' lvalue
| | |             |-ImplicitCastExpr 0x564f7fee2ac0 <col:50> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |             | `-DeclRefExpr 0x564f7fee2a80 <col:50> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |             `-IntegerLiteral 0x564f7fee2aa0 <col:54> 'int' 3
| | |-CallExpr 0x564f7fee3ec0 <line:58:3, col:21> 'void' MathErrno=1
| | | |-ImplicitCastExpr 0x564f7fee3ea0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
| | | | `-DeclRefExpr 0x564f7fee3e28 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
| | | `-IntegerLiteral 0x564f7fee3e48 <col:20> 'int' 0
| | |-DeclStmt 0x564f7fee4098 <line:59:3, col:14>
| | | |-VarDecl 0x564f7fee3f10 <col:3, col:7> col:7 used i 'int'
| | | |-VarDecl 0x564f7fee3f90 <col:3, col:10> col:10 j 'int'
| | | `-VarDecl 0x564f7fee4010 <col:3, col:13> col:13 k 'int'
| | |-CallExpr 0x564f7fee4110 <line:60:3, col:21> 'void' MathErrno=1
| | | |-ImplicitCastExpr 0x564f7fee40f0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
| | | | `-DeclRefExpr 0x564f7fee40b0 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
| | | `-IntegerLiteral 0x564f7fee40d0 <col:20> 'int' 1
| | |-ForStmt 0x564f7fee4398 <line:61:3, line:63:3>
| | | |-BinaryOperator 0x564f7fee4188 <line:61:8, col:12> 'int' '=' MathErrno=1
| | | | |-DeclRefExpr 0x564f7fee4148 <col:8> 'int' lvalue Var 0x564f7fee3f10 'i' 'int'
| | | | `-IntegerLiteral 0x564f7fee4168 <col:12> 'int' 0
| | | |-<<<NULL>>>
| | | |-BinaryOperator 0x564f7fee4210 <col:15, col:19> 'int' '<' MathErrno=1
| | | | |-ImplicitCastExpr 0x564f7fee41f0 <col:15> 'int' <LValueToRValue> MathErrno=1
| | | | | `-DeclRefExpr 0x564f7fee41b0 <col:15> 'int' lvalue Var 0x564f7fee3f10 'i' 'int'
| | | | `-IntegerLiteral 0x564f7fee41d0 <col:19> 'int' 6
| | | |-UnaryOperator 0x564f7fee4258 <col:22, col:23> 'int' postfix '++' MathErrno=1
| | | | `-DeclRefExpr 0x564f7fee4238 <col:22> 'int' lvalue Var 0x564f7fee3f10 'i' 'int'
| | | `-CompoundStmt 0x564f7fee4380 <col:27, line:63:3>
| | |   `-BinaryOperator 0x564f7fee4358 <line:62:5, col:15> 'int32_t *' '=' MathErrno=1
| | |     |-ArraySubscriptExpr 0x564f7fee42f8 <col:5, col:10> 'int32_t *' lvalue
| | |     | |-ImplicitCastExpr 0x564f7fee42b8 <col:5> 'int32_t **' <ArrayToPointerDecay> MathErrno=1
| | |     | | `-DeclRefExpr 0x564f7fee4278 <col:5> 'int32_t *[6]' lvalue Var 0x564f7feded18 'l_3' 'int32_t *[6]'
| | |     | `-ImplicitCastExpr 0x564f7fee42d8 <col:9> 'int' <LValueToRValue> MathErrno=1
| | |     |   `-DeclRefExpr 0x564f7fee4298 <col:9> 'int' lvalue Var 0x564f7fee3f10 'i' 'int'
| | |     `-UnaryOperator 0x564f7fee4338 <col:14, col:15> 'int32_t *' prefix '&' cannot overflow MathErrno=1
| | |       `-DeclRefExpr 0x564f7fee4318 <col:15> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
| | |-BinaryOperator 0x564f7fee4538 <line:64:3, col:20> 'int32_t *' '=' MathErrno=1
| | | |-ArraySubscriptExpr 0x564f7fee4490 <col:3, col:8> 'int32_t *volatile' lvalue
| | | | |-ImplicitCastExpr 0x564f7fee4470 <col:3> 'int32_t *volatile *' <ArrayToPointerDecay> MathErrno=1
| | | | | `-DeclRefExpr 0x564f7fee43d0 <col:3> 'int32_t *volatile[6]' lvalue Var 0x564f7fede5f8 'g_5' 'int32_t *volatile[6]'
| | | | `-IntegerLiteral 0x564f7fee43f0 <col:7> 'int' 4
| | | `-ImplicitCastExpr 0x564f7fee4518 <col:12, col:20> 'int32_t *volatile' <NullToPointer> MathErrno=1
| | |   `-CStyleCastExpr 0x564f7fee44e8 <col:12, col:20> 'void *' <NullToPointer> MathErrno=1
| | |     `-IntegerLiteral 0x564f7fee44b0 <col:20> 'int' 0
| | `-ReturnStmt 0x564f7fee45c0 <line:65:3, col:10>
| |   `-ImplicitCastExpr 0x564f7fee45a0 <col:10> 'int8_t':'signed char' <IntegralCast> MathErrno=1
| |     `-ImplicitCastExpr 0x564f7fee4580 <col:10> 'int32_t':'int' <LValueToRValue> MathErrno=1
| |       `-DeclRefExpr 0x564f7fee4560 <col:10> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
| `-OptimizeNoneAttr 0x564f7fedec20 <line:29:16>
`-FunctionDecl 0x564f7fee4868 <line:69:1, line:86:1> line:69:30 main 'int (int, char **)'
  |-ParmVarDecl 0x564f7fee4640 <col:35, col:39> col:39 used argc 'int'
  |-ParmVarDecl 0x564f7fee4740 <col:45, col:56> col:51 used argv 'char **'
  |-CompoundStmt 0x564f7fee5798 <col:59, line:86:1> MathErrno=1
  | |-CallExpr 0x564f7fee49d8 <line:70:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee49b8 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee4978 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x564f7fee4998 <col:20> 'int' 2
  | |-DeclStmt 0x564f7fee4a90 <line:71:3, col:8>
  | | `-VarDecl 0x564f7fee4a28 <col:3, col:7> col:7 i 'int'
  | |-CallExpr 0x564f7fee4b08 <line:72:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee4ae8 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee4aa8 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x564f7fee4ac8 <col:20> 'int' 3
  | |-DeclStmt 0x564f7fee4be0 <line:73:3, col:27>
  | | `-VarDecl 0x564f7fee4b58 <col:3, col:26> col:7 used print_hash_value 'int' cinit
  | |   `-IntegerLiteral 0x564f7fee4bc0 <col:26> 'int' 0
  | |-CallExpr 0x564f7fee4c58 <line:74:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee4c38 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee4bf8 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x564f7fee4c18 <col:20> 'int' 4
  | |-IfStmt 0x564f7fee5020 <line:75:3, line:77:3>
  | | |-BinaryOperator 0x564f7fee4f78 <line:75:7, col:44> 'int' '&&' MathErrno=1
  | | | |-BinaryOperator 0x564f7fee4cf0 <col:7, col:15> 'int' '==' MathErrno=1
  | | | | |-ImplicitCastExpr 0x564f7fee4cd0 <col:7> 'int' <LValueToRValue> MathErrno=1
  | | | | | `-DeclRefExpr 0x564f7fee4c90 <col:7> 'int' lvalue ParmVar 0x564f7fee4640 'argc' 'int'
  | | | | `-IntegerLiteral 0x564f7fee4cb0 <col:15> 'int' 2
  | | | `-BinaryOperator 0x564f7fee4f50 <col:20, col:44> 'int' '==' MathErrno=1
  | | |   |-CallExpr 0x564f7fee4e70 <col:20, col:39> 'int' MathErrno=1
  | | |   | |-ImplicitCastExpr 0x564f7fee4e50 <col:20> 'int (*)(const char *, const char *)' <FunctionToPointerDecay> MathErrno=1
  | | |   | | `-DeclRefExpr 0x564f7fee4d18 <col:20> 'int (const char *, const char *)' Function 0x564f7fda15d8 'strcmp' 'int (const char *, const char *)'
  | | |   | |-ImplicitCastExpr 0x564f7fee4ed0 <col:27, col:33> 'const char *' <NoOp> MathErrno=1
  | | |   | | `-ImplicitCastExpr 0x564f7fee4eb0 <col:27, col:33> 'char *' <LValueToRValue> MathErrno=1
  | | |   | |   `-ArraySubscriptExpr 0x564f7fee4d98 <col:27, col:33> 'char *' lvalue
  | | |   | |     |-ImplicitCastExpr 0x564f7fee4d78 <col:27> 'char **' <LValueToRValue> MathErrno=1
  | | |   | |     | `-DeclRefExpr 0x564f7fee4d38 <col:27> 'char **' lvalue ParmVar 0x564f7fee4740 'argv' 'char **'
  | | |   | |     `-IntegerLiteral 0x564f7fee4d58 <col:32> 'int' 1
  | | |   | `-ImplicitCastExpr 0x564f7fee4f10 <col:36> 'const char *' <NoOp> MathErrno=1
  | | |   |   `-ImplicitCastExpr 0x564f7fee4ef0 <col:36> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | |   |     `-StringLiteral 0x564f7fee4db8 <col:36> 'char[2]' lvalue "1"
  | | |   `-IntegerLiteral 0x564f7fee4f30 <col:44> 'int' 0
  | | `-CompoundStmt 0x564f7fee5008 <col:47, line:77:3>
  | |   `-BinaryOperator 0x564f7fee4fe0 <line:76:5, col:24> 'int' '=' MathErrno=1
  | |     |-DeclRefExpr 0x564f7fee4fa0 <col:5> 'int' lvalue Var 0x564f7fee4b58 'print_hash_value' 'int'
  | |     `-IntegerLiteral 0x564f7fee4fc0 <col:24> 'int' 1
  | |-CallExpr 0x564f7fee50a0 <line:78:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee5080 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee5040 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x564f7fee5060 <col:20> 'int' 5
  | |-CallExpr 0x564f7fee5150 <line:79:3, col:23> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x564f7fee5130 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x564f7fee50d8 <col:3> 'void (void)' Function 0x564f7feac460 'platform_main_begin' 'void (void)'
  | |-CallExpr 0x564f7fee51e0 <line:80:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee51c0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee5180 <col:3> 'void (int)' Function 0x564f7fd81750 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x564f7fee51a0 <col:20> 'int' 6
  | |-CallExpr 0x564f7fee5258 <line:81:3, col:16> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x564f7fee5238 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x564f7fee5218 <col:3> 'void (void)' Function 0x564f7feda5d8 'crc32_gentab' 'void (void)'
  | |-CallExpr 0x564f7fee5330 <line:82:3, col:10> 'int8_t':'signed char' MathErrno=1
  | | `-ImplicitCastExpr 0x564f7fee5310 <col:3> 'int8_t (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x564f7fee5288 <col:3> 'int8_t (void)' Function 0x564f7fedeb78 'func_1' 'int8_t (void)'
  | |-CallExpr 0x564f7fee5460 <line:83:3, col:47> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee5440 <col:3> 'void (*)(uint64_t, char *, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee5360 <col:3> 'void (uint64_t, char *, int)' Function 0x564f7fedd640 'transparent_crc' 'void (uint64_t, char *, int)'
  | | |-ImplicitCastExpr 0x564f7fee54c8 <col:19> 'uint64_t':'unsigned long' <IntegralCast> MathErrno=1
  | | | `-ImplicitCastExpr 0x564f7fee54a8 <col:19> 'int32_t':'int' <LValueToRValue> MathErrno=1
  | | |   `-DeclRefExpr 0x564f7fee5380 <col:19> 'int32_t':'int' lvalue Var 0x564f7fede410 'g_4' 'int32_t':'int'
  | | |-ImplicitCastExpr 0x564f7fee54e8 <col:24> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | | `-StringLiteral 0x564f7fee53a0 <col:24> 'char[4]' lvalue "g_4"
  | | `-ImplicitCastExpr 0x564f7fee5508 <col:31> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x564f7fee53c0 <col:31> 'int' lvalue Var 0x564f7fee4b58 'print_hash_value' 'int'
  | |-CallExpr 0x564f7fee56c0 <line:84:3, col:67> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x564f7fee56a0 <col:3> 'void (*)(uint32_t, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x564f7fee5528 <col:3> 'void (uint32_t, int)' Function 0x564f7feac730 'platform_main_end' 'void (uint32_t, int)'
  | | |-ImplicitCastExpr 0x564f7fee5700 <col:21, col:37> 'uint32_t':'unsigned int' <IntegralCast> MathErrno=1
  | | | `-BinaryOperator 0x564f7fee55f0 <col:21, col:37> 'unsigned long' '^' MathErrno=1
  | | |   |-ImplicitCastExpr 0x564f7fee55d0 <col:21> 'unsigned long' <IntegralCast> MathErrno=1
  | | |   | `-ImplicitCastExpr 0x564f7fee55b0 <col:21> 'uint32_t':'unsigned int' <LValueToRValue> MathErrno=1
  | | |   |   `-DeclRefExpr 0x564f7fee5548 <col:21> 'uint32_t':'unsigned int' lvalue Var 0x564f7fed93f8 'crc32_context' 'uint32_t':'unsigned int'
  | | |   `-IntegerLiteral 0x564f7fee5568 <col:37> 'unsigned long' 4294967295
  | | `-ImplicitCastExpr 0x564f7fee5720 <col:51> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x564f7fee5618 <col:51> 'int' lvalue Var 0x564f7fee4b58 'print_hash_value' 'int'
  | `-ReturnStmt 0x564f7fee5760 <line:85:3, col:10>
  |   `-IntegerLiteral 0x564f7fee5740 <col:10> 'int' 0
  `-OptimizeNoneAttr 0x564f7fee4920 <line:69:16>

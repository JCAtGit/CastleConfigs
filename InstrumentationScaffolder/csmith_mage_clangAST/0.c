TranslationUnitDecl 0x55e56337c448 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x55e56337d020 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x55e56337ca10 '__int128'
|-TypedefDecl 0x55e56337d090 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x55e56337ca30 'unsigned __int128'
|-TypedefDecl 0x55e56337d3a0 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x55e56337d170 'struct __NSConstantString_tag'
|   `-Record 0x55e56337d0e8 '__NSConstantString_tag'
|-TypedefDecl 0x55e56337ccc8 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x55e56337cc80 'char *'
|   `-BuiltinType 0x55e56337c4f0 'char'
|-TypedefDecl 0x55e56337cfb0 <<invalid sloc>> <invalid sloc> implicit referenced __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x55e56337cf60 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x55e56337cda0 'struct __va_list_tag'
|     `-Record 0x55e56337cd20 '__va_list_tag'
|-FunctionDecl 0x55e5633e4d80 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/MarkerDefinition.h:3:1, line:7:1> line:4:13 used codemarker_alpha 'void (int)' static
| |-ParmVarDecl 0x55e5633e4cb0 <col:30, col:34> col:34 used markerID 'int'
| |-CompoundStmt 0x55e5633e5190 <col:44, line:7:1>
| | |-DeclStmt 0x55e5633e4fd8 <line:5:5, col:34>
| | | `-VarDecl 0x55e5633e4f38 <col:5, col:26> col:18 dummy 'volatile int' cinit
| | |   `-ImplicitCastExpr 0x55e5633e4fc0 <col:26> 'int' <LValueToRValue>
| | |     `-DeclRefExpr 0x55e5633e4fa0 <col:26> 'int' lvalue ParmVar 0x55e5633e4cb0 'markerID' 'int'
| | `-GCCAsmStmt 0x55e5633e5118 <line:6:2, col:49>
| |   `-ImplicitCastExpr 0x55e5633e5100 <col:29> 'int' <LValueToRValue>
| |     `-DeclRefExpr 0x55e5633e5090 <col:29> 'int' lvalue ParmVar 0x55e5633e4cb0 'markerID' 'int'
| |-NoInlineAttr 0x55e5633e4e30 <line:3:16>
| |-UsedAttr 0x55e5633e4e88 <col:26>
| `-NoThrowAttr 0x55e5633e4eb0 <col:32>
|-TypedefDecl 0x55e5633e51c8 </usr/bin/../lib/clang/21/include/__stddef_size_t.h:18:1, col:23> col:23 referenced size_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-FunctionDecl 0x55e5633e5548 </usr/include/string.h:43:14> col:14 implicit memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633e5650 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e5633e56b8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e5633e5720 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e5633e55f0 <<invalid sloc>> Implicit 946
| `-NoThrowAttr 0x55e5633e57a0 <col:14> Implicit
|-FunctionDecl 0x55e5633e57c8 prev 0x55e5633e5548 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:43:14 memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633e5238 <col:22, col:39> col:39 __dest 'void *restrict'
| |-ParmVarDecl 0x55e5633e52e8 <col:47, col:70> col:70 __src 'const void *restrict'
| |-ParmVarDecl 0x55e5633e53c0 <line:44:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5633e5928 <<invalid sloc>> Inherited Implicit 946
| |-NoThrowAttr 0x55e5633e5888 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633e58e0 <line:555:57, /usr/include/string.h:44:44> 1 2
|-FunctionDecl 0x55e5633e5b98 <line:47:14> col:14 implicit memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633ffe50 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e5633ffeb8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e5633fff20 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e5633e5c40 <<invalid sloc>> Implicit 948
| `-NoThrowAttr 0x55e5633fffa0 <col:14> Implicit
|-FunctionDecl 0x55e5633fffc8 prev 0x55e5633e5b98 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:47:14 memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633e5970 <col:23, col:29> col:29 __dest 'void *'
| |-ParmVarDecl 0x55e5633e59f0 <col:37, col:49> col:49 __src 'const void *'
| |-ParmVarDecl 0x55e5633e5a68 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563400128 <<invalid sloc>> Inherited Implicit 948
| |-NoThrowAttr 0x55e563400088 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634000e0 <line:555:57, /usr/include/string.h:48:30> 1 2
|-FunctionDecl 0x55e563400478 <line:54:14> col:14 implicit memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e563400580 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e5634005e8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563400650 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55e5634006b8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e563400520 <<invalid sloc>> Implicit 951
|-FunctionDecl 0x55e563400740 prev 0x55e563400478 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:54:14 memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e563400170 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55e5634001f0 <col:48, col:71> col:71 __src 'const void *restrict'
| |-ParmVarDecl 0x55e563400270 <line:55:9, col:13> col:13 __c 'int'
| |-ParmVarDecl 0x55e5634002e8 <col:18, col:25> col:25 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5634008a8 <<invalid sloc>> Inherited Implicit 951
| |-NoThrowAttr 0x55e563400808 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563400860 <line:555:57, /usr/include/string.h:56:29> 1 2
|-FunctionDecl 0x55e563400b48 <line:61:14> col:14 implicit memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e563400c50 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e563400cb8 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55e563400d20 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e563400bf0 <<invalid sloc>> Implicit 950
| `-NoThrowAttr 0x55e563400da0 <col:14> Implicit
|-FunctionDecl 0x55e563401e80 prev 0x55e563400b48 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:61:14 memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e5634008f0 <col:22, col:28> col:28 __s 'void *'
| |-ParmVarDecl 0x55e563400970 <col:33, col:37> col:37 __c 'int'
| |-ParmVarDecl 0x55e5634009e8 <col:42, col:49> col:49 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563401fd8 <<invalid sloc>> Inherited Implicit 950
| |-NoThrowAttr 0x55e563401f40 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563401f98 <line:555:57, /usr/include/string.h:61:75> 1
|-FunctionDecl 0x55e563402298 <line:64:12> col:12 implicit memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634023a0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563402408 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563402470 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e563402340 <<invalid sloc>> Implicit 944
|-FunctionDecl 0x55e5634024f0 prev 0x55e563402298 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:64:12 memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e563402020 <col:20, col:32> col:32 __s1 'const void *'
| |-ParmVarDecl 0x55e5634020a0 <col:38, col:50> col:50 __s2 'const void *'
| |-ParmVarDecl 0x55e563402118 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563402678 <<invalid sloc>> Inherited Implicit 944
| |-NoThrowAttr 0x55e5634025b0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563402608 <line:479:45>
| `-NonNullAttr 0x55e563402630 <line:555:57, /usr/include/string.h:65:49> 1 2
|-FunctionDecl 0x55e5634028a0 <line:80:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:80:12 __memcmpeq 'int (const void *, const void *, size_t)' extern
| |-ParmVarDecl 0x55e5634026c0 <col:24, col:36> col:36 __s1 'const void *'
| |-ParmVarDecl 0x55e563402740 <col:42, col:54> col:54 __s2 'const void *'
| |-ParmVarDecl 0x55e5634027b8 <col:60, col:67> col:67 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e563402960 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e5634029b8 <line:479:45>
| `-NonNullAttr 0x55e5634029e0 <line:555:57, /usr/include/string.h:81:49> 1 2
|-FunctionDecl 0x55e563402c98 <line:107:14> col:14 implicit memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e563402da0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563402e08 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55e563402e90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e563402d40 <<invalid sloc>> Implicit 943
| `-NoThrowAttr 0x55e563402f10 <col:14> Implicit
|-FunctionDecl 0x55e563402f38 prev 0x55e563402c98 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:107:14 memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55e563402a40 <col:22, col:34> col:34 __s 'const void *'
| |-ParmVarDecl 0x55e563402ac0 <col:39, col:43> col:43 __c 'int'
| |-ParmVarDecl 0x55e563402b38 <col:48, col:55> col:55 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5634030b8 <<invalid sloc>> Inherited Implicit 943
| |-NoThrowAttr 0x55e563402ff8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563403050 <line:479:45>
| `-NonNullAttr 0x55e563403078 <line:555:57, /usr/include/string.h:108:47> 1
|-FunctionDecl 0x55e5634032e8 <line:141:14> col:14 implicit strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e5634033f0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e563403458 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e563403390 <<invalid sloc>> Implicit 1238
| `-NoThrowAttr 0x55e5634034d0 <col:14> Implicit
|-FunctionDecl 0x55e5634034f8 prev 0x55e5634032e8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:141:14 strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e563403100 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55e563403180 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55e563403648 <<invalid sloc>> Inherited Implicit 1238
| |-NoThrowAttr 0x55e5634035b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563403608 <line:555:57, /usr/include/string.h:142:30> 1 2
|-FunctionDecl 0x55e563403908 <line:144:14> col:14 implicit strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563403a10 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e563403a78 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563403ae0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e5634039b0 <<invalid sloc>> Implicit 1249
| `-NoThrowAttr 0x55e563403b60 <col:14> Implicit
|-FunctionDecl 0x55e563403b88 prev 0x55e563403908 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:144:14 strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563403690 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55e563403710 <line:145:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55e563403788 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563403ce8 <<invalid sloc>> Inherited Implicit 1249
| |-NoThrowAttr 0x55e563403c48 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563403ca0 <line:555:57, /usr/include/string.h:146:30> 1 2
|-FunctionDecl 0x55e563403ea0 <line:149:14> col:14 implicit strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e563403fa8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e563404010 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e563403f48 <<invalid sloc>> Implicit 1232
| `-NoThrowAttr 0x55e563404088 <col:14> Implicit
|-FunctionDecl 0x55e5634040b0 prev 0x55e563403ea0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:149:14 strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e563403d30 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55e563403db0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55e563404208 <<invalid sloc>> Inherited Implicit 1232
| |-NoThrowAttr 0x55e563404168 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634041c0 <line:555:57, /usr/include/string.h:150:30> 1 2
|-FunctionDecl 0x55e563404430 <line:152:14> col:14 implicit strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563404538 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e5634045a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563404608 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e5634044d8 <<invalid sloc>> Implicit 1245
| `-NoThrowAttr 0x55e563404688 <col:14> Implicit
|-FunctionDecl 0x55e5634046b0 prev 0x55e563404430 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:152:14 strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563404250 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55e5634042d0 <col:48, col:71> col:71 __src 'const char *restrict'
| |-ParmVarDecl 0x55e563404348 <line:153:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563404808 <<invalid sloc>> Inherited Implicit 1245
| |-NoThrowAttr 0x55e563404770 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634047c8 <line:555:57, /usr/include/string.h:153:45> 1 2
|-FunctionDecl 0x55e5634049f8 <line:156:12> col:12 implicit used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e563404b00 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563404b68 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e563404aa0 <<invalid sloc>> Implicit 1236
| `-NoThrowAttr 0x55e563404be0 <col:12> Implicit
|-FunctionDecl 0x55e563404c08 prev 0x55e5634049f8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:156:12 used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e563404850 <col:20, col:32> col:32 __s1 'const char *'
| |-ParmVarDecl 0x55e5634048d0 <col:38, col:50> col:50 __s2 'const char *'
| |-BuiltinAttr 0x55e563404d88 <<invalid sloc>> Inherited Implicit 1236
| |-NoThrowAttr 0x55e563404cc0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563404d18 <line:479:45>
| `-NonNullAttr 0x55e563404d40 <line:555:57, /usr/include/string.h:157:49> 1 2
|-FunctionDecl 0x55e563405db8 <line:159:12> col:12 implicit strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563405ec0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563405f28 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563405f90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e563405e60 <<invalid sloc>> Implicit 1247
| `-NoThrowAttr 0x55e563406010 <col:12> Implicit
|-FunctionDecl 0x55e563406038 prev 0x55e563405db8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:159:12 strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563404dd0 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55e563405bc0 <col:39, col:51> col:51 __s2 'const char *'
| |-ParmVarDecl 0x55e563405c38 <col:57, col:64> col:64 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5634061b8 <<invalid sloc>> Inherited Implicit 1247
| |-NoThrowAttr 0x55e5634060f8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563406150 <line:479:45>
| `-NonNullAttr 0x55e563406178 <line:555:57, /usr/include/string.h:160:49> 1 2
|-FunctionDecl 0x55e563406360 <line:163:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:163:12 strcoll 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e563406200 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55e563406280 <col:39, col:51> col:51 __s2 'const char *'
| |-NoThrowAttr 0x55e563406418 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563406470 <line:479:45>
| `-NonNullAttr 0x55e563406498 <line:555:57, /usr/include/string.h:164:49> 1 2
|-FunctionDecl 0x55e563406740 <line:166:15> col:15 implicit strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563406848 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e5634068b0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563406918 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e5634067e8 <<invalid sloc>> Implicit 1279
|-FunctionDecl 0x55e563406998 prev 0x55e563406740 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:166:15 strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634064f0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55e563406570 <line:167:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55e5634065e8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563406af8 <<invalid sloc>> Inherited Implicit 1279
| |-NoThrowAttr 0x55e563406a58 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563406ab0 <line:555:57, /usr/include/string.h:168:26> 2
|-RecordDecl 0x55e563406b28 </usr/include/bits/types/__locale_t.h:27:1, line:39:1> line:27:8 struct __locale_struct definition
| |-RecordDecl 0x55e5634072d0 parent 0x55e56337c448 <line:30:3, col:10> col:10 struct __locale_data
| |-FieldDecl 0x55e5634074f8 <col:3, col:37> col:25 __locales 'struct __locale_data *[13]'
| |-FieldDecl 0x55e563407598 <line:33:3, col:29> col:29 __ctype_b 'const unsigned short *'
| |-FieldDecl 0x55e563407600 <line:34:3, col:14> col:14 __ctype_tolower 'const int *'
| |-FieldDecl 0x55e563407668 <line:35:3, col:14> col:14 __ctype_toupper 'const int *'
| `-FieldDecl 0x55e563407758 <line:38:3, col:25> col:15 __names 'const char *[13]'
|-TypedefDecl 0x55e563407868 <line:41:1, col:33> col:33 referenced __locale_t 'struct __locale_struct *'
| `-PointerType 0x55e563407810 'struct __locale_struct *'
|   `-ElaboratedType 0x55e5634077b0 'struct __locale_struct' sugar
|     `-RecordType 0x55e5634072b0 'struct __locale_struct'
|       `-Record 0x55e563406b28 '__locale_struct'
|-TypedefDecl 0x55e563407930 </usr/include/bits/types/locale_t.h:24:1, col:20> col:20 referenced locale_t '__locale_t':'struct __locale_struct *'
| `-ElaboratedType 0x55e5634078f0 '__locale_t' sugar
|   `-TypedefType 0x55e5634078c0 '__locale_t' sugar
|     |-Typedef 0x55e563407868 '__locale_t'
|     `-PointerType 0x55e563407810 'struct __locale_struct *'
|       `-ElaboratedType 0x55e5634077b0 'struct __locale_struct' sugar
|         `-RecordType 0x55e5634072b0 'struct __locale_struct'
|           `-Record 0x55e563406b28 '__locale_struct'
|-FunctionDecl 0x55e563407ca8 </usr/include/string.h:175:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:175:12 strcoll_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55e5634079a0 <col:23, col:35> col:35 __s1 'const char *'
| |-ParmVarDecl 0x55e563407a20 <col:41, col:53> col:53 __s2 'const char *'
| |-ParmVarDecl 0x55e563407b00 <col:59, col:68> col:68 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55e563407d68 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563407dc0 <line:479:45>
| `-NonNullAttr 0x55e563407de8 <line:555:57, /usr/include/string.h:176:52> 1 2 3
|-FunctionDecl 0x55e563408140 <line:179:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:179:15 strxfrm_l 'size_t (char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55e563407e48 <col:26, col:32> col:32 __dest 'char *'
| |-ParmVarDecl 0x55e563407ec8 <col:40, col:52> col:52 __src 'const char *'
| |-ParmVarDecl 0x55e563407f40 <col:59, col:66> col:66 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e563407fb8 <line:180:5, col:14> col:14 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55e563408208 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563408260 <line:555:57, /usr/include/string.h:180:43> 2 4
|-FunctionDecl 0x55e5634093d8 <line:187:14> col:14 implicit strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55e5634094e0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e563409480 <<invalid sloc>> Implicit 1240
| `-NoThrowAttr 0x55e563409550 <col:14> Implicit
|-FunctionDecl 0x55e563409578 prev 0x55e5634093d8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:187:14 strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55e5634092e8 <col:22, col:34> col:34 __s 'const char *'
| |-BuiltinAttr 0x55e5634096f8 <<invalid sloc>> Inherited Implicit 1240
| |-NoThrowAttr 0x55e563409628 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55e563409680 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55e5634096b8 <line:555:57, /usr/include/string.h:188:48> 1
|-FunctionDecl 0x55e5634098f8 <line:195:14> col:14 implicit strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563409a00 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563409a68 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e5634099a0 <<invalid sloc>> Implicit 1272
| `-NoThrowAttr 0x55e563409ae0 <col:14> Implicit
|-FunctionDecl 0x55e563409b08 prev 0x55e5634098f8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:195:14 strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e563409740 <col:23, col:35> col:35 __string 'const char *'
| |-ParmVarDecl 0x55e5634097b8 <col:45, col:52> col:52 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563409c98 <<invalid sloc>> Inherited Implicit 1272
| |-NoThrowAttr 0x55e563409bc0 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55e563409c18 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55e563409c50 <line:555:57, /usr/include/string.h:196:48> 1
|-FunctionDecl 0x55e563409e68 <line:246:14> col:14 implicit strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563409f70 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563409fd8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563409f10 <<invalid sloc>> Implicit 1234
| `-NoThrowAttr 0x55e56340a050 <col:14> Implicit
|-FunctionDecl 0x55e56340a078 prev 0x55e563409e68 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:246:14 strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563409ce0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55e563409d60 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55e56340a1f8 <<invalid sloc>> Inherited Implicit 1234
| |-NoThrowAttr 0x55e56340a130 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340a188 <line:479:45>
| `-NonNullAttr 0x55e56340a1b0 <line:555:57, /usr/include/string.h:247:46> 1
|-FunctionDecl 0x55e56340a3a0 <line:273:14> col:14 implicit strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e56340a4a8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56340a510 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e56340a448 <<invalid sloc>> Implicit 1278
| `-NoThrowAttr 0x55e56340a588 <col:14> Implicit
|-FunctionDecl 0x55e56340a5b0 prev 0x55e56340a3a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:273:14 strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e56340a240 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55e56340a2e0 <col:40, col:44> col:44 __c 'int'
| |-BuiltinAttr 0x55e56340a728 <<invalid sloc>> Inherited Implicit 1278
| |-NoThrowAttr 0x55e56340a668 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340a6c0 <line:479:45>
| `-NonNullAttr 0x55e56340a6e8 <line:555:57, /usr/include/string.h:274:46> 1
|-FunctionDecl 0x55e56340a8b0 <line:286:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:286:14 strchrnul 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e56340a770 <col:25, col:37> col:37 __s 'const char *'
| |-ParmVarDecl 0x55e56340a7f0 <col:42, col:46> col:46 __c 'int'
| |-NoThrowAttr 0x55e56340a968 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340a9c0 <line:479:45>
| `-NonNullAttr 0x55e56340a9e8 <line:555:57, /usr/include/string.h:287:46> 1
|-FunctionDecl 0x55e56340ac20 <line:293:15> col:15 implicit strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340ad28 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56340ad90 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55e56340acc8 <<invalid sloc>> Implicit 1262
|-FunctionDecl 0x55e56340ae08 prev 0x55e56340ac20 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:293:15 strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340aa40 <col:24, col:36> col:36 __s 'const char *'
| |-ParmVarDecl 0x55e56340aac0 <col:41, col:53> col:53 __reject 'const char *'
| |-BuiltinAttr 0x55e56340af88 <<invalid sloc>> Inherited Implicit 1262
| |-NoThrowAttr 0x55e56340aec0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340af18 <line:479:45>
| `-NonNullAttr 0x55e56340af40 <line:555:57, /usr/include/string.h:294:49> 1 2
|-FunctionDecl 0x55e56340b128 <line:297:15> col:15 implicit strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340b230 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56340b2f0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e56340b1d0 <<invalid sloc>> Implicit 1251
| `-NoThrowAttr 0x55e56340b368 <col:15> Implicit
|-FunctionDecl 0x55e56340b390 prev 0x55e56340b128 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:297:15 strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340afd0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55e56340b050 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55e56340b508 <<invalid sloc>> Inherited Implicit 1251
| |-NoThrowAttr 0x55e56340b448 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340b4a0 <line:479:45>
| `-NonNullAttr 0x55e56340b4c8 <line:555:57, /usr/include/string.h:298:49> 1 2
|-FunctionDecl 0x55e56340b6f8 <line:323:14> col:14 implicit strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340b800 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56340b868 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e56340b7a0 <<invalid sloc>> Implicit 1276
| `-NoThrowAttr 0x55e56340b8e0 <col:14> Implicit
|-FunctionDecl 0x55e56340b908 prev 0x55e56340b6f8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:323:14 strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340b550 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55e56340b5d0 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55e56340ba88 <<invalid sloc>> Inherited Implicit 1276
| |-NoThrowAttr 0x55e56340b9c0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340ba18 <line:479:45>
| `-NonNullAttr 0x55e56340ba40 <line:555:57, /usr/include/string.h:324:49> 1 2
|-FunctionDecl 0x55e56340bc30 <line:350:14> col:14 implicit strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340bd38 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56340bda0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e56340bcd8 <<invalid sloc>> Implicit 1253
| `-NoThrowAttr 0x55e56340be18 <col:14> Implicit
|-FunctionDecl 0x55e56340be40 prev 0x55e56340bc30 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:350:14 strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e56340bad0 <col:22, col:34> col:34 __haystack 'const char *'
| |-ParmVarDecl 0x55e56340bb50 <col:46, col:58> col:58 __needle 'const char *'
| |-BuiltinAttr 0x55e56340bfb8 <<invalid sloc>> Inherited Implicit 1253
| |-NoThrowAttr 0x55e56340bef8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56340bf50 <line:479:45>
| `-NonNullAttr 0x55e56340bf78 <line:555:57, /usr/include/string.h:351:49> 1 2
|-FunctionDecl 0x55e56340c140 <line:356:14> col:14 implicit strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e56340c248 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e5633fa230 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55e56340c1e8 <<invalid sloc>> Implicit 1261
|-FunctionDecl 0x55e5633fa2a8 prev 0x55e56340c140 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:356:14 strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e56340c000 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55e56340c080 <col:44, col:67> col:67 __delim 'const char *restrict'
| |-BuiltinAttr 0x55e5633fa3f8 <<invalid sloc>> Inherited Implicit 1261
| |-NoThrowAttr 0x55e5633fa360 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633fa3b8 <line:555:57, /usr/include/string.h:357:27> 2
|-FunctionDecl 0x55e5633fa6f8 <line:361:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:361:14 __strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55e5633fa440 <col:26, col:43> col:43 __s 'char *restrict'
| |-ParmVarDecl 0x55e5633fa4c0 <line:362:5, col:28> col:28 __delim 'const char *restrict'
| |-ParmVarDecl 0x55e5633fa578 <line:363:5, col:23> col:23 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55e5633fa7b8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633fa810 <line:555:57, /usr/include/string.h:364:30> 2 3
|-FunctionDecl 0x55e5633faa58 <line:366:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:366:14 strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55e5633fa870 <col:24, col:41> col:41 __s 'char *restrict'
| |-ParmVarDecl 0x55e5633fa8f0 <col:46, col:69> col:69 __delim 'const char *restrict'
| |-ParmVarDecl 0x55e5633fa970 <line:367:10, col:28> col:28 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55e5633fab18 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633fab70 <line:555:57, /usr/include/string.h:368:30> 2 3
|-FunctionDecl 0x55e5633fad30 <line:380:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:380:14 strcasestr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e5633fabd0 <col:26, col:38> col:38 __haystack 'const char *'
| |-ParmVarDecl 0x55e5633fac50 <col:50, col:62> col:62 __needle 'const char *'
| |-NoThrowAttr 0x55e5633fade8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e5633fae40 <line:479:45>
| `-NonNullAttr 0x55e5633fae68 <line:555:57, /usr/include/string.h:381:49> 1 2
|-FunctionDecl 0x55e5633fb240 <line:389:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:389:14 memmem 'void *(const void *, size_t, const void *, size_t)' extern
| |-ParmVarDecl 0x55e5633faec0 <col:22, col:34> col:34 __haystack 'const void *'
| |-ParmVarDecl 0x55e5633faf38 <col:46, col:53> col:53 __haystacklen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e5633fafb8 <line:390:8, col:20> col:20 __needle 'const void *'
| |-ParmVarDecl 0x55e5633fb030 <col:30, col:37> col:37 __needlelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e5633fb308 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e5633fb360 <line:479:45>
| `-NonNullAttr 0x55e5633fb388 <line:555:57, /usr/include/string.h:391:49> 1 3
|-FunctionDecl 0x55e5633fb5c0 <line:397:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:397:14 __mempcpy 'void *(void *restrict, const void *restrict, size_t)' extern
| |-ParmVarDecl 0x55e5633fb3e0 <col:25, col:42> col:42 __dest 'void *restrict'
| |-ParmVarDecl 0x55e5633fb460 <line:398:4, col:27> col:27 __src 'const void *restrict'
| |-ParmVarDecl 0x55e5633fb4d8 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e5633fb680 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633fb6d8 <line:555:57, /usr/include/string.h:399:30> 1 2
|-FunctionDecl 0x55e5633fb910 <line:400:14> col:14 implicit mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633fba18 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e5633fba80 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e5633fbae8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e5633fb9b8 <<invalid sloc>> Implicit 955
|-FunctionDecl 0x55e5633fbb68 prev 0x55e5633fb910 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:400:14 mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5633fb730 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55e5633fb7b0 <line:401:9, col:32> col:32 __src 'const void *restrict'
| |-ParmVarDecl 0x55e5633fb828 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5633fbcc8 <<invalid sloc>> Inherited Implicit 955
| |-NoThrowAttr 0x55e5633fbc28 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5633fbc80 <line:555:57, /usr/include/string.h:402:30> 1 2
|-FunctionDecl 0x55e5633fbe40 <line:407:15> col:15 implicit strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55e5633fbf48 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e5633fbee8 <<invalid sloc>> Implicit 1243
| `-NoThrowAttr 0x55e5633fbfb8 <col:15> Implicit
|-FunctionDecl 0x55e5633fbfe0 prev 0x55e5633fbe40 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:407:15 strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55e5633fbd10 <col:23, col:35> col:35 __s 'const char *'
| |-BuiltinAttr 0x55e5633fc158 <<invalid sloc>> Inherited Implicit 1243
| |-NoThrowAttr 0x55e5633fc090 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e5633fc0e8 <line:479:45>
| `-NonNullAttr 0x55e5633fc110 <line:555:57, /usr/include/string.h:408:46> 1
|-FunctionDecl 0x55e563412c30 <line:413:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:413:15 strnlen 'size_t (const char *, size_t)' extern
| |-ParmVarDecl 0x55e5633fc1a0 <col:24, col:36> col:36 __string 'const char *'
| |-ParmVarDecl 0x55e563412af0 <col:46, col:53> col:53 __maxlen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e563412ce8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563412d40 <line:479:45>
| `-NonNullAttr 0x55e563412d68 <line:555:57, /usr/include/string.h:414:46> 1
|-FunctionDecl 0x55e563412e98 <line:419:14> col:14 implicit strerror 'char *(int)' extern
| |-ParmVarDecl 0x55e563412fa0 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55e563412f40 <<invalid sloc>> Implicit 1241
|-FunctionDecl 0x55e563413010 prev 0x55e563412e98 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:419:14 strerror 'char *(int)' extern
| |-ParmVarDecl 0x55e563412dc0 <col:24, col:28> col:28 __errnum 'int'
| |-BuiltinAttr 0x55e563413118 <<invalid sloc>> Inherited Implicit 1241
| `-NoThrowAttr 0x55e5634130c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563413418 </usr/include/string.h:432:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:432:28 strerror_r 'int (int, char *, size_t)' extern
| |-ParmVarDecl 0x55e563413160 <line:433:8, col:12> col:12 __errnum 'int'
| |-ParmVarDecl 0x55e5634131e0 <col:22, col:28> col:28 __buf 'char *'
| |-ParmVarDecl 0x55e563413258 <col:35, col:42> col:42 __buflen 'size_t':'unsigned long'
| |-AsmLabelAttr 0x55e5634134c0 <<scratch space>:39:1> "__xpg_strerror_r" IsLiteralLabel
| |-NoThrowAttr 0x55e563413558 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563413580 <line:555:57, /usr/include/string.h:434:38> 2
|-FunctionDecl 0x55e563413778 <line:458:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:458:14 strerror_l 'char *(int, locale_t)' extern
| |-ParmVarDecl 0x55e5634135e0 <col:26, col:30> col:30 __errnum 'int'
| |-ParmVarDecl 0x55e563413658 <col:40, col:49> col:49 __l 'locale_t':'struct __locale_struct *'
| `-NoThrowAttr 0x55e563413830 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563416e10 </usr/include/strings.h:34:12> col:12 implicit bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e563416f18 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563416f80 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563416fe8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e563416eb8 <<invalid sloc>> Implicit 179
|-FunctionDecl 0x55e563417068 prev 0x55e563416e10 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:34:12 bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634138a0 <col:18, col:30> col:30 __s1 'const void *'
| |-ParmVarDecl 0x55e563413920 <col:36, col:48> col:48 __s2 'const void *'
| |-ParmVarDecl 0x55e563413998 <col:54, col:61> col:61 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e5634171e8 <<invalid sloc>> Inherited Implicit 179
| |-NoThrowAttr 0x55e563417128 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563417180 <line:479:45>
| `-NonNullAttr 0x55e5634171a8 <line:555:57, /usr/include/strings.h:35:49> 1 2
|-FunctionDecl 0x55e5634174a0 <line:38:13> col:13 implicit bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634175a8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563417610 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e563417678 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e563417548 <<invalid sloc>> Implicit 186
| `-NoThrowAttr 0x55e5634176f8 <col:13> Implicit
|-FunctionDecl 0x55e563417720 prev 0x55e5634174a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:38:13 bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55e563417230 <col:20, col:32> col:32 __src 'const void *'
| |-ParmVarDecl 0x55e5634172b0 <col:39, col:45> col:45 __dest 'void *'
| |-ParmVarDecl 0x55e563417328 <col:53, col:60> col:60 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563417878 <<invalid sloc>> Inherited Implicit 186
| |-NoThrowAttr 0x55e5634177e0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563417838 <line:555:57, /usr/include/strings.h:39:27> 1 2
|-FunctionDecl 0x55e563417a70 <line:42:13> col:13 implicit bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55e563417b78 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e563417be0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e563417b18 <<invalid sloc>> Implicit 184
| `-NoThrowAttr 0x55e563417c58 <col:13> Implicit
|-FunctionDecl 0x55e563417c80 prev 0x55e563417a70 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:42:13 bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634178c0 <col:20, col:26> col:26 __s 'void *'
| |-ParmVarDecl 0x55e563417938 <col:31, col:38> col:38 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563417dd8 <<invalid sloc>> Inherited Implicit 184
| |-NoThrowAttr 0x55e563417d38 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563417d90 <line:555:57, /usr/include/strings.h:42:64> 1
|-FunctionDecl 0x55e563417f78 <line:68:14> col:14 implicit index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563418080 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e5634180e8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563418020 <<invalid sloc>> Implicit 743
| `-NoThrowAttr 0x55e563418160 <col:14> Implicit
|-FunctionDecl 0x55e563418188 prev 0x55e563417f78 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:68:14 index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563417e38 <col:21, col:33> col:33 __s 'const char *'
| |-ParmVarDecl 0x55e563417eb8 <col:38, col:42> col:42 __c 'int'
| |-BuiltinAttr 0x55e563418308 <<invalid sloc>> Inherited Implicit 743
| |-NoThrowAttr 0x55e563418240 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563418298 <line:479:45>
| `-NonNullAttr 0x55e5634182c0 <line:555:57, /usr/include/strings.h:69:46> 1
|-FunctionDecl 0x55e563418490 <line:96:14> col:14 implicit rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563418598 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563418600 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563418538 <<invalid sloc>> Implicit 1098
| `-NoThrowAttr 0x55e563418678 <col:14> Implicit
|-FunctionDecl 0x55e5634186a0 prev 0x55e563418490 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:96:14 rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55e563418350 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55e5634183d0 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55e563418818 <<invalid sloc>> Inherited Implicit 1098
| |-NoThrowAttr 0x55e563418758 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e5634187b0 <line:479:45>
| `-NonNullAttr 0x55e5634187d8 <line:555:57, /usr/include/strings.h:97:46> 1
|-FunctionDecl 0x55e563418938 <line:104:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:104:12 ffs 'int (int)' extern
| |-ParmVarDecl 0x55e563418860 <col:17, col:21> col:21 __i 'int'
| |-NoThrowAttr 0x55e5634189e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563418a40 <line:486:46>
|-FunctionDecl 0x55e563418b58 </usr/include/strings.h:110:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:110:12 ffsl 'int (long)' extern
| |-ParmVarDecl 0x55e563418a80 <col:18, col:27> col:27 __l 'long'
| |-NoThrowAttr 0x55e563418c08 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563418c60 <line:486:46>
|-FunctionDecl 0x55e563418d78 </usr/include/strings.h:111:15, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:111:26 ffsll 'int (long long)' extern
| |-ParmVarDecl 0x55e563418ca0 <col:33, col:47> col:47 __ll 'long long'
| |-NoThrowAttr 0x55e563418e38 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563418e90 <line:486:46>
|-FunctionDecl 0x55e563419030 </usr/include/strings.h:116:12> col:12 implicit strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e563419138 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e5634191a0 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55e5634190d8 <<invalid sloc>> Implicit 1230
|-FunctionDecl 0x55e563419218 prev 0x55e563419030 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:116:12 strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e563418ed0 <col:24, col:36> col:36 __s1 'const char *'
| |-ParmVarDecl 0x55e563418f50 <col:42, col:54> col:54 __s2 'const char *'
| |-BuiltinAttr 0x55e563419398 <<invalid sloc>> Inherited Implicit 1230
| |-NoThrowAttr 0x55e5634192d0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563419328 <line:479:45>
| `-NonNullAttr 0x55e563419350 <line:555:57, /usr/include/strings.h:117:49> 1 2
|-FunctionDecl 0x55e5634195c0 <line:120:12> col:12 implicit strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634196c8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563419730 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e563419798 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e563419668 <<invalid sloc>> Implicit 1270
|-FunctionDecl 0x55e563419818 prev 0x55e5634195c0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:120:12 strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e5634193e0 <col:25, col:37> col:37 __s1 'const char *'
| |-ParmVarDecl 0x55e563419460 <col:43, col:55> col:55 __s2 'const char *'
| |-ParmVarDecl 0x55e5634194d8 <col:61, col:68> col:68 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e563419998 <<invalid sloc>> Inherited Implicit 1270
| |-NoThrowAttr 0x55e5634198d8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563419930 <line:479:45>
| `-NonNullAttr 0x55e563419958 <line:555:57, /usr/include/strings.h:121:49> 1 2
|-FunctionDecl 0x55e563419be0 <line:128:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:128:12 strcasecmp_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55e5634199e0 <col:26, col:38> col:38 __s1 'const char *'
| |-ParmVarDecl 0x55e563419a60 <col:44, col:56> col:56 __s2 'const char *'
| |-ParmVarDecl 0x55e563419ad8 <col:62, col:71> col:71 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55e563419ca0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e563419cf8 <line:479:45>
| `-NonNullAttr 0x55e563419d20 <line:555:57, /usr/include/strings.h:129:52> 1 2 3
|-FunctionDecl 0x55e56341a0e8 <line:133:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:133:12 strncasecmp_l 'int (const char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55e563419d88 <col:27, col:39> col:39 __s1 'const char *'
| |-ParmVarDecl 0x55e563419e40 <col:45, col:57> col:57 __s2 'const char *'
| |-ParmVarDecl 0x55e563419eb8 <line:134:6, col:13> col:13 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e563419f30 <col:18, col:27> col:27 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55e56341a1b0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55e56341a208 <line:479:45>
| `-NonNullAttr 0x55e56341a230 <line:555:57, /usr/include/strings.h:135:52> 1 2 4
|-FunctionDecl 0x55e56341a3c8 </usr/include/string.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:466:13 explicit_bzero 'void (void *, size_t)' extern
| |-ParmVarDecl 0x55e56341a298 <col:29, col:35> col:35 __s 'void *'
| |-ParmVarDecl 0x55e56341a310 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e56341a480 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341a4d8 <line:555:57, /usr/include/string.h:466:73> 1
|-FunctionDecl 0x55e56341a718 <line:471:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:471:14 strsep 'char *(char **restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55e56341a530 <col:22, col:40> col:40 __stringp 'char **restrict'
| |-ParmVarDecl 0x55e56341a5b0 <line:472:8, col:31> col:31 __delim 'const char *restrict'
| |-NoThrowAttr 0x55e56341a7d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341a828 <line:555:57, /usr/include/string.h:473:30> 1 2
|-FunctionDecl 0x55e56341a918 <line:478:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:478:14 strsignal 'char *(int)' extern
| |-ParmVarDecl 0x55e56341a880 <col:25, col:29> col:29 __sig 'int'
| `-NoThrowAttr 0x55e56341a9c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56341ab98 </usr/include/string.h:489:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:489:14 __stpcpy 'char *(char *restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55e56341aa38 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341aab8 <col:49, col:72> col:72 __src 'const char *restrict'
| |-NoThrowAttr 0x55e56341ac50 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341aca8 <line:555:57, /usr/include/string.h:490:30> 1 2
|-FunctionDecl 0x55e56341ae88 <line:491:14> col:14 implicit stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e56341af90 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e56341aff8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e56341af30 <<invalid sloc>> Implicit 1224
| `-NoThrowAttr 0x55e56341b070 <col:14> Implicit
|-FunctionDecl 0x55e56341b098 prev 0x55e56341ae88 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:491:14 stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55e56341ad00 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341ad80 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55e56341b1e8 <<invalid sloc>> Inherited Implicit 1224
| |-NoThrowAttr 0x55e56341b150 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341b1a8 <line:555:57, /usr/include/string.h:492:30> 1 2
|-FunctionDecl 0x55e56341b410 <line:496:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:496:14 __stpncpy 'char *(char *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x55e56341b230 <col:25, col:42> col:42 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341b2b0 <line:497:4, col:27> col:27 __src 'const char *restrict'
| |-ParmVarDecl 0x55e56341b328 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e56341b4d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341b528 <line:555:57, /usr/include/string.h:498:30> 1 2
|-FunctionDecl 0x55e56341b760 <line:499:14> col:14 implicit stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341b868 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e56341b8d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56341b938 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55e56341b808 <<invalid sloc>> Implicit 1227
| `-NoThrowAttr 0x55e56341b9b8 <col:14> Implicit
|-FunctionDecl 0x55e56341b9e0 prev 0x55e56341b760 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:499:14 stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341b580 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341b600 <line:500:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55e56341b678 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e56341bb38 <<invalid sloc>> Inherited Implicit 1227
| |-NoThrowAttr 0x55e56341baa0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341baf8 <line:555:57, /usr/include/string.h:501:30> 1 2
|-FunctionDecl 0x55e56341bd58 <line:506:15> col:15 implicit strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341be90 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e56341bef8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56341bf60 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e56341be00 <<invalid sloc>> Implicit 1266
|-FunctionDecl 0x55e56341bfe0 prev 0x55e56341bd58 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:506:15 strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341bb80 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341bc00 <line:507:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55e56341bc78 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e56341c138 <<invalid sloc>> Inherited Implicit 1266
| |-NoThrowAttr 0x55e56341c0a0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341c0f8 <line:555:57, /usr/include/string.h:508:27> 1 2
|-FunctionDecl 0x55e56341c358 <line:512:15> col:15 implicit strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341c460 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55e56341c4c8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e56341c530 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55e56341c400 <<invalid sloc>> Implicit 1265
|-FunctionDecl 0x55e56341c5b0 prev 0x55e56341c358 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:512:15 strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55e56341c180 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55e56341c200 <line:513:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55e56341c278 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55e56341c708 <<invalid sloc>> Inherited Implicit 1265
| |-NoThrowAttr 0x55e56341c670 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56341c6c8 <line:555:57, /usr/include/string.h:514:27> 1 2
|-TypedefDecl 0x55e56341c750 </usr/include/bits/types.h:31:1, col:23> col:23 __u_char 'unsigned char'
| `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e56341c7c0 <line:32:1, col:28> col:28 __u_short 'unsigned short'
| `-BuiltinType 0x55e56337c5d0 'unsigned short'
|-TypedefDecl 0x55e56341c830 <line:33:1, col:22> col:22 __u_int 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e56341c8a0 <line:34:1, col:27> col:27 __u_long 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56341c910 <line:37:1, col:21> col:21 referenced __int8_t 'signed char'
| `-BuiltinType 0x55e56337c510 'signed char'
|-TypedefDecl 0x55e56341c980 <line:38:1, col:23> col:23 referenced __uint8_t 'unsigned char'
| `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e56341c9f0 <line:39:1, col:26> col:26 referenced __int16_t 'short'
| `-BuiltinType 0x55e56337c530 'short'
|-TypedefDecl 0x55e56341ca60 <line:40:1, col:28> col:28 referenced __uint16_t 'unsigned short'
| `-BuiltinType 0x55e56337c5d0 'unsigned short'
|-TypedefDecl 0x55e56341cad0 <line:41:1, col:20> col:20 referenced __int32_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e56341cb40 <line:42:1, col:22> col:22 referenced __uint32_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e56341cbb0 <line:44:1, col:25> col:25 referenced __int64_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56341cc20 <line:45:1, col:27> col:27 referenced __uint64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56341ccf0 <line:52:1, col:18> col:18 referenced __int_least8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55e56341ccb0 '__int8_t' sugar
|   `-TypedefType 0x55e56341cc80 '__int8_t' sugar
|     |-Typedef 0x55e56341c910 '__int8_t'
|     `-BuiltinType 0x55e56337c510 'signed char'
|-TypedefDecl 0x55e56341cdc0 <line:53:1, col:19> col:19 referenced __uint_least8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55e56341cd80 '__uint8_t' sugar
|   `-TypedefType 0x55e56341cd50 '__uint8_t' sugar
|     |-Typedef 0x55e56341c980 '__uint8_t'
|     `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e5634227d0 <line:54:1, col:19> col:19 referenced __int_least16_t '__int16_t':'short'
| `-ElaboratedType 0x55e563422790 '__int16_t' sugar
|   `-TypedefType 0x55e56341ce20 '__int16_t' sugar
|     |-Typedef 0x55e56341c9f0 '__int16_t'
|     `-BuiltinType 0x55e56337c530 'short'
|-TypedefDecl 0x55e5634228a0 <line:55:1, col:20> col:20 referenced __uint_least16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55e563422860 '__uint16_t' sugar
|   `-TypedefType 0x55e563422830 '__uint16_t' sugar
|     |-Typedef 0x55e56341ca60 '__uint16_t'
|     `-BuiltinType 0x55e56337c5d0 'unsigned short'
|-TypedefDecl 0x55e563422970 <line:56:1, col:19> col:19 referenced __int_least32_t '__int32_t':'int'
| `-ElaboratedType 0x55e563422930 '__int32_t' sugar
|   `-TypedefType 0x55e563422900 '__int32_t' sugar
|     |-Typedef 0x55e56341cad0 '__int32_t'
|     `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e563422a40 <line:57:1, col:20> col:20 referenced __uint_least32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55e563422a00 '__uint32_t' sugar
|   `-TypedefType 0x55e5634229d0 '__uint32_t' sugar
|     |-Typedef 0x55e56341cb40 '__uint32_t'
|     `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563422b10 <line:58:1, col:19> col:19 referenced __int_least64_t '__int64_t':'long'
| `-ElaboratedType 0x55e563422ad0 '__int64_t' sugar
|   `-TypedefType 0x55e563422aa0 '__int64_t' sugar
|     |-Typedef 0x55e56341cbb0 '__int64_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563422be0 <line:59:1, col:20> col:20 referenced __uint_least64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55e563422ba0 '__uint64_t' sugar
|   `-TypedefType 0x55e563422b70 '__uint64_t' sugar
|     |-Typedef 0x55e56341cc20 '__uint64_t'
|     `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563422c50 <line:63:1, col:18> col:18 __quad_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563422cc0 <line:64:1, col:27> col:27 __u_quad_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563422d30 <line:72:1, col:18> col:18 referenced __intmax_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563422da0 <line:73:1, col:27> col:27 referenced __uintmax_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563422e10 <line:137:22, line:145:25> col:25 __dev_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563422e80 <line:137:22, line:146:25> col:25 __uid_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563422ef0 <line:137:22, line:147:25> col:25 __gid_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563422f60 <line:137:22, line:148:25> col:25 __ino_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563422fd0 <line:137:22, line:149:27> col:27 __ino64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563423040 <line:137:22, line:150:26> col:26 __mode_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e5634230b0 <line:137:22, line:151:27> col:27 __nlink_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563423120 <line:137:22, line:152:25> col:25 referenced __off_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563423190 <line:137:22, line:153:27> col:27 referenced __off64_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563423200 <line:137:22, line:154:25> col:25 __pid_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-RecordDecl 0x55e563423258 </usr/include/bits/typesizes.h:73:24, col:47> col:24 struct definition
| `-FieldDecl 0x55e563423398 <col:33, col:44> col:37 __val 'int[2]'
|-TypedefDecl 0x55e563423448 </usr/include/bits/types.h:137:22, line:155:26> col:26 __fsid_t 'struct __fsid_t':'__fsid_t'
| `-ElaboratedType 0x55e5634233f0 'struct __fsid_t' sugar
|   `-RecordType 0x55e5634232e0 '__fsid_t'
|     `-Record 0x55e563423258 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x55e5634234d0 </usr/include/bits/types.h:137:22, line:156:27> col:27 __clock_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563423540 <line:137:22, line:157:26> col:26 __rlim_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e5634235b0 <line:137:22, line:158:28> col:28 __rlim64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563423620 <line:137:22, line:159:24> col:24 __id_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563423690 <line:137:22, line:160:26> col:26 __time_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563423700 <line:137:22, line:161:30> col:30 __useconds_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e56342a030 <line:137:22, line:162:31> col:31 __suseconds_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a0a0 <line:137:22, line:163:33> col:33 __suseconds64_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a110 <line:137:22, line:165:27> col:27 __daddr_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e56342a180 <line:137:22, line:166:25> col:25 __key_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e56342a1f0 <line:137:22, line:169:29> col:29 __clockid_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e56342a260 <line:137:22, line:172:27> col:27 __timer_t 'void *'
| `-PointerType 0x55e56337cbf0 'void *'
|   `-BuiltinType 0x55e56337c4b0 'void'
|-TypedefDecl 0x55e56342a2d0 <line:137:22, line:175:29> col:29 __blksize_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a340 <line:137:22, line:180:28> col:28 __blkcnt_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a3b0 <line:137:22, line:181:30> col:30 __blkcnt64_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a420 <line:137:22, line:184:30> col:30 __fsblkcnt_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56342a490 <line:137:22, line:185:32> col:32 __fsblkcnt64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56342a500 <line:137:22, line:188:30> col:30 __fsfilcnt_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56342a570 <line:137:22, line:189:32> col:32 __fsfilcnt64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56342a5e0 <line:137:22, line:192:28> col:28 __fsword_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a650 <line:137:22, line:194:27> col:27 referenced __ssize_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a6c0 <line:137:22, line:197:33> col:33 __syscall_slong_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a730 <line:137:22, line:199:33> col:33 __syscall_ulong_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e56342a800 <line:203:1, col:19> col:19 __loff_t '__off64_t':'long'
| `-ElaboratedType 0x55e56342a7c0 '__off64_t' sugar
|   `-TypedefType 0x55e56342a790 '__off64_t' sugar
|     |-Typedef 0x55e563423190 '__off64_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a870 <line:204:1, col:15> col:15 __caddr_t 'char *'
| `-PointerType 0x55e56337cc80 'char *'
|   `-BuiltinType 0x55e56337c4f0 'char'
|-TypedefDecl 0x55e56342a8e0 <line:137:22, line:207:25> col:25 __intptr_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e56342a950 <line:137:22, line:210:23> col:23 __socklen_t 'unsigned int'
| `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e56342a9c0 <line:215:1, col:13> col:13 __sig_atomic_t 'int'
| `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e56342aa70 </usr/include/bits/floatn.h:83:1, col:24> col:24 __cfloat128 '_Complex __float128'
| |-ComplexType 0x55e56342aad0 '_Complex __float128'
| | `-BuiltinType 0x55e56337c6b0 '__float128'
| `-ModeAttr 0x55e56342ab10 <col:52, col:68> __TC__
|-TypedefDecl 0x55e56342ab88 <line:97:1, col:20> col:20 referenced _Float128 '__float128'
| `-BuiltinType 0x55e56337c6b0 '__float128'
|-TypedefDecl 0x55e56342abf8 </usr/include/bits/floatn-common.h:214:1, col:15> col:15 _Float32 'float'
| `-BuiltinType 0x55e56337c650 'float'
|-TypedefDecl 0x55e56342ac68 <line:251:1, col:16> col:16 _Float64 'double'
| `-BuiltinType 0x55e56337c670 'double'
|-TypedefDecl 0x55e56342acd8 <line:268:1, col:16> col:16 _Float32x 'double'
| `-BuiltinType 0x55e56337c670 'double'
|-TypedefDecl 0x55e56342ad48 <line:285:1, col:21> col:21 _Float64x 'long double'
| `-BuiltinType 0x55e56337c690 'long double'
|-TypedefDecl 0x55e56342adb8 </usr/include/math.h:167:1, col:15> col:15 float_t 'float'
| |-BuiltinType 0x55e56337c650 'float'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x55e56342ae10 <<invalid sloc>>
|-TypedefDecl 0x55e56342ae80 <line:168:1, col:16> col:16 double_t 'double'
| |-BuiltinType 0x55e56337c670 'double'
| `-AvailableOnlyInDefaultEvalMethodAttr 0x55e56342aed8 <<invalid sloc>>
|-FunctionDecl 0x55e563455120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> line:20:24 __fpclassify 'int (double)' extern
| |-ParmVarDecl 0x55e56342af48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'double'
| |-NoThrowAttr 0x55e5634551d0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563455228 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55e563455300 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> line:24:24 __signbit 'int (double)' extern
| |-ParmVarDecl 0x55e563455268 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'double'
| |-NoThrowAttr 0x55e5634553b0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563455408 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55e5634554e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> line:29:24 __isinf 'int (double)' extern
| |-ParmVarDecl 0x55e563455448 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'double'
| |-NoThrowAttr 0x55e563455590 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634555e8 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55e5634556c0 <line:33:24> col:24 implicit __finite 'int (double)' extern
| |-ParmVarDecl 0x55e5634557c8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563455768 <<invalid sloc>> Implicit 1013
| |-NoThrowAttr 0x55e563455838 <col:24> Implicit
| `-ConstAttr 0x55e563455860 <col:24> Implicit
|-FunctionDecl 0x55e563455888 prev 0x55e5634556c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> line:33:24 __finite 'int (double)' extern
| |-ParmVarDecl 0x55e563455628 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'double'
| |-BuiltinAttr 0x55e5634559b8 <<invalid sloc>> Inherited Implicit 1013
| |-NoThrowAttr 0x55e563455938 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563455990 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55e563455a98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> line:37:24 __isnan 'int (double)' extern
| |-ParmVarDecl 0x55e563455a00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'double'
| |-NoThrowAttr 0x55e563455b48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563455ba0 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55e563455d48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls-helper-functions.h:41:24 __iseqsig 'int (double, double)' extern
| |-ParmVarDecl 0x55e563455be0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'double'
| |-ParmVarDecl 0x55e563455c60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'double'
| `-NoThrowAttr 0x55e563455e00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563455f08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> line:44:24 __issignaling 'int (double)' extern
| |-ParmVarDecl 0x55e563455e70 </usr/include/math.h:277:20, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'double'
| |-NoThrowAttr 0x55e563455fb8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563456010 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55e56345ada0 </usr/include/bits/mathcalls.h:53:17> col:17 implicit acos 'double (double)' extern
| |-ParmVarDecl 0x55e56345aea8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345ae48 <<invalid sloc>> Implicit 103
| `-NoThrowAttr 0x55e56345af18 <col:17> Implicit
|-FunctionDecl 0x55e56345af40 prev 0x55e56345ada0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:53:17 acos 'double (double)' extern
| |-ParmVarDecl 0x55e563456050 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56345b048 <<invalid sloc>> Inherited Implicit 103
| `-NoThrowAttr 0x55e56345aff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345b128 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:78:1 __acos 'double (double)' extern
| |-ParmVarDecl 0x55e56345b090 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56345b1d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345b2e0 </usr/include/bits/mathcalls.h:55:17> col:17 implicit asin 'double (double)' extern
| |-ParmVarDecl 0x55e56345b3e8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345b388 <<invalid sloc>> Implicit 138
| `-NoThrowAttr 0x55e56345b458 <col:17> Implicit
|-FunctionDecl 0x55e56345b480 prev 0x55e56345b2e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:55:17 asin 'double (double)' extern
| |-ParmVarDecl 0x55e56345b248 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56345b588 <<invalid sloc>> Inherited Implicit 138
| `-NoThrowAttr 0x55e56345b530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345b668 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 __asin 'double (double)' extern
| |-ParmVarDecl 0x55e56345b5d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56345b718 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345b820 </usr/include/bits/mathcalls.h:57:17> col:17 implicit atan 'double (double)' extern
| |-ParmVarDecl 0x55e56345b928 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345b8c8 <<invalid sloc>> Implicit 155
| `-NoThrowAttr 0x55e56345b998 <col:17> Implicit
|-FunctionDecl 0x55e56345b9c0 prev 0x55e56345b820 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:57:17 atan 'double (double)' extern
| |-ParmVarDecl 0x55e56345b788 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56345bac8 <<invalid sloc>> Inherited Implicit 155
| `-NoThrowAttr 0x55e56345ba70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345bba8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __atan 'double (double)' extern
| |-ParmVarDecl 0x55e56345bb10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56345bc58 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56342b128 </usr/include/bits/mathcalls.h:59:17> col:17 implicit atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55e56342b230 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56342b298 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56342b1d0 <<invalid sloc>> Implicit 161
| `-NoThrowAttr 0x55e56342b310 <col:17> Implicit
|-FunctionDecl 0x55e56342b338 prev 0x55e56342b128 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:59:17 atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55e56345bcc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x55e56342b040 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| |-BuiltinAttr 0x55e56342b448 <<invalid sloc>> Inherited Implicit 161
| `-NoThrowAttr 0x55e56342b3f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56342b5b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 __atan2 'double (double, double)' extern
| |-ParmVarDecl 0x55e56342b490 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'double'
| |-ParmVarDecl 0x55e56342b510 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'double'
| `-NoThrowAttr 0x55e56342b668 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56342b770 </usr/include/bits/mathcalls.h:62:17> col:17 implicit cos 'double (double)' extern
| |-ParmVarDecl 0x55e56342b878 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56342b818 <<invalid sloc>> Implicit 383
| `-NoThrowAttr 0x55e56342b8e8 <col:17> Implicit
|-FunctionDecl 0x55e56342b910 prev 0x55e56342b770 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:62:17 cos 'double (double)' extern
| |-ParmVarDecl 0x55e56342b6d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| |-BuiltinAttr 0x55e56342ba18 <<invalid sloc>> Inherited Implicit 383
| `-NoThrowAttr 0x55e56342b9c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56342baf8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __cos 'double (double)' extern
| |-ParmVarDecl 0x55e56342ba60 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'double'
| `-NoThrowAttr 0x55e56342bba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56342bcb0 </usr/include/bits/mathcalls.h:64:17> col:17 implicit sin 'double (double)' extern
| |-ParmVarDecl 0x55e56342bdb8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56342bd58 <<invalid sloc>> Implicit 1179
| `-NoThrowAttr 0x55e56342be28 <col:17> Implicit
|-FunctionDecl 0x55e56342be50 prev 0x55e56342bcb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:64:17 sin 'double (double)' extern
| |-ParmVarDecl 0x55e56342bc18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| |-BuiltinAttr 0x55e56342bf58 <<invalid sloc>> Inherited Implicit 1179
| `-NoThrowAttr 0x55e56342bf00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345f190 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:88:1 __sin 'double (double)' extern
| |-ParmVarDecl 0x55e56342bfa0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'double'
| `-NoThrowAttr 0x55e56345f240 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345f348 </usr/include/bits/mathcalls.h:66:17> col:17 implicit tan 'double (double)' extern
| |-ParmVarDecl 0x55e56345f450 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345f3f0 <<invalid sloc>> Implicit 1400
| `-NoThrowAttr 0x55e56345f4c0 <col:17> Implicit
|-FunctionDecl 0x55e56345f4e8 prev 0x55e56345f348 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:66:17 tan 'double (double)' extern
| |-ParmVarDecl 0x55e56345f2b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| |-BuiltinAttr 0x55e56345f5f0 <<invalid sloc>> Inherited Implicit 1400
| `-NoThrowAttr 0x55e56345f598 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345f6d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:90:1 __tan 'double (double)' extern
| |-ParmVarDecl 0x55e56345f638 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'double'
| `-NoThrowAttr 0x55e56345f780 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345f888 </usr/include/bits/mathcalls.h:93:17> col:17 implicit cosh 'double (double)' extern
| |-ParmVarDecl 0x55e56345f990 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345f930 <<invalid sloc>> Implicit 391
| `-NoThrowAttr 0x55e56345fa00 <col:17> Implicit
|-FunctionDecl 0x55e56345fa28 prev 0x55e56345f888 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:93:17 cosh 'double (double)' extern
| |-ParmVarDecl 0x55e56345f7f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56345fb30 <<invalid sloc>> Inherited Implicit 391
| `-NoThrowAttr 0x55e56345fad8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345fc10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:93:1 __cosh 'double (double)' extern
| |-ParmVarDecl 0x55e56345fb78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56345fcc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345fdc8 </usr/include/bits/mathcalls.h:95:17> col:17 implicit sinh 'double (double)' extern
| |-ParmVarDecl 0x55e56345fed0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345fe70 <<invalid sloc>> Implicit 1198
| `-NoThrowAttr 0x55e56345ff40 <col:17> Implicit
|-FunctionDecl 0x55e56345ff68 prev 0x55e56345fdc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:95:17 sinh 'double (double)' extern
| |-ParmVarDecl 0x55e56345fd30 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e563460070 <<invalid sloc>> Inherited Implicit 1198
| `-NoThrowAttr 0x55e563460018 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563448980 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 __sinh 'double (double)' extern
| |-ParmVarDecl 0x55e5634600b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e563448a30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563448b38 </usr/include/bits/mathcalls.h:97:17> col:17 implicit tanh 'double (double)' extern
| |-ParmVarDecl 0x55e563448c40 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563448be0 <<invalid sloc>> Implicit 1408
| `-NoThrowAttr 0x55e563448cb0 <col:17> Implicit
|-FunctionDecl 0x55e563448cd8 prev 0x55e563448b38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:97:17 tanh 'double (double)' extern
| |-ParmVarDecl 0x55e563448aa0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e563448de0 <<invalid sloc>> Inherited Implicit 1408
| `-NoThrowAttr 0x55e563448d88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563448ec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __tanh 'double (double)' extern
| |-ParmVarDecl 0x55e563448e28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e563448f70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563449078 </usr/include/bits/mathcalls.h:107:17> col:17 implicit acosh 'double (double)' extern
| |-ParmVarDecl 0x55e563449180 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563449120 <<invalid sloc>> Implicit 111
| `-NoThrowAttr 0x55e5634491f0 <col:17> Implicit
|-FunctionDecl 0x55e563449218 prev 0x55e563449078 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:107:17 acosh 'double (double)' extern
| |-ParmVarDecl 0x55e563448fe0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e563449320 <<invalid sloc>> Inherited Implicit 111
| `-NoThrowAttr 0x55e5634492c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563449400 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:99:1 __acosh 'double (double)' extern
| |-ParmVarDecl 0x55e563449368 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e5634494b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634495b8 </usr/include/bits/mathcalls.h:109:17> col:17 implicit asinh 'double (double)' extern
| |-ParmVarDecl 0x55e5634496c0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563449660 <<invalid sloc>> Implicit 146
| `-NoThrowAttr 0x55e563449730 <col:17> Implicit
|-FunctionDecl 0x55e563449758 prev 0x55e5634495b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:109:17 asinh 'double (double)' extern
| |-ParmVarDecl 0x55e563449520 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e563449860 <<invalid sloc>> Inherited Implicit 146
| `-NoThrowAttr 0x55e563449808 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563449990 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 __asinh 'double (double)' extern
| |-ParmVarDecl 0x55e5634498a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e563449a40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563449b48 </usr/include/bits/mathcalls.h:111:17> col:17 implicit atanh 'double (double)' extern
| |-ParmVarDecl 0x55e563449c50 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563449bf0 <<invalid sloc>> Implicit 171
| `-NoThrowAttr 0x55e563449cc0 <col:17> Implicit
|-FunctionDecl 0x55e563449ce8 prev 0x55e563449b48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:111:17 atanh 'double (double)' extern
| |-ParmVarDecl 0x55e563449ab0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e563449df0 <<invalid sloc>> Inherited Implicit 171
| `-NoThrowAttr 0x55e563449d98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563449ed0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __atanh 'double (double)' extern
| |-ParmVarDecl 0x55e563449e38 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e563449f80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344a088 </usr/include/bits/mathcalls.h:117:17> col:17 implicit exp 'double (double)' extern
| |-ParmVarDecl 0x55e56344a190 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344a130 <<invalid sloc>> Implicit 523
| `-NoThrowAttr 0x55e56344a200 <col:17> Implicit
|-FunctionDecl 0x55e56344a228 prev 0x55e56344a088 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:117:17 exp 'double (double)' extern
| |-ParmVarDecl 0x55e563449ff0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| |-BuiltinAttr 0x55e56344a330 <<invalid sloc>> Inherited Implicit 523
| `-NoThrowAttr 0x55e56344a2d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344a410 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:105:1 __exp 'double (double)' extern
| |-ParmVarDecl 0x55e56344a378 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'double'
| `-NoThrowAttr 0x55e56344a4c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344a6c8 </usr/include/bits/mathcalls.h:120:13> col:13 implicit frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55e56344a7d0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56344a838 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e56344a770 <<invalid sloc>> Implicit 645
| `-NoThrowAttr 0x55e56344a8b0 <col:13> Implicit
|-FunctionDecl 0x55e56344a8d8 prev 0x55e56344a6c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:120:13 frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55e56344a530 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56344a5e8 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55e56344a9f8 <<invalid sloc>> Inherited Implicit 645
| `-NoThrowAttr 0x55e56344a9a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344ab60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __frexp 'double (double, int *)' extern
| |-ParmVarDecl 0x55e56344aa40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56344aac0 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55e56344ac18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344ade8 </usr/include/bits/mathcalls.h:123:13> col:13 implicit ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55e56344aef0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56344af58 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e56344ae90 <<invalid sloc>> Implicit 840
| `-NoThrowAttr 0x55e56344afd0 <col:13> Implicit
|-FunctionDecl 0x55e56344aff8 prev 0x55e56344ade8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:123:13 ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55e56344ac88 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56344ad08 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55e56344b108 <<invalid sloc>> Inherited Implicit 840
| `-NoThrowAttr 0x55e56344b0b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344b270 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 __ldexp 'double (double, int)' extern
| |-ParmVarDecl 0x55e56344b150 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56344b1d0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55e56344b328 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344b430 </usr/include/bits/mathcalls.h:126:17> col:17 implicit log 'double (double)' extern
| |-ParmVarDecl 0x55e56344b538 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344b4d8 <<invalid sloc>> Implicit 869
| `-NoThrowAttr 0x55e56344b5a8 <col:17> Implicit
|-FunctionDecl 0x55e56344b5d0 prev 0x55e56344b430 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:126:17 log 'double (double)' extern
| |-ParmVarDecl 0x55e56344b398 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| |-BuiltinAttr 0x55e56344b6d8 <<invalid sloc>> Inherited Implicit 869
| `-NoThrowAttr 0x55e56344b680 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344b7b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __log 'double (double)' extern
| |-ParmVarDecl 0x55e56344b720 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'double'
| `-NoThrowAttr 0x55e56344b868 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344b9b0 </usr/include/bits/mathcalls.h:129:17> col:17 implicit log10 'double (double)' extern
| |-ParmVarDecl 0x55e56344bab8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344ba58 <<invalid sloc>> Implicit 890
| `-NoThrowAttr 0x55e56344bb28 <col:17> Implicit
|-FunctionDecl 0x55e56344bb50 prev 0x55e56344b9b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:129:17 log10 'double (double)' extern
| |-ParmVarDecl 0x55e56344b8d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e56344bc58 <<invalid sloc>> Inherited Implicit 890
| `-NoThrowAttr 0x55e56344bc00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344bd38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:111:1 __log10 'double (double)' extern
| |-ParmVarDecl 0x55e56344bca0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e56344bde8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344bfe8 </usr/include/bits/mathcalls.h:132:13> col:13 implicit modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55e56344c0f0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56344c158 <<invalid sloc>> <invalid sloc> 'double *'
| |-BuiltinAttr 0x55e56344c090 <<invalid sloc>> Implicit 961
| `-NoThrowAttr 0x55e56344c1d0 <col:13> Implicit
|-FunctionDecl 0x55e56344c1f8 prev 0x55e56344bfe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:132:13 modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55e56344be58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56344bf08 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-BuiltinAttr 0x55e56344c308 <<invalid sloc>> Inherited Implicit 961
| `-NoThrowAttr 0x55e56344c2b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344c490 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:112:1 __modf 'double (double, double *)' extern
| |-ParmVarDecl 0x55e56344c350 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56344c3d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'double *'
| |-NoThrowAttr 0x55e56344c548 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56344c5a0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55e56344c698 <line:156:17> col:17 implicit expm1 'double (double)' extern
| |-ParmVarDecl 0x55e56344c7a0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344c740 <<invalid sloc>> Implicit 546
| `-NoThrowAttr 0x55e56344c810 <col:17> Implicit
|-FunctionDecl 0x55e56344c838 prev 0x55e56344c698 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:156:17 expm1 'double (double)' extern
| |-ParmVarDecl 0x55e56344c600 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e56344c940 <<invalid sloc>> Inherited Implicit 546
| `-NoThrowAttr 0x55e56344c8e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344ca58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __expm1 'double (double)' extern
| |-ParmVarDecl 0x55e56344c9c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e56344cb08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344cc10 </usr/include/bits/mathcalls.h:159:17> col:17 implicit log1p 'double (double)' extern
| |-ParmVarDecl 0x55e56344cd18 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344ccb8 <<invalid sloc>> Implicit 875
| `-NoThrowAttr 0x55e56344cd88 <col:17> Implicit
|-FunctionDecl 0x55e56344cdb0 prev 0x55e56344cc10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:159:17 log1p 'double (double)' extern
| |-ParmVarDecl 0x55e56344cb78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e56344ceb8 <<invalid sloc>> Inherited Implicit 875
| `-NoThrowAttr 0x55e56344ce60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344cf98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:117:1 __log1p 'double (double)' extern
| |-ParmVarDecl 0x55e56344cf00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e56344d048 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344d150 </usr/include/bits/mathcalls.h:162:13> col:13 implicit logb 'double (double)' extern
| |-ParmVarDecl 0x55e56344d258 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344d1f8 <<invalid sloc>> Implicit 900
| `-NoThrowAttr 0x55e56344d2c8 <col:13> Implicit
|-FunctionDecl 0x55e56344d2f0 prev 0x55e56344d150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:162:13 logb 'double (double)' extern
| |-ParmVarDecl 0x55e56344d0b8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| |-BuiltinAttr 0x55e56344d3f8 <<invalid sloc>> Inherited Implicit 900
| `-NoThrowAttr 0x55e56344d3a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344d4d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:118:1 __logb 'double (double)' extern
| |-ParmVarDecl 0x55e56344d440 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'double'
| `-NoThrowAttr 0x55e56344d588 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344d690 </usr/include/bits/mathcalls.h:167:17> col:17 implicit exp2 'double (double)' extern
| |-ParmVarDecl 0x55e56344d798 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344d738 <<invalid sloc>> Implicit 529
| `-NoThrowAttr 0x55e56344d808 <col:17> Implicit
|-FunctionDecl 0x55e56344d830 prev 0x55e56344d690 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:167:17 exp2 'double (double)' extern
| |-ParmVarDecl 0x55e56344d5f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56344d938 <<invalid sloc>> Inherited Implicit 529
| `-NoThrowAttr 0x55e56344d8e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344ea78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:120:1 __exp2 'double (double)' extern
| |-ParmVarDecl 0x55e56344e9e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56344eb28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344ec30 </usr/include/bits/mathcalls.h:170:17> col:17 implicit log2 'double (double)' extern
| |-ParmVarDecl 0x55e56344ed38 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344ecd8 <<invalid sloc>> Implicit 882
| `-NoThrowAttr 0x55e56344eda8 <col:17> Implicit
|-FunctionDecl 0x55e56344edd0 prev 0x55e56344ec30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:170:17 log2 'double (double)' extern
| |-ParmVarDecl 0x55e56344eb98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e56344eed8 <<invalid sloc>> Inherited Implicit 882
| `-NoThrowAttr 0x55e56344ee80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344efb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:122:1 __log2 'double (double)' extern
| |-ParmVarDecl 0x55e56344ef20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e56344f068 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344f1f8 </usr/include/bits/mathcalls.h:177:17> col:17 implicit pow 'double (double, double)' extern
| |-ParmVarDecl 0x55e56344f300 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56344f368 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344f2a0 <<invalid sloc>> Implicit 1048
| `-NoThrowAttr 0x55e56344f3e0 <col:17> Implicit
|-FunctionDecl 0x55e56344f408 prev 0x55e56344f1f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:177:17 pow 'double (double, double)' extern
| |-ParmVarDecl 0x55e56344f0d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x55e56344f158 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| |-BuiltinAttr 0x55e56344f518 <<invalid sloc>> Inherited Implicit 1048
| `-NoThrowAttr 0x55e56344f4c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344f680 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:124:1 __pow 'double (double, double)' extern
| |-ParmVarDecl 0x55e56344f560 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'double'
| |-ParmVarDecl 0x55e56344f5e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'double'
| `-NoThrowAttr 0x55e56344f738 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344f840 </usr/include/bits/mathcalls.h:180:13> col:13 implicit sqrt 'double (double)' extern
| |-ParmVarDecl 0x55e56344f948 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344f8e8 <<invalid sloc>> Implicit 1213
| `-NoThrowAttr 0x55e56344f9b8 <col:13> Implicit
|-FunctionDecl 0x55e56344f9f0 prev 0x55e56344f840 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:180:13 sqrt 'double (double)' extern
| |-ParmVarDecl 0x55e56344f7a8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| |-BuiltinAttr 0x55e56344faf8 <<invalid sloc>> Inherited Implicit 1213
| `-NoThrowAttr 0x55e56344faa0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344fbd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:125:1 __sqrt 'double (double)' extern
| |-ParmVarDecl 0x55e56344fb40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'double'
| `-NoThrowAttr 0x55e56344fc88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344fe18 </usr/include/bits/mathcalls.h:184:17> col:17 implicit hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55e56344ff20 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56344ff88 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56344fec0 <<invalid sloc>> Implicit 731
| `-NoThrowAttr 0x55e563450000 <col:17> Implicit
|-FunctionDecl 0x55e563450028 prev 0x55e56344fe18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:184:17 hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55e56344fcf8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e56344fd78 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| |-BuiltinAttr 0x55e563450138 <<invalid sloc>> Inherited Implicit 731
| `-NoThrowAttr 0x55e5634500e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634502a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:127:1 __hypot 'double (double, double)' extern
| |-ParmVarDecl 0x55e563450180 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e563450200 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'double'
| `-NoThrowAttr 0x55e563450358 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563450460 </usr/include/bits/mathcalls.h:189:17> col:17 implicit cbrt 'double (double)' extern
| |-ParmVarDecl 0x55e563450568 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563450508 <<invalid sloc>> Implicit 298
| |-NoThrowAttr 0x55e5634505d8 <col:17> Implicit
| `-ConstAttr 0x55e563450600 <col:17> Implicit
|-FunctionDecl 0x55e563450628 prev 0x55e563450460 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:189:17 cbrt 'double (double)' extern
| |-ParmVarDecl 0x55e5634503c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| |-BuiltinAttr 0x55e563450730 <<invalid sloc>> Inherited Implicit 298
| |-ConstAttr 0x55e563450760 <col:17> Inherited Implicit
| `-NoThrowAttr 0x55e5634506d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563450838 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __cbrt 'double (double)' extern
| |-ParmVarDecl 0x55e5634507a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'double'
| `-NoThrowAttr 0x55e5634508e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56341ce70 </usr/include/bits/mathcalls.h:213:14> col:14 implicit ceil 'double (double)' extern
| |-ParmVarDecl 0x55e56341cf78 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56341cf18 <<invalid sloc>> Implicit 317
| |-NoThrowAttr 0x55e56341cfe8 <col:14> Implicit
| `-ConstAttr 0x55e56341d010 <col:14> Implicit
|-FunctionDecl 0x55e56341d038 prev 0x55e56341ce70 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:213:14 ceil 'double (double)' extern
| |-ParmVarDecl 0x55e563450958 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'double'
| |-BuiltinAttr 0x55e56341d168 <<invalid sloc>> Inherited Implicit 317
| |-NoThrowAttr 0x55e56341d0e8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56341d140 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55e56341d248 <line:216:14> col:14 implicit used fabs 'double (double)' extern
| |-ParmVarDecl 0x55e56341d350 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56341d2f0 <<invalid sloc>> Implicit 564
| |-NoThrowAttr 0x55e56341d3c0 <col:14> Implicit
| `-ConstAttr 0x55e56341d3e8 <col:14> Implicit
|-FunctionDecl 0x55e56341d410 prev 0x55e56341d248 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:216:14 used fabs 'double (double)' extern
| |-ParmVarDecl 0x55e56341d1b0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'double'
| |-BuiltinAttr 0x55e56341d540 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x55e56341d4c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56341d518 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55e56341d620 <line:219:14> col:14 implicit floor 'double (double)' extern
| |-ParmVarDecl 0x55e56341d728 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56341d6c8 <<invalid sloc>> Implicit 583
| |-NoThrowAttr 0x55e56341d798 <col:14> Implicit
| `-ConstAttr 0x55e56341d7c0 <col:14> Implicit
|-FunctionDecl 0x55e56341d7e8 prev 0x55e56341d620 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:219:14 floor 'double (double)' extern
| |-ParmVarDecl 0x55e56341d588 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'double'
| |-BuiltinAttr 0x55e56341d918 <<invalid sloc>> Inherited Implicit 583
| |-NoThrowAttr 0x55e56341d898 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56341d8f0 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55e56341da80 <line:222:13> col:13 implicit fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55e56341db88 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56341dbf0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56341db28 <<invalid sloc>> Implicit 631
| `-NoThrowAttr 0x55e56341dc68 <col:13> Implicit
|-FunctionDecl 0x55e56341dc90 prev 0x55e56341da80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:222:13 fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55e56341d960 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56341d9e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| |-BuiltinAttr 0x55e56341dda0 <<invalid sloc>> Inherited Implicit 631
| `-NoThrowAttr 0x55e56341dd48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345de30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:131:1 __fmod 'double (double, double)' extern
| |-ParmVarDecl 0x55e56341dde8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56345dd90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'double'
| `-NoThrowAttr 0x55e56345dee8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345dff0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> line:231:23 isinf 'int (double)' extern
| |-ParmVarDecl 0x55e56345df58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'double'
| |-NoThrowAttr 0x55e56345e0a0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56345e0f8 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55e56345e1d0 <line:237:23> col:23 implicit finite 'int (double)' extern
| |-ParmVarDecl 0x55e56345e2d8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56345e278 <<invalid sloc>> Implicit 578
| |-NoThrowAttr 0x55e56345e348 <col:23> Implicit
| `-ConstAttr 0x55e56345e370 <col:23> Implicit
|-FunctionDecl 0x55e56345e398 prev 0x55e56345e1d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> line:237:23 finite 'int (double)' extern
| |-ParmVarDecl 0x55e56345e138 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'double'
| |-BuiltinAttr 0x55e56345e4c8 <<invalid sloc>> Inherited Implicit 578
| |-NoThrowAttr 0x55e56345e448 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56345e4a0 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55e56345e630 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:241:13 drem 'double (double, double)' extern
| |-ParmVarDecl 0x55e56345e510 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56345e590 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x55e56345e6e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345e878 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:132:1 __drem 'double (double, double)' extern
| |-ParmVarDecl 0x55e56345e758 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e56345e7d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'double'
| `-NoThrowAttr 0x55e56345e930 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345ea38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:245:13 significand 'double (double)' extern
| |-ParmVarDecl 0x55e56345e9a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x55e56345eae8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345ebf0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 __significand 'double (double)' extern
| |-ParmVarDecl 0x55e56345eb58 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'double'
| `-NoThrowAttr 0x55e56345eca0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634522c0 </usr/include/bits/mathcalls.h:252:14> col:14 implicit copysign 'double (double, double)' extern
| |-ParmVarDecl 0x55e5634523c8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563452430 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563452368 <<invalid sloc>> Implicit 361
| |-NoThrowAttr 0x55e5634524a8 <col:14> Implicit
| `-ConstAttr 0x55e5634524d0 <col:14> Implicit
|-FunctionDecl 0x55e5634524f8 prev 0x55e5634522c0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:252:14 copysign 'double (double, double)' extern
| |-ParmVarDecl 0x55e56345ed10 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e563452220 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'double'
| |-BuiltinAttr 0x55e563452630 <<invalid sloc>> Inherited Implicit 361
| |-NoThrowAttr 0x55e5634525b0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563452608 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55e563452748 <line:257:13> col:13 implicit nan 'double (const char *)' extern
| |-ParmVarDecl 0x55e563452850 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e5634527f0 <<invalid sloc>> Implicit 973
| |-NoThrowAttr 0x55e5634528c0 <col:13> Implicit
| `-PureAttr 0x55e5634528e8 <col:13> Implicit
|-FunctionDecl 0x55e563452910 prev 0x55e563452748 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:257:13 nan 'double (const char *)' extern
| |-ParmVarDecl 0x55e563452678 <col:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55e563452a18 <<invalid sloc>> Inherited Implicit 973
| |-PureAttr 0x55e563452a48 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55e5634529c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563452b20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:134:1 __nan 'double (const char *)' extern
| |-ParmVarDecl 0x55e563452a88 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55e563452bd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563452cd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> line:267:23 isnan 'int (double)' extern
| |-ParmVarDecl 0x55e563452c40 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'double'
| |-NoThrowAttr 0x55e563452d88 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563452de0 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55e563452eb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:274:13 j0 'double (double)' extern
| |-ParmVarDecl 0x55e563452e20 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x55e563452f68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453070 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __j0 'double (double)' extern
| |-ParmVarDecl 0x55e563452fd8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:274:28 'double'
| `-NoThrowAttr 0x55e563453120 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453260 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:275:13 j1 'double (double)' extern
| |-ParmVarDecl 0x55e563453190 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x55e563453310 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453418 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:136:1 __j1 'double (double)' extern
| |-ParmVarDecl 0x55e563453380 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:275:28 'double'
| `-NoThrowAttr 0x55e5634534c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453698 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:276:13 jn 'double (int, double)' extern
| |-ParmVarDecl 0x55e563453538 <col:19> col:22 'int'
| |-ParmVarDecl 0x55e5634535b8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x55e563453750 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634538e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:137:1 __jn 'double (int, double)' extern
| |-ParmVarDecl 0x55e5634537c0 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55e563453840 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:276:33 'double'
| `-NoThrowAttr 0x55e563453998 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453aa0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:277:13 y0 'double (double)' extern
| |-ParmVarDecl 0x55e563453a08 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x55e563453b50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453c58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 __y0 'double (double)' extern
| |-ParmVarDecl 0x55e563453bc0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:277:28 'double'
| `-NoThrowAttr 0x55e563453d08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453e10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:278:13 y1 'double (double)' extern
| |-ParmVarDecl 0x55e563453d78 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x55e563453ec0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563453fc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:139:1 __y1 'double (double)' extern
| |-ParmVarDecl 0x55e563453f30 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:278:28 'double'
| `-NoThrowAttr 0x55e563454078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634601a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:279:13 yn 'double (int, double)' extern
| |-ParmVarDecl 0x55e5634540e8 <col:19> col:22 'int'
| |-ParmVarDecl 0x55e563454168 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x55e563460258 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634603e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __yn 'double (int, double)' extern
| |-ParmVarDecl 0x55e5634602c8 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55e563460348 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:279:33 'double'
| `-NoThrowAttr 0x55e5634604a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634605a8 </usr/include/bits/mathcalls.h:285:17> col:17 implicit erf 'double (double)' extern
| |-ParmVarDecl 0x55e5634606b0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563460650 <<invalid sloc>> Implicit 503
| `-NoThrowAttr 0x55e563460720 <col:17> Implicit
|-FunctionDecl 0x55e563460748 prev 0x55e5634605a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:285:17 erf 'double (double)' extern
| |-ParmVarDecl 0x55e563460510 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| |-BuiltinAttr 0x55e563460850 <<invalid sloc>> Inherited Implicit 503
| `-NoThrowAttr 0x55e5634607f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563460930 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:142:1 __erf 'double (double)' extern
| |-ParmVarDecl 0x55e563460898 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:285:33 'double'
| `-NoThrowAttr 0x55e5634609e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563460ae8 </usr/include/bits/mathcalls.h:286:17> col:17 implicit erfc 'double (double)' extern
| |-ParmVarDecl 0x55e563460bf0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563460b90 <<invalid sloc>> Implicit 510
| `-NoThrowAttr 0x55e563460c60 <col:17> Implicit
|-FunctionDecl 0x55e563460c88 prev 0x55e563460ae8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:286:17 erfc 'double (double)' extern
| |-ParmVarDecl 0x55e563460a50 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| |-BuiltinAttr 0x55e563460d90 <<invalid sloc>> Inherited Implicit 510
| `-NoThrowAttr 0x55e563460d38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563460e70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:144:1 __erfc 'double (double)' extern
| |-ParmVarDecl 0x55e563460dd8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:286:34 'double'
| `-NoThrowAttr 0x55e563460f20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461028 </usr/include/bits/mathcalls.h:287:13> col:13 implicit lgamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461130 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e5634610d0 <<invalid sloc>> Implicit 848
| `-NoThrowAttr 0x55e5634611b0 <col:13> Implicit
|-FunctionDecl 0x55e5634611d8 prev 0x55e563461028 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:287:13 lgamma 'double (double)' extern
| |-ParmVarDecl 0x55e563460f90 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| |-BuiltinAttr 0x55e5634612e0 <<invalid sloc>> Inherited Implicit 848
| `-NoThrowAttr 0x55e563461288 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634613c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __lgamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461328 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:287:32 'double'
| `-NoThrowAttr 0x55e563461470 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461578 </usr/include/bits/mathcalls.h:292:13> col:13 implicit tgamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461680 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563461620 <<invalid sloc>> Implicit 1418
| `-NoThrowAttr 0x55e5634616f0 <col:13> Implicit
|-FunctionDecl 0x55e563461718 prev 0x55e563461578 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:292:13 tgamma 'double (double)' extern
| |-ParmVarDecl 0x55e5634614e0 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| |-BuiltinAttr 0x55e563461820 <<invalid sloc>> Inherited Implicit 1418
| `-NoThrowAttr 0x55e5634617c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461900 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:146:1 __tgamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461868 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:292:32 'double'
| `-NoThrowAttr 0x55e5634619b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461ab8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:298:13 gamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461a20 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x55e563461b68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461c70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:147:1 __gamma 'double (double)' extern
| |-ParmVarDecl 0x55e563461bd8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:298:31 'double'
| `-NoThrowAttr 0x55e563461d20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563461eb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x55e563461d90 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x55e563461e10 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e563461f68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634620f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __lgamma_r 'double (double, int *)' extern
| |-ParmVarDecl 0x55e563461fd8 </usr/include/math.h:277:20> /usr/include/bits/mathcalls.h:306:34 'double'
| |-ParmVarDecl 0x55e563462058 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e5634621c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634622c8 </usr/include/bits/mathcalls.h:313:13> col:13 implicit rint 'double (double)' extern
| |-ParmVarDecl 0x55e5634623d0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563462370 <<invalid sloc>> Implicit 1102
| |-ConstAttr 0x55e563462440 <col:13> Implicit
| `-NoThrowAttr 0x55e563462468 <col:13> Implicit
|-FunctionDecl 0x55e563462490 prev 0x55e5634622c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:313:13 rint 'double (double)' extern
| |-ParmVarDecl 0x55e563462230 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| |-BuiltinAttr 0x55e563462598 <<invalid sloc>> Inherited Implicit 1102
| |-ConstAttr 0x55e5634625c8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55e563462540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634626a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:151:1 __rint 'double (double)' extern
| |-ParmVarDecl 0x55e563462608 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'double'
| `-NoThrowAttr 0x55e563462750 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634628e0 </usr/include/bits/mathcalls.h:316:13> col:13 implicit nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55e5634629e8 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563462a50 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563462988 <<invalid sloc>> Implicit 993
| `-NoThrowAttr 0x55e563462ac8 <col:13> Implicit
|-FunctionDecl 0x55e563462af0 prev 0x55e5634628e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:316:13 nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55e5634627c0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e563462840 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| |-BuiltinAttr 0x55e563462c00 <<invalid sloc>> Inherited Implicit 993
| `-NoThrowAttr 0x55e563462ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563462d68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:152:1 __nextafter 'double (double, double)' extern
| |-ParmVarDecl 0x55e563462c48 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e563462cc8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'double'
| `-NoThrowAttr 0x55e563462e20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563462ff8 </usr/include/bits/mathcalls.h:318:13> col:13 implicit nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55e563463100 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e5634641e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634630a0 <<invalid sloc>> Implicit 1000
| `-NoThrowAttr 0x55e563464258 <col:13> Implicit
|-FunctionDecl 0x55e563464280 prev 0x55e563462ff8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:318:13 nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55e563462e90 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x55e563462f10 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55e563464390 <<invalid sloc>> Inherited Implicit 1000
| `-NoThrowAttr 0x55e563464338 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634644f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 __nexttoward 'double (double, long double)' extern
| |-ParmVarDecl 0x55e5634643d8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'double'
| |-ParmVarDecl 0x55e563464458 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55e5634645b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563464740 </usr/include/bits/mathcalls.h:329:13> col:13 implicit remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55e563464848 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e5634648b0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e5634647e8 <<invalid sloc>> Implicit 1084
| `-NoThrowAttr 0x55e563464928 <col:13> Implicit
|-FunctionDecl 0x55e563464950 prev 0x55e563464740 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:329:13 remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55e563464620 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e5634646a0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| |-BuiltinAttr 0x55e563464a60 <<invalid sloc>> Inherited Implicit 1084
| `-NoThrowAttr 0x55e563464a08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563464bc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __remainder 'double (double, double)' extern
| |-ParmVarDecl 0x55e563464aa8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'double'
| |-ParmVarDecl 0x55e563464b28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'double'
| `-NoThrowAttr 0x55e563464c80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563464e10 </usr/include/bits/mathcalls.h:333:13> col:13 implicit scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55e563464f18 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563464f80 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563464eb8 <<invalid sloc>> Implicit 1158
| `-NoThrowAttr 0x55e563464ff8 <col:13> Implicit
|-FunctionDecl 0x55e563465020 prev 0x55e563464e10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:333:13 scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55e563464cf0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x55e563464d70 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55e563465130 <<invalid sloc>> Inherited Implicit 1158
| `-NoThrowAttr 0x55e5634650d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634652a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:156:1 __scalbn 'double (double, int)' extern
| |-ParmVarDecl 0x55e563465178 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'double'
| |-ParmVarDecl 0x55e563465208 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55e563465360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563465468 </usr/include/bits/mathcalls.h:337:17> col:17 implicit ilogb 'int (double)' extern
| |-ParmVarDecl 0x55e563465570 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563465510 <<invalid sloc>> Implicit 739
| `-NoThrowAttr 0x55e5634655e0 <col:17> Implicit
|-FunctionDecl 0x55e563465608 prev 0x55e563465468 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:337:17 ilogb 'int (double)' extern
| |-ParmVarDecl 0x55e5634653d0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e563465710 <<invalid sloc>> Inherited Implicit 739
| `-NoThrowAttr 0x55e5634656b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634657f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:157:1 __ilogb 'int (double)' extern
| |-ParmVarDecl 0x55e563465758 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e5634658a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563465a78 </usr/include/bits/mathcalls.h:347:13> col:13 implicit scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55e563465b80 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563465be8 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55e563465b20 <<invalid sloc>> Implicit 1152
| `-NoThrowAttr 0x55e563465c60 <col:13> Implicit
|-FunctionDecl 0x55e563465c88 prev 0x55e563465a78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:347:13 scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55e563465910 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x55e563465990 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55e563465d98 <<invalid sloc>> Inherited Implicit 1152
| `-NoThrowAttr 0x55e563465d40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563465f00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:159:1 __scalbln 'double (double, long)' extern
| |-ParmVarDecl 0x55e563465de0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'double'
| |-ParmVarDecl 0x55e563465e60 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55e563465fb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634660c0 </usr/include/bits/mathcalls.h:351:13> col:13 implicit nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55e563466200 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563466168 <<invalid sloc>> Implicit 986
| |-NoThrowAttr 0x55e563466270 <col:13> Implicit
| `-ConstAttr 0x55e563466298 <col:13> Implicit
|-FunctionDecl 0x55e5634662c0 prev 0x55e5634660c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:351:13 nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55e563466028 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| |-BuiltinAttr 0x55e5634663c8 <<invalid sloc>> Inherited Implicit 986
| |-ConstAttr 0x55e5634663f8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55e563466370 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634664d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __nearbyint 'double (double)' extern
| |-ParmVarDecl 0x55e563466438 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'double'
| `-NoThrowAttr 0x55e563466580 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563466688 </usr/include/bits/mathcalls.h:355:14> col:14 implicit round 'double (double)' extern
| |-ParmVarDecl 0x55e563466790 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563466730 <<invalid sloc>> Implicit 1126
| |-NoThrowAttr 0x55e563466800 <col:14> Implicit
| `-ConstAttr 0x55e563466828 <col:14> Implicit
|-FunctionDecl 0x55e563466850 prev 0x55e563466688 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:355:14 round 'double (double)' extern
| |-ParmVarDecl 0x55e5634665f0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'double'
| |-BuiltinAttr 0x55e563466980 <<invalid sloc>> Inherited Implicit 1126
| |-NoThrowAttr 0x55e563466900 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563466958 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55e563466a60 <line:359:14> col:14 implicit trunc 'double (double)' extern
| |-ParmVarDecl 0x55e563466b68 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563466b08 <<invalid sloc>> Implicit 1432
| |-NoThrowAttr 0x55e563466bd8 <col:14> Implicit
| `-ConstAttr 0x55e563466c00 <col:14> Implicit
|-FunctionDecl 0x55e563466c28 prev 0x55e563466a60 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:359:14 trunc 'double (double)' extern
| |-ParmVarDecl 0x55e5634669c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'double'
| |-BuiltinAttr 0x55e563466d58 <<invalid sloc>> Inherited Implicit 1432
| |-NoThrowAttr 0x55e563466cd8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563466d30 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55e563466f98 <line:364:13> col:13 implicit remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55e5634670a0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563467108 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563467170 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e563467040 <<invalid sloc>> Implicit 1091
| `-NoThrowAttr 0x55e563467780 <col:13> Implicit
|-FunctionDecl 0x55e5634677a8 prev 0x55e563466f98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:364:13 remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55e563466da0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x55e563466e20 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x55e563466ea0 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55e5634678c0 <<invalid sloc>> Inherited Implicit 1091
| `-NoThrowAttr 0x55e563467868 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563467ab0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:161:1 __remquo 'double (double, double, int *)' extern
| |-ParmVarDecl 0x55e563467908 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'double'
| |-ParmVarDecl 0x55e563467988 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'double'
| |-ParmVarDecl 0x55e563467a08 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55e563467b70 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563467cb8 </usr/include/bits/mathcalls.h:371:22> col:22 implicit lrint 'long (double)' extern
| |-ParmVarDecl 0x55e563467dc0 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563467d60 <<invalid sloc>> Implicit 908
| `-NoThrowAttr 0x55e563467e30 <col:22> Implicit
|-FunctionDecl 0x55e563467e58 prev 0x55e563467cb8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:371:22 lrint 'long (double)' extern
| |-ParmVarDecl 0x55e563467be0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| |-BuiltinAttr 0x55e563467f60 <<invalid sloc>> Inherited Implicit 908
| `-NoThrowAttr 0x55e563467f08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563468040 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:162:1 __lrint 'long (double)' extern
| |-ParmVarDecl 0x55e563467fa8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'double'
| `-NoThrowAttr 0x55e5634680f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563468238 </usr/include/bits/mathcalls.h:373:27> col:27 implicit llrint 'long long (double)' extern
| |-ParmVarDecl 0x55e563468340 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e5634682e0 <<invalid sloc>> Implicit 855
| `-NoThrowAttr 0x55e5634683b0 <col:27> Implicit
|-FunctionDecl 0x55e5634683d8 prev 0x55e563468238 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:373:27 llrint 'long long (double)' extern
| |-ParmVarDecl 0x55e563468160 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| |-BuiltinAttr 0x55e5634684e0 <<invalid sloc>> Inherited Implicit 855
| `-NoThrowAttr 0x55e563468488 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634685c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 __llrint 'long long (double)' extern
| |-ParmVarDecl 0x55e563468528 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'double'
| `-NoThrowAttr 0x55e563468670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563468910 </usr/include/bits/mathcalls.h:377:22> col:22 implicit lround 'long (double)' extern
| |-ParmVarDecl 0x55e563468a18 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e5634689b8 <<invalid sloc>> Implicit 917
| `-NoThrowAttr 0x55e563468a88 <col:22> Implicit
|-FunctionDecl 0x55e563468ab0 prev 0x55e563468910 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:377:22 lround 'long (double)' extern
| |-ParmVarDecl 0x55e5634686e0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| |-BuiltinAttr 0x55e563468bb8 <<invalid sloc>> Inherited Implicit 917
| `-NoThrowAttr 0x55e563468b60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563468c98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:164:1 __lround 'long (double)' extern
| |-ParmVarDecl 0x55e563468c00 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'double'
| `-NoThrowAttr 0x55e563468d48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563468e50 </usr/include/bits/mathcalls.h:379:27> col:27 implicit llround 'long long (double)' extern
| |-ParmVarDecl 0x55e563468f58 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563468ef8 <<invalid sloc>> Implicit 861
| `-NoThrowAttr 0x55e563468fc8 <col:27> Implicit
|-FunctionDecl 0x55e563468ff0 prev 0x55e563468e50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:379:27 llround 'long long (double)' extern
| |-ParmVarDecl 0x55e563468db8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| |-BuiltinAttr 0x55e5634690f8 <<invalid sloc>> Inherited Implicit 861
| `-NoThrowAttr 0x55e5634690a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634691d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __llround 'long long (double)' extern
| |-ParmVarDecl 0x55e563469140 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'double'
| `-NoThrowAttr 0x55e563469288 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563469418 </usr/include/bits/mathcalls.h:383:13> col:13 implicit fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55e563469520 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563469588 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e5634694c0 <<invalid sloc>> Implicit 573
| `-NoThrowAttr 0x55e563469600 <col:13> Implicit
|-FunctionDecl 0x55e563469628 prev 0x55e563469418 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:383:13 fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55e5634692f8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e563469378 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| |-BuiltinAttr 0x55e563469738 <<invalid sloc>> Inherited Implicit 573
| `-NoThrowAttr 0x55e5634696e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634699f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:166:1 __fdim 'double (double, double)' extern
| |-ParmVarDecl 0x55e563469780 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'double'
| |-ParmVarDecl 0x55e563469800 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'double'
| `-NoThrowAttr 0x55e563469aa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563469c38 </usr/include/bits/mathcalls.h:387:14> col:14 implicit fmax 'double (double, double)' extern
| |-ParmVarDecl 0x55e563469d40 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e563469da8 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e563469ce0 <<invalid sloc>> Implicit 599
| |-NoThrowAttr 0x55e563469e20 <col:14> Implicit
| `-ConstAttr 0x55e563469e48 <col:14> Implicit
|-FunctionDecl 0x55e563469e70 prev 0x55e563469c38 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:387:14 fmax 'double (double, double)' extern
| |-ParmVarDecl 0x55e563469b18 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e563469b98 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'double'
| |-BuiltinAttr 0x55e563469fa8 <<invalid sloc>> Inherited Implicit 599
| |-NoThrowAttr 0x55e563469f28 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563469f80 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55e56346a110 <line:390:14> col:14 implicit fmin 'double (double, double)' extern
| |-ParmVarDecl 0x55e56346a218 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56346a280 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56346a1b8 <<invalid sloc>> Implicit 615
| |-NoThrowAttr 0x55e56346a2f8 <col:14> Implicit
| `-ConstAttr 0x55e56346a320 <col:14> Implicit
|-FunctionDecl 0x55e56346a348 prev 0x55e56346a110 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> /usr/include/bits/mathcalls.h:390:14 fmin 'double (double, double)' extern
| |-ParmVarDecl 0x55e563469ff0 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56346a070 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'double'
| |-BuiltinAttr 0x55e56346a480 <<invalid sloc>> Inherited Implicit 615
| |-NoThrowAttr 0x55e56346a400 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346a458 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55e56346a6b8 <line:394:13> col:13 implicit fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55e56346a7c0 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56346a828 <<invalid sloc>> <invalid sloc> 'double'
| |-ParmVarDecl 0x55e56346a890 <<invalid sloc>> <invalid sloc> 'double'
| |-BuiltinAttr 0x55e56346a760 <<invalid sloc>> Implicit 591
| |-ConstAttr 0x55e56346a910 <col:13> Implicit
| `-NoThrowAttr 0x55e56346a938 <col:13> Implicit
|-FunctionDecl 0x55e56346aba0 prev 0x55e56346a6b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:394:13 fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55e56346a4c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x55e56346a548 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x55e56346a5c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| |-BuiltinAttr 0x55e56346acb8 <<invalid sloc>> Inherited Implicit 591
| |-ConstAttr 0x55e56346ace8 <col:13> Inherited Implicit
| `-NoThrowAttr 0x55e56346ac60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346aed0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:168:1 __fma 'double (double, double, double)' extern
| |-ParmVarDecl 0x55e56346ad28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'double'
| |-ParmVarDecl 0x55e56346ada8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'double'
| |-ParmVarDecl 0x55e56346ae28 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'double'
| `-NoThrowAttr 0x55e56346af90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346b120 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> /usr/include/bits/mathcalls.h:489:13 scalb 'double (double, double)' extern
| |-ParmVarDecl 0x55e56346b000 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56346b080 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x55e56346b1d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346b368 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 __scalb 'double (double, double)' extern
| |-ParmVarDecl 0x55e56346b248 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'double'
| |-ParmVarDecl 0x55e56346b2c8 </usr/include/math.h:277:20, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'double'
| `-NoThrowAttr 0x55e56346b420 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346b568 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:175:1 __fpclassifyf 'int (float)' extern
| |-ParmVarDecl 0x55e56346b490 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'float'
| |-NoThrowAttr 0x55e56346b618 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346b670 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55e56346b748 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:176:1 __signbitf 'int (float)' extern
| |-ParmVarDecl 0x55e56346b6b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'float'
| |-NoThrowAttr 0x55e56346b7f8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346b850 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55e56346b928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:177:1 __isinff 'int (float)' extern
| |-ParmVarDecl 0x55e56346b890 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'float'
| |-NoThrowAttr 0x55e56346b9d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346ba30 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55e56346d0e0 <<scratch space>:178:1> col:1 implicit __finitef 'int (float)' extern
| |-ParmVarDecl 0x55e56346d1e8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346d188 <<invalid sloc>> Implicit 1012
| |-NoThrowAttr 0x55e56346d258 <col:1> Implicit
| `-ConstAttr 0x55e56346d280 <col:1> Implicit
|-FunctionDecl 0x55e56346d2a8 prev 0x55e56346d0e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:178:1 __finitef 'int (float)' extern
| |-ParmVarDecl 0x55e56346ba70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'float'
| |-BuiltinAttr 0x55e56346d3d8 <<invalid sloc>> Inherited Implicit 1012
| |-NoThrowAttr 0x55e56346d358 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346d3b0 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55e56346d4b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:179:1 __isnanf 'int (float)' extern
| |-ParmVarDecl 0x55e56346d420 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'float'
| |-NoThrowAttr 0x55e56346d568 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346d5c0 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55e56346d768 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:180:1 __iseqsigf 'int (float, float)' extern
| |-ParmVarDecl 0x55e56346d600 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'float'
| |-ParmVarDecl 0x55e56346d680 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'float'
| `-NoThrowAttr 0x55e56346d820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346d928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:181:1 __issignalingf 'int (float)' extern
| |-ParmVarDecl 0x55e56346d890 </usr/include/math.h:294:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'float'
| |-NoThrowAttr 0x55e56346d9d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56346da30 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55e56346db48 <<scratch space>:184:1> col:1 implicit acosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346dc50 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346dbf0 <<invalid sloc>> Implicit 101
| `-NoThrowAttr 0x55e56346dcc0 <col:1> Implicit
|-FunctionDecl 0x55e56346dce8 prev 0x55e56346db48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346da70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e56346ddf0 <<invalid sloc>> Inherited Implicit 101
| `-NoThrowAttr 0x55e56346dd98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346ded0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346de38 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e56346df80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346e290 <<scratch space>:189:1> col:1 implicit asinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346e398 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346e338 <<invalid sloc>> Implicit 136
| `-NoThrowAttr 0x55e56346e408 <col:1> Implicit
|-FunctionDecl 0x55e56346e430 prev 0x55e56346e290 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346dff0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e56346e538 <<invalid sloc>> Inherited Implicit 136
| `-NoThrowAttr 0x55e56346e4e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346e618 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346e580 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e56346e6c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346e7d0 <<scratch space>:194:1> col:1 implicit atanf 'float (float)' extern
| |-ParmVarDecl 0x55e56346e8d8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346e878 <<invalid sloc>> Implicit 153
| `-NoThrowAttr 0x55e56346e948 <col:1> Implicit
|-FunctionDecl 0x55e56346e970 prev 0x55e56346e7d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanf 'float (float)' extern
| |-ParmVarDecl 0x55e56346e738 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e56346ea78 <<invalid sloc>> Inherited Implicit 153
| `-NoThrowAttr 0x55e56346ea20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346eb58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanf 'float (float)' extern
| |-ParmVarDecl 0x55e56346eac0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e56346ec08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346edd8 <<scratch space>:199:1> col:1 implicit atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55e56346eee0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56346ef48 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346ee80 <<invalid sloc>> Implicit 159
| `-NoThrowAttr 0x55e56346efc0 <col:1> Implicit
|-FunctionDecl 0x55e56346efe8 prev 0x55e56346edd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55e56346ec78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x55e56346ecf8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| |-BuiltinAttr 0x55e56346f0f8 <<invalid sloc>> Inherited Implicit 159
| `-NoThrowAttr 0x55e56346f0a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346f2a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __atan2f 'float (float, float)' extern
| |-ParmVarDecl 0x55e56346f140 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'float'
| |-ParmVarDecl 0x55e56346f1c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'float'
| `-NoThrowAttr 0x55e56346f358 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346f460 <<scratch space>:204:1> col:1 implicit cosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346f568 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346f508 <<invalid sloc>> Implicit 381
| `-NoThrowAttr 0x55e56346f5d8 <col:1> Implicit
|-FunctionDecl 0x55e56346f600 prev 0x55e56346f460 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 cosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346f3c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| |-BuiltinAttr 0x55e56346f708 <<invalid sloc>> Inherited Implicit 381
| `-NoThrowAttr 0x55e56346f6b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346f7e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:206:1 __cosf 'float (float)' extern
| |-ParmVarDecl 0x55e56346f750 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'float'
| `-NoThrowAttr 0x55e56346f898 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346f9a0 <<scratch space>:209:1> col:1 implicit sinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346faa8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346fa48 <<invalid sloc>> Implicit 1177
| `-NoThrowAttr 0x55e56346fb18 <col:1> Implicit
|-FunctionDecl 0x55e56346fb40 prev 0x55e56346f9a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:209:1 sinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346f908 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| |-BuiltinAttr 0x55e56346fc48 <<invalid sloc>> Inherited Implicit 1177
| `-NoThrowAttr 0x55e56346fbf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346fd28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:211:1 __sinf 'float (float)' extern
| |-ParmVarDecl 0x55e56346fc90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'float'
| `-NoThrowAttr 0x55e56346fdd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56346fee0 <<scratch space>:214:1> col:1 implicit tanf 'float (float)' extern
| |-ParmVarDecl 0x55e56346ffe8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56346ff88 <<invalid sloc>> Implicit 1398
| `-NoThrowAttr 0x55e563470058 <col:1> Implicit
|-FunctionDecl 0x55e563470080 prev 0x55e56346fee0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:214:1 tanf 'float (float)' extern
| |-ParmVarDecl 0x55e56346fe48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| |-BuiltinAttr 0x55e563470188 <<invalid sloc>> Inherited Implicit 1398
| `-NoThrowAttr 0x55e563470130 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634702b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:216:1 __tanf 'float (float)' extern
| |-ParmVarDecl 0x55e5634701d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'float'
| `-NoThrowAttr 0x55e563470360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563470468 <<scratch space>:220:1> col:1 implicit coshf 'float (float)' extern
| |-ParmVarDecl 0x55e563470570 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563470510 <<invalid sloc>> Implicit 389
| `-NoThrowAttr 0x55e5634705e0 <col:1> Implicit
|-FunctionDecl 0x55e563470608 prev 0x55e563470468 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:220:1 coshf 'float (float)' extern
| |-ParmVarDecl 0x55e5634703d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e563470710 <<invalid sloc>> Inherited Implicit 389
| `-NoThrowAttr 0x55e5634706b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634707f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:222:1 __coshf 'float (float)' extern
| |-ParmVarDecl 0x55e563470758 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e5634708a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634709a8 <<scratch space>:225:1> col:1 implicit sinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563470ab0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563470a50 <<invalid sloc>> Implicit 1196
| `-NoThrowAttr 0x55e563470b20 <col:1> Implicit
|-FunctionDecl 0x55e563470b48 prev 0x55e5634709a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:225:1 sinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563470910 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e563470c50 <<invalid sloc>> Inherited Implicit 1196
| `-NoThrowAttr 0x55e563470bf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563470d30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:227:1 __sinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563470c98 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e563470de0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563470ee8 <<scratch space>:230:1> col:1 implicit tanhf 'float (float)' extern
| |-ParmVarDecl 0x55e563470ff0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563470f90 <<invalid sloc>> Implicit 1406
| `-NoThrowAttr 0x55e563471060 <col:1> Implicit
|-FunctionDecl 0x55e563471088 prev 0x55e563470ee8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:230:1 tanhf 'float (float)' extern
| |-ParmVarDecl 0x55e563470e50 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e563471190 <<invalid sloc>> Inherited Implicit 1406
| `-NoThrowAttr 0x55e563471138 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634712c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 __tanhf 'float (float)' extern
| |-ParmVarDecl 0x55e5634711d8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e563471370 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563471478 <<scratch space>:235:1> col:1 implicit acoshf 'float (float)' extern
| |-ParmVarDecl 0x55e563471580 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563471520 <<invalid sloc>> Implicit 109
| `-NoThrowAttr 0x55e5634715f0 <col:1> Implicit
|-FunctionDecl 0x55e563471618 prev 0x55e563471478 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:235:1 acoshf 'float (float)' extern
| |-ParmVarDecl 0x55e5634713e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e563471720 <<invalid sloc>> Inherited Implicit 109
| `-NoThrowAttr 0x55e5634716c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563471800 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 __acoshf 'float (float)' extern
| |-ParmVarDecl 0x55e563471768 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e5634718b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634719b8 <<scratch space>:240:1> col:1 implicit asinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563471ac0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563471a60 <<invalid sloc>> Implicit 144
| `-NoThrowAttr 0x55e563471b30 <col:1> Implicit
|-FunctionDecl 0x55e563471b58 prev 0x55e5634719b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:240:1 asinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563471920 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e563471c60 <<invalid sloc>> Inherited Implicit 144
| `-NoThrowAttr 0x55e563471c08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563471d40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 __asinhf 'float (float)' extern
| |-ParmVarDecl 0x55e563471ca8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e563471df0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563471ef8 <<scratch space>:245:1> col:1 implicit atanhf 'float (float)' extern
| |-ParmVarDecl 0x55e563472000 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563471fa0 <<invalid sloc>> Implicit 169
| `-NoThrowAttr 0x55e563472070 <col:1> Implicit
|-FunctionDecl 0x55e563472098 prev 0x55e563471ef8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:245:1 atanhf 'float (float)' extern
| |-ParmVarDecl 0x55e563471e60 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e5634721a0 <<invalid sloc>> Inherited Implicit 169
| `-NoThrowAttr 0x55e563472148 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634722d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 __atanhf 'float (float)' extern
| |-ParmVarDecl 0x55e5634721e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e563472380 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563472488 <<scratch space>:250:1> col:1 implicit expf 'float (float)' extern
| |-ParmVarDecl 0x55e563472590 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563472530 <<invalid sloc>> Implicit 521
| `-NoThrowAttr 0x55e563472600 <col:1> Implicit
|-FunctionDecl 0x55e563472628 prev 0x55e563472488 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 expf 'float (float)' extern
| |-ParmVarDecl 0x55e5634723f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| |-BuiltinAttr 0x55e563472730 <<invalid sloc>> Inherited Implicit 521
| `-NoThrowAttr 0x55e5634726d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563472810 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __expf 'float (float)' extern
| |-ParmVarDecl 0x55e563472778 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'float'
| `-NoThrowAttr 0x55e5634728c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563472a98 <<scratch space>:253:1> col:1 implicit frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55e563472ba0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563472c08 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e563472b40 <<invalid sloc>> Implicit 643
| `-NoThrowAttr 0x55e563472c80 <col:1> Implicit
|-FunctionDecl 0x55e563472ca8 prev 0x55e563472a98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:253:1 frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55e563472930 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e5634729b0 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55e563472db8 <<invalid sloc>> Inherited Implicit 643
| `-NoThrowAttr 0x55e563472d60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563472f20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 __frexpf 'float (float, int *)' extern
| |-ParmVarDecl 0x55e563472e00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e563472e80 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55e563472fd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634731a8 <<scratch space>:256:1> col:1 implicit ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55e5634737c0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563473828 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563473250 <<invalid sloc>> Implicit 838
| `-NoThrowAttr 0x55e5634738a0 <col:1> Implicit
|-FunctionDecl 0x55e5634738c8 prev 0x55e5634731a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:256:1 ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55e563473048 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e5634730c8 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55e5634739d8 <<invalid sloc>> Inherited Implicit 838
| `-NoThrowAttr 0x55e563473980 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563473b40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:258:1 __ldexpf 'float (float, int)' extern
| |-ParmVarDecl 0x55e563473a20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e563473aa0 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55e563473bf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563473d00 <<scratch space>:261:1> col:1 implicit logf 'float (float)' extern
| |-ParmVarDecl 0x55e563473e08 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563473da8 <<invalid sloc>> Implicit 867
| `-NoThrowAttr 0x55e563473e78 <col:1> Implicit
|-FunctionDecl 0x55e563473ea0 prev 0x55e563473d00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:261:1 logf 'float (float)' extern
| |-ParmVarDecl 0x55e563473c68 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| |-BuiltinAttr 0x55e563473fa8 <<invalid sloc>> Inherited Implicit 867
| `-NoThrowAttr 0x55e563473f50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563474088 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:263:1 __logf 'float (float)' extern
| |-ParmVarDecl 0x55e563473ff0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'float'
| `-NoThrowAttr 0x55e563474138 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563474240 <<scratch space>:266:1> col:1 implicit log10f 'float (float)' extern
| |-ParmVarDecl 0x55e563474348 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e5634742e8 <<invalid sloc>> Implicit 888
| `-NoThrowAttr 0x55e5634743b8 <col:1> Implicit
|-FunctionDecl 0x55e5634743e0 prev 0x55e563474240 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:266:1 log10f 'float (float)' extern
| |-ParmVarDecl 0x55e5634741a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e5634744e8 <<invalid sloc>> Inherited Implicit 888
| `-NoThrowAttr 0x55e563474490 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634745c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:268:1 __log10f 'float (float)' extern
| |-ParmVarDecl 0x55e563474530 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e563474678 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634748b8 <<scratch space>:269:1> col:1 implicit modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55e5634749c0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563474a28 <<invalid sloc>> <invalid sloc> 'float *'
| |-BuiltinAttr 0x55e563474960 <<invalid sloc>> Implicit 959
| `-NoThrowAttr 0x55e563474aa0 <col:1> Implicit
|-FunctionDecl 0x55e563474ac8 prev 0x55e5634748b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55e5634746e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e5634747d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-BuiltinAttr 0x55e563474bd8 <<invalid sloc>> Inherited Implicit 959
| `-NoThrowAttr 0x55e563474b80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563474d60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:271:1 __modff 'float (float, float *)' extern
| |-ParmVarDecl 0x55e563474c20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e563474ca0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'float *'
| |-NoThrowAttr 0x55e563474e18 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e563474e70 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55e563474f68 <<scratch space>:275:1> col:1 implicit expm1f 'float (float)' extern
| |-ParmVarDecl 0x55e563475070 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563475010 <<invalid sloc>> Implicit 544
| `-NoThrowAttr 0x55e5634750e0 <col:1> Implicit
|-FunctionDecl 0x55e563475108 prev 0x55e563474f68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 expm1f 'float (float)' extern
| |-ParmVarDecl 0x55e563474ed0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e563475210 <<invalid sloc>> Inherited Implicit 544
| `-NoThrowAttr 0x55e5634751b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634752f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __expm1f 'float (float)' extern
| |-ParmVarDecl 0x55e563475258 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e5634753a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634754a8 <<scratch space>:280:1> col:1 implicit log1pf 'float (float)' extern
| |-ParmVarDecl 0x55e5634755b0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563475550 <<invalid sloc>> Implicit 873
| `-NoThrowAttr 0x55e563475620 <col:1> Implicit
|-FunctionDecl 0x55e563475648 prev 0x55e5634754a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:280:1 log1pf 'float (float)' extern
| |-ParmVarDecl 0x55e563475410 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e563475750 <<invalid sloc>> Inherited Implicit 873
| `-NoThrowAttr 0x55e5634756f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563475878 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:282:1 __log1pf 'float (float)' extern
| |-ParmVarDecl 0x55e5634757e0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e563475928 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563475a30 <<scratch space>:283:1> col:1 implicit logbf 'float (float)' extern
| |-ParmVarDecl 0x55e563475b38 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563475ad8 <<invalid sloc>> Implicit 898
| `-NoThrowAttr 0x55e563475ba8 <col:1> Implicit
|-FunctionDecl 0x55e563475bd0 prev 0x55e563475a30 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 logbf 'float (float)' extern
| |-ParmVarDecl 0x55e563475998 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| |-BuiltinAttr 0x55e563475cd8 <<invalid sloc>> Inherited Implicit 898
| `-NoThrowAttr 0x55e563475c80 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563475db8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __logbf 'float (float)' extern
| |-ParmVarDecl 0x55e563475d20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'float'
| `-NoThrowAttr 0x55e563475e68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563475f70 <<scratch space>:288:1> col:1 implicit exp2f 'float (float)' extern
| |-ParmVarDecl 0x55e563476078 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563476018 <<invalid sloc>> Implicit 527
| `-NoThrowAttr 0x55e5634760e8 <col:1> Implicit
|-FunctionDecl 0x55e563476110 prev 0x55e563475f70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 exp2f 'float (float)' extern
| |-ParmVarDecl 0x55e563475ed8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e563476218 <<invalid sloc>> Inherited Implicit 527
| `-NoThrowAttr 0x55e5634761c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634762f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:290:1 __exp2f 'float (float)' extern
| |-ParmVarDecl 0x55e563476260 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e5634763a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634764b0 <<scratch space>:293:1> col:1 implicit log2f 'float (float)' extern
| |-ParmVarDecl 0x55e5634765b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563476558 <<invalid sloc>> Implicit 880
| `-NoThrowAttr 0x55e563476628 <col:1> Implicit
|-FunctionDecl 0x55e563476650 prev 0x55e5634764b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:293:1 log2f 'float (float)' extern
| |-ParmVarDecl 0x55e563476418 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e563476758 <<invalid sloc>> Inherited Implicit 880
| `-NoThrowAttr 0x55e563476700 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563476888 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 __log2f 'float (float)' extern
| |-ParmVarDecl 0x55e5634767f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e563476938 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563476ac8 <<scratch space>:298:1> col:1 implicit powf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563476bd0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563476c38 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563476b70 <<invalid sloc>> Implicit 1046
| `-NoThrowAttr 0x55e563476cb0 <col:1> Implicit
|-FunctionDecl 0x55e563476cd8 prev 0x55e563476ac8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 powf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634769a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x55e563476a28 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| |-BuiltinAttr 0x55e563476de8 <<invalid sloc>> Inherited Implicit 1046
| `-NoThrowAttr 0x55e563476d90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563476f50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __powf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563476e30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'float'
| |-ParmVarDecl 0x55e563476eb0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'float'
| `-NoThrowAttr 0x55e563477008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563477110 <<scratch space>:301:1> col:1 implicit sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55e563477218 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e5634771b8 <<invalid sloc>> Implicit 1211
| `-NoThrowAttr 0x55e563477288 <col:1> Implicit
|-FunctionDecl 0x55e5634772b0 prev 0x55e563477110 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:301:1 sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55e563477078 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| |-BuiltinAttr 0x55e5634773b8 <<invalid sloc>> Inherited Implicit 1211
| `-NoThrowAttr 0x55e563477360 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563477498 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 __sqrtf 'float (float)' extern
| |-ParmVarDecl 0x55e563477400 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'float'
| `-NoThrowAttr 0x55e563477548 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634776d8 <<scratch space>:306:1> col:1 implicit hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56345bd80 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56345bde8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563477780 <<invalid sloc>> Implicit 729
| `-NoThrowAttr 0x55e56345be60 <col:1> Implicit
|-FunctionDecl 0x55e56345be88 prev 0x55e5634776d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:306:1 hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634775b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e563477638 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| |-BuiltinAttr 0x55e56345bf98 <<invalid sloc>> Inherited Implicit 729
| `-NoThrowAttr 0x55e56345bf40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345c100 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 __hypotf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56345bfe0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e56345c060 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'float'
| `-NoThrowAttr 0x55e56345c1b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345c2c0 <<scratch space>:311:1> col:1 implicit cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55e56345c3c8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56345c368 <<invalid sloc>> Implicit 296
| |-NoThrowAttr 0x55e56345c438 <col:1> Implicit
| `-ConstAttr 0x55e56345c460 <col:1> Implicit
|-FunctionDecl 0x55e56345c488 prev 0x55e56345c2c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55e56345c228 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| |-BuiltinAttr 0x55e56345c590 <<invalid sloc>> Inherited Implicit 296
| |-ConstAttr 0x55e56345c5c0 <<scratch space>:311:1> Inherited Implicit
| `-NoThrowAttr 0x55e56345c538 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345c698 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __cbrtf 'float (float)' extern
| |-ParmVarDecl 0x55e56345c600 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'float'
| `-NoThrowAttr 0x55e56345c748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56345c850 <<scratch space>:3:1> col:1 implicit ceilf 'float (float)' extern
| |-ParmVarDecl 0x55e56345c958 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56345c8f8 <<invalid sloc>> Implicit 315
| |-NoThrowAttr 0x55e56345c9c8 <col:1> Implicit
| `-ConstAttr 0x55e56345c9f0 <col:1> Implicit
|-FunctionDecl 0x55e56345ca18 prev 0x55e56345c850 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:3:1 ceilf 'float (float)' extern
| |-ParmVarDecl 0x55e56345c7b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'float'
| |-BuiltinAttr 0x55e56345cb48 <<invalid sloc>> Inherited Implicit 315
| |-NoThrowAttr 0x55e56345cac8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56345cb20 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55e56345cc28 <<scratch space>:4:1> col:1 implicit used fabsf 'float (float)' extern
| |-ParmVarDecl 0x55e56348a1e0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56345ccd0 <<invalid sloc>> Implicit 562
| |-NoThrowAttr 0x55e56348a250 <col:1> Implicit
| `-ConstAttr 0x55e56348a278 <col:1> Implicit
|-FunctionDecl 0x55e56348a2a0 prev 0x55e56345cc28 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:4:1 used fabsf 'float (float)' extern
| |-ParmVarDecl 0x55e56345cb90 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'float'
| |-BuiltinAttr 0x55e56348a3d0 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x55e56348a350 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348a3a8 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55e56348a4b0 <<scratch space>:5:1> col:1 implicit floorf 'float (float)' extern
| |-ParmVarDecl 0x55e56348a5b8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348a558 <<invalid sloc>> Implicit 581
| |-NoThrowAttr 0x55e56348a628 <col:1> Implicit
| `-ConstAttr 0x55e56348a650 <col:1> Implicit
|-FunctionDecl 0x55e56348a678 prev 0x55e56348a4b0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:5:1 floorf 'float (float)' extern
| |-ParmVarDecl 0x55e56348a418 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'float'
| |-BuiltinAttr 0x55e56348a7a8 <<invalid sloc>> Inherited Implicit 581
| |-NoThrowAttr 0x55e56348a728 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348a780 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55e56348a910 <<scratch space>:6:1> col:1 implicit fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348aa18 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56348aa80 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348a9b8 <<invalid sloc>> Implicit 629
| `-NoThrowAttr 0x55e56348aaf8 <col:1> Implicit
|-FunctionDecl 0x55e56348ab20 prev 0x55e56348a910 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:6:1 fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348a7f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e56348a870 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| |-BuiltinAttr 0x55e56348ac30 <<invalid sloc>> Inherited Implicit 629
| `-NoThrowAttr 0x55e56348abd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348ad98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:8:1 __fmodf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348ac78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e56348acf8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'float'
| `-NoThrowAttr 0x55e56348ae50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348af58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:9:1 isinff 'int (float)' extern
| |-ParmVarDecl 0x55e56348aec0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'float'
| |-NoThrowAttr 0x55e56348b008 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348b060 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55e56348b138 <<scratch space>:10:1> col:1 implicit finitef 'int (float)' extern
| |-ParmVarDecl 0x55e56348b250 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348b1f0 <<invalid sloc>> Implicit 577
| |-NoThrowAttr 0x55e56348b2c0 <col:1> Implicit
| `-ConstAttr 0x55e56348b2e8 <col:1> Implicit
|-FunctionDecl 0x55e56348b310 prev 0x55e56348b138 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:10:1 finitef 'int (float)' extern
| |-ParmVarDecl 0x55e56348b0a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'float'
| |-BuiltinAttr 0x55e56348b440 <<invalid sloc>> Inherited Implicit 577
| |-NoThrowAttr 0x55e56348b3c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348b418 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55e56348b5a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:11:1 dremf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348b488 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e56348b508 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x55e56348b660 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348b7f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:13:1 __dremf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348b6d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e56348b750 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'float'
| `-NoThrowAttr 0x55e56348b8a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348b9b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:14:1 significandf 'float (float)' extern
| |-ParmVarDecl 0x55e56348b918 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x55e56348ba60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348bb68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:16:1 __significandf 'float (float)' extern
| |-ParmVarDecl 0x55e56348bad0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'float'
| `-NoThrowAttr 0x55e56348bc18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348bda8 <<scratch space>:17:1> col:1 implicit copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348beb0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56348bf18 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348be50 <<invalid sloc>> Implicit 359
| |-NoThrowAttr 0x55e56348bf90 <col:1> Implicit
| `-ConstAttr 0x55e56348bfb8 <col:1> Implicit
|-FunctionDecl 0x55e56348bfe0 prev 0x55e56348bda8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:17:1 copysignf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56348bc88 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e56348bd08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'float'
| |-BuiltinAttr 0x55e56348c118 <<invalid sloc>> Inherited Implicit 359
| |-NoThrowAttr 0x55e56348c098 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348c0f0 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55e56348c268 <<scratch space>:18:1> col:1 implicit nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55e56348c370 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e56348c310 <<invalid sloc>> Implicit 971
| |-NoThrowAttr 0x55e56348c3e0 <col:1> Implicit
| `-PureAttr 0x55e56348c408 <col:1> Implicit
|-FunctionDecl 0x55e56348c430 prev 0x55e56348c268 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:18:1 nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55e56348c160 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55e56348c538 <<invalid sloc>> Inherited Implicit 971
| |-PureAttr 0x55e56348c568 <<scratch space>:18:1> Inherited Implicit
| `-NoThrowAttr 0x55e56348c4e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348c640 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:20:1 __nanf 'float (const char *)' extern
| |-ParmVarDecl 0x55e56348c5a8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55e56348c6f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348c7f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:21:1 isnanf 'int (float)' extern
| |-ParmVarDecl 0x55e56348c760 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'float'
| |-NoThrowAttr 0x55e56348c8a8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56348c900 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55e56348c9d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:22:1 j0f 'float (float)' extern
| |-ParmVarDecl 0x55e56348c940 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x55e56348ca88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348cb90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:24:1 __j0f 'float (float)' extern
| |-ParmVarDecl 0x55e56348caf8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:274:28 'float'
| `-NoThrowAttr 0x55e56348cc40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348cd48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:25:1 j1f 'float (float)' extern
| |-ParmVarDecl 0x55e56348ccb0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x55e56348cdf8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348cf00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:27:1 __j1f 'float (float)' extern
| |-ParmVarDecl 0x55e56348ce68 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:275:28 'float'
| `-NoThrowAttr 0x55e56348cfb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348d210 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:28:1 jnf 'float (int, float)' extern
| |-ParmVarDecl 0x55e56348d020 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55e56348d0a0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x55e56348d2c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348d458 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:30:1 __jnf 'float (int, float)' extern
| |-ParmVarDecl 0x55e56348d338 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55e56348d3b8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:276:33 'float'
| `-NoThrowAttr 0x55e56348d510 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348d618 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:31:1 y0f 'float (float)' extern
| |-ParmVarDecl 0x55e56348d580 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x55e56348d6c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348d7d0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:33:1 __y0f 'float (float)' extern
| |-ParmVarDecl 0x55e56348d738 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:277:28 'float'
| `-NoThrowAttr 0x55e56348d880 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348d988 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:34:1 y1f 'float (float)' extern
| |-ParmVarDecl 0x55e56348d8f0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x55e56348da38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348db40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:36:1 __y1f 'float (float)' extern
| |-ParmVarDecl 0x55e56348daa8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:278:28 'float'
| `-NoThrowAttr 0x55e56348dbf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348dd80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:37:1 ynf 'float (int, float)' extern
| |-ParmVarDecl 0x55e56348dc60 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55e56348dce0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x55e56348de38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348dfc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:39:1 __ynf 'float (int, float)' extern
| |-ParmVarDecl 0x55e56348dea8 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55e56348df28 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:279:33 'float'
| `-NoThrowAttr 0x55e56348e080 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348e220 <<scratch space>:42:1> col:1 implicit erff 'float (float)' extern
| |-ParmVarDecl 0x55e56348e328 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348e2c8 <<invalid sloc>> Implicit 501
| `-NoThrowAttr 0x55e56348e398 <col:1> Implicit
|-FunctionDecl 0x55e56348e3c0 prev 0x55e56348e220 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:42:1 erff 'float (float)' extern
| |-ParmVarDecl 0x55e56348e0f0 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| |-BuiltinAttr 0x55e56348e4c8 <<invalid sloc>> Inherited Implicit 501
| `-NoThrowAttr 0x55e56348e470 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348e5a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:44:1 __erff 'float (float)' extern
| |-ParmVarDecl 0x55e56348e510 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:285:33 'float'
| `-NoThrowAttr 0x55e56348e658 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348e760 <<scratch space>:47:1> col:1 implicit erfcf 'float (float)' extern
| |-ParmVarDecl 0x55e56348e868 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348e808 <<invalid sloc>> Implicit 508
| `-NoThrowAttr 0x55e56348e8d8 <col:1> Implicit
|-FunctionDecl 0x55e56348e900 prev 0x55e56348e760 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:47:1 erfcf 'float (float)' extern
| |-ParmVarDecl 0x55e56348e6c8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| |-BuiltinAttr 0x55e56348ea08 <<invalid sloc>> Inherited Implicit 508
| `-NoThrowAttr 0x55e56348e9b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348eae8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:49:1 __erfcf 'float (float)' extern
| |-ParmVarDecl 0x55e56348ea50 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:286:34 'float'
| `-NoThrowAttr 0x55e56348eb98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348eca0 <<scratch space>:50:1> col:1 implicit lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348eda8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348ed48 <<invalid sloc>> Implicit 846
| `-NoThrowAttr 0x55e56348ee18 <col:1> Implicit
|-FunctionDecl 0x55e56348ee40 prev 0x55e56348eca0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:50:1 lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348ec08 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| |-BuiltinAttr 0x55e56348ef48 <<invalid sloc>> Inherited Implicit 846
| `-NoThrowAttr 0x55e56348eef0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348f028 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:52:1 __lgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348ef90 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:287:32 'float'
| `-NoThrowAttr 0x55e56348f0d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348f230 <<scratch space>:53:1> col:1 implicit tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348f338 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56348f2d8 <<invalid sloc>> Implicit 1416
| `-NoThrowAttr 0x55e56348f3a8 <col:1> Implicit
|-FunctionDecl 0x55e56348f3d0 prev 0x55e56348f230 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:53:1 tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348f148 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| |-BuiltinAttr 0x55e56348f4d8 <<invalid sloc>> Inherited Implicit 1416
| `-NoThrowAttr 0x55e56348f480 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348f5b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:55:1 __tgammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348f520 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:292:32 'float'
| `-NoThrowAttr 0x55e56348f668 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348f770 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:56:1 gammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348f6d8 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x55e56348f820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348f928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:58:1 __gammaf 'float (float)' extern
| |-ParmVarDecl 0x55e56348f890 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:298:31 'float'
| `-NoThrowAttr 0x55e56348f9d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348fb68 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:60:1 lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x55e56348fa48 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x55e56348fac8 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e56348fc20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348fdb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:63:1 __lgammaf_r 'float (float, int *)' extern
| |-ParmVarDecl 0x55e56348fc90 </usr/include/math.h:294:21> /usr/include/bits/mathcalls.h:306:34 'float'
| |-ParmVarDecl 0x55e56348fd10 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e56348fe68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56348ff70 <<scratch space>:64:1> col:1 implicit rintf 'float (float)' extern
| |-ParmVarDecl 0x55e563490078 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563490018 <<invalid sloc>> Implicit 1100
| |-ConstAttr 0x55e5634900e8 <col:1> Implicit
| `-NoThrowAttr 0x55e563490110 <col:1> Implicit
|-FunctionDecl 0x55e563490138 prev 0x55e56348ff70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:64:1 rintf 'float (float)' extern
| |-ParmVarDecl 0x55e56348fed8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| |-BuiltinAttr 0x55e563491280 <<invalid sloc>> Inherited Implicit 1100
| |-ConstAttr 0x55e5634912b0 <<scratch space>:64:1> Inherited Implicit
| `-NoThrowAttr 0x55e5634901e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563491388 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:66:1 __rintf 'float (float)' extern
| |-ParmVarDecl 0x55e5634912f0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'float'
| `-NoThrowAttr 0x55e563491438 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634915c8 <<scratch space>:67:1> col:1 implicit nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634916d0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563491738 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563491670 <<invalid sloc>> Implicit 991
| `-NoThrowAttr 0x55e5634917b0 <col:1> Implicit
|-FunctionDecl 0x55e5634917d8 prev 0x55e5634915c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:67:1 nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634914a8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e563491528 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| |-BuiltinAttr 0x55e5634918e8 <<invalid sloc>> Inherited Implicit 991
| `-NoThrowAttr 0x55e563491890 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563491a50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:69:1 __nextafterf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563491930 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e5634919b0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'float'
| `-NoThrowAttr 0x55e563491b08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563491cd8 <<scratch space>:70:1> col:1 implicit nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55e563491de0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563491e48 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e563491d80 <<invalid sloc>> Implicit 998
| `-NoThrowAttr 0x55e563491ec0 <col:1> Implicit
|-FunctionDecl 0x55e563491ee8 prev 0x55e563491cd8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:70:1 nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55e563491b78 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x55e563491bf8 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55e563491ff8 <<invalid sloc>> Inherited Implicit 998
| `-NoThrowAttr 0x55e563491fa0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563492160 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:72:1 __nexttowardf 'float (float, long double)' extern
| |-ParmVarDecl 0x55e563492040 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'float'
| |-ParmVarDecl 0x55e5634920c0 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55e563492218 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344db38 <<scratch space>:74:1> col:1 implicit remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56344dc40 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56344dca8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56344dbe0 <<invalid sloc>> Implicit 1082
| `-NoThrowAttr 0x55e56344dd20 <col:1> Implicit
|-FunctionDecl 0x55e56344dd48 prev 0x55e56344db38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:74:1 remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56344da18 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e56344da98 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| |-BuiltinAttr 0x55e56344de58 <<invalid sloc>> Inherited Implicit 1082
| `-NoThrowAttr 0x55e56344de00 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344dfc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:76:1 __remainderf 'float (float, float)' extern
| |-ParmVarDecl 0x55e56344dea0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'float'
| |-ParmVarDecl 0x55e56344df20 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'float'
| `-NoThrowAttr 0x55e56344e078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344e208 <<scratch space>:77:1> col:1 implicit scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55e56344e310 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e56344e378 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e56344e2b0 <<invalid sloc>> Implicit 1156
| `-NoThrowAttr 0x55e56344e3f0 <col:1> Implicit
|-FunctionDecl 0x55e56344e418 prev 0x55e56344e208 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:77:1 scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55e56344e0e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x55e56344e168 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55e56344e528 <<invalid sloc>> Inherited Implicit 1156
| `-NoThrowAttr 0x55e56344e4d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344e690 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:79:1 __scalbnf 'float (float, int)' extern
| |-ParmVarDecl 0x55e56344e570 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'float'
| |-ParmVarDecl 0x55e56344e5f0 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55e56344e748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56344e850 <<scratch space>:80:1> col:1 implicit ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55e56344e958 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e56344e8f8 <<invalid sloc>> Implicit 737
| `-NoThrowAttr 0x55e563494270 <col:1> Implicit
|-FunctionDecl 0x55e563494298 prev 0x55e56344e850 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:80:1 ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55e56344e7b8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e5634943a0 <<invalid sloc>> Inherited Implicit 737
| `-NoThrowAttr 0x55e563494348 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563494480 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:82:1 __ilogbf 'int (float)' extern
| |-ParmVarDecl 0x55e5634943e8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e563494530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563494708 <<scratch space>:84:1> col:1 implicit scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55e563494810 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563494878 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55e5634947b0 <<invalid sloc>> Implicit 1150
| `-NoThrowAttr 0x55e5634948f0 <col:1> Implicit
|-FunctionDecl 0x55e563494918 prev 0x55e563494708 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:84:1 scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55e5634945a0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x55e563494620 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55e563494a28 <<invalid sloc>> Inherited Implicit 1150
| `-NoThrowAttr 0x55e5634949d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563494b90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:86:1 __scalblnf 'float (float, long)' extern
| |-ParmVarDecl 0x55e563494a70 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'float'
| |-ParmVarDecl 0x55e563494af0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55e563494c48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563494d50 <<scratch space>:87:1> col:1 implicit nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55e563494e58 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563494df8 <<invalid sloc>> Implicit 984
| |-NoThrowAttr 0x55e563494ec8 <col:1> Implicit
| `-ConstAttr 0x55e563494ef0 <col:1> Implicit
|-FunctionDecl 0x55e563494f18 prev 0x55e563494d50 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:87:1 nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55e563494cb8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| |-BuiltinAttr 0x55e563495020 <<invalid sloc>> Inherited Implicit 984
| |-ConstAttr 0x55e563495050 <<scratch space>:87:1> Inherited Implicit
| `-NoThrowAttr 0x55e563494fc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563495128 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:89:1 __nearbyintf 'float (float)' extern
| |-ParmVarDecl 0x55e563495090 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'float'
| `-NoThrowAttr 0x55e5634951d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563495318 <<scratch space>:90:1> col:1 implicit roundf 'float (float)' extern
| |-ParmVarDecl 0x55e563495420 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e5634953c0 <<invalid sloc>> Implicit 1124
| |-NoThrowAttr 0x55e563495490 <col:1> Implicit
| `-ConstAttr 0x55e5634954b8 <col:1> Implicit
|-FunctionDecl 0x55e5634954e0 prev 0x55e563495318 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:90:1 roundf 'float (float)' extern
| |-ParmVarDecl 0x55e563495280 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'float'
| |-BuiltinAttr 0x55e563495610 <<invalid sloc>> Inherited Implicit 1124
| |-NoThrowAttr 0x55e563495590 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634955e8 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55e5634956f0 <<scratch space>:91:1> col:1 implicit truncf 'float (float)' extern
| |-ParmVarDecl 0x55e5634957f8 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563495798 <<invalid sloc>> Implicit 1430
| |-NoThrowAttr 0x55e563495868 <col:1> Implicit
| `-ConstAttr 0x55e563495890 <col:1> Implicit
|-FunctionDecl 0x55e5634958b8 prev 0x55e5634956f0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:91:1 truncf 'float (float)' extern
| |-ParmVarDecl 0x55e563495658 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'float'
| |-BuiltinAttr 0x55e5634959e8 <<invalid sloc>> Inherited Implicit 1430
| |-NoThrowAttr 0x55e563495968 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634959c0 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55e563495c28 <<scratch space>:92:1> col:1 implicit remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55e563495d30 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563495d98 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563495e00 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e563495cd0 <<invalid sloc>> Implicit 1089
| `-NoThrowAttr 0x55e563495e80 <col:1> Implicit
|-FunctionDecl 0x55e563495ea8 prev 0x55e563495c28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:92:1 remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55e563495a30 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x55e563495ab0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x55e563495b30 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55e563495fc0 <<invalid sloc>> Inherited Implicit 1089
| `-NoThrowAttr 0x55e563495f68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634961b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:94:1 __remquof 'float (float, float, int *)' extern
| |-ParmVarDecl 0x55e563496008 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'float'
| |-ParmVarDecl 0x55e563496088 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'float'
| |-ParmVarDecl 0x55e563496108 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55e563496290 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634963d8 <<scratch space>:95:1> col:1 implicit lrintf 'long (float)' extern
| |-ParmVarDecl 0x55e5634964e0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563496480 <<invalid sloc>> Implicit 906
| `-NoThrowAttr 0x55e563496550 <col:1> Implicit
|-FunctionDecl 0x55e563496578 prev 0x55e5634963d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:95:1 lrintf 'long (float)' extern
| |-ParmVarDecl 0x55e563496300 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| |-BuiltinAttr 0x55e563496680 <<invalid sloc>> Inherited Implicit 906
| `-NoThrowAttr 0x55e563496628 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563496760 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:97:1 __lrintf 'long (float)' extern
| |-ParmVarDecl 0x55e5634966c8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'float'
| `-NoThrowAttr 0x55e563496810 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563496958 <<scratch space>:98:1> col:1 implicit llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55e563496a60 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563496a00 <<invalid sloc>> Implicit 853
| `-NoThrowAttr 0x55e563496ad0 <col:1> Implicit
|-FunctionDecl 0x55e563496af8 prev 0x55e563496958 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:98:1 llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55e563496880 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| |-BuiltinAttr 0x55e563496c00 <<invalid sloc>> Inherited Implicit 853
| `-NoThrowAttr 0x55e563496ba8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563496ce0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:100:1 __llrintf 'long long (float)' extern
| |-ParmVarDecl 0x55e563496c48 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'float'
| `-NoThrowAttr 0x55e563496d90 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563496e98 <<scratch space>:101:1> col:1 implicit lroundf 'long (float)' extern
| |-ParmVarDecl 0x55e563496fa0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563496f40 <<invalid sloc>> Implicit 915
| `-NoThrowAttr 0x55e563497010 <col:1> Implicit
|-FunctionDecl 0x55e563497038 prev 0x55e563496e98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:101:1 lroundf 'long (float)' extern
| |-ParmVarDecl 0x55e563496e00 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| |-BuiltinAttr 0x55e563497140 <<invalid sloc>> Inherited Implicit 915
| `-NoThrowAttr 0x55e5634970e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634972a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:103:1 __lroundf 'long (float)' extern
| |-ParmVarDecl 0x55e563497188 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'float'
| `-NoThrowAttr 0x55e563497350 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563497458 <<scratch space>:104:1> col:1 implicit llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55e563497560 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563497500 <<invalid sloc>> Implicit 859
| `-NoThrowAttr 0x55e5634975d0 <col:1> Implicit
|-FunctionDecl 0x55e5634975f8 prev 0x55e563497458 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:104:1 llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55e5634973c0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| |-BuiltinAttr 0x55e563497700 <<invalid sloc>> Inherited Implicit 859
| `-NoThrowAttr 0x55e5634976a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634977e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:106:1 __llroundf 'long long (float)' extern
| |-ParmVarDecl 0x55e563497748 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'float'
| `-NoThrowAttr 0x55e563497890 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563497a20 <<scratch space>:107:1> col:1 implicit fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563497b28 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563497b90 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563497ac8 <<invalid sloc>> Implicit 571
| `-NoThrowAttr 0x55e563497c08 <col:1> Implicit
|-FunctionDecl 0x55e563497c30 prev 0x55e563497a20 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:107:1 fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563497900 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e563497980 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| |-BuiltinAttr 0x55e563497d40 <<invalid sloc>> Inherited Implicit 571
| `-NoThrowAttr 0x55e563497ce8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563497ea8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:109:1 __fdimf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563497d88 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'float'
| |-ParmVarDecl 0x55e563497e08 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'float'
| `-NoThrowAttr 0x55e563497f60 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634980f0 <<scratch space>:111:1> col:1 implicit fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634981f8 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e5634982b0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563498198 <<invalid sloc>> Implicit 597
| |-NoThrowAttr 0x55e563498328 <col:1> Implicit
| `-ConstAttr 0x55e563498350 <col:1> Implicit
|-FunctionDecl 0x55e563498378 prev 0x55e5634980f0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:111:1 fmaxf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563497fd0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e563498050 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'float'
| |-BuiltinAttr 0x55e5634984b0 <<invalid sloc>> Inherited Implicit 597
| |-NoThrowAttr 0x55e563498430 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563498488 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55e563498618 <<scratch space>:112:1> col:1 implicit fminf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563498720 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563498788 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e5634986c0 <<invalid sloc>> Implicit 613
| |-NoThrowAttr 0x55e563498800 <col:1> Implicit
| `-ConstAttr 0x55e563498828 <col:1> Implicit
|-FunctionDecl 0x55e563498850 prev 0x55e563498618 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:112:1 fminf 'float (float, float)' extern
| |-ParmVarDecl 0x55e5634984f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e563498578 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'float'
| |-BuiltinAttr 0x55e563498988 <<invalid sloc>> Inherited Implicit 613
| |-NoThrowAttr 0x55e563498908 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563498960 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55e563498bc8 <<scratch space>:113:1> col:1 implicit fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55e563498cd0 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563498d38 <<invalid sloc>> <invalid sloc> 'float'
| |-ParmVarDecl 0x55e563498da0 <<invalid sloc>> <invalid sloc> 'float'
| |-BuiltinAttr 0x55e563498c70 <<invalid sloc>> Implicit 589
| |-ConstAttr 0x55e563498e20 <col:1> Implicit
| `-NoThrowAttr 0x55e563498e48 <col:1> Implicit
|-FunctionDecl 0x55e563498e70 prev 0x55e563498bc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:113:1 fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55e5634989d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x55e563498a50 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x55e563498ad0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| |-BuiltinAttr 0x55e563498f88 <<invalid sloc>> Inherited Implicit 589
| |-ConstAttr 0x55e563498fb8 <<scratch space>:113:1> Inherited Implicit
| `-NoThrowAttr 0x55e563498f30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634991a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:115:1 __fmaf 'float (float, float, float)' extern
| |-ParmVarDecl 0x55e563498ff8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'float'
| |-ParmVarDecl 0x55e563499078 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'float'
| |-ParmVarDecl 0x55e5634990f8 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'float'
| `-NoThrowAttr 0x55e563499260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563499428 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:121:1 scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563499308 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e563499388 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x55e5634994e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563499670 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:123:1 __scalbf 'float (float, float)' extern
| |-ParmVarDecl 0x55e563499550 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'float'
| |-ParmVarDecl 0x55e5634995d0 </usr/include/math.h:294:21, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'float'
| `-NoThrowAttr 0x55e563499728 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563499868 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:124:1 __fpclassifyl 'int (long double)' extern
| |-ParmVarDecl 0x55e563499798 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value 'long double'
| |-NoThrowAttr 0x55e563499918 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563499970 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55e563499a48 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:125:1 __signbitl 'int (long double)' extern
| |-ParmVarDecl 0x55e5634999b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value 'long double'
| |-NoThrowAttr 0x55e563499af8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563499b50 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55e563499c28 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:126:1 __isinfl 'int (long double)' extern
| |-ParmVarDecl 0x55e563499b90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value 'long double'
| |-NoThrowAttr 0x55e563499cd8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563499d30 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55e563499e08 <<scratch space>:127:1> col:1 implicit __finitel 'int (long double)' extern
| |-ParmVarDecl 0x55e563499f10 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e563499eb0 <<invalid sloc>> Implicit 1014
| |-NoThrowAttr 0x55e563499f80 <col:1> Implicit
| `-ConstAttr 0x55e563499fa8 <col:1> Implicit
|-FunctionDecl 0x55e563499fd0 prev 0x55e563499e08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:127:1 __finitel 'int (long double)' extern
| |-ParmVarDecl 0x55e563499d70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value 'long double'
| |-BuiltinAttr 0x55e56349a100 <<invalid sloc>> Inherited Implicit 1014
| |-NoThrowAttr 0x55e56349a080 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56349a0d8 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55e56349a1e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:128:1 __isnanl 'int (long double)' extern
| |-ParmVarDecl 0x55e56349a148 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value 'long double'
| |-NoThrowAttr 0x55e56349a290 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56349a300 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55e56349a4a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:129:1 __iseqsigl 'int (long double, long double)' extern
| |-ParmVarDecl 0x55e56349a340 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x 'long double'
| |-ParmVarDecl 0x55e56349a3c0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y 'long double'
| `-NoThrowAttr 0x55e56349a560 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349a668 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:130:1 __issignalingl 'int (long double)' extern
| |-ParmVarDecl 0x55e56349a5d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value 'long double'
| |-NoThrowAttr 0x55e56349a718 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56349a770 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-FunctionDecl 0x55e56349a888 <<scratch space>:133:1> col:1 implicit acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349a990 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349a930 <<invalid sloc>> Implicit 105
| `-NoThrowAttr 0x55e56349aa00 <col:1> Implicit
|-FunctionDecl 0x55e56349aa28 prev 0x55e56349a888 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:133:1 acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349a7b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349ab30 <<invalid sloc>> Inherited Implicit 105
| `-NoThrowAttr 0x55e56349aad8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349ac10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:135:1 __acosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349ab78 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:53:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349acc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349adc8 <<scratch space>:138:1> col:1 implicit asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349aed0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349ae70 <<invalid sloc>> Implicit 140
| `-NoThrowAttr 0x55e56349af40 <col:1> Implicit
|-FunctionDecl 0x55e56349af68 prev 0x55e56349adc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:138:1 asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349ad30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349b070 <<invalid sloc>> Inherited Implicit 140
| `-NoThrowAttr 0x55e56349b018 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349b150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:140:1 __asinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349b0b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:55:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349b200 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349b508 <<scratch space>:143:1> col:1 implicit atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349b610 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349b5b0 <<invalid sloc>> Implicit 157
| `-NoThrowAttr 0x55e56349b680 <col:1> Implicit
|-FunctionDecl 0x55e56349b6a8 prev 0x55e56349b508 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:143:1 atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349b470 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349b7b0 <<invalid sloc>> Inherited Implicit 157
| `-NoThrowAttr 0x55e56349b758 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349b890 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:145:1 __atanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349b7f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:57:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349b940 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349bb18 <<scratch space>:148:1> col:1 implicit atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56349bc20 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56349bc88 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349bbc0 <<invalid sloc>> Implicit 163
| `-NoThrowAttr 0x55e56349bd00 <col:1> Implicit
|-FunctionDecl 0x55e56349bd28 prev 0x55e56349bb18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:148:1 atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56349b9b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x55e56349ba30 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| |-BuiltinAttr 0x55e56349be38 <<invalid sloc>> Inherited Implicit 163
| `-NoThrowAttr 0x55e56349bde0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349bfa0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:150:1 __atan2l 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56349be80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:36> col:36 __y 'long double'
| |-ParmVarDecl 0x55e56349bf00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:59:51> col:51 __x 'long double'
| `-NoThrowAttr 0x55e56349c058 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349c160 <<scratch space>:153:1> col:1 implicit cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349c268 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349c208 <<invalid sloc>> Implicit 385
| `-NoThrowAttr 0x55e56349c2d8 <col:1> Implicit
|-FunctionDecl 0x55e56349c300 prev 0x55e56349c160 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:153:1 cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349c0c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55e56349c408 <<invalid sloc>> Inherited Implicit 385
| `-NoThrowAttr 0x55e56349c3b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349c6a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:155:1 __cosl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349c610 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:62:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55e56349c758 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349c860 <<scratch space>:158:1> col:1 implicit sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349c968 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349c908 <<invalid sloc>> Implicit 1181
| `-NoThrowAttr 0x55e56349c9d8 <col:1> Implicit
|-FunctionDecl 0x55e56349ca00 prev 0x55e56349c860 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:158:1 sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349c7c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55e56349cb08 <<invalid sloc>> Inherited Implicit 1181
| `-NoThrowAttr 0x55e56349cab0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349cbe8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:160:1 __sinl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349cb50 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:64:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55e56349cc98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349cda0 <<scratch space>:163:1> col:1 implicit tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349cea8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349ce48 <<invalid sloc>> Implicit 1402
| `-NoThrowAttr 0x55e56349cf18 <col:1> Implicit
|-FunctionDecl 0x55e56349cf40 prev 0x55e56349cda0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:163:1 tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349cd08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55e56349d048 <<invalid sloc>> Inherited Implicit 1402
| `-NoThrowAttr 0x55e56349cff0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349d128 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:165:1 __tanl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d090 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:66:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55e56349d1d8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349d2e0 <<scratch space>:169:1> col:1 implicit coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d3e8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349d388 <<invalid sloc>> Implicit 393
| `-NoThrowAttr 0x55e56349d458 <col:1> Implicit
|-FunctionDecl 0x55e56349d480 prev 0x55e56349d2e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:169:1 coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d248 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349d588 <<invalid sloc>> Inherited Implicit 393
| `-NoThrowAttr 0x55e56349d530 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349d6b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:171:1 __coshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d620 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:93:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349d768 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349d870 <<scratch space>:174:1> col:1 implicit sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d978 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349d918 <<invalid sloc>> Implicit 1200
| `-NoThrowAttr 0x55e56349d9e8 <col:1> Implicit
|-FunctionDecl 0x55e56349da10 prev 0x55e56349d870 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:174:1 sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349d7d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349db18 <<invalid sloc>> Inherited Implicit 1200
| `-NoThrowAttr 0x55e56349dac0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349dbf8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:176:1 __sinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349db60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:95:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349dca8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349ddb0 <<scratch space>:179:1> col:1 implicit tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349deb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349de58 <<invalid sloc>> Implicit 1410
| `-NoThrowAttr 0x55e56349df28 <col:1> Implicit
|-FunctionDecl 0x55e56349df50 prev 0x55e56349ddb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:179:1 tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349dd18 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e56349e058 <<invalid sloc>> Inherited Implicit 1410
| `-NoThrowAttr 0x55e56349e000 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349e138 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:181:1 __tanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e0a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:97:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e56349e1e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349e2f0 <<scratch space>:184:1> col:1 implicit acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e3f8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349e398 <<invalid sloc>> Implicit 113
| `-NoThrowAttr 0x55e56349e468 <col:1> Implicit
|-FunctionDecl 0x55e56349e490 prev 0x55e56349e2f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:184:1 acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e258 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e56349e598 <<invalid sloc>> Inherited Implicit 113
| `-NoThrowAttr 0x55e56349e540 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349e6c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:186:1 __acoshl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e630 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:107:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e56349e778 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349e880 <<scratch space>:189:1> col:1 implicit asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e988 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349e928 <<invalid sloc>> Implicit 148
| `-NoThrowAttr 0x55e56349e9f8 <col:1> Implicit
|-FunctionDecl 0x55e56349ea20 prev 0x55e56349e880 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:189:1 asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349e7e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e56349eb28 <<invalid sloc>> Inherited Implicit 148
| `-NoThrowAttr 0x55e56349ead0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349ec08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:191:1 __asinhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349eb70 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:109:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e56349ecb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349edc0 <<scratch space>:194:1> col:1 implicit atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349eec8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349ee68 <<invalid sloc>> Implicit 173
| `-NoThrowAttr 0x55e56349ef38 <col:1> Implicit
|-FunctionDecl 0x55e56349ef60 prev 0x55e56349edc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:194:1 atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349ed28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e56349f068 <<invalid sloc>> Inherited Implicit 173
| `-NoThrowAttr 0x55e56349f010 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349f148 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:196:1 __atanhl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349f0b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:111:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e56349f1f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349f300 <<scratch space>:199:1> col:1 implicit expl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349f408 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56349f3a8 <<invalid sloc>> Implicit 525
| `-NoThrowAttr 0x55e56349f478 <col:1> Implicit
|-FunctionDecl 0x55e56349f4a0 prev 0x55e56349f300 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:199:1 expl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349f268 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55e56349f5a8 <<invalid sloc>> Inherited Implicit 525
| `-NoThrowAttr 0x55e56349f550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349f6d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:201:1 __expl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56349f640 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:117:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55e56349f788 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349f958 <<scratch space>:202:1> col:1 implicit frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55e56349fa60 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56349fac8 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e56349fa00 <<invalid sloc>> Implicit 647
| `-NoThrowAttr 0x55e56349fb40 <col:1> Implicit
|-FunctionDecl 0x55e56349fb68 prev 0x55e56349f958 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:202:1 frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55e56349f7f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56349f878 <col:37, col:42> col:42 __exponent 'int *'
| |-BuiltinAttr 0x55e56349fc78 <<invalid sloc>> Inherited Implicit 647
| `-NoThrowAttr 0x55e56349fc20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56349fde0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:204:1 __frexpl 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55e56349fcc0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:120:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56349fd40 <col:37, col:42> col:42 __exponent 'int *'
| `-NoThrowAttr 0x55e56349fe98 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a0068 <<scratch space>:205:1> col:1 implicit ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e5634a0170 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a01d8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e5634a0110 <<invalid sloc>> Implicit 842
| `-NoThrowAttr 0x55e5634a0250 <col:1> Implicit
|-FunctionDecl 0x55e5634a0278 prev 0x55e5634a0068 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:205:1 ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e56349ff08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56349ff88 <col:37, col:41> col:41 __exponent 'int'
| |-BuiltinAttr 0x55e5634a0388 <<invalid sloc>> Inherited Implicit 842
| `-NoThrowAttr 0x55e5634a0330 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a04f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:207:1 __ldexpl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e5634a03d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:123:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e5634a0450 <col:37, col:41> col:41 __exponent 'int'
| `-NoThrowAttr 0x55e5634a05a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a0878 <<scratch space>:210:1> col:1 implicit logl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a0980 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a0920 <<invalid sloc>> Implicit 871
| `-NoThrowAttr 0x55e5634a09f0 <col:1> Implicit
|-FunctionDecl 0x55e5634a0a18 prev 0x55e5634a0878 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:210:1 logl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a07e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| |-BuiltinAttr 0x55e5634a0b20 <<invalid sloc>> Inherited Implicit 871
| `-NoThrowAttr 0x55e5634a0ac8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a0c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:212:1 __logl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a0b68 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:126:34> col:34 __x 'long double'
| `-NoThrowAttr 0x55e5634a0cb0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a0db8 <<scratch space>:215:1> col:1 implicit log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a0ec0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a0e60 <<invalid sloc>> Implicit 892
| `-NoThrowAttr 0x55e5634a0f30 <col:1> Implicit
|-FunctionDecl 0x55e5634a0f58 prev 0x55e5634a0db8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:215:1 log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a0d20 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e5634a1060 <<invalid sloc>> Inherited Implicit 892
| `-NoThrowAttr 0x55e5634a1008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a1140 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:217:1 __log10l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a10a8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:129:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e5634a11f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a13f8 <<scratch space>:218:1> col:1 implicit modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55e5634a1500 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a1568 <<invalid sloc>> <invalid sloc> 'long double *'
| |-BuiltinAttr 0x55e5634a14a0 <<invalid sloc>> Implicit 963
| `-NoThrowAttr 0x55e5634a15e0 <col:1> Implicit
|-FunctionDecl 0x55e5634a1608 prev 0x55e5634a13f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:218:1 modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55e5634a1260 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a1318 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-BuiltinAttr 0x55e5634a1718 <<invalid sloc>> Inherited Implicit 963
| `-NoThrowAttr 0x55e5634a16c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a1c90 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:555:76> <scratch space>:220:1 __modfl 'long double (long double, long double *)' extern
| |-ParmVarDecl 0x55e5634a1760 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a1bd0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:132:47> col:47 __iptr 'long double *'
| |-NoThrowAttr 0x55e5634a1d48 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634a1da0 <line:555:57, /usr/include/bits/mathcalls.h:132:69> 2
|-FunctionDecl 0x55e5634a1e98 <<scratch space>:224:1> col:1 implicit expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a1fa0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a1f40 <<invalid sloc>> Implicit 548
| `-NoThrowAttr 0x55e5634a2010 <col:1> Implicit
|-FunctionDecl 0x55e5634a2038 prev 0x55e5634a1e98 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:224:1 expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a1e00 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e5634a2140 <<invalid sloc>> Inherited Implicit 548
| `-NoThrowAttr 0x55e5634a20e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a2220 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:226:1 __expm1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a2188 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:156:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e5634a22d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a23d8 <<scratch space>:229:1> col:1 implicit log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a24e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a2480 <<invalid sloc>> Implicit 877
| `-NoThrowAttr 0x55e5634a2550 <col:1> Implicit
|-FunctionDecl 0x55e5634a2578 prev 0x55e5634a23d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:229:1 log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a2340 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e5634a2680 <<invalid sloc>> Inherited Implicit 877
| `-NoThrowAttr 0x55e5634a2628 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a2760 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:231:1 __log1pl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a26c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:159:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e5634a2810 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a2918 <<scratch space>:232:1> col:1 implicit logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a2a20 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a29c0 <<invalid sloc>> Implicit 902
| `-NoThrowAttr 0x55e5634a2a90 <col:1> Implicit
|-FunctionDecl 0x55e5634a2ab8 prev 0x55e5634a2918 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:232:1 logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a2880 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55e5634a30e0 <<invalid sloc>> Inherited Implicit 902
| `-NoThrowAttr 0x55e5634a2b68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a31c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:234:1 __logbl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a3128 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:162:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55e5634a3270 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a3378 <<scratch space>:237:1> col:1 implicit exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a3480 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a3420 <<invalid sloc>> Implicit 531
| `-NoThrowAttr 0x55e5634a34f0 <col:1> Implicit
|-FunctionDecl 0x55e5634a3518 prev 0x55e5634a3378 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:237:1 exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a32e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e5634a3620 <<invalid sloc>> Inherited Implicit 531
| `-NoThrowAttr 0x55e5634a35c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a3700 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:239:1 __exp2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a3668 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:167:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e5634a37b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a38b8 <<scratch space>:242:1> col:1 implicit log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a39c0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a3960 <<invalid sloc>> Implicit 884
| `-NoThrowAttr 0x55e5634a3a30 <col:1> Implicit
|-FunctionDecl 0x55e5634a3a58 prev 0x55e5634a38b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:242:1 log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a3820 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e5634a3b60 <<invalid sloc>> Inherited Implicit 884
| `-NoThrowAttr 0x55e5634a3b08 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a3c40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:244:1 __log2l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a3ba8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:170:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e5634a3cf0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a3e80 <<scratch space>:247:1> col:1 implicit powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a3f88 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a3ff0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a3f28 <<invalid sloc>> Implicit 1050
| `-NoThrowAttr 0x55e5634a4068 <col:1> Implicit
|-FunctionDecl 0x55e5634a40f0 prev 0x55e5634a3e80 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:247:1 powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a3d60 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55e5634a3de0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| |-BuiltinAttr 0x55e5634a4200 <<invalid sloc>> Inherited Implicit 1050
| `-NoThrowAttr 0x55e5634a41a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a4368 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:249:1 __powl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a4248 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55e5634a42c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:177:49> col:49 __y 'long double'
| `-NoThrowAttr 0x55e5634a4420 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a4528 <<scratch space>:250:1> col:1 implicit sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a4630 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a45d0 <<invalid sloc>> Implicit 1215
| `-NoThrowAttr 0x55e5634a46a0 <col:1> Implicit
|-FunctionDecl 0x55e5634a46c8 prev 0x55e5634a4528 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:250:1 sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a4490 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55e5634a47d0 <<invalid sloc>> Inherited Implicit 1215
| `-NoThrowAttr 0x55e5634a4778 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a48b0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:252:1 __sqrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a4818 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:180:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55e5634a4960 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a4af0 <<scratch space>:255:1> col:1 implicit hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a4bf8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a4c60 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a4b98 <<invalid sloc>> Implicit 733
| `-NoThrowAttr 0x55e5634a4cd8 <col:1> Implicit
|-FunctionDecl 0x55e5634a4d00 prev 0x55e5634a4af0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:255:1 hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a49d0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e5634a4a50 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55e5634a4e10 <<invalid sloc>> Inherited Implicit 733
| `-NoThrowAttr 0x55e5634a4db8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a4f78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:257:1 __hypotl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a4e58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e5634a4ed8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:184:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55e5634a5030 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a5198 <<scratch space>:260:1> col:1 implicit cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a52a0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a5240 <<invalid sloc>> Implicit 300
| |-NoThrowAttr 0x55e5634a5310 <col:1> Implicit
| `-ConstAttr 0x55e5634a5338 <col:1> Implicit
|-FunctionDecl 0x55e5634a5360 prev 0x55e5634a5198 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:260:1 cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5100 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| |-BuiltinAttr 0x55e5634a5468 <<invalid sloc>> Inherited Implicit 300
| |-ConstAttr 0x55e5634a5498 <<scratch space>:260:1> Inherited Implicit
| `-NoThrowAttr 0x55e5634a5410 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a5570 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:262:1 __cbrtl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a54d8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:189:35> col:35 __x 'long double'
| `-NoThrowAttr 0x55e5634a5620 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a5728 <<scratch space>:264:1> col:1 implicit ceill 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5830 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a57d0 <<invalid sloc>> Implicit 319
| |-NoThrowAttr 0x55e5634a58a0 <col:1> Implicit
| `-ConstAttr 0x55e5634a58c8 <col:1> Implicit
|-FunctionDecl 0x55e5634a58f0 prev 0x55e5634a5728 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:264:1 ceill 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5690 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:213:32> col:32 __x 'long double'
| |-BuiltinAttr 0x55e5634a5a20 <<invalid sloc>> Inherited Implicit 319
| |-NoThrowAttr 0x55e5634a59a0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a59f8 </usr/include/bits/mathcalls.h:213:39>
|-FunctionDecl 0x55e5634a5b00 <<scratch space>:265:1> col:1 implicit fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5c08 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a5ba8 <<invalid sloc>> Implicit 566
| |-NoThrowAttr 0x55e5634a5c78 <col:1> Implicit
| `-ConstAttr 0x55e5634a5ca0 <col:1> Implicit
|-FunctionDecl 0x55e5634a5cc8 prev 0x55e5634a5b00 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:265:1 fabsl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5a68 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:216:32> col:32 __x 'long double'
| |-BuiltinAttr 0x55e5634a5df8 <<invalid sloc>> Inherited Implicit 566
| |-NoThrowAttr 0x55e5634a5d78 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a5dd0 </usr/include/bits/mathcalls.h:216:39>
|-FunctionDecl 0x55e5634a5ed8 <<scratch space>:266:1> col:1 implicit floorl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5fe0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a5f80 <<invalid sloc>> Implicit 585
| |-NoThrowAttr 0x55e5634a6050 <col:1> Implicit
| `-ConstAttr 0x55e5634a6078 <col:1> Implicit
|-FunctionDecl 0x55e5634a6110 prev 0x55e5634a5ed8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:266:1 floorl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a5e40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:219:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55e5634a6240 <<invalid sloc>> Inherited Implicit 585
| |-NoThrowAttr 0x55e5634a61c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a6218 </usr/include/bits/mathcalls.h:219:40>
|-FunctionDecl 0x55e5634a63a8 <<scratch space>:267:1> col:1 implicit fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a64b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a6518 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a6450 <<invalid sloc>> Implicit 633
| `-NoThrowAttr 0x55e5634a6590 <col:1> Implicit
|-FunctionDecl 0x55e5634a65b8 prev 0x55e5634a63a8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:267:1 fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a6288 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a6308 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| |-BuiltinAttr 0x55e5634a66c8 <<invalid sloc>> Inherited Implicit 633
| `-NoThrowAttr 0x55e5634a6670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a6830 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:269:1 __fmodl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a6710 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a6790 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:222:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55e5634a68e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a69f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:232:29> <scratch space>:270:1 isinfl 'int (long double)' extern
| |-ParmVarDecl 0x55e5634a6958 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:231:42> col:42 __value 'long double'
| |-NoThrowAttr 0x55e5634a6aa0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a6af8 </usr/include/bits/mathcalls.h:232:19>
|-FunctionDecl 0x55e5634a6bd0 <<scratch space>:271:1> col:1 implicit finitel 'int (long double)' extern
| |-ParmVarDecl 0x55e5634a6cd8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a6c78 <<invalid sloc>> Implicit 579
| |-NoThrowAttr 0x55e5634a6d48 <col:1> Implicit
| `-ConstAttr 0x55e5634a6d70 <col:1> Implicit
|-FunctionDecl 0x55e5634a6d98 prev 0x55e5634a6bd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:238:29> <scratch space>:271:1 finitel 'int (long double)' extern
| |-ParmVarDecl 0x55e5634a6b38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:237:43> col:43 __value 'long double'
| |-BuiltinAttr 0x55e5634a6ec8 <<invalid sloc>> Inherited Implicit 579
| |-NoThrowAttr 0x55e5634a6e48 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a6ea0 </usr/include/bits/mathcalls.h:238:19>
|-FunctionDecl 0x55e5634a7030 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:272:1 dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a6f10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a6f90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55e5634a70e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a7288 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:274:1 __dreml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a7168 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e5634a71e8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:241:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55e5634a7340 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a7448 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:275:1 significandl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a73b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x55e5634a74f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a7600 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:277:1 __significandl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a7568 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:245:38> col:38 __x 'long double'
| `-NoThrowAttr 0x55e5634a76b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a7840 <<scratch space>:278:1> col:1 implicit copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a7948 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634a79b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a78e8 <<invalid sloc>> Implicit 363
| |-NoThrowAttr 0x55e5634a7a28 <col:1> Implicit
| `-ConstAttr 0x55e5634a7a50 <col:1> Implicit
|-FunctionDecl 0x55e5634a7a78 prev 0x55e5634a7840 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:278:1 copysignl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634a7720 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e5634a77a0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:252:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55e5634a7bb0 <<invalid sloc>> Inherited Implicit 363
| |-NoThrowAttr 0x55e5634a7b30 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a7b88 </usr/include/bits/mathcalls.h:252:58>
|-FunctionDecl 0x55e5634a7cc8 <<scratch space>:279:1> col:1 implicit nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55e5634a7dd0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e5634a7d70 <<invalid sloc>> Implicit 975
| |-NoThrowAttr 0x55e5634a7e40 <col:1> Implicit
| `-PureAttr 0x55e5634a7e68 <col:1> Implicit
|-FunctionDecl 0x55e5634a7e90 prev 0x55e5634a7cc8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:279:1 nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55e5634a7bf8 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| |-BuiltinAttr 0x55e5634a7f98 <<invalid sloc>> Inherited Implicit 975
| |-PureAttr 0x55e5634a7fc8 <<scratch space>:279:1> Inherited Implicit
| `-NoThrowAttr 0x55e5634a7f40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a8130 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:281:1 __nanl 'long double (const char *)' extern
| |-ParmVarDecl 0x55e5634a8008 </usr/include/bits/mathcalls.h:257:20, col:32> col:32 __tagb 'const char *'
| `-NoThrowAttr 0x55e5634a81e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a82e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls.h:268:29> <scratch space>:282:1 isnanl 'int (long double)' extern
| |-ParmVarDecl 0x55e5634a8250 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:267:42> col:42 __value 'long double'
| |-NoThrowAttr 0x55e5634a8398 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634a83f0 </usr/include/bits/mathcalls.h:268:19>
|-FunctionDecl 0x55e5634a84c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:283:1 j0l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a8430 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x55e5634a8578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a8680 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:285:1 __j0l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a85e8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:274:28 'long double'
| `-NoThrowAttr 0x55e5634a8730 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a8838 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:286:1 j1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a87a0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x55e5634a88e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a89f0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:288:1 __j1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a8958 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:275:28 'long double'
| `-NoThrowAttr 0x55e5634a8aa0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a8c78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:289:1 jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55e5634a8b10 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55e5634a8b90 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x55e5634a8d30 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a8ec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:291:1 __jnl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55e5634a8da0 </usr/include/bits/mathcalls.h:276:19> col:22 'int'
| |-ParmVarDecl 0x55e5634a8e20 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:276:33 'long double'
| `-NoThrowAttr 0x55e5634a8f78 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9080 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:292:1 y0l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a8fe8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x55e5634a9140 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:294:1 __y0l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a91b0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:277:28 'long double'
| `-NoThrowAttr 0x55e5634a92f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9400 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:295:1 y1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a9368 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x55e5634a94b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a95b8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:297:1 __y1l 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a9520 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:278:28 'long double'
| `-NoThrowAttr 0x55e5634a9668 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a97f8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:298:1 ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55e5634a96d8 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55e5634a9758 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x55e5634a98b0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9a40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:300:1 __ynl 'long double (int, long double)' extern
| |-ParmVarDecl 0x55e5634a9920 </usr/include/bits/mathcalls.h:279:19> col:22 'int'
| |-ParmVarDecl 0x55e5634a99a0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:279:33 'long double'
| `-NoThrowAttr 0x55e5634a9af8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9c00 <<scratch space>:303:1> col:1 implicit erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a9d08 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634a9ca8 <<invalid sloc>> Implicit 505
| `-NoThrowAttr 0x55e5634a9d78 <col:1> Implicit
|-FunctionDecl 0x55e5634a9da0 prev 0x55e5634a9c00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:303:1 erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a9b68 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| |-BuiltinAttr 0x55e5634a9ea8 <<invalid sloc>> Inherited Implicit 505
| `-NoThrowAttr 0x55e5634a9e50 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634a9f88 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:305:1 __erfl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634a9ef0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:285:33 'long double'
| `-NoThrowAttr 0x55e5634aa038 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aa150 <<scratch space>:308:1> col:1 implicit erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa258 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634aa1f8 <<invalid sloc>> Implicit 512
| `-NoThrowAttr 0x55e5634aa2c8 <col:1> Implicit
|-FunctionDecl 0x55e5634aa2f0 prev 0x55e5634aa150 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:308:1 erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa0a8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| |-BuiltinAttr 0x55e5634aa3f8 <<invalid sloc>> Inherited Implicit 512
| `-NoThrowAttr 0x55e5634aa3a0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aa4d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:310:1 __erfcl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa440 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:286:34 'long double'
| `-NoThrowAttr 0x55e5634aa588 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aa690 <<scratch space>:311:1> col:1 implicit lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa798 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634aa738 <<invalid sloc>> Implicit 850
| `-NoThrowAttr 0x55e5634aa808 <col:1> Implicit
|-FunctionDecl 0x55e5634aa830 prev 0x55e5634aa690 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:311:1 lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa5f8 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| |-BuiltinAttr 0x55e5634aa938 <<invalid sloc>> Inherited Implicit 850
| `-NoThrowAttr 0x55e5634aa8e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aaa18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:313:1 __lgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aa980 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:287:32 'long double'
| `-NoThrowAttr 0x55e5634aaac8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aabd0 <<scratch space>:314:1> col:1 implicit tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aacd8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634aac78 <<invalid sloc>> Implicit 1420
| `-NoThrowAttr 0x55e5634aad48 <col:1> Implicit
|-FunctionDecl 0x55e5634aad70 prev 0x55e5634aabd0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:314:1 tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aab38 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| |-BuiltinAttr 0x55e5634aae78 <<invalid sloc>> Inherited Implicit 1420
| `-NoThrowAttr 0x55e5634aae20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634aaf58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:316:1 __tgammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aaec0 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:292:32 'long double'
| `-NoThrowAttr 0x55e5634ab008 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ab160 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:317:1 gammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634ab078 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x55e5634ab210 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ab318 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:319:1 __gammal 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634ab280 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:298:31 'long double'
| `-NoThrowAttr 0x55e5634ab3c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ab558 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:321:1 lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55e5634ab438 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x55e5634ab4b8 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e5634ab610 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ab7a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:324:1 __lgammal_r 'long double (long double, int *)' extern
| |-ParmVarDecl 0x55e5634ab680 </usr/include/math.h:362:22, col:27> /usr/include/bits/mathcalls.h:306:34 'long double'
| |-ParmVarDecl 0x55e5634ab700 <col:36, col:41> col:41 __signgamp 'int *'
| `-NoThrowAttr 0x55e5634ab858 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ab960 <<scratch space>:325:1> col:1 implicit rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634aba68 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634aba08 <<invalid sloc>> Implicit 1104
| |-ConstAttr 0x55e5634abad8 <col:1> Implicit
| `-NoThrowAttr 0x55e5634abb00 <col:1> Implicit
|-FunctionDecl 0x55e5634abb28 prev 0x55e5634ab960 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:325:1 rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634ab8c8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| |-BuiltinAttr 0x55e5634abc30 <<invalid sloc>> Inherited Implicit 1104
| |-ConstAttr 0x55e5634abc60 <<scratch space>:325:1> Inherited Implicit
| `-NoThrowAttr 0x55e5634abbd8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634abd38 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:327:1 __rintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e5634abca0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:313:31> col:31 __x 'long double'
| `-NoThrowAttr 0x55e5634abde8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634abf78 <<scratch space>:328:1> col:1 implicit nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634ac080 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634ac0e8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e5634ac020 <<invalid sloc>> Implicit 995
| `-NoThrowAttr 0x55e5634783f0 <col:1> Implicit
|-FunctionDecl 0x55e563478418 prev 0x55e5634abf78 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:328:1 nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634abe58 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e5634abed8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55e563478528 <<invalid sloc>> Inherited Implicit 995
| `-NoThrowAttr 0x55e5634784d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563478690 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:330:1 __nextafterl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e563478570 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e5634785f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:316:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55e563478748 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634788d8 <<scratch space>:331:1> col:1 implicit nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634789e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e563478a48 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e563478980 <<invalid sloc>> Implicit 1002
| `-NoThrowAttr 0x55e563478ac0 <col:1> Implicit
|-FunctionDecl 0x55e563478ae8 prev 0x55e5634788d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:331:1 nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634787b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x55e563478838 <col:42, col:54> col:54 __y 'long double'
| |-BuiltinAttr 0x55e563478bf8 <<invalid sloc>> Inherited Implicit 1002
| `-NoThrowAttr 0x55e563478ba0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563478d60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:333:1 __nexttowardl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e563478c40 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:318:37> col:37 __x 'long double'
| |-ParmVarDecl 0x55e563478cc0 <col:42, col:54> col:54 __y 'long double'
| `-NoThrowAttr 0x55e563478e18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563478fa8 <<scratch space>:335:1> col:1 implicit remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e5634790b0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e563479118 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e563479050 <<invalid sloc>> Implicit 1086
| `-NoThrowAttr 0x55e563479190 <col:1> Implicit
|-FunctionDecl 0x55e5634791b8 prev 0x55e563478fa8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:335:1 remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e563478e88 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e563478f08 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| |-BuiltinAttr 0x55e5634792c8 <<invalid sloc>> Inherited Implicit 1086
| `-NoThrowAttr 0x55e563479270 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563479630 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:337:1 __remainderl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e563479310 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:36> col:36 __x 'long double'
| |-ParmVarDecl 0x55e563479590 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:329:51> col:51 __y 'long double'
| `-NoThrowAttr 0x55e5634796e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563479878 <<scratch space>:338:1> col:1 implicit scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e563479980 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e5634799e8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55e563479920 <<invalid sloc>> Implicit 1160
| `-NoThrowAttr 0x55e563479a60 <col:1> Implicit
|-FunctionDecl 0x55e563479a88 prev 0x55e563479878 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:338:1 scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e563479758 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55e5634797d8 <col:38, col:42> col:42 __n 'int'
| |-BuiltinAttr 0x55e563479b98 <<invalid sloc>> Inherited Implicit 1160
| `-NoThrowAttr 0x55e563479b40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563479d00 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:340:1 __scalbnl 'long double (long double, int)' extern
| |-ParmVarDecl 0x55e563479be0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:333:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55e563479c60 <col:38, col:42> col:42 __n 'int'
| `-NoThrowAttr 0x55e563479db8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563479ec0 <<scratch space>:341:1> col:1 implicit ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55e563479fc8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e563479f68 <<invalid sloc>> Implicit 741
| `-NoThrowAttr 0x55e56347a038 <col:1> Implicit
|-FunctionDecl 0x55e56347a060 prev 0x55e563479ec0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:341:1 ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55e563479e28 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e56347a168 <<invalid sloc>> Inherited Implicit 741
| `-NoThrowAttr 0x55e56347a110 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347a248 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:343:1 __ilogbl 'int (long double)' extern
| |-ParmVarDecl 0x55e56347a1b0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:337:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e56347a2f8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347a4c8 <<scratch space>:345:1> col:1 implicit scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55e56347a600 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347a668 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55e56347a5a0 <<invalid sloc>> Implicit 1154
| `-NoThrowAttr 0x55e56347a6e0 <col:1> Implicit
|-FunctionDecl 0x55e56347a708 prev 0x55e56347a4c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:345:1 scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55e56347a368 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55e56347a3e8 <col:39, col:48> col:48 __n 'long'
| |-BuiltinAttr 0x55e56347a818 <<invalid sloc>> Inherited Implicit 1154
| `-NoThrowAttr 0x55e56347a7c0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347a980 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:347:1 __scalblnl 'long double (long double, long)' extern
| |-ParmVarDecl 0x55e56347a860 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:347:34> col:34 __x 'long double'
| |-ParmVarDecl 0x55e56347a8e0 <col:39, col:48> col:48 __n 'long'
| `-NoThrowAttr 0x55e56347aa38 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347ab40 <<scratch space>:348:1> col:1 implicit nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347ac48 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347abe8 <<invalid sloc>> Implicit 988
| |-NoThrowAttr 0x55e56347acb8 <col:1> Implicit
| `-ConstAttr 0x55e56347ace0 <col:1> Implicit
|-FunctionDecl 0x55e56347ad08 prev 0x55e56347ab40 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:348:1 nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347aaa8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| |-BuiltinAttr 0x55e56347ae10 <<invalid sloc>> Inherited Implicit 988
| |-ConstAttr 0x55e56347ae40 <<scratch space>:348:1> Inherited Implicit
| `-NoThrowAttr 0x55e56347adb8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347af18 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:350:1 __nearbyintl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347ae80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:351:36> col:36 __x 'long double'
| `-NoThrowAttr 0x55e56347afc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347b0d0 <<scratch space>:351:1> col:1 implicit roundl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347b1d8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347b178 <<invalid sloc>> Implicit 1128
| |-NoThrowAttr 0x55e56347b248 <col:1> Implicit
| `-ConstAttr 0x55e56347b270 <col:1> Implicit
|-FunctionDecl 0x55e56347b298 prev 0x55e56347b0d0 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:351:1 roundl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347b038 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:355:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55e56347b3c8 <<invalid sloc>> Inherited Implicit 1128
| |-NoThrowAttr 0x55e56347b348 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56347b3a0 </usr/include/bits/mathcalls.h:355:40>
|-FunctionDecl 0x55e56347b4a8 <<scratch space>:352:1> col:1 implicit truncl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347b880 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347b550 <<invalid sloc>> Implicit 1434
| |-NoThrowAttr 0x55e56347b8f0 <col:1> Implicit
| `-ConstAttr 0x55e56347b918 <col:1> Implicit
|-FunctionDecl 0x55e56347b940 prev 0x55e56347b4a8 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:352:1 truncl 'long double (long double)' extern
| |-ParmVarDecl 0x55e56347b410 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:359:33> col:33 __x 'long double'
| |-BuiltinAttr 0x55e56347ba70 <<invalid sloc>> Inherited Implicit 1434
| |-NoThrowAttr 0x55e56347b9f0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56347ba48 </usr/include/bits/mathcalls.h:359:40>
|-FunctionDecl 0x55e56347bca8 <<scratch space>:353:1> col:1 implicit remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55e56347bdb0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347be18 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347be80 <<invalid sloc>> <invalid sloc> 'int *'
| |-BuiltinAttr 0x55e56347bd50 <<invalid sloc>> Implicit 1093
| `-NoThrowAttr 0x55e56347bf00 <col:1> Implicit
|-FunctionDecl 0x55e56347bf28 prev 0x55e56347bca8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:353:1 remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55e56347bab8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55e56347bb38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x55e56347bbb8 <col:53, col:58> col:58 __quo 'int *'
| |-BuiltinAttr 0x55e56347c040 <<invalid sloc>> Inherited Implicit 1093
| `-NoThrowAttr 0x55e56347bfe8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347c230 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:355:1 __remquol 'long double (long double, long double, int *)' extern
| |-ParmVarDecl 0x55e56347c088 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:33> col:33 __x 'long double'
| |-ParmVarDecl 0x55e56347c108 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:364:48> col:48 __y 'long double'
| |-ParmVarDecl 0x55e56347c188 <col:53, col:58> col:58 __quo 'int *'
| `-NoThrowAttr 0x55e56347c2f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347c438 <<scratch space>:356:1> col:1 implicit lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347c540 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347c4e0 <<invalid sloc>> Implicit 910
| `-NoThrowAttr 0x55e56347c5b0 <col:1> Implicit
|-FunctionDecl 0x55e56347c5d8 prev 0x55e56347c438 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:356:1 lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347c360 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| |-BuiltinAttr 0x55e56347c6e0 <<invalid sloc>> Inherited Implicit 910
| `-NoThrowAttr 0x55e56347c688 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347cb60 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:358:1 __lrintl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347c728 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:371:41> col:41 __x 'long double'
| `-NoThrowAttr 0x55e56347cc10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347cd58 <<scratch space>:359:1> col:1 implicit llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347ce60 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347ce00 <<invalid sloc>> Implicit 857
| `-NoThrowAttr 0x55e56347ced0 <col:1> Implicit
|-FunctionDecl 0x55e56347cef8 prev 0x55e56347cd58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:359:1 llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347cc80 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| |-BuiltinAttr 0x55e56347d000 <<invalid sloc>> Inherited Implicit 857
| `-NoThrowAttr 0x55e56347cfa8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347d0e0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:361:1 __llrintl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347d048 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:373:47> col:47 __x 'long double'
| `-NoThrowAttr 0x55e56347d190 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347d298 <<scratch space>:362:1> col:1 implicit lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347d3a0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347d340 <<invalid sloc>> Implicit 919
| `-NoThrowAttr 0x55e56347d410 <col:1> Implicit
|-FunctionDecl 0x55e56347d438 prev 0x55e56347d298 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:362:1 lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347d200 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| |-BuiltinAttr 0x55e56347d540 <<invalid sloc>> Inherited Implicit 919
| `-NoThrowAttr 0x55e56347d4e8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347d620 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:364:1 __lroundl 'long (long double)' extern
| |-ParmVarDecl 0x55e56347d588 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:377:42> col:42 __x 'long double'
| `-NoThrowAttr 0x55e56347d6d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347d7d8 <<scratch space>:365:1> col:1 implicit llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347d8e0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347d880 <<invalid sloc>> Implicit 863
| `-NoThrowAttr 0x55e56347d950 <col:1> Implicit
|-FunctionDecl 0x55e56347d978 prev 0x55e56347d7d8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:365:1 llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347d740 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| |-BuiltinAttr 0x55e56347da80 <<invalid sloc>> Inherited Implicit 863
| `-NoThrowAttr 0x55e56347da28 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347db70 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:367:1 __llroundl 'long long (long double)' extern
| |-ParmVarDecl 0x55e56347dac8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:379:48> col:48 __x 'long double'
| `-NoThrowAttr 0x55e56347dc20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347ddb0 <<scratch space>:368:1> col:1 implicit fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347deb8 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347df20 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347de58 <<invalid sloc>> Implicit 575
| `-NoThrowAttr 0x55e56347df98 <col:1> Implicit
|-FunctionDecl 0x55e56347dfc0 prev 0x55e56347ddb0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:368:1 fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347dc90 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e56347dd10 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| |-BuiltinAttr 0x55e56347e0d0 <<invalid sloc>> Inherited Implicit 575
| `-NoThrowAttr 0x55e56347e078 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347e238 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:370:1 __fdiml 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347e118 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:31> col:31 __x 'long double'
| |-ParmVarDecl 0x55e56347e198 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:383:46> col:46 __y 'long double'
| `-NoThrowAttr 0x55e56347e2f0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347e480 <<scratch space>:372:1> col:1 implicit fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347e588 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347e5f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347e528 <<invalid sloc>> Implicit 601
| |-NoThrowAttr 0x55e56347e668 <col:1> Implicit
| `-ConstAttr 0x55e56347e690 <col:1> Implicit
|-FunctionDecl 0x55e56347e6b8 prev 0x55e56347e480 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:372:1 fmaxl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347e360 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56347e3e0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:387:47> col:47 __y 'long double'
| |-BuiltinAttr 0x55e56347e7f0 <<invalid sloc>> Inherited Implicit 601
| |-NoThrowAttr 0x55e56347e770 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56347e7c8 </usr/include/bits/mathcalls.h:387:54>
|-FunctionDecl 0x55e56347e958 <<scratch space>:373:1> col:1 implicit fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347ea60 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347eac8 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347ea00 <<invalid sloc>> Implicit 617
| |-NoThrowAttr 0x55e56347eb40 <col:1> Implicit
| `-ConstAttr 0x55e56347ee50 <col:1> Implicit
|-FunctionDecl 0x55e56347ee78 prev 0x55e56347e958 </usr/include/bits/mathcalls-macros.h:39:3, line:37:66> <scratch space>:373:1 fminl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347e838 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56347e8b8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:390:47> col:47 __y 'long double'
| |-BuiltinAttr 0x55e56347efb0 <<invalid sloc>> Inherited Implicit 617
| |-NoThrowAttr 0x55e56347ef30 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e56347ef88 </usr/include/bits/mathcalls.h:390:54>
|-FunctionDecl 0x55e56347f1e8 <<scratch space>:374:1> col:1 implicit fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55e56347f2f0 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347f358 <<invalid sloc>> <invalid sloc> 'long double'
| |-ParmVarDecl 0x55e56347f3c0 <<invalid sloc>> <invalid sloc> 'long double'
| |-BuiltinAttr 0x55e56347f290 <<invalid sloc>> Implicit 593
| |-ConstAttr 0x55e56347f440 <col:1> Implicit
| `-NoThrowAttr 0x55e56347f468 <col:1> Implicit
|-FunctionDecl 0x55e56347f490 prev 0x55e56347f1e8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:374:1 fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55e56347eff8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x55e56347f078 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x55e56347f0f8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| |-BuiltinAttr 0x55e56347f5a8 <<invalid sloc>> Inherited Implicit 593
| |-ConstAttr 0x55e56347f5d8 <<scratch space>:374:1> Inherited Implicit
| `-NoThrowAttr 0x55e56347f550 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347f7c0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:376:1 __fmal 'long double (long double, long double, long double)' extern
| |-ParmVarDecl 0x55e56347f618 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:30> col:30 __x 'long double'
| |-ParmVarDecl 0x55e56347f698 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:45> col:45 __y 'long double'
| |-ParmVarDecl 0x55e56347f718 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:394:60> col:60 __z 'long double'
| `-NoThrowAttr 0x55e56347f880 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347fa10 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:382:1 scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347f8f0 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56347f970 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x55e56347fac8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56347fc58 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:384:1 __scalbl 'long double (long double, long double)' extern
| |-ParmVarDecl 0x55e56347fb38 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:32> col:32 __x 'long double'
| |-ParmVarDecl 0x55e56347fbb8 </usr/include/math.h:362:22, /usr/include/bits/mathcalls.h:489:47> col:47 __n 'long double'
| `-NoThrowAttr 0x55e56347fd10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634811c8 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:21:32> <scratch space>:4:1 __fpclassifyf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e56347fde0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:20:50> col:50 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e563481278 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634812d0 </usr/include/bits/mathcalls-helper-functions.h:21:22>
|-FunctionDecl 0x55e5634813a0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:25:32> <scratch space>:5:1 __signbitf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e563481308 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:24:47> col:47 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e563481450 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e5634814a8 </usr/include/bits/mathcalls-helper-functions.h:25:22>
|-FunctionDecl 0x55e563481578 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:30:29> <scratch space>:6:1 __isinff128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e5634814e0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:29:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e563481628 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563481680 </usr/include/bits/mathcalls-helper-functions.h:30:19>
|-FunctionDecl 0x55e563481750 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:34:29> <scratch space>:7:1 __finitef128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e5634816b8 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:33:46> col:46 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e563481800 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563481858 </usr/include/bits/mathcalls-helper-functions.h:34:19>
|-FunctionDecl 0x55e563481928 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:38:29> <scratch space>:8:1 __isnanf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e563481890 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:37:45> col:45 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e5634819d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563481a30 </usr/include/bits/mathcalls-helper-functions.h:38:19>
|-FunctionDecl 0x55e563481c08 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/sys/cdefs.h:79:54> <scratch space>:9:1 __iseqsigf128 'int (_Float128, _Float128)' extern
| |-ParmVarDecl 0x55e563481a68 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:47> col:47 __x '_Float128':'__float128'
| |-ParmVarDecl 0x55e563481ae0 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:41:62> col:62 __y '_Float128':'__float128'
| `-NoThrowAttr 0x55e563481cc0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e563481dc0 </usr/include/bits/mathcalls-macros.h:39:3, /usr/include/bits/mathcalls-helper-functions.h:45:32> <scratch space>:10:1 __issignalingf128 'int (_Float128)' extern
| |-ParmVarDecl 0x55e563481d28 </usr/include/math.h:445:21, /usr/include/bits/mathcalls-helper-functions.h:44:51> col:51 __value '_Float128':'__float128'
| |-NoThrowAttr 0x55e563481e70 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55e563481ec8 </usr/include/bits/mathcalls-helper-functions.h:45:22>
|-VarDecl 0x55e563481f08 </usr/include/math.h:823:1, col:12> col:12 signgam 'int' extern
|-EnumDecl 0x55e563481f70 <line:903:1, line:920:3> line:903:1
| |-EnumConstantDecl 0x55e563482070 <line:905:5, line:906:17> line:905:5 FP_NAN 'int'
| | `-ConstantExpr 0x55e563482050 <line:906:17> 'int'
| |   |-value: Int 0
| |   `-IntegerLiteral 0x55e563482030 <col:17> 'int' 0
| |-EnumConstantDecl 0x55e563483140 <line:908:5, line:909:22> line:908:5 FP_INFINITE 'int'
| | `-ConstantExpr 0x55e5634820e8 <line:909:22> 'int'
| |   |-value: Int 1
| |   `-IntegerLiteral 0x55e5634820c8 <col:22> 'int' 1
| |-EnumConstantDecl 0x55e5634831d8 <line:911:5, line:912:18> line:911:5 FP_ZERO 'int'
| | `-ConstantExpr 0x55e5634831b8 <line:912:18> 'int'
| |   |-value: Int 2
| |   `-IntegerLiteral 0x55e563483198 <col:18> 'int' 2
| |-EnumConstantDecl 0x55e563483270 <line:914:5, line:915:23> line:914:5 FP_SUBNORMAL 'int'
| | `-ConstantExpr 0x55e563483250 <line:915:23> 'int'
| |   |-value: Int 3
| |   `-IntegerLiteral 0x55e563483230 <col:23> 'int' 3
| `-EnumConstantDecl 0x55e563483308 <line:917:5, line:918:20> line:917:5 FP_NORMAL 'int'
|   `-ConstantExpr 0x55e5634832e8 <line:918:20> 'int'
|     |-value: Int 4
|     `-IntegerLiteral 0x55e5634832c8 <col:20> 'int' 4
|-TypedefDecl 0x55e563483370 </usr/include/bits/stdint-intn.h:24:1, col:18> col:18 referenced int8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55e56341ccb0 '__int8_t' sugar
|   `-TypedefType 0x55e56341cc80 '__int8_t' sugar
|     |-Typedef 0x55e56341c910 '__int8_t'
|     `-BuiltinType 0x55e56337c510 'signed char'
|-TypedefDecl 0x55e5634833d8 <line:25:1, col:19> col:19 referenced int16_t '__int16_t':'short'
| `-ElaboratedType 0x55e563422790 '__int16_t' sugar
|   `-TypedefType 0x55e56341ce20 '__int16_t' sugar
|     |-Typedef 0x55e56341c9f0 '__int16_t'
|     `-BuiltinType 0x55e56337c530 'short'
|-TypedefDecl 0x55e563483440 <line:26:1, col:19> col:19 referenced int32_t '__int32_t':'int'
| `-ElaboratedType 0x55e563422930 '__int32_t' sugar
|   `-TypedefType 0x55e563422900 '__int32_t' sugar
|     |-Typedef 0x55e56341cad0 '__int32_t'
|     `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e5634834a8 <line:27:1, col:19> col:19 referenced int64_t '__int64_t':'long'
| `-ElaboratedType 0x55e563422ad0 '__int64_t' sugar
|   `-TypedefType 0x55e563422aa0 '__int64_t' sugar
|     |-Typedef 0x55e56341cbb0 '__int64_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563483510 </usr/include/bits/stdint-uintn.h:24:1, col:19> col:19 referenced uint8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55e56341cd80 '__uint8_t' sugar
|   `-TypedefType 0x55e56341cd50 '__uint8_t' sugar
|     |-Typedef 0x55e56341c980 '__uint8_t'
|     `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e563483578 <line:25:1, col:20> col:20 referenced uint16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55e563422860 '__uint16_t' sugar
|   `-TypedefType 0x55e563422830 '__uint16_t' sugar
|     |-Typedef 0x55e56341ca60 '__uint16_t'
|     `-BuiltinType 0x55e56337c5d0 'unsigned short'
|-TypedefDecl 0x55e5634835e0 <line:26:1, col:20> col:20 referenced uint32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55e563422a00 '__uint32_t' sugar
|   `-TypedefType 0x55e5634229d0 '__uint32_t' sugar
|     |-Typedef 0x55e56341cb40 '__uint32_t'
|     `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563483648 <line:27:1, col:20> col:20 referenced uint64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55e563422ba0 '__uint64_t' sugar
|   `-TypedefType 0x55e563422b70 '__uint64_t' sugar
|     |-Typedef 0x55e56341cc20 '__uint64_t'
|     `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563483710 </usr/include/bits/stdint-least.h:25:1, col:24> col:24 int_least8_t '__int_least8_t':'signed char'
| `-ElaboratedType 0x55e5634836d0 '__int_least8_t' sugar
|   `-TypedefType 0x55e5634836a0 '__int_least8_t' sugar
|     |-Typedef 0x55e56341ccf0 '__int_least8_t'
|     `-ElaboratedType 0x55e56341ccb0 '__int8_t' sugar
|       `-TypedefType 0x55e56341cc80 '__int8_t' sugar
|         |-Typedef 0x55e56341c910 '__int8_t'
|         `-BuiltinType 0x55e56337c510 'signed char'
|-TypedefDecl 0x55e5634837e0 <line:26:1, col:25> col:25 int_least16_t '__int_least16_t':'short'
| `-ElaboratedType 0x55e5634837a0 '__int_least16_t' sugar
|   `-TypedefType 0x55e563483770 '__int_least16_t' sugar
|     |-Typedef 0x55e5634227d0 '__int_least16_t'
|     `-ElaboratedType 0x55e563422790 '__int16_t' sugar
|       `-TypedefType 0x55e56341ce20 '__int16_t' sugar
|         |-Typedef 0x55e56341c9f0 '__int16_t'
|         `-BuiltinType 0x55e56337c530 'short'
|-TypedefDecl 0x55e5634838b0 <line:27:1, col:25> col:25 int_least32_t '__int_least32_t':'int'
| `-ElaboratedType 0x55e563483870 '__int_least32_t' sugar
|   `-TypedefType 0x55e563483840 '__int_least32_t' sugar
|     |-Typedef 0x55e563422970 '__int_least32_t'
|     `-ElaboratedType 0x55e563422930 '__int32_t' sugar
|       `-TypedefType 0x55e563422900 '__int32_t' sugar
|         |-Typedef 0x55e56341cad0 '__int32_t'
|         `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e563483980 <line:28:1, col:25> col:25 int_least64_t '__int_least64_t':'long'
| `-ElaboratedType 0x55e563483940 '__int_least64_t' sugar
|   `-TypedefType 0x55e563483910 '__int_least64_t' sugar
|     |-Typedef 0x55e563422b10 '__int_least64_t'
|     `-ElaboratedType 0x55e563422ad0 '__int64_t' sugar
|       `-TypedefType 0x55e563422aa0 '__int64_t' sugar
|         |-Typedef 0x55e56341cbb0 '__int64_t'
|         `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563483a50 <line:31:1, col:25> col:25 uint_least8_t '__uint_least8_t':'unsigned char'
| `-ElaboratedType 0x55e563483a10 '__uint_least8_t' sugar
|   `-TypedefType 0x55e5634839e0 '__uint_least8_t' sugar
|     |-Typedef 0x55e56341cdc0 '__uint_least8_t'
|     `-ElaboratedType 0x55e56341cd80 '__uint8_t' sugar
|       `-TypedefType 0x55e56341cd50 '__uint8_t' sugar
|         |-Typedef 0x55e56341c980 '__uint8_t'
|         `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e563483b20 <line:32:1, col:26> col:26 uint_least16_t '__uint_least16_t':'unsigned short'
| `-ElaboratedType 0x55e563483ae0 '__uint_least16_t' sugar
|   `-TypedefType 0x55e563483ab0 '__uint_least16_t' sugar
|     |-Typedef 0x55e5634228a0 '__uint_least16_t'
|     `-ElaboratedType 0x55e563422860 '__uint16_t' sugar
|       `-TypedefType 0x55e563422830 '__uint16_t' sugar
|         |-Typedef 0x55e56341ca60 '__uint16_t'
|         `-BuiltinType 0x55e56337c5d0 'unsigned short'
|-TypedefDecl 0x55e563483bf0 <line:33:1, col:26> col:26 uint_least32_t '__uint_least32_t':'unsigned int'
| `-ElaboratedType 0x55e563483bb0 '__uint_least32_t' sugar
|   `-TypedefType 0x55e563483b80 '__uint_least32_t' sugar
|     |-Typedef 0x55e563422a40 '__uint_least32_t'
|     `-ElaboratedType 0x55e563422a00 '__uint32_t' sugar
|       `-TypedefType 0x55e5634229d0 '__uint32_t' sugar
|         |-Typedef 0x55e56341cb40 '__uint32_t'
|         `-BuiltinType 0x55e56337c5f0 'unsigned int'
|-TypedefDecl 0x55e563483cc0 <line:34:1, col:26> col:26 uint_least64_t '__uint_least64_t':'unsigned long'
| `-ElaboratedType 0x55e563483c80 '__uint_least64_t' sugar
|   `-TypedefType 0x55e563483c50 '__uint_least64_t' sugar
|     |-Typedef 0x55e563422be0 '__uint_least64_t'
|     `-ElaboratedType 0x55e563422ba0 '__uint64_t' sugar
|       `-TypedefType 0x55e563422b70 '__uint64_t' sugar
|         |-Typedef 0x55e56341cc20 '__uint64_t'
|         `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563483d30 </usr/include/stdint.h:47:1, col:22> col:22 int_fast8_t 'signed char'
| `-BuiltinType 0x55e56337c510 'signed char'
|-TypedefDecl 0x55e563483da0 <line:49:1, col:19> col:19 int_fast16_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563483e10 <line:50:1, col:19> col:19 int_fast32_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563483e80 <line:51:1, col:19> col:19 int_fast64_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e563483ef0 <line:60:1, col:24> col:24 uint_fast8_t 'unsigned char'
| `-BuiltinType 0x55e56337c5b0 'unsigned char'
|-TypedefDecl 0x55e563483f60 <line:62:1, col:27> col:27 uint_fast16_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563483fd0 <line:63:1, col:27> col:27 uint_fast32_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e563484040 <line:64:1, col:27> col:27 uint_fast64_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e5634840b0 <line:76:1, col:19> col:19 intptr_t 'long'
| `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e5634dc6a0 <line:79:1, col:27> col:27 uintptr_t 'unsigned long'
| `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e5634dc770 <line:90:1, col:21> col:21 intmax_t '__intmax_t':'long'
| `-ElaboratedType 0x55e5634dc730 '__intmax_t' sugar
|   `-TypedefType 0x55e5634dc700 '__intmax_t' sugar
|     |-Typedef 0x55e563422d30 '__intmax_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e5634dc840 <line:91:1, col:22> col:22 uintmax_t '__uintmax_t':'unsigned long'
| `-ElaboratedType 0x55e5634dc800 '__uintmax_t' sugar
|   `-TypedefType 0x55e5634dc7d0 '__uintmax_t' sugar
|     |-Typedef 0x55e563422da0 '__uintmax_t'
|     `-BuiltinType 0x55e56337c610 'unsigned long'
|-FunctionDecl 0x55e5634dcb80 </usr/include/assert.h:67:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:67:13 __assert_fail 'void (const char *, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55e5634dc8b0 <col:28, col:40> col:40 __assertion 'const char *'
| |-ParmVarDecl 0x55e5634dc930 <col:53, col:65> col:65 __file 'const char *'
| |-ParmVarDecl 0x55e5634dc9b0 <line:68:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x55e5634dca30 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x55e5634dcc48 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55e5634dcca0 <line:102:34>
|-FunctionDecl 0x55e5634dcfb0 </usr/include/assert.h:72:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:72:13 __assert_perror_fail 'void (int, const char *, unsigned int, const char *) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55e5634dcce0 <col:35, col:39> col:39 __errnum 'int'
| |-ParmVarDecl 0x55e5634dcd60 <col:49, col:61> col:61 __file 'const char *'
| |-ParmVarDecl 0x55e5634dcde0 <line:73:7, col:20> col:20 __line 'unsigned int'
| |-ParmVarDecl 0x55e5634dce60 <col:28, col:40> col:40 __function 'const char *'
| |-NoThrowAttr 0x55e5634dd078 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55e5634dd0d0 <line:102:34>
|-FunctionDecl 0x55e5634dd350 </usr/include/assert.h:79:1, /usr/include/sys/cdefs.h:102:43> /usr/include/assert.h:79:13 __assert 'void (const char *, const char *, int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55e5634dd110 <col:23, col:35> col:35 __assertion 'const char *'
| |-ParmVarDecl 0x55e5634dd190 <col:48, col:60> col:60 __file 'const char *'
| |-ParmVarDecl 0x55e5634dd210 <col:68, col:72> col:72 __line 'int'
| |-NoThrowAttr 0x55e5634dd410 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55e5634dd468 <line:102:34>
|-TypedefDecl 0x55e5634dd500 </usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h:12:1, col:27> col:27 referenced __gnuc_va_list '__builtin_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55e5634dd4c0 '__builtin_va_list' sugar
|   `-TypedefType 0x55e5634dd490 '__builtin_va_list' sugar
|     |-Typedef 0x55e56337cfb0 '__builtin_va_list'
|     `-ConstantArrayType 0x55e56337cf60 'struct __va_list_tag[1]' 1 
|       `-RecordType 0x55e56337cda0 'struct __va_list_tag'
|         `-Record 0x55e56337cd20 '__va_list_tag'
|-RecordDecl 0x55e5634dd558 </usr/include/bits/types/__mbstate_t.h:13:9, line:21:1> line:13:9 struct definition
| |-FieldDecl 0x55e5634dd618 <line:15:3, col:7> col:7 __count 'int'
| |-RecordDecl 0x55e5634e9b80 <line:16:3, line:20:3> line:16:3 union definition
| | |-FieldDecl 0x55e5634e9c38 <<built-in>:115:23, /usr/include/bits/types/__mbstate_t.h:18:19> col:19 __wch 'unsigned int'
| | `-FieldDecl 0x55e5634e9d20 <line:19:5, col:18> col:10 __wchb 'char[4]'
| `-FieldDecl 0x55e5634e9dc8 <line:16:3, line:20:5> col:5 __value 'union (unnamed union at /usr/include/bits/types/__mbstate_t.h:16:3)':'union __mbstate_t::(unnamed at /usr/include/bits/types/__mbstate_t.h:16:3)'
|-TypedefDecl 0x55e5634e9e78 <line:13:1, line:21:3> col:3 referenced __mbstate_t 'struct __mbstate_t':'__mbstate_t'
| `-ElaboratedType 0x55e5634e9e20 'struct __mbstate_t' sugar
|   `-RecordType 0x55e5634dd5e0 '__mbstate_t'
|     `-Record 0x55e5634dd558 <line:13:9, line:21:1>
|-RecordDecl 0x55e5634e9ee8 </usr/include/bits/types/__fpos_t.h:10:9, line:14:1> line:10:16 struct _G_fpos_t definition
| |-FieldDecl 0x55e5634ea000 <line:12:3, col:11> col:11 __pos '__off_t':'long'
| `-FieldDecl 0x55e5634ea0c0 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55e5634ea168 <line:10:1, line:14:3> col:3 referenced __fpos_t 'struct _G_fpos_t'
| `-ElaboratedType 0x55e5634ea110 'struct _G_fpos_t' sugar
|   `-RecordType 0x55e5634e9f70 'struct _G_fpos_t'
|     `-Record 0x55e5634e9ee8 '_G_fpos_t'
|-RecordDecl 0x55e5634ea1d8 </usr/include/bits/types/__fpos64_t.h:10:9, line:14:1> line:10:16 struct _G_fpos64_t definition
| |-FieldDecl 0x55e5634ea290 <line:12:3, col:13> col:13 __pos '__off64_t':'long'
| `-FieldDecl 0x55e5634ea2f0 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55e5634ea398 <line:10:1, line:14:3> col:3 __fpos64_t 'struct _G_fpos64_t'
| `-ElaboratedType 0x55e5634ea340 'struct _G_fpos64_t' sugar
|   `-RecordType 0x55e5634ea260 'struct _G_fpos64_t'
|     `-Record 0x55e5634ea1d8 '_G_fpos64_t'
|-RecordDecl 0x55e5634ea408 </usr/include/bits/types/__FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55e5634ea500 <line:5:1, col:25> col:25 __FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55e5634ea4b0 'struct _IO_FILE' sugar
|   `-RecordType 0x55e5634ea490 'struct _IO_FILE'
|     `-Record 0x55e5634ea918 '_IO_FILE'
|-RecordDecl 0x55e5634ea558 prev 0x55e5634ea408 </usr/include/bits/types/FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55e5634ea5f8 <line:7:1, col:25> col:25 referenced FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55e5634ea4b0 'struct _IO_FILE' sugar
|   `-RecordType 0x55e5634ea490 'struct _IO_FILE'
|     `-Record 0x55e5634ea918 '_IO_FILE'
|-RecordDecl 0x55e5634ea650 prev 0x55e5634ea558 </usr/include/bits/types/struct_FILE.h:37:1, col:8> col:8 struct _IO_FILE
|-RecordDecl 0x55e5634ea6d0 <line:38:1, col:8> col:8 struct _IO_marker
|-RecordDecl 0x55e5634ea770 <line:39:1, col:8> col:8 struct _IO_codecvt
|-RecordDecl 0x55e5634ea810 <line:40:1, col:8> col:8 struct _IO_wide_data
|-TypedefDecl 0x55e5634ea8c0 <line:45:1, col:14> col:14 referenced _IO_lock_t 'void'
| `-BuiltinType 0x55e56337c4b0 'void'
|-RecordDecl 0x55e5634ea918 prev 0x55e5634ea650 <line:51:1, line:110:1> line:51:8 struct _IO_FILE definition
| |-FieldDecl 0x55e5634ea9b0 <line:53:3, col:7> col:7 _flags 'int'
| |-FieldDecl 0x55e5634eaa18 <line:56:3, col:9> col:9 _IO_read_ptr 'char *'
| |-FieldDecl 0x55e5634eaa80 <line:57:3, col:9> col:9 _IO_read_end 'char *'
| |-FieldDecl 0x55e5634eaae8 <line:58:3, col:9> col:9 _IO_read_base 'char *'
| |-FieldDecl 0x55e5634eed30 <line:59:3, col:9> col:9 _IO_write_base 'char *'
| |-FieldDecl 0x55e5634eed98 <line:60:3, col:9> col:9 _IO_write_ptr 'char *'
| |-FieldDecl 0x55e5634eee00 <line:61:3, col:9> col:9 _IO_write_end 'char *'
| |-FieldDecl 0x55e5634eee68 <line:62:3, col:9> col:9 _IO_buf_base 'char *'
| |-FieldDecl 0x55e5634eeed0 <line:63:3, col:9> col:9 _IO_buf_end 'char *'
| |-FieldDecl 0x55e5634eef38 <line:66:3, col:9> col:9 _IO_save_base 'char *'
| |-FieldDecl 0x55e5634eefa0 <line:67:3, col:9> col:9 _IO_backup_base 'char *'
| |-FieldDecl 0x55e5634ef008 <line:68:3, col:9> col:9 _IO_save_end 'char *'
| |-FieldDecl 0x55e5634ef118 <line:70:3, col:22> col:22 _markers 'struct _IO_marker *'
| |-FieldDecl 0x55e5634ef1f8 <line:72:3, col:20> col:20 _chain 'struct _IO_FILE *'
| |-FieldDecl 0x55e5634ef260 <line:74:3, col:7> col:7 _fileno 'int'
| |-FieldDecl 0x55e5634ef308 <line:75:3, col:15> col:7 _flags2 'int'
| | `-ConstantExpr 0x55e5634ef2e8 <col:15> 'int'
| |   |-value: Int 24
| |   `-IntegerLiteral 0x55e5634ef2b0 <col:15> 'int' 24
| |-FieldDecl 0x55e5634ef3b8 <line:77:3, col:26> col:8 _short_backupbuf 'char[1]'
| |-FieldDecl 0x55e5634ef418 <line:78:3, col:11> col:11 _old_offset '__off_t':'long'
| |-FieldDecl 0x55e5634ef480 <line:81:3, col:18> col:18 _cur_column 'unsigned short'
| |-FieldDecl 0x55e5634ef4e8 <line:82:3, col:15> col:15 _vtable_offset 'signed char'
| |-FieldDecl 0x55e5634ef598 <line:83:3, col:19> col:8 _shortbuf 'char[1]'
| |-FieldDecl 0x55e5634ef698 <line:85:3, col:15> col:15 _lock '_IO_lock_t *'
| |-FieldDecl 0x55e5634ef6f8 <line:93:3, col:13> col:13 _offset '__off64_t':'long'
| |-FieldDecl 0x55e5634ef808 <line:95:3, col:23> col:23 _codecvt 'struct _IO_codecvt *'
| |-FieldDecl 0x55e5634ef918 <line:96:3, col:25> col:25 _wide_data 'struct _IO_wide_data *'
| |-FieldDecl 0x55e5634ef990 <line:97:3, col:20> col:20 _freeres_list 'struct _IO_FILE *'
| |-FieldDecl 0x55e5634ef9f8 <line:98:3, col:9> col:9 _freeres_buf 'void *'
| |-FieldDecl 0x55e5634efad8 <line:99:3, col:21> col:21 _prevchain 'struct _IO_FILE **'
| |-FieldDecl 0x55e5634efb40 <line:100:3, col:7> col:7 _mode 'int'
| |-FieldDecl 0x55e5634efba8 <line:102:3, col:7> col:7 _unused3 'int'
| |-FieldDecl 0x55e5634efc08 <line:104:3, col:14> col:14 _total_written '__uint64_t':'unsigned long'
| `-FieldDecl 0x55e5634f1e50 <line:109:3, col:56> col:8 _unused2 'char[8]'
|-TypedefDecl 0x55e5634f2150 </usr/include/bits/types/cookie_io_functions_t.h:27:1, line:28:58> line:27:19 referenced cookie_read_function_t '__ssize_t (void *, char *, size_t)'
| `-FunctionProtoType 0x55e5634f20d0 '__ssize_t (void *, char *, size_t)' cdecl
|   |-ElaboratedType 0x55e5634f1ed0 '__ssize_t' sugar
|   | `-TypedefType 0x55e5634f1ea0 '__ssize_t' sugar
|   |   |-Typedef 0x55e56342a650 '__ssize_t'
|   |   `-BuiltinType 0x55e56337c570 'long'
|   |-PointerType 0x55e56337cbf0 'void *'
|   | `-BuiltinType 0x55e56337c4b0 'void'
|   |-PointerType 0x55e56337cc80 'char *'
|   | `-BuiltinType 0x55e56337c4f0 'char'
|   `-ElaboratedType 0x55e5633e5380 'size_t' sugar
|     `-TypedefType 0x55e5633e5350 'size_t' sugar
|       |-Typedef 0x55e5633e51c8 'size_t'
|       `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e5634f23f0 <line:36:1, line:37:59> line:36:19 referenced cookie_write_function_t '__ssize_t (void *, const char *, size_t)'
| `-FunctionProtoType 0x55e5634f2370 '__ssize_t (void *, const char *, size_t)' cdecl
|   |-ElaboratedType 0x55e5634f1ed0 '__ssize_t' sugar
|   | `-TypedefType 0x55e5634f1ea0 '__ssize_t' sugar
|   |   |-Typedef 0x55e56342a650 '__ssize_t'
|   |   `-BuiltinType 0x55e56337c570 'long'
|   |-PointerType 0x55e56337cbf0 'void *'
|   | `-BuiltinType 0x55e56337c4b0 'void'
|   |-PointerType 0x55e56337d220 'const char *'
|   | `-QualType 0x55e56337c4f1 'const char' const
|   |   `-BuiltinType 0x55e56337c4f0 'char'
|   `-ElaboratedType 0x55e5633e5380 'size_t' sugar
|     `-TypedefType 0x55e5633e5350 'size_t' sugar
|       |-Typedef 0x55e5633e51c8 'size_t'
|       `-BuiltinType 0x55e56337c610 'unsigned long'
|-TypedefDecl 0x55e5634f2708 <line:45:1, col:78> col:13 referenced cookie_seek_function_t 'int (void *, __off64_t *, int)'
| `-FunctionProtoType 0x55e5634f2680 'int (void *, __off64_t *, int)' cdecl
|   |-BuiltinType 0x55e56337c550 'int'
|   |-PointerType 0x55e56337cbf0 'void *'
|   | `-BuiltinType 0x55e56337c4b0 'void'
|   |-PointerType 0x55e5634f2500 '__off64_t *'
|   | `-ElaboratedType 0x55e56342a7c0 '__off64_t' sugar
|   |   `-TypedefType 0x55e56342a790 '__off64_t' sugar
|   |     |-Typedef 0x55e563423190 '__off64_t'
|   |     `-BuiltinType 0x55e56337c570 'long'
|   `-BuiltinType 0x55e56337c550 'int'
|-TypedefDecl 0x55e5634f2848 <line:48:1, col:52> col:13 referenced cookie_close_function_t 'int (void *)'
| `-FunctionProtoType 0x55e5634f27e0 'int (void *)' cdecl
|   |-BuiltinType 0x55e56337c550 'int'
|   `-PointerType 0x55e56337cbf0 'void *'
|     `-BuiltinType 0x55e56337c4b0 'void'
|-RecordDecl 0x55e5634f28a0 <line:55:9, line:61:1> line:55:16 struct _IO_cookie_io_functions_t definition
| |-FieldDecl 0x55e5634f2a18 <line:57:3, col:27> col:27 read 'cookie_read_function_t *'
| |-FieldDecl 0x55e5634f2b48 <line:58:3, col:28> col:28 write 'cookie_write_function_t *'
| |-FieldDecl 0x55e5634f2c78 <line:59:3, col:27> col:27 seek 'cookie_seek_function_t *'
| `-FieldDecl 0x55e5634f48d8 <line:60:3, col:28> col:28 close 'cookie_close_function_t *'
|-TypedefDecl 0x55e5634f4988 <line:55:1, line:61:3> col:3 referenced cookie_io_functions_t 'struct _IO_cookie_io_functions_t'
| `-ElaboratedType 0x55e5634f4930 'struct _IO_cookie_io_functions_t' sugar
|   `-RecordType 0x55e5634f2920 'struct _IO_cookie_io_functions_t'
|     `-Record 0x55e5634f28a0 '_IO_cookie_io_functions_t'
|-TypedefDecl 0x55e5634f4a70 </usr/include/stdio.h:53:1, col:24> col:24 va_list '__gnuc_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55e5634f4a30 '__gnuc_va_list' sugar
|   `-TypedefType 0x55e5634f4a00 '__gnuc_va_list' sugar
|     |-Typedef 0x55e5634dd500 '__gnuc_va_list'
|     `-ElaboratedType 0x55e5634dd4c0 '__builtin_va_list' sugar
|       `-TypedefType 0x55e5634dd490 '__builtin_va_list' sugar
|         |-Typedef 0x55e56337cfb0 '__builtin_va_list'
|         `-ConstantArrayType 0x55e56337cf60 'struct __va_list_tag[1]' 1 
|           `-RecordType 0x55e56337cda0 'struct __va_list_tag'
|             `-Record 0x55e56337cd20 '__va_list_tag'
|-TypedefDecl 0x55e5634f4ad8 <line:64:1, col:17> col:17 off_t '__off_t':'long'
| `-ElaboratedType 0x55e5634e9fc0 '__off_t' sugar
|   `-TypedefType 0x55e5634e9f90 '__off_t' sugar
|     |-Typedef 0x55e563423120 '__off_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e5634f4b40 <line:78:1, col:19> col:19 ssize_t '__ssize_t':'long'
| `-ElaboratedType 0x55e5634f1ed0 '__ssize_t' sugar
|   `-TypedefType 0x55e5634f1ea0 '__ssize_t' sugar
|     |-Typedef 0x55e56342a650 '__ssize_t'
|     `-BuiltinType 0x55e56337c570 'long'
|-TypedefDecl 0x55e5634f4c10 <line:85:1, col:18> col:18 referenced fpos_t '__fpos_t':'struct _G_fpos_t'
| `-ElaboratedType 0x55e5634f4bd0 '__fpos_t' sugar
|   `-TypedefType 0x55e5634f4ba0 '__fpos_t' sugar
|     |-Typedef 0x55e5634ea168 '__fpos_t'
|     `-ElaboratedType 0x55e5634ea110 'struct _G_fpos_t' sugar
|       `-RecordType 0x55e5634e9f70 'struct _G_fpos_t'
|         `-Record 0x55e5634e9ee8 '_G_fpos_t'
|-VarDecl 0x55e5634f4d18 <line:149:1, col:14> col:14 stdin 'FILE *' extern
|-VarDecl 0x55e5634f4d98 <line:150:1, col:14> col:14 stdout 'FILE *' extern
|-VarDecl 0x55e5634f4e18 <line:151:1, col:14> col:14 stderr 'FILE *' extern
|-FunctionDecl 0x55e5634f4f68 <line:158:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:158:12 remove 'int (const char *)' extern
| |-ParmVarDecl 0x55e5634f4e98 <col:20, col:32> col:32 __filename 'const char *'
| `-NoThrowAttr 0x55e5634f5018 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634f51a8 </usr/include/stdio.h:160:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:160:12 rename 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55e5634f5088 <col:20, col:32> col:32 __old 'const char *'
| |-ParmVarDecl 0x55e5634f5108 <col:39, col:51> col:51 __new 'const char *'
| `-NoThrowAttr 0x55e5634f5260 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634f5558 </usr/include/stdio.h:164:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:164:12 renameat 'int (int, const char *, int, const char *)' extern
| |-ParmVarDecl 0x55e5634f52d0 <col:22, col:26> col:26 __oldfd 'int'
| |-ParmVarDecl 0x55e5634f5350 <col:35, col:47> col:47 __old 'const char *'
| |-ParmVarDecl 0x55e5634f53d0 <col:54, col:58> col:58 __newfd 'int'
| |-ParmVarDecl 0x55e5634f5450 <line:165:8, col:20> col:20 __new 'const char *'
| `-NoThrowAttr 0x55e5634f5620 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634f57c8 </usr/include/stdio.h:187:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:187:12 fclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55e5634f5690 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55e5634f68b0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:187:49> 1
|-FunctionDecl 0x55e5634f6a28 <line:197:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:197:14 tmpfile 'FILE *(void)' extern
| `-RestrictAttr 0x55e5634f6ad0 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f6d18 </usr/include/stdio.h:214:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:214:14 tmpnam 'char *(char *)' extern
| |-ParmVarDecl 0x55e5634f6c00 <col:22, col:35> col:26 'char *'
| `-NoThrowAttr 0x55e5634f6dc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634f6f18 </usr/include/stdio.h:219:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:219:14 tmpnam_r 'char *(char *)' extern
| |-ParmVarDecl 0x55e5634f6e80 <col:24, col:41> col:29 __s 'char *'
| `-NoThrowAttr 0x55e5634f6fc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634f7158 </usr/include/stdio.h:231:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:231:14 tempnam 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e5634f7038 <col:23, col:35> col:35 __dir 'const char *'
| |-ParmVarDecl 0x55e5634f70b8 <col:42, col:54> col:54 __pfx 'const char *'
| |-NoThrowAttr 0x55e5634f7210 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55e5634f7268 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f7350 </usr/include/stdio.h:239:1, col:34> col:12 fflush 'int (FILE *)' extern
| `-ParmVarDecl 0x55e5634f72b8 <col:20, col:26> col:26 __stream 'FILE *'
|-FunctionDecl 0x55e5634f74b0 <line:248:1, col:43> col:12 fflush_unlocked 'int (FILE *)' extern
| `-ParmVarDecl 0x55e5634f7418 <col:29, col:35> col:35 __stream 'FILE *'
|-FunctionDecl 0x55e5634f7790 <line:267:14> col:14 implicit fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e5634f78c0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55e5634f7928 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55e5634f7838 <<invalid sloc>> Implicit 636
|-FunctionDecl 0x55e5634f79a0 prev 0x55e5634f7790 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:267:14 fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e5634f7578 <col:21, col:44> col:44 __filename 'const char *restrict'
| |-ParmVarDecl 0x55e5634f75f8 <line:268:7, col:30> col:30 __modes 'const char *restrict'
| |-BuiltinAttr 0x55e5634f7ac0 <<invalid sloc>> Inherited Implicit 636
| `-RestrictAttr 0x55e5634f7a58 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f7d68 </usr/include/stdio.h:274:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:274:14 freopen 'FILE *(const char *restrict, const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55e5634f7b08 <col:23, col:46> col:46 __filename 'const char *restrict'
| |-ParmVarDecl 0x55e5634f7b88 <line:275:9, col:32> col:32 __modes 'const char *restrict'
| |-ParmVarDecl 0x55e5634f7c08 <line:276:9, col:26> col:26 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e5634f7e28 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:276:55> 3
|-FunctionDecl 0x55e5634f8058 <line:302:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:302:14 fdopen 'FILE *(int, const char *)' extern
| |-ParmVarDecl 0x55e5634f7eb0 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55e5634f7f30 <col:32, col:44> col:44 __modes 'const char *'
| |-NoThrowAttr 0x55e5634f8110 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55e5634f8168 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f8458 </usr/include/stdio.h:309:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:309:14 fopencookie 'FILE *(void *restrict, const char *restrict, cookie_io_functions_t)' extern
| |-ParmVarDecl 0x55e5634f81b8 <col:27, col:44> col:44 __magic_cookie 'void *restrict'
| |-ParmVarDecl 0x55e5634f8238 <line:310:6, col:29> col:29 __modes 'const char *restrict'
| |-ParmVarDecl 0x55e5634f8310 <line:311:6, col:28> col:28 __io_funcs 'cookie_io_functions_t':'struct _IO_cookie_io_functions_t'
| |-NoThrowAttr 0x55e5634f8518 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55e5634f8570 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f87f8 </usr/include/stdio.h:317:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:317:14 fmemopen 'FILE *(void *, size_t, const char *)' extern
| |-ParmVarDecl 0x55e5634f85c0 <col:24, col:30> col:30 __s 'void *'
| |-ParmVarDecl 0x55e5634f8638 <col:35, col:42> col:42 __len 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e5634f86b8 <col:49, col:61> col:61 __modes 'const char *'
| |-NoThrowAttr 0x55e5634f88d0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55e5634f8928 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f8b78 </usr/include/stdio.h:323:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:323:14 open_memstream 'FILE *(char **, size_t *)' extern
| |-ParmVarDecl 0x55e5634f8978 <col:30, col:37> col:37 __bufloc 'char **'
| |-ParmVarDecl 0x55e5634f8a58 <col:47, col:55> col:55 __sizeloc 'size_t *'
| |-NoThrowAttr 0x55e5634f8c30 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55e5634f8c88 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e5634f8e90 </usr/include/stdio.h:337:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:337:13 setbuf 'void (FILE *restrict, char *restrict)' extern
| |-ParmVarDecl 0x55e5634f8cd8 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634f8d58 <col:48, col:65> col:65 __buf 'char *restrict'
| |-NoThrowAttr 0x55e5634f8f48 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634f8fa0 <line:555:57, /usr/include/stdio.h:338:16> 1
|-FunctionDecl 0x55e5634f92e8 <line:342:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:342:12 setvbuf 'int (FILE *restrict, char *restrict, int, size_t)' extern
| |-ParmVarDecl 0x55e5634f9000 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634f9080 <col:48, col:65> col:65 __buf 'char *restrict'
| |-ParmVarDecl 0x55e5634f9100 <line:343:7, col:11> col:11 __modes 'int'
| |-ParmVarDecl 0x55e5634f9178 <col:20, col:27> col:27 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e5634f93b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634f9408 <line:555:57, /usr/include/stdio.h:343:53> 1
|-FunctionDecl 0x55e5634f96b0 <line:348:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:348:13 setbuffer 'void (FILE *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55e5634f9460 <col:24, col:41> col:41 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634f94e0 <col:51, col:68> col:68 __buf 'char *restrict'
| |-ParmVarDecl 0x55e5634f9558 <line:349:10, col:17> col:17 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55e5634f9770 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634f97c8 <line:555:57, /usr/include/stdio.h:349:46> 1
|-FunctionDecl 0x55e5634f9980 <line:352:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:352:13 setlinebuf 'void (FILE *)' extern
| |-ParmVarDecl 0x55e5634f9820 <col:25, col:31> col:31 __stream 'FILE *'
| |-NoThrowAttr 0x55e5634f9a30 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e5634f9a88 <line:555:57, /usr/include/stdio.h:352:62> 1
|-FunctionDecl 0x55e5634f9d08 <line:360:12> col:12 implicit fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634f9e10 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55e5634f9e78 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634f9db0 <<invalid sloc>> Implicit 557
| |-FormatAttr 0x55e5634f9ef0 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55e5634f9f28 <col:12> Implicit
|-FunctionDecl 0x55e5634f9f50 prev 0x55e5634f9d08 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:360:12 fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634f9ae0 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634f9b60 <line:361:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fa078 <<invalid sloc>> Inherited Implicit 557
| |-FormatAttr 0x55e5634fa0a8 <line:360:12> Inherited printf 2 3
| |-NoThrowAttr 0x55e5634fa0e0 <col:12> Inherited Implicit
| `-NonNullAttr 0x55e5634fa008 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:361:58> 1
|-FunctionDecl 0x55e5634fa240 <line:366:12> col:12 implicit used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55e5634fa348 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55e5634fa2e8 <<invalid sloc>> Implicit 1057
| `-FormatAttr 0x55e5634fa3b8 <col:12> Implicit printf 1 2
|-FunctionDecl 0x55e5634fa3f0 prev 0x55e5634fa240 <col:1, col:56> col:12 used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55e5634fa120 <col:20, col:43> col:43 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fa4d0 <<invalid sloc>> Inherited Implicit 1057
| `-FormatAttr 0x55e5634fa500 <col:12> Inherited printf 1 2
|-FunctionDecl 0x55e5634fa710 <line:368:12> col:12 implicit sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fa818 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55e5634fa8f0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634fa7b8 <<invalid sloc>> Implicit 1141
| |-FormatAttr 0x55e5634fa968 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55e5634fa9a0 <col:12> Implicit
|-FunctionDecl 0x55e5634fa9c8 prev 0x55e5634fa710 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:368:12 sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fa550 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55e5634fa5d0 <line:369:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634faad8 <<invalid sloc>> Inherited Implicit 1141
| |-FormatAttr 0x55e5634fab08 <line:368:12> Inherited printf 2 3
| `-NoThrowAttr 0x55e5634faa80 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55e5634fae68 </usr/include/stdio.h:375:12> col:12 implicit vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634faf70 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55e5634fafd8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634fb040 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634faf10 <<invalid sloc>> Implicit 1469
| |-FormatAttr 0x55e5634fb0c0 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55e5634fb0f8 <col:12> Implicit
|-FunctionDecl 0x55e5634fb120 prev 0x55e5634fae68 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:375:12 vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fab58 <col:22, col:39> col:39 __s 'FILE *restrict'
| |-ParmVarDecl 0x55e5634fabd8 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634facb0 <line:376:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fb258 <<invalid sloc>> Inherited Implicit 1469
| |-FormatAttr 0x55e5634fb288 <line:375:12> Inherited printf 2 0
| |-NoThrowAttr 0x55e5634fb2c0 <col:12> Inherited Implicit
| `-NonNullAttr 0x55e5634fb1e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:376:43> 1
|-FunctionDecl 0x55e5634fb4e0 <line:381:12> col:12 implicit vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fb5e8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634fb650 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fb588 <<invalid sloc>> Implicit 1454
| |-FormatAttr 0x55e5634fb6c8 <col:12> Implicit printf 1 0
| `-NoThrowAttr 0x55e5634fb700 <col:12> Implicit
|-FunctionDecl 0x55e5634fb728 prev 0x55e5634fb4e0 <col:1, col:74> col:12 vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fb300 <col:21, col:44> col:44 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634fb378 <col:54, col:69> col:69 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fb810 <<invalid sloc>> Inherited Implicit 1454
| |-FormatAttr 0x55e5634fb840 <col:12> Inherited printf 1 0
| `-NoThrowAttr 0x55e5634fb878 <col:12> Inherited Implicit
|-FunctionDecl 0x55e5634fbb88 <line:383:12> col:12 implicit vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fbc90 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55e5634fbcf8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634fbd60 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fbc30 <<invalid sloc>> Implicit 1471
| |-FormatAttr 0x55e5634fbde0 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55e5634fbe18 <col:12> Implicit
|-FunctionDecl 0x55e5634fbe40 prev 0x55e5634fbb88 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:383:12 vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fb900 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55e5634fb980 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634fb9f8 <line:384:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fbf58 <<invalid sloc>> Inherited Implicit 1471
| |-FormatAttr 0x55e5634fbf88 <line:383:12> Inherited printf 2 0
| `-NoThrowAttr 0x55e5634fbf00 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55e5634fc2c0 </usr/include/stdio.h:388:12> col:12 implicit snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fc3c8 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55e5634fc430 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e5634fc498 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634fc368 <<invalid sloc>> Implicit 1209
| |-FormatAttr 0x55e5634fc518 <col:12> Implicit printf 3 4
| `-NoThrowAttr 0x55e5634fc550 <col:12> Implicit
|-FunctionDecl 0x55e5634fc578 prev 0x55e5634fc2c0 <col:1, line:390:62> line:388:12 snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fbfd8 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55e5634fc050 <col:44, col:51> col:51 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e5634fc0d0 <line:389:8, col:31> col:31 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fc6c8 <<invalid sloc>> Inherited Implicit 1209
| |-NoThrowAttr 0x55e5634fc638 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55e5634fc690 </usr/include/stdio.h:390:32, col:60> printf 3 4
|-FunctionDecl 0x55e5634fca90 <line:392:12> col:12 implicit vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fcb98 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55e5634fcc00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e5634fcc68 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634fccd0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fcb38 <<invalid sloc>> Implicit 1473
| |-FormatAttr 0x55e5634fcd58 <col:12> Implicit printf 3 0
| `-NoThrowAttr 0x55e5634fcd90 <col:12> Implicit
|-FunctionDecl 0x55e5634fcdb8 prev 0x55e5634fca90 <col:1, line:394:62> line:392:12 vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fc710 <col:23, col:40> col:40 __s 'char *restrict'
| |-ParmVarDecl 0x55e5634fc788 <col:45, col:52> col:52 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e5634fc808 <line:393:9, col:32> col:32 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634fc880 <col:42, col:57> col:57 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634fcf10 <<invalid sloc>> Inherited Implicit 1473
| |-NoThrowAttr 0x55e5634fce80 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55e5634fced8 </usr/include/stdio.h:394:32, col:60> printf 3 0
|-FunctionDecl 0x55e5634fd1e8 <line:400:1, line:402:62> line:400:12 vasprintf 'int (char **restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fcf58 <col:23, col:41> col:41 __ptr 'char **restrict'
| |-ParmVarDecl 0x55e5634fcfd8 <col:48, col:71> col:71 __f 'const char *restrict'
| |-ParmVarDecl 0x55e5634fd050 <line:401:9, col:24> col:24 __arg 'struct __va_list_tag *'
| |-NoThrowAttr 0x55e5634fd2a8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55e5634fd300 </usr/include/stdio.h:402:32, col:60> printf 2 0
|-FunctionDecl 0x55e5634fd560 <line:403:1, line:405:62> line:403:12 __asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fd350 <col:24, col:42> col:42 __ptr 'char **restrict'
| |-ParmVarDecl 0x55e5634fd3d0 <line:404:10, col:33> col:33 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55e5634fd618 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55e5634fd670 </usr/include/stdio.h:405:32, col:60> printf 2 3
|-FunctionDecl 0x55e5634fd830 <line:406:1, line:408:62> line:406:12 asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fd6c0 <col:22, col:40> col:40 __ptr 'char **restrict'
| |-ParmVarDecl 0x55e5634fd740 <line:407:8, col:31> col:31 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55e5634fd8e8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55e5634fd950 </usr/include/stdio.h:408:32, col:60> printf 2 3
|-FunctionDecl 0x55e5634fdc28 <line:413:1, line:415:52> line:413:12 vdprintf 'int (int, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fd9a0 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55e5634fda20 <col:32, col:55> col:55 __fmt 'const char *restrict'
| |-ParmVarDecl 0x55e5634fda98 <line:414:8, col:23> col:23 __arg 'struct __va_list_tag *'
| `-FormatAttr 0x55e5634fdce8 <line:415:22, col:50> printf 2 0
|-FunctionDecl 0x55e5634fdf70 <line:416:1, line:417:52> line:416:12 dprintf 'int (int, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fdd68 <col:21, col:25> col:25 __fd 'int'
| |-ParmVarDecl 0x55e5634fdde8 <col:31, col:54> col:54 __fmt 'const char *restrict'
| `-FormatAttr 0x55e5634fe028 <line:417:22, col:50> printf 2 3
|-FunctionDecl 0x55e5634fe1e8 <line:425:12> col:12 implicit fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fe2f0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55e5634fe358 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634fe290 <<invalid sloc>> Implicit 560
| `-FormatAttr 0x55e5634fe3d0 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55e5634fe408 prev 0x55e5634fe1e8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:425:12 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fe0a8 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634fe128 <line:426:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fe538 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55e5634fe568 <line:425:12> Inherited scanf 2 3
| `-NonNullAttr 0x55e5634fe4c0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> 1
|-FunctionDecl 0x55e5634fe650 <line:431:12> col:12 implicit scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fe758 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634fe6f8 <<invalid sloc>> Implicit 1162
| `-FormatAttr 0x55e5634fe7c8 <col:12> Implicit scanf 1 2
|-FunctionDecl 0x55e5634fe800 prev 0x55e5634fe650 <col:1, col:55> col:12 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fe5b8 <col:19, col:42> col:42 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fe8e0 <<invalid sloc>> Inherited Implicit 1162
| `-FormatAttr 0x55e5634fe930 <col:12> Inherited scanf 1 2
|-FunctionDecl 0x55e5634feb40 <line:433:12> col:12 implicit sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fec48 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634fecb0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55e5634febe8 <<invalid sloc>> Implicit 1144
| `-FormatAttr 0x55e5634fed28 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55e5634fed60 prev 0x55e5634feb40 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:433:12 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634fe980 <col:20, col:43> col:43 __s 'const char *restrict'
| |-ParmVarDecl 0x55e5634fea00 <line:434:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634fee70 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55e5634feea0 <line:433:12> Inherited scanf 2 3
| `-NoThrowAttr 0x55e5634fee18 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ff098 prev 0x55e5634fe408 </usr/include/stdio.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:466:24 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634feef0 <col:33, col:50> col:50 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e5634fef70 <line:467:5, col:28> col:28 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634ff218 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55e5634ff248 <line:425:12> Inherited scanf 2 3
| |-NonNullAttr 0x55e5634ff280 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> Inherited 1
| |-AsmLabelAttr 0x55e5634ff140 <<scratch space>:51:1> "__isoc99_fscanf" IsLiteralLabel
| `-NonNullAttr 0x55e5634ff1d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:468:46> 1
|-FunctionDecl 0x55e5634ff3e0 prev 0x55e5634fe800 <line:469:1, /usr/include/sys/cdefs.h:410:79> /usr/include/stdio.h:469:24 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634ff2e0 <col:32, col:55> col:55 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634ff510 <<invalid sloc>> Inherited Implicit 1162
| |-FormatAttr 0x55e5634ff540 <line:431:12> Inherited scanf 1 2
| `-AsmLabelAttr 0x55e5634ff488 <<scratch space>:53:1> "__isoc99_scanf" IsLiteralLabel
|-FunctionDecl 0x55e5634ff6e0 prev 0x55e5634fed60 </usr/include/stdio.h:471:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:471:28 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55e5634ff590 <col:37, col:60> col:60 __s 'const char *restrict'
| |-ParmVarDecl 0x55e5634ff610 <line:472:9, col:32> col:32 __format 'const char *restrict'
| |-BuiltinAttr 0x55e5634ff840 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55e5634ff870 <line:433:12> Inherited scanf 2 3
| |-AsmLabelAttr 0x55e5634ff788 <<scratch space>:55:1> "__isoc99_sscanf" IsLiteralLabel
| `-NoThrowAttr 0x55e5634ff818 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e5634ffae8 </usr/include/stdio.h:493:12> col:12 implicit vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634ffbf0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55e5634ffc58 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5634ffcc0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634ffb90 <<invalid sloc>> Implicit 1451
| `-FormatAttr 0x55e5634ffd40 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55e5634ffd78 prev 0x55e5634ffae8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:493:12 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634ff8c0 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-ParmVarDecl 0x55e5634ff958 <col:43, col:66> col:66 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634ff9d0 <line:494:7, col:22> col:22 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5634ffee8 <<invalid sloc>> Inherited Implicit 1451
| |-FormatAttr 0x55e5634ffe38 <line:495:22, col:49> scanf 2 0
| `-NonNullAttr 0x55e5634ffea0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> 1
|-FunctionDecl 0x55e563500098 <line:501:12> col:12 implicit vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5635001a0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e563500208 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e563500140 <<invalid sloc>> Implicit 1461
| `-FormatAttr 0x55e563500280 <col:12> Implicit scanf 1 0
|-FunctionDecl 0x55e5635002b8 prev 0x55e563500098 <col:1, line:502:51> line:501:12 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e5634fff30 <col:20, col:43> col:43 __format 'const char *restrict'
| |-ParmVarDecl 0x55e5634fffa8 <col:53, col:68> col:68 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5635003d8 <<invalid sloc>> Inherited Implicit 1461
| `-FormatAttr 0x55e563500370 <line:502:22, col:49> scanf 1 0
|-FunctionDecl 0x55e5635006f8 <line:505:12> col:12 implicit vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e563500800 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e563500868 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55e5635008d0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5635007a0 <<invalid sloc>> Implicit 1459
| `-FormatAttr 0x55e563500968 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55e5635009a0 prev 0x55e5635006f8 <col:1, line:507:59> line:505:12 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e563500420 <col:21, col:44> col:44 __s 'const char *restrict'
| |-ParmVarDecl 0x55e5635004a0 <line:506:7, col:30> col:30 __format 'const char *restrict'
| |-ParmVarDecl 0x55e563500518 <col:40, col:55> col:55 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e563500af0 <<invalid sloc>> Inherited Implicit 1459
| |-NoThrowAttr 0x55e563500a60 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55e563500ab8 </usr/include/stdio.h:507:30, col:57> scanf 2 0
|-FunctionDecl 0x55e563500d78 prev 0x55e5634ffd78 <line:543:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:543:24 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e563500b38 <line:544:11, col:28> col:28 __s 'FILE *restrict'
| |-ParmVarDecl 0x55e563500bb8 <line:545:4, col:27> col:27 __format 'const char *restrict'
| |-ParmVarDecl 0x55e563500c30 <col:37, col:52> col:52 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e563500f38 <<invalid sloc>> Inherited Implicit 1451
| |-NonNullAttr 0x55e563500f68 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> Inherited 1
| |-AsmLabelAttr 0x55e563500e20 <<scratch space>:59:1> "__isoc99_vfscanf" IsLiteralLabel
| |-FormatAttr 0x55e563500eb8 </usr/include/stdio.h:547:22, col:49> scanf 2 0
| `-NonNullAttr 0x55e563500ef0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:547:72> 1
|-FunctionDecl 0x55e563501158 prev 0x55e5635002b8 <line:548:1, line:550:51> line:548:24 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e563500fc0 <col:33, col:56> col:56 __format 'const char *restrict'
| |-ParmVarDecl 0x55e563501038 <line:549:5, col:20> col:20 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5635012c8 <<invalid sloc>> Inherited Implicit 1461
| |-AsmLabelAttr 0x55e563501200 <<scratch space>:61:1> "__isoc99_vscanf" IsLiteralLabel
| `-FormatAttr 0x55e563501290 </usr/include/stdio.h:550:22, col:49> scanf 1 0
|-FunctionDecl 0x55e563501530 prev 0x55e5635009a0 <line:551:1, line:555:51> line:551:28 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55e563501310 <line:552:8, col:31> col:31 __s 'const char *restrict'
| |-ParmVarDecl 0x55e563501390 <line:553:8, col:31> col:31 __format 'const char *restrict'
| |-ParmVarDecl 0x55e563501408 <line:554:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55e5635016d0 <<invalid sloc>> Inherited Implicit 1459
| |-AsmLabelAttr 0x55e5635015d8 <<scratch space>:63:1> "__isoc99_vsscanf" IsLiteralLabel
| |-NoThrowAttr 0x55e563501670 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55e563501698 </usr/include/stdio.h:555:22, col:49> scanf 2 0
|-FunctionDecl 0x55e5635017d0 <line:578:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:578:12 fgetc 'int (FILE *)' extern
| |-ParmVarDecl 0x55e563501718 <col:19, col:25> col:25 __stream 'FILE *'
| `-NonNullAttr 0x55e563501880 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:578:48> 1
|-FunctionDecl 0x55e563501a18 <line:579:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:579:12 getc 'int (FILE *)' extern
| |-ParmVarDecl 0x55e563501960 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55e563501ac8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:579:47> 1
|-FunctionDecl 0x55e563501c08 <line:585:1, col:25> col:12 getchar 'int (void)' extern
|-FunctionDecl 0x55e563501d80 <line:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:592:12 getc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55e563501cc8 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55e563501e30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:592:56> 1
|-FunctionDecl 0x55e563501f48 <line:593:1, col:34> col:12 getchar_unlocked 'int (void)' extern
|-FunctionDecl 0x55e5635020c0 <line:603:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:603:12 fgetc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55e563502008 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55e563502170 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:603:57> 1
|-FunctionDecl 0x55e5635023c8 <line:611:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:611:12 fputc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e563502200 <col:19, col:23> col:23 __c 'int'
| |-ParmVarDecl 0x55e563502280 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55e563502480 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:611:57> 2
|-FunctionDecl 0x55e563502650 <line:612:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:612:12 putc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e563502510 <col:18, col:22> col:22 __c 'int'
| |-ParmVarDecl 0x55e563502590 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55e563502708 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:612:56> 2
|-FunctionDecl 0x55e563502828 <line:618:1, col:28> col:12 putchar 'int (int)' extern
| `-ParmVarDecl 0x55e563502790 <col:21, col:25> col:25 __c 'int'
|-FunctionDecl 0x55e563502a48 <line:627:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:627:12 fputc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e5635028f0 <col:28, col:32> col:32 __c 'int'
| |-ParmVarDecl 0x55e563502988 <col:37, col:43> col:43 __stream 'FILE *'
| `-NonNullAttr 0x55e563502b00 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:627:66> 2
|-FunctionDecl 0x55e563502cd0 <line:635:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:635:12 putc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e563502b90 <col:27, col:31> col:31 __c 'int'
| |-ParmVarDecl 0x55e563502c10 <col:36, col:42> col:42 __stream 'FILE *'
| `-NonNullAttr 0x55e563502d88 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:635:65> 2
|-FunctionDecl 0x55e563502ea8 <line:636:1, col:37> col:12 putchar_unlocked 'int (int)' extern
| `-ParmVarDecl 0x55e563502e10 <col:30, col:34> col:34 __c 'int'
|-FunctionDecl 0x55e563503028 <line:643:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:643:12 getw 'int (FILE *)' extern
| |-ParmVarDecl 0x55e563502f70 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55e5635030d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:643:47> 1
|-FunctionDecl 0x55e5635032a0 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:646:12 putw 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e563503160 <col:18, col:22> col:22 __w 'int'
| |-ParmVarDecl 0x55e5635031e0 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55e563503358 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:646:56> 2
|-FunctionDecl 0x55e563503648 <line:654:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:654:14 fgets 'char *(char *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55e5635033e0 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55e563503460 <col:43, col:47> col:47 __n 'int'
| |-ParmVarDecl 0x55e5635034e0 <col:52, col:69> col:69 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e563503708 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:655:72> 3
|-FunctionDecl 0x55e563486320 <line:689:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:689:18 __getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55e563503790 <col:30, col:48> col:48 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55e563503810 <line:690:30, col:49> col:49 __n 'size_t *restrict'
| |-ParmVarDecl 0x55e563503890 <col:54, col:58> col:58 __delimiter 'int'
| |-ParmVarDecl 0x55e5634861b0 <line:691:30, col:47> col:47 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e5634863e8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:691:76> 4
|-FunctionDecl 0x55e5634866b8 <line:692:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:692:18 getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55e563486470 <col:28, col:46> col:46 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55e5634864f0 <line:693:28, col:47> col:47 __n 'size_t *restrict'
| |-ParmVarDecl 0x55e563486570 <col:52, col:56> col:56 __delimiter 'int'
| |-ParmVarDecl 0x55e5634865f0 <line:694:28, col:45> col:45 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e563486780 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:694:74> 4
|-FunctionDecl 0x55e563486a70 <line:697:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:697:18 getline '__ssize_t (char **restrict, size_t *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55e563486810 <col:27, col:45> col:45 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55e563486890 <line:698:27, col:46> col:46 __n 'size_t *restrict'
| |-ParmVarDecl 0x55e563486910 <line:699:27, col:44> col:44 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e563486b30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:699:73> 3
|-FunctionDecl 0x55e563486d88 <line:707:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:707:12 fputs 'int (const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55e563486bc0 <col:19, col:42> col:42 __s 'const char *restrict'
| |-ParmVarDecl 0x55e563486c40 <col:47, col:64> col:64 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e563486e40 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:708:16> 2
|-FunctionDecl 0x55e563486f68 <line:714:1, col:33> col:12 puts 'int (const char *)' extern
| `-ParmVarDecl 0x55e563486ed0 <col:18, col:30> col:30 __s 'const char *'
|-FunctionDecl 0x55e5634871c0 <line:721:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:721:12 ungetc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55e563487030 <col:20, col:24> col:24 __c 'int'
| |-ParmVarDecl 0x55e5634870b0 <col:29, col:35> col:35 __stream 'FILE *'
| `-NonNullAttr 0x55e563487278 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:721:58> 2
|-FunctionDecl 0x55e563487630 <line:728:15> col:15 implicit fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55e563487738 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55e5634877a0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e563487808 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e563487870 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55e5634876d8 <<invalid sloc>> Implicit 640
|-FunctionDecl 0x55e5634878f8 prev 0x55e563487630 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:728:15 fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55e563487300 <col:22, col:39> col:39 __ptr 'void *restrict'
| |-ParmVarDecl 0x55e563487378 <col:46, col:53> col:53 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e5634873f0 <line:729:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e563487470 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-BuiltinAttr 0x55e563487a38 <<invalid sloc>> Inherited Implicit 640
| `-NonNullAttr 0x55e5634879c0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:730:15> 4
|-FunctionDecl 0x55e563487db0 <line:735:15> col:15 implicit fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55e563487eb8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55e563487f20 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e563487f88 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55e563487ff0 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55e563487e58 <<invalid sloc>> Implicit 651
|-FunctionDecl 0x55e563488078 prev 0x55e563487db0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:735:15 fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55e563487a80 <col:23, col:46> col:46 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55e563487af8 <col:53, col:60> col:60 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e563487b70 <line:736:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e563487bf0 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-BuiltinAttr 0x55e56350b990 <<invalid sloc>> Inherited Implicit 651
| `-NonNullAttr 0x55e563488140 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:736:55> 4
|-FunctionDecl 0x55e56350bc10 <line:756:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:756:15 fread_unlocked 'size_t (void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55e56350b9d8 <col:31, col:48> col:48 __ptr 'void *restrict'
| |-ParmVarDecl 0x55e56350ba50 <col:55, col:62> col:62 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e56350bac8 <line:757:10, col:17> col:17 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e56350bb48 <col:22, col:39> col:39 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e56350bcd8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:758:16> 4
|-FunctionDecl 0x55e56350bf98 <line:759:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:759:15 fwrite_unlocked 'size_t (const void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55e56350bd60 <col:32, col:55> col:55 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55e56350bdd8 <col:62, col:69> col:69 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e56350be50 <line:760:11, col:18> col:18 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55e56350bed0 <col:23, col:40> col:40 __stream 'FILE *restrict'
| `-NonNullAttr 0x55e56350c060 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:761:16> 4
|-FunctionDecl 0x55e56350c358 <line:769:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:769:12 fseek 'int (FILE *, long, int)' extern
| |-ParmVarDecl 0x55e56350c0f0 <col:19, col:25> col:25 __stream 'FILE *'
| |-ParmVarDecl 0x55e56350c170 <col:35, col:44> col:44 __off 'long'
| |-ParmVarDecl 0x55e56350c1f0 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55e56350c418 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:770:16> 1
|-FunctionDecl 0x55e56350c5d8 <line:775:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:775:17 ftell 'long (FILE *)' extern
| |-ParmVarDecl 0x55e56350c4a0 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55e56350c688 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:775:59> 1
|-FunctionDecl 0x55e56350c7c0 <line:780:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:780:13 rewind 'void (FILE *)' extern
| |-ParmVarDecl 0x55e56350c710 <col:21, col:27> col:27 __stream 'FILE *'
| `-NonNullAttr 0x55e56350c870 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:780:50> 1
|-FunctionDecl 0x55e56350cb38 <line:793:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:793:12 fseeko 'int (FILE *, __off_t, int)' extern
| |-ParmVarDecl 0x55e56350c900 <col:20, col:26> col:26 __stream 'FILE *'
| |-ParmVarDecl 0x55e56350c9a0 <col:36, col:44> col:44 __off '__off_t':'long'
| |-ParmVarDecl 0x55e56350ca20 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55e56350cbf8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:794:16> 1
|-FunctionDecl 0x55e56350cd70 <line:799:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:799:16 ftello '__off_t (FILE *)' extern
| |-ParmVarDecl 0x55e56350cc80 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55e56350ce20 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:799:59> 1
|-FunctionDecl 0x55e56350d138 <line:819:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:819:12 fgetpos 'int (FILE *restrict, fpos_t *restrict)' extern
| |-ParmVarDecl 0x55e56350ceb0 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55e56350cff8 <col:48, col:67> col:67 __pos 'fpos_t *restrict'
| `-NonNullAttr 0x55e56350d1f0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:820:16> 1
|-FunctionDecl 0x55e56350d4a8 <line:825:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:825:12 fsetpos 'int (FILE *, const fpos_t *)' extern
| |-ParmVarDecl 0x55e56350d280 <col:21, col:27> col:27 __stream 'FILE *'
| |-ParmVarDecl 0x55e56350d368 <col:37, col:51> col:51 __pos 'const fpos_t *'
| `-NonNullAttr 0x55e56350d560 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:825:71> 1
|-FunctionDecl 0x55e56350d6a0 <line:850:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:850:13 clearerr 'void (FILE *)' extern
| |-ParmVarDecl 0x55e56350d5f0 <col:23, col:29> col:29 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350d750 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350d7a8 <line:555:57, /usr/include/stdio.h:850:60> 1
|-FunctionDecl 0x55e56350d8b8 <line:852:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:852:12 feof 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350d800 <col:18, col:24> col:24 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350d968 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350d9e0 <line:555:57, /usr/include/stdio.h:852:61> 1
|-FunctionDecl 0x55e56350daf8 <line:854:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:854:12 ferror 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350da40 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350dba8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350dc00 <line:555:57, /usr/include/stdio.h:854:63> 1
|-FunctionDecl 0x55e56350dd10 <line:858:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:858:13 clearerr_unlocked 'void (FILE *)' extern
| |-ParmVarDecl 0x55e56350dc60 <col:32, col:38> col:38 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350ddc0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350de18 <line:555:57, /usr/include/stdio.h:858:69> 1
|-FunctionDecl 0x55e56350df28 <line:859:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:859:12 feof_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350de70 <col:27, col:33> col:33 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350dfd8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350e030 <line:555:57, /usr/include/stdio.h:859:70> 1
|-FunctionDecl 0x55e56350e148 <line:860:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:860:12 ferror_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350e090 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350e1f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350e250 <line:555:57, /usr/include/stdio.h:860:72> 1
|-FunctionDecl 0x55e56350e380 <line:868:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdio.h:868:13 perror 'void (const char *)' extern
| |-ParmVarDecl 0x55e56350e2b0 <col:21, col:33> col:33 __s 'const char *'
| `-ColdAttr 0x55e56350e430 </usr/include/sys/cdefs.h:102:34>
|-FunctionDecl 0x55e56350e558 </usr/include/stdio.h:873:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:873:12 fileno 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350e4a0 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350e608 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350e660 <line:555:57, /usr/include/stdio.h:873:63> 1
|-FunctionDecl 0x55e56350e778 <line:878:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:878:12 fileno_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350e6c0 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350e828 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350e880 <line:555:57, /usr/include/stdio.h:878:72> 1
|-FunctionDecl 0x55e56350e9c0 <line:887:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:887:12 pclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350e8e0 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55e56350ea70 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:887:49> 1
|-FunctionDecl 0x55e56350ec68 <line:893:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:893:14 popen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55e56350eb00 <col:21, col:33> col:33 __command 'const char *'
| |-ParmVarDecl 0x55e56350eb80 <col:44, col:56> col:56 __modes 'const char *'
| `-RestrictAttr 0x55e56350ed20 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55e56350ee38 </usr/include/stdio.h:901:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:901:14 ctermid 'char *(char *)' extern
| |-ParmVarDecl 0x55e56350eda0 <col:23, col:29> col:29 __s 'char *'
| `-NoThrowAttr 0x55e56350eee8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55e56350f008 </usr/include/stdio.h:931:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:931:13 flockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55e56350ef58 <col:24, col:30> col:30 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350f0b8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350f110 <line:555:57, /usr/include/stdio.h:931:61> 1
|-FunctionDecl 0x55e56350f228 <line:935:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:935:12 ftrylockfile 'int (FILE *)' extern
| |-ParmVarDecl 0x55e56350f170 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350f2d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350f330 <line:555:57, /usr/include/stdio.h:935:69> 1
|-FunctionDecl 0x55e56350f440 <line:938:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:938:13 funlockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55e56350f390 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55e56350f4f0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55e56350f548 <line:555:57, /usr/include/stdio.h:938:63> 1
|-FunctionDecl 0x55e56350f638 <line:949:1, col:27> col:12 __uflow 'int (FILE *)' extern
| `-ParmVarDecl 0x55e56350f5a0 <col:21, col:26> col:27 'FILE *'
|-FunctionDecl 0x55e56350f8a8 <line:950:1, col:35> col:12 __overflow 'int (FILE *, int)' extern
| |-ParmVarDecl 0x55e56350f700 <col:24, col:29> col:30 'FILE *'
| `-ParmVarDecl 0x55e56350f780 <col:32> col:35 'int'
|-FunctionDecl 0x55e56350fa90 </usr/include/platform_generic.h:42:1, line:46:1> line:43:1 used platform_main_begin 'void (void)' static
| `-CompoundStmt 0x55e56350fb38 <line:44:1, line:46:1>
|-FunctionDecl 0x55e56350fd60 <line:48:1, line:120:1> line:49:1 used platform_main_end 'void (uint32_t, int)' static
| |-ParmVarDecl 0x55e56350fbc0 <col:19, col:28> col:28 used crc 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e56350fc40 <col:33, col:37> col:37 flag 'int'
| `-CompoundStmt 0x55e56350ff68 <line:50:1, line:120:1>
|   `-CallExpr 0x55e56350fee8 <line:56:2, col:32> 'int'
|     |-ImplicitCastExpr 0x55e56350fed0 <col:2> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x55e56350fe18 <col:2> 'int (const char *, ...)' Function 0x55e5634fa3f0 'printf' 'int (const char *, ...)'
|     |-ImplicitCastExpr 0x55e56350ff38 <col:10> 'const char *' <NoOp>
|     | `-ImplicitCastExpr 0x55e56350ff20 <col:10> 'char *' <ArrayToPointerDecay>
|     |   `-StringLiteral 0x55e56350fe38 <col:10> 'char[15]' lvalue "checksum = %X\n"
|     `-ImplicitCastExpr 0x55e56350ff50 <col:29> 'uint32_t':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55e56350fe60 <col:29> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e56350fbc0 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e563510140 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:25:1> <scratch space>:66:1 safe_unary_minus_func_int8_t_s 'int8_t (int8_t)' static
| |-ParmVarDecl 0x55e56350fff0 </usr/include/safe_math.h:14:38, col:45> col:45 used si 'int8_t':'signed char'
| `-CompoundStmt 0x55e563510280 <line:15:1, line:25:1>
|   `-ReturnStmt 0x55e563510270 <line:17:3, line:24:6>
|     `-ImplicitCastExpr 0x55e563510258 <col:5, col:6> 'int8_t':'signed char' <IntegralCast>
|       `-UnaryOperator 0x55e563510240 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55e563510228 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563510210 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x55e5635101f0 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e56350fff0 'si' 'int8_t':'signed char'
|-FunctionDecl 0x55e563510478 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:39:1> <scratch space>:67:1 safe_add_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55e5635102a8 </usr/include/safe_math.h:28:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563510320 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55e563510638 <line:29:1, line:39:1>
|   `-ReturnStmt 0x55e563510628 <line:31:3, line:38:15>
|     `-ImplicitCastExpr 0x55e563510610 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x55e5635105f0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55e5635105d0 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x55e563510588 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e563510570 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563510530 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e5635102a8 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x55e5635105b8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e5635105a0 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x55e563510550 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55e563510320 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55e563510778 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:53:1> <scratch space>:68:1 safe_sub_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55e563510660 </usr/include/safe_math.h:42:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55e5635106d8 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55e563510938 <line:43:1, line:53:1>
|   `-ReturnStmt 0x55e563510928 <line:45:3, line:52:15>
|     `-ImplicitCastExpr 0x55e563510910 <col:5, col:15> 'int8_t':'signed char' <IntegralCast>
|       `-ParenExpr 0x55e5635108f0 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55e5635108d0 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x55e563510888 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e563510870 <col:6> 'int8_t':'signed char' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563510830 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563510660 'si1' 'int8_t':'signed char'
|           `-ImplicitCastExpr 0x55e5635108b8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e5635108a0 <col:12> 'int8_t':'signed char' <LValueToRValue>
|               `-DeclRefExpr 0x55e563510850 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55e5635106d8 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55e563510a90 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:67:1> <scratch space>:69:1 safe_mul_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55e563510960 </usr/include/safe_math.h:56:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55e5635109f0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55e563510c30 <line:57:1, line:67:1>
|   `-ReturnStmt 0x55e563510c20 <line:59:3, line:66:11>
|     `-ImplicitCastExpr 0x55e563510c08 <col:5, col:11> 'int8_t':'signed char' <IntegralCast>
|       `-BinaryOperator 0x55e563510be8 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x55e563510ba0 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563510b88 <col:5> 'int8_t':'signed char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e563510b48 <col:5> 'int8_t':'signed char' lvalue ParmVar 0x55e563510960 'si1' 'int8_t':'signed char'
|         `-ImplicitCastExpr 0x55e563510bd0 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563510bb8 <col:11> 'int8_t':'signed char' <LValueToRValue>
|             `-DeclRefExpr 0x55e563510b68 <col:11> 'int8_t':'signed char' lvalue ParmVar 0x55e5635109f0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55e563510d70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:79:1> <scratch space>:70:1 safe_mod_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55e563510c58 </usr/include/safe_math.h:70:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563510cd0 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55e5635112f0 <line:71:1, line:79:1>
|   `-ReturnStmt 0x55e5635112e0 <line:73:3, line:78:15>
|     `-ImplicitCastExpr 0x55e5635112c8 <line:75:5, line:78:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e563511298 <line:75:5, line:78:15> 'int'
|         |-ParenExpr 0x55e563511108 <line:75:5, col:56> 'int'
|         | `-BinaryOperator 0x55e5635110e8 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x55e563510eb8 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e563510e98 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55e563510e80 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e563510e68 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e563510e28 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e563510cd0 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55e563510e48 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e5635110c8 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x55e5635110a8 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x55e563510fa0 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x55e563510f80 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55e563510f68 </usr/include/safe_math.h:75:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55e563510f50 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55e563510ed8 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x55e563510c58 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x55e563510f30 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x55e563510f18 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x55e563510ef8 <col:22> 'int' 128
|         |       `-ParenExpr 0x55e563511088 </usr/include/safe_math.h:75:42, col:54> 'int'
|         |         `-BinaryOperator 0x55e563511068 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x55e563511050 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55e563511038 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55e563510fc0 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x55e563510cd0 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x55e563511018 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x55e563511000 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55e563510fe0 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x55e563511280 <line:76:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563511268 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563511168 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563511148 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e563511128 </usr/include/safe_math.h:76:16> 'int8_t':'signed char' lvalue ParmVar 0x55e563510c58 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x55e563511248 <line:78:5, col:15> 'int'
|           `-BinaryOperator 0x55e563511228 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55e5635111e0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e5635111c8 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563511188 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563510c58 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x55e563511210 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e5635111f8 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x55e5635111a8 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55e563510cd0 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55e563511430 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:91:1> <scratch space>:71:1 safe_div_func_int8_t_s_s 'int8_t (int8_t, int8_t)' static
| |-ParmVarDecl 0x55e563511318 </usr/include/safe_math.h:82:32, col:39> col:39 used si1 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563511390 <col:44, col:51> col:51 used si2 'int8_t':'signed char'
| `-CompoundStmt 0x55e5635119b0 <line:83:1, line:91:1>
|   `-ReturnStmt 0x55e5635119a0 <line:85:3, line:90:15>
|     `-ImplicitCastExpr 0x55e563511988 <line:87:5, line:90:15> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e563511958 <line:87:5, line:90:15> 'int'
|         |-ParenExpr 0x55e5635117c8 <line:87:5, col:56> 'int'
|         | `-BinaryOperator 0x55e5635117a8 <col:6, col:55> 'int' '||'
|         |   |-ParenExpr 0x55e563511578 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e563511558 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55e563511540 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e563511528 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e5635114e8 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e563511390 'si2' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55e563511508 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e563511788 <col:20, col:55> 'int'
|         |     `-BinaryOperator 0x55e563511768 <col:21, col:54> 'int' '&&'
|         |       |-ParenExpr 0x55e563511660 <col:21, col:37> 'int'
|         |       | `-BinaryOperator 0x55e563511640 <col:22, /usr/include/stdint.h:105:25> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55e563511628 </usr/include/safe_math.h:87:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55e563511610 <col:22> 'int8_t':'signed char' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55e563511598 <col:22> 'int8_t':'signed char' lvalue ParmVar 0x55e563511318 'si1' 'int8_t':'signed char'
|         |       |   `-ParenExpr 0x55e5635115f0 </usr/include/stdint.h:105:20, col:25> 'int'
|         |       |     `-UnaryOperator 0x55e5635115d8 <col:21, col:22> 'int' prefix '-'
|         |       |       `-IntegerLiteral 0x55e5635115b8 <col:22> 'int' 128
|         |       `-ParenExpr 0x55e563511748 </usr/include/safe_math.h:87:42, col:54> 'int'
|         |         `-BinaryOperator 0x55e563511728 <col:43, col:53> 'int' '=='
|         |           |-ImplicitCastExpr 0x55e563511710 <col:43> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55e5635116f8 <col:43> 'int8_t':'signed char' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55e563511680 <col:43> 'int8_t':'signed char' lvalue ParmVar 0x55e563511390 'si2' 'int8_t':'signed char'
|         |           `-ParenExpr 0x55e5635116d8 <col:50, col:53> 'int'
|         |             `-UnaryOperator 0x55e5635116c0 <col:51, col:52> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55e5635116a0 <col:52> 'int' 1
|         |-ImplicitCastExpr 0x55e563511940 <line:88:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563511928 <col:5, col:20> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563511828 <col:5, col:20> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563511808 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e5635117e8 </usr/include/safe_math.h:88:16> 'int8_t':'signed char' lvalue ParmVar 0x55e563511318 'si1' 'int8_t':'signed char'
|         `-ParenExpr 0x55e563511908 <line:90:5, col:15> 'int'
|           `-BinaryOperator 0x55e5635118e8 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55e5635118a0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563511888 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563511848 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563511318 'si1' 'int8_t':'signed char'
|             `-ImplicitCastExpr 0x55e5635118d0 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e5635118b8 <col:12> 'int8_t':'signed char' <LValueToRValue>
|                 `-DeclRefExpr 0x55e563511868 <col:12> 'int8_t':'signed char' lvalue ParmVar 0x55e563511390 'si2' 'int8_t':'signed char'
|-FunctionDecl 0x55e563511bc8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:103:1> <scratch space>:72:1 safe_lshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x55e5635119f0 </usr/include/safe_math.h:94:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563511a70 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x55e563512358 <line:95:1, line:103:1>
|   `-ReturnStmt 0x55e563512348 <line:97:3, line:102:26>
|     `-ImplicitCastExpr 0x55e563512330 <line:99:5, line:102:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e563512300 <line:99:5, line:102:26> 'int'
|         |-ParenExpr 0x55e563512128 <line:99:5, col:101> 'int'
|         | `-BinaryOperator 0x55e563512108 <col:6, col:100> 'int' '||'
|         |   |-BinaryOperator 0x55e563511f40 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x55e563511e28 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x55e563511d10 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x55e563511cf0 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x55e563511cd8 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x55e563511cc0 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x55e563511c80 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e5635119f0 'left' 'int8_t':'signed char'
|         |   | | |   `-IntegerLiteral 0x55e563511ca0 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x55e563511e08 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x55e563511de8 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x55e563511da8 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x55e563511d80 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x55e563511d68 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x55e563511d30 <col:27> 'int' lvalue ParmVar 0x55e563511a70 'right' 'int'
|         |   | |     `-IntegerLiteral 0x55e563511dc8 <col:36> 'int' 0
|         |   | `-ParenExpr 0x55e563511f20 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x55e563511f00 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x55e563511ec0 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x55e563511e98 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e563511e80 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e563511e48 <col:49> 'int' lvalue ParmVar 0x55e563511a70 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e563511ee0 <col:59> 'int' 32
|         |   `-ParenExpr 0x55e5635120e8 <col:66, col:100> 'int'
|         |     `-BinaryOperator 0x55e5635120c8 <col:67, col:99> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e5635120b0 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563512098 <col:67> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e563511f60 <col:67> 'int8_t':'signed char' lvalue ParmVar 0x55e5635119f0 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x55e563512078 <col:74, col:99> 'int'
|         |         `-BinaryOperator 0x55e563512058 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:99:98> 'int' '>>'
|         |           |-ParenExpr 0x55e563511fa0 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x55e563511f80 <col:21> 'int' 127
|         |           `-ParenExpr 0x55e563512038 </usr/include/safe_math.h:99:87, col:98> 'int'
|         |             `-CStyleCastExpr 0x55e563512010 <col:88, col:93> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563511ff8 <col:93> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563511fc0 <col:93> 'int' lvalue ParmVar 0x55e563511a70 'right' 'int'
|         |-ImplicitCastExpr 0x55e5635122e8 <line:100:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635122d0 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563512188 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563512168 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e563512148 </usr/include/safe_math.h:100:16> 'int8_t':'signed char' lvalue ParmVar 0x55e5635119f0 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55e5635122b0 <line:102:5, col:26> 'int'
|           `-BinaryOperator 0x55e563512290 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55e563512278 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563512260 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e5635121a8 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e5635119f0 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55e563512240 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563512218 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563512200 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e5635121c8 <col:20> 'int' lvalue ParmVar 0x55e563511a70 'right' 'int'
|-FunctionDecl 0x55e563512558 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:115:1> <scratch space>:73:1 safe_lshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x55e563512380 </usr/include/safe_math.h:106:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563512400 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x55e563513c20 <line:107:1, line:115:1>
|   `-ReturnStmt 0x55e563513c10 <line:109:3, line:114:35>
|     `-ImplicitCastExpr 0x55e563513bf8 <line:111:5, line:114:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e563513bc8 <line:111:5, line:114:35> 'int'
|         |-ParenExpr 0x55e5635129b8 <line:111:5, col:97> 'int'
|         | `-BinaryOperator 0x55e563512998 <col:6, col:96> 'int' '||'
|         |   |-BinaryOperator 0x55e5635127d0 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x55e5635126a0 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55e563512680 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55e563512668 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55e563512650 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55e563512610 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e563512380 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x55e563512630 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55e5635127b0 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x55e563512790 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x55e563512738 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x55e563512710 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e5635126f8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e5635126c0 <col:36> 'unsigned int' lvalue ParmVar 0x55e563512400 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x55e563512778 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x55e563512758 <col:46> 'int' 32
|         |   `-ParenExpr 0x55e563512978 <col:53, col:96> 'int'
|         |     `-BinaryOperator 0x55e563512958 <col:54, col:95> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563512940 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563512928 <col:54> 'int8_t':'signed char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e5635127f0 <col:54> 'int8_t':'signed char' lvalue ParmVar 0x55e563512380 'left' 'int8_t':'signed char'
|         |       `-ParenExpr 0x55e563512908 <col:61, col:95> 'int'
|         |         `-BinaryOperator 0x55e5635128e8 </usr/include/stdint.h:110:20, /usr/include/safe_math.h:111:94> 'int' '>>'
|         |           |-ParenExpr 0x55e563512830 </usr/include/stdint.h:110:20, col:24> 'int'
|         |           | `-IntegerLiteral 0x55e563512810 <col:21> 'int' 127
|         |           `-ParenExpr 0x55e5635128c8 </usr/include/safe_math.h:111:74, col:94> 'unsigned int'
|         |             `-CStyleCastExpr 0x55e5635128a0 <col:75, col:89> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563512888 <col:89> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563512850 <col:89> 'unsigned int' lvalue ParmVar 0x55e563512400 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55e563513bb0 <line:112:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563513b98 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563513a50 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563513a30 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e563513a10 </usr/include/safe_math.h:112:16> 'int8_t':'signed char' lvalue ParmVar 0x55e563512380 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55e563513b78 <line:114:5, col:35> 'int'
|           `-BinaryOperator 0x55e563513b58 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55e563513b40 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563513b28 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563513a70 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563512380 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55e563513b08 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e563513ae0 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563513ac8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563513a90 <col:29> 'unsigned int' lvalue ParmVar 0x55e563512400 'right' 'unsigned int'
|-FunctionDecl 0x55e563513d68 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:127:1> <scratch space>:74:1 safe_rshift_func_int8_t_s_s 'int8_t (int8_t, int)' static
| |-ParmVarDecl 0x55e563513c48 </usr/include/safe_math.h:118:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55e563513cc8 <col:48, col:52> col:52 used right 'int'
| `-CompoundStmt 0x55e563514330 <line:119:1, line:127:1>
|   `-ReturnStmt 0x55e563514320 <line:121:3, line:126:26>
|     `-ImplicitCastExpr 0x55e563514308 <line:123:5, line:126:26> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e5635142d8 <line:123:5, line:126:26> 'int'
|         |-ParenExpr 0x55e563514100 <line:123:5, col:62> 'int'
|         | `-BinaryOperator 0x55e5635140e0 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x55e563513fc8 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x55e563513eb0 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55e563513e90 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55e563513e78 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55e563513e60 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55e563513e20 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e563513c48 'left' 'int8_t':'signed char'
|         |   | |   `-IntegerLiteral 0x55e563513e40 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55e563513fa8 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x55e563513f88 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x55e563513f48 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x55e563513f20 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e563513f08 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e563513ed0 <col:27> 'int' lvalue ParmVar 0x55e563513cc8 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e563513f68 <col:36> 'int' 0
|         |   `-ParenExpr 0x55e5635140c0 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x55e5635140a0 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x55e563514060 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x55e563514038 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e563514020 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e563513fe8 <col:49> 'int' lvalue ParmVar 0x55e563513cc8 'right' 'int'
|         |       `-IntegerLiteral 0x55e563514080 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x55e5635142c0 <line:124:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635142a8 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563514160 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563514140 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e563514120 </usr/include/safe_math.h:124:16> 'int8_t':'signed char' lvalue ParmVar 0x55e563513c48 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55e563514288 <line:126:5, col:26> 'int'
|           `-BinaryOperator 0x55e563514268 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55e563514250 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563514238 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563514180 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563513c48 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55e563514218 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e5635141f0 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e5635141d8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e5635141a0 <col:20> 'int' lvalue ParmVar 0x55e563513cc8 'right' 'int'
|-FunctionDecl 0x55e563514478 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:139:1> <scratch space>:75:1 safe_rshift_func_int8_t_s_u 'int8_t (int8_t, unsigned int)' static
| |-ParmVarDecl 0x55e563514358 </usr/include/safe_math.h:130:35, col:42> col:42 used left 'int8_t':'signed char'
| |-ParmVarDecl 0x55e5635143d8 <col:48, col:61> col:61 used right 'unsigned int'
| `-CompoundStmt 0x55e563514940 <line:131:1, line:139:1>
|   `-ReturnStmt 0x55e563514930 <line:133:3, line:138:35>
|     `-ImplicitCastExpr 0x55e563514918 <line:135:5, line:138:35> 'int8_t':'signed char' <IntegralCast>
|       `-ConditionalOperator 0x55e5635148e8 <line:135:5, line:138:35> 'int'
|         |-ParenExpr 0x55e563514710 <line:135:5, col:49> 'int'
|         | `-BinaryOperator 0x55e5635146f0 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x55e5635145c0 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e5635145a0 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x55e563514588 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e563514570 <col:7> 'int8_t':'signed char' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e563514530 <col:7> 'int8_t':'signed char' lvalue ParmVar 0x55e563514358 'left' 'int8_t':'signed char'
|         |   |   `-IntegerLiteral 0x55e563514550 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e5635146d0 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x55e5635146b0 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x55e563514658 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x55e563514630 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e563514618 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e5635145e0 <col:36> 'unsigned int' lvalue ParmVar 0x55e5635143d8 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x55e563514698 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x55e563514678 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x55e5635148d0 <line:136:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635148b8 <col:5, col:21> 'int8_t':'signed char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563514770 <col:5, col:21> 'int8_t':'signed char' lvalue
|         |     `-ParenExpr 0x55e563514750 </usr/include/random_inc.h:79:26, col:32> 'int8_t':'signed char' lvalue
|         |       `-DeclRefExpr 0x55e563514730 </usr/include/safe_math.h:136:16> 'int8_t':'signed char' lvalue ParmVar 0x55e563514358 'left' 'int8_t':'signed char'
|         `-ParenExpr 0x55e563514898 <line:138:5, col:35> 'int'
|           `-BinaryOperator 0x55e563514878 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55e563514860 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563514848 <col:6> 'int8_t':'signed char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563514790 <col:6> 'int8_t':'signed char' lvalue ParmVar 0x55e563514358 'left' 'int8_t':'signed char'
|             `-ParenExpr 0x55e563514828 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e563514800 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e5635147e8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e5635147b0 <col:29> 'unsigned int' lvalue ParmVar 0x55e5635143d8 'right' 'unsigned int'
|-FunctionDecl 0x55e563514b70 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:155:1> <scratch space>:76:1 safe_unary_minus_func_int16_t_s 'int16_t (int16_t)' static
| |-ParmVarDecl 0x55e563514a20 </usr/include/safe_math.h:144:39, col:47> col:47 used si 'int16_t':'short'
| `-CompoundStmt 0x55e563514cb0 <line:145:1, line:155:1>
|   `-ReturnStmt 0x55e563514ca0 <line:147:3, line:154:6>
|     `-ImplicitCastExpr 0x55e563514c88 <col:5, col:6> 'int16_t':'short' <IntegralCast>
|       `-UnaryOperator 0x55e563514c70 <col:5, col:6> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55e563514c58 <col:6> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563514c40 <col:6> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x55e563514c20 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e563514a20 'si' 'int16_t':'short'
|-FunctionDecl 0x55e563514ea8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:169:1> <scratch space>:77:1 safe_add_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55e563514cd8 </usr/include/safe_math.h:158:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55e563514d50 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55e563515068 <line:159:1, line:169:1>
|   `-ReturnStmt 0x55e563515058 <line:161:3, line:168:15>
|     `-ImplicitCastExpr 0x55e563515040 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x55e563515020 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55e563515000 <col:6, col:12> 'int' '+'
|           |-ImplicitCastExpr 0x55e563514fb8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e563514fa0 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563514f60 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e563514cd8 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x55e563514fe8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e563514fd0 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x55e563514f80 <col:12> 'int16_t':'short' lvalue ParmVar 0x55e563514d50 'si2' 'int16_t':'short'
|-FunctionDecl 0x55e5635151a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:183:1> <scratch space>:78:1 safe_sub_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55e563515090 </usr/include/safe_math.h:172:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55e563515108 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55e563515368 <line:173:1, line:183:1>
|   `-ReturnStmt 0x55e563515358 <line:175:3, line:182:15>
|     `-ImplicitCastExpr 0x55e563515340 <col:5, col:15> 'int16_t':'short' <IntegralCast>
|       `-ParenExpr 0x55e563515320 <col:5, col:15> 'int'
|         `-BinaryOperator 0x55e563515300 <col:6, col:12> 'int' '-'
|           |-ImplicitCastExpr 0x55e5635152b8 <col:6> 'int' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e5635152a0 <col:6> 'int16_t':'short' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563515260 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e563515090 'si1' 'int16_t':'short'
|           `-ImplicitCastExpr 0x55e5635152e8 <col:12> 'int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e5635152d0 <col:12> 'int16_t':'short' <LValueToRValue>
|               `-DeclRefExpr 0x55e563515280 <col:12> 'int16_t':'short' lvalue ParmVar 0x55e563515108 'si2' 'int16_t':'short'
|-FunctionDecl 0x55e5635154a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:197:1> <scratch space>:79:1 safe_mul_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55e563515390 </usr/include/safe_math.h:186:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55e563515408 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55e563515648 <line:187:1, line:197:1>
|   `-ReturnStmt 0x55e563515638 <line:189:3, line:196:11>
|     `-ImplicitCastExpr 0x55e563515620 <col:5, col:11> 'int16_t':'short' <IntegralCast>
|       `-BinaryOperator 0x55e563515600 <col:5, col:11> 'int' '*'
|         |-ImplicitCastExpr 0x55e5635155b8 <col:5> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635155a0 <col:5> 'int16_t':'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e563515560 <col:5> 'int16_t':'short' lvalue ParmVar 0x55e563515390 'si1' 'int16_t':'short'
|         `-ImplicitCastExpr 0x55e5635155e8 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e5635155d0 <col:11> 'int16_t':'short' <LValueToRValue>
|             `-DeclRefExpr 0x55e563515580 <col:11> 'int16_t':'short' lvalue ParmVar 0x55e563515408 'si2' 'int16_t':'short'
|-FunctionDecl 0x55e563515788 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:209:1> <scratch space>:80:1 safe_mod_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55e563515670 </usr/include/safe_math.h:200:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55e5635156e8 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55e56340d640 <line:201:1, line:209:1>
|   `-ReturnStmt 0x55e56340d630 <line:203:3, line:208:15>
|     `-ImplicitCastExpr 0x55e56340d618 <line:205:5, line:208:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e56340d5e8 <line:205:5, line:208:15> 'int'
|         |-ParenExpr 0x55e56340d458 <line:205:5, col:57> 'int'
|         | `-BinaryOperator 0x55e56340d438 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x55e5635158d0 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e5635158b0 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55e563515898 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e563515880 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e563515840 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e5635156e8 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55e563515860 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e56340d418 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x55e56340d3f8 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x55e5635159f8 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x55e5635159d8 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55e5635159c0 </usr/include/safe_math.h:205:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55e5635159a8 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55e5635158f0 <col:22> 'int16_t':'short' lvalue ParmVar 0x55e563515670 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x55e563515988 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x55e563515968 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x55e563515930 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x55e563515910 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x55e563515948 <col:29> 'int' 1
|         |       `-ParenExpr 0x55e56340d3d8 </usr/include/safe_math.h:205:43, col:55> 'int'
|         |         `-BinaryOperator 0x55e56340d3b8 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x55e56340d3a0 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55e56340d388 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55e56340d310 <col:44> 'int16_t':'short' lvalue ParmVar 0x55e5635156e8 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x55e56340d368 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x55e56340d350 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55e56340d330 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x55e56340d5d0 <line:206:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56340d5b8 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56340d4b8 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e56340d498 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e56340d478 </usr/include/safe_math.h:206:16> 'int16_t':'short' lvalue ParmVar 0x55e563515670 'si1' 'int16_t':'short'
|         `-ParenExpr 0x55e56340d598 <line:208:5, col:15> 'int'
|           `-BinaryOperator 0x55e56340d578 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55e56340d530 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56340d518 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56340d4d8 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e563515670 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x55e56340d560 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e56340d548 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x55e56340d4f8 <col:12> 'int16_t':'short' lvalue ParmVar 0x55e5635156e8 'si2' 'int16_t':'short'
|-FunctionDecl 0x55e56340d780 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:221:1> <scratch space>:81:1 safe_div_func_int16_t_s_s 'int16_t (int16_t, int16_t)' static
| |-ParmVarDecl 0x55e56340d668 </usr/include/safe_math.h:212:33, col:41> col:41 used si1 'int16_t':'short'
| |-ParmVarDecl 0x55e56340d6e0 <col:46, col:54> col:54 used si2 'int16_t':'short'
| `-CompoundStmt 0x55e56340dd40 <line:213:1, line:221:1>
|   `-ReturnStmt 0x55e56340dd30 <line:215:3, line:220:15>
|     `-ImplicitCastExpr 0x55e56340dd18 <line:217:5, line:220:15> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e56340dce8 <line:217:5, line:220:15> 'int'
|         |-ParenExpr 0x55e56340db58 <line:217:5, col:57> 'int'
|         | `-BinaryOperator 0x55e56340db38 <col:6, col:56> 'int' '||'
|         |   |-ParenExpr 0x55e56340d8c8 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e56340d8a8 <col:7, col:14> 'int' '=='
|         |   |   |-ImplicitCastExpr 0x55e56340d890 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e56340d878 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e56340d838 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e56340d6e0 'si2' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55e56340d858 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e56340db18 <col:20, col:56> 'int'
|         |     `-BinaryOperator 0x55e56340daf8 <col:21, col:55> 'int' '&&'
|         |       |-ParenExpr 0x55e56340d9f0 <col:21, col:38> 'int'
|         |       | `-BinaryOperator 0x55e56340d9d0 <col:22, /usr/include/stdint.h:106:30> 'int' '=='
|         |       |   |-ImplicitCastExpr 0x55e56340d9b8 </usr/include/safe_math.h:217:22> 'int' <IntegralCast>
|         |       |   | `-ImplicitCastExpr 0x55e56340d9a0 <col:22> 'int16_t':'short' <LValueToRValue>
|         |       |   |   `-DeclRefExpr 0x55e56340d8e8 <col:22> 'int16_t':'short' lvalue ParmVar 0x55e56340d668 'si1' 'int16_t':'short'
|         |       |   `-ParenExpr 0x55e56340d980 </usr/include/stdint.h:106:21, col:30> 'int'
|         |       |     `-BinaryOperator 0x55e56340d960 <col:22, col:29> 'int' '-'
|         |       |       |-UnaryOperator 0x55e56340d928 <col:22, col:23> 'int' prefix '-'
|         |       |       | `-IntegerLiteral 0x55e56340d908 <col:23> 'int' 32767
|         |       |       `-IntegerLiteral 0x55e56340d940 <col:29> 'int' 1
|         |       `-ParenExpr 0x55e56340dad8 </usr/include/safe_math.h:217:43, col:55> 'int'
|         |         `-BinaryOperator 0x55e56340dab8 <col:44, col:54> 'int' '=='
|         |           |-ImplicitCastExpr 0x55e56340daa0 <col:44> 'int' <IntegralCast>
|         |           | `-ImplicitCastExpr 0x55e56340da88 <col:44> 'int16_t':'short' <LValueToRValue>
|         |           |   `-DeclRefExpr 0x55e56340da10 <col:44> 'int16_t':'short' lvalue ParmVar 0x55e56340d6e0 'si2' 'int16_t':'short'
|         |           `-ParenExpr 0x55e56340da68 <col:51, col:54> 'int'
|         |             `-UnaryOperator 0x55e56340da50 <col:52, col:53> 'int' prefix '-'
|         |               `-IntegerLiteral 0x55e56340da30 <col:53> 'int' 1
|         |-ImplicitCastExpr 0x55e56340dcd0 <line:218:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56340dcb8 <col:5, col:20> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56340dbb8 <col:5, col:20> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e56340db98 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e56340db78 </usr/include/safe_math.h:218:16> 'int16_t':'short' lvalue ParmVar 0x55e56340d668 'si1' 'int16_t':'short'
|         `-ParenExpr 0x55e56340dc98 <line:220:5, col:15> 'int'
|           `-BinaryOperator 0x55e56340dc78 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55e56340dc30 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56340dc18 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56340dbd8 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e56340d668 'si1' 'int16_t':'short'
|             `-ImplicitCastExpr 0x55e56340dc60 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e56340dc48 <col:12> 'int16_t':'short' <LValueToRValue>
|                 `-DeclRefExpr 0x55e56340dbf8 <col:12> 'int16_t':'short' lvalue ParmVar 0x55e56340d6e0 'si2' 'int16_t':'short'
|-FunctionDecl 0x55e56340df38 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:233:1> <scratch space>:82:1 safe_lshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x55e56340dd68 </usr/include/safe_math.h:224:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55e56340dde8 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e563519df8 <line:225:1, line:233:1>
|   `-ReturnStmt 0x55e563519de8 <line:227:3, line:232:26>
|     `-ImplicitCastExpr 0x55e563519dd0 <line:229:5, line:232:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e563519da0 <line:229:5, line:232:26> 'int'
|         |-ParenExpr 0x55e563519bc8 <line:229:5, col:102> 'int'
|         | `-BinaryOperator 0x55e563519ba8 <col:6, col:101> 'int' '||'
|         |   |-BinaryOperator 0x55e56340e2b0 <col:6, col:61> 'int' '||'
|         |   | |-BinaryOperator 0x55e56340e198 <col:6, col:37> 'int' '||'
|         |   | | |-ParenExpr 0x55e56340e080 <col:6, col:15> 'int'
|         |   | | | `-BinaryOperator 0x55e56340e060 <col:7, col:14> 'int' '<'
|         |   | | |   |-ImplicitCastExpr 0x55e56340e048 <col:7> 'int' <IntegralCast>
|         |   | | |   | `-ImplicitCastExpr 0x55e56340e030 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | | |   |   `-DeclRefExpr 0x55e56340dff0 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e56340dd68 'left' 'int16_t':'short'
|         |   | | |   `-IntegerLiteral 0x55e56340e010 <col:14> 'int' 0
|         |   | | `-ParenExpr 0x55e56340e178 <col:20, col:37> 'int'
|         |   | |   `-BinaryOperator 0x55e56340e158 <col:21, col:36> 'int' '<'
|         |   | |     |-ParenExpr 0x55e56340e118 <col:21, col:32> 'int'
|         |   | |     | `-CStyleCastExpr 0x55e56340e0f0 <col:22, col:27> 'int' <NoOp>
|         |   | |     |   `-ImplicitCastExpr 0x55e56340e0d8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |     |     `-DeclRefExpr 0x55e56340e0a0 <col:27> 'int' lvalue ParmVar 0x55e56340dde8 'right' 'int'
|         |   | |     `-IntegerLiteral 0x55e56340e138 <col:36> 'int' 0
|         |   | `-ParenExpr 0x55e56340e290 <col:42, col:61> 'int'
|         |   |   `-BinaryOperator 0x55e56340e270 <col:43, col:59> 'int' '>='
|         |   |     |-ParenExpr 0x55e56340e230 <col:43, col:54> 'int'
|         |   |     | `-CStyleCastExpr 0x55e56340e208 <col:44, col:49> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e56340e1f0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e56340e1b8 <col:49> 'int' lvalue ParmVar 0x55e56340dde8 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e56340e250 <col:59> 'int' 32
|         |   `-ParenExpr 0x55e563519b88 <col:66, col:101> 'int'
|         |     `-BinaryOperator 0x55e563519b68 <col:67, col:100> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563519b50 <col:67> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563519b38 <col:67> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e56340e2d0 <col:67> 'int16_t':'short' lvalue ParmVar 0x55e56340dd68 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x55e563519b18 <col:74, col:100> 'int'
|         |         `-BinaryOperator 0x55e563519af8 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:229:99> 'int' '>>'
|         |           |-ParenExpr 0x55e563519a40 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x55e56340e2f0 <col:22> 'int' 32767
|         |           `-ParenExpr 0x55e563519ad8 </usr/include/safe_math.h:229:88, col:99> 'int'
|         |             `-CStyleCastExpr 0x55e563519ab0 <col:89, col:94> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563519a98 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563519a60 <col:94> 'int' lvalue ParmVar 0x55e56340dde8 'right' 'int'
|         |-ImplicitCastExpr 0x55e563519d88 <line:230:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563519d70 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e563519c28 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e563519c08 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e563519be8 </usr/include/safe_math.h:230:16> 'int16_t':'short' lvalue ParmVar 0x55e56340dd68 'left' 'int16_t':'short'
|         `-ParenExpr 0x55e563519d50 <line:232:5, col:26> 'int'
|           `-BinaryOperator 0x55e563519d30 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55e563519d18 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563519d00 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563519c48 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e56340dd68 'left' 'int16_t':'short'
|             `-ParenExpr 0x55e563519ce0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563519cb8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563519ca0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563519c68 <col:20> 'int' lvalue ParmVar 0x55e56340dde8 'right' 'int'
|-FunctionDecl 0x55e563519ff8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:245:1> <scratch space>:83:1 safe_lshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x55e563519e20 </usr/include/safe_math.h:236:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55e563519ea0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e56351a688 <line:237:1, line:245:1>
|   `-ReturnStmt 0x55e56351a678 <line:239:3, line:244:35>
|     `-ImplicitCastExpr 0x55e56351a660 <line:241:5, line:244:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e56351a630 <line:241:5, line:244:35> 'int'
|         |-ParenExpr 0x55e56351a458 <line:241:5, col:98> 'int'
|         | `-BinaryOperator 0x55e56351a438 <col:6, col:97> 'int' '||'
|         |   |-BinaryOperator 0x55e56351a270 <col:6, col:48> 'int' '||'
|         |   | |-ParenExpr 0x55e56351a140 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55e56351a120 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55e56351a108 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55e56351a0f0 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55e56351a0b0 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e563519e20 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x55e56351a0d0 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55e56351a250 <col:20, col:48> 'int'
|         |   |   `-BinaryOperator 0x55e56351a230 <col:21, col:46> 'int' '>='
|         |   |     |-ParenExpr 0x55e56351a1d8 <col:21, col:41> 'unsigned int'
|         |   |     | `-CStyleCastExpr 0x55e56351a1b0 <col:22, col:36> 'unsigned int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e56351a198 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e56351a160 <col:36> 'unsigned int' lvalue ParmVar 0x55e563519ea0 'right' 'unsigned int'
|         |   |     `-ImplicitCastExpr 0x55e56351a218 <col:46> 'unsigned int' <IntegralCast>
|         |   |       `-IntegerLiteral 0x55e56351a1f8 <col:46> 'int' 32
|         |   `-ParenExpr 0x55e56351a418 <col:53, col:97> 'int'
|         |     `-BinaryOperator 0x55e56351a3f8 <col:54, col:96> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e56351a3e0 <col:54> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e56351a3c8 <col:54> 'int16_t':'short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e56351a290 <col:54> 'int16_t':'short' lvalue ParmVar 0x55e563519e20 'left' 'int16_t':'short'
|         |       `-ParenExpr 0x55e56351a3a8 <col:61, col:96> 'int'
|         |         `-BinaryOperator 0x55e56351a388 </usr/include/stdint.h:111:21, /usr/include/safe_math.h:241:95> 'int' '>>'
|         |           |-ParenExpr 0x55e56351a2d0 </usr/include/stdint.h:111:21, col:27> 'int'
|         |           | `-IntegerLiteral 0x55e56351a2b0 <col:22> 'int' 32767
|         |           `-ParenExpr 0x55e56351a368 </usr/include/safe_math.h:241:75, col:95> 'unsigned int'
|         |             `-CStyleCastExpr 0x55e56351a340 <col:76, col:90> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e56351a328 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e56351a2f0 <col:90> 'unsigned int' lvalue ParmVar 0x55e563519ea0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55e56351a618 <line:242:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56351a600 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56351a4b8 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e56351a498 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e56351a478 </usr/include/safe_math.h:242:16> 'int16_t':'short' lvalue ParmVar 0x55e563519e20 'left' 'int16_t':'short'
|         `-ParenExpr 0x55e56351a5e0 <line:244:5, col:35> 'int'
|           `-BinaryOperator 0x55e56351a5c0 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55e56351a5a8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56351a590 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56351a4d8 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e563519e20 'left' 'int16_t':'short'
|             `-ParenExpr 0x55e56351a570 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e56351a548 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e56351a530 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e56351a4f8 <col:29> 'unsigned int' lvalue ParmVar 0x55e563519ea0 'right' 'unsigned int'
|-FunctionDecl 0x55e56351a7d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:257:1> <scratch space>:84:1 safe_rshift_func_int16_t_s_s 'int16_t (int16_t, int)' static
| |-ParmVarDecl 0x55e56351a6b0 </usr/include/safe_math.h:248:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55e56351a730 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e56351ad98 <line:249:1, line:257:1>
|   `-ReturnStmt 0x55e56351ad88 <line:251:3, line:256:26>
|     `-ImplicitCastExpr 0x55e56351ad70 <line:253:5, line:256:26> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e56351ad40 <line:253:5, line:256:26> 'int'
|         |-ParenExpr 0x55e56351ab68 <line:253:5, col:62> 'int'
|         | `-BinaryOperator 0x55e56351ab48 <col:6, col:61> 'int' '||'
|         |   |-BinaryOperator 0x55e56351aa30 <col:6, col:37> 'int' '||'
|         |   | |-ParenExpr 0x55e56351a918 <col:6, col:15> 'int'
|         |   | | `-BinaryOperator 0x55e56351a8f8 <col:7, col:14> 'int' '<'
|         |   | |   |-ImplicitCastExpr 0x55e56351a8e0 <col:7> 'int' <IntegralCast>
|         |   | |   | `-ImplicitCastExpr 0x55e56351a8c8 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   | |   |   `-DeclRefExpr 0x55e56351a888 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e56351a6b0 'left' 'int16_t':'short'
|         |   | |   `-IntegerLiteral 0x55e56351a8a8 <col:14> 'int' 0
|         |   | `-ParenExpr 0x55e56351aa10 <col:20, col:37> 'int'
|         |   |   `-BinaryOperator 0x55e56351a9f0 <col:21, col:36> 'int' '<'
|         |   |     |-ParenExpr 0x55e56351a9b0 <col:21, col:32> 'int'
|         |   |     | `-CStyleCastExpr 0x55e56351a988 <col:22, col:27> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e56351a970 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e56351a938 <col:27> 'int' lvalue ParmVar 0x55e56351a730 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e56351a9d0 <col:36> 'int' 0
|         |   `-ParenExpr 0x55e56351ab28 <col:42, col:61> 'int'
|         |     `-BinaryOperator 0x55e56351ab08 <col:43, col:59> 'int' '>='
|         |       |-ParenExpr 0x55e56351aac8 <col:43, col:54> 'int'
|         |       | `-CStyleCastExpr 0x55e56351aaa0 <col:44, col:49> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e56351aa88 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e56351aa50 <col:49> 'int' lvalue ParmVar 0x55e56351a730 'right' 'int'
|         |       `-IntegerLiteral 0x55e56351aae8 <col:59> 'int' 32
|         |-ImplicitCastExpr 0x55e56351ad28 <line:254:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56351ad10 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56351abc8 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e56351aba8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e56351ab88 </usr/include/safe_math.h:254:16> 'int16_t':'short' lvalue ParmVar 0x55e56351a6b0 'left' 'int16_t':'short'
|         `-ParenExpr 0x55e56351acf0 <line:256:5, col:26> 'int'
|           `-BinaryOperator 0x55e56351acd0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55e56351acb8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56351aca0 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56351abe8 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e56351a6b0 'left' 'int16_t':'short'
|             `-ParenExpr 0x55e56351ac80 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e56351ac58 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e56351ac40 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e56351ac08 <col:20> 'int' lvalue ParmVar 0x55e56351a730 'right' 'int'
|-FunctionDecl 0x55e56351aee0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:269:1> <scratch space>:85:1 safe_rshift_func_int16_t_s_u 'int16_t (int16_t, unsigned int)' static
| |-ParmVarDecl 0x55e56351adc0 </usr/include/safe_math.h:260:36, col:44> col:44 used left 'int16_t':'short'
| |-ParmVarDecl 0x55e56351ae40 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e56351b3a8 <line:261:1, line:269:1>
|   `-ReturnStmt 0x55e56351b398 <line:263:3, line:268:35>
|     `-ImplicitCastExpr 0x55e56351b380 <line:265:5, line:268:35> 'int16_t':'short' <IntegralCast>
|       `-ConditionalOperator 0x55e56351b350 <line:265:5, line:268:35> 'int'
|         |-ParenExpr 0x55e56351b178 <line:265:5, col:49> 'int'
|         | `-BinaryOperator 0x55e56351b158 <col:6, col:48> 'int' '||'
|         |   |-ParenExpr 0x55e56351b028 <col:6, col:15> 'int'
|         |   | `-BinaryOperator 0x55e56351b008 <col:7, col:14> 'int' '<'
|         |   |   |-ImplicitCastExpr 0x55e56351aff0 <col:7> 'int' <IntegralCast>
|         |   |   | `-ImplicitCastExpr 0x55e56351afd8 <col:7> 'int16_t':'short' <LValueToRValue>
|         |   |   |   `-DeclRefExpr 0x55e56351af98 <col:7> 'int16_t':'short' lvalue ParmVar 0x55e56351adc0 'left' 'int16_t':'short'
|         |   |   `-IntegerLiteral 0x55e56351afb8 <col:14> 'int' 0
|         |   `-ParenExpr 0x55e56351b138 <col:20, col:48> 'int'
|         |     `-BinaryOperator 0x55e56351b118 <col:21, col:46> 'int' '>='
|         |       |-ParenExpr 0x55e56351b0c0 <col:21, col:41> 'unsigned int'
|         |       | `-CStyleCastExpr 0x55e56351b098 <col:22, col:36> 'unsigned int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e56351b080 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e56351b048 <col:36> 'unsigned int' lvalue ParmVar 0x55e56351ae40 'right' 'unsigned int'
|         |       `-ImplicitCastExpr 0x55e56351b100 <col:46> 'unsigned int' <IntegralCast>
|         |         `-IntegerLiteral 0x55e56351b0e0 <col:46> 'int' 32
|         |-ImplicitCastExpr 0x55e56351b338 <line:266:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56351b320 <col:5, col:21> 'int16_t':'short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56351b1d8 <col:5, col:21> 'int16_t':'short' lvalue
|         |     `-ParenExpr 0x55e56351b1b8 </usr/include/random_inc.h:79:26, col:32> 'int16_t':'short' lvalue
|         |       `-DeclRefExpr 0x55e56351b198 </usr/include/safe_math.h:266:16> 'int16_t':'short' lvalue ParmVar 0x55e56351adc0 'left' 'int16_t':'short'
|         `-ParenExpr 0x55e56351b300 <line:268:5, col:35> 'int'
|           `-BinaryOperator 0x55e56351b2e0 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55e56351b2c8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56351b2b0 <col:6> 'int16_t':'short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56351b1f8 <col:6> 'int16_t':'short' lvalue ParmVar 0x55e56351adc0 'left' 'int16_t':'short'
|             `-ParenExpr 0x55e56351b290 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e56351b268 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e56351b250 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e56351b218 <col:29> 'unsigned int' lvalue ParmVar 0x55e56351ae40 'right' 'unsigned int'
|-FunctionDecl 0x55e56351b540 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:285:1> <scratch space>:86:1 safe_unary_minus_func_int32_t_s 'int32_t (int32_t)' static
| |-ParmVarDecl 0x55e56351b430 </usr/include/safe_math.h:274:39, col:47> col:47 used si 'int32_t':'int'
| `-CompoundStmt 0x55e56351b808 <line:275:1, line:285:1>
|   `-ReturnStmt 0x55e56351b7f8 <line:277:3, line:284:6>
|     `-ConditionalOperator 0x55e56351b7c8 <line:280:5, line:284:6> 'int32_t':'int'
|       |-ParenExpr 0x55e56351b6e0 <line:280:5, col:19> 'int'
|       | `-BinaryOperator 0x55e56351b6c0 <col:6, /usr/include/stdint.h:107:35> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e56351b6a8 </usr/include/safe_math.h:280:6> 'int32_t':'int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e56351b5f0 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351b430 'si' 'int32_t':'int'
|       |   `-ParenExpr 0x55e56351b688 </usr/include/stdint.h:107:21, col:35> 'int'
|       |     `-BinaryOperator 0x55e56351b668 <col:22, col:34> 'int' '-'
|       |       |-UnaryOperator 0x55e56351b630 <col:22, col:23> 'int' prefix '-'
|       |       | `-IntegerLiteral 0x55e56351b610 <col:23> 'int' 2147483647
|       |       `-IntegerLiteral 0x55e56351b648 <col:34> 'int' 1
|       |-ImplicitCastExpr 0x55e56351b7b0 </usr/include/safe_math.h:281:5, col:19> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351b740 <col:5, col:19> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351b720 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351b700 </usr/include/safe_math.h:281:16> 'int32_t':'int' lvalue ParmVar 0x55e56351b430 'si' 'int32_t':'int'
|       `-UnaryOperator 0x55e56351b798 <line:284:5, col:6> 'int32_t':'int' prefix '-'
|         `-ImplicitCastExpr 0x55e56351b780 <col:6> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x55e56351b760 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351b430 'si' 'int32_t':'int'
|-FunctionDecl 0x55e56351ba50 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:299:1> <scratch space>:87:1 safe_add_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55e56351b830 </usr/include/safe_math.h:288:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55e56351b8a8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55e56351c288 <line:289:1, line:299:1>
|   `-ReturnStmt 0x55e56351c278 <line:291:3, line:298:15>
|     `-ConditionalOperator 0x55e56351c248 <line:294:5, line:298:15> 'int32_t':'int'
|       |-ParenExpr 0x55e56351c100 <line:294:5, col:104> 'int'
|       | `-BinaryOperator 0x55e56351c0e0 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x55e56351bda8 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x55e56351bd88 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x55e56351bc38 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x55e56351bb80 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x55e56351bb60 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x55e56351bb48 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x55e56351bb08 <col:8> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|       |   |   | |   `-IntegerLiteral 0x55e56351bb28 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x55e56351bc18 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x55e56351bbf8 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x55e56351bbe0 <col:19> 'int32_t':'int' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x55e56351bba0 <col:19> 'int32_t':'int' lvalue ParmVar 0x55e56351b8a8 'si2' 'int32_t':'int'
|       |   |   |     `-IntegerLiteral 0x55e56351bbc0 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x55e56351bd68 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x55e56351bd48 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x55e56351bd30 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x55e56351bc58 <col:30> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|       |   |       `-ParenExpr 0x55e56351bd10 <col:36, col:50> 'int'
|       |   |         `-BinaryOperator 0x55e56351bcf0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:294:47> 'int' '-'
|       |   |           |-ParenExpr 0x55e56351bc98 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   |           | `-IntegerLiteral 0x55e56351bc78 <col:22> 'int' 2147483647
|       |   |           `-ImplicitCastExpr 0x55e56351bcd8 </usr/include/safe_math.h:294:47> 'int32_t':'int' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x55e56351bcb8 <col:47> 'int32_t':'int' lvalue ParmVar 0x55e56351b8a8 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x55e56351c0c0 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x55e56351c0a0 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x55e56351bef8 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x55e56351be40 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x55e56351be20 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x55e56351be08 <col:59> 'int32_t':'int' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x55e56351bdc8 <col:59> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|       |       | |   `-IntegerLiteral 0x55e56351bde8 <col:63> 'int' 0
|       |       | `-ParenExpr 0x55e56351bed8 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x55e56351beb8 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x55e56351bea0 <col:70> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55e56351be60 <col:70> 'int32_t':'int' lvalue ParmVar 0x55e56351b8a8 'si2' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x55e56351be80 <col:74> 'int' 0
|       |       `-ParenExpr 0x55e56351c080 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x55e56351c060 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x55e56351c048 <col:81> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e56351bf18 <col:81> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|       |           `-ParenExpr 0x55e56351c028 <col:87, col:101> 'int'
|       |             `-BinaryOperator 0x55e56351c008 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:294:98> 'int' '-'
|       |               |-ParenExpr 0x55e56351bfb0 </usr/include/stdint.h:107:21, col:35> 'int'
|       |               | `-BinaryOperator 0x55e56351bf90 <col:22, col:34> 'int' '-'
|       |               |   |-UnaryOperator 0x55e56351bf58 <col:22, col:23> 'int' prefix '-'
|       |               |   | `-IntegerLiteral 0x55e56351bf38 <col:23> 'int' 2147483647
|       |               |   `-IntegerLiteral 0x55e56351bf70 <col:34> 'int' 1
|       |               `-ImplicitCastExpr 0x55e56351bff0 </usr/include/safe_math.h:294:98> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55e56351bfd0 <col:98> 'int32_t':'int' lvalue ParmVar 0x55e56351b8a8 'si2' 'int32_t':'int'
|       |-ImplicitCastExpr 0x55e56351c230 <line:295:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351c160 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351c140 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351c120 </usr/include/safe_math.h:295:16> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55e56351c210 <line:298:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351c1f0 <col:6, col:12> 'int32_t':'int' '+'
|           |-ImplicitCastExpr 0x55e56351c1c0 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351c180 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351b830 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55e56351c1d8 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55e56351c1a0 <col:12> 'int32_t':'int' lvalue ParmVar 0x55e56351b8a8 'si2' 'int32_t':'int'
|-FunctionDecl 0x55e56351c3c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:313:1> <scratch space>:88:1 safe_sub_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55e56351c2b0 </usr/include/safe_math.h:302:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55e56351c328 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55e56351ca08 <line:303:1, line:313:1>
|   `-ReturnStmt 0x55e56351c9f8 <line:305:3, line:312:15>
|     `-ConditionalOperator 0x55e56351c9c8 <line:308:5, line:312:15> 'int32_t':'int'
|       |-ParenExpr 0x55e56351c880 <line:308:5, col:70> 'int'
|       | `-BinaryOperator 0x55e56351c860 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x55e56351c820 <col:6, col:65> 'int'
|       |   | `-BinaryOperator 0x55e56351c800 <col:7, col:64> 'int' '&'
|       |   |   |-ParenExpr 0x55e56351c510 <col:7, col:15> 'int32_t':'int'
|       |   |   | `-BinaryOperator 0x55e56351c4f0 <col:8, col:12> 'int32_t':'int' '^'
|       |   |   |   |-ImplicitCastExpr 0x55e56351c4c0 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x55e56351c480 <col:8> 'int32_t':'int' lvalue ParmVar 0x55e56351c2b0 'si1' 'int32_t':'int'
|       |   |   |   `-ImplicitCastExpr 0x55e56351c4d8 <col:12> 'int32_t':'int' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e56351c4a0 <col:12> 'int32_t':'int' lvalue ParmVar 0x55e56351c328 'si2' 'int32_t':'int'
|       |   |   `-ParenExpr 0x55e56351c7e0 <col:19, col:64> 'int'
|       |   |     `-BinaryOperator 0x55e56351c7c0 <col:20, col:61> 'int' '^'
|       |   |       |-ParenExpr 0x55e56351c768 <col:20, col:59> 'int'
|       |   |       | `-BinaryOperator 0x55e56351c748 <col:21, col:56> 'int' '-'
|       |   |       |   |-ParenExpr 0x55e56351c6f0 <col:21, col:54> 'int'
|       |   |       |   | `-BinaryOperator 0x55e56351c6d0 <col:22, col:53> 'int' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x55e56351c6b8 <col:22> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x55e56351c530 <col:22> 'int32_t':'int' lvalue ParmVar 0x55e56351c2b0 'si1' 'int32_t':'int'
|       |   |       |   |   `-ParenExpr 0x55e56351c698 <col:28, col:53> 'int'
|       |   |       |   |     `-BinaryOperator 0x55e56351c678 <col:29, col:52> 'int' '&'
|       |   |       |   |       |-ParenExpr 0x55e56351c5e0 <col:29, col:37> 'int32_t':'int'
|       |   |       |   |       | `-BinaryOperator 0x55e56351c5c0 <col:30, col:34> 'int32_t':'int' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x55e56351c590 <col:30> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x55e56351c550 <col:30> 'int32_t':'int' lvalue ParmVar 0x55e56351c2b0 'si1' 'int32_t':'int'
|       |   |       |   |       |   `-ImplicitCastExpr 0x55e56351c5a8 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x55e56351c570 <col:34> 'int32_t':'int' lvalue ParmVar 0x55e56351c328 'si2' 'int32_t':'int'
|       |   |       |   |       `-ParenExpr 0x55e56351c658 <col:41, col:52> 'int'
|       |   |       |   |         `-UnaryOperator 0x55e56351c640 <col:42, /usr/include/stdint.h:112:32> 'int' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x55e56351c620 <col:21, col:32> 'int'
|       |   |       |   |             `-IntegerLiteral 0x55e56351c600 <col:22> 'int' 2147483647
|       |   |       |   `-ImplicitCastExpr 0x55e56351c730 </usr/include/safe_math.h:308:56> 'int32_t':'int' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x55e56351c710 <col:56> 'int32_t':'int' lvalue ParmVar 0x55e56351c328 'si2' 'int32_t':'int'
|       |   |       `-ImplicitCastExpr 0x55e56351c7a8 <col:61> 'int32_t':'int' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e56351c788 <col:61> 'int32_t':'int' lvalue ParmVar 0x55e56351c328 'si2' 'int32_t':'int'
|       |   `-IntegerLiteral 0x55e56351c840 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x55e56351c9b0 <line:309:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351c8e0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351c8c0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351c8a0 </usr/include/safe_math.h:309:16> 'int32_t':'int' lvalue ParmVar 0x55e56351c2b0 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55e56351c990 <line:312:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351c970 <col:6, col:12> 'int32_t':'int' '-'
|           |-ImplicitCastExpr 0x55e56351c940 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351c900 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351c2b0 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55e56351c958 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55e56351c920 <col:12> 'int32_t':'int' lvalue ParmVar 0x55e56351c328 'si2' 'int32_t':'int'
|-FunctionDecl 0x55e56351cb48 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:327:1> <scratch space>:89:1 safe_mul_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55e56351ca30 </usr/include/safe_math.h:316:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55e56351caa8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55e56351da30 <line:317:1, line:327:1>
|   `-ReturnStmt 0x55e56351da20 <line:319:3, line:326:11>
|     `-ConditionalOperator 0x55e56351d9f0 <line:322:5, line:326:11> 'int32_t':'int'
|       |-ParenExpr 0x55e56351d8c8 <line:322:5, col:248> 'int'
|       | `-BinaryOperator 0x55e56351d8a8 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x55e56351d510 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x55e56351d1d8 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x55e56351cea0 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x55e56351ce80 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x55e56351cd30 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x55e56351cc78 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x55e56351cc58 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x55e56351cc40 <col:8> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x55e56351cc00 <col:8> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   | | |   | |   `-IntegerLiteral 0x55e56351cc20 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x55e56351cd10 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x55e56351ccf0 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x55e56351ccd8 <col:21> 'int32_t':'int' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x55e56351cc98 <col:21> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   | | |   |     `-IntegerLiteral 0x55e56351ccb8 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x55e56351ce60 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x55e56351ce40 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x55e56351ce28 <col:34> 'int32_t':'int' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x55e56351cd50 <col:34> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   | | |       `-ParenExpr 0x55e56351ce08 <col:40, col:56> 'int'
|       |   | | |         `-BinaryOperator 0x55e56351cde8 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:53> 'int' '/'
|       |   | | |           |-ParenExpr 0x55e56351cd90 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   | | |           | `-IntegerLiteral 0x55e56351cd70 <col:22> 'int' 2147483647
|       |   | | |           `-ImplicitCastExpr 0x55e56351cdd0 </usr/include/safe_math.h:322:53> 'int32_t':'int' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x55e56351cdb0 <col:53> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   | | `-ParenExpr 0x55e56351d1b8 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x55e56351d198 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x55e56351cff0 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x55e56351cf38 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x55e56351cf18 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x55e56351cf00 <col:65> 'int32_t':'int' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x55e56351cec0 <col:65> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   | |     | |   `-IntegerLiteral 0x55e56351cee0 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x55e56351cfd0 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x55e56351cfb0 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x55e56351cf98 <col:78> 'int32_t':'int' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x55e56351cf58 <col:78> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   | |     |     `-IntegerLiteral 0x55e56351cf78 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x55e56351d178 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x55e56351d158 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x55e56351d140 <col:92> 'int32_t':'int' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x55e56351d010 <col:92> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   | |         `-ParenExpr 0x55e56351d120 <col:98, col:114> 'int'
|       |   | |           `-BinaryOperator 0x55e56351d100 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:111> 'int' '/'
|       |   | |             |-ParenExpr 0x55e56351d0a8 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   | |             | `-BinaryOperator 0x55e56351d088 <col:22, col:34> 'int' '-'
|       |   | |             |   |-UnaryOperator 0x55e56351d050 <col:22, col:23> 'int' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x55e56351d030 <col:23> 'int' 2147483647
|       |   | |             |   `-IntegerLiteral 0x55e56351d068 <col:34> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x55e56351d0e8 </usr/include/safe_math.h:322:111> 'int32_t':'int' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x55e56351d0c8 <col:111> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   | `-ParenExpr 0x55e56351d4f0 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x55e56351d4d0 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x55e56351d328 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x55e56351d270 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x55e56351d250 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x55e56351d238 <col:123> 'int32_t':'int' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x55e56351d1f8 <col:123> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   |     | |   `-IntegerLiteral 0x55e56351d218 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x55e56351d308 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x55e56351d2e8 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x55e56351d2d0 <col:137> 'int32_t':'int' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x55e56351d290 <col:137> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   |     |     `-IntegerLiteral 0x55e56351d2b0 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x55e56351d4b0 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x55e56351d490 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x55e56351d478 <col:150> 'int32_t':'int' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x55e56351d348 <col:150> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |   |         `-ParenExpr 0x55e56351d458 <col:156, col:172> 'int'
|       |   |           `-BinaryOperator 0x55e56351d438 </usr/include/stdint.h:107:21, /usr/include/safe_math.h:322:169> 'int' '/'
|       |   |             |-ParenExpr 0x55e56351d3e0 </usr/include/stdint.h:107:21, col:35> 'int'
|       |   |             | `-BinaryOperator 0x55e56351d3c0 <col:22, col:34> 'int' '-'
|       |   |             |   |-UnaryOperator 0x55e56351d388 <col:22, col:23> 'int' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x55e56351d368 <col:23> 'int' 2147483647
|       |   |             |   `-IntegerLiteral 0x55e56351d3a0 <col:34> 'int' 1
|       |   |             `-ImplicitCastExpr 0x55e56351d420 </usr/include/safe_math.h:322:169> 'int32_t':'int' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x55e56351d400 <col:169> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |   `-ParenExpr 0x55e56351d888 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x55e56351d868 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x55e56351d718 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x55e56351d660 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x55e56351d5a8 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x55e56351d588 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x55e56351d570 <col:181> 'int32_t':'int' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x55e56351d530 <col:181> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |       | | |   `-IntegerLiteral 0x55e56351d550 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x55e56351d640 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x55e56351d620 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x55e56351d608 <col:195> 'int32_t':'int' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x55e56351d5c8 <col:195> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |       | |     `-IntegerLiteral 0x55e56351d5e8 <col:202> 'int' 0
|       |       | `-ParenExpr 0x55e56351d6f8 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x55e56351d6d8 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x55e56351d6c0 <col:209> 'int32_t':'int' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55e56351d680 <col:209> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |       |     `-IntegerLiteral 0x55e56351d6a0 <col:216> 'int' 0
|       |       `-ParenExpr 0x55e56351d848 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x55e56351d828 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x55e56351d810 <col:223> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e56351d738 <col:223> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55e56351d7f0 <col:229, col:245> 'int'
|       |             `-BinaryOperator 0x55e56351d7d0 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:322:242> 'int' '/'
|       |               |-ParenExpr 0x55e56351d778 </usr/include/stdint.h:112:21, col:32> 'int'
|       |               | `-IntegerLiteral 0x55e56351d758 <col:22> 'int' 2147483647
|       |               `-ImplicitCastExpr 0x55e56351d7b8 </usr/include/safe_math.h:322:242> 'int32_t':'int' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55e56351d798 <col:242> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       |-ImplicitCastExpr 0x55e56351d9d8 <line:323:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351d928 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351d908 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351d8e8 </usr/include/safe_math.h:323:16> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|       `-BinaryOperator 0x55e56351d9b8 <line:326:5, col:11> 'int32_t':'int' '*'
|         |-ImplicitCastExpr 0x55e56351d988 <col:5> 'int32_t':'int' <LValueToRValue>
|         | `-DeclRefExpr 0x55e56351d948 <col:5> 'int32_t':'int' lvalue ParmVar 0x55e56351ca30 'si1' 'int32_t':'int'
|         `-ImplicitCastExpr 0x55e56351d9a0 <col:11> 'int32_t':'int' <LValueToRValue>
|           `-DeclRefExpr 0x55e56351d968 <col:11> 'int32_t':'int' lvalue ParmVar 0x55e56351caa8 'si2' 'int32_t':'int'
|-FunctionDecl 0x55e56351db88 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:339:1> <scratch space>:90:1 safe_mod_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55e56351da70 </usr/include/safe_math.h:330:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55e56351dae8 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55e56351e0a0 <line:331:1, line:339:1>
|   `-ReturnStmt 0x55e56351e090 <line:333:3, line:338:15>
|     `-ConditionalOperator 0x55e56351e060 <line:335:5, line:338:15> 'int32_t':'int'
|       |-ParenExpr 0x55e56351df18 <line:335:5, col:57> 'int'
|       | `-BinaryOperator 0x55e56351def8 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55e56351dcb8 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e56351dc98 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55e56351dc80 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e56351dc40 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351dae8 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55e56351dc60 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e56351ded8 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55e56351deb8 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55e56351ddc8 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55e56351dda8 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55e56351dd90 </usr/include/safe_math.h:335:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55e56351dcd8 <col:22> 'int32_t':'int' lvalue ParmVar 0x55e56351da70 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x55e56351dd70 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x55e56351dd50 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x55e56351dd18 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x55e56351dcf8 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x55e56351dd30 <col:34> 'int' 1
|       |       `-ParenExpr 0x55e56351de98 </usr/include/safe_math.h:335:43, col:55> 'int'
|       |         `-BinaryOperator 0x55e56351de78 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55e56351de60 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e56351dde8 <col:44> 'int32_t':'int' lvalue ParmVar 0x55e56351dae8 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55e56351de40 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x55e56351de28 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x55e56351de08 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55e56351e048 <line:336:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351df78 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351df58 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351df38 </usr/include/safe_math.h:336:16> 'int32_t':'int' lvalue ParmVar 0x55e56351da70 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55e56351e028 <line:338:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351e008 <col:6, col:12> 'int32_t':'int' '%'
|           |-ImplicitCastExpr 0x55e56351dfd8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351df98 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351da70 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55e56351dff0 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55e56351dfb8 <col:12> 'int32_t':'int' lvalue ParmVar 0x55e56351dae8 'si2' 'int32_t':'int'
|-FunctionDecl 0x55e56351e1e0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:351:1> <scratch space>:91:1 safe_div_func_int32_t_s_s 'int32_t (int32_t, int32_t)' static
| |-ParmVarDecl 0x55e56351e0c8 </usr/include/safe_math.h:342:33, col:41> col:41 used si1 'int32_t':'int'
| |-ParmVarDecl 0x55e56351e140 <col:46, col:54> col:54 used si2 'int32_t':'int'
| `-CompoundStmt 0x55e56351e6f8 <line:343:1, line:351:1>
|   `-ReturnStmt 0x55e56351e6e8 <line:345:3, line:350:15>
|     `-ConditionalOperator 0x55e56351e6b8 <line:347:5, line:350:15> 'int32_t':'int'
|       |-ParenExpr 0x55e56351e570 <line:347:5, col:57> 'int'
|       | `-BinaryOperator 0x55e56351e550 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55e56351e310 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e56351e2f0 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55e56351e2d8 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e56351e298 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351e140 'si2' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55e56351e2b8 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e56351e530 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55e56351e510 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55e56351e420 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55e56351e400 <col:22, /usr/include/stdint.h:107:35> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55e56351e3e8 </usr/include/safe_math.h:347:22> 'int32_t':'int' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55e56351e330 <col:22> 'int32_t':'int' lvalue ParmVar 0x55e56351e0c8 'si1' 'int32_t':'int'
|       |       |   `-ParenExpr 0x55e56351e3c8 </usr/include/stdint.h:107:21, col:35> 'int'
|       |       |     `-BinaryOperator 0x55e56351e3a8 <col:22, col:34> 'int' '-'
|       |       |       |-UnaryOperator 0x55e56351e370 <col:22, col:23> 'int' prefix '-'
|       |       |       | `-IntegerLiteral 0x55e56351e350 <col:23> 'int' 2147483647
|       |       |       `-IntegerLiteral 0x55e56351e388 <col:34> 'int' 1
|       |       `-ParenExpr 0x55e56351e4f0 </usr/include/safe_math.h:347:43, col:55> 'int'
|       |         `-BinaryOperator 0x55e56351e4d0 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55e56351e4b8 <col:44> 'int32_t':'int' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e56351e440 <col:44> 'int32_t':'int' lvalue ParmVar 0x55e56351e140 'si2' 'int32_t':'int'
|       |           `-ParenExpr 0x55e56351e498 <col:51, col:54> 'int'
|       |             `-UnaryOperator 0x55e56351e480 <col:52, col:53> 'int' prefix '-'
|       |               `-IntegerLiteral 0x55e56351e460 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55e56351e6a0 <line:348:5, col:20> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351e5d0 <col:5, col:20> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351e5b0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351e590 </usr/include/safe_math.h:348:16> 'int32_t':'int' lvalue ParmVar 0x55e56351e0c8 'si1' 'int32_t':'int'
|       `-ParenExpr 0x55e56351e680 <line:350:5, col:15> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351e660 <col:6, col:12> 'int32_t':'int' '/'
|           |-ImplicitCastExpr 0x55e56351e630 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351e5f0 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351e0c8 'si1' 'int32_t':'int'
|           `-ImplicitCastExpr 0x55e56351e648 <col:12> 'int32_t':'int' <LValueToRValue>
|             `-DeclRefExpr 0x55e56351e610 <col:12> 'int32_t':'int' lvalue ParmVar 0x55e56351e140 'si2' 'int32_t':'int'
|-FunctionDecl 0x55e56351e8b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:363:1> <scratch space>:92:1 safe_lshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x55e56351e720 </usr/include/safe_math.h:354:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55e56351e7a0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e56351efd0 <line:355:1, line:363:1>
|   `-ReturnStmt 0x55e56351efc0 <line:357:3, line:362:26>
|     `-ConditionalOperator 0x55e56351ef90 <line:359:5, line:362:26> 'int32_t':'int'
|       |-ParenExpr 0x55e56351ede8 <line:359:5, col:102> 'int'
|       | `-BinaryOperator 0x55e56351edc8 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x55e56351ec18 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x55e56351eb00 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x55e56351e9e8 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x55e56351e9c8 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x55e56351e9b0 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x55e56351e970 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351e720 'left' 'int32_t':'int'
|       |   | | |   `-IntegerLiteral 0x55e56351e990 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x55e56351eae0 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x55e56351eac0 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x55e56351ea80 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x55e56351ea58 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x55e56351ea40 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x55e56351ea08 <col:27> 'int' lvalue ParmVar 0x55e56351e7a0 'right' 'int'
|       |   | |     `-IntegerLiteral 0x55e56351eaa0 <col:36> 'int' 0
|       |   | `-ParenExpr 0x55e56351ebf8 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x55e56351ebd8 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x55e56351eb98 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x55e56351eb70 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e56351eb58 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e56351eb20 <col:49> 'int' lvalue ParmVar 0x55e56351e7a0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e56351ebb8 <col:59> 'int' 32
|       |   `-ParenExpr 0x55e56351eda8 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x55e56351ed88 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e56351ed70 <col:67> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e56351ec38 <col:67> 'int32_t':'int' lvalue ParmVar 0x55e56351e720 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x55e56351ed50 <col:74, col:100> 'int'
|       |         `-BinaryOperator 0x55e56351ed30 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:359:99> 'int' '>>'
|       |           |-ParenExpr 0x55e56351ec78 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x55e56351ec58 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x55e56351ed10 </usr/include/safe_math.h:359:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x55e56351ece8 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e56351ecd0 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e56351ec98 <col:94> 'int' lvalue ParmVar 0x55e56351e7a0 'right' 'int'
|       |-ImplicitCastExpr 0x55e56351ef78 <line:360:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351ee48 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351ee28 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351ee08 </usr/include/safe_math.h:360:16> 'int32_t':'int' lvalue ParmVar 0x55e56351e720 'left' 'int32_t':'int'
|       `-ParenExpr 0x55e56351ef58 <line:362:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351ef38 <col:6, col:25> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x55e56351ef20 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351ee68 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351e720 'left' 'int32_t':'int'
|           `-ParenExpr 0x55e56351ef00 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e56351eed8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e56351eec0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e56351ee88 <col:20> 'int' lvalue ParmVar 0x55e56351e7a0 'right' 'int'
|-FunctionDecl 0x55e56351f1c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:375:1> <scratch space>:93:1 safe_lshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x55e56351eff8 </usr/include/safe_math.h:366:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55e56351f078 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e56351f7e0 <line:367:1, line:375:1>
|   `-ReturnStmt 0x55e56351f7d0 <line:369:3, line:374:35>
|     `-ConditionalOperator 0x55e56351f7a0 <line:371:5, line:374:35> 'int32_t':'int'
|       |-ParenExpr 0x55e56351f5f8 <line:371:5, col:98> 'int'
|       | `-BinaryOperator 0x55e56351f5d8 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x55e56351f428 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x55e56351f2f8 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55e56351f2d8 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55e56351f2c0 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55e56351f280 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351eff8 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x55e56351f2a0 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55e56351f408 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x55e56351f3e8 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x55e56351f390 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x55e56351f368 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e56351f350 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e56351f318 <col:36> 'unsigned int' lvalue ParmVar 0x55e56351f078 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x55e56351f3d0 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x55e56351f3b0 <col:46> 'int' 32
|       |   `-ParenExpr 0x55e56351f5b8 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x55e56351f598 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e56351f580 <col:54> 'int32_t':'int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e56351f448 <col:54> 'int32_t':'int' lvalue ParmVar 0x55e56351eff8 'left' 'int32_t':'int'
|       |       `-ParenExpr 0x55e56351f560 <col:61, col:96> 'int'
|       |         `-BinaryOperator 0x55e56351f540 </usr/include/stdint.h:112:21, /usr/include/safe_math.h:371:95> 'int' '>>'
|       |           |-ParenExpr 0x55e56351f488 </usr/include/stdint.h:112:21, col:32> 'int'
|       |           | `-IntegerLiteral 0x55e56351f468 <col:22> 'int' 2147483647
|       |           `-ParenExpr 0x55e56351f520 </usr/include/safe_math.h:371:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x55e56351f4f8 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e56351f4e0 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e56351f4a8 <col:90> 'unsigned int' lvalue ParmVar 0x55e56351f078 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55e56351f788 <line:372:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351f658 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351f638 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351f618 </usr/include/safe_math.h:372:16> 'int32_t':'int' lvalue ParmVar 0x55e56351eff8 'left' 'int32_t':'int'
|       `-ParenExpr 0x55e56351f768 <line:374:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351f748 <col:6, col:34> 'int32_t':'int' '<<'
|           |-ImplicitCastExpr 0x55e56351f730 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351f678 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351eff8 'left' 'int32_t':'int'
|           `-ParenExpr 0x55e56351f710 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e56351f6e8 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e56351f6d0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e56351f698 <col:29> 'unsigned int' lvalue ParmVar 0x55e56351f078 'right' 'unsigned int'
|-FunctionDecl 0x55e56351f928 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:387:1> <scratch space>:94:1 safe_rshift_func_int32_t_s_s 'int32_t (int32_t, int)' static
| |-ParmVarDecl 0x55e56351f808 </usr/include/safe_math.h:378:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55e56351f888 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e56351fea8 <line:379:1, line:387:1>
|   `-ReturnStmt 0x55e56351fe98 <line:381:3, line:386:26>
|     `-ConditionalOperator 0x55e56351fe68 <line:383:5, line:386:26> 'int32_t':'int'
|       |-ParenExpr 0x55e56351fcc0 <line:383:5, col:62> 'int'
|       | `-BinaryOperator 0x55e56351fca0 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x55e56351fb88 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x55e56351fa70 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55e56351fa38 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55e56351fa20 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55e56351f9e0 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351f808 'left' 'int32_t':'int'
|       |   | |   `-IntegerLiteral 0x55e56351fa00 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55e56351fb68 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x55e56351fb48 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x55e56351fb08 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x55e56351fae0 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e56351fac8 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e56351fa90 <col:27> 'int' lvalue ParmVar 0x55e56351f888 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e56351fb28 <col:36> 'int' 0
|       |   `-ParenExpr 0x55e56351fc80 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x55e56351fc60 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x55e56351fc20 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x55e56351fbf8 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e56351fbe0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e56351fba8 <col:49> 'int' lvalue ParmVar 0x55e56351f888 'right' 'int'
|       |       `-IntegerLiteral 0x55e56351fc40 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x55e56351fe50 <line:384:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e56351fd20 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e56351fd00 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e56351fce0 </usr/include/safe_math.h:384:16> 'int32_t':'int' lvalue ParmVar 0x55e56351f808 'left' 'int32_t':'int'
|       `-ParenExpr 0x55e56351fe30 <line:386:5, col:26> 'int32_t':'int'
|         `-BinaryOperator 0x55e56351fe10 <col:6, col:25> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x55e56351fdf8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56351fd40 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351f808 'left' 'int32_t':'int'
|           `-ParenExpr 0x55e56351fdd8 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e56351fdb0 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e56351fd98 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e56351fd60 <col:20> 'int' lvalue ParmVar 0x55e56351f888 'right' 'int'
|-FunctionDecl 0x55e56351fff0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:399:1> <scratch space>:95:1 safe_rshift_func_int32_t_s_u 'int32_t (int32_t, unsigned int)' static
| |-ParmVarDecl 0x55e56351fed0 </usr/include/safe_math.h:390:36, col:44> col:44 used left 'int32_t':'int'
| |-ParmVarDecl 0x55e56351ff50 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e563520458 <line:391:1, line:399:1>
|   `-ReturnStmt 0x55e563520448 <line:393:3, line:398:35>
|     `-ConditionalOperator 0x55e563520418 <line:395:5, line:398:35> 'int32_t':'int'
|       |-ParenExpr 0x55e563520270 <line:395:5, col:49> 'int'
|       | `-BinaryOperator 0x55e563520250 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x55e563520120 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e563520100 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x55e5635200e8 <col:7> 'int32_t':'int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e5635200a8 <col:7> 'int32_t':'int' lvalue ParmVar 0x55e56351fed0 'left' 'int32_t':'int'
|       |   |   `-IntegerLiteral 0x55e5635200c8 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e563520230 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x55e563520210 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x55e5635201b8 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x55e563520190 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e563520178 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e563520140 <col:36> 'unsigned int' lvalue ParmVar 0x55e56351ff50 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x55e5635201f8 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x55e5635201d8 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x55e563520400 <line:396:5, col:21> 'int32_t':'int' <LValueToRValue>
|       | `-ParenExpr 0x55e5635202d0 <col:5, col:21> 'int32_t':'int' lvalue
|       |   `-ParenExpr 0x55e5635202b0 </usr/include/random_inc.h:79:26, col:32> 'int32_t':'int' lvalue
|       |     `-DeclRefExpr 0x55e563520290 </usr/include/safe_math.h:396:16> 'int32_t':'int' lvalue ParmVar 0x55e56351fed0 'left' 'int32_t':'int'
|       `-ParenExpr 0x55e5635203e0 <line:398:5, col:35> 'int32_t':'int'
|         `-BinaryOperator 0x55e5635203c0 <col:6, col:34> 'int32_t':'int' '>>'
|           |-ImplicitCastExpr 0x55e5635203a8 <col:6> 'int32_t':'int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635202f0 <col:6> 'int32_t':'int' lvalue ParmVar 0x55e56351fed0 'left' 'int32_t':'int'
|           `-ParenExpr 0x55e563520388 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563520360 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563520348 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563520310 <col:29> 'unsigned int' lvalue ParmVar 0x55e56351ff50 'right' 'unsigned int'
|-FunctionDecl 0x55e563520630 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:416:1> <scratch space>:96:1 safe_unary_minus_func_int64_t_s 'int64_t (int64_t)' static
| |-ParmVarDecl 0x55e5635204e0 </usr/include/safe_math.h:405:39, col:47> col:47 used si 'int64_t':'long'
| `-CompoundStmt 0x55e563520910 <line:406:1, line:416:1>
|   `-ReturnStmt 0x55e563520900 <line:408:3, line:415:6>
|     `-ConditionalOperator 0x55e5635208d0 <line:411:5, line:415:6> 'int64_t':'long'
|       |-ParenExpr 0x55e5635207e8 <line:411:5, col:19> 'int'
|       | `-BinaryOperator 0x55e5635207c8 <col:6, /usr/include/stdint.h:108:55> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e5635207b0 </usr/include/safe_math.h:411:6> 'int64_t':'long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e5635206e0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e5635204e0 'si' 'int64_t':'long'
|       |   `-ParenExpr 0x55e563520790 </usr/include/stdint.h:108:21, col:55> 'long'
|       |     `-BinaryOperator 0x55e563520770 <col:22, col:54> 'long' '-'
|       |       |-UnaryOperator 0x55e563520720 <col:22, <scratch space>:98:1> 'long' prefix '-'
|       |       | `-IntegerLiteral 0x55e563520700 <col:1> 'long' 9223372036854775807
|       |       `-ImplicitCastExpr 0x55e563520758 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |         `-IntegerLiteral 0x55e563520738 <col:54> 'int' 1
|       |-ImplicitCastExpr 0x55e5635208b8 </usr/include/safe_math.h:412:5, col:19> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563520848 <col:5, col:19> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563520828 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563520808 </usr/include/safe_math.h:412:16> 'int64_t':'long' lvalue ParmVar 0x55e5635204e0 'si' 'int64_t':'long'
|       `-UnaryOperator 0x55e5635208a0 <line:415:5, col:6> 'int64_t':'long' prefix '-'
|         `-ImplicitCastExpr 0x55e563520888 <col:6> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x55e563520868 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e5635204e0 'si' 'int64_t':'long'
|-FunctionDecl 0x55e563520b08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:430:1> <scratch space>:99:1 safe_add_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55e563520938 </usr/include/safe_math.h:419:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55e5635209b0 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55e5635213b8 <line:420:1, line:430:1>
|   `-ReturnStmt 0x55e5635213a8 <line:422:3, line:429:15>
|     `-ConditionalOperator 0x55e563521378 <line:425:5, line:429:15> 'int64_t':'long'
|       |-ParenExpr 0x55e563521230 <line:425:5, col:104> 'int'
|       | `-BinaryOperator 0x55e563521210 <col:6, col:103> 'int' '||'
|       |   |-ParenExpr 0x55e563520e90 <col:6, col:52> 'int'
|       |   | `-BinaryOperator 0x55e563520e70 <col:7, col:51> 'int' '&&'
|       |   |   |-BinaryOperator 0x55e563520d20 <col:7, col:24> 'int' '&&'
|       |   |   | |-ParenExpr 0x55e563520c50 <col:7, col:13> 'int'
|       |   |   | | `-BinaryOperator 0x55e563520c30 <col:8, col:12> 'int' '>'
|       |   |   | |   |-ImplicitCastExpr 0x55e563520c00 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   | |   | `-DeclRefExpr 0x55e563520bc0 <col:8> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|       |   |   | |   `-ImplicitCastExpr 0x55e563520c18 <col:12> 'int64_t':'long' <IntegralCast>
|       |   |   | |     `-IntegerLiteral 0x55e563520be0 <col:12> 'int' 0
|       |   |   | `-ParenExpr 0x55e563520d00 <col:18, col:24> 'int'
|       |   |   |   `-BinaryOperator 0x55e563520ce0 <col:19, col:23> 'int' '>'
|       |   |   |     |-ImplicitCastExpr 0x55e563520cb0 <col:19> 'int64_t':'long' <LValueToRValue>
|       |   |   |     | `-DeclRefExpr 0x55e563520c70 <col:19> 'int64_t':'long' lvalue ParmVar 0x55e5635209b0 'si2' 'int64_t':'long'
|       |   |   |     `-ImplicitCastExpr 0x55e563520cc8 <col:23> 'int64_t':'long' <IntegralCast>
|       |   |   |       `-IntegerLiteral 0x55e563520c90 <col:23> 'int' 0
|       |   |   `-ParenExpr 0x55e563520e50 <col:29, col:51> 'int'
|       |   |     `-BinaryOperator 0x55e563520e30 <col:30, col:50> 'int' '>'
|       |   |       |-ImplicitCastExpr 0x55e563520e18 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       | `-DeclRefExpr 0x55e563520d40 <col:30> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|       |   |       `-ParenExpr 0x55e563520df8 <col:36, col:50> 'long'
|       |   |         `-BinaryOperator 0x55e563520dd8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:425:47> 'long' '-'
|       |   |           |-ParenExpr 0x55e563520d80 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   |           | `-IntegerLiteral 0x55e563520d60 <<scratch space>:101:1> 'long' 9223372036854775807
|       |   |           `-ImplicitCastExpr 0x55e563520dc0 </usr/include/safe_math.h:425:47> 'int64_t':'long' <LValueToRValue>
|       |   |             `-DeclRefExpr 0x55e563520da0 <col:47> 'int64_t':'long' lvalue ParmVar 0x55e5635209b0 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x55e5635211f0 <col:57, col:103> 'int'
|       |     `-BinaryOperator 0x55e5635211d0 <col:58, col:102> 'int' '&&'
|       |       |-BinaryOperator 0x55e563521010 <col:58, col:75> 'int' '&&'
|       |       | |-ParenExpr 0x55e563520f40 <col:58, col:64> 'int'
|       |       | | `-BinaryOperator 0x55e563520f20 <col:59, col:63> 'int' '<'
|       |       | |   |-ImplicitCastExpr 0x55e563520ef0 <col:59> 'int64_t':'long' <LValueToRValue>
|       |       | |   | `-DeclRefExpr 0x55e563520eb0 <col:59> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|       |       | |   `-ImplicitCastExpr 0x55e563520f08 <col:63> 'int64_t':'long' <IntegralCast>
|       |       | |     `-IntegerLiteral 0x55e563520ed0 <col:63> 'int' 0
|       |       | `-ParenExpr 0x55e563520ff0 <col:69, col:75> 'int'
|       |       |   `-BinaryOperator 0x55e563520fd0 <col:70, col:74> 'int' '<'
|       |       |     |-ImplicitCastExpr 0x55e563520fa0 <col:70> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55e563520f60 <col:70> 'int64_t':'long' lvalue ParmVar 0x55e5635209b0 'si2' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x55e563520fb8 <col:74> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x55e563520f80 <col:74> 'int' 0
|       |       `-ParenExpr 0x55e5635211b0 <col:80, col:102> 'int'
|       |         `-BinaryOperator 0x55e563521190 <col:81, col:101> 'int' '<'
|       |           |-ImplicitCastExpr 0x55e563521178 <col:81> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e563521030 <col:81> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|       |           `-ParenExpr 0x55e563521158 <col:87, col:101> 'long'
|       |             `-BinaryOperator 0x55e563521138 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:425:98> 'long' '-'
|       |               |-ParenExpr 0x55e5635210e0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |               | `-BinaryOperator 0x55e5635210c0 <col:22, col:54> 'long' '-'
|       |               |   |-UnaryOperator 0x55e563521070 <col:22, <scratch space>:102:1> 'long' prefix '-'
|       |               |   | `-IntegerLiteral 0x55e563521050 <col:1> 'long' 9223372036854775807
|       |               |   `-ImplicitCastExpr 0x55e5635210a8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |               |     `-IntegerLiteral 0x55e563521088 <col:54> 'int' 1
|       |               `-ImplicitCastExpr 0x55e563521120 </usr/include/safe_math.h:425:98> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55e563521100 <col:98> 'int64_t':'long' lvalue ParmVar 0x55e5635209b0 'si2' 'int64_t':'long'
|       |-ImplicitCastExpr 0x55e563521360 <line:426:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563521290 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563521270 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563521250 </usr/include/safe_math.h:426:16> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55e563521340 <line:429:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55e563521320 <col:6, col:12> 'int64_t':'long' '+'
|           |-ImplicitCastExpr 0x55e5635212f0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635212b0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563520938 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55e563521308 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55e5635212d0 <col:12> 'int64_t':'long' lvalue ParmVar 0x55e5635209b0 'si2' 'int64_t':'long'
|-FunctionDecl 0x55e5635214f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:444:1> <scratch space>:103:1 safe_sub_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55e5635213e0 </usr/include/safe_math.h:433:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55e563521458 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55e563521b68 <line:434:1, line:444:1>
|   `-ReturnStmt 0x55e563521b58 <line:436:3, line:443:15>
|     `-ConditionalOperator 0x55e563521b28 <line:439:5, line:443:15> 'int64_t':'long'
|       |-ParenExpr 0x55e5635219c8 <line:439:5, col:70> 'int'
|       | `-BinaryOperator 0x55e5635219a8 <col:6, col:69> 'int' '<'
|       |   |-ParenExpr 0x55e563521950 <col:6, col:65> 'long'
|       |   | `-BinaryOperator 0x55e563521930 <col:7, col:64> 'long' '&'
|       |   |   |-ParenExpr 0x55e563521640 <col:7, col:15> 'int64_t':'long'
|       |   |   | `-BinaryOperator 0x55e563521620 <col:8, col:12> 'int64_t':'long' '^'
|       |   |   |   |-ImplicitCastExpr 0x55e5635215f0 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   |   |   | `-DeclRefExpr 0x55e5635215b0 <col:8> 'int64_t':'long' lvalue ParmVar 0x55e5635213e0 'si1' 'int64_t':'long'
|       |   |   |   `-ImplicitCastExpr 0x55e563521608 <col:12> 'int64_t':'long' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e5635215d0 <col:12> 'int64_t':'long' lvalue ParmVar 0x55e563521458 'si2' 'int64_t':'long'
|       |   |   `-ParenExpr 0x55e563521910 <col:19, col:64> 'long'
|       |   |     `-BinaryOperator 0x55e5635218f0 <col:20, col:61> 'long' '^'
|       |   |       |-ParenExpr 0x55e563521898 <col:20, col:59> 'long'
|       |   |       | `-BinaryOperator 0x55e563521878 <col:21, col:56> 'long' '-'
|       |   |       |   |-ParenExpr 0x55e563521820 <col:21, col:54> 'long'
|       |   |       |   | `-BinaryOperator 0x55e563521800 <col:22, col:53> 'long' '^'
|       |   |       |   |   |-ImplicitCastExpr 0x55e5635217e8 <col:22> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |   | `-DeclRefExpr 0x55e563521660 <col:22> 'int64_t':'long' lvalue ParmVar 0x55e5635213e0 'si1' 'int64_t':'long'
|       |   |       |   |   `-ParenExpr 0x55e5635217c8 <col:28, col:53> 'long'
|       |   |       |   |     `-BinaryOperator 0x55e5635217a8 <col:29, col:52> 'long' '&'
|       |   |       |   |       |-ParenExpr 0x55e563521710 <col:29, col:37> 'int64_t':'long'
|       |   |       |   |       | `-BinaryOperator 0x55e5635216f0 <col:30, col:34> 'int64_t':'long' '^'
|       |   |       |   |       |   |-ImplicitCastExpr 0x55e5635216c0 <col:30> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |   | `-DeclRefExpr 0x55e563521680 <col:30> 'int64_t':'long' lvalue ParmVar 0x55e5635213e0 'si1' 'int64_t':'long'
|       |   |       |   |       |   `-ImplicitCastExpr 0x55e5635216d8 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   |       |   |       |     `-DeclRefExpr 0x55e5635216a0 <col:34> 'int64_t':'long' lvalue ParmVar 0x55e563521458 'si2' 'int64_t':'long'
|       |   |       |   |       `-ParenExpr 0x55e563521788 <col:41, col:52> 'long'
|       |   |       |   |         `-UnaryOperator 0x55e563521770 <col:42, /usr/include/stdint.h:113:52> 'long' prefix '~' cannot overflow
|       |   |       |   |           `-ParenExpr 0x55e563521750 <col:21, col:52> 'long'
|       |   |       |   |             `-IntegerLiteral 0x55e563521730 <<scratch space>:105:1> 'long' 9223372036854775807
|       |   |       |   `-ImplicitCastExpr 0x55e563521860 </usr/include/safe_math.h:439:56> 'int64_t':'long' <LValueToRValue>
|       |   |       |     `-DeclRefExpr 0x55e563521840 <col:56> 'int64_t':'long' lvalue ParmVar 0x55e563521458 'si2' 'int64_t':'long'
|       |   |       `-ImplicitCastExpr 0x55e5635218d8 <col:61> 'int64_t':'long' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e5635218b8 <col:61> 'int64_t':'long' lvalue ParmVar 0x55e563521458 'si2' 'int64_t':'long'
|       |   `-ImplicitCastExpr 0x55e563521990 <col:69> 'long' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563521970 <col:69> 'int' 0
|       |-ImplicitCastExpr 0x55e563521b10 <line:440:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563521a28 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563521a08 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e5635219e8 </usr/include/safe_math.h:440:16> 'int64_t':'long' lvalue ParmVar 0x55e5635213e0 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55e563521af0 <line:443:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55e563521ad0 <col:6, col:12> 'int64_t':'long' '-'
|           |-ImplicitCastExpr 0x55e563521aa0 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563521a48 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e5635213e0 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55e563521ab8 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55e563521a80 <col:12> 'int64_t':'long' lvalue ParmVar 0x55e563521458 'si2' 'int64_t':'long'
|-FunctionDecl 0x55e563521ca8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:458:1> <scratch space>:106:1 safe_mul_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55e563521b90 </usr/include/safe_math.h:447:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55e563521c08 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55e563522c98 <line:448:1, line:458:1>
|   `-ReturnStmt 0x55e563522c88 <line:450:3, line:457:11>
|     `-ConditionalOperator 0x55e563522c58 <line:453:5, line:457:11> 'int64_t':'long'
|       |-ParenExpr 0x55e563522b30 <line:453:5, col:248> 'int'
|       | `-BinaryOperator 0x55e563522b10 <col:6, col:247> 'int' '||'
|       |   |-BinaryOperator 0x55e563522730 <col:6, col:174> 'int' '||'
|       |   | |-BinaryOperator 0x55e5635223b0 <col:6, col:116> 'int' '||'
|       |   | | |-ParenExpr 0x55e563522030 <col:6, col:58> 'int'
|       |   | | | `-BinaryOperator 0x55e563522010 <col:7, col:57> 'int' '&&'
|       |   | | |   |-BinaryOperator 0x55e563521ec0 <col:7, col:28> 'int' '&&'
|       |   | | |   | |-ParenExpr 0x55e563521df0 <col:7, col:15> 'int'
|       |   | | |   | | `-BinaryOperator 0x55e563521dd0 <col:8, col:14> 'int' '>'
|       |   | | |   | |   |-ImplicitCastExpr 0x55e563521da0 <col:8> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | |   | `-DeclRefExpr 0x55e563521d60 <col:8> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   | | |   | |   `-ImplicitCastExpr 0x55e563521db8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |   | |     `-IntegerLiteral 0x55e563521d80 <col:14> 'int' 0
|       |   | | |   | `-ParenExpr 0x55e563521ea0 <col:20, col:28> 'int'
|       |   | | |   |   `-BinaryOperator 0x55e563521e80 <col:21, col:27> 'int' '>'
|       |   | | |   |     |-ImplicitCastExpr 0x55e563521e50 <col:21> 'int64_t':'long' <LValueToRValue>
|       |   | | |   |     | `-DeclRefExpr 0x55e563521e10 <col:21> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   | | |   |     `-ImplicitCastExpr 0x55e563521e68 <col:27> 'int64_t':'long' <IntegralCast>
|       |   | | |   |       `-IntegerLiteral 0x55e563521e30 <col:27> 'int' 0
|       |   | | |   `-ParenExpr 0x55e563521ff0 <col:33, col:57> 'int'
|       |   | | |     `-BinaryOperator 0x55e563521fd0 <col:34, col:56> 'int' '>'
|       |   | | |       |-ImplicitCastExpr 0x55e563521fb8 <col:34> 'int64_t':'long' <LValueToRValue>
|       |   | | |       | `-DeclRefExpr 0x55e563521ee0 <col:34> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   | | |       `-ParenExpr 0x55e563521f98 <col:40, col:56> 'long'
|       |   | | |         `-BinaryOperator 0x55e563521f78 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:53> 'long' '/'
|       |   | | |           |-ParenExpr 0x55e563521f20 </usr/include/stdint.h:113:21, col:52> 'long'
|       |   | | |           | `-IntegerLiteral 0x55e563521f00 <<scratch space>:108:1> 'long' 9223372036854775807
|       |   | | |           `-ImplicitCastExpr 0x55e563521f60 </usr/include/safe_math.h:453:53> 'int64_t':'long' <LValueToRValue>
|       |   | | |             `-DeclRefExpr 0x55e563521f40 <col:53> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   | | `-ParenExpr 0x55e563522390 <col:63, col:116> 'int'
|       |   | |   `-BinaryOperator 0x55e563522370 <col:64, col:115> 'int' '&&'
|       |   | |     |-BinaryOperator 0x55e5635221b0 <col:64, col:86> 'int' '&&'
|       |   | |     | |-ParenExpr 0x55e5635220e0 <col:64, col:72> 'int'
|       |   | |     | | `-BinaryOperator 0x55e5635220c0 <col:65, col:71> 'int' '>'
|       |   | |     | |   |-ImplicitCastExpr 0x55e563522090 <col:65> 'int64_t':'long' <LValueToRValue>
|       |   | |     | |   | `-DeclRefExpr 0x55e563522050 <col:65> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   | |     | |   `-ImplicitCastExpr 0x55e5635220a8 <col:71> 'int64_t':'long' <IntegralCast>
|       |   | |     | |     `-IntegerLiteral 0x55e563522070 <col:71> 'int' 0
|       |   | |     | `-ParenExpr 0x55e563522190 <col:77, col:86> 'int'
|       |   | |     |   `-BinaryOperator 0x55e563522170 <col:78, col:85> 'int' '<='
|       |   | |     |     |-ImplicitCastExpr 0x55e563522140 <col:78> 'int64_t':'long' <LValueToRValue>
|       |   | |     |     | `-DeclRefExpr 0x55e563522100 <col:78> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   | |     |     `-ImplicitCastExpr 0x55e563522158 <col:85> 'int64_t':'long' <IntegralCast>
|       |   | |     |       `-IntegerLiteral 0x55e563522120 <col:85> 'int' 0
|       |   | |     `-ParenExpr 0x55e563522350 <col:91, col:115> 'int'
|       |   | |       `-BinaryOperator 0x55e563522330 <col:92, col:114> 'int' '<'
|       |   | |         |-ImplicitCastExpr 0x55e563522318 <col:92> 'int64_t':'long' <LValueToRValue>
|       |   | |         | `-DeclRefExpr 0x55e5635221d0 <col:92> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   | |         `-ParenExpr 0x55e5635222f8 <col:98, col:114> 'long'
|       |   | |           `-BinaryOperator 0x55e5635222d8 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:111> 'long' '/'
|       |   | |             |-ParenExpr 0x55e563522280 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   | |             | `-BinaryOperator 0x55e563522260 <col:22, col:54> 'long' '-'
|       |   | |             |   |-UnaryOperator 0x55e563522210 <col:22, <scratch space>:109:1> 'long' prefix '-'
|       |   | |             |   | `-IntegerLiteral 0x55e5635221f0 <col:1> 'long' 9223372036854775807
|       |   | |             |   `-ImplicitCastExpr 0x55e563522248 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   | |             |     `-IntegerLiteral 0x55e563522228 <col:54> 'int' 1
|       |   | |             `-ImplicitCastExpr 0x55e5635222c0 </usr/include/safe_math.h:453:111> 'int64_t':'long' <LValueToRValue>
|       |   | |               `-DeclRefExpr 0x55e5635222a0 <col:111> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   | `-ParenExpr 0x55e563522710 <col:121, col:174> 'int'
|       |   |   `-BinaryOperator 0x55e5635226f0 <col:122, col:173> 'int' '&&'
|       |   |     |-BinaryOperator 0x55e563522530 <col:122, col:144> 'int' '&&'
|       |   |     | |-ParenExpr 0x55e563522460 <col:122, col:131> 'int'
|       |   |     | | `-BinaryOperator 0x55e563522440 <col:123, col:130> 'int' '<='
|       |   |     | |   |-ImplicitCastExpr 0x55e563522410 <col:123> 'int64_t':'long' <LValueToRValue>
|       |   |     | |   | `-DeclRefExpr 0x55e5635223d0 <col:123> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   |     | |   `-ImplicitCastExpr 0x55e563522428 <col:130> 'int64_t':'long' <IntegralCast>
|       |   |     | |     `-IntegerLiteral 0x55e5635223f0 <col:130> 'int' 0
|       |   |     | `-ParenExpr 0x55e563522510 <col:136, col:144> 'int'
|       |   |     |   `-BinaryOperator 0x55e5635224f0 <col:137, col:143> 'int' '>'
|       |   |     |     |-ImplicitCastExpr 0x55e5635224c0 <col:137> 'int64_t':'long' <LValueToRValue>
|       |   |     |     | `-DeclRefExpr 0x55e563522480 <col:137> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   |     |     `-ImplicitCastExpr 0x55e5635224d8 <col:143> 'int64_t':'long' <IntegralCast>
|       |   |     |       `-IntegerLiteral 0x55e5635224a0 <col:143> 'int' 0
|       |   |     `-ParenExpr 0x55e5635226d0 <col:149, col:173> 'int'
|       |   |       `-BinaryOperator 0x55e5635226b0 <col:150, col:172> 'int' '<'
|       |   |         |-ImplicitCastExpr 0x55e563522698 <col:150> 'int64_t':'long' <LValueToRValue>
|       |   |         | `-DeclRefExpr 0x55e563522550 <col:150> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |   |         `-ParenExpr 0x55e563522678 <col:156, col:172> 'long'
|       |   |           `-BinaryOperator 0x55e563522658 </usr/include/stdint.h:108:21, /usr/include/safe_math.h:453:169> 'long' '/'
|       |   |             |-ParenExpr 0x55e563522600 </usr/include/stdint.h:108:21, col:55> 'long'
|       |   |             | `-BinaryOperator 0x55e5635225e0 <col:22, col:54> 'long' '-'
|       |   |             |   |-UnaryOperator 0x55e563522590 <col:22, <scratch space>:110:1> 'long' prefix '-'
|       |   |             |   | `-IntegerLiteral 0x55e563522570 <col:1> 'long' 9223372036854775807
|       |   |             |   `-ImplicitCastExpr 0x55e5635225c8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |   |             |     `-IntegerLiteral 0x55e5635225a8 <col:54> 'int' 1
|       |   |             `-ImplicitCastExpr 0x55e563522640 </usr/include/safe_math.h:453:169> 'int64_t':'long' <LValueToRValue>
|       |   |               `-DeclRefExpr 0x55e563522620 <col:169> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |   `-ParenExpr 0x55e563522af0 <col:179, col:247> 'int'
|       |     `-BinaryOperator 0x55e563522ad0 <col:180, col:246> 'int' '&&'
|       |       |-BinaryOperator 0x55e563522980 <col:180, col:217> 'int' '&&'
|       |       | |-BinaryOperator 0x55e5635228b0 <col:180, col:203> 'int' '&&'
|       |       | | |-ParenExpr 0x55e5635227e0 <col:180, col:189> 'int'
|       |       | | | `-BinaryOperator 0x55e5635227c0 <col:181, col:188> 'int' '<='
|       |       | | |   |-ImplicitCastExpr 0x55e563522790 <col:181> 'int64_t':'long' <LValueToRValue>
|       |       | | |   | `-DeclRefExpr 0x55e563522750 <col:181> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |       | | |   `-ImplicitCastExpr 0x55e5635227a8 <col:188> 'int64_t':'long' <IntegralCast>
|       |       | | |     `-IntegerLiteral 0x55e563522770 <col:188> 'int' 0
|       |       | | `-ParenExpr 0x55e563522890 <col:194, col:203> 'int'
|       |       | |   `-BinaryOperator 0x55e563522870 <col:195, col:202> 'int' '<='
|       |       | |     |-ImplicitCastExpr 0x55e563522840 <col:195> 'int64_t':'long' <LValueToRValue>
|       |       | |     | `-DeclRefExpr 0x55e563522800 <col:195> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |       | |     `-ImplicitCastExpr 0x55e563522858 <col:202> 'int64_t':'long' <IntegralCast>
|       |       | |       `-IntegerLiteral 0x55e563522820 <col:202> 'int' 0
|       |       | `-ParenExpr 0x55e563522960 <col:208, col:217> 'int'
|       |       |   `-BinaryOperator 0x55e563522940 <col:209, col:216> 'int' '!='
|       |       |     |-ImplicitCastExpr 0x55e563522910 <col:209> 'int64_t':'long' <LValueToRValue>
|       |       |     | `-DeclRefExpr 0x55e5635228d0 <col:209> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |       |     `-ImplicitCastExpr 0x55e563522928 <col:216> 'int64_t':'long' <IntegralCast>
|       |       |       `-IntegerLiteral 0x55e5635228f0 <col:216> 'int' 0
|       |       `-ParenExpr 0x55e563522ab0 <col:222, col:246> 'int'
|       |         `-BinaryOperator 0x55e563522a90 <col:223, col:245> 'int' '<'
|       |           |-ImplicitCastExpr 0x55e563522a78 <col:223> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e5635229a0 <col:223> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|       |           `-ParenExpr 0x55e563522a58 <col:229, col:245> 'long'
|       |             `-BinaryOperator 0x55e563522a38 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:453:242> 'long' '/'
|       |               |-ParenExpr 0x55e5635229e0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |               | `-IntegerLiteral 0x55e5635229c0 <<scratch space>:111:1> 'long' 9223372036854775807
|       |               `-ImplicitCastExpr 0x55e563522a20 </usr/include/safe_math.h:453:242> 'int64_t':'long' <LValueToRValue>
|       |                 `-DeclRefExpr 0x55e563522a00 <col:242> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       |-ImplicitCastExpr 0x55e563522c40 <line:454:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563522b90 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563522b70 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563522b50 </usr/include/safe_math.h:454:16> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|       `-BinaryOperator 0x55e563522c20 <line:457:5, col:11> 'int64_t':'long' '*'
|         |-ImplicitCastExpr 0x55e563522bf0 <col:5> 'int64_t':'long' <LValueToRValue>
|         | `-DeclRefExpr 0x55e563522bb0 <col:5> 'int64_t':'long' lvalue ParmVar 0x55e563521b90 'si1' 'int64_t':'long'
|         `-ImplicitCastExpr 0x55e563522c08 <col:11> 'int64_t':'long' <LValueToRValue>
|           `-DeclRefExpr 0x55e563522bd0 <col:11> 'int64_t':'long' lvalue ParmVar 0x55e563521c08 'si2' 'int64_t':'long'
|-FunctionDecl 0x55e563522dd8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:470:1> <scratch space>:112:1 safe_mod_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55e563522cc0 </usr/include/safe_math.h:461:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55e563522d38 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55e563523338 <line:462:1, line:470:1>
|   `-ReturnStmt 0x55e563523328 <line:464:3, line:469:15>
|     `-ConditionalOperator 0x55e5635232f8 <line:466:5, line:469:15> 'int64_t':'long'
|       |-ParenExpr 0x55e5635231b0 <line:466:5, col:57> 'int'
|       | `-BinaryOperator 0x55e563523190 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55e563522f20 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e563522f00 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55e563522ed0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e563522e90 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e563522d38 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55e563522ee8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55e563522eb0 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e563523170 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55e563523150 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55e563523048 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55e563523028 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55e563523010 </usr/include/safe_math.h:466:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55e563522f40 <col:22> 'int64_t':'long' lvalue ParmVar 0x55e563522cc0 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x55e563522ff0 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x55e563522fd0 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x55e563522f80 <col:22, <scratch space>:113:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x55e563522f60 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x55e563522fb8 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x55e563522f98 <col:54> 'int' 1
|       |       `-ParenExpr 0x55e563523130 </usr/include/safe_math.h:466:43, col:55> 'int'
|       |         `-BinaryOperator 0x55e563523110 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55e5635230e0 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e563523068 <col:44> 'int64_t':'long' lvalue ParmVar 0x55e563522d38 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x55e5635230f8 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x55e5635230c0 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x55e5635230a8 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x55e563523088 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55e5635232e0 <line:467:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563523210 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e5635231f0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e5635231d0 </usr/include/safe_math.h:467:16> 'int64_t':'long' lvalue ParmVar 0x55e563522cc0 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55e5635232c0 <line:469:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55e5635232a0 <col:6, col:12> 'int64_t':'long' '%'
|           |-ImplicitCastExpr 0x55e563523270 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563523230 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563522cc0 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55e563523288 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55e563523250 <col:12> 'int64_t':'long' lvalue ParmVar 0x55e563522d38 'si2' 'int64_t':'long'
|-FunctionDecl 0x55e563523478 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:482:1> <scratch space>:114:1 safe_div_func_int64_t_s_s 'int64_t (int64_t, int64_t)' static
| |-ParmVarDecl 0x55e563523360 </usr/include/safe_math.h:473:33, col:41> col:41 used si1 'int64_t':'long'
| |-ParmVarDecl 0x55e5635233d8 <col:46, col:54> col:54 used si2 'int64_t':'long'
| `-CompoundStmt 0x55e5635239d8 <line:474:1, line:482:1>
|   `-ReturnStmt 0x55e5635239c8 <line:476:3, line:481:15>
|     `-ConditionalOperator 0x55e563523998 <line:478:5, line:481:15> 'int64_t':'long'
|       |-ParenExpr 0x55e563523850 <line:478:5, col:57> 'int'
|       | `-BinaryOperator 0x55e563523830 <col:6, col:56> 'int' '||'
|       |   |-ParenExpr 0x55e5635235c0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e5635235a0 <col:7, col:14> 'int' '=='
|       |   |   |-ImplicitCastExpr 0x55e563523570 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e563523530 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e5635233d8 'si2' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55e563523588 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55e563523550 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e563523810 <col:20, col:56> 'int'
|       |     `-BinaryOperator 0x55e5635237f0 <col:21, col:55> 'int' '&&'
|       |       |-ParenExpr 0x55e5635236e8 <col:21, col:38> 'int'
|       |       | `-BinaryOperator 0x55e5635236c8 <col:22, /usr/include/stdint.h:108:55> 'int' '=='
|       |       |   |-ImplicitCastExpr 0x55e5635236b0 </usr/include/safe_math.h:478:22> 'int64_t':'long' <LValueToRValue>
|       |       |   | `-DeclRefExpr 0x55e5635235e0 <col:22> 'int64_t':'long' lvalue ParmVar 0x55e563523360 'si1' 'int64_t':'long'
|       |       |   `-ParenExpr 0x55e563523690 </usr/include/stdint.h:108:21, col:55> 'long'
|       |       |     `-BinaryOperator 0x55e563523670 <col:22, col:54> 'long' '-'
|       |       |       |-UnaryOperator 0x55e563523620 <col:22, <scratch space>:115:1> 'long' prefix '-'
|       |       |       | `-IntegerLiteral 0x55e563523600 <col:1> 'long' 9223372036854775807
|       |       |       `-ImplicitCastExpr 0x55e563523658 </usr/include/stdint.h:108:54> 'long' <IntegralCast>
|       |       |         `-IntegerLiteral 0x55e563523638 <col:54> 'int' 1
|       |       `-ParenExpr 0x55e5635237d0 </usr/include/safe_math.h:478:43, col:55> 'int'
|       |         `-BinaryOperator 0x55e5635237b0 <col:44, col:54> 'int' '=='
|       |           |-ImplicitCastExpr 0x55e563523780 <col:44> 'int64_t':'long' <LValueToRValue>
|       |           | `-DeclRefExpr 0x55e563523708 <col:44> 'int64_t':'long' lvalue ParmVar 0x55e5635233d8 'si2' 'int64_t':'long'
|       |           `-ImplicitCastExpr 0x55e563523798 <col:51, col:54> 'int64_t':'long' <IntegralCast>
|       |             `-ParenExpr 0x55e563523760 <col:51, col:54> 'int'
|       |               `-UnaryOperator 0x55e563523748 <col:52, col:53> 'int' prefix '-'
|       |                 `-IntegerLiteral 0x55e563523728 <col:53> 'int' 1
|       |-ImplicitCastExpr 0x55e563523980 <line:479:5, col:20> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e5635238b0 <col:5, col:20> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563523890 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563523870 </usr/include/safe_math.h:479:16> 'int64_t':'long' lvalue ParmVar 0x55e563523360 'si1' 'int64_t':'long'
|       `-ParenExpr 0x55e563523960 <line:481:5, col:15> 'int64_t':'long'
|         `-BinaryOperator 0x55e563523940 <col:6, col:12> 'int64_t':'long' '/'
|           |-ImplicitCastExpr 0x55e563523910 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635238d0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563523360 'si1' 'int64_t':'long'
|           `-ImplicitCastExpr 0x55e563523928 <col:12> 'int64_t':'long' <LValueToRValue>
|             `-DeclRefExpr 0x55e5635238f0 <col:12> 'int64_t':'long' lvalue ParmVar 0x55e5635233d8 'si2' 'int64_t':'long'
|-FunctionDecl 0x55e563523be8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:494:1> <scratch space>:116:1 safe_lshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x55e563523a00 </usr/include/safe_math.h:485:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55e563523a90 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e563524318 <line:486:1, line:494:1>
|   `-ReturnStmt 0x55e563524308 <line:488:3, line:493:26>
|     `-ConditionalOperator 0x55e5635242d8 <line:490:5, line:493:26> 'int64_t':'long'
|       |-ParenExpr 0x55e563524130 <line:490:5, col:102> 'int'
|       | `-BinaryOperator 0x55e563524110 <col:6, col:101> 'int' '||'
|       |   |-BinaryOperator 0x55e563523f60 <col:6, col:61> 'int' '||'
|       |   | |-BinaryOperator 0x55e563523e48 <col:6, col:37> 'int' '||'
|       |   | | |-ParenExpr 0x55e563523d30 <col:6, col:15> 'int'
|       |   | | | `-BinaryOperator 0x55e563523d10 <col:7, col:14> 'int' '<'
|       |   | | |   |-ImplicitCastExpr 0x55e563523ce0 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | | |   | `-DeclRefExpr 0x55e563523ca0 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e563523a00 'left' 'int64_t':'long'
|       |   | | |   `-ImplicitCastExpr 0x55e563523cf8 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | | |     `-IntegerLiteral 0x55e563523cc0 <col:14> 'int' 0
|       |   | | `-ParenExpr 0x55e563523e28 <col:20, col:37> 'int'
|       |   | |   `-BinaryOperator 0x55e563523e08 <col:21, col:36> 'int' '<'
|       |   | |     |-ParenExpr 0x55e563523dc8 <col:21, col:32> 'int'
|       |   | |     | `-CStyleCastExpr 0x55e563523da0 <col:22, col:27> 'int' <NoOp>
|       |   | |     |   `-ImplicitCastExpr 0x55e563523d88 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |     |     `-DeclRefExpr 0x55e563523d50 <col:27> 'int' lvalue ParmVar 0x55e563523a90 'right' 'int'
|       |   | |     `-IntegerLiteral 0x55e563523de8 <col:36> 'int' 0
|       |   | `-ParenExpr 0x55e563523f40 <col:42, col:61> 'int'
|       |   |   `-BinaryOperator 0x55e563523f20 <col:43, col:59> 'int' '>='
|       |   |     |-ParenExpr 0x55e563523ee0 <col:43, col:54> 'int'
|       |   |     | `-CStyleCastExpr 0x55e563523eb8 <col:44, col:49> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e563523ea0 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e563523e68 <col:49> 'int' lvalue ParmVar 0x55e563523a90 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e563523f00 <col:59> 'int' 32
|       |   `-ParenExpr 0x55e5635240f0 <col:66, col:101> 'int'
|       |     `-BinaryOperator 0x55e5635240d0 <col:67, col:100> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e5635240b8 <col:67> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e563523f80 <col:67> 'int64_t':'long' lvalue ParmVar 0x55e563523a00 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x55e563524098 <col:74, col:100> 'long'
|       |         `-BinaryOperator 0x55e563524078 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:490:99> 'long' '>>'
|       |           |-ParenExpr 0x55e563523fc0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x55e563523fa0 <<scratch space>:117:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x55e563524058 </usr/include/safe_math.h:490:88, col:99> 'int'
|       |             `-CStyleCastExpr 0x55e563524030 <col:89, col:94> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e563524018 <col:94> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e563523fe0 <col:94> 'int' lvalue ParmVar 0x55e563523a90 'right' 'int'
|       |-ImplicitCastExpr 0x55e5635242c0 <line:491:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563524190 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563524170 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563524150 </usr/include/safe_math.h:491:16> 'int64_t':'long' lvalue ParmVar 0x55e563523a00 'left' 'int64_t':'long'
|       `-ParenExpr 0x55e5635242a0 <line:493:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x55e563524280 <col:6, col:25> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x55e563524268 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635241b0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563523a00 'left' 'int64_t':'long'
|           `-ParenExpr 0x55e563524248 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e563524220 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e563524208 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e5635241d0 <col:20> 'int' lvalue ParmVar 0x55e563523a90 'right' 'int'
|-FunctionDecl 0x55e563524518 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:506:1> <scratch space>:118:1 safe_lshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x55e563524340 </usr/include/safe_math.h:497:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55e5635243c0 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e563524b48 <line:498:1, line:506:1>
|   `-ReturnStmt 0x55e563524b38 <line:500:3, line:505:35>
|     `-ConditionalOperator 0x55e563524b08 <line:502:5, line:505:35> 'int64_t':'long'
|       |-ParenExpr 0x55e563524960 <line:502:5, col:98> 'int'
|       | `-BinaryOperator 0x55e563524940 <col:6, col:97> 'int' '||'
|       |   |-BinaryOperator 0x55e563524790 <col:6, col:48> 'int' '||'
|       |   | |-ParenExpr 0x55e563524660 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55e563524640 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55e563524610 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55e5635245d0 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e563524340 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x55e563524628 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x55e5635245f0 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55e563524770 <col:20, col:48> 'int'
|       |   |   `-BinaryOperator 0x55e563524750 <col:21, col:46> 'int' '>='
|       |   |     |-ParenExpr 0x55e5635246f8 <col:21, col:41> 'unsigned int'
|       |   |     | `-CStyleCastExpr 0x55e5635246d0 <col:22, col:36> 'unsigned int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e5635246b8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e563524680 <col:36> 'unsigned int' lvalue ParmVar 0x55e5635243c0 'right' 'unsigned int'
|       |   |     `-ImplicitCastExpr 0x55e563524738 <col:46> 'unsigned int' <IntegralCast>
|       |   |       `-IntegerLiteral 0x55e563524718 <col:46> 'int' 32
|       |   `-ParenExpr 0x55e563524920 <col:53, col:97> 'int'
|       |     `-BinaryOperator 0x55e563524900 <col:54, col:96> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e5635248e8 <col:54> 'int64_t':'long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e5635247b0 <col:54> 'int64_t':'long' lvalue ParmVar 0x55e563524340 'left' 'int64_t':'long'
|       |       `-ParenExpr 0x55e5635248c8 <col:61, col:96> 'long'
|       |         `-BinaryOperator 0x55e5635248a8 </usr/include/stdint.h:113:21, /usr/include/safe_math.h:502:95> 'long' '>>'
|       |           |-ParenExpr 0x55e5635247f0 </usr/include/stdint.h:113:21, col:52> 'long'
|       |           | `-IntegerLiteral 0x55e5635247d0 <<scratch space>:119:1> 'long' 9223372036854775807
|       |           `-ParenExpr 0x55e563524888 </usr/include/safe_math.h:502:75, col:95> 'unsigned int'
|       |             `-CStyleCastExpr 0x55e563524860 <col:76, col:90> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e563524848 <col:90> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e563524810 <col:90> 'unsigned int' lvalue ParmVar 0x55e5635243c0 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55e563524af0 <line:503:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e5635249c0 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e5635249a0 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563524980 </usr/include/safe_math.h:503:16> 'int64_t':'long' lvalue ParmVar 0x55e563524340 'left' 'int64_t':'long'
|       `-ParenExpr 0x55e563524ad0 <line:505:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x55e563524ab0 <col:6, col:34> 'int64_t':'long' '<<'
|           |-ImplicitCastExpr 0x55e563524a98 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635249e0 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563524340 'left' 'int64_t':'long'
|           `-ParenExpr 0x55e563524a78 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563524a50 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563524a38 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563524a00 <col:29> 'unsigned int' lvalue ParmVar 0x55e5635243c0 'right' 'unsigned int'
|-FunctionDecl 0x55e563524c90 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:518:1> <scratch space>:120:1 safe_rshift_func_int64_t_s_s 'int64_t (int64_t, int)' static
| |-ParmVarDecl 0x55e563524b70 </usr/include/safe_math.h:509:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55e563524bf0 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e563525210 <line:510:1, line:518:1>
|   `-ReturnStmt 0x55e563525200 <line:512:3, line:517:26>
|     `-ConditionalOperator 0x55e5635251d0 <line:514:5, line:517:26> 'int64_t':'long'
|       |-ParenExpr 0x55e563525028 <line:514:5, col:62> 'int'
|       | `-BinaryOperator 0x55e563525008 <col:6, col:61> 'int' '||'
|       |   |-BinaryOperator 0x55e563524ef0 <col:6, col:37> 'int' '||'
|       |   | |-ParenExpr 0x55e563524dd8 <col:6, col:15> 'int'
|       |   | | `-BinaryOperator 0x55e563524db8 <col:7, col:14> 'int' '<'
|       |   | |   |-ImplicitCastExpr 0x55e563524d88 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   | |   | `-DeclRefExpr 0x55e563524d48 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e563524b70 'left' 'int64_t':'long'
|       |   | |   `-ImplicitCastExpr 0x55e563524da0 <col:14> 'int64_t':'long' <IntegralCast>
|       |   | |     `-IntegerLiteral 0x55e563524d68 <col:14> 'int' 0
|       |   | `-ParenExpr 0x55e563524ed0 <col:20, col:37> 'int'
|       |   |   `-BinaryOperator 0x55e563524eb0 <col:21, col:36> 'int' '<'
|       |   |     |-ParenExpr 0x55e563524e70 <col:21, col:32> 'int'
|       |   |     | `-CStyleCastExpr 0x55e563524e48 <col:22, col:27> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e563524e30 <col:27> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e563524df8 <col:27> 'int' lvalue ParmVar 0x55e563524bf0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e563524e90 <col:36> 'int' 0
|       |   `-ParenExpr 0x55e563524fe8 <col:42, col:61> 'int'
|       |     `-BinaryOperator 0x55e563524fc8 <col:43, col:59> 'int' '>='
|       |       |-ParenExpr 0x55e563524f88 <col:43, col:54> 'int'
|       |       | `-CStyleCastExpr 0x55e563524f60 <col:44, col:49> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e563524f48 <col:49> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e563524f10 <col:49> 'int' lvalue ParmVar 0x55e563524bf0 'right' 'int'
|       |       `-IntegerLiteral 0x55e563524fa8 <col:59> 'int' 32
|       |-ImplicitCastExpr 0x55e5635251b8 <line:515:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563525088 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563525068 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563525048 </usr/include/safe_math.h:515:16> 'int64_t':'long' lvalue ParmVar 0x55e563524b70 'left' 'int64_t':'long'
|       `-ParenExpr 0x55e563525198 <line:517:5, col:26> 'int64_t':'long'
|         `-BinaryOperator 0x55e563525178 <col:6, col:25> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x55e563525160 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635250a8 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563524b70 'left' 'int64_t':'long'
|           `-ParenExpr 0x55e563525140 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e563525118 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e563525100 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e5635250c8 <col:20> 'int' lvalue ParmVar 0x55e563524bf0 'right' 'int'
|-FunctionDecl 0x55e563525358 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:530:1> <scratch space>:121:1 safe_rshift_func_int64_t_s_u 'int64_t (int64_t, unsigned int)' static
| |-ParmVarDecl 0x55e563525238 </usr/include/safe_math.h:521:36, col:44> col:44 used left 'int64_t':'long'
| |-ParmVarDecl 0x55e5635252b8 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e5635257d8 <line:522:1, line:530:1>
|   `-ReturnStmt 0x55e5635257c8 <line:524:3, line:529:35>
|     `-ConditionalOperator 0x55e563525798 <line:526:5, line:529:35> 'int64_t':'long'
|       |-ParenExpr 0x55e5635255f0 <line:526:5, col:49> 'int'
|       | `-BinaryOperator 0x55e5635255d0 <col:6, col:48> 'int' '||'
|       |   |-ParenExpr 0x55e5635254a0 <col:6, col:15> 'int'
|       |   | `-BinaryOperator 0x55e563525480 <col:7, col:14> 'int' '<'
|       |   |   |-ImplicitCastExpr 0x55e563525450 <col:7> 'int64_t':'long' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e563525410 <col:7> 'int64_t':'long' lvalue ParmVar 0x55e563525238 'left' 'int64_t':'long'
|       |   |   `-ImplicitCastExpr 0x55e563525468 <col:14> 'int64_t':'long' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55e563525430 <col:14> 'int' 0
|       |   `-ParenExpr 0x55e5635255b0 <col:20, col:48> 'int'
|       |     `-BinaryOperator 0x55e563525590 <col:21, col:46> 'int' '>='
|       |       |-ParenExpr 0x55e563525538 <col:21, col:41> 'unsigned int'
|       |       | `-CStyleCastExpr 0x55e563525510 <col:22, col:36> 'unsigned int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e5635254f8 <col:36> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e5635254c0 <col:36> 'unsigned int' lvalue ParmVar 0x55e5635252b8 'right' 'unsigned int'
|       |       `-ImplicitCastExpr 0x55e563525578 <col:46> 'unsigned int' <IntegralCast>
|       |         `-IntegerLiteral 0x55e563525558 <col:46> 'int' 32
|       |-ImplicitCastExpr 0x55e563525780 <line:527:5, col:21> 'int64_t':'long' <LValueToRValue>
|       | `-ParenExpr 0x55e563525650 <col:5, col:21> 'int64_t':'long' lvalue
|       |   `-ParenExpr 0x55e563525630 </usr/include/random_inc.h:79:26, col:32> 'int64_t':'long' lvalue
|       |     `-DeclRefExpr 0x55e563525610 </usr/include/safe_math.h:527:16> 'int64_t':'long' lvalue ParmVar 0x55e563525238 'left' 'int64_t':'long'
|       `-ParenExpr 0x55e563525760 <line:529:5, col:35> 'int64_t':'long'
|         `-BinaryOperator 0x55e563525740 <col:6, col:34> 'int64_t':'long' '>>'
|           |-ImplicitCastExpr 0x55e563525728 <col:6> 'int64_t':'long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563525670 <col:6> 'int64_t':'long' lvalue ParmVar 0x55e563525238 'left' 'int64_t':'long'
|           `-ParenExpr 0x55e563525708 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e5635256e0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e5635256c8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563525690 <col:29> 'unsigned int' lvalue ParmVar 0x55e5635252b8 'right' 'unsigned int'
|-FunctionDecl 0x55e5635259b0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:543:1> <scratch space>:122:1 safe_unary_minus_func_uint8_t_u 'uint8_t (uint8_t)' static
| |-ParmVarDecl 0x55e563525860 </usr/include/safe_math.h:539:39, col:47> col:47 used ui 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563526b20 <line:540:1, line:543:1>
|   `-ReturnStmt 0x55e563526b10 <line:542:3, col:11>
|     `-ImplicitCastExpr 0x55e563526af8 <col:10, col:11> 'uint8_t':'unsigned char' <IntegralCast>
|       `-UnaryOperator 0x55e563526ae0 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55e563526ac8 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563526ab0 <col:11> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55e563525a60 <col:11> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563525860 'ui' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e563526d18 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:550:1> <scratch space>:123:1 safe_add_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55e563526b48 </usr/include/safe_math.h:546:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563526bc0 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563526eb8 <line:547:1, line:550:1>
|   `-ReturnStmt 0x55e563526ea8 <line:549:3, col:16>
|     `-ImplicitCastExpr 0x55e563526e90 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55e563526e70 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x55e563526e28 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563526e10 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e563526dd0 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563526b48 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x55e563526e58 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563526e40 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55e563526df0 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563526bc0 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e563526ff8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:557:1> <scratch space>:124:1 safe_sub_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55e563526ee0 </usr/include/safe_math.h:553:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563526f58 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563527198 <line:554:1, line:557:1>
|   `-ReturnStmt 0x55e563527188 <line:556:3, col:16>
|     `-ImplicitCastExpr 0x55e563527170 <col:10, col:16> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55e563527150 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x55e563527108 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635270f0 <col:10> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e5635270b0 <col:10> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563526ee0 'ui1' 'uint8_t':'unsigned char'
|         `-ImplicitCastExpr 0x55e563527138 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563527120 <col:16> 'uint8_t':'unsigned char' <LValueToRValue>
|             `-DeclRefExpr 0x55e5635270d0 <col:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563526f58 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e5635272d8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:564:1> <scratch space>:125:1 safe_mul_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55e5635271c0 </usr/include/safe_math.h:560:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563527238 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563527508 <line:561:1, line:564:1>
|   `-ReturnStmt 0x55e5635274f8 <line:563:3, col:50>
|     `-ImplicitCastExpr 0x55e5635274e0 <col:10, col:50> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55e5635274c0 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x55e563527408 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x55e5635273e0 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55e5635273c8 <col:25> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55e563527390 <col:25> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635271c0 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e5635274a0 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x55e563527478 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e563527460 <col:47> 'uint8_t':'unsigned char' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55e563527428 <col:47> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527238 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e563527648 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:576:1> <scratch space>:126:1 safe_mod_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55e563527530 </usr/include/safe_math.h:567:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e5635275a8 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563527978 <line:568:1, line:576:1>
|   `-ReturnStmt 0x55e563527968 <line:570:3, line:575:15>
|     `-ImplicitCastExpr 0x55e563527950 <line:572:5, line:575:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563527920 <line:572:5, line:575:15> 'int'
|         |-ParenExpr 0x55e563527790 <line:572:5, col:14> 'int'
|         | `-BinaryOperator 0x55e563527770 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55e563527758 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55e563527740 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55e563527700 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635275a8 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x55e563527720 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55e563527908 <line:573:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5635278f0 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e5635277f0 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e5635277d0 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e5635277b0 </usr/include/safe_math.h:573:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527530 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e5635278d0 <line:575:5, col:15> 'int'
|           `-BinaryOperator 0x55e5635278b0 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55e563527868 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563527850 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563527810 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527530 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55e563527898 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e563527880 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x55e563527830 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635275a8 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e563527ab8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:588:1> <scratch space>:127:1 safe_div_func_uint8_t_u_u 'uint8_t (uint8_t, uint8_t)' static
| |-ParmVarDecl 0x55e5635279a0 </usr/include/safe_math.h:579:33, col:41> col:41 used ui1 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563527a18 <col:46, col:54> col:54 used ui2 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e563527de8 <line:580:1, line:588:1>
|   `-ReturnStmt 0x55e563527dd8 <line:582:3, line:587:15>
|     `-ImplicitCastExpr 0x55e563527dc0 <line:584:5, line:587:15> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563527d90 <line:584:5, line:587:15> 'int'
|         |-ParenExpr 0x55e563527c00 <line:584:5, col:14> 'int'
|         | `-BinaryOperator 0x55e563527be0 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55e563527bc8 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55e563527bb0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55e563527b70 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527a18 'ui2' 'uint8_t':'unsigned char'
|         |   `-IntegerLiteral 0x55e563527b90 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55e563527d78 <line:585:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563527d60 <col:5, col:20> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563527c60 <col:5, col:20> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e563527c40 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e563527c20 </usr/include/safe_math.h:585:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635279a0 'ui1' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e563527d40 <line:587:5, col:15> 'int'
|           `-BinaryOperator 0x55e563527d20 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55e563527cd8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563527cc0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563527c80 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635279a0 'ui1' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55e563527d08 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e563527cf0 <col:12> 'uint8_t':'unsigned char' <LValueToRValue>
|                 `-DeclRefExpr 0x55e563527ca0 <col:12> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527a18 'ui2' 'uint8_t':'unsigned char'
|-FunctionDecl 0x55e563527fe8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:600:1> <scratch space>:128:1 safe_lshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x55e563527e10 </usr/include/safe_math.h:591:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563527e90 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e5635286a8 <line:592:1, line:600:1>
|   `-ReturnStmt 0x55e563528698 <line:594:3, line:599:26>
|     `-ImplicitCastExpr 0x55e563528680 <line:596:5, line:599:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563528650 <line:596:5, line:599:26> 'int'
|         |-ParenExpr 0x55e563528478 <line:596:5, col:88> 'int'
|         | `-BinaryOperator 0x55e563528458 <col:6, col:87> 'int' '||'
|         |   |-BinaryOperator 0x55e563528290 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x55e563528178 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x55e563528158 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x55e563528118 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x55e5635280f0 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x55e5635280d8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x55e5635280a0 <col:13> 'int' lvalue ParmVar 0x55e563527e90 'right' 'int'
|         |   | |   `-IntegerLiteral 0x55e563528138 <col:22> 'int' 0
|         |   | `-ParenExpr 0x55e563528270 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x55e563528250 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x55e563528210 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x55e5635281e8 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e5635281d0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e563528198 <col:35> 'int' lvalue ParmVar 0x55e563527e90 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e563528230 <col:45> 'int' 32
|         |   `-ParenExpr 0x55e563528438 <col:52, col:87> 'int'
|         |     `-BinaryOperator 0x55e563528418 <col:53, col:86> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563528400 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e5635283e8 <col:53> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e5635282b0 <col:53> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527e10 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x55e5635283c8 <col:60, col:86> 'int'
|         |         `-BinaryOperator 0x55e5635283a8 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:596:85> 'int' '>>'
|         |           |-ParenExpr 0x55e5635282f0 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x55e5635282d0 <col:22> 'int' 255
|         |           `-ParenExpr 0x55e563528388 </usr/include/safe_math.h:596:74, col:85> 'int'
|         |             `-CStyleCastExpr 0x55e563528360 <col:75, col:80> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563528348 <col:80> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563528310 <col:80> 'int' lvalue ParmVar 0x55e563527e90 'right' 'int'
|         |-ImplicitCastExpr 0x55e563528638 <line:597:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563528620 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e5635284d8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e5635284b8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e563528498 </usr/include/safe_math.h:597:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527e10 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e563528600 <line:599:5, col:26> 'int'
|           `-BinaryOperator 0x55e5635285e0 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55e5635285c8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e5635285b0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e5635284f8 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563527e10 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55e563528590 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563528568 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563528550 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563528518 <col:20> 'int' lvalue ParmVar 0x55e563527e90 'right' 'int'
|-FunctionDecl 0x55e5635288a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:612:1> <scratch space>:129:1 safe_lshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x55e5635286d0 </usr/include/safe_math.h:603:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563528750 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e563528e78 <line:604:1, line:612:1>
|   `-ReturnStmt 0x55e563528e68 <line:606:3, line:611:35>
|     `-ImplicitCastExpr 0x55e563528e50 <line:608:5, line:611:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563528e20 <line:608:5, line:611:35> 'int'
|         |-ParenExpr 0x55e563528c48 <line:608:5, col:84> 'int'
|         | `-BinaryOperator 0x55e563528c28 <col:6, col:83> 'int' '||'
|         |   |-ParenExpr 0x55e563528a50 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x55e563528a30 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x55e5635289d8 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x55e5635289b0 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55e563528998 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55e563528960 <col:22> 'unsigned int' lvalue ParmVar 0x55e563528750 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x55e563528a18 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x55e5635289f8 <col:32> 'int' 32
|         |   `-ParenExpr 0x55e563528c08 <col:39, col:83> 'int'
|         |     `-BinaryOperator 0x55e563528be8 <col:40, col:82> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563528bd0 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563528bb8 <col:40> 'uint8_t':'unsigned char' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e563528a70 <col:40> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635286d0 'left' 'uint8_t':'unsigned char'
|         |       `-ParenExpr 0x55e563528b98 <col:47, col:82> 'int'
|         |         `-BinaryOperator 0x55e563528b78 </usr/include/stdint.h:116:21, /usr/include/safe_math.h:608:81> 'int' '>>'
|         |           |-ParenExpr 0x55e563528ac0 </usr/include/stdint.h:116:21, col:25> 'int'
|         |           | `-IntegerLiteral 0x55e563528a90 <col:22> 'int' 255
|         |           `-ParenExpr 0x55e563528b58 </usr/include/safe_math.h:608:61, col:81> 'unsigned int'
|         |             `-CStyleCastExpr 0x55e563528b30 <col:62, col:76> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563528b18 <col:76> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563528ae0 <col:76> 'unsigned int' lvalue ParmVar 0x55e563528750 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55e563528e08 <line:609:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563528df0 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563528ca8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e563528c88 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e563528c68 </usr/include/safe_math.h:609:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635286d0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e563528dd0 <line:611:5, col:35> 'int'
|           `-BinaryOperator 0x55e563528db0 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55e563528d98 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563528d80 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563528cc8 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635286d0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55e563528d60 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e563528d38 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563528d20 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563528ce8 <col:29> 'unsigned int' lvalue ParmVar 0x55e563528750 'right' 'unsigned int'
|-FunctionDecl 0x55e563528fc0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:624:1> <scratch space>:130:1 safe_rshift_func_uint8_t_u_s 'uint8_t (uint8_t, int)' static
| |-ParmVarDecl 0x55e563528ea0 </usr/include/safe_math.h:615:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563528f20 <col:50, col:54> col:54 used right 'int'
| `-CompoundStmt 0x55e5635294b8 <line:616:1, line:624:1>
|   `-ReturnStmt 0x55e5635294a8 <line:618:3, line:623:26>
|     `-ImplicitCastExpr 0x55e563529490 <line:620:5, line:623:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563529460 <line:620:5, line:623:26> 'int'
|         |-ParenExpr 0x55e563529288 <line:620:5, col:48> 'int'
|         | `-BinaryOperator 0x55e563529268 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x55e563529150 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x55e563529130 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x55e5635290f0 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x55e5635290c8 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55e5635290b0 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55e563529078 <col:13> 'int' lvalue ParmVar 0x55e563528f20 'right' 'int'
|         |   |   `-IntegerLiteral 0x55e563529110 <col:22> 'int' 0
|         |   `-ParenExpr 0x55e563529248 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x55e563529228 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x55e5635291e8 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x55e5635291c0 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e5635291a8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e563529170 <col:35> 'int' lvalue ParmVar 0x55e563528f20 'right' 'int'
|         |       `-IntegerLiteral 0x55e563529208 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x55e563529448 <line:621:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563529430 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e5635292e8 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e5635292c8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e5635292a8 </usr/include/safe_math.h:621:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563528ea0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e563529410 <line:623:5, col:26> 'int'
|           `-BinaryOperator 0x55e5635293f0 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55e5635293d8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e5635293c0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563529308 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e563528ea0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55e5635293a0 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563529378 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563529360 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563529328 <col:20> 'int' lvalue ParmVar 0x55e563528f20 'right' 'int'
|-FunctionDecl 0x55e563529600 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:636:1> <scratch space>:131:1 safe_rshift_func_uint8_t_u_u 'uint8_t (uint8_t, unsigned int)' static
| |-ParmVarDecl 0x55e5635294e0 </usr/include/safe_math.h:627:36, col:44> col:44 used left 'uint8_t':'unsigned char'
| |-ParmVarDecl 0x55e563529560 <col:50, col:63> col:63 used right 'unsigned int'
| `-CompoundStmt 0x55e5635299d8 <line:628:1, line:636:1>
|   `-ReturnStmt 0x55e5635299c8 <line:630:3, line:635:35>
|     `-ImplicitCastExpr 0x55e5635299b0 <line:632:5, line:635:35> 'uint8_t':'unsigned char' <IntegralCast>
|       `-ConditionalOperator 0x55e563529980 <line:632:5, line:635:35> 'int'
|         |-ParenExpr 0x55e5635297a8 <line:632:5, col:33> 'int'
|         | `-BinaryOperator 0x55e563529788 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x55e563529730 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x55e563529708 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x55e5635296f0 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x55e5635296b8 <col:21> 'unsigned int' lvalue ParmVar 0x55e563529560 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x55e563529770 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x55e563529750 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x55e563529968 <line:633:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563529950 <col:5, col:21> 'uint8_t':'unsigned char' <LValueToRValue>
|         |   `-ParenExpr 0x55e563529808 <col:5, col:21> 'uint8_t':'unsigned char' lvalue
|         |     `-ParenExpr 0x55e5635297e8 </usr/include/random_inc.h:79:26, col:32> 'uint8_t':'unsigned char' lvalue
|         |       `-DeclRefExpr 0x55e5635297c8 </usr/include/safe_math.h:633:16> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635294e0 'left' 'uint8_t':'unsigned char'
|         `-ParenExpr 0x55e563529930 <line:635:5, col:35> 'int'
|           `-BinaryOperator 0x55e563529910 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55e5635298f8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e5635298e0 <col:6> 'uint8_t':'unsigned char' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563529828 <col:6> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e5635294e0 'left' 'uint8_t':'unsigned char'
|             `-ParenExpr 0x55e5635298c0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e563529898 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563529880 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563529848 <col:29> 'unsigned int' lvalue ParmVar 0x55e563529560 'right' 'unsigned int'
|-FunctionDecl 0x55e563529bb0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:645:1> <scratch space>:132:1 safe_unary_minus_func_uint16_t_u 'uint16_t (uint16_t)' static
| |-ParmVarDecl 0x55e563529a60 </usr/include/safe_math.h:641:40, col:49> col:49 used ui 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e563529cf0 <line:642:1, line:645:1>
|   `-ReturnStmt 0x55e563529ce0 <line:644:3, col:11>
|     `-ImplicitCastExpr 0x55e563529cc8 <col:10, col:11> 'uint16_t':'unsigned short' <IntegralCast>
|       `-UnaryOperator 0x55e563529cb0 <col:10, col:11> 'int' prefix '-' cannot overflow
|         `-ImplicitCastExpr 0x55e563529c98 <col:11> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e563529c80 <col:11> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55e563529c60 <col:11> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563529a60 'ui' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e563529ee8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:652:1> <scratch space>:133:1 safe_add_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55e563529d18 </usr/include/safe_math.h:648:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e563529d90 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e56352a088 <line:649:1, line:652:1>
|   `-ReturnStmt 0x55e56352a078 <line:651:3, col:16>
|     `-ImplicitCastExpr 0x55e56352a060 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55e56352a040 <col:10, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x55e563529ff8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563529fe0 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e563529fa0 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563529d18 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x55e56352a028 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e56352a010 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55e563529fc0 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563529d90 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e56352a1c8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:659:1> <scratch space>:134:1 safe_sub_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55e56352a0b0 </usr/include/safe_math.h:655:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e56352a128 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e56352a368 <line:656:1, line:659:1>
|   `-ReturnStmt 0x55e56352a358 <line:658:3, col:16>
|     `-ImplicitCastExpr 0x55e56352a340 <col:10, col:16> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55e56352a320 <col:10, col:16> 'int' '-'
|         |-ImplicitCastExpr 0x55e56352a2d8 <col:10> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e56352a2c0 <col:10> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e56352a280 <col:10> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a0b0 'ui1' 'uint16_t':'unsigned short'
|         `-ImplicitCastExpr 0x55e56352a308 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x55e56352a2f0 <col:16> 'uint16_t':'unsigned short' <LValueToRValue>
|             `-DeclRefExpr 0x55e56352a2a0 <col:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a128 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e56352a4a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:666:1> <scratch space>:135:1 safe_mul_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55e56352a390 </usr/include/safe_math.h:662:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e56352a408 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e56352a6d8 <line:663:1, line:666:1>
|   `-ReturnStmt 0x55e56352a6c8 <line:665:3, col:50>
|     `-ImplicitCastExpr 0x55e56352a6b0 <col:10, col:50> 'uint16_t':'unsigned short' <IntegralCast>
|       `-BinaryOperator 0x55e56352a690 <col:10, col:50> 'unsigned int' '*'
|         |-ParenExpr 0x55e56352a5d8 <col:10, col:28> 'unsigned int'
|         | `-CStyleCastExpr 0x55e56352a5b0 <col:11, col:25> 'unsigned int' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55e56352a598 <col:25> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55e56352a560 <col:25> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a390 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e56352a670 <col:32, col:50> 'unsigned int'
|           `-CStyleCastExpr 0x55e56352a648 <col:33, col:47> 'unsigned int' <IntegralCast>
|             `-ImplicitCastExpr 0x55e56352a630 <col:47> 'uint16_t':'unsigned short' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55e56352a5f8 <col:47> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a408 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e56352a818 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:678:1> <scratch space>:136:1 safe_mod_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55e56352a700 </usr/include/safe_math.h:669:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e56352a778 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e5634922e8 <line:670:1, line:678:1>
|   `-ReturnStmt 0x55e5634922d8 <line:672:3, line:677:15>
|     `-ImplicitCastExpr 0x55e5634922c0 <line:674:5, line:677:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563492290 <line:674:5, line:677:15> 'int'
|         |-ParenExpr 0x55e56352a960 <line:674:5, col:14> 'int'
|         | `-BinaryOperator 0x55e56352a940 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55e56352a928 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55e56352a910 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55e56352a8d0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a778 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x55e56352a8f0 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55e563492278 <line:675:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563492260 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e56352a9c0 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e56352a9a0 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e56352a980 </usr/include/safe_math.h:675:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a700 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e56352aaa0 <line:677:5, col:15> 'int'
|           `-BinaryOperator 0x55e56352aa80 <col:6, col:12> 'int' '%'
|             |-ImplicitCastExpr 0x55e56352aa38 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e56352aa20 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e56352a9e0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a700 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x55e56352aa68 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e56352aa50 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x55e56352aa00 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e56352a778 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e563492428 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:690:1> <scratch space>:137:1 safe_div_func_uint16_t_u_u 'uint16_t (uint16_t, uint16_t)' static
| |-ParmVarDecl 0x55e563492310 </usr/include/safe_math.h:681:34, col:43> col:43 used ui1 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e563492388 <col:48, col:57> col:57 used ui2 'uint16_t':'unsigned short'
| `-CompoundStmt 0x55e563492758 <line:682:1, line:690:1>
|   `-ReturnStmt 0x55e563492748 <line:684:3, line:689:15>
|     `-ImplicitCastExpr 0x55e563492730 <line:686:5, line:689:15> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563492700 <line:686:5, line:689:15> 'int'
|         |-ParenExpr 0x55e563492570 <line:686:5, col:14> 'int'
|         | `-BinaryOperator 0x55e563492550 <col:6, col:13> 'int' '=='
|         |   |-ImplicitCastExpr 0x55e563492538 <col:6> 'int' <IntegralCast>
|         |   | `-ImplicitCastExpr 0x55e563492520 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   |   `-DeclRefExpr 0x55e5634924e0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492388 'ui2' 'uint16_t':'unsigned short'
|         |   `-IntegerLiteral 0x55e563492500 <col:13> 'int' 0
|         |-ImplicitCastExpr 0x55e5634926e8 <line:687:5, col:20> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e5634926d0 <col:5, col:20> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e5634925d0 <col:5, col:20> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e5634925b0 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e563492590 </usr/include/safe_math.h:687:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492310 'ui1' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e5634926b0 <line:689:5, col:15> 'int'
|           `-BinaryOperator 0x55e563492690 <col:6, col:12> 'int' '/'
|             |-ImplicitCastExpr 0x55e563492648 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563492630 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e5634925f0 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492310 'ui1' 'uint16_t':'unsigned short'
|             `-ImplicitCastExpr 0x55e563492678 <col:12> 'int' <IntegralCast>
|               `-ImplicitCastExpr 0x55e563492660 <col:12> 'uint16_t':'unsigned short' <LValueToRValue>
|                 `-DeclRefExpr 0x55e563492610 <col:12> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492388 'ui2' 'uint16_t':'unsigned short'
|-FunctionDecl 0x55e563492958 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:702:1> <scratch space>:138:1 safe_lshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x55e563492780 </usr/include/safe_math.h:693:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e563492800 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e563493018 <line:694:1, line:702:1>
|   `-ReturnStmt 0x55e563493008 <line:696:3, line:701:26>
|     `-ImplicitCastExpr 0x55e563492ff0 <line:698:5, line:701:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563492fc0 <line:698:5, line:701:26> 'int'
|         |-ParenExpr 0x55e563492de8 <line:698:5, col:89> 'int'
|         | `-BinaryOperator 0x55e563492dc8 <col:6, col:88> 'int' '||'
|         |   |-BinaryOperator 0x55e563492c00 <col:6, col:47> 'int' '||'
|         |   | |-ParenExpr 0x55e563492ae8 <col:6, col:23> 'int'
|         |   | | `-BinaryOperator 0x55e563492ac8 <col:7, col:22> 'int' '<'
|         |   | |   |-ParenExpr 0x55e563492a88 <col:7, col:18> 'int'
|         |   | |   | `-CStyleCastExpr 0x55e563492a60 <col:8, col:13> 'int' <NoOp>
|         |   | |   |   `-ImplicitCastExpr 0x55e563492a48 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   | |   |     `-DeclRefExpr 0x55e563492a10 <col:13> 'int' lvalue ParmVar 0x55e563492800 'right' 'int'
|         |   | |   `-IntegerLiteral 0x55e563492aa8 <col:22> 'int' 0
|         |   | `-ParenExpr 0x55e563492be0 <col:28, col:47> 'int'
|         |   |   `-BinaryOperator 0x55e563492bc0 <col:29, col:45> 'int' '>='
|         |   |     |-ParenExpr 0x55e563492b80 <col:29, col:40> 'int'
|         |   |     | `-CStyleCastExpr 0x55e563492b58 <col:30, col:35> 'int' <NoOp>
|         |   |     |   `-ImplicitCastExpr 0x55e563492b40 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |     |     `-DeclRefExpr 0x55e563492b08 <col:35> 'int' lvalue ParmVar 0x55e563492800 'right' 'int'
|         |   |     `-IntegerLiteral 0x55e563492ba0 <col:45> 'int' 32
|         |   `-ParenExpr 0x55e563492da8 <col:52, col:88> 'int'
|         |     `-BinaryOperator 0x55e563492d88 <col:53, col:87> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563492d70 <col:53> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563492d58 <col:53> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e563492c20 <col:53> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492780 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x55e563492d38 <col:60, col:87> 'int'
|         |         `-BinaryOperator 0x55e563492d18 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:698:86> 'int' '>>'
|         |           |-ParenExpr 0x55e563492c60 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x55e563492c40 <col:23> 'int' 65535
|         |           `-ParenExpr 0x55e563492cf8 </usr/include/safe_math.h:698:75, col:86> 'int'
|         |             `-CStyleCastExpr 0x55e563492cd0 <col:76, col:81> 'int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563492cb8 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563492c80 <col:81> 'int' lvalue ParmVar 0x55e563492800 'right' 'int'
|         |-ImplicitCastExpr 0x55e563492fa8 <line:699:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563492f90 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e563492e48 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e563492e28 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e563492e08 </usr/include/safe_math.h:699:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492780 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e563492f70 <line:701:5, col:26> 'int'
|           `-BinaryOperator 0x55e563492f50 <col:6, col:25> 'int' '<<'
|             |-ImplicitCastExpr 0x55e563492f38 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563492f20 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563492e68 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563492780 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55e563492f00 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563492ed8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563492ec0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563492e88 <col:20> 'int' lvalue ParmVar 0x55e563492800 'right' 'int'
|-FunctionDecl 0x55e563493218 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:714:1> <scratch space>:139:1 safe_lshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x55e563493040 </usr/include/safe_math.h:705:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e5634930c0 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e5634937d8 <line:706:1, line:714:1>
|   `-ReturnStmt 0x55e5634937c8 <line:708:3, line:713:35>
|     `-ImplicitCastExpr 0x55e5634937b0 <line:710:5, line:713:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563493780 <line:710:5, line:713:35> 'int'
|         |-ParenExpr 0x55e5634935a8 <line:710:5, col:85> 'int'
|         | `-BinaryOperator 0x55e563493588 <col:6, col:84> 'int' '||'
|         |   |-ParenExpr 0x55e5634933c0 <col:6, col:34> 'int'
|         |   | `-BinaryOperator 0x55e5634933a0 <col:7, col:32> 'int' '>='
|         |   |   |-ParenExpr 0x55e563493348 <col:7, col:27> 'unsigned int'
|         |   |   | `-CStyleCastExpr 0x55e563493320 <col:8, col:22> 'unsigned int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55e563493308 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55e5634932d0 <col:22> 'unsigned int' lvalue ParmVar 0x55e5634930c0 'right' 'unsigned int'
|         |   |   `-ImplicitCastExpr 0x55e563493388 <col:32> 'unsigned int' <IntegralCast>
|         |   |     `-IntegerLiteral 0x55e563493368 <col:32> 'int' 32
|         |   `-ParenExpr 0x55e563493568 <col:39, col:84> 'int'
|         |     `-BinaryOperator 0x55e563493548 <col:40, col:83> 'int' '>'
|         |       |-ImplicitCastExpr 0x55e563493530 <col:40> 'int' <IntegralCast>
|         |       | `-ImplicitCastExpr 0x55e563493518 <col:40> 'uint16_t':'unsigned short' <LValueToRValue>
|         |       |   `-DeclRefExpr 0x55e5634933e0 <col:40> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493040 'left' 'uint16_t':'unsigned short'
|         |       `-ParenExpr 0x55e5634934f8 <col:47, col:83> 'int'
|         |         `-BinaryOperator 0x55e5634934d8 </usr/include/stdint.h:117:22, /usr/include/safe_math.h:710:82> 'int' '>>'
|         |           |-ParenExpr 0x55e563493420 </usr/include/stdint.h:117:22, col:28> 'int'
|         |           | `-IntegerLiteral 0x55e563493400 <col:23> 'int' 65535
|         |           `-ParenExpr 0x55e5634934b8 </usr/include/safe_math.h:710:62, col:82> 'unsigned int'
|         |             `-CStyleCastExpr 0x55e563493490 <col:63, col:77> 'unsigned int' <NoOp>
|         |               `-ImplicitCastExpr 0x55e563493478 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |                 `-DeclRefExpr 0x55e563493440 <col:77> 'unsigned int' lvalue ParmVar 0x55e5634930c0 'right' 'unsigned int'
|         |-ImplicitCastExpr 0x55e563493768 <line:711:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563493750 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e563493608 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e5634935e8 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e5634935c8 </usr/include/safe_math.h:711:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493040 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e563493730 <line:713:5, col:35> 'int'
|           `-BinaryOperator 0x55e563493710 <col:6, col:34> 'int' '<<'
|             |-ImplicitCastExpr 0x55e5634936f8 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e5634936e0 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563493628 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493040 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55e5634936c0 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e563493698 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563493680 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563493648 <col:29> 'unsigned int' lvalue ParmVar 0x55e5634930c0 'right' 'unsigned int'
|-FunctionDecl 0x55e563493920 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:726:1> <scratch space>:140:1 safe_rshift_func_uint16_t_u_s 'uint16_t (uint16_t, int)' static
| |-ParmVarDecl 0x55e563493800 </usr/include/safe_math.h:717:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e563493880 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e563493e18 <line:718:1, line:726:1>
|   `-ReturnStmt 0x55e563493e08 <line:720:3, line:725:26>
|     `-ImplicitCastExpr 0x55e563493df0 <line:722:5, line:725:26> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563493dc0 <line:722:5, line:725:26> 'int'
|         |-ParenExpr 0x55e563493be8 <line:722:5, col:48> 'int'
|         | `-BinaryOperator 0x55e563493bc8 <col:6, col:47> 'int' '||'
|         |   |-ParenExpr 0x55e563493ab0 <col:6, col:23> 'int'
|         |   | `-BinaryOperator 0x55e563493a90 <col:7, col:22> 'int' '<'
|         |   |   |-ParenExpr 0x55e563493a50 <col:7, col:18> 'int'
|         |   |   | `-CStyleCastExpr 0x55e563493a28 <col:8, col:13> 'int' <NoOp>
|         |   |   |   `-ImplicitCastExpr 0x55e563493a10 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|         |   |   |     `-DeclRefExpr 0x55e5634939d8 <col:13> 'int' lvalue ParmVar 0x55e563493880 'right' 'int'
|         |   |   `-IntegerLiteral 0x55e563493a70 <col:22> 'int' 0
|         |   `-ParenExpr 0x55e563493ba8 <col:28, col:47> 'int'
|         |     `-BinaryOperator 0x55e563493b88 <col:29, col:45> 'int' '>='
|         |       |-ParenExpr 0x55e563493b48 <col:29, col:40> 'int'
|         |       | `-CStyleCastExpr 0x55e563493b20 <col:30, col:35> 'int' <NoOp>
|         |       |   `-ImplicitCastExpr 0x55e563493b08 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|         |       |     `-DeclRefExpr 0x55e563493ad0 <col:35> 'int' lvalue ParmVar 0x55e563493880 'right' 'int'
|         |       `-IntegerLiteral 0x55e563493b68 <col:45> 'int' 32
|         |-ImplicitCastExpr 0x55e563493da8 <line:723:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563493d90 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e563493c48 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e563493c28 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e563493c08 </usr/include/safe_math.h:723:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493800 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e563493d70 <line:725:5, col:26> 'int'
|           `-BinaryOperator 0x55e563493d50 <col:6, col:25> 'int' '>>'
|             |-ImplicitCastExpr 0x55e563493d38 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563493d20 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563493c68 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493800 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55e563493d00 <col:14, col:25> 'int'
|               `-CStyleCastExpr 0x55e563493cd8 <col:15, col:20> 'int' <NoOp>
|                 `-ImplicitCastExpr 0x55e563493cc0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e563493c88 <col:20> 'int' lvalue ParmVar 0x55e563493880 'right' 'int'
|-FunctionDecl 0x55e563493f60 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:738:1> <scratch space>:141:1 safe_rshift_func_uint16_t_u_u 'uint16_t (uint16_t, unsigned int)' static
| |-ParmVarDecl 0x55e563493e40 </usr/include/safe_math.h:729:37, col:46> col:46 used left 'uint16_t':'unsigned short'
| |-ParmVarDecl 0x55e563493ec0 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e563530bc0 <line:730:1, line:738:1>
|   `-ReturnStmt 0x55e563530bb0 <line:732:3, line:737:35>
|     `-ImplicitCastExpr 0x55e563530b98 <line:734:5, line:737:35> 'uint16_t':'unsigned short' <IntegralCast>
|       `-ConditionalOperator 0x55e563530b68 <line:734:5, line:737:35> 'int'
|         |-ParenExpr 0x55e563494108 <line:734:5, col:33> 'int'
|         | `-BinaryOperator 0x55e5634940e8 <col:6, col:31> 'int' '>='
|         |   |-ParenExpr 0x55e563494090 <col:6, col:26> 'unsigned int'
|         |   | `-CStyleCastExpr 0x55e563494068 <col:7, col:21> 'unsigned int' <NoOp>
|         |   |   `-ImplicitCastExpr 0x55e563494050 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|         |   |     `-DeclRefExpr 0x55e563494018 <col:21> 'unsigned int' lvalue ParmVar 0x55e563493ec0 'right' 'unsigned int'
|         |   `-ImplicitCastExpr 0x55e5634940d0 <col:31> 'unsigned int' <IntegralCast>
|         |     `-IntegerLiteral 0x55e5634940b0 <col:31> 'int' 32
|         |-ImplicitCastExpr 0x55e563530b50 <line:735:5, col:21> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x55e563530b38 <col:5, col:21> 'uint16_t':'unsigned short' <LValueToRValue>
|         |   `-ParenExpr 0x55e563494168 <col:5, col:21> 'uint16_t':'unsigned short' lvalue
|         |     `-ParenExpr 0x55e563494148 </usr/include/random_inc.h:79:26, col:32> 'uint16_t':'unsigned short' lvalue
|         |       `-DeclRefExpr 0x55e563494128 </usr/include/safe_math.h:735:16> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493e40 'left' 'uint16_t':'unsigned short'
|         `-ParenExpr 0x55e563530b18 <line:737:5, col:35> 'int'
|           `-BinaryOperator 0x55e563530af8 <col:6, col:34> 'int' '>>'
|             |-ImplicitCastExpr 0x55e563530ae0 <col:6> 'int' <IntegralCast>
|             | `-ImplicitCastExpr 0x55e563494240 <col:6> 'uint16_t':'unsigned short' <LValueToRValue>
|             |   `-DeclRefExpr 0x55e563494188 <col:6> 'uint16_t':'unsigned short' lvalue ParmVar 0x55e563493e40 'left' 'uint16_t':'unsigned short'
|             `-ParenExpr 0x55e563494220 <col:14, col:34> 'unsigned int'
|               `-CStyleCastExpr 0x55e5634941f8 <col:15, col:29> 'unsigned int' <NoOp>
|                 `-ImplicitCastExpr 0x55e5634941e0 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                   `-DeclRefExpr 0x55e5634941a8 <col:29> 'unsigned int' lvalue ParmVar 0x55e563493ec0 'right' 'unsigned int'
|-FunctionDecl 0x55e563530d30 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:747:1> <scratch space>:142:1 safe_unary_minus_func_uint32_t_u 'uint32_t (uint32_t)' static
| |-ParmVarDecl 0x55e563530be8 </usr/include/safe_math.h:743:40, col:49> col:49 used ui 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563530e40 <line:744:1, line:747:1>
|   `-ReturnStmt 0x55e563530e30 <line:746:3, col:11>
|     `-UnaryOperator 0x55e563530e18 <col:10, col:11> 'uint32_t':'unsigned int' prefix '-'
|       `-ImplicitCastExpr 0x55e563530e00 <col:11> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55e563530de0 <col:11> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563530be8 'ui' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e563531038 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:754:1> <scratch space>:143:1 safe_add_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55e563530e68 </usr/include/safe_math.h:750:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563530ee0 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563531190 <line:751:1, line:754:1>
|   `-ReturnStmt 0x55e563531180 <line:753:3, col:16>
|     `-BinaryOperator 0x55e563531160 <col:10, col:16> 'uint32_t':'unsigned int' '+'
|       |-ImplicitCastExpr 0x55e563531130 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x55e5635310f0 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563530e68 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x55e563531148 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55e563531110 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563530ee0 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e5635312d0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:761:1> <scratch space>:144:1 safe_sub_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55e5635311b8 </usr/include/safe_math.h:757:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563531230 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563531428 <line:758:1, line:761:1>
|   `-ReturnStmt 0x55e563531418 <line:760:3, col:16>
|     `-BinaryOperator 0x55e5635313f8 <col:10, col:16> 'uint32_t':'unsigned int' '-'
|       |-ImplicitCastExpr 0x55e5635313c8 <col:10> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x55e563531388 <col:10> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e5635311b8 'ui1' 'uint32_t':'unsigned int'
|       `-ImplicitCastExpr 0x55e5635313e0 <col:16> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55e5635313a8 <col:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531230 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e563531568 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:768:1> <scratch space>:145:1 safe_mul_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55e563531450 </usr/include/safe_math.h:764:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e5635314c8 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563531780 <line:765:1, line:768:1>
|   `-ReturnStmt 0x55e563531770 <line:767:3, col:50>
|     `-BinaryOperator 0x55e563531750 <col:10, col:50> 'unsigned int' '*'
|       |-ParenExpr 0x55e563531698 <col:10, col:28> 'unsigned int'
|       | `-CStyleCastExpr 0x55e563531670 <col:11, col:25> 'unsigned int' <NoOp>
|       |   `-ImplicitCastExpr 0x55e563531658 <col:25> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |     `-DeclRefExpr 0x55e563531620 <col:25> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531450 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e563531730 <col:32, col:50> 'unsigned int'
|         `-CStyleCastExpr 0x55e563531708 <col:33, col:47> 'unsigned int' <NoOp>
|           `-ImplicitCastExpr 0x55e5635316f0 <col:47> 'uint32_t':'unsigned int' <LValueToRValue> part_of_explicit_cast
|             `-DeclRefExpr 0x55e5635316b8 <col:47> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e5635314c8 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e5635318c0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:780:1> <scratch space>:146:1 safe_mod_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55e5635317a8 </usr/include/safe_math.h:771:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563531820 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563531b90 <line:772:1, line:780:1>
|   `-ReturnStmt 0x55e563531b80 <line:774:3, line:779:15>
|     `-ConditionalOperator 0x55e563531b50 <line:776:5, line:779:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563531a08 <line:776:5, col:14> 'int'
|       | `-BinaryOperator 0x55e5635319e8 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e5635319b8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e563531978 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531820 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x55e5635319d0 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563531998 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55e563531b38 <line:777:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e563531a68 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e563531a48 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563531a28 </usr/include/safe_math.h:777:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e5635317a8 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e563531b18 <line:779:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e563531af8 <col:6, col:12> 'uint32_t':'unsigned int' '%'
|           |-ImplicitCastExpr 0x55e563531ac8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563531a88 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e5635317a8 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x55e563531ae0 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x55e563531aa8 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531820 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e563531cd0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:792:1> <scratch space>:147:1 safe_div_func_uint32_t_u_u 'uint32_t (uint32_t, uint32_t)' static
| |-ParmVarDecl 0x55e563531bb8 </usr/include/safe_math.h:783:34, col:43> col:43 used ui1 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563531c30 <col:48, col:57> col:57 used ui2 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55e563531fa0 <line:784:1, line:792:1>
|   `-ReturnStmt 0x55e563531f90 <line:786:3, line:791:15>
|     `-ConditionalOperator 0x55e563531f60 <line:788:5, line:791:15> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563531e18 <line:788:5, col:14> 'int'
|       | `-BinaryOperator 0x55e563531df8 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e563531dc8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e563531d88 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531c30 'ui2' 'uint32_t':'unsigned int'
|       |   `-ImplicitCastExpr 0x55e563531de0 <col:13> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563531da8 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55e563531f48 <line:789:5, col:20> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e563531e78 <col:5, col:20> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e563531e58 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563531e38 </usr/include/safe_math.h:789:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531bb8 'ui1' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e563531f28 <line:791:5, col:15> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e563531f08 <col:6, col:12> 'uint32_t':'unsigned int' '/'
|           |-ImplicitCastExpr 0x55e563531ed8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563531e98 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531bb8 'ui1' 'uint32_t':'unsigned int'
|           `-ImplicitCastExpr 0x55e563531ef0 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|             `-DeclRefExpr 0x55e563531eb8 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531c30 'ui2' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e563532198 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:804:1> <scratch space>:148:1 safe_lshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x55e563531fc8 </usr/include/safe_math.h:795:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563532048 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e5635327f8 <line:796:1, line:804:1>
|   `-ReturnStmt 0x55e5635327e8 <line:798:3, line:803:26>
|     `-ConditionalOperator 0x55e5635327b8 <line:800:5, line:803:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563532610 <line:800:5, col:89> 'int'
|       | `-BinaryOperator 0x55e5635325f0 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x55e563532440 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x55e563532328 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x55e563532308 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x55e5635322c8 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x55e5635322a0 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x55e563532288 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x55e563532250 <col:13> 'int' lvalue ParmVar 0x55e563532048 'right' 'int'
|       |   | |   `-IntegerLiteral 0x55e5635322e8 <col:22> 'int' 0
|       |   | `-ParenExpr 0x55e563532420 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x55e563532400 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x55e5635323c0 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x55e563532398 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e563532380 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e563532348 <col:35> 'int' lvalue ParmVar 0x55e563532048 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e5635323e0 <col:45> 'int' 32
|       |   `-ParenExpr 0x55e5635325d0 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x55e5635325b0 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e563532598 <col:53> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e563532460 <col:53> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531fc8 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x55e563532578 <col:60, col:87> 'unsigned int'
|       |         `-BinaryOperator 0x55e563532558 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:800:86> 'unsigned int' '>>'
|       |           |-ParenExpr 0x55e5635324a0 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x55e563532480 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x55e563532538 </usr/include/safe_math.h:800:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x55e563532510 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e5635324f8 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e5635324c0 <col:81> 'int' lvalue ParmVar 0x55e563532048 'right' 'int'
|       |-ImplicitCastExpr 0x55e5635327a0 <line:801:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e563532670 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e563532650 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563532630 </usr/include/safe_math.h:801:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531fc8 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e563532780 <line:803:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e563532760 <col:6, col:25> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x55e563532748 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563532690 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563531fc8 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55e563532728 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e563532700 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e5635326e8 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e5635326b0 <col:20> 'int' lvalue ParmVar 0x55e563532048 'right' 'int'
|-FunctionDecl 0x55e5635329b8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:816:1> <scratch space>:149:1 safe_lshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x55e563532820 </usr/include/safe_math.h:807:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e5635328a0 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e563533f58 <line:808:1, line:816:1>
|   `-ReturnStmt 0x55e563533f48 <line:810:3, line:815:35>
|     `-ConditionalOperator 0x55e563533f18 <line:812:5, line:815:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563533d70 <line:812:5, col:85> 'int'
|       | `-BinaryOperator 0x55e563533d50 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x55e563533ba0 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x55e563533b80 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x55e563533b28 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x55e563533b00 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55e563532aa8 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55e563532a70 <col:22> 'unsigned int' lvalue ParmVar 0x55e5635328a0 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x55e563533b68 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55e563533b48 <col:32> 'int' 32
|       |   `-ParenExpr 0x55e563533d30 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x55e563533d10 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e563533cf8 <col:40> 'uint32_t':'unsigned int' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e563533bc0 <col:40> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563532820 'left' 'uint32_t':'unsigned int'
|       |       `-ParenExpr 0x55e563533cd8 <col:47, col:83> 'unsigned int'
|       |         `-BinaryOperator 0x55e563533cb8 </usr/include/stdint.h:118:22, /usr/include/safe_math.h:812:82> 'unsigned int' '>>'
|       |           |-ParenExpr 0x55e563533c00 </usr/include/stdint.h:118:22, col:34> 'unsigned int'
|       |           | `-IntegerLiteral 0x55e563533be0 <col:23> 'unsigned int' 4294967295
|       |           `-ParenExpr 0x55e563533c98 </usr/include/safe_math.h:812:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x55e563533c70 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e563533c58 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e563533c20 <col:77> 'unsigned int' lvalue ParmVar 0x55e5635328a0 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55e563533f00 <line:813:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e563533dd0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e563533db0 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563533d90 </usr/include/safe_math.h:813:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563532820 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e563533ee0 <line:815:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e563533ec0 <col:6, col:34> 'uint32_t':'unsigned int' '<<'
|           |-ImplicitCastExpr 0x55e563533ea8 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563533df0 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563532820 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55e563533e88 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563533e60 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563533e48 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563533e10 <col:29> 'unsigned int' lvalue ParmVar 0x55e5635328a0 'right' 'unsigned int'
|-FunctionDecl 0x55e5635340a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:828:1> <scratch space>:150:1 safe_rshift_func_uint32_t_u_s 'uint32_t (uint32_t, int)' static
| |-ParmVarDecl 0x55e563533f80 </usr/include/safe_math.h:819:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e563534000 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e563534550 <line:820:1, line:828:1>
|   `-ReturnStmt 0x55e563534540 <line:822:3, line:827:26>
|     `-ConditionalOperator 0x55e563534510 <line:824:5, line:827:26> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563534368 <line:824:5, col:48> 'int'
|       | `-BinaryOperator 0x55e563534348 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x55e563534230 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55e563534210 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x55e5635341d0 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x55e5635341a8 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55e563534190 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55e563534158 <col:13> 'int' lvalue ParmVar 0x55e563534000 'right' 'int'
|       |   |   `-IntegerLiteral 0x55e5635341f0 <col:22> 'int' 0
|       |   `-ParenExpr 0x55e563534328 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x55e563534308 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x55e5635342c8 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x55e5635342a0 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e563534288 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e563534250 <col:35> 'int' lvalue ParmVar 0x55e563534000 'right' 'int'
|       |       `-IntegerLiteral 0x55e5635342e8 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x55e5635344f8 <line:825:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e5635343c8 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e5635343a8 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563534388 </usr/include/safe_math.h:825:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563533f80 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e5635344d8 <line:827:5, col:26> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e5635344b8 <col:6, col:25> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x55e5635344a0 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635343e8 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563533f80 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55e563534480 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e563534458 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e563534440 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563534408 <col:20> 'int' lvalue ParmVar 0x55e563534000 'right' 'int'
|-FunctionDecl 0x55e563534698 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:840:1> <scratch space>:151:1 safe_rshift_func_uint32_t_u_u 'uint32_t (uint32_t, unsigned int)' static
| |-ParmVarDecl 0x55e563534578 </usr/include/safe_math.h:831:37, col:46> col:46 used left 'uint32_t':'unsigned int'
| |-ParmVarDecl 0x55e5635345f8 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e563534a28 <line:832:1, line:840:1>
|   `-ReturnStmt 0x55e563534a18 <line:834:3, line:839:35>
|     `-ConditionalOperator 0x55e5635349e8 <line:836:5, line:839:35> 'uint32_t':'unsigned int'
|       |-ParenExpr 0x55e563534840 <line:836:5, col:33> 'int'
|       | `-BinaryOperator 0x55e563534820 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x55e5635347c8 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x55e5635347a0 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x55e563534788 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x55e563534750 <col:21> 'unsigned int' lvalue ParmVar 0x55e5635345f8 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x55e563534808 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55e5635347e8 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x55e5635349d0 <line:837:5, col:21> 'uint32_t':'unsigned int' <LValueToRValue>
|       | `-ParenExpr 0x55e5635348a0 <col:5, col:21> 'uint32_t':'unsigned int' lvalue
|       |   `-ParenExpr 0x55e563534880 </usr/include/random_inc.h:79:26, col:32> 'uint32_t':'unsigned int' lvalue
|       |     `-DeclRefExpr 0x55e563534860 </usr/include/safe_math.h:837:16> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563534578 'left' 'uint32_t':'unsigned int'
|       `-ParenExpr 0x55e5635349b0 <line:839:5, col:35> 'uint32_t':'unsigned int'
|         `-BinaryOperator 0x55e563534990 <col:6, col:34> 'uint32_t':'unsigned int' '>>'
|           |-ImplicitCastExpr 0x55e563534978 <col:6> 'uint32_t':'unsigned int' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635348c0 <col:6> 'uint32_t':'unsigned int' lvalue ParmVar 0x55e563534578 'left' 'uint32_t':'unsigned int'
|           `-ParenExpr 0x55e563534958 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563534930 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563534918 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e5635348e0 <col:29> 'unsigned int' lvalue ParmVar 0x55e5635345f8 'right' 'unsigned int'
|-FunctionDecl 0x55e563534c00 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:850:1> <scratch space>:152:1 safe_unary_minus_func_uint64_t_u 'uint64_t (uint64_t)' static
| |-ParmVarDecl 0x55e563534ab0 </usr/include/safe_math.h:846:40, col:49> col:49 used ui 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e563534d10 <line:847:1, line:850:1>
|   `-ReturnStmt 0x55e563534d00 <line:849:3, col:11>
|     `-UnaryOperator 0x55e563534ce8 <col:10, col:11> 'uint64_t':'unsigned long' prefix '-'
|       `-ImplicitCastExpr 0x55e563534cd0 <col:11> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55e563534cb0 <col:11> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563534ab0 'ui' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e563534f08 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:857:1> <scratch space>:153:1 safe_add_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55e563534d38 </usr/include/safe_math.h:853:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563534db0 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e563535060 <line:854:1, line:857:1>
|   `-ReturnStmt 0x55e563535050 <line:856:3, col:16>
|     `-BinaryOperator 0x55e563535030 <col:10, col:16> 'uint64_t':'unsigned long' '+'
|       |-ImplicitCastExpr 0x55e563535000 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x55e563534fc0 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563534d38 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x55e563535018 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55e563534fe0 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563534db0 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e5635351a0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:864:1> <scratch space>:154:1 safe_sub_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55e563535088 </usr/include/safe_math.h:860:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563535100 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e5635352f8 <line:861:1, line:864:1>
|   `-ReturnStmt 0x55e5635352e8 <line:863:3, col:16>
|     `-BinaryOperator 0x55e5635352c8 <col:10, col:16> 'uint64_t':'unsigned long' '-'
|       |-ImplicitCastExpr 0x55e563535298 <col:10> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-DeclRefExpr 0x55e563535258 <col:10> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535088 'ui1' 'uint64_t':'unsigned long'
|       `-ImplicitCastExpr 0x55e5635352b0 <col:16> 'uint64_t':'unsigned long' <LValueToRValue>
|         `-DeclRefExpr 0x55e563535278 <col:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535100 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e563535438 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:871:1> <scratch space>:155:1 safe_mul_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55e563535320 </usr/include/safe_math.h:867:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563535398 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e563535668 <line:868:1, line:871:1>
|   `-ReturnStmt 0x55e563535658 <line:870:3, col:62>
|     `-ImplicitCastExpr 0x55e563535640 <col:10, col:62> 'uint64_t':'unsigned long' <IntegralCast>
|       `-BinaryOperator 0x55e563535620 <col:10, col:62> 'unsigned long long' '*'
|         |-ParenExpr 0x55e563535568 <col:10, col:34> 'unsigned long long'
|         | `-CStyleCastExpr 0x55e563535540 <col:11, col:31> 'unsigned long long' <IntegralCast>
|         |   `-ImplicitCastExpr 0x55e563535528 <col:31> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|         |     `-DeclRefExpr 0x55e5635354f0 <col:31> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535320 'ui1' 'uint64_t':'unsigned long'
|         `-ParenExpr 0x55e563535600 <col:38, col:62> 'unsigned long long'
|           `-CStyleCastExpr 0x55e5635355d8 <col:39, col:59> 'unsigned long long' <IntegralCast>
|             `-ImplicitCastExpr 0x55e5635355c0 <col:59> 'uint64_t':'unsigned long' <LValueToRValue> part_of_explicit_cast
|               `-DeclRefExpr 0x55e563535588 <col:59> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535398 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e5635357a8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:883:1> <scratch space>:156:1 safe_mod_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55e563535690 </usr/include/safe_math.h:874:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563535708 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e563535a78 <line:875:1, line:883:1>
|   `-ReturnStmt 0x55e563535a68 <line:877:3, line:882:15>
|     `-ConditionalOperator 0x55e563535a38 <line:879:5, line:882:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e5635358f0 <line:879:5, col:14> 'int'
|       | `-BinaryOperator 0x55e5635358d0 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e5635358a0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e563535860 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535708 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x55e5635358b8 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563535880 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55e563535a20 <line:880:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e563535950 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e563535930 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e563535910 </usr/include/safe_math.h:880:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535690 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e563535a00 <line:882:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e5635359e0 <col:6, col:12> 'uint64_t':'unsigned long' '%'
|           |-ImplicitCastExpr 0x55e5635359b0 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563535970 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535690 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x55e5635359c8 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x55e563535990 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535708 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e563535c28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:895:1> <scratch space>:157:1 safe_div_func_uint64_t_u_u 'uint64_t (uint64_t, uint64_t)' static
| |-ParmVarDecl 0x55e563535b10 </usr/include/safe_math.h:886:34, col:43> col:43 used ui1 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563535b88 <col:48, col:57> col:57 used ui2 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e563535ef8 <line:887:1, line:895:1>
|   `-ReturnStmt 0x55e563535ee8 <line:889:3, line:894:15>
|     `-ConditionalOperator 0x55e563535eb8 <line:891:5, line:894:15> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e563535d70 <line:891:5, col:14> 'int'
|       | `-BinaryOperator 0x55e563535d50 <col:6, col:13> 'int' '=='
|       |   |-ImplicitCastExpr 0x55e563535d20 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|       |   | `-DeclRefExpr 0x55e563535ce0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535b88 'ui2' 'uint64_t':'unsigned long'
|       |   `-ImplicitCastExpr 0x55e563535d38 <col:13> 'uint64_t':'unsigned long' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563535d00 <col:13> 'int' 0
|       |-ImplicitCastExpr 0x55e563535ea0 <line:892:5, col:20> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e563535dd0 <col:5, col:20> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e563535db0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e563535d90 </usr/include/safe_math.h:892:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535b10 'ui1' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e563535e80 <line:894:5, col:15> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e563535e60 <col:6, col:12> 'uint64_t':'unsigned long' '/'
|           |-ImplicitCastExpr 0x55e563535e30 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563535df0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535b10 'ui1' 'uint64_t':'unsigned long'
|           `-ImplicitCastExpr 0x55e563535e48 <col:12> 'uint64_t':'unsigned long' <LValueToRValue>
|             `-DeclRefExpr 0x55e563535e10 <col:12> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535b88 'ui2' 'uint64_t':'unsigned long'
|-FunctionDecl 0x55e5635360f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:907:1> <scratch space>:158:1 safe_lshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x55e563535f20 </usr/include/safe_math.h:898:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563535fa0 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e563536758 <line:899:1, line:907:1>
|   `-ReturnStmt 0x55e563536748 <line:901:3, line:906:26>
|     `-ConditionalOperator 0x55e563536718 <line:903:5, line:906:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e563536570 <line:903:5, col:89> 'int'
|       | `-BinaryOperator 0x55e563536550 <col:6, col:88> 'int' '||'
|       |   |-BinaryOperator 0x55e5635363a0 <col:6, col:47> 'int' '||'
|       |   | |-ParenExpr 0x55e563536288 <col:6, col:23> 'int'
|       |   | | `-BinaryOperator 0x55e563536268 <col:7, col:22> 'int' '<'
|       |   | |   |-ParenExpr 0x55e563536228 <col:7, col:18> 'int'
|       |   | |   | `-CStyleCastExpr 0x55e563536200 <col:8, col:13> 'int' <NoOp>
|       |   | |   |   `-ImplicitCastExpr 0x55e5635361e8 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   | |   |     `-DeclRefExpr 0x55e5635361b0 <col:13> 'int' lvalue ParmVar 0x55e563535fa0 'right' 'int'
|       |   | |   `-IntegerLiteral 0x55e563536248 <col:22> 'int' 0
|       |   | `-ParenExpr 0x55e563536380 <col:28, col:47> 'int'
|       |   |   `-BinaryOperator 0x55e563536360 <col:29, col:45> 'int' '>='
|       |   |     |-ParenExpr 0x55e563536320 <col:29, col:40> 'int'
|       |   |     | `-CStyleCastExpr 0x55e5635362f8 <col:30, col:35> 'int' <NoOp>
|       |   |     |   `-ImplicitCastExpr 0x55e5635362e0 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |     |     `-DeclRefExpr 0x55e5635362a8 <col:35> 'int' lvalue ParmVar 0x55e563535fa0 'right' 'int'
|       |   |     `-IntegerLiteral 0x55e563536340 <col:45> 'int' 32
|       |   `-ParenExpr 0x55e563536530 <col:52, col:88> 'int'
|       |     `-BinaryOperator 0x55e563536510 <col:53, col:87> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e5635364f8 <col:53> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e5635363c0 <col:53> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535f20 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x55e5635364d8 <col:60, col:87> 'unsigned long'
|       |         `-BinaryOperator 0x55e5635364b8 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:903:86> 'unsigned long' '>>'
|       |           |-ParenExpr 0x55e563536400 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x55e5635363e0 <<scratch space>:159:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x55e563536498 </usr/include/safe_math.h:903:75, col:86> 'int'
|       |             `-CStyleCastExpr 0x55e563536470 <col:76, col:81> 'int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e563536458 <col:81> 'int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e563536420 <col:81> 'int' lvalue ParmVar 0x55e563535fa0 'right' 'int'
|       |-ImplicitCastExpr 0x55e563536700 <line:904:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e5635365d0 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e5635365b0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e563536590 </usr/include/safe_math.h:904:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535f20 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e5635366e0 <line:906:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e5635366c0 <col:6, col:25> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x55e5635366a8 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635365f0 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563535f20 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55e563536688 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e563536660 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e563536648 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563536610 <col:20> 'int' lvalue ParmVar 0x55e563535fa0 'right' 'int'
|-FunctionDecl 0x55e563536958 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:919:1> <scratch space>:160:1 safe_lshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x55e563536780 </usr/include/safe_math.h:910:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563536800 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e563536eb8 <line:911:1, line:919:1>
|   `-ReturnStmt 0x55e563536ea8 <line:913:3, line:918:35>
|     `-ConditionalOperator 0x55e563536e78 <line:915:5, line:918:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e563536cd0 <line:915:5, col:85> 'int'
|       | `-BinaryOperator 0x55e563536cb0 <col:6, col:84> 'int' '||'
|       |   |-ParenExpr 0x55e563536b00 <col:6, col:34> 'int'
|       |   | `-BinaryOperator 0x55e563536ae0 <col:7, col:32> 'int' '>='
|       |   |   |-ParenExpr 0x55e563536a88 <col:7, col:27> 'unsigned int'
|       |   |   | `-CStyleCastExpr 0x55e563536a60 <col:8, col:22> 'unsigned int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55e563536a48 <col:22> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55e563536a10 <col:22> 'unsigned int' lvalue ParmVar 0x55e563536800 'right' 'unsigned int'
|       |   |   `-ImplicitCastExpr 0x55e563536ac8 <col:32> 'unsigned int' <IntegralCast>
|       |   |     `-IntegerLiteral 0x55e563536aa8 <col:32> 'int' 32
|       |   `-ParenExpr 0x55e563536c90 <col:39, col:84> 'int'
|       |     `-BinaryOperator 0x55e563536c70 <col:40, col:83> 'int' '>'
|       |       |-ImplicitCastExpr 0x55e563536c58 <col:40> 'uint64_t':'unsigned long' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e563536b20 <col:40> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563536780 'left' 'uint64_t':'unsigned long'
|       |       `-ParenExpr 0x55e563536c38 <col:47, col:83> 'unsigned long'
|       |         `-BinaryOperator 0x55e563536c18 </usr/include/stdint.h:119:22, /usr/include/safe_math.h:915:82> 'unsigned long' '>>'
|       |           |-ParenExpr 0x55e563536b60 </usr/include/stdint.h:119:22, col:55> 'unsigned long'
|       |           | `-IntegerLiteral 0x55e563536b40 <<scratch space>:161:1> 'unsigned long' 18446744073709551615
|       |           `-ParenExpr 0x55e563536bf8 </usr/include/safe_math.h:915:62, col:82> 'unsigned int'
|       |             `-CStyleCastExpr 0x55e563536bd0 <col:63, col:77> 'unsigned int' <NoOp>
|       |               `-ImplicitCastExpr 0x55e563536bb8 <col:77> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |                 `-DeclRefExpr 0x55e563536b80 <col:77> 'unsigned int' lvalue ParmVar 0x55e563536800 'right' 'unsigned int'
|       |-ImplicitCastExpr 0x55e563536e60 <line:916:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e563536d30 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e563536d10 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e563536cf0 </usr/include/safe_math.h:916:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563536780 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e563536e40 <line:918:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e563536e20 <col:6, col:34> 'uint64_t':'unsigned long' '<<'
|           |-ImplicitCastExpr 0x55e563536e08 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563536d50 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563536780 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55e563536de8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563536dc0 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563536da8 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563536d70 <col:29> 'unsigned int' lvalue ParmVar 0x55e563536800 'right' 'unsigned int'
|-FunctionDecl 0x55e563537000 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:931:1> <scratch space>:162:1 safe_rshift_func_uint64_t_u_s 'uint64_t (uint64_t, int)' static
| |-ParmVarDecl 0x55e563536ee0 </usr/include/safe_math.h:922:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563536f60 <col:52, col:56> col:56 used right 'int'
| `-CompoundStmt 0x55e5635374b0 <line:923:1, line:931:1>
|   `-ReturnStmt 0x55e5635374a0 <line:925:3, line:930:26>
|     `-ConditionalOperator 0x55e563537470 <line:927:5, line:930:26> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e5635372c8 <line:927:5, col:48> 'int'
|       | `-BinaryOperator 0x55e5635372a8 <col:6, col:47> 'int' '||'
|       |   |-ParenExpr 0x55e563537190 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55e563537170 <col:7, col:22> 'int' '<'
|       |   |   |-ParenExpr 0x55e563537130 <col:7, col:18> 'int'
|       |   |   | `-CStyleCastExpr 0x55e563537108 <col:8, col:13> 'int' <NoOp>
|       |   |   |   `-ImplicitCastExpr 0x55e5635370f0 <col:13> 'int' <LValueToRValue> part_of_explicit_cast
|       |   |   |     `-DeclRefExpr 0x55e5635370b8 <col:13> 'int' lvalue ParmVar 0x55e563536f60 'right' 'int'
|       |   |   `-IntegerLiteral 0x55e563537150 <col:22> 'int' 0
|       |   `-ParenExpr 0x55e563537288 <col:28, col:47> 'int'
|       |     `-BinaryOperator 0x55e563537268 <col:29, col:45> 'int' '>='
|       |       |-ParenExpr 0x55e563537228 <col:29, col:40> 'int'
|       |       | `-CStyleCastExpr 0x55e563537200 <col:30, col:35> 'int' <NoOp>
|       |       |   `-ImplicitCastExpr 0x55e5635371e8 <col:35> 'int' <LValueToRValue> part_of_explicit_cast
|       |       |     `-DeclRefExpr 0x55e5635371b0 <col:35> 'int' lvalue ParmVar 0x55e563536f60 'right' 'int'
|       |       `-IntegerLiteral 0x55e563537248 <col:45> 'int' 32
|       |-ImplicitCastExpr 0x55e563537458 <line:928:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e563537328 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e563537308 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e5635372e8 </usr/include/safe_math.h:928:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563536ee0 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e563537438 <line:930:5, col:26> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e563537418 <col:6, col:25> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x55e563537400 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563537348 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e563536ee0 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55e5635373e0 <col:14, col:25> 'int'
|             `-CStyleCastExpr 0x55e5635373b8 <col:15, col:20> 'int' <NoOp>
|               `-ImplicitCastExpr 0x55e5635373a0 <col:20> 'int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563537368 <col:20> 'int' lvalue ParmVar 0x55e563536f60 'right' 'int'
|-FunctionDecl 0x55e5635375f8 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:943:1> <scratch space>:163:1 safe_rshift_func_uint64_t_u_u 'uint64_t (uint64_t, unsigned int)' static
| |-ParmVarDecl 0x55e5635374d8 </usr/include/safe_math.h:934:37, col:46> col:46 used left 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e563537558 <col:52, col:65> col:65 used right 'unsigned int'
| `-CompoundStmt 0x55e563537988 <line:935:1, line:943:1>
|   `-ReturnStmt 0x55e563537978 <line:937:3, line:942:35>
|     `-ConditionalOperator 0x55e563537948 <line:939:5, line:942:35> 'uint64_t':'unsigned long'
|       |-ParenExpr 0x55e5635377a0 <line:939:5, col:33> 'int'
|       | `-BinaryOperator 0x55e563537780 <col:6, col:31> 'int' '>='
|       |   |-ParenExpr 0x55e563537728 <col:6, col:26> 'unsigned int'
|       |   | `-CStyleCastExpr 0x55e563537700 <col:7, col:21> 'unsigned int' <NoOp>
|       |   |   `-ImplicitCastExpr 0x55e5635376e8 <col:21> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|       |   |     `-DeclRefExpr 0x55e5635376b0 <col:21> 'unsigned int' lvalue ParmVar 0x55e563537558 'right' 'unsigned int'
|       |   `-ImplicitCastExpr 0x55e563537768 <col:31> 'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55e563537748 <col:31> 'int' 32
|       |-ImplicitCastExpr 0x55e563537930 <line:940:5, col:21> 'uint64_t':'unsigned long' <LValueToRValue>
|       | `-ParenExpr 0x55e563537800 <col:5, col:21> 'uint64_t':'unsigned long' lvalue
|       |   `-ParenExpr 0x55e5635377e0 </usr/include/random_inc.h:79:26, col:32> 'uint64_t':'unsigned long' lvalue
|       |     `-DeclRefExpr 0x55e5635377c0 </usr/include/safe_math.h:940:16> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e5635374d8 'left' 'uint64_t':'unsigned long'
|       `-ParenExpr 0x55e563537910 <line:942:5, col:35> 'uint64_t':'unsigned long'
|         `-BinaryOperator 0x55e5635378f0 <col:6, col:34> 'uint64_t':'unsigned long' '>>'
|           |-ImplicitCastExpr 0x55e5635378d8 <col:6> 'uint64_t':'unsigned long' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563537820 <col:6> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e5635374d8 'left' 'uint64_t':'unsigned long'
|           `-ParenExpr 0x55e5635378b8 <col:14, col:34> 'unsigned int'
|             `-CStyleCastExpr 0x55e563537890 <col:15, col:29> 'unsigned int' <NoOp>
|               `-ImplicitCastExpr 0x55e563537878 <col:29> 'unsigned int' <LValueToRValue> part_of_explicit_cast
|                 `-DeclRefExpr 0x55e563537840 <col:29> 'unsigned int' lvalue ParmVar 0x55e563537558 'right' 'unsigned int'
|-FunctionDecl 0x55e563537a50 prev 0x55e56348a2a0 <line:951:1, col:18> col:7 used fabsf 'float (float)'
| |-ParmVarDecl 0x55e5635379b8 <col:13> col:18 'float'
| |-BuiltinAttr 0x55e563537b50 <<invalid sloc>> Inherited Implicit 562
| |-NoThrowAttr 0x55e563537b80 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x55e563537ba8 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x55e563537c80 prev 0x55e56341d410 </usr/include/safe_math.h:952:1, col:19> col:8 used fabs 'double (double)'
| |-ParmVarDecl 0x55e563537be8 <col:13> col:19 'double'
| |-BuiltinAttr 0x55e563537d60 <<invalid sloc>> Inherited Implicit 564
| |-NoThrowAttr 0x55e563537d90 </usr/include/sys/cdefs.h:79:35> Inherited
| `-ConstAttr 0x55e563537db8 </usr/include/bits/mathcalls.h:216:39> Inherited
|-FunctionDecl 0x55e563537f50 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:965:1> <scratch space>:164:1 safe_add_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55e563537df8 </usr/include/safe_math.h:956:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55e563537e78 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55e563538400 <line:957:1, line:965:1>
|   `-ReturnStmt 0x55e5635383f0 <line:959:3, line:964:15>
|     `-ConditionalOperator 0x55e5635383c0 <line:961:5, line:964:15> 'float'
|       |-ParenExpr 0x55e563538298 <line:961:5, col:59> 'int'
|       | `-BinaryOperator 0x55e563538278 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x55e5635381c8 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x55e5635381b0 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e563538008 <col:6> 'float (float)' Function 0x55e563537a50 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55e563538158 <col:12, col:38> 'float' '+'
|       |   |   |-ParenExpr 0x55e5635380a0 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x55e563538080 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55e563538028 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55e563538068 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e563538048 <col:20> 'float' lvalue ParmVar 0x55e563537df8 'sf1' 'float'
|       |   |   `-ParenExpr 0x55e563538138 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x55e563538118 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x55e5635380c0 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55e563538100 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e5635380e0 <col:35> 'float' lvalue ParmVar 0x55e563537e78 'sf2' 'float'
|       |   `-ParenExpr 0x55e563538258 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x55e563538238 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x55e5635381f8 </usr/include/safe_math.h:961:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x55e563538218 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55e5635383a8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55e5635382d8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55e5635382b8 </usr/include/safe_math.h:962:15> 'float' lvalue ParmVar 0x55e563537df8 'sf1' 'float'
|       `-ParenExpr 0x55e563538388 <line:964:5, col:15> 'float'
|         `-BinaryOperator 0x55e563538368 <col:6, col:12> 'float' '+'
|           |-ImplicitCastExpr 0x55e563538338 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635382f8 <col:6> 'float' lvalue ParmVar 0x55e563537df8 'sf1' 'float'
|           `-ImplicitCastExpr 0x55e563538350 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55e563538318 <col:12> 'float' lvalue ParmVar 0x55e563537e78 'sf2' 'float'
|-FunctionDecl 0x55e563538558 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:977:1> <scratch space>:2:1 safe_sub_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55e563538430 </usr/include/safe_math.h:968:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55e5635384b0 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55e5635389d0 <line:969:1, line:977:1>
|   `-ReturnStmt 0x55e5635389c0 <line:971:3, line:976:15>
|     `-ConditionalOperator 0x55e563538990 <line:973:5, line:976:15> 'float'
|       |-ParenExpr 0x55e563538868 <line:973:5, col:59> 'int'
|       | `-BinaryOperator 0x55e563538848 <col:6, col:58> 'int' '>'
|       |   |-CallExpr 0x55e563538798 <col:6, col:39> 'float'
|       |   | |-ImplicitCastExpr 0x55e563538780 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e563538610 <col:6> 'float (float)' Function 0x55e563537a50 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55e563538760 <col:12, col:38> 'float' '-'
|       |   |   |-ParenExpr 0x55e5635386a8 <col:12, col:23> 'float'
|       |   |   | `-BinaryOperator 0x55e563538688 <col:13, col:20> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55e563538630 <col:13> 'float' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55e563538670 <col:20> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e563538650 <col:20> 'float' lvalue ParmVar 0x55e563538430 'sf1' 'float'
|       |   |   `-ParenExpr 0x55e563538740 <col:27, col:38> 'float'
|       |   |     `-BinaryOperator 0x55e563538720 <col:28, col:35> 'float' '*'
|       |   |       |-FloatingLiteral 0x55e5635386c8 <col:28> 'float' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55e563538708 <col:35> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e5635386e8 <col:35> 'float' lvalue ParmVar 0x55e5635384b0 'sf2' 'float'
|       |   `-ParenExpr 0x55e563538828 <col:43, col:58> 'float'
|       |     `-BinaryOperator 0x55e563538808 <col:44, <built-in>:151:21> 'float' '*'
|       |       |-FloatingLiteral 0x55e5635387c8 </usr/include/safe_math.h:973:44> 'float' 5.000000e-01
|       |       `-FloatingLiteral 0x55e5635387e8 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55e563538978 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55e5635388a8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55e563538888 </usr/include/safe_math.h:974:15> 'float' lvalue ParmVar 0x55e563538430 'sf1' 'float'
|       `-ParenExpr 0x55e563538958 <line:976:5, col:15> 'float'
|         `-BinaryOperator 0x55e563538938 <col:6, col:12> 'float' '-'
|           |-ImplicitCastExpr 0x55e563538908 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55e5635388c8 <col:6> 'float' lvalue ParmVar 0x55e563538430 'sf1' 'float'
|           `-ImplicitCastExpr 0x55e563538920 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55e5635388e8 <col:12> 'float' lvalue ParmVar 0x55e5635384b0 'sf2' 'float'
|-FunctionDecl 0x55e563538b28 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:993:1> <scratch space>:3:1 safe_mul_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55e563538a00 </usr/include/safe_math.h:980:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55e563538a80 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55e563539000 <line:981:1, line:993:1>
|   `-ReturnStmt 0x55e563538ff0 <line:983:3, line:992:15>
|     `-ConditionalOperator 0x55e563538fc0 <line:986:5, line:992:15> 'float'
|       |-ParenExpr 0x55e563538e98 <line:986:5, col:94> 'int'
|       | `-BinaryOperator 0x55e563538e78 <col:6, col:93> 'int' '>'
|       |   |-CallExpr 0x55e563538d68 <col:6, col:52> 'float'
|       |   | |-ImplicitCastExpr 0x55e563538d50 <col:6> 'float (*)(float)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e563538be0 <col:6> 'float (float)' Function 0x55e563537a50 'fabsf' 'float (float)'
|       |   | `-BinaryOperator 0x55e563538d30 <col:12, col:51> 'float' '*'
|       |   |   |-ParenExpr 0x55e563538c78 <col:12, col:30> 'float'
|       |   |   | `-BinaryOperator 0x55e563538c58 <col:13, col:27> 'float' '*'
|       |   |   |   |-FloatingLiteral 0x55e563538c00 <col:13> 'float' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x55e563538c40 <col:27> 'float' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e563538c20 <col:27> 'float' lvalue ParmVar 0x55e563538a00 'sf1' 'float'
|       |   |   `-ParenExpr 0x55e563538d10 <col:34, col:51> 'float'
|       |   |     `-BinaryOperator 0x55e563538cf0 <col:35, col:48> 'float' '*'
|       |   |       |-FloatingLiteral 0x55e563538c98 <col:35> 'float' 3.725290e-09
|       |   |       `-ImplicitCastExpr 0x55e563538cd8 <col:48> 'float' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e563538cb8 <col:48> 'float' lvalue ParmVar 0x55e563538a80 'sf2' 'float'
|       |   `-ParenExpr 0x55e563538e58 <col:56, col:93> 'float'
|       |     `-BinaryOperator 0x55e563538e38 <col:57, col:92> 'float' '*'
|       |       |-FloatingLiteral 0x55e563538d98 <col:57> 'float' 7.888609e-31
|       |       `-ParenExpr 0x55e563538e18 <col:71, col:92> 'float'
|       |         `-BinaryOperator 0x55e563538df8 <col:72, <built-in>:151:21> 'float' '*'
|       |           |-FloatingLiteral 0x55e563538db8 </usr/include/safe_math.h:986:72> 'float' 3.725290e-09
|       |           `-FloatingLiteral 0x55e563538dd8 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55e563538fa8 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55e563538ed8 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55e563538eb8 </usr/include/safe_math.h:990:15> 'float' lvalue ParmVar 0x55e563538a00 'sf1' 'float'
|       `-ParenExpr 0x55e563538f88 <line:992:5, col:15> 'float'
|         `-BinaryOperator 0x55e563538f68 <col:6, col:12> 'float' '*'
|           |-ImplicitCastExpr 0x55e563538f38 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563538ef8 <col:6> 'float' lvalue ParmVar 0x55e563538a00 'sf1' 'float'
|           `-ImplicitCastExpr 0x55e563538f50 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55e563538f18 <col:12> 'float' lvalue ParmVar 0x55e563538a80 'sf2' 'float'
|-FunctionDecl 0x55e563539158 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1009:1> <scratch space>:4:1 safe_div_func_float_f_f 'float (float, float)' static
| |-ParmVarDecl 0x55e563539030 </usr/include/safe_math.h:996:31, col:37> col:37 used sf1 'float'
| |-ParmVarDecl 0x55e5635390b0 <col:42, col:48> col:48 used sf2 'float'
| `-CompoundStmt 0x55e563539868 <line:997:1, line:1009:1>
|   `-ReturnStmt 0x55e563539858 <line:999:3, line:1008:15>
|     `-ConditionalOperator 0x55e563539828 <line:1002:5, line:1008:15> 'float'
|       |-ParenExpr 0x55e563539700 <line:1002:5, col:139> 'int'
|       | `-BinaryOperator 0x55e5635396e0 <col:6, col:138> 'int' '&&'
|       |   |-ParenExpr 0x55e5635392f0 <col:6, col:24> 'int'
|       |   | `-BinaryOperator 0x55e5635392d0 <col:7, col:20> 'int' '<'
|       |   |   |-CallExpr 0x55e563539268 <col:7, col:16> 'float'
|       |   |   | |-ImplicitCastExpr 0x55e563539250 <col:7> 'float (*)(float)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x55e563539210 <col:7> 'float (float)' Function 0x55e563537a50 'fabsf' 'float (float)'
|       |   |   | `-ImplicitCastExpr 0x55e563539298 <col:13> 'float' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x55e563539230 <col:13> 'float' lvalue ParmVar 0x55e5635390b0 'sf2' 'float'
|       |   |   `-FloatingLiteral 0x55e5635392b0 <col:20> 'float' 1.000000e+00
|       |   `-ParenExpr 0x55e5635396c0 <col:29, col:138> 'int'
|       |     `-ParenExpr 0x55e5635396a0 <col:30, col:137> 'int'
|       |       `-BinaryOperator 0x55e563539680 <col:31, col:136> 'int' '||'
|       |         |-ParenExpr 0x55e563539388 <col:31, col:43> 'int'
|       |         | `-BinaryOperator 0x55e563539368 <col:32, col:39> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x55e563539350 <col:32> 'float' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x55e563539310 <col:32> 'float' lvalue ParmVar 0x55e5635390b0 'sf2' 'float'
|       |         |   `-FloatingLiteral 0x55e563539330 <col:39> 'float' 0.000000e+00
|       |         `-BinaryOperator 0x55e563539660 <col:48, col:136> 'int' '>'
|       |           |-ParenExpr 0x55e563539560 <col:48, col:95> 'float'
|       |           | `-CallExpr 0x55e563539530 <col:49, col:94> 'float'
|       |           |   |-ImplicitCastExpr 0x55e563539518 <col:49> 'float (*)(float)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x55e5635393a8 <col:49> 'float (float)' Function 0x55e563537a50 'fabsf' 'float (float)'
|       |           |   `-BinaryOperator 0x55e5635394f8 <col:55, col:93> 'float' '/'
|       |           |     |-ParenExpr 0x55e563539440 <col:55, col:72> 'float'
|       |           |     | `-BinaryOperator 0x55e563539420 <col:56, col:69> 'float' '*'
|       |           |     |   |-FloatingLiteral 0x55e5635393c8 <col:56> 'float' 1.776357e-15
|       |           |     |   `-ImplicitCastExpr 0x55e563539408 <col:69> 'float' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x55e5635393e8 <col:69> 'float' lvalue ParmVar 0x55e563539030 'sf1' 'float'
|       |           |     `-ParenExpr 0x55e5635394d8 <col:76, col:93> 'float'
|       |           |       `-BinaryOperator 0x55e5635394b8 <col:77, col:90> 'float' '*'
|       |           |         |-FloatingLiteral 0x55e563539460 <col:77> 'float' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x55e5635394a0 <col:90> 'float' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x55e563539480 <col:90> 'float' lvalue ParmVar 0x55e5635390b0 'sf2' 'float'
|       |           `-ParenExpr 0x55e563539640 <col:99, col:136> 'float'
|       |             `-BinaryOperator 0x55e563539620 <col:100, col:135> 'float' '*'
|       |               |-FloatingLiteral 0x55e563539580 <col:100> 'float' 7.888609e-31
|       |               `-ParenExpr 0x55e563539600 <col:114, col:135> 'float'
|       |                 `-BinaryOperator 0x55e5635395e0 <col:115, <built-in>:151:21> 'float' '*'
|       |                   |-FloatingLiteral 0x55e5635395a0 </usr/include/safe_math.h:1002:115> 'float' 1.776357e-15
|       |                   `-FloatingLiteral 0x55e5635395c0 <<built-in>:151:21> 'float' 3.402823e+38
|       |-ImplicitCastExpr 0x55e563539810 </usr/include/random_inc.h:79:26, col:32> 'float' <LValueToRValue>
|       | `-ParenExpr 0x55e563539740 <col:26, col:32> 'float' lvalue
|       |   `-DeclRefExpr 0x55e563539720 </usr/include/safe_math.h:1006:15> 'float' lvalue ParmVar 0x55e563539030 'sf1' 'float'
|       `-ParenExpr 0x55e5635397f0 <line:1008:5, col:15> 'float'
|         `-BinaryOperator 0x55e5635397d0 <col:6, col:12> 'float' '/'
|           |-ImplicitCastExpr 0x55e5635397a0 <col:6> 'float' <LValueToRValue>
|           | `-DeclRefExpr 0x55e563539760 <col:6> 'float' lvalue ParmVar 0x55e563539030 'sf1' 'float'
|           `-ImplicitCastExpr 0x55e5635397b8 <col:12> 'float' <LValueToRValue>
|             `-DeclRefExpr 0x55e563539780 <col:12> 'float' lvalue ParmVar 0x55e5635390b0 'sf2' 'float'
|-FunctionDecl 0x55e5635399f0 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1024:1> <scratch space>:5:1 safe_add_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55e563539898 </usr/include/safe_math.h:1015:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55e563539918 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55e56353aee0 <line:1016:1, line:1024:1>
|   `-ReturnStmt 0x55e56353aed0 <line:1018:3, line:1023:15>
|     `-ConditionalOperator 0x55e56353aea0 <line:1020:5, line:1023:15> 'double'
|       |-ParenExpr 0x55e56353ad78 <line:1020:5, col:55> 'int'
|       | `-BinaryOperator 0x55e56353ad58 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x55e56353aca8 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x55e56353ac90 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e563539aa8 <col:6> 'double (double)' Function 0x55e563537c80 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55e56353ac38 <col:11, col:35> 'double' '+'
|       |   |   |-ParenExpr 0x55e56353ab80 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x55e56353ab60 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55e563539ac8 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55e563539b08 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e563539ae8 <col:18> 'double' lvalue ParmVar 0x55e563539898 'sf1' 'double'
|       |   |   `-ParenExpr 0x55e56353ac18 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x55e56353abf8 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x55e56353aba0 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55e56353abe0 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e56353abc0 <col:32> 'double' lvalue ParmVar 0x55e563539918 'sf2' 'double'
|       |   `-ParenExpr 0x55e56353ad38 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x55e56353ad18 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x55e56353acd8 </usr/include/safe_math.h:1020:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x55e56353acf8 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55e56353ae88 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55e56353adb8 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55e56353ad98 </usr/include/safe_math.h:1021:15> 'double' lvalue ParmVar 0x55e563539898 'sf1' 'double'
|       `-ParenExpr 0x55e56353ae68 <line:1023:5, col:15> 'double'
|         `-BinaryOperator 0x55e56353ae48 <col:6, col:12> 'double' '+'
|           |-ImplicitCastExpr 0x55e56353ae18 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56353add8 <col:6> 'double' lvalue ParmVar 0x55e563539898 'sf1' 'double'
|           `-ImplicitCastExpr 0x55e56353ae30 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55e56353adf8 <col:12> 'double' lvalue ParmVar 0x55e563539918 'sf2' 'double'
|-FunctionDecl 0x55e56353b038 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1036:1> <scratch space>:6:1 safe_sub_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55e56353af10 </usr/include/safe_math.h:1027:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55e56353af90 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55e56353b4b0 <line:1028:1, line:1036:1>
|   `-ReturnStmt 0x55e56353b4a0 <line:1030:3, line:1035:15>
|     `-ConditionalOperator 0x55e56353b470 <line:1032:5, line:1035:15> 'double'
|       |-ParenExpr 0x55e56353b348 <line:1032:5, col:55> 'int'
|       | `-BinaryOperator 0x55e56353b328 <col:6, col:54> 'int' '>'
|       |   |-CallExpr 0x55e56353b278 <col:6, col:36> 'double'
|       |   | |-ImplicitCastExpr 0x55e56353b260 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e56353b0f0 <col:6> 'double (double)' Function 0x55e563537c80 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55e56353b240 <col:11, col:35> 'double' '-'
|       |   |   |-ParenExpr 0x55e56353b188 <col:11, col:21> 'double'
|       |   |   | `-BinaryOperator 0x55e56353b168 <col:12, col:18> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55e56353b110 <col:12> 'double' 5.000000e-01
|       |   |   |   `-ImplicitCastExpr 0x55e56353b150 <col:18> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e56353b130 <col:18> 'double' lvalue ParmVar 0x55e56353af10 'sf1' 'double'
|       |   |   `-ParenExpr 0x55e56353b220 <col:25, col:35> 'double'
|       |   |     `-BinaryOperator 0x55e56353b200 <col:26, col:32> 'double' '*'
|       |   |       |-FloatingLiteral 0x55e56353b1a8 <col:26> 'double' 5.000000e-01
|       |   |       `-ImplicitCastExpr 0x55e56353b1e8 <col:32> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e56353b1c8 <col:32> 'double' lvalue ParmVar 0x55e56353af90 'sf2' 'double'
|       |   `-ParenExpr 0x55e56353b308 <col:40, col:54> 'double'
|       |     `-BinaryOperator 0x55e56353b2e8 <col:41, <built-in>:166:21> 'double' '*'
|       |       |-FloatingLiteral 0x55e56353b2a8 </usr/include/safe_math.h:1032:41> 'double' 5.000000e-01
|       |       `-FloatingLiteral 0x55e56353b2c8 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55e56353b458 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55e56353b388 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55e56353b368 </usr/include/safe_math.h:1033:15> 'double' lvalue ParmVar 0x55e56353af10 'sf1' 'double'
|       `-ParenExpr 0x55e56353b438 <line:1035:5, col:15> 'double'
|         `-BinaryOperator 0x55e56353b418 <col:6, col:12> 'double' '-'
|           |-ImplicitCastExpr 0x55e56353b3e8 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56353b3a8 <col:6> 'double' lvalue ParmVar 0x55e56353af10 'sf1' 'double'
|           `-ImplicitCastExpr 0x55e56353b400 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55e56353b3c8 <col:12> 'double' lvalue ParmVar 0x55e56353af90 'sf2' 'double'
|-FunctionDecl 0x55e56353b608 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1052:1> <scratch space>:7:1 safe_mul_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55e56353b4e0 </usr/include/safe_math.h:1039:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55e56353b560 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55e56353bae0 <line:1040:1, line:1052:1>
|   `-ReturnStmt 0x55e56353bad0 <line:1042:3, line:1051:15>
|     `-ConditionalOperator 0x55e56353baa0 <line:1045:5, line:1051:15> 'double'
|       |-ParenExpr 0x55e56353b978 <line:1045:5, col:91> 'int'
|       | `-BinaryOperator 0x55e56353b958 <col:6, col:90> 'int' '>'
|       |   |-CallExpr 0x55e56353b848 <col:6, col:50> 'double'
|       |   | |-ImplicitCastExpr 0x55e56353b830 <col:6> 'double (*)(double)' <FunctionToPointerDecay>
|       |   | | `-DeclRefExpr 0x55e56353b6c0 <col:6> 'double (double)' Function 0x55e563537c80 'fabs' 'double (double)'
|       |   | `-BinaryOperator 0x55e56353b810 <col:11, col:49> 'double' '*'
|       |   |   |-ParenExpr 0x55e56353b758 <col:11, col:28> 'double'
|       |   |   | `-BinaryOperator 0x55e56353b738 <col:12, col:25> 'double' '*'
|       |   |   |   |-FloatingLiteral 0x55e56353b6e0 <col:12> 'double' 7.888609e-31
|       |   |   |   `-ImplicitCastExpr 0x55e56353b720 <col:25> 'double' <LValueToRValue>
|       |   |   |     `-DeclRefExpr 0x55e56353b700 <col:25> 'double' lvalue ParmVar 0x55e56353b4e0 'sf1' 'double'
|       |   |   `-ParenExpr 0x55e56353b7f0 <col:32, col:49> 'double'
|       |   |     `-BinaryOperator 0x55e56353b7d0 <col:33, col:46> 'double' '*'
|       |   |       |-FloatingLiteral 0x55e56353b778 <col:33> 'double' 7.051541e-279
|       |   |       `-ImplicitCastExpr 0x55e56353b7b8 <col:46> 'double' <LValueToRValue>
|       |   |         `-DeclRefExpr 0x55e56353b798 <col:46> 'double' lvalue ParmVar 0x55e56353b560 'sf2' 'double'
|       |   `-ParenExpr 0x55e56353b938 <col:54, col:90> 'double'
|       |     `-BinaryOperator 0x55e56353b918 <col:55, col:89> 'double' '*'
|       |       |-FloatingLiteral 0x55e56353b878 <col:55> 'double' 7.888609e-31
|       |       `-ParenExpr 0x55e56353b8f8 <col:68, col:89> 'double'
|       |         `-BinaryOperator 0x55e56353b8d8 <col:69, <built-in>:166:21> 'double' '*'
|       |           |-FloatingLiteral 0x55e56353b898 </usr/include/safe_math.h:1045:69> 'double' 7.051541e-279
|       |           `-FloatingLiteral 0x55e56353b8b8 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55e56353ba88 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55e56353b9b8 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55e56353b998 </usr/include/safe_math.h:1049:15> 'double' lvalue ParmVar 0x55e56353b4e0 'sf1' 'double'
|       `-ParenExpr 0x55e56353ba68 <line:1051:5, col:15> 'double'
|         `-BinaryOperator 0x55e56353ba48 <col:6, col:12> 'double' '*'
|           |-ImplicitCastExpr 0x55e56353ba18 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56353b9d8 <col:6> 'double' lvalue ParmVar 0x55e56353b4e0 'sf1' 'double'
|           `-ImplicitCastExpr 0x55e56353ba30 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55e56353b9f8 <col:12> 'double' lvalue ParmVar 0x55e56353b560 'sf2' 'double'
|-FunctionDecl 0x55e56353bc38 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1068:1> <scratch space>:8:1 safe_div_func_double_f_f 'double (double, double)' static
| |-ParmVarDecl 0x55e56353bb10 </usr/include/safe_math.h:1055:32, col:39> col:39 used sf1 'double'
| |-ParmVarDecl 0x55e56353bb90 <col:44, col:51> col:51 used sf2 'double'
| `-CompoundStmt 0x55e56353c348 <line:1056:1, line:1068:1>
|   `-ReturnStmt 0x55e56353c338 <line:1058:3, line:1067:15>
|     `-ConditionalOperator 0x55e56353c308 <line:1061:5, line:1067:15> 'double'
|       |-ParenExpr 0x55e56353c1e0 <line:1061:5, col:133> 'int'
|       | `-BinaryOperator 0x55e56353c1c0 <col:6, col:132> 'int' '&&'
|       |   |-ParenExpr 0x55e56353bdd0 <col:6, col:22> 'int'
|       |   | `-BinaryOperator 0x55e56353bdb0 <col:7, col:19> 'int' '<'
|       |   |   |-CallExpr 0x55e56353bd48 <col:7, col:15> 'double'
|       |   |   | |-ImplicitCastExpr 0x55e56353bd30 <col:7> 'double (*)(double)' <FunctionToPointerDecay>
|       |   |   | | `-DeclRefExpr 0x55e56353bcf0 <col:7> 'double (double)' Function 0x55e563537c80 'fabs' 'double (double)'
|       |   |   | `-ImplicitCastExpr 0x55e56353bd78 <col:12> 'double' <LValueToRValue>
|       |   |   |   `-DeclRefExpr 0x55e56353bd10 <col:12> 'double' lvalue ParmVar 0x55e56353bb90 'sf2' 'double'
|       |   |   `-FloatingLiteral 0x55e56353bd90 <col:19> 'double' 1.000000e+00
|       |   `-ParenExpr 0x55e56353c1a0 <col:27, col:132> 'int'
|       |     `-ParenExpr 0x55e56353c180 <col:28, col:131> 'int'
|       |       `-BinaryOperator 0x55e56353c160 <col:29, col:130> 'int' '||'
|       |         |-ParenExpr 0x55e56353be68 <col:29, col:40> 'int'
|       |         | `-BinaryOperator 0x55e56353be48 <col:30, col:37> 'int' '=='
|       |         |   |-ImplicitCastExpr 0x55e56353be30 <col:30> 'double' <LValueToRValue>
|       |         |   | `-DeclRefExpr 0x55e56353bdf0 <col:30> 'double' lvalue ParmVar 0x55e56353bb90 'sf2' 'double'
|       |         |   `-FloatingLiteral 0x55e56353be10 <col:37> 'double' 0.000000e+00
|       |         `-BinaryOperator 0x55e56353c140 <col:45, col:130> 'int' '>'
|       |           |-ParenExpr 0x55e56353c040 <col:45, col:90> 'double'
|       |           | `-CallExpr 0x55e56353c010 <col:46, col:89> 'double'
|       |           |   |-ImplicitCastExpr 0x55e56353bff8 <col:46> 'double (*)(double)' <FunctionToPointerDecay>
|       |           |   | `-DeclRefExpr 0x55e56353be88 <col:46> 'double (double)' Function 0x55e563537c80 'fabs' 'double (double)'
|       |           |   `-BinaryOperator 0x55e56353bfd8 <col:51, col:88> 'double' '/'
|       |           |     |-ParenExpr 0x55e56353bf20 <col:51, col:68> 'double'
|       |           |     | `-BinaryOperator 0x55e56353bf00 <col:52, col:65> 'double' '*'
|       |           |     |   |-FloatingLiteral 0x55e56353bea8 <col:52> 'double' 6.263026e-294
|       |           |     |   `-ImplicitCastExpr 0x55e56353bee8 <col:65> 'double' <LValueToRValue>
|       |           |     |     `-DeclRefExpr 0x55e56353bec8 <col:65> 'double' lvalue ParmVar 0x55e56353bb10 'sf1' 'double'
|       |           |     `-ParenExpr 0x55e56353bfb8 <col:72, col:88> 'double'
|       |           |       `-BinaryOperator 0x55e56353bf98 <col:73, col:85> 'double' '*'
|       |           |         |-FloatingLiteral 0x55e56353bf40 <col:73> 'double' 1.267651e+30
|       |           |         `-ImplicitCastExpr 0x55e56353bf80 <col:85> 'double' <LValueToRValue>
|       |           |           `-DeclRefExpr 0x55e56353bf60 <col:85> 'double' lvalue ParmVar 0x55e56353bb90 'sf2' 'double'
|       |           `-ParenExpr 0x55e56353c120 <col:94, col:130> 'double'
|       |             `-BinaryOperator 0x55e56353c100 <col:95, col:129> 'double' '*'
|       |               |-FloatingLiteral 0x55e56353c060 <col:95> 'double' 7.888609e-31
|       |               `-ParenExpr 0x55e56353c0e0 <col:108, col:129> 'double'
|       |                 `-BinaryOperator 0x55e56353c0c0 <col:109, <built-in>:166:21> 'double' '*'
|       |                   |-FloatingLiteral 0x55e56353c080 </usr/include/safe_math.h:1061:109> 'double' 6.263026e-294
|       |                   `-FloatingLiteral 0x55e56353c0a0 <<built-in>:166:21> 'double' 1.797693e+308
|       |-ImplicitCastExpr 0x55e56353c2f0 </usr/include/random_inc.h:79:26, col:32> 'double' <LValueToRValue>
|       | `-ParenExpr 0x55e56353c220 <col:26, col:32> 'double' lvalue
|       |   `-DeclRefExpr 0x55e56353c200 </usr/include/safe_math.h:1065:15> 'double' lvalue ParmVar 0x55e56353bb10 'sf1' 'double'
|       `-ParenExpr 0x55e56353c2d0 <line:1067:5, col:15> 'double'
|         `-BinaryOperator 0x55e56353c2b0 <col:6, col:12> 'double' '/'
|           |-ImplicitCastExpr 0x55e56353c280 <col:6> 'double' <LValueToRValue>
|           | `-DeclRefExpr 0x55e56353c240 <col:6> 'double' lvalue ParmVar 0x55e56353bb10 'sf1' 'double'
|           `-ImplicitCastExpr 0x55e56353c298 <col:12> 'double' <LValueToRValue>
|             `-DeclRefExpr 0x55e56353c260 <col:12> 'double' lvalue ParmVar 0x55e56353bb90 'sf2' 'double'
|-FunctionDecl 0x55e56353c480 </usr/include/random_inc.h:92:16, /usr/include/safe_math.h:1205:1> <scratch space>:9:1 safe_convert_func_float_to_int32_t 'int32_t (float)' static
| |-ParmVarDecl 0x55e56353c378 </usr/include/safe_math.h:1196:42, col:48> col:48 used sf1 'float'
| `-CompoundStmt 0x55e56353c8d8 <line:1197:1, line:1205:1>
|   `-ReturnStmt 0x55e56353c8c8 <line:1199:3, line:1204:20>
|     `-ConditionalOperator 0x55e56353c898 <line:1201:5, line:1204:20> 'int'
|       |-ParenExpr 0x55e56353c748 <line:1201:5, col:46> 'int'
|       | `-BinaryOperator 0x55e56353c728 <col:6, col:45> 'int' '||'
|       |   |-ParenExpr 0x55e56353c638 <col:6, col:23> 'int'
|       |   | `-BinaryOperator 0x55e56353c618 <col:7, /usr/include/stdint.h:107:35> 'int' '<='
|       |   |   |-ImplicitCastExpr 0x55e56353c5e8 </usr/include/safe_math.h:1201:7> 'float' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e56353c530 <col:7> 'float' lvalue ParmVar 0x55e56353c378 'sf1' 'float'
|       |   |   `-ImplicitCastExpr 0x55e56353c600 </usr/include/stdint.h:107:21, col:35> 'float' <IntegralToFloating>
|       |   |     `-ParenExpr 0x55e56353c5c8 <col:21, col:35> 'int'
|       |   |       `-BinaryOperator 0x55e56353c5a8 <col:22, col:34> 'int' '-'
|       |   |         |-UnaryOperator 0x55e56353c570 <col:22, col:23> 'int' prefix '-'
|       |   |         | `-IntegerLiteral 0x55e56353c550 <col:23> 'int' 2147483647
|       |   |         `-IntegerLiteral 0x55e56353c588 <col:34> 'int' 1
|       |   `-ParenExpr 0x55e56353c708 </usr/include/safe_math.h:1201:28, col:45> 'int'
|       |     `-BinaryOperator 0x55e56353c6e8 <col:29, /usr/include/stdint.h:112:32> 'int' '>='
|       |       |-ImplicitCastExpr 0x55e56353c6b8 </usr/include/safe_math.h:1201:29> 'float' <LValueToRValue>
|       |       | `-DeclRefExpr 0x55e56353c658 <col:29> 'float' lvalue ParmVar 0x55e56353c378 'sf1' 'float'
|       |       `-ImplicitCastExpr 0x55e56353c6d0 </usr/include/stdint.h:112:21, col:32> 'float' <IntegralToFloating>
|       |         `-ParenExpr 0x55e56353c698 <col:21, col:32> 'int'
|       |           `-IntegerLiteral 0x55e56353c678 <col:22> 'int' 2147483647
|       |-ParenExpr 0x55e56353c7a8 </usr/include/random_inc.h:79:26, col:32> 'int'
|       | `-ParenExpr 0x55e56353c788 </usr/include/stdint.h:112:21, col:32> 'int'
|       |   `-IntegerLiteral 0x55e56353c768 <col:22> 'int' 2147483647
|       `-ParenExpr 0x55e56353c878 </usr/include/safe_math.h:1204:5, col:20> 'int32_t':'int'
|         `-CStyleCastExpr 0x55e56353c850 <col:6, col:19> 'int32_t':'int' <FloatingToIntegral>
|           `-ImplicitCastExpr 0x55e56353c838 <col:15, col:19> 'float' <LValueToRValue> part_of_explicit_cast
|             `-ParenExpr 0x55e56353c818 <col:15, col:19> 'float' lvalue
|               `-DeclRefExpr 0x55e56353c7c8 <col:16> 'float' lvalue ParmVar 0x55e56353c378 'sf1' 'float'
|-VarDecl 0x55e56353c9b0 </usr/include/csmith.h:47:1, col:30> col:17 used crc32_tab 'uint32_t[256]' static
|-VarDecl 0x55e56353ca28 <line:48:1, col:33> col:17 used crc32_context 'uint32_t':'unsigned int' static cinit
| `-ImplicitCastExpr 0x55e56353cab0 <col:33> 'uint32_t':'unsigned int' <IntegralCast>
|   `-IntegerLiteral 0x55e56353ca90 <col:33> 'unsigned long' 4294967295
|-FunctionDecl 0x55e56353dc08 <line:50:1, line:68:1> line:51:1 used crc32_gentab 'void (void)' static
| `-CompoundStmt 0x55e56353e6d8 <line:52:1, line:68:1>
|   |-DeclStmt 0x55e56353dd28 <line:53:2, col:14>
|   | `-VarDecl 0x55e56353dcc0 <col:2, col:11> col:11 used crc 'uint32_t':'unsigned int'
|   |-DeclStmt 0x55e56353ddf0 <line:54:2, col:36>
|   | `-VarDecl 0x55e56353dd50 <col:2, col:24> col:17 used poly 'const uint32_t':'const unsigned int' cinit
|   |   `-ImplicitCastExpr 0x55e56353ddd8 <col:24> 'uint32_t':'unsigned int' <IntegralCast>
|   |     `-IntegerLiteral 0x55e56353ddb8 <col:24> 'unsigned long' 3988292384
|   |-DeclStmt 0x55e56353df20 <line:55:2, col:10>
|   | |-VarDecl 0x55e56353de20 <col:2, col:6> col:6 used i 'int'
|   | `-VarDecl 0x55e56353dea0 <col:2, col:9> col:9 used j 'int'
|   `-ForStmt 0x55e56353e6a0 <line:57:2, line:67:2>
|     |-BinaryOperator 0x55e56353df78 <line:57:7, col:11> 'int' '='
|     | |-DeclRefExpr 0x55e56353df38 <col:7> 'int' lvalue Var 0x55e56353de20 'i' 'int'
|     | `-IntegerLiteral 0x55e56353df58 <col:11> 'int' 0
|     |-<<<NULL>>>
|     |-BinaryOperator 0x55e56353dff0 <col:14, col:18> 'int' '<'
|     | |-ImplicitCastExpr 0x55e56353dfd8 <col:14> 'int' <LValueToRValue>
|     | | `-DeclRefExpr 0x55e56353df98 <col:14> 'int' lvalue Var 0x55e56353de20 'i' 'int'
|     | `-IntegerLiteral 0x55e56353dfb8 <col:18> 'int' 256
|     |-UnaryOperator 0x55e56353e030 <col:23, col:24> 'int' postfix '++'
|     | `-DeclRefExpr 0x55e56353e010 <col:23> 'int' lvalue Var 0x55e56353de20 'i' 'int'
|     `-CompoundStmt 0x55e56353e678 <col:28, line:67:2>
|       |-BinaryOperator 0x55e56353e0b8 <line:58:3, col:9> 'uint32_t':'unsigned int' '='
|       | |-DeclRefExpr 0x55e56353e048 <col:3> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|       | `-ImplicitCastExpr 0x55e56353e0a0 <col:9> 'uint32_t':'unsigned int' <IntegralCast>
|       |   `-ImplicitCastExpr 0x55e56353e088 <col:9> 'int' <LValueToRValue>
|       |     `-DeclRefExpr 0x55e56353e068 <col:9> 'int' lvalue Var 0x55e56353de20 'i' 'int'
|       |-ForStmt 0x55e56353e4f0 <line:59:3, line:65:3>
|       | |-BinaryOperator 0x55e56353e118 <line:59:8, col:12> 'int' '='
|       | | |-DeclRefExpr 0x55e56353e0d8 <col:8> 'int' lvalue Var 0x55e56353dea0 'j' 'int'
|       | | `-IntegerLiteral 0x55e56353e0f8 <col:12> 'int' 8
|       | |-<<<NULL>>>
|       | |-BinaryOperator 0x55e56353e190 <col:15, col:19> 'int' '>'
|       | | |-ImplicitCastExpr 0x55e56353e178 <col:15> 'int' <LValueToRValue>
|       | | | `-DeclRefExpr 0x55e56353e138 <col:15> 'int' lvalue Var 0x55e56353dea0 'j' 'int'
|       | | `-IntegerLiteral 0x55e56353e158 <col:19> 'int' 0
|       | |-UnaryOperator 0x55e56353e1d0 <col:22, col:23> 'int' postfix '--'
|       | | `-DeclRefExpr 0x55e56353e1b0 <col:22> 'int' lvalue Var 0x55e56353dea0 'j' 'int'
|       | `-CompoundStmt 0x55e56353e4d8 <col:27, line:65:3>
|       |   `-IfStmt 0x55e56353e4a8 <line:60:4, line:64:4> has_else
|       |     |-BinaryOperator 0x55e56353e258 <line:60:8, col:14> 'uint32_t':'unsigned int' '&'
|       |     | |-ImplicitCastExpr 0x55e56353e228 <col:8> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     | | `-DeclRefExpr 0x55e56353e1e8 <col:8> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|       |     | `-ImplicitCastExpr 0x55e56353e240 <col:14> 'uint32_t':'unsigned int' <IntegralCast>
|       |     |   `-IntegerLiteral 0x55e56353e208 <col:14> 'int' 1
|       |     |-CompoundStmt 0x55e56353e3f0 <col:17, line:62:4>
|       |     | `-BinaryOperator 0x55e56353e388 <line:61:5, col:24> 'uint32_t':'unsigned int' '='
|       |     |   |-DeclRefExpr 0x55e56353e278 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|       |     |   `-BinaryOperator 0x55e56353e368 <col:11, col:24> 'uint32_t':'unsigned int' '^'
|       |     |     |-ParenExpr 0x55e56353e310 <col:11, col:20> 'uint32_t':'unsigned int'
|       |     |     | `-BinaryOperator 0x55e56353e2f0 <col:12, col:19> 'uint32_t':'unsigned int' '>>'
|       |     |     |   |-ImplicitCastExpr 0x55e56353e2d8 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |     |   | `-DeclRefExpr 0x55e56353e298 <col:12> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|       |     |     |   `-IntegerLiteral 0x55e56353e2b8 <col:19> 'int' 1
|       |     |     `-ImplicitCastExpr 0x55e56353e350 <col:24> 'uint32_t':'unsigned int' <LValueToRValue>
|       |     |       `-DeclRefExpr 0x55e56353e330 <col:24> 'const uint32_t':'const unsigned int' lvalue Var 0x55e56353dd50 'poly' 'const uint32_t':'const unsigned int'
|       |     `-CompoundStmt 0x55e56353e490 <line:62:11, line:64:4>
|       |       `-CompoundAssignOperator 0x55e56353e460 <line:63:5, col:13> 'uint32_t':'unsigned int' '>>=' ComputeLHSTy='uint32_t':'unsigned int' ComputeResultTy='uint32_t':'unsigned int'
|       |         |-DeclRefExpr 0x55e56353e408 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|       |         `-IntegerLiteral 0x55e56353e428 <col:13> 'int' 1
|       `-BinaryOperator 0x55e56353e658 <line:66:3, col:18> 'uint32_t':'unsigned int' '='
|         |-ArraySubscriptExpr 0x55e56353e600 <col:3, col:14> 'uint32_t':'unsigned int' lvalue
|         | |-ImplicitCastExpr 0x55e56353e5d0 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|         | | `-DeclRefExpr 0x55e56353e528 <col:3> 'uint32_t[256]' lvalue Var 0x55e56353c9b0 'crc32_tab' 'uint32_t[256]'
|         | `-ImplicitCastExpr 0x55e56353e5e8 <col:13> 'int' <LValueToRValue>
|         |   `-DeclRefExpr 0x55e56353e548 <col:13> 'int' lvalue Var 0x55e56353de20 'i' 'int'
|         `-ImplicitCastExpr 0x55e56353e640 <col:18> 'uint32_t':'unsigned int' <LValueToRValue>
|           `-DeclRefExpr 0x55e56353e620 <col:18> 'uint32_t':'unsigned int' lvalue Var 0x55e56353dcc0 'crc' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55e56353e820 <line:70:1, line:75:1> line:71:1 used crc32_byte 'void (uint8_t)' static
| |-ParmVarDecl 0x55e56353e718 <col:13, col:21> col:21 used b 'uint8_t':'unsigned char'
| `-CompoundStmt 0x55e56353ebd0 <col:24, line:75:1>
|   `-BinaryOperator 0x55e56353ebb0 <line:72:2, line:74:39> 'uint32_t':'unsigned int' '='
|     |-DeclRefExpr 0x55e56353e8d0 <line:72:2> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
|     `-BinaryOperator 0x55e56353eb90 <line:73:3, line:74:39> 'uint32_t':'unsigned int' '^'
|       |-ParenExpr 0x55e56353e9e0 <line:73:3, col:37> 'uint32_t':'unsigned int'
|       | `-BinaryOperator 0x55e56353e9c0 <col:4, col:27> 'uint32_t':'unsigned int' '&'
|       |   |-ParenExpr 0x55e56353e968 <col:4, col:23> 'uint32_t':'unsigned int'
|       |   | `-BinaryOperator 0x55e56353e948 <col:5, col:22> 'uint32_t':'unsigned int' '>>'
|       |   |   |-ImplicitCastExpr 0x55e56353e930 <col:5> 'uint32_t':'unsigned int' <LValueToRValue>
|       |   |   | `-DeclRefExpr 0x55e56353e8f0 <col:5> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
|       |   |   `-IntegerLiteral 0x55e56353e910 <col:22> 'int' 8
|       |   `-ImplicitCastExpr 0x55e56353e9a8 <col:27> 'uint32_t':'unsigned int' <IntegralCast>
|       |     `-IntegerLiteral 0x55e56353e988 <col:27> 'int' 16777215
|       `-ImplicitCastExpr 0x55e56353eb78 <line:74:3, col:39> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-ArraySubscriptExpr 0x55e56353eb58 <col:3, col:39> 'uint32_t':'unsigned int' lvalue
|           |-ImplicitCastExpr 0x55e56353eb40 <col:3> 'uint32_t *' <ArrayToPointerDecay>
|           | `-DeclRefExpr 0x55e56353ea00 <col:3> 'uint32_t[256]' lvalue Var 0x55e56353c9b0 'crc32_tab' 'uint32_t[256]'
|           `-BinaryOperator 0x55e56353eb20 <col:13, col:35> 'uint32_t':'unsigned int' '&'
|             |-ParenExpr 0x55e56353eac8 <col:13, col:31> 'uint32_t':'unsigned int'
|             | `-BinaryOperator 0x55e56353eaa8 <col:14, col:30> 'uint32_t':'unsigned int' '^'
|             |   |-ImplicitCastExpr 0x55e56353ea60 <col:14> 'uint32_t':'unsigned int' <LValueToRValue>
|             |   | `-DeclRefExpr 0x55e56353ea20 <col:14> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
|             |   `-ImplicitCastExpr 0x55e56353ea90 <col:30> 'uint32_t':'unsigned int' <IntegralCast>
|             |     `-ImplicitCastExpr 0x55e56353ea78 <col:30> 'uint8_t':'unsigned char' <LValueToRValue>
|             |       `-DeclRefExpr 0x55e56353ea40 <col:30> 'uint8_t':'unsigned char' lvalue ParmVar 0x55e56353e718 'b' 'uint8_t':'unsigned char'
|             `-ImplicitCastExpr 0x55e56353eb08 <col:35> 'uint32_t':'unsigned int' <IntegralCast>
|               `-IntegerLiteral 0x55e56353eae8 <col:35> 'int' 255
|-FunctionDecl 0x55e56353ed00 <line:96:1, line:107:1> line:97:1 used crc32_8bytes 'void (uint64_t)' static
| |-ParmVarDecl 0x55e56353ebf8 <col:15, col:24> col:24 used val 'uint64_t':'unsigned long'
| `-CompoundStmt 0x55e56353f990 <line:98:1, line:107:1>
|   |-CallExpr 0x55e56353ef38 <line:99:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x55e56353ef20 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353edb0 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353ef68 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353eea0 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353ee48 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353ee28 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353ee10 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353edd0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353edf0 <col:20> 'int' 0
|   |     `-ImplicitCastExpr 0x55e56353ee88 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353ee68 <col:25> 'int' 255
|   |-CallExpr 0x55e56353f0a8 <line:100:2, col:29> 'void'
|   | |-ImplicitCastExpr 0x55e56353f090 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353ef80 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f0d8 <col:14, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f070 <col:14, col:25> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f018 <col:14, col:21> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353eff8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353efe0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353efa0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353efc0 <col:20> 'int' 8
|   |     `-ImplicitCastExpr 0x55e56353f058 <col:25> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f038 <col:25> 'int' 255
|   |-CallExpr 0x55e56353f218 <line:101:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55e56353f200 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353f0f0 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f248 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f1e0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f188 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353f168 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353f150 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353f110 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353f130 <col:20> 'int' 16
|   |     `-ImplicitCastExpr 0x55e56353f1c8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f1a8 <col:26> 'int' 255
|   |-CallExpr 0x55e56353f388 <line:102:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55e56353f370 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353f260 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f3b8 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f350 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f2f8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353f2d8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353f2c0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353f280 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353f2a0 <col:20> 'int' 24
|   |     `-ImplicitCastExpr 0x55e56353f338 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f318 <col:26> 'int' 255
|   |-CallExpr 0x55e56353f4f8 <line:103:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55e56353f4e0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353f3d0 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f528 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f4c0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f468 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353f448 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353f430 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353f3f0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353f410 <col:20> 'int' 32
|   |     `-ImplicitCastExpr 0x55e56353f4a8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f488 <col:26> 'int' 255
|   |-CallExpr 0x55e56353f668 <line:104:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55e56353f650 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353f540 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f698 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f630 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f5d8 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353f5b8 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353f5a0 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353f560 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353f580 <col:20> 'int' 40
|   |     `-ImplicitCastExpr 0x55e56353f618 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f5f8 <col:26> 'int' 255
|   |-CallExpr 0x55e56353f7d8 <line:105:2, col:30> 'void'
|   | |-ImplicitCastExpr 0x55e56353f7c0 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e56353f6b0 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   | `-ImplicitCastExpr 0x55e56353f808 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|   |   `-BinaryOperator 0x55e56353f7a0 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|   |     |-ParenExpr 0x55e56353f748 <col:14, col:22> 'uint64_t':'unsigned long'
|   |     | `-BinaryOperator 0x55e56353f728 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|   |     |   |-ImplicitCastExpr 0x55e56353f710 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |     |   | `-DeclRefExpr 0x55e56353f6d0 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|   |     |   `-IntegerLiteral 0x55e56353f6f0 <col:20> 'int' 48
|   |     `-ImplicitCastExpr 0x55e56353f788 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|   |       `-IntegerLiteral 0x55e56353f768 <col:26> 'int' 255
|   `-CallExpr 0x55e56353f948 <line:106:2, col:30> 'void'
|     |-ImplicitCastExpr 0x55e56353f930 <col:2> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|     | `-DeclRefExpr 0x55e56353f820 <col:2> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|     `-ImplicitCastExpr 0x55e56353f978 <col:14, col:26> 'uint8_t':'unsigned char' <IntegralCast>
|       `-BinaryOperator 0x55e56353f910 <col:14, col:26> 'uint64_t':'unsigned long' '&'
|         |-ParenExpr 0x55e56353f8b8 <col:14, col:22> 'uint64_t':'unsigned long'
|         | `-BinaryOperator 0x55e56353f898 <col:15, col:20> 'uint64_t':'unsigned long' '>>'
|         |   |-ImplicitCastExpr 0x55e56353f880 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|         |   | `-DeclRefExpr 0x55e56353f840 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353ebf8 'val' 'uint64_t':'unsigned long'
|         |   `-IntegerLiteral 0x55e56353f860 <col:20> 'int' 56
|         `-ImplicitCastExpr 0x55e56353f8f8 <col:26> 'uint64_t':'unsigned long' <IntegralCast>
|           `-IntegerLiteral 0x55e56353f8d8 <col:26> 'int' 255
|-FunctionDecl 0x55e563540c70 <line:109:1, line:116:1> line:110:1 transparent_crc 'void (uint64_t, char *, int)' static
| |-ParmVarDecl 0x55e56353f9f0 <col:18, col:27> col:27 used val 'uint64_t':'unsigned long'
| |-ParmVarDecl 0x55e56353fa70 <col:32, col:38> col:38 used vname 'char *'
| |-ParmVarDecl 0x55e56353faf0 <col:45, col:49> col:49 used flag 'int'
| `-CompoundStmt 0x55e5635410a0 <line:111:1, line:116:1>
|   |-CallExpr 0x55e563540de8 <line:112:2, col:18> 'void'
|   | |-ImplicitCastExpr 0x55e563540dd0 <col:2> 'void (*)(uint64_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55e563540d30 <col:2> 'void (uint64_t)' Function 0x55e56353ed00 'crc32_8bytes' 'void (uint64_t)'
|   | `-ImplicitCastExpr 0x55e563540e18 <col:15> 'uint64_t':'unsigned long' <LValueToRValue>
|   |   `-DeclRefExpr 0x55e563540d50 <col:15> 'uint64_t':'unsigned long' lvalue ParmVar 0x55e56353f9f0 'val' 'uint64_t':'unsigned long'
|   `-IfStmt 0x55e563541080 <line:113:2, line:115:2>
|     |-ImplicitCastExpr 0x55e563540e50 <line:113:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x55e563540e30 <col:6> 'int' lvalue ParmVar 0x55e56353faf0 'flag' 'int'
|     `-CompoundStmt 0x55e563541068 <col:12, line:115:2>
|       `-CallExpr 0x55e563540fe0 <line:114:5, col:87> 'int'
|         |-ImplicitCastExpr 0x55e563540fc8 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x55e563540e68 <col:5> 'int (const char *, ...)' Function 0x55e5634fa3f0 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x55e563541038 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x55e563541020 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x55e563540ec0 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x55e563541050 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x55e563540f00 <col:52> 'char *' lvalue ParmVar 0x55e56353fa70 'vname' 'char *'
|         `-BinaryOperator 0x55e563540f90 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x55e563540f78 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e563540f60 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563540f20 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x55e563540f40 <col:75> 'unsigned long' 4294967295
|-FunctionDecl 0x55e563541350 <line:120:1, line:130:1> line:121:1 transparent_crc_bytes 'void (char *, int, char *, int)' static
| |-ParmVarDecl 0x55e5635410d8 <col:24, col:30> col:30 used ptr 'char *'
| |-ParmVarDecl 0x55e563541158 <col:35, col:39> col:39 used nbytes 'int'
| |-ParmVarDecl 0x55e5635411d8 <col:47, col:53> col:53 used vname 'char *'
| |-ParmVarDecl 0x55e563541258 <col:60, col:64> col:64 used flag 'int'
| `-CompoundStmt 0x55e563541988 <line:122:1, line:130:1>
|   |-DeclStmt 0x55e563541498 <line:123:5, col:10>
|   | `-VarDecl 0x55e563541430 <col:5, col:9> col:9 used i 'int'
|   |-ForStmt 0x55e563541718 <line:124:5, line:126:5>
|   | |-BinaryOperator 0x55e5635414f0 <line:124:10, col:12> 'int' '='
|   | | |-DeclRefExpr 0x55e5635414b0 <col:10> 'int' lvalue Var 0x55e563541430 'i' 'int'
|   | | `-IntegerLiteral 0x55e5635414d0 <col:12> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55e563541580 <col:15, col:17> 'int' '<'
|   | | |-ImplicitCastExpr 0x55e563541550 <col:15> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55e563541510 <col:15> 'int' lvalue Var 0x55e563541430 'i' 'int'
|   | | `-ImplicitCastExpr 0x55e563541568 <col:17> 'int' <LValueToRValue>
|   | |   `-DeclRefExpr 0x55e563541530 <col:17> 'int' lvalue ParmVar 0x55e563541158 'nbytes' 'int'
|   | |-UnaryOperator 0x55e5635415c0 <col:25, col:26> 'int' postfix '++'
|   | | `-DeclRefExpr 0x55e5635415a0 <col:25> 'int' lvalue Var 0x55e563541430 'i' 'int'
|   | `-CompoundStmt 0x55e563541700 <col:30, line:126:5>
|   |   `-CallExpr 0x55e5635416a0 <line:125:9, col:26> 'void'
|   |     |-ImplicitCastExpr 0x55e563541688 <col:9> 'void (*)(uint8_t)' <FunctionToPointerDecay>
|   |     | `-DeclRefExpr 0x55e5635415d8 <col:9> 'void (uint8_t)' Function 0x55e56353e820 'crc32_byte' 'void (uint8_t)'
|   |     `-ImplicitCastExpr 0x55e5635416e8 <col:20, col:25> 'uint8_t':'unsigned char' <IntegralCast>
|   |       `-ImplicitCastExpr 0x55e5635416d0 <col:20, col:25> 'char' <LValueToRValue>
|   |         `-ArraySubscriptExpr 0x55e563541668 <col:20, col:25> 'char' lvalue
|   |           |-ImplicitCastExpr 0x55e563541638 <col:20> 'char *' <LValueToRValue>
|   |           | `-DeclRefExpr 0x55e5635415f8 <col:20> 'char *' lvalue ParmVar 0x55e5635410d8 'ptr' 'char *'
|   |           `-ImplicitCastExpr 0x55e563541650 <col:24> 'int' <LValueToRValue>
|   |             `-DeclRefExpr 0x55e563541618 <col:24> 'int' lvalue Var 0x55e563541430 'i' 'int'
|   `-IfStmt 0x55e563541968 <line:127:2, line:129:2>
|     |-ImplicitCastExpr 0x55e563541770 <line:127:6> 'int' <LValueToRValue>
|     | `-DeclRefExpr 0x55e563541750 <col:6> 'int' lvalue ParmVar 0x55e563541258 'flag' 'int'
|     `-CompoundStmt 0x55e563541950 <col:12, line:129:2>
|       `-CallExpr 0x55e5635418c8 <line:128:5, col:87> 'int'
|         |-ImplicitCastExpr 0x55e5635418b0 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
|         | `-DeclRefExpr 0x55e563541788 <col:5> 'int (const char *, ...)' Function 0x55e5634fa3f0 'printf' 'int (const char *, ...)'
|         |-ImplicitCastExpr 0x55e563541920 <col:12> 'const char *' <NoOp>
|         | `-ImplicitCastExpr 0x55e563541908 <col:12> 'char *' <ArrayToPointerDecay>
|         |   `-StringLiteral 0x55e5635417a8 <col:12> 'char[36]' lvalue "...checksum after hashing %s : %lX\n"
|         |-ImplicitCastExpr 0x55e563541938 <col:52> 'char *' <LValueToRValue>
|         | `-DeclRefExpr 0x55e5635417e8 <col:52> 'char *' lvalue ParmVar 0x55e5635411d8 'vname' 'char *'
|         `-BinaryOperator 0x55e563541878 <col:59, col:75> 'unsigned long' '^'
|           |-ImplicitCastExpr 0x55e563541860 <col:59> 'unsigned long' <IntegralCast>
|           | `-ImplicitCastExpr 0x55e563541848 <col:59> 'uint32_t':'unsigned int' <LValueToRValue>
|           |   `-DeclRefExpr 0x55e563541808 <col:59> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
|           `-IntegerLiteral 0x55e563541828 <col:75> 'unsigned long' 4294967295
|-VarDecl 0x55e5635419c8 </home/user/Desktop/CASTLE/InstrumentationScaffolder/csmith_mage/0.c:13:1, col:13> col:13 __undefined 'long' static
|-FunctionDecl 0x55e563541b30 <line:19:1, col:52> col:41 used func_1 'int64_t (void)' static
| `-OptimizeNoneAttr 0x55e563541bd8 <col:16>
|-FunctionDecl 0x55e563541cc8 prev 0x55e563541b30 <line:27:1, line:30:1> line:27:41 used func_1 'int64_t (void)' static
| |-CompoundStmt 0x55e563541ee8 <col:54, line:30:1> MathErrno=1
| | |-DeclStmt 0x55e563541e60 <line:28:3, col:21>
| | | `-VarDecl 0x55e563541dd8 <col:3, col:18> col:12 used l_2 'uint64_t':'unsigned long' cinit
| | |   `-IntegerLiteral 0x55e563541e40 <col:18> 'unsigned long' 4
| | `-ReturnStmt 0x55e563541ed8 <line:29:3, col:10>
| |   `-ImplicitCastExpr 0x55e563541eb8 <col:10> 'int64_t':'long' <IntegralCast> MathErrno=1
| |     `-ImplicitCastExpr 0x55e563541e98 <col:10> 'uint64_t':'unsigned long' <LValueToRValue> MathErrno=1
| |       `-DeclRefExpr 0x55e563541e78 <col:10> 'uint64_t':'unsigned long' lvalue Var 0x55e563541dd8 'l_2' 'uint64_t':'unsigned long'
| `-OptimizeNoneAttr 0x55e563541d70 <line:27:16>
`-FunctionDecl 0x55e563542148 <line:33:1, line:47:1> line:33:30 main 'int (int, char **)'
  |-ParmVarDecl 0x55e563541f28 <col:35, col:39> col:39 used argc 'int'
  |-ParmVarDecl 0x55e563542020 <col:45, col:56> col:51 used argv 'char **'
  |-CompoundStmt 0x55e563542d98 <col:59, line:47:1> MathErrno=1
  | |-CallExpr 0x55e5635422f0 <line:34:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55e5635422d0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55e563542258 <col:3> 'void (int)' Function 0x55e5633e4d80 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55e563542278 <col:20> 'int' 0
  | |-DeclStmt 0x55e5635423c8 <line:35:3, col:27>
  | | `-VarDecl 0x55e563542340 <col:3, col:26> col:7 used print_hash_value 'int' cinit
  | |   `-IntegerLiteral 0x55e5635423a8 <col:26> 'int' 0
  | |-CallExpr 0x55e563542440 <line:36:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55e563542420 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55e5635423e0 <col:3> 'void (int)' Function 0x55e5633e4d80 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55e563542400 <col:20> 'int' 1
  | |-IfStmt 0x55e563542800 <line:37:3, line:39:3>
  | | |-BinaryOperator 0x55e563542758 <line:37:7, col:44> 'int' '&&' MathErrno=1
  | | | |-BinaryOperator 0x55e5635424d8 <col:7, col:15> 'int' '==' MathErrno=1
  | | | | |-ImplicitCastExpr 0x55e5635424b8 <col:7> 'int' <LValueToRValue> MathErrno=1
  | | | | | `-DeclRefExpr 0x55e563542478 <col:7> 'int' lvalue ParmVar 0x55e563541f28 'argc' 'int'
  | | | | `-IntegerLiteral 0x55e563542498 <col:15> 'int' 2
  | | | `-BinaryOperator 0x55e563542730 <col:20, col:44> 'int' '==' MathErrno=1
  | | |   |-CallExpr 0x55e563542650 <col:20, col:39> 'int' MathErrno=1
  | | |   | |-ImplicitCastExpr 0x55e563542630 <col:20> 'int (*)(const char *, const char *)' <FunctionToPointerDecay> MathErrno=1
  | | |   | | `-DeclRefExpr 0x55e563542500 <col:20> 'int (const char *, const char *)' Function 0x55e563404c08 'strcmp' 'int (const char *, const char *)'
  | | |   | |-ImplicitCastExpr 0x55e5635426b0 <col:27, col:33> 'const char *' <NoOp> MathErrno=1
  | | |   | | `-ImplicitCastExpr 0x55e563542690 <col:27, col:33> 'char *' <LValueToRValue> MathErrno=1
  | | |   | |   `-ArraySubscriptExpr 0x55e563542580 <col:27, col:33> 'char *' lvalue
  | | |   | |     |-ImplicitCastExpr 0x55e563542560 <col:27> 'char **' <LValueToRValue> MathErrno=1
  | | |   | |     | `-DeclRefExpr 0x55e563542520 <col:27> 'char **' lvalue ParmVar 0x55e563542020 'argv' 'char **'
  | | |   | |     `-IntegerLiteral 0x55e563542540 <col:32> 'int' 1
  | | |   | `-ImplicitCastExpr 0x55e5635426f0 <col:36> 'const char *' <NoOp> MathErrno=1
  | | |   |   `-ImplicitCastExpr 0x55e5635426d0 <col:36> 'char *' <ArrayToPointerDecay> MathErrno=1
  | | |   |     `-StringLiteral 0x55e5635425a0 <col:36> 'char[2]' lvalue "1"
  | | |   `-IntegerLiteral 0x55e563542710 <col:44> 'int' 0
  | | `-CompoundStmt 0x55e5635427e8 <col:47, line:39:3>
  | |   `-BinaryOperator 0x55e5635427c0 <line:38:5, col:24> 'int' '=' MathErrno=1
  | |     |-DeclRefExpr 0x55e563542780 <col:5> 'int' lvalue Var 0x55e563542340 'print_hash_value' 'int'
  | |     `-IntegerLiteral 0x55e5635427a0 <col:24> 'int' 1
  | |-CallExpr 0x55e563542880 <line:40:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55e563542860 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55e563542820 <col:3> 'void (int)' Function 0x55e5633e4d80 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55e563542840 <col:20> 'int' 2
  | |-CallExpr 0x55e563542930 <line:41:3, col:23> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x55e563542910 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55e5635428b8 <col:3> 'void (void)' Function 0x55e56350fa90 'platform_main_begin' 'void (void)'
  | |-CallExpr 0x55e5635429c0 <line:42:3, col:21> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55e5635429a0 <col:3> 'void (*)(int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55e563542960 <col:3> 'void (int)' Function 0x55e5633e4d80 'codemarker_alpha' 'void (int)'
  | | `-IntegerLiteral 0x55e563542980 <col:20> 'int' 3
  | |-CallExpr 0x55e563542a38 <line:43:3, col:16> 'void' MathErrno=1
  | | `-ImplicitCastExpr 0x55e563542a18 <col:3> 'void (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55e5635429f8 <col:3> 'void (void)' Function 0x55e56353dc08 'crc32_gentab' 'void (void)'
  | |-CallExpr 0x55e563542b10 <line:44:3, col:10> 'int64_t':'long' MathErrno=1
  | | `-ImplicitCastExpr 0x55e563542af0 <col:3> 'int64_t (*)(void)' <FunctionToPointerDecay> MathErrno=1
  | |   `-DeclRefExpr 0x55e563542a68 <col:3> 'int64_t (void)' Function 0x55e563541cc8 'func_1' 'int64_t (void)'
  | |-CallExpr 0x55e563542cc0 <line:45:3, col:67> 'void' MathErrno=1
  | | |-ImplicitCastExpr 0x55e563542ca0 <col:3> 'void (*)(uint32_t, int)' <FunctionToPointerDecay> MathErrno=1
  | | | `-DeclRefExpr 0x55e563542b40 <col:3> 'void (uint32_t, int)' Function 0x55e56350fd60 'platform_main_end' 'void (uint32_t, int)'
  | | |-ImplicitCastExpr 0x55e563542d00 <col:21, col:37> 'uint32_t':'unsigned int' <IntegralCast> MathErrno=1
  | | | `-BinaryOperator 0x55e563542bf0 <col:21, col:37> 'unsigned long' '^' MathErrno=1
  | | |   |-ImplicitCastExpr 0x55e563542bd0 <col:21> 'unsigned long' <IntegralCast> MathErrno=1
  | | |   | `-ImplicitCastExpr 0x55e563542bb0 <col:21> 'uint32_t':'unsigned int' <LValueToRValue> MathErrno=1
  | | |   |   `-DeclRefExpr 0x55e563542b60 <col:21> 'uint32_t':'unsigned int' lvalue Var 0x55e56353ca28 'crc32_context' 'uint32_t':'unsigned int'
  | | |   `-IntegerLiteral 0x55e563542b80 <col:37> 'unsigned long' 4294967295
  | | `-ImplicitCastExpr 0x55e563542d20 <col:51> 'int' <LValueToRValue> MathErrno=1
  | |   `-DeclRefExpr 0x55e563542c18 <col:51> 'int' lvalue Var 0x55e563542340 'print_hash_value' 'int'
  | `-ReturnStmt 0x55e563542d60 <line:46:3, col:10>
  |   `-IntegerLiteral 0x55e563542d40 <col:10> 'int' 0
  `-OptimizeNoneAttr 0x55e563542200 <line:33:16>

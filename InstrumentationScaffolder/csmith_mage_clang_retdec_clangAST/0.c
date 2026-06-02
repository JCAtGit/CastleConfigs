TranslationUnitDecl 0x55fa88f84308 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x55fa88f84ee0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x55fa88f848d0 '__int128'
|-TypedefDecl 0x55fa88f84f50 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x55fa88f848f0 'unsigned __int128'
|-TypedefDecl 0x55fa88f85260 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x55fa88f85030 'struct __NSConstantString_tag'
|   `-Record 0x55fa88f84fa8 '__NSConstantString_tag'
|-TypedefDecl 0x55fa88f84b88 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x55fa88f84b40 'char *'
|   `-BuiltinType 0x55fa88f843b0 'char'
|-TypedefDecl 0x55fa88f84e70 <<invalid sloc>> <invalid sloc> implicit referenced __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x55fa88f84e20 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x55fa88f84c60 'struct __va_list_tag'
|     `-Record 0x55fa88f84be0 '__va_list_tag'
|-TypedefDecl 0x55fa89004db0 </usr/include/bits/types.h:31:1, col:23> col:23 referenced __u_char 'unsigned char'
| `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa89004e20 <line:32:1, col:28> col:28 referenced __u_short 'unsigned short'
| `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa89004e90 <line:33:1, col:22> col:22 referenced __u_int 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89004f00 <line:34:1, col:27> col:27 referenced __u_long 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89004f70 <line:37:1, col:21> col:21 referenced __int8_t 'signed char'
| `-BuiltinType 0x55fa88f843d0 'signed char'
|-TypedefDecl 0x55fa89004fe0 <line:38:1, col:23> col:23 referenced __uint8_t 'unsigned char'
| `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa89005050 <line:39:1, col:26> col:26 referenced __int16_t 'short'
| `-BuiltinType 0x55fa88f843f0 'short'
|-TypedefDecl 0x55fa890050c0 <line:40:1, col:28> col:28 referenced __uint16_t 'unsigned short'
| `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa89005130 <line:41:1, col:20> col:20 referenced __int32_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa890051a0 <line:42:1, col:22> col:22 referenced __uint32_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89005210 <line:44:1, col:25> col:25 referenced __int64_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89005280 <line:45:1, col:27> col:27 referenced __uint64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005350 <line:52:1, col:18> col:18 referenced __int_least8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55fa89005310 '__int8_t' sugar
|   `-TypedefType 0x55fa890052e0 '__int8_t' sugar
|     |-Typedef 0x55fa89004f70 '__int8_t'
|     `-BuiltinType 0x55fa88f843d0 'signed char'
|-TypedefDecl 0x55fa89005420 <line:53:1, col:19> col:19 referenced __uint_least8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55fa890053e0 '__uint8_t' sugar
|   `-TypedefType 0x55fa890053b0 '__uint8_t' sugar
|     |-Typedef 0x55fa89004fe0 '__uint8_t'
|     `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa890054f0 <line:54:1, col:19> col:19 referenced __int_least16_t '__int16_t':'short'
| `-ElaboratedType 0x55fa890054b0 '__int16_t' sugar
|   `-TypedefType 0x55fa89005480 '__int16_t' sugar
|     |-Typedef 0x55fa89005050 '__int16_t'
|     `-BuiltinType 0x55fa88f843f0 'short'
|-TypedefDecl 0x55fa890055c0 <line:55:1, col:20> col:20 referenced __uint_least16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55fa89005580 '__uint16_t' sugar
|   `-TypedefType 0x55fa89005550 '__uint16_t' sugar
|     |-Typedef 0x55fa890050c0 '__uint16_t'
|     `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa89005690 <line:56:1, col:19> col:19 referenced __int_least32_t '__int32_t':'int'
| `-ElaboratedType 0x55fa89005650 '__int32_t' sugar
|   `-TypedefType 0x55fa89005620 '__int32_t' sugar
|     |-Typedef 0x55fa89005130 '__int32_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa89005760 <line:57:1, col:20> col:20 referenced __uint_least32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55fa89005720 '__uint32_t' sugar
|   `-TypedefType 0x55fa890056f0 '__uint32_t' sugar
|     |-Typedef 0x55fa890051a0 '__uint32_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89005830 <line:58:1, col:19> col:19 referenced __int_least64_t '__int64_t':'long'
| `-ElaboratedType 0x55fa890057f0 '__int64_t' sugar
|   `-TypedefType 0x55fa890057c0 '__int64_t' sugar
|     |-Typedef 0x55fa89005210 '__int64_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89005900 <line:59:1, col:20> col:20 referenced __uint_least64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55fa890058c0 '__uint64_t' sugar
|   `-TypedefType 0x55fa89005890 '__uint64_t' sugar
|     |-Typedef 0x55fa89005280 '__uint64_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005970 <line:63:1, col:18> col:18 referenced __quad_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa890059e0 <line:64:1, col:27> col:27 referenced __u_quad_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005a50 <line:72:1, col:18> col:18 referenced __intmax_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89005ac0 <line:73:1, col:27> col:27 referenced __uintmax_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005b30 <line:137:22, line:145:25> col:25 referenced __dev_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005ba0 <line:137:22, line:146:25> col:25 referenced __uid_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89005c10 <line:137:22, line:147:25> col:25 referenced __gid_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89005c80 <line:137:22, line:148:25> col:25 referenced __ino_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89005cf0 <line:137:22, line:149:27> col:27 __ino64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900acf0 <line:137:22, line:150:26> col:26 referenced __mode_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900ad60 <line:137:22, line:151:27> col:27 referenced __nlink_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900add0 <line:137:22, line:152:25> col:25 referenced __off_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900ae40 <line:137:22, line:153:27> col:27 referenced __off64_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900aeb0 <line:137:22, line:154:25> col:25 referenced __pid_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-RecordDecl 0x55fa8900af08 </usr/include/bits/typesizes.h:73:24, col:47> col:24 struct definition
| `-FieldDecl 0x55fa8900b048 <col:33, col:44> col:37 __val 'int[2]'
|-TypedefDecl 0x55fa8900b0f8 </usr/include/bits/types.h:137:22, line:155:26> col:26 referenced __fsid_t 'struct __fsid_t':'__fsid_t'
| `-ElaboratedType 0x55fa8900b0a0 'struct __fsid_t' sugar
|   `-RecordType 0x55fa8900af90 '__fsid_t'
|     `-Record 0x55fa8900af08 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x55fa8900b180 </usr/include/bits/types.h:137:22, line:156:27> col:27 referenced __clock_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b1f0 <line:137:22, line:157:26> col:26 __rlim_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b260 <line:137:22, line:158:28> col:28 __rlim64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b2d0 <line:137:22, line:159:24> col:24 referenced __id_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900b340 <line:137:22, line:160:26> col:26 referenced __time_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b3b0 <line:137:22, line:161:30> col:30 __useconds_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900b420 <line:137:22, line:162:31> col:31 referenced __suseconds_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b490 <line:137:22, line:163:33> col:33 __suseconds64_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b500 <line:137:22, line:165:27> col:27 referenced __daddr_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900b570 <line:137:22, line:166:25> col:25 referenced __key_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900b5e0 <line:137:22, line:169:29> col:29 referenced __clockid_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900b650 <line:137:22, line:172:27> col:27 referenced __timer_t 'void *'
| `-PointerType 0x55fa88f84ab0 'void *'
|   `-BuiltinType 0x55fa88f84370 'void'
|-TypedefDecl 0x55fa8900b6c0 <line:137:22, line:175:29> col:29 referenced __blksize_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b730 <line:137:22, line:180:28> col:28 referenced __blkcnt_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b7a0 <line:137:22, line:181:30> col:30 __blkcnt64_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900b810 <line:137:22, line:184:30> col:30 referenced __fsblkcnt_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b880 <line:137:22, line:185:32> col:32 __fsblkcnt64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b8f0 <line:137:22, line:188:30> col:30 referenced __fsfilcnt_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b960 <line:137:22, line:189:32> col:32 __fsfilcnt64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900b9d0 <line:137:22, line:192:28> col:28 __fsword_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900ba40 <line:137:22, line:194:27> col:27 referenced __ssize_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900bab0 <line:137:22, line:197:33> col:33 referenced __syscall_slong_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900bb20 <line:137:22, line:199:33> col:33 __syscall_ulong_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900bbf0 <line:203:1, col:19> col:19 referenced __loff_t '__off64_t':'long'
| `-ElaboratedType 0x55fa8900bbb0 '__off64_t' sugar
|   `-TypedefType 0x55fa8900bb80 '__off64_t' sugar
|     |-Typedef 0x55fa8900ae40 '__off64_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900bc60 <line:204:1, col:15> col:15 referenced __caddr_t 'char *'
| `-PointerType 0x55fa88f84b40 'char *'
|   `-BuiltinType 0x55fa88f843b0 'char'
|-TypedefDecl 0x55fa8900da20 <line:137:22, line:207:25> col:25 __intptr_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900da90 <line:137:22, line:210:23> col:23 __socklen_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900db00 <line:215:1, col:13> col:13 __sig_atomic_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900db68 </usr/include/bits/stdint-intn.h:24:1, col:18> col:18 int8_t '__int8_t':'signed char'
| `-ElaboratedType 0x55fa89005310 '__int8_t' sugar
|   `-TypedefType 0x55fa890052e0 '__int8_t' sugar
|     |-Typedef 0x55fa89004f70 '__int8_t'
|     `-BuiltinType 0x55fa88f843d0 'signed char'
|-TypedefDecl 0x55fa8900dbd0 <line:25:1, col:19> col:19 int16_t '__int16_t':'short'
| `-ElaboratedType 0x55fa890054b0 '__int16_t' sugar
|   `-TypedefType 0x55fa89005480 '__int16_t' sugar
|     |-Typedef 0x55fa89005050 '__int16_t'
|     `-BuiltinType 0x55fa88f843f0 'short'
|-TypedefDecl 0x55fa8900dc38 <line:26:1, col:19> col:19 referenced int32_t '__int32_t':'int'
| `-ElaboratedType 0x55fa89005650 '__int32_t' sugar
|   `-TypedefType 0x55fa89005620 '__int32_t' sugar
|     |-Typedef 0x55fa89005130 '__int32_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900dca0 <line:27:1, col:19> col:19 referenced int64_t '__int64_t':'long'
| `-ElaboratedType 0x55fa890057f0 '__int64_t' sugar
|   `-TypedefType 0x55fa890057c0 '__int64_t' sugar
|     |-Typedef 0x55fa89005210 '__int64_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900dd08 </usr/include/bits/stdint-uintn.h:24:1, col:19> col:19 uint8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55fa890053e0 '__uint8_t' sugar
|   `-TypedefType 0x55fa890053b0 '__uint8_t' sugar
|     |-Typedef 0x55fa89004fe0 '__uint8_t'
|     `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa8900dd70 <line:25:1, col:20> col:20 uint16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55fa89005580 '__uint16_t' sugar
|   `-TypedefType 0x55fa89005550 '__uint16_t' sugar
|     |-Typedef 0x55fa890050c0 '__uint16_t'
|     `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa8900ddd8 <line:26:1, col:20> col:20 referenced uint32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55fa89005720 '__uint32_t' sugar
|   `-TypedefType 0x55fa890056f0 '__uint32_t' sugar
|     |-Typedef 0x55fa890051a0 '__uint32_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900de40 <line:27:1, col:20> col:20 uint64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55fa890058c0 '__uint64_t' sugar
|   `-TypedefType 0x55fa89005890 '__uint64_t' sugar
|     |-Typedef 0x55fa89005280 '__uint64_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900df10 </usr/include/bits/stdint-least.h:25:1, col:24> col:24 int_least8_t '__int_least8_t':'signed char'
| `-ElaboratedType 0x55fa8900ded0 '__int_least8_t' sugar
|   `-TypedefType 0x55fa8900dea0 '__int_least8_t' sugar
|     |-Typedef 0x55fa89005350 '__int_least8_t'
|     `-ElaboratedType 0x55fa89005310 '__int8_t' sugar
|       `-TypedefType 0x55fa890052e0 '__int8_t' sugar
|         |-Typedef 0x55fa89004f70 '__int8_t'
|         `-BuiltinType 0x55fa88f843d0 'signed char'
|-TypedefDecl 0x55fa8900dfe0 <line:26:1, col:25> col:25 int_least16_t '__int_least16_t':'short'
| `-ElaboratedType 0x55fa8900dfa0 '__int_least16_t' sugar
|   `-TypedefType 0x55fa8900df70 '__int_least16_t' sugar
|     |-Typedef 0x55fa890054f0 '__int_least16_t'
|     `-ElaboratedType 0x55fa890054b0 '__int16_t' sugar
|       `-TypedefType 0x55fa89005480 '__int16_t' sugar
|         |-Typedef 0x55fa89005050 '__int16_t'
|         `-BuiltinType 0x55fa88f843f0 'short'
|-TypedefDecl 0x55fa8900e0b0 <line:27:1, col:25> col:25 int_least32_t '__int_least32_t':'int'
| `-ElaboratedType 0x55fa8900e070 '__int_least32_t' sugar
|   `-TypedefType 0x55fa8900e040 '__int_least32_t' sugar
|     |-Typedef 0x55fa89005690 '__int_least32_t'
|     `-ElaboratedType 0x55fa89005650 '__int32_t' sugar
|       `-TypedefType 0x55fa89005620 '__int32_t' sugar
|         |-Typedef 0x55fa89005130 '__int32_t'
|         `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa8900e180 <line:28:1, col:25> col:25 int_least64_t '__int_least64_t':'long'
| `-ElaboratedType 0x55fa8900e140 '__int_least64_t' sugar
|   `-TypedefType 0x55fa8900e110 '__int_least64_t' sugar
|     |-Typedef 0x55fa89005830 '__int_least64_t'
|     `-ElaboratedType 0x55fa890057f0 '__int64_t' sugar
|       `-TypedefType 0x55fa890057c0 '__int64_t' sugar
|         |-Typedef 0x55fa89005210 '__int64_t'
|         `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900e250 <line:31:1, col:25> col:25 uint_least8_t '__uint_least8_t':'unsigned char'
| `-ElaboratedType 0x55fa8900e210 '__uint_least8_t' sugar
|   `-TypedefType 0x55fa8900e1e0 '__uint_least8_t' sugar
|     |-Typedef 0x55fa89005420 '__uint_least8_t'
|     `-ElaboratedType 0x55fa890053e0 '__uint8_t' sugar
|       `-TypedefType 0x55fa890053b0 '__uint8_t' sugar
|         |-Typedef 0x55fa89004fe0 '__uint8_t'
|         `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa8900e320 <line:32:1, col:26> col:26 uint_least16_t '__uint_least16_t':'unsigned short'
| `-ElaboratedType 0x55fa8900e2e0 '__uint_least16_t' sugar
|   `-TypedefType 0x55fa8900e2b0 '__uint_least16_t' sugar
|     |-Typedef 0x55fa890055c0 '__uint_least16_t'
|     `-ElaboratedType 0x55fa89005580 '__uint16_t' sugar
|       `-TypedefType 0x55fa89005550 '__uint16_t' sugar
|         |-Typedef 0x55fa890050c0 '__uint16_t'
|         `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa8900e3f0 <line:33:1, col:26> col:26 uint_least32_t '__uint_least32_t':'unsigned int'
| `-ElaboratedType 0x55fa8900e3b0 '__uint_least32_t' sugar
|   `-TypedefType 0x55fa8900e380 '__uint_least32_t' sugar
|     |-Typedef 0x55fa89005760 '__uint_least32_t'
|     `-ElaboratedType 0x55fa89005720 '__uint32_t' sugar
|       `-TypedefType 0x55fa890056f0 '__uint32_t' sugar
|         |-Typedef 0x55fa890051a0 '__uint32_t'
|         `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8900e4c0 <line:34:1, col:26> col:26 uint_least64_t '__uint_least64_t':'unsigned long'
| `-ElaboratedType 0x55fa8900e480 '__uint_least64_t' sugar
|   `-TypedefType 0x55fa8900e450 '__uint_least64_t' sugar
|     |-Typedef 0x55fa89005900 '__uint_least64_t'
|     `-ElaboratedType 0x55fa890058c0 '__uint64_t' sugar
|       `-TypedefType 0x55fa89005890 '__uint64_t' sugar
|         |-Typedef 0x55fa89005280 '__uint64_t'
|         `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900e530 </usr/include/stdint.h:47:1, col:22> col:22 int_fast8_t 'signed char'
| `-BuiltinType 0x55fa88f843d0 'signed char'
|-TypedefDecl 0x55fa8900e5a0 <line:49:1, col:19> col:19 int_fast16_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900e610 <line:50:1, col:19> col:19 int_fast32_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900e680 <line:51:1, col:19> col:19 int_fast64_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900e6f0 <line:60:1, col:24> col:24 uint_fast8_t 'unsigned char'
| `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa8900e760 <line:62:1, col:27> col:27 uint_fast16_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900e7d0 <line:63:1, col:27> col:27 uint_fast32_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900e840 <line:64:1, col:27> col:27 uint_fast64_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa8900e8b0 <line:76:1, col:19> col:19 intptr_t 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8900e920 <line:79:1, col:27> col:27 uintptr_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89010440 <line:90:1, col:21> col:21 intmax_t '__intmax_t':'long'
| `-ElaboratedType 0x55fa8900e9b0 '__intmax_t' sugar
|   `-TypedefType 0x55fa8900e980 '__intmax_t' sugar
|     |-Typedef 0x55fa89005a50 '__intmax_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89010510 <line:91:1, col:22> col:22 uintmax_t '__uintmax_t':'unsigned long'
| `-ElaboratedType 0x55fa890104d0 '__uintmax_t' sugar
|   `-TypedefType 0x55fa890104a0 '__uintmax_t' sugar
|     |-Typedef 0x55fa89005ac0 '__uintmax_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89010580 </usr/bin/../lib/clang/21/include/__stddef_size_t.h:18:1, col:23> col:23 referenced size_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89010650 </usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h:12:1, col:27> col:27 referenced __gnuc_va_list '__builtin_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55fa89010610 '__builtin_va_list' sugar
|   `-TypedefType 0x55fa890105e0 '__builtin_va_list' sugar
|     |-Typedef 0x55fa88f84e70 '__builtin_va_list'
|     `-ConstantArrayType 0x55fa88f84e20 'struct __va_list_tag[1]' 1 
|       `-RecordType 0x55fa88f84c60 'struct __va_list_tag'
|         `-Record 0x55fa88f84be0 '__va_list_tag'
|-RecordDecl 0x55fa890106a8 </usr/include/bits/types/__mbstate_t.h:13:9, line:21:1> line:13:9 struct definition
| |-FieldDecl 0x55fa89010768 <line:15:3, col:7> col:7 __count 'int'
| |-RecordDecl 0x55fa890107b8 <line:16:3, line:20:3> line:16:3 union definition
| | |-FieldDecl 0x55fa89010878 <<built-in>:115:23, /usr/include/bits/types/__mbstate_t.h:18:19> col:19 __wch 'unsigned int'
| | `-FieldDecl 0x55fa89010960 <line:19:5, col:18> col:10 __wchb 'char[4]'
| `-FieldDecl 0x55fa89010a08 <line:16:3, line:20:5> col:5 __value 'union (unnamed union at /usr/include/bits/types/__mbstate_t.h:16:3)':'union __mbstate_t::(unnamed at /usr/include/bits/types/__mbstate_t.h:16:3)'
|-TypedefDecl 0x55fa89010ab8 <line:13:1, line:21:3> col:3 referenced __mbstate_t 'struct __mbstate_t':'__mbstate_t'
| `-ElaboratedType 0x55fa89010a60 'struct __mbstate_t' sugar
|   `-RecordType 0x55fa89010730 '__mbstate_t'
|     `-Record 0x55fa890106a8 <line:13:9, line:21:1>
|-RecordDecl 0x55fa89010b28 </usr/include/bits/types/__fpos_t.h:10:9, line:14:1> line:10:16 struct _G_fpos_t definition
| |-FieldDecl 0x55fa89010c40 <line:12:3, col:11> col:11 __pos '__off_t':'long'
| `-FieldDecl 0x55fa89010d00 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55fa89010da8 <line:10:1, line:14:3> col:3 referenced __fpos_t 'struct _G_fpos_t'
| `-ElaboratedType 0x55fa89010d50 'struct _G_fpos_t' sugar
|   `-RecordType 0x55fa89010bb0 'struct _G_fpos_t'
|     `-Record 0x55fa89010b28 '_G_fpos_t'
|-RecordDecl 0x55fa89010e18 </usr/include/bits/types/__fpos64_t.h:10:9, line:14:1> line:10:16 struct _G_fpos64_t definition
| |-FieldDecl 0x55fa89010ed0 <line:12:3, col:13> col:13 __pos '__off64_t':'long'
| `-FieldDecl 0x55fa89010f30 <line:13:3, col:15> col:15 __state '__mbstate_t'
|-TypedefDecl 0x55fa89010fd8 <line:10:1, line:14:3> col:3 __fpos64_t 'struct _G_fpos64_t'
| `-ElaboratedType 0x55fa89010f80 'struct _G_fpos64_t' sugar
|   `-RecordType 0x55fa89010ea0 'struct _G_fpos64_t'
|     `-Record 0x55fa89010e18 '_G_fpos64_t'
|-RecordDecl 0x55fa89011048 </usr/include/bits/types/__FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55fa89011140 <line:5:1, col:25> col:25 __FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55fa890110f0 'struct _IO_FILE' sugar
|   `-RecordType 0x55fa890110d0 'struct _IO_FILE'
|     `-Record 0x55fa89020138 '_IO_FILE'
|-RecordDecl 0x55fa89011198 prev 0x55fa89011048 </usr/include/bits/types/FILE.h:4:1, col:8> col:8 struct _IO_FILE
|-TypedefDecl 0x55fa89011238 <line:7:1, col:25> col:25 referenced FILE 'struct _IO_FILE'
| `-ElaboratedType 0x55fa890110f0 'struct _IO_FILE' sugar
|   `-RecordType 0x55fa890110d0 'struct _IO_FILE'
|     `-Record 0x55fa89020138 '_IO_FILE'
|-RecordDecl 0x55fa89011290 prev 0x55fa89011198 </usr/include/bits/types/struct_FILE.h:37:1, col:8> col:8 struct _IO_FILE
|-RecordDecl 0x55fa89011310 <line:38:1, col:8> col:8 struct _IO_marker
|-RecordDecl 0x55fa890113b0 <line:39:1, col:8> col:8 struct _IO_codecvt
|-RecordDecl 0x55fa89020030 <line:40:1, col:8> col:8 struct _IO_wide_data
|-TypedefDecl 0x55fa890200e0 <line:45:1, col:14> col:14 referenced _IO_lock_t 'void'
| `-BuiltinType 0x55fa88f84370 'void'
|-RecordDecl 0x55fa89020138 prev 0x55fa89011290 <line:51:1, line:110:1> line:51:8 struct _IO_FILE definition
| |-FieldDecl 0x55fa890201d0 <line:53:3, col:7> col:7 _flags 'int'
| |-FieldDecl 0x55fa89020238 <line:56:3, col:9> col:9 _IO_read_ptr 'char *'
| |-FieldDecl 0x55fa890202a0 <line:57:3, col:9> col:9 _IO_read_end 'char *'
| |-FieldDecl 0x55fa89020308 <line:58:3, col:9> col:9 _IO_read_base 'char *'
| |-FieldDecl 0x55fa89020370 <line:59:3, col:9> col:9 _IO_write_base 'char *'
| |-FieldDecl 0x55fa890203d8 <line:60:3, col:9> col:9 _IO_write_ptr 'char *'
| |-FieldDecl 0x55fa89020440 <line:61:3, col:9> col:9 _IO_write_end 'char *'
| |-FieldDecl 0x55fa890204a8 <line:62:3, col:9> col:9 _IO_buf_base 'char *'
| |-FieldDecl 0x55fa89020510 <line:63:3, col:9> col:9 _IO_buf_end 'char *'
| |-FieldDecl 0x55fa89020578 <line:66:3, col:9> col:9 _IO_save_base 'char *'
| |-FieldDecl 0x55fa890205e0 <line:67:3, col:9> col:9 _IO_backup_base 'char *'
| |-FieldDecl 0x55fa89020648 <line:68:3, col:9> col:9 _IO_save_end 'char *'
| |-FieldDecl 0x55fa89020758 <line:70:3, col:22> col:22 _markers 'struct _IO_marker *'
| |-FieldDecl 0x55fa89020838 <line:72:3, col:20> col:20 _chain 'struct _IO_FILE *'
| |-FieldDecl 0x55fa890208a0 <line:74:3, col:7> col:7 _fileno 'int'
| |-FieldDecl 0x55fa89020948 <line:75:3, col:15> col:7 _flags2 'int'
| | `-ConstantExpr 0x55fa89020928 <col:15> 'int'
| |   |-value: Int 24
| |   `-IntegerLiteral 0x55fa890208f0 <col:15> 'int' 24
| |-FieldDecl 0x55fa89020a30 <line:77:3, col:26> col:8 _short_backupbuf 'char[1]'
| |-FieldDecl 0x55fa89020a90 <line:78:3, col:11> col:11 _old_offset '__off_t':'long'
| |-FieldDecl 0x55fa89020af8 <line:81:3, col:18> col:18 _cur_column 'unsigned short'
| |-FieldDecl 0x55fa89020b60 <line:82:3, col:15> col:15 _vtable_offset 'signed char'
| |-FieldDecl 0x55fa89020c10 <line:83:3, col:19> col:8 _shortbuf 'char[1]'
| |-FieldDecl 0x55fa89020d08 <line:85:3, col:15> col:15 _lock '_IO_lock_t *'
| |-FieldDecl 0x55fa89020d68 <line:93:3, col:13> col:13 _offset '__off64_t':'long'
| |-FieldDecl 0x55fa89020e78 <line:95:3, col:23> col:23 _codecvt 'struct _IO_codecvt *'
| |-FieldDecl 0x55fa89020f88 <line:96:3, col:25> col:25 _wide_data 'struct _IO_wide_data *'
| |-FieldDecl 0x55fa89021820 <line:97:3, col:20> col:20 _freeres_list 'struct _IO_FILE *'
| |-FieldDecl 0x55fa89021888 <line:98:3, col:9> col:9 _freeres_buf 'void *'
| |-FieldDecl 0x55fa89021968 <line:99:3, col:21> col:21 _prevchain 'struct _IO_FILE **'
| |-FieldDecl 0x55fa890219d0 <line:100:3, col:7> col:7 _mode 'int'
| |-FieldDecl 0x55fa89021a38 <line:102:3, col:7> col:7 _unused3 'int'
| |-FieldDecl 0x55fa89021a98 <line:104:3, col:14> col:14 _total_written '__uint64_t':'unsigned long'
| `-FieldDecl 0x55fa89021ca0 <line:109:3, col:56> col:8 _unused2 'char[8]'
|-TypedefDecl 0x55fa89022000 </usr/include/bits/types/cookie_io_functions_t.h:27:1, line:28:58> line:27:19 referenced cookie_read_function_t '__ssize_t (void *, char *, size_t)'
| `-FunctionProtoType 0x55fa89021f80 '__ssize_t (void *, char *, size_t)' cdecl
|   |-ElaboratedType 0x55fa89021d20 '__ssize_t' sugar
|   | `-TypedefType 0x55fa89021cf0 '__ssize_t' sugar
|   |   |-Typedef 0x55fa8900ba40 '__ssize_t'
|   |   `-BuiltinType 0x55fa88f84430 'long'
|   |-PointerType 0x55fa88f84ab0 'void *'
|   | `-BuiltinType 0x55fa88f84370 'void'
|   |-PointerType 0x55fa88f84b40 'char *'
|   | `-BuiltinType 0x55fa88f843b0 'char'
|   `-ElaboratedType 0x55fa89021e80 'size_t' sugar
|     `-TypedefType 0x55fa89021e50 'size_t' sugar
|       |-Typedef 0x55fa89010580 'size_t'
|       `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa890222a0 <line:36:1, line:37:59> line:36:19 referenced cookie_write_function_t '__ssize_t (void *, const char *, size_t)'
| `-FunctionProtoType 0x55fa89022220 '__ssize_t (void *, const char *, size_t)' cdecl
|   |-ElaboratedType 0x55fa89021d20 '__ssize_t' sugar
|   | `-TypedefType 0x55fa89021cf0 '__ssize_t' sugar
|   |   |-Typedef 0x55fa8900ba40 '__ssize_t'
|   |   `-BuiltinType 0x55fa88f84430 'long'
|   |-PointerType 0x55fa88f84ab0 'void *'
|   | `-BuiltinType 0x55fa88f84370 'void'
|   |-PointerType 0x55fa88f850e0 'const char *'
|   | `-QualType 0x55fa88f843b1 'const char' const
|   |   `-BuiltinType 0x55fa88f843b0 'char'
|   `-ElaboratedType 0x55fa89021e80 'size_t' sugar
|     `-TypedefType 0x55fa89021e50 'size_t' sugar
|       |-Typedef 0x55fa89010580 'size_t'
|       `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa890225b8 <line:45:1, col:78> col:13 referenced cookie_seek_function_t 'int (void *, __off64_t *, int)'
| `-FunctionProtoType 0x55fa89022530 'int (void *, __off64_t *, int)' cdecl
|   |-BuiltinType 0x55fa88f84410 'int'
|   |-PointerType 0x55fa88f84ab0 'void *'
|   | `-BuiltinType 0x55fa88f84370 'void'
|   |-PointerType 0x55fa890223b0 '__off64_t *'
|   | `-ElaboratedType 0x55fa8900bbb0 '__off64_t' sugar
|   |   `-TypedefType 0x55fa8900bb80 '__off64_t' sugar
|   |     |-Typedef 0x55fa8900ae40 '__off64_t'
|   |     `-BuiltinType 0x55fa88f84430 'long'
|   `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa890226f8 <line:48:1, col:52> col:13 referenced cookie_close_function_t 'int (void *)'
| `-FunctionProtoType 0x55fa89022690 'int (void *)' cdecl
|   |-BuiltinType 0x55fa88f84410 'int'
|   `-PointerType 0x55fa88f84ab0 'void *'
|     `-BuiltinType 0x55fa88f84370 'void'
|-RecordDecl 0x55fa89022750 <line:55:9, line:61:1> line:55:16 struct _IO_cookie_io_functions_t definition
| |-FieldDecl 0x55fa89025a58 <line:57:3, col:27> col:27 read 'cookie_read_function_t *'
| |-FieldDecl 0x55fa89025b88 <line:58:3, col:28> col:28 write 'cookie_write_function_t *'
| |-FieldDecl 0x55fa89025cb8 <line:59:3, col:27> col:27 seek 'cookie_seek_function_t *'
| `-FieldDecl 0x55fa89025de8 <line:60:3, col:28> col:28 close 'cookie_close_function_t *'
|-TypedefDecl 0x55fa89025e98 <line:55:1, line:61:3> col:3 referenced cookie_io_functions_t 'struct _IO_cookie_io_functions_t'
| `-ElaboratedType 0x55fa89025e40 'struct _IO_cookie_io_functions_t' sugar
|   `-RecordType 0x55fa890227d0 'struct _IO_cookie_io_functions_t'
|     `-Record 0x55fa89022750 '_IO_cookie_io_functions_t'
|-TypedefDecl 0x55fa89025f80 </usr/include/stdio.h:53:1, col:24> col:24 va_list '__gnuc_va_list':'struct __va_list_tag[1]'
| `-ElaboratedType 0x55fa89025f40 '__gnuc_va_list' sugar
|   `-TypedefType 0x55fa89025f10 '__gnuc_va_list' sugar
|     |-Typedef 0x55fa89010650 '__gnuc_va_list'
|     `-ElaboratedType 0x55fa89010610 '__builtin_va_list' sugar
|       `-TypedefType 0x55fa890105e0 '__builtin_va_list' sugar
|         |-Typedef 0x55fa88f84e70 '__builtin_va_list'
|         `-ConstantArrayType 0x55fa88f84e20 'struct __va_list_tag[1]' 1 
|           `-RecordType 0x55fa88f84c60 'struct __va_list_tag'
|             `-Record 0x55fa88f84be0 '__va_list_tag'
|-TypedefDecl 0x55fa89025fe8 <line:64:1, col:17> col:17 off_t '__off_t':'long'
| `-ElaboratedType 0x55fa89010c00 '__off_t' sugar
|   `-TypedefType 0x55fa89010bd0 '__off_t' sugar
|     |-Typedef 0x55fa8900add0 '__off_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89026050 <line:78:1, col:19> col:19 ssize_t '__ssize_t':'long'
| `-ElaboratedType 0x55fa89021d20 '__ssize_t' sugar
|   `-TypedefType 0x55fa89021cf0 '__ssize_t' sugar
|     |-Typedef 0x55fa8900ba40 '__ssize_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89026120 <line:85:1, col:18> col:18 referenced fpos_t '__fpos_t':'struct _G_fpos_t'
| `-ElaboratedType 0x55fa890260e0 '__fpos_t' sugar
|   `-TypedefType 0x55fa890260b0 '__fpos_t' sugar
|     |-Typedef 0x55fa89010da8 '__fpos_t'
|     `-ElaboratedType 0x55fa89010d50 'struct _G_fpos_t' sugar
|       `-RecordType 0x55fa89010bb0 'struct _G_fpos_t'
|         `-Record 0x55fa89010b28 '_G_fpos_t'
|-VarDecl 0x55fa89026228 <line:149:1, col:14> col:14 stdin 'FILE *' extern
|-VarDecl 0x55fa890262f0 <line:150:1, col:14> col:14 stdout 'FILE *' extern
|-VarDecl 0x55fa89026370 <line:151:1, col:14> col:14 stderr 'FILE *' extern
|-FunctionDecl 0x55fa890264c8 <line:158:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:158:12 remove 'int (const char *)' extern
| |-ParmVarDecl 0x55fa890263f0 <col:20, col:32> col:32 __filename 'const char *'
| `-NoThrowAttr 0x55fa89026578 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89026748 </usr/include/stdio.h:160:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:160:12 rename 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890265e8 <col:20, col:32> col:32 __old 'const char *'
| |-ParmVarDecl 0x55fa89026668 <col:39, col:51> col:51 __new 'const char *'
| `-NoThrowAttr 0x55fa89026800 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89029b78 </usr/include/stdio.h:164:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:164:12 renameat 'int (int, const char *, int, const char *)' extern
| |-ParmVarDecl 0x55fa89026870 <col:22, col:26> col:26 __oldfd 'int'
| |-ParmVarDecl 0x55fa890268f0 <col:35, col:47> col:47 __old 'const char *'
| |-ParmVarDecl 0x55fa890299f0 <col:54, col:58> col:58 __newfd 'int'
| |-ParmVarDecl 0x55fa89029a70 <line:165:8, col:20> col:20 __new 'const char *'
| `-NoThrowAttr 0x55fa89029c40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89029de8 </usr/include/stdio.h:187:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:187:12 fclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89029cb0 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55fa89029e98 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:187:49> 1
|-FunctionDecl 0x55fa8902a008 <line:197:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:197:14 tmpfile 'FILE *(void)' extern
| `-RestrictAttr 0x55fa8902a0b0 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902a2f8 </usr/include/stdio.h:214:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:214:14 tmpnam 'char *(char *)' extern
| |-ParmVarDecl 0x55fa8902a1e0 <col:22, col:35> col:26 'char *'
| `-NoThrowAttr 0x55fa8902a3a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8902a4f8 </usr/include/stdio.h:219:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:219:14 tmpnam_r 'char *(char *)' extern
| |-ParmVarDecl 0x55fa8902a460 <col:24, col:41> col:29 __s 'char *'
| `-NoThrowAttr 0x55fa8902a5a8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8902a778 </usr/include/stdio.h:231:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:231:14 tempnam 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa8902a618 <col:23, col:35> col:35 __dir 'const char *'
| |-ParmVarDecl 0x55fa8902a698 <col:42, col:54> col:54 __pfx 'const char *'
| |-NoThrowAttr 0x55fa8902a830 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa8902a888 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902ba20 </usr/include/stdio.h:239:1, col:34> col:12 fflush 'int (FILE *)' extern
| `-ParmVarDecl 0x55fa8902a8d8 <col:20, col:26> col:26 __stream 'FILE *'
|-FunctionDecl 0x55fa8902bb80 <line:248:1, col:43> col:12 fflush_unlocked 'int (FILE *)' extern
| `-ParmVarDecl 0x55fa8902bae8 <col:29, col:35> col:35 __stream 'FILE *'
|-FunctionDecl 0x55fa8902be60 <line:267:14> col:14 implicit fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa8902bf68 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8902bfd0 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55fa8902bf08 <<invalid sloc>> Implicit 636
|-FunctionDecl 0x55fa8902c048 prev 0x55fa8902be60 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:267:14 fopen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa8902bc48 <col:21, col:44> col:44 __filename 'const char *restrict'
| |-ParmVarDecl 0x55fa8902bcc8 <line:268:7, col:30> col:30 __modes 'const char *restrict'
| |-BuiltinAttr 0x55fa8902c168 <<invalid sloc>> Inherited Implicit 636
| `-RestrictAttr 0x55fa8902c100 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902c418 </usr/include/stdio.h:274:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:274:14 freopen 'FILE *(const char *restrict, const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa8902c1b0 <col:23, col:46> col:46 __filename 'const char *restrict'
| |-ParmVarDecl 0x55fa8902c230 <line:275:9, col:32> col:32 __modes 'const char *restrict'
| |-ParmVarDecl 0x55fa8902c2b0 <line:276:9, col:26> col:26 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa8902c4d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:276:55> 3
|-FunctionDecl 0x55fa8902c708 <line:302:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:302:14 fdopen 'FILE *(int, const char *)' extern
| |-ParmVarDecl 0x55fa8902c560 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55fa8902c5e0 <col:32, col:44> col:44 __modes 'const char *'
| |-NoThrowAttr 0x55fa8902c7c0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa8902c818 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902cb78 </usr/include/stdio.h:309:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:309:14 fopencookie 'FILE *(void *restrict, const char *restrict, cookie_io_functions_t)' extern
| |-ParmVarDecl 0x55fa8902c868 <col:27, col:44> col:44 __magic_cookie 'void *restrict'
| |-ParmVarDecl 0x55fa8902c8e8 <line:310:6, col:29> col:29 __modes 'const char *restrict'
| |-ParmVarDecl 0x55fa8902ca30 <line:311:6, col:28> col:28 __io_funcs 'cookie_io_functions_t':'struct _IO_cookie_io_functions_t'
| |-NoThrowAttr 0x55fa8902cc38 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa8902cc90 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902cf18 </usr/include/stdio.h:317:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:317:14 fmemopen 'FILE *(void *, size_t, const char *)' extern
| |-ParmVarDecl 0x55fa8902cce0 <col:24, col:30> col:30 __s 'void *'
| |-ParmVarDecl 0x55fa8902cd58 <col:35, col:42> col:42 __len 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8902cdd8 <col:49, col:61> col:61 __modes 'const char *'
| |-NoThrowAttr 0x55fa8902cfd8 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa8902d030 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902d2b8 </usr/include/stdio.h:323:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:323:14 open_memstream 'FILE *(char **, size_t *)' extern
| |-ParmVarDecl 0x55fa8902d0b8 <col:30, col:37> col:37 __bufloc 'char **'
| |-ParmVarDecl 0x55fa8902d198 <col:47, col:55> col:55 __sizeloc 'size_t *'
| |-NoThrowAttr 0x55fa8902d370 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa8902d3c8 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa8902d5d0 </usr/include/stdio.h:337:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:337:13 setbuf 'void (FILE *restrict, char *restrict)' extern
| |-ParmVarDecl 0x55fa8902d418 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902d498 <col:48, col:65> col:65 __buf 'char *restrict'
| |-NoThrowAttr 0x55fa8902d688 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8902d6e0 <line:555:57, /usr/include/stdio.h:338:16> 1
|-FunctionDecl 0x55fa8902da40 <line:342:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:342:12 setvbuf 'int (FILE *restrict, char *restrict, int, size_t)' extern
| |-ParmVarDecl 0x55fa8902d740 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902d7c0 <col:48, col:65> col:65 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa8902d840 <line:343:7, col:11> col:11 __modes 'int'
| |-ParmVarDecl 0x55fa8902d8b8 <col:20, col:27> col:27 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8902db08 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8902db60 <line:555:57, /usr/include/stdio.h:343:53> 1
|-FunctionDecl 0x55fa8902de10 <line:348:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:348:13 setbuffer 'void (FILE *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8902dbc0 <col:24, col:41> col:41 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902dc40 <col:51, col:68> col:68 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa8902dcb8 <line:349:10, col:17> col:17 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8902ded0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8902df28 <line:555:57, /usr/include/stdio.h:349:46> 1
|-FunctionDecl 0x55fa8902e0b0 <line:352:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:352:13 setlinebuf 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa8902df80 <col:25, col:31> col:31 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8902e160 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8902e1b8 <line:555:57, /usr/include/stdio.h:352:62> 1
|-FunctionDecl 0x55fa8902e438 <line:360:12> col:12 implicit fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa8902e540 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902e5a8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa8902e4e0 <<invalid sloc>> Implicit 557
| |-FormatAttr 0x55fa8902e620 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55fa8902e658 <col:12> Implicit
|-FunctionDecl 0x55fa8902e680 prev 0x55fa8902e438 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:360:12 fprintf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa8902e210 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902e290 <line:361:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa8902e7a8 <<invalid sloc>> Inherited Implicit 557
| |-FormatAttr 0x55fa8902e7d8 <line:360:12> Inherited printf 2 3
| |-NoThrowAttr 0x55fa8902e810 <col:12> Inherited Implicit
| `-NonNullAttr 0x55fa8902e738 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:361:58> 1
|-FunctionDecl 0x55fa8902e970 <line:366:12> col:12 implicit used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55fa8902eab0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa8902ea50 <<invalid sloc>> Implicit 1057
| `-FormatAttr 0x55fa8902eb20 <col:12> Implicit printf 1 2
|-FunctionDecl 0x55fa8902eb58 prev 0x55fa8902e970 <col:1, col:56> col:12 used printf 'int (const char *, ...)' extern
| |-ParmVarDecl 0x55fa8902e850 <col:20, col:43> col:43 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa8902ec38 <<invalid sloc>> Inherited Implicit 1057
| `-FormatAttr 0x55fa8902ec68 <col:12> Inherited printf 1 2
|-FunctionDecl 0x55fa8902ee70 <line:368:12> col:12 implicit sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa8902ef78 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55fa8902efe0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa8902ef18 <<invalid sloc>> Implicit 1141
| |-FormatAttr 0x55fa8902f058 <col:12> Implicit printf 2 3
| `-NoThrowAttr 0x55fa8902f090 <col:12> Implicit
|-FunctionDecl 0x55fa8902f0b8 prev 0x55fa8902ee70 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:368:12 sprintf 'int (char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa8902ecb8 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55fa8902ed38 <line:369:7, col:30> col:30 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa8902f1c8 <<invalid sloc>> Inherited Implicit 1141
| |-FormatAttr 0x55fa8902f1f8 <line:368:12> Inherited printf 2 3
| `-NoThrowAttr 0x55fa8902f170 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55fa8902f558 </usr/include/stdio.h:375:12> col:12 implicit vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa8902f660 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902f6c8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa8902f730 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa8902f600 <<invalid sloc>> Implicit 1469
| |-FormatAttr 0x55fa8902f7b0 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55fa8902f7e8 <col:12> Implicit
|-FunctionDecl 0x55fa8902f810 prev 0x55fa8902f558 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:375:12 vfprintf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa8902f248 <col:22, col:39> col:39 __s 'FILE *restrict'
| |-ParmVarDecl 0x55fa8902f2c8 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa8902f3a0 <line:376:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa8902f948 <<invalid sloc>> Inherited Implicit 1469
| |-FormatAttr 0x55fa8902f978 <line:375:12> Inherited printf 2 0
| |-NoThrowAttr 0x55fa8902f9b0 <col:12> Inherited Implicit
| `-NonNullAttr 0x55fa8902f8d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:376:43> 1
|-FunctionDecl 0x55fa8902fc40 <line:381:12> col:12 implicit vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa8902fd48 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa8902fdb0 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa8902fce8 <<invalid sloc>> Implicit 1454
| |-FormatAttr 0x55fa8902fe28 <col:12> Implicit printf 1 0
| `-NoThrowAttr 0x55fa8902fe60 <col:12> Implicit
|-FunctionDecl 0x55fa8902fe88 prev 0x55fa8902fc40 <col:1, col:74> col:12 vprintf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa8902fa60 <col:21, col:44> col:44 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa8902fad8 <col:54, col:69> col:69 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa8902ff70 <<invalid sloc>> Inherited Implicit 1454
| |-FormatAttr 0x55fa8902ffa0 <col:12> Inherited printf 1 0
| `-NoThrowAttr 0x55fa8902ffd8 <col:12> Inherited Implicit
|-FunctionDecl 0x55fa890302a8 <line:383:12> col:12 implicit vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa890303b0 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55fa89030418 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89030480 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89030350 <<invalid sloc>> Implicit 1471
| |-FormatAttr 0x55fa89030500 <col:12> Implicit printf 2 0
| `-NoThrowAttr 0x55fa89030538 <col:12> Implicit
|-FunctionDecl 0x55fa89030560 prev 0x55fa890302a8 <col:1, /usr/include/sys/cdefs.h:80:49> /usr/include/stdio.h:383:12 vsprintf 'int (char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89030018 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55fa89030098 <col:44, col:67> col:67 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89030110 <line:384:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89030678 <<invalid sloc>> Inherited Implicit 1471
| |-FormatAttr 0x55fa890306a8 <line:383:12> Inherited printf 2 0
| `-NoThrowAttr 0x55fa89030620 </usr/include/sys/cdefs.h:80:37>
|-FunctionDecl 0x55fa89030a70 </usr/include/stdio.h:388:12> col:12 implicit snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89030b78 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55fa89030be0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89030c48 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa89030b18 <<invalid sloc>> Implicit 1209
| |-FormatAttr 0x55fa89030cc8 <col:12> Implicit printf 3 4
| `-NoThrowAttr 0x55fa89030d00 <col:12> Implicit
|-FunctionDecl 0x55fa89030d28 prev 0x55fa89030a70 <col:1, line:390:62> line:388:12 snprintf 'int (char *restrict, unsigned long, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa890306f8 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55fa89030770 <col:44, col:51> col:51 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890307f0 <line:389:8, col:31> col:31 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa89030e78 <<invalid sloc>> Inherited Implicit 1209
| |-NoThrowAttr 0x55fa89030de8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55fa89030e40 </usr/include/stdio.h:390:32, col:60> printf 3 4
|-FunctionDecl 0x55fa89031230 <line:392:12> col:12 implicit vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89031338 <<invalid sloc>> <invalid sloc> 'char *restrict'
| |-ParmVarDecl 0x55fa890313a0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89031408 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89031470 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa890312d8 <<invalid sloc>> Implicit 1473
| |-FormatAttr 0x55fa890314f8 <col:12> Implicit printf 3 0
| `-NoThrowAttr 0x55fa89031530 <col:12> Implicit
|-FunctionDecl 0x55fa89031558 prev 0x55fa89031230 <col:1, line:394:62> line:392:12 vsnprintf 'int (char *restrict, unsigned long, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89030ec0 <col:23, col:40> col:40 __s 'char *restrict'
| |-ParmVarDecl 0x55fa89030f38 <col:45, col:52> col:52 __maxlen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89030fb8 <line:393:9, col:32> col:32 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89031030 <col:42, col:57> col:57 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa890316b0 <<invalid sloc>> Inherited Implicit 1473
| |-NoThrowAttr 0x55fa89031620 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55fa89031678 </usr/include/stdio.h:394:32, col:60> printf 3 0
|-FunctionDecl 0x55fa89031988 <line:400:1, line:402:62> line:400:12 vasprintf 'int (char **restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa890316f8 <col:23, col:41> col:41 __ptr 'char **restrict'
| |-ParmVarDecl 0x55fa89031778 <col:48, col:71> col:71 __f 'const char *restrict'
| |-ParmVarDecl 0x55fa890317f0 <line:401:9, col:24> col:24 __arg 'struct __va_list_tag *'
| |-NoThrowAttr 0x55fa89031a48 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55fa89031ab0 </usr/include/stdio.h:402:32, col:60> printf 2 0
|-FunctionDecl 0x55fa89031d10 <line:403:1, line:405:62> line:403:12 __asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89031b00 <col:24, col:42> col:42 __ptr 'char **restrict'
| |-ParmVarDecl 0x55fa89031b80 <line:404:10, col:33> col:33 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55fa89031dc8 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55fa89031e20 </usr/include/stdio.h:405:32, col:60> printf 2 3
|-FunctionDecl 0x55fa89031fe0 <line:406:1, line:408:62> line:406:12 asprintf 'int (char **restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89031e70 <col:22, col:40> col:40 __ptr 'char **restrict'
| |-ParmVarDecl 0x55fa89031ef0 <line:407:8, col:31> col:31 __fmt 'const char *restrict'
| |-NoThrowAttr 0x55fa89032098 </usr/include/sys/cdefs.h:80:37>
| `-FormatAttr 0x55fa890320f0 </usr/include/stdio.h:408:32, col:60> printf 2 3
|-FunctionDecl 0x55fa890323c8 <line:413:1, line:415:52> line:413:12 vdprintf 'int (int, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89032140 <col:22, col:26> col:26 __fd 'int'
| |-ParmVarDecl 0x55fa890321c0 <col:32, col:55> col:55 __fmt 'const char *restrict'
| |-ParmVarDecl 0x55fa89032238 <line:414:8, col:23> col:23 __arg 'struct __va_list_tag *'
| `-FormatAttr 0x55fa89032488 <line:415:22, col:50> printf 2 0
|-FunctionDecl 0x55fa89032710 <line:416:1, line:417:52> line:416:12 dprintf 'int (int, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89032508 <col:21, col:25> col:25 __fd 'int'
| |-ParmVarDecl 0x55fa89032588 <col:31, col:54> col:54 __fmt 'const char *restrict'
| `-FormatAttr 0x55fa890327c8 <line:417:22, col:50> printf 2 3
|-FunctionDecl 0x55fa89032988 <line:425:12> col:12 implicit fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89034ad0 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55fa89034b38 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa89032a30 <<invalid sloc>> Implicit 560
| `-FormatAttr 0x55fa89034bb0 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55fa89034be8 prev 0x55fa89032988 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:425:12 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89032848 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa890328c8 <line:426:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa89034d18 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55fa89034d48 <line:425:12> Inherited scanf 2 3
| `-NonNullAttr 0x55fa89034ca0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> 1
|-FunctionDecl 0x55fa89034e30 <line:431:12> col:12 implicit scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89034f38 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa89034ed8 <<invalid sloc>> Implicit 1162
| `-FormatAttr 0x55fa89034fa8 <col:12> Implicit scanf 1 2
|-FunctionDecl 0x55fa89034fe0 prev 0x55fa89034e30 <col:1, col:55> col:12 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89034d98 <col:19, col:42> col:42 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa890350c0 <<invalid sloc>> Inherited Implicit 1162
| `-FormatAttr 0x55fa890350f0 <col:12> Inherited scanf 1 2
|-FunctionDecl 0x55fa89035300 <line:433:12> col:12 implicit sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89035408 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89035470 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-BuiltinAttr 0x55fa890353a8 <<invalid sloc>> Implicit 1144
| `-FormatAttr 0x55fa890354e8 <col:12> Implicit scanf 2 3
|-FunctionDecl 0x55fa89035520 prev 0x55fa89035300 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:433:12 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89035140 <col:20, col:43> col:43 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa890351c0 <line:434:6, col:29> col:29 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa89035630 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55fa89035660 <line:433:12> Inherited scanf 2 3
| `-NoThrowAttr 0x55fa890355d8 </usr/include/sys/cdefs.h:79:35>
|-TypedefDecl 0x55fa890356f0 </usr/include/bits/floatn.h:83:1, col:24> col:24 __cfloat128 '_Complex __float128'
| |-ComplexType 0x55fa89035750 '_Complex __float128'
| | `-BuiltinType 0x55fa88f84570 '__float128'
| `-ModeAttr 0x55fa89035790 <col:52, col:68> __TC__
|-TypedefDecl 0x55fa89035808 <line:97:1, col:20> col:20 _Float128 '__float128'
| `-BuiltinType 0x55fa88f84570 '__float128'
|-TypedefDecl 0x55fa89035878 </usr/include/bits/floatn-common.h:214:1, col:15> col:15 _Float32 'float'
| `-BuiltinType 0x55fa88f84510 'float'
|-TypedefDecl 0x55fa890358e8 <line:251:1, col:16> col:16 _Float64 'double'
| `-BuiltinType 0x55fa88f84530 'double'
|-TypedefDecl 0x55fa89035958 <line:268:1, col:16> col:16 _Float32x 'double'
| `-BuiltinType 0x55fa88f84530 'double'
|-TypedefDecl 0x55fa890359c8 <line:285:1, col:21> col:21 _Float64x 'long double'
| `-BuiltinType 0x55fa88f84550 'long double'
|-FunctionDecl 0x55fa89005ef8 prev 0x55fa89034be8 </usr/include/stdio.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:466:24 fscanf 'int (FILE *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89035a38 <col:33, col:50> col:50 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa89005dd8 <line:467:5, col:28> col:28 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa89006078 <<invalid sloc>> Inherited Implicit 560
| |-FormatAttr 0x55fa890060a8 <line:425:12> Inherited scanf 2 3
| |-NonNullAttr 0x55fa890060e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:426:63> Inherited 1
| |-AsmLabelAttr 0x55fa89005fa0 <<scratch space>:48:1> "__isoc99_fscanf" IsLiteralLabel
| `-NonNullAttr 0x55fa89006030 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:468:46> 1
|-FunctionDecl 0x55fa89006240 prev 0x55fa89034fe0 <line:469:1, /usr/include/sys/cdefs.h:410:79> /usr/include/stdio.h:469:24 scanf 'int (const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa89006140 <col:32, col:55> col:55 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa89006370 <<invalid sloc>> Inherited Implicit 1162
| |-FormatAttr 0x55fa890063a0 <line:431:12> Inherited scanf 1 2
| `-AsmLabelAttr 0x55fa890062e8 <<scratch space>:50:1> "__isoc99_scanf" IsLiteralLabel
|-FunctionDecl 0x55fa89006540 prev 0x55fa89035520 </usr/include/stdio.h:471:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:471:28 sscanf 'int (const char *restrict, const char *restrict, ...)' extern
| |-ParmVarDecl 0x55fa890063f0 <col:37, col:60> col:60 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa89006470 <line:472:9, col:32> col:32 __format 'const char *restrict'
| |-BuiltinAttr 0x55fa890066a0 <<invalid sloc>> Inherited Implicit 1144
| |-FormatAttr 0x55fa890066d0 <line:433:12> Inherited scanf 2 3
| |-AsmLabelAttr 0x55fa890065e8 <<scratch space>:52:1> "__isoc99_sscanf" IsLiteralLabel
| `-NoThrowAttr 0x55fa89006678 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89006930 </usr/include/stdio.h:493:12> col:12 implicit vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89006a38 <<invalid sloc>> <invalid sloc> 'FILE *restrict'
| |-ParmVarDecl 0x55fa89006aa0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89006b08 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa890069d8 <<invalid sloc>> Implicit 1451
| `-FormatAttr 0x55fa89006b88 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55fa89006bc0 prev 0x55fa89006930 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:493:12 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89006720 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-ParmVarDecl 0x55fa890067a0 <col:43, col:66> col:66 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89006818 <line:494:7, col:22> col:22 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89006d28 <<invalid sloc>> Inherited Implicit 1451
| |-FormatAttr 0x55fa89006c80 <line:495:22, col:49> scanf 2 0
| `-NonNullAttr 0x55fa89006ce8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> 1
|-FunctionDecl 0x55fa890466d8 <line:501:12> col:12 implicit vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa890467e0 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89046848 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89046780 <<invalid sloc>> Implicit 1461
| `-FormatAttr 0x55fa890468c0 <col:12> Implicit scanf 1 0
|-FunctionDecl 0x55fa890468f8 prev 0x55fa890466d8 <col:1, line:502:51> line:501:12 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89046570 <col:20, col:43> col:43 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa890465e8 <col:53, col:68> col:68 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89046a18 <<invalid sloc>> Inherited Implicit 1461
| `-FormatAttr 0x55fa890469b0 <line:502:22, col:49> scanf 1 0
|-FunctionDecl 0x55fa89046d38 <line:505:12> col:12 implicit vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89046e40 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89046ea8 <<invalid sloc>> <invalid sloc> 'const char *restrict'
| |-ParmVarDecl 0x55fa89046f10 <<invalid sloc>> <invalid sloc> 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89046de0 <<invalid sloc>> Implicit 1459
| `-FormatAttr 0x55fa89046f90 <col:12> Implicit scanf 2 0
|-FunctionDecl 0x55fa89046fc8 prev 0x55fa89046d38 <col:1, line:507:59> line:505:12 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89046a60 <col:21, col:44> col:44 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa89046ae0 <line:506:7, col:30> col:30 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89046b58 <col:40, col:55> col:55 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89047118 <<invalid sloc>> Inherited Implicit 1459
| |-NoThrowAttr 0x55fa89047088 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55fa890470e0 </usr/include/stdio.h:507:30, col:57> scanf 2 0
|-FunctionDecl 0x55fa890473d0 prev 0x55fa89006bc0 <line:543:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:543:24 vfscanf 'int (FILE *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89047160 <line:544:11, col:28> col:28 __s 'FILE *restrict'
| |-ParmVarDecl 0x55fa890471e0 <line:545:4, col:27> col:27 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89047258 <col:37, col:52> col:52 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa890475c8 <<invalid sloc>> Inherited Implicit 1451
| |-NonNullAttr 0x55fa890475f8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:495:72> Inherited 1
| |-AsmLabelAttr 0x55fa89047478 <<scratch space>:56:1> "__isoc99_vfscanf" IsLiteralLabel
| |-FormatAttr 0x55fa89047510 </usr/include/stdio.h:547:22, col:49> scanf 2 0
| `-NonNullAttr 0x55fa89047580 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:547:72> 1
|-FunctionDecl 0x55fa890477e8 prev 0x55fa890468f8 <line:548:1, line:550:51> line:548:24 vscanf 'int (const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa89047650 <col:33, col:56> col:56 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa890476c8 <line:549:5, col:20> col:20 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89047958 <<invalid sloc>> Inherited Implicit 1461
| |-AsmLabelAttr 0x55fa89047890 <<scratch space>:58:1> "__isoc99_vscanf" IsLiteralLabel
| `-FormatAttr 0x55fa89047920 </usr/include/stdio.h:550:22, col:49> scanf 1 0
|-FunctionDecl 0x55fa89047bc0 prev 0x55fa89046fc8 <line:551:1, line:555:51> line:551:28 vsscanf 'int (const char *restrict, const char *restrict, struct __va_list_tag *)' extern
| |-ParmVarDecl 0x55fa890479a0 <line:552:8, col:31> col:31 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa89047a20 <line:553:8, col:31> col:31 __format 'const char *restrict'
| |-ParmVarDecl 0x55fa89047a98 <line:554:8, col:23> col:23 __arg 'struct __va_list_tag *'
| |-BuiltinAttr 0x55fa89047d60 <<invalid sloc>> Inherited Implicit 1459
| |-AsmLabelAttr 0x55fa89047c68 <<scratch space>:60:1> "__isoc99_vsscanf" IsLiteralLabel
| |-NoThrowAttr 0x55fa89047d00 </usr/include/sys/cdefs.h:79:35>
| `-FormatAttr 0x55fa89047d28 </usr/include/stdio.h:555:22, col:49> scanf 2 0
|-FunctionDecl 0x55fa89047e60 <line:578:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:578:12 fgetc 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89047da8 <col:19, col:25> col:25 __stream 'FILE *'
| `-NonNullAttr 0x55fa89047f10 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:578:48> 1
|-FunctionDecl 0x55fa89048058 <line:579:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:579:12 getc 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89047fa0 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55fa89048108 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:579:47> 1
|-FunctionDecl 0x55fa89048248 <line:585:1, col:25> col:12 getchar 'int (void)' extern
|-FunctionDecl 0x55fa890483c0 <line:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:592:12 getc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89048308 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55fa89048470 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:592:56> 1
|-FunctionDecl 0x55fa890485b8 <line:593:1, col:34> col:12 getchar_unlocked 'int (void)' extern
|-FunctionDecl 0x55fa89048730 <line:603:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:603:12 fgetc_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89048678 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55fa890487e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:603:57> 1
|-FunctionDecl 0x55fa89048a38 <line:611:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:611:12 fputc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa89048870 <col:19, col:23> col:23 __c 'int'
| |-ParmVarDecl 0x55fa890488f0 <col:28, col:34> col:34 __stream 'FILE *'
| `-NonNullAttr 0x55fa89048af0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:611:57> 2
|-FunctionDecl 0x55fa89048cc0 <line:612:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:612:12 putc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa89048b80 <col:18, col:22> col:22 __c 'int'
| |-ParmVarDecl 0x55fa89048c00 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55fa89048d78 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:612:56> 2
|-FunctionDecl 0x55fa89048ed8 <line:618:1, col:28> col:12 putchar 'int (int)' extern
| `-ParmVarDecl 0x55fa89048e00 <col:21, col:25> col:25 __c 'int'
|-FunctionDecl 0x55fa890490e0 <line:627:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:627:12 fputc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa89048fa0 <col:28, col:32> col:32 __c 'int'
| |-ParmVarDecl 0x55fa89049020 <col:37, col:43> col:43 __stream 'FILE *'
| `-NonNullAttr 0x55fa89049198 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:627:66> 2
|-FunctionDecl 0x55fa89049360 <line:635:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:635:12 putc_unlocked 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa89049220 <col:27, col:31> col:31 __c 'int'
| |-ParmVarDecl 0x55fa890492a0 <col:36, col:42> col:42 __stream 'FILE *'
| `-NonNullAttr 0x55fa89049418 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:635:65> 2
|-FunctionDecl 0x55fa890495a0 <line:636:1, col:37> col:12 putchar_unlocked 'int (int)' extern
| `-ParmVarDecl 0x55fa890494a0 <col:30, col:34> col:34 __c 'int'
|-FunctionDecl 0x55fa89049720 <line:643:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:643:12 getw 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa89049668 <col:18, col:24> col:24 __stream 'FILE *'
| `-NonNullAttr 0x55fa890497d0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:643:47> 1
|-FunctionDecl 0x55fa890499a0 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:646:12 putw 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa89049860 <col:18, col:22> col:22 __w 'int'
| |-ParmVarDecl 0x55fa890498e0 <col:27, col:33> col:33 __stream 'FILE *'
| `-NonNullAttr 0x55fa89049a58 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:646:56> 2
|-FunctionDecl 0x55fa89049d48 <line:654:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:654:14 fgets 'char *(char *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa89049ae0 <col:21, col:38> col:38 __s 'char *restrict'
| |-ParmVarDecl 0x55fa89049b60 <col:43, col:47> col:47 __n 'int'
| |-ParmVarDecl 0x55fa89049be0 <col:52, col:69> col:69 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa89049e08 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:655:72> 3
|-FunctionDecl 0x55fa8904a180 <line:689:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:689:18 __getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa89049e90 <col:30, col:48> col:48 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55fa89049f10 <line:690:30, col:49> col:49 __n 'size_t *restrict'
| |-ParmVarDecl 0x55fa89049f90 <col:54, col:58> col:58 __delimiter 'int'
| |-ParmVarDecl 0x55fa8904a010 <line:691:30, col:47> col:47 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa8904a248 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:691:76> 4
|-FunctionDecl 0x55fa8904a5b0 <line:692:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:692:18 getdelim '__ssize_t (char **restrict, size_t *restrict, int, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa8904a2d0 <col:28, col:46> col:46 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55fa8904a350 <line:693:28, col:47> col:47 __n 'size_t *restrict'
| |-ParmVarDecl 0x55fa8904a3d0 <col:52, col:56> col:56 __delimiter 'int'
| |-ParmVarDecl 0x55fa8904a450 <line:694:28, col:45> col:45 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa8904a678 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:694:74> 4
|-FunctionDecl 0x55fa8904a960 <line:697:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:697:18 getline '__ssize_t (char **restrict, size_t *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa8904a700 <col:27, col:45> col:45 __lineptr 'char **restrict'
| |-ParmVarDecl 0x55fa8904a780 <line:698:27, col:46> col:46 __n 'size_t *restrict'
| |-ParmVarDecl 0x55fa8904a800 <line:699:27, col:44> col:44 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa8904aa20 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:699:73> 3
|-FunctionDecl 0x55fa8904ac78 <line:707:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:707:12 fputs 'int (const char *restrict, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa8904aab0 <col:19, col:42> col:42 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa8904ab30 <col:47, col:64> col:64 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa8904ad30 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:708:16> 2
|-FunctionDecl 0x55fa8904ae58 <line:714:1, col:33> col:12 puts 'int (const char *)' extern
| `-ParmVarDecl 0x55fa8904adc0 <col:18, col:30> col:30 __s 'const char *'
|-FunctionDecl 0x55fa8904b060 <line:721:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:721:12 ungetc 'int (int, FILE *)' extern
| |-ParmVarDecl 0x55fa8904af20 <col:20, col:24> col:24 __c 'int'
| |-ParmVarDecl 0x55fa8904afa0 <col:29, col:35> col:35 __stream 'FILE *'
| `-NonNullAttr 0x55fa8904b118 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:721:58> 2
|-FunctionDecl 0x55fa8904b4d0 <line:728:15> col:15 implicit fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55fa890174f0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa89017558 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa890175c0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89017628 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55fa8904b578 <<invalid sloc>> Implicit 640
|-FunctionDecl 0x55fa890176b0 prev 0x55fa8904b4d0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:728:15 fread 'unsigned long (void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55fa8904b1a0 <col:22, col:39> col:39 __ptr 'void *restrict'
| |-ParmVarDecl 0x55fa8904b218 <col:46, col:53> col:53 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8904b290 <line:729:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8904b310 <col:20, col:37> col:37 __stream 'FILE *restrict'
| |-BuiltinAttr 0x55fa890177e8 <<invalid sloc>> Inherited Implicit 640
| `-NonNullAttr 0x55fa89017778 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:730:15> 4
|-FunctionDecl 0x55fa89017b90 <line:735:15> col:15 implicit fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55fa89017c98 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa89017d00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89017d68 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89017dd0 <<invalid sloc>> <invalid sloc> 'FILE *'
| `-BuiltinAttr 0x55fa89017c38 <<invalid sloc>> Implicit 651
|-FunctionDecl 0x55fa89017e58 prev 0x55fa89017b90 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:735:15 fwrite 'unsigned long (const void *, unsigned long, unsigned long, FILE *)' extern
| |-ParmVarDecl 0x55fa89017868 <col:23, col:46> col:46 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55fa890178e0 <col:53, col:60> col:60 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89017958 <line:736:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890179d8 <col:21, col:38> col:38 __s 'FILE *restrict'
| |-BuiltinAttr 0x55fa89017f98 <<invalid sloc>> Inherited Implicit 651
| `-NonNullAttr 0x55fa89017f20 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:736:55> 4
|-FunctionDecl 0x55fa89018218 <line:756:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:756:15 fread_unlocked 'size_t (void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa89017fe0 <col:31, col:48> col:48 __ptr 'void *restrict'
| |-ParmVarDecl 0x55fa89018058 <col:55, col:62> col:62 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890180d0 <line:757:10, col:17> col:17 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89018150 <col:22, col:39> col:39 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa890182e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:758:16> 4
|-FunctionDecl 0x55fa89018618 <line:759:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:759:15 fwrite_unlocked 'size_t (const void *restrict, size_t, size_t, FILE *restrict)' extern
| |-ParmVarDecl 0x55fa89018370 <col:32, col:55> col:55 __ptr 'const void *restrict'
| |-ParmVarDecl 0x55fa890183e8 <col:62, col:69> col:69 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890184d0 <line:760:11, col:18> col:18 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89018550 <col:23, col:40> col:40 __stream 'FILE *restrict'
| `-NonNullAttr 0x55fa890186e0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:761:16> 4
|-FunctionDecl 0x55fa890189d8 <line:769:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:769:12 fseek 'int (FILE *, long, int)' extern
| |-ParmVarDecl 0x55fa89018770 <col:19, col:25> col:25 __stream 'FILE *'
| |-ParmVarDecl 0x55fa890187f0 <col:35, col:44> col:44 __off 'long'
| |-ParmVarDecl 0x55fa89018870 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55fa89018a98 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:770:16> 1
|-FunctionDecl 0x55fa89018c58 <line:775:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:775:17 ftell 'long (FILE *)' extern
| |-ParmVarDecl 0x55fa89018b20 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55fa89018d08 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:775:59> 1
|-FunctionDecl 0x55fa89018e40 <line:780:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:780:13 rewind 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa89018d90 <col:21, col:27> col:27 __stream 'FILE *'
| `-NonNullAttr 0x55fa89018ef0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:780:50> 1
|-FunctionDecl 0x55fa89019188 <line:793:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:793:12 fseeko 'int (FILE *, __off_t, int)' extern
| |-ParmVarDecl 0x55fa89018f80 <col:20, col:26> col:26 __stream 'FILE *'
| |-ParmVarDecl 0x55fa89018ff8 <col:36, col:44> col:44 __off '__off_t':'long'
| |-ParmVarDecl 0x55fa89019078 <col:51, col:55> col:55 __whence 'int'
| `-NonNullAttr 0x55fa89019248 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:794:16> 1
|-FunctionDecl 0x55fa890193c0 <line:799:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:799:16 ftello '__off_t (FILE *)' extern
| |-ParmVarDecl 0x55fa890192d0 <col:24, col:30> col:30 __stream 'FILE *'
| `-NonNullAttr 0x55fa89019470 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:799:59> 1
|-FunctionDecl 0x55fa8901a7b8 <line:819:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:819:12 fgetpos 'int (FILE *restrict, fpos_t *restrict)' extern
| |-ParmVarDecl 0x55fa8901a538 <col:21, col:38> col:38 __stream 'FILE *restrict'
| |-ParmVarDecl 0x55fa8901a678 <col:48, col:67> col:67 __pos 'fpos_t *restrict'
| `-NonNullAttr 0x55fa8901a870 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:820:16> 1
|-FunctionDecl 0x55fa8901ab28 <line:825:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:825:12 fsetpos 'int (FILE *, const fpos_t *)' extern
| |-ParmVarDecl 0x55fa8901a900 <col:21, col:27> col:27 __stream 'FILE *'
| |-ParmVarDecl 0x55fa8901a9e8 <col:37, col:51> col:51 __pos 'const fpos_t *'
| `-NonNullAttr 0x55fa8901abe0 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:825:71> 1
|-FunctionDecl 0x55fa8901ad20 <line:850:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:850:13 clearerr 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa8901ac70 <col:23, col:29> col:29 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901add0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901ae28 <line:555:57, /usr/include/stdio.h:850:60> 1
|-FunctionDecl 0x55fa8901af38 <line:852:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:852:12 feof 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901ae80 <col:18, col:24> col:24 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901afe8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901b040 <line:555:57, /usr/include/stdio.h:852:61> 1
|-FunctionDecl 0x55fa8901b158 <line:854:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:854:12 ferror 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901b0a0 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901b208 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901b260 <line:555:57, /usr/include/stdio.h:854:63> 1
|-FunctionDecl 0x55fa8901b370 <line:858:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:858:13 clearerr_unlocked 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa8901b2c0 <col:32, col:38> col:38 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901b420 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901b478 <line:555:57, /usr/include/stdio.h:858:69> 1
|-FunctionDecl 0x55fa8901b5b8 <line:859:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:859:12 feof_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901b500 <col:27, col:33> col:33 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901b668 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901b6c0 <line:555:57, /usr/include/stdio.h:859:70> 1
|-FunctionDecl 0x55fa8901b7d8 <line:860:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:860:12 ferror_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901b720 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901b888 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901b8e0 <line:555:57, /usr/include/stdio.h:860:72> 1
|-FunctionDecl 0x55fa8901ba10 <line:868:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdio.h:868:13 perror 'void (const char *)' extern
| |-ParmVarDecl 0x55fa8901b940 <col:21, col:33> col:33 __s 'const char *'
| `-ColdAttr 0x55fa8901bac0 </usr/include/sys/cdefs.h:102:34>
|-FunctionDecl 0x55fa8901bbe8 </usr/include/stdio.h:873:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:873:12 fileno 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901bb30 <col:20, col:26> col:26 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901bc98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901bcf0 <line:555:57, /usr/include/stdio.h:873:63> 1
|-FunctionDecl 0x55fa8901be08 <line:878:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:878:12 fileno_unlocked 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901bd50 <col:29, col:35> col:35 __stream 'FILE *'
| |-NoThrowAttr 0x55fa8901beb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901bf10 <line:555:57, /usr/include/stdio.h:878:72> 1
|-FunctionDecl 0x55fa8901c028 <line:887:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:887:12 pclose 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa8901bf70 <col:20, col:26> col:26 __stream 'FILE *'
| `-NonNullAttr 0x55fa8901c0d8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdio.h:887:49> 1
|-FunctionDecl 0x55fa8901c2c8 <line:893:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdio.h:893:14 popen 'FILE *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa8901c160 <col:21, col:33> col:33 __command 'const char *'
| |-ParmVarDecl 0x55fa8901c1e0 <col:44, col:56> col:56 __modes 'const char *'
| `-RestrictAttr 0x55fa8901c380 </usr/include/sys/cdefs.h:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa890585c0 </usr/include/stdio.h:901:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdio.h:901:14 ctermid 'char *(char *)' extern
| |-ParmVarDecl 0x55fa8901c400 <col:23, col:29> col:29 __s 'char *'
| `-NoThrowAttr 0x55fa89058670 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89058790 </usr/include/stdio.h:931:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:931:13 flockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa890586e0 <col:24, col:30> col:30 __stream 'FILE *'
| |-NoThrowAttr 0x55fa89058840 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89058898 <line:555:57, /usr/include/stdio.h:931:61> 1
|-FunctionDecl 0x55fa890589a8 <line:935:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:935:12 ftrylockfile 'int (FILE *)' extern
| |-ParmVarDecl 0x55fa890588f0 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55fa89058a58 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89058ab0 <line:555:57, /usr/include/stdio.h:935:69> 1
|-FunctionDecl 0x55fa89058bc0 <line:938:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdio.h:938:13 funlockfile 'void (FILE *)' extern
| |-ParmVarDecl 0x55fa89058b10 <col:26, col:32> col:32 __stream 'FILE *'
| |-NoThrowAttr 0x55fa89058c70 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89058cc8 <line:555:57, /usr/include/stdio.h:938:63> 1
|-FunctionDecl 0x55fa89058db8 <line:949:1, col:27> col:12 __uflow 'int (FILE *)' extern
| `-ParmVarDecl 0x55fa89058d20 <col:21, col:26> col:27 'FILE *'
|-FunctionDecl 0x55fa89059028 <line:950:1, col:35> col:12 __overflow 'int (FILE *, int)' extern
| |-ParmVarDecl 0x55fa89058e80 <col:24, col:29> col:30 'FILE *'
| `-ParmVarDecl 0x55fa89058f00 <col:32> col:35 'int'
|-TypedefDecl 0x55fa890590f8 </usr/bin/../lib/clang/21/include/__stddef_wchar_t.h:24:1, col:24> col:24 referenced wchar_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-RecordDecl 0x55fa89059150 </usr/include/stdlib.h:59:9, line:63:3> line:59:9 struct definition
| |-FieldDecl 0x55fa89059208 <line:61:5, col:9> col:9 quot 'int'
| `-FieldDecl 0x55fa89059270 <line:62:5, col:9> col:9 rem 'int'
|-TypedefDecl 0x55fa89059318 <line:59:1, line:63:5> col:5 referenced div_t 'struct div_t':'div_t'
| `-ElaboratedType 0x55fa890592c0 'struct div_t' sugar
|   `-RecordType 0x55fa890591d0 'div_t'
|     `-Record 0x55fa89059150 <line:59:9, line:63:3>
|-RecordDecl 0x55fa89059388 <line:67:9, line:71:3> line:67:9 struct definition
| |-FieldDecl 0x55fa89059448 <line:69:5, col:14> col:14 quot 'long'
| `-FieldDecl 0x55fa890594b0 <line:70:5, col:14> col:14 rem 'long'
|-TypedefDecl 0x55fa89059558 <line:67:1, line:71:5> col:5 referenced ldiv_t 'struct ldiv_t':'ldiv_t'
| `-ElaboratedType 0x55fa89059500 'struct ldiv_t' sugar
|   `-RecordType 0x55fa89059410 'ldiv_t'
|     `-Record 0x55fa89059388 <line:67:9, line:71:3>
|-RecordDecl 0x55fa8905e8a8 <line:77:23, line:81:3> line:77:23 struct definition
| |-FieldDecl 0x55fa8905e968 <line:79:5, col:19> col:19 quot 'long long'
| `-FieldDecl 0x55fa8905e9d0 <line:80:5, col:19> col:19 rem 'long long'
|-TypedefDecl 0x55fa8905ea78 <line:77:15, line:81:5> col:5 referenced lldiv_t 'struct lldiv_t':'lldiv_t'
| `-ElaboratedType 0x55fa8905ea20 'struct lldiv_t' sugar
|   `-RecordType 0x55fa8905e930 'lldiv_t'
|     `-Record 0x55fa8905e8a8 <line:77:23, line:81:3>
|-FunctionDecl 0x55fa8905ebe0 <line:98:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:98:15 __ctype_get_mb_cur_max 'size_t (void)' extern
| `-NoThrowAttr 0x55fa8905ec88 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8905ede8 </usr/include/stdlib.h:102:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:102:15 atof 'double (const char *)' extern
| |-ParmVarDecl 0x55fa8905ecf8 <col:21, col:33> col:33 __nptr 'const char *'
| |-NoThrowAttr 0x55fa8905ee98 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa8905eef0 <line:479:45>
| `-NonNullAttr 0x55fa8905ef18 <line:555:57, /usr/include/stdlib.h:103:46> 1
|-FunctionDecl 0x55fa8905f028 <line:105:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:105:12 atoi 'int (const char *)' extern
| |-ParmVarDecl 0x55fa8905ef70 <col:18, col:30> col:30 __nptr 'const char *'
| |-NoThrowAttr 0x55fa8905f0d8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa8905f130 <line:479:45>
| `-NonNullAttr 0x55fa8905f158 <line:555:57, /usr/include/stdlib.h:106:46> 1
|-FunctionDecl 0x55fa8905f2a8 <line:108:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:108:17 atol 'long (const char *)' extern
| |-ParmVarDecl 0x55fa8905f1b0 <col:23, col:35> col:35 __nptr 'const char *'
| |-NoThrowAttr 0x55fa8905f358 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa8905f3b0 <line:479:45>
| `-NonNullAttr 0x55fa8905f3d8 <line:555:57, /usr/include/stdlib.h:109:46> 1
|-FunctionDecl 0x55fa8905f528 <line:113:15, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:113:36 atoll 'long long (const char *)' extern
| |-ParmVarDecl 0x55fa8905f430 <col:43, col:55> col:55 __nptr 'const char *'
| |-NoThrowAttr 0x55fa8905f5d8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa8905f630 <line:479:45>
| `-NonNullAttr 0x55fa8905f658 <line:555:57, /usr/include/stdlib.h:114:46> 1
|-FunctionDecl 0x55fa8905f8a0 <line:118:15> col:15 implicit strtod 'double (const char *, char **)' extern
| |-ParmVarDecl 0x55fa8905f9a8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8905fa10 <<invalid sloc>> <invalid sloc> 'char **'
| `-BuiltinAttr 0x55fa8905f948 <<invalid sloc>> Implicit 1254
|-FunctionDecl 0x55fa8905fa88 prev 0x55fa8905f8a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:118:15 strtod 'double (const char *, char **)' extern
| |-ParmVarDecl 0x55fa8905f6b0 <col:23, col:46> col:46 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa8905f730 <line:119:9, col:27> col:27 __endptr 'char **restrict'
| |-BuiltinAttr 0x55fa8905fbd8 <<invalid sloc>> Inherited Implicit 1254
| |-NoThrowAttr 0x55fa8905fb40 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8905fb98 <line:555:57, /usr/include/stdlib.h:120:27> 1
|-FunctionDecl 0x55fa8905fde8 <line:124:14> col:14 implicit strtof 'float (const char *, char **)' extern
| |-ParmVarDecl 0x55fa8905fef0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8905ff58 <<invalid sloc>> <invalid sloc> 'char **'
| `-BuiltinAttr 0x55fa8905fe90 <<invalid sloc>> Implicit 1255
|-FunctionDecl 0x55fa8905ffd0 prev 0x55fa8905fde8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:124:14 strtof 'float (const char *, char **)' extern
| |-ParmVarDecl 0x55fa8905fc20 <col:22, col:45> col:45 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa8905fca0 <line:125:8, col:26> col:26 __endptr 'char **restrict'
| |-BuiltinAttr 0x55fa89060128 <<invalid sloc>> Inherited Implicit 1255
| |-NoThrowAttr 0x55fa89060088 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890600e0 <line:555:57, /usr/include/stdlib.h:125:57> 1
|-FunctionDecl 0x55fa89060338 <line:127:20> col:20 implicit strtold 'long double (const char *, char **)' extern
| |-ParmVarDecl 0x55fa89060440 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890604a8 <<invalid sloc>> <invalid sloc> 'char **'
| `-BuiltinAttr 0x55fa890603e0 <<invalid sloc>> Implicit 1258
|-FunctionDecl 0x55fa89060520 prev 0x55fa89060338 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:127:20 strtold 'long double (const char *, char **)' extern
| |-ParmVarDecl 0x55fa89060170 <col:29, col:52> col:52 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa890601f0 <line:128:8, col:26> col:26 __endptr 'char **restrict'
| |-BuiltinAttr 0x55fa89060678 <<invalid sloc>> Inherited Implicit 1258
| |-NoThrowAttr 0x55fa890605d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89060630 <line:555:57, /usr/include/stdlib.h:129:27> 1
|-FunctionDecl 0x55fa89060938 <line:177:17> col:17 implicit strtol 'long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89060a40 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa89060aa8 <<invalid sloc>> <invalid sloc> 'char **'
| |-ParmVarDecl 0x55fa89060b10 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa890609e0 <<invalid sloc>> Implicit 1256
|-FunctionDecl 0x55fa89060b90 prev 0x55fa89060938 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:177:17 strtol 'long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa890606c0 <col:25, col:48> col:48 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa89060740 <line:178:4, col:22> col:22 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa890607c0 <col:32, col:36> col:36 __base 'int'
| |-BuiltinAttr 0x55fa89060ce8 <<invalid sloc>> Inherited Implicit 1256
| |-NoThrowAttr 0x55fa89060c50 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89060ca8 <line:555:57, /usr/include/stdlib.h:179:27> 1
|-FunctionDecl 0x55fa89060f98 <line:181:26> col:26 implicit strtoul 'unsigned long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa890610a0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa89061108 <<invalid sloc>> <invalid sloc> 'char **'
| |-ParmVarDecl 0x55fa89061170 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa89061040 <<invalid sloc>> Implicit 1259
|-FunctionDecl 0x55fa890611f0 prev 0x55fa89060f98 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:181:26 strtoul 'unsigned long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89060d30 <col:35, col:58> col:58 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa89060db0 <line:182:7, col:25> col:25 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa89060e30 <col:35, col:39> col:39 __base 'int'
| |-BuiltinAttr 0x55fa89061348 <<invalid sloc>> Inherited Implicit 1259
| |-NoThrowAttr 0x55fa890612b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89061308 <line:555:57, /usr/include/stdlib.h:183:27> 1
|-FunctionDecl 0x55fa890615f8 <line:188:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:188:22 strtoq 'long long (const char *restrict, char **restrict, int)' extern
| |-ParmVarDecl 0x55fa89061390 <col:30, col:53> col:53 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa89061410 <line:189:9, col:27> col:27 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa89061490 <col:37, col:41> col:41 __base 'int'
| |-NoThrowAttr 0x55fa890616b8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89061710 <line:555:57, /usr/include/stdlib.h:190:27> 1
|-FunctionDecl 0x55fa89061a28 <line:193:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:193:31 strtouq 'unsigned long long (const char *restrict, char **restrict, int)' extern
| |-ParmVarDecl 0x55fa89061770 <col:40, col:63> col:63 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa890617f0 <line:194:12, col:30> col:30 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa890618c0 <col:40, col:44> col:44 __base 'int'
| |-NoThrowAttr 0x55fa89061ae8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89061b40 <line:555:57, /usr/include/stdlib.h:195:27> 1
|-FunctionDecl 0x55fa89061d68 <line:201:22> col:22 implicit strtoll 'long long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89061e70 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa89061ed8 <<invalid sloc>> <invalid sloc> 'char **'
| |-ParmVarDecl 0x55fa89061f40 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa89061e10 <<invalid sloc>> Implicit 1257
|-FunctionDecl 0x55fa89061fc0 prev 0x55fa89061d68 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:201:22 strtoll 'long long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89061ba0 <col:31, col:54> col:54 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa89061c20 <line:202:10, col:28> col:28 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa89061ca0 <col:38, col:42> col:42 __base 'int'
| |-BuiltinAttr 0x55fa89062118 <<invalid sloc>> Inherited Implicit 1257
| |-NoThrowAttr 0x55fa89062080 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890620d8 <line:555:57, /usr/include/stdlib.h:203:27> 1
|-FunctionDecl 0x55fa89062328 <line:206:31> col:31 implicit strtoull 'unsigned long long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89062430 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa89062498 <<invalid sloc>> <invalid sloc> 'char **'
| |-ParmVarDecl 0x55fa89062500 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa890623d0 <<invalid sloc>> Implicit 1260
|-FunctionDecl 0x55fa89062580 prev 0x55fa89062328 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:206:31 strtoull 'unsigned long long (const char *, char **, int)' extern
| |-ParmVarDecl 0x55fa89062160 <col:41, col:64> col:64 __nptr 'const char *restrict'
| |-ParmVarDecl 0x55fa890621e0 <line:207:6, col:24> col:24 __endptr 'char **restrict'
| |-ParmVarDecl 0x55fa89062260 <col:34, col:38> col:38 __base 'int'
| |-BuiltinAttr 0x55fa890626d8 <<invalid sloc>> Inherited Implicit 1260
| |-NoThrowAttr 0x55fa89062640 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89062698 <line:555:57, /usr/include/stdlib.h:208:27> 1
|-FunctionDecl 0x55fa890627f8 <line:505:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:505:14 l64a 'char *(long)' extern
| |-ParmVarDecl 0x55fa89062720 <col:20, col:29> col:29 __n 'long'
| `-NoThrowAttr 0x55fa890628d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa890629f8 </usr/include/stdlib.h:508:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:508:17 a64l 'long (const char *)' extern
| |-ParmVarDecl 0x55fa89062940 <col:23, col:35> col:35 __s 'const char *'
| |-NoThrowAttr 0x55fa89062aa8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa89062b00 <line:479:45>
| `-NonNullAttr 0x55fa89062b28 <line:555:57, /usr/include/stdlib.h:509:46> 1
|-TypedefDecl 0x55fa89062be0 </usr/include/sys/types.h:33:1, col:18> col:18 u_char '__u_char':'unsigned char'
| `-ElaboratedType 0x55fa89062ba0 '__u_char' sugar
|   `-TypedefType 0x55fa89062b70 '__u_char' sugar
|     |-Typedef 0x55fa89004db0 '__u_char'
|     `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa89062cb0 <line:34:1, col:19> col:19 u_short '__u_short':'unsigned short'
| `-ElaboratedType 0x55fa89062c70 '__u_short' sugar
|   `-TypedefType 0x55fa89062c40 '__u_short' sugar
|     |-Typedef 0x55fa89004e20 '__u_short'
|     `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa89062d80 <line:35:1, col:17> col:17 u_int '__u_int':'unsigned int'
| `-ElaboratedType 0x55fa89062d40 '__u_int' sugar
|   `-TypedefType 0x55fa89062d10 '__u_int' sugar
|     |-Typedef 0x55fa89004e90 '__u_int'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89062e50 <line:36:1, col:18> col:18 u_long '__u_long':'unsigned long'
| `-ElaboratedType 0x55fa89062e10 '__u_long' sugar
|   `-TypedefType 0x55fa89062de0 '__u_long' sugar
|     |-Typedef 0x55fa89004f00 '__u_long'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89062f20 <line:37:1, col:18> col:18 quad_t '__quad_t':'long'
| `-ElaboratedType 0x55fa89062ee0 '__quad_t' sugar
|   `-TypedefType 0x55fa89062eb0 '__quad_t' sugar
|     |-Typedef 0x55fa89005970 '__quad_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89062ff0 <line:38:1, col:20> col:20 u_quad_t '__u_quad_t':'unsigned long'
| `-ElaboratedType 0x55fa89062fb0 '__u_quad_t' sugar
|   `-TypedefType 0x55fa89062f80 '__u_quad_t' sugar
|     |-Typedef 0x55fa890059e0 '__u_quad_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa890630c0 <line:39:1, col:18> col:18 fsid_t '__fsid_t'
| `-ElaboratedType 0x55fa89063080 '__fsid_t' sugar
|   `-TypedefType 0x55fa89063050 '__fsid_t' sugar
|     |-Typedef 0x55fa8900b0f8 '__fsid_t'
|     `-ElaboratedType 0x55fa8900b0a0 'struct __fsid_t' sugar
|       `-RecordType 0x55fa8900af90 '__fsid_t'
|         `-Record 0x55fa8900af08 </usr/include/bits/typesizes.h:73:24, col:47>
|-TypedefDecl 0x55fa89063190 </usr/include/sys/types.h:42:1, col:18> col:18 loff_t '__loff_t':'long'
| `-ElaboratedType 0x55fa89063150 '__loff_t' sugar
|   `-TypedefType 0x55fa89063120 '__loff_t' sugar
|     |-Typedef 0x55fa8900bbf0 '__loff_t'
|     `-ElaboratedType 0x55fa8900bbb0 '__off64_t' sugar
|       `-TypedefType 0x55fa8900bb80 '__off64_t' sugar
|         |-Typedef 0x55fa8900ae40 '__off64_t'
|         `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89063260 <line:47:1, col:17> col:17 ino_t '__ino_t':'unsigned long'
| `-ElaboratedType 0x55fa89063220 '__ino_t' sugar
|   `-TypedefType 0x55fa890631f0 '__ino_t' sugar
|     |-Typedef 0x55fa89005c80 '__ino_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89063330 <line:59:1, col:17> col:17 dev_t '__dev_t':'unsigned long'
| `-ElaboratedType 0x55fa890632f0 '__dev_t' sugar
|   `-TypedefType 0x55fa890632c0 '__dev_t' sugar
|     |-Typedef 0x55fa89005b30 '__dev_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89063400 <line:64:1, col:17> col:17 gid_t '__gid_t':'unsigned int'
| `-ElaboratedType 0x55fa890633c0 '__gid_t' sugar
|   `-TypedefType 0x55fa89063390 '__gid_t' sugar
|     |-Typedef 0x55fa89005c10 '__gid_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa890634d0 <line:69:1, col:18> col:18 mode_t '__mode_t':'unsigned int'
| `-ElaboratedType 0x55fa89063490 '__mode_t' sugar
|   `-TypedefType 0x55fa89063460 '__mode_t' sugar
|     |-Typedef 0x55fa8900acf0 '__mode_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa890635a0 <line:74:1, col:19> col:19 nlink_t '__nlink_t':'unsigned long'
| `-ElaboratedType 0x55fa89063560 '__nlink_t' sugar
|   `-TypedefType 0x55fa89063530 '__nlink_t' sugar
|     |-Typedef 0x55fa8900ad60 '__nlink_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89063670 <line:79:1, col:17> col:17 uid_t '__uid_t':'unsigned int'
| `-ElaboratedType 0x55fa89063630 '__uid_t' sugar
|   `-TypedefType 0x55fa89063600 '__uid_t' sugar
|     |-Typedef 0x55fa89005ba0 '__uid_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89063740 <line:97:1, col:17> col:17 pid_t '__pid_t':'int'
| `-ElaboratedType 0x55fa89063700 '__pid_t' sugar
|   `-TypedefType 0x55fa890636d0 '__pid_t' sugar
|     |-Typedef 0x55fa8900aeb0 '__pid_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa89063810 <line:103:1, col:16> col:16 id_t '__id_t':'unsigned int'
| `-ElaboratedType 0x55fa890637d0 '__id_t' sugar
|   `-TypedefType 0x55fa890637a0 '__id_t' sugar
|     |-Typedef 0x55fa8900b2d0 '__id_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89064fa0 <line:114:1, col:19> col:19 daddr_t '__daddr_t':'int'
| `-ElaboratedType 0x55fa890638a0 '__daddr_t' sugar
|   `-TypedefType 0x55fa89063870 '__daddr_t' sugar
|     |-Typedef 0x55fa8900b500 '__daddr_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa89065070 <line:115:1, col:19> col:19 caddr_t '__caddr_t':'char *'
| `-ElaboratedType 0x55fa89065030 '__caddr_t' sugar
|   `-TypedefType 0x55fa89065000 '__caddr_t' sugar
|     |-Typedef 0x55fa8900bc60 '__caddr_t'
|     `-PointerType 0x55fa88f84b40 'char *'
|       `-BuiltinType 0x55fa88f843b0 'char'
|-TypedefDecl 0x55fa89065140 <line:121:1, col:17> col:17 key_t '__key_t':'int'
| `-ElaboratedType 0x55fa89065100 '__key_t' sugar
|   `-TypedefType 0x55fa890650d0 '__key_t' sugar
|     |-Typedef 0x55fa8900b570 '__key_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa89065210 </usr/include/bits/types/clock_t.h:7:1, col:19> col:19 clock_t '__clock_t':'long'
| `-ElaboratedType 0x55fa890651d0 '__clock_t' sugar
|   `-TypedefType 0x55fa890651a0 '__clock_t' sugar
|     |-Typedef 0x55fa8900b180 '__clock_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa890652e0 </usr/include/bits/types/clockid_t.h:7:1, col:21> col:21 clockid_t '__clockid_t':'int'
| `-ElaboratedType 0x55fa890652a0 '__clockid_t' sugar
|   `-TypedefType 0x55fa89065270 '__clockid_t' sugar
|     |-Typedef 0x55fa8900b5e0 '__clockid_t'
|     `-BuiltinType 0x55fa88f84410 'int'
|-TypedefDecl 0x55fa890653b0 </usr/include/bits/types/time_t.h:10:1, col:18> col:18 time_t '__time_t':'long'
| `-ElaboratedType 0x55fa89065370 '__time_t' sugar
|   `-TypedefType 0x55fa89065340 '__time_t' sugar
|     |-Typedef 0x55fa8900b340 '__time_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89065480 </usr/include/bits/types/timer_t.h:7:1, col:19> col:19 timer_t '__timer_t':'void *'
| `-ElaboratedType 0x55fa89065440 '__timer_t' sugar
|   `-TypedefType 0x55fa89065410 '__timer_t' sugar
|     |-Typedef 0x55fa8900b650 '__timer_t'
|     `-PointerType 0x55fa88f84ab0 'void *'
|       `-BuiltinType 0x55fa88f84370 'void'
|-TypedefDecl 0x55fa890654f0 </usr/include/sys/types.h:148:1, col:27> col:27 ulong 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89065560 <line:149:1, col:28> col:28 ushort 'unsigned short'
| `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa890655d0 <line:150:1, col:22> col:22 uint 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89065638 <line:158:1, col:19> col:19 u_int8_t '__uint8_t':'unsigned char'
| `-ElaboratedType 0x55fa890053e0 '__uint8_t' sugar
|   `-TypedefType 0x55fa890053b0 '__uint8_t' sugar
|     |-Typedef 0x55fa89004fe0 '__uint8_t'
|     `-BuiltinType 0x55fa88f84470 'unsigned char'
|-TypedefDecl 0x55fa890656a0 <line:159:1, col:20> col:20 u_int16_t '__uint16_t':'unsigned short'
| `-ElaboratedType 0x55fa89005580 '__uint16_t' sugar
|   `-TypedefType 0x55fa89005550 '__uint16_t' sugar
|     |-Typedef 0x55fa890050c0 '__uint16_t'
|     `-BuiltinType 0x55fa88f84490 'unsigned short'
|-TypedefDecl 0x55fa89065708 <line:160:1, col:20> col:20 u_int32_t '__uint32_t':'unsigned int'
| `-ElaboratedType 0x55fa89005720 '__uint32_t' sugar
|   `-TypedefType 0x55fa890056f0 '__uint32_t' sugar
|     |-Typedef 0x55fa890051a0 '__uint32_t'
|     `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa89065770 <line:161:1, col:20> col:20 u_int64_t '__uint64_t':'unsigned long'
| `-ElaboratedType 0x55fa890058c0 '__uint64_t' sugar
|   `-TypedefType 0x55fa89005890 '__uint64_t' sugar
|     |-Typedef 0x55fa89005280 '__uint64_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa890657f0 <line:164:1, col:13> col:13 register_t 'long'
| |-BuiltinType 0x55fa88f84430 'long'
| `-ModeAttr 0x55fa89065858 <col:40, col:58> __word__
|-FunctionDecl 0x55fa890659d0 </usr/include/bits/byteswap.h:33:1, line:41:1> line:34:1 __bswap_16 '__uint16_t (__uint16_t)' static inline
| |-ParmVarDecl 0x55fa890658c8 <col:13, col:24> col:24 used __bsx '__uint16_t':'unsigned short'
| `-CompoundStmt 0x55fa89065da8 <line:35:1, line:41:1>
|   `-ReturnStmt 0x55fa89065d98 <line:39:3, line:31:60>
|     `-ParenExpr 0x55fa89065d78 <col:3, col:60> '__uint16_t':'unsigned short'
|       `-CStyleCastExpr 0x55fa89065d50 <col:4, col:59> '__uint16_t':'unsigned short' <IntegralCast>
|         `-ParenExpr 0x55fa89065d30 <col:17, col:59> 'int'
|           `-BinaryOperator 0x55fa89065ce0 <col:18, col:58> 'int' '|'
|             |-ParenExpr 0x55fa89065b90 <col:18, col:36> 'int'
|             | `-BinaryOperator 0x55fa89065b70 <col:19, col:32> 'int' '&'
|             |   |-ParenExpr 0x55fa89065b30 <col:19, col:28> 'int'
|             |   | `-BinaryOperator 0x55fa89065b10 <col:20, col:27> 'int' '>>'
|             |   |   |-ImplicitCastExpr 0x55fa89065af8 <col:20, col:22> 'int' <IntegralCast>
|             |   |   | `-ImplicitCastExpr 0x55fa89065ae0 <col:20, col:22> '__uint16_t':'unsigned short' <LValueToRValue>
|             |   |   |   `-ParenExpr 0x55fa89065aa0 <col:20, col:22> '__uint16_t':'unsigned short' lvalue
|             |   |   |     `-DeclRefExpr 0x55fa89065a80 <line:39:31> '__uint16_t':'unsigned short' lvalue ParmVar 0x55fa890658c8 '__bsx' '__uint16_t':'unsigned short'
|             |   |   `-IntegerLiteral 0x55fa89065ac0 <line:31:27> 'int' 8
|             |   `-IntegerLiteral 0x55fa89065b50 <col:32> 'int' 255
|             `-ParenExpr 0x55fa89065cc0 <col:40, col:58> 'int'
|               `-BinaryOperator 0x55fa89065ca0 <col:41, col:57> 'int' '<<'
|                 |-ParenExpr 0x55fa89065c60 <col:41, col:52> 'int'
|                 | `-BinaryOperator 0x55fa89065c40 <col:42, col:48> 'int' '&'
|                 |   |-ImplicitCastExpr 0x55fa89065c28 <col:42, col:44> 'int' <IntegralCast>
|                 |   | `-ImplicitCastExpr 0x55fa89065c10 <col:42, col:44> '__uint16_t':'unsigned short' <LValueToRValue>
|                 |   |   `-ParenExpr 0x55fa89065bd0 <col:42, col:44> '__uint16_t':'unsigned short' lvalue
|                 |   |     `-DeclRefExpr 0x55fa89065bb0 <line:39:31> '__uint16_t':'unsigned short' lvalue ParmVar 0x55fa890658c8 '__bsx' '__uint16_t':'unsigned short'
|                 |   `-IntegerLiteral 0x55fa89065bf0 <line:31:48> 'int' 255
|                 `-IntegerLiteral 0x55fa89065c80 <col:57> 'int' 8
|-FunctionDecl 0x55fa89065ee0 <line:48:1, line:56:1> line:49:1 __bswap_32 '__uint32_t (__uint32_t)' static inline
| |-ParmVarDecl 0x55fa89065dd0 <col:13, col:24> col:24 used __bsx '__uint32_t':'unsigned int'
| `-CompoundStmt 0x55fa8906d0e0 <line:50:1, line:56:1>
|   `-ReturnStmt 0x55fa8906d0d0 <line:54:3, line:46:62>
|     `-ParenExpr 0x55fa8906d0b0 <line:45:3, line:46:62> 'unsigned int'
|       `-BinaryOperator 0x55fa8906d090 <line:45:4, line:46:61> 'unsigned int' '|'
|         |-BinaryOperator 0x55fa8906cf58 <line:45:4, line:46:31> 'unsigned int' '|'
|         | |-BinaryOperator 0x55fa8906ce20 <line:45:4, col:59> 'unsigned int' '|'
|         | | |-ParenExpr 0x55fa8906cce8 <col:4, col:30> 'unsigned int'
|         | | | `-BinaryOperator 0x55fa8906ccc8 <col:5, col:28> 'unsigned int' '>>'
|         | | |   |-ParenExpr 0x55fa8906cc88 <col:5, col:23> 'unsigned int'
|         | | |   | `-BinaryOperator 0x55fa8906cc68 <col:6, col:12> 'unsigned int' '&'
|         | | |   |   |-ImplicitCastExpr 0x55fa8906cc50 <col:6, col:8> '__uint32_t':'unsigned int' <LValueToRValue>
|         | | |   |   | `-ParenExpr 0x55fa8906cc10 <col:6, col:8> '__uint32_t':'unsigned int' lvalue
|         | | |   |   |   `-DeclRefExpr 0x55fa8906cbf0 <line:54:31> '__uint32_t':'unsigned int' lvalue ParmVar 0x55fa89065dd0 '__bsx' '__uint32_t':'unsigned int'
|         | | |   |   `-IntegerLiteral 0x55fa8906cc30 <line:45:12> 'unsigned int' 4278190080
|         | | |   `-IntegerLiteral 0x55fa8906cca8 <col:28> 'int' 24
|         | | `-ParenExpr 0x55fa8906ce00 <col:34, col:59> 'unsigned int'
|         | |   `-BinaryOperator 0x55fa8906cde0 <col:35, col:58> 'unsigned int' '>>'
|         | |     |-ParenExpr 0x55fa8906cda0 <col:35, col:53> 'unsigned int'
|         | |     | `-BinaryOperator 0x55fa8906cd80 <col:36, col:42> 'unsigned int' '&'
|         | |     |   |-ImplicitCastExpr 0x55fa8906cd68 <col:36, col:38> '__uint32_t':'unsigned int' <LValueToRValue>
|         | |     |   | `-ParenExpr 0x55fa8906cd28 <col:36, col:38> '__uint32_t':'unsigned int' lvalue
|         | |     |   |   `-DeclRefExpr 0x55fa8906cd08 <line:54:31> '__uint32_t':'unsigned int' lvalue ParmVar 0x55fa89065dd0 '__bsx' '__uint32_t':'unsigned int'
|         | |     |   `-IntegerLiteral 0x55fa8906cd48 <line:45:42> 'unsigned int' 16711680
|         | |     `-IntegerLiteral 0x55fa8906cdc0 <col:58> 'int' 8
|         | `-ParenExpr 0x55fa8906cf38 <line:46:6, col:31> 'unsigned int'
|         |   `-BinaryOperator 0x55fa8906cf18 <col:7, col:30> 'unsigned int' '<<'
|         |     |-ParenExpr 0x55fa8906ced8 <col:7, col:25> 'unsigned int'
|         |     | `-BinaryOperator 0x55fa8906ceb8 <col:8, col:14> 'unsigned int' '&'
|         |     |   |-ImplicitCastExpr 0x55fa8906cea0 <col:8, col:10> '__uint32_t':'unsigned int' <LValueToRValue>
|         |     |   | `-ParenExpr 0x55fa8906ce60 <col:8, col:10> '__uint32_t':'unsigned int' lvalue
|         |     |   |   `-DeclRefExpr 0x55fa8906ce40 <line:54:31> '__uint32_t':'unsigned int' lvalue ParmVar 0x55fa89065dd0 '__bsx' '__uint32_t':'unsigned int'
|         |     |   `-IntegerLiteral 0x55fa8906ce80 <line:46:14> 'unsigned int' 65280
|         |     `-IntegerLiteral 0x55fa8906cef8 <col:30> 'int' 8
|         `-ParenExpr 0x55fa8906d070 <col:35, col:61> 'unsigned int'
|           `-BinaryOperator 0x55fa8906d050 <col:36, col:59> 'unsigned int' '<<'
|             |-ParenExpr 0x55fa8906d010 <col:36, col:54> 'unsigned int'
|             | `-BinaryOperator 0x55fa8906cff0 <col:37, col:43> 'unsigned int' '&'
|             |   |-ImplicitCastExpr 0x55fa8906cfd8 <col:37, col:39> '__uint32_t':'unsigned int' <LValueToRValue>
|             |   | `-ParenExpr 0x55fa8906cf98 <col:37, col:39> '__uint32_t':'unsigned int' lvalue
|             |   |   `-DeclRefExpr 0x55fa8906cf78 <line:54:31> '__uint32_t':'unsigned int' lvalue ParmVar 0x55fa89065dd0 '__bsx' '__uint32_t':'unsigned int'
|             |   `-IntegerLiteral 0x55fa8906cfb8 <line:46:43> 'unsigned int' 255
|             `-IntegerLiteral 0x55fa8906d030 <col:59> 'int' 24
|-FunctionDecl 0x55fa8906d210 <line:69:15, line:77:1> line:70:1 __bswap_64 '__uint64_t (__uint64_t)' static inline
| |-ParmVarDecl 0x55fa8906d108 <col:13, col:24> col:24 used __bsx '__uint64_t':'unsigned long'
| `-CompoundStmt 0x55fa8906ed88 <line:71:1, line:77:1>
|   `-ReturnStmt 0x55fa8906ed78 <line:75:3, line:67:43>
|     `-ImplicitCastExpr 0x55fa8906ed60 <line:60:3, line:67:43> '__uint64_t':'unsigned long' <IntegralCast>
|       `-ParenExpr 0x55fa8906ed40 <line:60:3, line:67:43> 'unsigned long long'
|         `-BinaryOperator 0x55fa8906ed20 <line:60:4, line:67:42> 'unsigned long long' '|'
|           |-BinaryOperator 0x55fa8906dbb0 <line:60:4, line:66:42> 'unsigned long long' '|'
|           | |-BinaryOperator 0x55fa8906da60 <line:60:4, line:65:42> 'unsigned long long' '|'
|           | | |-BinaryOperator 0x55fa8906d910 <line:60:4, line:64:41> 'unsigned long long' '|'
|           | | | |-BinaryOperator 0x55fa8906d7c0 <line:60:4, line:63:41> 'unsigned long long' '|'
|           | | | | |-BinaryOperator 0x55fa8906d670 <line:60:4, line:62:42> 'unsigned long long' '|'
|           | | | | | |-BinaryOperator 0x55fa8906d520 <line:60:4, line:61:42> 'unsigned long long' '|'
|           | | | | | | |-ParenExpr 0x55fa8906d3d0 <line:60:4, col:40> 'unsigned long long'
|           | | | | | | | `-BinaryOperator 0x55fa8906d3b0 <col:5, col:38> 'unsigned long long' '>>'
|           | | | | | | |   |-ParenExpr 0x55fa8906d370 <col:5, col:33> 'unsigned long long'
|           | | | | | | |   | `-BinaryOperator 0x55fa8906d350 <col:6, col:12> 'unsigned long long' '&'
|           | | | | | | |   |   |-ImplicitCastExpr 0x55fa8906d338 <col:6, col:8> 'unsigned long long' <IntegralCast>
|           | | | | | | |   |   | `-ImplicitCastExpr 0x55fa8906d320 <col:6, col:8> '__uint64_t':'unsigned long' <LValueToRValue>
|           | | | | | | |   |   |   `-ParenExpr 0x55fa8906d2e0 <col:6, col:8> '__uint64_t':'unsigned long' lvalue
|           | | | | | | |   |   |     `-DeclRefExpr 0x55fa8906d2c0 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | | | | | | |   |   `-IntegerLiteral 0x55fa8906d300 <line:60:12> 'unsigned long long' 18374686479671623680
|           | | | | | | |   `-IntegerLiteral 0x55fa8906d390 <col:38> 'int' 56
|           | | | | | | `-ParenExpr 0x55fa8906d500 <line:61:6, col:42> 'unsigned long long'
|           | | | | | |   `-BinaryOperator 0x55fa8906d4e0 <col:7, col:40> 'unsigned long long' '>>'
|           | | | | | |     |-ParenExpr 0x55fa8906d4a0 <col:7, col:35> 'unsigned long long'
|           | | | | | |     | `-BinaryOperator 0x55fa8906d480 <col:8, col:14> 'unsigned long long' '&'
|           | | | | | |     |   |-ImplicitCastExpr 0x55fa8906d468 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           | | | | | |     |   | `-ImplicitCastExpr 0x55fa8906d450 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           | | | | | |     |   |   `-ParenExpr 0x55fa8906d410 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           | | | | | |     |   |     `-DeclRefExpr 0x55fa8906d3f0 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | | | | | |     |   `-IntegerLiteral 0x55fa8906d430 <line:61:14> 'unsigned long long' 71776119061217280
|           | | | | | |     `-IntegerLiteral 0x55fa8906d4c0 <col:40> 'int' 40
|           | | | | | `-ParenExpr 0x55fa8906d650 <line:62:6, col:42> 'unsigned long long'
|           | | | | |   `-BinaryOperator 0x55fa8906d630 <col:7, col:40> 'unsigned long long' '>>'
|           | | | | |     |-ParenExpr 0x55fa8906d5f0 <col:7, col:35> 'unsigned long long'
|           | | | | |     | `-BinaryOperator 0x55fa8906d5d0 <col:8, col:14> 'unsigned long long' '&'
|           | | | | |     |   |-ImplicitCastExpr 0x55fa8906d5b8 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           | | | | |     |   | `-ImplicitCastExpr 0x55fa8906d5a0 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           | | | | |     |   |   `-ParenExpr 0x55fa8906d560 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           | | | | |     |   |     `-DeclRefExpr 0x55fa8906d540 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | | | | |     |   `-IntegerLiteral 0x55fa8906d580 <line:62:14> 'unsigned long long' 280375465082880
|           | | | | |     `-IntegerLiteral 0x55fa8906d610 <col:40> 'int' 24
|           | | | | `-ParenExpr 0x55fa8906d7a0 <line:63:6, col:41> 'unsigned long long'
|           | | | |   `-BinaryOperator 0x55fa8906d780 <col:7, col:40> 'unsigned long long' '>>'
|           | | | |     |-ParenExpr 0x55fa8906d740 <col:7, col:35> 'unsigned long long'
|           | | | |     | `-BinaryOperator 0x55fa8906d720 <col:8, col:14> 'unsigned long long' '&'
|           | | | |     |   |-ImplicitCastExpr 0x55fa8906d708 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           | | | |     |   | `-ImplicitCastExpr 0x55fa8906d6f0 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           | | | |     |   |   `-ParenExpr 0x55fa8906d6b0 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           | | | |     |   |     `-DeclRefExpr 0x55fa8906d690 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | | | |     |   `-IntegerLiteral 0x55fa8906d6d0 <line:63:14> 'unsigned long long' 1095216660480
|           | | | |     `-IntegerLiteral 0x55fa8906d760 <col:40> 'int' 8
|           | | | `-ParenExpr 0x55fa8906d8f0 <line:64:6, col:41> 'unsigned long long'
|           | | |   `-BinaryOperator 0x55fa8906d8d0 <col:7, col:40> 'unsigned long long' '<<'
|           | | |     |-ParenExpr 0x55fa8906d890 <col:7, col:35> 'unsigned long long'
|           | | |     | `-BinaryOperator 0x55fa8906d870 <col:8, col:14> 'unsigned long long' '&'
|           | | |     |   |-ImplicitCastExpr 0x55fa8906d858 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           | | |     |   | `-ImplicitCastExpr 0x55fa8906d840 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           | | |     |   |   `-ParenExpr 0x55fa8906d800 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           | | |     |   |     `-DeclRefExpr 0x55fa8906d7e0 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | | |     |   `-IntegerLiteral 0x55fa8906d820 <line:64:14> 'unsigned long long' 4278190080
|           | | |     `-IntegerLiteral 0x55fa8906d8b0 <col:40> 'int' 8
|           | | `-ParenExpr 0x55fa8906da40 <line:65:6, col:42> 'unsigned long long'
|           | |   `-BinaryOperator 0x55fa8906da20 <col:7, col:40> 'unsigned long long' '<<'
|           | |     |-ParenExpr 0x55fa8906d9e0 <col:7, col:35> 'unsigned long long'
|           | |     | `-BinaryOperator 0x55fa8906d9c0 <col:8, col:14> 'unsigned long long' '&'
|           | |     |   |-ImplicitCastExpr 0x55fa8906d9a8 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           | |     |   | `-ImplicitCastExpr 0x55fa8906d990 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           | |     |   |   `-ParenExpr 0x55fa8906d950 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           | |     |   |     `-DeclRefExpr 0x55fa8906d930 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           | |     |   `-IntegerLiteral 0x55fa8906d970 <line:65:14> 'unsigned long long' 16711680
|           | |     `-IntegerLiteral 0x55fa8906da00 <col:40> 'int' 24
|           | `-ParenExpr 0x55fa8906db90 <line:66:6, col:42> 'unsigned long long'
|           |   `-BinaryOperator 0x55fa8906db70 <col:7, col:40> 'unsigned long long' '<<'
|           |     |-ParenExpr 0x55fa8906db30 <col:7, col:35> 'unsigned long long'
|           |     | `-BinaryOperator 0x55fa8906db10 <col:8, col:14> 'unsigned long long' '&'
|           |     |   |-ImplicitCastExpr 0x55fa8906daf8 <col:8, col:10> 'unsigned long long' <IntegralCast>
|           |     |   | `-ImplicitCastExpr 0x55fa8906dae0 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|           |     |   |   `-ParenExpr 0x55fa8906daa0 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|           |     |   |     `-DeclRefExpr 0x55fa8906da80 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|           |     |   `-IntegerLiteral 0x55fa8906dac0 <line:66:14> 'unsigned long long' 65280
|           |     `-IntegerLiteral 0x55fa8906db50 <col:40> 'int' 40
|           `-ParenExpr 0x55fa8906ed00 <line:67:6, col:42> 'unsigned long long'
|             `-BinaryOperator 0x55fa8906ece0 <col:7, col:40> 'unsigned long long' '<<'
|               |-ParenExpr 0x55fa8906eca0 <col:7, col:35> 'unsigned long long'
|               | `-BinaryOperator 0x55fa8906ec80 <col:8, col:14> 'unsigned long long' '&'
|               |   |-ImplicitCastExpr 0x55fa8906ec68 <col:8, col:10> 'unsigned long long' <IntegralCast>
|               |   | `-ImplicitCastExpr 0x55fa8906ec50 <col:8, col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|               |   |   `-ParenExpr 0x55fa8906ec10 <col:8, col:10> '__uint64_t':'unsigned long' lvalue
|               |   |     `-DeclRefExpr 0x55fa8906dbd0 <line:75:31> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906d108 '__bsx' '__uint64_t':'unsigned long'
|               |   `-IntegerLiteral 0x55fa8906ec30 <line:67:14> 'unsigned long long' 255
|               `-IntegerLiteral 0x55fa8906ecc0 <col:40> 'int' 56
|-FunctionDecl 0x55fa8906ee40 </usr/include/bits/uintn-identity.h:32:1, line:36:1> line:33:1 __uint16_identity '__uint16_t (__uint16_t)' static inline
| |-ParmVarDecl 0x55fa8906edb0 <col:20, col:31> col:31 used __x '__uint16_t':'unsigned short'
| `-CompoundStmt 0x55fa8906ef38 <line:34:1, line:36:1>
|   `-ReturnStmt 0x55fa8906ef28 <line:35:3, col:10>
|     `-ImplicitCastExpr 0x55fa8906ef10 <col:10> '__uint16_t':'unsigned short' <LValueToRValue>
|       `-DeclRefExpr 0x55fa8906eef0 <col:10> '__uint16_t':'unsigned short' lvalue ParmVar 0x55fa8906edb0 '__x' '__uint16_t':'unsigned short'
|-FunctionDecl 0x55fa8906eff0 <line:38:1, line:42:1> line:39:1 __uint32_identity '__uint32_t (__uint32_t)' static inline
| |-ParmVarDecl 0x55fa8906ef60 <col:20, col:31> col:31 used __x '__uint32_t':'unsigned int'
| `-CompoundStmt 0x55fa8906f0e8 <line:40:1, line:42:1>
|   `-ReturnStmt 0x55fa8906f0d8 <line:41:3, col:10>
|     `-ImplicitCastExpr 0x55fa8906f0c0 <col:10> '__uint32_t':'unsigned int' <LValueToRValue>
|       `-DeclRefExpr 0x55fa8906f0a0 <col:10> '__uint32_t':'unsigned int' lvalue ParmVar 0x55fa8906ef60 '__x' '__uint32_t':'unsigned int'
|-FunctionDecl 0x55fa8906f1a0 <line:44:1, line:48:1> line:45:1 __uint64_identity '__uint64_t (__uint64_t)' static inline
| |-ParmVarDecl 0x55fa8906f110 <col:20, col:31> col:31 used __x '__uint64_t':'unsigned long'
| `-CompoundStmt 0x55fa8906f298 <line:46:1, line:48:1>
|   `-ReturnStmt 0x55fa8906f288 <line:47:3, col:10>
|     `-ImplicitCastExpr 0x55fa8906f270 <col:10> '__uint64_t':'unsigned long' <LValueToRValue>
|       `-DeclRefExpr 0x55fa8906f250 <col:10> '__uint64_t':'unsigned long' lvalue ParmVar 0x55fa8906f110 '__x' '__uint64_t':'unsigned long'
|-RecordDecl 0x55fa8906f2b0 </usr/include/bits/types/__sigset_t.h:5:9, line:8:1> line:5:9 struct definition
| `-FieldDecl 0x55fa8906f4f8 <line:7:3, col:41> col:21 __val 'unsigned long[16]'
|-TypedefDecl 0x55fa8906f5a8 <line:5:1, line:8:3> col:3 referenced __sigset_t 'struct __sigset_t':'__sigset_t'
| `-ElaboratedType 0x55fa8906f550 'struct __sigset_t' sugar
|   `-RecordType 0x55fa8906f330 '__sigset_t'
|     `-Record 0x55fa8906f2b0 <line:5:9, line:8:1>
|-TypedefDecl 0x55fa8906f690 </usr/include/bits/types/sigset_t.h:7:1, col:20> col:20 sigset_t '__sigset_t'
| `-ElaboratedType 0x55fa8906f650 '__sigset_t' sugar
|   `-TypedefType 0x55fa8906f620 '__sigset_t' sugar
|     |-Typedef 0x55fa8906f5a8 '__sigset_t'
|     `-ElaboratedType 0x55fa8906f550 'struct __sigset_t' sugar
|       `-RecordType 0x55fa8906f330 '__sigset_t'
|         `-Record 0x55fa8906f2b0 </usr/include/bits/types/__sigset_t.h:5:9, line:8:1>
|-RecordDecl 0x55fa8906f6e8 </usr/include/bits/types/struct_timeval.h:8:1, line:17:1> line:8:8 struct timeval definition
| |-FieldDecl 0x55fa8906f7a0 <line:14:3, col:12> col:12 tv_sec '__time_t':'long'
| `-FieldDecl 0x55fa8906f860 <line:15:3, col:17> col:17 tv_usec '__suseconds_t':'long'
|-RecordDecl 0x55fa8906f8b0 </usr/include/bits/types/struct_timespec.h:11:1, line:31:1> line:11:8 struct timespec definition
| |-FieldDecl 0x55fa8906f960 <line:16:3, col:12> col:12 tv_sec '__time_t':'long'
| `-FieldDecl 0x55fa8906fa20 <line:21:3, col:21> col:21 tv_nsec '__syscall_slong_t':'long'
|-TypedefDecl 0x55fa8906fa80 </usr/include/sys/select.h:43:1, col:23> col:23 suseconds_t '__suseconds_t':'long'
| `-ElaboratedType 0x55fa8906f820 '__suseconds_t' sugar
|   `-TypedefType 0x55fa8906f7f0 '__suseconds_t' sugar
|     |-Typedef 0x55fa8900b420 '__suseconds_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa8906faf0 <line:49:1, col:18> col:18 referenced __fd_mask 'long'
| `-BuiltinType 0x55fa88f84430 'long'
|-RecordDecl 0x55fa8906fb48 <line:59:9, line:70:3> line:59:9 struct definition
| `-FieldDecl 0x55fa89075cc0 <line:67:5, col:50> col:15 __fds_bits '__fd_mask[16]'
|-TypedefDecl 0x55fa89075d68 <line:59:1, line:70:5> col:5 referenced fd_set 'struct fd_set':'fd_set'
| `-ElaboratedType 0x55fa89075d10 'struct fd_set' sugar
|   `-RecordType 0x55fa8906fbd0 'fd_set'
|     `-Record 0x55fa8906fb48 <line:59:9, line:70:3>
|-TypedefDecl 0x55fa89075de8 <line:77:1, col:19> col:19 fd_mask '__fd_mask':'long'
| `-ElaboratedType 0x55fa89075ae0 '__fd_mask' sugar
|   `-TypedefType 0x55fa89075ab0 '__fd_mask' sugar
|     |-Typedef 0x55fa8906faf0 '__fd_mask'
|     `-BuiltinType 0x55fa88f84430 'long'
|-FunctionDecl 0x55fa89076328 <line:102:1, line:105:42> line:102:12 select 'int (int, fd_set *restrict, fd_set *restrict, fd_set *restrict, struct timeval *restrict)' extern
| |-ParmVarDecl 0x55fa89075e58 <col:20, col:24> col:24 __nfds 'int'
| |-ParmVarDecl 0x55fa89075f98 <col:32, col:51> col:51 __readfds 'fd_set *restrict'
| |-ParmVarDecl 0x55fa89076018 <line:103:6, col:25> col:25 __writefds 'fd_set *restrict'
| |-ParmVarDecl 0x55fa89076098 <line:104:6, col:25> col:25 __exceptfds 'fd_set *restrict'
| `-ParmVarDecl 0x55fa890761b8 <line:105:6, col:33> col:33 __timeout 'struct timeval *restrict'
|-FunctionDecl 0x55fa89076918 <line:127:1, line:131:45> line:127:12 pselect 'int (int, fd_set *restrict, fd_set *restrict, fd_set *restrict, const struct timespec *restrict, const __sigset_t *restrict)' extern
| |-ParmVarDecl 0x55fa89076410 <col:21, col:25> col:25 __nfds 'int'
| |-ParmVarDecl 0x55fa89076490 <col:33, col:52> col:52 __readfds 'fd_set *restrict'
| |-ParmVarDecl 0x55fa89076510 <line:128:7, col:26> col:26 __writefds 'fd_set *restrict'
| |-ParmVarDecl 0x55fa89076590 <line:129:7, col:26> col:26 __exceptfds 'fd_set *restrict'
| |-ParmVarDecl 0x55fa890766b8 <line:130:7, col:41> col:41 __timeout 'const struct timespec *restrict'
| `-ParmVarDecl 0x55fa89076798 <line:131:7, col:36> col:36 __sigmask 'const __sigset_t *restrict'
|-TypedefDecl 0x55fa89076ac0 </usr/include/sys/types.h:185:1, col:21> col:21 blksize_t '__blksize_t':'long'
| `-ElaboratedType 0x55fa89076a20 '__blksize_t' sugar
|   `-TypedefType 0x55fa890769f0 '__blksize_t' sugar
|     |-Typedef 0x55fa8900b6c0 '__blksize_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89076b90 <line:192:1, col:20> col:20 blkcnt_t '__blkcnt_t':'long'
| `-ElaboratedType 0x55fa89076b50 '__blkcnt_t' sugar
|   `-TypedefType 0x55fa89076b20 '__blkcnt_t' sugar
|     |-Typedef 0x55fa8900b730 '__blkcnt_t'
|     `-BuiltinType 0x55fa88f84430 'long'
|-TypedefDecl 0x55fa89076c60 <line:196:1, col:22> col:22 fsblkcnt_t '__fsblkcnt_t':'unsigned long'
| `-ElaboratedType 0x55fa89076c20 '__fsblkcnt_t' sugar
|   `-TypedefType 0x55fa89076bf0 '__fsblkcnt_t' sugar
|     |-Typedef 0x55fa8900b810 '__fsblkcnt_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-TypedefDecl 0x55fa89076d30 <line:200:1, col:22> col:22 fsfilcnt_t '__fsfilcnt_t':'unsigned long'
| `-ElaboratedType 0x55fa89076cf0 '__fsfilcnt_t' sugar
|   `-TypedefType 0x55fa89076cc0 '__fsfilcnt_t' sugar
|     |-Typedef 0x55fa8900b8f0 '__fsfilcnt_t'
|     `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-RecordDecl 0x55fa89076d88 </usr/include/bits/atomic_wide_counter.h:25:9, line:33:1> line:25:9 union definition
| |-FieldDecl 0x55fa89076e48 <line:27:17, col:40> col:40 __value64 'unsigned long long'
| |-RecordDecl 0x55fa89076e98 <line:28:3, line:32:3> line:28:3 struct definition
| | |-FieldDecl 0x55fa89076f58 <line:30:5, col:18> col:18 __low 'unsigned int'
| | `-FieldDecl 0x55fa89076fc0 <line:31:5, col:18> col:18 __high 'unsigned int'
| `-FieldDecl 0x55fa89077068 <line:28:3, line:32:5> col:5 __value32 'struct (unnamed struct at /usr/include/bits/atomic_wide_counter.h:28:3)':'struct __atomic_wide_counter::(unnamed at /usr/include/bits/atomic_wide_counter.h:28:3)'
|-TypedefDecl 0x55fa89077118 <line:25:1, line:33:3> col:3 referenced __atomic_wide_counter 'union __atomic_wide_counter':'__atomic_wide_counter'
| `-ElaboratedType 0x55fa890770c0 'union __atomic_wide_counter' sugar
|   `-RecordType 0x55fa89076e10 '__atomic_wide_counter'
|     `-Record 0x55fa89076d88 <line:25:9, line:33:1>
|-RecordDecl 0x55fa89077188 </usr/include/bits/thread-shared-types.h:51:9, line:55:1> line:51:16 struct __pthread_internal_list definition
| |-FieldDecl 0x55fa890772e8 <line:53:3, col:35> col:35 __prev 'struct __pthread_internal_list *'
| `-FieldDecl 0x55fa89077360 <line:54:3, col:35> col:35 __next 'struct __pthread_internal_list *'
|-TypedefDecl 0x55fa89077408 <line:51:1, line:55:3> col:3 referenced __pthread_list_t 'struct __pthread_internal_list'
| `-ElaboratedType 0x55fa890773b0 'struct __pthread_internal_list' sugar
|   `-RecordType 0x55fa89077210 'struct __pthread_internal_list'
|     `-Record 0x55fa89077188 '__pthread_internal_list'
|-RecordDecl 0x55fa89077478 <line:57:9, line:60:1> line:57:16 struct __pthread_internal_slist definition
| `-FieldDecl 0x55fa890775d8 <line:59:3, col:36> col:36 __next 'struct __pthread_internal_slist *'
|-TypedefDecl 0x55fa89077688 <line:57:1, line:60:3> col:3 __pthread_slist_t 'struct __pthread_internal_slist'
| `-ElaboratedType 0x55fa89077630 'struct __pthread_internal_slist' sugar
|   `-RecordType 0x55fa89077500 'struct __pthread_internal_slist'
|     `-Record 0x55fa89077478 '__pthread_internal_slist'
|-RecordDecl 0x55fa890776f8 </usr/include/bits/struct_mutex.h:22:1, line:53:1> line:22:8 struct __pthread_mutex_s definition
| |-FieldDecl 0x55fa890777b8 <line:24:3, col:7> col:7 __lock 'int'
| |-FieldDecl 0x55fa89077820 <line:25:3, col:16> col:16 __count 'unsigned int'
| |-FieldDecl 0x55fa89077888 <line:26:3, col:7> col:7 __owner 'int'
| |-FieldDecl 0x55fa890778f0 <line:28:3, col:16> col:16 __nusers 'unsigned int'
| |-FieldDecl 0x55fa89077958 <line:32:3, col:7> col:7 __kind 'int'
| |-FieldDecl 0x55fa890779c0 <line:34:3, col:9> col:9 __spins 'short'
| |-FieldDecl 0x55fa89077a28 <line:35:3, col:9> col:9 __elision 'short'
| `-FieldDecl 0x55fa8907dc00 <line:36:3, col:20> col:20 __list '__pthread_list_t':'struct __pthread_internal_list'
|-RecordDecl 0x55fa8907dc50 </usr/include/bits/struct_rwlock.h:23:1, line:55:1> line:23:8 struct __pthread_rwlock_arch_t definition
| |-FieldDecl 0x55fa8907dd08 <line:25:3, col:16> col:16 __readers 'unsigned int'
| |-FieldDecl 0x55fa8907dd70 <line:26:3, col:16> col:16 __writers 'unsigned int'
| |-FieldDecl 0x55fa8907ddd8 <line:27:3, col:16> col:16 __wrphase_futex 'unsigned int'
| |-FieldDecl 0x55fa8907de40 <line:28:3, col:16> col:16 __writers_futex 'unsigned int'
| |-FieldDecl 0x55fa8907dea8 <line:29:3, col:16> col:16 __pad3 'unsigned int'
| |-FieldDecl 0x55fa8907df10 <line:30:3, col:16> col:16 __pad4 'unsigned int'
| |-FieldDecl 0x55fa8907df78 <line:32:3, col:7> col:7 __cur_writer 'int'
| |-FieldDecl 0x55fa8907dfe0 <line:33:3, col:7> col:7 __shared 'int'
| |-FieldDecl 0x55fa8907e048 <line:34:3, col:15> col:15 __rwelision 'signed char'
| |-FieldDecl 0x55fa8907e138 <line:39:3, col:25> col:17 __pad1 'unsigned char[7]'
| |-FieldDecl 0x55fa8907e1a0 <line:42:3, col:21> col:21 __pad2 'unsigned long'
| `-FieldDecl 0x55fa8907e208 <line:45:3, col:16> col:16 __flags 'unsigned int'
|-RecordDecl 0x55fa8907e258 </usr/include/bits/thread-shared-types.h:94:1, line:104:1> line:94:8 struct __pthread_cond_s definition
| |-FieldDecl 0x55fa8907e370 <line:96:3, col:25> col:25 __wseq '__atomic_wide_counter'
| |-FieldDecl 0x55fa8907e3d0 <line:97:3, col:25> col:25 __g1_start '__atomic_wide_counter'
| |-FieldDecl 0x55fa8907e4b8 <line:98:3, col:26> col:16 __g_size 'unsigned int[2]'
| |-FieldDecl 0x55fa8907e520 <line:99:3, col:16> col:16 __g1_orig_size 'unsigned int'
| |-FieldDecl 0x55fa8907e588 <line:100:3, col:16> col:16 __wrefs 'unsigned int'
| |-FieldDecl 0x55fa8907e640 <line:101:3, col:29> col:16 __g_signals 'unsigned int[2]'
| |-FieldDecl 0x55fa8907e6a8 <line:102:3, col:16> col:16 __unused_initialized_1 'unsigned int'
| `-FieldDecl 0x55fa8907e710 <line:103:3, col:16> col:16 __unused_initialized_2 'unsigned int'
|-TypedefDecl 0x55fa8907e838 <line:106:1, col:22> col:22 __tss_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8907e8a8 <line:107:1, col:27> col:27 __thrd_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-RecordDecl 0x55fa8907e900 <line:109:9, line:112:1> line:109:9 struct definition
| `-FieldDecl 0x55fa8907e9b8 <line:111:3, col:7> col:7 __data 'int'
|-TypedefDecl 0x55fa8907ea68 <line:109:1, line:112:3> col:3 __once_flag 'struct __once_flag':'__once_flag'
| `-ElaboratedType 0x55fa8907ea10 'struct __once_flag' sugar
|   `-RecordType 0x55fa8907e980 '__once_flag'
|     `-Record 0x55fa8907e900 <line:109:9, line:112:1>
|-TypedefDecl 0x55fa8907eaf0 </usr/include/bits/pthreadtypes.h:27:1, col:27> col:27 pthread_t 'unsigned long'
| `-BuiltinType 0x55fa88f844d0 'unsigned long'
|-RecordDecl 0x55fa8907f830 <line:32:9, line:36:1> line:32:9 union definition
| |-FieldDecl 0x55fa8907f930 <line:34:3, col:43> col:8 __size 'char[4]'
| `-FieldDecl 0x55fa8907f998 <line:35:3, col:7> col:7 __align 'int'
|-TypedefDecl 0x55fa8907fa48 <line:32:1, line:36:3> col:3 pthread_mutexattr_t 'union pthread_mutexattr_t':'pthread_mutexattr_t'
| `-ElaboratedType 0x55fa8907f9f0 'union pthread_mutexattr_t' sugar
|   `-RecordType 0x55fa8907f8b0 'pthread_mutexattr_t'
|     `-Record 0x55fa8907f830 <line:32:9, line:36:1>
|-RecordDecl 0x55fa8907fab8 <line:41:9, line:45:1> line:41:9 union definition
| |-FieldDecl 0x55fa8907fbc0 <line:43:3, col:42> col:8 __size 'char[4]'
| `-FieldDecl 0x55fa8907fc28 <line:44:3, col:7> col:7 __align 'int'
|-TypedefDecl 0x55fa8907fcd8 <line:41:1, line:45:3> col:3 pthread_condattr_t 'union pthread_condattr_t':'pthread_condattr_t'
| `-ElaboratedType 0x55fa8907fc80 'union pthread_condattr_t' sugar
|   `-RecordType 0x55fa8907fb40 'pthread_condattr_t'
|     `-Record 0x55fa8907fab8 <line:41:9, line:45:1>
|-TypedefDecl 0x55fa8907fd60 <line:49:1, col:22> col:22 pthread_key_t 'unsigned int'
| `-BuiltinType 0x55fa88f844b0 'unsigned int'
|-TypedefDecl 0x55fa8907fdd0 <line:53:1, col:30> col:30 pthread_once_t 'int'
| `-BuiltinType 0x55fa88f84410 'int'
|-RecordDecl 0x55fa8907fe28 <line:56:1, line:60:1> line:56:7 union pthread_attr_t definition
| |-FieldDecl 0x55fa8907ff60 <line:58:3, col:38> col:8 __size 'char[56]'
| `-FieldDecl 0x55fa8907ffc8 <line:59:3, col:12> col:12 __align 'long'
|-TypedefDecl 0x55fa89080070 <line:62:1, col:30> col:30 pthread_attr_t 'union pthread_attr_t'
| `-ElaboratedType 0x55fa89080020 'union pthread_attr_t' sugar
|   `-RecordType 0x55fa8907feb0 'union pthread_attr_t'
|     `-Record 0x55fa8907fe28 'pthread_attr_t'
|-RecordDecl 0x55fa890800c8 <line:67:9, line:72:1> line:67:9 union definition
| |-FieldDecl 0x55fa890801c0 <line:69:3, col:28> col:28 __data 'struct __pthread_mutex_s'
| |-FieldDecl 0x55fa890802a0 <line:70:3, col:39> col:8 __size 'char[40]'
| `-FieldDecl 0x55fa89080308 <line:71:3, col:12> col:12 __align 'long'
|-TypedefDecl 0x55fa890804a8 <line:67:1, line:72:3> col:3 pthread_mutex_t 'union pthread_mutex_t':'pthread_mutex_t'
| `-ElaboratedType 0x55fa89080450 'union pthread_mutex_t' sugar
|   `-RecordType 0x55fa89080150 'pthread_mutex_t'
|     `-Record 0x55fa890800c8 <line:67:9, line:72:1>
|-RecordDecl 0x55fa89080518 <line:75:9, line:80:1> line:75:9 union definition
| |-FieldDecl 0x55fa89080610 <line:77:3, col:27> col:27 __data 'struct __pthread_cond_s'
| |-FieldDecl 0x55fa890806f0 <line:78:3, col:38> col:8 __size 'char[48]'
| `-FieldDecl 0x55fa89080758 <line:79:17, col:31> col:31 __align 'long long'
|-TypedefDecl 0x55fa890848e8 <line:75:1, line:80:3> col:3 pthread_cond_t 'union pthread_cond_t':'pthread_cond_t'
| `-ElaboratedType 0x55fa89084890 'union pthread_cond_t' sugar
|   `-RecordType 0x55fa890805a0 'pthread_cond_t'
|     `-Record 0x55fa89080518 <line:75:9, line:80:1>
|-RecordDecl 0x55fa89084958 <line:86:9, line:91:1> line:86:9 union definition
| |-FieldDecl 0x55fa89084a50 <line:88:3, col:34> col:34 __data 'struct __pthread_rwlock_arch_t'
| |-FieldDecl 0x55fa89084b00 <line:89:3, col:40> col:8 __size 'char[56]'
| `-FieldDecl 0x55fa89084b68 <line:90:3, col:12> col:12 __align 'long'
|-TypedefDecl 0x55fa89084cc8 <line:86:1, line:91:3> col:3 pthread_rwlock_t 'union pthread_rwlock_t':'pthread_rwlock_t'
| `-ElaboratedType 0x55fa89084c70 'union pthread_rwlock_t' sugar
|   `-RecordType 0x55fa890849e0 'pthread_rwlock_t'
|     `-Record 0x55fa89084958 <line:86:9, line:91:1>
|-RecordDecl 0x55fa89084d38 <line:93:9, line:97:1> line:93:9 union definition
| |-FieldDecl 0x55fa89084e40 <line:95:3, col:44> col:8 __size 'char[8]'
| `-FieldDecl 0x55fa89084ea8 <line:96:3, col:12> col:12 __align 'long'
|-TypedefDecl 0x55fa89084f58 <line:93:1, line:97:3> col:3 pthread_rwlockattr_t 'union pthread_rwlockattr_t':'pthread_rwlockattr_t'
| `-ElaboratedType 0x55fa89084f00 'union pthread_rwlockattr_t' sugar
|   `-RecordType 0x55fa89084dc0 'pthread_rwlockattr_t'
|     `-Record 0x55fa89084d38 <line:93:9, line:97:1>
|-TypedefDecl 0x55fa89084fe0 <line:103:1, col:22> col:22 pthread_spinlock_t 'volatile int'
| `-QualType 0x55fa88f84414 'volatile int' volatile
|   `-BuiltinType 0x55fa88f84410 'int'
|-RecordDecl 0x55fa89085038 <line:108:9, line:112:1> line:108:9 union definition
| |-FieldDecl 0x55fa89085170 <line:110:3, col:41> col:8 __size 'char[32]'
| `-FieldDecl 0x55fa890851d8 <line:111:3, col:12> col:12 __align 'long'
|-TypedefDecl 0x55fa89085288 <line:108:1, line:112:3> col:3 pthread_barrier_t 'union pthread_barrier_t':'pthread_barrier_t'
| `-ElaboratedType 0x55fa89085230 'union pthread_barrier_t' sugar
|   `-RecordType 0x55fa890850c0 'pthread_barrier_t'
|     `-Record 0x55fa89085038 <line:108:9, line:112:1>
|-RecordDecl 0x55fa890852f8 <line:114:9, line:118:1> line:114:9 union definition
| |-FieldDecl 0x55fa89085400 <line:116:3, col:45> col:8 __size 'char[4]'
| `-FieldDecl 0x55fa89085468 <line:117:3, col:7> col:7 __align 'int'
|-TypedefDecl 0x55fa89085518 <line:114:1, line:118:3> col:3 pthread_barrierattr_t 'union pthread_barrierattr_t':'pthread_barrierattr_t'
| `-ElaboratedType 0x55fa890854c0 'union pthread_barrierattr_t' sugar
|   `-RecordType 0x55fa89085380 'pthread_barrierattr_t'
|     `-Record 0x55fa890852f8 <line:114:9, line:118:1>
|-FunctionDecl 0x55fa89085658 </usr/include/stdlib.h:521:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:521:17 random 'long (void)' extern
| `-NoThrowAttr 0x55fa89085700 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89085860 </usr/include/stdlib.h:524:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:524:13 srandom 'void (unsigned int)' extern
| |-ParmVarDecl 0x55fa89085770 <col:22, col:35> col:35 __seed 'unsigned int'
| `-NoThrowAttr 0x55fa89085910 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89085bd8 </usr/include/stdlib.h:530:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:530:14 initstate 'char *(unsigned int, char *, size_t)' extern
| |-ParmVarDecl 0x55fa89085980 <col:25, col:38> col:38 __seed 'unsigned int'
| |-ParmVarDecl 0x55fa89085a00 <col:46, col:52> col:52 __statebuf 'char *'
| |-ParmVarDecl 0x55fa89085a78 <line:531:4, col:11> col:11 __statelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89085c98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89085cf0 <line:555:57, /usr/include/stdlib.h:531:44> 2
|-FunctionDecl 0x55fa89085e08 <line:535:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:535:14 setstate 'char *(char *)' extern
| |-ParmVarDecl 0x55fa89085d50 <col:24, col:30> col:30 __statebuf 'char *'
| |-NoThrowAttr 0x55fa89085eb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89085f10 <line:555:57, /usr/include/stdlib.h:535:63> 1
|-RecordDecl 0x55fa89085f58 <line:543:1, line:552:3> line:543:8 struct random_data definition
| |-FieldDecl 0x55fa890860d8 <line:545:5, col:14> col:14 fptr 'int32_t *'
| |-FieldDecl 0x55fa89086140 <line:546:5, col:14> col:14 rptr 'int32_t *'
| |-FieldDecl 0x55fa890861a8 <line:547:5, col:14> col:14 state 'int32_t *'
| |-FieldDecl 0x55fa89086210 <line:548:5, col:9> col:9 rand_type 'int'
| |-FieldDecl 0x55fa89086278 <line:549:5, col:9> col:9 rand_deg 'int'
| |-FieldDecl 0x55fa890862e0 <line:550:5, col:9> col:9 rand_sep 'int'
| `-FieldDecl 0x55fa89086348 <line:551:5, col:14> col:14 end_ptr 'int32_t *'
|-FunctionDecl 0x55fa89086638 <line:554:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:554:12 random_r 'int (struct random_data *restrict, int32_t *restrict)' extern
| |-ParmVarDecl 0x55fa89086458 <col:22, col:53> col:53 __buf 'struct random_data *restrict'
| |-ParmVarDecl 0x55fa890864d8 <line:555:8, col:28> col:28 __result 'int32_t *restrict'
| |-NoThrowAttr 0x55fa890866f0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89086748 <line:555:57, /usr/include/stdlib.h:555:62> 1 2
|-FunctionDecl 0x55fa890879c8 <line:557:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:557:12 srandom_r 'int (unsigned int, struct random_data *)' extern
| |-ParmVarDecl 0x55fa890867a0 <col:23, col:36> col:36 __seed 'unsigned int'
| |-ParmVarDecl 0x55fa89087880 <col:44, col:64> col:64 __buf 'struct random_data *'
| |-NoThrowAttr 0x55fa89087a80 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89087ad8 <line:555:57, /usr/include/stdlib.h:558:27> 2
|-FunctionDecl 0x55fa89087e48 <line:560:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:560:12 initstate_r 'int (unsigned int, char *restrict, size_t, struct random_data *restrict)' extern
| |-ParmVarDecl 0x55fa89087b30 <col:25, col:38> col:38 __seed 'unsigned int'
| |-ParmVarDecl 0x55fa89087bb0 <col:46, col:63> col:63 __statebuf 'char *restrict'
| |-ParmVarDecl 0x55fa89087c28 <line:561:4, col:11> col:11 __statelen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89087cb8 <line:562:4, col:35> col:35 __buf 'struct random_data *restrict'
| |-NoThrowAttr 0x55fa89087f10 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89087f68 <line:555:57, /usr/include/stdlib.h:563:30> 2 4
|-FunctionDecl 0x55fa890881b8 <line:565:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:565:12 setstate_r 'int (char *restrict, struct random_data *restrict)' extern
| |-ParmVarDecl 0x55fa89087fc0 <col:24, col:41> col:41 __statebuf 'char *restrict'
| |-ParmVarDecl 0x55fa89088050 <line:566:10, col:41> col:41 __buf 'struct random_data *restrict'
| |-NoThrowAttr 0x55fa89088270 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890882c8 <line:555:57, /usr/include/stdlib.h:567:30> 1 2
|-FunctionDecl 0x55fa890883a8 <line:573:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:573:12 rand 'int (void)' extern
| `-NoThrowAttr 0x55fa89088450 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89088550 </usr/include/stdlib.h:575:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:575:13 srand 'void (unsigned int)' extern
| |-ParmVarDecl 0x55fa890884c0 <col:20, col:33> col:33 __seed 'unsigned int'
| `-NoThrowAttr 0x55fa89088600 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89088778 </usr/include/stdlib.h:579:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:579:12 rand_r 'int (unsigned int *)' extern
| |-ParmVarDecl 0x55fa890886a8 <col:20, col:34> col:34 __seed 'unsigned int *'
| `-NoThrowAttr 0x55fa89088828 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89088968 </usr/include/stdlib.h:587:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:587:15 drand48 'double (void)' extern
| `-NoThrowAttr 0x55fa89088a10 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89088ca8 </usr/include/stdlib.h:588:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:588:15 erand48 'double (unsigned short *)' extern
| |-ParmVarDecl 0x55fa89088b70 <col:24, col:52> col:43 __xsubi 'unsigned short *'
| |-NoThrowAttr 0x55fa89088d58 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89088db0 <line:555:57, /usr/include/stdlib.h:588:76> 1
|-FunctionDecl 0x55fa89088e98 <line:591:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:591:17 lrand48 'long (void)' extern
| `-NoThrowAttr 0x55fa89088f40 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89089138 </usr/include/stdlib.h:592:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:592:17 nrand48 'long (unsigned short *)' extern
| |-ParmVarDecl 0x55fa89089000 <col:26, col:54> col:45 __xsubi 'unsigned short *'
| |-NoThrowAttr 0x55fa890891e8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89089240 <line:555:57, /usr/include/stdlib.h:593:27> 1
|-FunctionDecl 0x55fa89089328 <line:596:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:596:17 mrand48 'long (void)' extern
| `-NoThrowAttr 0x55fa890893d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89089548 </usr/include/stdlib.h:597:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:597:17 jrand48 'long (unsigned short *)' extern
| |-ParmVarDecl 0x55fa89089490 <col:26, col:54> col:45 __xsubi 'unsigned short *'
| |-NoThrowAttr 0x55fa890895f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89089650 <line:555:57, /usr/include/stdlib.h:598:27> 1
|-FunctionDecl 0x55fa89089780 <line:601:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:601:13 srand48 'void (long)' extern
| |-ParmVarDecl 0x55fa890896b0 <col:22, col:31> col:31 __seedval 'long'
| `-NoThrowAttr 0x55fa89089830 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89089a38 </usr/include/stdlib.h:602:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:602:28 seed48 'unsigned short *(unsigned short *)' extern
| |-ParmVarDecl 0x55fa89089908 <col:36, col:66> col:55 __seed16v 'unsigned short *'
| |-NoThrowAttr 0x55fa89089ae8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89089b40 <line:555:57, /usr/include/stdlib.h:603:27> 1
|-FunctionDecl 0x55fa89089d90 <line:604:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:604:13 lcong48 'void (unsigned short *)' extern
| |-ParmVarDecl 0x55fa89089c60 <col:22, col:50> col:41 __param 'unsigned short *'
| |-NoThrowAttr 0x55fa89089e40 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89089e98 <line:555:57, /usr/include/stdlib.h:604:74> 1
|-RecordDecl 0x55fa89089ed8 <line:610:1, line:618:3> line:610:8 struct drand48_data definition
| |-FieldDecl 0x55fa89089fe8 <line:612:5, col:29> col:24 __x 'unsigned short[3]'
| |-FieldDecl 0x55fa8908a0a0 <line:613:5, col:33> col:24 __old_x 'unsigned short[3]'
| |-FieldDecl 0x55fa8908a108 <line:614:5, col:24> col:24 __c 'unsigned short'
| |-FieldDecl 0x55fa8908a170 <line:615:5, col:24> col:24 __init 'unsigned short'
| `-FieldDecl 0x55fa8908a1d8 <line:616:19, col:42> col:42 __a 'unsigned long long'
|-FunctionDecl 0x55fa8908a4f8 <line:621:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:621:12 drand48_r 'int (struct drand48_data *restrict, double *restrict)' extern
| |-ParmVarDecl 0x55fa8908a2e8 <col:23, col:55> col:55 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908a398 <line:622:9, col:28> col:28 __result 'double *restrict'
| |-NoThrowAttr 0x55fa8908a5b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908a608 <line:555:57, /usr/include/stdlib.h:622:62> 1 2
|-FunctionDecl 0x55fa8908c988 <line:623:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:623:12 erand48_r 'int (unsigned short *, struct drand48_data *restrict, double *restrict)' extern
| |-ParmVarDecl 0x55fa8908a6b0 <col:23, col:51> col:42 __xsubi 'unsigned short *'
| |-ParmVarDecl 0x55fa8908a740 <line:624:9, col:41> col:41 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908a7c0 <line:625:9, col:28> col:28 __result 'double *restrict'
| |-NoThrowAttr 0x55fa8908ca48 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908caa0 <line:555:57, /usr/include/stdlib.h:625:62> 1 2
|-FunctionDecl 0x55fa8908ccf8 <line:628:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:628:12 lrand48_r 'int (struct drand48_data *restrict, long *restrict)' extern
| |-ParmVarDecl 0x55fa8908cb10 <col:23, col:55> col:55 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908cb90 <line:629:9, col:30> col:30 __result 'long *restrict'
| |-NoThrowAttr 0x55fa8908cdb0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908ce08 <line:555:57, /usr/include/stdlib.h:630:30> 1 2
|-FunctionDecl 0x55fa8908d148 <line:631:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:631:12 nrand48_r 'int (unsigned short *, struct drand48_data *restrict, long *restrict)' extern
| |-ParmVarDecl 0x55fa8908ceb0 <col:23, col:51> col:42 __xsubi 'unsigned short *'
| |-ParmVarDecl 0x55fa8908cf40 <line:632:9, col:41> col:41 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908cfc0 <line:633:9, col:30> col:30 __result 'long *restrict'
| |-NoThrowAttr 0x55fa8908d208 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908d260 <line:555:57, /usr/include/stdlib.h:634:30> 1 2
|-FunctionDecl 0x55fa8908d430 <line:637:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:637:12 mrand48_r 'int (struct drand48_data *restrict, long *restrict)' extern
| |-ParmVarDecl 0x55fa8908d2d0 <col:23, col:55> col:55 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908d350 <line:638:9, col:30> col:30 __result 'long *restrict'
| |-NoThrowAttr 0x55fa8908d4e8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908d540 <line:555:57, /usr/include/stdlib.h:639:30> 1 2
|-FunctionDecl 0x55fa8908d7e8 <line:640:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:640:12 jrand48_r 'int (unsigned short *, struct drand48_data *restrict, long *restrict)' extern
| |-ParmVarDecl 0x55fa8908d5f0 <col:23, col:51> col:42 __xsubi 'unsigned short *'
| |-ParmVarDecl 0x55fa8908d680 <line:641:9, col:41> col:41 __buffer 'struct drand48_data *restrict'
| |-ParmVarDecl 0x55fa8908d700 <line:642:9, col:30> col:30 __result 'long *restrict'
| |-NoThrowAttr 0x55fa8908d8c0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908d918 <line:555:57, /usr/include/stdlib.h:643:30> 1 2
|-FunctionDecl 0x55fa8908db48 <line:646:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:646:12 srand48_r 'int (long, struct drand48_data *)' extern
| |-ParmVarDecl 0x55fa8908d970 <col:23, col:32> col:32 __seedval 'long'
| |-ParmVarDecl 0x55fa8908da00 <col:43, col:64> col:64 __buffer 'struct drand48_data *'
| |-NoThrowAttr 0x55fa8908dc00 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908dc58 <line:555:57, /usr/include/stdlib.h:647:27> 2
|-FunctionDecl 0x55fa8908def8 <line:649:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:649:12 seed48_r 'int (unsigned short *, struct drand48_data *)' extern
| |-ParmVarDecl 0x55fa8908dd00 <col:22, col:52> col:41 __seed16v 'unsigned short *'
| |-ParmVarDecl 0x55fa8908dd90 <line:650:8, col:29> col:29 __buffer 'struct drand48_data *'
| |-NoThrowAttr 0x55fa8908dfb0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908e008 <line:555:57, /usr/include/stdlib.h:650:63> 1 2
|-FunctionDecl 0x55fa8908e268 <line:652:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:652:12 lcong48_r 'int (unsigned short *, struct drand48_data *)' extern
| |-ParmVarDecl 0x55fa8908e0b0 <col:23, col:51> col:42 __param 'unsigned short *'
| |-ParmVarDecl 0x55fa8908e140 <line:653:9, col:30> col:30 __buffer 'struct drand48_data *'
| |-NoThrowAttr 0x55fa8908e320 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908e378 <line:555:57, /usr/include/stdlib.h:654:30> 1 2
|-FunctionDecl 0x55fa8908e4b0 <line:657:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:657:19 arc4random '__uint32_t (void)' extern
| `-NoThrowAttr 0x55fa8908e558 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8908e780 </usr/include/stdlib.h:661:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:661:13 arc4random_buf 'void (void *, size_t)' extern
| |-ParmVarDecl 0x55fa8908e5c8 <col:29, col:35> col:35 __buf 'void *'
| |-ParmVarDecl 0x55fa8908e640 <col:42, col:49> col:49 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8908e838 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8908e8d0 <line:555:57, /usr/include/stdlib.h:662:27> 1
|-FunctionDecl 0x55fa8908e9b8 <line:666:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:666:19 arc4random_uniform '__uint32_t (__uint32_t)' extern
| |-ParmVarDecl 0x55fa8908e928 <col:39, col:50> col:50 __upper_bound '__uint32_t':'unsigned int'
| `-NoThrowAttr 0x55fa8908ea68 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8908ebe8 </usr/include/stdlib.h:672:14> col:14 implicit malloc 'void *(unsigned long)' extern
| |-ParmVarDecl 0x55fa8908ecf0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa8908ec90 <<invalid sloc>> Implicit 937
| `-AllocSizeAttr 0x55fa8908ed60 <col:14> Implicit 1
|-FunctionDecl 0x55fa8908ed90 prev 0x55fa8908ebe8 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdlib.h:672:14 malloc 'void *(unsigned long)' extern
| |-ParmVarDecl 0x55fa8908ead0 <col:22, col:29> col:29 __size 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8908eed0 <<invalid sloc>> Inherited Implicit 937
| |-AllocSizeAttr 0x55fa8908ef00 <col:14> Inherited Implicit 1
| |-NoThrowAttr 0x55fa8908ee40 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55fa8908ee98 <line:452:47> malloc
| | `-<<<NULL>>>
| `-AllocSizeAttr 0x55fa8908ef30 </usr/include/stdlib.h:672:14> Implicit 1
|-FunctionDecl 0x55fa8908f108 <line:675:14> col:14 implicit calloc 'void *(unsigned long, unsigned long)' extern
| |-ParmVarDecl 0x55fa8908f210 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa8908f278 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa8908f1b0 <<invalid sloc>> Implicit 260
| `-AllocSizeAttr 0x55fa8908f2f0 <col:14> Implicit 1 2
|-FunctionDecl 0x55fa8908f320 prev 0x55fa8908f108 <col:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdlib.h:675:14 calloc 'void *(unsigned long, unsigned long)' extern
| |-ParmVarDecl 0x55fa8908ef70 <col:22, col:29> col:29 __nmemb 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8908efe8 <col:38, col:45> col:45 __size 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8908f468 <<invalid sloc>> Inherited Implicit 260
| |-AllocSizeAttr 0x55fa8908f498 <col:14> Inherited Implicit 1 2
| |-NoThrowAttr 0x55fa8908f3d8 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55fa8908f430 <line:452:47> malloc
| | `-<<<NULL>>>
| `-AllocSizeAttr 0x55fa8908f4c8 </usr/include/stdlib.h:675:14> Implicit 1 2
|-FunctionDecl 0x55fa8908f6a8 <line:683:14> col:14 implicit realloc 'void *(void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8908f7b0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa8908f818 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa8908f750 <<invalid sloc>> Implicit 1071
| `-AllocSizeAttr 0x55fa8908f890 <col:14> Implicit 2
|-FunctionDecl 0x55fa8908f8e0 prev 0x55fa8908f6a8 <col:1, /usr/include/sys/cdefs.h:578:43> /usr/include/stdlib.h:683:14 realloc 'void *(void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8908f510 <col:23, col:29> col:29 __ptr 'void *'
| |-ParmVarDecl 0x55fa8908f588 <col:36, col:43> col:43 __size 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8908fa28 <<invalid sloc>> Inherited Implicit 1071
| |-AllocSizeAttr 0x55fa8908fa58 <col:14> Inherited Implicit 2
| |-NoThrowAttr 0x55fa8908f998 </usr/include/sys/cdefs.h:79:35>
| |-WarnUnusedResultAttr 0x55fa8908f9f0 <line:578:20> warn_unused_result ""
| `-AllocSizeAttr 0x55fa8908fa88 </usr/include/stdlib.h:683:14> Implicit 2
|-FunctionDecl 0x55fa8908fba0 <line:687:13> col:13 implicit free 'void (void *)' extern
| |-ParmVarDecl 0x55fa8908fca8 <<invalid sloc>> <invalid sloc> 'void *'
| `-BuiltinAttr 0x55fa8908fc48 <<invalid sloc>> Implicit 641
|-FunctionDecl 0x55fa8908fd18 prev 0x55fa8908fba0 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:687:13 free 'void (void *)' extern
| |-ParmVarDecl 0x55fa8908fad0 <col:19, col:25> col:25 __ptr 'void *'
| |-BuiltinAttr 0x55fa8908fe20 <<invalid sloc>> Inherited Implicit 641
| `-NoThrowAttr 0x55fa8908fdc8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89090098 </usr/include/stdlib.h:695:1, /usr/include/sys/cdefs.h:578:43> /usr/include/stdlib.h:695:14 reallocarray 'void *(void *, size_t, size_t)' extern
| |-ParmVarDecl 0x55fa8908fe68 <col:28, col:34> col:34 __ptr 'void *'
| |-ParmVarDecl 0x55fa8908fee0 <col:41, col:48> col:48 __nmemb 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8908ff58 <col:57, col:64> col:64 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89090158 </usr/include/sys/cdefs.h:79:35>
| `-WarnUnusedResultAttr 0x55fa890901b0 <line:578:20> warn_unused_result ""
|-FunctionDecl 0x55fa89090398 prev 0x55fa89090098 </usr/include/stdlib.h:701:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:701:14 reallocarray 'void *(void *, size_t, size_t)' extern
| |-ParmVarDecl 0x55fa89090200 <col:28, col:34> col:34 __ptr 'void *'
| |-ParmVarDecl 0x55fa89090278 <col:41, col:48> col:48 __nmemb 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890902f0 <col:57, col:64> col:64 __size 'size_t':'unsigned long'
| |-WarnUnusedResultAttr 0x55fa890904b0 </usr/include/sys/cdefs.h:578:20> Inherited warn_unused_result ""
| `-NoThrowAttr 0x55fa89090458 <line:79:35>
|-FunctionDecl 0x55fa89090590 </usr/include/alloca.h:32:14> col:14 implicit alloca 'void *(unsigned long)' extern
| |-ParmVarDecl 0x55fa89090698 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa89090638 <<invalid sloc>> Implicit 126
| `-NoThrowAttr 0x55fa89090708 <col:14> Implicit
|-FunctionDecl 0x55fa89090730 prev 0x55fa89090590 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/alloca.h:32:14 alloca 'void *(unsigned long)' extern
| |-ParmVarDecl 0x55fa890904f8 <col:22, col:29> col:29 __size 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa89090838 <<invalid sloc>> Inherited Implicit 126
| `-NoThrowAttr 0x55fa890907e0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89090920 </usr/include/stdlib.h:712:1, /usr/include/sys/cdefs.h:452:58> /usr/include/stdlib.h:712:14 valloc 'void *(size_t)' extern
| |-ParmVarDecl 0x55fa89090878 <col:22, col:29> col:29 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa890909d0 </usr/include/sys/cdefs.h:79:35>
| `-RestrictAttr 0x55fa89090a28 <line:452:47> malloc
|   `-<<<NULL>>>
|-FunctionDecl 0x55fa89090cf8 </usr/include/stdlib.h:718:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:718:12 posix_memalign 'int (void **, size_t, size_t)' extern
| |-ParmVarDecl 0x55fa89090aa8 <col:28, col:35> col:35 __memptr 'void **'
| |-ParmVarDecl 0x55fa89090b20 <col:45, col:52> col:52 __alignment 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89090b98 <col:65, col:72> col:72 __size 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89090db8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89090e10 <line:555:57, /usr/include/stdlib.h:719:27> 1
|-FunctionDecl 0x55fa89090fa0 <line:724:14> col:14 implicit aligned_alloc 'void *(unsigned long, unsigned long)' extern
| |-ParmVarDecl 0x55fa890910a8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-ParmVarDecl 0x55fa89091110 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa89091048 <<invalid sloc>> Implicit 124
| |-AllocAlignAttr 0x55fa89091188 <col:14> Implicit 1
| `-AllocSizeAttr 0x55fa890911b8 <col:14> Implicit 2
|-FunctionDecl 0x55fa890911e8 prev 0x55fa89090fa0 <col:1, /usr/include/sys/cdefs.h:470:41> /usr/include/stdlib.h:724:14 aligned_alloc 'void *(unsigned long, unsigned long)' extern
| |-ParmVarDecl 0x55fa89090e68 <col:29, col:36> col:36 __alignment 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89090ee0 <col:49, col:56> col:56 __size 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa89091360 <<invalid sloc>> Inherited Implicit 124
| |-AllocSizeAttr 0x55fa89091390 <col:14> Inherited Implicit 2
| |-NoThrowAttr 0x55fa890912a0 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55fa890912f8 <line:452:47> malloc
| | `-<<<NULL>>>
| |-AllocAlignAttr 0x55fa89091330 <line:470:19, /usr/include/stdlib.h:725:64> 1
| `-AllocSizeAttr 0x55fa890913c0 <line:724:14> Implicit 2
|-FunctionDecl 0x55fa890914f0 <line:730:13> col:13 implicit abort 'void (void) __attribute__((noreturn))' extern
| |-BuiltinAttr 0x55fa89091598 <<invalid sloc>> Implicit 93
| `-NoThrowAttr 0x55fa890915f8 <col:13> Implicit
|-FunctionDecl 0x55fa89091620 prev 0x55fa890914f0 <col:1, /usr/include/sys/cdefs.h:102:43> /usr/include/stdlib.h:730:13 abort 'void (void) __attribute__((noreturn))' extern
| |-BuiltinAttr 0x55fa89091748 <<invalid sloc>> Inherited Implicit 93
| |-NoThrowAttr 0x55fa890916c8 </usr/include/sys/cdefs.h:79:35>
| `-ColdAttr 0x55fa89091720 <line:102:34>
|-FunctionDecl 0x55fa89091a38 </usr/include/stdlib.h:734:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:734:12 atexit 'int (void (*)(void))' extern
| |-ParmVarDecl 0x55fa89091900 <col:20, col:40> col:27 __func 'void (*)(void)'
| |-NoThrowAttr 0x55fa89091ae8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89091b40 <line:555:57, /usr/include/stdlib.h:734:64> 1
|-FunctionDecl 0x55fa89091ce8 <line:742:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:742:12 at_quick_exit 'int (void (*)(void))' extern
| |-ParmVarDecl 0x55fa89091c30 <col:27, col:47> col:34 __func 'void (*)(void)'
| |-NoThrowAttr 0x55fa89091d98 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89091df0 <line:555:57, /usr/include/stdlib.h:742:71> 1
|-FunctionDecl 0x55fa89092218 <line:749:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:749:12 on_exit 'int (void (*)(int, void *), void *)' extern
| |-ParmVarDecl 0x55fa89092050 <col:21, col:62> col:28 __func 'void (*)(int, void *)'
| |-ParmVarDecl 0x55fa890920d0 <col:65, col:71> col:71 __arg 'void *'
| |-NoThrowAttr 0x55fa890922d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89092328 <line:555:57, /usr/include/stdlib.h:750:27> 1
|-FunctionDecl 0x55fa89092490 <line:756:13> col:13 implicit exit 'void (int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55fa89092598 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa89092538 <<invalid sloc>> Implicit 518
|-FunctionDecl 0x55fa89092608 prev 0x55fa89092490 <col:1, col:70> col:13 exit 'void (int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55fa89092380 <col:19, col:23> col:23 __status 'int'
| |-BuiltinAttr 0x55fa89092710 <<invalid sloc>> Inherited Implicit 518
| `-NoThrowAttr 0x55fa890926b8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa890927e8 </usr/include/stdlib.h:762:1, col:76> col:13 quick_exit 'void (int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55fa89092758 <col:25, col:29> col:29 __status 'int'
| `-NoThrowAttr 0x55fa89092898 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa890929b8 </usr/include/stdlib.h:768:13> col:13 implicit _Exit 'void (int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55fa89092ac0 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa89092a60 <<invalid sloc>> Implicit 519
|-FunctionDecl 0x55fa89092b30 prev 0x55fa890929b8 <col:1, col:71> col:13 _Exit 'void (int) __attribute__((noreturn))' extern
| |-ParmVarDecl 0x55fa89092928 <col:20, col:24> col:24 __status 'int'
| |-BuiltinAttr 0x55fa89092c38 <<invalid sloc>> Inherited Implicit 519
| `-NoThrowAttr 0x55fa89092be0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89092d78 </usr/include/stdlib.h:773:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:773:14 getenv 'char *(const char *)' extern
| |-ParmVarDecl 0x55fa89092c80 <col:22, col:34> col:34 __name 'const char *'
| |-NoThrowAttr 0x55fa89092e28 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89092e80 <line:555:57, /usr/include/stdlib.h:773:63> 1
|-FunctionDecl 0x55fa89092fd8 <line:786:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:786:12 putenv 'int (char *)' extern
| |-ParmVarDecl 0x55fa89092ee0 <col:20, col:26> col:26 __string 'char *'
| |-NoThrowAttr 0x55fa89093088 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890930e0 <line:555:57, /usr/include/stdlib.h:786:57> 1
|-FunctionDecl 0x55fa89093358 <line:792:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:792:12 setenv 'int (const char *, const char *, int)' extern
| |-ParmVarDecl 0x55fa89093140 <col:20, col:32> col:32 __name 'const char *'
| |-ParmVarDecl 0x55fa890931c0 <col:40, col:52> col:52 __value 'const char *'
| |-ParmVarDecl 0x55fa89093240 <col:61, col:65> col:65 __replace 'int'
| |-NoThrowAttr 0x55fa89093418 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89093470 <line:555:57, /usr/include/stdlib.h:793:27> 2
|-FunctionDecl 0x55fa89093588 <line:796:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:796:12 unsetenv 'int (const char *)' extern
| |-ParmVarDecl 0x55fa890934d0 <col:22, col:34> col:34 __name 'const char *'
| |-NoThrowAttr 0x55fa89093638 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89093690 <line:555:57, /usr/include/stdlib.h:796:63> 1
|-FunctionDecl 0x55fa89093778 <line:803:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:803:12 clearenv 'int (void)' extern
| `-NoThrowAttr 0x55fa89093820 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa89057600 </usr/include/stdlib.h:814:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:814:14 mktemp 'char *(char *)' extern
| |-ParmVarDecl 0x55fa89093890 <col:22, col:28> col:28 __template 'char *'
| |-NoThrowAttr 0x55fa890576b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89057708 <line:555:57, /usr/include/stdlib.h:814:61> 1
|-FunctionDecl 0x55fa89057818 <line:827:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:827:12 mkstemp 'int (char *)' extern
| |-ParmVarDecl 0x55fa89057760 <col:21, col:27> col:27 __template 'char *'
| `-NonNullAttr 0x55fa890578c8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdlib.h:827:52> 1
|-FunctionDecl 0x55fa89057ad8 <line:849:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:849:12 mkstemps 'int (char *, int)' extern
| |-ParmVarDecl 0x55fa89057950 <col:22, col:28> col:28 __template 'char *'
| |-ParmVarDecl 0x55fa890579d0 <col:40, col:44> col:44 __suffixlen 'int'
| `-NonNullAttr 0x55fa89057b90 </usr/include/sys/cdefs.h:555:57, /usr/include/stdlib.h:849:70> 1
|-FunctionDecl 0x55fa89057cd8 <line:870:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:870:14 mkdtemp 'char *(char *)' extern
| |-ParmVarDecl 0x55fa89057c20 <col:23, col:29> col:29 __template 'char *'
| |-NoThrowAttr 0x55fa89057d88 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89057de0 <line:555:57, /usr/include/stdlib.h:870:62> 1
|-FunctionDecl 0x55fa89057ed8 <line:923:1, col:41> col:12 system 'int (const char *)' extern
| `-ParmVarDecl 0x55fa89057e40 <col:20, col:32> col:32 __command 'const char *'
|-FunctionDecl 0x55fa89058148 <line:940:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:940:14 realpath 'char *(const char *restrict, char *restrict)' extern
| |-ParmVarDecl 0x55fa89057fa0 <col:24, col:47> col:47 __name 'const char *restrict'
| |-ParmVarDecl 0x55fa89058020 <line:941:10, col:27> col:27 __resolved 'char *restrict'
| `-NoThrowAttr 0x55fa89058200 </usr/include/sys/cdefs.h:79:35>
|-TypedefDecl 0x55fa89058478 </usr/include/stdlib.h:948:1, col:57> col:15 referenced __compar_fn_t 'int (*)(const void *, const void *)'
| `-PointerType 0x55fa89058400 'int (*)(const void *, const void *)'
|   `-ParenType 0x55fa890583a0 'int (const void *, const void *)' sugar
|     `-FunctionProtoType 0x55fa89058360 'int (const void *, const void *)' cdecl
|       |-BuiltinType 0x55fa88f84410 'int'
|       |-PointerType 0x55fa89017820 'const void *'
|       | `-QualType 0x55fa88f84371 'const void' const
|       |   `-BuiltinType 0x55fa88f84370 'void'
|       `-PointerType 0x55fa89017820 'const void *'
|         `-QualType 0x55fa88f84371 'const void' const
|           `-BuiltinType 0x55fa88f84370 'void'
|-FunctionDecl 0x55fa89095cd8 <line:960:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:960:14 bsearch 'void *(const void *, const void *, size_t, size_t, __compar_fn_t)' extern
| |-ParmVarDecl 0x55fa890584e8 <col:23, col:35> col:35 __key 'const void *'
| |-ParmVarDecl 0x55fa89095930 <col:42, col:54> col:54 __base 'const void *'
| |-ParmVarDecl 0x55fa890959a8 <line:961:9, col:16> col:16 __nmemb 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89095a20 <col:25, col:32> col:32 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89095b00 <col:40, col:54> col:54 __compar '__compar_fn_t':'int (*)(const void *, const void *)'
| `-NonNullAttr 0x55fa89095da8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdlib.h:962:25> 1 2 5
|-FunctionDecl 0x55fa89096130 <line:970:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:970:13 qsort 'void (void *, size_t, size_t, __compar_fn_t)' extern
| |-ParmVarDecl 0x55fa89095e38 <col:20, col:26> col:26 __base 'void *'
| |-ParmVarDecl 0x55fa89095eb0 <col:34, col:41> col:41 __nmemb 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89095f28 <col:50, col:57> col:57 __size 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa89095fa0 <line:971:6, col:20> col:20 __compar '__compar_fn_t':'int (*)(const void *, const void *)'
| `-NonNullAttr 0x55fa890961f8 </usr/include/sys/cdefs.h:555:57, /usr/include/stdlib.h:971:46> 1 4
|-FunctionDecl 0x55fa89096318 <line:980:12> col:12 implicit abs 'int (int)' extern
| |-ParmVarDecl 0x55fa89096420 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55fa890963c0 <<invalid sloc>> Implicit 95
| |-NoThrowAttr 0x55fa89096490 <col:12> Implicit
| `-ConstAttr 0x55fa890964b8 <col:12> Implicit
|-FunctionDecl 0x55fa890964e0 prev 0x55fa89096318 <col:1, col:60> col:12 abs 'int (int)' extern
| |-ParmVarDecl 0x55fa89096280 <col:17, col:21> col:21 __x 'int'
| |-BuiltinAttr 0x55fa89096610 <<invalid sloc>> Inherited Implicit 95
| |-NoThrowAttr 0x55fa89096590 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa890965e8 </usr/include/stdlib.h:980:50>
|-FunctionDecl 0x55fa89096728 <line:981:17> col:17 implicit labs 'long (long)' extern
| |-ParmVarDecl 0x55fa89096830 <<invalid sloc>> <invalid sloc> 'long'
| |-BuiltinAttr 0x55fa890967d0 <<invalid sloc>> Implicit 97
| |-NoThrowAttr 0x55fa890968a0 <col:17> Implicit
| `-ConstAttr 0x55fa890968c8 <col:17> Implicit
|-FunctionDecl 0x55fa89097950 prev 0x55fa89096728 <col:1, col:71> col:17 labs 'long (long)' extern
| |-ParmVarDecl 0x55fa89096658 <col:23, col:32> col:32 __x 'long'
| |-BuiltinAttr 0x55fa89097a80 <<invalid sloc>> Inherited Implicit 97
| |-NoThrowAttr 0x55fa89097a00 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa89097a58 </usr/include/stdlib.h:981:61>
|-FunctionDecl 0x55fa89097b98 <line:984:36> col:36 implicit llabs 'long long (long long)' extern
| |-ParmVarDecl 0x55fa89097ca0 <<invalid sloc>> <invalid sloc> 'long long'
| |-BuiltinAttr 0x55fa89097c40 <<invalid sloc>> Implicit 99
| |-NoThrowAttr 0x55fa89097d10 <col:36> Implicit
| `-ConstAttr 0x55fa89097d38 <col:36> Implicit
|-FunctionDecl 0x55fa89097d60 prev 0x55fa89097b98 <col:15, line:985:40> line:984:36 llabs 'long long (long long)' extern
| |-ParmVarDecl 0x55fa89097ac8 <col:43, col:57> col:57 __x 'long long'
| |-BuiltinAttr 0x55fa89097e90 <<invalid sloc>> Inherited Implicit 99
| |-NoThrowAttr 0x55fa89097e10 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa89097e68 </usr/include/stdlib.h:985:30>
|-FunctionDecl 0x55fa890980d0 <line:998:1, line:999:40> line:998:14 div 'div_t (int, int)' extern
| |-ParmVarDecl 0x55fa89097f38 <col:19, col:23> col:23 __numer 'int'
| |-ParmVarDecl 0x55fa89097fb8 <col:32, col:36> col:36 __denom 'int'
| |-NoThrowAttr 0x55fa89098188 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa890981e0 </usr/include/stdlib.h:999:30>
|-FunctionDecl 0x55fa89098420 <line:1000:1, line:1001:40> line:1000:15 ldiv 'ldiv_t (long, long)' extern
| |-ParmVarDecl 0x55fa89098288 <col:21, col:30> col:30 __numer 'long'
| |-ParmVarDecl 0x55fa89098308 <col:39, col:48> col:48 __denom 'long'
| |-NoThrowAttr 0x55fa890984d8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa89098530 </usr/include/stdlib.h:1001:30>
|-FunctionDecl 0x55fa89098770 <line:1004:15, line:1006:40> line:1004:30 lldiv 'lldiv_t (long long, long long)' extern
| |-ParmVarDecl 0x55fa890985d8 <col:37, col:51> col:51 __numer 'long long'
| |-ParmVarDecl 0x55fa89098658 <line:1005:9, col:23> col:23 __denom 'long long'
| |-NoThrowAttr 0x55fa89098828 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa89098880 </usr/include/stdlib.h:1006:30>
|-FunctionDecl 0x55fa89098bf8 <line:1018:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1018:14 ecvt 'char *(double, int, int *restrict, int *restrict)' extern
| |-ParmVarDecl 0x55fa890988c0 <col:20, col:27> col:27 __value 'double'
| |-ParmVarDecl 0x55fa89098960 <col:36, col:40> col:40 __ndigit 'int'
| |-ParmVarDecl 0x55fa890989e0 <col:50, col:66> col:66 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89098a60 <line:1019:6, col:22> col:22 __sign 'int *restrict'
| |-NoThrowAttr 0x55fa89098cc0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89098d18 <line:555:57, /usr/include/stdlib.h:1019:54> 3 4
|-FunctionDecl 0x55fa89098fe0 <line:1024:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1024:14 fcvt 'char *(double, int, int *restrict, int *restrict)' extern
| |-ParmVarDecl 0x55fa89098d70 <col:20, col:27> col:27 __value 'double'
| |-ParmVarDecl 0x55fa89098df0 <col:36, col:40> col:40 __ndigit 'int'
| |-ParmVarDecl 0x55fa89098e70 <col:50, col:66> col:66 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89098ef0 <line:1025:6, col:22> col:22 __sign 'int *restrict'
| |-NoThrowAttr 0x55fa890990a8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89099100 <line:555:57, /usr/include/stdlib.h:1025:54> 3 4
|-FunctionDecl 0x55fa89099378 <line:1030:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1030:14 gcvt 'char *(double, int, char *)' extern
| |-ParmVarDecl 0x55fa89099160 <col:20, col:27> col:27 __value 'double'
| |-ParmVarDecl 0x55fa890991e0 <col:36, col:40> col:40 __ndigit 'int'
| |-ParmVarDecl 0x55fa89099260 <col:50, col:56> col:56 __buf 'char *'
| |-NoThrowAttr 0x55fa89099438 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89099490 <line:555:57, /usr/include/stdlib.h:1031:27> 3
|-FunctionDecl 0x55fa89099808 <line:1036:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1036:14 qecvt 'char *(long double, int, int *restrict, int *restrict)' extern
| |-ParmVarDecl 0x55fa890994f0 <col:21, col:33> col:33 __value 'long double'
| |-ParmVarDecl 0x55fa89099570 <col:42, col:46> col:46 __ndigit 'int'
| |-ParmVarDecl 0x55fa890995f0 <line:1037:7, col:23> col:23 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89099670 <col:32, col:48> col:48 __sign 'int *restrict'
| |-NoThrowAttr 0x55fa890998d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89099928 <line:555:57, /usr/include/stdlib.h:1038:30> 3 4
|-FunctionDecl 0x55fa89019770 <line:1039:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1039:14 qfcvt 'char *(long double, int, int *restrict, int *restrict)' extern
| |-ParmVarDecl 0x55fa89019500 <col:21, col:33> col:33 __value 'long double'
| |-ParmVarDecl 0x55fa89019580 <col:42, col:46> col:46 __ndigit 'int'
| |-ParmVarDecl 0x55fa89019600 <line:1040:7, col:23> col:23 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89019680 <col:32, col:48> col:48 __sign 'int *restrict'
| |-NoThrowAttr 0x55fa89019838 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89019890 <line:555:57, /usr/include/stdlib.h:1041:30> 3 4
|-FunctionDecl 0x55fa89019b08 <line:1042:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1042:14 qgcvt 'char *(long double, int, char *)' extern
| |-ParmVarDecl 0x55fa890198f0 <col:21, col:33> col:33 __value 'long double'
| |-ParmVarDecl 0x55fa89019970 <col:42, col:46> col:46 __ndigit 'int'
| |-ParmVarDecl 0x55fa890199f0 <col:56, col:62> col:62 __buf 'char *'
| |-NoThrowAttr 0x55fa89019bc8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89019c20 <line:555:57, /usr/include/stdlib.h:1043:27> 3
|-FunctionDecl 0x55fa8901a0d8 <line:1048:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1048:12 ecvt_r 'int (double, int, int *restrict, int *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa89019c80 <col:20, col:27> col:27 __value 'double'
| |-ParmVarDecl 0x55fa89019d00 <col:36, col:40> col:40 __ndigit 'int'
| |-ParmVarDecl 0x55fa89019d80 <col:50, col:66> col:66 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89019e00 <line:1049:6, col:22> col:22 __sign 'int *restrict'
| |-ParmVarDecl 0x55fa89019e80 <col:30, col:47> col:47 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa89019ef8 <line:1050:6, col:13> col:13 __len 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8901a1b0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8901a208 <line:555:57, /usr/include/stdlib.h:1050:47> 3 4 5
|-FunctionDecl 0x55fa89043c70 <line:1051:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1051:12 fcvt_r 'int (double, int, int *restrict, int *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8901a268 <col:20, col:27> col:27 __value 'double'
| |-ParmVarDecl 0x55fa8901a2e8 <col:36, col:40> col:40 __ndigit 'int'
| |-ParmVarDecl 0x55fa8901a368 <col:50, col:66> col:66 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa8901a3e8 <line:1052:6, col:22> col:22 __sign 'int *restrict'
| |-ParmVarDecl 0x55fa8901a468 <col:30, col:47> col:47 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa89043b50 <line:1053:6, col:13> col:13 __len 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89043d48 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89043da0 <line:555:57, /usr/include/stdlib.h:1053:47> 3 4 5
|-FunctionDecl 0x55fa89044268 <line:1055:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1055:12 qecvt_r 'int (long double, int, int *restrict, int *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa89043e08 <col:21, col:33> col:33 __value 'long double'
| |-ParmVarDecl 0x55fa89043e88 <col:42, col:46> col:46 __ndigit 'int'
| |-ParmVarDecl 0x55fa89043f08 <line:1056:7, col:23> col:23 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89043f88 <col:32, col:48> col:48 __sign 'int *restrict'
| |-ParmVarDecl 0x55fa89044008 <line:1057:7, col:24> col:24 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa89044080 <col:31, col:38> col:38 __len 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89044340 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa89044398 <line:555:57, /usr/include/stdlib.h:1058:33> 3 4 5
|-FunctionDecl 0x55fa89044790 <line:1059:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1059:12 qfcvt_r 'int (long double, int, int *restrict, int *restrict, char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa890443f8 <col:21, col:33> col:33 __value 'long double'
| |-ParmVarDecl 0x55fa89044478 <col:42, col:46> col:46 __ndigit 'int'
| |-ParmVarDecl 0x55fa890444f8 <line:1060:7, col:23> col:23 __decpt 'int *restrict'
| |-ParmVarDecl 0x55fa89044578 <col:32, col:48> col:48 __sign 'int *restrict'
| |-ParmVarDecl 0x55fa890445f8 <line:1061:7, col:24> col:24 __buf 'char *restrict'
| |-ParmVarDecl 0x55fa89044670 <col:31, col:38> col:38 __len 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa89044868 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890448c0 <line:555:57, /usr/include/stdlib.h:1062:33> 3 4 5
|-FunctionDecl 0x55fa8909ed90 <line:1068:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:1068:12 mblen 'int (const char *, size_t)' extern
| |-ParmVarDecl 0x55fa89044928 <col:19, col:31> col:31 __s 'const char *'
| |-ParmVarDecl 0x55fa890449a0 <col:36, col:43> col:43 __n 'size_t':'unsigned long'
| `-NoThrowAttr 0x55fa8909ee48 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8909f188 </usr/include/stdlib.h:1071:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:1071:12 mbtowc 'int (wchar_t *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8909ef48 <col:20, col:40> col:40 __pwc 'wchar_t *restrict'
| |-ParmVarDecl 0x55fa8909efc8 <line:1072:6, col:29> col:29 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa8909f040 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| `-NoThrowAttr 0x55fa8909f248 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8909f418 </usr/include/stdlib.h:1075:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:1075:12 wctomb 'int (char *, wchar_t)' extern
| |-ParmVarDecl 0x55fa8909f2b8 <col:20, col:26> col:26 __s 'char *'
| |-ParmVarDecl 0x55fa8909f330 <col:31, col:39> col:39 __wchar 'wchar_t':'int'
| `-NoThrowAttr 0x55fa8909f4d0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8909f770 </usr/include/stdlib.h:1079:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:1079:15 mbstowcs 'size_t (wchar_t *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8909f540 <col:25, col:46> col:46 __pwcs 'wchar_t *restrict'
| |-ParmVarDecl 0x55fa8909f5c0 <line:1080:4, col:27> col:27 __s 'const char *restrict'
| |-ParmVarDecl 0x55fa8909f638 <col:32, col:39> col:39 __n 'size_t':'unsigned long'
| `-NoThrowAttr 0x55fa8909f830 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8909fb10 </usr/include/stdlib.h:1083:1, /usr/include/sys/cdefs.h:79:54> /usr/include/stdlib.h:1083:15 wcstombs 'size_t (char *restrict, const wchar_t *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8909f8a0 <col:25, col:42> col:42 __s 'char *restrict'
| |-ParmVarDecl 0x55fa8909f958 <line:1084:4, col:30> col:30 __pwcs 'const wchar_t *restrict'
| |-ParmVarDecl 0x55fa8909f9d0 <col:38, col:45> col:45 __n 'size_t':'unsigned long'
| `-NoThrowAttr 0x55fa8909fbd0 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8909fda0 </usr/include/stdlib.h:1094:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1094:12 rpmatch 'int (const char *)' extern
| |-ParmVarDecl 0x55fa8909fc40 <col:21, col:33> col:33 __response 'const char *'
| |-NoThrowAttr 0x55fa8909fe50 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8909fea8 <line:555:57, /usr/include/stdlib.h:1094:66> 1
|-FunctionDecl 0x55fa890a01d8 <line:1105:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1105:12 getsubopt 'int (char **restrict, char *const *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55fa8909ff00 <col:23, col:41> col:41 __optionp 'char **restrict'
| |-ParmVarDecl 0x55fa8909ffb8 <line:1106:9, col:33> col:33 __tokens 'char *const *restrict'
| |-ParmVarDecl 0x55fa890a0038 <line:1107:9, col:27> col:27 __valuep 'char **restrict'
| |-NoThrowAttr 0x55fa890a0298 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a02f0 <line:555:57, /usr/include/stdlib.h:1108:33> 1 2 3
|-FunctionDecl 0x55fa890a0598 <line:1151:1, /usr/include/sys/cdefs.h:555:76> /usr/include/stdlib.h:1151:12 getloadavg 'int (double *, int)' extern
| |-ParmVarDecl 0x55fa890a03d0 <col:24, col:41> col:31 __loadavg 'double *'
| |-ParmVarDecl 0x55fa890a0450 <col:44, col:48> col:48 __nelem 'int'
| |-NoThrowAttr 0x55fa890a0650 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a06a8 <line:555:57, /usr/include/stdlib.h:1152:27> 1
|-FunctionDecl 0x55fa890a0978 </usr/include/string.h:43:14> col:14 implicit memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a0a80 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890a0ae8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a0b50 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a0a20 <<invalid sloc>> Implicit 946
| `-NoThrowAttr 0x55fa890a0bd0 <col:14> Implicit
|-FunctionDecl 0x55fa890a0bf8 prev 0x55fa890a0978 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:43:14 memcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a0700 <col:22, col:39> col:39 __dest 'void *restrict'
| |-ParmVarDecl 0x55fa890a0780 <col:47, col:70> col:70 __src 'const void *restrict'
| |-ParmVarDecl 0x55fa890a07f8 <line:44:8, col:15> col:15 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a0d58 <<invalid sloc>> Inherited Implicit 946
| |-NoThrowAttr 0x55fa890a0cb8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a0d10 <line:555:57, /usr/include/string.h:44:44> 1 2
|-FunctionDecl 0x55fa890a3008 <line:47:14> col:14 implicit memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a3110 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890a3178 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a31e0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a30b0 <<invalid sloc>> Implicit 948
| `-NoThrowAttr 0x55fa890a3260 <col:14> Implicit
|-FunctionDecl 0x55fa890a3288 prev 0x55fa890a3008 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:47:14 memmove 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a2de0 <col:23, col:29> col:29 __dest 'void *'
| |-ParmVarDecl 0x55fa890a2e60 <col:37, col:49> col:49 __src 'const void *'
| |-ParmVarDecl 0x55fa890a2ed8 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a33e8 <<invalid sloc>> Inherited Implicit 948
| |-NoThrowAttr 0x55fa890a3348 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a33a0 <line:555:57, /usr/include/string.h:48:30> 1 2
|-FunctionDecl 0x55fa890a3738 <line:54:14> col:14 implicit memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a3840 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890a38a8 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a3910 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55fa890a3978 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890a37e0 <<invalid sloc>> Implicit 951
|-FunctionDecl 0x55fa890a3a00 prev 0x55fa890a3738 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:54:14 memccpy 'void *(void *, const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a3430 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55fa890a34b0 <col:48, col:71> col:71 __src 'const void *restrict'
| |-ParmVarDecl 0x55fa890a3530 <line:55:9, col:13> col:13 __c 'int'
| |-ParmVarDecl 0x55fa890a35a8 <col:18, col:25> col:25 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a3b68 <<invalid sloc>> Inherited Implicit 951
| |-NoThrowAttr 0x55fa890a3ac8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a3b20 <line:555:57, /usr/include/string.h:56:29> 1 2
|-FunctionDecl 0x55fa890a3e30 <line:61:14> col:14 implicit memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a3f38 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890a3fa0 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55fa890a4008 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a3ed8 <<invalid sloc>> Implicit 950
| `-NoThrowAttr 0x55fa890a4088 <col:14> Implicit
|-FunctionDecl 0x55fa890a40b0 prev 0x55fa890a3e30 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:61:14 memset 'void *(void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a3bb0 <col:22, col:28> col:28 __s 'void *'
| |-ParmVarDecl 0x55fa890a3c30 <col:33, col:37> col:37 __c 'int'
| |-ParmVarDecl 0x55fa890a3ca8 <col:42, col:49> col:49 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a4208 <<invalid sloc>> Inherited Implicit 950
| |-NoThrowAttr 0x55fa890a4170 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a41c8 <line:555:57, /usr/include/string.h:61:75> 1
|-FunctionDecl 0x55fa890a44c8 <line:64:12> col:12 implicit memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a45d0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a4638 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a46a0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890a4570 <<invalid sloc>> Implicit 944
|-FunctionDecl 0x55fa890a4720 prev 0x55fa890a44c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:64:12 memcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a4250 <col:20, col:32> col:32 __s1 'const void *'
| |-ParmVarDecl 0x55fa890a42d0 <col:38, col:50> col:50 __s2 'const void *'
| |-ParmVarDecl 0x55fa890a4348 <col:56, col:63> col:63 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a48a8 <<invalid sloc>> Inherited Implicit 944
| |-NoThrowAttr 0x55fa890a47e0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a4838 <line:479:45>
| `-NonNullAttr 0x55fa890a4860 <line:555:57, /usr/include/string.h:65:49> 1 2
|-FunctionDecl 0x55fa890a4ad0 <line:80:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:80:12 __memcmpeq 'int (const void *, const void *, size_t)' extern
| |-ParmVarDecl 0x55fa890a48f0 <col:24, col:36> col:36 __s1 'const void *'
| |-ParmVarDecl 0x55fa890a4970 <col:42, col:54> col:54 __s2 'const void *'
| |-ParmVarDecl 0x55fa890a49e8 <col:60, col:67> col:67 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa890a4b90 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a4be8 <line:479:45>
| `-NonNullAttr 0x55fa890a4c10 <line:555:57, /usr/include/string.h:81:49> 1 2
|-FunctionDecl 0x55fa890a4ed8 <line:107:14> col:14 implicit memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a4fe0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890a5048 <<invalid sloc>> <invalid sloc> 'int'
| |-ParmVarDecl 0x55fa890a50b0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a4f80 <<invalid sloc>> Implicit 943
| `-NoThrowAttr 0x55fa890a5130 <col:14> Implicit
|-FunctionDecl 0x55fa890a5158 prev 0x55fa890a4ed8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:107:14 memchr 'void *(const void *, int, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a4c70 <col:22, col:34> col:34 __s 'const void *'
| |-ParmVarDecl 0x55fa890a4cf0 <col:39, col:43> col:43 __c 'int'
| |-ParmVarDecl 0x55fa890a4d68 <col:48, col:55> col:55 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a52d8 <<invalid sloc>> Inherited Implicit 943
| |-NoThrowAttr 0x55fa890a5218 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a5270 <line:479:45>
| `-NonNullAttr 0x55fa890a5298 <line:555:57, /usr/include/string.h:108:47> 1
|-FunctionDecl 0x55fa890a5508 <line:141:14> col:14 implicit strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a5610 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890a5678 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890a55b0 <<invalid sloc>> Implicit 1238
| `-NoThrowAttr 0x55fa890a56f0 <col:14> Implicit
|-FunctionDecl 0x55fa890a5718 prev 0x55fa890a5508 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:141:14 strcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a5320 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa890a53a0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55fa890a5868 <<invalid sloc>> Inherited Implicit 1238
| |-NoThrowAttr 0x55fa890a57d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a5828 <line:555:57, /usr/include/string.h:142:30> 1 2
|-FunctionDecl 0x55fa890a5b28 <line:144:14> col:14 implicit strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a5c30 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890a5c98 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a5d00 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a5bd0 <<invalid sloc>> Implicit 1249
| `-NoThrowAttr 0x55fa890a5d80 <col:14> Implicit
|-FunctionDecl 0x55fa890a5e10 prev 0x55fa890a5b28 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:144:14 strncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a58b0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa890a5930 <line:145:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa890a59a8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a5f68 <<invalid sloc>> Inherited Implicit 1249
| |-NoThrowAttr 0x55fa890a5ed0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a5f28 <line:555:57, /usr/include/string.h:146:30> 1 2
|-FunctionDecl 0x55fa890a6110 <line:149:14> col:14 implicit strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a6218 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890a6280 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890a61b8 <<invalid sloc>> Implicit 1232
| `-NoThrowAttr 0x55fa890a62f8 <col:14> Implicit
|-FunctionDecl 0x55fa890a6320 prev 0x55fa890a6110 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:149:14 strcat 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a5fb0 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa890a6030 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55fa890a6478 <<invalid sloc>> Inherited Implicit 1232
| |-NoThrowAttr 0x55fa890a63d8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a6430 <line:555:57, /usr/include/string.h:150:30> 1 2
|-FunctionDecl 0x55fa890a66a0 <line:152:14> col:14 implicit strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a67a8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890a6810 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a6878 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a6748 <<invalid sloc>> Implicit 1245
| `-NoThrowAttr 0x55fa890a68f8 <col:14> Implicit
|-FunctionDecl 0x55fa890a6920 prev 0x55fa890a66a0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:152:14 strncat 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a64c0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa890a6540 <col:48, col:71> col:71 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa890a65b8 <line:153:9, col:16> col:16 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a6a78 <<invalid sloc>> Inherited Implicit 1245
| |-NoThrowAttr 0x55fa890a69e0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a6a38 <line:555:57, /usr/include/string.h:153:45> 1 2
|-FunctionDecl 0x55fa890a6c20 <line:156:12> col:12 implicit used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a6d28 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a6d90 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890a6cc8 <<invalid sloc>> Implicit 1236
| `-NoThrowAttr 0x55fa890a6e20 <col:12> Implicit
|-FunctionDecl 0x55fa890a6e48 prev 0x55fa890a6c20 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:156:12 used strcmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a6ac0 <col:20, col:32> col:32 __s1 'const char *'
| |-ParmVarDecl 0x55fa890a6b40 <col:38, col:50> col:50 __s2 'const char *'
| |-BuiltinAttr 0x55fa890a6fc8 <<invalid sloc>> Inherited Implicit 1236
| |-NoThrowAttr 0x55fa890a6f00 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a6f58 <line:479:45>
| `-NonNullAttr 0x55fa890a6f80 <line:555:57, /usr/include/string.h:157:49> 1 2
|-FunctionDecl 0x55fa890a7288 <line:159:12> col:12 implicit strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a7390 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a73f8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a7460 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890a7330 <<invalid sloc>> Implicit 1247
| `-NoThrowAttr 0x55fa890a74e0 <col:12> Implicit
|-FunctionDecl 0x55fa890a7508 prev 0x55fa890a7288 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:159:12 strncmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a7010 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55fa890a7090 <col:39, col:51> col:51 __s2 'const char *'
| |-ParmVarDecl 0x55fa890a7108 <col:57, col:64> col:64 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a7688 <<invalid sloc>> Inherited Implicit 1247
| |-NoThrowAttr 0x55fa890a75c8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a7620 <line:479:45>
| `-NonNullAttr 0x55fa890a7648 <line:555:57, /usr/include/string.h:160:49> 1 2
|-FunctionDecl 0x55fa890a7830 <line:163:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:163:12 strcoll 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890a76d0 <col:21, col:33> col:33 __s1 'const char *'
| |-ParmVarDecl 0x55fa890a7750 <col:39, col:51> col:51 __s2 'const char *'
| |-NoThrowAttr 0x55fa890a78e8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a7940 <line:479:45>
| `-NonNullAttr 0x55fa890a7968 <line:555:57, /usr/include/string.h:164:49> 1 2
|-FunctionDecl 0x55fa890a7c10 <line:166:15> col:15 implicit strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a7d18 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890a7d80 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890a7e30 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890a7cb8 <<invalid sloc>> Implicit 1279
|-FunctionDecl 0x55fa890a7eb0 prev 0x55fa890a7c10 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:166:15 strxfrm 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890a79c0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa890a7a40 <line:167:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa890a7ab8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890a8008 <<invalid sloc>> Inherited Implicit 1279
| |-NoThrowAttr 0x55fa890a7f70 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890a7fc8 <line:555:57, /usr/include/string.h:168:26> 2
|-RecordDecl 0x55fa890a8038 </usr/include/bits/types/__locale_t.h:27:1, line:39:1> line:27:8 struct __locale_struct definition
| |-RecordDecl 0x55fa890a80e0 parent 0x55fa88f84308 <line:30:3, col:10> col:10 struct __locale_data
| |-FieldDecl 0x55fa890a8308 <col:3, col:37> col:25 __locales 'struct __locale_data *[13]'
| |-FieldDecl 0x55fa890a83a8 <line:33:3, col:29> col:29 __ctype_b 'const unsigned short *'
| |-FieldDecl 0x55fa890a8410 <line:34:3, col:14> col:14 __ctype_tolower 'const int *'
| |-FieldDecl 0x55fa890a8478 <line:35:3, col:14> col:14 __ctype_toupper 'const int *'
| `-FieldDecl 0x55fa890a8568 <line:38:3, col:25> col:15 __names 'const char *[13]'
|-TypedefDecl 0x55fa890a8678 <line:41:1, col:33> col:33 referenced __locale_t 'struct __locale_struct *'
| `-PointerType 0x55fa890a8620 'struct __locale_struct *'
|   `-ElaboratedType 0x55fa890a85c0 'struct __locale_struct' sugar
|     `-RecordType 0x55fa890a80c0 'struct __locale_struct'
|       `-Record 0x55fa890a8038 '__locale_struct'
|-TypedefDecl 0x55fa890a8740 </usr/include/bits/types/locale_t.h:24:1, col:20> col:20 referenced locale_t '__locale_t':'struct __locale_struct *'
| `-ElaboratedType 0x55fa890a8700 '__locale_t' sugar
|   `-TypedefType 0x55fa890a86d0 '__locale_t' sugar
|     |-Typedef 0x55fa890a8678 '__locale_t'
|     `-PointerType 0x55fa890a8620 'struct __locale_struct *'
|       `-ElaboratedType 0x55fa890a85c0 'struct __locale_struct' sugar
|         `-RecordType 0x55fa890a80c0 'struct __locale_struct'
|           `-Record 0x55fa890a8038 '__locale_struct'
|-FunctionDecl 0x55fa890a8ab8 </usr/include/string.h:175:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:175:12 strcoll_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55fa890a87b0 <col:23, col:35> col:35 __s1 'const char *'
| |-ParmVarDecl 0x55fa890a8830 <col:41, col:53> col:53 __s2 'const char *'
| |-ParmVarDecl 0x55fa890a8910 <col:59, col:68> col:68 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55fa890a8b78 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890a8bd0 <line:479:45>
| `-NonNullAttr 0x55fa890a8bf8 <line:555:57, /usr/include/string.h:176:52> 1 2 3
|-FunctionDecl 0x55fa890aa690 <line:179:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:179:15 strxfrm_l 'size_t (char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55fa890a8c58 <col:26, col:32> col:32 __dest 'char *'
| |-ParmVarDecl 0x55fa890a8cd8 <col:40, col:52> col:52 __src 'const char *'
| |-ParmVarDecl 0x55fa890a8d50 <col:59, col:66> col:66 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890a8dc8 <line:180:5, col:14> col:14 __l 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55fa890aa758 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890aa7b0 <line:555:57, /usr/include/string.h:180:43> 2 4
|-FunctionDecl 0x55fa890aa8c8 <line:187:14> col:14 implicit strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55fa890aa9d0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890aa970 <<invalid sloc>> Implicit 1240
| `-NoThrowAttr 0x55fa890aaa40 <col:14> Implicit
|-FunctionDecl 0x55fa890aaa68 prev 0x55fa890aa8c8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:187:14 strdup 'char *(const char *)' extern
| |-ParmVarDecl 0x55fa890aa810 <col:22, col:34> col:34 __s 'const char *'
| |-BuiltinAttr 0x55fa890aabe8 <<invalid sloc>> Inherited Implicit 1240
| |-NoThrowAttr 0x55fa890aab18 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55fa890aab70 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55fa890aaba8 <line:555:57, /usr/include/string.h:188:48> 1
|-FunctionDecl 0x55fa890aade8 <line:195:14> col:14 implicit strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890aaef0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890aaf58 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890aae90 <<invalid sloc>> Implicit 1272
| `-NoThrowAttr 0x55fa890aafd0 <col:14> Implicit
|-FunctionDecl 0x55fa890aaff8 prev 0x55fa890aade8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:195:14 strndup 'char *(const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890aac30 <col:23, col:35> col:35 __string 'const char *'
| |-ParmVarDecl 0x55fa890aaca8 <col:45, col:52> col:52 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890ab188 <<invalid sloc>> Inherited Implicit 1272
| |-NoThrowAttr 0x55fa890ab0b0 </usr/include/sys/cdefs.h:79:35>
| |-RestrictAttr 0x55fa890ab108 <line:452:47> malloc
| | `-<<<NULL>>>
| `-NonNullAttr 0x55fa890ab140 <line:555:57, /usr/include/string.h:196:48> 1
|-FunctionDecl 0x55fa890ab358 <line:246:14> col:14 implicit strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890ab460 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890ab4c8 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55fa890ab400 <<invalid sloc>> Implicit 1234
| `-NoThrowAttr 0x55fa890ab540 <col:14> Implicit
|-FunctionDecl 0x55fa890ab580 prev 0x55fa890ab358 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:246:14 strchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890ab1d0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55fa890ab250 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55fa890ab6f8 <<invalid sloc>> Inherited Implicit 1234
| |-NoThrowAttr 0x55fa890ab638 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890ab690 <line:479:45>
| `-NonNullAttr 0x55fa890ab6b8 <line:555:57, /usr/include/string.h:247:46> 1
|-FunctionDecl 0x55fa890ab880 <line:273:14> col:14 implicit strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890ab988 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890ab9f0 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55fa890ab928 <<invalid sloc>> Implicit 1278
| `-NoThrowAttr 0x55fa890aba68 <col:14> Implicit
|-FunctionDecl 0x55fa890aba90 prev 0x55fa890ab880 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:273:14 strrchr 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890ab740 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55fa890ab7c0 <col:40, col:44> col:44 __c 'int'
| |-BuiltinAttr 0x55fa890abc08 <<invalid sloc>> Inherited Implicit 1278
| |-NoThrowAttr 0x55fa890abb48 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890abba0 <line:479:45>
| `-NonNullAttr 0x55fa890abbc8 <line:555:57, /usr/include/string.h:274:46> 1
|-FunctionDecl 0x55fa890abd90 <line:286:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:286:14 strchrnul 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890abc50 <col:25, col:37> col:37 __s 'const char *'
| |-ParmVarDecl 0x55fa890abcd0 <col:42, col:46> col:46 __c 'int'
| |-NoThrowAttr 0x55fa890abe48 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890abea0 <line:479:45>
| `-NonNullAttr 0x55fa890abec8 <line:555:57, /usr/include/string.h:287:46> 1
|-FunctionDecl 0x55fa890ac100 <line:293:15> col:15 implicit strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ac208 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890ac270 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55fa890ac1a8 <<invalid sloc>> Implicit 1262
|-FunctionDecl 0x55fa890ac2e8 prev 0x55fa890ac100 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:293:15 strcspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890abf20 <col:24, col:36> col:36 __s 'const char *'
| |-ParmVarDecl 0x55fa890abfa0 <col:41, col:53> col:53 __reject 'const char *'
| |-BuiltinAttr 0x55fa890ac468 <<invalid sloc>> Inherited Implicit 1262
| |-NoThrowAttr 0x55fa890ac3a0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890ac3f8 <line:479:45>
| `-NonNullAttr 0x55fa890ac420 <line:555:57, /usr/include/string.h:294:49> 1 2
|-FunctionDecl 0x55fa890ac668 <line:297:15> col:15 implicit strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ac770 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890ac7d8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890ac710 <<invalid sloc>> Implicit 1251
| `-NoThrowAttr 0x55fa890ac850 <col:15> Implicit
|-FunctionDecl 0x55fa890ac878 prev 0x55fa890ac668 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:297:15 strspn 'unsigned long (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ac4b0 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55fa890ac590 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55fa890ac9f8 <<invalid sloc>> Inherited Implicit 1251
| |-NoThrowAttr 0x55fa890ac930 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890ac988 <line:479:45>
| `-NonNullAttr 0x55fa890ac9b0 <line:555:57, /usr/include/string.h:298:49> 1 2
|-FunctionDecl 0x55fa890acba0 <line:323:14> col:14 implicit strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890acca8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890acd10 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890acc48 <<invalid sloc>> Implicit 1276
| `-NoThrowAttr 0x55fa890acd88 <col:14> Implicit
|-FunctionDecl 0x55fa890acdb0 prev 0x55fa890acba0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:323:14 strpbrk 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890aca40 <col:23, col:35> col:35 __s 'const char *'
| |-ParmVarDecl 0x55fa890acac0 <col:40, col:52> col:52 __accept 'const char *'
| |-BuiltinAttr 0x55fa890acf28 <<invalid sloc>> Inherited Implicit 1276
| |-NoThrowAttr 0x55fa890ace68 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890acec0 <line:479:45>
| `-NonNullAttr 0x55fa890acee8 <line:555:57, /usr/include/string.h:324:49> 1 2
|-FunctionDecl 0x55fa890ad0d0 <line:350:14> col:14 implicit strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ad1d8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890ad240 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890ad178 <<invalid sloc>> Implicit 1253
| `-NoThrowAttr 0x55fa890ad2b8 <col:14> Implicit
|-FunctionDecl 0x55fa890ad2e0 prev 0x55fa890ad0d0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:350:14 strstr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890acf70 <col:22, col:34> col:34 __haystack 'const char *'
| |-ParmVarDecl 0x55fa890acff0 <col:46, col:58> col:58 __needle 'const char *'
| |-BuiltinAttr 0x55fa890ad458 <<invalid sloc>> Inherited Implicit 1253
| |-NoThrowAttr 0x55fa890ad398 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890ad3f0 <line:479:45>
| `-NonNullAttr 0x55fa890ad418 <line:555:57, /usr/include/string.h:351:49> 1 2
|-FunctionDecl 0x55fa890ad5f8 <line:356:14> col:14 implicit strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ad700 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa890ad768 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55fa890ad6a0 <<invalid sloc>> Implicit 1261
|-FunctionDecl 0x55fa890ad7e0 prev 0x55fa890ad5f8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:356:14 strtok 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ad4a0 <col:22, col:39> col:39 __s 'char *restrict'
| |-ParmVarDecl 0x55fa890ad520 <col:44, col:67> col:67 __delim 'const char *restrict'
| |-BuiltinAttr 0x55fa890ad938 <<invalid sloc>> Inherited Implicit 1261
| |-NoThrowAttr 0x55fa890ad898 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890ad8f0 <line:555:57, /usr/include/string.h:357:27> 2
|-FunctionDecl 0x55fa890adc08 <line:361:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:361:14 __strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55fa890ad980 <col:26, col:43> col:43 __s 'char *restrict'
| |-ParmVarDecl 0x55fa890ada00 <line:362:5, col:28> col:28 __delim 'const char *restrict'
| |-ParmVarDecl 0x55fa890ada80 <line:363:5, col:23> col:23 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55fa890adcc8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890add20 <line:555:57, /usr/include/string.h:364:30> 2 3
|-FunctionDecl 0x55fa890adf68 <line:366:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:366:14 strtok_r 'char *(char *restrict, const char *restrict, char **restrict)' extern
| |-ParmVarDecl 0x55fa890add80 <col:24, col:41> col:41 __s 'char *restrict'
| |-ParmVarDecl 0x55fa890ade00 <col:46, col:69> col:69 __delim 'const char *restrict'
| |-ParmVarDecl 0x55fa890ade80 <line:367:10, col:28> col:28 __save_ptr 'char **restrict'
| |-NoThrowAttr 0x55fa890ae028 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890ae080 <line:555:57, /usr/include/string.h:368:30> 2 3
|-FunctionDecl 0x55fa890ae240 <line:380:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:380:14 strcasestr 'char *(const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890ae0e0 <col:26, col:38> col:38 __haystack 'const char *'
| |-ParmVarDecl 0x55fa890ae160 <col:50, col:62> col:62 __needle 'const char *'
| |-NoThrowAttr 0x55fa890ae2f8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890ae350 <line:479:45>
| `-NonNullAttr 0x55fa890ae378 <line:555:57, /usr/include/string.h:381:49> 1 2
|-FunctionDecl 0x55fa890af758 <line:389:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:389:14 memmem 'void *(const void *, size_t, const void *, size_t)' extern
| |-ParmVarDecl 0x55fa890ae3d0 <col:22, col:34> col:34 __haystack 'const void *'
| |-ParmVarDecl 0x55fa890ae448 <col:46, col:53> col:53 __haystacklen 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa890ae4c8 <line:390:8, col:20> col:20 __needle 'const void *'
| |-ParmVarDecl 0x55fa890af5c0 <col:30, col:37> col:37 __needlelen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa890af820 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890af878 <line:479:45>
| `-NonNullAttr 0x55fa890af8a0 <line:555:57, /usr/include/string.h:391:49> 1 3
|-FunctionDecl 0x55fa890afae0 <line:397:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:397:14 __mempcpy 'void *(void *restrict, const void *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa890af900 <col:25, col:42> col:42 __dest 'void *restrict'
| |-ParmVarDecl 0x55fa890af980 <line:398:4, col:27> col:27 __src 'const void *restrict'
| |-ParmVarDecl 0x55fa890af9f8 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa890afba0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890afbf8 <line:555:57, /usr/include/string.h:399:30> 1 2
|-FunctionDecl 0x55fa890afe30 <line:400:14> col:14 implicit mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890aff38 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890affa0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890b0008 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890afed8 <<invalid sloc>> Implicit 955
|-FunctionDecl 0x55fa890b0088 prev 0x55fa890afe30 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:400:14 mempcpy 'void *(void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890afc50 <col:23, col:40> col:40 __dest 'void *restrict'
| |-ParmVarDecl 0x55fa890afcd0 <line:401:9, col:32> col:32 __src 'const void *restrict'
| |-ParmVarDecl 0x55fa890afd48 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890b01e8 <<invalid sloc>> Inherited Implicit 955
| |-NoThrowAttr 0x55fa890b0148 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890b01a0 <line:555:57, /usr/include/string.h:402:30> 1 2
|-FunctionDecl 0x55fa890b0360 <line:407:15> col:15 implicit strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55fa890b0468 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa890b0408 <<invalid sloc>> Implicit 1243
| `-NoThrowAttr 0x55fa890b04d8 <col:15> Implicit
|-FunctionDecl 0x55fa890b0500 prev 0x55fa890b0360 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:407:15 strlen 'unsigned long (const char *)' extern
| |-ParmVarDecl 0x55fa890b0230 <col:23, col:35> col:35 __s 'const char *'
| |-BuiltinAttr 0x55fa890b0698 <<invalid sloc>> Inherited Implicit 1243
| |-NoThrowAttr 0x55fa890b05d0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b0628 <line:479:45>
| `-NonNullAttr 0x55fa890b0650 <line:555:57, /usr/include/string.h:408:46> 1
|-FunctionDecl 0x55fa890b0890 <line:413:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:413:15 strnlen 'size_t (const char *, size_t)' extern
| |-ParmVarDecl 0x55fa890b06e0 <col:24, col:36> col:36 __string 'const char *'
| |-ParmVarDecl 0x55fa890b0758 <col:46, col:53> col:53 __maxlen 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa890b0948 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b09a0 <line:479:45>
| `-NonNullAttr 0x55fa890b09c8 <line:555:57, /usr/include/string.h:414:46> 1
|-FunctionDecl 0x55fa890b0af8 <line:419:14> col:14 implicit strerror 'char *(int)' extern
| |-ParmVarDecl 0x55fa890b0c00 <<invalid sloc>> <invalid sloc> 'int'
| `-BuiltinAttr 0x55fa890b0ba0 <<invalid sloc>> Implicit 1241
|-FunctionDecl 0x55fa890b0c70 prev 0x55fa890b0af8 <col:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:419:14 strerror 'char *(int)' extern
| |-ParmVarDecl 0x55fa890b0a20 <col:24, col:28> col:28 __errnum 'int'
| |-BuiltinAttr 0x55fa890b0d78 <<invalid sloc>> Inherited Implicit 1241
| `-NoThrowAttr 0x55fa890b0d20 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa890b1048 </usr/include/string.h:432:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:432:28 strerror_r 'int (int, char *, size_t)' extern
| |-ParmVarDecl 0x55fa890b0dc0 <line:433:8, col:12> col:12 __errnum 'int'
| |-ParmVarDecl 0x55fa890b0e40 <col:22, col:28> col:28 __buf 'char *'
| |-ParmVarDecl 0x55fa890b0eb8 <col:35, col:42> col:42 __buflen 'size_t':'unsigned long'
| |-AsmLabelAttr 0x55fa890b10f0 <<scratch space>:112:1> "__xpg_strerror_r" IsLiteralLabel
| |-NoThrowAttr 0x55fa890b1188 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890b11b0 <line:555:57, /usr/include/string.h:434:38> 2
|-FunctionDecl 0x55fa890b13a8 <line:458:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:458:14 strerror_l 'char *(int, locale_t)' extern
| |-ParmVarDecl 0x55fa890b1210 <col:26, col:30> col:30 __errnum 'int'
| |-ParmVarDecl 0x55fa890b1288 <col:40, col:49> col:49 __l 'locale_t':'struct __locale_struct *'
| `-NoThrowAttr 0x55fa890b1460 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa890b41d8 </usr/include/strings.h:34:12> col:12 implicit bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b42e0 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890b4348 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890b43b0 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890b4280 <<invalid sloc>> Implicit 179
|-FunctionDecl 0x55fa890b4430 prev 0x55fa890b41d8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:34:12 bcmp 'int (const void *, const void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b14d0 <col:18, col:30> col:30 __s1 'const void *'
| |-ParmVarDecl 0x55fa890b1550 <col:36, col:48> col:48 __s2 'const void *'
| |-ParmVarDecl 0x55fa890b40f0 <col:54, col:61> col:61 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890b45b8 <<invalid sloc>> Inherited Implicit 179
| |-NoThrowAttr 0x55fa890b44f0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b4548 <line:479:45>
| `-NonNullAttr 0x55fa890b4570 <line:555:57, /usr/include/strings.h:35:49> 1 2
|-FunctionDecl 0x55fa890b4870 <line:38:13> col:13 implicit bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b4978 <<invalid sloc>> <invalid sloc> 'const void *'
| |-ParmVarDecl 0x55fa890b49e0 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890b4a48 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890b4918 <<invalid sloc>> Implicit 186
| `-NoThrowAttr 0x55fa890b4ac8 <col:13> Implicit
|-FunctionDecl 0x55fa890b4af0 prev 0x55fa890b4870 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:38:13 bcopy 'void (const void *, void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b4600 <col:20, col:32> col:32 __src 'const void *'
| |-ParmVarDecl 0x55fa890b4680 <col:39, col:45> col:45 __dest 'void *'
| |-ParmVarDecl 0x55fa890b46f8 <col:53, col:60> col:60 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890b4c48 <<invalid sloc>> Inherited Implicit 186
| |-NoThrowAttr 0x55fa890b4bb0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890b4c08 <line:555:57, /usr/include/strings.h:39:27> 1 2
|-FunctionDecl 0x55fa890b4dc0 <line:42:13> col:13 implicit bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b4ec8 <<invalid sloc>> <invalid sloc> 'void *'
| |-ParmVarDecl 0x55fa890b4f30 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa890b4e68 <<invalid sloc>> Implicit 184
| `-NoThrowAttr 0x55fa890b4fa8 <col:13> Implicit
|-FunctionDecl 0x55fa890b4fd0 prev 0x55fa890b4dc0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:42:13 bzero 'void (void *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b4c90 <col:20, col:26> col:26 __s 'void *'
| |-ParmVarDecl 0x55fa890b4d08 <col:31, col:38> col:38 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890b5148 <<invalid sloc>> Inherited Implicit 184
| |-NoThrowAttr 0x55fa890b5088 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa890b5100 <line:555:57, /usr/include/strings.h:42:64> 1
|-FunctionDecl 0x55fa890b52d0 <line:68:14> col:14 implicit index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890b53d8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890b5440 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55fa890b5378 <<invalid sloc>> Implicit 743
| `-NoThrowAttr 0x55fa890b54b8 <col:14> Implicit
|-FunctionDecl 0x55fa890b54e0 prev 0x55fa890b52d0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:68:14 index 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890b5190 <col:21, col:33> col:33 __s 'const char *'
| |-ParmVarDecl 0x55fa890b5210 <col:38, col:42> col:42 __c 'int'
| |-BuiltinAttr 0x55fa890b5658 <<invalid sloc>> Inherited Implicit 743
| |-NoThrowAttr 0x55fa890b5598 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b55f0 <line:479:45>
| `-NonNullAttr 0x55fa890b5618 <line:555:57, /usr/include/strings.h:69:46> 1
|-FunctionDecl 0x55fa890b57e0 <line:96:14> col:14 implicit rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890b58e8 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890b5950 <<invalid sloc>> <invalid sloc> 'int'
| |-BuiltinAttr 0x55fa890b5888 <<invalid sloc>> Implicit 1098
| `-NoThrowAttr 0x55fa890b59c8 <col:14> Implicit
|-FunctionDecl 0x55fa890b59f0 prev 0x55fa890b57e0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:96:14 rindex 'char *(const char *, int)' extern
| |-ParmVarDecl 0x55fa890b56a0 <col:22, col:34> col:34 __s 'const char *'
| |-ParmVarDecl 0x55fa890b5720 <col:39, col:43> col:43 __c 'int'
| |-BuiltinAttr 0x55fa890b5b68 <<invalid sloc>> Inherited Implicit 1098
| |-NoThrowAttr 0x55fa890b5aa8 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b5b00 <line:479:45>
| `-NonNullAttr 0x55fa890b5b28 <line:555:57, /usr/include/strings.h:97:46> 1
|-FunctionDecl 0x55fa890b5c48 <line:104:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:104:12 ffs 'int (int)' extern
| |-ParmVarDecl 0x55fa890b5bb0 <col:17, col:21> col:21 __i 'int'
| |-NoThrowAttr 0x55fa890b5cf8 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa890b5d50 <line:486:46>
|-FunctionDecl 0x55fa890b5e68 </usr/include/strings.h:110:1, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:110:12 ffsl 'int (long)' extern
| |-ParmVarDecl 0x55fa890b5d90 <col:18, col:27> col:27 __l 'long'
| |-NoThrowAttr 0x55fa890b5f18 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa890b5f70 <line:486:46>
|-FunctionDecl 0x55fa890b6110 </usr/include/strings.h:111:15, /usr/include/sys/cdefs.h:486:56> /usr/include/strings.h:111:26 ffsll 'int (long long)' extern
| |-ParmVarDecl 0x55fa890b5fb0 <col:33, col:47> col:47 __ll 'long long'
| |-NoThrowAttr 0x55fa890b61c0 </usr/include/sys/cdefs.h:79:35>
| `-ConstAttr 0x55fa890b6218 <line:486:46>
|-FunctionDecl 0x55fa890b63b8 </usr/include/strings.h:116:12> col:12 implicit strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890b64c0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890b6528 <<invalid sloc>> <invalid sloc> 'const char *'
| `-BuiltinAttr 0x55fa890b6460 <<invalid sloc>> Implicit 1230
|-FunctionDecl 0x55fa890b65a0 prev 0x55fa890b63b8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:116:12 strcasecmp 'int (const char *, const char *)' extern
| |-ParmVarDecl 0x55fa890b6258 <col:24, col:36> col:36 __s1 'const char *'
| |-ParmVarDecl 0x55fa890b62d8 <col:42, col:54> col:54 __s2 'const char *'
| |-BuiltinAttr 0x55fa890b6718 <<invalid sloc>> Inherited Implicit 1230
| |-NoThrowAttr 0x55fa890b6658 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b66b0 <line:479:45>
| `-NonNullAttr 0x55fa890b66d8 <line:555:57, /usr/include/strings.h:117:49> 1 2
|-FunctionDecl 0x55fa890b6940 <line:120:12> col:12 implicit strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b6a48 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890b6ab0 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa890b6b18 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa890b69e8 <<invalid sloc>> Implicit 1270
|-FunctionDecl 0x55fa890b6b98 prev 0x55fa890b6940 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:120:12 strncasecmp 'int (const char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa890b6760 <col:25, col:37> col:37 __s1 'const char *'
| |-ParmVarDecl 0x55fa890b67e0 <col:43, col:55> col:55 __s2 'const char *'
| |-ParmVarDecl 0x55fa890b6858 <col:61, col:68> col:68 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa890b6d18 <<invalid sloc>> Inherited Implicit 1270
| |-NoThrowAttr 0x55fa890b6c58 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b6cb0 <line:479:45>
| `-NonNullAttr 0x55fa890b6cd8 <line:555:57, /usr/include/strings.h:121:49> 1 2
|-FunctionDecl 0x55fa890b6f60 <line:128:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:128:12 strcasecmp_l 'int (const char *, const char *, locale_t)' extern
| |-ParmVarDecl 0x55fa890b6d60 <col:26, col:38> col:38 __s1 'const char *'
| |-ParmVarDecl 0x55fa890b6de0 <col:44, col:56> col:56 __s2 'const char *'
| |-ParmVarDecl 0x55fa890b6e58 <col:62, col:71> col:71 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55fa890b7020 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa890b7078 <line:479:45>
| `-NonNullAttr 0x55fa890b70a0 <line:555:57, /usr/include/strings.h:129:52> 1 2 3
|-FunctionDecl 0x55fa8904b8e8 <line:133:1, /usr/include/sys/cdefs.h:555:76> /usr/include/strings.h:133:12 strncasecmp_l 'int (const char *, const char *, size_t, locale_t)' extern
| |-ParmVarDecl 0x55fa8904b5c0 <col:27, col:39> col:39 __s1 'const char *'
| |-ParmVarDecl 0x55fa8904b640 <col:45, col:57> col:57 __s2 'const char *'
| |-ParmVarDecl 0x55fa8904b6b8 <line:134:6, col:13> col:13 __n 'size_t':'unsigned long'
| |-ParmVarDecl 0x55fa8904b730 <col:18, col:27> col:27 __loc 'locale_t':'struct __locale_struct *'
| |-NoThrowAttr 0x55fa8904b9b0 </usr/include/sys/cdefs.h:79:35>
| |-PureAttr 0x55fa8904ba08 <line:479:45>
| `-NonNullAttr 0x55fa8904ba30 <line:555:57, /usr/include/strings.h:135:52> 1 2 4
|-FunctionDecl 0x55fa8904bbc8 </usr/include/string.h:466:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:466:13 explicit_bzero 'void (void *, size_t)' extern
| |-ParmVarDecl 0x55fa8904ba98 <col:29, col:35> col:35 __s 'void *'
| |-ParmVarDecl 0x55fa8904bb10 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8904bc80 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904bcd8 <line:555:57, /usr/include/string.h:466:73> 1
|-FunctionDecl 0x55fa8904bf18 <line:471:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:471:14 strsep 'char *(char **restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55fa8904bd30 <col:22, col:40> col:40 __stringp 'char **restrict'
| |-ParmVarDecl 0x55fa8904bdb0 <line:472:8, col:31> col:31 __delim 'const char *restrict'
| |-NoThrowAttr 0x55fa8904bfd0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904c028 <line:555:57, /usr/include/string.h:473:30> 1 2
|-FunctionDecl 0x55fa8904c118 <line:478:1, /usr/include/sys/cdefs.h:79:54> /usr/include/string.h:478:14 strsignal 'char *(int)' extern
| |-ParmVarDecl 0x55fa8904c080 <col:25, col:29> col:29 __sig 'int'
| `-NoThrowAttr 0x55fa8904c1c8 </usr/include/sys/cdefs.h:79:35>
|-FunctionDecl 0x55fa8904c398 </usr/include/string.h:489:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:489:14 __stpcpy 'char *(char *restrict, const char *restrict)' extern
| |-ParmVarDecl 0x55fa8904c238 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904c2b8 <col:49, col:72> col:72 __src 'const char *restrict'
| |-NoThrowAttr 0x55fa8904c450 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904c4a8 <line:555:57, /usr/include/string.h:490:30> 1 2
|-FunctionDecl 0x55fa8904c6b0 <line:491:14> col:14 implicit stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa8904c7b8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa8904c820 <<invalid sloc>> <invalid sloc> 'const char *'
| |-BuiltinAttr 0x55fa8904c758 <<invalid sloc>> Implicit 1224
| `-NoThrowAttr 0x55fa8904c898 <col:14> Implicit
|-FunctionDecl 0x55fa8904c8c0 prev 0x55fa8904c6b0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:491:14 stpcpy 'char *(char *, const char *)' extern
| |-ParmVarDecl 0x55fa8904c500 <col:22, col:39> col:39 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904c5d0 <col:47, col:70> col:70 __src 'const char *restrict'
| |-BuiltinAttr 0x55fa8904ca18 <<invalid sloc>> Inherited Implicit 1224
| |-NoThrowAttr 0x55fa8904c978 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904c9d0 <line:555:57, /usr/include/string.h:492:30> 1 2
|-FunctionDecl 0x55fa8904cc40 <line:496:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:496:14 __stpncpy 'char *(char *restrict, const char *restrict, size_t)' extern
| |-ParmVarDecl 0x55fa8904ca60 <col:25, col:42> col:42 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904cae0 <line:497:4, col:27> col:27 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa8904cb58 <col:34, col:41> col:41 __n 'size_t':'unsigned long'
| |-NoThrowAttr 0x55fa8904cd00 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904cd58 <line:555:57, /usr/include/string.h:498:30> 1 2
|-FunctionDecl 0x55fa8904cf90 <line:499:14> col:14 implicit stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904d098 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa8904d100 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8904d168 <<invalid sloc>> <invalid sloc> 'unsigned long'
| |-BuiltinAttr 0x55fa8904d038 <<invalid sloc>> Implicit 1227
| `-NoThrowAttr 0x55fa8904d1e8 <col:14> Implicit
|-FunctionDecl 0x55fa8904d210 prev 0x55fa8904cf90 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:499:14 stpncpy 'char *(char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904cdb0 <col:23, col:40> col:40 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904ce30 <line:500:9, col:32> col:32 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa8904cea8 <col:39, col:46> col:46 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8904d368 <<invalid sloc>> Inherited Implicit 1227
| |-NoThrowAttr 0x55fa8904d2d0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904d328 <line:555:57, /usr/include/string.h:501:30> 1 2
|-FunctionDecl 0x55fa8904d5e0 <line:506:15> col:15 implicit strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904d6e8 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa8904d750 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8904d7b8 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa8904d688 <<invalid sloc>> Implicit 1266
|-FunctionDecl 0x55fa8904d838 prev 0x55fa8904d5e0 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:506:15 strlcpy 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904d3b0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904d430 <line:507:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa8904d4a8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8904d998 <<invalid sloc>> Inherited Implicit 1266
| |-NoThrowAttr 0x55fa8904d8f8 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904d950 <line:555:57, /usr/include/string.h:508:27> 1 2
|-FunctionDecl 0x55fa8904dbb8 <line:512:15> col:15 implicit strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904dcc0 <<invalid sloc>> <invalid sloc> 'char *'
| |-ParmVarDecl 0x55fa8904dd28 <<invalid sloc>> <invalid sloc> 'const char *'
| |-ParmVarDecl 0x55fa8904dd90 <<invalid sloc>> <invalid sloc> 'unsigned long'
| `-BuiltinAttr 0x55fa8904dc60 <<invalid sloc>> Implicit 1265
|-FunctionDecl 0x55fa8904de10 prev 0x55fa8904dbb8 <col:1, /usr/include/sys/cdefs.h:555:76> /usr/include/string.h:512:15 strlcat 'unsigned long (char *, const char *, unsigned long)' extern
| |-ParmVarDecl 0x55fa8904d9e0 <col:24, col:41> col:41 __dest 'char *restrict'
| |-ParmVarDecl 0x55fa8904da60 <line:513:10, col:33> col:33 __src 'const char *restrict'
| |-ParmVarDecl 0x55fa8904dad8 <col:40, col:47> col:47 __n 'size_t':'unsigned long'
| |-BuiltinAttr 0x55fa8904df68 <<invalid sloc>> Inherited Implicit 1265
| |-NoThrowAttr 0x55fa8904ded0 </usr/include/sys/cdefs.h:79:35>
| `-NonNullAttr 0x55fa8904df28 <line:555:57, /usr/include/string.h:514:27> 1 2
|-FunctionDecl 0x55fa8904e180 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_retdec/0.c:13:1, col:41> col:9 used codemarker_alpha 'int64_t (uint32_t)'
| `-ParmVarDecl 0x55fa8904e070 <col:26, col:35> col:35 result 'uint32_t':'unsigned int'
|-FunctionDecl 0x55fa8904e300 <line:14:1, col:26> col:9 used crc32_gentab 'int64_t (void)'
|-FunctionDecl 0x55fa8904e440 <line:15:1, col:20> col:9 used func_1 'int64_t (void)'
|-FunctionDecl 0x55fa8904e5f0 <line:16:1, col:33> col:9 used platform_main_begin 'int64_t (void)'
|-FunctionDecl 0x55fa8904e840 <line:17:1, col:49> col:9 used platform_main_end 'int64_t (int64_t, int32_t)'
| |-ParmVarDecl 0x55fa8904e6a8 <col:27, col:35> col:35 a1 'int64_t':'long'
| `-ParmVarDecl 0x55fa8904e720 <col:39, col:47> col:47 a2 'int32_t':'int'
|-VarDecl 0x55fa8904e910 <line:21:1, /usr/bin/../lib/clang/21/include/__stddef_null.h:26:23> /home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_retdec/0.c:21:11 used g1 'int32_t *' cinit
| `-ImplicitCastExpr 0x55fa8904e9f8 </usr/bin/../lib/clang/21/include/__stddef_null.h:26:14, col:23> 'int32_t *' <NullToPointer>
|   `-ParenExpr 0x55fa8904e9d8 <col:14, col:23> 'void *'
|     `-CStyleCastExpr 0x55fa8904e9b0 <col:15, col:22> 'void *' <NullToPointer>
|       `-IntegerLiteral 0x55fa8904e978 <col:22> 'int' 0
|-FunctionDecl 0x55fa8904eab0 prev 0x55fa8904e180 </home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_retdec/0.c:26:1, line:29:1> line:26:9 used codemarker_alpha 'int64_t (uint32_t)'
| |-ParmVarDecl 0x55fa8904ea20 <col:26, col:35> col:35 used result 'uint32_t':'unsigned int'
| `-CompoundStmt 0x55fa8904ebc0 <col:43, line:29:1>
|   `-ReturnStmt 0x55fa8904ebb0 <line:28:5, col:12>
|     `-ImplicitCastExpr 0x55fa8904eb98 <col:12> 'int64_t':'long' <IntegralCast>
|       `-ImplicitCastExpr 0x55fa8904eb80 <col:12> 'uint32_t':'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x55fa8904eb60 <col:12> 'uint32_t':'unsigned int' lvalue ParmVar 0x55fa8904ea20 'result' 'uint32_t':'unsigned int'
|-FunctionDecl 0x55fa8904ed58 <line:32:1, line:49:1> line:32:5 main 'int (int, char **)'
| |-ParmVarDecl 0x55fa8904ebf0 <col:10, col:14> col:14 used argc 'int'
| |-ParmVarDecl 0x55fa8904ec70 <col:20, col:28> col:28 used argv 'char **'
| `-CompoundStmt 0x55fa8904fb58 <col:34, line:49:1>
|   |-CallExpr 0x55fa8904eec8 <line:34:5, col:23> 'int64_t':'long'
|   | |-ImplicitCastExpr 0x55fa8904eeb0 <col:5> 'int64_t (*)(uint32_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55fa8904ee10 <col:5> 'int64_t (uint32_t)' Function 0x55fa8904eab0 'codemarker_alpha' 'int64_t (uint32_t)'
|   | `-ImplicitCastExpr 0x55fa8904eef8 <col:22> 'uint32_t':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55fa8904ee30 <col:22> 'int' 0
|   |-CallExpr 0x55fa8904ef68 <line:35:5, col:23> 'int64_t':'long'
|   | |-ImplicitCastExpr 0x55fa8904ef50 <col:5> 'int64_t (*)(uint32_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55fa8904ef10 <col:5> 'int64_t (uint32_t)' Function 0x55fa8904eab0 'codemarker_alpha' 'int64_t (uint32_t)'
|   | `-ImplicitCastExpr 0x55fa8904ef98 <col:22> 'uint32_t':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55fa8904ef30 <col:22> 'int' 1
|   |-DeclStmt 0x55fa8904f048 <line:36:5, col:19>
|   | `-VarDecl 0x55fa8904efc0 <col:5, col:18> col:13 used v1 'int32_t':'int' cinit
|   |   `-IntegerLiteral 0x55fa8904f028 <col:18> 'int' 0
|   |-IfStmt 0x55fa8904f5b8 <line:37:5, line:40:5>
|   | |-BinaryOperator 0x55fa8904f0f0 <line:37:9, col:26> 'int' '=='
|   | | |-CStyleCastExpr 0x55fa8904f0a8 <col:9, col:18> 'int32_t':'int' <NoOp>
|   | | | `-ImplicitCastExpr 0x55fa8904f090 <col:18> 'int' <LValueToRValue> part_of_explicit_cast
|   | | |   `-DeclRefExpr 0x55fa8904f060 <col:18> 'int' lvalue ParmVar 0x55fa8904ebf0 'argc' 'int'
|   | | `-IntegerLiteral 0x55fa8904f0d0 <col:26> 'int' 2
|   | `-CompoundStmt 0x55fa8904f598 <col:29, line:40:5>
|   |   |-DeclStmt 0x55fa8904f330 <line:38:9, col:54>
|   |   | `-VarDecl 0x55fa8904f120 <col:9, col:53> col:17 used str 'int64_t':'long' cinit
|   |   |   `-ImplicitCastExpr 0x55fa8904f318 <col:23, col:53> 'int64_t':'long' <LValueToRValue>
|   |   |     `-UnaryOperator 0x55fa8904f300 <col:23, col:53> 'int64_t':'long' lvalue prefix '*' cannot overflow
|   |   |       `-CStyleCastExpr 0x55fa8904f2d8 <col:24, col:53> 'int64_t *' <IntegralToPointer>
|   |   |         `-ParenExpr 0x55fa8904f2b8 <col:35, col:53> 'int64_t':'long'
|   |   |           `-BinaryOperator 0x55fa8904f230 <col:36, col:52> 'int64_t':'long' '+'
|   |   |             |-CStyleCastExpr 0x55fa8904f1d0 <col:36, col:45> 'int64_t':'long' <PointerToIntegral>
|   |   |             | `-ImplicitCastExpr 0x55fa8904f1b8 <col:45> 'char **' <LValueToRValue> part_of_explicit_cast
|   |   |             |   `-DeclRefExpr 0x55fa8904f188 <col:45> 'char **' lvalue ParmVar 0x55fa8904ec70 'argv' 'char **'
|   |   |             `-ImplicitCastExpr 0x55fa8904f218 <col:52> 'int64_t':'long' <IntegralCast>
|   |   |               `-IntegerLiteral 0x55fa8904f1f8 <col:52> 'int' 8
|   |   `-BinaryOperator 0x55fa8904f578 <line:39:9, col:42> 'int32_t':'int' '='
|   |     |-DeclRefExpr 0x55fa8904f348 <col:9> 'int32_t':'int' lvalue Var 0x55fa8904efc0 'v1' 'int32_t':'int'
|   |     `-BinaryOperator 0x55fa8904f558 <col:14, col:42> 'int' '=='
|   |       |-CallExpr 0x55fa8904f4b8 <col:14, col:37> 'int'
|   |       | |-ImplicitCastExpr 0x55fa8904f4a0 <col:14> 'int (*)(const char *, const char *)' <FunctionToPointerDecay>
|   |       | | `-DeclRefExpr 0x55fa8904f368 <col:14> 'int (const char *, const char *)' Function 0x55fa890a6e48 'strcmp' 'int (const char *, const char *)'
|   |       | |-ImplicitCastExpr 0x55fa8904f4f0 <col:21, col:29> 'const char *' <NoOp>
|   |       | | `-CStyleCastExpr 0x55fa8904f3d8 <col:21, col:29> 'char *' <IntegralToPointer>
|   |       | |   `-ImplicitCastExpr 0x55fa8904f3c0 <col:29> 'int64_t':'long' <LValueToRValue> part_of_explicit_cast
|   |       | |     `-DeclRefExpr 0x55fa8904f388 <col:29> 'int64_t':'long' lvalue Var 0x55fa8904f120 'str' 'int64_t':'long'
|   |       | `-ImplicitCastExpr 0x55fa8904f520 <col:34> 'const char *' <NoOp>
|   |       |   `-ImplicitCastExpr 0x55fa8904f508 <col:34> 'char *' <ArrayToPointerDecay>
|   |       |     `-StringLiteral 0x55fa8904f430 <col:34> 'char[2]' lvalue "1"
|   |       `-IntegerLiteral 0x55fa8904f538 <col:42> 'int' 0
|   |-CallExpr 0x55fa8904f658 <line:42:5, col:23> 'int64_t':'long'
|   | |-ImplicitCastExpr 0x55fa8904f640 <col:5> 'int64_t (*)(uint32_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55fa8904f600 <col:5> 'int64_t (uint32_t)' Function 0x55fa8904eab0 'codemarker_alpha' 'int64_t (uint32_t)'
|   | `-ImplicitCastExpr 0x55fa8904f688 <col:22> 'uint32_t':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55fa8904f620 <col:22> 'int' 2
|   |-CallExpr 0x55fa8904f738 <line:43:5, col:25> 'int64_t':'long'
|   | `-ImplicitCastExpr 0x55fa8904f720 <col:5> 'int64_t (*)(void)' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x55fa8904f6a0 <col:5> 'int64_t (void)' Function 0x55fa8904e5f0 'platform_main_begin' 'int64_t (void)'
|   |-CallExpr 0x55fa8904f7b8 <line:44:5, col:23> 'int64_t':'long'
|   | |-ImplicitCastExpr 0x55fa8904f7a0 <col:5> 'int64_t (*)(uint32_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55fa8904f760 <col:5> 'int64_t (uint32_t)' Function 0x55fa8904eab0 'codemarker_alpha' 'int64_t (uint32_t)'
|   | `-ImplicitCastExpr 0x55fa8904f7e8 <col:22> 'uint32_t':'unsigned int' <IntegralCast>
|   |   `-IntegerLiteral 0x55fa8904f780 <col:22> 'int' 3
|   |-CallExpr 0x55fa8904f838 <line:45:5, col:18> 'int64_t':'long'
|   | `-ImplicitCastExpr 0x55fa8904f820 <col:5> 'int64_t (*)(void)' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x55fa8904f800 <col:5> 'int64_t (void)' Function 0x55fa8904e300 'crc32_gentab' 'int64_t (void)'
|   |-CallExpr 0x55fa8904f898 <line:46:5, col:12> 'int64_t':'long'
|   | `-ImplicitCastExpr 0x55fa8904f880 <col:5> 'int64_t (*)(void)' <FunctionToPointerDecay>
|   |   `-DeclRefExpr 0x55fa8904f860 <col:5> 'int64_t (void)' Function 0x55fa8904e440 'func_1' 'int64_t (void)'
|   |-CallExpr 0x55fa8904fad8 <line:47:5, col:63> 'int64_t':'long'
|   | |-ImplicitCastExpr 0x55fa8904fac0 <col:5> 'int64_t (*)(int64_t, int32_t)' <FunctionToPointerDecay>
|   | | `-DeclRefExpr 0x55fa8904f8c0 <col:5> 'int64_t (int64_t, int32_t)' Function 0x55fa8904e840 'platform_main_end' 'int64_t (int64_t, int32_t)'
|   | |-CStyleCastExpr 0x55fa8904fa18 <col:23, col:58> 'int64_t':'long' <IntegralCast>
|   | | `-ParenExpr 0x55fa8904f9f8 <col:32, col:58> 'int'
|   | |   `-BinaryOperator 0x55fa8904f9a8 <col:33, col:50> 'int' '-'
|   | |     |-UnaryOperator 0x55fa8904f900 <col:33, col:34> 'int' prefix '-'
|   | |     | `-IntegerLiteral 0x55fa8904f8e0 <col:34> 'int' 1
|   | |     `-ImplicitCastExpr 0x55fa8904f990 <col:38, col:50> 'int32_t':'int' <LValueToRValue>
|   | |       `-UnaryOperator 0x55fa8904f978 <col:38, col:50> 'int32_t':'int' lvalue prefix '*' cannot overflow
|   | |         `-CStyleCastExpr 0x55fa8904f950 <col:39, col:50> 'int32_t *' <IntegralToPointer>
|   | |           `-IntegerLiteral 0x55fa8904f918 <col:50> 'int' 4206612
|   | `-ImplicitCastExpr 0x55fa8904fb10 <col:61> 'int32_t':'int' <LValueToRValue>
|   |   `-DeclRefExpr 0x55fa8904fa40 <col:61> 'int32_t':'int' lvalue Var 0x55fa8904efc0 'v1' 'int32_t':'int'
|   `-ReturnStmt 0x55fa8904fb48 <line:48:5, col:12>
|     `-IntegerLiteral 0x55fa8904fb28 <col:12> 'int' 0
|-FunctionDecl 0x55fa8904fc58 prev 0x55fa8904e5f0 <line:52:1, line:56:1> line:52:9 used platform_main_begin 'int64_t (void)'
| `-CompoundStmt 0x55fa8904fdd8 <col:35, line:56:1>
|   |-DeclStmt 0x55fa8904fd78 <line:54:5, col:19>
|   | `-VarDecl 0x55fa8904fd10 <col:5, col:13> col:13 used result 'int64_t':'long'
|   `-ReturnStmt 0x55fa8904fdc8 <line:55:5, col:12>
|     `-ImplicitCastExpr 0x55fa8904fdb0 <col:12> 'int64_t':'long' <LValueToRValue>
|       `-DeclRefExpr 0x55fa8904fd90 <col:12> 'int64_t':'long' lvalue Var 0x55fa8904fd10 'result' 'int64_t':'long'
|-FunctionDecl 0x55fa8904fe90 prev 0x55fa8904e300 <line:59:1, line:79:1> line:59:9 used crc32_gentab 'int64_t (void)'
| `-CompoundStmt 0x55fa89050e70 <col:28, line:79:1>
|   |-ForStmt 0x55fa89050df0 <line:60:5, line:76:5>
|   | |-DeclStmt 0x55fa8904ffe8 <line:60:10, col:23>
|   | | `-VarDecl 0x55fa8904ff48 <col:10, col:22> col:18 used i 'int64_t':'long' cinit
|   | |   `-ImplicitCastExpr 0x55fa8904ffd0 <col:22> 'int64_t':'long' <IntegralCast>
|   | |     `-IntegerLiteral 0x55fa8904ffb0 <col:22> 'int' 0
|   | |-<<<NULL>>>
|   | |-BinaryOperator 0x55fa89050070 <col:25, col:29> 'int' '<'
|   | | |-ImplicitCastExpr 0x55fa89050040 <col:25> 'int64_t':'long' <LValueToRValue>
|   | | | `-DeclRefExpr 0x55fa89050000 <col:25> 'int64_t':'long' lvalue Var 0x55fa8904ff48 'i' 'int64_t':'long'
|   | | `-ImplicitCastExpr 0x55fa89050058 <col:29> 'int64_t':'long' <IntegralCast>
|   | |   `-IntegerLiteral 0x55fa89050020 <col:29> 'int' 256
|   | |-UnaryOperator 0x55fa890500b0 <col:34, col:35> 'int64_t':'long' postfix '++'
|   | | `-DeclRefExpr 0x55fa89050090 <col:34> 'int64_t':'long' lvalue Var 0x55fa8904ff48 'i' 'int64_t':'long'
|   | `-CompoundStmt 0x55fa89050da0 <col:39, line:76:5>
|   |   |-DeclStmt 0x55fa89050160 <line:61:9, col:23>
|   |   | `-VarDecl 0x55fa890500d8 <col:9, col:22> col:17 used v1 'int32_t':'int' cinit
|   |   |   `-IntegerLiteral 0x55fa89050140 <col:22> 'int' 8
|   |   |-DeclStmt 0x55fa89050240 <line:62:9, col:23>
|   |   | `-VarDecl 0x55fa89050188 <col:9, col:22> col:17 used v2 'int32_t':'int' cinit
|   |   |   `-ImplicitCastExpr 0x55fa89050228 <col:22> 'int32_t':'int' <IntegralCast>
|   |   |     `-ImplicitCastExpr 0x55fa89050210 <col:22> 'int64_t':'long' <LValueToRValue>
|   |   |       `-DeclRefExpr 0x55fa890501f0 <col:22> 'int64_t':'long' lvalue Var 0x55fa8904ff48 'i' 'int64_t':'long'
|   |   |-DeclStmt 0x55fa89050360 <line:63:9, col:29>
|   |   | `-VarDecl 0x55fa89050268 <col:9, col:28> col:18 used v3 'uint32_t':'unsigned int' cinit
|   |   |   `-ImplicitCastExpr 0x55fa89050348 <col:23, col:28> 'uint32_t':'unsigned int' <IntegralCast>
|   |   |     `-BinaryOperator 0x55fa89050328 <col:23, col:28> 'int' '/'
|   |   |       |-ImplicitCastExpr 0x55fa89050310 <col:23> 'int32_t':'int' <LValueToRValue>
|   |   |       | `-DeclRefExpr 0x55fa890502d0 <col:23> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   |       `-IntegerLiteral 0x55fa890502f0 <col:28> 'int' 2
|   |   |-DeclStmt 0x55fa890505d0 <line:64:9, col:57>
|   |   | `-VarDecl 0x55fa89050388 <col:9, col:47> col:17 used v4 'int32_t':'int' cinit
|   |   |   `-ImplicitCastExpr 0x55fa890505b8 <col:22, col:47> 'int32_t':'int' <IntegralCast>
|   |   |     `-ConditionalOperator 0x55fa89050588 <col:22, col:47> 'uint32_t':'unsigned int'
|   |   |       |-BinaryOperator 0x55fa89050488 <col:22, col:32> 'int' '=='
|   |   |       | |-BinaryOperator 0x55fa89050448 <col:22, col:27> 'int' '%'
|   |   |       | | |-ImplicitCastExpr 0x55fa89050430 <col:22> 'int32_t':'int' <LValueToRValue>
|   |   |       | | | `-DeclRefExpr 0x55fa890503f0 <col:22> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   |       | | `-IntegerLiteral 0x55fa89050410 <col:27> 'int' 2
|   |   |       | `-IntegerLiteral 0x55fa89050468 <col:32> 'int' 0
|   |   |       |-ImplicitCastExpr 0x55fa89050570 <col:36> 'uint32_t':'unsigned int' <LValueToRValue>
|   |   |       | `-DeclRefExpr 0x55fa890504a8 <col:36> 'uint32_t':'unsigned int' lvalue Var 0x55fa89050268 'v3' 'uint32_t':'unsigned int'
|   |   |       `-BinaryOperator 0x55fa89050550 <col:41, col:47> 'uint32_t':'unsigned int' '^'
|   |   |         |-ImplicitCastExpr 0x55fa89050520 <col:41> 'uint32_t':'unsigned int' <LValueToRValue>
|   |   |         | `-DeclRefExpr 0x55fa890504c8 <col:41> 'uint32_t':'unsigned int' lvalue Var 0x55fa89050268 'v3' 'uint32_t':'unsigned int'
|   |   |         `-ImplicitCastExpr 0x55fa89050538 <col:46, col:47> 'uint32_t':'unsigned int' <IntegralCast>
|   |   |           `-UnaryOperator 0x55fa89050508 <col:46, col:47> 'int' prefix '-'
|   |   |             `-IntegerLiteral 0x55fa890504e8 <col:47> 'int' 306674912
|   |   |-UnaryOperator 0x55fa89050630 <line:65:9, col:11> 'int32_t':'int' postfix '--'
|   |   | `-DeclRefExpr 0x55fa89050610 <col:9> 'int32_t':'int' lvalue Var 0x55fa890500d8 'v1' 'int32_t':'int'
|   |   |-BinaryOperator 0x55fa890506a0 <line:66:9, col:14> 'int32_t':'int' '='
|   |   | |-DeclRefExpr 0x55fa89050648 <col:9> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   | `-ImplicitCastExpr 0x55fa89050688 <col:14> 'int32_t':'int' <LValueToRValue>
|   |   |   `-DeclRefExpr 0x55fa89050668 <col:14> 'int32_t':'int' lvalue Var 0x55fa89050388 'v4' 'int32_t':'int'
|   |   |-WhileStmt 0x55fa89050b08 <line:67:9, line:73:9>
|   |   | |-BinaryOperator 0x55fa89050718 <line:67:16, col:22> 'int' '!='
|   |   | | |-ImplicitCastExpr 0x55fa89050700 <col:16> 'int32_t':'int' <LValueToRValue>
|   |   | | | `-DeclRefExpr 0x55fa890506c0 <col:16> 'int32_t':'int' lvalue Var 0x55fa890500d8 'v1' 'int32_t':'int'
|   |   | | `-IntegerLiteral 0x55fa890506e0 <col:22> 'int' 0
|   |   | `-CompoundStmt 0x55fa89050ad8 <col:25, line:73:9>
|   |   |   |-BinaryOperator 0x55fa890507e8 <line:69:13, col:23> 'uint32_t':'unsigned int' '='
|   |   |   | |-DeclRefExpr 0x55fa89050738 <col:13> 'uint32_t':'unsigned int' lvalue Var 0x55fa89050268 'v3' 'uint32_t':'unsigned int'
|   |   |   | `-ImplicitCastExpr 0x55fa890507d0 <col:18, col:23> 'uint32_t':'unsigned int' <IntegralCast>
|   |   |   |   `-BinaryOperator 0x55fa890507b0 <col:18, col:23> 'int' '/'
|   |   |   |     |-ImplicitCastExpr 0x55fa89050798 <col:18> 'int32_t':'int' <LValueToRValue>
|   |   |   |     | `-DeclRefExpr 0x55fa89050758 <col:18> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   |   |     `-IntegerLiteral 0x55fa89050778 <col:23> 'int' 2
|   |   |   |-BinaryOperator 0x55fa89050a08 <line:70:13, col:43> 'int32_t':'int' '='
|   |   |   | |-DeclRefExpr 0x55fa89050808 <col:13> 'int32_t':'int' lvalue Var 0x55fa89050388 'v4' 'int32_t':'int'
|   |   |   | `-ImplicitCastExpr 0x55fa890509f0 <col:18, col:43> 'int32_t':'int' <IntegralCast>
|   |   |   |   `-ConditionalOperator 0x55fa890509c0 <col:18, col:43> 'uint32_t':'unsigned int'
|   |   |   |     |-BinaryOperator 0x55fa890508c0 <col:18, col:28> 'int' '=='
|   |   |   |     | |-BinaryOperator 0x55fa89050880 <col:18, col:23> 'int' '%'
|   |   |   |     | | |-ImplicitCastExpr 0x55fa89050868 <col:18> 'int32_t':'int' <LValueToRValue>
|   |   |   |     | | | `-DeclRefExpr 0x55fa89050828 <col:18> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   |   |     | | `-IntegerLiteral 0x55fa89050848 <col:23> 'int' 2
|   |   |   |     | `-IntegerLiteral 0x55fa890508a0 <col:28> 'int' 0
|   |   |   |     |-ImplicitCastExpr 0x55fa890509a8 <col:32> 'uint32_t':'unsigned int' <LValueToRValue>
|   |   |   |     | `-DeclRefExpr 0x55fa890508e0 <col:32> 'uint32_t':'unsigned int' lvalue Var 0x55fa89050268 'v3' 'uint32_t':'unsigned int'
|   |   |   |     `-BinaryOperator 0x55fa89050988 <col:37, col:43> 'uint32_t':'unsigned int' '^'
|   |   |   |       |-ImplicitCastExpr 0x55fa89050958 <col:37> 'uint32_t':'unsigned int' <LValueToRValue>
|   |   |   |       | `-DeclRefExpr 0x55fa89050900 <col:37> 'uint32_t':'unsigned int' lvalue Var 0x55fa89050268 'v3' 'uint32_t':'unsigned int'
|   |   |   |       `-ImplicitCastExpr 0x55fa89050970 <col:42, col:43> 'uint32_t':'unsigned int' <IntegralCast>
|   |   |   |         `-UnaryOperator 0x55fa89050940 <col:42, col:43> 'int' prefix '-'
|   |   |   |           `-IntegerLiteral 0x55fa89050920 <col:43> 'int' 306674912
|   |   |   |-UnaryOperator 0x55fa89050a48 <line:71:13, col:15> 'int32_t':'int' postfix '--'
|   |   |   | `-DeclRefExpr 0x55fa89050a28 <col:13> 'int32_t':'int' lvalue Var 0x55fa890500d8 'v1' 'int32_t':'int'
|   |   |   `-BinaryOperator 0x55fa89050ab8 <line:72:13, col:18> 'int32_t':'int' '='
|   |   |     |-DeclRefExpr 0x55fa89050a60 <col:13> 'int32_t':'int' lvalue Var 0x55fa89050188 'v2' 'int32_t':'int'
|   |   |     `-ImplicitCastExpr 0x55fa89050aa0 <col:18> 'int32_t':'int' <LValueToRValue>
|   |   |       `-DeclRefExpr 0x55fa89050a80 <col:18> 'int32_t':'int' lvalue Var 0x55fa89050388 'v4' 'int32_t':'int'
|   |   `-BinaryOperator 0x55fa89050d80 <line:75:9, col:46> 'int32_t':'int' '='
|   |     |-UnaryOperator 0x55fa89050d30 <col:9, col:42> 'int32_t':'int' lvalue prefix '*' cannot overflow
|   |     | `-CStyleCastExpr 0x55fa89050d08 <col:10, col:42> 'int32_t *' <IntegralToPointer>
|   |     |   `-ParenExpr 0x55fa89050ce8 <col:21, col:42> 'int64_t':'long'
|   |     |     `-BinaryOperator 0x55fa89050c90 <col:22, col:40> 'int64_t':'long' '+'
|   |     |       |-BinaryOperator 0x55fa89050b98 <col:22, col:26> 'int64_t':'long' '*'
|   |     |       | |-ImplicitCastExpr 0x55fa89050b80 <col:22> 'int64_t':'long' <IntegralCast>
|   |     |       | | `-IntegerLiteral 0x55fa89050b28 <col:22> 'int' 4
|   |     |       | `-ImplicitCastExpr 0x55fa89050b68 <col:26> 'int64_t':'long' <LValueToRValue>
|   |     |       |   `-DeclRefExpr 0x55fa89050b48 <col:26> 'int64_t':'long' lvalue Var 0x55fa8904ff48 'i' 'int64_t':'long'
|   |     |       `-CStyleCastExpr 0x55fa89050c68 <col:30, col:40> 'int64_t':'long' <PointerToIntegral>
|   |     |         `-UnaryOperator 0x55fa89050c40 <col:39, col:40> 'int32_t **' prefix '&' cannot overflow
|   |     |           `-DeclRefExpr 0x55fa89050bb8 <col:40> 'int32_t *' lvalue Var 0x55fa8904e910 'g1' 'int32_t *'
|   |     `-ImplicitCastExpr 0x55fa89050d68 <col:46> 'int32_t':'int' <LValueToRValue>
|   |       `-DeclRefExpr 0x55fa89050d48 <col:46> 'int32_t':'int' lvalue Var 0x55fa89050388 'v4' 'int32_t':'int'
|   `-ReturnStmt 0x55fa89050e60 <line:78:5, col:12>
|     `-ImplicitCastExpr 0x55fa89050e48 <col:12> 'int64_t':'long' <IntegralCast>
|       `-IntegerLiteral 0x55fa89050e28 <col:12> 'int' 256
|-FunctionDecl 0x55fa89050f28 prev 0x55fa8904e440 <line:82:1, line:85:1> line:82:9 used func_1 'int64_t (void)'
| `-CompoundStmt 0x55fa89051018 <col:22, line:85:1>
|   `-ReturnStmt 0x55fa89051008 <line:84:5, col:12>
|     `-ImplicitCastExpr 0x55fa89050ff0 <col:12> 'int64_t':'long' <IntegralCast>
|       `-IntegerLiteral 0x55fa89050fd0 <col:12> 'int' 4
`-FunctionDecl 0x55fa89051150 prev 0x55fa8904e840 <line:88:1, line:91:1> line:88:9 used platform_main_end 'int64_t (int64_t, int32_t)'
  |-ParmVarDecl 0x55fa89051040 <col:27, col:35> col:35 used a1 'int64_t':'long'
  |-ParmVarDecl 0x55fa890510b8 <col:39, col:47> col:47 a2 'int32_t':'int'
  `-CompoundStmt 0x55fa890513b8 <col:51, line:91:1>
    `-ReturnStmt 0x55fa890513a8 <line:90:5, col:49>
      `-ImplicitCastExpr 0x55fa89051390 <col:12, col:49> 'int64_t':'long' <IntegralCast>
        `-CallExpr 0x55fa89051328 <col:12, col:49> 'int'
          |-ImplicitCastExpr 0x55fa89051310 <col:12> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
          | `-DeclRefExpr 0x55fa89051208 <col:12> 'int (const char *, ...)' Function 0x55fa8902eb58 'printf' 'int (const char *, ...)'
          |-ImplicitCastExpr 0x55fa89051378 <col:19> 'const char *' <NoOp>
          | `-ImplicitCastExpr 0x55fa89051360 <col:19> 'char *' <ArrayToPointerDecay>
          |   `-StringLiteral 0x55fa89051228 <col:19> 'char[15]' lvalue "checksum = %X\n"
          `-CStyleCastExpr 0x55fa89051298 <col:38, col:47> 'int32_t':'int' <IntegralCast>
            `-ImplicitCastExpr 0x55fa89051280 <col:47> 'int64_t':'long' <LValueToRValue> part_of_explicit_cast
              `-DeclRefExpr 0x55fa89051250 <col:47> 'int64_t':'long' lvalue ParmVar 0x55fa89051040 'a1' 'int64_t':'long'

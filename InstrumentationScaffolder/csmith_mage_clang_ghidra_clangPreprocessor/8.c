# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/8.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 406 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/8.c" 2
typedef unsigned char undefined;

typedef unsigned char byte;
typedef unsigned char dwfenc;
typedef unsigned int dword;
typedef unsigned long qword;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned short word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version;
    dwfenc eh_frame_pointer_encoding;
    dwfenc eh_frame_desc_entry_count_encoding;
    dwfenc eh_frame_table_encoding;
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc;
    dword data_loc;
};

typedef ulong size_t;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz;
    dword descsz;
    dword type;
    char name[4];
    dword abiType;
    dword requiredKernelVersion[3];
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset;
    qword r_info;
    qword r_addend;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz;
    dword descsz;
    dword type;
    char name[4];
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz;
    dword descsz;
    dword type;
    char name[4];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;



undefined main;
undefined1 completed.0;
undefined8 DAT_0040a718;
int DAT_0040a720;
ushort DAT_0040a724;
short DAT_0040a726;
int DAT_0040a728;
undefined8 DAT_0040a738;
int DAT_0040a740;
ushort DAT_0040a744;
short DAT_0040a746;
int DAT_0040a748;
undefined8 DAT_0040b058;
int DAT_0040b060;
ushort DAT_0040b064;
short DAT_0040b066;
int DAT_0040b068;
undefined8 DAT_0040b078;
int DAT_0040b080;
ushort DAT_0040b084;
short DAT_0040b086;
int DAT_0040b088;
undefined8 DAT_0040b098;
int DAT_0040b0a0;
ushort DAT_0040b0a4;
short DAT_0040b0a6;
int DAT_0040b0a8;
undefined8 DAT_0040b0b8;
int DAT_0040b0c0;
ushort DAT_0040b0c4;
short DAT_0040b0c6;
int DAT_0040b0c8;
undefined8 DAT_0040b0d8;
int DAT_0040b0e0;
ushort DAT_0040b0e4;
short DAT_0040b0e6;
int DAT_0040b0e8;
undefined8 DAT_0040b0f8;
int DAT_0040b100;
ushort DAT_0040b104;
short DAT_0040b106;
int DAT_0040b108;
undefined8 DAT_0040b4d8;
int DAT_0040b4e0;
ushort DAT_0040b4e4;
short DAT_0040b4e6;
int DAT_0040b4e8;
undefined8 DAT_0040b4f8;
int DAT_0040b500;
ushort DAT_0040b504;
short DAT_0040b506;
int DAT_0040b508;
undefined8 DAT_0040b518;
undefined4 g_3;
int DAT_0040b520;
ushort DAT_0040b524;
short DAT_0040b526;
undefined4 g_4;
int DAT_0040b528;
undefined4 g_5;
undefined8 DAT_0040b538;
undefined4 g_6;
int DAT_0040b540;
undefined1[72] g_45;
ushort DAT_0040b544;
short DAT_0040b546;
undefined1 g_59;
undefined1[12] g_65;
int DAT_0040b548;
undefined1[160] g_85;
undefined8 DAT_0040b558;
undefined4 g_97;
int DAT_0040b560;
undefined2 g_98;
ushort DAT_0040b564;
undefined2 g_101;
short DAT_0040b566;
undefined1[20] g_102;
int DAT_0040b568;
undefined4 g_119;
undefined8 DAT_0040b578;
undefined8 g_120;
int DAT_0040b580;
undefined4 g_124;
ushort DAT_0040b584;
short DAT_0040b586;
undefined8 g_142;
undefined8 g_184;
int DAT_0040b588;
undefined1 g_299;
undefined8 DAT_0040bb38;
undefined8 g_502;
int DAT_0040bb40;
undefined1[2304] g_562;
ushort DAT_0040bb44;
undefined8 g_616;
short DAT_0040bb46;
undefined1 g_646;
int DAT_0040bb48;
undefined2 g_700;
undefined8 DAT_0040bb58;
undefined8 g_805;
int DAT_0040bb60;
undefined1[10] g_816;
ushort DAT_0040bb64;
undefined1 g_822;
short DAT_0040bb66;
undefined8 g_909;
int DAT_0040bb68;
undefined8 g_917;
undefined8 DAT_0040bff8;
undefined8 g_929;
int DAT_0040c000;
undefined1 g_947;
ushort DAT_0040c004;
undefined1[224] g_987;
short DAT_0040c006;
undefined8 g_992;
int DAT_0040c008;
undefined4 g_994;
undefined8 DAT_0040c118;
undefined1[864] g_1051;
int DAT_0040c120;
undefined1[36] g_1103;
ushort DAT_0040c124;
undefined2 g_1105;
short DAT_0040c126;
undefined1[96] g_1108;
int DAT_0040c128;
undefined8 g_1110;
undefined8 DAT_0040c138;
undefined4 g_1119;
int DAT_0040c140;
undefined8 g_1139;
ushort DAT_0040c144;
undefined8 g_1186;
short DAT_0040c146;
undefined8 g_1276;
int DAT_0040c148;
undefined8 DAT_0040c298;
undefined8 g_1321;
int DAT_0040c2a0;
undefined8 g_1352;
ushort DAT_0040c2a4;
undefined1[45] g_1424;
short DAT_0040c2a6;
undefined1[800] g_1435;
int DAT_0040c2a8;
undefined1[1440] g_1526;
undefined8 DAT_0040c2b8;
int DAT_0040c2c0;
undefined1 g_1535;
undefined8 g_1536;
ushort DAT_0040c2c4;
undefined8 g_1538;
short DAT_0040c2c6;
undefined1[256] g_1565;
int DAT_0040c2c8;
undefined1[896] g_1569;
undefined8 DAT_0040c2d8;
undefined8 g_1617;
int DAT_0040c2e0;
undefined1[256] g_1721;
ushort DAT_0040c2e4;
undefined8 g_1934;
short DAT_0040c2e6;
undefined8 g_1974;
int DAT_0040c2e8;
undefined4 g_1997;
undefined8 DAT_0040ddf8;
undefined8 g_2005;
int DAT_0040de00;
undefined1[320] g_2109;
ushort DAT_0040de04;
undefined8 g_2112;
short DAT_0040de06;
undefined1 g_2247;
int DAT_0040de08;
undefined8 g_2416;
undefined8 DAT_0040de18;
undefined8 g_2615;
int DAT_0040de20;
undefined1[6912] g_2616;
ushort DAT_0040de24;
undefined2 g_2654;
short DAT_0040de26;
undefined8 g_2675;
int DAT_0040de28;
undefined2 g_2690;
undefined8 DAT_0040de38;
undefined8 g_2709;
int DAT_0040de40;
undefined4 g_2731;
ushort DAT_0040de44;
undefined8 g_2761;
short DAT_0040de46;
undefined8 g_2875;
int DAT_0040de48;
undefined8 g_2905;
undefined8 DAT_0040de58;
undefined2 g_2991;
int DAT_0040de60;
undefined8 g_3009;
ushort DAT_0040de64;
undefined8 g_3038;
short DAT_0040de66;
undefined1 g_3068;
int DAT_0040de68;
undefined DAT_00406240;
undefined1[288] g_3075;
undefined DAT_00406244;
undefined4 crc32_context;
undefined DAT_00406248;
undefined DAT_0040624c;
undefined DAT_0040626d;
undefined DAT_00406288;
undefined DAT_0040628d;
undefined DAT_00406292;
undefined1[1024] crc32_tab;
pointer PTR_g_733_00406fd8;
undefined *PTR_g_733_00407000;
undefined *PTR_g_733_00407028;
undefined DAT_00407060;
undefined8 g_655;
undefined DAT_00407440;
pointer g_2272;
undefined DAT_004075d0;
pointer g_341;
undefined DAT_004078a0;
pointer g_519;
undefined DAT_00408020;
pointer g_456;
undefined DAT_004080c0;
pointer g_733;
undefined8 g_1185;
undefined4 g_2212;
pointer g_455;
pointer g_2178;
pointer g_1047;
pointer g_654;
pointer g_1050;
undefined1[16] g_1331;

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;

  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00400360(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}





int printf(char *__format,...)

{
  int iVar1;

  iVar1 = printf(__format);
  return iVar1;
}





void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;

  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}





int strcmp(char *__s1,char *__s2)

{
  int iVar1;

  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}





void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;

  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];

  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {

  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}






void deregister_tm_clones(void)

{
  return;
}






void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 codemarker_alpha(undefined4 param_1)

{
  return param_1;
}



undefined8 main(int param_1,long param_2)

{
  int iVar1;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;

  codemarker_alpha(0xac);
  codemarker_alpha(0xad);
  local_28 = 0;
  codemarker_alpha(0xae);
  if (param_1 == 2) {
    iVar1 = strcmp(*(char **)(param_2 + 8),"1");
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  codemarker_alpha(0xaf);
  platform_main_begin();
  codemarker_alpha(0xb0);
  crc32_gentab();
  func_1();
  transparent_crc((long)g_3,&DAT_00406240,local_28);
  transparent_crc((long)g_4,&DAT_00406244,local_28);
  transparent_crc((long)g_5,&DAT_00406248,local_28);
  transparent_crc((long)g_6,&DAT_0040624c,local_28);
  codemarker_alpha(0xb1);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0xb2);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0xb3);
      transparent_crc((long)*(int *)(g_45 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x24),
                      "g_45[i][j]",local_28);
      codemarker_alpha(0xb4);
      if (local_28 != 0) {
        codemarker_alpha(0xb5);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc(g_59,&DAT_0040626d,local_28);
  codemarker_alpha(0xb6);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0xb7);
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      codemarker_alpha(0xb8);
      transparent_crc(g_65[(long)(int)local_20 + (long)(int)local_1c * 4],"g_65[i][j]",local_28);
      codemarker_alpha(0xb9);
      if (local_28 != 0) {
        codemarker_alpha(0xba);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0xbb);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    codemarker_alpha(0xbc);
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      codemarker_alpha(0xbd);
      transparent_crc(*(undefined8 *)(g_85 + (long)(int)local_20 * 8 + (long)(int)local_1c * 0x20),
                      "g_85[i][j]",local_28);
      codemarker_alpha(0xbe);
      if (local_28 != 0) {
        codemarker_alpha(0xbf);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_97,&DAT_00406288,local_28);
  transparent_crc((long)g_98,&DAT_0040628d,local_28);
  transparent_crc(g_101,&DAT_00406292,local_28);
  codemarker_alpha(0xc0);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    codemarker_alpha(0xc1);
    transparent_crc((long)*(int *)(g_102 + (long)(int)local_1c * 4),"g_102[i]",local_28);
    codemarker_alpha(0xc2);
    if (local_28 != 0) {
      codemarker_alpha(0xc3);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_119,"g_119",local_28);
  transparent_crc(g_120,"g_120.f0",local_28);
  transparent_crc(g_124,"g_124",local_28);
  transparent_crc(g_142,"g_142.f0",local_28);
  codemarker_alpha(0xc4);
  transparent_crc((uint)g_184 & 0x3ffff,"g_184.f0",local_28);
  codemarker_alpha(0xc5);
  transparent_crc((uint)((ulong)g_184 >> 0x20) & 0x7fffffff,"g_184.f1",local_28);
  transparent_crc(DAT_0040a718,"g_184.f2",local_28);
  codemarker_alpha(0xc6);
  transparent_crc((long)((DAT_0040a720 << 3) >> 3),"g_184.f3",local_28);
  codemarker_alpha(199);
  transparent_crc(DAT_0040a724 & 0x3fff,"g_184.f4",local_28);
  transparent_crc((long)DAT_0040a726,"g_184.f5",local_28);
  codemarker_alpha(200);
  transparent_crc((long)((DAT_0040a728 << 5) >> 5),"g_184.f6",local_28);
  transparent_crc(g_299,"g_299",local_28);
  transparent_crc(0xffffffffb358915a,"g_392",local_28);
  transparent_crc(0,"g_425.f0",local_28);
  codemarker_alpha(0xc9);
  transparent_crc((uint)g_502 & 0x3ffff,"g_502.f0",local_28);
  codemarker_alpha(0xca);
  transparent_crc((uint)((ulong)g_502 >> 0x20) & 0x7fffffff,"g_502.f1",local_28);
  transparent_crc(DAT_0040a738,"g_502.f2",local_28);
  codemarker_alpha(0xcb);
  transparent_crc((long)((DAT_0040a740 << 3) >> 3),"g_502.f3",local_28);
  codemarker_alpha(0xcc);
  transparent_crc(DAT_0040a744 & 0x3fff,"g_502.f4",local_28);
  transparent_crc((long)DAT_0040a746,"g_502.f5",local_28);
  codemarker_alpha(0xcd);
  transparent_crc((long)((DAT_0040a748 << 5) >> 5),"g_502.f6",local_28);
  codemarker_alpha(0xce);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0xcf);
    for (local_20 = 0; (int)local_20 < 6; local_20 = local_20 + 1) {
      codemarker_alpha(0xd0);
      for (local_24 = 0; (int)local_24 < 6; local_24 = local_24 + 1) {
        codemarker_alpha(0xd1);
        transparent_crc((uint)*(undefined8 *)
                               (g_562 + (long)(int)local_24 * 0x20 +
                                        (long)(int)local_20 * 0xc0 + (long)(int)local_1c * 0x480) &
                        0x3ffff,"g_562[i][j][k].f0",local_28);
        codemarker_alpha(0xd2);
        transparent_crc((uint)((ulong)*(undefined8 *)
                                       (g_562 + (long)(int)local_24 * 0x20 +
                                                (long)(int)local_20 * 0xc0 +
                                                (long)(int)local_1c * 0x480) >> 0x20) & 0x7fffffff,
                        "g_562[i][j][k].f1",local_28);
        transparent_crc(*(undefined8 *)
                         (g_562 + (long)(int)local_1c * 0x480 + (long)(int)local_20 * 0xc0 +
                                  (long)(int)local_24 * 0x20 + 8),"g_562[i][j][k].f2",local_28);
        codemarker_alpha(0xd3);
        transparent_crc((long)((*(int *)(g_562 + (long)(int)local_1c * 0x480 +
                                                 (long)(int)local_20 * 0xc0 +
                                                 (long)(int)local_24 * 0x20 + 0x10) << 3) >> 3),
                        "g_562[i][j][k].f3",local_28);
        codemarker_alpha(0xd4);
        transparent_crc(*(ushort *)
                         (g_562 + (long)(int)local_1c * 0x480 + (long)(int)local_20 * 0xc0 +
                                  (long)(int)local_24 * 0x20 + 0x14) & 0x3fff,"g_562[i][j][k].f4",
                        local_28);
        transparent_crc((long)*(short *)(g_562 + (long)(int)local_1c * 0x480 +
                                                 (long)(int)local_20 * 0xc0 +
                                                 (long)(int)local_24 * 0x20 + 0x16),
                        "g_562[i][j][k].f5",local_28);
        codemarker_alpha(0xd5);
        transparent_crc((long)((*(int *)(g_562 + (long)(int)local_1c * 0x480 +
                                                 (long)(int)local_20 * 0xc0 +
                                                 (long)(int)local_24 * 0x20 + 0x18) << 5) >> 5),
                        "g_562[i][j][k].f6",local_28);
        codemarker_alpha(0xd6);
        if (local_28 != 0) {
          codemarker_alpha(0xd7);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0xd8);
  transparent_crc((uint)g_616 & 0x3ffff,"g_616.f0",local_28);
  codemarker_alpha(0xd9);
  transparent_crc((uint)((ulong)g_616 >> 0x20) & 0x7fffffff,"g_616.f1",local_28);
  transparent_crc(DAT_0040b058,"g_616.f2",local_28);
  codemarker_alpha(0xda);
  transparent_crc((long)((DAT_0040b060 << 3) >> 3),"g_616.f3",local_28);
  codemarker_alpha(0xdb);
  transparent_crc(DAT_0040b064 & 0x3fff,"g_616.f4",local_28);
  transparent_crc((long)DAT_0040b066,"g_616.f5",local_28);
  codemarker_alpha(0xdc);
  transparent_crc((long)((DAT_0040b068 << 5) >> 5),"g_616.f6",local_28);
  transparent_crc(g_646,"g_646",local_28);
  transparent_crc((long)g_700,"g_700",local_28);
  codemarker_alpha(0xdd);
  transparent_crc((uint)g_805 & 0x3ffff,"g_805.f0",local_28);
  codemarker_alpha(0xde);
  transparent_crc((uint)((ulong)g_805 >> 0x20) & 0x7fffffff,"g_805.f1",local_28);
  transparent_crc(DAT_0040b078,"g_805.f2",local_28);
  codemarker_alpha(0xdf);
  transparent_crc((long)((DAT_0040b080 << 3) >> 3),"g_805.f3",local_28);
  codemarker_alpha(0xe0);
  transparent_crc(DAT_0040b084 & 0x3fff,"g_805.f4",local_28);
  transparent_crc((long)DAT_0040b086,"g_805.f5",local_28);
  codemarker_alpha(0xe1);
  transparent_crc((long)((DAT_0040b088 << 5) >> 5),"g_805.f6",local_28);
  codemarker_alpha(0xe2);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    codemarker_alpha(0xe3);
    transparent_crc((long)*(short *)(g_816 + (long)(int)local_1c * 2),"g_816[i]",local_28);
    codemarker_alpha(0xe4);
    if (local_28 != 0) {
      codemarker_alpha(0xe5);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc((long)g_822,"g_822",local_28);
  codemarker_alpha(0xe6);
  transparent_crc((uint)g_909 & 0x3ffff,"g_909.f0",local_28);
  codemarker_alpha(0xe7);
  transparent_crc((uint)((ulong)g_909 >> 0x20) & 0x7fffffff,"g_909.f1",local_28);
  transparent_crc(DAT_0040b098,"g_909.f2",local_28);
  codemarker_alpha(0xe8);
  transparent_crc((long)((DAT_0040b0a0 << 3) >> 3),"g_909.f3",local_28);
  codemarker_alpha(0xe9);
  transparent_crc(DAT_0040b0a4 & 0x3fff,"g_909.f4",local_28);
  transparent_crc((long)DAT_0040b0a6,"g_909.f5",local_28);
  codemarker_alpha(0xea);
  transparent_crc((long)((DAT_0040b0a8 << 5) >> 5),"g_909.f6",local_28);
  codemarker_alpha(0xeb);
  transparent_crc((uint)g_917 & 0x3ffff,"g_917.f0",local_28);
  codemarker_alpha(0xec);
  transparent_crc((uint)((ulong)g_917 >> 0x20) & 0x7fffffff,"g_917.f1",local_28);
  transparent_crc(DAT_0040b0b8,"g_917.f2",local_28);
  codemarker_alpha(0xed);
  transparent_crc((long)((DAT_0040b0c0 << 3) >> 3),"g_917.f3",local_28);
  codemarker_alpha(0xee);
  transparent_crc(DAT_0040b0c4 & 0x3fff,"g_917.f4",local_28);
  transparent_crc((long)DAT_0040b0c6,"g_917.f5",local_28);
  codemarker_alpha(0xef);
  transparent_crc((long)((DAT_0040b0c8 << 5) >> 5),"g_917.f6",local_28);
  codemarker_alpha(0xf0);
  transparent_crc((uint)g_929 & 0x3ffff,"g_929.f0",local_28);
  codemarker_alpha(0xf1);
  transparent_crc((uint)((ulong)g_929 >> 0x20) & 0x7fffffff,"g_929.f1",local_28);
  transparent_crc(DAT_0040b0d8,"g_929.f2",local_28);
  codemarker_alpha(0xf2);
  transparent_crc((long)((DAT_0040b0e0 << 3) >> 3),"g_929.f3",local_28);
  codemarker_alpha(0xf3);
  transparent_crc(DAT_0040b0e4 & 0x3fff,"g_929.f4",local_28);
  transparent_crc((long)DAT_0040b0e6,"g_929.f5",local_28);
  codemarker_alpha(0xf4);
  transparent_crc((long)((DAT_0040b0e8 << 5) >> 5),"g_929.f6",local_28);
  transparent_crc(g_947,"g_947",local_28);
  codemarker_alpha(0xf5);
  for (local_1c = 0; (int)local_1c < 7; local_1c = local_1c + 1) {
    codemarker_alpha(0xf6);
    transparent_crc((uint)*(undefined8 *)(g_987 + (long)(int)local_1c * 0x20) & 0x3ffff,
                    "g_987[i].f0",local_28);
    codemarker_alpha(0xf7);
    transparent_crc((uint)((ulong)*(undefined8 *)(g_987 + (long)(int)local_1c * 0x20) >> 0x20) &
                    0x7fffffff,"g_987[i].f1",local_28);
    transparent_crc(*(undefined8 *)(g_987 + (long)(int)local_1c * 0x20 + 8),"g_987[i].f2",local_28);
    codemarker_alpha(0xf8);
    transparent_crc((long)((*(int *)(g_987 + (long)(int)local_1c * 0x20 + 0x10) << 3) >> 3),
                    "g_987[i].f3",local_28);
    codemarker_alpha(0xf9);
    transparent_crc(*(ushort *)(g_987 + (long)(int)local_1c * 0x20 + 0x14) & 0x3fff,"g_987[i].f4",
                    local_28);
    transparent_crc((long)*(short *)(g_987 + (long)(int)local_1c * 0x20 + 0x16),"g_987[i].f5",
                    local_28);
    codemarker_alpha(0xfa);
    transparent_crc((long)((*(int *)(g_987 + (long)(int)local_1c * 0x20 + 0x18) << 5) >> 5),
                    "g_987[i].f6",local_28);
    codemarker_alpha(0xfb);
    if (local_28 != 0) {
      codemarker_alpha(0xfc);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0xfd);
  transparent_crc((uint)g_992 & 0x3ffff,"g_992.f0",local_28);
  codemarker_alpha(0xfe);
  transparent_crc((uint)((ulong)g_992 >> 0x20) & 0x7fffffff,"g_992.f1",local_28);
  transparent_crc(DAT_0040b0f8,"g_992.f2",local_28);
  codemarker_alpha(0xff);
  transparent_crc((long)((DAT_0040b100 << 3) >> 3),"g_992.f3",local_28);
  codemarker_alpha(0x100);
  transparent_crc(DAT_0040b104 & 0x3fff,"g_992.f4",local_28);
  transparent_crc((long)DAT_0040b106,"g_992.f5",local_28);
  codemarker_alpha(0x101);
  transparent_crc((long)((DAT_0040b108 << 5) >> 5),"g_992.f6",local_28);
  codemarker_alpha(0x102);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x103);
    transparent_crc((long)*(char *)((long)&g_994 + (long)(int)local_1c),"g_994[i]",local_28);
    codemarker_alpha(0x104);
    if (local_28 != 0) {
      codemarker_alpha(0x105);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x106);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x107);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x108);
      transparent_crc((uint)*(undefined8 *)
                             (g_1051 + (long)(int)local_20 * 0x20 + (long)(int)local_1c * 0x120) &
                      0x3ffff,"g_1051[i][j].f0",local_28);
      codemarker_alpha(0x109);
      transparent_crc((uint)((ulong)*(undefined8 *)
                                     (g_1051 + (long)(int)local_20 * 0x20 +
                                               (long)(int)local_1c * 0x120) >> 0x20) & 0x7fffffff,
                      "g_1051[i][j].f1",local_28);
      transparent_crc(*(undefined8 *)
                       (g_1051 + (long)(int)local_1c * 0x120 + (long)(int)local_20 * 0x20 + 8),
                      "g_1051[i][j].f2",local_28);
      codemarker_alpha(0x10a);
      transparent_crc((long)((*(int *)(g_1051 + (long)(int)local_1c * 0x120 +
                                                (long)(int)local_20 * 0x20 + 0x10) << 3) >> 3),
                      "g_1051[i][j].f3",local_28);
      codemarker_alpha(0x10b);
      transparent_crc(*(ushort *)
                       (g_1051 + (long)(int)local_1c * 0x120 + (long)(int)local_20 * 0x20 + 0x14) &
                      0x3fff,"g_1051[i][j].f4",local_28);
      transparent_crc((long)*(short *)(g_1051 + (long)(int)local_1c * 0x120 +
                                                (long)(int)local_20 * 0x20 + 0x16),"g_1051[i][j].f5"
                      ,local_28);
      codemarker_alpha(0x10c);
      transparent_crc((long)((*(int *)(g_1051 + (long)(int)local_1c * 0x120 +
                                                (long)(int)local_20 * 0x20 + 0x18) << 5) >> 5),
                      "g_1051[i][j].f6",local_28);
      codemarker_alpha(0x10d);
      if (local_28 != 0) {
        codemarker_alpha(0x10e);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0x10f);
  for (local_1c = 0; (int)local_1c < 1; local_1c = local_1c + 1) {
    codemarker_alpha(0x110);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x111);
      transparent_crc((long)*(int *)(g_1103 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x24),
                      "g_1103[i][j]",local_28);
      codemarker_alpha(0x112);
      if (local_28 != 0) {
        codemarker_alpha(0x113);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_1105,"g_1105",local_28);
  codemarker_alpha(0x114);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x115);
    transparent_crc((uint)*(undefined8 *)(g_1108 + (long)(int)local_1c * 0x20) & 0x3ffff,
                    "g_1108[i].f0",local_28);
    codemarker_alpha(0x116);
    transparent_crc((uint)((ulong)*(undefined8 *)(g_1108 + (long)(int)local_1c * 0x20) >> 0x20) &
                    0x7fffffff,"g_1108[i].f1",local_28);
    transparent_crc(*(undefined8 *)(g_1108 + (long)(int)local_1c * 0x20 + 8),"g_1108[i].f2",local_28
                   );
    codemarker_alpha(0x117);
    transparent_crc((long)((*(int *)(g_1108 + (long)(int)local_1c * 0x20 + 0x10) << 3) >> 3),
                    "g_1108[i].f3",local_28);
    codemarker_alpha(0x118);
    transparent_crc(*(ushort *)(g_1108 + (long)(int)local_1c * 0x20 + 0x14) & 0x3fff,"g_1108[i].f4",
                    local_28);
    transparent_crc((long)*(short *)(g_1108 + (long)(int)local_1c * 0x20 + 0x16),"g_1108[i].f5",
                    local_28);
    codemarker_alpha(0x119);
    transparent_crc((long)((*(int *)(g_1108 + (long)(int)local_1c * 0x20 + 0x18) << 5) >> 5),
                    "g_1108[i].f6",local_28);
    codemarker_alpha(0x11a);
    if (local_28 != 0) {
      codemarker_alpha(0x11b);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x11c);
  transparent_crc((uint)g_1110 & 0x3ffff,"g_1110.f0",local_28);
  codemarker_alpha(0x11d);
  transparent_crc((uint)((ulong)g_1110 >> 0x20) & 0x7fffffff,"g_1110.f1",local_28);
  transparent_crc(DAT_0040b4d8,"g_1110.f2",local_28);
  codemarker_alpha(0x11e);
  transparent_crc((long)((DAT_0040b4e0 << 3) >> 3),"g_1110.f3",local_28);
  codemarker_alpha(0x11f);
  transparent_crc(DAT_0040b4e4 & 0x3fff,"g_1110.f4",local_28);
  transparent_crc((long)DAT_0040b4e6,"g_1110.f5",local_28);
  codemarker_alpha(0x120);
  transparent_crc((long)((DAT_0040b4e8 << 5) >> 5),"g_1110.f6",local_28);
  transparent_crc((long)g_1119,"g_1119",local_28);
  codemarker_alpha(0x121);
  transparent_crc((uint)g_1139 & 0x3ffff,"g_1139.f0",local_28);
  codemarker_alpha(0x122);
  transparent_crc((uint)((ulong)g_1139 >> 0x20) & 0x7fffffff,"g_1139.f1",local_28);
  transparent_crc(DAT_0040b4f8,"g_1139.f2",local_28);
  codemarker_alpha(0x123);
  transparent_crc((long)((DAT_0040b500 << 3) >> 3),"g_1139.f3",local_28);
  codemarker_alpha(0x124);
  transparent_crc(DAT_0040b504 & 0x3fff,"g_1139.f4",local_28);
  transparent_crc((long)DAT_0040b506,"g_1139.f5",local_28);
  codemarker_alpha(0x125);
  transparent_crc((long)((DAT_0040b508 << 5) >> 5),"g_1139.f6",local_28);
  transparent_crc(0xa327,"g_1184",local_28);
  codemarker_alpha(0x126);
  transparent_crc((uint)g_1186 & 0x3ffff,"g_1186.f0",local_28);
  codemarker_alpha(0x127);
  transparent_crc((uint)((ulong)g_1186 >> 0x20) & 0x7fffffff,"g_1186.f1",local_28);
  transparent_crc(DAT_0040b518,"g_1186.f2",local_28);
  codemarker_alpha(0x128);
  transparent_crc((long)((DAT_0040b520 << 3) >> 3),"g_1186.f3",local_28);
  codemarker_alpha(0x129);
  transparent_crc(DAT_0040b524 & 0x3fff,"g_1186.f4",local_28);
  transparent_crc((long)DAT_0040b526,"g_1186.f5",local_28);
  codemarker_alpha(0x12a);
  transparent_crc((long)((DAT_0040b528 << 5) >> 5),"g_1186.f6",local_28);
  codemarker_alpha(299);
  transparent_crc((uint)g_1276 & 0x3ffff,"g_1276.f0",local_28);
  codemarker_alpha(300);
  transparent_crc((uint)((ulong)g_1276 >> 0x20) & 0x7fffffff,"g_1276.f1",local_28);
  transparent_crc(DAT_0040b538,"g_1276.f2",local_28);
  codemarker_alpha(0x12d);
  transparent_crc((long)((DAT_0040b540 << 3) >> 3),"g_1276.f3",local_28);
  codemarker_alpha(0x12e);
  transparent_crc(DAT_0040b544 & 0x3fff,"g_1276.f4",local_28);
  transparent_crc((long)DAT_0040b546,"g_1276.f5",local_28);
  codemarker_alpha(0x12f);
  transparent_crc((long)((DAT_0040b548 << 5) >> 5),"g_1276.f6",local_28);
  codemarker_alpha(0x130);
  transparent_crc(0xc2,"g_1287.f0",local_28);
  codemarker_alpha(0x131);
  transparent_crc(0x1c67,"g_1287.f1",local_28);
  transparent_crc(0,"g_1287.f2",local_28);
  codemarker_alpha(0x132);
  transparent_crc(0xffffffffffffe1d2,"g_1287.f3",local_28);
  codemarker_alpha(0x133);
  transparent_crc(0x16,"g_1287.f4",local_28);
  transparent_crc(9,"g_1287.f5",local_28);
  codemarker_alpha(0x134);
  transparent_crc(0xffffffffffffe16d,"g_1287.f6",local_28);
  codemarker_alpha(0x135);
  transparent_crc((uint)g_1321 & 0x3ffff,"g_1321.f0",local_28);
  codemarker_alpha(0x136);
  transparent_crc((uint)((ulong)g_1321 >> 0x20) & 0x7fffffff,"g_1321.f1",local_28);
  transparent_crc(DAT_0040b558,"g_1321.f2",local_28);
  codemarker_alpha(0x137);
  transparent_crc((long)((DAT_0040b560 << 3) >> 3),"g_1321.f3",local_28);
  codemarker_alpha(0x138);
  transparent_crc(DAT_0040b564 & 0x3fff,"g_1321.f4",local_28);
  transparent_crc((long)DAT_0040b566,"g_1321.f5",local_28);
  codemarker_alpha(0x139);
  transparent_crc((long)((DAT_0040b568 << 5) >> 5),"g_1321.f6",local_28);
  codemarker_alpha(0x13a);
  transparent_crc((uint)g_1352 & 0x3ffff,"g_1352.f0",local_28);
  codemarker_alpha(0x13b);
  transparent_crc((uint)((ulong)g_1352 >> 0x20) & 0x7fffffff,"g_1352.f1",local_28);
  transparent_crc(DAT_0040b578,"g_1352.f2",local_28);
  codemarker_alpha(0x13c);
  transparent_crc((long)((DAT_0040b580 << 3) >> 3),"g_1352.f3",local_28);
  codemarker_alpha(0x13d);
  transparent_crc(DAT_0040b584 & 0x3fff,"g_1352.f4",local_28);
  transparent_crc((long)DAT_0040b586,"g_1352.f5",local_28);
  codemarker_alpha(0x13e);
  transparent_crc((long)((DAT_0040b588 << 5) >> 5),"g_1352.f6",local_28);
  codemarker_alpha(0x13f);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    codemarker_alpha(0x140);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x141);
      transparent_crc((long)(char)g_1424[(long)(int)local_20 + (long)(int)local_1c * 9],
                      "g_1424[i][j]",local_28);
      codemarker_alpha(0x142);
      if (local_28 != 0) {
        codemarker_alpha(0x143);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0x144);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x145);
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      codemarker_alpha(0x146);
      for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
        codemarker_alpha(0x147);
        transparent_crc(*(undefined4 *)
                         (g_1435 + (long)(int)local_24 * 4 +
                                   (long)(int)local_20 * 8 + (long)(int)local_1c * 0x50),
                        "g_1435[i][j][k]",local_28);
        codemarker_alpha(0x148);
        if (local_28 != 0) {
          codemarker_alpha(0x149);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0x14a);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    codemarker_alpha(0x14b);
    for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
      codemarker_alpha(0x14c);
      transparent_crc((uint)*(undefined8 *)
                             (g_1526 + (long)(int)local_20 * 0x20 + (long)(int)local_1c * 0xa0) &
                      0x3ffff,"g_1526[i][j].f0",local_28);
      codemarker_alpha(0x14d);
      transparent_crc((uint)((ulong)*(undefined8 *)
                                     (g_1526 + (long)(int)local_20 * 0x20 +
                                               (long)(int)local_1c * 0xa0) >> 0x20) & 0x7fffffff,
                      "g_1526[i][j].f1",local_28);
      transparent_crc(*(undefined8 *)
                       (g_1526 + (long)(int)local_1c * 0xa0 + (long)(int)local_20 * 0x20 + 8),
                      "g_1526[i][j].f2",local_28);
      codemarker_alpha(0x14e);
      transparent_crc((long)((*(int *)(g_1526 + (long)(int)local_1c * 0xa0 +
                                                (long)(int)local_20 * 0x20 + 0x10) << 3) >> 3),
                      "g_1526[i][j].f3",local_28);
      codemarker_alpha(0x14f);
      transparent_crc(*(ushort *)
                       (g_1526 + (long)(int)local_1c * 0xa0 + (long)(int)local_20 * 0x20 + 0x14) &
                      0x3fff,"g_1526[i][j].f4",local_28);
      transparent_crc((long)*(short *)(g_1526 + (long)(int)local_1c * 0xa0 +
                                                (long)(int)local_20 * 0x20 + 0x16),"g_1526[i][j].f5"
                      ,local_28);
      codemarker_alpha(0x150);
      transparent_crc((long)((*(int *)(g_1526 + (long)(int)local_1c * 0xa0 +
                                                (long)(int)local_20 * 0x20 + 0x18) << 5) >> 5),
                      "g_1526[i][j].f6",local_28);
      codemarker_alpha(0x151);
      if (local_28 != 0) {
        codemarker_alpha(0x152);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_1535,"g_1535",local_28);
  codemarker_alpha(0x153);
  transparent_crc((uint)g_1536 & 0x3ffff,"g_1536.f0",local_28);
  codemarker_alpha(0x154);
  transparent_crc((uint)((ulong)g_1536 >> 0x20) & 0x7fffffff,"g_1536.f1",local_28);
  transparent_crc(DAT_0040bb38,"g_1536.f2",local_28);
  codemarker_alpha(0x155);
  transparent_crc((long)((DAT_0040bb40 << 3) >> 3),"g_1536.f3",local_28);
  codemarker_alpha(0x156);
  transparent_crc(DAT_0040bb44 & 0x3fff,"g_1536.f4",local_28);
  transparent_crc((long)DAT_0040bb46,"g_1536.f5",local_28);
  codemarker_alpha(0x157);
  transparent_crc((long)((DAT_0040bb48 << 5) >> 5),"g_1536.f6",local_28);
  codemarker_alpha(0x158);
  transparent_crc((uint)g_1538 & 0x3ffff,"g_1538.f0",local_28);
  codemarker_alpha(0x159);
  transparent_crc((uint)((ulong)g_1538 >> 0x20) & 0x7fffffff,"g_1538.f1",local_28);
  transparent_crc(DAT_0040bb58,"g_1538.f2",local_28);
  codemarker_alpha(0x15a);
  transparent_crc((long)((DAT_0040bb60 << 3) >> 3),"g_1538.f3",local_28);
  codemarker_alpha(0x15b);
  transparent_crc(DAT_0040bb64 & 0x3fff,"g_1538.f4",local_28);
  transparent_crc((long)DAT_0040bb66,"g_1538.f5",local_28);
  codemarker_alpha(0x15c);
  transparent_crc((long)((DAT_0040bb68 << 5) >> 5),"g_1538.f6",local_28);
  codemarker_alpha(0x15d);
  for (local_1c = 0; (int)local_1c < 8; local_1c = local_1c + 1) {
    codemarker_alpha(0x15e);
    transparent_crc((uint)*(undefined8 *)(g_1565 + (long)(int)local_1c * 0x20) & 0x3ffff,
                    "g_1565[i].f0",local_28);
    codemarker_alpha(0x15f);
    transparent_crc((uint)((ulong)*(undefined8 *)(g_1565 + (long)(int)local_1c * 0x20) >> 0x20) &
                    0x7fffffff,"g_1565[i].f1",local_28);
    transparent_crc(*(undefined8 *)(g_1565 + (long)(int)local_1c * 0x20 + 8),"g_1565[i].f2",local_28
                   );
    codemarker_alpha(0x160);
    transparent_crc((long)((*(int *)(g_1565 + (long)(int)local_1c * 0x20 + 0x10) << 3) >> 3),
                    "g_1565[i].f3",local_28);
    codemarker_alpha(0x161);
    transparent_crc(*(ushort *)(g_1565 + (long)(int)local_1c * 0x20 + 0x14) & 0x3fff,"g_1565[i].f4",
                    local_28);
    transparent_crc((long)*(short *)(g_1565 + (long)(int)local_1c * 0x20 + 0x16),"g_1565[i].f5",
                    local_28);
    codemarker_alpha(0x162);
    transparent_crc((long)((*(int *)(g_1565 + (long)(int)local_1c * 0x20 + 0x18) << 5) >> 5),
                    "g_1565[i].f6",local_28);
    codemarker_alpha(0x163);
    if (local_28 != 0) {
      codemarker_alpha(0x164);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x165);
  for (local_1c = 0; (int)local_1c < 1; local_1c = local_1c + 1) {
    codemarker_alpha(0x166);
    for (local_20 = 0; (int)local_20 < 7; local_20 = local_20 + 1) {
      codemarker_alpha(0x167);
      for (local_24 = 0; (int)local_24 < 4; local_24 = local_24 + 1) {
        codemarker_alpha(0x168);
        transparent_crc((uint)*(undefined8 *)
                               (g_1569 + (long)(int)local_24 * 0x20 +
                                         (long)(int)local_20 * 0x80 + (long)(int)local_1c * 0x380) &
                        0x3ffff,"g_1569[i][j][k].f0",local_28);
        codemarker_alpha(0x169);
        transparent_crc((uint)((ulong)*(undefined8 *)
                                       (g_1569 + (long)(int)local_24 * 0x20 +
                                                 (long)(int)local_20 * 0x80 +
                                                 (long)(int)local_1c * 0x380) >> 0x20) & 0x7fffffff,
                        "g_1569[i][j][k].f1",local_28);
        transparent_crc(*(undefined8 *)
                         (g_1569 + (long)(int)local_1c * 0x380 + (long)(int)local_20 * 0x80 +
                                   (long)(int)local_24 * 0x20 + 8),"g_1569[i][j][k].f2",local_28);
        codemarker_alpha(0x16a);
        transparent_crc((long)((*(int *)(g_1569 + (long)(int)local_1c * 0x380 +
                                                  (long)(int)local_20 * 0x80 +
                                                  (long)(int)local_24 * 0x20 + 0x10) << 3) >> 3),
                        "g_1569[i][j][k].f3",local_28);
        codemarker_alpha(0x16b);
        transparent_crc(*(ushort *)
                         (g_1569 + (long)(int)local_1c * 0x380 + (long)(int)local_20 * 0x80 +
                                   (long)(int)local_24 * 0x20 + 0x14) & 0x3fff,"g_1569[i][j][k].f4",
                        local_28);
        transparent_crc((long)*(short *)(g_1569 + (long)(int)local_1c * 0x380 +
                                                  (long)(int)local_20 * 0x80 +
                                                  (long)(int)local_24 * 0x20 + 0x16),
                        "g_1569[i][j][k].f5",local_28);
        codemarker_alpha(0x16c);
        transparent_crc((long)((*(int *)(g_1569 + (long)(int)local_1c * 0x380 +
                                                  (long)(int)local_20 * 0x80 +
                                                  (long)(int)local_24 * 0x20 + 0x18) << 5) >> 5),
                        "g_1569[i][j][k].f6",local_28);
        codemarker_alpha(0x16d);
        if (local_28 != 0) {
          codemarker_alpha(0x16e);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0x16f);
  transparent_crc((uint)g_1617 & 0x3ffff,"g_1617.f0",local_28);
  codemarker_alpha(0x170);
  transparent_crc((uint)((ulong)g_1617 >> 0x20) & 0x7fffffff,"g_1617.f1",local_28);
  transparent_crc(DAT_0040bff8,"g_1617.f2",local_28);
  codemarker_alpha(0x171);
  transparent_crc((long)((DAT_0040c000 << 3) >> 3),"g_1617.f3",local_28);
  codemarker_alpha(0x172);
  transparent_crc(DAT_0040c004 & 0x3fff,"g_1617.f4",local_28);
  transparent_crc((long)DAT_0040c006,"g_1617.f5",local_28);
  codemarker_alpha(0x173);
  transparent_crc((long)((DAT_0040c008 << 5) >> 5),"g_1617.f6",local_28);
  codemarker_alpha(0x174);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0x175);
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      codemarker_alpha(0x176);
      transparent_crc((uint)*(undefined8 *)
                             (g_1721 + (long)(int)local_20 * 0x20 + (long)(int)local_1c * 0x80) &
                      0x3ffff,"g_1721[i][j].f0",local_28);
      codemarker_alpha(0x177);
      transparent_crc((uint)((ulong)*(undefined8 *)
                                     (g_1721 + (long)(int)local_20 * 0x20 +
                                               (long)(int)local_1c * 0x80) >> 0x20) & 0x7fffffff,
                      "g_1721[i][j].f1",local_28);
      transparent_crc(*(undefined8 *)
                       (g_1721 + (long)(int)local_1c * 0x80 + (long)(int)local_20 * 0x20 + 8),
                      "g_1721[i][j].f2",local_28);
      codemarker_alpha(0x178);
      transparent_crc((long)((*(int *)(g_1721 + (long)(int)local_1c * 0x80 +
                                                (long)(int)local_20 * 0x20 + 0x10) << 3) >> 3),
                      "g_1721[i][j].f3",local_28);
      codemarker_alpha(0x179);
      transparent_crc(*(ushort *)
                       (g_1721 + (long)(int)local_1c * 0x80 + (long)(int)local_20 * 0x20 + 0x14) &
                      0x3fff,"g_1721[i][j].f4",local_28);
      transparent_crc((long)*(short *)(g_1721 + (long)(int)local_1c * 0x80 +
                                                (long)(int)local_20 * 0x20 + 0x16),"g_1721[i][j].f5"
                      ,local_28);
      codemarker_alpha(0x17a);
      transparent_crc((long)((*(int *)(g_1721 + (long)(int)local_1c * 0x80 +
                                                (long)(int)local_20 * 0x20 + 0x18) << 5) >> 5),
                      "g_1721[i][j].f6",local_28);
      codemarker_alpha(0x17b);
      if (local_28 != 0) {
        codemarker_alpha(0x17c);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0x17d);
  transparent_crc((uint)g_1934 & 0x3ffff,"g_1934.f0",local_28);
  codemarker_alpha(0x17e);
  transparent_crc((uint)((ulong)g_1934 >> 0x20) & 0x7fffffff,"g_1934.f1",local_28);
  transparent_crc(DAT_0040c118,"g_1934.f2",local_28);
  codemarker_alpha(0x17f);
  transparent_crc((long)((DAT_0040c120 << 3) >> 3),"g_1934.f3",local_28);
  codemarker_alpha(0x180);
  transparent_crc(DAT_0040c124 & 0x3fff,"g_1934.f4",local_28);
  transparent_crc((long)DAT_0040c126,"g_1934.f5",local_28);
  codemarker_alpha(0x181);
  transparent_crc((long)((DAT_0040c128 << 5) >> 5),"g_1934.f6",local_28);
  codemarker_alpha(0x182);
  transparent_crc((uint)g_1974 & 0x3ffff,"g_1974.f0",local_28);
  codemarker_alpha(0x183);
  transparent_crc((uint)((ulong)g_1974 >> 0x20) & 0x7fffffff,"g_1974.f1",local_28);
  transparent_crc(DAT_0040c138,"g_1974.f2",local_28);
  codemarker_alpha(0x184);
  transparent_crc((long)((DAT_0040c140 << 3) >> 3),"g_1974.f3",local_28);
  codemarker_alpha(0x185);
  transparent_crc(DAT_0040c144 & 0x3fff,"g_1974.f4",local_28);
  transparent_crc((long)DAT_0040c146,"g_1974.f5",local_28);
  codemarker_alpha(0x186);
  transparent_crc((long)((DAT_0040c148 << 5) >> 5),"g_1974.f6",local_28);
  transparent_crc((long)g_1997,"g_1997",local_28);
  transparent_crc(g_2005,"g_2005",local_28);
  codemarker_alpha(0x187);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x188);
    transparent_crc((uint)*(undefined8 *)(g_2109 + (long)(int)local_1c * 0x20) & 0x3ffff,
                    "g_2109[i].f0",local_28);
    codemarker_alpha(0x189);
    transparent_crc((uint)((ulong)*(undefined8 *)(g_2109 + (long)(int)local_1c * 0x20) >> 0x20) &
                    0x7fffffff,"g_2109[i].f1",local_28);
    transparent_crc(*(undefined8 *)(g_2109 + (long)(int)local_1c * 0x20 + 8),"g_2109[i].f2",local_28
                   );
    codemarker_alpha(0x18a);
    transparent_crc((long)((*(int *)(g_2109 + (long)(int)local_1c * 0x20 + 0x10) << 3) >> 3),
                    "g_2109[i].f3",local_28);
    codemarker_alpha(0x18b);
    transparent_crc(*(ushort *)(g_2109 + (long)(int)local_1c * 0x20 + 0x14) & 0x3fff,"g_2109[i].f4",
                    local_28);
    transparent_crc((long)*(short *)(g_2109 + (long)(int)local_1c * 0x20 + 0x16),"g_2109[i].f5",
                    local_28);
    codemarker_alpha(0x18c);
    transparent_crc((long)((*(int *)(g_2109 + (long)(int)local_1c * 0x20 + 0x18) << 5) >> 5),
                    "g_2109[i].f6",local_28);
    codemarker_alpha(0x18d);
    if (local_28 != 0) {
      codemarker_alpha(0x18e);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(399);
  transparent_crc((uint)g_2112 & 0x3ffff,"g_2112.f0",local_28);
  codemarker_alpha(400);
  transparent_crc((uint)((ulong)g_2112 >> 0x20) & 0x7fffffff,"g_2112.f1",local_28);
  transparent_crc(DAT_0040c298,"g_2112.f2",local_28);
  codemarker_alpha(0x191);
  transparent_crc((long)((DAT_0040c2a0 << 3) >> 3),"g_2112.f3",local_28);
  codemarker_alpha(0x192);
  transparent_crc(DAT_0040c2a4 & 0x3fff,"g_2112.f4",local_28);
  transparent_crc((long)DAT_0040c2a6,"g_2112.f5",local_28);
  codemarker_alpha(0x193);
  transparent_crc((long)((DAT_0040c2a8 << 5) >> 5),"g_2112.f6",local_28);
  transparent_crc(0,"g_2212",local_28);
  transparent_crc(g_2247,"g_2247",local_28);
  codemarker_alpha(0x194);
  transparent_crc((uint)g_2416 & 0x3ffff,"g_2416.f0",local_28);
  codemarker_alpha(0x195);
  transparent_crc((uint)((ulong)g_2416 >> 0x20) & 0x7fffffff,"g_2416.f1",local_28);
  transparent_crc(DAT_0040c2b8,"g_2416.f2",local_28);
  codemarker_alpha(0x196);
  transparent_crc((long)((DAT_0040c2c0 << 3) >> 3),"g_2416.f3",local_28);
  codemarker_alpha(0x197);
  transparent_crc(DAT_0040c2c4 & 0x3fff,"g_2416.f4",local_28);
  transparent_crc((long)DAT_0040c2c6,"g_2416.f5",local_28);
  codemarker_alpha(0x198);
  transparent_crc((long)((DAT_0040c2c8 << 5) >> 5),"g_2416.f6",local_28);
  codemarker_alpha(0x199);
  transparent_crc((uint)g_2615 & 0x3ffff,"g_2615.f0",local_28);
  codemarker_alpha(0x19a);
  transparent_crc((uint)((ulong)g_2615 >> 0x20) & 0x7fffffff,"g_2615.f1",local_28);
  transparent_crc(DAT_0040c2d8,"g_2615.f2",local_28);
  codemarker_alpha(0x19b);
  transparent_crc((long)((DAT_0040c2e0 << 3) >> 3),"g_2615.f3",local_28);
  codemarker_alpha(0x19c);
  transparent_crc(DAT_0040c2e4 & 0x3fff,"g_2615.f4",local_28);
  transparent_crc((long)DAT_0040c2e6,"g_2615.f5",local_28);
  codemarker_alpha(0x19d);
  transparent_crc((long)((DAT_0040c2e8 << 5) >> 5),"g_2615.f6",local_28);
  codemarker_alpha(0x19e);
  for (local_1c = 0; (int)local_1c < 8; local_1c = local_1c + 1) {
    codemarker_alpha(0x19f);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x1a0);
      for (local_24 = 0; (int)local_24 < 3; local_24 = local_24 + 1) {
        codemarker_alpha(0x1a1);
        transparent_crc((uint)*(undefined8 *)
                               (g_2616 + (long)(int)local_24 * 0x20 +
                                         (long)(int)local_20 * 0x60 + (long)(int)local_1c * 0x360) &
                        0x3ffff,"g_2616[i][j][k].f0",local_28);
        codemarker_alpha(0x1a2);
        transparent_crc((uint)((ulong)*(undefined8 *)
                                       (g_2616 + (long)(int)local_24 * 0x20 +
                                                 (long)(int)local_20 * 0x60 +
                                                 (long)(int)local_1c * 0x360) >> 0x20) & 0x7fffffff,
                        "g_2616[i][j][k].f1",local_28);
        transparent_crc(*(undefined8 *)
                         (g_2616 + (long)(int)local_1c * 0x360 + (long)(int)local_20 * 0x60 +
                                   (long)(int)local_24 * 0x20 + 8),"g_2616[i][j][k].f2",local_28);
        codemarker_alpha(0x1a3);
        transparent_crc((long)((*(int *)(g_2616 + (long)(int)local_1c * 0x360 +
                                                  (long)(int)local_20 * 0x60 +
                                                  (long)(int)local_24 * 0x20 + 0x10) << 3) >> 3),
                        "g_2616[i][j][k].f3",local_28);
        codemarker_alpha(0x1a4);
        transparent_crc(*(ushort *)
                         (g_2616 + (long)(int)local_1c * 0x360 + (long)(int)local_20 * 0x60 +
                                   (long)(int)local_24 * 0x20 + 0x14) & 0x3fff,"g_2616[i][j][k].f4",
                        local_28);
        transparent_crc((long)*(short *)(g_2616 + (long)(int)local_1c * 0x360 +
                                                  (long)(int)local_20 * 0x60 +
                                                  (long)(int)local_24 * 0x20 + 0x16),
                        "g_2616[i][j][k].f5",local_28);
        codemarker_alpha(0x1a5);
        transparent_crc((long)((*(int *)(g_2616 + (long)(int)local_1c * 0x360 +
                                                  (long)(int)local_20 * 0x60 +
                                                  (long)(int)local_24 * 0x20 + 0x18) << 5) >> 5),
                        "g_2616[i][j][k].f6",local_28);
        codemarker_alpha(0x1a6);
        if (local_28 != 0) {
          codemarker_alpha(0x1a7);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc((long)g_2654,"g_2654",local_28);
  codemarker_alpha(0x1a8);
  transparent_crc((uint)g_2675 & 0x3ffff,"g_2675.f0",local_28);
  codemarker_alpha(0x1a9);
  transparent_crc((uint)((ulong)g_2675 >> 0x20) & 0x7fffffff,"g_2675.f1",local_28);
  transparent_crc(DAT_0040ddf8,"g_2675.f2",local_28);
  codemarker_alpha(0x1aa);
  transparent_crc((long)((DAT_0040de00 << 3) >> 3),"g_2675.f3",local_28);
  codemarker_alpha(0x1ab);
  transparent_crc(DAT_0040de04 & 0x3fff,"g_2675.f4",local_28);
  transparent_crc((long)DAT_0040de06,"g_2675.f5",local_28);
  codemarker_alpha(0x1ac);
  transparent_crc((long)((DAT_0040de08 << 5) >> 5),"g_2675.f6",local_28);
  codemarker_alpha(0x1ad);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0x1ae);
    transparent_crc((long)*(char *)((long)&g_2690 + (long)(int)local_1c),"g_2690[i]",local_28);
    codemarker_alpha(0x1af);
    if (local_28 != 0) {
      codemarker_alpha(0x1b0);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(0xffffffffffffffff,"g_2691",local_28);
  transparent_crc(g_2709,"g_2709",local_28);
  transparent_crc((long)g_2731,"g_2731",local_28);
  codemarker_alpha(0x1b1);
  transparent_crc((uint)g_2761 & 0x3ffff,"g_2761.f0",local_28);
  codemarker_alpha(0x1b2);
  transparent_crc((uint)((ulong)g_2761 >> 0x20) & 0x7fffffff,"g_2761.f1",local_28);
  transparent_crc(DAT_0040de18,"g_2761.f2",local_28);
  codemarker_alpha(0x1b3);
  transparent_crc((long)((DAT_0040de20 << 3) >> 3),"g_2761.f3",local_28);
  codemarker_alpha(0x1b4);
  transparent_crc(DAT_0040de24 & 0x3fff,"g_2761.f4",local_28);
  transparent_crc((long)DAT_0040de26,"g_2761.f5",local_28);
  codemarker_alpha(0x1b5);
  transparent_crc((long)((DAT_0040de28 << 5) >> 5),"g_2761.f6",local_28);
  codemarker_alpha(0x1b6);
  transparent_crc((uint)g_2875 & 0x3ffff,"g_2875.f0",local_28);
  codemarker_alpha(0x1b7);
  transparent_crc((uint)((ulong)g_2875 >> 0x20) & 0x7fffffff,"g_2875.f1",local_28);
  transparent_crc(DAT_0040de38,"g_2875.f2",local_28);
  codemarker_alpha(0x1b8);
  transparent_crc((long)((DAT_0040de40 << 3) >> 3),"g_2875.f3",local_28);
  codemarker_alpha(0x1b9);
  transparent_crc(DAT_0040de44 & 0x3fff,"g_2875.f4",local_28);
  transparent_crc((long)DAT_0040de46,"g_2875.f5",local_28);
  codemarker_alpha(0x1ba);
  transparent_crc((long)((DAT_0040de48 << 5) >> 5),"g_2875.f6",local_28);
  transparent_crc(g_2905,"g_2905",local_28);
  transparent_crc((long)g_2991,"g_2991",local_28);
  codemarker_alpha(0x1bb);
  transparent_crc((uint)g_3009 & 0x3ffff,"g_3009.f0",local_28);
  codemarker_alpha(0x1bc);
  transparent_crc((uint)((ulong)g_3009 >> 0x20) & 0x7fffffff,"g_3009.f1",local_28);
  transparent_crc(DAT_0040de58,"g_3009.f2",local_28);
  codemarker_alpha(0x1bd);
  transparent_crc((long)((DAT_0040de60 << 3) >> 3),"g_3009.f3",local_28);
  codemarker_alpha(0x1be);
  transparent_crc(DAT_0040de64 & 0x3fff,"g_3009.f4",local_28);
  transparent_crc((long)DAT_0040de66,"g_3009.f5",local_28);
  codemarker_alpha(0x1bf);
  transparent_crc((long)((DAT_0040de68 << 5) >> 5),"g_3009.f6",local_28);
  transparent_crc(g_3038,"g_3038",local_28);
  transparent_crc((long)g_3068,"g_3068",local_28);
  codemarker_alpha(0x1c0);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    codemarker_alpha(0x1c1);
    transparent_crc((uint)*(undefined8 *)(g_3075 + (long)(int)local_1c * 0x20) & 0x3ffff,
                    "g_3075[i].f0",local_28);
    codemarker_alpha(0x1c2);
    transparent_crc((uint)((ulong)*(undefined8 *)(g_3075 + (long)(int)local_1c * 0x20) >> 0x20) &
                    0x7fffffff,"g_3075[i].f1",local_28);
    transparent_crc(*(undefined8 *)(g_3075 + (long)(int)local_1c * 0x20 + 8),"g_3075[i].f2",local_28
                   );
    codemarker_alpha(0x1c3);
    transparent_crc((long)((*(int *)(g_3075 + (long)(int)local_1c * 0x20 + 0x10) << 3) >> 3),
                    "g_3075[i].f3",local_28);
    codemarker_alpha(0x1c4);
    transparent_crc(*(ushort *)(g_3075 + (long)(int)local_1c * 0x20 + 0x14) & 0x3fff,"g_3075[i].f4",
                    local_28);
    transparent_crc((long)*(short *)(g_3075 + (long)(int)local_1c * 0x20 + 0x16),"g_3075[i].f5",
                    local_28);
    codemarker_alpha(0x1c5);
    transparent_crc((long)((*(int *)(g_3075 + (long)(int)local_1c * 0x20 + 0x18) << 5) >> 5),
                    "g_3075[i].f6",local_28);
    codemarker_alpha(0x1c6);
    if (local_28 != 0) {
      codemarker_alpha(0x1c7);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  platform_main_end(crc32_context ^ 0xffffffff,local_28);
  return 0;
}



void platform_main_begin(void)

{
  return;
}



void crc32_gentab(void)

{
  int local_18;
  uint local_14;
  uint local_c;

  for (local_14 = 0; (int)local_14 < 0x100; local_14 = local_14 + 1) {
    local_c = local_14;
    for (local_18 = 8; 0 < local_18; local_18 = local_18 + -1) {
      if ((local_c & 1) == 0) {
        local_c = local_c >> 1;
      }
      else {
        local_c = local_c >> 1 ^ 0xedb88320;
      }
    }
    *(uint *)(crc32_tab + (long)(int)local_14 * 4) = local_c;
  }
  return;
}



undefined8 func_1(void)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  int local_19f4;
  undefined1 local_16b8 [72];
  undefined8 local_1670;
  undefined1 local_1668 [160];
  undefined4 local_15c8;
  undefined4 local_15c4;
  undefined8 *local_15c0;
  undefined4 local_15b4;
  undefined **local_15b0;
  undefined8 local_15a8;
  undefined2 *local_15a0;
  undefined4 auStack_1594 [7];
  undefined ***local_1578;
  undefined **local_1570;
  undefined2 local_1564;
  undefined2 local_1562;
  undefined8 local_1560;
  undefined4 local_1554;
  undefined8 local_1550;
  undefined8 ***local_1548;
  undefined8 **local_1540;
  undefined8 *local_1538;
  undefined8 *local_1530;
  undefined8 *local_1528;
  undefined8 *local_1520;
  undefined8 *local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  undefined8 *local_1500;
  undefined8 *local_14f8;
  undefined8 *local_14f0;
  undefined8 *local_14e8;
  undefined8 *local_14e0;
  undefined8 *local_14d8;
  undefined8 *local_14d0;
  undefined8 *local_14c8;
  undefined8 *local_14c0;
  undefined8 *local_14b8;
  undefined8 *local_14b0;
  undefined8 *local_14a8;
  undefined8 local_14a0;
  undefined8 *local_1498;
  undefined8 *local_1490;
  undefined8 local_1488;
  undefined8 *local_1480;
  undefined8 *local_1478;
  undefined8 *local_1470;
  undefined8 *local_1468;
  undefined8 *local_1460;
  undefined8 *local_1458;
  undefined8 *local_1450;
  undefined8 *local_1448;
  undefined8 *local_1440;
  undefined8 *local_1438;
  undefined8 *local_1430;
  undefined8 local_1428;
  undefined8 *local_1420;
  undefined8 *local_1418;
  undefined8 local_1410;
  undefined8 *local_1408;
  undefined8 *local_1400;
  undefined8 *local_13f8;
  undefined8 *local_13f0;
  undefined8 *local_13e8;
  undefined8 *local_13e0;
  undefined8 *local_13d8;
  undefined8 *local_13d0;
  undefined8 *local_13c8;
  undefined8 *local_13c0;
  undefined8 *local_13b8;
  undefined8 *local_13b0;
  undefined8 local_13a8;
  undefined8 local_13a0;
  undefined8 *local_1398;
  undefined8 *local_1390;
  undefined8 *local_1388;
  undefined8 *local_1380;
  undefined8 *local_1378;
  undefined8 *local_1370;
  undefined8 *local_1368;
  undefined8 *local_1360;
  undefined8 *local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined8 *local_1340;
  undefined8 local_1330;
  undefined1 local_1328 [1920];
  undefined1 local_ba8 [734];
  undefined2 local_8ca;
  undefined1 local_8c8 [400];
  undefined1 local_738 [992];
  undefined8 local_358;
  int local_348;
  undefined1 local_341;
  undefined8 ***local_340;
  undefined8 **local_338;
  undefined8 *local_330;
  undefined8 local_328 [3];
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 *local_300;
  undefined1 local_2f8 [40];
  undefined8 *local_2d0;
  undefined **local_2c8;
  undefined8 *local_2c0;
  undefined **local_2b8;
  undefined8 *local_2b0;
  undefined1 auStack_2a8 [40];
  undefined8 *local_280;
  undefined **local_278;
  undefined8 local_270;
  undefined **local_268;
  undefined8 *local_260;
  undefined1 auStack_258 [40];
  undefined8 *local_230;
  undefined **local_228;
  undefined8 *local_220;
  undefined **local_218;
  undefined8 *local_210;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e1;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined1 local_1d8 [30];
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined ***local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined **local_110;
  undefined4 auStack_108 [12];
  undefined2 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_ba;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined **local_98;
  undefined8 *local_90;
  undefined1 local_85;
  undefined4 local_84;
  int *local_80;
  undefined8 auStack_78 [3];
  undefined4 local_5c;
  int local_58 [2];
  undefined8 local_50;
  undefined8 auStack_48 [8];

  local_50 = 0;
  local_58[1] = 0x4bd3031f;
  local_58[0] = -0x19a60625;
  local_5c = 1;
  codemarker_alpha(0);
  local_80 = local_58;
  local_84 = 1;
  local_85 = 1;
  local_90 = &g_655;
  local_98 = &g_2272;
  local_9c = 0xbf8ff190;
  local_a0 = 0x8c3a0dcd;
  local_a4 = 1;
  local_b8 = 0x800000008;
  local_b0 = 0x800000008;
  local_ba = 0xfffd;
  local_c0 = 0x7df41117;
  local_c8 = 1;
  local_cc = 1;
  local_d0 = 0;
  local_d8 = &g_700;
  local_110 = &g_341;
  local_114 = 0;
  local_120 = 0;
  codemarker_alpha(1);
  local_128 = &g_519;
  codemarker_alpha(2);
  local_130 = &g_519;
  codemarker_alpha(3);
  local_138 = 0;
  codemarker_alpha(4);
  local_140 = &local_130;
  codemarker_alpha(5);
  codemarker_alpha(6);
  for (local_144 = 0; local_144 < 7; local_144 = local_144 + 1) {
    auStack_48[local_144] = 0xfffffffffffffff6;
  }
  codemarker_alpha(7);
  for (local_144 = 0; local_144 < 2; local_144 = local_144 + 1) {
    auStack_78[local_144] = &g_456;
  }
  codemarker_alpha(8);
  for (local_144 = 0; local_144 < 9; local_144 = local_144 + 1) {
    auStack_108[local_144] = 1;
  }
  codemarker_alpha(9);
  for (g_3 = 5; -1 < g_3; g_3 = g_3 + -1) {
    local_148 = 0x8e8e41d3;
    local_14c = 0x1ddf2fb8;
    local_150 = 0x7b1d92d4;
    local_158 = 0x40a5b0;
    memset(&local_188,0,0x30);
    local_188 = 5;
    local_180 = 5;
    local_178 = 5;
    local_170 = 5;
    local_168 = 5;
    local_160 = 5;
    local_190 = 0xfffffffffffffffd;
    local_198 = 0x40a190;
    local_1a0 = &local_198;
    local_1a4 = 0x6b506c69;
    local_1a8 = 3;
    local_1b0 = 0xffffffffffffffff;
    local_1b8 = 0;
    local_1b9 = 0xff;
    local_1ba = 0xa7;
    memset(local_1d8,0,0x10);
    local_1d9 = 0xff;
    local_1e0 = 0xfc59df2;
    local_1e1 = 0xaa;
    local_1f0 = 2;
    local_1f8 = &DAT_0040bb58;
    local_200 = 0xffffffffffffffff;
    memcpy(local_2f8,&PTR_g_733_00406fd8,0x28);
    local_2d0 = &local_50;
    local_2c8 = &g_733;
    local_2c0 = &local_50;
    local_2b8 = &g_733;
    local_2b0 = &local_50;
    memcpy(auStack_2a8,&PTR_g_733_00407000,0x28);
    local_280 = &local_50;
    local_278 = &g_733;
    local_270 = 0;
    local_268 = &g_733;
    local_260 = &local_50;
    memcpy(auStack_258,&PTR_g_733_00407028,0x28);
    local_230 = &local_50;
    local_228 = &g_733;
    local_220 = &local_50;
    local_218 = &g_733;
    local_210 = &local_50;
    local_300 = &g_1185;
    local_308 = 0x34810804231bb296;
    codemarker_alpha(10);
    local_330 = local_328;
    local_338 = &local_330;
    local_340 = &local_338;
    local_341 = 0xf8;
    codemarker_alpha(0xb);
    codemarker_alpha(0xc);
    for (local_348 = 0; local_348 < 1; local_348 = local_348 + 1) {
      (&uStack_30c)[local_348] = 8;
    }
    codemarker_alpha(0xd);
    for (local_348 = 0; local_348 < 3; local_348 = local_348 + 1) {
      local_328[local_348] = &g_2212;
    }
    codemarker_alpha(0xe);
    for (g_4 = 6; -1 < g_4; g_4 = g_4 + -1) {
      codemarker_alpha(0xf);
      codemarker_alpha(0x10);
      for (g_5 = 5; -1 < g_5; g_5 = g_5 + -1) {
        codemarker_alpha(0x11);
        for (g_6 = 0; g_6 < 7; g_6 = g_6 + 1) {
          auStack_48[g_6] = 3;
        }
      }
    }
    codemarker_alpha(0x12);
    for (g_98 = 0; g_98 < 8; g_98 = g_98 + 1) {
      codemarker_alpha(0x13);
      local_358 = 0x40b170;
      memcpy(local_738,&DAT_00407060,0x3d4);
      memcpy(local_8c8,&DAT_00407440,0x188);
      local_8ca = 0x145b;
      memcpy(local_ba8,&DAT_004075d0,0x2d0);
      memcpy(local_1328,&DAT_004078a0,0x780);
      local_1330 = 0;
      local_1538 = &local_1330;
      local_1530 = &local_1330;
      local_1528 = &local_1330;
      local_1520 = &local_1330;
      local_1518 = &local_1330;
      local_1510 = 0;
      local_1508 = 0;
      local_1500 = &local_1330;
      local_14f8 = &local_1330;
      local_14f0 = &local_1330;
      local_14e8 = &local_1330;
      local_14e0 = &local_1330;
      local_14d8 = &local_1330;
      local_14d0 = &local_1330;
      local_14c8 = &local_1330;
      local_14c0 = &local_1330;
      local_14b8 = &local_1330;
      local_14b0 = &local_1330;
      local_14a8 = &local_1330;
      local_14a0 = 0;
      local_1498 = &local_1330;
      local_1490 = &local_1330;
      local_1488 = 0;
      local_1480 = &local_1330;
      local_1478 = &local_1330;
      local_1470 = &local_1330;
      local_1468 = &local_1330;
      local_1460 = &local_1330;
      local_1458 = &local_1330;
      local_1450 = &local_1330;
      local_1448 = &local_1330;
      local_1440 = &local_1330;
      local_1438 = &local_1330;
      local_1430 = &local_1330;
      local_1428 = 0;
      local_1420 = &local_1330;
      local_1418 = &local_1330;
      local_1410 = 0;
      local_1408 = &local_1330;
      local_1400 = &local_1330;
      local_13f8 = &local_1330;
      local_13f0 = &local_1330;
      local_13e8 = &local_1330;
      local_13e0 = &local_1330;
      local_13d8 = &local_1330;
      local_13d0 = &local_1330;
      local_13c8 = &local_1330;
      local_13c0 = &local_1330;
      local_13b8 = &local_1330;
      local_13b0 = &local_1330;
      local_13a8 = 0;
      local_13a0 = 0;
      local_1398 = &local_1330;
      local_1390 = &local_1330;
      local_1388 = &local_1330;
      local_1380 = &local_1330;
      local_1378 = &local_1330;
      local_1370 = &local_1330;
      local_1368 = &local_1330;
      local_1360 = &local_1330;
      local_1358 = &local_1330;
      local_1350 = 0;
      local_1348 = 0;
      local_1340 = &local_1330;
      local_1540 = &local_13f8;
      local_1548 = &local_1540;
      local_1550 = 0x40a668;
      local_1554 = 0xe5f0bf75;
      local_1560 = 0xffffffffffffffff;
      local_1562 = 0xb862;
      local_1564 = 0xd3fa;
      codemarker_alpha(0x14);
      local_1570 = &g_519;
      codemarker_alpha(0x15);
      local_1578 = &local_1570;
      codemarker_alpha(0x16);
      local_358 = *(undefined8 *)g_455;
    }
    codemarker_alpha(0x17);
    for (g_2247 = 1; g_2247 < 7; g_2247 = g_2247 + 1) {
      auStack_1594[3] = 0xfffffff6;
      local_15a0 = &g_1105;
      local_15a8 = 0;
      local_15b0 = &g_2178;
      local_15b4 = 0x5fc35057;
      local_15c0 = &local_50;
      local_15c4 = 1;
      local_15c8 = 0;
      memcpy(local_1668,&DAT_00408020,0xa0);
      local_1670 = 0x194014f9c21aff5f;
      memcpy(local_16b8,&DAT_004080c0,0x40);
      codemarker_alpha(0x18);
      codemarker_alpha(0x19);
      codemarker_alpha(0x1a);
      for (local_19f4 = 0; local_19f4 < 3; local_19f4 = local_19f4 + 1) {
        auStack_1594[local_19f4] = 1;
      }
    }
  }
  **(uint **)**(undefined8 **)g_1047 = **(uint **)**(undefined8 **)g_1047 ^ 0xd51ca35;
  uVar1 = **(uint **)*local_90;
  uVar5 = safe_div_func_uint32_t_u_u(0xfffffffb,*(undefined4 *)*g_655);
  lVar6 = safe_mul_func_int64_t_s_s((long)*local_80,1);
  ppuVar3 = local_128;
  ppuVar2 = local_130;
  bVar7 = uVar1 != uVar5 < (*local_80 < lVar6);
  *local_140 = local_130;
  bVar4 = safe_sub_func_uint8_t_u_u
                    (bVar7,((uint)(ppuVar3 == ppuVar2) ^ **(uint **)*local_90) & 0xff,
                     *(uint **)*local_90,bVar7);
  *(uint *)**(undefined8 **)g_654 = (uint)bVar4;
  *(uint *)g_1050 = (uint)bVar4;
  *(uint *)g_1331._8_8_ = (uint)bVar4 | *(uint *)g_1331._8_8_;
  return CONCAT62((int6)((ulong)g_2178 >> 0x10),*(undefined2 *)g_2178);
}



void transparent_crc(undefined8 param_1,undefined8 param_2,int param_3)

{
  crc32_8bytes(param_1);
  if (param_3 != 0) {
    printf("...checksum after hashing %s : %lX\n",param_2,(ulong)crc32_context ^ 0xffffffff);
  }
  return;
}



void platform_main_end(uint param_1)

{
  printf("checksum = %X\n",(ulong)param_1);
  return;
}



int safe_sub_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 - (uint)param_2;
}



uint safe_div_func_uint32_t_u_u(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 / param_2;
  }
  return local_14;
}



long safe_mul_func_int64_t_s_s(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long local_40;

  local_40 = param_1;
  if (((((param_1 < 1) || (param_2 < 1)) ||
       (auVar1._8_8_ = 0, auVar1._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
       param_1 <= SUB168((auVar1 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_2),0))) &&
      (((param_1 < 1 || (0 < param_2)) ||
       (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(-0x8000000000000000),8),
       SUB168((auVar2 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(param_1),0) <= param_2)))) &&
     ((((0 < param_1 || (param_2 < 1)) ||
       (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(-0x8000000000000000),8),
       SUB168((auVar3 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(param_2),0) <= param_1)) &&
      ((((0 < param_1 || (0 < param_2)) || (param_1 == 0)) ||
       (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
       SUB168((auVar4 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_1),0) <= param_2))))))
  {
    local_40 = param_1 * param_2;
  }
  return local_40;
}



void crc32_8bytes(ulong param_1)

{
  crc32_byte(param_1 & 0xff);
  crc32_byte((char)(param_1 >> 8));
  crc32_byte((char)(param_1 >> 0x10));
  crc32_byte((char)(param_1 >> 0x18));
  crc32_byte((char)(param_1 >> 0x20));
  crc32_byte((char)(param_1 >> 0x28));
  crc32_byte((char)(param_1 >> 0x30));
  crc32_byte((char)(param_1 >> 0x38));
  return;
}



void crc32_byte(byte param_1)

{
  crc32_context =
       crc32_context >> 8 ^ *(uint *)(crc32_tab + (ulong)((crc32_context ^ param_1) & 0xff) * 4);
  return;
}



void _fini(void)

{
  return;
}

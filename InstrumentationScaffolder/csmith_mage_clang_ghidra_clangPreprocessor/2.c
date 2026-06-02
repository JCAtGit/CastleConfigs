# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/2.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 406 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/2.c" 2
typedef unsigned char undefined;

typedef unsigned char byte;
typedef unsigned char dwfenc;
typedef unsigned int dword;
typedef unsigned long qword;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long undefined6;
typedef unsigned long undefined7;
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
undefined1 DAT_0040ebb0;
undefined1 DAT_0040ebbc;
undefined1 DAT_0040ebc8;
undefined1 DAT_0040ebd4;
undefined1 DAT_0040ebe0;
undefined1 DAT_0040ebec;
undefined DAT_00409240;
undefined DAT_00409244;
undefined DAT_00409249;
undefined DAT_0040924e;
undefined DAT_00409283;
undefined DAT_00409288;
undefined DAT_004092b1;
undefined DAT_004092d3;
undefined DAT_0040931e;
undefined DAT_00409323;
undefined8 g_8;
undefined4 g_26;
undefined2 g_32;
undefined4 g_37;
undefined8 g_44;
undefined4 g_58;
undefined4 g_61;
undefined1[576] g_62;
undefined4 g_63;
undefined1[288] g_64;
undefined4 g_65;
undefined8 g_83;
undefined8 g_91;
undefined2 g_96;
undefined4 g_99;
undefined1 g_106;
undefined8 g_143;
undefined1[100] g_232;
undefined DAT_00409454;
undefined2 g_289;
undefined1 g_326;
undefined8 g_348;
undefined4 g_355;
undefined4 g_385;
undefined8 g_499;
undefined8 g_670;
undefined4 g_732;
undefined2 g_763;
undefined8 g_821;
undefined8 g_860;
undefined3 g_870;
undefined1 g_930;
undefined4 g_956;
undefined4 g_975;
undefined8 g_1006;
undefined1 g_1019;
undefined8 g_1024;
undefined4 g_1209;
undefined4 g_1211;
undefined2 g_1281;
undefined1[432] g_1312;
undefined8 g_1323;
undefined4 crc32_context;
undefined1[1024] crc32_tab;
undefined *PTR_g_1211_00409560;
byte DAT_0040ebbc;
undefined DAT_0040ebec;
undefined *PTR_g_1235_004095e0;
undefined DAT_00409700;
pointer g_147;
undefined DAT_00409b00;
pointer g_1008;
undefined DAT_00409cb0;
undefined1[160] g_671;
undefined DAT_00409d50;
pointer g_388;
undefined DAT_00409da0;
undefined DAT_00409ee0;
undefined DAT_00409fb0;
undefined1[72] g_126;
undefined8 g_275;
undefined8 g_566;
undefined4 g_1349;
pointer g_1235;
pointer g_438;
undefined8 g_87;
undefined DAT_0040a008;
undefined DAT_0040a040;
undefined DAT_0040a078;
pointer g_146;
undefined8 g_836;
undefined8 g_231;
pointer g_82;
pointer g_36;
pointer g_311;
undefined DAT_0040a850;
undefined DAT_0040ac10;
pointer g_127;
undefined *PTR_g_26_0040aed0;
pointer g_809;
undefined DAT_0040b000;
undefined DAT_0040b1e0;
pointer PTR_g_96_0040b370;
undefined8 DAT_0040ec08;
pointer g_140;
pointer g_86;
pointer g_967;
undefined8 g_1050;
undefined *PTR_g_32_0040b600;
undefined *PTR_g_499_0040b640;
undefined DAT_0040b6a0;
pointer PTR_DAT_0040eb30;

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

  codemarker_alpha(0x4b);
  codemarker_alpha(0x4c);
  local_28 = 0;
  codemarker_alpha(0x4d);
  if (param_1 == 2) {
    iVar1 = strcmp(*(char **)(param_2 + 8),"1");
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  codemarker_alpha(0x4e);
  platform_main_begin();
  codemarker_alpha(0x4f);
  crc32_gentab();
  func_1();
  transparent_crc(g_8,&DAT_00409240,local_28);
  transparent_crc((long)g_26,&DAT_00409244,local_28);
  transparent_crc((long)g_32,&DAT_00409249,local_28);
  transparent_crc((long)g_37,&DAT_0040924e,local_28);
  codemarker_alpha(0x50);
  transparent_crc((uint)g_44 & 0x7fff,"g_44.f0",local_28);
  codemarker_alpha(0x51);
  transparent_crc((long)(int)(char)((ulong)(g_44 << 0x29) >> 0x38),"g_44.f1",local_28);
  codemarker_alpha(0x52);
  transparent_crc((long)(int)((g_44 << 0x16) >> 0x36),"g_44.f2",local_28);
  codemarker_alpha(0x53);
  transparent_crc((uint)((ulong)g_44 >> 0x2a) & 0x3fff,"g_44.f3",local_28);
  codemarker_alpha(0x54);
  transparent_crc((byte)((ulong)g_44 >> 0x38) & 0x1f,"g_44.f4",local_28);
  codemarker_alpha(0x55);
  transparent_crc(DAT_0040ebb0,"g_44.f5",local_28);
  transparent_crc((long)g_58,&DAT_00409283,local_28);
  transparent_crc((long)g_61,&DAT_00409288,local_28);
  codemarker_alpha(0x56);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x57);
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      codemarker_alpha(0x58);
      for (local_24 = 0; (int)local_24 < 9; local_24 = local_24 + 1) {
        codemarker_alpha(0x59);
        transparent_crc((long)*(int *)(g_62 + (long)(int)local_24 * 4 +
                                              (long)(int)local_20 * 0x24 +
                                              (long)(int)local_1c * 0x90),"g_62[i][j][k]",local_28);
        codemarker_alpha(0x5a);
        if (local_28 != 0) {
          codemarker_alpha(0x5b);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc((long)g_63,&DAT_004092b1,local_28);
  codemarker_alpha(0x5c);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    codemarker_alpha(0x5d);
    for (local_20 = 0; (int)local_20 < 8; local_20 = local_20 + 1) {
      codemarker_alpha(0x5e);
      transparent_crc((long)*(int *)(g_64 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x20),
                      "g_64[i][j]",local_28);
      codemarker_alpha(0x5f);
      if (local_28 != 0) {
        codemarker_alpha(0x60);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_65,&DAT_004092d3,local_28);
  codemarker_alpha(0x61);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x62);
    transparent_crc((&g_83)[(int)local_1c],"g_83[i]",local_28);
    codemarker_alpha(99);
    if (local_28 != 0) {
      codemarker_alpha(100);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x65);
  transparent_crc((uint)g_91 & 0x7fff,"g_91.f0",local_28);
  codemarker_alpha(0x66);
  transparent_crc((long)(int)(char)((ulong)(g_91 << 0x29) >> 0x38),"g_91.f1",local_28);
  codemarker_alpha(0x67);
  transparent_crc((long)(int)((g_91 << 0x16) >> 0x36),"g_91.f2",local_28);
  codemarker_alpha(0x68);
  transparent_crc((uint)((ulong)g_91 >> 0x2a) & 0x3fff,"g_91.f3",local_28);
  codemarker_alpha(0x69);
  transparent_crc((byte)((ulong)g_91 >> 0x38) & 0x1f,"g_91.f4",local_28);
  codemarker_alpha(0x6a);
  transparent_crc(DAT_0040ebbc,"g_91.f5",local_28);
  transparent_crc(g_96,&DAT_0040931e,local_28);
  transparent_crc((long)g_99,&DAT_00409323,local_28);
  transparent_crc(g_106,"g_106",local_28);
  transparent_crc(g_143,"g_143",local_28);
  codemarker_alpha(0x6b);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x6c);
    for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
      codemarker_alpha(0x6d);
      transparent_crc((long)*(short *)(g_232 + (long)(int)local_20 * 2 + (long)(int)local_1c * 10),
                      "g_232[i][j]",local_28);
      codemarker_alpha(0x6e);
      if (local_28 != 0) {
        codemarker_alpha(0x6f);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_289,"g_289",local_28);
  transparent_crc(g_326,"g_326",local_28);
  codemarker_alpha(0x70);
  transparent_crc((uint)g_348 & 0x7fff,"g_348.f0",local_28);
  codemarker_alpha(0x71);
  transparent_crc((long)(int)(char)((ulong)(g_348 << 0x29) >> 0x38),"g_348.f1",local_28);
  codemarker_alpha(0x72);
  transparent_crc((long)(int)((g_348 << 0x16) >> 0x36),"g_348.f2",local_28);
  codemarker_alpha(0x73);
  transparent_crc((uint)((ulong)g_348 >> 0x2a) & 0x3fff,"g_348.f3",local_28);
  codemarker_alpha(0x74);
  transparent_crc((byte)((ulong)g_348 >> 0x38) & 0x1f,"g_348.f4",local_28);
  codemarker_alpha(0x75);
  transparent_crc(DAT_0040ebc8,"g_348.f5",local_28);
  codemarker_alpha(0x76);
  for (local_1c = 0; (int)local_1c < 1; local_1c = local_1c + 1) {
    codemarker_alpha(0x77);
    transparent_crc((&g_355)[(int)local_1c],"g_355[i]",local_28);
    codemarker_alpha(0x78);
    if (local_28 != 0) {
      codemarker_alpha(0x79);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_385,"g_385",local_28);
  codemarker_alpha(0x7a);
  transparent_crc((uint)g_499 & 0x7fff,"g_499.f0",local_28);
  codemarker_alpha(0x7b);
  transparent_crc((long)(int)(char)((ulong)(g_499 << 0x29) >> 0x38),"g_499.f1",local_28);
  codemarker_alpha(0x7c);
  transparent_crc((long)(int)((g_499 << 0x16) >> 0x36),"g_499.f2",local_28);
  codemarker_alpha(0x7d);
  transparent_crc((uint)((ulong)g_499 >> 0x2a) & 0x3fff,"g_499.f3",local_28);
  codemarker_alpha(0x7e);
  transparent_crc((byte)((ulong)g_499 >> 0x38) & 0x1f,"g_499.f4",local_28);
  codemarker_alpha(0x7f);
  transparent_crc(DAT_0040ebd4,"g_499.f5",local_28);
  transparent_crc(g_670,"g_670",local_28);
  transparent_crc((long)g_732,"g_732",local_28);
  transparent_crc(g_763,"g_763",local_28);
  transparent_crc(g_821,"g_821",local_28);
  transparent_crc(g_860,"g_860",local_28);
  codemarker_alpha(0x80);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x81);
    transparent_crc((long)*(char *)((long)&g_870 + (long)(int)local_1c),"g_870[i]",local_28);
    codemarker_alpha(0x82);
    if (local_28 != 0) {
      codemarker_alpha(0x83);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_930,"g_930",local_28);
  transparent_crc((long)g_956,"g_956",local_28);
  transparent_crc((long)g_975,"g_975",local_28);
  transparent_crc(g_1006,"g_1006",local_28);
  codemarker_alpha(0x84);
  for (local_1c = 0; (int)local_1c < 7; local_1c = local_1c + 1) {
    codemarker_alpha(0x85);
    transparent_crc((long)(char)(&g_1019)[(int)local_1c],"g_1019[i]",local_28);
    codemarker_alpha(0x86);
    if (local_28 != 0) {
      codemarker_alpha(0x87);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x88);
  transparent_crc((uint)g_1024 & 0x7fff,"g_1024.f0",local_28);
  codemarker_alpha(0x89);
  transparent_crc((long)(int)(char)((ulong)(g_1024 << 0x29) >> 0x38),"g_1024.f1",local_28);
  codemarker_alpha(0x8a);
  transparent_crc((long)(int)((g_1024 << 0x16) >> 0x36),"g_1024.f2",local_28);
  codemarker_alpha(0x8b);
  transparent_crc((uint)((ulong)g_1024 >> 0x2a) & 0x3fff,"g_1024.f3",local_28);
  codemarker_alpha(0x8c);
  transparent_crc((byte)((ulong)g_1024 >> 0x38) & 0x1f,"g_1024.f4",local_28);
  codemarker_alpha(0x8d);
  transparent_crc(DAT_0040ebe0,"g_1024.f5",local_28);
  transparent_crc(g_1209,"g_1209",local_28);
  transparent_crc(g_1211,&DAT_00409454,local_28);
  codemarker_alpha(0x8e);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x8f);
    transparent_crc((&g_1281)[(int)local_1c],"g_1281[i]",local_28);
    codemarker_alpha(0x90);
    if (local_28 != 0) {
      codemarker_alpha(0x91);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x92);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    codemarker_alpha(0x93);
    for (local_20 = 0; (int)local_20 < 8; local_20 = local_20 + 1) {
      codemarker_alpha(0x94);
      for (local_24 = 0; (int)local_24 < 3; local_24 = local_24 + 1) {
        codemarker_alpha(0x95);
        transparent_crc(*(undefined2 *)
                         (g_1312 + (long)(int)local_24 * 2 +
                                   (long)(int)local_20 * 6 + (long)(int)local_1c * 0x30),
                        "g_1312[i][j][k]",local_28);
        codemarker_alpha(0x96);
        if (local_28 != 0) {
          codemarker_alpha(0x97);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0x98);
  transparent_crc((uint)g_1323 & 0x7fff,"g_1323.f0",local_28);
  codemarker_alpha(0x99);
  transparent_crc((long)(int)(char)((ulong)(g_1323 << 0x29) >> 0x38),"g_1323.f1",local_28);
  codemarker_alpha(0x9a);
  transparent_crc((long)(int)((g_1323 << 0x16) >> 0x36),"g_1323.f2",local_28);
  codemarker_alpha(0x9b);
  transparent_crc((uint)((ulong)g_1323 >> 0x2a) & 0x3fff,"g_1323.f3",local_28);
  codemarker_alpha(0x9c);
  transparent_crc((byte)((ulong)g_1323 >> 0x38) & 0x1f,"g_1323.f4",local_28);
  codemarker_alpha(0x9d);
  transparent_crc(DAT_0040ebec,"g_1323.f5",local_28);
  transparent_crc(0x4eede6b2,"g_1349",local_28);
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





undefined4 func_1(void)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar8;
  bool local_eb;
  int local_d4;
  undefined1 local_b8 [128];
  uint *local_38;
  byte local_29;
  ulong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  byte local_d;

  local_d = 0xfd;
  local_18 = 0;
  local_20 = 0;
  local_28 = &g_8;
  local_38 = &g_1209;
  memcpy(local_b8,&PTR_g_1211_00409560,0x80);
  codemarker_alpha(0);
  codemarker_alpha(1);
  for (local_d4 = 0; local_d4 < 1; local_d4 = local_d4 + 1) {
    (&local_29)[local_d4] = 0xf9;
  }
  *local_28 = (ulong)local_d;
  safe_mul_func_uint64_t_u_u(local_d);
  uVar5 = func_20(local_29);
  sVar3 = safe_div_func_int32_t_s_s(uVar5,0xbde09240);
  uVar6 = *local_38 | 0xffffcc21;
  *local_38 = uVar6;
  g_1211 = g_1211 + 1;
  cVar1 = safe_unary_minus_func_uint8_t_u((uVar6 ^ g_1211) & 0xff);
  uVar8 = extraout_RDX;
  if (cVar1 != '\0') {
    uVar7 = (ulong)local_29;
    uVar2 = safe_mul_func_uint8_t_u_u
                      ((ulong)local_29 != 0xd157f271,uVar6 & 0xff,extraout_RDX,
                       (ulong)local_29 != 0xd157f271);
    sVar4 = safe_mul_func_int16_t_s_s
                      (uVar7 == 0x6b9db40b81aab662,uVar2,extraout_RDX_00,uVar7 == 0x6b9db40b81aab662
                      );
    local_eb = true;
    uVar8 = extraout_RDX_01;
    if (sVar4 != 0) goto LAB_00401719;
  }
  local_eb = (int)((g_91 << 0x16) >> 0x36) != 0;
LAB_00401719:
  safe_mod_func_int16_t_s_s((int)sVar3,local_eb,uVar8,sVar3);
  func_11(0,0x62,local_29,0x6b9db40b81aab662);
  safe_rshift_func_uint64_t_u_s(local_d,g_106);
  g_26 = (uint)local_29;
  codemarker_alpha(2);
  g_32 = 0;
  return 1;
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



long safe_mul_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 * param_2;
}



ulong safe_rshift_func_uint64_t_u_s(ulong param_1,int param_2)

{
  ulong local_20;

  local_20 = param_1;
  if ((-1 < param_2) && (param_2 < 0x20)) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
  }
  return local_20;
}






undefined8 func_11(byte param_1,byte param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined2 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  ushort uVar8;
  undefined2 uVar9;
  short sVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  bool local_d69;
  bool local_d51;
  bool local_d39;
  bool local_d21;
  bool local_d11;
  bool local_d05;
  undefined1 local_c98 [64];
  undefined1 local_c58 [208];
  undefined1 *local_b88;
  uint *local_b80;
  undefined4 *local_b78;
  undefined4 *local_b70;
  undefined4 *local_b68;
  uint *local_b60;
  undefined8 local_b58;
  uint *local_b50;
  undefined4 *local_b48;
  undefined4 *local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined4 *local_b28;
  undefined4 *local_b20;
  uint *local_b18;
  undefined4 *local_b10;
  undefined4 *local_b08;
  undefined4 *local_b00;
  undefined1 *local_af8;
  undefined4 *local_af0;
  undefined8 local_ae8;
  undefined4 *local_ae0;
  undefined4 *local_ad8;
  undefined8 local_ad0;
  undefined4 *local_ac8;
  undefined1 *local_ac0;
  undefined8 local_ab8;
  undefined4 *local_ab0;
  int local_aa4;
  long *local_aa0;
  int local_a8c;
  undefined8 auStack_a88 [4];
  undefined1 local_a68 [52];
  undefined1 auStack_a34 [124];
  uint local_9b8 [36];
  long local_928;
  int local_914;
  undefined8 *local_910;
  undefined4 local_908;
  undefined1 auStack_904 [8];
  uint local_8fc [3];
  undefined1 *local_8f0;
  undefined1 local_8e8 [55];
  byte local_8b1;
  uint *local_898;
  undefined2 local_88a;
  undefined1 local_888 [164];
  undefined4 local_7e4;
  ulong local_7e0;
  undefined4 local_7d4;
  undefined8 *local_7d0;
  undefined8 *local_7c8;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined **local_7a0;
  undefined8 local_788;
  undefined8 local_780;
  undefined1 local_778 [440];
  undefined4 **local_5c0;
  undefined4 *local_5b8;
  uint *local_5b0;
  undefined2 *local_5a8;
  char local_599;
  undefined1 local_598 [16];
  undefined1 auStack_588 [476];
  uint local_3ac;
  uint local_344;
  uint local_334;
  uint local_21c;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_180;
  uint local_174;
  byte *local_170;
  undefined1 local_168 [288];
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulong local_28;
  uint local_1c;
  ulong local_18;
  byte local_b;
  byte local_a;
  byte local_9;

  local_28 = 0x5e15b7c2d63b64f4;
  local_30 = 0;
  local_38 = &local_30;
  local_40 = &local_38;
  local_48 = 0;
  local_1c = param_4;
  local_18 = param_3;
  local_b = param_2;
  local_a = param_1;
  memcpy(local_168,&PTR_g_1235_004095e0,0x120);
  local_170 = &g_1019;
  local_174 = 0xffffffff;
  local_180 = 0;
  local_1a8 = 0xfffffffe;
  local_1a0 = 0xfffffffe;
  local_198 = 0xfffffffe;
  local_190 = 0xfffffffe;
  memcpy(local_598,&DAT_00409700,0x3f0);
  local_599 = -2;
  local_5a8 = &g_32;
  local_5b0 = &g_99;
  local_5b8 = &g_1349;
  local_5c0 = &local_5b8;
  memcpy(local_778,&DAT_00409b00,0x1b0);
  local_780 = 0;
  local_788 = 0x40e3fa;
  codemarker_alpha(3);
  uVar8 = safe_rshift_func_uint16_t_u_u(local_b,0xb);
  uVar14 = local_28;
  bVar5 = safe_unary_minus_func_int8_t_s(0xfffffff6);
  uVar6 = safe_lshift_func_uint8_t_u_s(bVar5 ^ 0xff,local_28 & 0xffffffff);
  auVar17 = safe_sub_func_uint64_t_u_u(uVar6,0xffffffffffffffff);
  local_a = local_a & auVar17[0];
  safe_mul_func_uint16_t_u_u
            ((long)(char)local_a == local_28,local_b,auVar17._8_8_,(long)(char)local_a == local_28);
  uVar6 = safe_rshift_func_int32_t_s_u(uVar14 & 0xffffffff,0);
  bVar5 = safe_sub_func_uint8_t_u_u(uVar6,local_b);
  *local_170 = bVar5;
  local_d05 = bVar5 != 0 && local_28 != 0;
  local_174 = (uint)local_d05;
  bVar5 = safe_add_func_int16_t_s_s(0,local_d05);
  uVar11 = safe_add_func_uint64_t_u_u(uVar8 < 2 & bVar5,9);
  *(undefined4 *)g_147 = uVar11;
  codemarker_alpha(4);
  local_7a0 = &g_147;
  local_7a4 = 0x39608e32;
  local_7a8 = 0xce03d2a2;
  local_7ac = 0x664b995b;
  local_7b0 = 0x55c9dd32;
  local_7b4 = 0;
  local_7b8 = 0x9a5b9fa5;
  local_7bc = 0xffffffff;
  local_7c8 = &local_30;
LAB_00401be2:
  *local_7a0 = (undefined *)&local_1c;
  codemarker_alpha(5);
  g_1006 = 0;
  do {
    puVar4 = local_5a8;
    if (g_1006 < 0x1f) {
      g_956 = *(undefined8 **)*g_566 != local_7c8 ^ g_956;
      uVar13 = func_49(local_18 & 0xffffffff,local_18,local_3ac & 0xff);
      local_5b0 = (uint *)func_45(auStack_588,puVar4,uVar13);
      codemarker_alpha(0x10);
      for (g_143 = 0; uVar14 = local_18, -1 < g_143; g_143 = g_143 + -1) {
        codemarker_alpha(0x11);
        cVar7 = safe_sub_func_int8_t_s_s(5,(int)(char)*local_5b0);
        uVar12 = safe_lshift_func_uint64_t_u_u((long)cVar7,0x23);
        uVar15 = (uint)g_44;
        uVar14 = safe_sub_func_uint64_t_u_u((long)(int)*local_5b0,(long)*(int *)*local_7a0);
        g_1211 = (uint)(char)local_a;
        g_670 = (ulong)(int)(uint)(g_1211 <= uVar14);
        local_d69 = false;
        g_1209 = g_1211;
        if (g_670 < 10) {
          sVar10 = safe_mul_func_int16_t_s_s
                             ((int)(short)(char)local_a,(int)(short)(char)local_a,g_670,
                              (short)(char)local_a);
          local_d69 = sVar10 != 0;
        }
        uVar8 = safe_sub_func_uint16_t_u_u(local_d69,0x87aa);
        local_344 = local_344 &
                    uVar12 & 7 < ((int)(uint)((uVar15 & 0x7fff) != (uint)uVar8) <= (int)local_1c ^
                                 0xffffffff);
      }
      *local_5c0 = (undefined4 *)((long)&local_190 + 4);
      local_21c = (uint)((undefined4 *)((long)&local_190 + 4) == &g_1209);
      *local_170 = (byte)*local_5b0;
      *(bool *)local_788 =
           (int)(char)local_a <= (int)(uint)((int)(uint)(*local_5b0 == 0xff) < (int)*local_5b0);
      safe_add_func_int32_t_s_s(uVar14 & 0xffffffff,local_b != 0);
      *local_5b0 = (uint)(0x47ef < (long)((long)(int)*local_5b0 & local_18));
      uVar14 = CONCAT71((int7)((ulong)local_5b0 >> 8),local_a);
      local_9 = local_a;
LAB_0040290d:
      return CONCAT71((int7)(uVar14 >> 8),local_9);
    }
    codemarker_alpha(6);
    local_7d0 = &g_1024;
    local_7d4 = 0xffffffff;
    local_7e0 = 1;
    local_7e4 = 0;
    memcpy(local_888,&DAT_00409cb0,0xa0);
    local_88a = 0xffff;
    local_898 = &g_26;
    codemarker_alpha(7);
    *(undefined8 **)g_1008 = local_7d0;
    codemarker_alpha(8);
    for (g_96 = 0; 0x25 < g_96; g_96 = safe_add_func_int16_t_s_s((int)(short)g_96,4)) {
      memcpy(local_8e8,&DAT_00409d50,0x46);
      local_8f0 = g_671;
      local_910 = &local_180;
      codemarker_alpha(9);
      codemarker_alpha(10);
      for (local_914 = 0; local_914 < 4; local_914 = local_914 + 1) {
        *(undefined4 *)(auStack_904 + (long)local_914 * 4 + -4) = 0x18c56f29;
      }
      lVar1 = **(long **)g_388;
      *local_170 = local_8b1;
      safe_lshift_func_int8_t_s_s((int)(char)local_8b1,4);
      bVar5 = safe_add_func_int8_t_s_s(0xffffffff,local_8f0 == (undefined1 *)0x40e690);
      local_b = local_b & bVar5;
      safe_unary_minus_func_uint64_t_u(local_a != 0xfc);
      local_d11 = local_174 != 0 || local_b != 0;
      if (lVar1 == 0 && (local_d11 & (uint)local_190) == 0) {
        uVar14 = (ulong)local_334;
        local_9 = (byte)local_334;
        goto LAB_0040290d;
      }
      local_928 = 0;
      memcpy(local_a68,&DAT_00409da0,0x140);
      codemarker_alpha(0xb);
      codemarker_alpha(0xc);
      for (local_a8c = 0; local_a8c < 3; local_a8c = local_a8c + 1) {
        auStack_a88[local_a8c] = &g_289;
      }
      if (local_a != 0) {
        codemarker_alpha(0xd);
        goto LAB_00401be2;
      }
      codemarker_alpha(0xe);
      for (g_385 = 7; g_385 < 0x22; g_385 = safe_add_func_int32_t_s_s(g_385,2)) {
        local_aa0 = (long *)(g_126 + 0x38);
        local_aa4 = 9;
        local_ab0 = &g_37;
        local_b88 = auStack_a34;
        local_b80 = local_8fc;
        local_b78 = &g_26;
        local_b70 = &g_58;
        local_b68 = &g_37;
        local_b60 = local_9b8;
        local_b58 = 0;
        local_b50 = local_9b8;
        local_b48 = &g_37;
        local_b40 = &g_37;
        local_b38 = 0;
        local_b30 = 0;
        local_b28 = &g_37;
        local_b20 = &g_37;
        local_b18 = local_8fc;
        local_b10 = &g_99;
        local_b08 = &g_37;
        local_b00 = &g_26;
        local_af8 = auStack_a34;
        local_af0 = &g_37;
        local_ae8 = 0;
        local_ae0 = &local_908;
        local_ad8 = &local_908;
        local_ad0 = 0;
        local_ac8 = &g_37;
        local_ac0 = auStack_a34;
        local_ab8 = 0;
        memcpy(local_c58,&DAT_00409ee0,200);
        memcpy(local_c98,&DAT_00409fb0,0x38);
        codemarker_alpha(0xf);
        iVar3 = local_aa4;
        lVar1 = *g_275;
        *local_aa0 = lVar1;
        lVar2 = g_143;
        uVar8 = g_1281;
        local_d21 = true;
        if ((long)local_18 < (long)(int)(uint)(lVar1 != local_928)) {
          sVar10 = (short)((g_1024 << 0x16) >> 0x36);
          safe_lshift_func_uint32_t_u_s(0xfffffff7,local_7e0 & 0xffffffff);
          uVar15 = *(uint *)*local_7a0 ^ (uint)local_18;
          *(uint *)*local_7a0 = uVar15;
          uVar9 = safe_div_func_uint64_t_u_u
                            (0x3c91 < ((uint)(iVar3 < (int)(uint)(uVar8 != (lVar2 != (int)uVar15)))
                                      & (int)(char)local_a),0xfffffffffffffffc);
          uVar6 = safe_div_func_uint16_t_u_u(sVar10,uVar9,extraout_RDX,sVar10);
          cVar7 = safe_mod_func_uint8_t_u_u(uVar6,local_9b8[0] & 0xff,extraout_RDX_00,uVar6);
          local_d21 = cVar7 != '\0';
        }
        g_91 = g_91 & 0xfffffc00ffffffff |
               ((ulong)((uint)((long)(g_91 << 0x16) >> 0x36) |
                       (uint)(local_190._4_4_ < (local_d21 ^ local_8fc[0]))) & 0x3ff) << 0x20;
        local_599 = local_599 + '\x01';
        local_8fc[0] = (uint)DAT_0040ebbc;
        bVar16 = local_1c != local_8fc[0] < 0xfffa;
        uVar11 = safe_lshift_func_int32_t_s_u(1,0x1b);
        uVar11 = safe_lshift_func_int32_t_s_u(bVar16,uVar11);
        local_d39 = (local_910 != (undefined8 *)0x0) < 0x409d2096 && local_18 != 0;
        uVar11 = safe_sub_func_int32_t_s_s(uVar11,local_d39);
        uVar15 = safe_add_func_uint32_t_u_u(uVar11,local_88a);
        local_d51 = (uint)((uVar15 | local_28) <= (ulong)(ushort)g_1312._200_2_) ==
                    (uint)((g_44 << 0x16) >> 0x36) && local_a != 0;
        safe_add_func_uint16_t_u_u(local_d51 != (bool)local_b,0xce43);
        local_898 = (uint *)func_45(auStack_904,auStack_a88[2],&g_65);
      }
      if ((local_18 == 0) && (local_a == 0)) {
        *local_898 = (uint)local_8b1 | *local_898;
        local_1c = 0;
      }
    }
    g_1006 = g_1006 + 1;
  } while( true );
}



int safe_mod_func_int16_t_s_s(short param_1,short param_2)

{
  undefined4 local_10;

  if ((param_2 == 0) || ((param_1 == -0x8000 && (param_2 == -1)))) {
    local_10 = (int)param_1;
  }
  else {
    local_10 = (int)param_1 % (int)param_2;
  }
  return local_10;
}



int safe_div_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x80000000 || (param_2 != -1)))) {
    local_14 = param_1 / param_2;
  }
  return local_14;
}
# 1341 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/2.c"
undefined4 func_20(undefined4 param_1)

{
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48 [7];
  undefined4 local_2c;
  undefined4 auStack_28 [6];
  undefined4 local_10;

  local_2c = 0xffffffff;
  local_10 = param_1;
  memset(&local_78,0,0x28);
  local_78 = 0x12c1f1d811b0564d;
  local_70 = 0x38d0b5ebdd8ee182;
  local_68 = 0x12c1f1d811b0564d;
  local_60 = 0x38d0b5ebdd8ee182;
  local_58 = 0x12c1f1d811b0564d;
  codemarker_alpha(0x12);
  codemarker_alpha(0x13);
  for (local_7c = 0; local_7c < 5; local_7c = local_7c + 1) {
    auStack_28[local_7c] = 0xb9e675cc;
  }
  codemarker_alpha(0x14);
  for (local_7c = 0; local_7c < 7; local_7c = local_7c + 1) {
    local_48[local_7c] = 0xfffffff6;
  }
  codemarker_alpha(0x15);
  return (int)local_68;
}



int safe_unary_minus_func_uint8_t_u(byte param_1)

{
  return -(uint)param_1;
}



int safe_mul_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 * (int)param_2;
}



int safe_mul_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 * (uint)param_2;
}



long safe_add_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 + param_2;
}



uint safe_rshift_func_uint16_t_u_u(ushort param_1,uint param_2)

{
  undefined4 local_14;

  if (param_2 < 0x20) {
    local_14 = (int)(uint)param_1 >> ((byte)param_2 & 0x1f);
  }
  else {
    local_14 = (uint)param_1;
  }
  return local_14;
}



int safe_add_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 + (int)param_2;
}



int safe_sub_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 - (uint)param_2;
}



int safe_rshift_func_int32_t_s_u(int param_1,uint param_2)

{
  int local_14;

  local_14 = param_1;
  if ((-1 < param_1) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_mul_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 * (uint)param_2;
}



long safe_sub_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 - param_2;
}



uint safe_lshift_func_uint8_t_u_s(byte param_1,int param_2)

{
  undefined4 local_14;

  if (((param_2 < 0) || (0x1f < param_2)) || (0xff >> ((byte)param_2 & 0x1f) < (int)(uint)param_1))
  {
    local_14 = (uint)param_1;
  }
  else {
    local_14 = (uint)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_unary_minus_func_int8_t_s(char param_1)

{
  return -(int)param_1;
}



int safe_lshift_func_int8_t_s_s(char param_1,int param_2)

{
  undefined4 local_14;

  if ((((param_1 < '\0') || (param_2 < 0)) || (0x1f < param_2)) ||
     (0x7f >> ((byte)param_2 & 0x1f) < (int)param_1)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_add_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 + (int)param_2;
}



long safe_unary_minus_func_uint64_t_u(long param_1)

{
  return -param_1;
}



uint safe_mod_func_uint8_t_u_u(byte param_1,byte param_2)

{
  undefined4 local_10;

  if (param_2 == 0) {
    local_10 = (uint)param_1;
  }
  else {
    local_10 = (uint)((ulong)param_1 % (ulong)(long)(int)(uint)param_2);
  }
  return local_10;
}



uint safe_div_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  undefined4 local_10;

  if (param_2 == 0) {
    local_10 = (uint)param_1;
  }
  else {
    local_10 = (uint)((ulong)param_1 / (ulong)(long)(int)(uint)param_2);
  }
  return local_10;
}



ulong safe_div_func_uint64_t_u_u(ulong param_1,ulong param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 != 0) {
    local_20 = param_1 / param_2;
  }
  return local_20;
}



uint safe_lshift_func_uint32_t_u_s(uint param_1,int param_2)

{
  uint local_14;

  local_14 = param_1;
  if (((-1 < param_2) && (param_2 < 0x20)) && (param_1 <= 0xffffffffU >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



undefined4 * func_45(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [56];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 auStack_110 [56];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 auStack_a0 [56];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;

  local_28 = 0x40e3fa;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  memset(auStack_180,0,0x38);
  memcpy(auStack_180,&DAT_0040a008,0x38);
  local_148 = &local_28;
  local_140 = &local_28;
  local_138 = &local_28;
  local_130 = &local_28;
  local_128 = &local_28;
  local_120 = &local_28;
  local_118 = &local_28;
  memset(auStack_110,0,0x38);
  memcpy(auStack_110,&DAT_0040a040,0x38);
  local_d8 = &local_28;
  local_d0 = &local_28;
  local_c8 = &local_28;
  local_c0 = &local_28;
  local_b8 = &local_28;
  local_b0 = &local_28;
  local_a8 = &local_28;
  memset(auStack_a0,0,0x38);
  memcpy(auStack_a0,&DAT_0040a078,0x38);
  local_68 = &local_28;
  local_60 = &local_28;
  local_58 = &local_28;
  local_50 = &local_28;
  local_48 = &local_28;
  local_40 = &local_28;
  local_38 = &local_28;
  codemarker_alpha(0x3c);
  return &g_26;
}



int safe_add_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 + (uint)param_2;
}



int safe_add_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 + param_2;
}



uint safe_sub_func_int32_t_s_s(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (-1 < (int)((param_1 ^ param_2) &
                ((param_1 ^ (param_1 ^ param_2) & 0x80000000) - param_2 ^ param_2))) {
    local_14 = param_1 - param_2;
  }
  return local_14;
}



int safe_lshift_func_int32_t_s_u(int param_1,uint param_2)

{
  int local_14;

  local_14 = param_1;
  if (((-1 < param_1) && (param_2 < 0x20)) && (param_1 <= 0x7fffffff >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_add_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((((param_1 < 1) || (param_2 < 1)) || (param_1 <= 0x7fffffff - param_2)) &&
     (((-1 < param_1 || (-1 < param_2)) || (-0x80000000 - param_2 <= param_1)))) {
    local_14 = param_1 + param_2;
  }
  return local_14;
}
# 1725 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/2.c"
int * func_49(undefined4 param_1,ulong param_2,undefined1 param_3,undefined4 param_4)

{
  ulong uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int local_3c;
  undefined1 local_2d [5];
  undefined4 local_28;
  undefined1 local_21;
  ulong local_20;
  undefined4 local_14;

  local_28 = param_4;
  local_21 = param_3;
  local_20 = param_2;
  local_14 = param_1;
  codemarker_alpha(0x3d);
  codemarker_alpha(0x3e);
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    local_2d[local_3c] = 1;
  }
  codemarker_alpha(0x3f);
  uVar5 = extraout_RDX;
  for (g_65 = -0xd; uVar1 = g_83, g_65 == 9; g_65 = g_65 + 1) {
    uVar7 = g_821 | 1;
    g_821 = uVar7;
    sVar2 = safe_mod_func_int16_t_s_s((int)(short)local_14,1,uVar5,(short)local_14);
    uVar3 = safe_add_func_int64_t_s_s((long)sVar2 & local_20,5);
    uVar5 = safe_rshift_func_int64_t_s_u(0xffffffffffffffff,uVar3);
    uVar5 = safe_mul_func_uint64_t_u_u(uVar5,0x2c7576e62485093a);
    safe_lshift_func_uint64_t_u_u(uVar5,1);
    uVar6 = safe_add_func_int64_t_s_s(local_21,0xf94bf51e);
    uVar4 = safe_mul_func_int64_t_s_s(0xfffffffffffffff6 < uVar6,0xf94bf51e);
    uVar4 = (uint)uVar7 ^ uVar4;
    *(uint *)g_147 = uVar4;
    safe_mod_func_int32_t_s_s(uVar4,0x629e8306);
    safe_add_func_uint16_t_u_u(uVar1 & 0xffff,1);
    *g_87 = (int)local_20;
    uVar5 = extraout_RDX_00;
  }
  codemarker_alpha(0x40);
  g_821 = 0x1c;
  return &g_65;
}



ulong safe_lshift_func_uint64_t_u_u(ulong param_1,uint param_2)

{
  ulong local_20;

  local_20 = param_1;
  if ((param_2 < 0x20) && (param_1 <= 0xffffffffffffffffU >> ((byte)param_2 & 0x3f))) {
    local_20 = param_1 << ((byte)param_2 & 0x3f);
  }
  return local_20;
}



int safe_sub_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 - (int)param_2;
}



int safe_sub_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 - (uint)param_2;
}



int safe_mod_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x80000000 || (param_2 != -1)))) {
    local_14 = param_1 % param_2;
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



long safe_add_func_int64_t_s_s(long param_1,long param_2)

{
  long local_20;

  local_20 = param_1;
  if ((((param_1 < 1) || (param_2 < 1)) || (param_1 <= 0x7fffffffffffffff - param_2)) &&
     (((-1 < param_1 || (-1 < param_2)) || (-0x8000000000000000 - param_2 <= param_1)))) {
    local_20 = param_1 + param_2;
  }
  return local_20;
}



long safe_rshift_func_int64_t_s_u(long param_1,uint param_2)

{
  long local_20;

  local_20 = param_1;
  if ((-1 < param_1) && (param_2 < 0x20)) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
  }
  return local_20;
}



ulong safe_mod_func_uint64_t_u_u(ulong param_1,ulong param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 != 0) {
    local_20 = param_1 % param_2;
  }
  return local_20;
}



long safe_lshift_func_int64_t_s_u(long param_1,uint param_2)

{
  long local_20;

  local_20 = param_1;
  if (((-1 < param_1) && (param_2 < 0x20)) &&
     (param_1 <= 0x7fffffffffffffff >> ((byte)param_2 & 0x3f))) {
    local_20 = param_1 << ((byte)param_2 & 0x3f);
  }
  return local_20;
}



uint safe_lshift_func_uint8_t_u_u(byte param_1,uint param_2)

{
  undefined4 local_14;

  if ((param_2 < 0x20) && ((int)(uint)param_1 <= 0xff >> ((byte)param_2 & 0x1f))) {
    local_14 = (uint)param_1 << ((byte)param_2 & 0x1f);
  }
  else {
    local_14 = (uint)param_1;
  }
  return local_14;
}



undefined ** func_29(void)

{
  return &g_82;
}



undefined4 func_33(short *param_1)

{
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined7 uVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  bool local_1bf1;
  bool local_1bdd;
  bool local_1bb5;
  int local_1b9c;
  uint local_1478 [2];
  long **local_1470;
  undefined4 *local_1468;
  undefined4 *local_1460;
  undefined8 local_1458;
  long local_1450;
  long local_1448;
  undefined4 *local_1440;
  undefined4 *local_1438;
  undefined4 *local_1430;
  undefined4 *local_1428;
  undefined4 *local_1420;
  long local_1418;
  undefined4 *local_1410;
  undefined4 *local_1408;
  undefined4 *local_1400;
  undefined4 *local_13f8;
  undefined4 *local_13f0;
  undefined4 *local_13e8;
  undefined4 *local_13e0;
  undefined4 *local_13d8;
  undefined4 *local_13d0;
  undefined4 *local_13c8;
  long local_13c0;
  undefined4 *local_13b8;
  undefined4 *local_13b0;
  undefined4 *local_13a8;
  undefined4 *local_13a0;
  undefined8 local_1398;
  undefined4 *local_1390;
  long local_1388;
  undefined8 local_1380;
  undefined4 *local_1378;
  undefined4 *local_1370;
  undefined4 *local_1368;
  undefined4 *local_1360;
  undefined4 *local_1358;
  long local_1350;
  undefined8 local_1340;
  undefined8 local_1338;
  undefined4 *local_1330;
  int *local_1328;
  undefined8 local_1320;
  uint *local_1308;
  byte *local_1300;
  undefined1 local_12f8 [480];
  undefined1 local_1118 [408];
  long **local_f80;
  undefined1 local_f78 [24];
  uint local_f60;
  int local_f1c;
  undefined4 local_ed4;
  undefined4 local_e90;
  undefined4 local_e3c;
  int local_dc8;
  undefined **local_d98;
  uint local_d90;
  byte local_d8b;
  ushort local_d8a;
  undefined8 local_d80;
  undefined1 local_d78 [296];
  undefined4 *local_c50;
  uint *local_c48;
  undefined4 *local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  long *local_c20;
  uint local_c14;
  undefined4 *local_c10;
  undefined4 **local_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined8 local_be8;
  undefined8 local_be0;
  undefined8 local_bd8;
  uint local_bc4;
  uint *local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  uint local_ba8;
  ulong *local_ba0;
  undefined8 local_b98;
  int local_b8c;
  int local_b88;
  uint local_b84;
  long *local_b80;
  long local_b78 [9];
  undefined4 ****local_b30;
  int local_b28 [2];
  int local_b20;
  uint local_b1c;
  undefined4 *local_b18;
  int local_b0c;
  undefined4 ***local_b08;
  undefined4 **local_b00;
  undefined4 *local_af8;
  undefined1 *local_af0;
  undefined8 local_ae8 [2];
  undefined1 auStack_ad8 [16];
  long alStack_ac8 [4];
  undefined4 *local_aa8 [3];
  undefined4 local_a90;
  undefined4 local_a80;
  uint local_a7c;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  short *local_a50;
  short *local_a48;
  undefined2 *local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined2 *local_a28;
  undefined2 *local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  short *local_a08;
  undefined8 local_a00;
  short *local_9f8;
  undefined2 *local_9f0;
  undefined8 local_9e8;
  undefined2 *local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  short *local_9c8;
  short *local_9c0;
  short *local_9b8;
  undefined2 *local_9b0;
  undefined2 *local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined2 *local_990;
  undefined2 *local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined2 *local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  short *local_950;
  undefined8 local_948;
  undefined2 *local_940;
  short *local_938;
  undefined2 *local_930;
  undefined8 local_928;
  short *local_920;
  short *local_918;
  undefined2 *local_910;
  short *local_908;
  undefined2 *local_900;
  undefined8 local_8f8;
  undefined2 *local_8f0;
  short *local_8e8;
  short *local_8e0;
  undefined2 *local_8d8;
  undefined2 *local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  short *local_8a8;
  undefined8 local_8a0;
  undefined2 *local_898;
  short *local_890;
  undefined2 *local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined2 *local_870;
  short *local_868;
  undefined2 *local_860;
  undefined8 local_858;
  undefined2 *local_850;
  undefined8 local_848;
  undefined2 *local_840;
  undefined2 *local_838;
  undefined8 local_830;
  short *local_828;
  undefined8 local_820;
  undefined8 local_818;
  short *local_810;
  undefined8 local_808;
  short *local_800;
  undefined2 *local_7f8;
  undefined8 local_7f0;
  undefined2 *local_7e8;
  undefined8 local_7e0;
  char local_7c5;
  undefined4 local_7c4;
  undefined8 local_7c0;
  undefined1 local_7b8 [675];
  char local_515;
  undefined4 local_514;
  undefined8 *local_510;
  undefined4 local_504;
  short *local_500;
  undefined4 local_4f8;
  uint local_4f4;
  undefined8 *local_4f0;
  undefined8 local_4e8;
  int local_4d4;
  uint *local_4d0;
  undefined1 local_4c8 [792];
  undefined4 local_1b0;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined *****local_f0;
  undefined ****local_e8;
  undefined ***local_e0;
  undefined **local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [30];
  short local_1a;
  short *local_18;
  undefined1 local_9;

  local_1a = 9;
  local_c8 = auStack_60;
  local_c0 = auStack_60;
  local_b8 = auStack_60;
  local_b0 = auStack_38;
  local_a8 = auStack_60;
  local_a0 = auStack_60;
  local_98 = auStack_60;
  local_90 = auStack_60;
  local_88 = auStack_38;
  local_80 = auStack_48;
  local_cc = 0x15f42ab5;
  local_d8 = &g_82;
  local_e0 = &local_d8;
  local_e8 = &local_e0;
  local_f0 = &local_e8;
  local_f4 = 0xc59f4d72;
  local_f8 = 0xffffffff;
  local_fc = 0xb2fafb24;
  local_100 = 0xfffffffd;
  local_18 = param_1;
  memcpy(local_4c8,&DAT_0040a850,0x3c0);
  local_4d0 = (uint *)&g_65;
  codemarker_alpha(0x23);
  codemarker_alpha(0x24);
  for (local_4d4 = 0; local_4d4 < 10; local_4d4 = local_4d4 + 1) {
    local_78[local_4d4] = &g_385;
  }
  *(uint *)g_36 = (int)local_1a ^ *(uint *)g_36;
  *(int *)g_36 = (int)local_1a;
  codemarker_alpha(0x25);
  g_32 = 0;
  do {
    if (0 < g_32) {
      sVar8 = *local_18;
      bVar21 = g_1006 < ((uint)g_91 & 0x7fff) == local_cc;
      uVar3 = (undefined1)local_1a;
      uVar16 = *(uint *)g_147;
      *(uint *)g_147 = uVar16 | 0xb901a25c;
      uVar7 = safe_mul_func_int32_t_s_s(uVar16 | 0xb901a25c,(int)local_1a);
      bVar6 = safe_sub_func_uint8_t_u_u(uVar3,uVar7,extraout_RDX_05,uVar3);
      uVar16 = safe_div_func_uint32_t_u_u(local_f4,local_100);
      bVar6 = (bVar6 != uVar16 ^ 0xffU) & 1;
      sVar12 = safe_sub_func_int16_t_s_s(bVar6,(int)(short)local_fc,extraout_RDX_06,bVar6);
      uVar3 = safe_sub_func_int16_t_s_s
                        ((int)sVar8,(int)(uint)bVar21 < (int)sVar12 == local_cc,(int)sVar12,sVar8);
      uVar3 = safe_rshift_func_uint8_t_u_s(uVar3,(int)local_1a);
      safe_add_func_uint8_t_u_u(uVar3,local_f4 & 0xff,extraout_RDX_07,uVar3);
      safe_sub_func_uint32_t_u_u(local_1b0,0xffffffff);
      safe_div_func_int16_t_s_s(1,0xffffcd9b);
      *local_4d0 = *local_4d0 ^ 0xc2e12560;
      uVar16 = *local_4d0;
      local_9 = (undefined1)uVar16;
LAB_00406cf0:
      return CONCAT31((int3)(uVar16 >> 8),local_9);
    }
    local_4e8 = 0;
    local_4f0 = &DAT_0040ec08;
    local_4f4 = 0;
    local_4f8 = 0;
    local_500 = &local_1a;
    local_504 = 0x5739bde6;
    local_510 = &g_143;
    local_514 = 0x87ab7aed;
    local_515 = -0x55;
    memcpy(local_7b8,&DAT_0040ac10,0x2a0);
    local_7c0 = 0xfffffffffffffffa;
    local_7c4 = 0x75ffaaa7;
    local_7c5 = -0x5f;
    codemarker_alpha(0x26);
    codemarker_alpha(0x27);
    for (g_37 = 0; g_37 < 1; g_37 = g_37 + 1) {
      local_a58 = 0;
      local_a50 = &local_1a;
      local_a48 = &local_1a;
      local_a40 = &g_289;
      local_a38 = 0;
      local_a30 = 0;
      local_a28 = &g_289;
      local_a20 = &g_32;
      local_a18 = 0;
      local_a10 = 0;
      local_a08 = &local_1a;
      local_a00 = 0;
      local_9f8 = &local_1a;
      local_9f0 = &g_289;
      local_9e8 = 0;
      local_9e0 = &g_32;
      local_9d8 = 0;
      local_9d0 = 0;
      local_9c8 = &local_1a;
      local_9c0 = &local_1a;
      local_9b8 = &local_1a;
      local_9b0 = &g_32;
      local_9a8 = &g_32;
      local_9a0 = 0;
      local_998 = 0;
      local_990 = &g_289;
      local_988 = &g_289;
      local_980 = 0;
      local_978 = 0;
      local_970 = &g_32;
      local_968 = 0;
      local_960 = 0;
      local_958 = 0;
      local_950 = &local_1a;
      local_948 = 0;
      local_940 = &g_289;
      local_938 = &local_1a;
      local_930 = &g_32;
      local_928 = 0;
      local_920 = &local_1a;
      local_918 = &local_1a;
      local_910 = &g_289;
      local_908 = &local_1a;
      local_900 = &g_32;
      local_8f8 = 0;
      local_8f0 = &g_32;
      local_8e8 = &local_1a;
      local_8e0 = &local_1a;
      local_8d8 = &g_32;
      local_8d0 = &g_289;
      local_8c8 = 0;
      local_8c0 = 0;
      local_8b8 = 0;
      local_8b0 = 0;
      local_8a8 = &local_1a;
      local_8a0 = 0;
      local_898 = &g_289;
      local_890 = &local_1a;
      local_888 = &g_289;
      local_880 = 0;
      local_878 = 0;
      local_870 = &g_32;
      local_868 = &local_1a;
      local_860 = &g_32;
      local_858 = 0;
      local_850 = &g_32;
      local_848 = 0;
      local_840 = &g_32;
      local_838 = &g_289;
      local_830 = 0;
      local_828 = &local_1a;
      local_820 = 0;
      local_818 = 0;
      local_810 = &local_1a;
      local_808 = 0;
      local_800 = &local_1a;
      local_7f8 = &g_289;
      local_7f0 = 0;
      local_7e8 = &g_32;
      local_7e0 = 0;
      local_a78 = 0x3f50a6b03f50a6b;
      local_a70 = 0x3f50a6b03f50a6b;
      local_a68 = 0x3f50a6b03f50a6b;
      local_a60 = 0x3f50a6b03f50a6b;
      local_a7c = 0xcf61bd6f;
      local_a80 = 9;
      codemarker_alpha(0x28);
      iVar13 = (int)local_1a;
      uVar17 = func_54(local_1a);
      uVar15 = *(undefined4 *)g_147;
      *(undefined4 *)g_311 = uVar15;
      iVar14 = safe_mod_func_int32_t_s_s(uVar15,*(undefined4 *)g_147);
      uVar3 = safe_mod_func_uint64_t_u_u(0x8aec8fe4e6683cc1,(long)iVar14 ^ 0xa8e3);
      uVar17 = func_49(iVar13,uVar17,uVar3,g_355);
      uVar17 = func_45(uVar17,local_9c0,local_4e8);
      iVar13 = func_39(uVar17,(int)(char)((ulong)local_a60 >> 0x20),(long)local_a70._4_4_,local_4f0)
      ;
      if (iVar13 == 0) {
        local_c14 = 0;
        local_c20 = (long *)&g_143;
        local_c28 = 0;
        local_c30 = 0;
        local_c38 = 0;
        local_c40 = &g_975;
        local_c48 = &local_4f4;
        local_c50 = &g_58;
        memcpy(local_d78,&PTR_g_26_0040aed0,0x120);
        local_d80 = 0xb3e43bac35b054;
        codemarker_alpha(0x34);
        codemarker_alpha(0x35);
        bVar21 = (int)local_1a < (int)local_c14;
        bVar22 = local_90 == (undefined1 *)0x0;
        *local_c20 = (long)(int)(uint)bVar22;
        iVar13 = g_385;
        lVar18 = (long)g_975;
        g_385 = g_385 + -1;
        *(undefined4 *)g_147 = *(undefined4 *)g_147;
        local_1bdd = (iVar13 != 0 || local_a78._4_4_ != local_c14) && local_c14 != 0;
        uVar15 = safe_rshift_func_uint32_t_u_u(local_c14,local_1bdd);
        uVar15 = safe_add_func_int64_t_s_s(uVar15,0xffffffffffffffff);
        safe_mul_func_int32_t_s_s(0,uVar15);
        iVar13 = safe_add_func_uint32_t_u_u
                           (bVar21,((local_c14 & (int)*local_18) == local_a7c) <
                                   ((int)(uint)bVar22 != lVar18) ^ 4 ^ local_4f4);
        if (iVar13 == 0) {
          memcpy(local_f78,&DAT_0040b000,0x1e0);
          local_f80 = &local_c20;
          memcpy(local_1118,&DAT_0040b1e0,400);
          memcpy(local_12f8,&PTR_g_96_0040b370,0x1e0);
          local_1300 = (byte *)((long)&g_870 + 1);
          local_1308 = (uint *)((long)&local_a70 + 4);
          codemarker_alpha(0x37);
          codemarker_alpha(0x38);
          for (g_956 = 1; -1 < g_956; g_956 = g_956 + -1) {
            local_1320 = 0;
            local_1328 = &g_61;
            local_1330 = &g_99;
            local_1338 = 0;
            local_1340 = 0;
            local_1468 = &g_58;
            local_1460 = &g_61;
            local_1458 = 0;
            local_1450 = (long)&local_a60 + 4;
            local_1448 = (long)&local_a60 + 4;
            local_1440 = &local_4f8;
            local_1438 = &g_61;
            local_1430 = &g_58;
            local_1428 = &g_99;
            local_1420 = &g_975;
            local_1418 = (long)&local_a60 + 4;
            local_1410 = &g_975;
            local_1408 = &g_99;
            local_1400 = &g_61;
            local_13f8 = &g_65;
            local_13f0 = &g_975;
            local_13e8 = &g_975;
            local_13e0 = &g_975;
            local_13d8 = &g_65;
            local_13d0 = &g_99;
            local_13c8 = &g_99;
            local_13c0 = (long)&local_a78 + 4;
            local_13b8 = &g_975;
            local_13b0 = &local_4f8;
            local_13a8 = &g_65;
            local_13a0 = &g_65;
            local_1398 = 0;
            local_1390 = &g_975;
            local_1388 = (long)&local_a78 + 4;
            local_1380 = 0;
            local_1378 = &g_99;
            local_1370 = &g_65;
            local_1368 = &g_99;
            local_1360 = &g_975;
            local_1358 = &g_975;
            local_1350 = (long)&local_a60 + 4;
            local_1470 = &local_c20;
            codemarker_alpha(0x39);
            codemarker_alpha(0x3a);
            for (local_1b9c = 0; local_1b9c < 2; local_1b9c = local_1b9c + 1) {
              local_1478[local_1b9c] = 2;
            }
            *local_c20 = -0xc20d8b172cc0e00;
            *(uint *)g_147 = local_c14 | 0x8d33f200;
            local_dc8 = local_dc8 + -1;
            uVar10 = (undefined2)local_c14;
            g_1050 = &g_670;
            *local_1470 = &g_670;
            uVar20 = safe_mul_func_int64_t_s_s(7,0xffffffffffffffff);
            *(long *)***local_e8 = *(long *)***local_e8 + 1;
            cVar4 = safe_sub_func_int8_t_s_s(0xfffffff9,(int)(char)local_1a);
            *local_1328 = (int)cVar4;
            uVar3 = safe_mod_func_int64_t_s_s(uVar20 | 1,local_e90);
            uVar3 = safe_mul_func_uint8_t_u_u(uVar3,local_c14 & 0xff,extraout_RDX_03,uVar3);
            iVar13 = safe_mul_func_int32_t_s_s(uVar3,0xd9a17d1e);
            cVar4 = safe_mod_func_int8_t_s_s(local_f60 < (iVar13 != local_f1c) != local_4f4,9);
            safe_mul_func_uint32_t_u_u((int)((int)cVar4 & local_1478[0]) < 0x3f,1);
            cVar4 = safe_div_func_int8_t_s_s
                              (&stack0x00000000 != (undefined1 *)0x40fcd0,(int)(char)local_504,
                               extraout_RDX_04,&stack0x00000000 != (undefined1 *)0x40fcd0);
            g_143 = (long)cVar4 & g_143;
            uVar9 = safe_add_func_uint16_t_u_u(uVar10,0x8958);
            *(uint *)g_147 = (uint)uVar9 & *(uint *)g_147;
          }
          *local_f80 = &g_670;
          local_510 = local_4f0;
          bVar21 = local_4f0 != &g_670;
          uVar3 = (undefined1)local_ed4;
          uVar20 = (long)(int)local_cc | 0x1a27dc9d2f8296c3;
          local_cc = (uint)uVar20;
          bVar6 = *g_438 != '\x01' | (byte)uVar20;
          uVar19 = (undefined7)(uVar20 >> 8);
          *local_1300 = bVar6;
          local_4f4 = (uint)bVar21;
          safe_mul_func_int8_t_s_s((int)(char)bVar6,(int)(char)local_e3c);
          uVar10 = safe_lshift_func_uint16_t_u_u(local_1300 != (byte *)0x0,2);
          safe_lshift_func_int32_t_s_u(uVar10,0x18);
          uVar17 = safe_div_func_uint64_t_u_u((long)(int)local_c14,1);
          uVar7 = safe_lshift_func_int64_t_s_s(uVar17,(byte)(g_91 >> 0x38) & 0x1f);
          safe_mod_func_uint8_t_u_u(uVar7,0xcf);
          bVar6 = safe_mul_func_uint8_t_u_u
                            (uVar3,0xfffe < (ulong)(long)local_1a,(long)local_1a,
                             CONCAT71(uVar19,uVar3));
          uVar16 = safe_lshift_func_int32_t_s_s(0x23c7fac < (ulong)bVar6,0x12);
          safe_rshift_func_uint64_t_u_s(bVar21 != uVar16,local_c14);
          *(undefined8 *)g_1008 = *(undefined8 *)g_1008;
          *local_1308 = **(uint **)g_146 & *local_1308;
        }
        else {
          local_d8a = 0xfffb;
          local_d8b = 1;
          local_d90 = 0x232e9de2;
          *(uint *)g_147 = *(uint *)g_147 ^ 3;
          local_cc = ((char)((ulong)(g_348 << 0x29) >> 0x38) < '\x01' != local_4f4 ^ 0xffU) & 1 ^
                     local_cc;
          sVar8 = safe_add_func_int16_t_s_s
                            ((int)(short)local_cc,1,0x4bc287bc8e92f5b5,(short)local_cc);
          safe_mod_func_uint64_t_u_u((long)sVar8,local_d8a);
          bVar6 = safe_rshift_func_uint32_t_u_u((byte)((ulong)g_348 >> 0x38) & 0x1f,5);
          bVar6 = bVar6 ^ (byte)local_c14;
          bVar6 = safe_mod_func_uint8_t_u_u(bVar6,local_c14 & 0xff,extraout_RDX_00,bVar6);
          local_1bf1 = local_a70._4_4_ <= (int)(uint)(local_a60._4_4_ <= (int)(uint)bVar6) ||
                       local_d8b != 0;
          cVar4 = safe_mul_func_uint64_t_u_u(1,local_1bf1);
          cVar4 = safe_add_func_int8_t_s_s((int)cVar4,(int)(char)*g_438,extraout_RDX_01,cVar4);
          uVar9 = safe_sub_func_int16_t_s_s
                            ((int)(short)cVar4,(int)*local_18,extraout_RDX_02,(short)cVar4);
          if (uVar9 == local_d8b) {
            uVar16 = CONCAT22((short)uVar9 >> 0xf,local_1a);
            local_9 = (undefined1)local_1a;
            goto LAB_00406cf0;
          }
          codemarker_alpha(0x36);
          local_d98 = &g_1008;
          cVar4 = safe_unary_minus_func_int8_t_s((int)(char)local_d8a);
          uVar16 = safe_sub_func_int64_t_s_s((long)cVar4,(long)local_a60._4_4_);
          sVar8 = local_1a;
          *(uint *)g_147 = *(uint *)g_147 | uVar16;
          g_1019 = (char)local_cc;
          uVar16 = (uint)g_1019;
          *(uint *)g_147 = uVar16;
          bVar21 = (int)(uVar16 & local_d8a < 0x61) <= (int)local_cc;
          *g_438 = bVar21;
          local_d90 = local_d90 | 0xeaae8c2f;
          safe_sub_func_int32_t_s_s(local_d8b,local_d90 ^ 0xffffffff);
          cVar4 = safe_sub_func_uint8_t_u_u
                            (bVar21,(int)g_32 <= (int)(uint)local_d8a,local_d8a,bVar21);
          sVar12 = safe_lshift_func_int16_t_s_u(cVar4 != '\0',g_91 >> 0x38 & 0x1f);
          *g_87 = *g_87 ^ (uint)(sVar8 < sVar12);
        }
        local_515 = local_515 + '\x01';
        local_7c5 = local_7c5 + '\x01';
      }
      else {
        local_a90 = 0xf18d1457;
        local_af0 = auStack_ad8;
        local_af8 = &g_956;
        local_b00 = &local_af8;
        local_b08 = &local_b00;
        codemarker_alpha(0x29);
        codemarker_alpha(0x2a);
        for (local_b0c = 0; local_b0c < 2; local_b0c = local_b0c + 1) {
          local_aa8[local_b0c] = &g_58;
        }
        codemarker_alpha(0x2b);
        for (local_b0c = 0; local_b0c < 3; local_b0c = local_b0c + 1) {
          alStack_ac8[local_b0c] = -0x46b19cbade204953;
        }
        codemarker_alpha(0x2c);
        for (local_b0c = 0; local_b0c < 3; local_b0c = local_b0c + 1) {
          local_ae8[local_b0c] = 0;
        }
        alStack_ac8[1] = alStack_ac8[1] + -1;
        codemarker_alpha(0x2d);
        if (*(ushort *)g_127 < 2) {
          *(uint *)g_147 = (uint)(((uint)((ulong)g_44 >> 0x2a) & 0x3fff) == 0);
          codemarker_alpha(0x2e);
          if (**(int **)g_809 != 0) break;
        }
        else {
          local_b18 = (undefined4 *)0x0;
          local_b1c = 0xfffffff9;
          memset(local_b28,0,0xc);
          local_b30 = &local_b08;
          local_b80 = local_b78 + 2;
          local_b84 = 0xffffffff;
          codemarker_alpha(0x2f);
          codemarker_alpha(0x30);
          for (local_b88 = 0; local_b88 < 4; local_b88 = local_b88 + 1) {
            codemarker_alpha(0x31);
            for (local_b8c = 0; local_b8c < 2; local_b8c = local_b8c + 1) {
              local_b78[(long)local_b88 * 2 + (long)local_b8c] = (long)&local_b00;
            }
          }
          *g_87 = 0xffffffff;
          codemarker_alpha(0x32);
          for (g_65 = 0xe; pppuVar2 = local_b08, g_65 != 8; g_65 = g_65 + -1) {
            local_b98 = 0;
            local_ba0 = &g_670;
            local_bb8 = 0x500000005;
            local_bb0 = 0x500000005;
            local_ba8 = 5;
            local_bc0 = (uint *)&g_385;
            local_bc4 = 0xac186765;
            memset(&local_bf8,0,0x28);
            local_bf8 = 1;
            local_bf0 = 1;
            local_be8 = 1;
            local_be0 = 1;
            local_bd8 = 1;
            local_c00 = local_aa8 + 1;
            codemarker_alpha(0x33);
            puVar1 = local_b18;
            sVar8 = safe_rshift_func_int16_t_s_s((int)*local_18,5);
            uVar9 = (ushort)(sVar8 < 9);
            uVar20 = (long)(int)(char)((ulong)(g_348 << 0x29) >> 0x38) ^ *local_ba0;
            g_96 = uVar9;
            *local_ba0 = uVar20;
            auVar23 = safe_rshift_func_int64_t_s_s(uVar20,0x19);
            local_1bb5 = true;
            if (auVar23._0_8_ == 0) {
              *g_438 = (char)local_ba8;
              local_b1c = local_ba8 & 0xff;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = (long)(int)local_1a;
              auVar23 = auVar23 << 0x40;
              local_1bb5 = local_b1c < (g_860 == (long)(int)local_1a);
            }
            uVar9 = safe_add_func_uint16_t_u_u(uVar9,local_1bb5 ^ 0xffff,auVar23._8_8_,uVar9);
            *local_bc0 = (uint)uVar9;
            safe_div_func_uint64_t_u_u(local_aa8[1] == &g_355,(long)local_b28[0]);
            *(uint *)g_147 = (uint)(puVar1 == &g_385);
            local_bc4 = puVar1 == &g_385 & local_bc4;
            cVar4 = safe_lshift_func_uint64_t_u_s((long)local_b20,0x3e);
            cVar4 = safe_sub_func_int8_t_s_s((int)cVar4,0xffffffff);
            cVar5 = safe_mod_func_int8_t_s_s((int)(char)local_1a,0xffffffff);
            uVar10 = safe_mul_func_uint64_t_u_u((long)cVar4,(long)cVar5);
            uVar15 = safe_rshift_func_int32_t_s_s(0x23beb7ae,8);
            if (local_bc4 == 0) {
              auVar23 = safe_sub_func_int64_t_s_s(1,0xfffffffffffffffa);
              bVar21 = ((long)local_a60._4_4_ <= auVar23._0_8_ ^ local_bc4) != (uint)local_a60;
              safe_sub_func_int8_t_s_s
                        (bVar21,(int)(char)local_bf8,auVar23._8_8_,
                         CONCAT71((int7)(int3)((ulong)local_a60 >> 0x28),bVar21));
              safe_mod_func_uint64_t_u_u(local_bf8,1);
            }
            uVar11 = safe_mul_func_uint32_t_u_u(uVar15,local_af0 == (undefined1 *)0x0);
            uVar9 = safe_add_func_uint16_t_u_u(uVar10,uVar11,extraout_RDX,uVar10);
            *(uint *)g_147 = (uint)uVar9;
            *(undefined8 *)g_86 = *(undefined8 *)g_140;
            *local_c00 = &local_4f4;
          }
          *local_b30 = local_b08;
          *local_b80 = 0;
          bVar6 = safe_mul_func_int32_t_s_s(0x76fde5ab,pppuVar2 == (undefined4 ***)0x0);
          safe_sub_func_uint8_t_u_u(0xfc,local_a7c & 0xff);
          safe_lshift_func_int32_t_s_u(bVar6 & local_b28[0] < 0x4c329f62,(int)local_1a);
          local_4f4 = 0;
          uVar16 = safe_div_func_uint32_t_u_u(0,1);
          local_b84 = uVar16 ^ local_b84;
          *(uint *)g_147 = *(uint *)g_147 | 1;
        }
        local_1a = 0;
        while (local_1a == 8) {
          local_c10 = &g_58;
          *(undefined4 **)g_967 = &g_58;
          local_1a = 9;
        }
      }
    }
    g_32 = g_32 + 1;
  } while( true );
}



long safe_rshift_func_int64_t_s_s(long param_1,int param_2)

{
  long local_20;

  local_20 = param_1;
  if (((-1 < param_1) && (-1 < param_2)) && (param_2 < 0x20)) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
  }
  return local_20;
}



int safe_sub_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 - (int)param_2;
}



int safe_lshift_func_int8_t_s_u(char param_1,uint param_2)

{
  undefined4 local_14;

  if (((param_1 < '\0') || (0x1f < param_2)) || (0x7f >> ((byte)param_2 & 0x1f) < (int)param_1)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_rshift_func_int8_t_s_s(char param_1,int param_2)

{
  undefined4 local_14;

  if (((param_1 < '\0') || (param_2 < 0)) || (0x1f < param_2)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



uint safe_rshift_func_uint8_t_u_s(byte param_1,int param_2)

{
  undefined4 local_14;

  if ((param_2 < 0) || (0x1f < param_2)) {
    local_14 = (uint)param_1;
  }
  else {
    local_14 = (int)(uint)param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



undefined4 func_39(undefined4 *param_1,char param_2)

{
  char cVar1;
  bool bVar2;

  codemarker_alpha(0x3b);
  for (g_96 = 0; g_96 < 5; g_96 = safe_add_func_int64_t_s_s(g_96)) {
    bVar2 = false;
    if (*g_438 != '\0') {
      safe_unary_minus_func_int64_t_s(1);
      safe_rshift_func_uint16_t_u_u((short)param_2,0);
      safe_add_func_uint32_t_u_u(0x55c48aea,0xffffffff);
      cVar1 = safe_sub_func_int8_t_s_s(1,0x7b);
      bVar2 = cVar1 != '\0';
    }
    *g_87 = (uint)!bVar2 ^ (int)g_870._1_1_;
  }
  return *param_1;
}



long func_54(undefined2 param_1)

{
  int local_b48;
  undefined8 auStack_b38 [4];
  undefined2 *local_b18;
  undefined2 *local_b10;
  undefined2 *local_b08;
  undefined2 *local_b00;
  undefined2 *local_af8;
  undefined2 *local_af0;
  undefined2 *local_ae8;
  undefined2 *local_ae0;
  undefined2 *local_ad8;
  undefined2 *local_ad0;
  undefined2 *local_ac8;
  undefined2 *local_ac0;
  undefined2 *local_ab8;
  undefined2 *local_ab0;
  undefined2 *local_aa8;
  undefined2 *local_aa0;
  undefined2 *local_a98;
  undefined2 *local_a90;
  undefined2 *local_a88;
  undefined2 *local_a80;
  undefined2 *local_a78;
  undefined2 *local_a70;
  undefined2 *local_a68;
  undefined2 *local_a60;
  undefined2 *local_a58;
  undefined2 *local_a50;
  undefined2 *local_a48;
  undefined2 *local_a40;
  undefined2 *local_a38;
  undefined2 *local_a30;
  undefined2 *local_a28;
  undefined2 *local_a20;
  undefined2 *local_a18;
  undefined2 *local_a10;
  undefined2 *local_a08;
  undefined2 *local_a00;
  undefined2 *local_9f8;
  undefined2 *local_9f0;
  undefined2 *local_9e8;
  undefined2 *local_9e0;
  undefined2 *local_9d8;
  undefined2 *local_9d0;
  undefined2 *local_9c8;
  undefined2 *local_9c0;
  undefined2 *local_9b8;
  undefined2 *local_9b0;
  undefined2 *local_9a8;
  undefined2 *local_9a0;
  undefined2 *local_998;
  undefined2 *local_990;
  undefined2 *local_988;
  undefined2 *local_980;
  undefined2 *local_978;
  undefined2 *local_970;
  undefined2 *local_968;
  undefined2 *local_960;
  undefined2 *local_958;
  undefined2 *local_950;
  undefined2 *local_948;
  undefined2 *local_940;
  undefined2 *local_938;
  undefined2 *local_930;
  undefined2 *local_928;
  undefined2 *local_920;
  undefined2 *local_918;
  undefined2 *local_910;
  undefined2 *local_908;
  undefined2 *local_900;
  undefined2 *local_8f8;
  undefined2 *local_8f0;
  undefined2 *local_8e8;
  undefined2 *local_8e0;
  undefined2 *local_8d8;
  undefined2 *local_8d0;
  undefined2 *local_8c8;
  undefined2 *local_8c0;
  undefined2 *local_8b8;
  undefined2 *local_8b0;
  undefined2 *local_8a8;
  undefined2 *local_8a0;
  undefined2 *local_898;
  undefined2 *local_890;
  undefined2 *local_888;
  undefined2 *local_880;
  undefined2 *local_878;
  undefined2 *local_870;
  undefined2 *local_868;
  undefined2 *local_860;
  undefined2 *local_858;
  undefined2 *local_850;
  undefined2 *local_848;
  undefined2 *local_840;
  undefined2 *local_838;
  undefined2 *local_830;
  undefined2 *local_828;
  undefined2 *local_820;
  undefined2 *local_818;
  undefined2 *local_810;
  undefined2 *local_808;
  undefined2 *local_800;
  undefined2 *local_7f8;
  undefined2 *local_7f0;
  undefined2 *local_7e8;
  undefined2 *local_7e0;
  undefined2 *local_7d8;
  undefined2 *local_7d0;
  undefined2 *local_7c8;
  undefined2 *local_7c0;
  undefined2 *local_7b8;
  undefined2 *local_7b0;
  undefined2 *local_7a8;
  undefined2 *local_7a0;
  undefined2 *local_798;
  undefined2 *local_790;
  undefined2 *local_788;
  undefined2 *local_780;
  undefined2 *local_778;
  undefined2 *local_770;
  undefined2 *local_768;
  undefined2 *local_760;
  undefined2 *local_758;
  undefined2 *local_750;
  undefined2 *local_748;
  undefined2 *local_740;
  undefined2 *local_738;
  undefined2 *local_730;
  undefined2 *local_728;
  undefined2 *local_720;
  undefined2 *local_718;
  undefined2 *local_710;
  undefined2 *local_708;
  undefined2 *local_700;
  undefined2 *local_6f8;
  undefined2 *local_6f0;
  undefined2 *local_6e8;
  undefined2 *local_6e0;
  undefined2 *local_6d8;
  undefined2 *local_6d0;
  undefined2 *local_6c8;
  undefined2 *local_6c0;
  undefined2 *local_6b8;
  undefined2 *local_6b0;
  undefined2 *local_6a8;
  undefined2 *local_6a0;
  undefined2 *local_698;
  undefined2 *local_690;
  undefined2 *local_688;
  undefined2 *local_680;
  undefined2 *local_678;
  undefined2 *local_670;
  undefined2 *local_668;
  undefined2 *local_660;
  undefined2 *local_658;
  undefined2 *local_650;
  undefined2 *local_648;
  undefined2 *local_640;
  undefined2 *local_638;
  undefined2 *local_630;
  undefined2 *local_628;
  undefined2 *local_620;
  undefined2 *local_618;
  undefined2 *local_610;
  undefined2 *local_608;
  undefined2 *local_600;
  undefined2 *local_5f8;
  undefined2 *local_5f0;
  undefined2 *local_5e8;
  undefined2 *local_5e0;
  undefined2 *local_5d8;
  undefined2 *local_5d0;
  undefined2 *local_5c8;
  undefined2 *local_5c0;
  undefined2 *local_5b8;
  undefined2 *local_5b0;
  undefined2 *local_5a8;
  undefined2 *local_5a0;
  undefined2 *local_598;
  undefined2 *local_590;
  undefined2 *local_588;
  undefined2 *local_580;
  undefined2 *local_578;
  undefined2 *local_570;
  undefined2 *local_568;
  undefined2 *local_560;
  undefined2 *local_558;
  undefined2 *local_550;
  undefined2 *local_548;
  undefined2 *local_540;
  undefined2 *local_538;
  undefined2 *local_530;
  undefined2 *local_528;
  undefined2 *local_520;
  undefined2 *local_518;
  undefined2 *local_510;
  undefined2 *local_508;
  undefined2 *local_500;
  undefined2 *local_4f8;
  undefined2 *local_4f0;
  undefined2 *local_4e8;
  undefined2 *local_4e0;
  undefined2 *local_4d8;
  undefined2 *local_4d0;
  undefined2 *local_4c8;
  undefined2 *local_4c0;
  undefined2 *local_4b8;
  undefined2 *local_4b0;
  undefined2 *local_4a8;
  undefined2 *local_4a0;
  undefined2 *local_498;
  undefined2 *local_490;
  undefined2 *local_488;
  undefined2 *local_480;
  undefined2 *local_478;
  undefined2 *local_470;
  undefined2 *local_468;
  undefined2 *local_460;
  undefined2 *local_458;
  undefined2 *local_450;
  undefined2 *local_448;
  undefined2 *local_440;
  undefined2 *local_438;
  undefined2 *local_430;
  undefined2 *local_428;
  undefined2 *local_420;
  undefined2 *local_418;
  undefined2 *local_410;
  undefined2 *local_408;
  undefined2 *local_400;
  undefined2 *local_3f8;
  undefined2 *local_3f0;
  undefined2 *local_3e8;
  undefined2 *local_3e0;
  undefined2 *local_3d8;
  undefined2 *local_3d0;
  undefined2 *local_3c8;
  undefined2 *local_3c0;
  undefined2 *local_3b8;
  undefined2 *local_3b0;
  undefined2 *local_3a8;
  undefined2 *local_3a0;
  undefined1 local_389;
  undefined2 **local_388;
  undefined2 *local_380;
  undefined1 local_378 [372];
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d1;
  undefined8 local_1d0;
  int local_1c0;
  undefined1 local_1b9;
  undefined1 local_1b8 [102];
  undefined2 local_152;
  undefined4 local_150;
  undefined2 local_14a;
  undefined4 local_148;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined4 local_140;
  undefined2 local_13a;
  undefined ***local_138;
  undefined **local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  int *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [72];
  undefined8 local_70;
  undefined8 auStack_68 [10];
  undefined1 local_11;
  undefined4 uStack_10;
  undefined2 local_c;
  ushort local_a;

  local_c = 0xca0f;
  local_11 = 0xd;
  local_70 = 0;
  local_a = param_1;
  memcpy(local_b8,&PTR_g_32_0040b600,0x40);
  local_c0 = &g_106;
  local_c8 = 0xe4000dc1baaaeb6f;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = &g_96;
  local_e8 = 0x40e6f8;
  local_f0 = &local_e8;
  local_f8 = &g_99;
  local_100 = 0;
  local_108 = 0;
  local_10c = 0x9c3bf444;
  local_128 = &local_c;
  local_120 = &local_c;
  local_130 = &PTR_DAT_0040eb30;
  local_138 = &local_130;
  local_13a = 5;
  local_140 = 0x90b95891;
  local_141 = 4;
  local_142 = 0xff;
  local_143 = 4;
  local_148 = 0xfffffffe;
  local_14a = 0;
  local_150 = 0;
  local_152 = 0xc3c0;
  codemarker_alpha(0x41);
  memcpy(local_1b8,&PTR_g_499_0040b640,0x60);
  local_1b9 = 0xb5;
  codemarker_alpha(0x42);
  codemarker_alpha(0x43);
  for (local_1c0 = 0; local_1c0 < 1; local_1c0 = local_1c0 + 1) {
    (&uStack_10)[local_1c0] = 5;
  }
  codemarker_alpha(0x44);
  for (local_1c0 = 0; local_1c0 < 10; local_1c0 = local_1c0 + 1) {
    auStack_68[local_1c0] = &g_127;
  }
  codemarker_alpha(0x45);
  for (local_a = 0xffe5; 0x31 < local_a; local_a = local_a + 1) {
    local_1d0 = 0;
    local_1d1 = 0xff;
    local_1d8 = 4;
    local_1dc = 3;
    local_1e0 = 0xffffffff;
    local_1e4 = 0x1648c3c2;
    local_1e8 = 0xffffffff;
    local_1ec = 0;
    local_1f0 = 0xffffffff;
    local_1f4 = 0xffffffff;
    local_1f8 = 1;
    local_1fc = 5;
    local_200 = 0x93b77ad3;
    local_204 = 0;
    memcpy(local_378,&DAT_0040b6a0,0x168);
    local_380 = &g_32;
    local_388 = &local_380;
    local_389 = 0x6d;
    local_b18 = &local_c;
    local_b10 = &local_c;
    local_b08 = &local_c;
    local_b00 = &local_c;
    local_af8 = &local_c;
    local_af0 = &local_c;
    local_ae8 = &local_c;
    local_ae0 = &local_c;
    local_ad8 = &local_c;
    local_ad0 = &local_c;
    local_ac8 = &local_c;
    local_ac0 = &local_c;
    local_ab8 = &local_c;
    local_ab0 = &local_c;
    local_aa8 = &local_c;
    local_aa0 = &local_c;
    local_a98 = &local_c;
    local_a90 = &local_c;
    local_a88 = &local_c;
    local_a80 = &local_c;
    local_a78 = &local_c;
    local_a70 = &local_c;
    local_a68 = &local_c;
    local_a60 = &local_c;
    local_a58 = &local_c;
    local_a50 = &local_c;
    local_a48 = &local_c;
    local_a40 = &local_c;
    local_a38 = &local_c;
    local_a30 = &local_c;
    local_a28 = &local_c;
    local_a20 = &local_c;
    local_a18 = &local_c;
    local_a10 = &local_c;
    local_a08 = &local_c;
    local_a00 = &local_c;
    local_9f8 = &local_c;
    local_9f0 = &local_c;
    local_9e8 = &local_c;
    local_9e0 = &local_c;
    local_9d8 = &local_c;
    local_9d0 = &local_c;
    local_9c8 = &local_c;
    local_9c0 = &local_c;
    local_9b8 = &local_c;
    local_9b0 = &local_c;
    local_9a8 = &local_c;
    local_9a0 = &local_c;
    local_998 = &local_c;
    local_990 = &local_c;
    local_988 = &local_c;
    local_980 = &local_c;
    local_978 = &local_c;
    local_970 = &local_c;
    local_968 = &local_c;
    local_960 = &local_c;
    local_958 = &local_c;
    local_950 = &local_c;
    local_948 = &local_c;
    local_940 = &local_c;
    local_938 = &local_c;
    local_930 = &local_c;
    local_928 = &local_c;
    local_920 = &local_c;
    local_918 = &local_c;
    local_910 = &local_c;
    local_908 = &local_c;
    local_900 = &local_c;
    local_8f8 = &local_c;
    local_8f0 = &local_c;
    local_8e8 = &local_c;
    local_8e0 = &local_c;
    local_8d8 = &local_c;
    local_8d0 = &local_c;
    local_8c8 = &local_c;
    local_8c0 = &local_c;
    local_8b8 = &local_c;
    local_8b0 = &local_c;
    local_8a8 = &local_c;
    local_8a0 = &local_c;
    local_898 = &local_c;
    local_890 = &local_c;
    local_888 = &local_c;
    local_880 = &local_c;
    local_878 = &local_c;
    local_870 = &local_c;
    local_868 = &local_c;
    local_860 = &local_c;
    local_858 = &local_c;
    local_850 = &local_c;
    local_848 = &local_c;
    local_840 = &local_c;
    local_838 = &local_c;
    local_830 = &local_c;
    local_828 = &local_c;
    local_820 = &local_c;
    local_818 = &local_c;
    local_810 = &local_c;
    local_808 = &local_c;
    local_800 = &local_c;
    local_7f8 = &local_c;
    local_7f0 = &local_c;
    local_7e8 = &local_c;
    local_7e0 = &local_c;
    local_7d8 = &local_c;
    local_7d0 = &local_c;
    local_7c8 = &local_c;
    local_7c0 = &local_c;
    local_7b8 = &local_c;
    local_7b0 = &local_c;
    local_7a8 = &local_c;
    local_7a0 = &local_c;
    local_798 = &local_c;
    local_790 = &local_c;
    local_788 = &local_c;
    local_780 = &local_c;
    local_778 = &local_c;
    local_770 = &local_c;
    local_768 = &local_c;
    local_760 = &local_c;
    local_758 = &local_c;
    local_750 = &local_c;
    local_748 = &local_c;
    local_740 = &local_c;
    local_738 = &local_c;
    local_730 = &local_c;
    local_728 = &local_c;
    local_720 = &local_c;
    local_718 = &local_c;
    local_710 = &local_c;
    local_708 = &local_c;
    local_700 = &local_c;
    local_6f8 = &local_c;
    local_6f0 = &local_c;
    local_6e8 = &local_c;
    local_6e0 = &local_c;
    local_6d8 = &local_c;
    local_6d0 = &local_c;
    local_6c8 = &g_96;
    local_6c0 = &local_c;
    local_6b8 = &g_96;
    local_6b0 = &g_96;
    local_6a8 = &local_c;
    local_6a0 = &g_96;
    local_698 = &g_96;
    local_690 = &local_c;
    local_688 = &g_96;
    local_680 = &g_96;
    local_678 = &local_c;
    local_670 = &g_96;
    local_668 = &g_96;
    local_660 = &local_c;
    local_658 = &g_96;
    local_650 = &g_96;
    local_648 = &local_c;
    local_640 = &g_96;
    local_638 = &g_96;
    local_630 = &local_c;
    local_628 = &g_96;
    local_620 = &g_96;
    local_618 = &local_c;
    local_610 = &g_96;
    local_608 = &g_96;
    local_600 = &local_c;
    local_5f8 = &g_96;
    local_5f0 = &g_96;
    local_5e8 = &local_c;
    local_5e0 = &g_96;
    local_5d8 = &g_96;
    local_5d0 = &local_c;
    local_5c8 = &g_96;
    local_5c0 = &g_96;
    local_5b8 = &local_c;
    local_5b0 = &g_96;
    local_5a8 = &g_96;
    local_5a0 = &local_c;
    local_598 = &g_96;
    local_590 = &g_96;
    local_588 = &local_c;
    local_580 = &g_96;
    local_578 = &g_96;
    local_570 = &local_c;
    local_568 = &g_96;
    local_560 = &g_96;
    local_558 = &local_c;
    local_550 = &g_96;
    local_548 = &g_96;
    local_540 = &local_c;
    local_538 = &g_96;
    local_530 = &g_96;
    local_528 = &local_c;
    local_520 = &g_96;
    local_518 = &g_96;
    local_510 = &local_c;
    local_508 = &g_96;
    local_500 = &g_96;
    local_4f8 = &local_c;
    local_4f0 = &g_96;
    local_4e8 = &g_96;
    local_4e0 = &local_c;
    local_4d8 = &g_96;
    local_4d0 = &g_96;
    local_4c8 = &local_c;
    local_4c0 = &g_96;
    local_4b8 = &g_96;
    local_4b0 = &local_c;
    local_4a8 = &g_96;
    local_4a0 = &g_96;
    local_498 = &local_c;
    local_490 = &g_96;
    local_488 = &g_96;
    local_480 = &local_c;
    local_478 = &g_96;
    local_470 = &g_96;
    local_468 = &local_c;
    local_460 = &g_96;
    local_458 = &g_96;
    local_450 = &local_c;
    local_448 = &g_96;
    local_440 = &g_96;
    local_438 = &local_c;
    local_430 = &g_96;
    local_428 = &g_96;
    local_420 = &local_c;
    local_418 = &g_96;
    local_410 = &g_96;
    local_408 = &local_c;
    local_400 = &g_96;
    local_3f8 = &g_96;
    local_3f0 = &local_c;
    local_3e8 = &g_96;
    local_3e0 = &g_96;
    local_3d8 = &local_c;
    local_3d0 = &g_96;
    local_3c8 = &g_96;
    local_3c0 = &local_c;
    local_3b8 = &g_96;
    local_3b0 = &g_96;
    local_3a8 = &local_c;
    local_3a0 = &g_96;
    codemarker_alpha(0x46);
    codemarker_alpha(0x47);
    for (local_b48 = 0; local_b48 < 3; local_b48 = local_b48 + 1) {
      auStack_b38[local_b48] = 0x767e866e5f2a4ef;
    }
  }
  return (long)*local_f8;
}



int safe_rshift_func_int16_t_s_s(short param_1,int param_2)

{
  undefined4 local_14;

  if (((param_1 < 0) || (param_2 < 0)) || (0x1f < param_2)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



ulong safe_lshift_func_uint64_t_u_s(ulong param_1,int param_2)

{
  ulong local_20;

  local_20 = param_1;
  if (((-1 < param_2) && (param_2 < 0x20)) &&
     (param_1 <= 0xffffffffffffffffU >> ((byte)param_2 & 0x3f))) {
    local_20 = param_1 << ((byte)param_2 & 0x3f);
  }
  return local_20;
}



int safe_mod_func_int8_t_s_s(char param_1,char param_2)

{
  undefined4 local_10;

  if ((param_2 == '\0') || ((param_1 == -0x80 && (param_2 == -1)))) {
    local_10 = (int)param_1;
  }
  else {
    local_10 = (int)param_1 % (int)param_2;
  }
  return local_10;
}



int safe_mul_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 * param_2;
}



int safe_rshift_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if (((-1 < param_1) && (-1 < param_2)) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



ulong safe_sub_func_int64_t_s_s(ulong param_1,ulong param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (-1 < (long)((param_1 ^ param_2) &
                 ((param_1 ^ (param_1 ^ param_2) & 0x8000000000000000) - param_2 ^ param_2))) {
    local_20 = param_1 - param_2;
  }
  return local_20;
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



int safe_mul_func_int32_t_s_s(int param_1,int param_2)

{
  int local_24;

  local_24 = param_1;
  if (((((param_1 < 1) || (param_2 < 1)) || (param_1 <= (int)(0x7fffffff / (long)param_2))) &&
      (((param_1 < 1 || (0 < param_2)) || (-0x80000000 / param_1 <= param_2)))) &&
     ((((0 < param_1 || (param_2 < 1)) || (-0x80000000 / param_2 <= param_1)) &&
      ((((0 < param_1 || (0 < param_2)) || (param_1 == 0)) ||
       ((int)(0x7fffffff / (long)param_1) <= param_2)))))) {
    local_24 = param_1 * param_2;
  }
  return local_24;
}



uint safe_rshift_func_uint32_t_u_u(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (param_2 < 0x20) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_lshift_func_int16_t_s_u(short param_1,uint param_2)

{
  undefined4 local_14;

  if (((param_1 < 0) || (0x1f < param_2)) || (0x7fff >> ((byte)param_2 & 0x1f) < (int)param_1)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_div_func_int8_t_s_s(char param_1,char param_2)

{
  undefined4 local_10;

  if ((param_2 == '\0') || ((param_1 == -0x80 && (param_2 == -1)))) {
    local_10 = (int)param_1;
  }
  else {
    local_10 = (int)param_1 / (int)param_2;
  }
  return local_10;
}



long safe_mod_func_int64_t_s_s(long param_1,long param_2)

{
  long local_20;

  local_20 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x8000000000000000 || (param_2 != -1)))) {
    local_20 = param_1 % param_2;
  }
  return local_20;
}



int safe_lshift_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_2 < 0x20)) &&
     (param_1 <= 0x7fffffff >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



long safe_lshift_func_int64_t_s_s(long param_1,int param_2)

{
  long local_20;

  local_20 = param_1;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_2 < 0x20)) &&
     (param_1 <= 0x7fffffffffffffff >> ((byte)param_2 & 0x3f))) {
    local_20 = param_1 << ((byte)param_2 & 0x3f);
  }
  return local_20;
}



uint safe_lshift_func_uint16_t_u_u(ushort param_1,uint param_2)

{
  undefined4 local_14;

  if ((param_2 < 0x20) && ((int)(uint)param_1 <= 0xffff >> ((byte)param_2 & 0x1f))) {
    local_14 = (uint)param_1 << ((byte)param_2 & 0x1f);
  }
  else {
    local_14 = (uint)param_1;
  }
  return local_14;
}



int safe_mul_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 * (int)param_2;
}



int safe_div_func_int16_t_s_s(short param_1,short param_2)

{
  undefined4 local_10;

  if ((param_2 == 0) || ((param_1 == -0x8000 && (param_2 == -1)))) {
    local_10 = (int)param_1;
  }
  else {
    local_10 = (int)param_1 / (int)param_2;
  }
  return local_10;
}



int safe_sub_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 - param_2;
}



int safe_add_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 + (uint)param_2;
}



long safe_unary_minus_func_int64_t_s(long param_1)

{
  undefined8 local_18;

  if (param_1 == -0x8000000000000000) {
    local_18 = -0x8000000000000000;
  }
  else {
    local_18 = -param_1;
  }
  return local_18;
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

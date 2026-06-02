# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/5.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 406 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/5.c" 2
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
undefined4 g_214;
ulong DAT_0040d4d8;
undefined8 g_259;
undefined1 DAT_0040d4e8;
undefined4 g_282;
ulong DAT_0040d4f1;
undefined8 g_306;
ulong DAT_0040d501;
ulong DAT_0040d511;
undefined8 g_314;
undefined4 g_354;
ulong DAT_0040d521;
undefined4 g_357;
ulong DAT_0040d531;
undefined4 g_371;
undefined4 g_434;
undefined8 g_456;
undefined1 DAT_0040d058;
undefined8 g_544;
undefined1 g_545;
undefined1[162] g_646;
undefined4 crc32_context;
undefined DAT_004082a4;
undefined2 g_21;
undefined8 g_42;
undefined DAT_004083ce;
undefined8 g_58;
undefined8 g_61;
undefined8 g_63;
undefined1[12] g_67;
undefined8 g_73;
undefined1[16] g_135;
undefined4 g_137;
undefined8 g_158;
undefined8 g_170;
undefined1[1024] crc32_tab;
short DAT_0040d036;
pointer g_448;
undefined DAT_0040d034;
long DAT_0040d059;
char DAT_0040d061;
undefined DAT_0040d4d8;
pointer g_184;
long DAT_0040d4f1;
pointer g_392;
pointer g_257;
undefined8 g_192;
pointer g_432;
pointer g_530;
pointer g_507;
pointer g_534;
undefined DAT_004084b0;
undefined DAT_00408d50;
pointer g_532;
undefined DAT_00408fa0;
undefined DAT_004090c0;
undefined DAT_00409390;
undefined DAT_004094b0;
undefined2 DAT_0040d03c;
uint UNK_0040d4ed;
undefined4 UNK_0040d51d;
pointer g_531;
pointer g_428;
undefined8 g_429;
pointer g_353;
undefined8 g_185;
pointer g_417;
pointer g_168;
pointer g_379;
pointer g_368;
undefined DAT_00409680;
short DAT_0040d03a;
undefined1 DAT_0040d061;
undefined8 DAT_0040d059;
short DAT_0040d042;
undefined8 DAT_0040d521;
undefined8 DAT_0040d511;
undefined *PTR_DAT_00409af0;
undefined DAT_00409f30;
undefined DAT_00409f70;
undefined1[448] g_144;
undefined DAT_00409fc0;
undefined DAT_0040a150;
undefined *PTR_DAT_0040a390;
undefined DAT_0040aaa0;
undefined *PTR_DAT_0040ab00;
undefined DAT_0040ae00;
undefined DAT_0040ae50;
undefined DAT_0040af90;
pointer g_171;
pointer g_172;
pointer g_169;
undefined8 g_255;
pointer g_283;
pointer g_285;
pointer g_352;
ushort DAT_0040d036;
undefined DAT_0040afc0;

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
  uint local_20;
  uint local_1c;

  codemarker_alpha(0x44);
  codemarker_alpha(0x45);
  local_28 = 0;
  codemarker_alpha(0x46);
  if (param_1 == 2) {
    iVar1 = strcmp(*(char **)(param_2 + 8),"1");
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  codemarker_alpha(0x47);
  platform_main_begin();
  codemarker_alpha(0x48);
  crc32_gentab();
  func_1();
  codemarker_alpha(0x49);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x4a);
    transparent_crc((long)(short)(&g_21)[(int)local_1c],"g_21[i]",local_28);
    codemarker_alpha(0x4b);
    if (local_28 != 0) {
      codemarker_alpha(0x4c);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x4d);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    transparent_crc(*(undefined8 *)((long)&g_42 + (long)(int)local_1c * 9),"g_42[i].f0",local_28);
    transparent_crc((long)(char)(&DAT_0040d058)[(long)(int)local_1c * 9],"g_42[i].f1",local_28);
    codemarker_alpha(0x4e);
    if (local_28 != 0) {
      codemarker_alpha(0x4f);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x50);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x51);
    transparent_crc(*(undefined2 *)((long)&g_58 + (long)(int)local_1c * 2),"g_58[i]",local_28);
    codemarker_alpha(0x52);
    if (local_28 != 0) {
      codemarker_alpha(0x53);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x54);
  transparent_crc((long)(g_61 << 0x25) >> 0x25,"g_61.f0",local_28);
  codemarker_alpha(0x55);
  transparent_crc((long)(g_61 << 0x23) >> 0x3e,"g_61.f1",local_28);
  codemarker_alpha(0x56);
  transparent_crc((uint)(g_61 >> 0x1d) & 0x1fffffff,"g_61.f2",local_28);
  codemarker_alpha(0x57);
  transparent_crc((long)(DAT_0040d4d8 << 0x2d | g_61 >> 0x13) >> 0x27,"g_61.f3",local_28);
  codemarker_alpha(0x58);
  transparent_crc((uint)(DAT_0040d4d8 >> 0x13) & 0x7ffff,"g_61.f4",local_28);
  codemarker_alpha(0x59);
  transparent_crc((uint)(DAT_0040d4d8 >> 0x26) & 0x3fffff,"g_61.f5",local_28);
  transparent_crc(g_63,&DAT_004082a4,local_28);
  codemarker_alpha(0x5a);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x5b);
    transparent_crc((long)*(int *)(g_67 + (long)(int)local_1c * 4),"g_67[i]",local_28);
    codemarker_alpha(0x5c);
    if (local_28 != 0) {
      codemarker_alpha(0x5d);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x5e);
  transparent_crc((uint)g_73 & 0x7fffffff,"g_73.f0",local_28);
  codemarker_alpha(0x5f);
  transparent_crc((long)(int)((g_73 << 6) >> 0x25),"g_73.f1",local_28);
  transparent_crc(DAT_0040d4e8,"g_73.f2",local_28);
  codemarker_alpha(0x60);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x61);
    transparent_crc(*(undefined4 *)(g_135 + (long)(int)local_1c * 4),"g_135[i]",local_28);
    codemarker_alpha(0x62);
    if (local_28 != 0) {
      codemarker_alpha(99);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc((long)g_137,"g_137",local_28);
  transparent_crc(g_158,"g_158",local_28);
  transparent_crc(g_170,"g_170",local_28);
  transparent_crc(g_214,"g_214",local_28);
  transparent_crc(g_259,"g_259",local_28);
  codemarker_alpha(100);
  transparent_crc((long)(_g_282 << 0x25) >> 0x25,"g_282.f0",local_28);
  codemarker_alpha(0x65);
  transparent_crc((long)(_g_282 << 0x23) >> 0x3e,"g_282.f1",local_28);
  codemarker_alpha(0x66);
  transparent_crc((uint)(_g_282 >> 0x1d) & 0x1fffffff,"g_282.f2",local_28);
  codemarker_alpha(0x67);
  transparent_crc((long)(DAT_0040d4f1 << 0x2d | _g_282 >> 0x13) >> 0x27,"g_282.f3",local_28);
  codemarker_alpha(0x68);
  transparent_crc((uint)(DAT_0040d4f1 >> 0x13) & 0x7ffff,"g_282.f4",local_28);
  codemarker_alpha(0x69);
  transparent_crc((uint)(DAT_0040d4f1 >> 0x26) & 0x3fffff,"g_282.f5",local_28);
  codemarker_alpha(0x6a);
  transparent_crc((long)(g_306 << 0x25) >> 0x25,"g_306.f0",local_28);
  codemarker_alpha(0x6b);
  transparent_crc((long)(g_306 << 0x23) >> 0x3e,"g_306.f1",local_28);
  codemarker_alpha(0x6c);
  transparent_crc((uint)(g_306 >> 0x1d) & 0x1fffffff,"g_306.f2",local_28);
  codemarker_alpha(0x6d);
  transparent_crc((long)(DAT_0040d501 << 0x2d | g_306 >> 0x13) >> 0x27,"g_306.f3",local_28);
  codemarker_alpha(0x6e);
  transparent_crc((uint)(DAT_0040d501 >> 0x13) & 0x7ffff,"g_306.f4",local_28);
  codemarker_alpha(0x6f);
  transparent_crc((uint)(DAT_0040d501 >> 0x26) & 0x3fffff,"g_306.f5",local_28);
  transparent_crc(g_314,"g_314",local_28);
  codemarker_alpha(0x70);
  transparent_crc((long)(_g_354 << 0x25) >> 0x25,"g_354.f0",local_28);
  codemarker_alpha(0x71);
  transparent_crc((long)(_g_354 << 0x23) >> 0x3e,"g_354.f1",local_28);
  codemarker_alpha(0x72);
  transparent_crc((uint)(_g_354 >> 0x1d) & 0x1fffffff,"g_354.f2",local_28);
  codemarker_alpha(0x73);
  transparent_crc((long)(DAT_0040d511 << 0x2d | _g_354 >> 0x13) >> 0x27,"g_354.f3",local_28);
  codemarker_alpha(0x74);
  transparent_crc((uint)(DAT_0040d511 >> 0x13) & 0x7ffff,"g_354.f4",local_28);
  codemarker_alpha(0x75);
  transparent_crc((uint)(DAT_0040d511 >> 0x26) & 0x3fffff,"g_354.f5",local_28);
  codemarker_alpha(0x76);
  transparent_crc((long)(_g_357 << 0x25) >> 0x25,"g_357.f0",local_28);
  codemarker_alpha(0x77);
  transparent_crc((long)(_g_357 << 0x23) >> 0x3e,"g_357.f1",local_28);
  codemarker_alpha(0x78);
  transparent_crc((uint)(_g_357 >> 0x1d) & 0x1fffffff,"g_357.f2",local_28);
  codemarker_alpha(0x79);
  transparent_crc((long)(DAT_0040d521 << 0x2d | _g_357 >> 0x13) >> 0x27,"g_357.f3",local_28);
  codemarker_alpha(0x7a);
  transparent_crc((uint)(DAT_0040d521 >> 0x13) & 0x7ffff,"g_357.f4",local_28);
  codemarker_alpha(0x7b);
  transparent_crc((uint)(DAT_0040d521 >> 0x26) & 0x3fffff,"g_357.f5",local_28);
  transparent_crc((long)g_371,&DAT_004083ce,local_28);
  transparent_crc((long)g_434,"g_434",local_28);
  codemarker_alpha(0x7c);
  transparent_crc((long)(g_456 << 0x25) >> 0x25,"g_456.f0",local_28);
  codemarker_alpha(0x7d);
  transparent_crc((long)(g_456 << 0x23) >> 0x3e,"g_456.f1",local_28);
  codemarker_alpha(0x7e);
  transparent_crc((uint)(g_456 >> 0x1d) & 0x1fffffff,"g_456.f2",local_28);
  codemarker_alpha(0x7f);
  transparent_crc((long)(DAT_0040d531 << 0x2d | g_456 >> 0x13) >> 0x27,"g_456.f3",local_28);
  codemarker_alpha(0x80);
  transparent_crc((uint)(DAT_0040d531 >> 0x13) & 0x7ffff,"g_456.f4",local_28);
  codemarker_alpha(0x81);
  transparent_crc((uint)(DAT_0040d531 >> 0x26) & 0x3fffff,"g_456.f5",local_28);
  codemarker_alpha(0x82);
  transparent_crc(0xffffffffffffff1a,"g_475.f0",local_28);
  codemarker_alpha(0x83);
  transparent_crc(0xffffffffffffffff,"g_475.f1",local_28);
  codemarker_alpha(0x84);
  transparent_crc(0xc53,"g_475.f2",local_28);
  codemarker_alpha(0x85);
  transparent_crc(0xffffffffffffe9e8,"g_475.f3",local_28);
  codemarker_alpha(0x86);
  transparent_crc(0x27c,"g_475.f4",local_28);
  codemarker_alpha(0x87);
  transparent_crc(0x3e3,"g_475.f5",local_28);
  transparent_crc(g_544,"g_544",local_28);
  transparent_crc(g_545,"g_545",local_28);
  codemarker_alpha(0x88);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    codemarker_alpha(0x89);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x8a);
      transparent_crc((long)*(short *)(g_646 + (long)(int)local_20 * 2 + (long)(int)local_1c * 0x12)
                      ,"g_646[i][j]",local_28);
      codemarker_alpha(0x8b);
      if (local_28 != 0) {
        codemarker_alpha(0x8c);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
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
# 777 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/5.c"
byte func_1(void)

{
  uint *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  undefined2 uVar12;
  ushort uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ushort uVar22;
  short *psVar23;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 extraout_DL_02;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  bool bVar24;
  undefined1 auVar25 [16];
  bool local_18c1;
  bool local_18a9;
  bool local_18a1;
  bool local_1879;
  bool local_1869;
  bool local_1861;
  undefined1 local_1788 [328];
  short *local_1640;
  undefined8 local_1638;
  undefined1 local_162d;
  uint local_162c;
  long local_1628;
  undefined8 local_1620;
  undefined1 local_1618;
  undefined8 local_1609;
  undefined1 local_1601;
  uint *local_15f0;
  byte **local_15e8;
  byte *local_15e0;
  undefined4 local_15d8;
  int local_15d4;
  undefined8 uStack_15d0;
  int local_15c4;
  long local_15c0;
  undefined4 auStack_15b8 [5];
  undefined4 local_15a4;
  undefined4 local_15a0;
  uint local_159c;
  int local_1590;
  undefined1 local_1589;
  long local_1588;
  byte local_1579;
  undefined8 local_1578;
  byte *local_1570;
  byte *local_1568;
  undefined8 local_1560;
  char *local_1558;
  undefined8 local_1550;
  undefined8 local_1548;
  undefined8 local_1540;
  undefined8 local_1538;
  char *local_1530;
  undefined8 local_1528;
  undefined8 local_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  byte *local_1508;
  byte *local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  byte *local_14e8;
  undefined8 local_14e0;
  char *local_14d8;
  undefined8 auStack_14c8 [7];
  ushort *local_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined4 local_1478;
  int local_146c;
  undefined1 local_1468 [16];
  uint local_1458;
  uint local_13f8;
  uint local_13d8;
  uint local_13b0;
  uint local_13ac;
  undefined1 local_13a8 [684];
  undefined8 local_10fc;
  undefined1 local_10f4;
  undefined8 **local_10c8;
  undefined8 **local_10c0;
  undefined8 **local_10b8;
  undefined8 **local_10b0;
  undefined8 **local_10a8;
  undefined8 **local_10a0;
  undefined8 **local_1098;
  undefined8 **local_1090;
  undefined8 **local_1088;
  undefined8 **local_1080;
  undefined8 **local_1078;
  undefined8 **local_1070;
  undefined8 **local_1068;
  undefined8 **local_1060;
  undefined8 **local_1058;
  undefined8 **local_1050;
  undefined8 **local_1048;
  undefined8 **local_1040;
  undefined8 **local_1038;
  undefined8 **local_1030;
  undefined8 **local_1028;
  undefined8 **local_1020;
  undefined8 **local_1018;
  undefined8 **local_1010;
  undefined8 **local_1008;
  undefined8 **local_1000;
  undefined8 **local_ff8;
  undefined8 **local_ff0;
  undefined8 **local_fe8;
  undefined8 **local_fe0;
  undefined8 **local_fd8;
  undefined8 **local_fd0;
  undefined8 **local_fc8;
  undefined8 **local_fc0;
  undefined8 **local_fb8;
  undefined8 **local_fb0;
  undefined8 **local_fa8;
  undefined8 **local_fa0;
  undefined8 **local_f98;
  undefined8 **local_f90;
  undefined8 **local_f88;
  undefined8 **local_f80;
  undefined8 **local_f78;
  undefined8 **local_f70;
  undefined8 **local_f68;
  undefined8 **local_f60;
  undefined8 **local_f58;
  undefined8 **local_f50;
  undefined8 **local_f48;
  undefined8 *local_f40;
  undefined8 local_f38;
  uint *local_f30;
  undefined8 *local_f18;
  undefined8 *local_f10;
  undefined8 *local_f08;
  undefined8 *local_f00;
  undefined8 *local_ef8;
  undefined8 *local_ef0;
  undefined8 *local_ee8;
  undefined8 *local_ee0;
  undefined8 *local_ed8;
  undefined8 local_ed0;
  undefined1 local_ec8 [9];
  undefined8 local_ebf;
  undefined1 local_eb7;
  ulong local_d91;
  undefined1 local_d89;
  undefined1 local_d88 [192];
  uint *local_cc8;
  uint local_b48;
  uint local_b44;
  undefined4 local_b40;
  uint local_b3c;
  undefined8 local_b38;
  int local_b30;
  int local_b2c;
  undefined8 auStack_b28 [4];
  undefined4 local_b04;
  undefined8 local_b00;
  undefined8 *local_af8;
  undefined8 local_af0;
  undefined1 local_ae1;
  undefined4 local_ae0;
  undefined4 local_adc;
  undefined8 local_ad8;
  uint *local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined1 local_ab8;
  byte *local_ab0;
  undefined **local_a90;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 *local_a68;
  uint *local_a60;
  undefined1 local_a58 [24];
  uint *local_a40;
  undefined4 local_a2c;
  ulong local_a28;
  ulong local_a19;
  undefined1 local_a11;
  undefined8 local_a10;
  uint **local_a08;
  byte local_9f9;
  undefined8 local_9f8;
  undefined1 local_9f0;
  undefined8 local_9e8;
  undefined1 local_9e0;
  char local_9d0;
  undefined8 local_9c8;
  undefined1 local_9c0;
  undefined8 local_9b8;
  undefined1 local_9b0;
  undefined8 local_9a8;
  undefined1 local_9a0;
  undefined8 local_998;
  undefined1 local_990;
  undefined8 local_988;
  undefined1 local_980;
  long local_978;
  char local_970;
  undefined8 local_968;
  undefined1 local_960;
  undefined8 local_958;
  undefined1 local_950;
  undefined8 local_948;
  undefined1 local_940;
  undefined8 local_938;
  undefined1 local_930;
  int local_924;
  int *local_920;
  undefined8 local_918;
  undefined4 local_910;
  ulong local_909;
  byte local_901;
  ulong local_900;
  long local_8f8;
  ulong *local_8f0;
  byte *local_8e8;
  uint local_8dc;
  undefined8 auStack_8d8 [7];
  undefined8 local_8a0;
  undefined1 local_898 [1701];
  byte local_1f3;
  undefined7 uStack_1f2;
  char local_1eb;
  uint *local_20;
  undefined8 local_18;
  uint local_10;

  local_10 = 8;
  local_18 = 0;
  local_20 = &g_371;
  memcpy(local_898,&DAT_004084b0,0x870);
  local_8a0 = 0;
  local_8dc = 0xfffffff8;
  local_8e8 = &DAT_0040d4e8;
  local_8f0 = &g_259;
  local_8f8 = 0;
  local_900 = 0xe9c1b31fa734fc83;
  local_909 = 0xe14000091a2;
  local_901 = 0x96;
  local_910 = 0xaac4f8f9;
  local_918 = 0;
  codemarker_alpha(0);
  local_920 = &g_357;
  codemarker_alpha(1);
  codemarker_alpha(2);
  for (local_924 = 0; local_924 < 6; local_924 = local_924 + 1) {
    auStack_8d8[local_924] = 0;
  }
  codemarker_alpha(3);
  sVar9 = DAT_0040d036;
  lVar19 = (long)DAT_0040d036;
  iVar14 = (int)_DAT_0040d034;
  uVar16 = local_10 & 0xff;
  uVar15 = func_50((int)(char)local_10);
  uVar7 = safe_sub_func_uint64_t_u_u(DAT_0040d059 == 0xfff8,(long)(int)local_10);
  uVar7 = safe_mod_func_uint16_t_u_u(uVar7,g_21);
  uVar15 = safe_div_func_uint32_t_u_u(uVar15,uVar7);
  sVar8 = safe_rshift_func_int32_t_s_s(uVar15,(int)DAT_0040d036);
  func_43((int)sVar8,(undefined2)local_10);
  local_960 = DAT_0040d058;
  local_968 = g_42;
  local_970 = DAT_0040d061;
  local_978 = DAT_0040d059;
  local_980 = DAT_0040d058;
  local_988 = g_42;
  local_9a8 = func_36(sVar9,DAT_0040d059,DAT_0040d061,g_42,DAT_0040d058,(int)(char)DAT_0040d4e8,
                      local_10 & 0xff);
  local_9a0 = extraout_DL;
  local_998 = local_9a8;
  local_990 = extraout_DL;
  local_958 = local_9a8;
  local_950 = extraout_DL;
  local_9c8 = func_33(local_9a8,extraout_DL,
                      (int)((CONCAT44(uRam000000000040d4ed,g_282) << 0x23) >> 0x3e));
  local_9c0 = extraout_DL_00;
  local_9b8 = local_9c8;
  local_9b0 = extraout_DL_00;
  local_948 = local_9c8;
  local_940 = extraout_DL_00;
  uVar16 = func_28(uVar16,local_9c8,extraout_DL_00,local_10);
  *local_20 = uVar16;
  sVar9 = safe_lshift_func_int64_t_s_u((long)(int)local_10,0x27);
  local_9d0 = local_1eb;
  uVar20 = func_22(iVar14,(int)sVar9,CONCAT71(uStack_1f2,local_1f3),local_1eb);
  DAT_0040d061 = safe_mul_func_int64_t_s_s(lVar19,uVar20);
  bVar3 = safe_div_func_int64_t_s_s(1);
  *local_8e8 = bVar3;
  local_9f8 = func_15(bVar3);
  local_9f0 = extraout_DL_01;
  local_9e8 = local_9f8;
  local_9e0 = extraout_DL_01;
  local_938 = local_9f8;
  local_930 = extraout_DL_01;
  uVar15 = func_11(local_9f8,extraout_DL_01,CONCAT71(uStack_1f2,local_1f3),local_8dc);
  func_6(uVar15,(long)(int)local_8dc,(char)((CONCAT44(uRam000000000040d51d,g_357) << 0x23) >> 0x3e),
         local_8dc);
  safe_div_func_uint16_t_u_u(0x341e,(short)local_1eb);
  *local_8f0 = (long)(int)(uint)(0xfffffffffffffff9 < CONCAT71(uStack_1f2,local_1f3));
  sVar9 = safe_mul_func_uint16_t_u_u(1,CONCAT71(uStack_1f2,local_1f3) & 0xffff,extraout_RDX,1);
  if (sVar9 != 0) {
    local_9f9 = 4;
    local_a08 = &local_20;
    local_a10 = 0;
    local_a19 = 1;
    local_a11 = 0xa9;
    local_a28 = 0x72df971f1d62dbe0;
    local_a2c = 0x6c6b91b0;
    memset(local_a58,0,0x20);
    local_a60 = (uint *)0x0;
    local_a68 = &g_137;
    codemarker_alpha(4);
    local_9f9 = 0x61;
    local_a88 = (undefined4)g_61;
    uStack_a84 = g_61._4_4_;
    uStack_a80 = (undefined4)DAT_0040d4d8;
    uStack_a7c = DAT_0040d4d8._4_4_;
    *local_a08 = &g_371;
    safe_rshift_func_uint32_t_u_s(local_9f9,0x14);
    bVar24 = g_428 != g_429;
    sVar9 = safe_rshift_func_int16_t_s_u(0xffffffff,CONCAT71(uStack_1f2,local_1f3) & 0xffffffff);
    *local_8f0 = (long)sVar9;
    bVar24 = local_8f8 < (int)(uint)((long)(int)(uint)bVar24 <= (long)sVar9);
    cVar4 = safe_sub_func_int8_t_s_s
                      (bVar24,(int)(char)g_371,local_8f0,
                       CONCAT71((int7)(char)((ushort)sVar9 >> 8),bVar24));
    safe_mod_func_uint16_t_u_u
              ((ulong)(long)cVar4 <= g_314,local_9f9,extraout_RDX_00,(ulong)(long)cVar4 <= g_314);
    puVar2 = g_448;
    if (local_9f9 == 0) {
      local_ab0 = &local_9f9;
      local_ab8 = 0;
      local_ac0 = 7;
      local_ac8 = 0xe1ef2490aa573b12;
      local_ad0 = (uint *)(g_67 + 4);
      g_448[8] = local_a11;
      *(ulong *)puVar2 = local_a19;
      *local_8e8 = local_1f3;
      local_9f9 = local_1f3;
      lVar19 = safe_lshift_func_uint64_t_u_s(local_a19,0);
      safe_div_func_int32_t_s_s(CONCAT71(uStack_1f2,local_1f3) != lVar19,0x97ce0806);
      sVar9 = safe_lshift_func_int16_t_s_u
                        (((uint)(local_a28 == ((uint)(DAT_0040d531 >> 0x13) & 0x7ffff)) &
                         (uint)((CONCAT44(uRam000000000040d4ed,g_282) << 0x23) >> 0x3e)) != 1,7);
      uVar15 = safe_lshift_func_int64_t_s_u((int)sVar9 < (int)local_10,local_900 & 0xffffffff);
      safe_lshift_func_uint8_t_u_s(local_1f3,uVar15);
      iVar14 = safe_rshift_func_int32_t_s_u(**(undefined4 **)g_184,0x19);
      uVar16 = safe_add_func_int32_t_s_s(0x7627b602af459772 < (long)iVar14,1);
      *local_ad0 = uVar16 & *local_ad0;
      *g_185 = *g_185 & 0xd51f2b3b;
    }
    else {
      codemarker_alpha(5);
      local_a90 = &g_353;
      g_353 = (undefined *)0x0;
      codemarker_alpha(6);
      g_259 = 0;
    }
    if (local_9f9 == 0) {
      *g_185 = *g_192 & *g_185;
      return (byte)g_67._4_4_;
    }
    local_ad8 = 0;
    local_adc = 0;
    local_a28 = 0;
    local_ae0 = 5;
    local_ae1 = 0x7d;
    local_af0 = 0;
    local_af8 = &g_58;
    local_b00 = 0x40d066;
    local_b04 = 0xfffffffe;
    for (local_a19 = 0; local_a19 < 2; local_a19 = local_a19 + 1) {
      for (local_b2c = 0; local_b2c < 4; local_b2c = local_b2c + 1) {
        auStack_b28[local_b2c] = 0;
      }
      safe_mul_func_uint32_t_u_u(local_8dc,*g_185);
      local_a60 = g_185;
      *(uint **)g_392 = g_185;
      local_a40 = local_a60;
    }
    *(undefined8 **)g_257 = local_af8;
    if (local_af8 == (undefined8 *)0x0) {
      return DAT_0040d4e8;
    }
    return (byte)local_b04;
  }
  local_b30 = 0x519c44ad;
  local_b38 = 0x489e2749dd47b6fd;
  local_b3c = 0x67449045;
  local_b40 = 0xabfe3ee2;
  local_b44 = 0;
  local_b48 = 0xa9f295a1;
  memcpy(local_d88,&DAT_00408d50,0x240);
  local_d91 = 0x3fff1d380007edd;
  local_d89 = 0xc2;
  codemarker_alpha(10);
  if (local_8dc != 0) {
    memcpy(local_ec8,&DAT_00408fa0,0x120);
    codemarker_alpha(0xb);
    local_ed0 = 0;
    codemarker_alpha(0xc);
    local_f18 = &local_ed0;
    local_f10 = &local_ed0;
    local_f08 = &local_ed0;
    local_f00 = &local_ed0;
    local_ef8 = &local_ed0;
    local_ef0 = &local_ed0;
    local_ee8 = &local_ed0;
    local_ee0 = &local_ed0;
    local_ed8 = &local_ed0;
    codemarker_alpha(0xd);
    for (local_900 = 0; local_900 < 4; local_900 = local_900 + 1) {
      local_f30 = &local_8dc;
      local_f38 = 0x40d1e8;
      *g_185 = 0xfffffff6;
      local_8dc = local_8dc | 0xfffffff6;
      cVar4 = safe_mod_func_int8_t_s_s(0xfffffffb,(int)(char)local_8dc);
      safe_rshift_func_int32_t_s_u(**(undefined4 **)g_392,3);
      puVar1 = *(uint **)g_432;
      safe_mul_func_int8_t_s_s
                (local_20 != puVar1,(int)(char)g_135._4_4_,extraout_RDX_01,
                 CONCAT71((int7)((ulong)puVar1 >> 8),local_20 != puVar1));
      uVar15 = safe_add_func_uint64_t_u_u((long)cVar4 & 0xbba0133b,0x3e0e552e7c1cef7c);
      uVar7 = safe_lshift_func_uint32_t_u_u(uVar15,0xc);
      sVar9 = safe_mod_func_uint16_t_u_u(uVar7,g_63 & 0xffff,extraout_RDX_02,uVar7);
      puVar2 = g_353;
      if ((uint)((int)(uint)(sVar9 != 1) < local_b30) == (uint)((g_73 << 6) >> 0x25)) {
        g_63 = 3;
        while ((-1 < (long)g_63 && (*g_192 == 0))) {
          g_63 = g_63 - 1;
        }
        if (local_901 != 0) break;
        *(undefined8 *)g_353 = local_ebf;
        puVar2[8] = local_eb7;
      }
      else {
        if (**(int **)g_184 != 0) break;
        *g_185 = (uint)local_b38;
        local_8dc = (uint)local_b38 | local_8dc;
      }
      for (g_158 = 3; -1 < g_158; g_158 = g_158 + -1) {
        local_f40 = &local_ed0;
        local_10c8 = &local_f40;
        local_10c0 = &local_f40;
        local_10b8 = &local_f40;
        local_10b0 = &local_f40;
        local_10a8 = &local_f40;
        local_10a0 = &local_f40;
        local_1098 = &local_f40;
        local_1090 = &local_f40;
        local_1088 = &local_f40;
        local_1080 = &local_f40;
        local_1078 = &local_f40;
        local_1070 = &local_f40;
        local_1068 = &local_f40;
        local_1060 = &local_f40;
        local_1058 = &local_f40;
        local_1050 = &local_f40;
        local_1048 = &local_f40;
        local_1040 = &local_f40;
        local_1038 = &local_f40;
        local_1030 = &local_f40;
        local_1028 = &local_f40;
        local_1020 = &local_f40;
        local_1018 = &local_f40;
        local_1010 = &local_f40;
        local_1008 = &local_f40;
        local_1000 = &local_f40;
        local_ff8 = &local_f40;
        local_ff0 = &local_f40;
        local_fe8 = &local_f40;
        local_fe0 = &local_f40;
        local_fd8 = &local_f40;
        local_fd0 = &local_f40;
        local_fc8 = &local_f40;
        local_fc0 = &local_f40;
        local_fb8 = &local_f40;
        local_fb0 = &local_f40;
        local_fa8 = &local_f40;
        local_fa0 = &local_f40;
        local_f98 = &local_f40;
        local_f90 = &local_f40;
        local_f88 = &local_f40;
        local_f80 = &local_f40;
        local_f78 = &local_f40;
        local_f70 = &local_f40;
        local_f68 = &local_f40;
        local_f60 = &local_f40;
        local_f58 = &local_f40;
        local_f50 = &local_f40;
        local_f48 = &local_f40;
        *(undefined8 **)g_530 = local_ef8;
        for (g_259 = 3; -1 < (long)g_259; g_259 = g_259 - 1) {
          *(undefined8 *)g_534 = *(undefined8 *)g_507;
        }
      }
    }
    return (byte)(uint)((ulong)DAT_0040d4f1 >> 0x26);
  }
  memcpy(local_13a8,&DAT_004090c0,0x2d0);
  local_13ac = 0x44a7f648;
  local_13b0 = 0xd20d8833;
  memcpy(local_1468,&DAT_00409390,0xb4);
  local_146c = -8;
  local_1488 = 0x9bff780078ff9b9b;
  local_1480 = 0x9b9bff780078ff9b;
  local_1478 = 0x780078ff;
  local_1490 = &DAT_0040d03c;
  local_1578 = 0;
  local_1570 = &local_901;
  local_1568 = &local_901;
  local_1560 = 0;
  local_1558 = &g_545;
  local_1550 = 0;
  memset(&local_1548,0,0x18);
  local_1548 = 0;
  local_1540 = 0;
  local_1538 = 0;
  local_1530 = &g_545;
  local_1528 = 0;
  local_1520 = 0;
  local_1518 = 0;
  local_1510 = 0;
  local_1508 = &local_901;
  local_1500 = &local_901;
  local_14f8 = 0;
  local_14f0 = 0;
  local_14e8 = &local_901;
  local_14e0 = 0;
  local_14d8 = &g_545;
  local_1579 = 0xa0;
  codemarker_alpha(0xe);
  local_1588 = 0;
  local_1589 = 0;
  codemarker_alpha(0xf);
  codemarker_alpha(0x10);
  for (local_1590 = 0; local_1590 < 6; local_1590 = local_1590 + 1) {
    auStack_14c8[local_1590] = 0x40d09c;
  }
  for (local_b30 = 0; -0x13 < local_b30; local_b30 = local_b30 + -1) {
    local_159c = 0xcc187775;
    local_15a0 = 0x288d6d0d;
    local_15a4 = 0xffffffff;
    local_15c0 = 0x40d098;
    for (local_15c4 = 0; local_15c4 < 5; local_15c4 = local_15c4 + 1) {
      auStack_15b8[local_15c4] = 1;
    }
    safe_mod_func_int16_t_s_s(0xffffffff,(int)(short)g_544);
    bVar3 = *local_8e8;
    *local_8e8 = bVar3 | (byte)local_159c;
    uVar21 = safe_add_func_uint64_t_u_u
                       (((uint)bVar3 | local_159c & 0xff) == g_371,0xffffffffffffffff);
    local_1861 = (ulong)(long)(int)(uint)(uVar21 < 0xfffa) < 0x86eb0706 || g_545 != '\0';
    if ((uint)local_1861 == (uint)((CONCAT44(g_456._4_4_,(int)g_456) << 0x23) >> 0x3e)) {
      local_15d8 = 0xf74b7869;
      local_15e0 = &DAT_0040d4e8;
      local_15e8 = &local_15e0;
      local_15f0 = &local_b48;
      lVar19 = *(long *)**(undefined8 **)g_530;
      *(long *)g_532 = lVar19;
      uVar21 = (ulong)(int)(uint)(lVar19 == 0);
      *local_8f0 = uVar21;
      lVar19 = safe_mul_func_int64_t_s_s(uVar21,(DAT_0040d036 < 0x4f ^ 0xffU) & 1);
      bVar24 = local_15e8 == &g_429;
      safe_unary_minus_func_int32_t_s((int)((long)(local_909 << 6) >> 0x25));
      uVar16 = (uint)(0xc36d8724a5d3924d <
                     (ulong)(long)(int)(uint)((local_15c0 != 0x40d098) <=
                                             (lVar19 <= (int)(uint)bVar24))) ^ (uint)local_b38;
      *g_185 = uVar16;
      *local_15f0 = uVar16;
      return (byte)g_314;
    }
    for (local_15d4 = 0; local_15d4 < 1; local_15d4 = local_15d4 + 1) {
      (&uStack_15d0)[local_15d4] = 0;
    }
    local_146c = local_146c + -1;
    if (local_159c != 0) break;
  }
  local_1869 = false;
  if (local_1478._2_1_ != '\0') {
    lVar19 = safe_mul_func_uint64_t_u_u
                       ((int)(uint)(local_901 < (local_cc8 != local_20)) <= (int)local_b44,
                        (long)(int)local_8dc);
    local_1869 = lVar19 != 0;
  }
  *local_1490 = *local_1490 ^ (ushort)local_1869;
  safe_add_func_int8_t_s_s((int)(char)local_8dc,(int)local_1480._1_1_);
  local_1620 = func_33(local_10fc,local_10f4,0);
  bVar6 = local_1f3;
  *g_185 = local_13f8;
  bVar3 = *local_8e8;
  *local_8e8 = (byte)(bVar3 ^ local_1458);
  uVar15 = g_135._4_4_;
  g_135._4_4_ = g_135._4_4_ + -1;
  local_1618 = extraout_DL_02;
  local_1609 = local_1620;
  local_1601 = extraout_DL_02;
  uVar5 = safe_sub_func_uint8_t_u_u(0xb1,0xff);
  uVar17 = safe_div_func_int32_t_s_s(uVar5,0xf5f36696);
  uVar7 = safe_div_func_uint32_t_u_u(uVar15,uVar17);
  local_8dc = safe_div_func_uint16_t_u_u(uVar7,8);
  local_8dc = local_8dc & 0xffff;
  local_1879 = false;
  if ((local_8dc != 0) && (local_1879 = false, local_b3c != 0)) {
    local_1879 = local_1eb != '\0';
  }
  auVar25 = safe_rshift_func_uint64_t_u_s(0,local_1879);
  bVar24 = auVar25._0_8_ != 0;
  bVar6 = safe_sub_func_uint8_t_u_u(bVar6,bVar24,auVar25._8_8_,bVar24);
  local_10 = (uint)(bVar6 < local_900);
  lVar19 = safe_rshift_func_int64_t_s_s
                     (0,(int)((uint)((ulong)(DAT_0040d4f1 << 0x2d) >> 0x20) |
                             uRam000000000040d4ed >> 0x13) >> 7);
  if ((long)(ulong)((bVar3 ^ local_1458) & 0xff) < lVar19) {
    return (byte)local_900;
  }
  codemarker_alpha(0x11);
  local_1628 = 0;
  local_162c = 0x56bb8287;
  codemarker_alpha(0x12);
  if (local_1628 != **(long **)g_530) {
    codemarker_alpha(0x14);
    safe_lshift_func_int64_t_s_s(0xc53,local_13d8);
    *local_1490 = 0x9880;
    g_646._4_2_ = 0x9880;
    g_58._4_2_ = g_58._4_2_ + -1;
    uVar16 = *g_185;
    local_d91 = local_d91 & 0xfc0000007fffffff | (ulong)(local_162c & 0x7ffffff) << 0x1f;
    local_13ac = (int)(local_162c << 5) >> 5 ^ local_162c;
    safe_mod_func_int32_t_s_s(0xcbe1dda9,(int)((g_306 << 0x23) >> 0x3e));
    uVar7 = safe_mul_func_uint32_t_u_u(0xfffffffe,0x91ff780d);
    uVar7 = safe_lshift_func_uint16_t_u_s(uVar7,(g_282 << 5) >> 5);
    DAT_0040d061 = safe_add_func_int64_t_s_s(uVar7,(long)(int)local_162c);
    bVar24 = (local_1588 == **(long **)g_531) == local_162c ||
             (int)(uint)(local_1588 == **(long **)g_531) < (int)local_162c;
    cVar4 = safe_mod_func_int8_t_s_s(bVar24,(int)(char)((g_354 << 5) >> 5),extraout_RDX_07,bVar24);
    uVar18 = safe_mod_func_uint16_t_u_u
                       ((ushort)((ulong)(long)cVar4 < 0x100000000),local_d91 & 0xffff,
                        extraout_RDX_08,CONCAT62(0xffff,(ushort)((ulong)(long)cVar4 < 0x100000000)))
    ;
    local_18c1 = (uVar18 & 0xffff) == local_13d8 && (g_357 << 5) >> 5 != 0;
    cVar4 = safe_mul_func_int8_t_s_s(6,(int)(char)((local_18c1 ^ local_1478._1_1_) & local_1579));
    iVar14 = safe_add_func_uint32_t_u_u((int)cVar4,local_8dc);
    uVar15 = safe_mod_func_uint64_t_u_u(iVar14 == 0xbda6,0x294b7474);
    uVar5 = safe_div_func_int32_t_s_s(uVar16,uVar15);
    safe_add_func_uint8_t_u_u(uVar5,0);
    return local_901;
  }
  local_162d = 1;
  local_1638 = 0;
  local_1640 = (short *)((long)&g_58 + 2);
  memcpy(local_1788,&DAT_004094b0,0x140);
  codemarker_alpha(0x13);
  uVar10 = safe_mul_func_uint16_t_u_u(1,0xffff);
  uVar16 = local_13ac;
  uVar7 = (undefined2)local_b48;
  uVar13 = *local_1490;
  uVar22 = uVar13 | 0x13d;
  *local_1490 = uVar22;
  sVar9 = *local_1640;
  *local_1640 = sVar9 + 1;
  psVar23 = local_1640;
  uVar21 = extraout_RDX_03;
  if ((short)(sVar9 + 1) != 0) {
    safe_rshift_func_int32_t_s_u(**(undefined4 **)g_392,6);
    uVar5 = safe_mod_func_int8_t_s_s
                      ((int)(char)((byte)g_63 | (byte)(((int)g_456 << 5) >> 5)),
                       (int)(char)local_1579);
    uVar5 = safe_add_func_uint8_t_u_u(3,uVar5);
    uVar11 = safe_div_func_uint16_t_u_u
                       (uVar5,CONCAT71(uStack_1f2,local_1f3) & 0xffff,extraout_RDX_04,uVar5);
    psVar23 = (short *)(ulong)uVar16;
    uVar21 = (ulong)uVar11;
    local_18a1 = true;
    if ((int)uVar16 < (int)(uint)uVar11) goto LAB_00402d21;
  }
  local_18a1 = (local_909 & 0x7fffffff) != 0;
LAB_00402d21:
  sVar9 = safe_mod_func_int16_t_s_s
                    ((int)(short)uVar22,local_18a1,uVar21,
                     CONCAT62((int6)((ulong)psVar23 >> 0x10),uVar13) | 0x13d);
  local_18a9 = sVar9 != 0 && local_162c != 0;
  uVar12 = safe_mod_func_uint16_t_u_u
                     (0x4ee201f3a3daf2c1 < (ulong)(long)(int)(uint)local_18a9 != local_b44,0xfff8);
  sVar9 = safe_lshift_func_uint16_t_u_s(uVar7,uVar12,extraout_RDX_05,uVar12);
  sVar9 = safe_div_func_int16_t_s_s(6,(int)sVar9);
  uVar16 = local_b3c;
  if (((uint)uVar10 & (int)sVar9) == local_13ac) {
    *g_185 = (uint)local_1579 & *g_185;
  }
  else {
    bVar24 = local_13b0 != 0;
    uVar21 = safe_unary_minus_func_uint64_t_u(0x867835ddb55fde75);
    *local_1640 = -1;
    cVar4 = safe_rshift_func_int8_t_s_s(local_901 != 0,(int)local_1eb);
    uVar13 = safe_div_func_uint16_t_u_u
                       ((ushort)(uVar21 < 0xffff),cVar4 != '\0',extraout_RDX_06,
                        CONCAT22(cVar4 >> 7,(ushort)(uVar21 < 0xffff)));
    uVar15 = safe_sub_func_int32_t_s_s(uVar13 & local_13b0,g_259 & 0xffffffff);
    safe_rshift_func_int32_t_s_s(uVar15,local_b48);
    uVar20 = 0;
    bVar3 = safe_div_func_int32_t_s_s(uVar16 == (*(long *)g_530 != 0),(int)((g_73 << 6) >> 0x25));
    bVar3 = safe_div_func_uint8_t_u_u
                      ((bVar24 ^ 0xffU) & 1,bVar3 | 0xf2,0x3100fee4ab4271f2,
                       (CONCAT71((int7)((ulong)uVar20 >> 8),bVar24) ^ 0xff) & 0xffffffffffffff01);
    *g_185 = (uint)((int)((long)((ulong)((int)(uint)bVar3 <= (int)DAT_0040d061) << 0x25) >> 0x25) !=
                   -1) | *g_185;
    g_185 = *(uint **)g_392;
  }
  return local_901;
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



int safe_mul_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 * (uint)param_2;
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



undefined8 func_6(void)

{
  codemarker_alpha(0x15);
  *(undefined8 **)g_417 = &g_73;
  return **(undefined8 **)g_168;
}



undefined4 func_11(undefined8 param_1,char param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  int local_c0;
  undefined8 auStack_b8 [4];
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_21;
  char local_19;
  undefined8 local_11;
  char local_9;

  local_40 = g_67;
  local_48 = 0x40d07c;
  local_50 = &g_137;
  local_54 = 1;
  local_60 = 0x40d07c;
  local_68 = 0x40d07c;
  local_70 = 0;
  local_78 = &g_137;
  local_80 = &local_54;
  local_88 = 0;
  local_90 = &g_137;
  local_98 = 0x40d07c;
  local_34 = param_4;
  local_30 = param_3;
  local_21 = param_1;
  local_19 = param_2;
  local_11 = param_1;
  local_9 = param_2;
  codemarker_alpha(0x16);
  codemarker_alpha(0x17);
  for (local_c0 = 0; local_c0 < 3; local_c0 = local_c0 + 1) {
    auStack_b8[local_c0] = 0x40d07c;
  }
  uVar1 = safe_add_func_uint32_t_u_u(local_30 & 0xffffffff,local_9 != '\0');
  *g_185 = uVar1 ^ *g_185;
  return *local_90;
}



unkbyte9 func_15(void)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 local_11;
  undefined1 local_9;

  codemarker_alpha(0x18);
  codemarker_alpha(0x19);
  cVar1 = safe_rshift_func_int8_t_s_s(0x48,2);
  lVar3 = safe_rshift_func_uint64_t_u_s((int)cVar1 < (g_282 << 5) >> 5,0xc);
  if (lVar3 == 0) {
    local_11 = 0xcd88c6bb1cfbeaa;
    local_9 = 0;
  }
  else {
    codemarker_alpha(0x1a);
    g_371 = 0x15;
    while (-0x14 < (int)g_371) {
      *(undefined8 *)g_392 = *(undefined8 *)g_184;
      bVar2 = safe_sub_func_uint8_t_u_u(g_371 & 0xff,3);
      g_371 = (uint)bVar2;
    }
    *g_185 = *g_185;
    local_11 = g_42;
    local_9 = DAT_0040d058;
  }
  return CONCAT18(local_9,local_11);
}



long safe_div_func_int64_t_s_s(long param_1,long param_2)

{
  long local_20;

  local_20 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x8000000000000000 || (param_2 != -1)))) {
    local_20 = param_1 / param_2;
  }
  return local_20;
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



uint func_22(void)

{
  codemarker_alpha(0x1b);
  g_185 = &g_137;
  *(undefined ***)g_379 = &g_353;
  return (uint)(g_306 >> 0x1d) & 0x1fffffff;
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



int func_28(undefined1 param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  undefined1 auStack_738 [24];
  undefined **local_720;
  undefined **local_718;
  undefined **local_710;
  undefined **local_708;
  undefined **local_700;
  undefined **local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined **local_6e0;
  undefined **local_6d8;
  undefined **local_6d0;
  undefined8 local_6c8;
  undefined **local_6c0;
  undefined **local_6b8;
  undefined8 local_6b0;
  undefined **local_6a8;
  undefined **local_6a0;
  undefined **local_698;
  undefined **local_690;
  undefined8 local_688;
  undefined **local_680;
  undefined8 local_678;
  undefined **local_670;
  undefined **local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined **local_650;
  undefined **local_648;
  undefined **local_640;
  undefined **local_638;
  undefined **local_630;
  undefined **local_628;
  undefined8 local_620;
  undefined **local_618;
  undefined **local_610;
  undefined **local_608;
  undefined **local_600;
  undefined **local_5f8;
  undefined **local_5f0;
  undefined **local_5e8;
  undefined **local_5e0;
  undefined **local_5d8;
  undefined8 local_5d0;
  undefined **local_5c8;
  undefined **local_5c0;
  undefined **local_5b8;
  undefined **local_5b0;
  undefined **local_5a8;
  undefined **local_5a0;
  undefined **local_598;
  undefined8 local_590;
  undefined **local_588;
  undefined **local_580;
  undefined **local_578;
  undefined **local_570;
  undefined **local_568;
  undefined **local_560;
  undefined **local_558;
  undefined8 local_550;
  undefined **local_548;
  undefined8 local_540;
  undefined **local_538;
  undefined **local_530;
  undefined **local_528;
  undefined **local_520;
  undefined **local_518;
  undefined **local_510;
  undefined **local_508;
  undefined **local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined **local_4e8;
  undefined8 local_4e0;
  undefined1 auStack_4d8 [24];
  undefined **local_4c0;
  undefined **local_4b8;
  undefined **local_4b0;
  undefined **local_4a8;
  undefined **local_4a0;
  undefined **local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined **local_480;
  undefined **local_478;
  undefined **local_470;
  undefined8 local_468;
  undefined **local_460;
  undefined **local_458;
  undefined8 local_450;
  undefined **local_448;
  undefined **local_440;
  undefined **local_438;
  undefined **local_430;
  undefined **local_428;
  undefined **local_420;
  undefined **local_418;
  undefined **local_410;
  undefined **local_408;
  undefined **local_400;
  undefined **local_3f8;
  undefined **local_3f0;
  undefined **local_3e8;
  undefined **local_3e0;
  undefined **local_3d8;
  undefined **local_3d0;
  undefined8 local_3c8;
  undefined **local_3c0;
  undefined **local_3b8;
  undefined **local_3b0;
  undefined8 local_3a8;
  undefined **local_3a0;
  undefined **local_398;
  undefined **local_390;
  undefined **local_388;
  undefined **local_380;
  undefined8 local_378;
  undefined **local_370;
  undefined **local_368;
  undefined **local_360;
  undefined **local_358;
  undefined **local_350;
  undefined **local_348;
  undefined **local_340;
  undefined **local_338;
  undefined **local_330;
  undefined **local_328;
  undefined **local_320;
  undefined8 local_318;
  undefined **local_310;
  undefined **local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined **local_2d8;
  undefined **local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined **local_2b8;
  undefined **local_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined **local_298;
  undefined **local_290;
  undefined **local_288;
  undefined **local_280;
  undefined **local_278;
  undefined **local_270;
  undefined **local_268;
  undefined8 local_260;
  undefined **local_258;
  undefined **local_250;
  undefined **local_248;
  undefined **local_240;
  undefined8 local_238;
  undefined **local_230;
  undefined **local_228;
  undefined **local_220;
  undefined **local_218;
  undefined **local_210;
  undefined **local_208;
  undefined **local_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined **local_1e8;
  undefined **local_1e0;
  undefined **local_1d8;
  undefined **local_1d0;
  undefined **local_1c8;
  undefined **local_1c0;
  undefined **local_1b8;
  undefined **local_1b0;
  undefined **local_1a8;
  undefined **local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
  undefined **local_180;
  undefined **local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined **local_160;
  undefined **local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined **local_140;
  undefined **local_138;
  undefined **local_130;
  undefined **local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined4 local_28;
  undefined1 local_22;
  undefined8 local_21;
  char local_19;
  undefined8 local_11;
  char local_9;

  local_30 = (undefined *)0x0;
  local_38 = 0;
  local_28 = param_4;
  local_22 = param_1;
  local_21 = param_2;
  local_19 = param_3;
  local_11 = param_2;
  local_9 = param_3;
  memset(auStack_738,0,0x20);
  local_720 = &local_30;
  local_718 = &local_30;
  local_710 = &local_30;
  local_708 = &local_30;
  local_700 = &local_30;
  local_6f8 = &local_30;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6e0 = &local_30;
  local_6d8 = &local_30;
  local_6d0 = &local_30;
  local_6c8 = 0;
  local_6c0 = &local_30;
  local_6b8 = &local_30;
  local_6b0 = 0;
  local_6a8 = &local_30;
  local_6a0 = &local_30;
  local_698 = &local_30;
  local_690 = &local_30;
  local_688 = 0;
  local_680 = &local_30;
  local_678 = 0;
  local_670 = &local_30;
  local_668 = &local_30;
  local_660 = 0;
  local_658 = 0;
  local_650 = &local_30;
  local_648 = &local_30;
  local_640 = &local_30;
  local_638 = &local_30;
  local_630 = &local_30;
  local_628 = &local_30;
  local_620 = 0;
  local_618 = &local_30;
  local_610 = &local_30;
  local_608 = &local_30;
  local_600 = &local_30;
  local_5f8 = &local_30;
  local_5f0 = &local_30;
  local_5e8 = &local_30;
  local_5e0 = &local_30;
  local_5d8 = &local_30;
  local_5d0 = 0;
  local_5c8 = &local_30;
  local_5c0 = &local_30;
  local_5b8 = &local_30;
  local_5b0 = &local_30;
  local_5a8 = &local_30;
  local_5a0 = &local_30;
  local_598 = &local_30;
  local_590 = 0;
  local_588 = &local_30;
  local_580 = &local_30;
  local_578 = &local_30;
  local_570 = &local_30;
  local_568 = &local_30;
  local_560 = &local_30;
  local_558 = &local_30;
  local_550 = 0;
  local_548 = &local_30;
  local_540 = 0;
  local_538 = &local_30;
  local_530 = &local_30;
  local_528 = &local_30;
  local_520 = &local_30;
  local_518 = &local_30;
  local_510 = &local_30;
  local_508 = &local_30;
  local_500 = &local_30;
  local_4f8 = 0;
  local_4f0 = &local_30;
  local_4e8 = &local_30;
  local_4e0 = 0;
  memset(auStack_4d8,0,0x20);
  local_4c0 = &local_30;
  local_4b8 = &local_30;
  local_4b0 = &local_30;
  local_4a8 = &local_30;
  local_4a0 = &local_30;
  local_498 = &local_30;
  local_490 = 0;
  local_488 = 0;
  local_480 = &local_30;
  local_478 = &local_30;
  local_470 = &local_30;
  local_468 = 0;
  local_460 = &local_30;
  local_458 = &local_30;
  local_450 = 0;
  local_448 = &local_30;
  local_440 = &local_30;
  local_438 = &local_30;
  local_430 = &local_30;
  local_428 = &local_30;
  local_420 = &local_30;
  local_418 = &local_30;
  local_410 = &local_30;
  local_408 = &local_30;
  local_400 = &local_30;
  local_3f8 = &local_30;
  local_3f0 = &local_30;
  local_3e8 = &local_30;
  local_3e0 = &local_30;
  local_3d8 = &local_30;
  local_3d0 = &local_30;
  local_3c8 = 0;
  local_3c0 = &local_30;
  local_3b8 = &local_30;
  local_3b0 = &local_30;
  local_3a8 = 0;
  local_3a0 = &local_30;
  local_398 = &local_30;
  local_390 = &local_30;
  local_388 = &local_30;
  local_380 = &local_30;
  local_378 = 0;
  local_370 = &local_30;
  local_368 = &local_30;
  local_360 = &local_30;
  local_358 = &local_30;
  local_350 = &local_30;
  local_348 = &local_30;
  local_340 = &local_30;
  local_338 = &local_30;
  local_330 = &local_30;
  local_328 = &local_30;
  local_320 = &local_30;
  local_318 = 0;
  local_310 = &local_30;
  local_308 = &local_30;
  local_300 = 0;
  local_2f8 = &local_30;
  local_2f0 = &local_30;
  local_2e8 = 0;
  local_2e0 = &local_30;
  local_2d8 = &local_30;
  local_2d0 = &local_30;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = &local_30;
  local_2b0 = &local_30;
  local_2a8 = &local_30;
  local_2a0 = 0;
  local_298 = &local_30;
  local_290 = &local_30;
  local_288 = &local_30;
  local_280 = &local_30;
  local_278 = &local_30;
  local_270 = &local_30;
  local_268 = &local_30;
  local_260 = 0;
  local_258 = &local_30;
  local_250 = &local_30;
  local_248 = &local_30;
  local_240 = &local_30;
  local_238 = 0;
  local_230 = &local_30;
  local_228 = &local_30;
  local_220 = &local_30;
  local_218 = &local_30;
  local_210 = &local_30;
  local_208 = &local_30;
  local_200 = &local_30;
  local_1f8 = 0;
  local_1f0 = &local_30;
  local_1e8 = &local_30;
  local_1e0 = &local_30;
  local_1d8 = &local_30;
  local_1d0 = &local_30;
  local_1c8 = &local_30;
  local_1c0 = &local_30;
  local_1b8 = &local_30;
  local_1b0 = &local_30;
  local_1a8 = &local_30;
  local_1a0 = &local_30;
  local_198 = &local_30;
  local_190 = &local_30;
  local_188 = &local_30;
  local_180 = &local_30;
  local_178 = &local_30;
  local_170 = &local_30;
  local_168 = 0;
  local_160 = &local_30;
  local_158 = &local_30;
  local_150 = &local_30;
  local_148 = 0;
  local_140 = &local_30;
  local_138 = &local_30;
  local_130 = &local_30;
  local_128 = &local_30;
  local_120 = &local_30;
  local_118 = 0;
  local_110 = &local_30;
  local_108 = &local_30;
  local_100 = &local_30;
  local_f8 = &local_30;
  local_f0 = &local_30;
  local_e8 = &local_30;
  local_e0 = &local_30;
  local_d8 = &local_30;
  local_d0 = &local_30;
  local_c8 = &local_30;
  local_c0 = &local_30;
  local_b8 = 0;
  local_b0 = &local_30;
  local_a8 = &local_30;
  local_a0 = 0;
  local_98 = &local_30;
  local_90 = &local_30;
  local_88 = 0;
  local_80 = &local_30;
  local_78 = &local_30;
  local_70 = &local_30;
  local_68 = 0;
  local_60 = 0;
  local_58 = &local_30;
  local_50 = &local_30;
  local_48 = &local_30;
  local_40 = 0;
  codemarker_alpha(0x1c);
  g_368 = local_30;
  return (int)local_9;
}





undefined1 [16] func_33(undefined8 param_1,char param_2,undefined4 param_3)

{
  undefined8 extraout_RDX;
  undefined1 auVar1 [16];
  undefined1 local_4a8 [1132];
  undefined4 local_3c;
  undefined8 local_38;
  char local_30;
  undefined8 local_28;
  char local_20;
  undefined8 local_18;
  undefined1 local_10;

  local_3c = param_3;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = param_2;
  memcpy(local_4a8,&DAT_00409680,0x460);
  local_10 = 0x7e;
  local_18 = 0xfffffffffffffff9;
  codemarker_alpha(0x1d);
  *g_192 = (int)local_20;
  _g_282 = _g_282 & 0xfffffffff8000000 | (ulong)((int)local_20 & 0x7ffffff);
  auVar1._9_7_ = (undefined7)((ulong)extraout_RDX >> 8);
  auVar1[8] = local_10;
  auVar1._0_8_ = local_18;
  return auVar1;
}
# 2248 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/5.c"
undefined1 [16]
func_36(ushort param_1,ulong param_2,char param_3,ulong param_4,byte param_5,char param_6,
       byte param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  undefined8 extraout_RDX_05;
  ulong extraout_RDX_06;
  bool bVar17;
  undefined1 auVar18 [16];
  bool local_19f2;
  bool local_19ee;
  bool local_19d1;
  byte local_19b5;
  undefined1 local_1978 [72];
  long local_1930;
  undefined1 local_1928 [72];
  undefined4 *local_18e0;
  undefined8 local_18d8;
  undefined2 local_18d0;
  undefined1 local_18cd;
  int **local_18c8;
  int **local_18c0;
  int **local_18b8;
  int **local_18b0;
  int **local_18a8;
  int local_1898;
  uint local_1894;
  byte *local_1890;
  undefined8 local_1888;
  undefined8 local_1880;
  ulong **local_1878;
  ulong **local_1870;
  ulong *local_1868 [2];
  undefined1 local_1858 [234];
  ulong local_176e;
  byte local_1766;
  undefined **local_1708;
  long *local_1700;
  undefined8 local_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined4 local_16d4;
  undefined4 local_16d0;
  undefined4 local_16cc;
  undefined1 local_16c8 [92];
  int local_166c;
  long **local_1668;
  ulong *local_1660;
  ushort *local_1658;
  undefined8 *local_1650;
  undefined8 local_1648;
  long local_1640;
  undefined8 auStack_1638 [7];
  uint *local_1600;
  int local_15ec;
  int *local_15e8;
  short local_15da [21];
  undefined4 local_15b0;
  undefined4 local_15ac;
  undefined4 local_15a8;
  undefined4 local_15a4;
  undefined4 local_15a0;
  undefined4 local_159c;
  uint *apuStack_1598 [3];
  long local_1580;
  undefined1 local_1578 [782];
  undefined2 local_126a;
  undefined1 local_1268 [96];
  uint *local_1208;
  int local_11fc [7];
  uint *local_11e0;
  long local_11d8 [5];
  uint *local_11b0;
  byte *local_11a8;
  uint **local_11a0;
  undefined8 local_1198;
  int local_118c;
  char *local_1188;
  byte *local_1180;
  undefined8 auStack_1178 [4];
  uint *local_1158;
  uint *local_1150;
  undefined8 local_1148;
  int local_1134;
  byte *local_1130;
  uint local_1128 [4];
  undefined1 local_1118 [1744];
  undefined1 local_a48 [584];
  undefined8 local_800;
  ulong local_7f8;
  ulong *local_7e8;
  undefined8 local_7d9;
  undefined1 local_7d1;
  uint *local_7d0;
  undefined8 local_7c8;
  undefined1 *local_7c0;
  undefined8 local_7b8;
  uint local_7b0;
  uint local_7ac;
  byte local_7a5;
  int local_79c;
  ulong local_798;
  char local_790;
  char local_619;
  undefined8 local_618;
  byte *local_610;
  long alStack_608 [9];
  byte *local_5c0;
  byte *local_5b8;
  undefined8 local_5b0;
  ushort *local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  short local_58a;
  undefined1 local_588 [56];
  long local_550;
  int local_538;
  int local_534;
  int local_530;
  ushort local_52a;
  undefined8 local_528;
  ushort local_51a;
  ulong local_518;
  byte local_510 [10];
  undefined1 auStack_506 [58];
  uint local_4cc;
  undefined1 local_4c8 [248];
  long local_3d0;
  char *local_f0;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long *local_58;
  long local_50;
  char local_47;
  ushort local_46;
  ulong local_43;
  byte local_3b;
  ulong local_33;
  byte local_2b;
  ulong local_2a;
  char local_22;
  ulong local_1a;
  char local_12;
  ulong local_11;
  char local_9;

  local_50 = 0;
  local_58 = &local_50;
  local_47 = param_6;
  local_46 = param_1;
  local_43 = param_4;
  local_3b = param_5;
  local_33 = param_4;
  local_2b = param_5;
  local_2a = param_2;
  local_22 = param_3;
  local_1a = param_2;
  local_12 = param_3;
  memset(&local_88,0,0x30);
  local_88 = 0x40d068;
  local_80 = 0x40d068;
  local_70 = 0x40d068;
  local_68 = 0x40d068;
  local_89 = 0x38;
  memcpy(local_4c8,&PTR_DAT_00409af0,0x438);
  local_4cc = 0xfffffffa;
  memcpy(&local_518,&DAT_00409f30,0x3f);
  local_51a = 0xfff9;
  local_528 = 0x40d098;
  local_52a = 0x347e;
  local_530 = -0x1e85004c;
  local_534 = 0;
  local_538 = 9;
  memcpy(local_588,&DAT_00409f70,0x50);
  local_58a = -1;
  local_590 = 0x24a533f7;
  local_594 = 0xfd86d647;
  local_598 = 0xfffffff8;
  local_5a0 = 0;
  local_5a8 = &local_51a;
  local_5b0 = 0;
  local_5b8 = (byte *)&DAT_0040d061;
  local_5c0 = local_510;
  local_610 = &DAT_0040d4e8;
  local_618 = 0;
  local_619 = 'N';
  memcpy(&local_798,&DAT_00409fc0,0x17a);
  codemarker_alpha(0x1e);
  codemarker_alpha(0x1f);
  for (local_79c = 0; local_79c < 8; local_79c = local_79c + 1) {
    alStack_608[local_79c] = (long)&local_5c0;
  }
  codemarker_alpha(0x20);
  lVar11 = local_50;
  *local_58 = local_50;
  sVar5 = safe_rshift_func_uint16_t_u_u((int)(uint)(lVar11 == local_60) < g_63,7);
  if (sVar5 == 0) {
    local_11fc[0] = -0x61767fb5;
    local_1208 = &local_4cc;
    memcpy(local_1268,&DAT_0040aaa0,0x5a);
    local_126a = 0xff6e;
    memcpy(local_1578,&PTR_DAT_0040ab00,0x300);
    local_1580 = 0x40d094;
    apuStack_1598[2] = (uint *)&local_1580;
    apuStack_1598[1] = &g_214;
    local_159c = 0x7a7ccc4f;
    local_15a0 = 0xffffffff;
    local_15a4 = 0;
    local_15a8 = 1;
    local_15ac = 0xa8d58cc5;
    local_15b0 = 0xfffffffa;
    local_15da[1] = -0x7229;
    local_15da[2] = 0x1fa7;
    local_15da[3] = -0x7229;
    local_15da[4] = 0x1fa7;
    local_15da[5] = -0x7229;
    local_15da[6] = 0x1fa7;
    local_15da[7] = -0x7229;
    local_15da[8] = 0x1fa7;
    local_15da[9] = -0x7229;
    local_15da[10] = 0x1fa7;
    local_15da[0xb] = -0x7229;
    local_15da[0xc] = 0x1fa7;
    local_15da[0xd] = -0x7229;
    local_15da[0xe] = 0x1fa7;
    local_15da[0xf] = -0x7229;
    local_15da[0x10] = 0x1fa7;
    codemarker_alpha(0x2c);
    local_15e8 = &g_282;
    codemarker_alpha(0x2d);
    codemarker_alpha(0x2e);
    for (local_15ec = 0; local_15ec < 1; local_15ec = local_15ec + 1) {
      apuStack_1598[local_15ec] = (uint *)&DAT_0040d059;
    }
    codemarker_alpha(0x2f);
    for (local_15ec = 0; local_15ec < 1; local_15ec = local_15ec + 1) {
      local_15da[local_15ec] = -9;
    }
    local_11fc[0] = 0;
    while ((local_11fc[0] != 0x38 && (*(uint **)g_184 = local_1208, local_46 == 0))) {
      cVar4 = safe_add_func_int8_t_s_s((int)(char)local_11fc[0],2);
      local_11fc[0] = (int)cVar4;
    }
    local_4cc = (uint)local_510[0];
    local_2b = local_510[0];
    cVar4 = safe_lshift_func_int8_t_s_u((int)(char)local_510[0],local_518 & 0x7fffffff);
    *g_192 = (int)cVar4 | *g_192;
    codemarker_alpha(0x30);
    uVar1 = local_46;
    lVar11 = (long)(int)local_4cc;
    *(int **)apuStack_1598[2] = local_11fc;
    local_19f2 = &stack0x00000000 == (undefined1 *)0x40e294 && local_4cc != 0;
    bVar15 = safe_div_func_uint8_t_u_u((ulong)(long)(int)(uint)local_19f2 < 0x84d80a83,0xff);
    *apuStack_1598[1] = (uint)bVar15 ^ *apuStack_1598[1];
    uVar6 = safe_rshift_func_int16_t_s_u((uint)local_52a == g_135._12_4_,local_33 & 0xffffffff);
    uVar7 = safe_rshift_func_uint16_t_u_u(uVar6,local_33 & 0xffffffff);
    iVar10 = safe_rshift_func_uint32_t_u_s(uVar7 & local_52a,local_89);
    local_1a = safe_mod_func_int64_t_s_s
                         (lVar11,(long)(int)(uint)(0xd2547711 <
                                                  (ulong)(long)(int)(uint)(iVar10 == 0)) &
                                 *(ulong *)**(undefined8 **)g_172);
    uVar12 = safe_lshift_func_int64_t_s_s(0,(int)DAT_0040d042);
    lVar11 = safe_mul_func_uint64_t_u_u(uVar12,g_58._6_2_);
    sVar5 = safe_lshift_func_int16_t_s_u
                      ((uint)(uVar1 < (lVar11 != -0x3c76938f4bb648bb)) == g_67._4_4_,10);
    if (sVar5 != 0) {
      *local_1208 = *local_1208 ^ 1;
      *local_1208 = *g_192 ^ *local_1208;
      *local_1208 = 5;
      local_11 = local_1a;
      local_9 = local_12;
      uVar13 = extraout_RDX_01;
      goto LAB_004062ee;
    }
    local_1600 = (uint *)(g_67 + 4);
    local_1640 = -3;
    local_1648 = 0;
    local_1650 = &local_1648;
    local_1658 = &local_51a;
    local_1660 = (ulong *)&g_63;
    local_1668 = &local_58;
    codemarker_alpha(0x31);
    codemarker_alpha(0x32);
    for (local_166c = 0; local_166c < 7; local_166c = local_166c + 1) {
      auStack_1638[local_166c] = 0x40d07c;
    }
    local_1640 = local_1640 + 1;
    codemarker_alpha(0x33);
    uVar13 = local_33;
    *local_1650 = 0x40d278;
    iVar10 = safe_rshift_func_int32_t_s_s(0xfffffff7,*local_1600 == 1);
    DAT_0040d061 = (ulong)(long)iVar10 <= local_1a;
    uVar16 = safe_mul_func_int32_t_s_s
                       ((long)(int)(uint)(2 < (-1 < (int)(uint)(local_550 != 0x40d278))) ==
                        -0x3b2788b6d7c1ebe7,
                        (int)(uint)((int)*local_1208 <
                                   (int)(uint)((uVar13 ^ (long)(int)(uint)((int)*local_1208 <
                                                                          (int)(char)local_2b)) < 2)
                                   ) <= (int)((long)(local_518 << 6) >> 0x25));
    uVar8 = safe_add_func_uint64_t_u_u(local_1a < (uVar16 & g_135._12_4_),(long)(int)*local_1600);
    iVar10 = safe_sub_func_int32_t_s_s(uVar8,param_7);
    uVar13 = *local_1660;
    *local_1660 = (long)iVar10 ^ uVar13;
    auVar18 = safe_lshift_func_int64_t_s_u((long)iVar10 ^ uVar13,*(ulong *)g_169 & 0xffffffff);
    uVar13 = auVar18._8_8_;
    if ((long)local_12 < auVar18._0_8_) {
      local_11 = g_42;
      local_9 = DAT_0040d058;
      goto LAB_004062ee;
    }
    memcpy(local_16c8,&DAT_0040ae00,0x50);
    local_16cc = 0xfffffff8;
    local_16d0 = 0xf074a923;
    local_16d4 = 0xfffffffe;
    local_16f8 = 0x13205a4e00000000;
    local_16f0 = 0xba1ac6a13205a4e;
    local_16e8 = 0x13205a4e13205a4e;
    local_16e0 = 0x13205a4e0ba1ac6a;
    local_1700 = &local_1580;
    local_1708 = &g_257;
    codemarker_alpha(0x34);
    *g_255 = (long)local_1668;
    local_15da[0] = local_15da[0] + -1;
    codemarker_alpha(0x35);
    if (*g_185 == 0) {
      local_1868[0] = &DAT_0040d059;
      local_1870 = local_1868;
      local_1878 = (ulong **)(g_144 + 0x18);
      local_1880 = 0;
      local_1888 = 0;
      local_1890 = &DAT_0040d4e8;
      local_1894 = 0xfffffffb;
      codemarker_alpha(0x37);
      for (param_7 = 0x13; param_7 != 0x1a; param_7 = safe_add_func_int32_t_s_s(param_7,7)) {
        local_1898 = 6;
        codemarker_alpha(0x38);
        local_18c8 = &local_15e8;
        local_18c0 = &local_15e8;
        local_18b8 = &local_15e8;
        local_18b0 = &local_15e8;
        local_18a8 = &local_15e8;
        codemarker_alpha(0x39);
        *local_1208 = 0xfffffffe;
        local_1898 = local_1898 + 1;
        *local_1208 = 0;
        g_283 = (undefined *)local_15e8;
        g_285 = (undefined *)local_15e8;
      }
      bVar17 = &local_1580 != local_1700;
      *local_1650 = local_1878;
      sVar5 = safe_unary_minus_func_int16_t_s(local_1870 != local_1878);
      uVar2 = safe_add_func_uint8_t_u_u(sVar5 == 0,local_12);
      bVar15 = *local_1890 | 0x8aa5 < (int)g_67._4_4_;
      *local_1890 = bVar15;
      bVar3 = safe_sub_func_uint64_t_u_u(local_f0 == &local_47,(long)(int)local_1894);
      iVar10 = safe_add_func_int32_t_s_s(uVar2,bVar15 & bVar3);
      uVar12 = safe_sub_func_uint64_t_u_u((int)(uint)local_89 < iVar10,0xc42f424ce64ea76d);
      uVar2 = safe_mul_func_uint64_t_u_u(uVar12,g_135._12_4_);
      safe_div_func_uint8_t_u_u(uVar2,local_1894 & 0xff,extraout_RDX_02,uVar2);
      *local_1208 = *local_1208 ^
                    (int)local_1894 <=
                    (int)(uint)((int)(uint)(bVar17 ==
                                           ((uint)(local_1668 != (long **)&g_257) != (int)local_47))
                               < (int)(char)local_2b) ^ 0xea7e;
    }
    else {
      memcpy(local_1858,&DAT_0040ae50,0x13b);
      codemarker_alpha(0x36);
      *local_1208 = (uint)(*local_1600 == 8);
      local_538 = 0;
      while (local_538 == -9) {
        local_176e = local_518;
        local_1766 = local_510[0];
        *local_1600 = (int)local_47 ^ 0xffffffffU | *local_1600;
        if (**(int **)g_184 != 0) break;
        cVar4 = safe_sub_func_int8_t_s_s(0xfffffff7,1);
        local_538 = (int)cVar4;
      }
    }
  }
  else {
    local_7a5 = 0x12;
    local_7ac = 0xfffffffa;
    codemarker_alpha(0x21);
    for (local_46 = 0xfffc; local_46 == 9;
        local_46 = safe_add_func_int16_t_s_s((int)(short)local_46,2)) {
      local_7b0 = 7;
      local_7b8 = 0x40d068;
      local_7c0 = g_67;
      local_7c8 = 7;
      if (local_2b != 0) break;
      codemarker_alpha(0x22);
      for (local_1a = 0; local_1a < 2; local_1a = local_1a + 1) {
        local_7d0 = (uint *)(g_67 + 4);
        local_7d9 = 0x3fff84780000e4f;
        local_7d1 = 1;
        local_7e8 = &DAT_0040d059;
        codemarker_alpha(0x23);
        if (DAT_0040d036 != 0) {
          codemarker_alpha(0x24);
          local_11 = *(ulong *)((long)&g_42 + local_1a * 9);
          local_9 = (&DAT_0040d058)[local_1a * 9];
          uVar13 = extraout_RDX;
          goto LAB_004062ee;
        }
        local_7f8 = 0x633724ddd4cc67fd;
        local_800 = 0x40d07c;
        memcpy(local_a48,&DAT_0040a150,0x240);
        codemarker_alpha(0x25);
        codemarker_alpha(0x26);
        for (local_47 = '\0'; local_47 < '\x03'; local_47 = local_47 + '\x01') {
          memcpy(local_1118,&PTR_DAT_0040a390,0x6c0);
          local_1130 = (byte *)&DAT_0040d061;
          codemarker_alpha(0x27);
          codemarker_alpha(0x28);
          for (local_1134 = 0; local_1134 < 4; local_1134 = local_1134 + 1) {
            local_1128[local_1134] = 0x7392d2a8;
          }
          local_1128[0] = (uint)param_7;
          local_19b5 = 1;
          if (g_58._4_2_ == 0) {
            local_19b5 = (((long)(int)((long)(g_73 << 6) >> 0x25) | 0xfffffffffffffff6U) ^
                         0x3b0092db2509b59b) != (long)DAT_0040d03a ^ 0xff;
          }
          *local_1130 = *local_1130 &
                        (0xffffffff <
                        (local_7f8 ^
                        (long)(int)(uint)((DAT_0040d4e8 < (local_19b5 & 1)) < g_58._6_2_))) <
                        local_1128[0];
          *(uint *)(g_67 + (long)local_47 * 4) =
               (uint)((int)(char)local_2b <= (int)(local_7b0 & (int)(char)local_2b));
          if (local_12 != '\0') break;
        }
        local_89 = local_89 + 1;
        uVar16 = *local_7d0;
        *local_7d0 = uVar16 | 1;
        if ((uVar16 | 1) == 0) {
          local_1198 = 0x40d09c;
          local_11a0 = &local_7d0;
          for (local_4cc = 0; (int)local_4cc < 2; local_4cc = local_4cc + 1) {
            local_11a8 = &DAT_0040d4e8;
            local_11b0 = (uint *)(g_135 + 8);
            local_11e0 = &local_7ac;
            for (local_11fc[6] = 0; local_11fc[6] < 1; local_11fc[6] = local_11fc[6] + 1) {
              for (local_11fc[5] = 0; local_11fc[5] < 4; local_11fc[5] = local_11fc[5] + 1) {
                local_11d8[(long)local_11fc[6] * 4 + (long)local_11fc[5]] = (long)&local_11b0;
              }
            }
            local_7c0 = g_67 + (long)(int)(local_4cc + 1) * 4;
            bVar15 = *local_11a8;
            *local_11a8 = bVar15 + 1;
            if (bVar15 != 0) {
              local_1198 = 0x40d09c;
            }
            local_19ee = false;
            if (bVar15 != 0) {
              *local_11b0 = (int)local_12;
              g_158 = (ulong)(uint)(int)local_12 & 0x7fffffff;
              g_73 = g_73 & 0xffffffff80000000 | g_158;
              *local_11b0 = 1;
              *local_7d0 = (uint)((ulong)(long)local_47 < 0xfe);
              cVar4 = safe_mul_func_int8_t_s_s((ulong)(long)local_47 < 0xfe,(int)(char)param_7);
              safe_mod_func_uint32_t_u_u((int)cVar4,local_46);
              local_19ee = (int)((long)(g_61 << 0x23) >> 0x3e) != 0;
            }
            *local_11e0 = (uint)local_19ee & *local_11e0;
            *(undefined8 *)((long)&g_42 + local_1a * 9) =
                 *(undefined8 *)((long)&g_42 + local_1a * 9);
            (&DAT_0040d058)[local_1a * 9] = (&DAT_0040d058)[local_1a * 9];
            *(undefined8 *)g_171 = 0x40d468;
          }
          *local_11a0 = &local_4cc;
          if (local_12 == '\0') goto LAB_004052d5;
        }
        else {
          local_1148 = 0;
          local_1150 = (uint *)(g_135 + 0xc);
          local_1158 = (uint *)&g_137;
          local_1180 = &local_89;
          local_1188 = &DAT_0040d061;
          codemarker_alpha(0x29);
          codemarker_alpha(0x2a);
          for (local_118c = 0; local_118c < 3; local_118c = local_118c + 1) {
            auStack_1178[local_118c] = 0;
          }
          uVar8 = safe_lshift_func_uint32_t_u_u(local_7d0 == (uint *)(g_67 + 4),0x14);
          bVar17 = local_3d0 != 0;
          cVar4 = safe_sub_func_int16_t_s_s(0xffffff76,(int)DAT_0040d061);
          safe_add_func_int8_t_s_s((int)cVar4,(int)(char)local_1a);
          lVar11 = safe_mul_func_int64_t_s_s((uint)(g_61 >> 0x1d) & 0x1fffffff,(long)(char)local_2b)
          ;
          uVar12 = safe_rshift_func_int64_t_s_u(lVar11 != -0xb5d02c26,local_33 & 0xffffffff);
          uVar13 = safe_rshift_func_uint64_t_u_s(uVar12,local_89);
          safe_sub_func_int32_t_s_s(bVar17,uVar13 < local_7a5);
          local_4cc = (int)local_47 ^ (uint)local_89 ^ local_4cc;
          uVar16 = safe_rshift_func_uint64_t_u_u
                             ((ulong)(long)(int)local_4cc < 0xfd37754c0d22be5f,DAT_0040d4e8);
          cVar4 = safe_mul_func_uint32_t_u_u(uVar16 | 0xbfdda352,DAT_0040d059 & 0xffffffff);
          cVar4 = safe_mod_func_int8_t_s_s
                            ((int)cVar4,(int)(char)((long)(g_73 << 6) >> 0x25),extraout_RDX_00,cVar4
                            );
          uVar12 = safe_add_func_int64_t_s_s
                             ((int)(uint)((int)cVar4 < (int)(uint)DAT_0040d4e8) < (int)*local_7d0,
                              0xed81a4cd4942d81d);
          uVar12 = safe_sub_func_int64_t_s_s(uVar8,uVar12);
          uVar2 = safe_lshift_func_uint64_t_u_s(uVar12,local_46);
          bVar15 = safe_rshift_func_uint8_t_u_s(uVar2,2);
          *local_1150 = (uint)(0xd1 < (int)((bVar15 | local_7b0) & *local_7d0));
          sVar5 = safe_unary_minus_func_int16_t_s((int)(short)local_1a);
          *local_1158 = (uint)((ulong)param_7 <= ((long)sVar5 & local_1a)) & *local_1158;
          uVar16 = (uint)g_58._6_2_;
          uVar9 = (uint)(char)local_2b;
          g_144._56_8_ = g_144._24_8_;
          bVar15 = *local_1180;
          *local_1180 = bVar15 ^ 0xb9;
          local_19d1 = false;
          if ((bVar15 ^ 0xb9) <= (local_7e8 != (ulong *)g_144._24_8_) != 0xffffffff) {
            *local_1188 = -0x38;
            cVar4 = safe_lshift_func_int8_t_s_s(0xffffffc8,5);
            local_19d1 = cVar4 != '\0';
          }
          safe_div_func_uint64_t_u_u
                    ((long)(int)((uVar16 | uVar9 ^ local_19d1 != local_4cc ^ 0xffffffff) ^ local_7b0
                                ),0x789f30d9698a8858);
          uVar16 = safe_div_func_int64_t_s_s
                             ((&stack0x00000000 != (undefined1 *)0x40dcb9) <= DAT_0040d4e8,param_7);
          *local_7d0 = *local_7d0 & uVar16;
LAB_004052d5:
          if (local_2b != 0) break;
        }
      }
      if (local_4cc != 0) break;
    }
    codemarker_alpha(0x2b);
    for (g_137 = 0xe; g_137 != 10; g_137 = g_137 + -1) {
      local_11fc[3] = 0;
      local_11fc[4] = 0;
      local_11fc[1] = 0x40d07c;
      local_11fc[2] = 0;
      g_67._4_4_ = g_67._4_4_ & 1;
    }
  }
  codemarker_alpha(0x3a);
  uVar7 = local_46;
  iVar10 = (int)local_58a;
  uVar13 = safe_add_func_int64_t_s_s(local_89,&stack0x00000000 == (undefined1 *)0x51a);
  g_314 = g_314 | uVar13;
  uVar1 = *local_5a8 & (ushort)g_314;
  *local_5a8 = uVar1;
  sVar5 = safe_sub_func_int16_t_s_s(iVar10,(int)(short)(uVar7 | uVar1));
  bVar15 = *local_5b8;
  *local_5b8 = bVar15 & param_7;
  uVar14 = safe_lshift_func_uint64_t_u_s((long)local_534,(bVar15 & param_7) == 0);
  uVar16 = (g_282 << 5) >> 5;
  uVar13 = (ulong)uVar16;
  if (sVar5 == 0 && (int)uVar16 <= (int)(uint)(0xc < uVar14)) {
    local_11 = local_1a;
    local_9 = local_12;
  }
  else {
    local_18cd = 2;
    codemarker_alpha(0x3b);
    local_610 = &param_7;
    bVar15 = (local_530 != 0 ^ 0xffU) & 1;
    sVar5 = safe_add_func_int16_t_s_s
                      (local_510[0],(int)(short)((short)local_12 ^ (ushort)bVar15),bVar15,
                       local_510[0]);
    bVar17 = (uint)g_135._8_4_ < (uint)(int)sVar5;
    g_135._8_4_ = g_135._8_4_ + -1;
    cVar4 = safe_lshift_func_int8_t_s_u((int)(uint)(bVar17 == local_46) < (int)local_619);
    if (cVar4 == '\0') {
      memcpy(local_1978,&DAT_0040af90,0x28);
      codemarker_alpha(0x3e);
      *(undefined1 **)g_352 = auStack_506;
      codemarker_alpha(0x3f);
      local_46 = 0;
      codemarker_alpha(0x40);
      safe_lshift_func_uint8_t_u_s
                ((long)(local_518 << 6) >> 0x25 & 0xff,local_52a,extraout_RDX_05,
                 CONCAT71((int7)SUB43(local_1978._8_4_,1) ^ 0xffffffffffffff,1));
      _g_354 = _g_357;
      DAT_0040d511 = DAT_0040d521;
      local_11 = g_42;
      local_9 = DAT_0040d058;
      uVar13 = extraout_RDX_06;
    }
    else {
      local_18d0 = 0xe3f8;
      codemarker_alpha(0x3c);
      local_33 = 0;
      uVar13 = extraout_RDX_03;
      while (local_33 < 0x3b) {
        local_18d8 = 0;
        local_18e0 = &local_594;
        memset(local_1928,0,0x40);
        local_1930 = -0x5f047cf35f0436c1;
        codemarker_alpha(0x3d);
        local_1930 = local_1930 + -1;
        bVar15 = safe_add_func_uint8_t_u_u(local_33 & 0xff);
        uVar13 = extraout_RDX_04;
        local_33 = (ulong)bVar15;
      }
      for (local_4cc = 1; -1 < (int)local_4cc; local_4cc = local_4cc - 1) {
      }
      local_11 = local_798;
      local_9 = local_790;
    }
  }
LAB_004062ee:
  auVar18._9_7_ = (undefined7)(uVar13 >> 8);
  auVar18[8] = local_9;
  auVar18._0_8_ = local_11;
  return auVar18;
}



undefined2 func_43(undefined8 param_1,undefined2 param_2)

{
  codemarker_alpha(0x41);
  codemarker_alpha(0x42);
  return param_2;
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



uint safe_div_func_uint32_t_u_u(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 / param_2;
  }
  return local_14;
}



long func_50(char param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool local_1fa;
  bool local_1f9;
  undefined8 local_1d8 [3];
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 *local_198;
  ushort *local_190;
  undefined1 local_188 [9];
  ulong local_17f;
  undefined2 local_c;
  char local_9;

  local_c = 0;
  local_9 = param_1;
  memcpy(local_188,&DAT_0040afc0,0x17a);
  local_190 = (ushort *)((long)&g_58 + 6);
  local_198 = &g_63;
  memset(local_1d8,0,0x40);
  local_1d8[0] = 0x40d07c;
  local_1c0 = 0x40d07c;
  local_1a8 = 0x40d07c;
  codemarker_alpha(0x43);
  uVar2 = local_c;
  local_1f9 = true;
  if (DAT_0040d059 == 0 && local_9 == '\0') {
    uVar5 = (uint)DAT_0040d061;
    uVar1 = *local_190;
    *local_190 = uVar1 | (short)DAT_0040d061;
    local_1fa = true;
    if (uVar1 == 0 && (uVar5 & 0xffff) == 0) {
      *local_198 = 1;
      uVar3 = safe_mul_func_uint8_t_u_u(local_17f & 0xff,(char)DAT_0040d036,uVar5,(char)local_17f);
      safe_add_func_int64_t_s_s(1,uVar3);
      local_1fa = (short)DAT_0040d036 < 3;
    }
    iVar4 = safe_rshift_func_uint32_t_u_u(uVar2,local_1fa ^ 0xffffffff);
    local_1f9 = iVar4 != 0;
  }
  g_67._0_4_ = (uint)(local_1f9 != DAT_0040d036);
  return DAT_0040d059;
}



uint safe_mod_func_uint16_t_u_u(ushort param_1,ushort param_2)

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



long safe_sub_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 - param_2;
}



int safe_sub_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 - (int)param_2;
}



uint safe_rshift_func_uint32_t_u_s(uint param_1,int param_2)

{
  uint local_14;

  local_14 = param_1;
  if ((-1 < param_2) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_rshift_func_int16_t_s_u(short param_1,uint param_2)

{
  undefined4 local_14;

  if ((param_1 < 0) || (0x1f < param_2)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
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



int safe_rshift_func_int32_t_s_u(int param_1,uint param_2)

{
  int local_14;

  local_14 = param_1;
  if ((-1 < param_1) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
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



int safe_div_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x80000000 || (param_2 != -1)))) {
    local_14 = param_1 / param_2;
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



int safe_mul_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 * param_2;
}



uint safe_lshift_func_uint32_t_u_u(uint param_1,uint param_2)

{
  uint local_14;

  local_14 = param_1;
  if ((param_2 < 0x20) && (param_1 <= 0xffffffffU >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



long safe_add_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 + param_2;
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



int safe_mul_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 * (int)param_2;
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



int safe_unary_minus_func_int32_t_s(int param_1)

{
  undefined4 local_10;

  if (param_1 == -0x80000000) {
    local_10 = -0x80000000;
  }
  else {
    local_10 = -param_1;
  }
  return local_10;
}



int safe_add_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 + (int)param_2;
}



long safe_mul_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 * param_2;
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



int safe_sub_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 - (uint)param_2;
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



uint safe_lshift_func_uint16_t_u_s(ushort param_1,int param_2)

{
  undefined4 local_14;

  if (((param_2 < 0) || (0x1f < param_2)) || (0xffff >> ((byte)param_2 & 0x1f) < (int)(uint)param_1)
     ) {
    local_14 = (uint)param_1;
  }
  else {
    local_14 = (uint)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_add_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 + (uint)param_2;
}



uint safe_div_func_uint8_t_u_u(byte param_1,byte param_2)

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



long safe_unary_minus_func_uint64_t_u(long param_1)

{
  return -param_1;
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



ulong safe_mod_func_uint64_t_u_u(ulong param_1,ulong param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 != 0) {
    local_20 = param_1 % param_2;
  }
  return local_20;
}



int safe_add_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 + param_2;
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



int safe_mod_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x80000000 || (param_2 != -1)))) {
    local_14 = param_1 % param_2;
  }
  return local_14;
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



int safe_unary_minus_func_int16_t_s(short param_1)

{
  return -(int)param_1;
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



ulong safe_rshift_func_uint64_t_u_u(ulong param_1,uint param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 < 0x20) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
  }
  return local_20;
}



int safe_sub_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 - (int)param_2;
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



uint safe_mod_func_uint32_t_u_u(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 % param_2;
  }
  return local_14;
}



int safe_add_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 + (int)param_2;
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



long safe_mod_func_int64_t_s_s(long param_1,long param_2)

{
  long local_20;

  local_20 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x8000000000000000 || (param_2 != -1)))) {
    local_20 = param_1 % param_2;
  }
  return local_20;
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



int safe_mul_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 * (uint)param_2;
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

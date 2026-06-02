# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/9.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 406 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/9.c" 2
typedef unsigned char undefined;

typedef unsigned char byte;
typedef unsigned char dwfenc;
typedef unsigned int dword;
typedef unsigned long qword;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined5;
typedef unsigned long undefined6;
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
undefined DAT_0040c240;
undefined1[32] g_2900;
undefined DAT_0040c245;
undefined8 g_2901;
undefined DAT_0040c24a;
undefined1[80] g_2902;
undefined DAT_0040c24f;
undefined4 g_2921;
undefined8 g_2945;
undefined8 g_3103;
undefined4 g_3246;
undefined4 g_3343;
undefined4 g_3360;
undefined4 crc32_context;
undefined4 g_13;
undefined2 g_23;
undefined2 g_29;
undefined2 g_39;
undefined8 g_51;
undefined4 g_73;
undefined2 g_130;
undefined1 g_138;
undefined2 g_180;
undefined8 g_197;
undefined1 g_208;
undefined1 g_213;
undefined DAT_0040c43e;
undefined2 g_237;
undefined4 g_253;
undefined1 g_279;
undefined8 g_308;
undefined2 g_320;
undefined8 g_343;
undefined8 g_373;
undefined4 g_407;
undefined2 g_413;
undefined1 g_435;
undefined1 g_436;
undefined2 g_441;
undefined5 g_464;
undefined4 g_531;
undefined2 g_584;
undefined8 g_625;
undefined8 g_776;
undefined8 g_905;
undefined4 g_940;
undefined1 g_980;
undefined8 g_992;
undefined1[24] g_1024;
undefined1[40] g_1061;
undefined2 g_1104;
undefined1 g_1128;
undefined1 g_1136;
undefined4 g_1172;
undefined8 g_1239;
undefined2 g_1240;
undefined8 g_1339;
undefined2 g_1411;
undefined2 g_1415;
undefined8 g_1517;
undefined1 g_1570;
undefined4 g_1603;
undefined8 g_1645;
undefined8 g_1684;
undefined8 g_1883;
undefined1 g_1938;
undefined1 g_2051;
undefined4 g_2132;
undefined4 g_2174;
undefined4 g_2175;
undefined4 g_2185;
undefined1 g_2270;
undefined1[1440] g_2275;
undefined8 g_2343;
undefined4 g_2372;
undefined8 g_2421;
undefined2 g_2501;
undefined4 g_2519;
undefined8 g_2572;
undefined1[40] g_2633;
undefined1[160] g_2742;
undefined1[16] g_2786;
undefined1[96] g_2810;
undefined4 g_2814;
undefined4 g_2821;
undefined8 g_2840;
undefined8 g_2864;
undefined8 g_2895;
undefined8 g_2897;
undefined1[1024] crc32_tab;
pointer g_3164;
pointer g_2026;
pointer g_1489;
undefined DAT_00411780;
pointer g_606;
pointer g_737;
undefined1 g_3340;
pointer g_1518;
undefined1[1792] g_12;
pointer g_2394;
undefined8 g_88;
pointer g_241;
pointer g_1713;
undefined *PTR_g_328_0040c630;
undefined DAT_0040ccf0;
undefined DAT_0040ce30;
undefined DAT_0040ce60;
undefined DAT_0040d250;
pointer g_1176;
undefined *PTR_g_3020_0040d2c0;
pointer g_2976;
pointer g_3308;
undefined *PTR_g_2786_0040d2f0;
pointer g_3019;
pointer g_2553;
undefined DAT_0040d3b0;
pointer g_1927;
undefined DAT_004110bc;
pointer g_2131;
pointer g_2652;
pointer g_840;
pointer g_240;
undefined8 g_2977;
pointer g_86;
pointer g_462;
undefined8 g_1529;
pointer g_1528;
pointer g_2263;
pointer g_327;
pointer g_736;
pointer g_2956;
pointer g_3009;
pointer g_307;
pointer g_2130;
pointer g_3046;
pointer g_2025;
pointer g_2261;
pointer g_443;
pointer g_2176;
pointer g_3020;
pointer g_461;
pointer g_2262;
pointer g_2726;
undefined1[40] g_325;
undefined8 g_3140;
pointer g_3151;
pointer g_1461;
pointer g_85;
pointer g_1460;
undefined DAT_0040d9a0;
undefined DAT_0040d9e0;
undefined *PTR_g_1603_0040da40;
pointer PTR_g_407_0040da68;
undefined *PTR_DAT_0040da90;
undefined *PTR_g_1603_0040dab8;
pointer PTR_g_407_0040dae0;
undefined *PTR_DAT_0040db08;
undefined *PTR_g_407_0040db30;
undefined *PTR_g_1603_0040db58;
pointer PTR_g_1603_0040db80;
undefined *PTR_g_407_0040dba8;
pointer g_328;
pointer g_580;
pointer g_1816;
undefined8 g_593;
undefined DAT_0040dbd0;
undefined DAT_0040dcf0;
undefined *PTR_g_2372_0040dd30;
undefined *PTR_g_1938_0040dd70;
pointer g_505;
pointer g_542;
undefined DAT_0040e1f0;
undefined DAT_00411798;
pointer g_592;
pointer g_1381;
pointer g_331;
undefined DAT_0040e340;
undefined *PTR_g_253_0040e4f0;

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

  codemarker_alpha(0xff);
  codemarker_alpha(0x100);
  local_28 = 0;
  codemarker_alpha(0x101);
  if (param_1 == 2) {
    iVar1 = strcmp(*(char **)(param_2 + 8),"1");
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  codemarker_alpha(0x102);
  platform_main_begin();
  codemarker_alpha(0x103);
  crc32_gentab();
  func_1();
  transparent_crc((long)g_13,&DAT_0040c240,local_28);
  transparent_crc((long)g_23,&DAT_0040c245,local_28);
  transparent_crc((long)g_29,&DAT_0040c24a,local_28);
  transparent_crc(g_39,&DAT_0040c24f,local_28);
  codemarker_alpha(0x104);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x105);
    for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
      codemarker_alpha(0x106);
      for (local_24 = 0; (int)local_24 < 1; local_24 = local_24 + 1) {
        codemarker_alpha(0x107);
        transparent_crc((&g_51)[(long)(int)local_1c * 5 + (long)(int)local_20 + (long)(int)local_24]
                        ,"g_51[i][j][k]",local_28);
        codemarker_alpha(0x108);
        if (local_28 != 0) {
          codemarker_alpha(0x109);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0x10a);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0x10b);
    transparent_crc((long)(int)(&g_73)[(int)local_1c],"g_73[i]",local_28);
    codemarker_alpha(0x10c);
    if (local_28 != 0) {
      codemarker_alpha(0x10d);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_130,"g_130",local_28);
  transparent_crc((long)g_138,"g_138",local_28);
  transparent_crc(g_180,"g_180",local_28);
  transparent_crc(g_197,"g_197.f0",local_28);
  transparent_crc((long)g_208,"g_208",local_28);
  transparent_crc(g_213,"g_213",local_28);
  transparent_crc((long)g_237,"g_237",local_28);
  transparent_crc(g_253,"g_253",local_28);
  transparent_crc(g_279,"g_279",local_28);
  transparent_crc(g_308,"g_308",local_28);
  transparent_crc((long)g_320,"g_320",local_28);
  transparent_crc(g_343,"g_343.f0",local_28);
  transparent_crc(g_373,"g_373",local_28);
  transparent_crc((long)g_407,"g_407",local_28);
  transparent_crc(g_413,"g_413",local_28);
  transparent_crc((long)g_435,"g_435",local_28);
  transparent_crc(g_436,"g_436",local_28);
  transparent_crc(g_441,"g_441",local_28);
  codemarker_alpha(0x10e);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    codemarker_alpha(0x10f);
    transparent_crc(*(undefined1 *)((long)&g_464 + (long)(int)local_1c),"g_464[i]",local_28);
    codemarker_alpha(0x110);
    if (local_28 != 0) {
      codemarker_alpha(0x111);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc((long)g_531,"g_531",local_28);
  codemarker_alpha(0x112);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x113);
    transparent_crc((&g_584)[(int)local_1c],"g_584[i]",local_28);
    codemarker_alpha(0x114);
    if (local_28 != 0) {
      codemarker_alpha(0x115);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_625,"g_625.f0",local_28);
  transparent_crc(g_776,"g_776.f0",local_28);
  transparent_crc(g_905,"g_905",local_28);
  transparent_crc(g_940,"g_940",local_28);
  transparent_crc(g_980,"g_980",local_28);
  transparent_crc(g_992,"g_992",local_28);
  codemarker_alpha(0x116);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    codemarker_alpha(0x117);
    transparent_crc(*(undefined8 *)(g_1024 + (long)(int)local_1c * 8),"g_1024[i]",local_28);
    codemarker_alpha(0x118);
    if (local_28 != 0) {
      codemarker_alpha(0x119);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x11a);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x11b);
    transparent_crc((long)*(int *)(g_1061 + (long)(int)local_1c * 4),"g_1061[i]",local_28);
    codemarker_alpha(0x11c);
    if (local_28 != 0) {
      codemarker_alpha(0x11d);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_1104,"g_1104",local_28);
  transparent_crc((long)g_1128,"g_1128",local_28);
  transparent_crc(g_1136,"g_1136",local_28);
  transparent_crc(g_1172,"g_1172",local_28);
  transparent_crc(g_1239,"g_1239",local_28);
  transparent_crc(g_1240,"g_1240",local_28);
  transparent_crc(g_1339,"g_1339.f0",local_28);
  transparent_crc((long)g_1411,"g_1411",local_28);
  transparent_crc(g_1415,"g_1415",local_28);
  transparent_crc(g_1517,"g_1517.f0",local_28);
  transparent_crc((long)g_1570,"g_1570",local_28);
  transparent_crc((long)g_1603,"g_1603",local_28);
  transparent_crc(g_1645,"g_1645",local_28);
  transparent_crc(g_1684,"g_1684.f0",local_28);
  transparent_crc(g_1883,"g_1883.f0",local_28);
  transparent_crc((long)g_1938,"g_1938",local_28);
  transparent_crc(g_2051,"g_2051",local_28);
  transparent_crc((long)g_2132,"g_2132",local_28);
  transparent_crc(g_2174,"g_2174",local_28);
  transparent_crc(g_2175,"g_2175",local_28);
  transparent_crc((long)g_2185,"g_2185",local_28);
  transparent_crc(0,"g_2208",local_28);
  transparent_crc(0x1a392462f065795f,"g_2259.f0",local_28);
  transparent_crc((long)g_2270,"g_2270",local_28);
  codemarker_alpha(0x11e);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x11f);
    for (local_20 = 0; (int)local_20 < 9; local_20 = local_20 + 1) {
      codemarker_alpha(0x120);
      for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
        transparent_crc(*(undefined8 *)
                         (g_2275 + (long)(int)local_24 * 8 +
                                   (long)(int)local_20 * 0x10 + (long)(int)local_1c * 0x90),
                        "g_2275[i][j][k].f0",local_28);
        codemarker_alpha(0x121);
        if (local_28 != 0) {
          codemarker_alpha(0x122);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  codemarker_alpha(0x123);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    transparent_crc((&g_2343)[(int)local_1c],"g_2343[i].f0",local_28);
    codemarker_alpha(0x124);
    if (local_28 != 0) {
      codemarker_alpha(0x125);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc((long)g_2372,"g_2372",local_28);
  transparent_crc(g_2421,"g_2421.f0",local_28);
  transparent_crc(g_2501,&DAT_0040c43e,local_28);
  transparent_crc(g_2519,"g_2519",local_28);
  transparent_crc(g_2572,"g_2572.f0",local_28);
  codemarker_alpha(0x126);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x127);
    transparent_crc(*(undefined4 *)(g_2633 + (long)(int)local_1c * 4),"g_2633[i]",local_28);
    codemarker_alpha(0x128);
    if (local_28 != 0) {
      codemarker_alpha(0x129);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x12a);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(299);
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      codemarker_alpha(300);
      transparent_crc(*(undefined8 *)(g_2742 + (long)(int)local_20 * 8 + (long)(int)local_1c * 0x50)
                      ,"g_2742[i][j]",local_28);
      codemarker_alpha(0x12d);
      if (local_28 != 0) {
        codemarker_alpha(0x12e);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0x12f);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    codemarker_alpha(0x130);
    transparent_crc((long)*(int *)(g_2786 + (long)(int)local_1c * 4),"g_2786[i]",local_28);
    codemarker_alpha(0x131);
    if (local_28 != 0) {
      codemarker_alpha(0x132);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  codemarker_alpha(0x133);
  for (local_1c = 0; (int)local_1c < 6; local_1c = local_1c + 1) {
    codemarker_alpha(0x134);
    for (local_20 = 0; (int)local_20 < 2; local_20 = local_20 + 1) {
      codemarker_alpha(0x135);
      for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
        codemarker_alpha(0x136);
        transparent_crc((long)*(int *)(g_2810 + (long)(int)local_24 * 4 +
                                                (long)(int)local_20 * 8 + (long)(int)local_1c * 0x10
                                      ),"g_2810[i][j][k]",local_28);
        codemarker_alpha(0x137);
        if (local_28 != 0) {
          codemarker_alpha(0x138);
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc((long)g_2814,"g_2814",local_28);
  transparent_crc((long)g_2821,"g_2821",local_28);
  transparent_crc(g_2840,"g_2840.f0",local_28);
  transparent_crc(g_2864,"g_2864.f0",local_28);
  transparent_crc(g_2895,"g_2895.f0",local_28);
  transparent_crc(g_2897,"g_2897.f0",local_28);
  codemarker_alpha(0x139);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    transparent_crc(*(undefined8 *)(g_2900 + (long)(int)local_1c * 8),"g_2900[i].f0",local_28);
    codemarker_alpha(0x13a);
    if (local_28 != 0) {
      codemarker_alpha(0x13b);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_2901,"g_2901.f0",local_28);
  codemarker_alpha(0x13c);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    codemarker_alpha(0x13d);
    for (local_20 = 0; (int)local_20 < 1; local_20 = local_20 + 1) {
      transparent_crc(*(undefined8 *)(g_2902 + (long)(int)local_20 * 8 + (long)(int)local_1c * 8),
                      "g_2902[i][j].f0",local_28);
      codemarker_alpha(0x13e);
      if (local_28 != 0) {
        codemarker_alpha(0x13f);
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  codemarker_alpha(0x140);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    codemarker_alpha(0x141);
    transparent_crc((long)*(short *)((long)&g_2921 + (long)(int)local_1c * 2),"g_2921[i]",local_28);
    codemarker_alpha(0x142);
    if (local_28 != 0) {
      codemarker_alpha(0x143);
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_2945,"g_2945.f0",local_28);
  transparent_crc(g_3103,"g_3103.f0",local_28);
  transparent_crc(g_3246,"g_3246",local_28);
  transparent_crc(0xec,"g_3340",local_28);
  transparent_crc(g_3343,"g_3343",local_28);
  transparent_crc(g_3360,"g_3360",local_28);
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
# 1030 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/9.c"
undefined8 func_1(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  undefined2 uVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  bool bVar20;
  bool bVar21;
  bool local_33b3;
  bool local_33b1;
  bool local_3392;
  bool local_3391;
  bool local_3386;
  bool local_3359;
  bool local_3349;
  bool local_333a;
  bool local_3325;
  bool local_3309;
  undefined1 local_1168 [200];
  long local_10a0;
  undefined **local_1068;
  uint local_105c;
  long local_1058;
  undefined1 local_1048 [192];
  uint *local_f88;
  undefined *local_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined4 *local_f68;
  undefined8 *local_f60;
  undefined1 local_f58 [24];
  undefined8 local_f40 [3];
  undefined **local_f28;
  undefined2 **local_f20;
  undefined1 local_f08 [120];
  undefined4 local_e90;
  uint local_e8c;
  ulong local_e88;
  int local_e80;
  long local_e70;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined1 local_e48 [20];
  undefined1 auStack_e34 [232];
  int local_d4c;
  uint local_c70;
  undefined4 local_b08;
  uint local_a58;
  undefined4 local_a54;
  char local_a4d;
  undefined1 local_a3d;
  undefined2 local_a3c;
  short local_a3a;
  undefined *local_a38;
  ulong local_a30;
  uint local_a28 [2];
  int local_a20;
  undefined ****local_9f8;
  undefined ***local_9f0;
  undefined **local_9e8;
  uint local_9dc;
  undefined2 local_9ca;
  undefined1 local_9c8 [334];
  undefined2 local_87a;
  undefined **local_878;
  undefined ****local_870;
  undefined ***local_868;
  undefined **local_860;
  undefined4 local_854;
  undefined1 ***local_850;
  undefined1 **local_848;
  undefined1 *local_840;
  byte local_831;
  undefined **local_830;
  undefined4 local_824;
  undefined **local_820;
  undefined1 ***local_818;
  undefined1 **local_810;
  undefined1 *local_808;
  undefined1 *local_800;
  undefined1 *local_7f8;
  undefined1 *local_7f0;
  undefined1 *local_7e8;
  undefined1 local_7d8 [1344];
  undefined1 auStack_298 [388];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  char local_fd;
  uint local_fc;
  undefined **local_f8;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  long local_b0;
  long local_a8 [5];
  undefined ***local_80;
  undefined **local_78;
  undefined1 *local_70;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  uint *local_50;
  uint local_48;
  uint local_44 [3];
  undefined2 *local_38 [4];
  uint local_14;
  undefined8 local_10;

  local_14 = 0xbc6e5c7a;
  local_38[3] = &g_23;
  local_48 = 4;
  local_50 = (uint *)&g_13;
  local_58 = 0;
  codemarker_alpha(0);
  local_60 = &g_2864;
  local_64 = 2;
  local_70 = g_2786;
  local_78 = &g_737;
  local_80 = &local_78;
  local_b0 = 0;
  local_b4 = 0xe7f0e2fc;
  local_c0 = 0x5080a0628bb95594;
  local_c4 = 7;
  local_d0 = &g_3340;
  local_e8 = 0x82c982c982c982c9;
  local_e0 = 0x82c982c982c982c9;
  local_d8 = 0x82c9;
  codemarker_alpha(1);
  codemarker_alpha(2);
  for (local_ec = 0; local_ec < 3; local_ec = local_ec + 1) {
    codemarker_alpha(3);
    for (local_f0 = 0; local_f0 < 1; local_f0 = local_f0 + 1) {
      local_38[(long)local_ec + (long)local_f0] = (undefined2 *)0x0;
    }
  }
  codemarker_alpha(4);
  for (local_ec = 0; local_ec < 1; local_ec = local_ec + 1) {
    codemarker_alpha(5);
    for (local_f0 = 0; local_f0 < 3; local_f0 = local_f0 + 1) {
      local_44[(long)local_ec * 3 + (long)local_f0] = 0xfffffff8;
    }
  }
  codemarker_alpha(6);
  uVar15 = g_12._208_8_;
  for (local_ec = 0; uVar10 = local_14, local_ec < 4; local_ec = local_ec + 1) {
    local_a8[local_ec] = (long)&local_80;
  }
  *local_38[3] = (short)local_14;
  uVar7 = safe_div_func_uint16_t_u_u(7,local_14 & 0xffff);
  iVar13 = g_13;
  local_48 = (uint)uVar7;
  local_44[1] = local_48;
  g_29 = safe_add_func_int64_t_s_s
                   (0x2585fafe44fa3fd9 < (ulong)(long)(int)(uint)(local_38[3] == (undefined2 *)0x0),
                    (long)g_13);
  uVar14 = func_16(uVar7,iVar13 != g_29,local_50);
  *(undefined8 *)g_1713 = uVar14;
  uVar14 = func_14();
  uVar15 = func_8(uVar15,uVar14,&g_13);
  local_58 = func_2(uVar10,uVar10,uVar15,*local_50 & 0xff);
  *(undefined8 **)g_2976 = local_60;
  codemarker_alpha(7);
  g_1938 = '\0';
  local_f8 = &g_1713;
  local_fc = 0xfffffffd;
  local_fd = '_';
  local_108 = &g_1411;
  local_10c = 0xcfed3c4a;
  local_110 = 0x5b2180f2;
  local_114 = 0xffffffff;
  memcpy(local_7d8,&PTR_g_328_0040c630,0x6c0);
  local_808 = auStack_298;
  local_800 = auStack_298;
  local_7f8 = auStack_298;
  local_7f0 = auStack_298;
  local_7e8 = auStack_298;
  local_810 = &local_7f0;
  local_818 = &local_810;
  local_820 = (undefined **)0x0;
  local_824 = 0xbe41a239;
  local_830 = &g_3019;
  local_831 = 0xf9;
  local_840 = auStack_298;
  local_848 = &local_840;
  local_850 = &local_848;
  local_854 = 0xffffffff;
  local_860 = &g_1927;
  local_868 = &local_f8;
  local_870 = &local_868;
  local_878 = &g_2131;
  local_87a = 0;
  memcpy(local_9c8,&DAT_0040ccf0,0x140);
  local_9ca = 0xf83b;
  codemarker_alpha(8);
  *(undefined4 *)g_2652 = 7;
  codemarker_alpha(9);
  if ((&g_584)[g_1938] == 0) {
    *(undefined8 *)g_1489 = 0;
    for (local_48 = 1; -1 < (int)local_48; local_48 = local_48 + -1) {
      *(undefined4 **)g_2130 = &g_2814;
    }
    local_10 = *(undefined8 *)**(undefined8 **)g_2026;
  }
  else {
    local_9dc = 0xffffffff;
    local_9e8 = &g_840;
    local_9f0 = &local_9e8;
    local_9f8 = &local_9f0;
    memcpy(local_a28,&DAT_0040ce30,0x28);
    local_a30 = 0;
    local_a38 = (undefined *)0x0;
    local_a3a = -0x7811;
    local_a3c = 0x3bbc;
    local_a3d = 0x57;
    codemarker_alpha(10);
    g_2977 = &g_240;
    codemarker_alpha(0xb);
    g_2814 = 1;
    local_a4d = '\x05';
    local_a54 = 0xffffffff;
    local_a58 = 0x155db682;
    memcpy(local_e48,&DAT_0040ce60,0x3f0);
    local_e68 = 0x400000004;
    local_e60 = 0x433517c45;
    local_e58 = 0x33517c4500000004;
    local_e50 = 0x400000004;
    local_e70 = 0;
    codemarker_alpha(0xc);
    bVar20 = local_f8 != (undefined **)0x0;
    uVar10 = (uint)local_a4d;
    uVar15 = safe_sub_func_uint64_t_u_u
                       (local_9dc <= (local_9f8 != (undefined ****)0x0) == 0xffffffff,local_9dc);
    uVar11 = safe_lshift_func_int64_t_s_u(uVar15,local_9dc);
    uVar3 = safe_rshift_func_uint64_t_u_u(2,uVar11);
    bVar4 = safe_rshift_func_uint8_t_u_s(uVar3,3);
    *g_840 = bVar4;
    **(byte **)g_462 = bVar4;
    local_a28[0] = (uint)bVar4;
    *(uint *)g_2652 =
         (bVar20 < ((int)(uVar10 | ((undefined8 *)g_1528 != &g_1529) != true) < g_73) ^ local_fc) &
         *(uint *)g_2652;
    codemarker_alpha(0xd);
    uVar10 = local_9dc;
    uVar15 = **(undefined8 **)g_2263;
    local_3309 = **(char **)g_327 != '\0' || local_a4d != '\0';
    cVar5 = safe_unary_minus_func_uint8_t_u(local_9dc & 0xff);
    local_a28[0] = local_a28[0] ^ 0xffffffff;
    local_a30 = (ulong)(int)(uint)(cVar5 != -8);
    uVar12 = safe_add_func_uint32_t_u_u((uint)(cVar5 != -8),0x9857cf87);
    safe_sub_func_uint64_t_u_u(uVar15,(int)(uint)(local_3309 < uVar12) <= (int)local_a4d);
    local_3325 = local_a4d != '\0' && local_fd != '\0';
    safe_sub_func_int16_t_s_s
              (((uint)(((uint)(local_3325 != 0xffffffff) ^ *(uint *)g_737) == (int)local_a4d) !=
               **(uint **)g_736) <= uVar10,(int)g_320);
    if (*local_50 == 0) {
      local_1068 = (undefined **)0x0;
      *(uint *)g_2652 = (int)local_a4d | *(uint *)g_2652;
      for (local_64 = 0; local_64 < 4; local_64 = local_64 + 1) {
        memcpy(local_1168,&DAT_0040d3b0,0x100);
        uVar10 = local_a58 ^ g_464._2_1_ & 0xb4;
        local_333a = false;
        if (local_10a0 != 0) {
          uVar16 = safe_sub_func_uint64_t_u_u
                             (**(undefined8 **)**(undefined8 **)g_2261,0x34dfbd77a16fe3e2);
          safe_mul_func_int16_t_s_s(2,(int)(short)local_a28[0]);
          uVar17 = safe_div_func_uint64_t_u_u((long)local_a4d,local_9dc);
          local_3349 = false;
          if ((int)*local_50 <=
              (int)(uint)((ulong)(long)(int)(uint)((ulong)(long)*(int *)g_2652 < uVar17) < uVar16))
          {
            local_3349 = local_e60._4_4_ != 0;
          }
          local_333a = local_3349;
        }
        iVar13 = safe_add_func_int32_t_s_s(uVar10 ^ local_333a,*(undefined4 *)g_2652);
        *(uint *)(g_2786 + (ulong)local_64 * 4) =
             (uint)((uint)((long)(int)(uint)((int)(uint)(0xd15b515e < (long)iVar13) <=
                                            (int)local_a4d) == -0x10866c5a37159466) <
                   **(uint **)g_736) & *(uint *)(g_2786 + (ulong)local_64 * 4);
      }
      codemarker_alpha(0x11);
      for (g_1128 = '\0'; -1 < g_1128; g_1128 = g_1128 + -1) {
        uVar10 = *local_50;
        bVar20 = local_1068 != &g_443;
        **(int **)g_736 = **(int **)g_736 + -1;
        bVar4 = safe_lshift_func_int16_t_s_s(5,8);
        lVar18 = safe_rshift_func_int64_t_s_s((long)(int)*local_50,0x1b);
        uVar16 = local_a30;
        uVar12 = *(short *)g_3009 <= *(short *)g_3009 ^ 1;
        local_a3c = safe_rshift_func_uint64_t_u_u(**(uint **)g_2176 < uVar12,9);
        iVar13 = safe_add_func_uint32_t_u_u(uVar16 != (long)local_a20,1);
        uVar11 = safe_rshift_func_uint64_t_u_u
                           (((bVar4 & lVar18 == (int)(uint)(iVar13 != (char)*g_3020)) != 0 ^ 0xffU)
                            & 1,0x11);
        uVar11 = safe_sub_func_uint32_t_u_u(uVar11,(int)local_a3a);
        g_1415 = safe_mul_func_int64_t_s_s(bVar20,uVar11);
        safe_mod_func_uint8_t_u_u
                  ((byte)g_1415 ^ 0xff,*(undefined1 *)**(undefined8 **)g_461,extraout_RDX_00,
                   CONCAT71(0x4111,(byte)g_1415) ^ 0xff);
        cVar5 = safe_lshift_func_uint8_t_u_u(0,6);
        local_3359 = true;
        if (cVar5 == '\0') {
          local_3359 = *(long *)**(undefined8 **)g_2262 != 0;
        }
        uVar10 = safe_add_func_uint8_t_u_u
                           ((uint)((long)(int)(uVar10 | local_3359) == -0x3537779c253966ce) &
                            **(uint **)g_2726,0x9f);
        g_2174 = uVar10 & 0xff | g_2174;
        *(uint *)g_2956 = uVar12;
        if (local_e68._4_4_ != 0) break;
      }
      cVar5 = **(char **)g_3019;
      iVar13 = safe_mod_func_int32_t_s_s(0xffffffff,local_b08);
      local_3386 = true;
      if (local_d4c == -2) {
        uVar10 = *local_50;
        **(undefined4 **)g_2176 = 0x74c65677;
        local_3386 = 0x74c65677 < uVar10;
      }
      local_3391 = ((long)(int)(uint)local_3386 & **(ulong **)g_2025) != 0xfffffff8 &&
                   local_9dc != 0;
      safe_sub_func_int16_t_s_s(iVar13 <= cVar5 != (local_3391 == (uint)local_e58),0xffff96de);
      *(undefined8 *)*local_f8 = 0;
      local_70 = (undefined1 *)0x0;
    }
    else {
      local_e80 = 0x9d5e3fdc;
      local_e88 = 0xfffffffffffffffa;
      local_e8c = 1;
      local_e90 = 0xfffffffd;
      memcpy(local_f08,&DAT_0040d250,0x70);
      codemarker_alpha(0xe);
      uVar7 = safe_rshift_func_uint16_t_u_s((short)local_a4d,0xc);
      *(uint *)g_2956 = (uint)uVar7 | *(uint *)g_2956;
      codemarker_alpha(0xf);
      if (((long)(int)*local_50 ^ 1U) < **(ulong **)g_2263) {
        local_f20 = local_38 + 3;
        local_f28 = &g_3019;
        memcpy(local_f58,&PTR_g_3020_0040d2c0,0x28);
        local_f60 = local_f40;
        local_f68 = &g_73;
        local_f70 = 0;
        local_f78 = 0;
        local_f80 = &DAT_004110bc;
        local_f88 = local_a28;
        memcpy(local_1048,&PTR_g_2786_0040d2f0,0xc0);
        codemarker_alpha(0x10);
        *local_f20 = (undefined2 *)&g_2921;
        g_3009 = (undefined *)&g_237;
        local_e80 = (int)local_a4d;
        local_e88 = (long)(int)(uint)(local_108 == (undefined2 *)0x0) ^ local_e88;
        safe_mul_func_int32_t_s_s(local_e80,local_e88 & 0xffffffff);
        puVar1 = g_3019;
        uVar10 = *(uint *)g_737;
        *local_f28 = g_3019;
        *local_f60 = puVar1;
        uVar8 = safe_div_func_int16_t_s_s
                          (puVar1 == local_a38,(int)(short)local_9dc,extraout_RDX,
                           puVar1 == local_a38);
        uVar7 = safe_sub_func_uint16_t_u_u(uVar8,8);
        safe_mul_func_uint8_t_u_u(local_e8c < (uVar10 | uVar7),0x46);
        *(undefined4 *)g_2652 = 0x8a06;
        return *(undefined8 *)g_307;
      }
      local_1058 = 0x411158;
      local_105c = 0xffffffff;
      safe_lshift_func_int16_t_s_s((int)*(short *)g_3009,0xc);
      **(uint **)g_2130 = (uint)(local_1058 == 0);
      local_818 = (undefined1 ***)g_3046;
      safe_mod_func_int8_t_s_s(((uint)(local_820 == &g_2025) & (int)local_a3a) == local_105c,3);
      *(undefined4 *)g_2956 = 1;
      *(uint **)g_1713 = &local_e8c;
    }
    lVar2 = local_e70;
    g_325._0_8_ = local_e70;
    uVar10 = safe_lshift_func_uint32_t_u_u(6,0xf);
    uVar10 = uVar10 | local_830 == (undefined **)0x0;
    *(uint *)g_737 = uVar10;
    lVar18 = **(long **)g_2263;
    **(long **)g_2263 = lVar18 + -1;
    local_3392 = false;
    if (*(short *)g_3009 != 0) {
      lVar19 = safe_sub_func_uint64_t_u_u(0,0x79db70a20aa644f1);
      local_33b1 = lVar19 != 0 || local_a28[0] != 0;
      safe_add_func_uint32_t_u_u(5,local_33b1);
      uVar7 = local_d4c < (int)(uint)local_831 ^ 0x31e8;
      sVar9 = safe_add_func_int16_t_s_s
                        (uVar7,(int)(short)*local_50,extraout_RDX_01,CONCAT62(0xdca32d0723b3,uVar7))
      ;
      local_3392 = sVar9 != 0;
    }
    safe_rshift_func_uint64_t_u_u(lVar18,local_3392);
    uVar7 = safe_add_func_uint16_t_u_u
                      (*(char *)**(undefined8 **)g_461 != '\0',local_c70 & 0xffff,extraout_RDX_02,
                       *(char *)**(undefined8 **)g_461 != '\0');
    sVar9 = safe_mod_func_uint64_t_u_u(uVar10 & (int)(uint)uVar7 <= local_d4c,0x1a79d254b99398c9);
    uVar8 = safe_sub_func_int16_t_s_s((int)sVar9,(int)(short)local_a30,extraout_RDX_03,sVar9);
    *(undefined2 *)g_3009 = uVar8;
    *(uint *)g_2652 = (uint)(lVar2 == local_b0);
    safe_mod_func_int64_t_s_s(1);
    *(uint *)g_2652 = *(uint *)g_2652 & *local_50 & 0x9b91ae69;
    codemarker_alpha(0x12);
    g_308 = 0;
    local_10c = 0;
    uVar10 = *local_50;
    bVar21 = g_3140 != *(long *)g_2261;
    cVar5 = **(char **)g_3019;
    bVar4 = *(byte *)**(undefined8 **)g_461 - 1;
    *(byte *)**(undefined8 **)g_461 = bVar4;
    local_850 = (undefined1 ***)g_3151;
    safe_unary_minus_func_int16_t_s((undefined **)g_3151 != &g_1461);
    *(uint *)g_2652 = (uint)(local_9dc == 0);
    uVar3 = safe_add_func_uint64_t_u_u(**(int **)g_85 == 8,0x8025c2cea80e4e97);
    safe_lshift_func_uint8_t_u_s(uVar3,7);
    bVar20 = (*(ushort *)g_3009 ^ 1) < 0xfff7;
    cVar6 = safe_sub_func_int8_t_s_s(bVar20,(int)**(char **)g_3019,extraout_RDX_04,bVar20);
    local_33b3 = (ulong)(long)(int)(uint)(((int)cVar5 < (int)(uint)bVar4) <=
                                         ((int)cVar6 == (int)*(short *)g_3009)) < 0x5d6fcb38e2fe1cc6
                 || local_a20 != 0;
    sVar9 = safe_add_func_int16_t_s_s
                      ((ulong)(long)(int)(uint)local_33b3 < local_a30,(int)*(short *)g_3009,
                       0x5d6fcb38e2fe1cc6,(ulong)(long)(int)(uint)local_33b3 < local_a30);
    sVar9 = safe_mul_func_int64_t_s_s(bVar21,(((long)sVar9 & 0x5d6fcb38e2fe1cc6U) != 0 ^ 0xffU) & 1)
    ;
    safe_unary_minus_func_int16_t_s((int)sVar9);
    cVar5 = safe_lshift_func_int8_t_s_u(0,6);
    bVar4 = safe_rshift_func_uint8_t_u_s((int)uVar10 < (int)((int)cVar5 ^ 0xa8c9e286U),0);
    *(uint *)g_3164 = (uint)bVar4;
    *(uint **)*g_2977 = local_a28;
    *(undefined1 **)g_1713 = auStack_e34;
    local_10 = *(undefined8 *)**(undefined8 **)g_2026;
  }
  return local_10;
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





undefined * func_2(uint param_1,long param_2,ulong param_3,byte param_4)

{
  undefined ***pppuVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 auVar17 [16];
  bool local_9db;
  bool local_9da;
  int local_97c;
  undefined8 auStack_958 [17];
  undefined2 local_8ca;
  undefined1 local_8c8 [40];
  uint *local_8a0;
  undefined4 *local_898;
  undefined4 *local_890;
  undefined8 local_888;
  undefined8 local_880;
  uint *local_878;
  uint *local_870;
  uint *local_868;
  undefined4 *local_860;
  uint *local_858;
  undefined1 auStack_850 [40];
  uint *local_828;
  undefined4 *local_820;
  uint *local_818;
  undefined4 *local_810;
  uint *local_808;
  uint *local_800;
  uint *local_7f8;
  undefined8 local_7f0;
  undefined4 *local_7e8;
  undefined4 *local_7e0;
  undefined4 *local_7d8;
  uint *local_7d0;
  uint *local_7c8;
  undefined4 *local_7c0;
  uint *local_7b8;
  undefined1 auStack_7b0 [40];
  uint *local_788;
  uint *local_780;
  undefined4 *local_778;
  uint *local_770;
  uint *local_768;
  undefined4 *local_760;
  uint *local_758;
  undefined4 *local_750;
  undefined4 *local_748;
  undefined8 local_740;
  undefined4 *local_738;
  undefined4 *local_730;
  uint *local_728;
  undefined4 *local_720;
  undefined4 *local_718;
  undefined4 *local_710;
  undefined *local_708;
  uint *local_700;
  undefined4 *local_6f8;
  uint *local_6f0;
  uint *local_6e8;
  uint *local_6e0;
  uint *local_6d8;
  undefined4 *local_6d0;
  undefined8 local_6c8;
  undefined *local_6c0;
  undefined4 *local_6b8;
  undefined4 *local_6b0;
  undefined *local_6a8;
  uint *local_6a0;
  undefined1 auStack_698 [40];
  uint *local_670;
  undefined4 *local_668;
  undefined4 *local_660;
  undefined8 local_658;
  undefined8 local_650;
  uint *local_648;
  uint *local_640;
  uint *local_638;
  undefined4 *local_630;
  uint *local_628;
  undefined1 auStack_620 [40];
  uint *local_5f8;
  undefined4 *local_5f0;
  uint *local_5e8;
  undefined4 *local_5e0;
  uint *local_5d8;
  uint *local_5d0;
  uint *local_5c8;
  undefined8 local_5c0;
  undefined4 *local_5b8;
  undefined4 *local_5b0;
  undefined4 *local_5a8;
  uint *local_5a0;
  uint *local_598;
  undefined4 *local_590;
  uint *local_588;
  undefined1 auStack_580 [40];
  undefined8 local_558;
  undefined4 *local_550;
  uint *local_548;
  uint *local_540;
  uint *local_538;
  undefined4 *local_530;
  undefined4 *local_528;
  undefined4 *local_520;
  undefined8 local_518;
  uint *local_510;
  undefined4 *local_508;
  uint *local_500;
  uint *local_4f8;
  uint *local_4f0;
  undefined4 *local_4e8;
  undefined1 auStack_4e0 [40];
  undefined8 local_4b8;
  undefined8 local_4b0;
  uint *local_4a8;
  undefined4 *local_4a0;
  undefined4 *local_498;
  undefined1 auStack_490 [40];
  uint *local_468;
  undefined4 *local_460;
  uint *local_458;
  uint *local_450;
  undefined4 *local_448;
  undefined4 *local_440;
  undefined4 *local_438;
  undefined8 local_430;
  uint *local_428;
  uint *local_420;
  undefined4 *local_418;
  undefined8 local_410;
  undefined4 *local_408;
  uint *local_400;
  uint *local_3f8;
  undefined4 *local_3f0;
  undefined4 *local_3e8;
  uint *local_3e0;
  undefined4 *local_3d8;
  undefined4 *local_3d0;
  undefined4 *local_3c8;
  uint *local_3c0;
  undefined8 local_3b8;
  undefined4 *local_3b0;
  undefined8 local_3a8;
  undefined4 *local_3a0;
  undefined4 *local_398;
  uint *local_390;
  undefined4 *local_388;
  undefined *local_380;
  uint *local_378;
  undefined4 *local_370;
  undefined4 *local_368;
  uint *local_360;
  undefined8 local_358;
  undefined1 auStack_350 [40];
  undefined8 local_328;
  undefined4 *local_320;
  uint *local_318;
  uint *local_310;
  uint *local_308;
  undefined4 *local_300;
  undefined4 *local_2f8;
  undefined4 *local_2f0;
  undefined8 local_2e8;
  uint *local_2e0;
  undefined4 *local_2d8;
  uint *local_2d0;
  uint *local_2c8;
  uint *local_2c0;
  undefined4 *local_2b8;
  undefined1 auStack_2b0 [48];
  uint *local_280;
  undefined1 local_278 [18];
  ushort local_266;
  undefined4 *local_258;
  undefined4 *local_250;
  undefined4 *local_248;
  undefined4 *local_240;
  undefined2 local_230;
  undefined2 local_22e;
  uint local_22c;
  undefined1 local_228 [16];
  uint local_218 [12];
  byte *local_1e8;
  long local_1e0;
  undefined4 local_1d2;
  undefined2 local_1ce;
  int local_1c8;
  int local_1c4;
  undefined4 *local_1c0;
  undefined1 local_1b8 [80];
  undefined4 local_168 [5];
  undefined2 local_154;
  undefined1 local_151;
  undefined **local_150;
  undefined8 local_148;
  undefined4 local_13c;
  ushort *local_138;
  undefined ***local_130;
  undefined **local_128;
  ushort local_11c;
  ushort local_11a;
  undefined1 local_118 [72];
  uint *local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined ***local_80;
  undefined **local_78;
  int local_6c;
  undefined1 local_68 [12];
  uint local_5c;
  undefined4 local_40;
  byte local_29;
  ulong local_28;
  long local_20;
  uint local_14;

  local_29 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_14 = param_1;
  memcpy(local_68,&DAT_0040d9a0,0x30);
  local_6c = 0x93d9bae1;
  local_78 = &g_1713;
  local_80 = &local_78;
  local_84 = 4;
  local_88 = 0;
  local_8c = 0xffffffff;
  local_a8 = 0x91a591a5cc9c91a5;
  local_a0 = 0xcc9c91a591a5cc9c;
  local_b0 = &g_1603;
  local_b8 = &g_73;
  local_c0 = &g_13;
  local_c8 = 0;
  local_d0 = &g_1603;
  memset(local_118,0,0x40);
  local_11a = 1;
  local_11c = 0x4988;
  local_128 = &g_328;
  local_130 = &local_128;
  local_138 = &local_11a;
  local_13c = 0xfffffff9;
  local_148 = 0xc265bd939f34d583;
  local_150 = &g_737;
  local_151 = 0xff;
  local_154 = 0xfff6;
  codemarker_alpha(0x37);
  memset(local_1b8,0,0x50);
  local_1c0 = &local_8c;
  codemarker_alpha(0x38);
  codemarker_alpha(0x39);
  for (local_1c4 = 0; local_1c4 < 2; local_1c4 = local_1c4 + 1) {
    codemarker_alpha(0x3a);
    for (local_1c8 = 0; local_1c8 < 2; local_1c8 = local_1c8 + 1) {
      local_168[(long)local_1c4 * 2 + (long)local_1c8] = 4;
    }
  }
  codemarker_alpha(0x3b);
  g_940 = 0;
  local_1d2 = 0x73ffff73;
  local_1ce = 0xffff;
  local_1e0 = 0;
  local_1e8 = &g_2270;
  memcpy(local_228,&DAT_0040d9e0,0x40);
  local_22c = 0x93d84239;
  local_22e = 0xd2a;
  local_230 = 0xfff9;
  codemarker_alpha(0x3c);
  codemarker_alpha(0x3d);
  uVar15 = **(ulong **)**(undefined8 **)g_2261;
  bVar3 = (byte)local_1d2 ^ (byte)local_5c;
  uVar7 = safe_lshift_func_uint16_t_u_s(local_5c & 0xffff,0xd);
  uVar10 = safe_rshift_func_uint64_t_u_u(uVar7,0x21);
  safe_sub_func_int32_t_s_s(local_40,uVar10);
  auVar17 = safe_add_func_int64_t_s_s(*(long *)g_580 == local_1e0,local_5c);
  local_6c = 1;
  safe_mul_func_int16_t_s_s(1,(int)(short)local_14,auVar17._8_8_,1);
  cVar4 = safe_lshift_func_uint16_t_u_u(1,local_28 != 0);
  cVar4 = safe_mod_func_int8_t_s_s((int)(char)bVar3,(int)cVar4,extraout_RDX,bVar3);
  uVar16 = (long)cVar4 ^ **(ulong **)g_2025;
  **(ulong **)g_2025 = uVar16;
  *local_1e8 = *local_1e8 | uVar15 <= uVar16;
  uVar10 = safe_mul_func_int64_t_s_s(0x64aa04bed005bcd,(long)local_6c);
  safe_rshift_func_int32_t_s_u(uVar10,0xb);
  lVar14 = safe_rshift_func_int64_t_s_s(*(undefined8 *)**(undefined8 **)g_2026);
  if (lVar14 == 0) {
    memset(local_278,0,0x14);
    local_280 = &g_2174;
    memcpy(local_8c8,&PTR_g_1603_0040da40,0x28);
    local_8a0 = local_218;
    local_898 = &g_1603;
    local_890 = &g_13;
    local_888 = 0;
    local_880 = 0;
    local_878 = local_218;
    local_870 = &local_22c;
    local_868 = local_218;
    local_860 = &g_407;
    local_858 = &local_22c;
    memcpy(auStack_850,&PTR_g_407_0040da68,0x28);
    local_828 = local_218;
    local_820 = &g_1603;
    local_818 = &local_22c;
    local_810 = &g_13;
    local_808 = &local_22c;
    local_800 = local_218;
    local_7f8 = local_218;
    local_7f0 = 0;
    local_7e8 = &g_407;
    local_7e0 = &g_407;
    local_7d8 = &g_1603;
    local_7d0 = local_218;
    local_7c8 = local_218;
    local_7c0 = &g_1603;
    local_7b8 = &local_22c;
    memcpy(auStack_7b0,&PTR_DAT_0040da90,0x28);
    local_788 = &local_22c;
    local_780 = local_218;
    local_778 = &g_407;
    local_770 = &local_22c;
    local_768 = &local_22c;
    local_760 = &g_1603;
    local_758 = local_218;
    local_750 = &g_1603;
    local_748 = &g_13;
    local_740 = 0;
    local_738 = &g_13;
    local_730 = &g_1603;
    local_728 = &local_22c;
    local_720 = &g_1603;
    local_718 = &g_13;
    local_710 = &g_1603;
    local_708 = &DAT_004110bc;
    local_700 = local_218;
    local_6f8 = &g_407;
    local_6f0 = local_218;
    local_6e8 = &local_22c;
    local_6e0 = &local_22c;
    local_6d8 = &local_22c;
    local_6d0 = &g_13;
    local_6c8 = 0;
    local_6c0 = &DAT_004110bc;
    local_6b8 = &g_1603;
    local_6b0 = &g_1603;
    local_6a8 = &DAT_004110bc;
    local_6a0 = local_218;
    memcpy(auStack_698,&PTR_g_1603_0040dab8,0x28);
    local_670 = local_218;
    local_668 = &g_1603;
    local_660 = &g_13;
    local_658 = 0;
    local_650 = 0;
    local_648 = local_218;
    local_640 = &local_22c;
    local_638 = local_218;
    local_630 = &g_407;
    local_628 = &local_22c;
    memcpy(auStack_620,&PTR_g_407_0040dae0,0x28);
    local_5f8 = local_218;
    local_5f0 = &g_1603;
    local_5e8 = &local_22c;
    local_5e0 = &g_13;
    local_5d8 = &local_22c;
    local_5d0 = local_218;
    local_5c8 = local_218;
    local_5c0 = 0;
    local_5b8 = &g_407;
    local_5b0 = &g_407;
    local_5a8 = &g_1603;
    local_5a0 = local_218;
    local_598 = local_218;
    local_590 = &g_1603;
    local_588 = &local_22c;
    memcpy(auStack_580,&PTR_DAT_0040db08,0x28);
    local_558 = 0;
    local_550 = &g_13;
    local_548 = &local_22c;
    local_540 = &local_22c;
    local_538 = &local_22c;
    local_530 = &g_407;
    local_528 = &g_407;
    local_520 = &g_407;
    local_518 = 0;
    local_510 = local_218;
    local_508 = &g_407;
    local_500 = local_218;
    local_4f8 = &local_22c;
    local_4f0 = local_218;
    local_4e8 = &g_407;
    memcpy(auStack_4e0,&PTR_g_407_0040db30,0x28);
    local_4b8 = 0;
    local_4b0 = 0;
    local_4a8 = &local_22c;
    local_4a0 = &g_407;
    local_498 = &g_1603;
    memcpy(auStack_490,&PTR_g_1603_0040db58,0x28);
    local_468 = local_218;
    local_460 = &g_407;
    local_458 = &local_22c;
    local_450 = &local_22c;
    local_448 = &g_407;
    local_440 = &g_407;
    local_438 = &g_407;
    local_430 = 0;
    local_428 = local_218;
    local_420 = local_218;
    local_418 = &g_13;
    local_410 = 0;
    local_408 = &g_13;
    local_400 = &local_22c;
    local_3f8 = &local_22c;
    local_3f0 = &g_13;
    local_3e8 = &g_1603;
    local_3e0 = local_218;
    local_3d8 = &g_1603;
    local_3d0 = &g_13;
    local_3c8 = &g_13;
    local_3c0 = local_218;
    local_3b8 = 0;
    local_3b0 = &g_407;
    local_3a8 = 0;
    local_3a0 = &g_407;
    local_398 = &g_407;
    local_390 = local_218;
    local_388 = &g_13;
    local_380 = &DAT_004110bc;
    local_378 = local_218;
    local_370 = &g_13;
    local_368 = &g_13;
    local_360 = local_218;
    local_358 = 0;
    memcpy(auStack_350,&PTR_g_1603_0040db80,0x28);
    local_328 = 0;
    local_320 = &g_13;
    local_318 = &local_22c;
    local_310 = &local_22c;
    local_308 = &local_22c;
    local_300 = &g_407;
    local_2f8 = &g_407;
    local_2f0 = &g_407;
    local_2e8 = 0;
    local_2e0 = local_218;
    local_2d8 = &g_407;
    local_2d0 = local_218;
    local_2c8 = &local_22c;
    local_2c0 = local_218;
    local_2b8 = &g_407;
    memcpy(auStack_2b0,&PTR_g_407_0040dba8,0x28);
    local_8ca = 0x9b2d;
    codemarker_alpha(0x3f);
    bVar6 = local_29;
    uVar11 = (uint)local_266;
    bVar2 = local_6c <= (int)local_14;
    bVar3 = **(byte **)g_462 - 1;
    **(byte **)g_462 = bVar3;
    bVar3 = *g_840 ^ bVar3;
    *g_840 = bVar3;
    iVar13 = *(int *)g_737;
    *(int *)g_737 = iVar13 + -1;
    uVar12 = *local_280;
    *local_280 = uVar12 + 1;
    safe_mod_func_int16_t_s_s(local_80 == &local_78,0xffffffff);
    uVar15 = safe_rshift_func_uint64_t_u_u(0xddec161392c0f208,0x32);
    uVar15 = uVar12 | uVar15;
    local_9da = local_1d2._2_1_ <= uVar15 || local_20 != 0;
    cVar4 = safe_sub_func_int8_t_s_s
                      ((int)(char)(bVar6 ^ 0xf6),0xffffffff,(ulong)local_1d2._2_1_,
                       CONCAT71((int7)(uVar15 >> 8),local_9da));
    uVar12 = safe_sub_func_uint32_t_u_u
                       ((uint)((long)(int)((int)cVar4 | (uint)g_2051) != 0xbf4d67362589685) &
                        (uint)local_28,0x3a572586);
    local_9db = 0xfffffffc < uVar12 && local_29 != 0;
    uVar10 = safe_div_func_uint32_t_u_u(iVar13 + -1,local_9db);
    uVar10 = safe_add_func_int64_t_s_s(uVar10,1);
    uVar5 = safe_rshift_func_uint32_t_u_u(uVar10,local_28 & 0xffffffff);
    bVar6 = safe_rshift_func_uint8_t_u_u(uVar5,(byte)local_1d2);
    uVar12 = safe_rshift_func_int64_t_s_u(bVar2,(local_266 <= bVar6) <= bVar3);
    local_218[0] = local_218[0] ^ uVar12;
    sVar8 = safe_add_func_int16_t_s_s((&stack0x00000000 != (undefined1 *)0x28) == local_14,1);
    lVar14 = local_20;
    local_22c = ((int)uVar11 <= (int)sVar8 != local_266) != true | local_22c;
    if (local_22c != 0) {
      local_11c = local_11c + -1;
      local_20 = local_20 + 1;
      cVar4 = safe_sub_func_uint64_t_u_u(lVar14,local_28);
      uVar7 = safe_unary_minus_func_uint16_t_u(**(undefined2 **)**(undefined8 **)g_580);
      safe_rshift_func_uint64_t_u_u(0xfffffffffffffff7,0x11);
      uVar10 = safe_mod_func_uint32_t_u_u(0,local_28 & 0xffffffff);
      iVar13 = safe_div_func_uint32_t_u_u(uVar7,uVar10);
      safe_sub_func_int8_t_s_s((int)cVar4,iVar13 != 0,extraout_RDX_00,cVar4);
      bVar3 = safe_rshift_func_uint8_t_u_u(0xf0,4);
      pppuVar1 = (undefined ***)**(long **)g_1460;
      *local_138 = (ushort)(pppuVar1 == local_130);
      sVar8 = safe_lshift_func_int16_t_s_s((ushort)(pppuVar1 == local_130),g_2175);
      bVar6 = (sVar8 != 0 ^ 0xffU) & 1;
      uVar9 = safe_add_func_uint16_t_u_u(bVar6,local_28 & 0xffff,extraout_RDX_01,bVar6);
      uVar12 = safe_mod_func_uint32_t_u_u(bVar3 == uVar9,0xbfd5fa9f);
      *local_d0 = uVar12 & 1;
      for (local_11c = 0x1d; 0x1c < local_11c; local_11c = local_11c - 1) {
        for (local_97c = 0; local_97c < 4; local_97c = local_97c + 1) {
          auStack_958[local_97c] = 0x41189c;
        }
      }
      return *(undefined **)**local_80;
    }
    cVar4 = safe_div_func_int64_t_s_s
                      (**(undefined8 **)g_2025,*(undefined8 *)**(undefined8 **)g_2026);
    cVar4 = safe_mod_func_int8_t_s_s(0xfffffffd,(int)cVar4);
    local_14 = (int)cVar4 ^ local_14;
    local_a0 = CONCAT26(local_a0._6_2_ + 1,(undefined6)local_a0);
  }
  else {
    local_258 = &g_2372;
    local_250 = &g_2372;
    local_248 = &g_2372;
    local_240 = &g_2372;
    codemarker_alpha(0x3e);
    (&g_73)[g_940] = 0xfffffffa;
    local_14 = local_14 ^ 0xfffffffa;
  }
  codemarker_alpha(0x40);
  g_1570 = 0;
  return g_2652;
}



undefined8 func_8(void)

{
  return 0;
}
# 2093 "/home/user/Desktop/CASTLE/DeComScaffolder/csmith_mage_clang_ghidra/9.c"
undefined8 func_14(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined8 extraout_RDX;
  ulong uVar8;
  ulong extraout_RDX_00;
  uint uVar9;
  bool bVar10;
  bool local_b39;
  bool local_b15;
  undefined1 local_7e8 [8];
  long *local_7e0;
  uint *local_798;
  int *local_790;
  uint *local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined *local_760;
  undefined8 *local_758;
  undefined8 local_750;
  undefined1 local_738 [1128];
  undefined8 local_2d0;
  char local_2c5;
  uint local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_288 [64];
  undefined4 *local_248;
  ushort local_23e;
  int local_23c;
  undefined4 *local_230;
  undefined8 *local_228;
  int local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined8 *local_1e8;
  int local_1e0;
  undefined1 local_1d8 [40];
  long local_1b0;
  int local_194;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  uint local_17c;
  long local_178 [2];
  undefined2 local_162;
  undefined1 *local_160;
  uint local_154;
  undefined8 *local_150;
  undefined1 local_148 [288];
  undefined1 **local_28;
  undefined1 *local_20;
  undefined8 local_18;

  local_20 = &g_1570;
  local_28 = &local_20;
  local_18 = param_1;
  memcpy(local_148,&DAT_0040dbd0,0x120);
  local_150 = &g_593;
  local_154 = 5;
  local_160 = g_1024;
  local_162 = 0;
  codemarker_alpha(0x41);
  codemarker_alpha(0x42);
  g_2051 = 0xef;
  local_178[0] = 9;
  local_17c = 0xfffffff7;
  local_180 = 0x7014f9a1;
  local_184 = 0;
  local_188 = 0xdede0ea0;
  local_18c = 0xe905a303;
  local_190 = 0xffffffff;
  local_194 = 0;
  memcpy(local_1d8,&DAT_0040dcf0,0x38);
  codemarker_alpha(0x43);
  codemarker_alpha(0x44);
  g_1645 = 4;
  local_1e0 = 0x4afa1390;
  codemarker_alpha(0x45);
  local_1e8 = &g_197;
  local_1e9 = 9;
  local_1f0 = 0x926b870d;
  local_1f4 = 0x3a422a1b;
  local_1f8 = 0;
  local_1fc = 0xfffffffd;
  local_200 = 0xe152bcca;
  local_204 = 0x326939b5;
  local_218 = 0x500000005;
  local_210 = 0x500000005;
  local_21c = 0x2339c5a7;
  local_228 = (undefined8 *)0x411a50;
  local_230 = &local_204;
  codemarker_alpha(0x46);
  codemarker_alpha(0x47);
  g_1104 = 0;
  do {
    if (g_1104 < 0x1d) {
      codemarker_alpha(0x4c);
      for (g_29 = 4; -1 < g_29; g_29 = g_29 + -1) {
        local_790 = &g_940;
        local_798 = &g_1603;
        memcpy(local_7e8,&DAT_0040e1f0,0x48);
        codemarker_alpha(0x4d);
        iVar1 = *(int *)g_737;
        *(int *)g_737 = iVar1 + -1;
        *local_790 = iVar1;
        *local_798 = (uint)(iVar1 == 6) & *local_798;
        bVar10 = true;
        if (local_178[0] == 0) {
          bVar10 = *(int *)g_542 != 0;
        }
        local_7e0 = local_178;
        g_1713 = (undefined *)&g_88;
        safe_mul_func_uint32_t_u_u(0xfffffffe,*(long **)g_2025 != local_178 || local_228 != &g_88);
        local_1fc = (uint)(!bVar10 < 0x25f25fbf) & *local_798;
        *local_798 = local_1fc;
        *(undefined8 *)g_2262 = **(undefined8 **)g_2261;
        uVar3 = (undefined1)local_148._104_4_;
        *g_328 = uVar3;
        local_b39 = false;
        if (local_1b0 == **(long **)g_461) {
          g_592 = (undefined *)&g_593;
          local_18c = local_17c & local_18c;
          local_b39 = (local_18c ^ 0x6ce3bf7d) != *local_798;
        }
        safe_lshift_func_uint16_t_u_s((short)*local_798,local_b39,*(long **)g_461,local_b39);
        uVar3 = safe_sub_func_uint8_t_u_u(uVar3,local_194 < (int)(uint)g_2501,g_2501,uVar3);
        uVar9 = safe_add_func_uint64_t_u_u(0xd7c1b57818ead459,uVar3);
        local_154 = local_154 & uVar9;
      }
      codemarker_alpha(0x4e);
      g_407 = 0;
      return local_18;
    }
    local_23c = 4;
    local_23e = 0xfff7;
    local_248 = &g_73;
    memcpy(local_288,&PTR_g_2372_0040dd30,0x40);
    codemarker_alpha(0x48);
    codemarker_alpha(0x49);
    for (g_2270 = '\0'; g_2270 < '\x12'; g_2270 = safe_add_func_uint32_t_u_u((int)g_2270,8,uVar8)) {
      local_2b8 = 0xffffffffff4a4d87;
      local_2b0 = 0xffffffffff4a4d87;
      local_2a8 = 0xffffffffff4a4d87;
      local_2a0 = 0xffffffffff4a4d87;
      local_2bc = 0;
      local_2c0 = 0xf8b31b9c;
      codemarker_alpha(0x4a);
      if (local_1e0 != 0) {
        return local_18;
      }
      local_2c5 = '\x01';
      local_2d0 = 1;
      memcpy(local_738,&PTR_g_1938_0040dd70,0x460);
      codemarker_alpha(0x4b);
      cVar6 = local_2c5;
      local_750 = g_2421;
      local_b15 = false;
      if (local_2c5 != '\0') {
        local_b15 = **(int **)g_2176 != 0;
      }
      uVar3 = safe_div_func_uint8_t_u_u(local_b15,local_2c5);
      cVar4 = safe_lshift_func_uint32_t_u_s(0x5d0bea25,uVar3);
      safe_sub_func_int8_t_s_s((int)cVar6,(int)cVar4,extraout_RDX,cVar6);
      safe_add_func_uint64_t_u_u((long)local_23c < 0xdc2eb67b,local_2d0);
      bVar5 = safe_div_func_int64_t_s_s((long)local_23c,(long)(int)local_2b8);
      g_138 = g_138 & bVar5;
      uVar8 = (ulong)(g_138 != 0);
      local_23e = 0;
      while (uVar2 = g_1603, 0x30 < local_23e) {
        local_758 = &g_1684;
        local_760 = &DAT_00411798;
        local_778 = 0xffffffffffffffff;
        local_770 = 0xffffffffffffffff;
        local_780 = (uint *)((long)&local_768 + 4);
        local_1e8 = (undefined8 *)&DAT_00411798;
        local_768 = 0xffffffff;
        uVar9 = (uint)local_2a0;
        cVar6 = safe_lshift_func_int8_t_s_s(1,7);
        bVar5 = (byte)uVar2 | uVar9 != (cVar6 != local_2b8._4_4_);
        uVar9 = (uint)(local_28 != (undefined1 **)&g_1529) ^ *local_780;
        *local_780 = uVar9;
        safe_add_func_int32_t_s_s(uVar9,local_2bc);
        local_2c0 = *local_780;
        bVar7 = safe_div_func_uint16_t_u_u(local_2c0 & 0xffff,9);
        safe_mod_func_int8_t_s_s
                  ((int)(char)bVar5,(int)(char)(bVar7 ^ (byte)local_23e),local_23e,bVar5);
        local_1f0 = 0xf7fe;
        cVar6 = safe_add_func_int8_t_s_s((int)(char)local_23e,2);
        uVar8 = extraout_RDX_00;
        local_23e = (ushort)cVar6;
      }
    }
    local_21c = local_21c + -1;
    g_1104 = safe_add_func_int64_t_s_s(g_1104,4);
  } while( true );
}



undefined8 func_16(undefined8 param_1,undefined4 param_2,int *param_3)

{
  int local_54c;
  int local_548;
  int local_544;
  undefined8 local_538 [8];
  undefined1 **local_4f8;
  undefined1 *local_4f0;
  undefined1 local_4e8 [208];
  undefined1 auStack_418 [200];
  undefined4 local_350;
  undefined2 local_34a;
  undefined1 local_348 [432];
  undefined8 local_198 [6];
  undefined8 auStack_168 [5];
  undefined4 local_140;
  undefined4 local_13c;
  int local_130;
  int local_12c;
  long local_128 [10];
  undefined1 local_d1;
  long alStack_d0 [2];
  undefined4 local_bc;
  long lStack_b8;
  int *local_b0;
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined2 local_96;
  undefined4 local_94;
  undefined4 *local_90;
  long alStack_88 [3];
  undefined **local_70;
  uint local_64;
  undefined4 local_60;
  undefined2 local_5a;
  undefined4 *local_58;
  undefined ***local_50;
  undefined **local_48;
  undefined4 local_3c;
  undefined2 *local_38;
  short local_2a;
  int *local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;

  local_2a = 0x2499;
  local_38 = &g_413;
  local_3c = 0xd36c1700;
  local_48 = &g_736;
  local_50 = &local_48;
  local_58 = &g_253;
  local_5a = 0x9172;
  local_60 = 5;
  local_64 = 0x9dc645b2;
  local_70 = &g_592;
  local_90 = &g_13;
  local_94 = 0x4e345e96;
  local_96 = 0x3aa3;
  local_9c = 0x569a448;
  local_a8 = &local_3c;
  local_b0 = &g_13;
  local_bc = 0x94fbd02c;
  alStack_d0[1] = -0x211b4f75be04a55c;
  local_d1 = 0;
  local_28 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  codemarker_alpha(0x52);
  codemarker_alpha(0x53);
  for (local_12c = 0; local_12c < 2; local_12c = local_12c + 1) {
    alStack_88[local_12c] = (long)&local_70;
  }
  codemarker_alpha(0x54);
  for (local_12c = 0; local_12c < 1; local_12c = local_12c + 1) {
    (&lStack_b8)[local_12c] = (long)&local_3c;
  }
  codemarker_alpha(0x55);
  for (local_12c = 0; local_12c < 1; local_12c = local_12c + 1) {
    alStack_d0[local_12c] = (long)&g_606;
  }
  codemarker_alpha(0x56);
  for (local_12c = 0; local_12c < 5; local_12c = local_12c + 1) {
    codemarker_alpha(0x57);
    for (local_130 = 0; local_130 < 2; local_130 = local_130 + 1) {
      local_128[(long)local_12c * 2 + (long)local_130] = (long)&local_94;
    }
  }
  if (local_2a == 0) {
    local_13c = 0xba832a49;
    local_140 = 0;
    memcpy(local_348,&DAT_0040e340,0x1a4);
    local_34a = 0x8473;
    local_350 = 0x68efb8cc;
    memcpy(local_4e8,&PTR_g_253_0040e4f0,400);
    local_4f0 = auStack_418;
    local_4f8 = &local_4f0;
    codemarker_alpha(0x58);
    codemarker_alpha(0x59);
    for (local_544 = 0; local_544 < 5; local_544 = local_544 + 1) {
      auStack_168[local_544] = &g_1713;
    }
    codemarker_alpha(0x5a);
    for (local_544 = 0; local_544 < 3; local_544 = local_544 + 1) {
      codemarker_alpha(0x5b);
      for (local_548 = 0; local_548 < 2; local_548 = local_548 + 1) {
        local_198[(long)local_544 * 2 + (long)local_548] = &g_307;
      }
    }
    codemarker_alpha(0x5c);
    for (local_544 = 0; local_544 < 2; local_544 = local_544 + 1) {
      codemarker_alpha(0x5d);
      for (local_548 = 0; local_548 < 1; local_548 = local_548 + 1) {
        codemarker_alpha(0x5e);
        for (local_54c = 0; local_54c < 4; local_54c = local_54c + 1) {
          local_538[(long)local_544 * 4 + (long)local_548 * 4 + (long)local_54c] =
               0xffffffffffffffff;
        }
      }
    }
    codemarker_alpha(0x5f);
    for (local_1c = 0; local_1c != 0x11; local_1c = local_1c + 1) {
      codemarker_alpha(0x60);
    }
    alStack_d0[1] = alStack_d0[1] + 1;
    for (local_64 = 0; local_64 < 0x23; local_64 = safe_add_func_uint64_t_u_u(local_64,4)) {
      g_940 = 0;
      while ((g_940 == 0x27 && (*local_28 == 0))) {
        g_940 = 0x28;
      }
      if (*local_b0 != 0) break;
    }
    local_10 = *(undefined8 *)g_331;
  }
  else {
    local_10 = 0;
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



ulong safe_rshift_func_uint64_t_u_u(ulong param_1,uint param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 < 0x20) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
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



long safe_sub_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 - param_2;
}



int safe_sub_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 - (int)param_2;
}



int safe_add_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 + param_2;
}



int safe_unary_minus_func_uint8_t_u(byte param_1)

{
  return -(uint)param_1;
}



uint safe_rshift_func_uint16_t_u_s(ushort param_1,int param_2)

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



int safe_mul_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 * (uint)param_2;
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



int safe_sub_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 - (uint)param_2;
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



int safe_lshift_func_int16_t_s_s(short param_1,int param_2)

{
  undefined4 local_14;

  if ((((param_1 < 0) || (param_2 < 0)) || (0x1f < param_2)) ||
     (0x7fff >> ((byte)param_2 & 0x1f) < (int)param_1)) {
    local_14 = (int)param_1;
  }
  else {
    local_14 = (int)param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
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



ulong safe_div_func_uint64_t_u_u(ulong param_1,ulong param_2)

{
  undefined8 local_20;

  local_20 = param_1;
  if (param_2 != 0) {
    local_20 = param_1 / param_2;
  }
  return local_20;
}



int safe_mul_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 * (int)param_2;
}



int safe_add_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 + (uint)param_2;
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



int safe_sub_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 - param_2;
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



int safe_mod_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x80000000 || (param_2 != -1)))) {
    local_14 = param_1 % param_2;
  }
  return local_14;
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



uint safe_lshift_func_uint32_t_u_u(uint param_1,uint param_2)

{
  uint local_14;

  local_14 = param_1;
  if ((param_2 < 0x20) && (param_1 <= 0xffffffffU >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
}



int safe_add_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 + (uint)param_2;
}



int safe_add_func_int16_t_s_s(short param_1,short param_2)

{
  return (int)param_1 + (int)param_2;
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



int safe_unary_minus_func_int16_t_s(short param_1)

{
  return -(int)param_1;
}



int safe_sub_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 - (int)param_2;
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



long safe_add_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 + param_2;
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



long safe_rshift_func_int64_t_s_u(long param_1,uint param_2)

{
  long local_20;

  local_20 = param_1;
  if ((-1 < param_1) && (param_2 < 0x20)) {
    local_20 = param_1 >> ((byte)param_2 & 0x3f);
  }
  return local_20;
}



long safe_mul_func_uint64_t_u_u(long param_1,long param_2)

{
  return param_1 * param_2;
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



uint safe_rshift_func_uint8_t_u_u(byte param_1,uint param_2)

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



int safe_rshift_func_int32_t_s_s(int param_1,int param_2)

{
  int local_14;

  local_14 = param_1;
  if (((-1 < param_1) && (-1 < param_2)) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
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



int safe_unary_minus_func_uint16_t_u(ushort param_1)

{
  return -(uint)param_1;
}



int safe_mul_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 * (int)param_2;
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



int safe_add_func_int8_t_s_s(char param_1,char param_2)

{
  return (int)param_1 + (int)param_2;
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



uint safe_rshift_func_uint32_t_u_u(uint param_1,uint param_2)

{
  undefined4 local_14;

  local_14 = param_1;
  if (param_2 < 0x20) {
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



long safe_div_func_int64_t_s_s(long param_1,long param_2)

{
  long local_20;

  local_20 = param_1;
  if ((param_2 != 0) && ((param_1 != -0x8000000000000000 || (param_2 != -1)))) {
    local_20 = param_1 / param_2;
  }
  return local_20;
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



uint safe_lshift_func_uint32_t_u_s(uint param_1,int param_2)

{
  uint local_14;

  local_14 = param_1;
  if (((-1 < param_2) && (param_2 < 0x20)) && (param_1 <= 0xffffffffU >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
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



int safe_mul_func_uint32_t_u_u(int param_1,int param_2)

{
  return param_1 * param_2;
}



int safe_sub_func_uint8_t_u_u(byte param_1,byte param_2)

{
  return (uint)param_1 - (uint)param_2;
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



uint safe_rshift_func_uint32_t_u_s(uint param_1,int param_2)

{
  uint local_14;

  local_14 = param_1;
  if ((-1 < param_2) && (param_2 < 0x20)) {
    local_14 = param_1 >> ((byte)param_2 & 0x1f);
  }
  return local_14;
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



int safe_lshift_func_int32_t_s_u(int param_1,uint param_2)

{
  int local_14;

  local_14 = param_1;
  if (((-1 < param_1) && (param_2 < 0x20)) && (param_1 <= 0x7fffffff >> ((byte)param_2 & 0x1f))) {
    local_14 = param_1 << ((byte)param_2 & 0x1f);
  }
  return local_14;
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

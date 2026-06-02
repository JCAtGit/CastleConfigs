typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
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
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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
undefined DAT_00402240;
undefined DAT_00402244;
undefined DAT_00402249;
undefined DAT_0040224e;
undefined DAT_00402253;
undefined DAT_00402258;
undefined DAT_0040227a;
undefined4 g_4;
undefined2 g_26;
undefined2 g_28;
undefined2 g_40;
undefined4 g_59;
undefined4 g_62;
undefined1[100] g_64;
undefined2 g_99;
undefined4 g_113;
undefined4 g_115;
undefined8 g_133;
undefined2 g_136;
undefined1[192] g_138;
undefined2 g_142;
undefined2 g_144;
undefined4 g_156;
undefined1 g_158;
undefined8 g_163;
undefined2 g_167;
undefined1[144] g_168;
undefined1[196] g_174;
undefined8 g_193;
undefined1[200] g_243;
undefined4 g_399;
undefined1 g_404;
undefined1[20] g_406;
undefined DAT_0040251f;
undefined2 g_529;
undefined4 g_580;
undefined2 g_628;
undefined2 g_629;
undefined2 g_642;
undefined1 g_690;
undefined8 g_727;
undefined1[96] g_822;
undefined4 g_836;
undefined4 g_837;
undefined4 g_904;
undefined1[63] g_1025;
undefined4 g_1177;
undefined8 g_1207;
undefined2 g_1287;
undefined1[56] g_1312;
undefined2 g_1345;
undefined1[240] g_1354;
undefined4 g_1368;
undefined2 g_1371;
undefined1[980] g_1377;
undefined2 g_1399;
undefined1[24] g_1411;
undefined2 g_1439;
undefined1 g_1440;
undefined8 g_1491;
undefined1[240] g_1504;
undefined1[224] g_1522;
undefined2 g_1574;
undefined2 g_1638;
undefined4 g_1693;
undefined2 g_1711;
undefined2 g_1719;
undefined2 g_1808;
undefined1[40] g_1860;
undefined2 g_1894;
undefined4 g_1944;
undefined1[640] g_1946;
undefined1[24] g_1972;
undefined2 g_2028;
undefined2 g_2034;
undefined2 g_2086;
undefined4 g_2172;
undefined1[40] g_2194;
undefined1[36] g_2200;
undefined2 g_2255;
undefined8 g_2361;
undefined1[40] g_2380;
undefined8 g_2554;
undefined4 crc32_context;
undefined1[1024] crc32_tab;
pointer g_2383;
pointer g_369;
undefined *PTR_g_1500_00402580;
undefined DAT_00402710;
pointer g_1891;
pointer g_2382;
pointer g_458;

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004003fd)
// WARNING: Removing unreachable block (ram,0x00400407)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040043f)
// WARNING: Removing unreachable block (ram,0x00400449)

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



undefined8 main(int param_1,long param_2)

{
  int iVar1;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_28 = 0;
  if (param_1 == 2) {
    iVar1 = strcmp(*(char **)(param_2 + 8),"1");
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4,&DAT_00402240,local_28);
  transparent_crc((long)g_26,&DAT_00402244,local_28);
  transparent_crc((long)g_28,&DAT_00402249,local_28);
  transparent_crc((long)g_40,&DAT_0040224e,local_28);
  transparent_crc((long)g_59,&DAT_00402253,local_28);
  transparent_crc((long)g_62,&DAT_00402258,local_28);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      transparent_crc(*(undefined2 *)(g_64 + (long)(int)local_20 * 2 + (long)(int)local_1c * 0x14),
                      "g_64[i][j]",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_99,&DAT_0040227a,local_28);
  transparent_crc((long)g_113,"g_113",local_28);
  transparent_crc((long)g_115,"g_115",local_28);
  transparent_crc(g_133,"g_133",local_28);
  transparent_crc((long)g_136,"g_136",local_28);
  for (local_1c = 0; (int)local_1c < 8; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 6; local_20 = local_20 + 1) {
      transparent_crc(*(undefined4 *)(g_138 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x18),
                      "g_138[i][j]",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc(g_142,"g_142",local_28);
  transparent_crc(g_144,"g_144",local_28);
  transparent_crc((long)g_156,"g_156",local_28);
  transparent_crc(g_158,"g_158",local_28);
  transparent_crc(g_163,"g_163",local_28);
  transparent_crc((long)g_167,"g_167",local_28);
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      transparent_crc(*(undefined4 *)(g_168 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x10),
                      "g_168[i][j]",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  for (local_1c = 0; (int)local_1c < 7; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 7; local_20 = local_20 + 1) {
      transparent_crc(*(undefined2 *)(g_174 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x1c),
                      "g_174[i][j].f0",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc(g_193,"g_193",local_28);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
        transparent_crc((long)(char)g_243[(long)(int)local_24 +
                                          (long)(int)local_20 * 2 + (long)(int)local_1c * 0x14],
                        "g_243[i][j][k]",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc(g_399,"g_399",local_28);
  transparent_crc((long)g_404,"g_404",local_28);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    transparent_crc((long)*(int *)(g_406 + (long)(int)local_1c * 4),"g_406[i]",local_28);
    if (local_28 != 0) {
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_529,"g_529.f0",local_28);
  transparent_crc(0x1eb7,"g_560.f0",local_28);
  transparent_crc(g_580,"g_580",local_28);
  transparent_crc(g_628,"g_628.f0",local_28);
  transparent_crc(g_629,"g_629.f0",local_28);
  transparent_crc(g_642,"g_642.f0",local_28);
  transparent_crc(g_690,"g_690",local_28);
  transparent_crc(g_727,"g_727",local_28);
  for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
        transparent_crc(*(undefined2 *)
                         (g_822 + (long)(int)local_24 * 4 +
                                  (long)(int)local_20 * 8 + (long)(int)local_1c * 0x20),
                        "g_822[i][j][k].f0",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc((long)g_836,"g_836",local_28);
  transparent_crc(g_837,"g_837",local_28);
  transparent_crc((long)g_904,"g_904",local_28);
  for (local_1c = 0; (int)local_1c < 1; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 7; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 9; local_24 = local_24 + 1) {
        transparent_crc(g_1025[(long)(int)local_24 +
                               (long)(int)local_20 * 9 + (long)(int)local_1c * 0x3f],
                        "g_1025[i][j][k]",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc((long)g_1177,"g_1177",local_28);
  transparent_crc(g_1207,"g_1207",local_28);
  transparent_crc(g_1287,"g_1287.f0",local_28);
  for (local_1c = 0; (int)local_1c < 2; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 7; local_20 = local_20 + 1) {
      transparent_crc((long)*(int *)(g_1312 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x1c),
                      "g_1312[i][j]",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc((long)g_1345,"g_1345",local_28);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 6; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 4; local_24 = local_24 + 1) {
        transparent_crc(g_1354[(long)(int)local_24 +
                               (long)(int)local_20 * 4 + (long)(int)local_1c * 0x18],
                        "g_1354[i][j][k]",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc(g_1368,"g_1368",local_28);
  transparent_crc(g_1371,"g_1371.f0",local_28);
  for (local_1c = 0; (int)local_1c < 5; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 7; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 7; local_24 = local_24 + 1) {
        transparent_crc(*(undefined2 *)
                         (g_1377 + (long)(int)local_24 * 4 +
                                   (long)(int)local_20 * 0x1c + (long)(int)local_1c * 0xc4),
                        "g_1377[i][j][k].f0",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc(g_1399,"g_1399.f0",local_28);
  for (local_1c = 0; (int)local_1c < 6; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 1; local_20 = local_20 + 1) {
      transparent_crc(*(undefined2 *)(g_1411 + (long)(int)local_20 * 4 + (long)(int)local_1c * 4),
                      "g_1411[i][j].f0",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  transparent_crc(g_1439,"g_1439.f0",local_28);
  transparent_crc((long)g_1440,"g_1440",local_28);
  transparent_crc(g_1491,"g_1491",local_28);
  for (local_1c = 0; (int)local_1c < 6; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      transparent_crc(*(undefined2 *)(g_1504 + (long)(int)local_20 * 4 + (long)(int)local_1c * 0x28)
                      ,"g_1504[i][j].f0",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  for (local_1c = 0; (int)local_1c < 8; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 1; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 7; local_24 = local_24 + 1) {
        transparent_crc(*(undefined2 *)
                         (g_1522 + (long)(int)local_24 * 4 +
                                   (long)(int)local_20 * 0x1c + (long)(int)local_1c * 0x1c),
                        "g_1522[i][j][k].f0",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  transparent_crc(g_1574,"g_1574.f0",local_28);
  transparent_crc(g_1638,"g_1638.f0",local_28);
  transparent_crc(g_1693,"g_1693",local_28);
  transparent_crc(g_1711,"g_1711.f0",local_28);
  transparent_crc(g_1719,"g_1719.f0",local_28);
  transparent_crc(g_1808,"g_1808.f0",local_28);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    transparent_crc(*(undefined2 *)(g_1860 + (long)(int)local_1c * 4),"g_1860[i].f0",local_28);
    if (local_28 != 0) {
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_1894,"g_1894.f0",local_28);
  transparent_crc(g_1944,"g_1944",local_28);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
      for (local_24 = 0; (int)local_24 < 8; local_24 = local_24 + 1) {
        transparent_crc(*(undefined4 *)
                         (g_1946 + (long)(int)local_24 * 4 +
                                   (long)(int)local_20 * 0x20 + (long)(int)local_1c * 0xa0),
                        "g_1946[i][j][k]",local_28);
        if (local_28 != 0) {
          printf("index = [%d][%d][%d]\n",(ulong)local_1c,(ulong)local_20,(ulong)local_24);
        }
      }
    }
  }
  for (local_1c = 0; (int)local_1c < 6; local_1c = local_1c + 1) {
    transparent_crc(*(undefined2 *)(g_1972 + (long)(int)local_1c * 4),"g_1972[i].f0",local_28);
    if (local_28 != 0) {
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_2028,"g_2028.f0",local_28);
  transparent_crc(g_2034,"g_2034.f0",local_28);
  transparent_crc(g_2086,"g_2086.f0",local_28);
  transparent_crc((long)g_2172,"g_2172",local_28);
  for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 10; local_20 = local_20 + 1) {
      transparent_crc((long)(char)g_2194[(long)(int)local_20 + (long)(int)local_1c * 10],
                      "g_2194[i][j]",local_28);
      if (local_28 != 0) {
        printf("index = [%d][%d]\n",(ulong)local_1c,(ulong)local_20);
      }
    }
  }
  for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
    transparent_crc(*(undefined2 *)(g_2200 + (long)(int)local_1c * 4),"g_2200[i].f0",local_28);
    if (local_28 != 0) {
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(0xfffc,"g_2203.f0",local_28);
  transparent_crc(g_2255,"g_2255.f0",local_28);
  transparent_crc(g_2361,&DAT_0040251f,local_28);
  for (local_1c = 0; (int)local_1c < 10; local_1c = local_1c + 1) {
    transparent_crc(*(undefined2 *)(g_2380 + (long)(int)local_1c * 4),"g_2380[i].f0",local_28);
    if (local_28 != 0) {
      printf("index = [%d]\n",(ulong)local_1c);
    }
  }
  transparent_crc(g_2554,"g_2554",local_28);
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



undefined2 func_1(void)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = func_2((int)(char)g_4);
  *(uint *)**(undefined8 **)g_2383 = uVar3 ^ *(uint *)**(undefined8 **)g_2383;
  cVar1 = safe_lshift_func_int8_t_s_u(0xfffffff9,7);
  uVar2 = safe_mul_func_uint16_t_u_u(7,0x7fffffff < (uint)(int)cVar1,(int)cVar1,7);
  *(uint *)g_369 = (uint)uVar2 | *(uint *)g_369;
  return g_2086;
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



// WARNING: Type propagation algorithm not settling

int func_2(char param_1)

{
  int local_750;
  int local_74c;
  undefined1 local_728 [296];
  undefined *****local_600;
  undefined *****local_5f8 [4];
  undefined8 local_5d8;
  undefined2 local_5ca;
  undefined8 local_5c8;
  undefined1 *local_5c0;
  undefined1 local_5b8 [168];
  undefined1 auStack_510 [604];
  undefined4 local_2b4;
  undefined **local_2b0;
  undefined2 local_2a2;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 *local_270;
  undefined8 local_268;
  undefined1 local_259;
  undefined1 local_258 [408];
  undefined1 *local_c0;
  undefined8 local_b8 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_16;
  undefined4 local_e;
  char local_9;
  
  local_16 = 0x4d39504d504d4d39;
  local_e = 0x504d504d;
  local_20 = 0x40415c;
  local_28 = 0x404eb8;
  local_c0 = auStack_38;
  local_9 = param_1;
  memcpy(local_258,&PTR_g_1500_00402580,400);
  local_259 = 0x3d;
  local_268 = 0;
  local_270 = &local_268;
  local_274 = 0xfffffff7;
  local_278 = 0x74deaf23;
  local_27c = 0xfffffff8;
  local_280 = 0x79881ec2;
  local_284 = 4;
  local_288 = 0xffffffff;
  local_28c = 0;
  local_290 = 0;
  local_294 = 0x49fbc8ac;
  local_298 = 0x94a519dd;
  local_2a0 = 0;
  local_2a2 = 0x2c7a;
  local_2b0 = &g_1891;
  local_2b4 = 0x322a8959;
  memcpy(local_5b8,&DAT_00402710,0x300);
  local_5c0 = auStack_510;
  local_5c8 = 0x85d0a29adfa59703;
  local_5ca = 0;
  local_5d8 = 0;
  local_5f8[3] = (undefined *****)&g_2382;
  local_5f8[2] = (undefined *****)0x0;
  local_5f8[1] = (undefined *****)(local_5f8 + 2);
  local_600 = (undefined *****)local_5f8;
  memset(local_728,0,0x48);
  for (local_74c = 0; local_74c < 2; local_74c = local_74c + 1) {
    for (local_750 = 0; local_750 < 9; local_750 = local_750 + 1) {
      local_b8[(long)local_74c * 9 + (long)local_750] = &g_458;
    }
  }
  for (local_74c = 0; local_74c < 1; local_74c = local_74c + 1) {
    local_5f8[local_74c] = (undefined *****)0x0;
  }
  return (int)local_9;
}



int safe_mul_func_uint16_t_u_u(ushort param_1,ushort param_2)

{
  return (uint)param_1 * (uint)param_2;
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



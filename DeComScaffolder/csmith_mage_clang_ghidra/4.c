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

typedef struct GnuBuildAttribute_8_16 GnuBuildAttribute_8_16, *PGnuBuildAttribute_8_16;

struct GnuBuildAttribute_8_16 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8];
    pointer start;
    pointer end;
};

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
undefined1[1024] crc32_tab;
undefined1 g_174;
pointer PTR_g_6_0040f720;
undefined1 g_1385;
undefined DAT_0040f860;
undefined DAT_0040fc50;
undefined4 g_330;
undefined DAT_0040fcf0;
undefined DAT_0040fde0;
undefined *PTR_g_2561_0040fea0;
undefined8 g_1171;
undefined DAT_00410100;
pointer g_2572;
undefined1 g_503;
undefined8 g_747;
pointer g_159;
undefined8 g_25;
undefined8 g_2470;
undefined4 crc32_context;

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



undefined4 mage_alpha0(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha1(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha2(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha3(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha4(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha5(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha6(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha7(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha8(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha9(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha10(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha11(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha12(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha13(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha14(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha15(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha16(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha17(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha18(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha19(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha20(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha21(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha22(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha23(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha24(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha25(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha26(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha27(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha28(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha29(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha30(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha31(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha32(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha33(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha34(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha35(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha36(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha37(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha38(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha39(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha40(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha41(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha42(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha43(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha44(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha45(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha46(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha47(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha48(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha49(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha50(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha51(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha52(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha53(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha54(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha55(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha56(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha57(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha58(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha59(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha60(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha61(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha62(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha63(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha64(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha65(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha66(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha67(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha68(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha69(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha70(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha71(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha72(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha73(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha74(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha75(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha76(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha77(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha78(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha79(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha80(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha81(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha82(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha83(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha84(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha85(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha86(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha87(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha88(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha89(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha90(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha91(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha92(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha93(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha94(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha95(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha96(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha97(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha98(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha99(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha100(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha101(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha102(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha103(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha104(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha105(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha106(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha107(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha108(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha109(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha110(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha111(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha112(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha113(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha114(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha115(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha116(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha117(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha118(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha119(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha120(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha121(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha122(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha123(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha124(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha125(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha126(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha127(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha128(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha129(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha130(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha131(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha132(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha133(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha134(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha135(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha136(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha137(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha138(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha139(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha140(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha141(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha142(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha143(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha144(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha145(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha146(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha147(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha148(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha149(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha150(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha151(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha152(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha153(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha154(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha155(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha156(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha157(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha158(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha159(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha160(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha161(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha162(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha163(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha164(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha165(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha166(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha167(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha168(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha169(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha170(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha171(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha172(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha173(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha174(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha175(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha176(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha177(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha178(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha179(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha180(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha181(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha182(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha183(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha184(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha185(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha186(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha187(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha188(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha189(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha190(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha191(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha192(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha193(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha194(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha195(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha196(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha197(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha198(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha199(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha200(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha201(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha202(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha203(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha204(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha205(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha206(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha207(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha208(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha209(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha210(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha211(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha212(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha213(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha214(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha215(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha216(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha217(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha218(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha219(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha220(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha221(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha222(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha223(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha224(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha225(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha226(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha227(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha228(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha229(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha230(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha231(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha232(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha233(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha234(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha235(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha236(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha237(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha238(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha239(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha240(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha241(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha242(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha243(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha244(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha245(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha246(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha247(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha248(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha249(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha250(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha251(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha252(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha253(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha254(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha255(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha256(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha257(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha258(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha259(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha260(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha261(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha262(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha263(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha264(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha265(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha266(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha267(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha268(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha269(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha270(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha271(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha272(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha273(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha274(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha275(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha276(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha277(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha278(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha279(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha280(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha281(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha282(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha283(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha284(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha285(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha286(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha287(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha288(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha289(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha290(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha291(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha292(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha293(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha294(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha295(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha296(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha297(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha298(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha299(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha300(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha301(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha302(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha303(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha304(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha305(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha306(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha307(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha308(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha309(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha310(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha311(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha312(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha313(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha314(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha315(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha316(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha317(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha318(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha319(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha320(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha321(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha322(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha323(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha324(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha325(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha326(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha327(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha328(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha329(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha330(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha331(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha332(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha333(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha334(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha335(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha336(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha337(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha338(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha339(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha340(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha341(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha342(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha343(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha344(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha345(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha346(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha347(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha348(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha349(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha350(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha351(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha352(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha353(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha354(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha355(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha356(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha357(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha358(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha359(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha360(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha361(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha362(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha363(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha364(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha365(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha366(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha367(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha368(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha369(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha370(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha371(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha372(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha373(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha374(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha375(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha376(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha377(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha378(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha379(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha380(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha381(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha382(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha383(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha384(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha385(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha386(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha387(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha388(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha389(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha390(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha391(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha392(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha393(undefined4 param_1)

{
  return param_1;
}



undefined4 mage_alpha394(undefined4 param_1)

{
  return param_1;
}


/*
Unable to decompile 'main'
Cause: Exception while decompiling 00403600: process: timeout

*/


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
  int local_c9c;
  int local_c98;
  undefined1 local_c88 [216];
  undefined2 local_bb0;
  undefined2 local_bae [3];
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 auStack_b98 [2];
  undefined2 local_b86;
  undefined4 local_b84;
  undefined8 local_b80;
  undefined2 local_b72;
  undefined8 *local_b70;
  undefined8 local_b68;
  undefined4 local_b5c;
  undefined1 local_b58 [608];
  undefined4 local_8f8;
  undefined2 local_8f2;
  undefined ***local_8f0;
  undefined **local_8e8;
  undefined2 local_8da;
  undefined1 local_8d8 [192];
  undefined8 local_818;
  undefined4 local_80c;
  undefined1 **local_808;
  undefined1 *local_800;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7ec;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7d8;
  undefined8 *local_7c8;
  undefined1 local_7b9;
  undefined8 auStack_7b8 [2];
  undefined4 auStack_7a4 [3];
  undefined1 local_798 [240];
  undefined8 local_6a8;
  undefined4 *local_6a0;
  undefined4 *local_698;
  undefined8 local_690;
  undefined4 *local_688;
  undefined4 *local_680;
  undefined4 local_66c;
  undefined8 local_666;
  undefined4 local_65e;
  undefined2 local_65a;
  undefined8 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined1 *local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined **local_628;
  undefined8 *local_620;
  undefined1 local_616;
  undefined1 local_615;
  undefined4 local_614;
  undefined8 local_610;
  undefined4 local_604;
  undefined4 local_600;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8 [112];
  undefined1 local_588 [204];
  undefined1 auStack_4bc [796];
  undefined4 *local_1a0;
  undefined1 *local_198;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined2 local_172;
  undefined1 auStack_16f [7];
  undefined8 *local_168;
  undefined8 local_160;
  undefined1 local_158 [335];
  undefined1 local_9;
  
  local_9 = 7;
  memcpy(local_158,&PTR_g_6_0040f720,0x140);
  local_160 = 0;
  local_168 = &g_25;
  local_172 = 5;
  local_180 = &g_1385;
  local_188 = &g_174;
  local_18c = 0xac226989;
  local_198 = &g_503;
  local_1a0 = &g_330;
  memcpy(local_588,&DAT_0040f860,1000);
  memcpy(local_5f8,&DAT_0040fc50,0x70);
  local_5f9 = 0xd3;
  local_5fa = 0xf9;
  local_600 = 0xffffffff;
  local_604 = 0x28b6d115;
  local_610 = 0xfffffffffffffffb;
  local_614 = 0xfffffffe;
  local_615 = 0x58;
  local_616 = 0xfe;
  mage_alpha0(0);
  local_620 = &g_1171;
  local_628 = &g_2572;
  local_62c = 0x2aaee534;
  local_630 = 0xcd4d28b2;
  local_638 = auStack_4bc;
  local_658 = 0x100000001;
  local_650 = 0x100000001;
  local_648 = 1;
  local_666 = 0xaa55aa55aa55aa55;
  local_65e = 0xaa55aa55;
  local_65a = 0xaa55;
  local_66c = 0x7413bff2;
  local_6a8 = 0x416094;
  local_6a0 = &local_66c;
  local_698 = &local_66c;
  local_690 = 0x416094;
  local_688 = &local_66c;
  local_680 = &local_66c;
  memcpy(local_798,&DAT_0040fcf0,0xf0);
  local_7b9 = 0xfb;
  local_7c8 = &g_747;
  memset(&local_7f8,0,0x28);
  local_7f8 = 0xfffffffb;
  local_7f4 = 0xfffffffb;
  local_7ec = 0x3ced3861;
  local_7e4 = 0xfffffffb;
  local_7e0 = 0xfffffffb;
  local_7d8 = 0x3ced3861;
  mage_alpha1(1);
  local_800 = &local_5f9;
  local_808 = &local_800;
  local_80c = 0xb6a870b5;
  local_818 = 0;
  memcpy(local_8d8,&DAT_0040fde0,0xb4);
  local_8da = 0xc623;
  local_8e8 = &g_159;
  local_8f0 = &local_8e8;
  local_8f2 = 1;
  local_8f8 = 0xbd653191;
  memcpy(local_b58,&PTR_g_2561_0040fea0,600);
  local_b5c = 0x61ff7f99;
  local_b68 = 8;
  local_b70 = &g_2470;
  local_b72 = 1;
  local_b80 = 2;
  local_b84 = 0xffffffff;
  local_b86 = 0x8eb;
  local_ba0 = 0;
  local_ba8 = 0x416f88;
  local_bb0 = 3;
  memcpy(local_c88,&DAT_00410100,0xd8);
  mage_alpha2(2);
  mage_alpha3(3);
  for (local_c98 = 0; local_c98 < 7; local_c98 = local_c98 + 1) {
    auStack_16f[local_c98] = 199;
  }
  mage_alpha4(4);
  for (local_c98 = 0; local_c98 < 3; local_c98 = local_c98 + 1) {
    auStack_7a4[local_c98] = 0xfffffff9;
  }
  mage_alpha5(5);
  for (local_c98 = 0; local_c98 < 2; local_c98 = local_c98 + 1) {
    auStack_7b8[local_c98] = 0;
  }
  mage_alpha6(6);
  for (local_c98 = 0; local_c98 < 2; local_c98 = local_c98 + 1) {
    auStack_b98[local_c98] = 0xfffffffffffffffa;
  }
  mage_alpha7(7);
  for (local_c98 = 0; local_c98 < 3; local_c98 = local_c98 + 1) {
    mage_alpha8(8);
    for (local_c9c = 0; local_c9c < 1; local_c9c = local_c9c + 1) {
      local_bae[(long)local_c98 + (long)local_c9c] = 1;
    }
  }
  return 0;
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



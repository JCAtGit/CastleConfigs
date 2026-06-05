#include "MageAlpha.h"
__attribute__((noinline, used, noipa, optnone, optimize("-O0"))) void  mage_alpha0(int id){volatile int dummy = id; __asm__ volatile(""::"r"(id):"memory");};
__attribute__((noinline, used, noipa, optnone, optimize("-O0"))) void  mage_alpha1(int id){volatile int dummy = id; __asm__ volatile(""::"r"(id):"memory");};
__attribute__((noinline, used, noipa, optnone, optimize("-O0"))) void  mage_alpha2(int id){volatile int dummy = id; __asm__ volatile(""::"r"(id):"memory");};
__attribute__((noinline, used, noipa, optnone, optimize("-O0"))) void  mage_alpha3(int id){volatile int dummy = id; __asm__ volatile(""::"r"(id):"memory");};
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.4.0
 * Git version: unknown
 * Options:   --seed 0 --output
 * /home/user/Desktop/CCastle/CCastleData/CodebaseScaffolder/csmith/0.c Seed: 0
 */

#include "csmith.h"

static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */

/* --- FORWARD DECLARATIONS --- */
static int64_t func_1(void);

/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/*
 * reads :
 * writes:
 */
static int64_t func_1(void) { /* block id: 0 */
  uint64_t l_2 = 4UL;
  return l_2;
}

/* ---------------------------------------- */
int __attribute__((optimize("O0"), optnone)) main(int argc, char *argv[]) {
  mage_alpha0(0); 
  int print_hash_value = 0;
  mage_alpha1(1); 
  if (argc == 2 && strcmp(argv[1], "1") == 0) {
    print_hash_value = 1;
  }
  mage_alpha2(2); 
  platform_main_begin();
  mage_alpha3(3); 
  crc32_gentab();
  func_1();
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 1
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
XXX total OOB instances added: 0
********************* end of statistics **********************/

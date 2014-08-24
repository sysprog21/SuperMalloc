#ifndef GENERATED_CONSTANTS_H
#define GENERATED_CONSTANTS_H
// Do not edit this file.  This file is automatically generated
//  from objsizes.cc

#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
// In small and medium pages we reserve the first cache line
// (64 bytes) for a in-use bitmap.
static const uint64_t pagesize = 4096ul;
static const uint64_t log_chunksize = 21ul;
static const uint64_t chunksize = 2097152ul;

// We obtain hugepages from the operating system via mmap(2).
// By `hugepage', I mean only mmapped pages.
// By `page', I mean only a page inside a hugepage.
// Each hugepage has a bin number.
typedef uint32_t binnumber_t;
// We use a static array to keep track of the bin of each a hugepage.
//  Bins [0..first_huge_bin_number) give the size of an object.
//  Larger bin numbers B indicate the object size, coded as
//     malloc_usable_size(object) = page_size*(bin_of(object)-first_huge_bin_number;
static const struct { uint32_t object_size; uint32_t objects_per_page; } static_bin_info[] __attribute__((unused)) = {
// The first class of small objects have sizes of the form c<<k where c is 4, 5, 6 or 7.
//   objsize objects_per_page   bin   wastage
 {   8, 504},  //     0       0
 {  10, 403},  //     1       2
 {  12, 336},  //     2       0
 {  14, 288},  //     3       0
 {  16, 252},  //     4       0
 {  20, 201},  //     5      12
 {  24, 168},  //     6       0
 {  28, 144},  //     7       0
 {  32, 126},  //     8       0
 {  40, 100},  //     9      32
 {  48,  84},  //    10       0
 {  56,  72},  //    11       0
 {  64,  63},  //    12       0
 {  80,  50},  //    13      32
 {  96,  42},  //    14       0
 { 112,  36},  //    15       0
 { 128,  31},  //    16      64
 { 160,  25},  //    17      32
 { 192,  21},  //    18       0
 { 224,  18},  //    19       0
 { 256,  15},  //    20     192
// Class 2 small objects are chosen to fit as many in a page as can fit.
// Class 2 objects are always a multiple of a cache line.
 { 320,  12},  //    21       192
 { 384,  10},  //    22       192
 { 448,   9},  //    23         0
 { 576,   7},  //    24         0
 { 640,   6},  //    25       192
 { 768,   5},  //    26       192
 { 960,   4},  //    27       192
 {1344,   3},  //    28         0
 {1984,   2},  //    29        64
// large objects (page allocated):
//  So that we can return an accurate malloc_usable_size(), we maintain (in the first page of each largepage chunk) the number of actual pages allocated as an array of short[512].
//  This introduces fragmentation.  This fragmentation doesn't matter much since it will be demapped. For sizes up to 1<<16 we waste the last potential object.
//   for the larger stuff, we reduce the size of the object slightly which introduces some other fragmentation
 {1ul<<12, 1}, //    30
 {1ul<<13, 1}, //    31
 {1ul<<14, 1}, //    32
 {1ul<<15, 1}, //    33
 {1ul<<16, 1}, //    34
 {(1ul<<17)-4096, 1}, //  35  (reserve a page for the list of sizes)
 {(1ul<<18)-4096, 1}, //  36  (reserve a page for the list of sizes)
 {(1ul<<19)-4096, 1}, //  37  (reserve a page for the list of sizes)
 {(1ul<<20)-4096, 1}, //  38  (reserve a page for the list of sizes)
 {(1ul<<21)-4096, 1}, //  39  (reserve a page for the list of sizes)
// huge objects (chunk allocated) start  at this size.
 {2097152, 1}};//  40
static const size_t largest_small         = 1984;
static const size_t largest_large         = 1044480;
static const size_t chunk_size            = 2097152;
static const binnumber_t first_large_bin_number = 30;
static const binnumber_t first_huge_bin_number   = 40;
struct dynamic_small_bin_info {
  union {
    struct {
      void *b0[505];
      void *b1[404];
      void *b2[337];
      void *b3[289];
      void *b4[253];
      void *b5[202];
      void *b6[169];
      void *b7[145];
      void *b8[127];
      void *b9[101];
      void *b10[85];
      void *b11[73];
      void *b12[64];
      void *b13[51];
      void *b14[43];
      void *b15[37];
      void *b16[32];
      void *b17[26];
      void *b18[22];
      void *b19[19];
      void *b20[16];
      void *b21[13];
      void *b22[11];
      void *b23[10];
      void *b24[8];
      void *b25[7];
      void *b26[6];
      void *b27[5];
      void *b28[4];
      void *b29[3];
    };
    void *b[3067];
  };
};
static int dynamic_small_bin_offset(binnumber_t bin) __attribute((pure)) __attribute__((unused)) __attribute__((warn_unused_result));
static int dynamic_small_bin_offset(binnumber_t bin) {
  if (0) {
    switch(bin) {
      case 0: return 0;
      case 1: return 505;
      case 2: return 909;
      case 3: return 1246;
      case 4: return 1535;
      case 5: return 1788;
      case 6: return 1990;
      case 7: return 2159;
      case 8: return 2304;
      case 9: return 2431;
      case 10: return 2532;
      case 11: return 2617;
      case 12: return 2690;
      case 13: return 2754;
      case 14: return 2805;
      case 15: return 2848;
      case 16: return 2885;
      case 17: return 2917;
      case 18: return 2943;
      case 19: return 2965;
      case 20: return 2984;
      case 21: return 3000;
      case 22: return 3013;
      case 23: return 3024;
      case 24: return 3034;
      case 25: return 3042;
      case 26: return 3049;
      case 27: return 3055;
      case 28: return 3060;
      case 29: return 3064;
    }
    abort(); // cannot get here.
  } else {
    const static int offs[]={0, 505, 909, 1246, 1535, 1788, 1990, 2159, 2304, 2431, 2532, 2617, 2690, 2754, 2805, 2848, 2885, 2917, 2943, 2965, 2984, 3000, 3013, 3024, 3034, 3042, 3049, 3055, 3060, 3064};
    return offs[bin];
  }
}

static inline uint64_t ceil(uint64_t a, uint64_t b) { return (a+b-1)/b; }

static binnumber_t size_2_bin(size_t size) __attribute((unused)) __attribute((const));
static binnumber_t size_2_bin(size_t size) {
  if (size <= 8) return 0;
  if (size <= 10) return 1;
  if (size <= 12) return 2;
  if (size <= 14) return 3;
  if (size <= 16) return 4;
  if (size <= 20) return 5;
  if (size <= 24) return 6;
  if (size <= 28) return 7;
  if (size <= 32) return 8;
  if (size <= 40) return 9;
  if (size <= 48) return 10;
  if (size <= 56) return 11;
  if (size <= 64) return 12;
  if (size <= 80) return 13;
  if (size <= 96) return 14;
  if (size <= 112) return 15;
  if (size <= 128) return 16;
  if (size <= 160) return 17;
  if (size <= 192) return 18;
  if (size <= 224) return 19;
  if (size <= 256) return 20;
  if (size <= 320) return 21;
  if (size <= 384) return 22;
  if (size <= 448) return 23;
  if (size <= 576) return 24;
  if (size <= 640) return 25;
  if (size <= 768) return 26;
  if (size <= 960) return 27;
  if (size <= 1344) return 28;
  if (size <= 1984) return 29;
  if (size <= (1u<<12)) return 30;
  if (size <= (1u<<13)) return 31;
  if (size <= (1u<<14)) return 32;
  if (size <= (1u<<15)) return 33;
  if (size <= (1u<<16)) return 34;
  if (size <= (1u<<17)-4096) return 35;
  if (size <= (1u<<18)-4096) return 36;
  if (size <= (1u<<19)-4096) return 37;
  if (size <= (1u<<20)-4096) return 38;
  if (size <= (1u<<21)-4096) return 39;
  return 39 + ceil(size-2097152, 4096);
}
#endif

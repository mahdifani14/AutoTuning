/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Sparc Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 13, 2, // Skip to: 532
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 160, 22, // Skip to: 5812
/* 20 */      MCD::OPC_Decode, 208, 3, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 103, 0, // Skip to: 131
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 60
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 49
/* 42 */      MCD::OPC_CheckPredicate, 0, 134, 22, // Skip to: 5812
/* 46 */      MCD::OPC_Decode, 91, 1, // Opcode: BPICCNT
/* 49 */      MCD::OPC_FilterValue, 1, 127, 22, // Skip to: 5812
/* 53 */      MCD::OPC_CheckPredicate, 0, 123, 22, // Skip to: 5812
/* 57 */      MCD::OPC_Decode, 90, 1, // Opcode: BPICCANT
/* 60 */      MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 89
/* 64 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 67 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 78
/* 71 */      MCD::OPC_CheckPredicate, 0, 105, 22, // Skip to: 5812
/* 75 */      MCD::OPC_Decode, 88, 1, // Opcode: BPICC
/* 78 */      MCD::OPC_FilterValue, 1, 98, 22, // Skip to: 5812
/* 82 */      MCD::OPC_CheckPredicate, 0, 94, 22, // Skip to: 5812
/* 86 */      MCD::OPC_Decode, 89, 1, // Opcode: BPICCA
/* 89 */      MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 110
/* 93 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 96 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 103
/* 100 */     MCD::OPC_Decode, 107, 1, // Opcode: BPXCCNT
/* 103 */     MCD::OPC_FilterValue, 1, 73, 22, // Skip to: 5812
/* 107 */     MCD::OPC_Decode, 106, 1, // Opcode: BPXCCANT
/* 110 */     MCD::OPC_FilterValue, 5, 66, 22, // Skip to: 5812
/* 114 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 117 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 124
/* 121 */     MCD::OPC_Decode, 104, 1, // Opcode: BPXCC
/* 124 */     MCD::OPC_FilterValue, 1, 52, 22, // Skip to: 5812
/* 128 */     MCD::OPC_Decode, 105, 1, // Opcode: BPXCCA
/* 131 */     MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 161
/* 135 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 138 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 154
/* 142 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 151
/* 148 */     MCD::OPC_Decode, 70, 0, // Opcode: BA
/* 151 */     MCD::OPC_Decode, 71, 2, // Opcode: BCOND
/* 154 */     MCD::OPC_FilterValue, 1, 22, 22, // Skip to: 5812
/* 158 */     MCD::OPC_Decode, 72, 2, // Opcode: BCONDA
/* 161 */     MCD::OPC_FilterValue, 3, 255, 0, // Skip to: 420
/* 165 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 168 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 189
/* 172 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 175 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 182
/* 179 */     MCD::OPC_Decode, 110, 3, // Opcode: BPZnapn
/* 182 */     MCD::OPC_FilterValue, 1, 250, 21, // Skip to: 5812
/* 186 */     MCD::OPC_Decode, 111, 3, // Opcode: BPZnapt
/* 189 */     MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 210
/* 193 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 196 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 203
/* 200 */     MCD::OPC_Decode, 94, 3, // Opcode: BPLEZnapn
/* 203 */     MCD::OPC_FilterValue, 1, 229, 21, // Skip to: 5812
/* 207 */     MCD::OPC_Decode, 95, 3, // Opcode: BPLEZnapt
/* 210 */     MCD::OPC_FilterValue, 3, 17, 0, // Skip to: 231
/* 214 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 217 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 224
/* 221 */     MCD::OPC_Decode, 98, 3, // Opcode: BPLZnapn
/* 224 */     MCD::OPC_FilterValue, 1, 208, 21, // Skip to: 5812
/* 228 */     MCD::OPC_Decode, 99, 3, // Opcode: BPLZnapt
/* 231 */     MCD::OPC_FilterValue, 5, 17, 0, // Skip to: 252
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 245
/* 242 */     MCD::OPC_Decode, 102, 3, // Opcode: BPNZnapn
/* 245 */     MCD::OPC_FilterValue, 1, 187, 21, // Skip to: 5812
/* 249 */     MCD::OPC_Decode, 103, 3, // Opcode: BPNZnapt
/* 252 */     MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 273
/* 256 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 259 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 266
/* 263 */     MCD::OPC_Decode, 86, 3, // Opcode: BPGZnapn
/* 266 */     MCD::OPC_FilterValue, 1, 166, 21, // Skip to: 5812
/* 270 */     MCD::OPC_Decode, 87, 3, // Opcode: BPGZnapt
/* 273 */     MCD::OPC_FilterValue, 7, 17, 0, // Skip to: 294
/* 277 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 280 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 287
/* 284 */     MCD::OPC_Decode, 82, 3, // Opcode: BPGEZnapn
/* 287 */     MCD::OPC_FilterValue, 1, 145, 21, // Skip to: 5812
/* 291 */     MCD::OPC_Decode, 83, 3, // Opcode: BPGEZnapt
/* 294 */     MCD::OPC_FilterValue, 17, 17, 0, // Skip to: 315
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 308
/* 305 */     MCD::OPC_Decode, 108, 3, // Opcode: BPZapn
/* 308 */     MCD::OPC_FilterValue, 1, 124, 21, // Skip to: 5812
/* 312 */     MCD::OPC_Decode, 109, 3, // Opcode: BPZapt
/* 315 */     MCD::OPC_FilterValue, 18, 17, 0, // Skip to: 336
/* 319 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 322 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 329
/* 326 */     MCD::OPC_Decode, 92, 3, // Opcode: BPLEZapn
/* 329 */     MCD::OPC_FilterValue, 1, 103, 21, // Skip to: 5812
/* 333 */     MCD::OPC_Decode, 93, 3, // Opcode: BPLEZapt
/* 336 */     MCD::OPC_FilterValue, 19, 17, 0, // Skip to: 357
/* 340 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 343 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 350
/* 347 */     MCD::OPC_Decode, 96, 3, // Opcode: BPLZapn
/* 350 */     MCD::OPC_FilterValue, 1, 82, 21, // Skip to: 5812
/* 354 */     MCD::OPC_Decode, 97, 3, // Opcode: BPLZapt
/* 357 */     MCD::OPC_FilterValue, 21, 17, 0, // Skip to: 378
/* 361 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 364 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 371
/* 368 */     MCD::OPC_Decode, 100, 3, // Opcode: BPNZapn
/* 371 */     MCD::OPC_FilterValue, 1, 61, 21, // Skip to: 5812
/* 375 */     MCD::OPC_Decode, 101, 3, // Opcode: BPNZapt
/* 378 */     MCD::OPC_FilterValue, 22, 17, 0, // Skip to: 399
/* 382 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 385 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 392
/* 389 */     MCD::OPC_Decode, 84, 3, // Opcode: BPGZapn
/* 392 */     MCD::OPC_FilterValue, 1, 40, 21, // Skip to: 5812
/* 396 */     MCD::OPC_Decode, 85, 3, // Opcode: BPGZapt
/* 399 */     MCD::OPC_FilterValue, 23, 33, 21, // Skip to: 5812
/* 403 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 406 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 413
/* 410 */     MCD::OPC_Decode, 80, 3, // Opcode: BPGEZapn
/* 413 */     MCD::OPC_FilterValue, 1, 19, 21, // Skip to: 5812
/* 417 */     MCD::OPC_Decode, 81, 3, // Opcode: BPGEZapt
/* 420 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 444
/* 424 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 440
/* 430 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 440
/* 436 */     MCD::OPC_Decode, 221, 2, 4, // Opcode: NOP
/* 440 */     MCD::OPC_Decode, 132, 3, 5, // Opcode: SETHIi
/* 444 */     MCD::OPC_FilterValue, 5, 61, 0, // Skip to: 509
/* 448 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 451 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 480
/* 455 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 458 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 469
/* 462 */     MCD::OPC_CheckPredicate, 0, 226, 20, // Skip to: 5812
/* 466 */     MCD::OPC_Decode, 79, 6, // Opcode: BPFCCNT
/* 469 */     MCD::OPC_FilterValue, 1, 219, 20, // Skip to: 5812
/* 473 */     MCD::OPC_CheckPredicate, 0, 215, 20, // Skip to: 5812
/* 477 */     MCD::OPC_Decode, 78, 6, // Opcode: BPFCCANT
/* 480 */     MCD::OPC_FilterValue, 1, 208, 20, // Skip to: 5812
/* 484 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 487 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 498
/* 491 */     MCD::OPC_CheckPredicate, 0, 197, 20, // Skip to: 5812
/* 495 */     MCD::OPC_Decode, 76, 6, // Opcode: BPFCC
/* 498 */     MCD::OPC_FilterValue, 1, 190, 20, // Skip to: 5812
/* 502 */     MCD::OPC_CheckPredicate, 0, 186, 20, // Skip to: 5812
/* 506 */     MCD::OPC_Decode, 77, 6, // Opcode: BPFCCA
/* 509 */     MCD::OPC_FilterValue, 6, 179, 20, // Skip to: 5812
/* 513 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 148, 1, 2, // Opcode: FBCOND
/* 524 */     MCD::OPC_FilterValue, 1, 164, 20, // Skip to: 5812
/* 528 */     MCD::OPC_Decode, 149, 1, 2, // Opcode: FBCONDA
/* 532 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 539
/* 536 */     MCD::OPC_Decode, 113, 7, // Opcode: CALL
/* 539 */     MCD::OPC_FilterValue, 2, 84, 18, // Skip to: 5235
/* 543 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 546 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 573
/* 550 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 553 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 566
/* 557 */     MCD::OPC_CheckField, 5, 8, 0, 129, 20, // Skip to: 5812
/* 563 */     MCD::OPC_Decode, 30, 8, // Opcode: ADDrr
/* 566 */     MCD::OPC_FilterValue, 1, 122, 20, // Skip to: 5812
/* 570 */     MCD::OPC_Decode, 29, 9, // Opcode: ADDri
/* 573 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 600
/* 577 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 580 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 593
/* 584 */     MCD::OPC_CheckField, 5, 8, 0, 102, 20, // Skip to: 5812
/* 590 */     MCD::OPC_Decode, 45, 8, // Opcode: ANDrr
/* 593 */     MCD::OPC_FilterValue, 1, 95, 20, // Skip to: 5812
/* 597 */     MCD::OPC_Decode, 44, 9, // Opcode: ANDri
/* 600 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 629
/* 604 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 607 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 621
/* 611 */     MCD::OPC_CheckField, 5, 8, 0, 75, 20, // Skip to: 5812
/* 617 */     MCD::OPC_Decode, 232, 2, 8, // Opcode: ORrr
/* 621 */     MCD::OPC_FilterValue, 1, 67, 20, // Skip to: 5812
/* 625 */     MCD::OPC_Decode, 231, 2, 9, // Opcode: ORri
/* 629 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 658
/* 633 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 636 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 650
/* 640 */     MCD::OPC_CheckField, 5, 8, 0, 46, 20, // Skip to: 5812
/* 646 */     MCD::OPC_Decode, 234, 3, 8, // Opcode: XORrr
/* 650 */     MCD::OPC_FilterValue, 1, 38, 20, // Skip to: 5812
/* 654 */     MCD::OPC_Decode, 233, 3, 9, // Opcode: XORri
/* 658 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 687
/* 662 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 665 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 679
/* 669 */     MCD::OPC_CheckField, 5, 8, 0, 17, 20, // Skip to: 5812
/* 675 */     MCD::OPC_Decode, 175, 3, 8, // Opcode: SUBrr
/* 679 */     MCD::OPC_FilterValue, 1, 9, 20, // Skip to: 5812
/* 683 */     MCD::OPC_Decode, 174, 3, 9, // Opcode: SUBri
/* 687 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 714
/* 691 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 694 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 707
/* 698 */     MCD::OPC_CheckField, 5, 8, 0, 244, 19, // Skip to: 5812
/* 704 */     MCD::OPC_Decode, 40, 8, // Opcode: ANDNrr
/* 707 */     MCD::OPC_FilterValue, 1, 237, 19, // Skip to: 5812
/* 711 */     MCD::OPC_Decode, 39, 9, // Opcode: ANDNri
/* 714 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 743
/* 718 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 721 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 735
/* 725 */     MCD::OPC_CheckField, 5, 8, 0, 217, 19, // Skip to: 5812
/* 731 */     MCD::OPC_Decode, 227, 2, 8, // Opcode: ORNrr
/* 735 */     MCD::OPC_FilterValue, 1, 209, 19, // Skip to: 5812
/* 739 */     MCD::OPC_Decode, 226, 2, 9, // Opcode: ORNri
/* 743 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 772
/* 747 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 750 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 764
/* 754 */     MCD::OPC_CheckField, 5, 8, 0, 188, 19, // Skip to: 5812
/* 760 */     MCD::OPC_Decode, 228, 3, 8, // Opcode: XNORrr
/* 764 */     MCD::OPC_FilterValue, 1, 180, 19, // Skip to: 5812
/* 768 */     MCD::OPC_Decode, 227, 3, 9, // Opcode: XNORri
/* 772 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 799
/* 776 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 779 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 792
/* 783 */     MCD::OPC_CheckField, 5, 8, 0, 159, 19, // Skip to: 5812
/* 789 */     MCD::OPC_Decode, 22, 8, // Opcode: ADDCrr
/* 792 */     MCD::OPC_FilterValue, 1, 152, 19, // Skip to: 5812
/* 796 */     MCD::OPC_Decode, 21, 9, // Opcode: ADDCri
/* 799 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 828
/* 803 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 806 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 820
/* 810 */     MCD::OPC_CheckField, 5, 8, 0, 132, 19, // Skip to: 5812
/* 816 */     MCD::OPC_Decode, 220, 2, 10, // Opcode: MULXrr
/* 820 */     MCD::OPC_FilterValue, 1, 124, 19, // Skip to: 5812
/* 824 */     MCD::OPC_Decode, 219, 2, 11, // Opcode: MULXri
/* 828 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 857
/* 832 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 835 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 849
/* 839 */     MCD::OPC_CheckField, 5, 8, 0, 103, 19, // Skip to: 5812
/* 845 */     MCD::OPC_Decode, 207, 3, 8, // Opcode: UMULrr
/* 849 */     MCD::OPC_FilterValue, 1, 95, 19, // Skip to: 5812
/* 853 */     MCD::OPC_Decode, 206, 3, 9, // Opcode: UMULri
/* 857 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 886
/* 861 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 864 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 878
/* 868 */     MCD::OPC_CheckField, 5, 8, 0, 74, 19, // Skip to: 5812
/* 874 */     MCD::OPC_Decode, 142, 3, 8, // Opcode: SMULrr
/* 878 */     MCD::OPC_FilterValue, 1, 66, 19, // Skip to: 5812
/* 882 */     MCD::OPC_Decode, 141, 3, 9, // Opcode: SMULri
/* 886 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 915
/* 890 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 893 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 907
/* 897 */     MCD::OPC_CheckField, 5, 8, 0, 45, 19, // Skip to: 5812
/* 903 */     MCD::OPC_Decode, 169, 3, 8, // Opcode: SUBCrr
/* 907 */     MCD::OPC_FilterValue, 1, 37, 19, // Skip to: 5812
/* 911 */     MCD::OPC_Decode, 168, 3, 9, // Opcode: SUBCri
/* 915 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 944
/* 919 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 922 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 5, 8, 0, 16, 19, // Skip to: 5812
/* 932 */     MCD::OPC_Decode, 200, 3, 10, // Opcode: UDIVXrr
/* 936 */     MCD::OPC_FilterValue, 1, 8, 19, // Skip to: 5812
/* 940 */     MCD::OPC_Decode, 199, 3, 11, // Opcode: UDIVXri
/* 944 */     MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 973
/* 948 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 951 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 965
/* 955 */     MCD::OPC_CheckField, 5, 8, 0, 243, 18, // Skip to: 5812
/* 961 */     MCD::OPC_Decode, 202, 3, 8, // Opcode: UDIVrr
/* 965 */     MCD::OPC_FilterValue, 1, 235, 18, // Skip to: 5812
/* 969 */     MCD::OPC_Decode, 201, 3, 9, // Opcode: UDIVri
/* 973 */     MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1002
/* 977 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 980 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 5, 8, 0, 214, 18, // Skip to: 5812
/* 990 */     MCD::OPC_Decode, 250, 2, 8, // Opcode: SDIVrr
/* 994 */     MCD::OPC_FilterValue, 1, 206, 18, // Skip to: 5812
/* 998 */     MCD::OPC_Decode, 249, 2, 9, // Opcode: SDIVri
/* 1002 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1029
/* 1006 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1009 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1022
/* 1013 */    MCD::OPC_CheckField, 5, 8, 0, 185, 18, // Skip to: 5812
/* 1019 */    MCD::OPC_Decode, 20, 8, // Opcode: ADDCCrr
/* 1022 */    MCD::OPC_FilterValue, 1, 178, 18, // Skip to: 5812
/* 1026 */    MCD::OPC_Decode, 19, 9, // Opcode: ADDCCri
/* 1029 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1056
/* 1033 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1036 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1049
/* 1040 */    MCD::OPC_CheckField, 5, 8, 0, 158, 18, // Skip to: 5812
/* 1046 */    MCD::OPC_Decode, 36, 8, // Opcode: ANDCCrr
/* 1049 */    MCD::OPC_FilterValue, 1, 151, 18, // Skip to: 5812
/* 1053 */    MCD::OPC_Decode, 35, 9, // Opcode: ANDCCri
/* 1056 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1085
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1077
/* 1067 */    MCD::OPC_CheckField, 5, 8, 0, 131, 18, // Skip to: 5812
/* 1073 */    MCD::OPC_Decode, 223, 2, 8, // Opcode: ORCCrr
/* 1077 */    MCD::OPC_FilterValue, 1, 123, 18, // Skip to: 5812
/* 1081 */    MCD::OPC_Decode, 222, 2, 9, // Opcode: ORCCri
/* 1085 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1114
/* 1089 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1092 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1106
/* 1096 */    MCD::OPC_CheckField, 5, 8, 0, 102, 18, // Skip to: 5812
/* 1102 */    MCD::OPC_Decode, 230, 3, 8, // Opcode: XORCCrr
/* 1106 */    MCD::OPC_FilterValue, 1, 94, 18, // Skip to: 5812
/* 1110 */    MCD::OPC_Decode, 229, 3, 9, // Opcode: XORCCri
/* 1114 */    MCD::OPC_FilterValue, 20, 44, 0, // Skip to: 1162
/* 1118 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1121 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 1145
/* 1125 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1128 */    MCD::OPC_FilterValue, 0, 72, 18, // Skip to: 5812
/* 1132 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1141
/* 1138 */    MCD::OPC_Decode, 122, 12, // Opcode: CMPrr
/* 1141 */    MCD::OPC_Decode, 167, 3, 8, // Opcode: SUBCCrr
/* 1145 */    MCD::OPC_FilterValue, 1, 55, 18, // Skip to: 5812
/* 1149 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1158
/* 1155 */    MCD::OPC_Decode, 121, 13, // Opcode: CMPri
/* 1158 */    MCD::OPC_Decode, 166, 3, 9, // Opcode: SUBCCri
/* 1162 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1189
/* 1166 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1169 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1182
/* 1173 */    MCD::OPC_CheckField, 5, 8, 0, 25, 18, // Skip to: 5812
/* 1179 */    MCD::OPC_Decode, 38, 8, // Opcode: ANDNCCrr
/* 1182 */    MCD::OPC_FilterValue, 1, 18, 18, // Skip to: 5812
/* 1186 */    MCD::OPC_Decode, 37, 9, // Opcode: ANDNCCri
/* 1189 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1218
/* 1193 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1196 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1210
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 254, 17, // Skip to: 5812
/* 1206 */    MCD::OPC_Decode, 225, 2, 8, // Opcode: ORNCCrr
/* 1210 */    MCD::OPC_FilterValue, 1, 246, 17, // Skip to: 5812
/* 1214 */    MCD::OPC_Decode, 224, 2, 9, // Opcode: ORNCCri
/* 1218 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1247
/* 1222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1225 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1239
/* 1229 */    MCD::OPC_CheckField, 5, 8, 0, 225, 17, // Skip to: 5812
/* 1235 */    MCD::OPC_Decode, 225, 3, 8, // Opcode: XNORCCrr
/* 1239 */    MCD::OPC_FilterValue, 1, 217, 17, // Skip to: 5812
/* 1243 */    MCD::OPC_Decode, 224, 3, 9, // Opcode: XNORCCri
/* 1247 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1274
/* 1251 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1254 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1267
/* 1258 */    MCD::OPC_CheckField, 5, 8, 0, 196, 17, // Skip to: 5812
/* 1264 */    MCD::OPC_Decode, 24, 8, // Opcode: ADDErr
/* 1267 */    MCD::OPC_FilterValue, 1, 189, 17, // Skip to: 5812
/* 1271 */    MCD::OPC_Decode, 23, 9, // Opcode: ADDEri
/* 1274 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1303
/* 1278 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1281 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1295
/* 1285 */    MCD::OPC_CheckField, 5, 8, 0, 169, 17, // Skip to: 5812
/* 1291 */    MCD::OPC_Decode, 204, 3, 8, // Opcode: UMULCCrr
/* 1295 */    MCD::OPC_FilterValue, 1, 161, 17, // Skip to: 5812
/* 1299 */    MCD::OPC_Decode, 203, 3, 9, // Opcode: UMULCCri
/* 1303 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1332
/* 1307 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1310 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1324
/* 1314 */    MCD::OPC_CheckField, 5, 8, 0, 140, 17, // Skip to: 5812
/* 1320 */    MCD::OPC_Decode, 140, 3, 8, // Opcode: SMULCCrr
/* 1324 */    MCD::OPC_FilterValue, 1, 132, 17, // Skip to: 5812
/* 1328 */    MCD::OPC_Decode, 139, 3, 9, // Opcode: SMULCCri
/* 1332 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1361
/* 1336 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1339 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1353
/* 1343 */    MCD::OPC_CheckField, 5, 8, 0, 111, 17, // Skip to: 5812
/* 1349 */    MCD::OPC_Decode, 171, 3, 8, // Opcode: SUBErr
/* 1353 */    MCD::OPC_FilterValue, 1, 103, 17, // Skip to: 5812
/* 1357 */    MCD::OPC_Decode, 170, 3, 9, // Opcode: SUBEri
/* 1361 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1390
/* 1365 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1382
/* 1372 */    MCD::OPC_CheckField, 5, 8, 0, 82, 17, // Skip to: 5812
/* 1378 */    MCD::OPC_Decode, 198, 3, 8, // Opcode: UDIVCCrr
/* 1382 */    MCD::OPC_FilterValue, 1, 74, 17, // Skip to: 5812
/* 1386 */    MCD::OPC_Decode, 197, 3, 9, // Opcode: UDIVCCri
/* 1390 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1419
/* 1394 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1397 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1411
/* 1401 */    MCD::OPC_CheckField, 5, 8, 0, 53, 17, // Skip to: 5812
/* 1407 */    MCD::OPC_Decode, 246, 2, 8, // Opcode: SDIVCCrr
/* 1411 */    MCD::OPC_FilterValue, 1, 45, 17, // Skip to: 5812
/* 1415 */    MCD::OPC_Decode, 245, 2, 9, // Opcode: SDIVCCri
/* 1419 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1448
/* 1423 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1426 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1440
/* 1430 */    MCD::OPC_CheckField, 5, 8, 0, 24, 17, // Skip to: 5812
/* 1436 */    MCD::OPC_Decode, 183, 3, 8, // Opcode: TADDCCrr
/* 1440 */    MCD::OPC_FilterValue, 1, 16, 17, // Skip to: 5812
/* 1444 */    MCD::OPC_Decode, 182, 3, 9, // Opcode: TADDCCri
/* 1448 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1477
/* 1452 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1455 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1469
/* 1459 */    MCD::OPC_CheckField, 5, 8, 0, 251, 16, // Skip to: 5812
/* 1465 */    MCD::OPC_Decode, 194, 3, 8, // Opcode: TSUBCCrr
/* 1469 */    MCD::OPC_FilterValue, 1, 243, 16, // Skip to: 5812
/* 1473 */    MCD::OPC_Decode, 193, 3, 9, // Opcode: TSUBCCri
/* 1477 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1506
/* 1481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1484 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1498
/* 1488 */    MCD::OPC_CheckField, 5, 8, 0, 222, 16, // Skip to: 5812
/* 1494 */    MCD::OPC_Decode, 181, 3, 8, // Opcode: TADDCCTVrr
/* 1498 */    MCD::OPC_FilterValue, 1, 214, 16, // Skip to: 5812
/* 1502 */    MCD::OPC_Decode, 180, 3, 9, // Opcode: TADDCCTVri
/* 1506 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1535
/* 1510 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1513 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1527
/* 1517 */    MCD::OPC_CheckField, 5, 8, 0, 193, 16, // Skip to: 5812
/* 1523 */    MCD::OPC_Decode, 192, 3, 8, // Opcode: TSUBCCTVrr
/* 1527 */    MCD::OPC_FilterValue, 1, 185, 16, // Skip to: 5812
/* 1531 */    MCD::OPC_Decode, 191, 3, 9, // Opcode: TSUBCCTVri
/* 1535 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1589
/* 1539 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1542 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1571
/* 1546 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1549 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1563
/* 1553 */    MCD::OPC_CheckField, 5, 7, 0, 157, 16, // Skip to: 5812
/* 1559 */    MCD::OPC_Decode, 138, 3, 8, // Opcode: SLLrr
/* 1563 */    MCD::OPC_FilterValue, 1, 149, 16, // Skip to: 5812
/* 1567 */    MCD::OPC_Decode, 136, 3, 14, // Opcode: SLLXrr
/* 1571 */    MCD::OPC_FilterValue, 1, 141, 16, // Skip to: 5812
/* 1575 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1585
/* 1581 */    MCD::OPC_Decode, 135, 3, 15, // Opcode: SLLXri
/* 1585 */    MCD::OPC_Decode, 137, 3, 9, // Opcode: SLLri
/* 1589 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1643
/* 1593 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1596 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1625
/* 1600 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1603 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1617
/* 1607 */    MCD::OPC_CheckField, 5, 7, 0, 103, 16, // Skip to: 5812
/* 1613 */    MCD::OPC_Decode, 150, 3, 8, // Opcode: SRLrr
/* 1617 */    MCD::OPC_FilterValue, 1, 95, 16, // Skip to: 5812
/* 1621 */    MCD::OPC_Decode, 148, 3, 14, // Opcode: SRLXrr
/* 1625 */    MCD::OPC_FilterValue, 1, 87, 16, // Skip to: 5812
/* 1629 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1639
/* 1635 */    MCD::OPC_Decode, 147, 3, 15, // Opcode: SRLXri
/* 1639 */    MCD::OPC_Decode, 149, 3, 9, // Opcode: SRLri
/* 1643 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1697
/* 1647 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1650 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1679
/* 1654 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1657 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1671
/* 1661 */    MCD::OPC_CheckField, 5, 7, 0, 49, 16, // Skip to: 5812
/* 1667 */    MCD::OPC_Decode, 146, 3, 8, // Opcode: SRArr
/* 1671 */    MCD::OPC_FilterValue, 1, 41, 16, // Skip to: 5812
/* 1675 */    MCD::OPC_Decode, 144, 3, 14, // Opcode: SRAXrr
/* 1679 */    MCD::OPC_FilterValue, 1, 33, 16, // Skip to: 5812
/* 1683 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1693
/* 1689 */    MCD::OPC_Decode, 143, 3, 15, // Opcode: SRAXri
/* 1693 */    MCD::OPC_Decode, 145, 3, 9, // Opcode: SRAri
/* 1697 */    MCD::OPC_FilterValue, 40, 55, 0, // Skip to: 1756
/* 1701 */    MCD::OPC_ExtractField, 13, 6,  // Inst{18-13} ...
/* 1704 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1718
/* 1708 */    MCD::OPC_CheckField, 0, 13, 0, 2, 16, // Skip to: 5812
/* 1714 */    MCD::OPC_Decode, 236, 2, 4, // Opcode: RDY
/* 1718 */    MCD::OPC_FilterValue, 30, 16, 0, // Skip to: 1738
/* 1722 */    MCD::OPC_CheckField, 25, 5, 0, 244, 15, // Skip to: 5812
/* 1728 */    MCD::OPC_CheckField, 0, 13, 0, 238, 15, // Skip to: 5812
/* 1734 */    MCD::OPC_Decode, 151, 3, 4, // Opcode: STBAR
/* 1738 */    MCD::OPC_FilterValue, 31, 230, 15, // Skip to: 5812
/* 1742 */    MCD::OPC_CheckPredicate, 0, 226, 15, // Skip to: 5812
/* 1746 */    MCD::OPC_CheckField, 25, 5, 0, 220, 15, // Skip to: 5812
/* 1752 */    MCD::OPC_Decode, 195, 2, 16, // Opcode: MEMBARi
/* 1756 */    MCD::OPC_FilterValue, 43, 20, 0, // Skip to: 1780
/* 1760 */    MCD::OPC_CheckPredicate, 0, 208, 15, // Skip to: 5812
/* 1764 */    MCD::OPC_CheckField, 25, 5, 0, 202, 15, // Skip to: 5812
/* 1770 */    MCD::OPC_CheckField, 0, 19, 0, 196, 15, // Skip to: 5812
/* 1776 */    MCD::OPC_Decode, 180, 1, 4, // Opcode: FLUSHW
/* 1780 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 1907
/* 1784 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1787 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1847
/* 1791 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1794 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1820
/* 1798 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1812
/* 1802 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1812
/* 1808 */    MCD::OPC_Decode, 198, 2, 17, // Opcode: MOVFCCrr
/* 1812 */    MCD::OPC_CheckPredicate, 0, 156, 15, // Skip to: 5812
/* 1816 */    MCD::OPC_Decode, 219, 3, 18, // Opcode: V9MOVFCCrr
/* 1820 */    MCD::OPC_FilterValue, 1, 148, 15, // Skip to: 5812
/* 1824 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1827 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1839
/* 1831 */    MCD::OPC_CheckPredicate, 0, 137, 15, // Skip to: 5812
/* 1835 */    MCD::OPC_Decode, 200, 2, 17, // Opcode: MOVICCrr
/* 1839 */    MCD::OPC_FilterValue, 2, 129, 15, // Skip to: 5812
/* 1843 */    MCD::OPC_Decode, 217, 2, 17, // Opcode: MOVXCCrr
/* 1847 */    MCD::OPC_FilterValue, 1, 121, 15, // Skip to: 5812
/* 1851 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1854 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1880
/* 1858 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1872
/* 1862 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1872
/* 1868 */    MCD::OPC_Decode, 197, 2, 19, // Opcode: MOVFCCri
/* 1872 */    MCD::OPC_CheckPredicate, 0, 96, 15, // Skip to: 5812
/* 1876 */    MCD::OPC_Decode, 218, 3, 20, // Opcode: V9MOVFCCri
/* 1880 */    MCD::OPC_FilterValue, 1, 88, 15, // Skip to: 5812
/* 1884 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1887 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1899
/* 1891 */    MCD::OPC_CheckPredicate, 0, 77, 15, // Skip to: 5812
/* 1895 */    MCD::OPC_Decode, 199, 2, 19, // Opcode: MOVICCri
/* 1899 */    MCD::OPC_FilterValue, 2, 69, 15, // Skip to: 5812
/* 1903 */    MCD::OPC_Decode, 216, 2, 19, // Opcode: MOVXCCri
/* 1907 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 1936
/* 1911 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1914 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1928
/* 1918 */    MCD::OPC_CheckField, 5, 8, 0, 48, 15, // Skip to: 5812
/* 1924 */    MCD::OPC_Decode, 248, 2, 10, // Opcode: SDIVXrr
/* 1928 */    MCD::OPC_FilterValue, 1, 40, 15, // Skip to: 5812
/* 1932 */    MCD::OPC_Decode, 247, 2, 11, // Opcode: SDIVXri
/* 1936 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 1954
/* 1940 */    MCD::OPC_CheckPredicate, 0, 28, 15, // Skip to: 5812
/* 1944 */    MCD::OPC_CheckField, 5, 14, 0, 22, 15, // Skip to: 5812
/* 1950 */    MCD::OPC_Decode, 235, 2, 4, // Opcode: POPCrr
/* 1954 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2093
/* 1958 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 1961 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 1975
/* 1965 */    MCD::OPC_CheckField, 5, 5, 0, 1, 15, // Skip to: 5812
/* 1971 */    MCD::OPC_Decode, 212, 2, 14, // Opcode: MOVRRZrr
/* 1975 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 1989
/* 1979 */    MCD::OPC_CheckField, 5, 5, 0, 243, 14, // Skip to: 5812
/* 1985 */    MCD::OPC_Decode, 206, 2, 14, // Opcode: MOVRLEZrr
/* 1989 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2003
/* 1993 */    MCD::OPC_CheckField, 5, 5, 0, 229, 14, // Skip to: 5812
/* 1999 */    MCD::OPC_Decode, 208, 2, 14, // Opcode: MOVRLZrr
/* 2003 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2017
/* 2007 */    MCD::OPC_CheckField, 5, 5, 0, 215, 14, // Skip to: 5812
/* 2013 */    MCD::OPC_Decode, 210, 2, 14, // Opcode: MOVRNZrr
/* 2017 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2031
/* 2021 */    MCD::OPC_CheckField, 5, 5, 0, 201, 14, // Skip to: 5812
/* 2027 */    MCD::OPC_Decode, 204, 2, 14, // Opcode: MOVRGZrr
/* 2031 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2045
/* 2035 */    MCD::OPC_CheckField, 5, 5, 0, 187, 14, // Skip to: 5812
/* 2041 */    MCD::OPC_Decode, 202, 2, 14, // Opcode: MOVRGEZrr
/* 2045 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2053
/* 2049 */    MCD::OPC_Decode, 211, 2, 21, // Opcode: MOVRRZri
/* 2053 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2061
/* 2057 */    MCD::OPC_Decode, 205, 2, 21, // Opcode: MOVRLEZri
/* 2061 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2069
/* 2065 */    MCD::OPC_Decode, 207, 2, 21, // Opcode: MOVRLZri
/* 2069 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2077
/* 2073 */    MCD::OPC_Decode, 209, 2, 21, // Opcode: MOVRNZri
/* 2077 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2085
/* 2081 */    MCD::OPC_Decode, 203, 2, 21, // Opcode: MOVRGZri
/* 2085 */    MCD::OPC_FilterValue, 15, 139, 14, // Skip to: 5812
/* 2089 */    MCD::OPC_Decode, 201, 2, 21, // Opcode: MOVRGEZri
/* 2093 */    MCD::OPC_FilterValue, 48, 37, 0, // Skip to: 2134
/* 2097 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2100 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2120
/* 2104 */    MCD::OPC_CheckField, 25, 5, 0, 118, 14, // Skip to: 5812
/* 2110 */    MCD::OPC_CheckField, 5, 8, 0, 112, 14, // Skip to: 5812
/* 2116 */    MCD::OPC_Decode, 221, 3, 12, // Opcode: WRYrr
/* 2120 */    MCD::OPC_FilterValue, 1, 104, 14, // Skip to: 5812
/* 2124 */    MCD::OPC_CheckField, 25, 5, 0, 98, 14, // Skip to: 5812
/* 2130 */    MCD::OPC_Decode, 220, 3, 13, // Opcode: WRYri
/* 2134 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 2847
/* 2138 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2141 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2155
/* 2145 */    MCD::OPC_CheckField, 14, 5, 0, 77, 14, // Skip to: 5812
/* 2151 */    MCD::OPC_Decode, 208, 1, 22, // Opcode: FMOVS
/* 2155 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2173
/* 2159 */    MCD::OPC_CheckPredicate, 0, 65, 14, // Skip to: 5812
/* 2163 */    MCD::OPC_CheckField, 14, 5, 0, 59, 14, // Skip to: 5812
/* 2169 */    MCD::OPC_Decode, 182, 1, 23, // Opcode: FMOVD
/* 2173 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2191
/* 2177 */    MCD::OPC_CheckPredicate, 0, 47, 14, // Skip to: 5812
/* 2181 */    MCD::OPC_CheckField, 14, 5, 0, 41, 14, // Skip to: 5812
/* 2187 */    MCD::OPC_Decode, 186, 1, 24, // Opcode: FMOVQ
/* 2191 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2205
/* 2195 */    MCD::OPC_CheckField, 14, 5, 0, 27, 14, // Skip to: 5812
/* 2201 */    MCD::OPC_Decode, 228, 1, 22, // Opcode: FNEGS
/* 2205 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2223
/* 2209 */    MCD::OPC_CheckPredicate, 0, 15, 14, // Skip to: 5812
/* 2213 */    MCD::OPC_CheckField, 14, 5, 0, 9, 14, // Skip to: 5812
/* 2219 */    MCD::OPC_Decode, 226, 1, 23, // Opcode: FNEGD
/* 2223 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2241
/* 2227 */    MCD::OPC_CheckPredicate, 0, 253, 13, // Skip to: 5812
/* 2231 */    MCD::OPC_CheckField, 14, 5, 0, 247, 13, // Skip to: 5812
/* 2237 */    MCD::OPC_Decode, 227, 1, 24, // Opcode: FNEGQ
/* 2241 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2255
/* 2245 */    MCD::OPC_CheckField, 14, 5, 0, 233, 13, // Skip to: 5812
/* 2251 */    MCD::OPC_Decode, 137, 1, 22, // Opcode: FABSS
/* 2255 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2273
/* 2259 */    MCD::OPC_CheckPredicate, 0, 221, 13, // Skip to: 5812
/* 2263 */    MCD::OPC_CheckField, 14, 5, 0, 215, 13, // Skip to: 5812
/* 2269 */    MCD::OPC_Decode, 135, 1, 23, // Opcode: FABSD
/* 2273 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2291
/* 2277 */    MCD::OPC_CheckPredicate, 0, 203, 13, // Skip to: 5812
/* 2281 */    MCD::OPC_CheckField, 14, 5, 0, 197, 13, // Skip to: 5812
/* 2287 */    MCD::OPC_Decode, 136, 1, 24, // Opcode: FABSQ
/* 2291 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2305
/* 2295 */    MCD::OPC_CheckField, 14, 5, 0, 183, 13, // Skip to: 5812
/* 2301 */    MCD::OPC_Decode, 144, 2, 22, // Opcode: FSQRTS
/* 2305 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2319
/* 2309 */    MCD::OPC_CheckField, 14, 5, 0, 169, 13, // Skip to: 5812
/* 2315 */    MCD::OPC_Decode, 142, 2, 23, // Opcode: FSQRTD
/* 2319 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2333
/* 2323 */    MCD::OPC_CheckField, 14, 5, 0, 155, 13, // Skip to: 5812
/* 2329 */    MCD::OPC_Decode, 143, 2, 24, // Opcode: FSQRTQ
/* 2333 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2341
/* 2337 */    MCD::OPC_Decode, 140, 1, 25, // Opcode: FADDS
/* 2341 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2349
/* 2345 */    MCD::OPC_Decode, 138, 1, 26, // Opcode: FADDD
/* 2349 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2357
/* 2353 */    MCD::OPC_Decode, 139, 1, 27, // Opcode: FADDQ
/* 2357 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2365
/* 2361 */    MCD::OPC_Decode, 159, 2, 25, // Opcode: FSUBS
/* 2365 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2373
/* 2369 */    MCD::OPC_Decode, 157, 2, 26, // Opcode: FSUBD
/* 2373 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2381
/* 2377 */    MCD::OPC_Decode, 158, 2, 27, // Opcode: FSUBQ
/* 2381 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2389
/* 2385 */    MCD::OPC_Decode, 221, 1, 25, // Opcode: FMULS
/* 2389 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2397
/* 2393 */    MCD::OPC_Decode, 217, 1, 26, // Opcode: FMULD
/* 2397 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2405
/* 2401 */    MCD::OPC_Decode, 220, 1, 27, // Opcode: FMULQ
/* 2405 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2413
/* 2409 */    MCD::OPC_Decode, 164, 1, 25, // Opcode: FDIVS
/* 2413 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2421
/* 2417 */    MCD::OPC_Decode, 162, 1, 26, // Opcode: FDIVD
/* 2421 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2429
/* 2425 */    MCD::OPC_Decode, 163, 1, 27, // Opcode: FDIVQ
/* 2429 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2441
/* 2433 */    MCD::OPC_CheckPredicate, 1, 47, 13, // Skip to: 5812
/* 2437 */    MCD::OPC_Decode, 223, 1, 26, // Opcode: FNADDS
/* 2441 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2453
/* 2445 */    MCD::OPC_CheckPredicate, 1, 35, 13, // Skip to: 5812
/* 2449 */    MCD::OPC_Decode, 222, 1, 26, // Opcode: FNADDD
/* 2453 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2465
/* 2457 */    MCD::OPC_CheckPredicate, 1, 23, 13, // Skip to: 5812
/* 2461 */    MCD::OPC_Decode, 232, 1, 26, // Opcode: FNMULS
/* 2465 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2477
/* 2469 */    MCD::OPC_CheckPredicate, 1, 11, 13, // Skip to: 5812
/* 2473 */    MCD::OPC_Decode, 231, 1, 26, // Opcode: FNMULD
/* 2477 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2489
/* 2481 */    MCD::OPC_CheckPredicate, 1, 255, 12, // Skip to: 5812
/* 2485 */    MCD::OPC_Decode, 172, 1, 26, // Opcode: FHADDS
/* 2489 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2501
/* 2493 */    MCD::OPC_CheckPredicate, 1, 243, 12, // Skip to: 5812
/* 2497 */    MCD::OPC_Decode, 171, 1, 26, // Opcode: FHADDD
/* 2501 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2513
/* 2505 */    MCD::OPC_CheckPredicate, 1, 231, 12, // Skip to: 5812
/* 2509 */    MCD::OPC_Decode, 174, 1, 26, // Opcode: FHSUBS
/* 2513 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2525
/* 2517 */    MCD::OPC_CheckPredicate, 1, 219, 12, // Skip to: 5812
/* 2521 */    MCD::OPC_Decode, 173, 1, 26, // Opcode: FHSUBD
/* 2525 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2533
/* 2529 */    MCD::OPC_Decode, 141, 2, 28, // Opcode: FSMULD
/* 2533 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2541
/* 2537 */    MCD::OPC_Decode, 165, 1, 29, // Opcode: FDMULQ
/* 2541 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2553
/* 2545 */    MCD::OPC_CheckPredicate, 1, 191, 12, // Skip to: 5812
/* 2549 */    MCD::OPC_Decode, 230, 1, 26, // Opcode: FNHADDS
/* 2553 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2565
/* 2557 */    MCD::OPC_CheckPredicate, 1, 179, 12, // Skip to: 5812
/* 2561 */    MCD::OPC_Decode, 229, 1, 26, // Opcode: FNHADDD
/* 2565 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2577
/* 2569 */    MCD::OPC_CheckPredicate, 1, 167, 12, // Skip to: 5812
/* 2573 */    MCD::OPC_Decode, 239, 1, 26, // Opcode: FNSMULD
/* 2577 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2592
/* 2582 */    MCD::OPC_CheckField, 14, 5, 0, 152, 12, // Skip to: 5812
/* 2588 */    MCD::OPC_Decode, 156, 2, 30, // Opcode: FSTOX
/* 2592 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2607
/* 2597 */    MCD::OPC_CheckField, 14, 5, 0, 137, 12, // Skip to: 5812
/* 2603 */    MCD::OPC_Decode, 169, 1, 23, // Opcode: FDTOX
/* 2607 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2622
/* 2612 */    MCD::OPC_CheckField, 14, 5, 0, 122, 12, // Skip to: 5812
/* 2618 */    MCD::OPC_Decode, 136, 2, 31, // Opcode: FQTOX
/* 2622 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2637
/* 2627 */    MCD::OPC_CheckField, 14, 5, 0, 107, 12, // Skip to: 5812
/* 2633 */    MCD::OPC_Decode, 166, 2, 32, // Opcode: FXTOS
/* 2637 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2652
/* 2642 */    MCD::OPC_CheckField, 14, 5, 0, 92, 12, // Skip to: 5812
/* 2648 */    MCD::OPC_Decode, 164, 2, 23, // Opcode: FXTOD
/* 2652 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2667
/* 2657 */    MCD::OPC_CheckField, 14, 5, 0, 77, 12, // Skip to: 5812
/* 2663 */    MCD::OPC_Decode, 165, 2, 33, // Opcode: FXTOQ
/* 2667 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2682
/* 2672 */    MCD::OPC_CheckField, 14, 5, 0, 62, 12, // Skip to: 5812
/* 2678 */    MCD::OPC_Decode, 177, 1, 22, // Opcode: FITOS
/* 2682 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2697
/* 2687 */    MCD::OPC_CheckField, 14, 5, 0, 47, 12, // Skip to: 5812
/* 2693 */    MCD::OPC_Decode, 168, 1, 32, // Opcode: FDTOS
/* 2697 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2712
/* 2702 */    MCD::OPC_CheckField, 14, 5, 0, 32, 12, // Skip to: 5812
/* 2708 */    MCD::OPC_Decode, 135, 2, 34, // Opcode: FQTOS
/* 2712 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2727
/* 2717 */    MCD::OPC_CheckField, 14, 5, 0, 17, 12, // Skip to: 5812
/* 2723 */    MCD::OPC_Decode, 175, 1, 30, // Opcode: FITOD
/* 2727 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 2742
/* 2732 */    MCD::OPC_CheckField, 14, 5, 0, 2, 12, // Skip to: 5812
/* 2738 */    MCD::OPC_Decode, 153, 2, 30, // Opcode: FSTOD
/* 2742 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 2757
/* 2747 */    MCD::OPC_CheckField, 14, 5, 0, 243, 11, // Skip to: 5812
/* 2753 */    MCD::OPC_Decode, 133, 2, 31, // Opcode: FQTOD
/* 2757 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 2772
/* 2762 */    MCD::OPC_CheckField, 14, 5, 0, 228, 11, // Skip to: 5812
/* 2768 */    MCD::OPC_Decode, 176, 1, 35, // Opcode: FITOQ
/* 2772 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 2787
/* 2777 */    MCD::OPC_CheckField, 14, 5, 0, 213, 11, // Skip to: 5812
/* 2783 */    MCD::OPC_Decode, 155, 2, 35, // Opcode: FSTOQ
/* 2787 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 2802
/* 2792 */    MCD::OPC_CheckField, 14, 5, 0, 198, 11, // Skip to: 5812
/* 2798 */    MCD::OPC_Decode, 167, 1, 33, // Opcode: FDTOQ
/* 2802 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 2817
/* 2807 */    MCD::OPC_CheckField, 14, 5, 0, 183, 11, // Skip to: 5812
/* 2813 */    MCD::OPC_Decode, 154, 2, 22, // Opcode: FSTOI
/* 2817 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 2832
/* 2822 */    MCD::OPC_CheckField, 14, 5, 0, 168, 11, // Skip to: 5812
/* 2828 */    MCD::OPC_Decode, 166, 1, 32, // Opcode: FDTOI
/* 2832 */    MCD::OPC_FilterValue, 211, 1, 159, 11, // Skip to: 5812
/* 2837 */    MCD::OPC_CheckField, 14, 5, 0, 153, 11, // Skip to: 5812
/* 2843 */    MCD::OPC_Decode, 134, 2, 34, // Opcode: FQTOI
/* 2847 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3433
/* 2851 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 2854 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 2933
/* 2858 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2861 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2894
/* 2865 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2868 */    MCD::OPC_FilterValue, 0, 124, 11, // Skip to: 5812
/* 2872 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2886
/* 2876 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2886
/* 2882 */    MCD::OPC_Decode, 209, 1, 36, // Opcode: FMOVS_FCC
/* 2886 */    MCD::OPC_CheckPredicate, 0, 106, 11, // Skip to: 5812
/* 2890 */    MCD::OPC_Decode, 217, 3, 37, // Opcode: V9FMOVS_FCC
/* 2894 */    MCD::OPC_FilterValue, 1, 98, 11, // Skip to: 5812
/* 2898 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2901 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2919
/* 2905 */    MCD::OPC_CheckPredicate, 0, 87, 11, // Skip to: 5812
/* 2909 */    MCD::OPC_CheckField, 18, 1, 0, 81, 11, // Skip to: 5812
/* 2915 */    MCD::OPC_Decode, 210, 1, 36, // Opcode: FMOVS_ICC
/* 2919 */    MCD::OPC_FilterValue, 2, 73, 11, // Skip to: 5812
/* 2923 */    MCD::OPC_CheckField, 18, 1, 0, 67, 11, // Skip to: 5812
/* 2929 */    MCD::OPC_Decode, 211, 1, 36, // Opcode: FMOVS_XCC
/* 2933 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3012
/* 2937 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2940 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2973
/* 2944 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2947 */    MCD::OPC_FilterValue, 0, 45, 11, // Skip to: 5812
/* 2951 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2965
/* 2955 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2965
/* 2961 */    MCD::OPC_Decode, 183, 1, 38, // Opcode: FMOVD_FCC
/* 2965 */    MCD::OPC_CheckPredicate, 0, 27, 11, // Skip to: 5812
/* 2969 */    MCD::OPC_Decode, 215, 3, 39, // Opcode: V9FMOVD_FCC
/* 2973 */    MCD::OPC_FilterValue, 1, 19, 11, // Skip to: 5812
/* 2977 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2980 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2998
/* 2984 */    MCD::OPC_CheckPredicate, 0, 8, 11, // Skip to: 5812
/* 2988 */    MCD::OPC_CheckField, 18, 1, 0, 2, 11, // Skip to: 5812
/* 2994 */    MCD::OPC_Decode, 184, 1, 38, // Opcode: FMOVD_ICC
/* 2998 */    MCD::OPC_FilterValue, 2, 250, 10, // Skip to: 5812
/* 3002 */    MCD::OPC_CheckField, 18, 1, 0, 244, 10, // Skip to: 5812
/* 3008 */    MCD::OPC_Decode, 185, 1, 38, // Opcode: FMOVD_XCC
/* 3012 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3091
/* 3016 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3019 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3052
/* 3023 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3026 */    MCD::OPC_FilterValue, 0, 222, 10, // Skip to: 5812
/* 3030 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3044
/* 3034 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3044
/* 3040 */    MCD::OPC_Decode, 187, 1, 40, // Opcode: FMOVQ_FCC
/* 3044 */    MCD::OPC_CheckPredicate, 0, 204, 10, // Skip to: 5812
/* 3048 */    MCD::OPC_Decode, 216, 3, 41, // Opcode: V9FMOVQ_FCC
/* 3052 */    MCD::OPC_FilterValue, 1, 196, 10, // Skip to: 5812
/* 3056 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3059 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3077
/* 3063 */    MCD::OPC_CheckPredicate, 0, 185, 10, // Skip to: 5812
/* 3067 */    MCD::OPC_CheckField, 18, 1, 0, 179, 10, // Skip to: 5812
/* 3073 */    MCD::OPC_Decode, 188, 1, 40, // Opcode: FMOVQ_ICC
/* 3077 */    MCD::OPC_FilterValue, 2, 171, 10, // Skip to: 5812
/* 3081 */    MCD::OPC_CheckField, 18, 1, 0, 165, 10, // Skip to: 5812
/* 3087 */    MCD::OPC_Decode, 189, 1, 40, // Opcode: FMOVQ_XCC
/* 3091 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3122
/* 3095 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3098 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3110
/* 3102 */    MCD::OPC_CheckPredicate, 0, 146, 10, // Skip to: 5812
/* 3106 */    MCD::OPC_Decode, 198, 1, 42, // Opcode: FMOVRLEZS
/* 3110 */    MCD::OPC_FilterValue, 3, 138, 10, // Skip to: 5812
/* 3114 */    MCD::OPC_CheckPredicate, 0, 134, 10, // Skip to: 5812
/* 3118 */    MCD::OPC_Decode, 195, 1, 42, // Opcode: FMOVRGZS
/* 3122 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3153
/* 3126 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3129 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3141
/* 3133 */    MCD::OPC_CheckPredicate, 0, 115, 10, // Skip to: 5812
/* 3137 */    MCD::OPC_Decode, 196, 1, 42, // Opcode: FMOVRLEZD
/* 3141 */    MCD::OPC_FilterValue, 3, 107, 10, // Skip to: 5812
/* 3145 */    MCD::OPC_CheckPredicate, 0, 103, 10, // Skip to: 5812
/* 3149 */    MCD::OPC_Decode, 193, 1, 42, // Opcode: FMOVRGZD
/* 3153 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3184
/* 3157 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3160 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3172
/* 3164 */    MCD::OPC_CheckPredicate, 0, 84, 10, // Skip to: 5812
/* 3168 */    MCD::OPC_Decode, 197, 1, 42, // Opcode: FMOVRLEZQ
/* 3172 */    MCD::OPC_FilterValue, 3, 76, 10, // Skip to: 5812
/* 3176 */    MCD::OPC_CheckPredicate, 0, 72, 10, // Skip to: 5812
/* 3180 */    MCD::OPC_Decode, 194, 1, 42, // Opcode: FMOVRGZQ
/* 3184 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3198
/* 3188 */    MCD::OPC_CheckField, 11, 3, 1, 58, 10, // Skip to: 5812
/* 3194 */    MCD::OPC_Decode, 214, 3, 43, // Opcode: V9FCMPS
/* 3198 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3212
/* 3202 */    MCD::OPC_CheckField, 11, 3, 1, 44, 10, // Skip to: 5812
/* 3208 */    MCD::OPC_Decode, 209, 3, 44, // Opcode: V9FCMPD
/* 3212 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3226
/* 3216 */    MCD::OPC_CheckField, 11, 3, 1, 30, 10, // Skip to: 5812
/* 3222 */    MCD::OPC_Decode, 213, 3, 45, // Opcode: V9FCMPQ
/* 3226 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3240
/* 3230 */    MCD::OPC_CheckField, 11, 3, 1, 16, 10, // Skip to: 5812
/* 3236 */    MCD::OPC_Decode, 212, 3, 43, // Opcode: V9FCMPES
/* 3240 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3254
/* 3244 */    MCD::OPC_CheckField, 11, 3, 1, 2, 10, // Skip to: 5812
/* 3250 */    MCD::OPC_Decode, 210, 3, 44, // Opcode: V9FCMPED
/* 3254 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3268
/* 3258 */    MCD::OPC_CheckField, 11, 3, 1, 244, 9, // Skip to: 5812
/* 3264 */    MCD::OPC_Decode, 211, 3, 45, // Opcode: V9FCMPEQ
/* 3268 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3323
/* 3272 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3275 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3287
/* 3279 */    MCD::OPC_CheckPredicate, 0, 225, 9, // Skip to: 5812
/* 3283 */    MCD::OPC_Decode, 207, 1, 42, // Opcode: FMOVRZS
/* 3287 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3299
/* 3291 */    MCD::OPC_CheckPredicate, 0, 213, 9, // Skip to: 5812
/* 3295 */    MCD::OPC_Decode, 201, 1, 42, // Opcode: FMOVRLZS
/* 3299 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3311
/* 3303 */    MCD::OPC_CheckPredicate, 0, 201, 9, // Skip to: 5812
/* 3307 */    MCD::OPC_Decode, 204, 1, 42, // Opcode: FMOVRNZS
/* 3311 */    MCD::OPC_FilterValue, 3, 193, 9, // Skip to: 5812
/* 3315 */    MCD::OPC_CheckPredicate, 0, 189, 9, // Skip to: 5812
/* 3319 */    MCD::OPC_Decode, 192, 1, 42, // Opcode: FMOVRGEZS
/* 3323 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3378
/* 3327 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3330 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3342
/* 3334 */    MCD::OPC_CheckPredicate, 0, 170, 9, // Skip to: 5812
/* 3338 */    MCD::OPC_Decode, 205, 1, 42, // Opcode: FMOVRZD
/* 3342 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3354
/* 3346 */    MCD::OPC_CheckPredicate, 0, 158, 9, // Skip to: 5812
/* 3350 */    MCD::OPC_Decode, 199, 1, 42, // Opcode: FMOVRLZD
/* 3354 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3366
/* 3358 */    MCD::OPC_CheckPredicate, 0, 146, 9, // Skip to: 5812
/* 3362 */    MCD::OPC_Decode, 202, 1, 42, // Opcode: FMOVRNZD
/* 3366 */    MCD::OPC_FilterValue, 3, 138, 9, // Skip to: 5812
/* 3370 */    MCD::OPC_CheckPredicate, 0, 134, 9, // Skip to: 5812
/* 3374 */    MCD::OPC_Decode, 190, 1, 42, // Opcode: FMOVRGEZD
/* 3378 */    MCD::OPC_FilterValue, 39, 126, 9, // Skip to: 5812
/* 3382 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3385 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3397
/* 3389 */    MCD::OPC_CheckPredicate, 0, 115, 9, // Skip to: 5812
/* 3393 */    MCD::OPC_Decode, 206, 1, 42, // Opcode: FMOVRZQ
/* 3397 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3409
/* 3401 */    MCD::OPC_CheckPredicate, 0, 103, 9, // Skip to: 5812
/* 3405 */    MCD::OPC_Decode, 200, 1, 42, // Opcode: FMOVRLZQ
/* 3409 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3421
/* 3413 */    MCD::OPC_CheckPredicate, 0, 91, 9, // Skip to: 5812
/* 3417 */    MCD::OPC_Decode, 203, 1, 42, // Opcode: FMOVRNZQ
/* 3421 */    MCD::OPC_FilterValue, 3, 83, 9, // Skip to: 5812
/* 3425 */    MCD::OPC_CheckPredicate, 0, 79, 9, // Skip to: 5812
/* 3429 */    MCD::OPC_Decode, 191, 1, 42, // Opcode: FMOVRGEZQ
/* 3433 */    MCD::OPC_FilterValue, 54, 15, 6, // Skip to: 4988
/* 3437 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3440 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3452
/* 3444 */    MCD::OPC_CheckPredicate, 2, 60, 9, // Skip to: 5812
/* 3448 */    MCD::OPC_Decode, 131, 1, 10, // Opcode: EDGE8
/* 3452 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3464
/* 3456 */    MCD::OPC_CheckPredicate, 3, 48, 9, // Skip to: 5812
/* 3460 */    MCD::OPC_Decode, 134, 1, 10, // Opcode: EDGE8N
/* 3464 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3476
/* 3468 */    MCD::OPC_CheckPredicate, 2, 36, 9, // Skip to: 5812
/* 3472 */    MCD::OPC_Decode, 132, 1, 10, // Opcode: EDGE8L
/* 3476 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3488
/* 3480 */    MCD::OPC_CheckPredicate, 3, 24, 9, // Skip to: 5812
/* 3484 */    MCD::OPC_Decode, 133, 1, 10, // Opcode: EDGE8LN
/* 3488 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3499
/* 3492 */    MCD::OPC_CheckPredicate, 2, 12, 9, // Skip to: 5812
/* 3496 */    MCD::OPC_Decode, 123, 10, // Opcode: EDGE16
/* 3499 */    MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 3510
/* 3503 */    MCD::OPC_CheckPredicate, 3, 1, 9, // Skip to: 5812
/* 3507 */    MCD::OPC_Decode, 126, 10, // Opcode: EDGE16N
/* 3510 */    MCD::OPC_FilterValue, 6, 7, 0, // Skip to: 3521
/* 3514 */    MCD::OPC_CheckPredicate, 2, 246, 8, // Skip to: 5812
/* 3518 */    MCD::OPC_Decode, 124, 10, // Opcode: EDGE16L
/* 3521 */    MCD::OPC_FilterValue, 7, 7, 0, // Skip to: 3532
/* 3525 */    MCD::OPC_CheckPredicate, 3, 235, 8, // Skip to: 5812
/* 3529 */    MCD::OPC_Decode, 125, 10, // Opcode: EDGE16LN
/* 3532 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3543
/* 3536 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 5812
/* 3540 */    MCD::OPC_Decode, 127, 10, // Opcode: EDGE32
/* 3543 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3555
/* 3547 */    MCD::OPC_CheckPredicate, 3, 213, 8, // Skip to: 5812
/* 3551 */    MCD::OPC_Decode, 130, 1, 10, // Opcode: EDGE32N
/* 3555 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3567
/* 3559 */    MCD::OPC_CheckPredicate, 2, 201, 8, // Skip to: 5812
/* 3563 */    MCD::OPC_Decode, 128, 1, 10, // Opcode: EDGE32L
/* 3567 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3579
/* 3571 */    MCD::OPC_CheckPredicate, 3, 189, 8, // Skip to: 5812
/* 3575 */    MCD::OPC_Decode, 129, 1, 10, // Opcode: EDGE32LN
/* 3579 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3590
/* 3583 */    MCD::OPC_CheckPredicate, 2, 177, 8, // Skip to: 5812
/* 3587 */    MCD::OPC_Decode, 48, 10, // Opcode: ARRAY8
/* 3590 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3601
/* 3594 */    MCD::OPC_CheckPredicate, 1, 166, 8, // Skip to: 5812
/* 3598 */    MCD::OPC_Decode, 25, 10, // Opcode: ADDXC
/* 3601 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3612
/* 3605 */    MCD::OPC_CheckPredicate, 2, 155, 8, // Skip to: 5812
/* 3609 */    MCD::OPC_Decode, 46, 10, // Opcode: ARRAY16
/* 3612 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3623
/* 3616 */    MCD::OPC_CheckPredicate, 1, 144, 8, // Skip to: 5812
/* 3620 */    MCD::OPC_Decode, 26, 10, // Opcode: ADDXCCC
/* 3623 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3634
/* 3627 */    MCD::OPC_CheckPredicate, 2, 133, 8, // Skip to: 5812
/* 3631 */    MCD::OPC_Decode, 47, 10, // Opcode: ARRAY32
/* 3634 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3646
/* 3638 */    MCD::OPC_CheckPredicate, 1, 122, 8, // Skip to: 5812
/* 3642 */    MCD::OPC_Decode, 205, 3, 10, // Opcode: UMULXHI
/* 3646 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3664
/* 3650 */    MCD::OPC_CheckPredicate, 1, 110, 8, // Skip to: 5812
/* 3654 */    MCD::OPC_CheckField, 14, 5, 0, 104, 8, // Skip to: 5812
/* 3660 */    MCD::OPC_Decode, 194, 2, 46, // Opcode: LZCNT
/* 3664 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3675
/* 3668 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 5812
/* 3672 */    MCD::OPC_Decode, 33, 10, // Opcode: ALIGNADDR
/* 3675 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 3686
/* 3679 */    MCD::OPC_CheckPredicate, 3, 81, 8, // Skip to: 5812
/* 3683 */    MCD::OPC_Decode, 75, 10, // Opcode: BMASK
/* 3686 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3697
/* 3690 */    MCD::OPC_CheckPredicate, 2, 70, 8, // Skip to: 5812
/* 3694 */    MCD::OPC_Decode, 34, 10, // Opcode: ALIGNADDRL
/* 3697 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 3720
/* 3701 */    MCD::OPC_CheckPredicate, 1, 59, 8, // Skip to: 5812
/* 3705 */    MCD::OPC_CheckField, 25, 5, 0, 53, 8, // Skip to: 5812
/* 3711 */    MCD::OPC_CheckField, 14, 5, 0, 47, 8, // Skip to: 5812
/* 3717 */    MCD::OPC_Decode, 120, 47, // Opcode: CMASK8
/* 3720 */    MCD::OPC_FilterValue, 28, 7, 0, // Skip to: 3731
/* 3724 */    MCD::OPC_CheckPredicate, 3, 36, 8, // Skip to: 5812
/* 3728 */    MCD::OPC_Decode, 112, 26, // Opcode: BSHUFFLE
/* 3731 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 3754
/* 3735 */    MCD::OPC_CheckPredicate, 1, 25, 8, // Skip to: 5812
/* 3739 */    MCD::OPC_CheckField, 25, 5, 0, 19, 8, // Skip to: 5812
/* 3745 */    MCD::OPC_CheckField, 14, 5, 0, 13, 8, // Skip to: 5812
/* 3751 */    MCD::OPC_Decode, 118, 47, // Opcode: CMASK16
/* 3754 */    MCD::OPC_FilterValue, 31, 19, 0, // Skip to: 3777
/* 3758 */    MCD::OPC_CheckPredicate, 1, 2, 8, // Skip to: 5812
/* 3762 */    MCD::OPC_CheckField, 25, 5, 0, 252, 7, // Skip to: 5812
/* 3768 */    MCD::OPC_CheckField, 14, 5, 0, 246, 7, // Skip to: 5812
/* 3774 */    MCD::OPC_Decode, 119, 47, // Opcode: CMASK32
/* 3777 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3789
/* 3781 */    MCD::OPC_CheckPredicate, 2, 235, 7, // Skip to: 5812
/* 3785 */    MCD::OPC_Decode, 156, 1, 48, // Opcode: FCMPLE16
/* 3789 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 3801
/* 3793 */    MCD::OPC_CheckPredicate, 1, 223, 7, // Skip to: 5812
/* 3797 */    MCD::OPC_Decode, 139, 2, 26, // Opcode: FSLL16
/* 3801 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 3813
/* 3805 */    MCD::OPC_CheckPredicate, 2, 211, 7, // Skip to: 5812
/* 3809 */    MCD::OPC_Decode, 158, 1, 48, // Opcode: FCMPNE16
/* 3813 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 3825
/* 3817 */    MCD::OPC_CheckPredicate, 1, 199, 7, // Skip to: 5812
/* 3821 */    MCD::OPC_Decode, 151, 2, 26, // Opcode: FSRL16
/* 3825 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 3837
/* 3829 */    MCD::OPC_CheckPredicate, 2, 187, 7, // Skip to: 5812
/* 3833 */    MCD::OPC_Decode, 157, 1, 48, // Opcode: FCMPLE32
/* 3837 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 3849
/* 3841 */    MCD::OPC_CheckPredicate, 1, 175, 7, // Skip to: 5812
/* 3845 */    MCD::OPC_Decode, 140, 2, 26, // Opcode: FSLL32
/* 3849 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 3861
/* 3853 */    MCD::OPC_CheckPredicate, 2, 163, 7, // Skip to: 5812
/* 3857 */    MCD::OPC_Decode, 159, 1, 48, // Opcode: FCMPNE32
/* 3861 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 3873
/* 3865 */    MCD::OPC_CheckPredicate, 1, 151, 7, // Skip to: 5812
/* 3869 */    MCD::OPC_Decode, 152, 2, 26, // Opcode: FSRL32
/* 3873 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 3885
/* 3877 */    MCD::OPC_CheckPredicate, 2, 139, 7, // Skip to: 5812
/* 3881 */    MCD::OPC_Decode, 154, 1, 48, // Opcode: FCMPGT16
/* 3885 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 3897
/* 3889 */    MCD::OPC_CheckPredicate, 1, 127, 7, // Skip to: 5812
/* 3893 */    MCD::OPC_Decode, 137, 2, 26, // Opcode: FSLAS16
/* 3897 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 3909
/* 3901 */    MCD::OPC_CheckPredicate, 2, 115, 7, // Skip to: 5812
/* 3905 */    MCD::OPC_Decode, 152, 1, 48, // Opcode: FCMPEQ16
/* 3909 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 3921
/* 3913 */    MCD::OPC_CheckPredicate, 1, 103, 7, // Skip to: 5812
/* 3917 */    MCD::OPC_Decode, 145, 2, 26, // Opcode: FSRA16
/* 3921 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 3933
/* 3925 */    MCD::OPC_CheckPredicate, 2, 91, 7, // Skip to: 5812
/* 3929 */    MCD::OPC_Decode, 155, 1, 48, // Opcode: FCMPGT32
/* 3933 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 3945
/* 3937 */    MCD::OPC_CheckPredicate, 1, 79, 7, // Skip to: 5812
/* 3941 */    MCD::OPC_Decode, 138, 2, 26, // Opcode: FSLAS32
/* 3945 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 3957
/* 3949 */    MCD::OPC_CheckPredicate, 2, 67, 7, // Skip to: 5812
/* 3953 */    MCD::OPC_Decode, 153, 1, 48, // Opcode: FCMPEQ32
/* 3957 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 3969
/* 3961 */    MCD::OPC_CheckPredicate, 1, 55, 7, // Skip to: 5812
/* 3965 */    MCD::OPC_Decode, 146, 2, 26, // Opcode: FSRA32
/* 3969 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 3981
/* 3973 */    MCD::OPC_CheckPredicate, 2, 43, 7, // Skip to: 5812
/* 3977 */    MCD::OPC_Decode, 214, 1, 26, // Opcode: FMUL8X16
/* 3981 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 3993
/* 3985 */    MCD::OPC_CheckPredicate, 2, 31, 7, // Skip to: 5812
/* 3989 */    MCD::OPC_Decode, 216, 1, 26, // Opcode: FMUL8X16AU
/* 3993 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4005
/* 3997 */    MCD::OPC_CheckPredicate, 2, 19, 7, // Skip to: 5812
/* 4001 */    MCD::OPC_Decode, 215, 1, 26, // Opcode: FMUL8X16AL
/* 4005 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4017
/* 4009 */    MCD::OPC_CheckPredicate, 2, 7, 7, // Skip to: 5812
/* 4013 */    MCD::OPC_Decode, 212, 1, 26, // Opcode: FMUL8SUX16
/* 4017 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4029
/* 4021 */    MCD::OPC_CheckPredicate, 2, 251, 6, // Skip to: 5812
/* 4025 */    MCD::OPC_Decode, 213, 1, 26, // Opcode: FMUL8ULX16
/* 4029 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4041
/* 4033 */    MCD::OPC_CheckPredicate, 2, 239, 6, // Skip to: 5812
/* 4037 */    MCD::OPC_Decode, 218, 1, 26, // Opcode: FMULD8SUX16
/* 4041 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4053
/* 4045 */    MCD::OPC_CheckPredicate, 2, 227, 6, // Skip to: 5812
/* 4049 */    MCD::OPC_Decode, 219, 1, 26, // Opcode: FMULD8ULX16
/* 4053 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4065
/* 4057 */    MCD::OPC_CheckPredicate, 2, 215, 6, // Skip to: 5812
/* 4061 */    MCD::OPC_Decode, 249, 1, 26, // Opcode: FPACK32
/* 4065 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4083
/* 4069 */    MCD::OPC_CheckPredicate, 2, 203, 6, // Skip to: 5812
/* 4073 */    MCD::OPC_CheckField, 14, 5, 0, 197, 6, // Skip to: 5812
/* 4079 */    MCD::OPC_Decode, 248, 1, 23, // Opcode: FPACK16
/* 4083 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4101
/* 4087 */    MCD::OPC_CheckPredicate, 2, 185, 6, // Skip to: 5812
/* 4091 */    MCD::OPC_CheckField, 14, 5, 0, 179, 6, // Skip to: 5812
/* 4097 */    MCD::OPC_Decode, 250, 1, 23, // Opcode: FPACKFIX
/* 4101 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4113
/* 4105 */    MCD::OPC_CheckPredicate, 2, 167, 6, // Skip to: 5812
/* 4109 */    MCD::OPC_Decode, 233, 2, 26, // Opcode: PDIST
/* 4113 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4125
/* 4117 */    MCD::OPC_CheckPredicate, 1, 155, 6, // Skip to: 5812
/* 4121 */    MCD::OPC_Decode, 234, 2, 26, // Opcode: PDISTN
/* 4125 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4137
/* 4129 */    MCD::OPC_CheckPredicate, 1, 143, 6, // Skip to: 5812
/* 4133 */    MCD::OPC_Decode, 181, 1, 26, // Opcode: FMEAN16
/* 4137 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4149
/* 4141 */    MCD::OPC_CheckPredicate, 1, 131, 6, // Skip to: 5812
/* 4145 */    MCD::OPC_Decode, 255, 1, 26, // Opcode: FPADD64
/* 4149 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4161
/* 4153 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 5812
/* 4157 */    MCD::OPC_Decode, 150, 1, 26, // Opcode: FCHKSM16
/* 4161 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4173
/* 4165 */    MCD::OPC_CheckPredicate, 2, 107, 6, // Skip to: 5812
/* 4169 */    MCD::OPC_Decode, 141, 1, 26, // Opcode: FALIGNADATA
/* 4173 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4185
/* 4177 */    MCD::OPC_CheckPredicate, 2, 95, 6, // Skip to: 5812
/* 4181 */    MCD::OPC_Decode, 128, 2, 26, // Opcode: FPMERGE
/* 4185 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4203
/* 4189 */    MCD::OPC_CheckPredicate, 2, 83, 6, // Skip to: 5812
/* 4193 */    MCD::OPC_CheckField, 14, 5, 0, 77, 6, // Skip to: 5812
/* 4199 */    MCD::OPC_Decode, 170, 1, 23, // Opcode: FEXPAND
/* 4203 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4215
/* 4207 */    MCD::OPC_CheckPredicate, 2, 65, 6, // Skip to: 5812
/* 4211 */    MCD::OPC_Decode, 251, 1, 26, // Opcode: FPADD16
/* 4215 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4227
/* 4219 */    MCD::OPC_CheckPredicate, 2, 53, 6, // Skip to: 5812
/* 4223 */    MCD::OPC_Decode, 252, 1, 26, // Opcode: FPADD16S
/* 4227 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4239
/* 4231 */    MCD::OPC_CheckPredicate, 2, 41, 6, // Skip to: 5812
/* 4235 */    MCD::OPC_Decode, 253, 1, 26, // Opcode: FPADD32
/* 4239 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4251
/* 4243 */    MCD::OPC_CheckPredicate, 2, 29, 6, // Skip to: 5812
/* 4247 */    MCD::OPC_Decode, 254, 1, 26, // Opcode: FPADD32S
/* 4251 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4263
/* 4255 */    MCD::OPC_CheckPredicate, 2, 17, 6, // Skip to: 5812
/* 4259 */    MCD::OPC_Decode, 129, 2, 26, // Opcode: FPSUB16
/* 4263 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4275
/* 4267 */    MCD::OPC_CheckPredicate, 2, 5, 6, // Skip to: 5812
/* 4271 */    MCD::OPC_Decode, 130, 2, 26, // Opcode: FPSUB16S
/* 4275 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4287
/* 4279 */    MCD::OPC_CheckPredicate, 2, 249, 5, // Skip to: 5812
/* 4283 */    MCD::OPC_Decode, 131, 2, 26, // Opcode: FPSUB32
/* 4287 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4299
/* 4291 */    MCD::OPC_CheckPredicate, 2, 237, 5, // Skip to: 5812
/* 4295 */    MCD::OPC_Decode, 132, 2, 26, // Opcode: FPSUB32S
/* 4299 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4323
/* 4303 */    MCD::OPC_CheckPredicate, 2, 225, 5, // Skip to: 5812
/* 4307 */    MCD::OPC_CheckField, 14, 5, 0, 219, 5, // Skip to: 5812
/* 4313 */    MCD::OPC_CheckField, 0, 5, 0, 213, 5, // Skip to: 5812
/* 4319 */    MCD::OPC_Decode, 167, 2, 49, // Opcode: FZERO
/* 4323 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4347
/* 4327 */    MCD::OPC_CheckPredicate, 2, 201, 5, // Skip to: 5812
/* 4331 */    MCD::OPC_CheckField, 14, 5, 0, 195, 5, // Skip to: 5812
/* 4337 */    MCD::OPC_CheckField, 0, 5, 0, 189, 5, // Skip to: 5812
/* 4343 */    MCD::OPC_Decode, 168, 2, 50, // Opcode: FZEROS
/* 4347 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4359
/* 4351 */    MCD::OPC_CheckPredicate, 2, 177, 5, // Skip to: 5812
/* 4355 */    MCD::OPC_Decode, 233, 1, 26, // Opcode: FNOR
/* 4359 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4371
/* 4363 */    MCD::OPC_CheckPredicate, 2, 165, 5, // Skip to: 5812
/* 4367 */    MCD::OPC_Decode, 234, 1, 25, // Opcode: FNORS
/* 4371 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4383
/* 4375 */    MCD::OPC_CheckPredicate, 2, 153, 5, // Skip to: 5812
/* 4379 */    MCD::OPC_Decode, 145, 1, 26, // Opcode: FANDNOT2
/* 4383 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4395
/* 4387 */    MCD::OPC_CheckPredicate, 2, 141, 5, // Skip to: 5812
/* 4391 */    MCD::OPC_Decode, 146, 1, 25, // Opcode: FANDNOT2S
/* 4395 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4413
/* 4399 */    MCD::OPC_CheckPredicate, 2, 129, 5, // Skip to: 5812
/* 4403 */    MCD::OPC_CheckField, 14, 5, 0, 123, 5, // Skip to: 5812
/* 4409 */    MCD::OPC_Decode, 237, 1, 23, // Opcode: FNOT2
/* 4413 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4431
/* 4417 */    MCD::OPC_CheckPredicate, 2, 111, 5, // Skip to: 5812
/* 4421 */    MCD::OPC_CheckField, 14, 5, 0, 105, 5, // Skip to: 5812
/* 4427 */    MCD::OPC_Decode, 238, 1, 22, // Opcode: FNOT2S
/* 4431 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4443
/* 4435 */    MCD::OPC_CheckPredicate, 2, 93, 5, // Skip to: 5812
/* 4439 */    MCD::OPC_Decode, 143, 1, 26, // Opcode: FANDNOT1
/* 4443 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4455
/* 4447 */    MCD::OPC_CheckPredicate, 2, 81, 5, // Skip to: 5812
/* 4451 */    MCD::OPC_Decode, 144, 1, 25, // Opcode: FANDNOT1S
/* 4455 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4473
/* 4459 */    MCD::OPC_CheckPredicate, 2, 69, 5, // Skip to: 5812
/* 4463 */    MCD::OPC_CheckField, 0, 5, 0, 63, 5, // Skip to: 5812
/* 4469 */    MCD::OPC_Decode, 235, 1, 51, // Opcode: FNOT1
/* 4473 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4491
/* 4477 */    MCD::OPC_CheckPredicate, 2, 51, 5, // Skip to: 5812
/* 4481 */    MCD::OPC_CheckField, 0, 5, 0, 45, 5, // Skip to: 5812
/* 4487 */    MCD::OPC_Decode, 236, 1, 52, // Opcode: FNOT1S
/* 4491 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4503
/* 4495 */    MCD::OPC_CheckPredicate, 2, 33, 5, // Skip to: 5812
/* 4499 */    MCD::OPC_Decode, 162, 2, 26, // Opcode: FXOR
/* 4503 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4515
/* 4507 */    MCD::OPC_CheckPredicate, 2, 21, 5, // Skip to: 5812
/* 4511 */    MCD::OPC_Decode, 163, 2, 25, // Opcode: FXORS
/* 4515 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4527
/* 4519 */    MCD::OPC_CheckPredicate, 2, 9, 5, // Skip to: 5812
/* 4523 */    MCD::OPC_Decode, 224, 1, 26, // Opcode: FNAND
/* 4527 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4539
/* 4531 */    MCD::OPC_CheckPredicate, 2, 253, 4, // Skip to: 5812
/* 4535 */    MCD::OPC_Decode, 225, 1, 25, // Opcode: FNANDS
/* 4539 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4551
/* 4543 */    MCD::OPC_CheckPredicate, 2, 241, 4, // Skip to: 5812
/* 4547 */    MCD::OPC_Decode, 142, 1, 26, // Opcode: FAND
/* 4551 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4563
/* 4555 */    MCD::OPC_CheckPredicate, 2, 229, 4, // Skip to: 5812
/* 4559 */    MCD::OPC_Decode, 147, 1, 25, // Opcode: FANDS
/* 4563 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4575
/* 4567 */    MCD::OPC_CheckPredicate, 2, 217, 4, // Skip to: 5812
/* 4571 */    MCD::OPC_Decode, 160, 2, 26, // Opcode: FXNOR
/* 4575 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4587
/* 4579 */    MCD::OPC_CheckPredicate, 2, 205, 4, // Skip to: 5812
/* 4583 */    MCD::OPC_Decode, 161, 2, 25, // Opcode: FXNORS
/* 4587 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4605
/* 4591 */    MCD::OPC_CheckPredicate, 2, 193, 4, // Skip to: 5812
/* 4595 */    MCD::OPC_CheckField, 0, 5, 0, 187, 4, // Skip to: 5812
/* 4601 */    MCD::OPC_Decode, 147, 2, 51, // Opcode: FSRC1
/* 4605 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4623
/* 4609 */    MCD::OPC_CheckPredicate, 2, 175, 4, // Skip to: 5812
/* 4613 */    MCD::OPC_CheckField, 0, 5, 0, 169, 4, // Skip to: 5812
/* 4619 */    MCD::OPC_Decode, 148, 2, 52, // Opcode: FSRC1S
/* 4623 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4635
/* 4627 */    MCD::OPC_CheckPredicate, 2, 157, 4, // Skip to: 5812
/* 4631 */    MCD::OPC_Decode, 245, 1, 26, // Opcode: FORNOT2
/* 4635 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4647
/* 4639 */    MCD::OPC_CheckPredicate, 2, 145, 4, // Skip to: 5812
/* 4643 */    MCD::OPC_Decode, 246, 1, 25, // Opcode: FORNOT2S
/* 4647 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4665
/* 4651 */    MCD::OPC_CheckPredicate, 2, 133, 4, // Skip to: 5812
/* 4655 */    MCD::OPC_CheckField, 14, 5, 0, 127, 4, // Skip to: 5812
/* 4661 */    MCD::OPC_Decode, 149, 2, 23, // Opcode: FSRC2
/* 4665 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4683
/* 4669 */    MCD::OPC_CheckPredicate, 2, 115, 4, // Skip to: 5812
/* 4673 */    MCD::OPC_CheckField, 14, 5, 0, 109, 4, // Skip to: 5812
/* 4679 */    MCD::OPC_Decode, 150, 2, 22, // Opcode: FSRC2S
/* 4683 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4695
/* 4687 */    MCD::OPC_CheckPredicate, 2, 97, 4, // Skip to: 5812
/* 4691 */    MCD::OPC_Decode, 243, 1, 26, // Opcode: FORNOT1
/* 4695 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4707
/* 4699 */    MCD::OPC_CheckPredicate, 2, 85, 4, // Skip to: 5812
/* 4703 */    MCD::OPC_Decode, 244, 1, 25, // Opcode: FORNOT1S
/* 4707 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 4719
/* 4711 */    MCD::OPC_CheckPredicate, 2, 73, 4, // Skip to: 5812
/* 4715 */    MCD::OPC_Decode, 242, 1, 26, // Opcode: FOR
/* 4719 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 4731
/* 4723 */    MCD::OPC_CheckPredicate, 2, 61, 4, // Skip to: 5812
/* 4727 */    MCD::OPC_Decode, 247, 1, 25, // Opcode: FORS
/* 4731 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 4755
/* 4735 */    MCD::OPC_CheckPredicate, 2, 49, 4, // Skip to: 5812
/* 4739 */    MCD::OPC_CheckField, 14, 5, 0, 43, 4, // Skip to: 5812
/* 4745 */    MCD::OPC_CheckField, 0, 5, 0, 37, 4, // Skip to: 5812
/* 4751 */    MCD::OPC_Decode, 240, 1, 49, // Opcode: FONE
/* 4755 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 4779
/* 4759 */    MCD::OPC_CheckPredicate, 2, 25, 4, // Skip to: 5812
/* 4763 */    MCD::OPC_CheckField, 14, 5, 0, 19, 4, // Skip to: 5812
/* 4769 */    MCD::OPC_CheckField, 0, 5, 0, 13, 4, // Skip to: 5812
/* 4775 */    MCD::OPC_Decode, 241, 1, 50, // Opcode: FONES
/* 4779 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 4810
/* 4784 */    MCD::OPC_CheckPredicate, 2, 0, 4, // Skip to: 5812
/* 4788 */    MCD::OPC_CheckField, 25, 5, 0, 250, 3, // Skip to: 5812
/* 4794 */    MCD::OPC_CheckField, 14, 5, 0, 244, 3, // Skip to: 5812
/* 4800 */    MCD::OPC_CheckField, 0, 5, 0, 238, 3, // Skip to: 5812
/* 4806 */    MCD::OPC_Decode, 133, 3, 4, // Opcode: SHUTDOWN
/* 4810 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 4841
/* 4815 */    MCD::OPC_CheckPredicate, 3, 225, 3, // Skip to: 5812
/* 4819 */    MCD::OPC_CheckField, 25, 5, 0, 219, 3, // Skip to: 5812
/* 4825 */    MCD::OPC_CheckField, 14, 5, 0, 213, 3, // Skip to: 5812
/* 4831 */    MCD::OPC_CheckField, 0, 5, 0, 207, 3, // Skip to: 5812
/* 4837 */    MCD::OPC_Decode, 134, 3, 4, // Opcode: SIAM
/* 4841 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 4860
/* 4846 */    MCD::OPC_CheckPredicate, 1, 194, 3, // Skip to: 5812
/* 4850 */    MCD::OPC_CheckField, 14, 5, 0, 188, 3, // Skip to: 5812
/* 4856 */    MCD::OPC_Decode, 196, 2, 53, // Opcode: MOVDTOX
/* 4860 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 4879
/* 4865 */    MCD::OPC_CheckPredicate, 1, 175, 3, // Skip to: 5812
/* 4869 */    MCD::OPC_CheckField, 14, 5, 0, 169, 3, // Skip to: 5812
/* 4875 */    MCD::OPC_Decode, 214, 2, 53, // Opcode: MOVSTOUW
/* 4879 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 4898
/* 4884 */    MCD::OPC_CheckPredicate, 1, 156, 3, // Skip to: 5812
/* 4888 */    MCD::OPC_CheckField, 14, 5, 0, 150, 3, // Skip to: 5812
/* 4894 */    MCD::OPC_Decode, 213, 2, 53, // Opcode: MOVSTOSW
/* 4898 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 4911
/* 4903 */    MCD::OPC_CheckPredicate, 1, 137, 3, // Skip to: 5812
/* 4907 */    MCD::OPC_Decode, 222, 3, 10, // Opcode: XMULX
/* 4911 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 4924
/* 4916 */    MCD::OPC_CheckPredicate, 1, 124, 3, // Skip to: 5812
/* 4920 */    MCD::OPC_Decode, 223, 3, 10, // Opcode: XMULXHI
/* 4924 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 4943
/* 4929 */    MCD::OPC_CheckPredicate, 1, 111, 3, // Skip to: 5812
/* 4933 */    MCD::OPC_CheckField, 14, 5, 0, 105, 3, // Skip to: 5812
/* 4939 */    MCD::OPC_Decode, 218, 2, 54, // Opcode: MOVXTOD
/* 4943 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 4962
/* 4948 */    MCD::OPC_CheckPredicate, 1, 92, 3, // Skip to: 5812
/* 4952 */    MCD::OPC_CheckField, 14, 5, 0, 86, 3, // Skip to: 5812
/* 4958 */    MCD::OPC_Decode, 215, 2, 54, // Opcode: MOVWTOS
/* 4962 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 4975
/* 4967 */    MCD::OPC_CheckPredicate, 1, 73, 3, // Skip to: 5812
/* 4971 */    MCD::OPC_Decode, 179, 1, 44, // Opcode: FLCMPS
/* 4975 */    MCD::OPC_FilterValue, 210, 2, 64, 3, // Skip to: 5812
/* 4980 */    MCD::OPC_CheckPredicate, 1, 60, 3, // Skip to: 5812
/* 4984 */    MCD::OPC_Decode, 178, 1, 44, // Opcode: FLCMPD
/* 4988 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5017
/* 4992 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4995 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5009
/* 4999 */    MCD::OPC_CheckField, 5, 8, 0, 39, 3, // Skip to: 5812
/* 5005 */    MCD::OPC_Decode, 171, 2, 55, // Opcode: JMPLrr
/* 5009 */    MCD::OPC_FilterValue, 1, 31, 3, // Skip to: 5812
/* 5013 */    MCD::OPC_Decode, 170, 2, 55, // Opcode: JMPLri
/* 5017 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5058
/* 5021 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5024 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5044
/* 5028 */    MCD::OPC_CheckField, 25, 5, 0, 10, 3, // Skip to: 5812
/* 5034 */    MCD::OPC_CheckField, 5, 8, 0, 4, 3, // Skip to: 5812
/* 5040 */    MCD::OPC_Decode, 242, 2, 56, // Opcode: RETTrr
/* 5044 */    MCD::OPC_FilterValue, 1, 252, 2, // Skip to: 5812
/* 5048 */    MCD::OPC_CheckField, 25, 5, 0, 246, 2, // Skip to: 5812
/* 5054 */    MCD::OPC_Decode, 241, 2, 56, // Opcode: RETTri
/* 5058 */    MCD::OPC_FilterValue, 58, 115, 0, // Skip to: 5177
/* 5062 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5065 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5085
/* 5069 */    MCD::OPC_CheckField, 29, 1, 0, 225, 2, // Skip to: 5812
/* 5075 */    MCD::OPC_CheckField, 5, 3, 0, 219, 2, // Skip to: 5812
/* 5081 */    MCD::OPC_Decode, 185, 3, 57, // Opcode: TICCrr
/* 5085 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5105
/* 5089 */    MCD::OPC_CheckField, 29, 1, 0, 205, 2, // Skip to: 5812
/* 5095 */    MCD::OPC_CheckField, 5, 3, 0, 199, 2, // Skip to: 5812
/* 5101 */    MCD::OPC_Decode, 196, 3, 57, // Opcode: TXCCrr
/* 5105 */    MCD::OPC_FilterValue, 32, 54, 0, // Skip to: 5163
/* 5109 */    MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 5112 */    MCD::OPC_FilterValue, 0, 184, 2, // Skip to: 5812
/* 5116 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5119 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5139
/* 5123 */    MCD::OPC_CheckField, 25, 4, 0, 30, 0, // Skip to: 5159
/* 5129 */    MCD::OPC_CheckField, 14, 5, 1, 24, 0, // Skip to: 5159
/* 5135 */    MCD::OPC_Decode, 178, 3, 4, // Opcode: TA3
/* 5139 */    MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 5159
/* 5143 */    MCD::OPC_CheckField, 25, 4, 8, 10, 0, // Skip to: 5159
/* 5149 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 5159
/* 5155 */    MCD::OPC_Decode, 179, 3, 4, // Opcode: TA5
/* 5159 */    MCD::OPC_Decode, 184, 3, 58, // Opcode: TICCri
/* 5163 */    MCD::OPC_FilterValue, 48, 133, 2, // Skip to: 5812
/* 5167 */    MCD::OPC_CheckField, 29, 1, 0, 127, 2, // Skip to: 5812
/* 5173 */    MCD::OPC_Decode, 195, 3, 58, // Opcode: TXCCri
/* 5177 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5206
/* 5181 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5184 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5198
/* 5188 */    MCD::OPC_CheckField, 5, 8, 0, 106, 2, // Skip to: 5812
/* 5194 */    MCD::OPC_Decode, 244, 2, 8, // Opcode: SAVErr
/* 5198 */    MCD::OPC_FilterValue, 1, 98, 2, // Skip to: 5812
/* 5202 */    MCD::OPC_Decode, 243, 2, 9, // Opcode: SAVEri
/* 5206 */    MCD::OPC_FilterValue, 61, 90, 2, // Skip to: 5812
/* 5210 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5213 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5227
/* 5217 */    MCD::OPC_CheckField, 5, 8, 0, 77, 2, // Skip to: 5812
/* 5223 */    MCD::OPC_Decode, 238, 2, 8, // Opcode: RESTORErr
/* 5227 */    MCD::OPC_FilterValue, 1, 69, 2, // Skip to: 5812
/* 5231 */    MCD::OPC_Decode, 237, 2, 9, // Opcode: RESTOREri
/* 5235 */    MCD::OPC_FilterValue, 3, 61, 2, // Skip to: 5812
/* 5239 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5242 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5271
/* 5246 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5249 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5263
/* 5253 */    MCD::OPC_CheckField, 5, 8, 0, 41, 2, // Skip to: 5812
/* 5259 */    MCD::OPC_Decode, 191, 2, 59, // Opcode: LDrr
/* 5263 */    MCD::OPC_FilterValue, 1, 33, 2, // Skip to: 5812
/* 5267 */    MCD::OPC_Decode, 190, 2, 59, // Opcode: LDri
/* 5271 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5300
/* 5275 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5278 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5292
/* 5282 */    MCD::OPC_CheckField, 5, 8, 0, 12, 2, // Skip to: 5812
/* 5288 */    MCD::OPC_Decode, 185, 2, 59, // Opcode: LDUBrr
/* 5292 */    MCD::OPC_FilterValue, 1, 4, 2, // Skip to: 5812
/* 5296 */    MCD::OPC_Decode, 184, 2, 59, // Opcode: LDUBri
/* 5300 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5329
/* 5304 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5307 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5321
/* 5311 */    MCD::OPC_CheckField, 5, 8, 0, 239, 1, // Skip to: 5812
/* 5317 */    MCD::OPC_Decode, 187, 2, 59, // Opcode: LDUHrr
/* 5321 */    MCD::OPC_FilterValue, 1, 231, 1, // Skip to: 5812
/* 5325 */    MCD::OPC_Decode, 186, 2, 59, // Opcode: LDUHri
/* 5329 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5358
/* 5333 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5336 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5350
/* 5340 */    MCD::OPC_CheckField, 5, 8, 0, 210, 1, // Skip to: 5812
/* 5346 */    MCD::OPC_Decode, 165, 3, 60, // Opcode: STrr
/* 5350 */    MCD::OPC_FilterValue, 1, 202, 1, // Skip to: 5812
/* 5354 */    MCD::OPC_Decode, 164, 3, 60, // Opcode: STri
/* 5358 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5387
/* 5362 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5365 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5379
/* 5369 */    MCD::OPC_CheckField, 5, 8, 0, 181, 1, // Skip to: 5812
/* 5375 */    MCD::OPC_Decode, 153, 3, 60, // Opcode: STBrr
/* 5379 */    MCD::OPC_FilterValue, 1, 173, 1, // Skip to: 5812
/* 5383 */    MCD::OPC_Decode, 152, 3, 60, // Opcode: STBri
/* 5387 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5416
/* 5391 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5394 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5408
/* 5398 */    MCD::OPC_CheckField, 5, 8, 0, 152, 1, // Skip to: 5812
/* 5404 */    MCD::OPC_Decode, 159, 3, 60, // Opcode: STHrr
/* 5408 */    MCD::OPC_FilterValue, 1, 144, 1, // Skip to: 5812
/* 5412 */    MCD::OPC_Decode, 158, 3, 60, // Opcode: STHri
/* 5416 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5445
/* 5420 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5423 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5437
/* 5427 */    MCD::OPC_CheckField, 5, 8, 0, 123, 1, // Skip to: 5812
/* 5433 */    MCD::OPC_Decode, 183, 2, 59, // Opcode: LDSWrr
/* 5437 */    MCD::OPC_FilterValue, 1, 115, 1, // Skip to: 5812
/* 5441 */    MCD::OPC_Decode, 182, 2, 59, // Opcode: LDSWri
/* 5445 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5474
/* 5449 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5452 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5466
/* 5456 */    MCD::OPC_CheckField, 5, 8, 0, 94, 1, // Skip to: 5812
/* 5462 */    MCD::OPC_Decode, 179, 2, 59, // Opcode: LDSBrr
/* 5466 */    MCD::OPC_FilterValue, 1, 86, 1, // Skip to: 5812
/* 5470 */    MCD::OPC_Decode, 178, 2, 59, // Opcode: LDSBri
/* 5474 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5503
/* 5478 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5481 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5495
/* 5485 */    MCD::OPC_CheckField, 5, 8, 0, 65, 1, // Skip to: 5812
/* 5491 */    MCD::OPC_Decode, 181, 2, 59, // Opcode: LDSHrr
/* 5495 */    MCD::OPC_FilterValue, 1, 57, 1, // Skip to: 5812
/* 5499 */    MCD::OPC_Decode, 180, 2, 59, // Opcode: LDSHri
/* 5503 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5532
/* 5507 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5510 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5524
/* 5514 */    MCD::OPC_CheckField, 5, 8, 0, 36, 1, // Skip to: 5812
/* 5520 */    MCD::OPC_Decode, 189, 2, 59, // Opcode: LDXrr
/* 5524 */    MCD::OPC_FilterValue, 1, 28, 1, // Skip to: 5812
/* 5528 */    MCD::OPC_Decode, 188, 2, 59, // Opcode: LDXri
/* 5532 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 5561
/* 5536 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5539 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5553
/* 5543 */    MCD::OPC_CheckField, 5, 8, 0, 7, 1, // Skip to: 5812
/* 5549 */    MCD::OPC_Decode, 163, 3, 60, // Opcode: STXrr
/* 5553 */    MCD::OPC_FilterValue, 1, 255, 0, // Skip to: 5812
/* 5557 */    MCD::OPC_Decode, 162, 3, 60, // Opcode: STXri
/* 5561 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 5590
/* 5565 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5568 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5582
/* 5572 */    MCD::OPC_CheckField, 5, 8, 0, 234, 0, // Skip to: 5812
/* 5578 */    MCD::OPC_Decode, 177, 3, 61, // Opcode: SWAPrr
/* 5582 */    MCD::OPC_FilterValue, 1, 226, 0, // Skip to: 5812
/* 5586 */    MCD::OPC_Decode, 176, 3, 61, // Opcode: SWAPri
/* 5590 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 5619
/* 5594 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5597 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5611
/* 5601 */    MCD::OPC_CheckField, 5, 8, 0, 205, 0, // Skip to: 5812
/* 5607 */    MCD::OPC_Decode, 175, 2, 62, // Opcode: LDFrr
/* 5611 */    MCD::OPC_FilterValue, 1, 197, 0, // Skip to: 5812
/* 5615 */    MCD::OPC_Decode, 174, 2, 62, // Opcode: LDFri
/* 5619 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 5656
/* 5623 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5626 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 5644
/* 5630 */    MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 5812
/* 5634 */    MCD::OPC_CheckField, 5, 8, 0, 172, 0, // Skip to: 5812
/* 5640 */    MCD::OPC_Decode, 177, 2, 63, // Opcode: LDQFrr
/* 5644 */    MCD::OPC_FilterValue, 1, 164, 0, // Skip to: 5812
/* 5648 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 5812
/* 5652 */    MCD::OPC_Decode, 176, 2, 63, // Opcode: LDQFri
/* 5656 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 5685
/* 5660 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5663 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5677
/* 5667 */    MCD::OPC_CheckField, 5, 8, 0, 139, 0, // Skip to: 5812
/* 5673 */    MCD::OPC_Decode, 173, 2, 64, // Opcode: LDDFrr
/* 5677 */    MCD::OPC_FilterValue, 1, 131, 0, // Skip to: 5812
/* 5681 */    MCD::OPC_Decode, 172, 2, 64, // Opcode: LDDFri
/* 5685 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 5714
/* 5689 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5692 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5706
/* 5696 */    MCD::OPC_CheckField, 5, 8, 0, 110, 0, // Skip to: 5812
/* 5702 */    MCD::OPC_Decode, 157, 3, 65, // Opcode: STFrr
/* 5706 */    MCD::OPC_FilterValue, 1, 102, 0, // Skip to: 5812
/* 5710 */    MCD::OPC_Decode, 156, 3, 65, // Opcode: STFri
/* 5714 */    MCD::OPC_FilterValue, 38, 33, 0, // Skip to: 5751
/* 5718 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5721 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 5739
/* 5725 */    MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 5812
/* 5729 */    MCD::OPC_CheckField, 5, 8, 0, 77, 0, // Skip to: 5812
/* 5735 */    MCD::OPC_Decode, 161, 3, 66, // Opcode: STQFrr
/* 5739 */    MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 5812
/* 5743 */    MCD::OPC_CheckPredicate, 0, 65, 0, // Skip to: 5812
/* 5747 */    MCD::OPC_Decode, 160, 3, 66, // Opcode: STQFri
/* 5751 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 5780
/* 5755 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5758 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5772
/* 5762 */    MCD::OPC_CheckField, 5, 8, 0, 44, 0, // Skip to: 5812
/* 5768 */    MCD::OPC_Decode, 155, 3, 67, // Opcode: STDFrr
/* 5772 */    MCD::OPC_FilterValue, 1, 36, 0, // Skip to: 5812
/* 5776 */    MCD::OPC_Decode, 154, 3, 67, // Opcode: STDFri
/* 5780 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 5798
/* 5784 */    MCD::OPC_CheckPredicate, 0, 24, 0, // Skip to: 5812
/* 5788 */    MCD::OPC_CheckField, 5, 9, 128, 1, 17, 0, // Skip to: 5812
/* 5795 */    MCD::OPC_Decode, 117, 68, // Opcode: CASrr
/* 5798 */    MCD::OPC_FilterValue, 62, 10, 0, // Skip to: 5812
/* 5802 */    MCD::OPC_CheckField, 5, 9, 128, 1, 3, 0, // Skip to: 5812
/* 5809 */    MCD::OPC_Decode, 116, 69, // Opcode: CASXrr
/* 5812 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Sparc::FeatureV9));
  case 1:
    return ((Bits & Sparc::FeatureVIS3));
  case 2:
    return ((Bits & Sparc::FeatureVIS));
  case 3:
    return ((Bits & Sparc::FeatureVIS2));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 14) << 0);
    tmp |= (fieldFromInstruction(insn, 20, 2) << 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 59:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace

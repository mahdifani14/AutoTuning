/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    ABSQ_S_PH	= 19,
    ABSQ_S_QB	= 20,
    ABSQ_S_W	= 21,
    ADD	= 22,
    ADDIUPC	= 23,
    ADDQH_PH	= 24,
    ADDQH_R_PH	= 25,
    ADDQH_R_W	= 26,
    ADDQH_W	= 27,
    ADDQ_PH	= 28,
    ADDQ_S_PH	= 29,
    ADDQ_S_W	= 30,
    ADDSC	= 31,
    ADDS_A_B	= 32,
    ADDS_A_D	= 33,
    ADDS_A_H	= 34,
    ADDS_A_W	= 35,
    ADDS_S_B	= 36,
    ADDS_S_D	= 37,
    ADDS_S_H	= 38,
    ADDS_S_W	= 39,
    ADDS_U_B	= 40,
    ADDS_U_D	= 41,
    ADDS_U_H	= 42,
    ADDS_U_W	= 43,
    ADDUH_QB	= 44,
    ADDUH_R_QB	= 45,
    ADDU_PH	= 46,
    ADDU_QB	= 47,
    ADDU_S_PH	= 48,
    ADDU_S_QB	= 49,
    ADDVI_B	= 50,
    ADDVI_D	= 51,
    ADDVI_H	= 52,
    ADDVI_W	= 53,
    ADDV_B	= 54,
    ADDV_D	= 55,
    ADDV_H	= 56,
    ADDV_W	= 57,
    ADDWC	= 58,
    ADD_A_B	= 59,
    ADD_A_D	= 60,
    ADD_A_H	= 61,
    ADD_A_W	= 62,
    ADD_MM	= 63,
    ADDi	= 64,
    ADDi_MM	= 65,
    ADDiu	= 66,
    ADDiu_MM	= 67,
    ADDu	= 68,
    ADDu_MM	= 69,
    ADJCALLSTACKDOWN	= 70,
    ADJCALLSTACKUP	= 71,
    ALIGN	= 72,
    ALUIPC	= 73,
    AND	= 74,
    AND64	= 75,
    ANDI_B	= 76,
    AND_MM	= 77,
    AND_V	= 78,
    AND_V_D_PSEUDO	= 79,
    AND_V_H_PSEUDO	= 80,
    AND_V_W_PSEUDO	= 81,
    ANDi	= 82,
    ANDi64	= 83,
    ANDi_MM	= 84,
    APPEND	= 85,
    ASUB_S_B	= 86,
    ASUB_S_D	= 87,
    ASUB_S_H	= 88,
    ASUB_S_W	= 89,
    ASUB_U_B	= 90,
    ASUB_U_D	= 91,
    ASUB_U_H	= 92,
    ASUB_U_W	= 93,
    ATOMIC_CMP_SWAP_I16	= 94,
    ATOMIC_CMP_SWAP_I32	= 95,
    ATOMIC_CMP_SWAP_I64	= 96,
    ATOMIC_CMP_SWAP_I8	= 97,
    ATOMIC_LOAD_ADD_I16	= 98,
    ATOMIC_LOAD_ADD_I32	= 99,
    ATOMIC_LOAD_ADD_I64	= 100,
    ATOMIC_LOAD_ADD_I8	= 101,
    ATOMIC_LOAD_AND_I16	= 102,
    ATOMIC_LOAD_AND_I32	= 103,
    ATOMIC_LOAD_AND_I64	= 104,
    ATOMIC_LOAD_AND_I8	= 105,
    ATOMIC_LOAD_NAND_I16	= 106,
    ATOMIC_LOAD_NAND_I32	= 107,
    ATOMIC_LOAD_NAND_I64	= 108,
    ATOMIC_LOAD_NAND_I8	= 109,
    ATOMIC_LOAD_OR_I16	= 110,
    ATOMIC_LOAD_OR_I32	= 111,
    ATOMIC_LOAD_OR_I64	= 112,
    ATOMIC_LOAD_OR_I8	= 113,
    ATOMIC_LOAD_SUB_I16	= 114,
    ATOMIC_LOAD_SUB_I32	= 115,
    ATOMIC_LOAD_SUB_I64	= 116,
    ATOMIC_LOAD_SUB_I8	= 117,
    ATOMIC_LOAD_XOR_I16	= 118,
    ATOMIC_LOAD_XOR_I32	= 119,
    ATOMIC_LOAD_XOR_I64	= 120,
    ATOMIC_LOAD_XOR_I8	= 121,
    ATOMIC_SWAP_I16	= 122,
    ATOMIC_SWAP_I32	= 123,
    ATOMIC_SWAP_I64	= 124,
    ATOMIC_SWAP_I8	= 125,
    AUI	= 126,
    AUIPC	= 127,
    AVER_S_B	= 128,
    AVER_S_D	= 129,
    AVER_S_H	= 130,
    AVER_S_W	= 131,
    AVER_U_B	= 132,
    AVER_U_D	= 133,
    AVER_U_H	= 134,
    AVER_U_W	= 135,
    AVE_S_B	= 136,
    AVE_S_D	= 137,
    AVE_S_H	= 138,
    AVE_S_W	= 139,
    AVE_U_B	= 140,
    AVE_U_D	= 141,
    AVE_U_H	= 142,
    AVE_U_W	= 143,
    AddiuRxImmX16	= 144,
    AddiuRxPcImmX16	= 145,
    AddiuRxRxImm16	= 146,
    AddiuRxRxImmX16	= 147,
    AddiuRxRyOffMemX16	= 148,
    AddiuSpImm16	= 149,
    AddiuSpImmX16	= 150,
    AdduRxRyRz16	= 151,
    AndRxRxRy16	= 152,
    B	= 153,
    BADDu	= 154,
    BAL	= 155,
    BALC	= 156,
    BALIGN	= 157,
    BAL_BR	= 158,
    BC	= 159,
    BC1EQZ	= 160,
    BC1F	= 161,
    BC1F_MM	= 162,
    BC1NEZ	= 163,
    BC1T	= 164,
    BC1T_MM	= 165,
    BC2EQZ	= 166,
    BC2NEZ	= 167,
    BCLRI_B	= 168,
    BCLRI_D	= 169,
    BCLRI_H	= 170,
    BCLRI_W	= 171,
    BCLR_B	= 172,
    BCLR_D	= 173,
    BCLR_H	= 174,
    BCLR_W	= 175,
    BEQ	= 176,
    BEQ64	= 177,
    BEQC	= 178,
    BEQZALC	= 179,
    BEQZC	= 180,
    BEQ_MM	= 181,
    BGEC	= 182,
    BGEUC	= 183,
    BGEZ	= 184,
    BGEZ64	= 185,
    BGEZAL	= 186,
    BGEZALC	= 187,
    BGEZAL_MM	= 188,
    BGEZC	= 189,
    BGEZ_MM	= 190,
    BGTZ	= 191,
    BGTZ64	= 192,
    BGTZALC	= 193,
    BGTZC	= 194,
    BGTZ_MM	= 195,
    BINSLI_B	= 196,
    BINSLI_D	= 197,
    BINSLI_H	= 198,
    BINSLI_W	= 199,
    BINSL_B	= 200,
    BINSL_D	= 201,
    BINSL_H	= 202,
    BINSL_W	= 203,
    BINSRI_B	= 204,
    BINSRI_D	= 205,
    BINSRI_H	= 206,
    BINSRI_W	= 207,
    BINSR_B	= 208,
    BINSR_D	= 209,
    BINSR_H	= 210,
    BINSR_W	= 211,
    BITREV	= 212,
    BITSWAP	= 213,
    BLEZ	= 214,
    BLEZ64	= 215,
    BLEZALC	= 216,
    BLEZC	= 217,
    BLEZ_MM	= 218,
    BLTC	= 219,
    BLTUC	= 220,
    BLTZ	= 221,
    BLTZ64	= 222,
    BLTZAL	= 223,
    BLTZALC	= 224,
    BLTZAL_MM	= 225,
    BLTZC	= 226,
    BLTZ_MM	= 227,
    BMNZI_B	= 228,
    BMNZ_V	= 229,
    BMZI_B	= 230,
    BMZ_V	= 231,
    BNE	= 232,
    BNE64	= 233,
    BNEC	= 234,
    BNEGI_B	= 235,
    BNEGI_D	= 236,
    BNEGI_H	= 237,
    BNEGI_W	= 238,
    BNEG_B	= 239,
    BNEG_D	= 240,
    BNEG_H	= 241,
    BNEG_W	= 242,
    BNEZALC	= 243,
    BNEZC	= 244,
    BNE_MM	= 245,
    BNVC	= 246,
    BNZ_B	= 247,
    BNZ_D	= 248,
    BNZ_H	= 249,
    BNZ_V	= 250,
    BNZ_W	= 251,
    BOVC	= 252,
    BPOSGE32	= 253,
    BPOSGE32_PSEUDO	= 254,
    BREAK	= 255,
    BREAK_MM	= 256,
    BSELI_B	= 257,
    BSEL_D_PSEUDO	= 258,
    BSEL_FD_PSEUDO	= 259,
    BSEL_FW_PSEUDO	= 260,
    BSEL_H_PSEUDO	= 261,
    BSEL_V	= 262,
    BSEL_W_PSEUDO	= 263,
    BSETI_B	= 264,
    BSETI_D	= 265,
    BSETI_H	= 266,
    BSETI_W	= 267,
    BSET_B	= 268,
    BSET_D	= 269,
    BSET_H	= 270,
    BSET_W	= 271,
    BZ_B	= 272,
    BZ_D	= 273,
    BZ_H	= 274,
    BZ_V	= 275,
    BZ_W	= 276,
    BeqzRxImm16	= 277,
    BeqzRxImmX16	= 278,
    Bimm16	= 279,
    BimmX16	= 280,
    BnezRxImm16	= 281,
    BnezRxImmX16	= 282,
    Break16	= 283,
    Bteqz16	= 284,
    BteqzT8CmpX16	= 285,
    BteqzT8CmpiX16	= 286,
    BteqzT8SltX16	= 287,
    BteqzT8SltiX16	= 288,
    BteqzT8SltiuX16	= 289,
    BteqzT8SltuX16	= 290,
    BteqzX16	= 291,
    Btnez16	= 292,
    BtnezT8CmpX16	= 293,
    BtnezT8CmpiX16	= 294,
    BtnezT8SltX16	= 295,
    BtnezT8SltiX16	= 296,
    BtnezT8SltiuX16	= 297,
    BtnezT8SltuX16	= 298,
    BtnezX16	= 299,
    BuildPairF64	= 300,
    BuildPairF64_64	= 301,
    CACHE	= 302,
    CACHE_R6	= 303,
    CEIL_L_D64	= 304,
    CEIL_L_S	= 305,
    CEIL_W_D32	= 306,
    CEIL_W_D64	= 307,
    CEIL_W_MM	= 308,
    CEIL_W_S	= 309,
    CEIL_W_S_MM	= 310,
    CEQI_B	= 311,
    CEQI_D	= 312,
    CEQI_H	= 313,
    CEQI_W	= 314,
    CEQ_B	= 315,
    CEQ_D	= 316,
    CEQ_H	= 317,
    CEQ_W	= 318,
    CFC1	= 319,
    CFC1_MM	= 320,
    CFCMSA	= 321,
    CINS	= 322,
    CINS32	= 323,
    CLASS_D	= 324,
    CLASS_S	= 325,
    CLEI_S_B	= 326,
    CLEI_S_D	= 327,
    CLEI_S_H	= 328,
    CLEI_S_W	= 329,
    CLEI_U_B	= 330,
    CLEI_U_D	= 331,
    CLEI_U_H	= 332,
    CLEI_U_W	= 333,
    CLE_S_B	= 334,
    CLE_S_D	= 335,
    CLE_S_H	= 336,
    CLE_S_W	= 337,
    CLE_U_B	= 338,
    CLE_U_D	= 339,
    CLE_U_H	= 340,
    CLE_U_W	= 341,
    CLO	= 342,
    CLO_MM	= 343,
    CLO_R6	= 344,
    CLTI_S_B	= 345,
    CLTI_S_D	= 346,
    CLTI_S_H	= 347,
    CLTI_S_W	= 348,
    CLTI_U_B	= 349,
    CLTI_U_D	= 350,
    CLTI_U_H	= 351,
    CLTI_U_W	= 352,
    CLT_S_B	= 353,
    CLT_S_D	= 354,
    CLT_S_H	= 355,
    CLT_S_W	= 356,
    CLT_U_B	= 357,
    CLT_U_D	= 358,
    CLT_U_H	= 359,
    CLT_U_W	= 360,
    CLZ	= 361,
    CLZ_MM	= 362,
    CLZ_R6	= 363,
    CMPGDU_EQ_QB	= 364,
    CMPGDU_LE_QB	= 365,
    CMPGDU_LT_QB	= 366,
    CMPGU_EQ_QB	= 367,
    CMPGU_LE_QB	= 368,
    CMPGU_LT_QB	= 369,
    CMPU_EQ_QB	= 370,
    CMPU_LE_QB	= 371,
    CMPU_LT_QB	= 372,
    CMP_EQ_D	= 373,
    CMP_EQ_PH	= 374,
    CMP_EQ_S	= 375,
    CMP_F_D	= 376,
    CMP_F_S	= 377,
    CMP_LE_D	= 378,
    CMP_LE_PH	= 379,
    CMP_LE_S	= 380,
    CMP_LT_D	= 381,
    CMP_LT_PH	= 382,
    CMP_LT_S	= 383,
    CMP_SAF_D	= 384,
    CMP_SAF_S	= 385,
    CMP_SEQ_D	= 386,
    CMP_SEQ_S	= 387,
    CMP_SLE_D	= 388,
    CMP_SLE_S	= 389,
    CMP_SLT_D	= 390,
    CMP_SLT_S	= 391,
    CMP_SUEQ_D	= 392,
    CMP_SUEQ_S	= 393,
    CMP_SULE_D	= 394,
    CMP_SULE_S	= 395,
    CMP_SULT_D	= 396,
    CMP_SULT_S	= 397,
    CMP_SUN_D	= 398,
    CMP_SUN_S	= 399,
    CMP_UEQ_D	= 400,
    CMP_UEQ_S	= 401,
    CMP_ULE_D	= 402,
    CMP_ULE_S	= 403,
    CMP_ULT_D	= 404,
    CMP_ULT_S	= 405,
    CMP_UN_D	= 406,
    CMP_UN_S	= 407,
    CONSTPOOL_ENTRY	= 408,
    COPY_FD_PSEUDO	= 409,
    COPY_FW_PSEUDO	= 410,
    COPY_S_B	= 411,
    COPY_S_D	= 412,
    COPY_S_H	= 413,
    COPY_S_W	= 414,
    COPY_U_B	= 415,
    COPY_U_D	= 416,
    COPY_U_H	= 417,
    COPY_U_W	= 418,
    CTC1	= 419,
    CTC1_MM	= 420,
    CTCMSA	= 421,
    CVT_D32_S	= 422,
    CVT_D32_W	= 423,
    CVT_D32_W_MM	= 424,
    CVT_D64_L	= 425,
    CVT_D64_S	= 426,
    CVT_D64_W	= 427,
    CVT_D_S_MM	= 428,
    CVT_L_D64	= 429,
    CVT_L_D64_MM	= 430,
    CVT_L_S	= 431,
    CVT_L_S_MM	= 432,
    CVT_S_D32	= 433,
    CVT_S_D32_MM	= 434,
    CVT_S_D64	= 435,
    CVT_S_L	= 436,
    CVT_S_W	= 437,
    CVT_S_W_MM	= 438,
    CVT_W_D32	= 439,
    CVT_W_D64	= 440,
    CVT_W_MM	= 441,
    CVT_W_S	= 442,
    CVT_W_S_MM	= 443,
    C_EQ_D32	= 444,
    C_EQ_D64	= 445,
    C_EQ_S	= 446,
    C_F_D32	= 447,
    C_F_D64	= 448,
    C_F_S	= 449,
    C_LE_D32	= 450,
    C_LE_D64	= 451,
    C_LE_S	= 452,
    C_LT_D32	= 453,
    C_LT_D64	= 454,
    C_LT_S	= 455,
    C_NGE_D32	= 456,
    C_NGE_D64	= 457,
    C_NGE_S	= 458,
    C_NGLE_D32	= 459,
    C_NGLE_D64	= 460,
    C_NGLE_S	= 461,
    C_NGL_D32	= 462,
    C_NGL_D64	= 463,
    C_NGL_S	= 464,
    C_NGT_D32	= 465,
    C_NGT_D64	= 466,
    C_NGT_S	= 467,
    C_OLE_D32	= 468,
    C_OLE_D64	= 469,
    C_OLE_S	= 470,
    C_OLT_D32	= 471,
    C_OLT_D64	= 472,
    C_OLT_S	= 473,
    C_SEQ_D32	= 474,
    C_SEQ_D64	= 475,
    C_SEQ_S	= 476,
    C_SF_D32	= 477,
    C_SF_D64	= 478,
    C_SF_S	= 479,
    C_UEQ_D32	= 480,
    C_UEQ_D64	= 481,
    C_UEQ_S	= 482,
    C_ULE_D32	= 483,
    C_ULE_D64	= 484,
    C_ULE_S	= 485,
    C_ULT_D32	= 486,
    C_ULT_D64	= 487,
    C_ULT_S	= 488,
    C_UN_D32	= 489,
    C_UN_D64	= 490,
    C_UN_S	= 491,
    CmpRxRy16	= 492,
    CmpiRxImm16	= 493,
    CmpiRxImmX16	= 494,
    Constant32	= 495,
    DADD	= 496,
    DADDi	= 497,
    DADDiu	= 498,
    DADDu	= 499,
    DAHI	= 500,
    DALIGN	= 501,
    DATI	= 502,
    DAUI	= 503,
    DBITSWAP	= 504,
    DCLO	= 505,
    DCLO_R6	= 506,
    DCLZ	= 507,
    DCLZ_R6	= 508,
    DDIV	= 509,
    DDIVU	= 510,
    DERET	= 511,
    DERET_MM	= 512,
    DEXT	= 513,
    DEXTM	= 514,
    DEXTU	= 515,
    DI	= 516,
    DINS	= 517,
    DINSM	= 518,
    DINSU	= 519,
    DIV	= 520,
    DIVU	= 521,
    DIV_S_B	= 522,
    DIV_S_D	= 523,
    DIV_S_H	= 524,
    DIV_S_W	= 525,
    DIV_U_B	= 526,
    DIV_U_D	= 527,
    DIV_U_H	= 528,
    DIV_U_W	= 529,
    DI_MM	= 530,
    DLSA	= 531,
    DLSA_R6	= 532,
    DMFC0	= 533,
    DMFC1	= 534,
    DMFC2	= 535,
    DMOD	= 536,
    DMODU	= 537,
    DMTC0	= 538,
    DMTC1	= 539,
    DMTC2	= 540,
    DMUH	= 541,
    DMUHU	= 542,
    DMUL	= 543,
    DMULT	= 544,
    DMULTu	= 545,
    DMULU	= 546,
    DMUL_R6	= 547,
    DOTP_S_D	= 548,
    DOTP_S_H	= 549,
    DOTP_S_W	= 550,
    DOTP_U_D	= 551,
    DOTP_U_H	= 552,
    DOTP_U_W	= 553,
    DPADD_S_D	= 554,
    DPADD_S_H	= 555,
    DPADD_S_W	= 556,
    DPADD_U_D	= 557,
    DPADD_U_H	= 558,
    DPADD_U_W	= 559,
    DPAQX_SA_W_PH	= 560,
    DPAQX_S_W_PH	= 561,
    DPAQ_SA_L_W	= 562,
    DPAQ_S_W_PH	= 563,
    DPAU_H_QBL	= 564,
    DPAU_H_QBR	= 565,
    DPAX_W_PH	= 566,
    DPA_W_PH	= 567,
    DPOP	= 568,
    DPSQX_SA_W_PH	= 569,
    DPSQX_S_W_PH	= 570,
    DPSQ_SA_L_W	= 571,
    DPSQ_S_W_PH	= 572,
    DPSUB_S_D	= 573,
    DPSUB_S_H	= 574,
    DPSUB_S_W	= 575,
    DPSUB_U_D	= 576,
    DPSUB_U_H	= 577,
    DPSUB_U_W	= 578,
    DPSU_H_QBL	= 579,
    DPSU_H_QBR	= 580,
    DPSX_W_PH	= 581,
    DPS_W_PH	= 582,
    DROTR	= 583,
    DROTR32	= 584,
    DROTRV	= 585,
    DSBH	= 586,
    DSDIV	= 587,
    DSHD	= 588,
    DSLL	= 589,
    DSLL32	= 590,
    DSLL64_32	= 591,
    DSLLV	= 592,
    DSRA	= 593,
    DSRA32	= 594,
    DSRAV	= 595,
    DSRL	= 596,
    DSRL32	= 597,
    DSRLV	= 598,
    DSUB	= 599,
    DSUBu	= 600,
    DUDIV	= 601,
    DivRxRy16	= 602,
    DivuRxRy16	= 603,
    EHB	= 604,
    EI	= 605,
    EI_MM	= 606,
    ERET	= 607,
    ERET_MM	= 608,
    EXT	= 609,
    EXTP	= 610,
    EXTPDP	= 611,
    EXTPDPV	= 612,
    EXTPV	= 613,
    EXTRV_RS_W	= 614,
    EXTRV_R_W	= 615,
    EXTRV_S_H	= 616,
    EXTRV_W	= 617,
    EXTR_RS_W	= 618,
    EXTR_R_W	= 619,
    EXTR_S_H	= 620,
    EXTR_W	= 621,
    EXTS	= 622,
    EXTS32	= 623,
    EXT_MM	= 624,
    ExtractElementF64	= 625,
    ExtractElementF64_64	= 626,
    FABS_D	= 627,
    FABS_D32	= 628,
    FABS_D64	= 629,
    FABS_MM	= 630,
    FABS_S	= 631,
    FABS_S_MM	= 632,
    FABS_W	= 633,
    FADD_D	= 634,
    FADD_D32	= 635,
    FADD_D64	= 636,
    FADD_MM	= 637,
    FADD_S	= 638,
    FADD_S_MM	= 639,
    FADD_W	= 640,
    FCAF_D	= 641,
    FCAF_W	= 642,
    FCEQ_D	= 643,
    FCEQ_W	= 644,
    FCLASS_D	= 645,
    FCLASS_W	= 646,
    FCLE_D	= 647,
    FCLE_W	= 648,
    FCLT_D	= 649,
    FCLT_W	= 650,
    FCMP_D32	= 651,
    FCMP_D32_MM	= 652,
    FCMP_D64	= 653,
    FCMP_S32	= 654,
    FCMP_S32_MM	= 655,
    FCNE_D	= 656,
    FCNE_W	= 657,
    FCOR_D	= 658,
    FCOR_W	= 659,
    FCUEQ_D	= 660,
    FCUEQ_W	= 661,
    FCULE_D	= 662,
    FCULE_W	= 663,
    FCULT_D	= 664,
    FCULT_W	= 665,
    FCUNE_D	= 666,
    FCUNE_W	= 667,
    FCUN_D	= 668,
    FCUN_W	= 669,
    FDIV_D	= 670,
    FDIV_D32	= 671,
    FDIV_D64	= 672,
    FDIV_MM	= 673,
    FDIV_S	= 674,
    FDIV_S_MM	= 675,
    FDIV_W	= 676,
    FEXDO_H	= 677,
    FEXDO_W	= 678,
    FEXP2_D	= 679,
    FEXP2_D_1_PSEUDO	= 680,
    FEXP2_W	= 681,
    FEXP2_W_1_PSEUDO	= 682,
    FEXUPL_D	= 683,
    FEXUPL_W	= 684,
    FEXUPR_D	= 685,
    FEXUPR_W	= 686,
    FFINT_S_D	= 687,
    FFINT_S_W	= 688,
    FFINT_U_D	= 689,
    FFINT_U_W	= 690,
    FFQL_D	= 691,
    FFQL_W	= 692,
    FFQR_D	= 693,
    FFQR_W	= 694,
    FILL_B	= 695,
    FILL_D	= 696,
    FILL_FD_PSEUDO	= 697,
    FILL_FW_PSEUDO	= 698,
    FILL_H	= 699,
    FILL_W	= 700,
    FLOG2_D	= 701,
    FLOG2_W	= 702,
    FLOOR_L_D64	= 703,
    FLOOR_L_S	= 704,
    FLOOR_W_D32	= 705,
    FLOOR_W_D64	= 706,
    FLOOR_W_MM	= 707,
    FLOOR_W_S	= 708,
    FLOOR_W_S_MM	= 709,
    FMADD_D	= 710,
    FMADD_W	= 711,
    FMAX_A_D	= 712,
    FMAX_A_W	= 713,
    FMAX_D	= 714,
    FMAX_W	= 715,
    FMIN_A_D	= 716,
    FMIN_A_W	= 717,
    FMIN_D	= 718,
    FMIN_W	= 719,
    FMOV_D32	= 720,
    FMOV_D32_MM	= 721,
    FMOV_D64	= 722,
    FMOV_S	= 723,
    FMOV_S_MM	= 724,
    FMSUB_D	= 725,
    FMSUB_W	= 726,
    FMUL_D	= 727,
    FMUL_D32	= 728,
    FMUL_D64	= 729,
    FMUL_MM	= 730,
    FMUL_S	= 731,
    FMUL_S_MM	= 732,
    FMUL_W	= 733,
    FNEG_D32	= 734,
    FNEG_D64	= 735,
    FNEG_MM	= 736,
    FNEG_S	= 737,
    FNEG_S_MM	= 738,
    FRCP_D	= 739,
    FRCP_W	= 740,
    FRINT_D	= 741,
    FRINT_W	= 742,
    FRSQRT_D	= 743,
    FRSQRT_W	= 744,
    FSAF_D	= 745,
    FSAF_W	= 746,
    FSEQ_D	= 747,
    FSEQ_W	= 748,
    FSLE_D	= 749,
    FSLE_W	= 750,
    FSLT_D	= 751,
    FSLT_W	= 752,
    FSNE_D	= 753,
    FSNE_W	= 754,
    FSOR_D	= 755,
    FSOR_W	= 756,
    FSQRT_D	= 757,
    FSQRT_D32	= 758,
    FSQRT_D64	= 759,
    FSQRT_MM	= 760,
    FSQRT_S	= 761,
    FSQRT_S_MM	= 762,
    FSQRT_W	= 763,
    FSUB_D	= 764,
    FSUB_D32	= 765,
    FSUB_D64	= 766,
    FSUB_MM	= 767,
    FSUB_S	= 768,
    FSUB_S_MM	= 769,
    FSUB_W	= 770,
    FSUEQ_D	= 771,
    FSUEQ_W	= 772,
    FSULE_D	= 773,
    FSULE_W	= 774,
    FSULT_D	= 775,
    FSULT_W	= 776,
    FSUNE_D	= 777,
    FSUNE_W	= 778,
    FSUN_D	= 779,
    FSUN_W	= 780,
    FTINT_S_D	= 781,
    FTINT_S_W	= 782,
    FTINT_U_D	= 783,
    FTINT_U_W	= 784,
    FTQ_H	= 785,
    FTQ_W	= 786,
    FTRUNC_S_D	= 787,
    FTRUNC_S_W	= 788,
    FTRUNC_U_D	= 789,
    FTRUNC_U_W	= 790,
    GotPrologue16	= 791,
    HADD_S_D	= 792,
    HADD_S_H	= 793,
    HADD_S_W	= 794,
    HADD_U_D	= 795,
    HADD_U_H	= 796,
    HADD_U_W	= 797,
    HSUB_S_D	= 798,
    HSUB_S_H	= 799,
    HSUB_S_W	= 800,
    HSUB_U_D	= 801,
    HSUB_U_H	= 802,
    HSUB_U_W	= 803,
    ILVEV_B	= 804,
    ILVEV_D	= 805,
    ILVEV_H	= 806,
    ILVEV_W	= 807,
    ILVL_B	= 808,
    ILVL_D	= 809,
    ILVL_H	= 810,
    ILVL_W	= 811,
    ILVOD_B	= 812,
    ILVOD_D	= 813,
    ILVOD_H	= 814,
    ILVOD_W	= 815,
    ILVR_B	= 816,
    ILVR_D	= 817,
    ILVR_H	= 818,
    ILVR_W	= 819,
    INS	= 820,
    INSERT_B	= 821,
    INSERT_B_VIDX_PSEUDO	= 822,
    INSERT_D	= 823,
    INSERT_D_VIDX_PSEUDO	= 824,
    INSERT_FD_PSEUDO	= 825,
    INSERT_FD_VIDX_PSEUDO	= 826,
    INSERT_FW_PSEUDO	= 827,
    INSERT_FW_VIDX_PSEUDO	= 828,
    INSERT_H	= 829,
    INSERT_H_VIDX_PSEUDO	= 830,
    INSERT_W	= 831,
    INSERT_W_VIDX_PSEUDO	= 832,
    INSV	= 833,
    INSVE_B	= 834,
    INSVE_D	= 835,
    INSVE_H	= 836,
    INSVE_W	= 837,
    INS_MM	= 838,
    J	= 839,
    JAL	= 840,
    JALR	= 841,
    JALR16_MM	= 842,
    JALR64	= 843,
    JALR64Pseudo	= 844,
    JALRPseudo	= 845,
    JALR_HB	= 846,
    JALR_MM	= 847,
    JALX	= 848,
    JAL_MM	= 849,
    JIALC	= 850,
    JIC	= 851,
    JR	= 852,
    JR64	= 853,
    JR_HB	= 854,
    JR_HB_R6	= 855,
    JR_MM	= 856,
    J_MM	= 857,
    Jal16	= 858,
    JalB16	= 859,
    JrRa16	= 860,
    JrcRa16	= 861,
    JrcRx16	= 862,
    JumpLinkReg16	= 863,
    LB	= 864,
    LB64	= 865,
    LBUX	= 866,
    LB_MM	= 867,
    LBu	= 868,
    LBu64	= 869,
    LBu_MM	= 870,
    LD	= 871,
    LDC1	= 872,
    LDC164	= 873,
    LDC1_MM	= 874,
    LDC2	= 875,
    LDC2_R6	= 876,
    LDC3	= 877,
    LDI_B	= 878,
    LDI_D	= 879,
    LDI_H	= 880,
    LDI_W	= 881,
    LDL	= 882,
    LDPC	= 883,
    LDR	= 884,
    LDXC1	= 885,
    LDXC164	= 886,
    LD_B	= 887,
    LD_D	= 888,
    LD_H	= 889,
    LD_W	= 890,
    LEA_ADDiu	= 891,
    LEA_ADDiu64	= 892,
    LEA_ADDiu_MM	= 893,
    LH	= 894,
    LH64	= 895,
    LHX	= 896,
    LH_MM	= 897,
    LHu	= 898,
    LHu64	= 899,
    LHu_MM	= 900,
    LL	= 901,
    LLD	= 902,
    LLD_R6	= 903,
    LL_MM	= 904,
    LL_R6	= 905,
    LOAD_ACC128	= 906,
    LOAD_ACC64	= 907,
    LOAD_ACC64DSP	= 908,
    LOAD_CCOND_DSP	= 909,
    LONG_BRANCH_ADDiu	= 910,
    LONG_BRANCH_DADDiu	= 911,
    LONG_BRANCH_LUi	= 912,
    LSA	= 913,
    LSA_R6	= 914,
    LUXC1	= 915,
    LUXC164	= 916,
    LUXC1_MM	= 917,
    LUi	= 918,
    LUi64	= 919,
    LUi_MM	= 920,
    LW	= 921,
    LW64	= 922,
    LWC1	= 923,
    LWC1_MM	= 924,
    LWC2	= 925,
    LWC2_R6	= 926,
    LWC3	= 927,
    LWL	= 928,
    LWL64	= 929,
    LWL_MM	= 930,
    LWPC	= 931,
    LWR	= 932,
    LWR64	= 933,
    LWR_MM	= 934,
    LWUPC	= 935,
    LWU_MM	= 936,
    LWX	= 937,
    LWXC1	= 938,
    LWXC1_MM	= 939,
    LW_MM	= 940,
    LWu	= 941,
    LbRxRyOffMemX16	= 942,
    LbuRxRyOffMemX16	= 943,
    LhRxRyOffMemX16	= 944,
    LhuRxRyOffMemX16	= 945,
    LiRxImm16	= 946,
    LiRxImmAlignX16	= 947,
    LiRxImmX16	= 948,
    LoadAddr32Imm	= 949,
    LoadAddr32Reg	= 950,
    LoadImm32Reg	= 951,
    LoadImm64Reg	= 952,
    LwConstant32	= 953,
    LwRxPcTcp16	= 954,
    LwRxPcTcpX16	= 955,
    LwRxRyOffMemX16	= 956,
    LwRxSpImmX16	= 957,
    MADD	= 958,
    MADDF_D	= 959,
    MADDF_S	= 960,
    MADDR_Q_H	= 961,
    MADDR_Q_W	= 962,
    MADDU	= 963,
    MADDU_DSP	= 964,
    MADDU_MM	= 965,
    MADDV_B	= 966,
    MADDV_D	= 967,
    MADDV_H	= 968,
    MADDV_W	= 969,
    MADD_D32	= 970,
    MADD_D32_MM	= 971,
    MADD_D64	= 972,
    MADD_DSP	= 973,
    MADD_MM	= 974,
    MADD_Q_H	= 975,
    MADD_Q_W	= 976,
    MADD_S	= 977,
    MADD_S_MM	= 978,
    MAQ_SA_W_PHL	= 979,
    MAQ_SA_W_PHR	= 980,
    MAQ_S_W_PHL	= 981,
    MAQ_S_W_PHR	= 982,
    MAXA_D	= 983,
    MAXA_S	= 984,
    MAXI_S_B	= 985,
    MAXI_S_D	= 986,
    MAXI_S_H	= 987,
    MAXI_S_W	= 988,
    MAXI_U_B	= 989,
    MAXI_U_D	= 990,
    MAXI_U_H	= 991,
    MAXI_U_W	= 992,
    MAX_A_B	= 993,
    MAX_A_D	= 994,
    MAX_A_H	= 995,
    MAX_A_W	= 996,
    MAX_D	= 997,
    MAX_S	= 998,
    MAX_S_B	= 999,
    MAX_S_D	= 1000,
    MAX_S_H	= 1001,
    MAX_S_W	= 1002,
    MAX_U_B	= 1003,
    MAX_U_D	= 1004,
    MAX_U_H	= 1005,
    MAX_U_W	= 1006,
    MFC0	= 1007,
    MFC1	= 1008,
    MFC1_MM	= 1009,
    MFC2	= 1010,
    MFHC1_D32	= 1011,
    MFHC1_D64	= 1012,
    MFHC1_MM	= 1013,
    MFHI	= 1014,
    MFHI16_MM	= 1015,
    MFHI64	= 1016,
    MFHI_DSP	= 1017,
    MFHI_MM	= 1018,
    MFLO	= 1019,
    MFLO16_MM	= 1020,
    MFLO64	= 1021,
    MFLO_DSP	= 1022,
    MFLO_MM	= 1023,
    MINA_D	= 1024,
    MINA_S	= 1025,
    MINI_S_B	= 1026,
    MINI_S_D	= 1027,
    MINI_S_H	= 1028,
    MINI_S_W	= 1029,
    MINI_U_B	= 1030,
    MINI_U_D	= 1031,
    MINI_U_H	= 1032,
    MINI_U_W	= 1033,
    MIN_A_B	= 1034,
    MIN_A_D	= 1035,
    MIN_A_H	= 1036,
    MIN_A_W	= 1037,
    MIN_D	= 1038,
    MIN_S	= 1039,
    MIN_S_B	= 1040,
    MIN_S_D	= 1041,
    MIN_S_H	= 1042,
    MIN_S_W	= 1043,
    MIN_U_B	= 1044,
    MIN_U_D	= 1045,
    MIN_U_H	= 1046,
    MIN_U_W	= 1047,
    MIPSeh_return32	= 1048,
    MIPSeh_return64	= 1049,
    MOD	= 1050,
    MODSUB	= 1051,
    MODU	= 1052,
    MOD_S_B	= 1053,
    MOD_S_D	= 1054,
    MOD_S_H	= 1055,
    MOD_S_W	= 1056,
    MOD_U_B	= 1057,
    MOD_U_D	= 1058,
    MOD_U_H	= 1059,
    MOD_U_W	= 1060,
    MOVE16_MM	= 1061,
    MOVE_V	= 1062,
    MOVF_D32	= 1063,
    MOVF_D32_MM	= 1064,
    MOVF_D64	= 1065,
    MOVF_I	= 1066,
    MOVF_I64	= 1067,
    MOVF_I_MM	= 1068,
    MOVF_S	= 1069,
    MOVF_S_MM	= 1070,
    MOVN_I64_D64	= 1071,
    MOVN_I64_I	= 1072,
    MOVN_I64_I64	= 1073,
    MOVN_I64_S	= 1074,
    MOVN_I_D32	= 1075,
    MOVN_I_D32_MM	= 1076,
    MOVN_I_D64	= 1077,
    MOVN_I_I	= 1078,
    MOVN_I_I64	= 1079,
    MOVN_I_MM	= 1080,
    MOVN_I_S	= 1081,
    MOVN_I_S_MM	= 1082,
    MOVT_D32	= 1083,
    MOVT_D32_MM	= 1084,
    MOVT_D64	= 1085,
    MOVT_I	= 1086,
    MOVT_I64	= 1087,
    MOVT_I_MM	= 1088,
    MOVT_S	= 1089,
    MOVT_S_MM	= 1090,
    MOVZ_I64_D64	= 1091,
    MOVZ_I64_I	= 1092,
    MOVZ_I64_I64	= 1093,
    MOVZ_I64_S	= 1094,
    MOVZ_I_D32	= 1095,
    MOVZ_I_D32_MM	= 1096,
    MOVZ_I_D64	= 1097,
    MOVZ_I_I	= 1098,
    MOVZ_I_I64	= 1099,
    MOVZ_I_MM	= 1100,
    MOVZ_I_S	= 1101,
    MOVZ_I_S_MM	= 1102,
    MSUB	= 1103,
    MSUBF_D	= 1104,
    MSUBF_S	= 1105,
    MSUBR_Q_H	= 1106,
    MSUBR_Q_W	= 1107,
    MSUBU	= 1108,
    MSUBU_DSP	= 1109,
    MSUBU_MM	= 1110,
    MSUBV_B	= 1111,
    MSUBV_D	= 1112,
    MSUBV_H	= 1113,
    MSUBV_W	= 1114,
    MSUB_D32	= 1115,
    MSUB_D32_MM	= 1116,
    MSUB_D64	= 1117,
    MSUB_DSP	= 1118,
    MSUB_MM	= 1119,
    MSUB_Q_H	= 1120,
    MSUB_Q_W	= 1121,
    MSUB_S	= 1122,
    MSUB_S_MM	= 1123,
    MTC0	= 1124,
    MTC1	= 1125,
    MTC1_MM	= 1126,
    MTC2	= 1127,
    MTHC1_D32	= 1128,
    MTHC1_D64	= 1129,
    MTHC1_MM	= 1130,
    MTHI	= 1131,
    MTHI64	= 1132,
    MTHI_DSP	= 1133,
    MTHI_MM	= 1134,
    MTHLIP	= 1135,
    MTLO	= 1136,
    MTLO64	= 1137,
    MTLO_DSP	= 1138,
    MTLO_MM	= 1139,
    MTM0	= 1140,
    MTM1	= 1141,
    MTM2	= 1142,
    MTP0	= 1143,
    MTP1	= 1144,
    MTP2	= 1145,
    MUH	= 1146,
    MUHU	= 1147,
    MUL	= 1148,
    MULEQ_S_W_PHL	= 1149,
    MULEQ_S_W_PHR	= 1150,
    MULEU_S_PH_QBL	= 1151,
    MULEU_S_PH_QBR	= 1152,
    MULQ_RS_PH	= 1153,
    MULQ_RS_W	= 1154,
    MULQ_S_PH	= 1155,
    MULQ_S_W	= 1156,
    MULR_Q_H	= 1157,
    MULR_Q_W	= 1158,
    MULSAQ_S_W_PH	= 1159,
    MULSA_W_PH	= 1160,
    MULT	= 1161,
    MULTU_DSP	= 1162,
    MULT_DSP	= 1163,
    MULT_MM	= 1164,
    MULTu	= 1165,
    MULTu_MM	= 1166,
    MULU	= 1167,
    MULV_B	= 1168,
    MULV_D	= 1169,
    MULV_H	= 1170,
    MULV_W	= 1171,
    MUL_MM	= 1172,
    MUL_PH	= 1173,
    MUL_Q_H	= 1174,
    MUL_Q_W	= 1175,
    MUL_R6	= 1176,
    MUL_S_PH	= 1177,
    Mfhi16	= 1178,
    Mflo16	= 1179,
    Move32R16	= 1180,
    MoveR3216	= 1181,
    MultRxRy16	= 1182,
    MultRxRyRz16	= 1183,
    MultuRxRy16	= 1184,
    MultuRxRyRz16	= 1185,
    NLOC_B	= 1186,
    NLOC_D	= 1187,
    NLOC_H	= 1188,
    NLOC_W	= 1189,
    NLZC_B	= 1190,
    NLZC_D	= 1191,
    NLZC_H	= 1192,
    NLZC_W	= 1193,
    NMADD_D32	= 1194,
    NMADD_D32_MM	= 1195,
    NMADD_D64	= 1196,
    NMADD_S	= 1197,
    NMADD_S_MM	= 1198,
    NMSUB_D32	= 1199,
    NMSUB_D32_MM	= 1200,
    NMSUB_D64	= 1201,
    NMSUB_S	= 1202,
    NMSUB_S_MM	= 1203,
    NOP	= 1204,
    NOR	= 1205,
    NOR64	= 1206,
    NORI_B	= 1207,
    NOR_MM	= 1208,
    NOR_V	= 1209,
    NOR_V_D_PSEUDO	= 1210,
    NOR_V_H_PSEUDO	= 1211,
    NOR_V_W_PSEUDO	= 1212,
    NegRxRy16	= 1213,
    NotRxRy16	= 1214,
    OR	= 1215,
    OR64	= 1216,
    ORI_B	= 1217,
    OR_MM	= 1218,
    OR_V	= 1219,
    OR_V_D_PSEUDO	= 1220,
    OR_V_H_PSEUDO	= 1221,
    OR_V_W_PSEUDO	= 1222,
    ORi	= 1223,
    ORi64	= 1224,
    ORi_MM	= 1225,
    OrRxRxRy16	= 1226,
    PACKRL_PH	= 1227,
    PAUSE	= 1228,
    PCKEV_B	= 1229,
    PCKEV_D	= 1230,
    PCKEV_H	= 1231,
    PCKEV_W	= 1232,
    PCKOD_B	= 1233,
    PCKOD_D	= 1234,
    PCKOD_H	= 1235,
    PCKOD_W	= 1236,
    PCNT_B	= 1237,
    PCNT_D	= 1238,
    PCNT_H	= 1239,
    PCNT_W	= 1240,
    PICK_PH	= 1241,
    PICK_QB	= 1242,
    POP	= 1243,
    PRECEQU_PH_QBL	= 1244,
    PRECEQU_PH_QBLA	= 1245,
    PRECEQU_PH_QBR	= 1246,
    PRECEQU_PH_QBRA	= 1247,
    PRECEQ_W_PHL	= 1248,
    PRECEQ_W_PHR	= 1249,
    PRECEU_PH_QBL	= 1250,
    PRECEU_PH_QBLA	= 1251,
    PRECEU_PH_QBR	= 1252,
    PRECEU_PH_QBRA	= 1253,
    PRECRQU_S_QB_PH	= 1254,
    PRECRQ_PH_W	= 1255,
    PRECRQ_QB_PH	= 1256,
    PRECRQ_RS_PH_W	= 1257,
    PRECR_QB_PH	= 1258,
    PRECR_SRA_PH_W	= 1259,
    PRECR_SRA_R_PH_W	= 1260,
    PREF	= 1261,
    PREF_R6	= 1262,
    PREPEND	= 1263,
    PseudoCMPU_EQ_QB	= 1264,
    PseudoCMPU_LE_QB	= 1265,
    PseudoCMPU_LT_QB	= 1266,
    PseudoCMP_EQ_PH	= 1267,
    PseudoCMP_LE_PH	= 1268,
    PseudoCMP_LT_PH	= 1269,
    PseudoCVT_D32_W	= 1270,
    PseudoCVT_D64_L	= 1271,
    PseudoCVT_D64_W	= 1272,
    PseudoCVT_S_L	= 1273,
    PseudoCVT_S_W	= 1274,
    PseudoDMULT	= 1275,
    PseudoDMULTu	= 1276,
    PseudoDSDIV	= 1277,
    PseudoDUDIV	= 1278,
    PseudoIndirectBranch	= 1279,
    PseudoIndirectBranch64	= 1280,
    PseudoMADD	= 1281,
    PseudoMADDU	= 1282,
    PseudoMFHI	= 1283,
    PseudoMFHI64	= 1284,
    PseudoMFLO	= 1285,
    PseudoMFLO64	= 1286,
    PseudoMSUB	= 1287,
    PseudoMSUBU	= 1288,
    PseudoMTLOHI	= 1289,
    PseudoMTLOHI64	= 1290,
    PseudoMTLOHI_DSP	= 1291,
    PseudoMULT	= 1292,
    PseudoMULTu	= 1293,
    PseudoPICK_PH	= 1294,
    PseudoPICK_QB	= 1295,
    PseudoReturn	= 1296,
    PseudoReturn64	= 1297,
    PseudoSDIV	= 1298,
    PseudoUDIV	= 1299,
    RADDU_W_QB	= 1300,
    RDDSP	= 1301,
    RDHWR	= 1302,
    RDHWR64	= 1303,
    REPLV_PH	= 1304,
    REPLV_QB	= 1305,
    REPL_PH	= 1306,
    REPL_QB	= 1307,
    RINT_D	= 1308,
    RINT_S	= 1309,
    ROTR	= 1310,
    ROTRV	= 1311,
    ROTRV_MM	= 1312,
    ROTR_MM	= 1313,
    ROUND_L_D64	= 1314,
    ROUND_L_S	= 1315,
    ROUND_W_D32	= 1316,
    ROUND_W_D64	= 1317,
    ROUND_W_MM	= 1318,
    ROUND_W_S	= 1319,
    ROUND_W_S_MM	= 1320,
    Restore16	= 1321,
    RestoreX16	= 1322,
    RetRA	= 1323,
    RetRA16	= 1324,
    SAT_S_B	= 1325,
    SAT_S_D	= 1326,
    SAT_S_H	= 1327,
    SAT_S_W	= 1328,
    SAT_U_B	= 1329,
    SAT_U_D	= 1330,
    SAT_U_H	= 1331,
    SAT_U_W	= 1332,
    SB	= 1333,
    SB64	= 1334,
    SB_MM	= 1335,
    SC	= 1336,
    SCD	= 1337,
    SCD_R6	= 1338,
    SC_MM	= 1339,
    SC_R6	= 1340,
    SD	= 1341,
    SDBBP	= 1342,
    SDBBP_R6	= 1343,
    SDC1	= 1344,
    SDC164	= 1345,
    SDC1_MM	= 1346,
    SDC2	= 1347,
    SDC2_R6	= 1348,
    SDC3	= 1349,
    SDIV	= 1350,
    SDIV_MM	= 1351,
    SDL	= 1352,
    SDR	= 1353,
    SDXC1	= 1354,
    SDXC164	= 1355,
    SEB	= 1356,
    SEB64	= 1357,
    SEB_MM	= 1358,
    SEH	= 1359,
    SEH64	= 1360,
    SEH_MM	= 1361,
    SELEQZ	= 1362,
    SELEQZ64	= 1363,
    SELEQZ_D	= 1364,
    SELEQZ_S	= 1365,
    SELNEZ	= 1366,
    SELNEZ64	= 1367,
    SELNEZ_D	= 1368,
    SELNEZ_S	= 1369,
    SEL_D	= 1370,
    SEL_S	= 1371,
    SEQ	= 1372,
    SEQi	= 1373,
    SH	= 1374,
    SH64	= 1375,
    SHF_B	= 1376,
    SHF_H	= 1377,
    SHF_W	= 1378,
    SHILO	= 1379,
    SHILOV	= 1380,
    SHLLV_PH	= 1381,
    SHLLV_QB	= 1382,
    SHLLV_S_PH	= 1383,
    SHLLV_S_W	= 1384,
    SHLL_PH	= 1385,
    SHLL_QB	= 1386,
    SHLL_S_PH	= 1387,
    SHLL_S_W	= 1388,
    SHRAV_PH	= 1389,
    SHRAV_QB	= 1390,
    SHRAV_R_PH	= 1391,
    SHRAV_R_QB	= 1392,
    SHRAV_R_W	= 1393,
    SHRA_PH	= 1394,
    SHRA_QB	= 1395,
    SHRA_R_PH	= 1396,
    SHRA_R_QB	= 1397,
    SHRA_R_W	= 1398,
    SHRLV_PH	= 1399,
    SHRLV_QB	= 1400,
    SHRL_PH	= 1401,
    SHRL_QB	= 1402,
    SH_MM	= 1403,
    SLDI_B	= 1404,
    SLDI_D	= 1405,
    SLDI_H	= 1406,
    SLDI_W	= 1407,
    SLD_B	= 1408,
    SLD_D	= 1409,
    SLD_H	= 1410,
    SLD_W	= 1411,
    SLL	= 1412,
    SLL64_32	= 1413,
    SLL64_64	= 1414,
    SLLI_B	= 1415,
    SLLI_D	= 1416,
    SLLI_H	= 1417,
    SLLI_W	= 1418,
    SLLV	= 1419,
    SLLV_MM	= 1420,
    SLL_B	= 1421,
    SLL_D	= 1422,
    SLL_H	= 1423,
    SLL_MM	= 1424,
    SLL_W	= 1425,
    SLT	= 1426,
    SLT64	= 1427,
    SLT_MM	= 1428,
    SLTi	= 1429,
    SLTi64	= 1430,
    SLTi_MM	= 1431,
    SLTiu	= 1432,
    SLTiu64	= 1433,
    SLTiu_MM	= 1434,
    SLTu	= 1435,
    SLTu64	= 1436,
    SLTu_MM	= 1437,
    SNE	= 1438,
    SNEi	= 1439,
    SNZ_B_PSEUDO	= 1440,
    SNZ_D_PSEUDO	= 1441,
    SNZ_H_PSEUDO	= 1442,
    SNZ_V_PSEUDO	= 1443,
    SNZ_W_PSEUDO	= 1444,
    SPLATI_B	= 1445,
    SPLATI_D	= 1446,
    SPLATI_H	= 1447,
    SPLATI_W	= 1448,
    SPLAT_B	= 1449,
    SPLAT_D	= 1450,
    SPLAT_H	= 1451,
    SPLAT_W	= 1452,
    SRA	= 1453,
    SRAI_B	= 1454,
    SRAI_D	= 1455,
    SRAI_H	= 1456,
    SRAI_W	= 1457,
    SRARI_B	= 1458,
    SRARI_D	= 1459,
    SRARI_H	= 1460,
    SRARI_W	= 1461,
    SRAR_B	= 1462,
    SRAR_D	= 1463,
    SRAR_H	= 1464,
    SRAR_W	= 1465,
    SRAV	= 1466,
    SRAV_MM	= 1467,
    SRA_B	= 1468,
    SRA_D	= 1469,
    SRA_H	= 1470,
    SRA_MM	= 1471,
    SRA_W	= 1472,
    SRL	= 1473,
    SRLI_B	= 1474,
    SRLI_D	= 1475,
    SRLI_H	= 1476,
    SRLI_W	= 1477,
    SRLRI_B	= 1478,
    SRLRI_D	= 1479,
    SRLRI_H	= 1480,
    SRLRI_W	= 1481,
    SRLR_B	= 1482,
    SRLR_D	= 1483,
    SRLR_H	= 1484,
    SRLR_W	= 1485,
    SRLV	= 1486,
    SRLV_MM	= 1487,
    SRL_B	= 1488,
    SRL_D	= 1489,
    SRL_H	= 1490,
    SRL_MM	= 1491,
    SRL_W	= 1492,
    SSNOP	= 1493,
    STORE_ACC128	= 1494,
    STORE_ACC64	= 1495,
    STORE_ACC64DSP	= 1496,
    STORE_CCOND_DSP	= 1497,
    ST_B	= 1498,
    ST_D	= 1499,
    ST_H	= 1500,
    ST_W	= 1501,
    SUB	= 1502,
    SUBQH_PH	= 1503,
    SUBQH_R_PH	= 1504,
    SUBQH_R_W	= 1505,
    SUBQH_W	= 1506,
    SUBQ_PH	= 1507,
    SUBQ_S_PH	= 1508,
    SUBQ_S_W	= 1509,
    SUBSUS_U_B	= 1510,
    SUBSUS_U_D	= 1511,
    SUBSUS_U_H	= 1512,
    SUBSUS_U_W	= 1513,
    SUBSUU_S_B	= 1514,
    SUBSUU_S_D	= 1515,
    SUBSUU_S_H	= 1516,
    SUBSUU_S_W	= 1517,
    SUBS_S_B	= 1518,
    SUBS_S_D	= 1519,
    SUBS_S_H	= 1520,
    SUBS_S_W	= 1521,
    SUBS_U_B	= 1522,
    SUBS_U_D	= 1523,
    SUBS_U_H	= 1524,
    SUBS_U_W	= 1525,
    SUBUH_QB	= 1526,
    SUBUH_R_QB	= 1527,
    SUBU_PH	= 1528,
    SUBU_QB	= 1529,
    SUBU_S_PH	= 1530,
    SUBU_S_QB	= 1531,
    SUBVI_B	= 1532,
    SUBVI_D	= 1533,
    SUBVI_H	= 1534,
    SUBVI_W	= 1535,
    SUBV_B	= 1536,
    SUBV_D	= 1537,
    SUBV_H	= 1538,
    SUBV_W	= 1539,
    SUB_MM	= 1540,
    SUBu	= 1541,
    SUBu_MM	= 1542,
    SUXC1	= 1543,
    SUXC164	= 1544,
    SUXC1_MM	= 1545,
    SW	= 1546,
    SW64	= 1547,
    SWC1	= 1548,
    SWC1_MM	= 1549,
    SWC2	= 1550,
    SWC2_R6	= 1551,
    SWC3	= 1552,
    SWL	= 1553,
    SWL64	= 1554,
    SWL_MM	= 1555,
    SWR	= 1556,
    SWR64	= 1557,
    SWR_MM	= 1558,
    SWXC1	= 1559,
    SWXC1_MM	= 1560,
    SW_MM	= 1561,
    SYNC	= 1562,
    SYNC_MM	= 1563,
    SYSCALL	= 1564,
    SYSCALL_MM	= 1565,
    SZ_B_PSEUDO	= 1566,
    SZ_D_PSEUDO	= 1567,
    SZ_H_PSEUDO	= 1568,
    SZ_V_PSEUDO	= 1569,
    SZ_W_PSEUDO	= 1570,
    Save16	= 1571,
    SaveX16	= 1572,
    SbRxRyOffMemX16	= 1573,
    SebRx16	= 1574,
    SehRx16	= 1575,
    SelBeqZ	= 1576,
    SelBneZ	= 1577,
    SelTBteqZCmp	= 1578,
    SelTBteqZCmpi	= 1579,
    SelTBteqZSlt	= 1580,
    SelTBteqZSlti	= 1581,
    SelTBteqZSltiu	= 1582,
    SelTBteqZSltu	= 1583,
    SelTBtneZCmp	= 1584,
    SelTBtneZCmpi	= 1585,
    SelTBtneZSlt	= 1586,
    SelTBtneZSlti	= 1587,
    SelTBtneZSltiu	= 1588,
    SelTBtneZSltu	= 1589,
    ShRxRyOffMemX16	= 1590,
    SllX16	= 1591,
    SllvRxRy16	= 1592,
    SltCCRxRy16	= 1593,
    SltRxRy16	= 1594,
    SltiCCRxImmX16	= 1595,
    SltiRxImm16	= 1596,
    SltiRxImmX16	= 1597,
    SltiuCCRxImmX16	= 1598,
    SltiuRxImm16	= 1599,
    SltiuRxImmX16	= 1600,
    SltuCCRxRy16	= 1601,
    SltuRxRy16	= 1602,
    SltuRxRyRz16	= 1603,
    SraX16	= 1604,
    SravRxRy16	= 1605,
    SrlX16	= 1606,
    SrlvRxRy16	= 1607,
    SubuRxRyRz16	= 1608,
    SwRxRyOffMemX16	= 1609,
    SwRxSpImmX16	= 1610,
    TAILCALL	= 1611,
    TAILCALL64_R	= 1612,
    TAILCALL_R	= 1613,
    TEQ	= 1614,
    TEQI	= 1615,
    TEQI_MM	= 1616,
    TEQ_MM	= 1617,
    TGE	= 1618,
    TGEI	= 1619,
    TGEIU	= 1620,
    TGEIU_MM	= 1621,
    TGEI_MM	= 1622,
    TGEU	= 1623,
    TGEU_MM	= 1624,
    TGE_MM	= 1625,
    TLBP	= 1626,
    TLBR	= 1627,
    TLBWI	= 1628,
    TLBWR	= 1629,
    TLT	= 1630,
    TLTI	= 1631,
    TLTIU_MM	= 1632,
    TLTI_MM	= 1633,
    TLTU	= 1634,
    TLTU_MM	= 1635,
    TLT_MM	= 1636,
    TNE	= 1637,
    TNEI	= 1638,
    TNEI_MM	= 1639,
    TNE_MM	= 1640,
    TRAP	= 1641,
    TRUNC_L_D64	= 1642,
    TRUNC_L_S	= 1643,
    TRUNC_W_D32	= 1644,
    TRUNC_W_D64	= 1645,
    TRUNC_W_MM	= 1646,
    TRUNC_W_S	= 1647,
    TRUNC_W_S_MM	= 1648,
    TTLTIU	= 1649,
    UDIV	= 1650,
    UDIV_MM	= 1651,
    V3MULU	= 1652,
    VMM0	= 1653,
    VMULU	= 1654,
    VSHF_B	= 1655,
    VSHF_D	= 1656,
    VSHF_H	= 1657,
    VSHF_W	= 1658,
    WAIT	= 1659,
    WAIT_MM	= 1660,
    WRDSP	= 1661,
    WSBH	= 1662,
    WSBH_MM	= 1663,
    XOR	= 1664,
    XOR64	= 1665,
    XORI_B	= 1666,
    XOR_MM	= 1667,
    XOR_V	= 1668,
    XOR_V_D_PSEUDO	= 1669,
    XOR_V_H_PSEUDO	= 1670,
    XOR_V_W_PSEUDO	= 1671,
    XORi	= 1672,
    XORi64	= 1673,
    XORi_MM	= 1674,
    XorRxRxRy16	= 1675,
    INSTRUCTION_LIST_END = 1676
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDIU	= 1,
    II_ADDU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_DMFC1	= 20,
    II_DMTC1	= 21,
    II_DMUL	= 22,
    II_DMULT	= 23,
    II_DMULTU	= 24,
    II_POP	= 25,
    II_DROTR	= 26,
    II_DROTR32	= 27,
    II_DROTRV	= 28,
    II_DDIV	= 29,
    II_DSLL	= 30,
    II_DSLL32	= 31,
    II_DSLLV	= 32,
    II_DSRA	= 33,
    II_DSRA32	= 34,
    II_DSRAV	= 35,
    II_DSRL	= 36,
    II_DSRL32	= 37,
    II_DSRLV	= 38,
    II_DSUB	= 39,
    II_DSUBU	= 40,
    II_DDIVU	= 41,
    II_ABS	= 42,
    II_ADD_D	= 43,
    II_ADD_S	= 44,
    II_DIV_D	= 45,
    II_DIV_S	= 46,
    II_FLOOR	= 47,
    II_MOV_D	= 48,
    II_MOV_S	= 49,
    II_MUL_D	= 50,
    II_MUL_S	= 51,
    II_NEG	= 52,
    II_SQRT_D	= 53,
    II_SQRT_S	= 54,
    II_SUB_D	= 55,
    II_SUB_S	= 56,
    II_LB	= 57,
    II_LBU	= 58,
    II_LD	= 59,
    II_LDC1	= 60,
    II_LDL	= 61,
    II_LDR	= 62,
    II_LDXC1	= 63,
    II_LH	= 64,
    II_LHU	= 65,
    II_LUXC1	= 66,
    II_LUI	= 67,
    II_LW	= 68,
    II_LWC1	= 69,
    II_LWL	= 70,
    II_LWR	= 71,
    II_LWU	= 72,
    II_LWXC1	= 73,
    II_MADD	= 74,
    II_MADDU	= 75,
    II_MADD_D	= 76,
    II_MADD_S	= 77,
    II_MFC1	= 78,
    II_MFHC1	= 79,
    II_MFHI_MFLO	= 80,
    II_MOVF_D	= 81,
    II_MOVF	= 82,
    II_MOVF_S	= 83,
    II_MOVN_D	= 84,
    II_MOVN	= 85,
    II_MOVN_S	= 86,
    II_MOVT_D	= 87,
    II_MOVT	= 88,
    II_MOVT_S	= 89,
    II_MOVZ_D	= 90,
    II_MOVZ	= 91,
    II_MOVZ_S	= 92,
    II_MSUB	= 93,
    II_MSUBU	= 94,
    II_MSUB_D	= 95,
    II_MSUB_S	= 96,
    II_MTC1	= 97,
    II_MTHC1	= 98,
    II_MTHI_MTLO	= 99,
    II_MUL	= 100,
    II_MULT	= 101,
    II_MULTU	= 102,
    II_NMADD_D	= 103,
    II_NMADD_S	= 104,
    II_NMSUB_D	= 105,
    II_NMSUB_S	= 106,
    II_NOR	= 107,
    II_OR	= 108,
    II_ORI	= 109,
    II_DIV	= 110,
    II_DIVU	= 111,
    II_RDHWR	= 112,
    II_ROTR	= 113,
    II_ROTRV	= 114,
    II_ROUND	= 115,
    II_RESTORE	= 116,
    II_SB	= 117,
    II_SD	= 118,
    II_SDC1	= 119,
    II_SDL	= 120,
    II_SDR	= 121,
    II_SDXC1	= 122,
    II_SEB	= 123,
    II_SEH	= 124,
    II_SEQ_SNE	= 125,
    II_SEQI_SNEI	= 126,
    II_SH	= 127,
    II_SLL	= 128,
    II_SLLV	= 129,
    II_SLT_SLTU	= 130,
    II_SLTI_SLTIU	= 131,
    II_SRA	= 132,
    II_SRAV	= 133,
    II_SRL	= 134,
    II_SRLV	= 135,
    II_SUBU	= 136,
    II_SUXC1	= 137,
    II_SW	= 138,
    II_SWC1	= 139,
    II_SWL	= 140,
    II_SWR	= 141,
    II_SWXC1	= 142,
    II_SAVE	= 143,
    II_TRUNC	= 144,
    II_XOR	= 145,
    II_XORI	= 146,
    SCHED_LIST_END = 147
  };
}
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo10,0,nullptr },  // Inst #19 = ABSQ_S_PH
  { 20,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo10,0,nullptr },  // Inst #20 = ABSQ_S_QB
  { 21,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #21 = ABSQ_S_W
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #22 = ADD
  { 23,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #23 = ADDIUPC
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #24 = ADDQH_PH
  { 25,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #25 = ADDQH_R_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #26 = ADDQH_R_W
  { 27,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #27 = ADDQH_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #28 = ADDQ_PH
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #29 = ADDQ_S_PH
  { 30,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #30 = ADDQ_S_W
  { 31,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #31 = ADDSC
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #32 = ADDS_A_B
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #33 = ADDS_A_D
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #34 = ADDS_A_H
  { 35,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #35 = ADDS_A_W
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #36 = ADDS_S_B
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #37 = ADDS_S_D
  { 38,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #38 = ADDS_S_H
  { 39,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #39 = ADDS_S_W
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #40 = ADDS_U_B
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #41 = ADDS_U_D
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #42 = ADDS_U_H
  { 43,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #43 = ADDS_U_W
  { 44,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #44 = ADDUH_QB
  { 45,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #45 = ADDUH_R_QB
  { 46,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #46 = ADDU_PH
  { 47,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #47 = ADDU_QB
  { 48,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #48 = ADDU_S_PH
  { 49,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #49 = ADDU_S_QB
  { 50,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #50 = ADDVI_B
  { 51,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #51 = ADDVI_D
  { 52,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #52 = ADDVI_H
  { 53,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #53 = ADDVI_W
  { 54,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #54 = ADDV_B
  { 55,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #55 = ADDV_D
  { 56,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #56 = ADDV_H
  { 57,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #57 = ADDV_W
  { 58,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #58 = ADDWC
  { 59,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #59 = ADD_A_B
  { 60,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #60 = ADD_A_D
  { 61,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #61 = ADD_A_H
  { 62,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #62 = ADD_A_W
  { 63,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #63 = ADD_MM
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #64 = ADDi
  { 65,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #65 = ADDi_MM
  { 66,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #66 = ADDiu
  { 67,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #67 = ADDiu_MM
  { 68,	3,	1,	2,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #68 = ADDu
  { 69,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #69 = ADDu_MM
  { 70,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #70 = ADJCALLSTACKDOWN
  { 71,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #71 = ADJCALLSTACKUP
  { 72,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #72 = ALIGN
  { 73,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #73 = ALUIPC
  { 74,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #74 = AND
  { 75,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #75 = AND64
  { 76,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #76 = ANDI_B
  { 77,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #77 = AND_MM
  { 78,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #78 = AND_V
  { 79,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #79 = AND_V_D_PSEUDO
  { 80,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #80 = AND_V_H_PSEUDO
  { 81,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #81 = AND_V_W_PSEUDO
  { 82,	3,	1,	5,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #82 = ANDi
  { 83,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #83 = ANDi64
  { 84,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #84 = ANDi_MM
  { 85,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #85 = APPEND
  { 86,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #86 = ASUB_S_B
  { 87,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #87 = ASUB_S_D
  { 88,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #88 = ASUB_S_H
  { 89,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #89 = ASUB_S_W
  { 90,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #90 = ASUB_U_B
  { 91,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #91 = ASUB_U_D
  { 92,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #92 = ASUB_U_H
  { 93,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #93 = ASUB_U_W
  { 94,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #94 = ATOMIC_CMP_SWAP_I16
  { 95,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #95 = ATOMIC_CMP_SWAP_I32
  { 96,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #96 = ATOMIC_CMP_SWAP_I64
  { 97,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #97 = ATOMIC_CMP_SWAP_I8
  { 98,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #98 = ATOMIC_LOAD_ADD_I16
  { 99,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #99 = ATOMIC_LOAD_ADD_I32
  { 100,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #100 = ATOMIC_LOAD_ADD_I64
  { 101,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #101 = ATOMIC_LOAD_ADD_I8
  { 102,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #102 = ATOMIC_LOAD_AND_I16
  { 103,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #103 = ATOMIC_LOAD_AND_I32
  { 104,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #104 = ATOMIC_LOAD_AND_I64
  { 105,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #105 = ATOMIC_LOAD_AND_I8
  { 106,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #106 = ATOMIC_LOAD_NAND_I16
  { 107,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #107 = ATOMIC_LOAD_NAND_I32
  { 108,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #108 = ATOMIC_LOAD_NAND_I64
  { 109,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #109 = ATOMIC_LOAD_NAND_I8
  { 110,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #110 = ATOMIC_LOAD_OR_I16
  { 111,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #111 = ATOMIC_LOAD_OR_I32
  { 112,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #112 = ATOMIC_LOAD_OR_I64
  { 113,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #113 = ATOMIC_LOAD_OR_I8
  { 114,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #114 = ATOMIC_LOAD_SUB_I16
  { 115,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #115 = ATOMIC_LOAD_SUB_I32
  { 116,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #116 = ATOMIC_LOAD_SUB_I64
  { 117,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #117 = ATOMIC_LOAD_SUB_I8
  { 118,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #118 = ATOMIC_LOAD_XOR_I16
  { 119,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #119 = ATOMIC_LOAD_XOR_I32
  { 120,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #120 = ATOMIC_LOAD_XOR_I64
  { 121,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #121 = ATOMIC_LOAD_XOR_I8
  { 122,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #122 = ATOMIC_SWAP_I16
  { 123,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #123 = ATOMIC_SWAP_I32
  { 124,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #124 = ATOMIC_SWAP_I64
  { 125,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #125 = ATOMIC_SWAP_I8
  { 126,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #126 = AUI
  { 127,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #127 = AUIPC
  { 128,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #128 = AVER_S_B
  { 129,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #129 = AVER_S_D
  { 130,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #130 = AVER_S_H
  { 131,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #131 = AVER_S_W
  { 132,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #132 = AVER_U_B
  { 133,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #133 = AVER_U_D
  { 134,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #134 = AVER_U_H
  { 135,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #135 = AVER_U_W
  { 136,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #136 = AVE_S_B
  { 137,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #137 = AVE_S_D
  { 138,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #138 = AVE_S_H
  { 139,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #139 = AVE_S_W
  { 140,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #140 = AVE_U_B
  { 141,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #141 = AVE_U_D
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #142 = AVE_U_H
  { 143,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #143 = AVE_U_W
  { 144,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #144 = AddiuRxImmX16
  { 145,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #145 = AddiuRxPcImmX16
  { 146,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #146 = AddiuRxRxImm16
  { 147,	3,	1,	6,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #147 = AddiuRxRxImmX16
  { 148,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #148 = AddiuRxRyOffMemX16
  { 149,	1,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #149 = AddiuSpImm16
  { 150,	1,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #150 = AddiuSpImmX16
  { 151,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #151 = AdduRxRyRz16
  { 152,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #152 = AndRxRxRy16
  { 153,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo37,0,nullptr },  // Inst #153 = B
  { 154,	3,	1,	8,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #154 = BADDu
  { 155,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo37,0,nullptr },  // Inst #155 = BAL
  { 156,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo37,0,nullptr },  // Inst #156 = BALC
  { 157,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #157 = BALIGN
  { 158,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo37,0,nullptr },  // Inst #158 = BAL_BR
  { 159,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #159 = BC
  { 160,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #160 = BC1EQZ
  { 161,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo39,0,nullptr },  // Inst #161 = BC1F
  { 162,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo39,0,nullptr },  // Inst #162 = BC1F_MM
  { 163,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #163 = BC1NEZ
  { 164,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo39,0,nullptr },  // Inst #164 = BC1T
  { 165,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo39,0,nullptr },  // Inst #165 = BC1T_MM
  { 166,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #166 = BC2EQZ
  { 167,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #167 = BC2NEZ
  { 168,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #168 = BCLRI_B
  { 169,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #169 = BCLRI_D
  { 170,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #170 = BCLRI_H
  { 171,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #171 = BCLRI_W
  { 172,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #172 = BCLR_B
  { 173,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #173 = BCLR_D
  { 174,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #174 = BCLR_H
  { 175,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #175 = BCLR_W
  { 176,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #176 = BEQ
  { 177,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #177 = BEQ64
  { 178,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #178 = BEQC
  { 179,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #179 = BEQZALC
  { 180,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #180 = BEQZC
  { 181,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #181 = BEQ_MM
  { 182,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #182 = BGEC
  { 183,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #183 = BGEUC
  { 184,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #184 = BGEZ
  { 185,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #185 = BGEZ64
  { 186,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #186 = BGEZAL
  { 187,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #187 = BGEZALC
  { 188,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #188 = BGEZAL_MM
  { 189,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #189 = BGEZC
  { 190,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #190 = BGEZ_MM
  { 191,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #191 = BGTZ
  { 192,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #192 = BGTZ64
  { 193,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #193 = BGTZALC
  { 194,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #194 = BGTZC
  { 195,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #195 = BGTZ_MM
  { 196,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #196 = BINSLI_B
  { 197,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #197 = BINSLI_D
  { 198,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #198 = BINSLI_H
  { 199,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #199 = BINSLI_W
  { 200,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #200 = BINSL_B
  { 201,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #201 = BINSL_D
  { 202,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #202 = BINSL_H
  { 203,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #203 = BINSL_W
  { 204,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #204 = BINSRI_B
  { 205,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #205 = BINSRI_D
  { 206,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #206 = BINSRI_H
  { 207,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #207 = BINSRI_W
  { 208,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #208 = BINSR_B
  { 209,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #209 = BINSR_D
  { 210,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #210 = BINSR_H
  { 211,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #211 = BINSR_W
  { 212,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #212 = BITREV
  { 213,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #213 = BITSWAP
  { 214,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #214 = BLEZ
  { 215,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #215 = BLEZ64
  { 216,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #216 = BLEZALC
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #217 = BLEZC
  { 218,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #218 = BLEZ_MM
  { 219,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #219 = BLTC
  { 220,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #220 = BLTUC
  { 221,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #221 = BLTZ
  { 222,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #222 = BLTZ64
  { 223,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #223 = BLTZAL
  { 224,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #224 = BLTZALC
  { 225,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #225 = BLTZAL_MM
  { 226,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #226 = BLTZC
  { 227,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #227 = BLTZ_MM
  { 228,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #228 = BMNZI_B
  { 229,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #229 = BMNZ_V
  { 230,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #230 = BMZI_B
  { 231,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #231 = BMZ_V
  { 232,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #232 = BNE
  { 233,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #233 = BNE64
  { 234,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #234 = BNEC
  { 235,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #235 = BNEGI_B
  { 236,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #236 = BNEGI_D
  { 237,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #237 = BNEGI_H
  { 238,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #238 = BNEGI_W
  { 239,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #239 = BNEG_B
  { 240,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #240 = BNEG_D
  { 241,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #241 = BNEG_H
  { 242,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #242 = BNEG_W
  { 243,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo43,0,nullptr },  // Inst #243 = BNEZALC
  { 244,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #244 = BNEZC
  { 245,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #245 = BNE_MM
  { 246,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #246 = BNVC
  { 247,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #247 = BNZ_B
  { 248,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #248 = BNZ_D
  { 249,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo55,0,nullptr },  // Inst #249 = BNZ_H
  { 250,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #250 = BNZ_V
  { 251,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo56,0,nullptr },  // Inst #251 = BNZ_W
  { 252,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo41,0,nullptr },  // Inst #252 = BOVC
  { 253,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #253 = BPOSGE32
  { 254,	1,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo57,0,nullptr },  // Inst #254 = BPOSGE32_PSEUDO
  { 255,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #255 = BREAK
  { 256,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #256 = BREAK_MM
  { 257,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #257 = BSELI_B
  { 258,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #258 = BSEL_D_PSEUDO
  { 259,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #259 = BSEL_FD_PSEUDO
  { 260,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #260 = BSEL_FW_PSEUDO
  { 261,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #261 = BSEL_H_PSEUDO
  { 262,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #262 = BSEL_V
  { 263,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #263 = BSEL_W_PSEUDO
  { 264,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #264 = BSETI_B
  { 265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #265 = BSETI_D
  { 266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #266 = BSETI_H
  { 267,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #267 = BSETI_W
  { 268,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #268 = BSET_B
  { 269,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #269 = BSET_D
  { 270,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #270 = BSET_H
  { 271,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #271 = BSET_W
  { 272,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #272 = BZ_B
  { 273,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #273 = BZ_D
  { 274,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo55,0,nullptr },  // Inst #274 = BZ_H
  { 275,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #275 = BZ_V
  { 276,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo56,0,nullptr },  // Inst #276 = BZ_W
  { 277,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #277 = BeqzRxImm16
  { 278,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #278 = BeqzRxImmX16
  { 279,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #279 = Bimm16
  { 280,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #280 = BimmX16
  { 281,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #281 = BnezRxImm16
  { 282,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #282 = BnezRxImmX16
  { 283,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #283 = Break16
  { 284,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #284 = Bteqz16
  { 285,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #285 = BteqzT8CmpX16
  { 286,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #286 = BteqzT8CmpiX16
  { 287,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #287 = BteqzT8SltX16
  { 288,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #288 = BteqzT8SltiX16
  { 289,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #289 = BteqzT8SltiuX16
  { 290,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #290 = BteqzT8SltuX16
  { 291,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #291 = BteqzX16
  { 292,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #292 = Btnez16
  { 293,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #293 = BtnezT8CmpX16
  { 294,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #294 = BtnezT8CmpiX16
  { 295,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #295 = BtnezT8SltX16
  { 296,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #296 = BtnezT8SltiX16
  { 297,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #297 = BtnezT8SltiuX16
  { 298,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #298 = BtnezT8SltuX16
  { 299,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #299 = BtnezX16
  { 300,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #300 = BuildPairF64
  { 301,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #301 = BuildPairF64_64
  { 302,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #302 = CACHE
  { 303,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #303 = CACHE_R6
  { 304,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #304 = CEIL_L_D64
  { 305,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #305 = CEIL_L_S
  { 306,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #306 = CEIL_W_D32
  { 307,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #307 = CEIL_W_D64
  { 308,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #308 = CEIL_W_MM
  { 309,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #309 = CEIL_W_S
  { 310,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #310 = CEIL_W_S_MM
  { 311,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #311 = CEQI_B
  { 312,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #312 = CEQI_D
  { 313,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #313 = CEQI_H
  { 314,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #314 = CEQI_W
  { 315,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #315 = CEQ_B
  { 316,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #316 = CEQ_D
  { 317,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #317 = CEQ_H
  { 318,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #318 = CEQ_W
  { 319,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #319 = CFC1
  { 320,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #320 = CFC1_MM
  { 321,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #321 = CFCMSA
  { 322,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #322 = CINS
  { 323,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #323 = CINS32
  { 324,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #324 = CLASS_D
  { 325,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #325 = CLASS_S
  { 326,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #326 = CLEI_S_B
  { 327,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #327 = CLEI_S_D
  { 328,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #328 = CLEI_S_H
  { 329,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #329 = CLEI_S_W
  { 330,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #330 = CLEI_U_B
  { 331,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #331 = CLEI_U_D
  { 332,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #332 = CLEI_U_H
  { 333,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #333 = CLEI_U_W
  { 334,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #334 = CLE_S_B
  { 335,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #335 = CLE_S_D
  { 336,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #336 = CLE_S_H
  { 337,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #337 = CLE_S_W
  { 338,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #338 = CLE_U_B
  { 339,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #339 = CLE_U_D
  { 340,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #340 = CLE_U_H
  { 341,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #341 = CLE_U_W
  { 342,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #342 = CLO
  { 343,	2,	1,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #343 = CLO_MM
  { 344,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #344 = CLO_R6
  { 345,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #345 = CLTI_S_B
  { 346,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #346 = CLTI_S_D
  { 347,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #347 = CLTI_S_H
  { 348,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #348 = CLTI_S_W
  { 349,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #349 = CLTI_U_B
  { 350,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #350 = CLTI_U_D
  { 351,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #351 = CLTI_U_H
  { 352,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #352 = CLTI_U_W
  { 353,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #353 = CLT_S_B
  { 354,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #354 = CLT_S_D
  { 355,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #355 = CLT_S_H
  { 356,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #356 = CLT_S_W
  { 357,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #357 = CLT_U_B
  { 358,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #358 = CLT_U_D
  { 359,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #359 = CLT_U_H
  { 360,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #360 = CLT_U_W
  { 361,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #361 = CLZ
  { 362,	2,	1,	12,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #362 = CLZ_MM
  { 363,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #363 = CLZ_R6
  { 364,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo72,0,nullptr },  // Inst #364 = CMPGDU_EQ_QB
  { 365,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo72,0,nullptr },  // Inst #365 = CMPGDU_LE_QB
  { 366,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo72,0,nullptr },  // Inst #366 = CMPGDU_LT_QB
  { 367,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #367 = CMPGU_EQ_QB
  { 368,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #368 = CMPGU_LE_QB
  { 369,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #369 = CMPGU_LT_QB
  { 370,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #370 = CMPU_EQ_QB
  { 371,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #371 = CMPU_LE_QB
  { 372,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #372 = CMPU_LT_QB
  { 373,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #373 = CMP_EQ_D
  { 374,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #374 = CMP_EQ_PH
  { 375,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #375 = CMP_EQ_S
  { 376,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #376 = CMP_F_D
  { 377,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #377 = CMP_F_S
  { 378,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #378 = CMP_LE_D
  { 379,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #379 = CMP_LE_PH
  { 380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #380 = CMP_LE_S
  { 381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #381 = CMP_LT_D
  { 382,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo10,0,nullptr },  // Inst #382 = CMP_LT_PH
  { 383,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #383 = CMP_LT_S
  { 384,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #384 = CMP_SAF_D
  { 385,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #385 = CMP_SAF_S
  { 386,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #386 = CMP_SEQ_D
  { 387,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #387 = CMP_SEQ_S
  { 388,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #388 = CMP_SLE_D
  { 389,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #389 = CMP_SLE_S
  { 390,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #390 = CMP_SLT_D
  { 391,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #391 = CMP_SLT_S
  { 392,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #392 = CMP_SUEQ_D
  { 393,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #393 = CMP_SUEQ_S
  { 394,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #394 = CMP_SULE_D
  { 395,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #395 = CMP_SULE_S
  { 396,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #396 = CMP_SULT_D
  { 397,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #397 = CMP_SULT_S
  { 398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #398 = CMP_SUN_D
  { 399,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #399 = CMP_SUN_S
  { 400,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #400 = CMP_UEQ_D
  { 401,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #401 = CMP_UEQ_S
  { 402,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #402 = CMP_ULE_D
  { 403,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #403 = CMP_ULE_S
  { 404,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #404 = CMP_ULT_D
  { 405,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #405 = CMP_ULT_S
  { 406,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #406 = CMP_UN_D
  { 407,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #407 = CMP_UN_S
  { 408,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #408 = CONSTPOOL_ENTRY
  { 409,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #409 = COPY_FD_PSEUDO
  { 410,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #410 = COPY_FW_PSEUDO
  { 411,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #411 = COPY_S_B
  { 412,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #412 = COPY_S_D
  { 413,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #413 = COPY_S_H
  { 414,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #414 = COPY_S_W
  { 415,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #415 = COPY_U_B
  { 416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #416 = COPY_U_D
  { 417,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #417 = COPY_U_H
  { 418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #418 = COPY_U_W
  { 419,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #419 = CTC1
  { 420,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #420 = CTC1_MM
  { 421,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #421 = CTCMSA
  { 422,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #422 = CVT_D32_S
  { 423,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #423 = CVT_D32_W
  { 424,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #424 = CVT_D32_W_MM
  { 425,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #425 = CVT_D64_L
  { 426,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #426 = CVT_D64_S
  { 427,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #427 = CVT_D64_W
  { 428,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #428 = CVT_D_S_MM
  { 429,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #429 = CVT_L_D64
  { 430,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #430 = CVT_L_D64_MM
  { 431,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #431 = CVT_L_S
  { 432,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #432 = CVT_L_S_MM
  { 433,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #433 = CVT_S_D32
  { 434,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #434 = CVT_S_D32_MM
  { 435,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #435 = CVT_S_D64
  { 436,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #436 = CVT_S_L
  { 437,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #437 = CVT_S_W
  { 438,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #438 = CVT_S_W_MM
  { 439,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #439 = CVT_W_D32
  { 440,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #440 = CVT_W_D64
  { 441,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #441 = CVT_W_MM
  { 442,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #442 = CVT_W_S
  { 443,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #443 = CVT_W_S_MM
  { 444,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #444 = C_EQ_D32
  { 445,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #445 = C_EQ_D64
  { 446,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #446 = C_EQ_S
  { 447,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #447 = C_F_D32
  { 448,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #448 = C_F_D64
  { 449,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #449 = C_F_S
  { 450,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #450 = C_LE_D32
  { 451,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #451 = C_LE_D64
  { 452,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #452 = C_LE_S
  { 453,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #453 = C_LT_D32
  { 454,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #454 = C_LT_D64
  { 455,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #455 = C_LT_S
  { 456,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #456 = C_NGE_D32
  { 457,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #457 = C_NGE_D64
  { 458,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #458 = C_NGE_S
  { 459,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #459 = C_NGLE_D32
  { 460,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #460 = C_NGLE_D64
  { 461,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #461 = C_NGLE_S
  { 462,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #462 = C_NGL_D32
  { 463,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #463 = C_NGL_D64
  { 464,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #464 = C_NGL_S
  { 465,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #465 = C_NGT_D32
  { 466,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #466 = C_NGT_D64
  { 467,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #467 = C_NGT_S
  { 468,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #468 = C_OLE_D32
  { 469,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #469 = C_OLE_D64
  { 470,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #470 = C_OLE_S
  { 471,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #471 = C_OLT_D32
  { 472,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #472 = C_OLT_D64
  { 473,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #473 = C_OLT_S
  { 474,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #474 = C_SEQ_D32
  { 475,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #475 = C_SEQ_D64
  { 476,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #476 = C_SEQ_S
  { 477,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #477 = C_SF_D32
  { 478,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #478 = C_SF_D64
  { 479,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #479 = C_SF_S
  { 480,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #480 = C_UEQ_D32
  { 481,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #481 = C_UEQ_D64
  { 482,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #482 = C_UEQ_S
  { 483,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #483 = C_ULE_D32
  { 484,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #484 = C_ULE_D64
  { 485,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #485 = C_ULE_S
  { 486,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #486 = C_ULT_D32
  { 487,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #487 = C_ULT_D64
  { 488,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #488 = C_ULT_S
  { 489,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #489 = C_UN_D32
  { 490,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #490 = C_UN_D64
  { 491,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #491 = C_UN_S
  { 492,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo85,0,nullptr },  // Inst #492 = CmpRxRy16
  { 493,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #493 = CmpiRxImm16
  { 494,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #494 = CmpiRxImmX16
  { 495,	1,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #495 = Constant32
  { 496,	3,	1,	17,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #496 = DADD
  { 497,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #497 = DADDi
  { 498,	3,	1,	18,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #498 = DADDiu
  { 499,	3,	1,	19,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #499 = DADDu
  { 500,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #500 = DAHI
  { 501,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #501 = DALIGN
  { 502,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #502 = DATI
  { 503,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #503 = DAUI
  { 504,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #504 = DBITSWAP
  { 505,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #505 = DCLO
  { 506,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #506 = DCLO_R6
  { 507,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #507 = DCLZ
  { 508,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #508 = DCLZ_R6
  { 509,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #509 = DDIV
  { 510,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #510 = DDIVU
  { 511,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #511 = DERET
  { 512,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #512 = DERET_MM
  { 513,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #513 = DEXT
  { 514,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #514 = DEXTM
  { 515,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #515 = DEXTU
  { 516,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #516 = DI
  { 517,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #517 = DINS
  { 518,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #518 = DINSM
  { 519,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #519 = DINSU
  { 520,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #520 = DIV
  { 521,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #521 = DIVU
  { 522,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #522 = DIV_S_B
  { 523,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #523 = DIV_S_D
  { 524,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #524 = DIV_S_H
  { 525,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #525 = DIV_S_W
  { 526,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #526 = DIV_U_B
  { 527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #527 = DIV_U_D
  { 528,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #528 = DIV_U_H
  { 529,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #529 = DIV_U_W
  { 530,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #530 = DI_MM
  { 531,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #531 = DLSA
  { 532,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #532 = DLSA_R6
  { 533,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #533 = DMFC0
  { 534,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #534 = DMFC1
  { 535,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #535 = DMFC2
  { 536,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #536 = DMOD
  { 537,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #537 = DMODU
  { 538,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #538 = DMTC0
  { 539,	2,	1,	21,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #539 = DMTC1
  { 540,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #540 = DMTC2
  { 541,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #541 = DMUH
  { 542,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #542 = DMUHU
  { 543,	3,	1,	22,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo25,0,nullptr },  // Inst #543 = DMUL
  { 544,	2,	0,	23,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo88,0,nullptr },  // Inst #544 = DMULT
  { 545,	2,	0,	24,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo88,0,nullptr },  // Inst #545 = DMULTu
  { 546,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #546 = DMULU
  { 547,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #547 = DMUL_R6
  { 548,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #548 = DOTP_S_D
  { 549,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #549 = DOTP_S_H
  { 550,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #550 = DOTP_S_W
  { 551,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #551 = DOTP_U_D
  { 552,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #552 = DOTP_U_H
  { 553,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #553 = DOTP_U_W
  { 554,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #554 = DPADD_S_D
  { 555,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #555 = DPADD_S_H
  { 556,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #556 = DPADD_S_W
  { 557,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #557 = DPADD_U_D
  { 558,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #558 = DPADD_U_H
  { 559,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #559 = DPADD_U_W
  { 560,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #560 = DPAQX_SA_W_PH
  { 561,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #561 = DPAQX_S_W_PH
  { 562,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #562 = DPAQ_SA_L_W
  { 563,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #563 = DPAQ_S_W_PH
  { 564,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #564 = DPAU_H_QBL
  { 565,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #565 = DPAU_H_QBR
  { 566,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #566 = DPAX_W_PH
  { 567,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #567 = DPA_W_PH
  { 568,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #568 = DPOP
  { 569,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #569 = DPSQX_SA_W_PH
  { 570,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #570 = DPSQX_S_W_PH
  { 571,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #571 = DPSQ_SA_L_W
  { 572,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #572 = DPSQ_S_W_PH
  { 573,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #573 = DPSUB_S_D
  { 574,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #574 = DPSUB_S_H
  { 575,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #575 = DPSUB_S_W
  { 576,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #576 = DPSUB_U_D
  { 577,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #577 = DPSUB_U_H
  { 578,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #578 = DPSUB_U_W
  { 579,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #579 = DPSU_H_QBL
  { 580,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #580 = DPSU_H_QBR
  { 581,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #581 = DPSX_W_PH
  { 582,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #582 = DPS_W_PH
  { 583,	3,	1,	26,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #583 = DROTR
  { 584,	3,	1,	27,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #584 = DROTR32
  { 585,	3,	1,	28,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #585 = DROTRV
  { 586,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #586 = DSBH
  { 587,	2,	0,	29,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo88,0,nullptr },  // Inst #587 = DSDIV
  { 588,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #588 = DSHD
  { 589,	3,	1,	30,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #589 = DSLL
  { 590,	3,	1,	31,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #590 = DSLL32
  { 591,	2,	1,	30,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #591 = DSLL64_32
  { 592,	3,	1,	32,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #592 = DSLLV
  { 593,	3,	1,	33,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #593 = DSRA
  { 594,	3,	1,	34,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #594 = DSRA32
  { 595,	3,	1,	35,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #595 = DSRAV
  { 596,	3,	1,	36,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #596 = DSRL
  { 597,	3,	1,	37,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #597 = DSRL32
  { 598,	3,	1,	38,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #598 = DSRLV
  { 599,	3,	1,	39,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #599 = DSUB
  { 600,	3,	1,	40,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #600 = DSUBu
  { 601,	2,	0,	41,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo88,0,nullptr },  // Inst #601 = DUDIV
  { 602,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo85,0,nullptr },  // Inst #602 = DivRxRy16
  { 603,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo85,0,nullptr },  // Inst #603 = DivuRxRy16
  { 604,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #604 = EHB
  { 605,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #605 = EI
  { 606,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #606 = EI_MM
  { 607,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #607 = ERET
  { 608,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #608 = ERET_MM
  { 609,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #609 = EXT
  { 610,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo102,0,nullptr },  // Inst #610 = EXTP
  { 611,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo102,0,nullptr },  // Inst #611 = EXTPDP
  { 612,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo103,0,nullptr },  // Inst #612 = EXTPDPV
  { 613,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo103,0,nullptr },  // Inst #613 = EXTPV
  { 614,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #614 = EXTRV_RS_W
  { 615,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #615 = EXTRV_R_W
  { 616,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #616 = EXTRV_S_H
  { 617,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #617 = EXTRV_W
  { 618,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo102,0,nullptr },  // Inst #618 = EXTR_RS_W
  { 619,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo102,0,nullptr },  // Inst #619 = EXTR_R_W
  { 620,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo102,0,nullptr },  // Inst #620 = EXTR_S_H
  { 621,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo102,0,nullptr },  // Inst #621 = EXTR_W
  { 622,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #622 = EXTS
  { 623,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #623 = EXTS32
  { 624,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #624 = EXT_MM
  { 625,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #625 = ExtractElementF64
  { 626,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #626 = ExtractElementF64_64
  { 627,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #627 = FABS_D
  { 628,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #628 = FABS_D32
  { 629,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #629 = FABS_D64
  { 630,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #630 = FABS_MM
  { 631,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #631 = FABS_S
  { 632,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #632 = FABS_S_MM
  { 633,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #633 = FABS_W
  { 634,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #634 = FADD_D
  { 635,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #635 = FADD_D32
  { 636,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #636 = FADD_D64
  { 637,	3,	1,	43,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #637 = FADD_MM
  { 638,	3,	1,	44,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #638 = FADD_S
  { 639,	3,	1,	44,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #639 = FADD_S_MM
  { 640,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #640 = FADD_W
  { 641,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #641 = FCAF_D
  { 642,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #642 = FCAF_W
  { 643,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #643 = FCEQ_D
  { 644,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #644 = FCEQ_W
  { 645,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #645 = FCLASS_D
  { 646,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #646 = FCLASS_W
  { 647,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #647 = FCLE_D
  { 648,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #648 = FCLE_W
  { 649,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #649 = FCLT_D
  { 650,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #650 = FCLT_W
  { 651,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo111,0,nullptr },  // Inst #651 = FCMP_D32
  { 652,	3,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo111,0,nullptr },  // Inst #652 = FCMP_D32_MM
  { 653,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo112,0,nullptr },  // Inst #653 = FCMP_D64
  { 654,	3,	0,	16,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo113,0,nullptr },  // Inst #654 = FCMP_S32
  { 655,	3,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo113,0,nullptr },  // Inst #655 = FCMP_S32_MM
  { 656,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #656 = FCNE_D
  { 657,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #657 = FCNE_W
  { 658,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #658 = FCOR_D
  { 659,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #659 = FCOR_W
  { 660,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #660 = FCUEQ_D
  { 661,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #661 = FCUEQ_W
  { 662,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #662 = FCULE_D
  { 663,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #663 = FCULE_W
  { 664,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #664 = FCULT_D
  { 665,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #665 = FCULT_W
  { 666,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #666 = FCUNE_D
  { 667,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #667 = FCUNE_W
  { 668,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #668 = FCUN_D
  { 669,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #669 = FCUN_W
  { 670,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #670 = FDIV_D
  { 671,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #671 = FDIV_D32
  { 672,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #672 = FDIV_D64
  { 673,	3,	1,	45,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #673 = FDIV_MM
  { 674,	3,	1,	46,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #674 = FDIV_S
  { 675,	3,	1,	46,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #675 = FDIV_S_MM
  { 676,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #676 = FDIV_W
  { 677,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #677 = FEXDO_H
  { 678,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #678 = FEXDO_W
  { 679,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #679 = FEXP2_D
  { 680,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #680 = FEXP2_D_1_PSEUDO
  { 681,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #681 = FEXP2_W
  { 682,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #682 = FEXP2_W_1_PSEUDO
  { 683,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #683 = FEXUPL_D
  { 684,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #684 = FEXUPL_W
  { 685,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #685 = FEXUPR_D
  { 686,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #686 = FEXUPR_W
  { 687,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #687 = FFINT_S_D
  { 688,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #688 = FFINT_S_W
  { 689,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #689 = FFINT_U_D
  { 690,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #690 = FFINT_U_W
  { 691,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #691 = FFQL_D
  { 692,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #692 = FFQL_W
  { 693,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #693 = FFQR_D
  { 694,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #694 = FFQR_W
  { 695,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #695 = FILL_B
  { 696,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #696 = FILL_D
  { 697,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #697 = FILL_FD_PSEUDO
  { 698,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #698 = FILL_FW_PSEUDO
  { 699,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #699 = FILL_H
  { 700,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #700 = FILL_W
  { 701,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #701 = FLOG2_D
  { 702,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #702 = FLOG2_W
  { 703,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #703 = FLOOR_L_D64
  { 704,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #704 = FLOOR_L_S
  { 705,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #705 = FLOOR_W_D32
  { 706,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #706 = FLOOR_W_D64
  { 707,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #707 = FLOOR_W_MM
  { 708,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #708 = FLOOR_W_S
  { 709,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #709 = FLOOR_W_S_MM
  { 710,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #710 = FMADD_D
  { 711,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #711 = FMADD_W
  { 712,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #712 = FMAX_A_D
  { 713,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #713 = FMAX_A_W
  { 714,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #714 = FMAX_D
  { 715,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #715 = FMAX_W
  { 716,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #716 = FMIN_A_D
  { 717,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #717 = FMIN_A_W
  { 718,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #718 = FMIN_D
  { 719,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #719 = FMIN_W
  { 720,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #720 = FMOV_D32
  { 721,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #721 = FMOV_D32_MM
  { 722,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #722 = FMOV_D64
  { 723,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #723 = FMOV_S
  { 724,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #724 = FMOV_S_MM
  { 725,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #725 = FMSUB_D
  { 726,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #726 = FMSUB_W
  { 727,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #727 = FMUL_D
  { 728,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #728 = FMUL_D32
  { 729,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #729 = FMUL_D64
  { 730,	3,	1,	50,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #730 = FMUL_MM
  { 731,	3,	1,	51,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #731 = FMUL_S
  { 732,	3,	1,	51,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #732 = FMUL_S_MM
  { 733,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #733 = FMUL_W
  { 734,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #734 = FNEG_D32
  { 735,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #735 = FNEG_D64
  { 736,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #736 = FNEG_MM
  { 737,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #737 = FNEG_S
  { 738,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #738 = FNEG_S_MM
  { 739,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #739 = FRCP_D
  { 740,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #740 = FRCP_W
  { 741,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #741 = FRINT_D
  { 742,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #742 = FRINT_W
  { 743,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #743 = FRSQRT_D
  { 744,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #744 = FRSQRT_W
  { 745,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #745 = FSAF_D
  { 746,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #746 = FSAF_W
  { 747,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #747 = FSEQ_D
  { 748,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #748 = FSEQ_W
  { 749,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #749 = FSLE_D
  { 750,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #750 = FSLE_W
  { 751,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #751 = FSLT_D
  { 752,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #752 = FSLT_W
  { 753,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #753 = FSNE_D
  { 754,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #754 = FSNE_W
  { 755,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #755 = FSOR_D
  { 756,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #756 = FSOR_W
  { 757,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #757 = FSQRT_D
  { 758,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #758 = FSQRT_D32
  { 759,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #759 = FSQRT_D64
  { 760,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #760 = FSQRT_MM
  { 761,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #761 = FSQRT_S
  { 762,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #762 = FSQRT_S_MM
  { 763,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #763 = FSQRT_W
  { 764,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #764 = FSUB_D
  { 765,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #765 = FSUB_D32
  { 766,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #766 = FSUB_D64
  { 767,	3,	1,	55,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #767 = FSUB_MM
  { 768,	3,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #768 = FSUB_S
  { 769,	3,	1,	56,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #769 = FSUB_S_MM
  { 770,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #770 = FSUB_W
  { 771,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #771 = FSUEQ_D
  { 772,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #772 = FSUEQ_W
  { 773,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #773 = FSULE_D
  { 774,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #774 = FSULE_W
  { 775,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #775 = FSULT_D
  { 776,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #776 = FSULT_W
  { 777,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #777 = FSUNE_D
  { 778,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #778 = FSUNE_W
  { 779,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #779 = FSUN_D
  { 780,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #780 = FSUN_W
  { 781,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #781 = FTINT_S_D
  { 782,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #782 = FTINT_S_W
  { 783,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #783 = FTINT_U_D
  { 784,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #784 = FTINT_U_W
  { 785,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #785 = FTQ_H
  { 786,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #786 = FTQ_W
  { 787,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #787 = FTRUNC_S_D
  { 788,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #788 = FTRUNC_S_W
  { 789,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #789 = FTRUNC_U_D
  { 790,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #790 = FTRUNC_U_W
  { 791,	4,	2,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #791 = GotPrologue16
  { 792,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #792 = HADD_S_D
  { 793,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #793 = HADD_S_H
  { 794,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #794 = HADD_S_W
  { 795,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #795 = HADD_U_D
  { 796,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #796 = HADD_U_H
  { 797,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #797 = HADD_U_W
  { 798,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #798 = HSUB_S_D
  { 799,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #799 = HSUB_S_H
  { 800,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #800 = HSUB_S_W
  { 801,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #801 = HSUB_U_D
  { 802,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #802 = HSUB_U_H
  { 803,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #803 = HSUB_U_W
  { 804,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #804 = ILVEV_B
  { 805,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #805 = ILVEV_D
  { 806,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #806 = ILVEV_H
  { 807,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #807 = ILVEV_W
  { 808,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #808 = ILVL_B
  { 809,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #809 = ILVL_D
  { 810,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #810 = ILVL_H
  { 811,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #811 = ILVL_W
  { 812,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #812 = ILVOD_B
  { 813,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #813 = ILVOD_D
  { 814,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #814 = ILVOD_H
  { 815,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #815 = ILVOD_W
  { 816,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #816 = ILVR_B
  { 817,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #817 = ILVR_D
  { 818,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #818 = ILVR_H
  { 819,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #819 = ILVR_W
  { 820,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #820 = INS
  { 821,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #821 = INSERT_B
  { 822,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #822 = INSERT_B_VIDX_PSEUDO
  { 823,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #823 = INSERT_D
  { 824,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #824 = INSERT_D_VIDX_PSEUDO
  { 825,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #825 = INSERT_FD_PSEUDO
  { 826,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #826 = INSERT_FD_VIDX_PSEUDO
  { 827,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #827 = INSERT_FW_PSEUDO
  { 828,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #828 = INSERT_FW_VIDX_PSEUDO
  { 829,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #829 = INSERT_H
  { 830,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #830 = INSERT_H_VIDX_PSEUDO
  { 831,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #831 = INSERT_W
  { 832,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #832 = INSERT_W_VIDX_PSEUDO
  { 833,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo140,0,nullptr },  // Inst #833 = INSV
  { 834,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #834 = INSVE_B
  { 835,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #835 = INSVE_D
  { 836,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #836 = INSVE_H
  { 837,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #837 = INSVE_W
  { 838,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #838 = INS_MM
  { 839,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #839 = J
  { 840,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #840 = JAL
  { 841,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo11,0,nullptr },  // Inst #841 = JALR
  { 842,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo57,0,nullptr },  // Inst #842 = JALR16_MM
  { 843,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo88,0,nullptr },  // Inst #843 = JALR64
  { 844,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo145,0,nullptr },  // Inst #844 = JALR64Pseudo
  { 845,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo57,0,nullptr },  // Inst #845 = JALRPseudo
  { 846,	2,	1,	0,	4,	0|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #846 = JALR_HB
  { 847,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo11,0,nullptr },  // Inst #847 = JALR_MM
  { 848,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #848 = JALX
  { 849,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #849 = JAL_MM
  { 850,	2,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #850 = JIALC
  { 851,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo13,0,nullptr },  // Inst #851 = JIC
  { 852,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #852 = JR
  { 853,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #853 = JR64
  { 854,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #854 = JR_HB
  { 855,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #855 = JR_HB_R6
  { 856,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #856 = JR_MM
  { 857,	1,	0,	7,	4,	0|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #857 = J_MM
  { 858,	1,	0,	6,	6,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #858 = Jal16
  { 859,	1,	0,	6,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #859 = JalB16
  { 860,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #860 = JrRa16
  { 861,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #861 = JrcRa16
  { 862,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #862 = JrcRx16
  { 863,	1,	0,	7,	2,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo146,0,nullptr },  // Inst #863 = JumpLinkReg16
  { 864,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #864 = LB
  { 865,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #865 = LB64
  { 866,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #866 = LBUX
  { 867,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #867 = LB_MM
  { 868,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #868 = LBu
  { 869,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #869 = LBu64
  { 870,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #870 = LBu_MM
  { 871,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #871 = LD
  { 872,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #872 = LDC1
  { 873,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #873 = LDC164
  { 874,	3,	1,	60,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #874 = LDC1_MM
  { 875,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #875 = LDC2
  { 876,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #876 = LDC2_R6
  { 877,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #877 = LDC3
  { 878,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #878 = LDI_B
  { 879,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #879 = LDI_D
  { 880,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #880 = LDI_H
  { 881,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #881 = LDI_W
  { 882,	4,	1,	61,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #882 = LDL
  { 883,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #883 = LDPC
  { 884,	4,	1,	62,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #884 = LDR
  { 885,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #885 = LDXC1
  { 886,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #886 = LDXC164
  { 887,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #887 = LD_B
  { 888,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #888 = LD_D
  { 889,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #889 = LD_H
  { 890,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #890 = LD_W
  { 891,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #891 = LEA_ADDiu
  { 892,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #892 = LEA_ADDiu64
  { 893,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #893 = LEA_ADDiu_MM
  { 894,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #894 = LH
  { 895,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #895 = LH64
  { 896,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #896 = LHX
  { 897,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #897 = LH_MM
  { 898,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #898 = LHu
  { 899,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #899 = LHu64
  { 900,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #900 = LHu_MM
  { 901,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #901 = LL
  { 902,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #902 = LLD
  { 903,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #903 = LLD_R6
  { 904,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #904 = LL_MM
  { 905,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #905 = LL_R6
  { 906,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #906 = LOAD_ACC128
  { 907,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #907 = LOAD_ACC64
  { 908,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #908 = LOAD_ACC64DSP
  { 909,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #909 = LOAD_CCOND_DSP
  { 910,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #910 = LONG_BRANCH_ADDiu
  { 911,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #911 = LONG_BRANCH_DADDiu
  { 912,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #912 = LONG_BRANCH_LUi
  { 913,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #913 = LSA
  { 914,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #914 = LSA_R6
  { 915,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #915 = LUXC1
  { 916,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #916 = LUXC164
  { 917,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #917 = LUXC1_MM
  { 918,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #918 = LUi
  { 919,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #919 = LUi64
  { 920,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #920 = LUi_MM
  { 921,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #921 = LW
  { 922,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #922 = LW64
  { 923,	3,	1,	69,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #923 = LWC1
  { 924,	3,	1,	69,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #924 = LWC1_MM
  { 925,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #925 = LWC2
  { 926,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #926 = LWC2_R6
  { 927,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #927 = LWC3
  { 928,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #928 = LWL
  { 929,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #929 = LWL64
  { 930,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #930 = LWL_MM
  { 931,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #931 = LWPC
  { 932,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #932 = LWR
  { 933,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #933 = LWR64
  { 934,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #934 = LWR_MM
  { 935,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #935 = LWUPC
  { 936,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #936 = LWU_MM
  { 937,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #937 = LWX
  { 938,	3,	1,	73,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #938 = LWXC1
  { 939,	3,	1,	73,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #939 = LWXC1_MM
  { 940,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #940 = LW_MM
  { 941,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #941 = LWu
  { 942,	4,	1,	57,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #942 = LbRxRyOffMemX16
  { 943,	4,	1,	58,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #943 = LbuRxRyOffMemX16
  { 944,	4,	1,	64,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #944 = LhRxRyOffMemX16
  { 945,	4,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #945 = LhuRxRyOffMemX16
  { 946,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #946 = LiRxImm16
  { 947,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #947 = LiRxImmAlignX16
  { 948,	2,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #948 = LiRxImmX16
  { 949,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #949 = LoadAddr32Imm
  { 950,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #950 = LoadAddr32Reg
  { 951,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #951 = LoadImm32Reg
  { 952,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #952 = LoadImm64Reg
  { 953,	3,	1,	3,	2,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #953 = LwConstant32
  { 954,	3,	1,	68,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #954 = LwRxPcTcp16
  { 955,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #955 = LwRxPcTcpX16
  { 956,	4,	1,	68,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #956 = LwRxRyOffMemX16
  { 957,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo181,0,nullptr },  // Inst #957 = LwRxSpImmX16
  { 958,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #958 = MADD
  { 959,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #959 = MADDF_D
  { 960,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #960 = MADDF_S
  { 961,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #961 = MADDR_Q_H
  { 962,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #962 = MADDR_Q_W
  { 963,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #963 = MADDU
  { 964,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #964 = MADDU_DSP
  { 965,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #965 = MADDU_MM
  { 966,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #966 = MADDV_B
  { 967,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #967 = MADDV_D
  { 968,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #968 = MADDV_H
  { 969,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #969 = MADDV_W
  { 970,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #970 = MADD_D32
  { 971,	4,	1,	76,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #971 = MADD_D32_MM
  { 972,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #972 = MADD_D64
  { 973,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #973 = MADD_DSP
  { 974,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #974 = MADD_MM
  { 975,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #975 = MADD_Q_H
  { 976,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #976 = MADD_Q_W
  { 977,	4,	1,	77,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #977 = MADD_S
  { 978,	4,	1,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #978 = MADD_S_MM
  { 979,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #979 = MAQ_SA_W_PHL
  { 980,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #980 = MAQ_SA_W_PHR
  { 981,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #981 = MAQ_S_W_PHL
  { 982,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #982 = MAQ_S_W_PHR
  { 983,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #983 = MAXA_D
  { 984,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #984 = MAXA_S
  { 985,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #985 = MAXI_S_B
  { 986,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #986 = MAXI_S_D
  { 987,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #987 = MAXI_S_H
  { 988,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #988 = MAXI_S_W
  { 989,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #989 = MAXI_U_B
  { 990,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #990 = MAXI_U_D
  { 991,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #991 = MAXI_U_H
  { 992,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #992 = MAXI_U_W
  { 993,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #993 = MAX_A_B
  { 994,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #994 = MAX_A_D
  { 995,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #995 = MAX_A_H
  { 996,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #996 = MAX_A_W
  { 997,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #997 = MAX_D
  { 998,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #998 = MAX_S
  { 999,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #999 = MAX_S_B
  { 1000,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1000 = MAX_S_D
  { 1001,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1001 = MAX_S_H
  { 1002,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1002 = MAX_S_W
  { 1003,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1003 = MAX_U_B
  { 1004,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1004 = MAX_U_D
  { 1005,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1005 = MAX_U_H
  { 1006,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1006 = MAX_U_W
  { 1007,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1007 = MFC0
  { 1008,	2,	1,	78,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1008 = MFC1
  { 1009,	2,	1,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1009 = MFC1_MM
  { 1010,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1010 = MFC2
  { 1011,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1011 = MFHC1_D32
  { 1012,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1012 = MFHC1_D64
  { 1013,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1013 = MFHC1_MM
  { 1014,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1014 = MFHI
  { 1015,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1015 = MFHI16_MM
  { 1016,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo145,0,nullptr },  // Inst #1016 = MFHI64
  { 1017,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1017 = MFHI_DSP
  { 1018,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1018 = MFHI_MM
  { 1019,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1019 = MFLO
  { 1020,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1020 = MFLO16_MM
  { 1021,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo145,0,nullptr },  // Inst #1021 = MFLO64
  { 1022,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1022 = MFLO_DSP
  { 1023,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo57,0,nullptr },  // Inst #1023 = MFLO_MM
  { 1024,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #1024 = MINA_D
  { 1025,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1025 = MINA_S
  { 1026,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1026 = MINI_S_B
  { 1027,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1027 = MINI_S_D
  { 1028,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1028 = MINI_S_H
  { 1029,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1029 = MINI_S_W
  { 1030,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1030 = MINI_U_B
  { 1031,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1031 = MINI_U_D
  { 1032,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1032 = MINI_U_H
  { 1033,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1033 = MINI_U_W
  { 1034,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1034 = MIN_A_B
  { 1035,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1035 = MIN_A_D
  { 1036,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1036 = MIN_A_H
  { 1037,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1037 = MIN_A_W
  { 1038,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #1038 = MIN_D
  { 1039,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1039 = MIN_S
  { 1040,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1040 = MIN_S_B
  { 1041,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1041 = MIN_S_D
  { 1042,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1042 = MIN_S_H
  { 1043,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1043 = MIN_S_W
  { 1044,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1044 = MIN_U_B
  { 1045,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1045 = MIN_U_D
  { 1046,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1046 = MIN_U_H
  { 1047,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1047 = MIN_U_W
  { 1048,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo192,0,nullptr },  // Inst #1048 = MIPSeh_return32
  { 1049,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo193,0,nullptr },  // Inst #1049 = MIPSeh_return64
  { 1050,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1050 = MOD
  { 1051,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1051 = MODSUB
  { 1052,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1052 = MODU
  { 1053,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1053 = MOD_S_B
  { 1054,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1054 = MOD_S_D
  { 1055,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1055 = MOD_S_H
  { 1056,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1056 = MOD_S_W
  { 1057,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1057 = MOD_U_B
  { 1058,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1058 = MOD_U_D
  { 1059,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1059 = MOD_U_H
  { 1060,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1060 = MOD_U_W
  { 1061,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1061 = MOVE16_MM
  { 1062,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1062 = MOVE_V
  { 1063,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1063 = MOVF_D32
  { 1064,	4,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1064 = MOVF_D32_MM
  { 1065,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1065 = MOVF_D64
  { 1066,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1066 = MOVF_I
  { 1067,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1067 = MOVF_I64
  { 1068,	4,	1,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1068 = MOVF_I_MM
  { 1069,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1069 = MOVF_S
  { 1070,	4,	1,	83,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1070 = MOVF_S_MM
  { 1071,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1071 = MOVN_I64_D64
  { 1072,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1072 = MOVN_I64_I
  { 1073,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1073 = MOVN_I64_I64
  { 1074,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1074 = MOVN_I64_S
  { 1075,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1075 = MOVN_I_D32
  { 1076,	4,	1,	84,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1076 = MOVN_I_D32_MM
  { 1077,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1077 = MOVN_I_D64
  { 1078,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1078 = MOVN_I_I
  { 1079,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1079 = MOVN_I_I64
  { 1080,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1080 = MOVN_I_MM
  { 1081,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1081 = MOVN_I_S
  { 1082,	4,	1,	86,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1082 = MOVN_I_S_MM
  { 1083,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1083 = MOVT_D32
  { 1084,	4,	1,	87,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1084 = MOVT_D32_MM
  { 1085,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1085 = MOVT_D64
  { 1086,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1086 = MOVT_I
  { 1087,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1087 = MOVT_I64
  { 1088,	4,	1,	88,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1088 = MOVT_I_MM
  { 1089,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1089 = MOVT_S
  { 1090,	4,	1,	89,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1090 = MOVT_S_MM
  { 1091,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1091 = MOVZ_I64_D64
  { 1092,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1092 = MOVZ_I64_I
  { 1093,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1093 = MOVZ_I64_I64
  { 1094,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1094 = MOVZ_I64_S
  { 1095,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1095 = MOVZ_I_D32
  { 1096,	4,	1,	90,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1096 = MOVZ_I_D32_MM
  { 1097,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1097 = MOVZ_I_D64
  { 1098,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1098 = MOVZ_I_I
  { 1099,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1099 = MOVZ_I_I64
  { 1100,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1100 = MOVZ_I_MM
  { 1101,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1101 = MOVZ_I_S
  { 1102,	4,	1,	92,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1102 = MOVZ_I_S_MM
  { 1103,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1103 = MSUB
  { 1104,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #1104 = MSUBF_D
  { 1105,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1105 = MSUBF_S
  { 1106,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1106 = MSUBR_Q_H
  { 1107,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1107 = MSUBR_Q_W
  { 1108,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1108 = MSUBU
  { 1109,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1109 = MSUBU_DSP
  { 1110,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1110 = MSUBU_MM
  { 1111,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #1111 = MSUBV_B
  { 1112,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #1112 = MSUBV_D
  { 1113,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1113 = MSUBV_H
  { 1114,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1114 = MSUBV_W
  { 1115,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1115 = MSUB_D32
  { 1116,	4,	1,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1116 = MSUB_D32_MM
  { 1117,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1117 = MSUB_D64
  { 1118,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1118 = MSUB_DSP
  { 1119,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1119 = MSUB_MM
  { 1120,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1120 = MSUB_Q_H
  { 1121,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1121 = MSUB_Q_W
  { 1122,	4,	1,	96,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1122 = MSUB_S
  { 1123,	4,	1,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1123 = MSUB_S_MM
  { 1124,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1124 = MTC0
  { 1125,	2,	1,	97,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1125 = MTC1
  { 1126,	2,	1,	97,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1126 = MTC1_MM
  { 1127,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1127 = MTC2
  { 1128,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1128 = MTHC1_D32
  { 1129,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1129 = MTHC1_D64
  { 1130,	2,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1130 = MTHC1_MM
  { 1131,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #1131 = MTHI
  { 1132,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo145,0,nullptr },  // Inst #1132 = MTHI64
  { 1133,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1133 = MTHI_DSP
  { 1134,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #1134 = MTHI_MM
  { 1135,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo214,0,nullptr },  // Inst #1135 = MTHLIP
  { 1136,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo57,0,nullptr },  // Inst #1136 = MTLO
  { 1137,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo145,0,nullptr },  // Inst #1137 = MTLO64
  { 1138,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1138 = MTLO_DSP
  { 1139,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo57,0,nullptr },  // Inst #1139 = MTLO_MM
  { 1140,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo145,0,nullptr },  // Inst #1140 = MTM0
  { 1141,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo145,0,nullptr },  // Inst #1141 = MTM1
  { 1142,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo145,0,nullptr },  // Inst #1142 = MTM2
  { 1143,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo145,0,nullptr },  // Inst #1143 = MTP0
  { 1144,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo145,0,nullptr },  // Inst #1144 = MTP1
  { 1145,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo145,0,nullptr },  // Inst #1145 = MTP2
  { 1146,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1146 = MUH
  { 1147,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1147 = MUHU
  { 1148,	3,	1,	100,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1148 = MUL
  { 1149,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo72,0,nullptr },  // Inst #1149 = MULEQ_S_W_PHL
  { 1150,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo72,0,nullptr },  // Inst #1150 = MULEQ_S_W_PHR
  { 1151,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1151 = MULEU_S_PH_QBL
  { 1152,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1152 = MULEU_S_PH_QBR
  { 1153,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1153 = MULQ_RS_PH
  { 1154,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo12,0,nullptr },  // Inst #1154 = MULQ_RS_W
  { 1155,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1155 = MULQ_S_PH
  { 1156,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo12,0,nullptr },  // Inst #1156 = MULQ_S_W
  { 1157,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1157 = MULR_Q_H
  { 1158,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1158 = MULR_Q_W
  { 1159,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo98,0,nullptr },  // Inst #1159 = MULSAQ_S_W_PH
  { 1160,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1160 = MULSA_W_PH
  { 1161,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1161 = MULT
  { 1162,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1162 = MULTU_DSP
  { 1163,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1163 = MULT_DSP
  { 1164,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1164 = MULT_MM
  { 1165,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1165 = MULTu
  { 1166,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1166 = MULTu_MM
  { 1167,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1167 = MULU
  { 1168,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1168 = MULV_B
  { 1169,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1169 = MULV_D
  { 1170,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1170 = MULV_H
  { 1171,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1171 = MULV_W
  { 1172,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1172 = MUL_MM
  { 1173,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1173 = MUL_PH
  { 1174,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1174 = MUL_Q_H
  { 1175,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1175 = MUL_Q_W
  { 1176,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1176 = MUL_R6
  { 1177,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1177 = MUL_S_PH
  { 1178,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo146,0,nullptr },  // Inst #1178 = Mfhi16
  { 1179,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo146,0,nullptr },  // Inst #1179 = Mflo16
  { 1180,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1180 = Move32R16
  { 1181,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1181 = MoveR3216
  { 1182,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo85,0,nullptr },  // Inst #1182 = MultRxRy16
  { 1183,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo35,0,nullptr },  // Inst #1183 = MultRxRyRz16
  { 1184,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo85,0,nullptr },  // Inst #1184 = MultuRxRy16
  { 1185,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo35,0,nullptr },  // Inst #1185 = MultuRxRyRz16
  { 1186,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1186 = NLOC_B
  { 1187,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #1187 = NLOC_D
  { 1188,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1188 = NLOC_H
  { 1189,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1189 = NLOC_W
  { 1190,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1190 = NLZC_B
  { 1191,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #1191 = NLZC_D
  { 1192,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1192 = NLZC_H
  { 1193,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1193 = NLZC_W
  { 1194,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1194 = NMADD_D32
  { 1195,	4,	1,	103,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1195 = NMADD_D32_MM
  { 1196,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1196 = NMADD_D64
  { 1197,	4,	1,	104,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1197 = NMADD_S
  { 1198,	4,	1,	104,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1198 = NMADD_S_MM
  { 1199,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1199 = NMSUB_D32
  { 1200,	4,	1,	105,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1200 = NMSUB_D32_MM
  { 1201,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1201 = NMSUB_D64
  { 1202,	4,	1,	106,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1202 = NMSUB_S
  { 1203,	4,	1,	106,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1203 = NMSUB_S_MM
  { 1204,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1204 = NOP
  { 1205,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1205 = NOR
  { 1206,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1206 = NOR64
  { 1207,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1207 = NORI_B
  { 1208,	3,	1,	107,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1208 = NOR_MM
  { 1209,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1209 = NOR_V
  { 1210,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1210 = NOR_V_D_PSEUDO
  { 1211,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1211 = NOR_V_H_PSEUDO
  { 1212,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1212 = NOR_V_W_PSEUDO
  { 1213,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #1213 = NegRxRy16
  { 1214,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #1214 = NotRxRy16
  { 1215,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1215 = OR
  { 1216,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1216 = OR64
  { 1217,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1217 = ORI_B
  { 1218,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1218 = OR_MM
  { 1219,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1219 = OR_V
  { 1220,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1220 = OR_V_D_PSEUDO
  { 1221,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1221 = OR_V_H_PSEUDO
  { 1222,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1222 = OR_V_W_PSEUDO
  { 1223,	3,	1,	109,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1223 = ORi
  { 1224,	3,	1,	108,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1224 = ORi64
  { 1225,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1225 = ORi_MM
  { 1226,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1226 = OrRxRxRy16
  { 1227,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1227 = PACKRL_PH
  { 1228,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1228 = PAUSE
  { 1229,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1229 = PCKEV_B
  { 1230,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1230 = PCKEV_D
  { 1231,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1231 = PCKEV_H
  { 1232,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1232 = PCKEV_W
  { 1233,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1233 = PCKOD_B
  { 1234,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1234 = PCKOD_D
  { 1235,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1235 = PCKOD_H
  { 1236,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1236 = PCKOD_W
  { 1237,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1237 = PCNT_B
  { 1238,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #1238 = PCNT_D
  { 1239,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1239 = PCNT_H
  { 1240,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1240 = PCNT_W
  { 1241,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo14,0,nullptr },  // Inst #1241 = PICK_PH
  { 1242,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo14,0,nullptr },  // Inst #1242 = PICK_QB
  { 1243,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1243 = POP
  { 1244,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1244 = PRECEQU_PH_QBL
  { 1245,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1245 = PRECEQU_PH_QBLA
  { 1246,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1246 = PRECEQU_PH_QBR
  { 1247,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1247 = PRECEQU_PH_QBRA
  { 1248,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1248 = PRECEQ_W_PHL
  { 1249,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1249 = PRECEQ_W_PHR
  { 1250,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1250 = PRECEU_PH_QBL
  { 1251,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1251 = PRECEU_PH_QBLA
  { 1252,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1252 = PRECEU_PH_QBR
  { 1253,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #1253 = PRECEU_PH_QBRA
  { 1254,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo14,0,nullptr },  // Inst #1254 = PRECRQU_S_QB_PH
  { 1255,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1255 = PRECRQ_PH_W
  { 1256,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1256 = PRECRQ_QB_PH
  { 1257,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo221,0,nullptr },  // Inst #1257 = PRECRQ_RS_PH_W
  { 1258,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1258 = PRECR_QB_PH
  { 1259,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1259 = PRECR_SRA_PH_W
  { 1260,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1260 = PRECR_SRA_R_PH_W
  { 1261,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1261 = PREF
  { 1262,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1262 = PREF_R6
  { 1263,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1263 = PREPEND
  { 1264,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1264 = PseudoCMPU_EQ_QB
  { 1265,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1265 = PseudoCMPU_LE_QB
  { 1266,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1266 = PseudoCMPU_LT_QB
  { 1267,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1267 = PseudoCMP_EQ_PH
  { 1268,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1268 = PseudoCMP_LE_PH
  { 1269,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1269 = PseudoCMP_LT_PH
  { 1270,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1270 = PseudoCVT_D32_W
  { 1271,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #1271 = PseudoCVT_D64_L
  { 1272,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1272 = PseudoCVT_D64_W
  { 1273,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #1273 = PseudoCVT_S_L
  { 1274,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1274 = PseudoCVT_S_W
  { 1275,	3,	1,	23,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1275 = PseudoDMULT
  { 1276,	3,	1,	24,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1276 = PseudoDMULTu
  { 1277,	3,	1,	29,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1277 = PseudoDSDIV
  { 1278,	3,	1,	41,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1278 = PseudoDUDIV
  { 1279,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1279 = PseudoIndirectBranch
  { 1280,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #1280 = PseudoIndirectBranch64
  { 1281,	4,	1,	74,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1281 = PseudoMADD
  { 1282,	4,	1,	75,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1282 = PseudoMADDU
  { 1283,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1283 = PseudoMFHI
  { 1284,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1284 = PseudoMFHI64
  { 1285,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1285 = PseudoMFLO
  { 1286,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1286 = PseudoMFLO64
  { 1287,	4,	1,	93,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1287 = PseudoMSUB
  { 1288,	4,	1,	94,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1288 = PseudoMSUBU
  { 1289,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1289 = PseudoMTLOHI
  { 1290,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1290 = PseudoMTLOHI64
  { 1291,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1291 = PseudoMTLOHI_DSP
  { 1292,	3,	1,	101,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1292 = PseudoMULT
  { 1293,	3,	1,	102,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1293 = PseudoMULTu
  { 1294,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1294 = PseudoPICK_PH
  { 1295,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1295 = PseudoPICK_QB
  { 1296,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1296 = PseudoReturn
  { 1297,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #1297 = PseudoReturn64
  { 1298,	3,	1,	110,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1298 = PseudoSDIV
  { 1299,	3,	1,	111,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1299 = PseudoUDIV
  { 1300,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1300 = RADDU_W_QB
  { 1301,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1301 = RDDSP
  { 1302,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1302 = RDHWR
  { 1303,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1303 = RDHWR64
  { 1304,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1304 = REPLV_PH
  { 1305,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1305 = REPLV_QB
  { 1306,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1306 = REPL_PH
  { 1307,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1307 = REPL_QB
  { 1308,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1308 = RINT_D
  { 1309,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1309 = RINT_S
  { 1310,	3,	1,	113,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1310 = ROTR
  { 1311,	3,	1,	114,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1311 = ROTRV
  { 1312,	3,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1312 = ROTRV_MM
  { 1313,	3,	1,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1313 = ROTR_MM
  { 1314,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1314 = ROUND_L_D64
  { 1315,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #1315 = ROUND_L_S
  { 1316,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1316 = ROUND_W_D32
  { 1317,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1317 = ROUND_W_D64
  { 1318,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1318 = ROUND_W_MM
  { 1319,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1319 = ROUND_W_S
  { 1320,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1320 = ROUND_W_S_MM
  { 1321,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1321 = Restore16
  { 1322,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1322 = RestoreX16
  { 1323,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1323 = RetRA
  { 1324,	0,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1324 = RetRA16
  { 1325,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1325 = SAT_S_B
  { 1326,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1326 = SAT_S_D
  { 1327,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1327 = SAT_S_H
  { 1328,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1328 = SAT_S_W
  { 1329,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1329 = SAT_U_B
  { 1330,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1330 = SAT_U_D
  { 1331,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1331 = SAT_U_H
  { 1332,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1332 = SAT_U_W
  { 1333,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1333 = SB
  { 1334,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1334 = SB64
  { 1335,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1335 = SB_MM
  { 1336,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1336 = SC
  { 1337,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1337 = SCD
  { 1338,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1338 = SCD_R6
  { 1339,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1339 = SC_MM
  { 1340,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1340 = SC_R6
  { 1341,	3,	0,	118,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1341 = SD
  { 1342,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1342 = SDBBP
  { 1343,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1343 = SDBBP_R6
  { 1344,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #1344 = SDC1
  { 1345,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1345 = SDC164
  { 1346,	3,	0,	119,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #1346 = SDC1_MM
  { 1347,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1347 = SDC2
  { 1348,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1348 = SDC2_R6
  { 1349,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1349 = SDC3
  { 1350,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1350 = SDIV
  { 1351,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1351 = SDIV_MM
  { 1352,	3,	0,	120,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1352 = SDL
  { 1353,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1353 = SDR
  { 1354,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #1354 = SDXC1
  { 1355,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1355 = SDXC164
  { 1356,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1356 = SEB
  { 1357,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1357 = SEB64
  { 1358,	2,	1,	123,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1358 = SEB_MM
  { 1359,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1359 = SEH
  { 1360,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #1360 = SEH64
  { 1361,	2,	1,	124,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1361 = SEH_MM
  { 1362,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1362 = SELEQZ
  { 1363,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1363 = SELEQZ64
  { 1364,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #1364 = SELEQZ_D
  { 1365,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1365 = SELEQZ_S
  { 1366,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1366 = SELNEZ
  { 1367,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1367 = SELNEZ64
  { 1368,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #1368 = SELNEZ_D
  { 1369,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1369 = SELNEZ_S
  { 1370,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1370 = SEL_D
  { 1371,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1371 = SEL_S
  { 1372,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1372 = SEQ
  { 1373,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1373 = SEQi
  { 1374,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1374 = SH
  { 1375,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1375 = SH64
  { 1376,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1376 = SHF_B
  { 1377,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1377 = SHF_H
  { 1378,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1378 = SHF_W
  { 1379,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1379 = SHILO
  { 1380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1380 = SHILOV
  { 1381,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245,0,nullptr },  // Inst #1381 = SHLLV_PH
  { 1382,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245,0,nullptr },  // Inst #1382 = SHLLV_QB
  { 1383,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245,0,nullptr },  // Inst #1383 = SHLLV_S_PH
  { 1384,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo12,0,nullptr },  // Inst #1384 = SHLLV_S_W
  { 1385,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1385 = SHLL_PH
  { 1386,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1386 = SHLL_QB
  { 1387,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1387 = SHLL_S_PH
  { 1388,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo23,0,nullptr },  // Inst #1388 = SHLL_S_W
  { 1389,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1389 = SHRAV_PH
  { 1390,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1390 = SHRAV_QB
  { 1391,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1391 = SHRAV_R_PH
  { 1392,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1392 = SHRAV_R_QB
  { 1393,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1393 = SHRAV_R_W
  { 1394,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1394 = SHRA_PH
  { 1395,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1395 = SHRA_QB
  { 1396,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1396 = SHRA_R_PH
  { 1397,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1397 = SHRA_R_QB
  { 1398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1398 = SHRA_R_W
  { 1399,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1399 = SHRLV_PH
  { 1400,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1400 = SHRLV_QB
  { 1401,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1401 = SHRL_PH
  { 1402,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1402 = SHRL_QB
  { 1403,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1403 = SH_MM
  { 1404,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo45,0,nullptr },  // Inst #1404 = SLDI_B
  { 1405,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1405 = SLDI_D
  { 1406,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #1406 = SLDI_H
  { 1407,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #1407 = SLDI_W
  { 1408,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1408 = SLD_B
  { 1409,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1409 = SLD_D
  { 1410,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1410 = SLD_H
  { 1411,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1411 = SLD_W
  { 1412,	3,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1412 = SLL
  { 1413,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #1413 = SLL64_32
  { 1414,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1414 = SLL64_64
  { 1415,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1415 = SLLI_B
  { 1416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1416 = SLLI_D
  { 1417,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1417 = SLLI_H
  { 1418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1418 = SLLI_W
  { 1419,	3,	1,	129,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1419 = SLLV
  { 1420,	3,	1,	129,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1420 = SLLV_MM
  { 1421,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1421 = SLL_B
  { 1422,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1422 = SLL_D
  { 1423,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1423 = SLL_H
  { 1424,	3,	1,	128,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1424 = SLL_MM
  { 1425,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1425 = SLL_W
  { 1426,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1426 = SLT
  { 1427,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1427 = SLT64
  { 1428,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1428 = SLT_MM
  { 1429,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1429 = SLTi
  { 1430,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1430 = SLTi64
  { 1431,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1431 = SLTi_MM
  { 1432,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1432 = SLTiu
  { 1433,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1433 = SLTiu64
  { 1434,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1434 = SLTiu_MM
  { 1435,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1435 = SLTu
  { 1436,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1436 = SLTu64
  { 1437,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1437 = SLTu_MM
  { 1438,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1438 = SNE
  { 1439,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1439 = SNEi
  { 1440,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1440 = SNZ_B_PSEUDO
  { 1441,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1441 = SNZ_D_PSEUDO
  { 1442,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1442 = SNZ_H_PSEUDO
  { 1443,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1443 = SNZ_V_PSEUDO
  { 1444,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1444 = SNZ_W_PSEUDO
  { 1445,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1445 = SPLATI_B
  { 1446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1446 = SPLATI_D
  { 1447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1447 = SPLATI_H
  { 1448,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1448 = SPLATI_W
  { 1449,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1449 = SPLAT_B
  { 1450,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1450 = SPLAT_D
  { 1451,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1451 = SPLAT_H
  { 1452,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1452 = SPLAT_W
  { 1453,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1453 = SRA
  { 1454,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1454 = SRAI_B
  { 1455,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1455 = SRAI_D
  { 1456,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1456 = SRAI_H
  { 1457,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1457 = SRAI_W
  { 1458,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1458 = SRARI_B
  { 1459,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1459 = SRARI_D
  { 1460,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1460 = SRARI_H
  { 1461,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1461 = SRARI_W
  { 1462,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1462 = SRAR_B
  { 1463,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1463 = SRAR_D
  { 1464,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1464 = SRAR_H
  { 1465,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1465 = SRAR_W
  { 1466,	3,	1,	133,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1466 = SRAV
  { 1467,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1467 = SRAV_MM
  { 1468,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1468 = SRA_B
  { 1469,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1469 = SRA_D
  { 1470,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1470 = SRA_H
  { 1471,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1471 = SRA_MM
  { 1472,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1472 = SRA_W
  { 1473,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1473 = SRL
  { 1474,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1474 = SRLI_B
  { 1475,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1475 = SRLI_D
  { 1476,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1476 = SRLI_H
  { 1477,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1477 = SRLI_W
  { 1478,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1478 = SRLRI_B
  { 1479,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1479 = SRLRI_D
  { 1480,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1480 = SRLRI_H
  { 1481,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1481 = SRLRI_W
  { 1482,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1482 = SRLR_B
  { 1483,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1483 = SRLR_D
  { 1484,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1484 = SRLR_H
  { 1485,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1485 = SRLR_W
  { 1486,	3,	1,	135,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1486 = SRLV
  { 1487,	3,	1,	135,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1487 = SRLV_MM
  { 1488,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1488 = SRL_B
  { 1489,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1489 = SRL_D
  { 1490,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1490 = SRL_H
  { 1491,	3,	1,	134,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1491 = SRL_MM
  { 1492,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1492 = SRL_W
  { 1493,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1493 = SSNOP
  { 1494,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1494 = STORE_ACC128
  { 1495,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1495 = STORE_ACC64
  { 1496,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1496 = STORE_ACC64DSP
  { 1497,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1497 = STORE_CCOND_DSP
  { 1498,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1498 = ST_B
  { 1499,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #1499 = ST_D
  { 1500,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #1500 = ST_H
  { 1501,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #1501 = ST_W
  { 1502,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1502 = SUB
  { 1503,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1503 = SUBQH_PH
  { 1504,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1504 = SUBQH_R_PH
  { 1505,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1505 = SUBQH_R_W
  { 1506,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1506 = SUBQH_W
  { 1507,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1507 = SUBQ_PH
  { 1508,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1508 = SUBQ_S_PH
  { 1509,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #1509 = SUBQ_S_W
  { 1510,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1510 = SUBSUS_U_B
  { 1511,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1511 = SUBSUS_U_D
  { 1512,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1512 = SUBSUS_U_H
  { 1513,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1513 = SUBSUS_U_W
  { 1514,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1514 = SUBSUU_S_B
  { 1515,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1515 = SUBSUU_S_D
  { 1516,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1516 = SUBSUU_S_H
  { 1517,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1517 = SUBSUU_S_W
  { 1518,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1518 = SUBS_S_B
  { 1519,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1519 = SUBS_S_D
  { 1520,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1520 = SUBS_S_H
  { 1521,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1521 = SUBS_S_W
  { 1522,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1522 = SUBS_U_B
  { 1523,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1523 = SUBS_U_D
  { 1524,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1524 = SUBS_U_H
  { 1525,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1525 = SUBS_U_W
  { 1526,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1526 = SUBUH_QB
  { 1527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1527 = SUBUH_R_QB
  { 1528,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1528 = SUBU_PH
  { 1529,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1529 = SUBU_QB
  { 1530,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1530 = SUBU_S_PH
  { 1531,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1531 = SUBU_S_QB
  { 1532,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1532 = SUBVI_B
  { 1533,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1533 = SUBVI_D
  { 1534,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1534 = SUBVI_H
  { 1535,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1535 = SUBVI_W
  { 1536,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1536 = SUBV_B
  { 1537,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1537 = SUBV_D
  { 1538,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1538 = SUBV_H
  { 1539,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1539 = SUBV_W
  { 1540,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1540 = SUB_MM
  { 1541,	3,	1,	136,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1541 = SUBu
  { 1542,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1542 = SUBu_MM
  { 1543,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #1543 = SUXC1
  { 1544,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1544 = SUXC164
  { 1545,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #1545 = SUXC1_MM
  { 1546,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1546 = SW
  { 1547,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1547 = SW64
  { 1548,	3,	0,	139,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1548 = SWC1
  { 1549,	3,	0,	139,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1549 = SWC1_MM
  { 1550,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1550 = SWC2
  { 1551,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1551 = SWC2_R6
  { 1552,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1552 = SWC3
  { 1553,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1553 = SWL
  { 1554,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1554 = SWL64
  { 1555,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1555 = SWL_MM
  { 1556,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1556 = SWR
  { 1557,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1557 = SWR64
  { 1558,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1558 = SWR_MM
  { 1559,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1559 = SWXC1
  { 1560,	3,	0,	142,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1560 = SWXC1_MM
  { 1561,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1561 = SW_MM
  { 1562,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1562 = SYNC
  { 1563,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1563 = SYNC_MM
  { 1564,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1564 = SYSCALL
  { 1565,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1565 = SYSCALL_MM
  { 1566,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1566 = SZ_B_PSEUDO
  { 1567,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1567 = SZ_D_PSEUDO
  { 1568,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1568 = SZ_H_PSEUDO
  { 1569,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1569 = SZ_V_PSEUDO
  { 1570,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1570 = SZ_W_PSEUDO
  { 1571,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1571 = Save16
  { 1572,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1572 = SaveX16
  { 1573,	4,	0,	117,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1573 = SbRxRyOffMemX16
  { 1574,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1574 = SebRx16
  { 1575,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1575 = SehRx16
  { 1576,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1576 = SelBeqZ
  { 1577,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1577 = SelBneZ
  { 1578,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1578 = SelTBteqZCmp
  { 1579,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1579 = SelTBteqZCmpi
  { 1580,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1580 = SelTBteqZSlt
  { 1581,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1581 = SelTBteqZSlti
  { 1582,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1582 = SelTBteqZSltiu
  { 1583,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1583 = SelTBteqZSltu
  { 1584,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1584 = SelTBtneZCmp
  { 1585,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1585 = SelTBtneZCmpi
  { 1586,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1586 = SelTBtneZSlt
  { 1587,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1587 = SelTBtneZSlti
  { 1588,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1588 = SelTBtneZSltiu
  { 1589,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1589 = SelTBtneZSltu
  { 1590,	4,	0,	127,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1590 = ShRxRyOffMemX16
  { 1591,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1591 = SllX16
  { 1592,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1592 = SllvRxRy16
  { 1593,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #1593 = SltCCRxRy16
  { 1594,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo85,0,nullptr },  // Inst #1594 = SltRxRy16
  { 1595,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1595 = SltiCCRxImmX16
  { 1596,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #1596 = SltiRxImm16
  { 1597,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #1597 = SltiRxImmX16
  { 1598,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1598 = SltiuCCRxImmX16
  { 1599,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #1599 = SltiuRxImm16
  { 1600,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32,0,nullptr },  // Inst #1600 = SltiuRxImmX16
  { 1601,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #1601 = SltuCCRxRy16
  { 1602,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo85,0,nullptr },  // Inst #1602 = SltuRxRy16
  { 1603,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo35,0,nullptr },  // Inst #1603 = SltuRxRyRz16
  { 1604,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1604 = SraX16
  { 1605,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1605 = SravRxRy16
  { 1606,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1606 = SrlX16
  { 1607,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1607 = SrlvRxRy16
  { 1608,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #1608 = SubuRxRyRz16
  { 1609,	4,	0,	138,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1609 = SwRxRyOffMemX16
  { 1610,	3,	0,	138,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #1610 = SwRxSpImmX16
  { 1611,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #1611 = TAILCALL
  { 1612,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo145,0,nullptr },  // Inst #1612 = TAILCALL64_R
  { 1613,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo57,0,nullptr },  // Inst #1613 = TAILCALL_R
  { 1614,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1614 = TEQ
  { 1615,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1615 = TEQI
  { 1616,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1616 = TEQI_MM
  { 1617,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1617 = TEQ_MM
  { 1618,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1618 = TGE
  { 1619,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1619 = TGEI
  { 1620,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1620 = TGEIU
  { 1621,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1621 = TGEIU_MM
  { 1622,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1622 = TGEI_MM
  { 1623,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1623 = TGEU
  { 1624,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1624 = TGEU_MM
  { 1625,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1625 = TGE_MM
  { 1626,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1626 = TLBP
  { 1627,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1627 = TLBR
  { 1628,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1628 = TLBWI
  { 1629,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1629 = TLBWR
  { 1630,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1630 = TLT
  { 1631,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1631 = TLTI
  { 1632,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1632 = TLTIU_MM
  { 1633,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1633 = TLTI_MM
  { 1634,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1634 = TLTU
  { 1635,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1635 = TLTU_MM
  { 1636,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1636 = TLT_MM
  { 1637,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1637 = TNE
  { 1638,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1638 = TNEI
  { 1639,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1639 = TNEI_MM
  { 1640,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1640 = TNE_MM
  { 1641,	0,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1641 = TRAP
  { 1642,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1642 = TRUNC_L_D64
  { 1643,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #1643 = TRUNC_L_S
  { 1644,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1644 = TRUNC_W_D32
  { 1645,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1645 = TRUNC_W_D64
  { 1646,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1646 = TRUNC_W_MM
  { 1647,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1647 = TRUNC_W_S
  { 1648,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1648 = TRUNC_W_S_MM
  { 1649,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1649 = TTLTIU
  { 1650,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1650 = UDIV
  { 1651,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo11,0,nullptr },  // Inst #1651 = UDIV_MM
  { 1652,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo25,0,nullptr },  // Inst #1652 = V3MULU
  { 1653,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo25,0,nullptr },  // Inst #1653 = VMM0
  { 1654,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo25,0,nullptr },  // Inst #1654 = VMULU
  { 1655,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #1655 = VSHF_B
  { 1656,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #1656 = VSHF_D
  { 1657,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1657 = VSHF_H
  { 1658,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1658 = VSHF_W
  { 1659,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1659 = WAIT
  { 1660,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1660 = WAIT_MM
  { 1661,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1661 = WRDSP
  { 1662,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1662 = WSBH
  { 1663,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1663 = WSBH_MM
  { 1664,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1664 = XOR
  { 1665,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1665 = XOR64
  { 1666,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1666 = XORI_B
  { 1667,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1667 = XOR_MM
  { 1668,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1668 = XOR_V
  { 1669,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1669 = XOR_V_D_PSEUDO
  { 1670,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1670 = XOR_V_H_PSEUDO
  { 1671,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1671 = XOR_V_W_PSEUDO
  { 1672,	3,	1,	146,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1672 = XORi
  { 1673,	3,	1,	145,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1673 = XORi64
  { 1674,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1674 = XORi_MM
  { 1675,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1675 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'L', 'D', 'C', '1', 0,
  /* 32 */ 'S', 'D', 'C', '1', 0,
  /* 37 */ 'C', 'F', 'C', '1', 0,
  /* 42 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 48 */ 'C', 'T', 'C', '1', 0,
  /* 53 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 59 */ 'L', 'W', 'C', '1', 0,
  /* 64 */ 'S', 'W', 'C', '1', 0,
  /* 69 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 75 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 87 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 99 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'M', 'T', 'M', '1', 0,
  /* 110 */ 'M', 'T', 'P', '1', 0,
  /* 115 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 122 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 132 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 142 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 151 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 161 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 170 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 180 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 201 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 211 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 221 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 230 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 239 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 248 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 256 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 265 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 276 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 287 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 297 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 306 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 315 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 324 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 334 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 344 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 353 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 362 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 372 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 382 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 392 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 402 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 411 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 421 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 430 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 439 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 448 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 460 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 472 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 483 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 495 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 505 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 514 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 534 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 554 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 575 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 595 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 611 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 631 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 651 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 670 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 677 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 684 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 692 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 699 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 706 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 715 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 725 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 741 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 754 */ 'L', 'D', 'C', '2', 0,
  /* 759 */ 'S', 'D', 'C', '2', 0,
  /* 764 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 770 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 776 */ 'L', 'W', 'C', '2', 0,
  /* 781 */ 'S', 'W', 'C', '2', 0,
  /* 786 */ 'M', 'T', 'M', '2', 0,
  /* 791 */ 'M', 'T', 'P', '2', 0,
  /* 796 */ 'L', 'D', 'C', '3', 0,
  /* 801 */ 'S', 'D', 'C', '3', 0,
  /* 806 */ 'L', 'W', 'C', '3', 0,
  /* 811 */ 'S', 'W', 'C', '3', 0,
  /* 816 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 823 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 830 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 838 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 846 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 854 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 862 */ 'S', 'E', 'B', '6', '4', 0,
  /* 868 */ 'L', 'B', '6', '4', 0,
  /* 873 */ 'S', 'B', '6', '4', 0,
  /* 878 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 889 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 901 */ 'A', 'N', 'D', '6', '4', 0,
  /* 907 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 917 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 927 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 940 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 953 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 962 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 972 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 981 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 991 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1001 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1012 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1022 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1032 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1041 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1050 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1059 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1067 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1076 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1087 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1098 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1108 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1117 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1129 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1141 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1152 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1164 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1174 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1183 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1192 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1202 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1212 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1221 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1230 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1240 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1250 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1260 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1270 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1279 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1289 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1307 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1316 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1328 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1340 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1351 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1363 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1373 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1379 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1392 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1410 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1416 */ 'L', 'H', '6', '4', 0,
  /* 1421 */ 'S', 'H', '6', '4', 0,
  /* 1426 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1439 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1454 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1461 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1474 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1487 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1507 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1548 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1568 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1577 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1588 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1599 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1615 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1635 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1655 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1674 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1683 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1689 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1695 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1708 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1715 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1721 */ 'J', 'R', '6', '4', 0,
  /* 1726 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1733 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1739 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1745 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1753 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1759 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1765 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1771 */ 'L', 'W', '6', '4', 0,
  /* 1776 */ 'S', 'W', '6', '4', 0,
  /* 1781 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1788 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1795 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 1804 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 1813 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1820 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1827 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 1843 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 1864 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1873 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 1896 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 1903 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1910 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1917 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1923 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1938 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1954 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1960 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1966 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1973 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1985 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1993 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2003 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2011 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2018 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2038 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2058 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2079 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2099 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2115 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2135 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2155 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2174 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2184 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2191 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2202 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2210 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2225 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2240 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2255 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2270 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2277 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2284 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2300 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2316 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2332 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2348 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2365 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2382 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2401 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2417 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2433 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2449 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2463 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2476 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2489 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2504 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2520 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2531 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2544 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2557 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2571 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2585 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2601 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2614 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2627 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2635 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2651 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2664 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2678 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2692 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2706 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2720 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2736 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2752 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2767 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2782 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2791 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2800 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2808 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2815 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 2825 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 2839 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 2846 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2860 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2867 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 2875 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2881 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 2894 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2904 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2916 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2928 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2941 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2956 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2968 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2980 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 2987 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2994 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3006 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3014 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3022 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3030 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3042 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3055 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3065 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3075 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3085 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3096 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3106 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3117 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3129 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3140 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3151 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3161 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3172 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3183 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3195 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3206 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3218 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3231 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3244 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3257 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3270 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3284 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3292 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3300 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3308 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3316 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3324 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3332 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 3340 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 3349 */ 'S', 'C', '_', 'R', '6', 0,
  /* 3355 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 3362 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 3369 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 3378 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 3386 */ 'L', 'L', '_', 'R', '6', 0,
  /* 3392 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 3400 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 3408 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 3417 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 3425 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3437 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3450 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3469 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3488 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3508 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3561 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3580 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3598 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3613 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3629 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3644 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3660 */ 'D', 'S', 'R', 'A', 0,
  /* 3665 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3671 */ 'D', 'L', 'S', 'A', 0,
  /* 3676 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3683 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3690 */ 'S', 'E', 'B', 0,
  /* 3694 */ 'E', 'H', 'B', 0,
  /* 3698 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 3704 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 3712 */ 'L', 'B', 0,
  /* 3715 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3723 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3736 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3748 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3765 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3774 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3783 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3797 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3805 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3813 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3821 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3834 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3846 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3863 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3873 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3884 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3895 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3906 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3916 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3926 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3936 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3949 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3961 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3978 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 3986 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 3994 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4003 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4012 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4021 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4030 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4041 */ 'S', 'B', 0,
  /* 4044 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4051 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4062 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4068 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4076 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4084 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4093 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4101 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4108 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4115 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4121 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4129 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4137 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4145 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4152 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4159 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4166 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4173 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4180 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4188 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4196 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4203 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4210 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4219 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4226 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4234 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 4242 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 4250 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 4257 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 4264 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 4273 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 4282 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 4290 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 4298 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 4306 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 4313 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 4321 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 4328 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 4334 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 4340 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 4348 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 4355 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 4361 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 4368 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 4375 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 4382 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 4390 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 4397 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 4406 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 4414 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 4422 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4430 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4439 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4448 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4457 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4466 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4474 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4483 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4492 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4501 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4509 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4517 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4528 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4536 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4544 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4553 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4561 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4568 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4575 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4584 */ 'S', 'T', '_', 'B', 0,
  /* 4589 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4598 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4606 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4614 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4622 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4631 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4640 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4649 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4658 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4666 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4675 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4684 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4693 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4704 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4712 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4720 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4728 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4736 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4745 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 4753 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 4761 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 4769 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 4777 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 4784 */ 'B', 'Z', '_', 'B', 0,
  /* 4789 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 4795 */ 'B', 'C', 0,
  /* 4798 */ 'B', 'G', 'E', 'C', 0,
  /* 4803 */ 'B', 'N', 'E', 'C', 0,
  /* 4808 */ 'J', 'I', 'C', 0,
  /* 4812 */ 'B', 'A', 'L', 'C', 0,
  /* 4817 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 4823 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4831 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4839 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4847 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 4855 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4863 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4871 */ 'S', 'Y', 'N', 'C', 0,
  /* 4876 */ 'L', 'D', 'P', 'C', 0,
  /* 4881 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 4887 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 4894 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 4902 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 4908 */ 'L', 'W', 'P', 'C', 0,
  /* 4913 */ 'B', 'E', 'Q', 'C', 0,
  /* 4918 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4924 */ 'B', 'L', 'T', 'C', 0,
  /* 4929 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 4935 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 4941 */ 'B', 'N', 'V', 'C', 0,
  /* 4946 */ 'B', 'O', 'V', 'C', 0,
  /* 4951 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4957 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 4963 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 4969 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 4975 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 4981 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 4987 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 4993 */ 'S', 'C', 'D', 0,
  /* 4997 */ 'D', 'A', 'D', 'D', 0,
  /* 5002 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5013 */ 'D', 'S', 'H', 'D', 0,
  /* 5018 */ 'L', 'L', 'D', 0,
  /* 5022 */ 'A', 'N', 'D', 0,
  /* 5026 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5034 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5041 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5054 */ 'D', 'M', 'O', 'D', 0,
  /* 5059 */ 'S', 'D', 0,
  /* 5062 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5070 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5078 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5085 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5091 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5098 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5106 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5115 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5124 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5133 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5140 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5148 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5155 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5162 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5169 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5177 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5183 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5191 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5199 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5206 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 5213 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 5223 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 5231 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5239 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5250 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 5260 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 5269 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 5276 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 5283 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 5291 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 5299 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 5307 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 5314 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 5321 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 5331 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 5339 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 5347 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 5354 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 5362 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 5369 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 5376 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 5383 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 5391 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 5398 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 5405 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 5414 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 5421 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 5429 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 5437 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 5445 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 5454 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 5463 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 5471 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 5479 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 5487 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 5493 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 5500 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 5506 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 5515 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 5522 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 5528 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 5536 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 5543 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 5550 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 5557 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 5564 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 5571 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 5581 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 5590 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 5597 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 5604 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5611 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5621 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5629 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5637 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5648 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5658 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 5667 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 5674 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 5681 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 5688 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 5695 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 5702 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 5711 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 5718 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 5726 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 5733 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 5740 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 5749 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5758 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5767 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5777 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 5788 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5797 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5807 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 5815 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 5823 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 5831 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 5840 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 5849 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 5858 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 5867 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 5875 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 5884 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 5893 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 5902 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 5911 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 5919 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 5927 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5937 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5947 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 5958 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 5966 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 5974 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 5983 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 5991 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 5998 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6005 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6012 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6022 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6030 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6038 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6049 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6059 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6068 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6075 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6083 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6092 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6100 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6109 */ 'S', 'T', '_', 'D', 0,
  /* 6114 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6123 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6132 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6142 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6153 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6162 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6172 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6180 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6188 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6196 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6205 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 6214 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 6223 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 6232 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 6240 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 6249 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 6258 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 6267 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 6276 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 6287 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 6295 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 6303 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6313 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6323 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 6331 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 6339 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 6348 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 6356 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 6364 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 6372 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 6380 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 6387 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 6394 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 6401 */ 'B', 'Z', '_', 'D', 0,
  /* 6406 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 6415 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 6421 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 6430 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 6443 */ 'T', 'G', 'E', 0,
  /* 6447 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 6453 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 6460 */ 'B', 'N', 'E', 0,
  /* 6464 */ 'S', 'N', 'E', 0,
  /* 6468 */ 'T', 'N', 'E', 0,
  /* 6472 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 6478 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 6488 */ 'B', 'C', '1', 'F', 0,
  /* 6493 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 6506 */ 'P', 'R', 'E', 'F', 0,
  /* 6511 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6526 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6540 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 6554 */ 'D', 'S', 'B', 'H', 0,
  /* 6559 */ 'W', 'S', 'B', 'H', 0,
  /* 6564 */ 'S', 'E', 'H', 0,
  /* 6568 */ 'L', 'H', 0,
  /* 6571 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 6579 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6592 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6604 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6620 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 6636 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6645 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6654 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 6668 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 6676 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 6684 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 6692 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 6702 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 6709 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 6717 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 6725 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 6741 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 6751 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6762 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6773 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 6784 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 6795 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6805 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6814 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6824 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6834 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6844 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6854 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6864 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6874 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 6885 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 6901 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 6909 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 6917 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 6926 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 6935 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 6944 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 6953 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6962 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6973 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6987 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7001 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7010 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7022 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7036 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7048 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7061 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7074 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7084 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7094 */ 'S', 'H', 0,
  /* 7097 */ 'D', 'M', 'U', 'H', 0,
  /* 7102 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7108 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7116 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7124 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7133 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7141 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7148 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7155 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7161 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7169 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7177 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7185 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7192 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7199 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 7206 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 7213 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 7221 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 7228 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 7235 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 7244 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 7251 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 7259 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 7267 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 7275 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 7284 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 7293 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 7301 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 7309 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 7317 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 7324 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 7330 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 7336 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 7344 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 7351 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 7359 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 7365 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 7371 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 7380 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 7389 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 7397 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 7407 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 7417 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 7426 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 7433 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 7440 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 7447 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 7455 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 7462 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7471 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7480 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7490 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7499 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7509 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 7517 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 7525 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 7533 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 7542 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 7551 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 7560 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 7569 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 7577 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 7586 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 7595 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 7604 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 7613 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 7622 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 7630 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 7638 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 7649 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 7657 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 7667 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 7675 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 7684 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 7692 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 7699 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 7706 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 7715 */ 'S', 'T', '_', 'H', 0,
  /* 7720 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7729 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7738 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7748 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7757 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7767 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 7775 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 7783 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 7791 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 7800 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 7809 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 7818 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 7827 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 7835 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 7844 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 7853 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 7862 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 7871 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 7882 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 7890 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 7898 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 7906 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 7914 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 7923 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 7931 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 7939 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 7947 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 7955 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 7962 */ 'B', 'Z', '_', 'H', 0,
  /* 7967 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 7973 */ 'D', 'I', 0,
  /* 7976 */ 'T', 'G', 'E', 'I', 0,
  /* 7981 */ 'T', 'N', 'E', 'I', 0,
  /* 7986 */ 'D', 'A', 'H', 'I', 0,
  /* 7991 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8002 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8015 */ 'P', 'H', 'I', 0,
  /* 8019 */ 'M', 'T', 'H', 'I', 0,
  /* 8024 */ 'T', 'E', 'Q', 'I', 0,
  /* 8029 */ 'D', 'A', 'T', 'I', 0,
  /* 8034 */ 'T', 'L', 'T', 'I', 0,
  /* 8039 */ 'D', 'A', 'U', 'I', 0,
  /* 8044 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8050 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8061 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8072 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8079 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8088 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8097 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8104 */ 'J', 0,
  /* 8106 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8112 */ 'B', 'A', 'L', 0,
  /* 8116 */ 'J', 'A', 'L', 0,
  /* 8120 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8127 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8134 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8149 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8163 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8178 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8189 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8200 */ 'L', 'D', 'L', 0,
  /* 8204 */ 'S', 'D', 'L', 0,
  /* 8208 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8217 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8226 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8239 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8252 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8264 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8278 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 8287 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 8295 */ 'K', 'I', 'L', 'L', 0,
  /* 8300 */ 'D', 'S', 'L', 'L', 0,
  /* 8305 */ 'D', 'S', 'R', 'L', 0,
  /* 8310 */ 'D', 'M', 'U', 'L', 0,
  /* 8315 */ 'L', 'W', 'L', 0,
  /* 8319 */ 'S', 'W', 'L', 0,
  /* 8323 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 8339 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 8353 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8361 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8369 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8377 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8385 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8394 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8403 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8411 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8419 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8427 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8435 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8444 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8453 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8462 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8471 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8484 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8497 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8509 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8523 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8537 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8549 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8562 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8574 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8586 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 8598 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 8611 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 8621 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 8631 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 8641 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 8651 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 8658 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 8665 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 8671 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 8677 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8685 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8693 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 8701 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 8707 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8715 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8723 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 8730 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 8737 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 8744 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 8751 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 8759 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 8767 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 8775 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 8782 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 8788 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 8794 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 8800 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 8808 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 8816 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 8824 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 8832 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 8840 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 8848 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 8858 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 8868 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 8878 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 8888 */ 'J', '_', 'M', 'M', 0,
  /* 8893 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 8902 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 8909 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 8919 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 8929 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 8940 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 8947 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 8954 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 8962 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 8969 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 8976 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 8983 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 8991 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 8999 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9006 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9013 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 9019 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 9027 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 9034 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 9041 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 9049 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 9056 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 9063 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 9071 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 9078 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9088 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9099 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9109 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9120 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9131 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 9141 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 9151 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9163 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9175 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9185 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9196 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 9206 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9217 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9227 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9237 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9247 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9260 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9273 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9285 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9298 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9309 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 9317 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 9326 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 9334 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 9341 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 9348 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 9356 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 9365 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 9372 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 9381 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 9390 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 9398 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 9407 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 9416 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 9424 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 9431 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 9439 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9447 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9455 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9463 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 9471 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 9479 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 9488 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 9494 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 9500 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 9513 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 9524 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 9535 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 9545 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 9556 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 9567 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 9576 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9584 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9592 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 9599 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9607 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9615 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 9623 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 9631 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 9639 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 9647 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 9654 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 9661 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 9669 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 9677 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 9684 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 9692 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 9701 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 9714 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 9723 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 9733 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 9739 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 9745 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 9752 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 9759 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 9775 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 9792 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9809 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9826 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9842 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9855 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9867 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9882 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9897 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9914 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9929 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9943 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9958 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9973 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9988 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10001 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10013 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10027 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10042 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10057 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10072 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10085 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10097 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10110 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10122 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10137 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10152 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10169 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10184 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10198 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10213 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10228 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10243 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10256 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10268 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10289 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10311 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10332 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10353 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10375 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10396 */ 'D', 'C', 'L', 'O', 0,
  /* 10401 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 10412 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 10418 */ 'M', 'T', 'L', 'O', 0,
  /* 10423 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 10432 */ 'T', 'R', 'A', 'P', 0,
  /* 10437 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 10446 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 10452 */ 'T', 'L', 'B', 'P', 0,
  /* 10457 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 10464 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 10471 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 10477 */ 'D', 'P', 'O', 'P', 0,
  /* 10482 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10496 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10511 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 10517 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 10523 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 10532 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 10541 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10556 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10572 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10581 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10598 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10607 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10616 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10625 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 10634 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 10644 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 10654 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 10664 */ 'E', 'X', 'T', 'P', 0,
  /* 10669 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 10684 */ 'B', 'E', 'Q', 0,
  /* 10688 */ 'S', 'E', 'Q', 0,
  /* 10692 */ 'T', 'E', 'Q', 0,
  /* 10696 */ 'T', 'L', 'B', 'R', 0,
  /* 10701 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10716 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10730 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10745 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10756 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10767 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 10774 */ 'L', 'D', 'R', 0,
  /* 10778 */ 'S', 'D', 'R', 0,
  /* 10782 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10795 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10808 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10820 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10834 */ 'J', 'R', 0,
  /* 10837 */ 'J', 'A', 'L', 'R', 0,
  /* 10842 */ 'N', 'O', 'R', 0,
  /* 10846 */ 'X', 'O', 'R', 0,
  /* 10850 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 10856 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 10862 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 10868 */ 'L', 'W', 'R', 0,
  /* 10872 */ 'S', 'W', 'R', 0,
  /* 10876 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 10889 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 10900 */ 'C', 'I', 'N', 'S', 0,
  /* 10905 */ 'D', 'I', 'N', 'S', 0,
  /* 10910 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 10927 */ 'E', 'X', 'T', 'S', 0,
  /* 10932 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 10942 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 10952 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 10963 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 10974 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 10981 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 10988 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 10995 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 11003 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 11010 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 11018 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 11026 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 11035 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 11043 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 11053 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 11064 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11072 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11082 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 11089 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 11098 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 11108 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 11116 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 11124 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 11131 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 11138 */ 'C', '_', 'F', '_', 'S', 0,
  /* 11144 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 11152 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 11159 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 11168 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 11177 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 11183 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 11191 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 11198 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 11208 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 11218 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 11227 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 11237 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 11245 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 11251 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 11261 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 11268 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 11277 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11285 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11295 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11306 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11314 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11324 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 11331 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 11340 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 11347 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 11355 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 11363 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 11371 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 11381 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 11392 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11400 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11410 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 11417 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 11426 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 11433 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 11441 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 11448 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 11455 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 11462 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 11472 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 11482 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 11491 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 11501 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 11509 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 11515 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 11524 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 11533 */ 'B', 'C', '1', 'T', 0,
  /* 11538 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 11544 */ 'W', 'A', 'I', 'T', 0,
  /* 11549 */ 'S', 'L', 'T', 0,
  /* 11553 */ 'T', 'L', 'T', 0,
  /* 11557 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 11569 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 11580 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 11591 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 11606 */ 'D', 'E', 'X', 'T', 0,
  /* 11611 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 11623 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 11635 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 11641 */ 'T', 'G', 'E', 'U', 0,
  /* 11646 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 11652 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 11658 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 11665 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 11672 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 11678 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 11684 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 11690 */ 'T', 'L', 'T', 'U', 0,
  /* 11695 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 11701 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 11707 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 11713 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 11720 */ 'D', 'D', 'I', 'V', 0,
  /* 11725 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 11737 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 11748 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 11760 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 11771 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 11777 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 11783 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 11790 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 11798 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 11804 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 11811 */ 'I', 'N', 'S', 'V', 0,
  /* 11816 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 11822 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 11829 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 11836 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 11842 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 11848 */ 'B', 'Z', '_', 'V', 0,
  /* 11853 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 11859 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 11865 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 11872 */ 'L', 'W', 0,
  /* 11875 */ 'S', 'W', 0,
  /* 11878 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 11894 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 11902 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 11910 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 11926 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 11932 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 11940 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 11949 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 11958 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 11967 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 11974 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 11982 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 11989 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 11996 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 12003 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 12011 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 12017 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 12025 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 12033 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 12040 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 12047 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 12055 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 12063 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 12070 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 12077 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 12085 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 12093 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 12101 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 12108 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 12115 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 12122 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 12129 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 12144 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 12156 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 12173 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 12188 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 12196 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 12204 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 12211 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 12218 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 12226 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 12233 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 12240 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 12249 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 12256 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 12264 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 12272 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 12280 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 12289 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 12298 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 12306 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 12314 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 12322 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 12329 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 12335 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 12344 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 12351 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 12357 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 12365 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 12372 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 12379 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12391 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12403 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 12410 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 12417 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 12424 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 12432 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 12439 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 12446 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 12453 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12461 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12469 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 12475 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 12484 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 12493 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 12501 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 12511 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 12521 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 12530 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 12537 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 12544 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 12551 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 12558 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 12565 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 12574 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 12581 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 12589 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 12596 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 12603 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 12612 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12622 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12632 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 12641 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 12651 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 12661 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 12668 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 12678 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 12688 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 12699 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 12708 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12717 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12726 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12736 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 12747 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 12756 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 12766 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 12774 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 12782 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 12790 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 12799 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 12808 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 12817 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 12826 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 12835 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 12843 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 12852 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 12861 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 12870 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 12879 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 12888 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 12897 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 12906 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 12915 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 12923 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 12931 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 12941 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 12951 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 12965 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 12976 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 12984 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 12994 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 13002 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 13011 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 13019 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 13026 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 13033 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 13040 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 13048 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 13056 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 13063 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 13071 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 13080 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13088 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13097 */ 'S', 'T', '_', 'W', 0,
  /* 13102 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13111 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13120 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13130 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 13141 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13150 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13160 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 13168 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 13176 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 13184 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 13193 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 13202 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 13211 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 13220 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 13228 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 13237 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 13246 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 13255 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 13264 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 13275 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 13283 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 13291 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13301 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13311 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 13319 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 13327 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 13336 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 13344 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 13352 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 13360 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 13368 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 13375 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 13382 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 13390 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 13397 */ 'B', 'Z', '_', 'W', 0,
  /* 13402 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 13408 */ 'L', 'H', 'X', 0,
  /* 13412 */ 'J', 'A', 'L', 'X', 0,
  /* 13417 */ 'L', 'B', 'U', 'X', 0,
  /* 13422 */ 'L', 'W', 'X', 0,
  /* 13426 */ 'C', 'O', 'P', 'Y', 0,
  /* 13431 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 13447 */ 'B', 'G', 'E', 'Z', 0,
  /* 13452 */ 'B', 'L', 'E', 'Z', 0,
  /* 13457 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 13464 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 13471 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 13478 */ 'D', 'C', 'L', 'Z', 0,
  /* 13483 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 13490 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 13497 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 13504 */ 'B', 'G', 'T', 'Z', 0,
  /* 13509 */ 'B', 'L', 'T', 'Z', 0,
  /* 13514 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 13522 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 13530 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 13543 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 13557 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 'R', 'e', 'g', 0,
  /* 13570 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 13591 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 13597 */ 'A', 'N', 'D', 'i', 0,
  /* 13602 */ 'S', 'N', 'E', 'i', 0,
  /* 13607 */ 'S', 'E', 'Q', 'i', 0,
  /* 13612 */ 'X', 'O', 'R', 'i', 0,
  /* 13617 */ 'S', 'L', 'T', 'i', 0,
  /* 13622 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 13638 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13652 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13666 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 13680 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 13694 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 13708 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 13721 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 13734 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 13745 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 13758 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 13771 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 13784 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 13797 */ 'L', 'B', 'u', 0,
  /* 13801 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 13807 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 13813 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 13819 */ 'L', 'H', 'u', 0,
  /* 13823 */ 'S', 'L', 'T', 'u', 0,
  /* 13828 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 13841 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 13853 */ 'L', 'W', 'u', 0,
  /* 13857 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13876 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13886 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13904 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 13910 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 13925 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 13940 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 13954 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8015U, 9723U, 9759U, 8217U, 8208U, 8295U, 6511U, 6526U, 
    6493U, 6540U, 10910U, 6478U, 6430U, 13426U, 6453U, 11591U, 
    5041U, 10423U, 11580U, 6844U, 3906U, 12879U, 4998U, 4894U, 
    6645U, 6762U, 12622U, 12196U, 6717U, 6824U, 12861U, 4918U, 
    4084U, 5115U, 7124U, 11949U, 4492U, 5902U, 7613U, 12906U, 
    4684U, 6267U, 7862U, 13255U, 3774U, 3884U, 6909U, 3986U, 
    6864U, 3926U, 4298U, 5479U, 7309U, 12314U, 4754U, 6357U, 
    7932U, 13345U, 4951U, 4068U, 5098U, 7108U, 11932U, 8708U, 
    13592U, 9615U, 13870U, 9705U, 13808U, 9669U, 9775U, 10669U, 
    9746U, 4887U, 5022U, 901U, 4173U, 8723U, 11816U, 9943U, 
    10027U, 10198U, 13597U, 1896U, 9623U, 5034U, 4397U, 5749U, 
    7462U, 12708U, 4589U, 6114U, 7720U, 13102U, 2115U, 611U, 
    1615U, 3542U, 2038U, 534U, 1507U, 3469U, 2079U, 575U, 
    1548U, 3508U, 2058U, 554U, 1527U, 3488U, 2155U, 651U, 
    1655U, 3580U, 2018U, 514U, 1487U, 3450U, 2135U, 631U, 
    1635U, 3561U, 2099U, 595U, 1599U, 3527U, 8040U, 4881U, 
    4474U, 5884U, 7586U, 12888U, 4666U, 6249U, 7844U, 13237U, 
    4422U, 5823U, 7525U, 12782U, 4614U, 6188U, 7783U, 13176U, 
    2557U, 2433U, 2941U, 2585U, 2382U, 2881U, 2449U, 3244U, 
    3183U, 3692U, 13807U, 8112U, 4812U, 9745U, 10767U, 4795U, 
    13483U, 6488U, 8751U, 13457U, 11533U, 9309U, 13490U, 13464U, 
    4234U, 5429U, 7259U, 12264U, 4368U, 5674U, 7433U, 12537U, 
    10684U, 1715U, 4913U, 4847U, 4975U, 8999U, 4798U, 4929U, 
    13447U, 1781U, 8120U, 4823U, 8909U, 4957U, 9576U, 13504U, 
    1813U, 4855U, 4981U, 9599U, 4210U, 5405U, 7235U, 12240U, 
    4340U, 5528U, 7336U, 12357U, 4264U, 5445U, 7275U, 12280U, 
    4382U, 5718U, 7447U, 12581U, 11713U, 10438U, 13452U, 1788U, 
    4831U, 4963U, 9584U, 4924U, 4935U, 13509U, 1820U, 8127U, 
    4863U, 8919U, 4987U, 9607U, 4313U, 11865U, 4306U, 11853U, 
    6460U, 1373U, 4803U, 4180U, 5383U, 7213U, 12218U, 4152U, 
    5362U, 7192U, 12122U, 4839U, 4969U, 8737U, 4941U, 4789U, 
    6415U, 7967U, 11859U, 13402U, 4946U, 505U, 9826U, 8106U, 
    8893U, 4188U, 9929U, 9867U, 10122U, 10013U, 11829U, 10184U, 
    4282U, 5463U, 7293U, 12298U, 4561U, 5991U, 7692U, 13019U, 
    4784U, 6401U, 7962U, 11848U, 13397U, 2968U, 2614U, 2980U, 
    2627U, 2956U, 2601U, 2867U, 3292U, 2678U, 2225U, 2706U, 
    2255U, 2736U, 2767U, 2791U, 3284U, 2664U, 2210U, 2692U, 
    2240U, 2720U, 2752U, 2782U, 1379U, 1827U, 6447U, 3369U, 
    1141U, 11218U, 472U, 1340U, 9535U, 11482U, 9273U, 4219U, 
    5414U, 7244U, 12249U, 4355U, 5598U, 7359U, 12440U, 37U, 
    8369U, 3676U, 10900U, 692U, 5741U, 11347U, 4430U, 5831U, 
    7533U, 12790U, 4622U, 6196U, 7791U, 13184U, 4414U, 5815U, 
    7517U, 12774U, 4606U, 6180U, 7775U, 13168U, 10397U, 8976U, 
    3401U, 4448U, 5849U, 7551U, 12808U, 4640U, 6214U, 7809U, 
    13202U, 4509U, 5919U, 7630U, 12923U, 4712U, 6295U, 7890U, 
    13283U, 13479U, 9592U, 3418U, 3821U, 3723U, 3936U, 3834U, 
    3736U, 3949U, 3852U, 3754U, 3967U, 5658U, 6731U, 11331U, 
    5354U, 11144U, 5260U, 6626U, 11089U, 6059U, 6891U, 11417U, 
    5321U, 11098U, 5611U, 11285U, 5213U, 11043U, 6012U, 11371U, 
    5637U, 11295U, 5239U, 11053U, 6038U, 11381U, 5571U, 11251U, 
    5648U, 11314U, 5250U, 11072U, 6049U, 11400U, 5581U, 11268U, 
    13431U, 9914U, 10169U, 4544U, 5974U, 7675U, 13002U, 4736U, 
    6339U, 7914U, 13327U, 48U, 8403U, 3683U, 10932U, 11884U, 
    9500U, 8329U, 10942U, 11916U, 9120U, 1164U, 8598U, 11237U, 
    9185U, 362U, 8549U, 1230U, 8345U, 12957U, 9556U, 495U, 
    1363U, 9567U, 11501U, 9298U, 344U, 1212U, 11324U, 248U, 
    1059U, 11138U, 221U, 1032U, 11082U, 402U, 1270U, 11410U, 
    180U, 991U, 11018U, 190U, 1001U, 11026U, 287U, 1098U, 
    11183U, 372U, 1240U, 11355U, 201U, 1012U, 11035U, 382U, 
    1250U, 11363U, 324U, 1192U, 11277U, 230U, 1041U, 11124U, 
    334U, 1202U, 11306U, 211U, 1022U, 11064U, 392U, 1260U, 
    11392U, 306U, 1174U, 11261U, 3065U, 2904U, 2531U, 743U, 
    4997U, 13591U, 13869U, 13813U, 7986U, 9752U, 8029U, 8039U, 
    10437U, 10396U, 3400U, 13478U, 3417U, 11720U, 11701U, 11538U, 
    9317U, 11606U, 9739U, 11695U, 7973U, 10905U, 9733U, 11684U, 
    11721U, 11702U, 4528U, 5958U, 7649U, 12976U, 4720U, 6323U, 
    7898U, 13311U, 8794U, 3671U, 3332U, 0U, 42U, 764U, 
    5054U, 11635U, 6U, 53U, 770U, 7097U, 11646U, 8310U, 
    11563U, 13834U, 11672U, 3392U, 5875U, 7577U, 12843U, 6240U, 
    7835U, 13228U, 5797U, 7499U, 12756U, 6162U, 7757U, 13150U, 
    6973U, 7048U, 12379U, 7010U, 8178U, 10745U, 7074U, 6953U, 
    10477U, 6987U, 7061U, 12391U, 7036U, 5767U, 7480U, 12726U, 
    6132U, 7738U, 13120U, 8189U, 10756U, 7084U, 7001U, 10850U, 
    684U, 11804U, 6554U, 11731U, 5013U, 8300U, 670U, 715U, 
    11771U, 3660U, 115U, 11707U, 8305U, 677U, 11777U, 4046U, 
    13801U, 11754U, 3151U, 3129U, 3694U, 7978U, 8802U, 11539U, 
    9318U, 11607U, 10664U, 10457U, 11790U, 11798U, 12688U, 12651U, 
    7657U, 13382U, 12678U, 12632U, 7595U, 12589U, 10927U, 699U, 
    9365U, 1392U, 1843U, 5733U, 353U, 1221U, 9063U, 11340U, 
    9196U, 12661U, 5162U, 161U, 972U, 8707U, 11003U, 9099U, 
    11996U, 5307U, 12101U, 5597U, 12439U, 5740U, 12699U, 5199U, 
    12033U, 5998U, 13026U, 315U, 8537U, 1183U, 706U, 8586U, 
    5269U, 12063U, 5688U, 12551U, 5621U, 12453U, 5223U, 12047U, 
    6022U, 13040U, 5283U, 12077U, 5557U, 12410U, 6380U, 430U, 
    1298U, 9439U, 11448U, 9227U, 13368U, 7351U, 12424U, 5070U, 
    9792U, 11902U, 9809U, 5506U, 12335U, 5702U, 12565U, 5927U, 
    12931U, 6303U, 13291U, 5515U, 12344U, 5711U, 12574U, 4321U, 
    5493U, 9882U, 10137U, 7317U, 12322U, 5062U, 11894U, 1152U, 
    11227U, 483U, 1351U, 9545U, 11491U, 9285U, 5169U, 12003U, 
    5124U, 11958U, 6394U, 13390U, 5106U, 11940U, 5550U, 12403U, 
    439U, 8574U, 1307U, 11455U, 9237U, 5140U, 11974U, 5536U, 
    297U, 1108U, 8954U, 11191U, 9175U, 12365U, 256U, 1067U, 
    8759U, 11152U, 9141U, 5590U, 12432U, 6075U, 13063U, 6100U, 
    13088U, 5314U, 12108U, 5604U, 12446U, 5206U, 12040U, 6005U, 
    13033U, 5276U, 12070U, 5695U, 12558U, 6092U, 411U, 1279U, 
    9356U, 11433U, 9206U, 13080U, 5133U, 142U, 953U, 8677U, 
    10988U, 9078U, 11967U, 5629U, 12461U, 5231U, 12055U, 6030U, 
    13048U, 5291U, 12085U, 5564U, 12417U, 5937U, 12941U, 6313U, 
    13301U, 7365U, 12469U, 5777U, 12736U, 6142U, 13130U, 2825U, 
    5788U, 7490U, 12747U, 6153U, 7748U, 13141U, 5758U, 7471U, 
    12717U, 6123U, 7729U, 13111U, 4769U, 6372U, 7947U, 13360U, 
    4348U, 5543U, 7344U, 12372U, 4129U, 5191U, 7169U, 12025U, 
    4390U, 5726U, 7455U, 12596U, 10901U, 4575U, 10268U, 6083U, 
    10311U, 9897U, 10289U, 10152U, 10353U, 7706U, 10332U, 13071U, 
    10375U, 11811U, 4137U, 5299U, 7177U, 12093U, 9071U, 8104U, 
    8116U, 10837U, 8641U, 1726U, 13721U, 13734U, 3704U, 9019U, 
    13412U, 8902U, 4817U, 4808U, 10834U, 1721U, 3698U, 3340U, 
    9013U, 8888U, 2875U, 2011U, 2808U, 2800U, 3014U, 2846U, 
    3712U, 868U, 13417U, 8665U, 13797U, 1954U, 9654U, 5019U, 
    27U, 816U, 8353U, 754U, 3300U, 796U, 4167U, 5377U, 
    7207U, 12212U, 8200U, 4876U, 10774U, 69U, 830U, 4116U, 
    5178U, 7156U, 12012U, 13876U, 1973U, 9701U, 6568U, 1416U, 
    13408U, 8782U, 13819U, 1960U, 9677U, 8284U, 5018U, 3362U, 
    8934U, 3386U, 3425U, 878U, 10482U, 10541U, 13886U, 13857U, 
    13622U, 3672U, 3333U, 81U, 846U, 8435U, 13634U, 1917U, 
    9647U, 11872U, 1771U, 59U, 8419U, 776U, 3316U, 806U, 
    8315U, 1683U, 8962U, 4908U, 10868U, 1753U, 9049U, 4902U, 
    9424U, 13422U, 93U, 8453U, 9488U, 13853U, 2284U, 2348U, 
    2316U, 2365U, 2894U, 2635U, 2520U, 13694U, 13543U, 13530U, 
    13557U, 741U, 2994U, 2651U, 2401U, 2463U, 5008U, 5339U, 
    11116U, 7407U, 12511U, 11629U, 10644U, 9381U, 4753U, 6356U, 
    7931U, 13344U, 171U, 8485U, 982U, 10532U, 8715U, 7380U, 
    12484U, 11011U, 9110U, 8226U, 10782U, 8252U, 10808U, 5091U, 
    10981U, 4457U, 5858U, 7560U, 12817U, 4649U, 6223U, 7818U, 
    13211U, 4093U, 5125U, 7133U, 11959U, 6395U, 11509U, 4536U, 
    5966U, 7667U, 12994U, 4728U, 6331U, 7906U, 13319U, 1U, 
    43U, 8377U, 765U, 122U, 907U, 8385U, 7997U, 8621U, 
    1432U, 10572U, 8816U, 10407U, 8631U, 1701U, 10607U, 8983U, 
    5078U, 10974U, 4439U, 5840U, 7542U, 12799U, 4631U, 6205U, 
    7800U, 13193U, 4076U, 5107U, 7116U, 11941U, 5551U, 11245U, 
    4466U, 5867U, 7569U, 12835U, 4658U, 6232U, 7827U, 13220U, 
    725U, 1938U, 5055U, 4044U, 11636U, 4406U, 5807U, 7509U, 
    12766U, 4598U, 6172U, 7767U, 13160U, 8611U, 11822U, 239U, 
    8497U, 1050U, 8072U, 1568U, 8848U, 11131U, 9131U, 927U, 
    8050U, 1461U, 10952U, 265U, 8509U, 1076U, 8079U, 1577U, 
    8858U, 11159U, 9151U, 421U, 8562U, 1289U, 8097U, 1674U, 
    8868U, 11441U, 9217U, 940U, 8061U, 1474U, 10963U, 276U, 
    8523U, 1087U, 8088U, 1588U, 8878U, 11168U, 9163U, 4057U, 
    5331U, 11108U, 7397U, 12501U, 11617U, 10634U, 9372U, 4745U, 
    6348U, 7923U, 13336U, 152U, 8472U, 963U, 10523U, 8685U, 
    7371U, 12475U, 10996U, 9089U, 7U, 54U, 8411U, 771U, 
    132U, 917U, 8394U, 8019U, 1454U, 10598U, 8824U, 10464U, 
    10418U, 1708U, 10616U, 8991U, 17U, 105U, 786U, 22U, 
    110U, 791U, 7098U, 11647U, 8311U, 8264U, 10820U, 8134U, 
    10701U, 6784U, 12668U, 6834U, 12870U, 7417U, 12521U, 7022U, 
    6962U, 11564U, 10654U, 10625U, 9348U, 13835U, 9692U, 11667U, 
    4777U, 6387U, 7955U, 13375U, 8955U, 6702U, 7389U, 12493U, 
    3393U, 6805U, 2860U, 2987U, 2174U, 1993U, 3085U, 3218U, 
    3117U, 3270U, 4101U, 5148U, 7141U, 11982U, 4108U, 5155U, 
    7148U, 11989U, 170U, 8484U, 981U, 11010U, 9109U, 151U, 
    8471U, 962U, 10995U, 9088U, 10473U, 10842U, 1733U, 4250U, 
    9027U, 11836U, 9958U, 10042U, 10213U, 3055U, 3096U, 10843U, 
    1734U, 4251U, 9028U, 11837U, 9959U, 10043U, 10214U, 13613U, 
    1904U, 9632U, 3195U, 6692U, 6472U, 4761U, 6364U, 7939U, 
    13352U, 4121U, 5183U, 7161U, 12017U, 4568U, 6068U, 7699U, 
    13056U, 6660U, 3789U, 10478U, 8163U, 3613U, 10730U, 3644U, 
    8239U, 10795U, 8149U, 3598U, 10716U, 3629U, 6604U, 12144U, 
    6579U, 12173U, 6592U, 12129U, 12156U, 6506U, 3378U, 5026U, 
    3846U, 3748U, 3961U, 6725U, 6620U, 6885U, 11878U, 8323U, 
    11910U, 8339U, 12951U, 11557U, 13828U, 11725U, 11748U, 13570U, 
    1873U, 5002U, 11623U, 7991U, 1426U, 10401U, 1695U, 4051U, 
    11611U, 8002U, 1439U, 10581U, 11569U, 13841U, 6654U, 3783U, 
    13708U, 1923U, 11737U, 11760U, 4030U, 10511U, 10862U, 1745U, 
    6935U, 4012U, 6676U, 3805U, 6076U, 11426U, 10851U, 11805U, 
    9479U, 9041U, 1129U, 11208U, 460U, 1328U, 9524U, 11472U, 
    9260U, 2815U, 2191U, 3665U, 2003U, 4501U, 5911U, 7622U, 
    12915U, 4704U, 6287U, 7882U, 13275U, 4041U, 873U, 8671U, 
    4921U, 4993U, 3355U, 8701U, 3349U, 5059U, 10446U, 3408U, 
    32U, 823U, 8361U, 759U, 3308U, 801U, 11732U, 9447U, 
    8204U, 10778U, 75U, 838U, 3690U, 862U, 8658U, 6564U, 
    1410U, 8775U, 13497U, 1804U, 6421U, 11524U, 13471U, 1795U, 
    6406U, 11515U, 5487U, 11177U, 10688U, 13607U, 7094U, 1421U, 
    4146U, 7186U, 12116U, 10412U, 11783U, 6926U, 4003U, 6874U, 
    12984U, 6668U, 3797U, 6795U, 12826U, 6917U, 3994U, 6773U, 
    3895U, 12641U, 6571U, 3715U, 6741U, 3863U, 12603U, 6944U, 
    4021U, 6684U, 3813U, 8788U, 4166U, 5376U, 7206U, 12211U, 
    4115U, 5177U, 7155U, 12011U, 8301U, 716U, 1864U, 4196U, 
    5391U, 7221U, 12226U, 11772U, 9463U, 4328U, 5500U, 7324U, 
    8940U, 12329U, 11549U, 1765U, 9334U, 13617U, 1910U, 9639U, 
    13904U, 1985U, 9714U, 13823U, 1966U, 9684U, 6464U, 13602U, 
    9842U, 9988U, 10072U, 10097U, 10243U, 4273U, 5454U, 7284U, 
    12289U, 4553U, 5983U, 7684U, 13011U, 3661U, 4159U, 5369U, 
    7199U, 12204U, 4226U, 5421U, 7251U, 12256U, 4361U, 5667U, 
    7426U, 12530U, 11708U, 9431U, 4062U, 5085U, 7102U, 8651U, 
    11926U, 8306U, 4203U, 5398U, 7228U, 12233U, 4242U, 5437U, 
    7267U, 12272U, 4375U, 5681U, 7440U, 12544U, 11778U, 9471U, 
    4334U, 5522U, 7330U, 8947U, 12351U, 10471U, 3437U, 889U, 
    10496U, 10556U, 4584U, 6109U, 7715U, 13097U, 4047U, 6636U, 
    6751U, 12612U, 12188U, 6709U, 6814U, 12852U, 4693U, 6276U, 
    7871U, 13264U, 4517U, 5947U, 7638U, 12965U, 4483U, 5893U, 
    7604U, 12897U, 4675U, 6258U, 7853U, 13246U, 3765U, 3873U, 
    6901U, 3978U, 6854U, 3916U, 4290U, 5471U, 7301U, 12306U, 
    4746U, 6349U, 7924U, 13337U, 8678U, 13802U, 9661U, 87U, 
    854U, 8444U, 11875U, 1776U, 64U, 8427U, 781U, 3324U, 
    811U, 8319U, 1689U, 8969U, 10872U, 1759U, 9056U, 99U, 
    8462U, 9494U, 4871U, 8693U, 8287U, 8929U, 9855U, 10001U, 
    10085U, 10110U, 10256U, 2839U, 2202U, 2300U, 3006U, 3022U, 
    13522U, 13514U, 13758U, 13652U, 13784U, 13680U, 13925U, 13954U, 
    13745U, 13638U, 13771U, 13666U, 13910U, 13940U, 2332U, 2270U, 
    3161U, 3030U, 3075U, 2489U, 2916U, 2544U, 2504U, 2928U, 
    2571U, 3042U, 3106U, 3257U, 2184U, 3140U, 2277U, 3172U, 
    3231U, 2417U, 2476U, 8278U, 10876U, 10889U, 10692U, 8024U, 
    8832U, 9006U, 6443U, 7976U, 11652U, 9398U, 8800U, 11641U, 
    9390U, 8730U, 10452U, 10696U, 8044U, 10856U, 11553U, 8034U, 
    9407U, 8840U, 11690U, 9416U, 9341U, 6468U, 7981U, 8808U, 
    8744U, 10432U, 1117U, 11198U, 448U, 1316U, 9513U, 11462U, 
    9247U, 11658U, 11755U, 9455U, 11665U, 12U, 11678U, 4145U, 
    5347U, 7185U, 12115U, 11544U, 9326U, 10517U, 6559U, 8767U, 
    10846U, 1739U, 4257U, 9034U, 11842U, 9973U, 10057U, 10228U, 
    13612U, 1903U, 9631U, 3206U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1676);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1676);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace Mips {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget21 = 5,
  brtarget26 = 6,
  brtarget_mm = 7,
  calloffset16 = 8,
  calltarget = 9,
  calltarget_mm = 10,
  condcode = 11,
  cpinst_operand = 12,
  f32imm = 13,
  f64imm = 14,
  i16imm = 15,
  i1imm = 16,
  i32imm = 17,
  i64imm = 18,
  i8imm = 19,
  imm32 = 20,
  imm64 = 21,
  jmpoffset16 = 22,
  jmptarget = 23,
  jmptarget_mm = 24,
  mem = 25,
  mem16 = 26,
  mem16_ea = 27,
  mem_ea = 28,
  mem_mm_12 = 29,
  mem_msa = 30,
  mem_simm11 = 31,
  mem_simm9 = 32,
  pcrel16 = 33,
  simm10 = 34,
  simm10_64 = 35,
  simm11 = 36,
  simm12 = 37,
  simm16 = 38,
  simm16_64 = 39,
  simm18_lsl3 = 40,
  simm19_lsl2 = 41,
  simm20 = 42,
  simm5 = 43,
  simm9 = 44,
  size_ext = 45,
  size_ins = 46,
  uimm10 = 47,
  uimm16 = 48,
  uimm16_64 = 49,
  uimm2 = 50,
  uimm20 = 51,
  uimm3 = 52,
  uimm4 = 53,
  uimm5 = 54,
  uimm6 = 55,
  uimm8 = 56,
  uimmz = 57,
  vsplat_simm10 = 58,
  vsplat_simm5 = 59,
  vsplat_uimm1 = 60,
  vsplat_uimm2 = 61,
  vsplat_uimm3 = 62,
  vsplat_uimm4 = 63,
  vsplat_uimm5 = 64,
  vsplat_uimm6 = 65,
  vsplat_uimm8 = 66,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 155;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO


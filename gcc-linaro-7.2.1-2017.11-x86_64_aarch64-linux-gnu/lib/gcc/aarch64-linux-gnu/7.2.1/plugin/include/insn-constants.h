/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFP_REGNUM 64
#define R12_REGNUM 12
#define R11_REGNUM 11
#define R29_REGNUM 29
#define R5_REGNUM 5
#define R15_REGNUM 15
#define V15_REGNUM 47
#define R2_REGNUM 2
#define R22_REGNUM 22
#define R18_REGNUM 18
#define IP0_REGNUM 16
#define R25_REGNUM 25
#define R10_REGNUM 10
#define V31_REGNUM 63
#define R9_REGNUM 9
#define V0_REGNUM 32
#define R14_REGNUM 14
#define SP_REGNUM 31
#define R1_REGNUM 1
#define R21_REGNUM 21
#define R17_REGNUM 17
#define R20_REGNUM 20
#define R4_REGNUM 4
#define R24_REGNUM 24
#define R30_REGNUM 30
#define R8_REGNUM 8
#define R27_REGNUM 27
#define CC_REGNUM 66
#define R13_REGNUM 13
#define AP_REGNUM 65
#define R0_REGNUM 0
#define R6_REGNUM 6
#define LR_REGNUM 30
#define R28_REGNUM 28
#define R16_REGNUM 16
#define R3_REGNUM 3
#define R23_REGNUM 23
#define R19_REGNUM 19
#define IP1_REGNUM 17
#define LAST_SAVED_REGNUM 63
#define R7_REGNUM 7
#define R26_REGNUM 26

enum unspec {
  UNSPEC_AUTI1716 = 0,
  UNSPEC_AUTISP = 1,
  UNSPEC_CASESI = 2,
  UNSPEC_CRC32B = 3,
  UNSPEC_CRC32CB = 4,
  UNSPEC_CRC32CH = 5,
  UNSPEC_CRC32CW = 6,
  UNSPEC_CRC32CX = 7,
  UNSPEC_CRC32H = 8,
  UNSPEC_CRC32W = 9,
  UNSPEC_CRC32X = 10,
  UNSPEC_FCVTZS = 11,
  UNSPEC_FCVTZU = 12,
  UNSPEC_URECPE = 13,
  UNSPEC_FRECPE = 14,
  UNSPEC_FRECPS = 15,
  UNSPEC_FRECPX = 16,
  UNSPEC_FRINTA = 17,
  UNSPEC_FRINTI = 18,
  UNSPEC_FRINTM = 19,
  UNSPEC_FRINTN = 20,
  UNSPEC_FRINTP = 21,
  UNSPEC_FRINTX = 22,
  UNSPEC_FRINTZ = 23,
  UNSPEC_GOTSMALLPIC = 24,
  UNSPEC_GOTSMALLPIC28K = 25,
  UNSPEC_GOTSMALLTLS = 26,
  UNSPEC_GOTTINYPIC = 27,
  UNSPEC_GOTTINYTLS = 28,
  UNSPEC_LD1 = 29,
  UNSPEC_LD2 = 30,
  UNSPEC_LD2_DUP = 31,
  UNSPEC_LD3 = 32,
  UNSPEC_LD3_DUP = 33,
  UNSPEC_LD4 = 34,
  UNSPEC_LD4_DUP = 35,
  UNSPEC_LD2_LANE = 36,
  UNSPEC_LD3_LANE = 37,
  UNSPEC_LD4_LANE = 38,
  UNSPEC_MB = 39,
  UNSPEC_NOP = 40,
  UNSPEC_PACI1716 = 41,
  UNSPEC_PACISP = 42,
  UNSPEC_PRLG_STK = 43,
  UNSPEC_RBIT = 44,
  UNSPEC_SCVTF = 45,
  UNSPEC_SISD_NEG = 46,
  UNSPEC_SISD_SSHL = 47,
  UNSPEC_SISD_USHL = 48,
  UNSPEC_SSHL_2S = 49,
  UNSPEC_ST1 = 50,
  UNSPEC_ST2 = 51,
  UNSPEC_ST3 = 52,
  UNSPEC_ST4 = 53,
  UNSPEC_ST2_LANE = 54,
  UNSPEC_ST3_LANE = 55,
  UNSPEC_ST4_LANE = 56,
  UNSPEC_TLS = 57,
  UNSPEC_TLSDESC = 58,
  UNSPEC_TLSLE12 = 59,
  UNSPEC_TLSLE24 = 60,
  UNSPEC_TLSLE32 = 61,
  UNSPEC_TLSLE48 = 62,
  UNSPEC_UCVTF = 63,
  UNSPEC_USHL_2S = 64,
  UNSPEC_VSTRUCTDUMMY = 65,
  UNSPEC_SP_SET = 66,
  UNSPEC_SP_TEST = 67,
  UNSPEC_RSQRT = 68,
  UNSPEC_RSQRTE = 69,
  UNSPEC_RSQRTS = 70,
  UNSPEC_NZCV = 71,
  UNSPEC_XPACLRI = 72,
  UNSPEC_ASHIFT_SIGNED = 73,
  UNSPEC_ASHIFT_UNSIGNED = 74,
  UNSPEC_ABS = 75,
  UNSPEC_FMAX = 76,
  UNSPEC_FMAXNMV = 77,
  UNSPEC_FMAXV = 78,
  UNSPEC_FMIN = 79,
  UNSPEC_FMINNMV = 80,
  UNSPEC_FMINV = 81,
  UNSPEC_FADDV = 82,
  UNSPEC_ADDV = 83,
  UNSPEC_SMAXV = 84,
  UNSPEC_SMINV = 85,
  UNSPEC_UMAXV = 86,
  UNSPEC_UMINV = 87,
  UNSPEC_SHADD = 88,
  UNSPEC_UHADD = 89,
  UNSPEC_SRHADD = 90,
  UNSPEC_URHADD = 91,
  UNSPEC_SHSUB = 92,
  UNSPEC_UHSUB = 93,
  UNSPEC_SRHSUB = 94,
  UNSPEC_URHSUB = 95,
  UNSPEC_ADDHN = 96,
  UNSPEC_RADDHN = 97,
  UNSPEC_SUBHN = 98,
  UNSPEC_RSUBHN = 99,
  UNSPEC_ADDHN2 = 100,
  UNSPEC_RADDHN2 = 101,
  UNSPEC_SUBHN2 = 102,
  UNSPEC_RSUBHN2 = 103,
  UNSPEC_SQDMULH = 104,
  UNSPEC_SQRDMULH = 105,
  UNSPEC_PMUL = 106,
  UNSPEC_FMULX = 107,
  UNSPEC_USQADD = 108,
  UNSPEC_SUQADD = 109,
  UNSPEC_SQXTUN = 110,
  UNSPEC_SQXTN = 111,
  UNSPEC_UQXTN = 112,
  UNSPEC_SSRA = 113,
  UNSPEC_USRA = 114,
  UNSPEC_SRSRA = 115,
  UNSPEC_URSRA = 116,
  UNSPEC_SRSHR = 117,
  UNSPEC_URSHR = 118,
  UNSPEC_SQSHLU = 119,
  UNSPEC_SQSHL = 120,
  UNSPEC_UQSHL = 121,
  UNSPEC_SQSHRUN = 122,
  UNSPEC_SQRSHRUN = 123,
  UNSPEC_SQSHRN = 124,
  UNSPEC_UQSHRN = 125,
  UNSPEC_SQRSHRN = 126,
  UNSPEC_UQRSHRN = 127,
  UNSPEC_SSHL = 128,
  UNSPEC_USHL = 129,
  UNSPEC_SRSHL = 130,
  UNSPEC_URSHL = 131,
  UNSPEC_SQRSHL = 132,
  UNSPEC_UQRSHL = 133,
  UNSPEC_SSLI = 134,
  UNSPEC_USLI = 135,
  UNSPEC_SSRI = 136,
  UNSPEC_USRI = 137,
  UNSPEC_SSHLL = 138,
  UNSPEC_USHLL = 139,
  UNSPEC_ADDP = 140,
  UNSPEC_TBL = 141,
  UNSPEC_TBX = 142,
  UNSPEC_CONCAT = 143,
  UNSPEC_ZIP1 = 144,
  UNSPEC_ZIP2 = 145,
  UNSPEC_UZP1 = 146,
  UNSPEC_UZP2 = 147,
  UNSPEC_TRN1 = 148,
  UNSPEC_TRN2 = 149,
  UNSPEC_EXT = 150,
  UNSPEC_REV64 = 151,
  UNSPEC_REV32 = 152,
  UNSPEC_REV16 = 153,
  UNSPEC_AESE = 154,
  UNSPEC_AESD = 155,
  UNSPEC_AESMC = 156,
  UNSPEC_AESIMC = 157,
  UNSPEC_SHA1C = 158,
  UNSPEC_SHA1M = 159,
  UNSPEC_SHA1P = 160,
  UNSPEC_SHA1H = 161,
  UNSPEC_SHA1SU0 = 162,
  UNSPEC_SHA1SU1 = 163,
  UNSPEC_SHA256H = 164,
  UNSPEC_SHA256H2 = 165,
  UNSPEC_SHA256SU0 = 166,
  UNSPEC_SHA256SU1 = 167,
  UNSPEC_PMULL = 168,
  UNSPEC_PMULL2 = 169,
  UNSPEC_REV_REGLIST = 170,
  UNSPEC_VEC_SHR = 171,
  UNSPEC_SQRDMLAH = 172,
  UNSPEC_SQRDMLSH = 173,
  UNSPEC_FMAXNM = 174,
  UNSPEC_FMINNM = 175
};
#define NUM_UNSPEC_VALUES 176
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_LX = 7,
  UNSPECV_SX = 8,
  UNSPECV_LDA = 9,
  UNSPECV_STL = 10,
  UNSPECV_ATOMIC_CMPSW = 11,
  UNSPECV_ATOMIC_EXCHG = 12,
  UNSPECV_ATOMIC_CAS = 13,
  UNSPECV_ATOMIC_SWP = 14,
  UNSPECV_ATOMIC_OP = 15,
  UNSPECV_ATOMIC_LDOP = 16,
  UNSPECV_ATOMIC_LDOP_OR = 17,
  UNSPECV_ATOMIC_LDOP_BIC = 18,
  UNSPECV_ATOMIC_LDOP_XOR = 19,
  UNSPECV_ATOMIC_LDOP_PLUS = 20
};
#define NUM_UNSPECV_VALUES 21
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */

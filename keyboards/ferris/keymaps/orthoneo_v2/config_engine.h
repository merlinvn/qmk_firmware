#include "g/engine.h"

// Configuration options for the engine

#define C_SIZE uint64_t // type for chord
#define COMBO_MAX 4     // Longest Combo

enum ORDER { SFN = 0, SPWR, SST1, SST2, SST3, SST4, SNUML, SNUMR, 
  SLC, SLT, SLN, SLR, SLG, SLL, SLH, SLU, SLO, SLA, 
  SRI, SRE, SRZ, SRW, SRN, SRC, SRM, SRT, SRF, SRJ, SRS, SRX, 
  SRES1, SRES2 };

// Key Aliases, must fit within C_SIZE!
// These are for Ginni + Asetniop
#define LC STN(SLC)
#define LT STN(SLT)
#define LN STN(SLN)
#define LR STN(SLR)
#define LG STN(SLG)
#define LL STN(SLL)
#define LH STN(SLH)
#define LU STN(SLU)
#define LO STN(SLO)
#define LA STN(SLA)

#define RI STN(SRI)
#define RE STN(SRE)
#define RZ STN(SRZ)
#define RW STN(SRW)
#define RN STN(SRN)
#define RC STN(SRC)
#define RM STN(SRM)
#define RT STN(SRT)
#define RF STN(SRF)
#define RJ STN(SRJ)
#define RS STN(SRS)
#define RX STN(SRX)

// Chord to start buffering strokes
#define COMMAND_MODE (GL1 | GR1)

// Mapping of QMK Keycodes to chord positions
#define ENGINE_CONFIG         \
    ENGINE_HOOK(KC_Q, GQ)     \
    ENGINE_HOOK(KC_W, GW)     \
    ENGINE_HOOK(KC_E, GE)     \
    ENGINE_HOOK(KC_R, GR)     \
    ENGINE_HOOK(KC_T, GT)     \
    ENGINE_HOOK(KC_Y, GY)     \
    ENGINE_HOOK(KC_U, GU)     \
    ENGINE_HOOK(KC_I, GI)     \
    ENGINE_HOOK(KC_O, GO)     \
    ENGINE_HOOK(KC_P, GP)     \
    ENGINE_HOOK(KC_A, GA)     \
    ENGINE_HOOK(KC_S, GS)     \
    ENGINE_HOOK(KC_D, GD)     \
    ENGINE_HOOK(KC_F, GF)     \
    ENGINE_HOOK(KC_G, GG)     \
    ENGINE_HOOK(KC_H, GH)     \
    ENGINE_HOOK(KC_J, GJ)     \
    ENGINE_HOOK(KC_K, GK)     \
    ENGINE_HOOK(KC_L, GL)     \
    ENGINE_HOOK(KC_SCLN, GCL) \
    ENGINE_HOOK(KC_Z, GZ)     \
    ENGINE_HOOK(KC_X, GX)     \
    ENGINE_HOOK(KC_C, GC)     \
    ENGINE_HOOK(KC_V, GV)     \
    ENGINE_HOOK(KC_B, GB)     \
    ENGINE_HOOK(KC_N, GN)     \
    ENGINE_HOOK(KC_M, GM)     \
    ENGINE_HOOK(KC_COMM, GLT) \
    ENGINE_HOOK(KC_DOT, GGT)  \
    ENGINE_HOOK(KC_SLSH, GQU) \
    ENGINE_HOOK(KC_F1, GL1)   \
    ENGINE_HOOK(KC_F2, GL2)   \
    ENGINE_HOOK(KC_F3, GL3)   \
    ENGINE_HOOK(KC_F4, GR3)   \
    ENGINE_HOOK(KC_F5, GR2)   \
    ENGINE_HOOK(KC_F6, GR1)

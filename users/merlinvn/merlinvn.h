#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

// Define all of
enum custom_keycodes { SW_WIN = SAFE_RANGE, SW_TAB, SW_LANG };

// Shared variable
enum MyLayer {
    _BASE0,
    _BASE1,
    _BASE2,
    _NAVIGATION,
    _SYMBOLS,
    _FN,
    _MEDIA,
    _NUMBERS,
    _MOUSE,
    _STE_SYM,
    _STE_NAV,
};

#define LGUI_A LGUI_T(KC_A)
#define LALT_R LALT_T(KC_R)
#define LCTL_S LCTL_T(KC_S)
#define LSFT_TT LSFT_T(KC_T)

#define LGUI_Z LGUI_T(KC_Z)
#define LGUI_COMM LGUI_T(KC_COMM)
#define LGUI_9 LGUI_T(KC_7)
#define LALT_X LALT_T(KC_X)
#define LALT_8 LALT_T(KC_8)
#define LCTL_C LCTL_T(KC_C)
#define LCTL_7 LCTL_T(KC_7)
#define LSFT_D LSFT_T(KC_D)
#define LSFT_6 LSFT_T(KC_6)
#define LSFT_V LSFT_T(KC_V)

#define RSFT_N RSFT_T(KC_N)
#define RCTL_H RCTL_T(KC_H)
#define LALT_I LALT_T(KC_I)
#define RGUI_O RGUI_T(KC_O)


#define RGUI_SLSH RGUI_T(KC_SLASH)
#define RGUI_4 RGUI_T(KC_4)
#define RGUI_QUOT RGUI_T(KC_QUOT)
#define RGUI_DOT RGUI_T(KC_DOT)
#define LALT_DOT LALT_T(KC_DOT)
#define LALT_K LALT_T(KC_K)
#define LALT_3 LALT_T(KC_3)
#define RCTL_COMM RCTL_T(KC_COMM)
#define RCTL_J RCTL_T(KC_J)
#define RCTL_2 RCTL_T(KC_2)
#define RSFT_H RSFT_T(KC_H)
#define RSFT_1 RSFT_T(KC_1)
#define RSFT_M RSFT_T(KC_M)

#define RSFT_PGDN RSFT_T(KC_PGDN)
#define RCTL_PGUP RCTL_T(KC_PGUP)
#define LALT_END LALT_T(KC_END)
#define RGUI_INS RGUI_T(KC_INS)

#define RSFT_HOME RSFT_T(KC_HOME)
#define RCTL_PGDN RCTL_T(KC_PGDN)
#define LALT_PGUP LALT_T(KC_PGUP)
#define RGUI_END RGUI_T(KC_END)

#define NAV_ESC LT(_NAVIGATION, KC_ESC)
#define NAV_SPC LT(_NAVIGATION, KC_SPC)

#define MEH_ESC MEH_T(KC_ESC)

#define MED_ESC LT(_MEDIA, KC_ESC)
#define MED_TAB LT(_MEDIA, KC_TAB)
#define MED_ENT LT(_MEDIA, KC_ENT)

#define SHFT_SPC LSFT_T(KC_SPC)
#define SHFT_ENT LSFT_T(KC_ENT)
#define SHFT_ESC LSFT_T(KC_ESC)
#define SHFT_TAB RSFT_T(KC_TAB)
#define SHFT_DEL RSFT_T(KC_DEL)

#define SYM_E LT(_SYMBOLS, KC_E)
#define SYM_BS LT(_SYMBOLS, KC_BSPC)
#define SYM_D LT(_SYMBOLS, KC_D)
#define SYM_H LT(_SYMBOLS, KC_H)

#define FN_ENT LT(_FN, KC_ENT)
#define FN_DEL LT(_FN, KC_DEL)

#define NUM_D LT(_NUMBERS, KC_D)
#define NUM_T LT(_NUMBERS, KC_T)
#define NUM_G LT(_NUMBERS, KC_G)
#define NUM_F LT(_NUMBERS, KC_F)
#define NUM_SPC LT(_NUMBERS, KC_SPC)
#define NUM_TAB LT(_NUMBERS, KC_TAB)

#define RSFT_LT RSFT_T(KC_F23)
#define RCTL_GT RCTL_T(KC_F21)
#define LALT_TILD LALT_T(KC_F22)
#define GUI_QUES LGUI_T(KC_F24)

#define OS_LCTL OSM(MOD_LCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_RALT OSM(MOD_RALT)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_RSFT OSM(MOD_RSFT)

#define ______LEFT_HOME______ LGUI_Z, LALT_X, LCTL_C, LSFT_D, KC_V
#define ______RIGHT_HOME______ KC_K, RSFT_H, RCTL_COMM, LALT_DOT, RGUI_SLSH

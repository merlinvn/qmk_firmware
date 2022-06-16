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
    _STE_SYM,
    _STE_NAV,
};

#define LGUI_Z LGUI_T(KC_Z)
#define LALT_X LALT_T(KC_X)
#define LCTL_C LCTL_T(KC_C)
#define LSFT_D LSFT_T(KC_D)
#define LSFT_V LSFT_T(KC_V)

#define RGUI_SLSH RGUI_T(KC_SLASH)
#define RGUI_QUOT RGUI_T(KC_QUOT)
#define LALT_DOT LALT_T(KC_DOT)
#define RCTL_COMM RCTL_T(KC_COMM)
#define RSFT_H RSFT_T(KC_H)
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

#define MED_ESC LT(_MEDIA, KC_ESC)
#define MED_TAB LT(_MEDIA, KC_TAB)
#define MED_ENT LT(_MEDIA, KC_ENT)

#define SHFT_SPC LSFT_T(KC_SPC)
#define SHFT_ENT LSFT_T(KC_ENT)
#define SHFT_ESC LSFT_T(KC_ESC)
#define SHFT_TAB RSFT_T(KC_TAB)
#define SHFT_DEL RSFT_T(KC_DEL)

#define SYM_BS LT(_SYMBOLS, KC_BSPC)
#define SYM_D LT(_SYMBOLS, KC_D)
#define SYM_H LT(_SYMBOLS, KC_H)

#define FN_ENT LT(_FN, KC_ENT)
#define FN_DEL LT(_FN, KC_DEL)

#define NUM_T LT(_NUMBERS, KC_T)
#define NUM_G LT(_NUMBERS, KC_G)
#define NUM_F LT(_NUMBERS, KC_F)
#define NUM_SPC LT(_NUMBERS, KC_SPC)
#define NUM_TAB LT(_NUMBERS, KC_TAB)

#define GUI_QUES MT(MOD_LGUI, KC_F24)
#define RSFT_TILD MT(MOD_RSFT, KC_F23)



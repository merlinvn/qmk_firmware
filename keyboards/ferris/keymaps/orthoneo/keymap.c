// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#include "g/keymap_combo.h"
#include "keymap_steno.h"
#include "merlinvn.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,             KC_Z,    KC_L,  KC_U,    KC_Y,   KC_ENT,
    LGUI_A,  LALT_R,  LCTL_S,  LSFT_TT,    KC_G,            KC_M,   RSFT_N,  RCTL_H,  LALT_I,   RGUI_O,
    KC_QUOT, KC_X,   KC_C,  NUM_D,    KC_V,             KC_SLASH,    KC_J, KC_K,   KC_COMM,  KC_DOT,
                                    OSL(_MOUSE), NAV_SPC, SYM_E , OSL(_FN)
  ),

  [_BASE1] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,            KC_J,    KC_L,  KC_U,    KC_Y,   KC_BSPC,
    KC_A,    KC_R,    KC_S,    NUM_T,    KC_G,           KC_M,    KC_N,  KC_E,    KC_I,   KC_O,
    LGUI_Z,  LALT_X,  LCTL_C,  LSFT_D,    KC_V,          KC_K,    RSFT_H,  RCTL_COMM, LALT_DOT, RGUI_SLSH,
                                     KC_TRNS, KC_TRNS, KC_NO, KC_ENT
  ),

  [_BASE2] = LAYOUT(
  DF(0),         STN_N1,  STN_N2,  STN_ST1,  STN_ST2,        STN_ST3,  STN_ST4,  STN_N7,  STN_N8,  STN_N9,
  MO(_NUMBERS),  STN_S1,  STN_TL,  STN_PL,  STN_HL,         STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
  MO(_SYMBOLS),  STN_S2,  STN_KL,  STN_WL,  STN_RL,         STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                        STN_A,  STN_O,   STN_E,   STN_U
  ),

  [_NAVIGATION] = LAYOUT(
    G(KC_TAB), SW_WIN, S(C(KC_TAB)), C(KC_TAB), G(KC_GRV),                    KC_INS, KC_HOME, KC_UP, KC_END, KC_ENT,
    OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO,        KC_BSPC, KC_LEFT, KC_DOWN,  KC_RGHT, CW_TOGG,
    A(KC_W), G(KC_SPC), C(A(KC_J)), C(A(KC_K)), KC_NO,                        KC_CAPS, KC_PGDN, KC_PGUP, KC_NO, KC_NO,
                                    KC_TRNS, KC_TRNS, LT(_MEDIA,KC_BSPC), KC_DEL
  ),

  [_SYMBOLS] = LAYOUT(
    KC_EXLM,  KC_AT,   KC_LCBR, KC_RCBR, KC_PERC,         KC_QUOT, KC_CIRC, KC_AMPR, KC_DLR, KC_ENT,
    KC_SCLN,  KC_COLN, KC_LPRN, KC_RPRN, KC_EQL,          KC_PIPE, KC_LT, KC_GT, KC_MINS, KC_UNDS,
    KC_DQT,   KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS,         KC_QUES, KC_HASH, KC_ASTR, KC_GRV, KC_TILD,
                                     KC_ESC, LT(_MEDIA, KC_SPC),      KC_TRNS, KC_TRNS
  ),

  [_FN] = LAYOUT(
    KC_F10,   KC_F7,   KC_F8,   KC_F9,   KC_PSCR,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_F11,   KC_F4,   KC_F5,   KC_F6,   KC_LSCR,         KC_NO,   OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_LALT), OSM(MOD_RGUI),
    KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_PAUS,         KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,
                                    KC_TRNS, KC_APP,      KC_TRNS, KC_TRNS
  ),

  [_NUMBERS] = LAYOUT(
    KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_PSLS, KC_7,    KC_8,    KC_9, KC_ENT,
    OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_TRNS,         KC_PAST, KC_4,    KC_5,    KC_6, KC_PPLS,
    KC_NO,  KC_NO, KC_NO, KC_TRNS, KC_NO,                                        KC_PMNS, KC_1,    KC_2,    KC_3, KC_PDOT,
                                    KC_LSFT, KC_SPC,                      KC_0, KC_PEQL
  ),

  [_MEDIA] = LAYOUT(
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                    KC_NO,KC_NO,KC_NO,QK_RBT,QK_BOOT,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_MOUSE] = LAYOUT(
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                                           KC_NO,KC_WH_L,KC_MS_U,KC_WH_R,KC_ENT,
    OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT),KC_NO,        KC_NO,KC_MS_L,KC_MS_D,KC_MS_R,KC_NO,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                                           KC_NO,KC_WH_D,KC_WH_U,KC_BTN3,KC_NO,
                            KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2
  ),
};

size_t keymapsCount = sizeof(keymaps)/sizeof(keymaps[0]);

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  // ...
  steno_set_mode(STENO_MODE_GEMINI);
};


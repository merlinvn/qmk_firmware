// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#include "g/keymap_combo.h"
#include "keymap_steno.h"
#include "merlinvn.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,            KC_J,    KC_L,  KC_U,    KC_Y,   KC_BSPC,
    KC_A,    KC_R,    KC_S,    NUM_T,    KC_G,            KC_M,    KC_N,  KC_E,    KC_I,   KC_O,
    LGUI_Z, LALT_X,  LCTL_C, LSFT_D,                     KC_K,    RSFT_H, RCTL_COMM, LALT_DOT, RGUI_SLSH,
                                    NAV_ESC, KC_SPC, OSL(_SYMBOLS), FN_ENT
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
    KC_7,     KC_5,    KC_3,    KC_1,    KC_9,                                    KC_0,    KC_2,      KC_4,      KC_6,     KC_8,
    SW_WIN,   SW_TAB,  KC_DEL,  KC_TAB,  KC_CAPS,                                 KC_LEFT, KC_DOWN,   KC_UP,     KC_RGHT,  KC_BSPC,
    OSM(MOD_LGUI),  OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_APP,          KC_HOME, RSFT_PGDN, RCTL_PGUP, LALT_END, RGUI_INS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, MED_ENT
  ),

  [_SYMBOLS] = LAYOUT(
    KC_EXLM,  KC_AT,   KC_LCBR, KC_RCBR, KC_PERC,         KC_NO,   KC_CIRC, KC_AMPR, KC_ASTR, KC_HASH,
    KC_SCLN,  KC_COLN, KC_LPRN, KC_RPRN, KC_MINS,         KC_PLUS, KC_QUOT, KC_DQT,  KC_UNDS, KC_DLR,
    KC_GRV,   KC_BSLS, KC_LBRC, KC_RBRC, KC_EQL,          KC_PIPE, KC_TILD, KC_LT,   KC_GT,   KC_QUES,
                                     KC_ESC, KC_SPC,      KC_TRNS, KC_TRNS
  ),

  [_FN] = LAYOUT(
    KC_F10,   KC_F7,   KC_F8,   KC_F9,   KC_PSCR,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_F11,   KC_F4,   KC_F5,   KC_F6,   KC_SLCK,         KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,
    KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_PAUS,         KC_NO,   OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_LALT), OSM(MOD_RGUI),
                                    MED_ESC, KC_APP,      KC_TRNS, KC_TRNS
  ),

  [_NUMBERS] = LAYOUT(
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_ASTR, KC_7,    KC_8,    KC_9, KC_SLSH,
    KC_BSPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_PLUS, KC_4,    KC_5,    KC_6, KC_EQL,
    KC_LGUI,  KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,         KC_MINS, KC_1,    KC_2,    KC_3, KC_DOT,
                                    KC_COMM, KC_SPC,        KC_0, KC_ENT
  ),

  [_MEDIA] = LAYOUT(
    DF(0),  DF(1), DF(2), KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

size_t keymapsCount = sizeof(keymaps)/sizeof(keymaps[0]);

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  // ...
  steno_set_mode(STENO_MODE_GEMINI);
};


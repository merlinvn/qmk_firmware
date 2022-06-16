// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

/* #include "g/keymap_combo.h" */
#include "g/keymap_engine.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,           KC_J,    KC_L,  KC_U,    KC_Y,   KC_BSPC,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,           KC_M,    KC_N,  KC_E,    KC_I,   KC_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,           KC_K,    KC_H,  KC_COMM, KC_DOT, KC_SLSH,
                                    KC_ESC, KC_SPC,  KC_LSFT, LT(1,KC_ENT)
  ),
  [1] = LAYOUT(
    DF(0),    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
    RESET,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_NO,    KC_NO,  KC_NO, KC_NO, KC_NO,
                                    KC_NO, KC_NO,  KC_NO, KC_TRNS
  ),
};

size_t keymapsCount = sizeof(keymaps)/sizeof(keymaps[0]);

C_SIZE masks[] = {KC_A , KC_W};


C_SIZE process_chord_getnext(C_SIZE cur_chord){
  if ( cur_chord & GA){
     SEND(KC_A);
  }
  return 0;
}

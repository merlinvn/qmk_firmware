#include QMK_KEYBOARD_H
#include "my_4x5.h"
#include "g/keymap_combo.h"
#include "merlinvn.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* BASE 0 (colemakDH)
 * ,----------------------------------,                             ,----------------------------------,
 * |   q  |   w  |   f  |   p  |   b  |                             |   j  |   l  |   u  |   y  |   '  |
 * |------+------+------+------+------|                             |-------------+------+------+------|
 * |   a  |   r  |   s  | num_t|   g  |                             |   m  |   n  |   e  |   i  |   o  |
 * |------+------+------+------+------|                             |------|------+------+------+------|
 * |gui_z |alt_x |ctl_c |sft_d |   v  |                             |   k  |sft_h |ctl_, |alt_. |gui_/ |
 * |------+------+------+-------------,                             ,-------------+------+------+------,
 *        | left | right|                                                         | down |  up  |
 *        '------+------'-------------'                             '-------------'------+------'
 *                      | ESC  | SPACE|                             |  BS  |ENTER |
 *                      |  +   |   +  |                             |  +   |  +   |
 *                      | MED  |  NAV |                             |  SYM |  FN  |
 *                      '------+------'                             '------+------'
 *                                    '------+------' '------+------'
 *                                    | HOME | TAB  | | DEL  | PGUP |
 *                                    '------+------' '------+------'
 *                                    | END  | GUI  | | MENU | PGDN |
 *                                    '------+------' '------+------'
 */

  [_BASE0]  = LAYOUT(\
  KC_Q,   KC_W,    KC_F,   KC_P,    KC_B,                               KC_J,   KC_L,   KC_U,      KC_Y,     KC_ENT, \
  KC_A,   KC_R,    KC_S,   NUM_T,    KC_G,                               KC_M,   KC_N,   KC_E,      KC_I,     KC_O,
  LGUI_Z, LALT_X,  LCTL_C, LSFT_D,  KC_V,                               KC_K,   RSFT_H, RCTL_COMM, LALT_DOT, RGUI_SLSH,
          KC_LEFT, KC_RGHT,                                                            KC_DOWN,   KC_UP,
                           NAV_ESC, KC_SPC,                             OSL(_SYMBOLS), FN_ENT,
                                    KC_HOME,  KC_LSFT,           KC_DEL, KC_PGUP,
                                    KC_END,   KC_LGUI,          KC_APP, KC_PGDN
  ),
 
  [_BASE1]      = LAYOUT(\
  S(KC_Q), S(KC_W), S(KC_F), S(KC_P), S(KC_B),                         S(KC_J), S(KC_L), S(KC_U), S(KC_Y), S(KC_DEL),
  S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G),                         S(KC_M), S(KC_N), S(KC_E), S(KC_I), S(KC_O),
  S(KC_Z), S(KC_X),  S(KC_C), S(KC_D),  S(KC_V),                      S(KC_K), S(KC_H), S(KC_COMM), S(KC_DOT), S(KC_SLSH),
             KC_NO, KC_NO,                                                     KC_NO, KC_NO,
                              KC_TRNS, KC_TRNS,                       KC_NO, KC_ENT,
                                      KC_NO, KC_TRNS,      KC_TRNS, KC_NO,
                                      KC_NO, KC_TRNS,       KC_TRNS, KC_NO
  ),
/* Base2 (placeholder)
 * ,----------------------------------,                             ,----------------------------------,
 * |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |
 * |------+------+------+------+------|                             |-------------+------+------+------|
 * |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |
 * |------+------+------+------+------|                             |------|------+------+------+------|
 * |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   '  |
 * |------+------+------+-------------,                             ,-------------+------+------+------,
 *        |  [   |   ]  |                                                         |   -  |   =  |
 *        '------+------'-------------'                             '-------------'------+------'
 *                      | ESC  |  BS  |                             | SPACE|ENTER |
 *                      |  +   |   +  |                             |  +   |  +   |
 *                      | SHIFT| CTRL |                             | ALT  |SHIFT |
 *                      '------+------'                             '------+------'
 *                                    '------+------' '------+------'
 *                                    | TAB  | HOME | | END  | DEL  |
 *                                    '------+------' '------+------'
 *                                    | Raise|  ~   | | GUI  | Lower|
 *                                    '------+------' '------+------'
 */

  [_BASE2]      = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


  /* Navigation
 * ,----------------------------------,                             ,----------------------------------,
 * |      |      |      |      |      |                             |      |      |      |      |      |
 * |------+------+------+------+------|                             |-------------+------+------+------|
 * |      |      |      |      |      |                             | left | down |  up  |right | caps |
 * |------+------+------+------+------|                             |------|------+------+------+------|
 * |  gui |  alt | ctrl | shft |      |                             | home | pgdn | pgup | end  |  ins |
 * |------+------+------+-------------,                             ,-------------+------+------+------,
 *        |      |      |                                                         |      |      |
 *        '------+------'-------------'                             '-------------'------+------'
 *                      |      |      |                             |      |      |
 *                      |      |      |                             |      |      |
 *                      |      |      |                             |      |      |
 *                      '------+------'                             '------+------'
 *                                    '------+------' '------+------'
 *                                    |      |      | |      |      |
 *                                    '------+------' '------+------'
 *                                    |      |      | |      |      |
 *                                    '------+------' '------+------'
 */
  [_NAVIGATION] = LAYOUT(\
      KC_7, KC_5, KC_3, KC_1, KC_9,                                                           KC_0, KC_2, KC_4, KC_6, KC_8,
      SW_WIN, SW_TAB, KC_DEL, KC_TAB, KC_CAPS,                                                KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,
      OSM(MOD_LGUI),  OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_APP,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS,
              KC_NO, KC_NO,                                                              KC_NO, KC_NO,
                           KC_TRNS, KC_TRNS,                           KC_RSFT, MED_ENT,
                                  KC_NO, KC_NO,               KC_DEL, KC_NO,
                                  KC_NO, KC_NO,               KC_NO, KC_NO
  ),

  [_MEDIA]      = LAYOUT(\
      DF(0), DF(1), DF(2), KC_NO, KC_NO,                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                            KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, 
             KC_NO, KC_NO,                                                           KC_NO, KC_NO, 
                           KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, 
                                        KC_NO, KC_NO,   KC_NO, KC_NO, 
                                        KC_NO, KC_NO,   KC_NO, KC_NO
   ),

  [_NUMBERS]    = LAYOUT(\
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                             KC_ASTR, KC_7, KC_8, KC_9, KC_SLSH,
      KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO,                             KC_PLUS, KC_4, KC_5, KC_6, KC_EQL,
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                     KC_MINS, KC_1, KC_2, KC_3, KC_DOT,
                KC_NO, KC_NO,                                                   KC_NO, KC_NO,
                         KC_TRNS, KC_SPC,                       KC_0, KC_ENT,
                                         KC_NO, KC_NO,        KC_NO, KC_NO,
                                         KC_NO, KC_NO,        KC_NO, KC_NO
    ),


  [_SYMBOLS]    = LAYOUT(\
      KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PERC,                     KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_HASH,
      KC_SCLN, KC_COLN, KC_LPRN, KC_RPRN, KC_MINS,                   KC_PLUS, KC_QUOT, KC_DQT, KC_UNDS, KC_DLR,
      KC_GRV, KC_BSLS, KC_LBRC, KC_RBRC, KC_EQL,                     KC_PIPE, KC_TILD, KC_LT, KC_GT, KC_QUES,
             KC_NO, KC_NO,                                                                 KC_NO, KC_NO,
                       KC_ESC, KC_SPC,                         KC_TRNS, KC_TRNS,
                                        KC_NO, KC_NO,          KC_NO, KC_NO,
                                        KC_NO, KC_NO,            KC_NO, KC_NO
  ),

  /* FUNCTIONS
 * ,----------------------------------,                             ,----------------------------------,
 * |  F10 |   F7 |   F8 |   F9 | prtsc|                             |      |      |      |      |      |
 * |------+------+------+------+------|                             |-------------+------+------+------|
 * |  F11 |   F4 |   F5 |   F6 |numlck|                             |      |      |      |      |      |
 * |------+------+------+------+------|                             |------|------+------+------+------|
 * |  F12 |   F1 |   F2 |   F3 | pause|                             |      |shift | ctrl |  alt |  gui |
 * |------+------+------+-------------,                             ,-------------+------+------+------,
 *        |      |      |                                                         |      |      |
 *        '------+------'-------------'                             '-------------'------+------'
 *                      |      |      |                             |      |      |
 *                      |      |      |                             |      | trans|
 *                      |      |      |                             |      |      |
 *                      '------+------'                             '------+------'
 *                                    '------+------' '------+------'
 *                                    |      |      | |      |      |
 *                                    '------+------' '------+------'
 *                                    |      |      | |      |      |
 *                                    '------+------' '------+------'
 */
  [_FN] = LAYOUT(\
      KC_F10, KC_F7, KC_F8, KC_F9, KC_PSCR,                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK,                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_F12, KC_F1, KC_F2, KC_F3, KC_PAUS,                          KC_NO, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_LALT), OSM(MOD_RGUI),
              KC_NO, KC_NO,                                                         KC_NO, KC_NO,
                        MED_ESC, KC_APP,                          KC_NO, KC_TRNS,
                                    KC_NO, KC_NO,            KC_NO, KC_NO,
                                    KC_NO, KC_NO,             KC_NO, KC_NO
  )};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}


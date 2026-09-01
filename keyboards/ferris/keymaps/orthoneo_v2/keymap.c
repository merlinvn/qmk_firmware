#include QMK_KEYBOARD_H

// Callum swapper
// https://github.com/callum-oakley/qmk_firmware/blob/master/users/callum
#include "swapper.h"

enum layers {
    _CDH,
    _NAV,
    _SYM,
    _NUM,
    _FUN,
};

enum keycodes {
    // Numword and switch app
    NUMWORD = SAFE_RANGE,

    SW_APP,
    SW_WIN,
};

// Layer keys
#define NUM_D LT(_NUM, KC_D)
#define NAV LT(_NAV, KC_SPC)
#define SYM_E LT(_SYM, KC_E)

// LEFT HAND HOME ROW MODS COLEMAK ├─────────────────┐

#define GUI_A MT(MOD_LGUI, KC_A)
#define ALT_R MT(MOD_LALT, KC_R)
#define CTL_S MT(MOD_LCTL, KC_S)
#define SHT_T MT(MOD_LSFT, KC_T)

// RIGHT HAND HOME ROW MODS COLEMAK ├────────────────┐

#define SHT_N MT(MOD_RSFT, KC_N)
#define CTL_H MT(MOD_LCTL, KC_H)
#define ALT_I MT(MOD_LALT, KC_I)
#define GUI_O MT(MOD_LGUI, KC_O)

#define TAB_L G(S(KC_LBRC))
#define TAB_R G(S(KC_RBRC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {// Colemak Mod-DH layout
                                                              [_CDH] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_Z, KC_L, KC_U, KC_Y, KC_ENT, GUI_A, ALT_R, CTL_S, SHT_T, KC_G, KC_M, SHT_N, CTL_H, ALT_I, GUI_O, KC_QUOT, KC_X, KC_C, NUM_D, KC_V, KC_SLSH, KC_J, KC_K, KC_COMM, KC_DOT, KC_MEH, NAV, SYM_E, MO(_FUN)),

                                                              [_SYM] = LAYOUT_split_3x5_2(KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PERC, KC_QUOT, KC_CIRC, KC_AMPR, KC_DLR, KC_ENT, KC_SCLN, KC_COLN, KC_LPRN, KC_RPRN, KC_EQL, KC_PIPE, KC_LABK, KC_RABK, KC_MINS, KC_UNDS, KC_DQT, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_QUES, KC_HASH, KC_ASTR, KC_GRV, KC_TILD, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS),

                                                              [_NAV] = LAYOUT_split_3x5_2(SW_APP, SW_WIN, TAB_L, TAB_R, MEH(KC_P), KC_INS, KC_HOME, KC_UP, KC_END, KC_ENT, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, MEH(KC_X), KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, CW_TOGG, G(KC_SPC), A(KC_SPC), C(KC_SPC), LM(_NUM, MOD_LSFT), MEH(KC_SPC), KC_APP, KC_PGDN, KC_PGUP, KC_DEL, KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

                                                              [_NUM] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLSH, KC_7, KC_8, KC_9, KC_ENT, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_ASTR, KC_4, KC_5, KC_6, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MINS, KC_1, KC_2, KC_3, KC_COMM, KC_TRNS, MT(MOD_LSFT, KC_SPC), KC_0, KC_EQL),

                                                              [_FUN] = LAYOUT_split_3x5_2(KC_F10, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_F11, KC_F4, KC_F5, KC_F6, KC_PAUS, KC_NO, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_F12, KC_F1, KC_F2, KC_F3, KC_SCRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};

enum combo_events {
    // Editing / navigation
    ESC_COMBO,
    TAB_COMBO,
    BSPC_COMBO,

    // Punctuation
    CLN_COMBO,
    MINS_COMBO,
    USCR_COMBO,

    // Braces
    LCBR_COMBO,
    LPRN_COMBO,
    LBRC_COMBO,
    RCBR_COMBO,
    RPRN_COMBO,
    RBRC_COMBO,

    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

// Editing / navigation
const uint16_t PROGMEM esc_combo[] = {CTL_S, SHT_T, COMBO_END};

const uint16_t PROGMEM tab_combo[] = {ALT_R, CTL_S, COMBO_END};

const uint16_t PROGMEM bspc_combo[] = {ALT_I, CTL_H, COMBO_END};

// Punctuation
const uint16_t PROGMEM cln_combo[] = {SHT_N, CTL_H, COMBO_END};

const uint16_t PROGMEM mins_combo[] = {KC_C, NUM_D, COMBO_END};

const uint16_t PROGMEM uscr_combo[] = {KC_J, KC_K, COMBO_END};

// Braces
const uint16_t PROGMEM lcbr_combo[] = {KC_F, CTL_S, COMBO_END};

const uint16_t PROGMEM lprn_combo[] = {KC_P, SHT_T, COMBO_END};

const uint16_t PROGMEM lbrc_combo[] = {KC_B, KC_G, COMBO_END};

const uint16_t PROGMEM rbrc_combo[] = {KC_J, KC_M, COMBO_END};

const uint16_t PROGMEM rprn_combo[] = {KC_L, SHT_N, COMBO_END};

const uint16_t PROGMEM rcbr_combo[] = {KC_U, KC_E, COMBO_END};

combo_t key_combos[] = {
    [ESC_COMBO]  = COMBO(esc_combo, MT(MOD_LCTL | MOD_LSFT, KC_ESC)),
    [TAB_COMBO]  = COMBO(tab_combo, MT(MOD_LCTL | MOD_LALT, KC_TAB)),
    [BSPC_COMBO] = COMBO(bspc_combo, MT(MOD_LCTL | MOD_LALT, KC_BSPC)),

    [CLN_COMBO]  = COMBO(cln_combo, MT(MOD_LCTL | MOD_LSFT, KC_COLN)),
    [MINS_COMBO] = COMBO(mins_combo, KC_MINS),
    [USCR_COMBO] = COMBO(uscr_combo, KC_UNDS),

    /* [LCBR_COMBO] = COMBO(lcbr_combo, KC_LCBR), [LPRN_COMBO] = COMBO(lprn_combo, KC_LPRN), [LBRC_COMBO] = COMBO(lbrc_combo, KC_LBRC), */
    /**/
    /* [RCBR_COMBO] = COMBO(rcbr_combo, KC_RCBR), [RPRN_COMBO] = COMBO(rprn_combo, KC_RPRN), [RBRC_COMBO] = COMBO(rbrc_combo, KC_RBRC), */
};

// caps word setup
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_MINS:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

bool sw_app_active = false;
bool sw_win_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(&sw_app_active, KC_LGUI, KC_TAB, SW_APP, keycode, record);

    update_swapper(&sw_win_active, KC_LALT, KC_TAB, SW_WIN, keycode, record);

    return true;
}

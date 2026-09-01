#include "merlinvn.h"
#include "swapper.h"

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool sw_win_active  = false;
bool sw_tab_active  = false;
bool sw_lang_active = false;

// store latest keycode
uint16_t last_key = 0;

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // add perkey tapping term here
        default:
            return TAPPING_TERM;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(&sw_win_active, KC_LALT, KC_TAB, SW_WIN, keycode, record);
    update_swapper(&sw_tab_active, KC_LCTL, KC_TAB, SW_TAB, keycode, record);

    /* update_swapper( */
    /*     &sw_lang_active, KC_LCTL, KC_SPC, SW_LANG, */
    /*     keycode, record */
    /* ); */

    switch (keycode) {
        case KC_TRNS:
        case KC_NO:
            /* Always cancel one-shot layer when another key gets pressed */
            if (record->event.pressed && is_oneshot_layer_active()) clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
            return true;
        case RSFT_LT:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    // send advanced keycode, etc.
                    // the 16 bit version of the `tap_code` function is used here
                    // because KC_HASH is a non-basic keycode.
                    tap_code16(KC_LT);
                }
                // do not continue with default tap action
                // if the MT was pressed or released, but not held
                return false;
            }
            break;
        case RCTL_GT:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    // send advanced keycode, etc.
                    // the 16 bit version of the `tap_code` function is used here
                    // because KC_HASH is a non-basic keycode.
                    tap_code16(KC_GT);
                }
                // do not continue with default tap action
                // if the MT was pressed or released, but not held
                return false;
            }
            break;
        case LALT_TILD:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    // send advanced keycode, etc.
                    // the 16 bit version of the `tap_code` function is used here
                    // because KC_HASH is a non-basic keycode.
                    tap_code16(KC_TILD);
                }
                // do not continue with default tap action
                // if the MT was pressed or released, but not held
                return false;
            }
            break;
        case GUI_QUES:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    // send advanced keycode, etc.
                    // the 16 bit version of the `tap_code` function is used here
                    // because KC_HASH is a non-basic keycode.
                    tap_code16(KC_QUES);
                }
                // do not continue with default tap action
                // if the MT was pressed or released, but not held
                return false;
            }
            break;
        default:
            break;
    }
    return true;
}

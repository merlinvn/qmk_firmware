#include QMK_KEYBOARD_H
#include "merlinvn.h"

/** Process rotary encoder  */

static bool tabbing = false;
static uint16_t tabtimer;
#define TABBING_TIMER 750


uint8_t mod_state;
bool encoder_update_user(uint8_t index, bool clockwise) {
    // Store the current modifier state in the variable for later reference
    mod_state = get_mods();

    if (index == 0) { /* First encoder */
        if (IS_LAYER_ON(_MEDIA)){
            if (clockwise) {
              tap_code16(KC_VOLU);
            } else {
              tap_code16(KC_VOLD);
            }
        } else if (IS_LAYER_ON(_NAVIGATION)) {

/*
           if (clockwise) {
               tabtimer = timer_read();
               if(!tabbing) {
                  register_code(KC_LALT);
                       tabbing = true;
                }
               tap_code(KC_TAB);
            } else {
               tabtimer = timer_read();
               if(!tabbing) {
                   register_code(KC_LALT);
                   tabbing = true;
                }
                register_code(KC_LSFT);
                tap_code(KC_TAB);
                unregister_code(KC_LSFT);
            }
*/
        } else if (mod_state & MOD_MASK_ALT) {
            tabtimer = timer_read();
            tabbing = true;
            if (clockwise) {
              tap_code(KC_TAB);
            } else {
              tap_code16(S(KC_TAB));
            }
        } else if (mod_state & MOD_MASK_CTRL) {
            if (clockwise) {
              tap_code(KC_TAB);
            } else {
              tap_code16(S(KC_TAB));
            }
/**
            // Temparily canceling ctrl mods
            unregister_mods(MOD_MASK_CTRL);
            // Need to have this to remove residual CTRL
            unregister_code(KC_LCTRL);

            // apply action
            if (clockwise) {
              tap_code(KC_WH_D);
            } else {
              tap_code(KC_WH_U);
            }

            // reapplying mod
            set_mods(mod_state);
            register_code(KC_LCTRL);
*/
       } else /** on Base layer*/ {
         if (clockwise) {
           tap_code(KC_DOWN);
         } else {
           tap_code(KC_UP);
         }
       }
    }
    // else if (index == 1) { /* Second encoder */
    //     if (clockwise) {
    //         tap_code(KC_DOWN);
    //     } else {
    //         tap_code(KC_UP);
    //     }
    // }
    return true;
}

void matrix_scan_user(void) {
  if(tabbing) {
    if (timer_elapsed(tabtimer) > TABBING_TIMER) {
      unregister_code(KC_LALT);
      unregister_mods(MOD_MASK_ALT);
      tabbing = false;
    }
  }
}

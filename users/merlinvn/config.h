#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
// #define PERMISSIVE_HOLD
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 500

// #define BILATERAL_COMBINATIONS

// mouse config
// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 64

// #define COMBO_COUNT 1
#define COMBO_TERM 30
#define COMBO_VARIABLE_LEN

#define BILATERAL_COMBINATIONS 300

#define CAPS_WORD_IDLE_TIMEOUT 3000

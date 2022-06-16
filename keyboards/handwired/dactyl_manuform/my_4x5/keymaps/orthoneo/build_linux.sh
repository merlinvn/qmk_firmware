#!/bin/bash

# cp /mnt/d/Downloads/orthoneo_dm.json .
# qmk json2c orthoneo_dm.json -o keymap.c

# sed -ie '/^#include QMK_KEYBOARD_H/a #include "g/keymap_combo.h"' keymap.c

qmk flash -kb handwired/dactyl_manuform/my_4x5 -km orthoneo

# cp ~/qmk_firmware/handwired_dactyl_manuform_my_4x5_orthoneo.hex /mnt/d/Projects/qmk

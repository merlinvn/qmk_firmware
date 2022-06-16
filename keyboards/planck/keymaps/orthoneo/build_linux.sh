#!/usr/bin/bash

# cp /mnt/d/Downloads/orthoneo_4u_v2.json .
# qmk json2c orthoneo_4u_v2.json -o keymap.c


# qmk compile -kb planck/rev6 -km orthoneo
qmk flash -kb planck/rev6 -km orthoneo

# cp ~/qmk_firmware/.build/planck_rev6_orthoneo.bin /mnt/d/Downloads/planck_rev6_orthoneo_4u_v2.bin





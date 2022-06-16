#!/bin/bash

qmk compile -kb crkbd/rev1 -km orthoneo

cp ~/qmk_firmware/crkbd_rev1_orthoneo.hex /mnt/d/Projects/qmk


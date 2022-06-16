#!/bin/bash

qmk compile -kb boardsource/my_4x12 -km orthoneo

cp ~/qmk_firmware/boardsource_my_4x12_orthoneo.hex /mnt/d/Projects/qmk/

#!/bin/bash

qmk compile -kb ferris/sweep -km orthoneo_v2

cp ~/qmk_firmware/ferris_sweep_orthoneo_v2.hex /mnt/d/Projects/qmk


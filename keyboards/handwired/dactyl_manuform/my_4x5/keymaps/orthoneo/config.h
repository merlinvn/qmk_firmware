/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define SERIAL_USE_MULTI_TRANSACTION
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
//
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define SPLIT_USB_TIMEOUT_POLL 10
//

// #define FLIP_HALF

// Encoder config
// #define NUMBER_OF_ENCODERS 2
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

// #define ENCODERS_PAD_A_RIGHT { F5 }
// #define ENCODERS_PAD_B_RIGHT { F4 }

#define ENCODER_RESOLUTION 4


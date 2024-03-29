/* Copyright 2022 bbrfkr
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* key matrix */
#define MATRIX_ROWS 4
#define MATRIX_COLS 15
#define MATRIX_ROW_PINS { F5, F6, F7, D4 }
#define MATRIX_COL_PINS { D6, D7, B4, B5, B6, C6, F4, F1, E6, B0, B1, B2, B3, B7, D0 }

/* rgb num */
#define RGB_DI_PIN D3
#define RGBLED_NUM 65
#define RGB_MATRIX_LED_COUNT RGBLED_NUM
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

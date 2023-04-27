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

#include "quantum.h"

#define LAYOUT_ansi( \
      C0000, C0001, C0002, C0003, C0004, C0005, C0006, C0007, C0008, C0009, C0010, C0011, C0012, C0013, C0014, \
      C0100, C0101, C0102, C0103, C0104, C0105, C0106, C0107, C0108, C0109, C0110, C0111, C0112,        C0114, \
      C0200, C0201, C0202, C0203, C0204, C0205, C0206, C0207, C0208, C0209, C0210, C0211,        C0213, \
      C0300, C0301, C0302, C0303,        C0305,        C0307,        C0309, C0310,        C0312, C0313, C0314 \
    ) \
    { \
        { C0000, C0001, C0002, C0003, C0004, C0005, C0006, C0007, C0008, C0009, C0010, C0011, C0012, C0013, C0014 }, \
        { C0100, C0101, C0102, C0103, C0104, C0105, C0106, C0107, C0108, C0109, C0110, C0111, C0112, KC_NO, C0114 }, \
        { C0200, C0201, C0202, C0203, C0204, C0205, C0206, C0207, C0208, C0209, C0210, C0211, KC_NO, C0213, KC_NO }, \
        { C0300, C0301, C0302, C0303, KC_NO, C0305, KC_NO, C0307, KC_NO, C0309, C0310, KC_NO, C0312, C0313, C0314 } \
    }

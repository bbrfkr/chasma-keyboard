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

#include "chasma.h"

led_config_t g_led_config = {
    {
        // {      3,      4,     11,     12,     18,     19,     25,     26,     32,     33,     40,     41,     46,     47,     52,     53,     60,     61},
        // {      2,      5,     10,     13,     17,     20,     24,     27,     31,     34,     39,     42,     45, NO_LED,     51,     54,     59,     62},
        // {      1,      6,      9,     14,     16,     21,     23,     28,     30,     35,     38,     43, NO_LED,     48, NO_LED,     55,     58,     63},
        // {      0,      7,      8,     15, NO_LED,     22, NO_LED,     29, NO_LED,     36,     37, NO_LED,     44,     49,     50,     56,     57,     64}
        {      3,      4,     11,     12,     18,     19,     25,     26,     32,     33,     40,     41,     46,     47,     52},
        {      2,      5,     10,     13,     17,     20,     24,     27,     31,     34,     39,     42,     45, NO_LED,     51},
        {      1,      6,      9,     14,     16,     21,     23,     28,     30,     35,     38,     43, NO_LED,     48, NO_LED},
        {      0,      7,      8,     15, NO_LED,     22, NO_LED,     29, NO_LED,     36,     37, NO_LED,     44,     49,     50}
    },
    {
        {  0,   0 }, { 21,   0 }, { 43,   0 }, { 64,   0 }, { 64,  16 }, { 43,  16 }, {  21,   16 }, { 0,   16 },
        {  0,  32 }, { 21,  32 }, { 43,  32 }, { 64,  32 }, { 64,  48 }, { 43,  48 }, {  21,   48 }, { 0,   48 },
                    { 21,  64 }, { 43,  64 }, { 64,  64 }, { 64,  80 }, { 43,  80 }, {  21,   80 }, { 0,   80 },
                    { 21,  96 }, { 43,  96 }, { 64,  96 }, { 64, 112 }, { 43, 112 }, {  21,  112 }, { 0,  112 },
                    { 21, 128 }, { 43, 128 }, { 64, 128 }, { 64, 144 }, { 43, 144 }, {  21,  144 }, { 0,  144 },
        {  0, 160 }, { 21, 160 }, { 43, 160 }, { 64, 160 }, { 64, 176 }, { 43, 176 }, {  21,  176 },
        {  0, 192 },              { 43, 192 }, { 64, 192 }, { 64, 208 },              {  21,  208 }, { 0,  208 },
        {  0, 224 },              { 43, 224 }, { 64, 224 },
        // underglow
        { 21,   0 }, { 21,  44 }, { 21,  89 }, { 21, 135 }, { 21, 180 }, { 21, 224 },
        { 43,   0 }, { 43,  44 }, { 43,  89 }, { 43, 135 }, { 43, 180 }, { 43, 224 }
    },
    {
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
          4,4,4,4,4,4,4,
          4,4,4,4,4,4,4,
          4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,
        4,  4,4,4,  4,4,
        4,  4,4,
        1,1,1,1,1,1,
        1,1,1,1,1,1
    }
};

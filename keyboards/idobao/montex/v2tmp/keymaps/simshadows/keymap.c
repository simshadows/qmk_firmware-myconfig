/* Copyright 2022 IBNobody & vinorodrigues
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
 * along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┌───┬───┬───┬───┐
     * │Esc│Tab│ F1│Cal│Bsp│
     * ├───┼───┼───┼───┼───┤
     * │Ctr│Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Gui│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │Alt│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Shi│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │MO1│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */
    [0] = LAYOUT(
        MO(1),       KC_MUTE, KC_VOLD, KC_VOLU, LAG(KC_F19),
        LAG(KC_F18), KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        LAG(KC_F17), KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        LAG(KC_F16), KC_P4,   KC_P5,   KC_P6,
        LAG(KC_F15), KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        LAG(KC_F14), KC_P0,            KC_PDOT
    ),

    /*
     * ┌───┌───┐───┬───┬───┐
     * │Rst│TOG│MOD│PSc│SLk│
     * ├───┼───┘───┼───┼───┤
     * │Hu+│   │Sp-│Sp+│Br-│
     * ├───┼───┼───┼───┼───┤
     * │Hu-│Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤Br+│
     * │St+│ ← │   │ → │   │
     * ├───┼───┼───┼───┤───┤
     * │St-│End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │mo1│Insert │Del│   │
     * └───┴───────┴───┘───┘
     */
    [1] = LAYOUT(
        _______,     RGB_MOD, RGB_VAD, RGB_VAI, LAG(KC_F13),
        LSG(KC_F19), RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI,
        LSG(KC_F18), KC_HOME, KC_UP,   KC_PGUP, LSG(KC_F14),
        LSG(KC_F17), KC_LEFT, XXXXXXX, KC_RGHT,
        LSG(KC_F16), KC_END,  KC_DOWN, KC_PGDN, QK_BOOT,
        LSG(KC_F15), KC_INS,           KC_DEL
    )
};

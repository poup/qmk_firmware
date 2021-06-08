/* Copyright 2017 Wunder
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

#include QMK_KEYBOARD_H
#include "keys.h"
#include "leds.h"
#include "macros.h"
 


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	  /* COLEMAK
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | HOME   | \ |    | PG UP  | 6      | 7      | 8      | 9      | 0      | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | F      | P      | G      | END    | ` ~    | PG DN  | J      | L      | U      | Y      | ' "    | ; :    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | BKSP   | A      | R      | S      | T      | D      | [ {    | INS    | ] }    | H      | N      | E      | I      | O      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | - _    | UP     | =  +   | K      | M      | , <    | . >    | / ?    | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | TT(_FN)| SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | ALT_GR | FN     | RGUI   | RCTRL  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_CO] = LAYOUT_ortho_5x15( /* COLEMAK */
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_BSLS, KC_PGUP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_END,  KC_GRV,  KC_PGDN, KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_SCLN,
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_LBRC, KC_INS,  KC_RBRC, KC_H,    KC_N,    KC_E,    KC_I,    KC_O,     KC_ENT,
        LS__PRN, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MINS, KC_UP,   KC_EQL,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RS__PRN,
        LC__CBR, KC_LGUI, KC_LALT, KL_ACC,  KL_FN,   KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KL_FN,   KC_ALGR, MO(_FN), KC_RGUI, RC__CBR
    ),
    /* QWERTY
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | HOME   | \      | PG UP  | 6      | 7      | 8      | 9      | 0      | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | END    | `      | PG DN  | Y      | U      | I      | O      | P      | ;      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | BKSP   | A      | S      | D      | F      | G      | [      | INS    | ]      | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | -      | UP     | =      | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | LEAD   | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | ALT_GR | FN     | RGUI   | RCTRL  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_BSLS, KC_PGUP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_END,  KC_GRV,  KC_PGDN, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SCLN,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC, KC_INS,  KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENT,
        LS__PRN, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MINS, KC_UP,   KC_EQL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RS__PRN,
        LC__CBR, KC_LGUI, KC_LALT, TT(_FN), KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KC_SPC,  KC_ALGR, MO(_FN), KC_RGUI, RC__CBR
    ),

    /* ACCENT
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    |        |        |   €    |        |        |        |        |        |        |        |        |        |        | KC_DEL |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_CIRC | XXXXXX | XXXXXX | E_CIRC | XXXXXX | XXXXXX | XXXXXX | PAUSE  | XXXXXX | XXXXXX | U_CIRC | I_CIRC | O_CIRC | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_GRAV | RGSTR  | XXXXXX | E_GRAV | DEGREE | XXXXXX | XXXXXX | XXXXXX | XXXXXX | E_AIGU | U_GRAV | I_GRAV | O_GRAV | Play   |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_TREM | XXXXXX | C_CED  | E_TREM | XXXXXX | XXXXXX | VOL+   | XXXXXX | XXXXXX | XXXXXX | U_TREM | I_TREM | O_TREM | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |        | PREV   | VOL-   | NEXT   |        |        |        |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_ACCENT] = LAYOUT_ortho_5x15(
         KC_ESC, _______, _______,  K_EURO, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_DEL,
        _______,  A_CIRC, XXXXXXX, XXXXXXX,  E_CIRC, XXXXXXX, XXXXXXX, XXXXXXX, KC_PAUS, XXXXXXX, XXXXXXX,  U_CIRC,  I_CIRC,  O_CIRC, XXXXXXX,
        _______,  A_GRAV, K_RGSTR, XXXXXXX,  E_GRAV, K_DEGRE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  E_AIGU,  U_GRAV,  I_GRAV,  O_GRAV, KC_MPLY,
        _______,  A_TREM, XXXXXXX, K_C_CED,  E_TREM, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,  U_TREM,  I_TREM,  O_TREM, XXXXXXX,
        _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT, _______, _______, _______, _______, _______, _______
    ),
    /* FUNCTION
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | F1     | F2     | F3     | F4     | F5     | XXXXXX | F11    | F12    | F6     | F7     | F8     | F9     | F10    | KC_DEL |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | XXXXXX | XXXXXX | <      | {      | XXXXXX | PSCR   | XXXXXX | PAUSE  | XXXXXX | }      | >      | XXXXXX | XXXXXX | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | _      | !      | =      | (      | XXXXXX | XXXXXX | XXXXXX | XXXXXX | XXXXXX | )      | =      | +      | -      | Play   |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | XXXXXX | XXXXXX | XXXXXX | [      | XXXXXX | XXXXXX | VOL+   | XXXXXX | XXXXXX | ]      | XXXXXX | XXXXXX | XXXXXX | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |        | PREV   | VOL-   | NEXT   |        |        |        |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,  KC_F11,  KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
        _______, XXXXXXX, XXXXXXX,   K_INF,  K_LCBR, XXXXXXX, KC_PSCR, K_DEGRE, KC_PAUS, XXXXXXX,  K_RCBR,   K_SUP, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, K_UNDER,  K_EXCL,   K_EQL,  K_LPRN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  K_RPRN,   K_EQL,  K_PLUS,  K_MINS, KC_MPLY,
        _______, XXXXXXX, XXXXXXX, XXXXXXX,   K_LBR, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX,   K_RBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT, _______, _______, _______, _______, _______, _______
    )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case A_CIRC: return tap_accent_circ(KC_A, record);
        case A_GRAV: return tap_accent_grav(KC_A, record);
        case A_TREM: return tap_accent_trem(KC_A, record);
		
        case E_CIRC: return tap_accent_circ(KC_E, record);
        case E_GRAV: return tap_accent_grav(KC_E, record);
        case E_TREM: return tap_accent_trem(KC_E, record);
		
        case I_CIRC: return tap_accent_circ(KC_I, record);
        case I_GRAV: return tap_accent_grav(KC_I, record);
        case I_TREM: return tap_accent_trem(KC_I, record);
		
        case O_CIRC: return tap_accent_circ(KC_O, record);
        case O_GRAV: return tap_accent_grav(KC_O, record);
        case O_TREM: return tap_accent_trem(KC_O, record);
		
        case U_CIRC: return tap_accent_circ(KC_U, record);
        case U_GRAV: return tap_accent_grav(KC_U, record);
        case U_TREM: return tap_accent_trem(KC_U, record);
    }
    return true;
}

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}

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
 
// layers keys
#define KL_ACC MO(_ACCENT)
#define KL_LFN LT(_FN, KC_DEL)
#define KL_RFN TT(_FN)
#define KL_NAV LT(_NAV, KC_ENT)

#define xT_BSPC CTL_T(KC_BSPC)
#define xT_ENT SFT_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	  /* COLEMAK
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | PG UP  | INS    | PG DN  | 6      | 7      | 8      | 9      | 0      | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | F      | P      | G      | - _    | ` ~    | = +    | J      | L      | U      | Y      | ' "    | ; :    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | BKSP   | A      | R      | S      | T      | D      | [ {    | \ |    | ] }    | H      | N      | E      | I      | O      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | HOME   | / ?    | END    | K      | M      | , <    | . >    |  UP    | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | _ACC   | _FN    |NTR/_NAV|BKSP/CTL|  LEAD  | NTR/SFT| SPACE  | _FN    | ALT_GR | LEFT   | DOWN   | RIGHT  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_CO] = LAYOUT_ortho_5x15( /* COLEMAK */
        KC_ESC,      x_1,     x_2,     x_3,     x_4,     x_5, KC_PGUP,  KC_INS, KC_PGDN,     x_6,     x_7,     x_8,     x_9,     x_0,  KC_DEL,
        KC_TAB,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_G, KC_MINS,  KC_GRV,  KC_EQL,    KC_J,    KC_L,    KC_U,    KC_Y, x_QUOTE, KC_SCLN,
        KC_BSPC,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D, KC_LBRC, KC_BSLS, KC_RBRC,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_ENT,
        LS__PRN,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_HOME, KC_SLSH,  KC_END,    KC_K,    KC_M, KC_COMM,  KC_DOT,   KC_UP, RS__PRN,
        LC__CBR, KC_LGUI, KC_LALT,  KL_ACC,  KL_LFN,  KL_NAV, xT_BSPC, KC_LEAD,  xT_ENT,  KC_SPC,  KL_RFN, KC_ALGR, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
	
    /* QWERTY
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | HOME   | \      | PG UP  | 6      | 7      | 8      | 9      | 0      | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | END    | `      | PG DN  | Y      | U      | I      | O      | P      | ;      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | BKSP   | A      | S      | D      | F      | G      | [      | INS    | ]      | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | HOME   | / ?    | END    | K      | M      | , <    | . >    |  UP    | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | _ACC   | _FN    | _NAV   | BKSP   |        | ENTER  | SPACE  | _FN    | ALT_GR | LEFT   | DOWN   | RIGHT  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
        KC_ESC,   x_1,     x_2,     x_3,     x_4,     x_5,    _______, _______, _______,  x_6,     x_7,     x_8,     x_9,     x_0,     KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SCLN,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, _______, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENT,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______,  KC_N,    KC_M,    KC_COMM, KC_DOT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* ACCENT
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    |        |        |   €    |        |        |        |        |        |        |        |        |        |        | KC_DEL |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_CIRC | XXXXXX | XXXXXX | U_CIRC | XXXXXX |        |        |        | XXXXXX | XXXXXX | E_CIRC | I_CIRC | O_CIRC | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_GRAV | RGSTR  | XXXXXX | U_GRAV | DEGREE |        |        |        | XXXXXX | E_AIGU | E_GRAV | I_GRAV | O_GRAV | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | A_TREM | XXXXXX | C_CED  | U_TREM | XXXXXX |        |        |        | XXXXXX | XXXXXX | E_TREM | I_TREM | O_TREM | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_ACCENT] = LAYOUT_ortho_5x15(
         KC_ESC, _______, _______,  K_EURO, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_DEL,
        _______,  A_CIRC, XXXXXXX, XXXXXXX, U_CIRC , XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX,  E_CIRC,  I_CIRC,  O_CIRC, XXXXXXX,
        _______,  A_GRAV, K_RGSTR, XXXXXXX, U_GRAV , K_DEGRE, _______, _______, _______, XXXXXXX,  E_AIGU,  E_GRAV,  I_GRAV,  O_GRAV, XXXXXXX,
        _______,  A_TREM, XXXXXXX, K_C_CED, U_TREM , XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX,  E_TREM,  I_TREM,  O_TREM, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    
	/* FUNCTION
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | F1     | F2     | F3     | F4     | F5     | XXXXXX | F11    | F12    | F6     | F7     | F8     | F9     | F10    | KC_DEL |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | F11    | F12    | <      | {      | XXXXXX | PSCR   | NUMLCK | PAUSE  | XXXXXX | }      | >      | F11    | F12    | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | _      | !      | =      | (      | '      |        |        |        | "      | )      | =      | +      | -      | Play   |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | XXXXXX | XXXXXX | XXXXXX | [      | XXXXXX |        |        |        | $      | ]      | _      | Play   | VOL+   | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
     * |        |        |        |        |        |        |        |        |        |        |        |        | PREV   | VOL-   | NEXT   |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,  KC_F11,  KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
        _______,  KC_F11,  KC_F12,   K_INF,  K_LCBR, XXXXXXX, KC_PSCR, KC_NLCK, KC_PAUS, XXXXXXX,  K_RCBR,   K_SUP,  KC_F11,  KC_F12, XXXXXXX,
        _______, K_UNDER,  K_EXCL,   K_EQL,  K_LPRN, x_QUOTE, _______, _______, _______, x_QUOT2,  K_RPRN,   K_EQL,  K_PLUS,  K_MINS, KC_MPLY,
        _______, XXXXXXX, XXXXXXX, XXXXXXX,   K_LBR, XXXXXXX, _______, _______, _______, S(KC_4),   K_RBR, K_UNDER, KC_MPLY, KC_VOLU, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
	
	/* NAVIGATION
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | F1     | F2     | F3     | F4     | F5     | XXXXXX | F11    | F12    | F6     | F7     | F8     | F9     | F10    | KC_DEL |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | ESC    | SLCT_W | SLCT_L | XXXXXX | MW UP  | XXXXXX | XXXXXX | XXXXX  | PG UP  | HOME   | UP     |  END   | DEL    | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | ENT    | ALT    | SHIFT  | CTRL   | MW DN  | AC_LFT | XXXXXX | AC_RGT | PG DN  | LEFT   | DOWN   | RIGHT  | BKSP   |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        | UNDO   | CUT    | COPY   | PASTE  | SEARCH | WH_L   | XXXXXX | WH_R   | ALT    | INS    | TAB    | XXXXXX |  MS_U  | XXXXXX |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
     * |        |        |        |        |        |        |        |        |        |        |        |        |  MS_L  |  MS_D  |  MS_R  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_NAV] = LAYOUT_ortho_5x15( /* NAVIGATION */
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,  KC_F11,  KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
        _______,  KC_ESC,  SLCT_W,  SLCT_L, XXXXXXX, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, KC_HOME,   KC_UP, KC_END,   KC_DEL, XXXXXXX,
        _______,  KC_ENT, KC_LALT, KC_LSFT, KC_LCTL, KC_WH_D, kx_AC_L, XXXXXXX, kx_AC_R, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, _______,
        _______, kx_UNDO,  kx_CUT, kx_COPY, kx_PSTE, kx_FIND, KC_WH_L, XXXXXXX, KC_WH_R, KC_LALT,  KC_INS, 	KC_TAB, KC_BTN1, KC_MS_U, KC_BTN2,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
    ),
};

bool isLeading = false;

// MACRO
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if(isLeading) {
		return true;
	}
	
    switch (keycode) {
        case x_1: return reverse_shift(KC_1, record);
        case x_2: return reverse_shift(KC_2, record);
        case x_3: return reverse_shift(KC_3, record);
        case x_4: return reverse_shift(KC_4, record);
        case x_5: return reverse_shift(KC_5, record);
        case x_6: return reverse_shift(KC_6, record);
        case x_7: return reverse_shift(KC_7, record);
        case x_8: return reverse_shift(KC_8, record);
        case x_9: return reverse_shift(KC_9, record);
        case x_0: return reverse_shift(KC_0, record);
		
        case x_QUOTE: return tap_quote(false, record);
        case x_QUOT2: return tap_quote(true, record);
		
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
		
        case SLCT_L: return select_line(record);
        case SLCT_W: return select_word(record);
    }
    return true;
}


// LEADER
LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;

    SEQ_ONE_KEY(x_4) {      
		tap_code16(A(KC_F4));
    }
    SEQ_ONE_KEY(x_7) {      
		tap_code16(A(KC_F7));
    } 
	SEQ_ONE_KEY(KC_INS) {      
		tap_code16(A(KC_INS));
    }
	SEQ_ONE_KEY(x_2) {      
		SEND_STRING("jbourquin@ankama.com");
    }
	SEQ_TWO_KEYS(x_2, x_2) {      
		SEND_STRING("bourquin.julien@gmail.com");
    }
	
    SEQ_TWO_KEYS(KC_W, KC_Q) {      
		tap_code16(A(KC_F4));
    }
	
    leader_end();
  }
}

void leader_start(void) {
  // sequence started
  isLeading = true;	
}

void leader_end(void) {
  // sequence ended (no success/failure detection)
    isLeading = false;
}


void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}

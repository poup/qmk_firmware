#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"

uint8_t mod_state;

bool reverse_shift(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		mod_state = get_mods();
		if (mod_state & MOD_MASK_SHIFT) {
			del_mods(MOD_MASK_SHIFT);
			tap_code(letter);
			set_mods(mod_state);
		} else {		 
		tap_code16(S(letter));
		}
    }
	return false;
}
 

bool tap_quote(bool forceShift, keyrecord_t *record) {
	if (record->event.pressed) {
		if(forceShift) {
			mod_state = get_mods();
			add_mods(MOD_MASK_SHIFT);
			tap_code(KC_QUOT);
			set_mods(mod_state);
			tap_code(KC_SPACE);
		} else {		
			tap_code(KC_QUOT);
			tap_code(KC_SPACE);
		}
    }
	return false;
}



bool tap_accent_circ(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		tap_code16(S(KC_6));
		tap_code(letter);
    }
	return false;
}

bool tap_accent_grav(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		mod_state = get_mods();
		if (mod_state & MOD_MASK_SHIFT) {
			del_mods(MOD_MASK_SHIFT);
			tap_code(KC_GRV);
			set_mods(mod_state);
			tap_code(letter);
		} else {		
			tap_code(KC_GRV);
			tap_code(letter);
		}
    }
	return false;
}

bool tap_accent_trem(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		tap_code16(S(KC_QUOT));
		tap_code(letter);
    }
	return false;
}



bool select_line(keyrecord_t *record) {
    if (record->event.pressed) {
        tap_code(KC_HOME);
        tap_code16(S(KC_END));
    }
	return false;
}

bool select_word(keyrecord_t *record) {
    if (record->event.pressed) {
        register_code(KC_LCTL);
        tap_code(KC_LEFT);
        tap_code16(S(KC_RGHT));
        unregister_code(KC_LCTL);
    }
	return false;
}
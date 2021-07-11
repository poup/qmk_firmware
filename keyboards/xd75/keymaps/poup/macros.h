#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"

bool shift_pressed(void) {
    return (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT))) != 0;
}

bool reverse_shift(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		if(shift_pressed()) {
			unregister_code(KC_LSFT);
			tap_code(letter);
			register_code(KC_LSFT);
		} else {		 
			tap_code(S(letter));
		}
    }
	return false;
}


bool tap_quote(bool forceShift, keyrecord_t *record) {
	if (record->event.pressed) {
		if(forceShift) {
			register_code(KC_LSFT);
			tap_code(KC_QUOT);
			tap_code(KC_SPACE);
			unregister_code(KC_LSFT);
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
		if(shift_pressed()) {
			unregister_code(KC_LSFT);
			tap_code(KC_GRV);
			register_code(KC_LSFT);
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
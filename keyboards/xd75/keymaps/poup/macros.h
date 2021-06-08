#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"

bool tap_accent_circ(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		tap_code16(S(KC_6));
		tap_code(letter);
    }
	return false;
}

bool tap_accent_grav(uint16_t letter, keyrecord_t *record) {
	if (record->event.pressed) {
		tap_code(KC_GRV);
		tap_code(letter);
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




void select_all(keyrecord_t *record) {
    if (record->event.pressed) {
        tap_code16(C(KC_A));
    }
}

void select_row(keyrecord_t *record) {
    if (record->event.pressed) {
        tap_code(KC_HOME);
        tap_code16(S(KC_END));
    }
}

void select_word(keyrecord_t *record) {
    if (record->event.pressed) {
        register_code(KC_LCTL);
        tap_code(KC_LEFT);
        tap_code16(S(KC_RGHT));
        unregister_code(KC_LCTL);
    }
}
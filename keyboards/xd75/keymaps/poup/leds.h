#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"

// Change LED colors depending on the layer.
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _FN:
            rgblight_setrgb_green();
            break;
       /*
	   case _NAV:
            rgblight_setrgb_springgreen();
            break;
        case _INTER:
            rgblight_setrgb_teal();
            break;
        case _ADJUST:
            rgblight_setrgb_red();
            break;
			*/
        default:  //  for any other layers, or the default layer
            rgblight_setrgb_yellow();
            break;
    }
    return state;
};

// set num lock always on
void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    tap_code(KC_NUMLOCK);
  }
}
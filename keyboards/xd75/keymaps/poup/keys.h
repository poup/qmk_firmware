#pragma once
#include QMK_KEYBOARD_H

 // Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT[_T(KC_I)
#define HOME_O RGUI_T(KC_O)

// alias
#define K_INF  S(KC_COMM)
#define K_SUP  S(KC_DOT)

#define K_LBR  KC_LBRC
#define K_RBR  KC_RBRC

#define K_LCBR  S(KC_LCBR)
#define K_RCBR  S(KC_RCBR)

#define K_LPRN  KC_LPRN
#define K_RPRN  KC_RPRN

#define K_EQL    KC_EQL
#define K_PLUS S(KC_EQL)

#define K_MINS    KC_MINS
#define K_UNDER S(KC_MINS)

#define K_EXCL S(KC_1)

#define E_AIGU  RALT(KC_E)

#define K_EURO  ALGR(KC_5)
#define K_C_CED ALGR(KC_COMM)
#define K_RGSTR ALGR(KC_R)
#define K_DEGRE SAGR(KC_SCLN)

#define kx_COPY LCTL(KC_C)             //Mac, change it to LGUI(KC_C)
#define kx_CUT  LCTL(KC_X)             //  >>      >>      LGUI(KC_X)
#define kx_PSTE LCTL(KC_V)             //  >>      >>      LGUI(KC_V)
#define kx_UNDO LCTL(KC_Z)             //  >>      >>      LGUI(KC_Z)
#define kx_FIND LCTL(KC_F)   
          
#define kx_AC_L LCA(KC_LEFT)        
#define kx_AC_R LCA(KC_RIGHT)          

enum layer_names {
    _CO,	
    _QW,
    _FN,
    _ACCENT,
    _NAV
};

// French chars
enum custom_keycodes {
  A_GRAV = SAFE_RANGE,
  A_CIRC, 
  A_TREM, 
  
  E_GRAV,
  E_CIRC,
  E_TREM,
  
  I_GRAV,
  I_CIRC,
  I_TREM,

  O_GRAV,
  O_CIRC,
  O_TREM, 
  
  U_GRAV,
  U_CIRC,
  U_TREM,

  C_CED,
  EURO,
  COPYRIGHT,
  RGSTR,
  PI,
  DEGREE,
  N_TILDE,
  PRETTYMUCH,
  INFINIT,
  
  x_QUOTE,
  x_QUOT2,
  x_1,
  x_2,
  x_3,
  x_4,
  x_5,
  x_6,
  x_7,
  x_8,
  x_9,
  x_0,
  SLCT_L, // select line
  SLCT_W  // select word
};


#define LS__PRN		LSFT_T(KC_LPRN) // Left shift if hold, ( if tap
#define RS__PRN		RSFT_T(KC_RPRN) // Right shift if hold, ) if tap

#define LC__CBR		LCTL_T(S(KC_LCBR)) // Left shift if hold, { if tap
#define RC__CBR		RCTL_T(S(KC_RCBR)) // Right shift if hold, } if tap


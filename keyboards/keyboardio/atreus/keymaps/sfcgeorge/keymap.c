// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _QW,
    _SM,
    _FN,
    _VI,
};

// LAYER_KC
#define FN_QUOT LT(_FN, KC_QUOT)
#define VI_I    LT(_VI, KC_I)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( // QWFRP
    KC_Q   , KC_W   , KC_F   , KC_R   , KC_P   ,                   KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN,
    KC_A   , KC_S   , KC_D   , KC_T   , KC_G   ,                   KC_H   , KC_N   , KC_E   , KC_O   , VI_I   ,
    KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LALT, KC_LGUI, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
    KC_ESC , KC_TAB , KC_LCTL, KC_LSFT, KC_BSPC, KC_LALT, KC_LGUI, KC_SPC , MO(_SM), FN_QUOT, KC_MINS, KC_ENT
  ),

  [_SM] = LAYOUT( // Symbol
    KC_EXLM, KC_AT  , KC_LPRN, KC_RPRN, KC_AMPR,                   KC_EQL , KC_7   , KC_8   , KC_9   , KC_MINS,
    KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_CIRC,                   KC_PERC, KC_4   , KC_5   , KC_6   , KC_PLUS,
    KC_GRV , A(KC_3), KC_LBRC, KC_RBRC, KC_PIPE, KC_TRNS, KC_TRNS, KC_ASTR, KC_1   , KC_2   , KC_3   , KC_BSLS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL , KC_TRNS, KC_TRNS, KC_SPC , KC_TRNS, KC_0   , KC_DOT , KC_TRNS
  ),

  [_FN] = LAYOUT( // Function
    G(KC_EXLM), G(KC_AT)  , G(KC_LPRN), G(KC_RPRN), G(KC_AMPR),                         KC_F15    , KC_MRWD   , KC_MPLY   , KC_MFFD   , KC_VOLU   ,
    G(KC_TILD), G(KC_DLR) , G(KC_LCBR), G(KC_RCBR), G(KC_CIRC),                         KC_F14    , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_VOLD   ,
    G(KC_GRV) , G(A(KC_3)), G(KC_LBRC), G(KC_RBRC), RESET     , KC_TRNS   , RESET     , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_MUTE   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
  ),

  [_VI] = LAYOUT( // Vi
    KC_TRNS   , A(KC_RGHT), KC_TRNS   , KC_TRNS   , KC_TRNS   ,                         KC_LEFT   , KC_RGHT   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , G(KC_RGHT), KC_TRNS   , KC_TRNS   , G(KC_LEFT),                         KC_UP     , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , A(KC_LEFT), KC_TRNS   , KC_TRNS   , KC_DOWN   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
  )

};

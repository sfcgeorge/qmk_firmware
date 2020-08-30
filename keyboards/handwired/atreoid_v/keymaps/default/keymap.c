#include QMK_KEYBOARD_H

// LAYER_KC
#define L2_QUOT LT(2, KC_QUOT)
#define L3_I    LT(3, KC_I)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer
  LAYOUT(
    KC_Q   , KC_W   , KC_F   , KC_R   , KC_P   ,
    KC_A   , KC_S   , KC_D   , KC_T   , KC_G   ,
    KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , MO(4)  ,
    KC_ESC , KC_TAB , KC_LCTL, KC_LSFT, KC_BSPC, KC_LALT,

             KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN,
             KC_H   , KC_N   , KC_E   , KC_O   , L3_I   ,
    TG(5)  , KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
    KC_LGUI, KC_SPC , MO(1)  , L2_QUOT, KC_MINS, KC_ENT
  ),
  // Symbols
  LAYOUT(
    KC_EXLM, KC_AT  , KC_LPRN, KC_RPRN, KC_AMPR,
    KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_CIRC,
    KC_GRV , A(KC_3), KC_LBRC, KC_RBRC, KC_PIPE, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL , KC_TRNS,

             KC_EQL , KC_7   , KC_8   , KC_9   , KC_MINS,
             KC_PERC, KC_4   , KC_5   , KC_6   , KC_PLUS,
    KC_TRNS, KC_ASTR, KC_1   , KC_2   , KC_3   , KC_BSLS,
    KC_TRNS, KC_SPC , KC_TRNS, KC_0   , KC_DOT , KC_TRNS
  ),
  // Media
  LAYOUT(
    G(KC_EXLM), G(KC_AT)  , G(KC_LPRN), G(KC_RPRN), G(KC_AMPR),
    G(KC_TILD), G(KC_DLR) , G(KC_LCBR), G(KC_RCBR), G(KC_CIRC),
    G(KC_GRV) , G(A(KC_3)), G(KC_LBRC), G(KC_RBRC), RESET     , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,

                KC_F15    , KC_MRWD   , KC_MPLY   , KC_MFFD   , KC_VOLU   ,
                KC_F14    , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_VOLD   ,
    RESET     , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_MUTE   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
  ),
  // Vim
  LAYOUT(
    KC_TRNS   , A(KC_RGHT), KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , G(KC_RGHT), KC_TRNS   , KC_TRNS   , G(KC_LEFT),
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , A(KC_LEFT), KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,

                KC_LEFT   , KC_RGHT   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
                KC_UP     , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_DOWN   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
  ),
  // Quantum
  LAYOUT(
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    OUT_AUTO  , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , OUT_BT    , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,

                KC_TRNS   , KC_TRNS   , OUT_USB   , KC_TRNS   , KC_TRNS   ,
                KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
  ),
  // Mouse
  LAYOUT(
    KC_BTN1   , KC_MS_U   , KC_BTN2   , KC_TRNS   , KC_TRNS   ,
    KC_MS_L   , KC_MS_D   , KC_MS_R   , KC_TRNS   , G(KC_LEFT),
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , A(KC_LEFT), KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,

                KC_WH_L   , KC_WH_R   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
                KC_WH_U   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_WH_D   , KC_ACL1   , KC_ACL2   , KC_TRNS   , KC_TRNS   ,
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_ACL0   , KC_TRNS   , KC_TRNS
  )
};

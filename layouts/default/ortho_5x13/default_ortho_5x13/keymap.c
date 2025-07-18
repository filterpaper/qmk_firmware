// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│Q  │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │#  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ ↑ │ / │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│LWR│Alt│RSE│   │   │   │Alt│Sft│←  │ ↓ │ → │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x13(
        KC_ESC,  KC_1,     KC_2,  KC_3,    KC_4,  KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,  KC_E,    KC_R,  KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_NUHS, KC_A,     KC_S,  KC_D,    KC_F,  KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_NUBS,  KC_Z,  KC_X,    KC_C,  KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
        KC_LCTL, KC_LGUI,  TT(1), KC_LALT, TT(2), KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_ortho_5x13(
       KC_GRV , KC_MUTE, KC_VOLU, KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT, G(KC_P), KC_SLEP, KC_WAKE, KC_PSCR, KC_DEL , KC_EQL  ,
       MS_BTN3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ ,
       MS_BTN2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ ,
       _______, MS_BTN1, _______, _______, _______, _______, _______, _______, _______, _______, _______, MS_UP,   _______ ,
       _______, MS_BTN4, _______, _______, _______, _______, _______, _______, _______, _______, MS_LEFT, MS_DOWN, MS_RGHT
    ),
    [2] = LAYOUT_ortho_5x13(
      KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12  ,
      _______, _______, _______, _______,  QK_RBT, _______, _______, _______, _______, _______, _______, _______, _______ ,
      KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ ,
      _______, _______, _______, _______, _______, _______, QK_BOOT, _______, _______, _______, _______, MS_WHLU, _______ ,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MS_WHLL, MS_WHLD, MS_WHLR
    ),
};

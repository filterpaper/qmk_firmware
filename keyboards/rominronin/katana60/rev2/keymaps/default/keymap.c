/* Copyright 2019 rominronin
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

// MacOS based definitions.
#define K_SPCFN LT(SYMB, KC_SPACE) // Tap for space, hold for symbols layer
#define K_PRVWD LALT(KC_LEFT)      // Previous word
#define K_NXTWD LALT(KC_RIGHT)     // Next word
#define K_LSTRT LGUI(KC_LEFT)      // Start of line
#define K_LEND  LGUI(KC_RIGHT)     // End of line
#define UNDO    LGUI(KC_Z)         // UNDO
#define CUT     LGUI(KC_X)         // CUT
#define COPY    LGUI(KC_C)         // COPY
#define PASTE   LGUI(KC_V)         // PASTE

enum layer_names {
    BASE,
    NUMB,
    SYMB,
    CURS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_1_a(/* Base */
    KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    DF(1),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
    KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,         KC_BSPC,
    MO(3),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME,      KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_DEL,  KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(2),   KC_LCTL, KC_LGUI, KC_LALT,                KC_BSPC,    KC_ENT,     K_SPCFN,       KC_RGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
  ),
  [NUMB] = LAYOUT_1_a(
    _______, _______, _______, _______, _______, _______, _______, DF(0),   _______, _______, KC_PEQL, KC_PSLS, KC_PAST, _______, _______,
    _______,     _______, _______, MS_UP,   _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      _______,
    _______,   MS_BTN2, MS_LEFT, MS_DOWN, MS_RGHT, _______, _______,      _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,   _______,
    _______, _______, MS_ACL0, MS_ACL1, MS_ACL2, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
    _______, _______, _______, _______,                _______,    KC_P0,      _______,       _______, KC_PDOT, KC_PENT, _______, _______
  ),
  [SYMB] = LAYOUT_1_a(
    QK_BOOT, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_GRV,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,         KC_DEL,
    _______,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_VOLD,      KC_VOLU, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,   _______,
    _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_MPRV, KC_MPLY, KC_MNXT, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
    _______, _______, _______, _______,                _______,    _______,    KC_DEL,        _______, _______, _______, _______, _______
  ),
  [CURS] = LAYOUT_1_a(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, K_PRVWD, KC_UP,   K_NXTWD, _______,      _______,
    _______,   _______, KC_LCTL, KC_LALT, KC_LSFT, _______, _______,      _______, KC_BSPC, KC_LEFT, KC_DOWN, KC_RIGHT,KC_DEL,    _______,
    _______, UNDO,    CUT,     COPY,    PASTE,   _______, _______, _______, _______, _______, K_LSTRT, _______, K_LEND,  _______, _______,
    _______, _______, _______, _______,                _______,    _______,    _______,       _______, _______, _______, _______, _______
  )
};

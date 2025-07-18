#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
    _FL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //,: Base Layer
    [0] = LAYOUT_60_iso(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_LEFT, KC_DOWN, LT(1,KC_RGHT)
	),

    //,: Function Layer
    [1] = LAYOUT_60_iso(
        KC_GRV,  KC_F1,   KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        XXXXXXX, MS_BTN1, MS_UP,    MS_BTN2,  MS_WHLU, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, KC_PGUP, KC_HOME, KC_PSCR,
        KC_TRNS, MS_LEFT, MS_DOWN,  MS_RGHT,  MS_WHLD, UG_HUEU, UG_SATU, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END,  XXXXXXX, KC_MNXT,
        KC_TRNS, UG_NEXT, UG_PREV,  UG_VALU,  UG_VALD, UG_HUED, UG_SATD, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY,          KC_MPRV,
        KC_TRNS, KC_TRNS, KC_TRNS,                              UG_TOGG,                            UG_SPDU, UG_SPDD, XXXXXXX, KC_TRNS
	)

};
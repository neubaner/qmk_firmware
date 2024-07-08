#pragma once

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_Q,           KC_W,           KC_E,       KC_R,       KC_T,           KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
        KC_A,   KC_S,   KC_D, KC_F, KC_G,           KC_H,       KC_J, KC_K, KC_L, KC_SCLN,
        // LGUI_T(KC_A),   LALT_T(KC_S),   LSFT_T(KC_D), LCTL_T(KC_F), KC_G,           KC_H,       RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN),
        KC_Z,           KC_X,       KC_C,       KC_V,       KC_B,           KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                    LT(2,KC_TAB), LT(1,KC_SPC),       LT(3,KC_ENT), LT(4,KC_BSPC)
    ),

	[1] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_BTN2,    KC_BTN1,    KC_TRNS,        KC_TRNS,    KC_LCBR,    KC_RCBR,    KC_LPRN,    KC_RPRN,
        KC_TRNS,    KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_LBRC,    KC_RBRC,    KC_TRNS,    KC_TRNS,
                                                 KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),

	[2] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_7,   KC_8,   KC_9,   KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_0,       KC_4,   KC_5,   KC_6,   KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_1,   KC_2,   KC_3,   KC_TRNS,
                                                 KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),

	[3] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_ASTR,    KC_AMPR,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_QUOT,    KC_CIRC,    KC_PERC,    KC_DLR,     KC_PLUS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TILD,    KC_HASH,    KC_AT,      KC_EXLM,    KC_PIPE,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    QK_BOOT,
                                                 KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),

	[4] = LAYOUT(
        KC_NO,      KC_PSCR,    KC_NO,      KC_NO,      KC_NO,          KC_F12,     KC_F7,      KC_F8,      KC_F9,      KC_NO,
        KC_NO,      KC_INS,     KC_HOME,    KC_PGUP,    KC_NO,          KC_F11,     KC_F4,      KC_F5,      KC_F6,      KC_NO,
        KC_NO,      KC_DEL,     KC_END,     KC_PGDN,    KC_NO,          KC_F10,     KC_F1,      KC_F2,      KC_F3,      KC_NO,
                                                    KC_NO, KC_NO,     KC_NO, KC_NO
    )
};

const uint16_t PROGMEM esc_combo[] = { KC_A, KC_SCLN, COMBO_END };
const uint16_t PROGMEM minus_combo[] = { KC_R, KC_U, COMBO_END };
const uint16_t PROGMEM under_combo[] = { KC_V, KC_M, COMBO_END };

combo_t key_combos[] = {
    COMBO(esc_combo,    KC_ESC),
    COMBO(minus_combo,  KC_MINS),
    COMBO(under_combo,  KC_UNDS)
};


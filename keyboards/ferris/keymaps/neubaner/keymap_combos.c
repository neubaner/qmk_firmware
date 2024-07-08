#include QMK_KEYBOARD_H

const uint16_t PROGMEM esc_combo[] = { KC_A, KC_SCLN, COMBO_END };
const uint16_t PROGMEM minus_combo[] = { KC_R, KC_U, COMBO_END };
const uint16_t PROGMEM under_combo[] = { KC_V, KC_M, COMBO_END };

combo_t key_combos[] = {
    COMBO(esc_combo,    KC_ESC),
    COMBO(minus_combo,  KC_MINS),
    COMBO(under_combo,  KC_UNDS)
}


// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,        KC_Y,  KC_U,               KC_I,               KC_O,               KC_P,
    MT(MOD_LSFT, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LGUI, KC_F), KC_G,        KC_H,  MT(MOD_RGUI, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_LALT, KC_L), MT(MOD_RSFT, KC_SCLN),
    KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,        KC_N,  KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,
                                                                    KC_ESC, LT(2, KC_SPC),       LT(1, KC_SPC), KC_ENT
  ),

  [1] = LAYOUT(
    KC_1,                  KC_2,                  KC_3,                 KC_4,                  KC_5,         KC_6,   KC_7,                  KC_8,                  KC_9,                  KC_0,
    MT(MOD_LSFT, KC_LBRC), MT(MOD_LALT, KC_RBRC), MT(MOD_LCTL, KC_GRV), MT(MOD_LGUI, KC_QUOT), KC_F11,       KC_F12, MT(MOD_RGUI, KC_PSCR), MT(MOD_RCTL, KC_BSLS), MT(MOD_LALT, KC_MINS), MT(MOD_RSFT, KC_EQL),
    KC_F1,                 KC_F2,                 KC_F3,                KC_F4,                 KC_F5,        KC_F6,  KC_F7,                 KC_F8,                 KC_F9,                 KC_F10,
                                                                                     KC_TRNS, KC_SPC,        KC_NO, KC_TRNS
  ),

  [2] = LAYOUT(
    KC_MS_BTN1,           KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_BTN2,  KC_NO,         KC_NO,  KC_HOME,               KC_UP,                 KC_END,                 KC_DEL,
    MT(MOD_LSFT, KC_TAB), KC_LALT,       KC_LCTL,    KC_LGUI,    KC_CAPS,         KC_BSPC, MT(MOD_RCTL, KC_LEFT), MT(MOD_RGUI, KC_DOWN), MT(MOD_LALT, KC_RIGHT), KC_RSFT,
    KC_MS_LEFT,           KC_MS_DOWN,    KC_MS_UP,    KC_MS_RIGHT, KC_NO,         KC_INS,  KC_PGDN,               KC_NO,                 KC_PGUP,                KC_NO,
                                                          KC_TRNS, KC_NO,         KC_BSPC, KC_TRNS
  ),
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_SPC):
        case LT(2, KC_SPC):
            return true;
        default:
            return false;
    }
}

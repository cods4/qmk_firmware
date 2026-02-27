/* Copyright 2024 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  _______,  _______,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,   KC_VOLD,   KC_VOLU,  KC_NO,    KC_TRNS,  RM_NEXT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,    KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD, MO(MAC_FN), KC_APP,    KC_RCTL,KC_LEFT,  KC_DOWN,  KC_RGHT ),

    [MAC_FN] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  LM_BRIU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_OSSW,  _______,  LM_BRID,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______ ),

    [WIN_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,    KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN),KC_APP,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT ),

    [WIN_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  RM_NEXT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  LM_BRIU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_OSSW,  _______,  LM_BRID,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  GU_TOGG,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______ ),
};

bool led_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Caps lock indicator
    if (host_keyboard_led_state().caps_lock) {
        uint8_t caps_led = g_led_config.matrix_co[3][0];
        if (caps_led != NO_LED && caps_led >= led_min && caps_led < led_max) {
            led_matrix_set_value(caps_led, 255);
        }
    }

    uint8_t current_layer = get_highest_layer(layer_state);
    uint8_t base_layer = MAC_BASE;

    if (layer_state_cmp(default_layer_state, WIN_BASE)) {
        base_layer = WIN_BASE;
    }

    if (current_layer == MAC_FN || current_layer == WIN_FN) {
        // Dim the board
        for (uint8_t i = led_min; i < led_max; i++) {
            led_matrix_set_value(i, 20);
        }

        // Highlight modified keys using the keymap arrays
        for (uint8_t r = 0; r < MATRIX_ROWS; r++) {
            for (uint8_t c = 0; c < MATRIX_COLS; c++) {
                uint16_t key = pgm_read_word(&keymaps[current_layer][r][c]);
                uint16_t base_key = pgm_read_word(&keymaps[base_layer][r][c]);
                if (key != KC_TRNS && key != base_key) {
                    uint8_t led_index = g_led_config.matrix_co[r][c];
                    if (led_index != NO_LED && led_index >= led_min && led_index < led_max) {
                        led_matrix_set_value(led_index, 255);
                    }
                }
            }
        }
    }

    return false;
}

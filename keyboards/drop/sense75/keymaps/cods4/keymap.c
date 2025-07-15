// Copyright 2022 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#define NO_LED 255

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐
     * │Esc││F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PSc││   │
     * └───┘└───┴───┴───┴───┘└───┴───┴───┴───┴└───┴───┴───┴───┘└───┘└───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp││Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  ││PgU│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤├───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter ││PgD│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┘└───┘
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│┌───┐
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┘│ ↑ │
     * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│┌───┼───┼───┐
     * └────┴────┴────┴────────────────────────┴───┴───┴───┘│ ← │ ↓ │ → │
     *                                                      └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,          KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PSCR,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MPLY,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, RM_TOGG, RM_VALU, RM_SPDU, RM_HUEU, RM_SATU, _______, _______, _______, _______, _______, _______, _______, _______,          KC_HOME,
        _______, RM_NEXT, RM_VALD, RM_SPDD, RM_HUED, RM_SATD, _______, _______, _______, _______, _______, _______,          _______,          KC_END,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______, _______,
        MO(2),   _______, _______,                            EE_CLR,                             _______,  _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, RM_NEXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [2] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

/**
 * Matrix position to LED index mapping
 * Based on keyboard.json rgb_matrix layout starting from index 13 (where matrix entries begin)
 * 
 * @param row Matrix row (0-5)
 * @param col Matrix column (0-14)
 * @return LED index (0-101) or NO_LED (255) if no LED exists for that position
 * 
 * Usage example:
 *   uint8_t led_index = matrix_to_led_index(0, 0);  // Gets LED index for ESC key
 *   if (led_index != NO_LED) {
 *       rgb_matrix_set_color(led_index, 255, 0, 0);  // Set to red
 *   }
 */
uint8_t matrix_to_led_index(uint8_t row, uint8_t col) {
    // Matrix position lookup table - maps [row][col] to LED index
    // -1 indicates no LED for that matrix position
    const int8_t matrix_led_map[MATRIX_ROWS][MATRIX_COLS] = {
        // Row 0: F-keys and top row
        {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, -1},  // F1-F12, PrtSc, encoder
        // Row 1: Number row
        {29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43},  // `1234567890-=, Backspace, Del
        // Row 2: QWERTY top row  
        {46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60},  // Tab, QWERTYUIOP[]|, PgUp
        // Row 3: ASDF row
        {62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, -1, 75},  // Caps, ASDFGHJKL;', Enter, PgDn
        // Row 4: ZXCV row
        {77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, -1, 89, -1},  // Shift, ZXCVBNM,./, RShift, Up
        // Row 5: Bottom row
        {92, 93, 94, -1, -1, 95, -1, -1, 96, 97, 98, -1, 99, 100, 101}  // Ctrl, GUI, Alt, Space, Alt, Fn, Ctrl, Left, Down, Right
    };
    
    if (row >= MATRIX_ROWS || col >= MATRIX_COLS) {
        return NO_LED;
    }
    
    int8_t led_index = matrix_led_map[row][col];
    return (led_index == -1) ? NO_LED : (uint8_t)led_index;
}

/**
 * Layer 1 modified keys (keys that are different from layer 0)
 * These LED indices correspond to keys that have different functionality on layer 1
 * Includes RGB controls, media keys, and function key modifications
 */
const uint8_t layer1_modified_leds[] = {
    // Encoder (KC_MPLY instead of KC_MUTE) - no LED mapping in this case
    42,  // QK_BOOT (Backspace position)
    47,  // RM_TOGG (Q position)
    48,  // RM_VALU (W position) 
    49,  // RM_SPDU (E position)
    50,  // RM_HUEU (R position)
    51,  // RM_SATU (T position)
    60,  // KC_HOME (PgUp position)
    63,  // RM_NEXT (A position)
    64,  // RM_VALD (S position)
    65,  // RM_SPDD (D position)
    66,  // RM_HUED (F position)
    67,  // RM_SATD (G position)
    75,  // KC_END (PgDn position)
    83,  // NK_TOGG (N position)
    92,  // MO(2) (LCtrl position)
    95   // EE_CLR (Space position)
};

/**
 * Layer 2 modified keys (keys that are different from layer 0)
 * This layer has minimal changes - only one key different from layer 0
 */
const uint8_t layer2_modified_leds[] = {
    63   // RM_NEXT (A position) - only key that's different from layer 0
};

// Array sizes
const uint8_t layer1_modified_count = sizeof(layer1_modified_leds) / sizeof(layer1_modified_leds[0]);
const uint8_t layer2_modified_count = sizeof(layer2_modified_leds) / sizeof(layer2_modified_leds[0]);

/**
 * Example function to highlight all modified keys for a specific layer
 * This function should be called from within rgb_matrix_indicators_advanced_user
 * 
 * @param layer Layer number (1 or 2)
 * @param r Red value (0-255)
 * @param g Green value (0-255)
 * @param b Blue value (0-255)
 * @param led_min Minimum LED index to consider (from rgb_matrix_indicators_advanced_user)
 * @param led_max Maximum LED index to consider (from rgb_matrix_indicators_advanced_user)
 * 
 * Usage example:
 *   // In rgb_matrix_indicators_advanced_user function:
 *   highlight_layer_modified_keys(1, 255, 0, 0, led_min, led_max);  // Highlight layer 1 keys in red
 */
void highlight_layer_modified_keys(uint8_t layer, uint8_t r, uint8_t g, uint8_t b, uint8_t led_min, uint8_t led_max) {
    const uint8_t* modified_leds = NULL;
    uint8_t count = 0;
    
    switch(layer) {
        case 1:
            modified_leds = layer1_modified_leds;
            count = layer1_modified_count;
            break;
        case 2:
            modified_leds = layer2_modified_leds;
            count = layer2_modified_count;
            break;
        default:
            return;
    }
    
    for (uint8_t i = 0; i < count; i++) {
        uint8_t led_index = modified_leds[i];
        if (led_index >= led_min && led_index < led_max) {
            rgb_matrix_set_color(led_index, r, g, b);
        }
    }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Caps lock indicator - red light on caps lock key
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(62, 255, 0, 0);
    }
    
    // Layer-based lighting
    uint8_t current_layer = get_highest_layer(layer_state | default_layer_state);
    switch(current_layer) {
        case 1:
            // Layer 1: Light up all modified keys in blue
            highlight_layer_modified_keys(1, 0, 0, 255, led_min, led_max);
            break;
        case 2:
            // Layer 2: Light up all modified keys in green
            highlight_layer_modified_keys(2, 0, 255, 0, led_min, led_max);
            break;
        default:
            // Layer 0: No special lighting (default behavior)
            break;
    }
    
    return false;
}

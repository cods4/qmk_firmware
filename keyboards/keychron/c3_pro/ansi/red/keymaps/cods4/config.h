#pragma once

// --- LED Matrix Startup Settings ---

// Override default cycle zones if any
#undef LED_MATRIX_CYCLE_ZONES_ENABLE
#undef LED_MATRIX_CAPS_LOCK_INDEX

// Set a specific startup mode
#define ENABLE_LED_MATRIX_BREATHING

// Set a startup brightness (value)
#define LED_MATRIX_DEFAULT_VAL 100   // 0-255 (255 is max brightness)
#define LED_MATRIX_DEFAULT_SPD 127   // 0-255 (255 is max speed)

// Set LED heatmap settings (if keyreactive is used, the equivalent of typing heatmap)
// Note: LED matrix has its own effects like solid_reactive_simple

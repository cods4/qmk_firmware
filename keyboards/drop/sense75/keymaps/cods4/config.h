// --- RGB Matrix Startup Settings ---

// Set a specific startup mode
// A list of modes can be found in the QMK docs for "RGB Matrix Effects"
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_BREATHING

// Set a startup color (hue, saturation, value)
#define RGB_MATRIX_STARTUP_HUE 0      // 0-255 (0 is red)
#define RGB_MATRIX_STARTUP_SAT 255   // 0-255 (255 is full saturation)
#define RGB_MATRIX_STARTUP_VAL 100   // 0-255 (255 is max brightness)

// Set RGB heatmap settings

// In order to change the delay of temperature decrease define
//#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50
// Limit the distance the effect spreads to surrounding keys.
//#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 40
// Limit how hot surrounding keys get from each press.
//#define RGB_MATRIX_TYPING_HEATMAP_AREA_LIMIT 16
// Remove the spread effect entirely.
//#define RGB_MATRIX_TYPING_HEATMAP_SLIM
// It's also possible to adjust the tempo of heating up. It's defined as the number of shades that are increased on the HSV scale. Decreasing this value increases the number of keystrokes needed to fully heat up the key.
//#define RGB_MATRIX_TYPING_HEATMAP_INCREASE_STEP 32

// Prevent any changes from being saved to EEPROM
//#define DISABLE_RGB_MATRIX_SAVED_EFFECTS

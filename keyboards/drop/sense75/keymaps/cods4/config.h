// --- RGB Matrix Startup Settings ---

// Set a specific startup mode
// A list of modes can be found in the QMK docs for "RGB Matrix Effects"
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP

// Set a startup color (hue, saturation, value)
#define RGB_MATRIX_STARTUP_HUE 0      // 0-255 (0 is red)
#define RGB_MATRIX_STARTUP_SAT 255   // 0-255 (255 is full saturation)
#define RGB_MATRIX_STARTUP_VAL 100   // 0-255 (255 is max brightness)

// Prevent any changes from being saved to EEPROM
//#define DISABLE_RGB_MATRIX_SAVED_EFFECTS

# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a QMK (Quantum Mechanical Keyboard) firmware configuration for the Drop SENSE75 mechanical keyboard. The keyboard is a 75% layout with RGB matrix lighting, a rotary encoder, and uses the STM32F303 microcontroller.

## Build Commands

```bash
# Build the firmware for the default keymap
make drop/sense75:default

# Build the firmware for a specific keymap (e.g., cods4)
make drop/sense75:cods4

# Build and flash the firmware
cd ~/qmk_firmware/ && git pull && cd .. && qmk compile -kb drop/sense75 -km cods4 && qmk flash -kb drop/sense75 -km cods4
```

Build commands must be run from the QMK firmware root directory (parent of keyboards/), not from this keyboard directory.

## Code Architecture

### Key Files
- `keyboard.json`: Hardware configuration including matrix pins, USB identifiers, features, and layout definitions
- `config.h`: Hardware-specific settings for I2C, EEPROM, and RGB matrix configuration
- `sense75.c`: RGB matrix LED driver configuration for the IS31FL3733 chips
- `rules.mk`: Build configuration, includes common library
- `keymaps/`: Individual keymap configurations

### Keymap Structure
- Each keymap is in its own subdirectory under `keymaps/`
- `keymap.c`: Defines key layouts, layer switching, and custom functions
- `config.h`: Keymap-specific overrides for RGB, timing, and other settings
- `rules.mk`: Feature enables (VIA, encoder mapping, RGB matrix, etc.)

### RGB Matrix Implementation
- Uses dual IS31FL3733 LED drivers (addresses configured in config.h)
- LED positions and matrix mapping defined in sense75.c
- Supports underglow, per-key lighting, and reactive animations
- Custom RGB indicators for layers and caps lock in keymap.c

### Hardware Features
- 75% layout with function row and dedicated arrow keys
- Rotary encoder for volume/media control
- RGB matrix with 276 LEDs total
- External EEPROM for settings storage
- Bootloader: STM32 DFU mode

## Common Development Tasks

### Creating a New Keymap
1. Copy an existing keymap directory (e.g., `default/` or `cods4/`)
2. Modify `keymap.c` to define your key layout across layers
3. Adjust `config.h` for RGB preferences and timing
4. Enable desired features in `rules.mk`

### RGB Customization
- Default RGB settings are in the keymap's `config.h`
- Layer indicators and custom lighting logic go in `keymap.c`
- Available effects are defined in `keyboard.json` animations section

### Bootloader Entry
- Hold top-left key (Escape) while plugging in
- Press physical reset button under spacebar
- Use `QK_BOOT` keycode if mappeda

# Instructions
I want you to figure out how to control the leds behind the keys so that when caps lock is on, the caps lock key is lit up red (this already works, but might need to be refactored)W
When a different layer is selected, I want all the assigned keys in that layer to light up, Layer 1 should eb blue, and layer 2 should be green.

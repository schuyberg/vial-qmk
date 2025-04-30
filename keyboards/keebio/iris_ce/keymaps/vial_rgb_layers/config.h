#pragma once

#define VIAL_KEYBOARD_UID {0x45, 0xEE, 0xB2, 0xB2, 0xFE, 0x38, 0xF4, 0x4D}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}


// Force RGB matrix to use solid color as default
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

// Disable RGB when USB is suspended to save power
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// Disable RGB animations to save space
#undef RGB_MATRIX_FRAMEBUFFER_EFFECTS
#undef RGB_MATRIX_KEYPRESSES



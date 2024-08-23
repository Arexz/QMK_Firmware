// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET                  // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U     // Timeout window in ms in which the double tap can occur.

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

//DIP Switch for Reset/Bootloader
#define DIP_SWITCH_PINS { GP11 }

//#define LED_H "quantum\led.h"



//disable action features
//#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

//Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

//I2C Configuration
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13

//OLED Configuration
#define OLED_BITMAPS_C "keymaps\via\oled_bitmaps.c"
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_TIMEOUT 0

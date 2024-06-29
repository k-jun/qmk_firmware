// Copyright 2024 k-jun (@k-jun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define SPLIT_HAND_PIN D2
#define USE_I2C
#define POINTING_DEVICE_ROTATION_270
#define SSD1306OLED

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_LEFT
#define TAPPING_TERM 100


#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x0042
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001
#define MANUFACTURER sfcgeorge
#define PRODUCT AtreoidV
#define DESCRIPTION "44 key Bluetooth Atreoid"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_COL_PINS \
    { B7, B6, D7, C6, D0, D1 }
#define MATRIX_ROW_PINS \
    { F7, F6, F5, F4, F1, F0, D2, D3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 6

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 150 // default is 200

#define SAMPLE_BATTERY 1
#define BATTERY_LEVEL_PIN 9 // default is 7

#define MOUSEKEY_INTERVAL 33
#define MOUSEKEY_MAX_SPEED 7

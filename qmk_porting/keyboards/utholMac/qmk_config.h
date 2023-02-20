#pragma once

//* platform settings
// #define DEBUG        Debug_UART1
#define DCDC_ENABLE  1
#define FREQ_SYS     40000000
#define LSE_ENABLE   0
#define BLE_SLOT_NUM 4
// #define HSE_LOAD_CAPACITANCE 7.5 // in pF unit
// #define LSE_LOAD_CAPACITANCE 7   // in pF unit
// #define I2C_IO_REMAPPING
// #define SPI_IO_REMAPPING

/* USB Device descriptor parameter */
#define DEVICE_VER   0x0001
#define MANUFACTURER utholMac
#define PRODUCT      utholMac

#define QMK_VERSION    "0.0.1"
#define QMK_BUILDDATE  __DATE__
#define QMK_KEYBOARD_H "utholMac.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS      \
    {                        \
        B9, A7, B8, B16, B18 \
    }
#define MATRIX_COL_PINS                                              \
    {                                                                \
        A4, A5, A6, A0, \
    }
#define DIODE_DIRECTION       COL2ROW
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

#define BATTERY_MEASURE_PIN A2
// #define POWER_DETECT_PIN    B12


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

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

#include "pre_handler.h"

/*
 * globals.h
 *
 *  Created on: Dec 25, 2014
 *      Author: Kurt
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_

// Make sure I have all needed header files
#include <stdint.h>
#include <stdarg.h>
#include <Adafruit_GFX.h>
#include <ArduinoDefs.h>
#include <Adafruit_ILI9341.h>
#include <Adafruit_STMPE610.h>
//#include "tft_display_object.h"

// The STMPE610 uses hardware SPI on the shield, and #8
// Define pin numbers

#define TFT_BACKLIGHT 3
#define STMPE_CS 8
#define TFT_DC 9
#define TFT_CS 10

// This is calibration data for the raw touch data to the screen coordinates
#define TS_MINX 150
#define TS_MINY 130
#define TS_MAXX 3800
#define TS_MAXY 4000

// Backlight for TFT
#define SCREENDIMTIMEMS 5000

// Size of the color selection boxes and the paintbrush size
//

// Some global objects
extern Adafruit_STMPE610 ts;
extern Adafruit_ILI9341 tft;
extern mraa_pwm_context pwmBacklight;


#endif /* GLOBALS_H_ */

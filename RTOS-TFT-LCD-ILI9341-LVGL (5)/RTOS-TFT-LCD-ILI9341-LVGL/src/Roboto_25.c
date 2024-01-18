/*******************************************************************************
 * Size: 25 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_25
#define ROBOTO_25 1
#endif

#if ROBOTO_25

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+003A ":" */
    0x39, 0xce, 0x0, 0x0, 0x0, 0x0, 0x1, 0xce,
    0x70,

    /* U+0041 "A" */
    0x0, 0x70, 0x0, 0x70, 0x0, 0xf8, 0x0, 0xf8,
    0x1, 0xf8, 0x1, 0xf8, 0x3, 0xb8, 0x3, 0x98,
    0x7, 0x1c, 0x7, 0x1c, 0xe, 0x1c, 0xe, 0x1c,
    0x1f, 0xfc, 0x1f, 0xfe, 0x38, 0xe, 0x38, 0xe,
    0x30, 0xe, 0x70, 0xe, 0x70, 0xe,

    /* U+0042 "B" */
    0x3f, 0xe0, 0xff, 0xe3, 0x83, 0xce, 0x7, 0x38,
    0x1c, 0xe0, 0x73, 0x83, 0x9c, 0x1e, 0x7f, 0xf1,
    0xff, 0xc7, 0x3, 0x9c, 0x7, 0x70, 0x1d, 0xc0,
    0x7f, 0x1, 0xf8, 0xe, 0xe0, 0x7b, 0xff, 0xcf,
    0xfc, 0x0,

    /* U+0043 "C" */
    0x3, 0xf0, 0x1f, 0xf0, 0x78, 0x71, 0xe0, 0x73,
    0x80, 0xee, 0x1, 0xdc, 0x0, 0x38, 0x0, 0x70,
    0x0, 0xe0, 0x1, 0xc0, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x3, 0x9c, 0xe, 0x38, 0x1c, 0x78, 0x70,
    0x7f, 0xc0, 0x3e, 0x0,

    /* U+0044 "D" */
    0x3f, 0xe0, 0x7f, 0xf0, 0xe0, 0xf1, 0xc0, 0xe3,
    0x80, 0xe7, 0x1, 0xce, 0x3, 0xb8, 0x7, 0x70,
    0xe, 0xe0, 0x1d, 0xc0, 0x3b, 0x80, 0xe7, 0x1,
    0xce, 0x3, 0xbc, 0xe, 0x70, 0x3c, 0xe0, 0xf1,
    0xff, 0xc3, 0xfe, 0x0,

    /* U+0045 "E" */
    0x3f, 0xfc, 0xff, 0xe3, 0x80, 0xe, 0x0, 0x38,
    0x0, 0xe0, 0x3, 0x80, 0x1c, 0x0, 0x7f, 0xe1,
    0xff, 0x87, 0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0,
    0xf, 0x0, 0x38, 0x0, 0xe0, 0x3, 0xff, 0x8f,
    0xfe, 0x0,

    /* U+0046 "F" */
    0x3f, 0xfc, 0xff, 0xf3, 0x80, 0xe, 0x0, 0x38,
    0x0, 0xe0, 0x3, 0x80, 0x1e, 0x0, 0x70, 0x1,
    0xff, 0x87, 0xfe, 0x1c, 0x0, 0x70, 0x1, 0xc0,
    0xf, 0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x0,

    /* U+0047 "G" */
    0x3, 0xf0, 0x1f, 0xf8, 0x78, 0x71, 0xe0, 0x73,
    0x80, 0xee, 0x1, 0xdc, 0x0, 0x38, 0x0, 0x70,
    0x0, 0xe1, 0xf9, 0xc7, 0xf7, 0x0, 0xee, 0x1,
    0xdc, 0x3, 0xbc, 0x7, 0x38, 0xe, 0x78, 0x78,
    0x7f, 0xe0, 0x3f, 0x0,

    /* U+0048 "H" */
    0x38, 0x7, 0x38, 0x7, 0x38, 0x7, 0x38, 0x7,
    0x38, 0x7, 0x38, 0x7, 0x38, 0x7, 0x78, 0xe,
    0x70, 0xe, 0x7f, 0xfe, 0x7f, 0xfe, 0x70, 0xe,
    0x70, 0xe, 0x70, 0xe, 0xf0, 0x1c, 0xe0, 0x1c,
    0xe0, 0x1c, 0xe0, 0x1c, 0xe0, 0x1c,

    /* U+0049 "I" */
    0x1c, 0x73, 0x8e, 0x38, 0xe3, 0x8e, 0x39, 0xc7,
    0x1c, 0x71, 0xc7, 0x1c, 0xe3, 0x8e, 0x0,

    /* U+004A "J" */
    0x0, 0x1c, 0x0, 0xe0, 0x3, 0x80, 0xe, 0x0,
    0x38, 0x0, 0xe0, 0x3, 0x80, 0xe, 0x0, 0x30,
    0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x70, 0x1,
    0xce, 0x6, 0x38, 0x38, 0x71, 0xe1, 0xff, 0x1,
    0xf0, 0x0,

    /* U+004B "K" */
    0x38, 0x1e, 0x70, 0x38, 0xe0, 0xe1, 0xc3, 0xc3,
    0x87, 0x7, 0x1c, 0xe, 0x78, 0x38, 0xe0, 0x73,
    0x80, 0xfe, 0x1, 0xfc, 0x3, 0xbc, 0x7, 0x38,
    0xe, 0x38, 0x38, 0x70, 0x70, 0x70, 0xe0, 0xe1,
    0xc0, 0xe3, 0x81, 0xe0,

    /* U+004C "L" */
    0x38, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38, 0x3,
    0x80, 0x38, 0x7, 0x80, 0x70, 0x7, 0x0, 0x70,
    0x7, 0x0, 0x70, 0x7, 0x0, 0xf0, 0xe, 0x0,
    0xe0, 0xf, 0xfe, 0xff, 0xe0,

    /* U+004D "M" */
    0x3e, 0x0, 0xf1, 0xf0, 0x7, 0x8f, 0x80, 0x3c,
    0x7c, 0x3, 0xe3, 0xe0, 0x1f, 0x1f, 0x81, 0xf8,
    0xfc, 0xd, 0xce, 0xe0, 0xee, 0x73, 0x6, 0xe3,
    0x98, 0x77, 0x1c, 0xe3, 0x38, 0xe7, 0x39, 0xc7,
    0x39, 0x8e, 0x38, 0xdc, 0x73, 0xc6, 0xc3, 0x9c,
    0x3e, 0x38, 0xe1, 0xe1, 0xc7, 0x7, 0xe, 0x38,
    0x30, 0x70,

    /* U+004E "N" */
    0x3c, 0x7, 0x3c, 0x7, 0x3e, 0x7, 0x3e, 0x7,
    0x3e, 0x7, 0x3f, 0x7, 0x3f, 0x7, 0x73, 0x8e,
    0x73, 0x8e, 0x71, 0xce, 0x71, 0xce, 0x70, 0xee,
    0x70, 0xee, 0x70, 0xee, 0xe0, 0x7c, 0xe0, 0x7c,
    0xe0, 0x3c, 0xe0, 0x3c, 0xe0, 0x1c,

    /* U+004F "O" */
    0x3, 0xf0, 0xf, 0xf8, 0x1e, 0x1c, 0x1c, 0xe,
    0x38, 0xe, 0x70, 0xe, 0x70, 0x7, 0x70, 0xe,
    0x70, 0xe, 0x70, 0xe, 0xe0, 0xe, 0xe0, 0xe,
    0xe0, 0xe, 0xe0, 0x1c, 0x60, 0x1c, 0x70, 0x38,
    0x78, 0x70, 0x3f, 0xe0, 0xf, 0x80,

    /* U+0050 "P" */
    0x3f, 0xf0, 0x7f, 0xf8, 0xe0, 0x71, 0xc0, 0x73,
    0x80, 0xe7, 0x1, 0xce, 0x3, 0xbc, 0xe, 0x70,
    0x1c, 0xe0, 0x71, 0xff, 0xc3, 0xff, 0x7, 0x0,
    0xe, 0x0, 0x3c, 0x0, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0x80, 0x0,

    /* U+0051 "Q" */
    0x3, 0xf0, 0xf, 0xf8, 0x1e, 0x1c, 0x1c, 0xe,
    0x38, 0xe, 0x70, 0xe, 0x70, 0x7, 0x70, 0xf,
    0x70, 0xe, 0x70, 0xe, 0xe0, 0xe, 0xe0, 0xe,
    0xe0, 0xe, 0xe0, 0x1c, 0x60, 0x1c, 0x70, 0x3c,
    0x78, 0x78, 0x3f, 0xfc, 0xf, 0xde, 0x0, 0xc,
    0x0, 0x0,

    /* U+0052 "R" */
    0x3f, 0xe0, 0xff, 0xe3, 0x83, 0xce, 0x7, 0x38,
    0x1c, 0xe0, 0x73, 0x81, 0xde, 0xf, 0x70, 0x79,
    0xff, 0xc7, 0xff, 0x1c, 0x1e, 0x70, 0x39, 0xc0,
    0xee, 0x3, 0xb8, 0xe, 0xe0, 0x3b, 0x80, 0xee,
    0x3, 0x80,

    /* U+0053 "S" */
    0x7, 0xe0, 0x7f, 0xe3, 0xc7, 0x8e, 0xf, 0x70,
    0x1d, 0xc0, 0x7, 0x80, 0xf, 0x80, 0x3f, 0xc0,
    0x7f, 0x80, 0x7f, 0x0, 0x3e, 0x0, 0x78, 0x0,
    0xee, 0x3, 0xb8, 0xe, 0x78, 0x71, 0xff, 0x81,
    0xfc, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xf0, 0x70, 0x1, 0xc0, 0x7,
    0x0, 0x1c, 0x0, 0x70, 0x3, 0x80, 0xe, 0x0,
    0x38, 0x0, 0xe0, 0x3, 0x80, 0xe, 0x0, 0x38,
    0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x70, 0x1,
    0xc0, 0x0,

    /* U+0055 "U" */
    0x38, 0x7, 0x38, 0x7, 0x38, 0x7, 0x38, 0x7,
    0x38, 0x6, 0x38, 0xe, 0x70, 0xe, 0x70, 0xe,
    0x70, 0xe, 0x70, 0xe, 0x70, 0xe, 0x70, 0xe,
    0x70, 0x1c, 0xe0, 0x1c, 0x70, 0x1c, 0x70, 0x38,
    0x78, 0x78, 0x3f, 0xe0, 0xf, 0xc0,

    /* U+0056 "V" */
    0xe0, 0xf, 0xc0, 0x1f, 0x80, 0x73, 0x80, 0xe7,
    0x3, 0x8e, 0x7, 0x1c, 0x1c, 0x38, 0x38, 0x30,
    0xe0, 0x71, 0xc0, 0xe3, 0x1, 0xce, 0x3, 0x98,
    0x7, 0x70, 0x6, 0xe0, 0xf, 0x80, 0x1f, 0x0,
    0x3c, 0x0, 0x78, 0x0,

    /* U+0057 "W" */
    0xe0, 0x70, 0x3f, 0x3, 0x83, 0xf8, 0x3c, 0x1d,
    0xc1, 0xe0, 0xee, 0x1f, 0xe, 0x70, 0xf8, 0x71,
    0x86, 0xe3, 0x8e, 0x77, 0x38, 0x73, 0xb9, 0xc3,
    0x99, 0xce, 0x1d, 0xce, 0xe0, 0xec, 0x37, 0x7,
    0xe1, 0xb8, 0x3f, 0xf, 0x81, 0xf0, 0x7c, 0xf,
    0x83, 0xc0, 0x78, 0x1e, 0x3, 0xc0, 0xf0, 0xe,
    0x7, 0x0,

    /* U+0058 "X" */
    0x1c, 0x7, 0x8e, 0x7, 0x83, 0x83, 0x81, 0xc3,
    0x80, 0xf3, 0xc0, 0x39, 0xc0, 0x1d, 0xc0, 0x7,
    0xc0, 0x3, 0xe0, 0x1, 0xe0, 0x0, 0xf8, 0x0,
    0xfc, 0x0, 0xfe, 0x0, 0x73, 0x80, 0x71, 0xc0,
    0x78, 0xf0, 0x78, 0x38, 0x38, 0x1e, 0x3c, 0x7,
    0x0,

    /* U+0059 "Y" */
    0xe0, 0xe, 0xe0, 0x39, 0xc0, 0xf3, 0x81, 0xc3,
    0x87, 0x7, 0xe, 0xe, 0x38, 0xe, 0xe0, 0x1d,
    0xc0, 0x3f, 0x0, 0x3e, 0x0, 0x78, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0x70, 0x0,

    /* U+005A "Z" */
    0x1f, 0xfc, 0xff, 0xf0, 0x3, 0x80, 0x1e, 0x0,
    0xf0, 0x3, 0x80, 0x1e, 0x0, 0xf0, 0x3, 0x80,
    0x1e, 0x0, 0x70, 0x3, 0xc0, 0x1e, 0x0, 0x70,
    0x3, 0xc0, 0xe, 0x0, 0x70, 0x3, 0xff, 0xcf,
    0xff, 0x0,

    /* U+0061 "a" */
    0xf, 0x83, 0xfe, 0x38, 0xe7, 0xe, 0x0, 0xe0,
    0xe, 0x1f, 0xe7, 0xfe, 0xf0, 0xee, 0xe, 0xe1,
    0xee, 0x3c, 0xff, 0xc7, 0xdc,

    /* U+0062 "b" */
    0x38, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38, 0x3,
    0x80, 0x33, 0xc7, 0xfe, 0x78, 0xf7, 0x7, 0x70,
    0x77, 0x7, 0x70, 0x76, 0x7, 0xe0, 0x7e, 0x7,
    0xe0, 0xef, 0x1e, 0xff, 0xcc, 0xf0,

    /* U+0063 "c" */
    0xf, 0x83, 0xfc, 0xe3, 0xb8, 0x37, 0x7, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x1f, 0x83, 0xb8,
    0xe7, 0xf8, 0x7e, 0x0,

    /* U+0064 "d" */
    0x0, 0x38, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3,
    0x80, 0x1c, 0x3d, 0xe7, 0xfe, 0x38, 0xf3, 0x83,
    0x9c, 0x1d, 0xc0, 0xee, 0x7, 0x70, 0x7b, 0x83,
    0x9c, 0x1c, 0xe0, 0xe7, 0x8f, 0x1f, 0xf8, 0x7d,
    0xc0,

    /* U+0065 "e" */
    0xf, 0x83, 0xf8, 0xe3, 0xb8, 0x77, 0x7, 0xc0,
    0xff, 0xff, 0xff, 0xe0, 0x1c, 0x3, 0x80, 0x38,
    0x67, 0xfc, 0x3e, 0x0,

    /* U+0066 "f" */
    0x7, 0xc3, 0xe1, 0xe0, 0x70, 0x1c, 0x7, 0xf,
    0xf3, 0xfc, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x38,
    0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0,

    /* U+0067 "g" */
    0xf, 0x38, 0xfd, 0x8e, 0x3c, 0xe0, 0xe7, 0x7,
    0x70, 0x3b, 0x81, 0xdc, 0xe, 0xe0, 0xe7, 0x7,
    0x38, 0x39, 0xe3, 0xc7, 0xfe, 0x1f, 0x70, 0x3,
    0x0, 0x38, 0xc3, 0xc7, 0xfc, 0x1f, 0x80,

    /* U+0068 "h" */
    0x38, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38, 0x3,
    0x80, 0x73, 0xc7, 0xfe, 0x78, 0xf7, 0x7, 0x70,
    0x77, 0x7, 0x70, 0x7e, 0x7, 0xe0, 0xee, 0xe,
    0xe0, 0xee, 0xe, 0xe0, 0xee, 0xe,

    /* U+0069 "i" */
    0x1c, 0xe0, 0x0, 0x0, 0x3, 0x8e, 0x71, 0xc7,
    0x1c, 0x71, 0xc7, 0x38, 0xe3, 0x8e, 0x38,

    /* U+006A "j" */
    0x1, 0xc0, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x38, 0xe, 0x3, 0x81, 0xc0, 0x70, 0x1c, 0x7,
    0x1, 0xc0, 0x70, 0x18, 0xe, 0x3, 0x80, 0xe0,
    0x38, 0xe, 0x3, 0x81, 0xc1, 0xe0, 0xf0, 0x0,

    /* U+006B "k" */
    0x38, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe1, 0xce, 0x1c, 0x71, 0xe3, 0x8e,
    0x1c, 0xe0, 0xee, 0x7, 0xe0, 0x3f, 0x83, 0x9c,
    0x1c, 0xf0, 0xe3, 0x87, 0x1e, 0x38, 0x71, 0xc3,
    0xc0,

    /* U+006C "l" */
    0x1c, 0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x71, 0xc7,
    0x1c, 0x71, 0xc7, 0x38, 0xe3, 0x8e, 0x38,

    /* U+006D "m" */
    0x73, 0xc7, 0xc7, 0xfe, 0xfe, 0x78, 0xf8, 0xe7,
    0x7, 0xe, 0x70, 0x70, 0xf7, 0x7, 0xe, 0x70,
    0xe0, 0xe6, 0xe, 0xe, 0xe0, 0xe0, 0xee, 0xe,
    0xe, 0xe0, 0xe0, 0xee, 0xe, 0xe, 0xe0, 0xe1,
    0xce, 0x1c, 0x1c,

    /* U+006E "n" */
    0x73, 0xc7, 0xfe, 0x78, 0xf7, 0x7, 0x70, 0x77,
    0x7, 0x70, 0x7e, 0x7, 0xe0, 0xee, 0xe, 0xe0,
    0xee, 0xe, 0xe0, 0xee, 0xe,

    /* U+006F "o" */
    0xf, 0x81, 0xfe, 0x38, 0xf7, 0x7, 0x70, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x6, 0xe0,
    0xe7, 0x1c, 0x7f, 0x81, 0xf0,

    /* U+0070 "p" */
    0x39, 0xe1, 0xff, 0x8f, 0x1e, 0x70, 0x73, 0x83,
    0x9c, 0x1c, 0xe0, 0xee, 0x7, 0x70, 0x3b, 0x81,
    0xdc, 0x1c, 0xf1, 0xe7, 0xfe, 0x3b, 0xc3, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x0,

    /* U+0071 "q" */
    0xf, 0x33, 0xff, 0x38, 0xf7, 0x7, 0x70, 0x7e,
    0x7, 0xe0, 0x7e, 0xe, 0xe0, 0xee, 0xe, 0xe0,
    0xef, 0x1e, 0x7f, 0xe3, 0xce, 0x1, 0xc0, 0x1c,
    0x1, 0xc0, 0x1c, 0x1, 0xc0,

    /* U+0072 "r" */
    0x73, 0x3b, 0x9f, 0xcf, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0073 "s" */
    0xf, 0x87, 0xf9, 0xe3, 0xb8, 0x77, 0x0, 0xf0,
    0x1f, 0xe0, 0xfe, 0x3, 0xc0, 0x3f, 0x87, 0x70,
    0xe7, 0xf8, 0x7c, 0x0,

    /* U+0074 "t" */
    0x1c, 0x1c, 0x1c, 0x38, 0xff, 0xff, 0x38, 0x38,
    0x38, 0x38, 0x70, 0x70, 0x70, 0x70, 0x70, 0x7c,
    0x7c, 0x3c,

    /* U+0075 "u" */
    0x70, 0x3b, 0x83, 0x9c, 0x1c, 0xe0, 0xe7, 0x7,
    0x38, 0x39, 0xc1, 0xdc, 0xe, 0xe0, 0xe7, 0x7,
    0x38, 0x39, 0xe3, 0xc7, 0xfe, 0x1e, 0x70,

    /* U+0076 "v" */
    0xf0, 0x77, 0x7, 0x70, 0xe7, 0xe, 0x71, 0xc7,
    0x1c, 0x31, 0x83, 0xb8, 0x3b, 0x3, 0xf0, 0x3e,
    0x1, 0xe0, 0x1c, 0x1, 0xc0,

    /* U+0077 "w" */
    0x60, 0xc1, 0xdc, 0x38, 0x77, 0x1e, 0x39, 0xc7,
    0x8e, 0x73, 0xe3, 0x1c, 0xd9, 0xc7, 0x76, 0x71,
    0xd9, 0x98, 0x76, 0x7e, 0xf, 0x9f, 0x3, 0xc3,
    0xc0, 0xf0, 0xf0, 0x38, 0x38, 0xe, 0xe, 0x0,

    /* U+0078 "x" */
    0x1c, 0x3c, 0x70, 0xe0, 0xe7, 0x3, 0xbc, 0x7,
    0xe0, 0x1f, 0x0, 0x38, 0x1, 0xe0, 0x7, 0xc0,
    0x3f, 0x1, 0xce, 0xe, 0x38, 0x38, 0xf1, 0xc1,
    0xc0,

    /* U+0079 "y" */
    0x3c, 0x1c, 0x70, 0x71, 0xc3, 0x87, 0xe, 0x1c,
    0x70, 0x71, 0xc0, 0xce, 0x3, 0xb8, 0xf, 0xc0,
    0x3f, 0x0, 0xf8, 0x1, 0xe0, 0x7, 0x0, 0x1c,
    0x0, 0x60, 0x3, 0x80, 0x1c, 0x1, 0xe0, 0x7,
    0x0, 0x0,

    /* U+007A "z" */
    0x3f, 0xf3, 0xff, 0x0, 0xf0, 0x1e, 0x3, 0xc0,
    0x78, 0x7, 0x80, 0xf0, 0x1e, 0x3, 0xc0, 0x78,
    0x7, 0x80, 0xff, 0xef, 0xfe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 100, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 107, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 254, .box_w = 16, .box_h = 19, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 255, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 254, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 268, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 221, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 221, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 269, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 282, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 115, .box_w = 6, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 221, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 242, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 221, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 348, .box_w = 21, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 282, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 274, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 255, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 280, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 616, .adv_w = 254, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 244, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 235, .box_w = 14, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 273, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 254, .box_w = 15, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 348, .box_w = 21, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 254, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 254, .box_w = 15, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 225, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 218, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 227, .box_w = 12, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 208, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 227, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 209, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 135, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 227, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1133, .adv_w = 227, .box_w = 12, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 104, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1178, .adv_w = 105, .box_w = 10, .box_h = 25, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1210, .adv_w = 209, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 104, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 348, .box_w = 20, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 227, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 227, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 227, .box_w = 13, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1366, .adv_w = 227, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1395, .adv_w = 140, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 208, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 137, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1449, .adv_w = 227, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 203, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1493, .adv_w = 299, .box_w = 18, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 203, .box_w = 14, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 203, .box_w = 14, .box_h = 19, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 1584, .adv_w = 203, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xe, 0x1a
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 27, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 4,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 30,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t Roboto_25 = {
#else
lv_font_t Roboto_25 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO_25*/

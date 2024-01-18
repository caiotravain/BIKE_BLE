/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_18
#define ROBOTO_18 1
#endif

#if ROBOTO_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+003A ":" */
    0x6c, 0x0, 0x0, 0xd8,

    /* U+0041 "A" */
    0x3, 0x1, 0xc0, 0x70, 0x36, 0xd, 0x86, 0x61,
    0x98, 0xc6, 0x3f, 0xdf, 0xf6, 0xf, 0x83, 0xc0,
    0xc0,

    /* U+0042 "B" */
    0x7f, 0x1f, 0xe6, 0x1d, 0x83, 0x61, 0x9f, 0xc7,
    0xfb, 0x87, 0xc0, 0xf0, 0x7c, 0x1b, 0xfe, 0xfe,
    0x0,

    /* U+0043 "C" */
    0xf, 0x8f, 0xf7, 0xd, 0x83, 0x60, 0x38, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x6e, 0x39, 0xfc, 0x3e,
    0x0,

    /* U+0044 "D" */
    0x7f, 0xf, 0xf1, 0x87, 0x30, 0x66, 0xe, 0xc1,
    0x98, 0x37, 0x6, 0xc0, 0xd8, 0x3b, 0xe, 0x7f,
    0x8f, 0xe0,

    /* U+0045 "E" */
    0x7f, 0x9f, 0xe6, 0x1, 0x80, 0x60, 0x1f, 0xc7,
    0xf3, 0x80, 0xc0, 0x30, 0xc, 0x3, 0xfc, 0xff,
    0x0,

    /* U+0046 "F" */
    0x7f, 0xdf, 0xf6, 0x1, 0x80, 0x60, 0x1f, 0xc7,
    0xf3, 0x80, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x0,

    /* U+0047 "G" */
    0xf, 0x8f, 0xf7, 0xd, 0x83, 0x60, 0x38, 0xc,
    0x7f, 0x1f, 0xc0, 0xf0, 0x7e, 0x19, 0xfe, 0x3e,
    0x0,

    /* U+0048 "H" */
    0x70, 0x66, 0x6, 0x60, 0x66, 0x6, 0x60, 0x67,
    0xfe, 0x7f, 0xee, 0xc, 0xc0, 0xcc, 0xc, 0xc0,
    0xcc, 0xc, 0xc0, 0xc0,

    /* U+0049 "I" */
    0x33, 0x76, 0x66, 0x66, 0xec, 0xcc, 0xc0,

    /* U+004A "J" */
    0x0, 0xc0, 0x70, 0x18, 0x6, 0x1, 0x80, 0x60,
    0x18, 0x6, 0x3, 0xb0, 0xce, 0x71, 0xf8, 0x3c,
    0x0,

    /* U+004B "K" */
    0x70, 0xcc, 0x31, 0x8e, 0x33, 0x86, 0xe0, 0xf8,
    0x3f, 0x6, 0x60, 0xce, 0x18, 0xc3, 0x1c, 0x61,
    0x8c, 0x38,

    /* U+004C "L" */
    0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0,
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+004D "M" */
    0x70, 0xc, 0xf0, 0x39, 0xe0, 0xf3, 0xc1, 0xe7,
    0x86, 0xcd, 0x8d, 0x9b, 0x37, 0x76, 0x6c, 0xcd,
    0x99, 0x8b, 0x33, 0x1c, 0x66, 0x38, 0xcc, 0x61,
    0x80,

    /* U+004E "N" */
    0x70, 0x67, 0x6, 0x78, 0x67, 0x86, 0x6c, 0x66,
    0xc6, 0x66, 0xee, 0x6c, 0xc7, 0xcc, 0x3c, 0xc3,
    0xcc, 0x1c, 0xc1, 0xc0,

    /* U+004F "O" */
    0xf, 0x87, 0xf9, 0xc3, 0x30, 0x36, 0x7, 0x80,
    0xf0, 0x1e, 0x7, 0xc0, 0xd8, 0x1b, 0x8e, 0x3f,
    0x83, 0xe0,

    /* U+0050 "P" */
    0x7f, 0x9f, 0xf6, 0xd, 0x83, 0x60, 0xd8, 0x77,
    0xfb, 0xfc, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x0,

    /* U+0051 "Q" */
    0xf, 0x87, 0xf9, 0xc3, 0xb0, 0x36, 0x7, 0x80,
    0xf0, 0x1e, 0x6, 0xc0, 0xd8, 0x1b, 0x8e, 0x3f,
    0xc3, 0xec, 0x1, 0x80,

    /* U+0052 "R" */
    0x7f, 0x1f, 0xe6, 0x1d, 0x83, 0x60, 0xd8, 0x67,
    0xf3, 0xfc, 0xc1, 0xb0, 0x6c, 0x1b, 0x6, 0xc1,
    0x80,

    /* U+0053 "S" */
    0x1f, 0x1f, 0xe7, 0x1d, 0x87, 0x60, 0x1e, 0x1,
    0xe0, 0x1e, 0x1, 0xb0, 0x6e, 0x3b, 0xfe, 0x3e,
    0x0,

    /* U+0054 "T" */
    0xff, 0xdf, 0xf8, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x7, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60, 0xc,
    0x1, 0x80,

    /* U+0055 "U" */
    0x60, 0x6c, 0xd, 0x81, 0xb0, 0x36, 0xe, 0xc1,
    0xf8, 0x36, 0x6, 0xc0, 0xd8, 0x3b, 0x8e, 0x3f,
    0xc3, 0xe0,

    /* U+0056 "V" */
    0xe0, 0x66, 0x6, 0x60, 0xc6, 0xc, 0x61, 0x87,
    0x18, 0x33, 0x3, 0x30, 0x36, 0x3, 0x60, 0x3c,
    0x1, 0xc0, 0x18, 0x0,

    /* U+0057 "W" */
    0x61, 0x86, 0x63, 0x86, 0x63, 0x8e, 0x63, 0x8c,
    0x66, 0x8c, 0x66, 0xdc, 0x6c, 0xd8, 0x6c, 0xd8,
    0x68, 0xf0, 0x78, 0xf0, 0x78, 0xf0, 0x70, 0x60,
    0x30, 0x60,

    /* U+0058 "X" */
    0x30, 0x73, 0x86, 0x18, 0xc1, 0xdc, 0xf, 0x80,
    0xf0, 0x6, 0x0, 0xf0, 0x1b, 0x3, 0xb8, 0x31,
    0x86, 0x1c, 0xe0, 0xc0,

    /* U+0059 "Y" */
    0x60, 0x6c, 0x19, 0xc7, 0x18, 0xc3, 0x30, 0x36,
    0x7, 0x80, 0xe0, 0xc, 0x3, 0x80, 0x60, 0xc,
    0x1, 0x80,

    /* U+005A "Z" */
    0x3f, 0xcf, 0xf0, 0x18, 0xc, 0x7, 0x1, 0x80,
    0xc0, 0x60, 0x38, 0xc, 0x6, 0x3, 0xfe, 0xff,
    0x80,

    /* U+0061 "a" */
    0x1f, 0x1f, 0xcc, 0x60, 0x33, 0xfb, 0xfd, 0x8f,
    0xc6, 0x7f, 0x3d, 0x80,

    /* U+0062 "b" */
    0x38, 0xc, 0x3, 0x0, 0xc0, 0x37, 0xf, 0xe3,
    0x19, 0xc7, 0x61, 0xd8, 0x66, 0x19, 0x8e, 0x7f,
    0x37, 0x80,

    /* U+0063 "c" */
    0x1e, 0x7f, 0xe3, 0xc3, 0xc0, 0xc0, 0xc2, 0xc6,
    0xfe, 0x78,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xdb, 0xff, 0x8d,
    0x86, 0xc3, 0x61, 0xb0, 0xd8, 0xef, 0xb3, 0x90,

    /* U+0065 "e" */
    0x1e, 0x7e, 0x63, 0xc3, 0xff, 0xff, 0xc0, 0xc2,
    0xfe, 0x7c,

    /* U+0066 "f" */
    0x1e, 0x78, 0xc1, 0x8f, 0x9f, 0x18, 0x30, 0x60,
    0xc1, 0x87, 0xc, 0x18, 0x0,

    /* U+0067 "g" */
    0x3d, 0xbf, 0xd8, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x8e, 0xff, 0x3b, 0x1, 0x91, 0xcf, 0xc7, 0xc0,

    /* U+0068 "h" */
    0x38, 0x18, 0xc, 0x6, 0x3, 0x71, 0xfd, 0xc6,
    0xe3, 0x61, 0xb0, 0xd8, 0x6c, 0x36, 0x3f, 0x1c,

    /* U+0069 "i" */
    0x37, 0x0, 0x66, 0x6e, 0xcc, 0xcc, 0xcc,

    /* U+006A "j" */
    0x6, 0x1c, 0x0, 0x0, 0xc1, 0x83, 0x6, 0x1c,
    0x30, 0x60, 0xc1, 0x83, 0x6, 0x1c, 0xf1, 0xc0,

    /* U+006B "k" */
    0x38, 0xc, 0x3, 0x0, 0xc0, 0x31, 0x8c, 0xe3,
    0x71, 0xd8, 0x7c, 0x1f, 0x6, 0xe1, 0x98, 0x67,
    0x18, 0xc0,

    /* U+006C "l" */
    0x37, 0x66, 0x66, 0x66, 0xec, 0xcc, 0xcc,

    /* U+006D "m" */
    0x37, 0x3c, 0x7f, 0xfd, 0xc7, 0x3b, 0x8c, 0x36,
    0x18, 0x6c, 0x31, 0x98, 0x63, 0x31, 0xc6, 0x63,
    0xd, 0xc6, 0x18,

    /* U+006E "n" */
    0x37, 0x1f, 0xdc, 0x6e, 0x36, 0x1b, 0xd, 0x86,
    0xc3, 0x63, 0xf1, 0x80,

    /* U+006F "o" */
    0x1e, 0x3f, 0x98, 0xd8, 0x7c, 0x3e, 0x1b, 0xd,
    0x8e, 0xfe, 0x3e, 0x0,

    /* U+0070 "p" */
    0x37, 0xf, 0xe7, 0x19, 0xc7, 0x61, 0xd8, 0x66,
    0x19, 0x8e, 0x7f, 0x1f, 0x8c, 0x3, 0x0, 0xc0,
    0x30, 0x0,

    /* U+0071 "q" */
    0x3d, 0xbe, 0xb8, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x8e, 0xfe, 0x3b, 0x1, 0x80, 0xc0, 0x60, 0x30,

    /* U+0072 "r" */
    0x36, 0x79, 0xc3, 0x6, 0xc, 0x18, 0x30, 0x61,
    0xc0,

    /* U+0073 "s" */
    0x1e, 0x1f, 0x9c, 0xec, 0x3, 0xc0, 0x78, 0xc,
    0xc6, 0x7f, 0x1e, 0x0,

    /* U+0074 "t" */
    0x31, 0x8d, 0xff, 0xb1, 0x8c, 0x63, 0x39, 0xe7,
    0x0,

    /* U+0075 "u" */
    0x61, 0xb1, 0xf8, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x8e, 0xfb, 0x39, 0x0,

    /* U+0076 "v" */
    0xc3, 0x61, 0xb9, 0x8c, 0xc6, 0xc3, 0x61, 0xb0,
    0xf0, 0x38, 0x18, 0x0,

    /* U+0077 "w" */
    0xc6, 0x3e, 0x31, 0xb1, 0xcd, 0x9e, 0xc4, 0xb6,
    0x3d, 0xb1, 0xef, 0xe, 0x38, 0x71, 0x83, 0xc,
    0x0,

    /* U+0078 "x" */
    0x71, 0x99, 0x8d, 0xc3, 0xc1, 0xc0, 0xe0, 0xf8,
    0xec, 0x66, 0x61, 0x80,

    /* U+0079 "y" */
    0x61, 0x98, 0x67, 0x30, 0xcc, 0x37, 0xd, 0x83,
    0xe0, 0xf0, 0x1c, 0x6, 0x3, 0x80, 0xc0, 0xe0,
    0x30, 0x0,

    /* U+007A "z" */
    0x7f, 0xbf, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xff, 0x7f, 0x80,

    /* U+00F4 "ô" */
    0xe, 0xd, 0x0, 0x40, 0x1, 0xe3, 0xf9, 0x8d,
    0x87, 0xc3, 0xe1, 0xb0, 0xd8, 0xef, 0xe3, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 72, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 77, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 193, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 159, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 159, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 194, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 203, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 83, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 159, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 174, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 159, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 250, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 203, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 197, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 202, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 300, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 176, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 169, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 196, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 183, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 250, .box_w = 16, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 183, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 183, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 162, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 163, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 97, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 566, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 75, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 76, .box_w = 7, .box_h = 18, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 605, .adv_w = 151, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 75, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 250, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 163, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 691, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 707, .adv_w = 101, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 99, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 215, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 146, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 808, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1a
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 27, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 29,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 244, .range_length = 1, .glyph_id_start = 55,
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
    .cmap_num = 4,
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
const lv_font_t Roboto_18 = {
#else
lv_font_t Roboto_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO_18*/

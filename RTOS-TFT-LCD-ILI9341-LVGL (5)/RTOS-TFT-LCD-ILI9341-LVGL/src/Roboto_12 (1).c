/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_12
#define ROBOTO_12 1
#endif

#if ROBOTO_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0042 "B" */
    0x3c, 0xc5, 0x8b, 0x37, 0xc8, 0xd0, 0xa3, 0xfc,

    /* U+0043 "C" */
    0x3c, 0x8b, 0x1c, 0x8, 0x10, 0x21, 0x66, 0x78,

    /* U+0048 "H" */
    0x21, 0x61, 0x61, 0x63, 0x7f, 0x43, 0x42, 0x42,
    0xc2,

    /* U+004B "K" */
    0x22, 0x66, 0x6c, 0x68, 0x70, 0x58, 0x48, 0x4c,
    0xc4,

    /* U+004D "M" */
    0x30, 0xdc, 0x37, 0x1d, 0xc7, 0x7b, 0xd2, 0xb4,
    0xe9, 0x32, 0xcc, 0x80,

    /* U+0050 "P" */
    0x3e, 0x63, 0x63, 0x62, 0x7c, 0x40, 0x40, 0x40,
    0xc0,

    /* U+0061 "a" */
    0x39, 0xb0, 0x5f, 0xcf, 0x37, 0x80,

    /* U+0062 "b" */
    0x21, 0x86, 0x1f, 0x65, 0x14, 0x51, 0xcf, 0xe0,

    /* U+0063 "c" */
    0x39, 0xb4, 0x30, 0xc1, 0x27, 0x80,

    /* U+0064 "d" */
    0x6, 0xc, 0x19, 0xe6, 0x48, 0xb1, 0x66, 0x4c,
    0xf8,

    /* U+0065 "e" */
    0x39, 0xb4, 0x7f, 0xc1, 0x7, 0x80,

    /* U+0066 "f" */
    0x36, 0x4e, 0xcc, 0xcc, 0x88,

    /* U+0067 "g" */
    0x3c, 0xc9, 0x12, 0x2c, 0x49, 0x9f, 0x6, 0x9,
    0xe0,

    /* U+0068 "h" */
    0x21, 0x86, 0x1f, 0x65, 0x14, 0x53, 0xcf, 0x30,

    /* U+0069 "i" */
    0x20, 0x36, 0x92, 0x58,

    /* U+006A "j" */
    0x10, 0x3, 0x33, 0x22, 0x22, 0x66, 0xc0,

    /* U+006B "k" */
    0x20, 0xc1, 0x83, 0x66, 0x8b, 0x1c, 0x28, 0xd9,
    0x98,

    /* U+006C "l" */
    0x25, 0xb6, 0x92, 0x58,

    /* U+006D "m" */
    0x7d, 0x99, 0xb4, 0x4d, 0x33, 0x4c, 0xf3, 0x2c,
    0xc8,

    /* U+006E "n" */
    0x5d, 0x94, 0x51, 0x4f, 0x3c, 0xc0,

    /* U+006F "o" */
    0x39, 0x94, 0x71, 0xc5, 0x37, 0x80,

    /* U+0070 "p" */
    0x5d, 0x94, 0x51, 0x47, 0x3f, 0xb0, 0xc2, 0x0,

    /* U+0071 "q" */
    0x3d, 0x94, 0x71, 0xcd, 0x37, 0xc2, 0x8, 0x20,

    /* U+0072 "r" */
    0x73, 0x10, 0x84, 0x63, 0x0,

    /* U+0073 "s" */
    0x39, 0xb6, 0x1e, 0xf, 0x27, 0x80,

    /* U+0074 "t" */
    0x4b, 0xed, 0xa4, 0xc0,

    /* U+0075 "u" */
    0xca, 0x28, 0xa2, 0x8a, 0x6f, 0x80,

    /* U+0076 "v" */
    0x8c, 0xf5, 0xa6, 0x31, 0x0,

    /* U+0077 "w" */
    0x99, 0x9b, 0xba, 0xaa, 0xac, 0xcc, 0xcc,

    /* U+0078 "x" */
    0x6d, 0xa3, 0x8c, 0x71, 0x6c, 0x80,

    /* U+0079 "y" */
    0x45, 0x34, 0x9e, 0x70, 0xc3, 0x8, 0x63, 0x0,

    /* U+007A "z" */
    0x7c, 0x21, 0x8c, 0x63, 0xf, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 135, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 116, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 167, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 109, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 65, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 109, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 104, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 50, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 50, .box_w = 4, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 123, .adv_w = 101, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 50, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 167, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 165, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 173, .adv_w = 67, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 143, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 220, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0x6, 0x9, 0xb, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 66, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 7,
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
    .cmap_num = 2,
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
const lv_font_t Roboto_12 = {
#else
lv_font_t Roboto_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO_12*/


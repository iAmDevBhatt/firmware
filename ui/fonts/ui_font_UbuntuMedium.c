/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/Dev Bhatt/SquareLine/assets/Ubuntu-Medium.ttf -o C:/Users/Dev Bhatt/SquareLine/assets\ui_font_UbuntuMedium.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_UBUNTUMEDIUM
#define UI_FONT_UBUNTUMEDIUM 1
#endif

#if UI_FONT_UBUNTUMEDIUM

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x11, 0x9, 0x8c, 0xdf, 0xff, 0xf9, 0x90, 0x99,
    0xff, 0xff, 0xb3, 0x19, 0x8, 0x80,

    /* U+0024 "$" */
    0x30, 0x61, 0xf6, 0xc, 0x1c, 0x1e, 0x1e, 0xe,
    0xe, 0x1f, 0xff, 0x86, 0xc, 0x0,

    /* U+0025 "%" */
    0x78, 0xc7, 0xe6, 0x33, 0x61, 0x9b, 0xc, 0xf0,
    0x7f, 0xf9, 0xff, 0xe0, 0xf3, 0xd, 0x98, 0x6c,
    0xc6, 0x7e, 0x31, 0xe0,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x86, 0x61, 0x98, 0x6c, 0xe, 0x7,
    0x8b, 0x3e, 0xc7, 0xb0, 0xef, 0xf8, 0xf3,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x33, 0x66, 0xcc, 0xcc, 0xcc, 0xcc, 0x66, 0x33,

    /* U+0029 ")" */
    0xcc, 0x66, 0x33, 0x33, 0x33, 0x37, 0x66, 0xcc,

    /* U+002A "*" */
    0x32, 0xdf, 0xcc, 0x79, 0x20,

    /* U+002B "+" */
    0x18, 0x30, 0x67, 0xff, 0xe3, 0x6, 0xc,

    /* U+002C "," */
    0x6d, 0xbc,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0x18, 0x30, 0x61, 0x83, 0x6, 0x18, 0x30,
    0x61, 0x83, 0x6, 0x18, 0x30, 0x60,

    /* U+0030 "0" */
    0x3c, 0x7e, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x7e, 0x3c,

    /* U+0031 "1" */
    0x19, 0xff, 0xb1, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0032 "2" */
    0x7d, 0xff, 0x18, 0x30, 0x61, 0x86, 0x18, 0x61,
    0x83, 0xff, 0xf0,

    /* U+0033 "3" */
    0x7d, 0xfc, 0x18, 0x30, 0xe7, 0x8f, 0x7, 0x6,
    0xf, 0xf7, 0xc0,

    /* U+0034 "4" */
    0x6, 0xe, 0x1e, 0x36, 0x26, 0x66, 0xc6, 0xff,
    0xff, 0x6, 0x6, 0x6,

    /* U+0035 "5" */
    0x7e, 0xfd, 0x83, 0x6, 0xf, 0x83, 0x83, 0x6,
    0x1f, 0xf7, 0xc0,

    /* U+0036 "6" */
    0xe, 0x3e, 0x70, 0x60, 0xfc, 0xfe, 0xc7, 0xc3,
    0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x38, 0x61, 0x83, 0x6, 0x18, 0x30,
    0x60, 0xc1, 0x0,

    /* U+0038 "8" */
    0x3c, 0xff, 0x1e, 0x3c, 0x6f, 0x9f, 0x63, 0xc7,
    0x8f, 0xfb, 0xe0,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe3, 0x7f, 0x3f,
    0x6, 0xe, 0x7c, 0x70,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0xf, 0xf8,

    /* U+003C "<" */
    0x2, 0x1c, 0xf7, 0x8e, 0xf, 0x7, 0x83,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x81, 0xc1, 0xe0, 0xf0, 0xe7, 0xbc, 0x60,

    /* U+003F "?" */
    0xfb, 0xf0, 0xc3, 0x1c, 0xe7, 0x18, 0x60, 0x6,
    0x18,

    /* U+0040 "@" */
    0xf, 0xc0, 0x7f, 0xc3, 0x87, 0x99, 0xf6, 0xef,
    0xcf, 0x73, 0x3d, 0x8c, 0xf6, 0x33, 0xd8, 0xcf,
    0x73, 0x7e, 0xff, 0x99, 0xdc, 0x78, 0x0, 0xff,
    0x0, 0xfc, 0x0,

    /* U+0041 "A" */
    0xe, 0x1, 0xc0, 0x68, 0xd, 0x81, 0x30, 0x63,
    0xc, 0x61, 0xfc, 0x7f, 0xcc, 0x19, 0x83, 0x60,
    0x30,

    /* U+0042 "B" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xfe, 0xfe, 0xc3,
    0xc3, 0xc7, 0xfe, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x1f, 0x9c, 0x1c, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xe0, 0x38, 0x1f, 0xe3, 0xe0,

    /* U+0044 "D" */
    0xfc, 0x7f, 0x31, 0xd8, 0x7c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0xe3, 0xbf, 0x9f, 0x80,

    /* U+0045 "E" */
    0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xff, 0xe0, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0047 "G" */
    0x1f, 0x1f, 0xdc, 0x1c, 0xc, 0x6, 0x3, 0x7,
    0x83, 0xe1, 0xb8, 0xdf, 0xe3, 0xf0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0x1f, 0xf3, 0xc0,

    /* U+004B "K" */
    0xc3, 0x63, 0x33, 0x9b, 0x8f, 0x87, 0x83, 0xe1,
    0xb8, 0xce, 0x63, 0x30, 0xd8, 0x70,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+004D "M" */
    0x60, 0x66, 0x6, 0xf0, 0xff, 0xf, 0xd9, 0xbd,
    0x9b, 0xcd, 0x3c, 0xf3, 0xcf, 0x3c, 0x63, 0xc0,
    0x3c, 0x3,

    /* U+004E "N" */
    0xc1, 0xf0, 0xfc, 0x7e, 0x3d, 0x9e, 0xef, 0x37,
    0x8f, 0xc7, 0xe1, 0xf0, 0xf8, 0x30,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x6c, 0x19, 0xff, 0xf,
    0xc0, 0x60, 0xf, 0x0, 0x70,

    /* U+0052 "R" */
    0xfc, 0x7f, 0x31, 0xd8, 0x6c, 0x36, 0x3b, 0xf9,
    0xf8, 0xce, 0x63, 0x30, 0xd8, 0x60,

    /* U+0053 "S" */
    0x7d, 0xfb, 0x6, 0xe, 0xf, 0x7, 0x3, 0x7,
    0xf, 0xfb, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0056 "V" */
    0xe0, 0xec, 0x19, 0x83, 0x30, 0x63, 0x18, 0x63,
    0xc, 0x60, 0xd8, 0x1b, 0x3, 0xc0, 0x38, 0x7,
    0x0,

    /* U+0057 "W" */
    0xe0, 0xe, 0xc2, 0x19, 0x8e, 0x33, 0x1c, 0x66,
    0x28, 0xce, 0x59, 0x8d, 0xb6, 0x1b, 0x6c, 0x34,
    0x78, 0x78, 0xf0, 0x71, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x61, 0xdc, 0x63, 0x38, 0x6c, 0x1e, 0x3, 0x80,
    0xe0, 0x7c, 0x3b, 0xc, 0x66, 0x19, 0x83,

    /* U+0059 "Y" */
    0xe1, 0xd8, 0x67, 0x38, 0xcc, 0x3f, 0x7, 0x81,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0xe, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xc0, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0xc1, 0x81, 0x83, 0x6, 0x6, 0xc, 0x18, 0x18,
    0x30, 0x60, 0x60, 0xc1, 0x81, 0x83,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x38, 0x38, 0x6c, 0x6c, 0xc6, 0xc6, 0x0,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x4c, 0x63,

    /* U+0061 "a" */
    0x7c, 0xfc, 0x1b, 0xff, 0xf8, 0xf1, 0xff, 0x7e,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xfe, 0xc7, 0xc3,
    0xc3, 0xc3, 0xc7, 0xfe, 0xfc,

    /* U+0063 "c" */
    0x3c, 0xfb, 0x86, 0xc, 0x18, 0x38, 0x3e, 0x3e,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3, 0x3f, 0x7f, 0xe3, 0xc3,
    0xc3, 0xc3, 0xe3, 0x7f, 0x3f,

    /* U+0065 "e" */
    0x3c, 0x7e, 0xc6, 0xfe, 0xff, 0xc0, 0xe0, 0x7e,
    0x3e,

    /* U+0066 "f" */
    0x7f, 0xf1, 0x8f, 0xff, 0x18, 0xc6, 0x31, 0x8c,
    0x0,

    /* U+0067 "g" */
    0x3e, 0xff, 0x9e, 0x3c, 0x78, 0xf9, 0xbf, 0x3e,
    0xd, 0xf3, 0xc0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xf, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x33, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0xc, 0x79, 0xb6, 0x78, 0xf1,
    0xb3, 0x36, 0x7c, 0x60,

    /* U+006C "l" */
    0xdb, 0x6d, 0xb6, 0xdb, 0x76,

    /* U+006D "m" */
    0xf9, 0xef, 0xff, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+006F "o" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e,
    0x3c,

    /* U+0070 "p" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc7, 0xfe,
    0xfc, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x7f, 0xe3, 0xc3, 0xc3, 0xc3, 0xe3, 0x7f,
    0x3f, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0x7f, 0xf1, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x7f, 0xec, 0x30, 0x78, 0x30, 0xff, 0xf8,

    /* U+0074 "t" */
    0x46, 0x31, 0xff, 0xe3, 0x18, 0xc6, 0x3e, 0xf0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbf, 0x3e,

    /* U+0076 "v" */
    0xc3, 0x63, 0x62, 0x66, 0x36, 0x34, 0x3c, 0x1c,
    0x18,

    /* U+0077 "w" */
    0xc6, 0x36, 0x63, 0x67, 0x36, 0x76, 0x6f, 0x63,
    0xd6, 0x39, 0xc3, 0x9c, 0x18, 0xc0,

    /* U+0078 "x" */
    0x63, 0x66, 0x3c, 0x1c, 0x18, 0x3c, 0x36, 0x66,
    0xc3,

    /* U+0079 "y" */
    0xc3, 0x63, 0x66, 0x66, 0x36, 0x34, 0x3c, 0x1c,
    0x18, 0x18, 0xf0, 0xe0,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xc3, 0xe, 0x18, 0x7f, 0xfe,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xc3, 0x38, 0xe0, 0xc3,
    0xc, 0x30, 0xc3, 0xc7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe7, 0x8c, 0x63, 0x18, 0xc3, 0x19, 0x8c, 0x63,
    0x1b, 0xdc,

    /* U+007E "~" */
    0x73, 0xfe, 0x9c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 78, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 117, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 7, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 145, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 230, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 67, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 71, .adv_w = 87, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 79, .adv_w = 87, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 123, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 92, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 99, .adv_w = 69, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 101, .adv_w = 81, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 102, .adv_w = 68, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 106, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 117, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 145, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 68, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 234, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 241, .adv_w = 145, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 246, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 253, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 249, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 289, .adv_w = 175, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 186, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 175, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 184, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 75, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 226, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 189, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 200, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 200, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 518, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 180, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 175, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 240, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 89, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 661, .adv_w = 106, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 675, .adv_w = 89, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 683, .adv_w = 145, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 690, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 692, .adv_w = 100, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 694, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 153, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 153, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 102, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 765, .adv_w = 149, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 71, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 70, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 789, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 76, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 221, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 849, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 861, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 107, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 149, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 135, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 200, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 135, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 133, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 934, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 89, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 954, .adv_w = 77, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 958, .adv_w = 89, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 968, .adv_w = 145, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 3, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 9, 0, 0, 0,
    0, 10, 11, 12, 13, 14, 15, 16,
    17, 0, 0, 18, 19, 20, 21, 0,
    22, 23, 24, 25, 0, 26, 27, 28,
    29, 30, 31, 32, 33, 0, 34, 0,
    0, 0, 35, 36, 37, 0, 0, 38,
    0, 39, 0, 40, 41, 0, 42, 42,
    43, 44, 45, 46, 0, 47, 0, 48,
    49, 50, 0, 51, 52, 0, 53, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 3,
    2, 4, 5, 6, 0, 7, 8, 7,
    9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 10, 0, 0, 0,
    11, 12, 13, 0, 14, 0, 0, 0,
    15, 0, 0, 16, 0, 0, 17, 0,
    18, 0, 18, 0, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 0, 28, 0,
    0, 0, 29, 0, 30, 31, 32, 33,
    34, 0, 0, 35, 0, 0, 36, 36,
    37, 36, 38, 36, 39, 40, 41, 42,
    43, 44, 45, 46, 47, 0, 48, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -18, -6, -6, -28,
    0, -6, 0, 0, 0, 3, 2, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, -7, -7, 0,
    0, -7, -4, 2, -2, 3, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -3, -3, -3,
    0, -3, -3, -6, 0, -8, -4, -6,
    -10, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, -2, -2, -28,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, -7, -7, 6,
    0, -7, 3, -16, -5, -18, -9, 2,
    -18, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -12, 0, -3, 0, -7,
    -12, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, -6, -6, -16,
    0, -6, 0, 7, 0, 7, 5, 5,
    8, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, -2, 0, -19, -3, -5, -3, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -2, -2, -6,
    0, -2, -4, -10, -3, -8, -5, -9,
    -12, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -18, 0, -4, 0, -14, 6, 0,
    4, 0, 0, -3, 7, -4, -4, 7,
    0, -4, 4, -15, -2, -14, -4, 6,
    -18, 4, 0, -6, 0, -4, -4, -4,
    0, -4, 0, 0, -4, -4, 3, -1,
    -3, -5, -4, 6, -3, 3, -5, -2,
    0, -2, 0, -2, -6, -2, -2, 0,
    -5, -2, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -3, -5,
    -6, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -5,
    0, 0, 0, -5, 0, 0, 5, -7,
    0, 0, 3, -4, 5, -5, -5, 5,
    0, -5, 2, 4, 0, 4, 0, 3,
    4, 2, -2, 0, 0, -3, -3, -3,
    0, -3, 0, 0, -3, -3, 0, 0,
    -5, -4, -4, 3, -4, 0, -6, 0,
    -3, -6, 0, -3, -7, 0, -7, 0,
    -10, 0, -9, -2, -4, 0, 0, -7,
    0, 0, -2, -6, 0, -4, -4, -5,
    -9, -3, -2, -9, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -4, 0, -5, 0, -3, 2, 0,
    0, 0, 0, -4, 4, -6, -6, 4,
    0, -6, 0, 0, -5, 0, 0, 0,
    0, 0, -4, -10, 0, -4, -4, -4,
    0, -5, 0, 0, -4, -3, 0, -3,
    -4, -6, -6, 2, -6, 0, -4, -5,
    -2, 0, 0, -5, 0, 0, -17, 0,
    -15, -4, 3, -4, -13, -5, -5, -18,
    0, -3, 0, 3, 0, 4, 0, 0,
    5, 0, -3, -2, -12, -3, -3, -3,
    0, -3, 0, -6, -3, -3, 0, 0,
    -6, 0, 0, -8, 0, -6, 0, 0,
    0, 0, 0, 0, -2, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -4, 0, 0, -2,
    0, 0, 0, 0, -2, 0, -2, 0,
    -8, 0, 0, 0, -2, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -4,
    0, 0, 0, -4, 0, -7, 4, -11,
    4, 0, 2, -4, 8, -8, -8, 6,
    0, -8, 0, 4, 0, 5, 2, 6,
    5, 5, 0, -6, 0, -6, -6, -6,
    0, -5, 0, 0, -6, -6, 3, -5,
    -5, -4, -11, 6, -3, 4, -4, 0,
    0, -29, 0, -2, 0, -32, 5, -16,
    3, 0, 0, 0, 6, -10, -10, 6,
    0, -10, 3, -26, -4, -23, -10, 5,
    -26, 3, 0, -7, 0, -3, -3, -3,
    0, -3, 0, 0, -3, -3, 0, 0,
    0, -11, -8, 5, -6, 2, -5, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -5, 0, -3, -6, 0, -7, 0,
    -9, 0, -8, -2, -4, 0, 0, -6,
    0, 0, -2, -6, 0, -5, -4, -7,
    -9, -3, -2, -9, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    -2, 0, 0, -3, -5, 0, -22, 0,
    -14, 0, 0, 0, -12, 0, 0, -23,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, -3, -9, -4, -5, -5, -7,
    0, -5, 0, 0, -5, -2, 0, 0,
    0, 2, 2, 0, 2, 0, 0, -5,
    -3, -5, 0, -3, 0, 0, -7, 0,
    0, 0, -8, -2, -4, 0, 0, -6,
    0, 0, -2, -6, 0, -5, -4, -7,
    -9, -3, -2, 0, -3, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 3, 0,
    3, 0, -3, -3, 6, -2, -2, 5,
    0, -2, 0, 0, 0, -2, 0, 4,
    -4, 3, 0, -7, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 2, -4, -4,
    0, 0, -2, -6, 3, 0, -18, -11,
    -20, -19, 5, -12, -15, -6, -6, -21,
    0, -6, 0, 5, 0, 6, 4, 3,
    7, 0, 0, -7, -10, -14, -14, -14,
    0, -14, 0, -9, -14, -14, -11, 0,
    -8, -6, -18, -5, -6, -7, -5, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    -9, -2, 0, 0, -2, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -8, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -2, -5,
    0, 0, 0, -7, 0, 0, -17, -2,
    -15, -5, 0, -9, -14, -4, -4, -22,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -6, -10, -10, -10,
    0, -10, 0, -7, -10, -10, -3, 0,
    -5, 0, 0, 0, 0, 0, -5, 0,
    0, 3, 0, -4, 0, 0, -8, 0,
    -11, -2, 4, -4, -4, -4, -4, -14,
    0, -4, 0, 4, 0, 5, 3, 2,
    5, 0, 0, -8, -7, -5, -5, -5,
    0, -6, 0, -5, -5, -5, -4, 0,
    -4, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, -6, 0, -6, 3, -6,
    2, 0, 0, -6, 6, -5, -5, 5,
    0, -7, 0, 3, 0, 4, 0, 4,
    4, 3, 0, -8, 0, -4, -4, -4,
    0, -4, 0, 0, -4, -4, 0, 0,
    -2, -2, -8, 4, 0, 0, -6, 0,
    0, 0, 0, -9, 4, 0, -15, -11,
    -19, -9, 6, -13, -18, -9, -9, -26,
    -2, -9, 0, 7, 0, 7, 5, 5,
    8, 2, 0, -6, -9, -13, -13, -13,
    0, -13, 0, -9, -13, -13, -6, 0,
    -9, -2, 0, -5, -2, -6, -5, 0,
    0, 0, 0, -5, 0, 0, 2, -14,
    0, 0, 0, -4, 4, -8, -8, 4,
    0, -8, 0, 0, -3, 2, 0, 0,
    3, 0, -4, -10, 0, -4, -4, -4,
    0, -5, 0, 0, -4, -3, 0, -3,
    -4, -5, -5, 2, -5, 0, -8, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -10, -10, -6,
    0, -10, -6, -7, -9, -7, -8, -8,
    -6, -9, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, -2, 0, 0, 0, 0, -2, -2,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, -5, -5, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, 0, -3, 0, 0, -5,
    0, -8, 0, 0, -6, 0, 0, 0,
    -5, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -4, -3, -5, 0, -5,
    0, 0, 0, 0, 0, 0, 2, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, -3, 0,
    0, -4, 0, 0, -3, 0, 0, 0,
    0, 2, 2, 4, 2, 0, -5, 0,
    0, 0, 0, 0, 9, 2, -12, -8,
    -9, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, -3, 0, -3,
    0, -2, 0, 0, -3, -3, 0, 0,
    0, 4, 4, 3, 4, 0, 0, 9,
    0, -8, 0, 0, -5, -5, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, 0, -4, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    2, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -6, -6, -6,
    0, -7, 0, 0, -7, -6, 0, 0,
    0, 0, 0, 4, 0, 0, -4, 0,
    0, -7, 0, 0, -6, -5, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -3, 0, -4, 0, 0, -5,
    0, -7, 0, 0, -6, -5, 0, 0,
    -5, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -4, -3, -5, 0, -5,
    0, -7, 0, 0, -6, -5, 0, 0,
    -5, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -4, -3, -4, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, -13, -7,
    -10, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 5, 4, 4, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -3, -3, -2,
    0, -2, 0, 0, -3, -3, 0, 0,
    0, 0, 0, 4, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 2, -8, 0,
    -7, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -3, -3, -3,
    0, -3, 0, 0, -3, -3, 0, 0,
    0, 4, 4, 3, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 2, -7, 0,
    -6, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -3, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 4, 4, 3, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -5, -5, -5,
    0, -5, 0, 0, -5, -5, 0, 0,
    0, 0, 0, 4, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -4, -5, -4,
    -3, -5, 0, 0, -5, -4, 0, -3,
    -3, 0, 0, 0, 0, 0, -6, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -6, -7, -3,
    0, -7, -5, 0, -5, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, -5,
    0, 0, -4, -6, -2, -6, -4, -7,
    -5, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 53,
    .right_class_cnt     = 48,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_UbuntuMedium = {
#else
lv_font_t ui_font_UbuntuMedium = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_UBUNTUMEDIUM*/


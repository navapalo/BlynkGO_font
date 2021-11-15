/*******************************************************************************
 * Size: 15 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#include "blynkgo_lib.h"

#ifndef DSEG7_15
#define DSEG7_15 1
#endif

#if DSEG7_15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */

    /* U+002D "-" */
    0x1, 0x11, 0x11, 0x10, 0x2f, 0xff, 0xff, 0xf7,
    0x14, 0x44, 0x44, 0x40,

    /* U+002E "." */
    0x99, 0xbb,

    /* U+0030 "0" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x0,
    0x0, 0x0, 0x6b, 0x56, 0x0, 0x0, 0x0, 0x38,
    0x89, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0031 "1" */
    0x8, 0x6c, 0xac, 0xac, 0xac, 0xac, 0x5b, 0x48,
    0xac, 0xac, 0xac, 0xac, 0xac, 0x8b, 0x2,

    /* U+0032 "2" */
    0x1c, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x56, 0x66,
    0x66, 0x8c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x11,
    0x11, 0x11, 0x8b, 0x2, 0xff, 0xff, 0xff, 0x71,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+0033 "3" */
    0x1c, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x56, 0x66,
    0x66, 0x8c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x11,
    0x11, 0x11, 0x8b, 0x2, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0034 "4" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x0,
    0x0, 0x0, 0x3,

    /* U+0035 "5" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0036 "6" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0037 "7" */
    0x1c, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x56, 0x66,
    0x66, 0x8c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x6b, 0x0, 0x0, 0x0, 0x0, 0x37,
    0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0x8c, 0x0, 0x0,
    0x0, 0x0, 0x3,

    /* U+0038 "8" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0039 "9" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+003A ":" */
    0x4f, 0x43, 0xc3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3c, 0x34, 0xf4,

    /* U+0041 "A" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0042 "B" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0043 "C" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0x70, 0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0,
    0x0, 0x0, 0x0, 0x8d, 0x56, 0x66, 0x66, 0x0,
    0x6a, 0xff, 0xff, 0xff, 0xe4,

    /* U+0044 "D" */
    0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x0, 0x0,
    0x0, 0x5c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x11,
    0x11, 0x11, 0x8b, 0x2, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0045 "E" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+0046 "F" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x0, 0x0, 0x0, 0x0, 0x65, 0x0,
    0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x0,
    0x0, 0x0, 0x0, 0x56, 0x0, 0x0, 0x0, 0x37,
    0x89, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0048 "H" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0049 "I" */
    0x47, 0xac, 0xac, 0xac, 0xac, 0xac, 0x8b, 0x2,

    /* U+004A "J" */
    0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x0, 0x6c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x5b, 0x10, 0x0, 0x0, 0x0, 0x48,
    0x8a, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+004B "K" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+004C "L" */
    0x20, 0x0, 0x0, 0x0, 0x0, 0x8c, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x0,
    0x0, 0x0, 0x0, 0x56, 0x0, 0x0, 0x0, 0x0,
    0x8a, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+004D "M" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x0,
    0x0, 0x0, 0x6b, 0x56, 0x0, 0x0, 0x0, 0x38,
    0x89, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+004E "N" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xa6, 0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0,
    0x0, 0x0, 0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b,
    0x65, 0x0, 0x0, 0x0, 0x2,

    /* U+004F "O" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xa6, 0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0,
    0x0, 0x0, 0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b,
    0x6a, 0xff, 0xff, 0xff, 0xe6,

    /* U+0050 "P" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0x71,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x0, 0x0, 0x0, 0x0, 0x65, 0x0,
    0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x0,
    0x0, 0x0, 0x3,

    /* U+0052 "R" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2f, 0xff, 0xff,
    0xf7, 0x7a, 0x44, 0x44, 0x44, 0x8, 0xe0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x8, 0xe0,
    0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x8,
    0xd0, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0,
    0x0,

    /* U+0053 "S" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0054 "T" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+0055 "U" */
    0x10, 0x0, 0x0, 0x0, 0x47, 0x8a, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x56,
    0x66, 0x66, 0x8b, 0x6a, 0xff, 0xff, 0xff, 0xe6,

    /* U+0056 "V" */
    0x20, 0x0, 0x0, 0x0, 0x8, 0x8c, 0x0, 0x0,
    0x0, 0x6c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x0,
    0x0, 0x0, 0x5b, 0x56, 0x0, 0x0, 0x0, 0x48,
    0x8a, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0057 "W" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0058 "X" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0059 "Y" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+005A "Z" */
    0x1c, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x56, 0x66,
    0x66, 0x8c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x6b, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x89, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+005F "_" */
    0x1, 0x11, 0x11, 0x10, 0x2, 0xff, 0xff, 0xff,
    0xa1, 0x24, 0x44, 0x44, 0x44, 0x20,

    /* U+0061 "a" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0062 "b" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0063 "c" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0x70, 0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0,
    0x0, 0x0, 0x0, 0x8d, 0x56, 0x66, 0x66, 0x0,
    0x6a, 0xff, 0xff, 0xff, 0xe4,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x0, 0x0,
    0x0, 0x5c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x11,
    0x11, 0x11, 0x8b, 0x2, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0065 "e" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+0066 "f" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x0, 0x0, 0x0, 0x0, 0x65, 0x0,
    0x0, 0x0, 0x0,

    /* U+0067 "g" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x0,
    0x0, 0x0, 0x0, 0x56, 0x0, 0x0, 0x0, 0x37,
    0x89, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0068 "h" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0069 "i" */
    0x47, 0xac, 0xac, 0xac, 0xac, 0xac, 0x8b, 0x2,

    /* U+006A "j" */
    0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x0, 0x6c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x5b, 0x10, 0x0, 0x0, 0x0, 0x48,
    0x8a, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+006B "k" */
    0x4d, 0xff, 0xff, 0xff, 0xd0, 0x8b, 0x56, 0x66,
    0x66, 0x30, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+006C "l" */
    0x20, 0x0, 0x0, 0x0, 0x0, 0x8c, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x0,
    0x0, 0x0, 0x0, 0x56, 0x0, 0x0, 0x0, 0x0,
    0x8a, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+006D "m" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x0,
    0x0, 0x0, 0x6b, 0x56, 0x0, 0x0, 0x0, 0x38,
    0x89, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+006E "n" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xa6, 0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0,
    0x0, 0x0, 0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b,
    0x65, 0x0, 0x0, 0x0, 0x2,

    /* U+006F "o" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xa6, 0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0,
    0x0, 0x0, 0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b,
    0x6a, 0xff, 0xff, 0xff, 0xe6,

    /* U+0070 "p" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0x71,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x0, 0x0, 0x0, 0x0, 0x65, 0x0,
    0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x4d, 0xff, 0xff, 0xff, 0xd7, 0x8b, 0x56, 0x66,
    0x66, 0x8c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x0,
    0x0, 0x0, 0x3,

    /* U+0072 "r" */
    0x0, 0x11, 0x11, 0x11, 0x0, 0x2f, 0xff, 0xff,
    0xf7, 0x7a, 0x44, 0x44, 0x44, 0x8, 0xe0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x8, 0xe0,
    0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x8,
    0xd0, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0,
    0x0,

    /* U+0073 "s" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0xa6,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0074 "t" */
    0x10, 0x0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8d, 0x11,
    0x11, 0x11, 0x0, 0x5a, 0xff, 0xff, 0xff, 0x70,
    0x7a, 0x44, 0x44, 0x44, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+0075 "u" */
    0x10, 0x0, 0x0, 0x0, 0x47, 0x8a, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x56,
    0x66, 0x66, 0x8b, 0x6a, 0xff, 0xff, 0xff, 0xe6,

    /* U+0076 "v" */
    0x20, 0x0, 0x0, 0x0, 0x8, 0x8c, 0x0, 0x0,
    0x0, 0x6c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x0,
    0x0, 0x0, 0x5b, 0x56, 0x0, 0x0, 0x0, 0x48,
    0x8a, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0077 "w" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x56, 0x66, 0x66, 0x8b, 0x6a, 0xff,
    0xff, 0xff, 0xe6,

    /* U+0078 "x" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x7a, 0x44, 0x44, 0x44, 0xac, 0x8e, 0x0, 0x0,
    0x0, 0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8d, 0x0, 0x0, 0x0, 0x8b, 0x65, 0x0,
    0x0, 0x0, 0x2,

    /* U+0079 "y" */
    0x10, 0x0, 0x0, 0x0, 0x6, 0x8b, 0x0, 0x0,
    0x0, 0x5c, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8d, 0x11,
    0x11, 0x11, 0x8b, 0x5a, 0xff, 0xff, 0xff, 0xa7,
    0x1, 0x44, 0x44, 0x44, 0xac, 0x0, 0x0, 0x0,
    0x0, 0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x56, 0x66, 0x66, 0x8b, 0x4, 0xff,
    0xff, 0xff, 0xe6,

    /* U+007A "z" */
    0x1c, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x56, 0x66,
    0x66, 0x8c, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x0, 0xac, 0x0, 0x0, 0x0, 0x0,
    0xac, 0x0, 0x0, 0x0, 0x0, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x6b, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x89, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x8d, 0x56, 0x66, 0x66, 0x0, 0x6a, 0xff,
    0xff, 0xff, 0xe4,

    /* U+00B0 "°" */
    0x1, 0x11, 0x11, 0x11, 0x10, 0x4c, 0xff, 0xff,
    0xff, 0xd8, 0x8c, 0x34, 0x44, 0x44, 0x8c, 0x8e,
    0x0, 0x0, 0x0, 0xac, 0x8e, 0x0, 0x0, 0x0,
    0xac, 0x8e, 0x0, 0x0, 0x0, 0xac, 0x8e, 0x0,
    0x0, 0x0, 0xac, 0x8d, 0x11, 0x11, 0x11, 0x8b,
    0x5a, 0xff, 0xff, 0xff, 0x71, 0x1, 0x44, 0x44,
    0x44, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 196, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 196, .box_w = 8, .box_h = 3, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 12, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 196, .box_w = 2, .box_h = 15, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 716, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 911, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1286, .adv_w = 196, .box_w = 2, .box_h = 8, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 1294, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1369, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1519, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1594, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1639, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1759, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1834, .adv_w = 196, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1875, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1950, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2025, .adv_w = 196, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2065, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2215, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2290, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2365, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2440, .adv_w = 196, .box_w = 9, .box_h = 3, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2454, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2529, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2604, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2649, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2724, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2799, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2874, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2949, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3024, .adv_w = 196, .box_w = 2, .box_h = 8, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 3032, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3107, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3182, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3257, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3332, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3377, .adv_w = 196, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3422, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3497, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3572, .adv_w = 196, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3613, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3688, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3763, .adv_w = 196, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3803, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3878, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3953, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4028, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4103, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4178, .adv_w = 196, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0xd, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 5,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 16,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 95, .range_length = 1, .glyph_id_start = 42,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 43,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 1, .glyph_id_start = 69,
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
    .cmap_num = 6,
    .bpp = 4,
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
const lv_font_t Dseg7_15 = {
#else
lv_font_t Dseg7_15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DSEG7_15*/

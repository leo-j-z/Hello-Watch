/*******************************************************************************
 * Size: 24 px
 * Bpp: 4
 * Opts: --bpp 4 --size 24 --font D:\HelloWatch_GUI\assets\iconfont.ttf -o D:\HelloWatch_GUI\assets\ui_font_iconfont24.c --format lvgl -r 0xe651 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ICONFONT25
#define UI_FONT_ICONFONT25 1
#endif

#if UI_FONT_ICONFONT25

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E651 "¥K" */
    0x0, 0x0, 0x0, 0x4, 0xcb, 0x20, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xc, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x54, 0x0, 0x0, 0x0, 0x0, 0x1, 0x8e, 0xd2,
    0x0, 0x0, 0x0, 0x1, 0x8f, 0xff, 0xf9, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x9, 0xff, 0xff, 0xff, 0xf6, 0xaa, 0x20, 0x9,
    0xfe, 0x58, 0xff, 0xf3, 0xdf, 0xf2, 0x6, 0xfe,
    0xc, 0xff, 0xf1, 0x7f, 0xf2, 0x1, 0xb8, 0xf,
    0xff, 0xe0, 0x0, 0x10, 0x0, 0x0, 0xb, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x3, 0x70, 0xdf, 0xf7,
    0x0, 0x0, 0x5e, 0xac, 0xf5, 0x2e, 0xff, 0x60,
    0x0, 0xaf, 0xff, 0xfa, 0x3, 0xff, 0xf4, 0x0,
    0x1a, 0xff, 0xf2, 0x0, 0x5f, 0xff, 0x30, 0x0,
    0x5, 0x30, 0x0, 0x8, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0x50
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 384, .box_w = 14, .box_h = 20, .ofs_x = 5, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58961, .range_length = 1, .glyph_id_start = 1,
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
    .cmap_num = 1,
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
const lv_font_t ui_font_iconfont25 = {
#else
lv_font_t ui_font_iconfont24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ICONFONT24*/


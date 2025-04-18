#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_netania_kuromi_mini;
extern const lv_img_dsc_t img_tagged;
extern const lv_img_dsc_t img_sleep;
extern const lv_img_dsc_t img_shock;
extern const lv_img_dsc_t img_sad_open_mouth;
extern const lv_img_dsc_t img_princess;
extern const lv_img_dsc_t img_eating;
extern const lv_img_dsc_t img_love;
extern const lv_img_dsc_t img_flower;
extern const lv_img_dsc_t img_sad;
extern const lv_img_dsc_t img_axe;
extern const lv_img_dsc_t img_smile;
extern const lv_img_dsc_t img_laughing;
extern const lv_img_dsc_t img_sky;
extern const lv_img_dsc_t img_cheeky;
extern const lv_img_dsc_t img_tongue;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[16];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/
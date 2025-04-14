#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: MONTSERRAT_28
lv_style_t *get_style_montserrat_28_MAIN_DEFAULT();
void add_style_montserrat_28(lv_obj_t *obj);
void remove_style_montserrat_28(lv_obj_t *obj);

// Style: Default Tab
lv_style_t *get_style_default_tab_MAIN_DEFAULT();
void add_style_default_tab(lv_obj_t *obj);
void remove_style_default_tab(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/
/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "lvgl.h"
#include "esp_log.h"

extern const uint8_t casino_die_data[];
extern size_t casino_die_data_size;

static const char *TAG = "casino_die";

void draw_die(lv_layer_t *layer, uint8_t die_val)
{
    lv_vector_dsc_t *face_dsc = lv_vector_dsc_create(layer);
    lv_vector_path_t *face_path = lv_vector_path_create(LV_VECTOR_PATH_QUALITY_MEDIUM);
    lv_fpoint_t face_pts[] = {{1, 1}, {15, 1}, {15, 15}, {1, 15}};
    lv_vector_path_move_to(face_path, &face_pts[0]);
    lv_vector_path_line_to(face_path, &face_pts[1]);
    lv_vector_path_line_to(face_path, &face_pts[2]);
    lv_vector_path_line_to(face_path, &face_pts[3]);
    lv_vector_path_close(face_path);
    lv_vector_dsc_set_fill_color(face_dsc, lv_color_white());
    lv_vector_dsc_set_fill_opa(face_dsc, LV_OPA_100);
    lv_vector_dsc_set_stroke_color(face_dsc, lv_color_black());
    lv_vector_dsc_set_stroke_width(face_dsc, 1);
    lv_vector_dsc_set_stroke_opa(face_dsc, LV_OPA_100);

    lv_vector_dsc_add_path(face_dsc, face_path);

    lv_vector_dsc_t *pip_dsc = lv_vector_dsc_create(layer);
    lv_vector_path_t *pip_path = lv_vector_path_create(LV_VECTOR_PATH_QUALITY_MEDIUM);
    lv_fpoint_t pip_odd_pts[] = {{8, 7}, {9, 8}, {8, 9}, {7, 8}};
    lv_fpoint_t pip_4_1_pts[] = {{4, 3}, {5, 4}, {4, 5}, {3, 4}};
    lv_fpoint_t pip_4_2_pts[] = {{12, 11}, {13, 12}, {12, 13}, {11, 12}};
    lv_fpoint_t pip_2_1_pts[] = {{4, 11}, {5, 12}, {4, 13}, {3, 12}};
    lv_fpoint_t pip_2_2_pts[] = {{12, 3}, {13, 4}, {12, 5}, {11, 4}};
    lv_fpoint_t pip_6_1_pts[] = {{4, 7}, {5, 8}, {4, 9}, {3, 8}};
    lv_fpoint_t pip_6_2_pts[] = {{12, 7}, {13, 8}, {12, 9}, {11, 8}};

    if (die_val % 2)
    {
        lv_vector_path_move_to(pip_path, &pip_odd_pts[0]);
        lv_vector_path_line_to(pip_path, &pip_odd_pts[1]);
        lv_vector_path_line_to(pip_path, &pip_odd_pts[2]);
        lv_vector_path_line_to(pip_path, &pip_odd_pts[3]);
        lv_vector_path_close(pip_path);
    }
    if (die_val >= 2)
    {
        lv_vector_path_move_to(pip_path, &pip_2_1_pts[0]);
        lv_vector_path_line_to(pip_path, &pip_2_1_pts[1]);
        lv_vector_path_line_to(pip_path, &pip_2_1_pts[2]);
        lv_vector_path_line_to(pip_path, &pip_2_1_pts[3]);
        lv_vector_path_close(pip_path);
        lv_vector_path_move_to(pip_path, &pip_2_2_pts[0]);
        lv_vector_path_line_to(pip_path, &pip_2_2_pts[1]);
        lv_vector_path_line_to(pip_path, &pip_2_2_pts[2]);
        lv_vector_path_line_to(pip_path, &pip_2_2_pts[3]);
        if (die_val >= 4)
        {
            lv_vector_path_close(pip_path);
            lv_vector_path_move_to(pip_path, &pip_4_1_pts[0]);
            lv_vector_path_line_to(pip_path, &pip_4_1_pts[1]);
            lv_vector_path_line_to(pip_path, &pip_4_1_pts[2]);
            lv_vector_path_line_to(pip_path, &pip_4_1_pts[3]);
            lv_vector_path_close(pip_path);
            lv_vector_path_move_to(pip_path, &pip_4_2_pts[0]);
            lv_vector_path_line_to(pip_path, &pip_4_2_pts[1]);
            lv_vector_path_line_to(pip_path, &pip_4_2_pts[2]);
            lv_vector_path_line_to(pip_path, &pip_4_2_pts[3]);
            if (die_val == 6)
            {
                lv_vector_path_close(pip_path);
                lv_vector_path_move_to(pip_path, &pip_6_1_pts[0]);
                lv_vector_path_line_to(pip_path, &pip_6_1_pts[1]);
                lv_vector_path_line_to(pip_path, &pip_6_1_pts[2]);
                lv_vector_path_line_to(pip_path, &pip_6_1_pts[3]);
                lv_vector_path_close(pip_path);
                lv_vector_path_move_to(pip_path, &pip_6_2_pts[0]);
                lv_vector_path_line_to(pip_path, &pip_6_2_pts[1]);
                lv_vector_path_line_to(pip_path, &pip_6_2_pts[2]);
                lv_vector_path_line_to(pip_path, &pip_6_2_pts[3]);
                lv_vector_path_close(pip_path);
            }
        }
    }
    lv_vector_dsc_set_fill_color(pip_dsc, lv_color_white());
    lv_vector_dsc_set_fill_opa(pip_dsc, LV_OPA_100);
    lv_vector_dsc_set_fill_color(pip_dsc, lv_color_black());

    lv_vector_dsc_add_path(pip_dsc, pip_path);

    lv_draw_vector(face_dsc);
    lv_draw_vector(pip_dsc);

    lv_vector_path_delete(face_path);
    lv_vector_dsc_delete(face_dsc);
    lv_vector_path_delete(pip_path);
    lv_vector_dsc_delete(pip_dsc);
}

void example_lvgl_demo_ui(lv_disp_t *disp)
{

    LV_DRAW_BUF_DEFINE_STATIC(draw_buf, 128, 16, LV_COLOR_FORMAT_ARGB8888);
    LV_DRAW_BUF_INIT_STATIC(draw_buf);

    LV_DRAW_BUF_DEFINE_STATIC(draw_buf_body, 128, 48, LV_COLOR_FORMAT_ARGB8888);
    LV_DRAW_BUF_INIT_STATIC(draw_buf_body);

    lv_obj_t *scr = lv_disp_get_scr_act(disp);
    lv_obj_t *header = lv_canvas_create(scr);
    lv_canvas_set_draw_buf(header, &draw_buf);
    lv_canvas_set_px(header, 128, 16, lv_color_black(), LV_OPA_100);
    lv_obj_align(header, LV_ALIGN_TOP_MID, 0, 0);

    lv_obj_t *label = lv_label_create(header);
    lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    lv_label_set_text(label, "Hello Espressif, Hello LVGL.");
    /* Size of the screen (if you use rotation 90 or 270, please set disp->driver->ver_res) */
#if LVGL_VERSION_MAJOR >= 9
    lv_obj_set_width(label, lv_display_get_physical_horizontal_resolution(disp));
#else
    lv_obj_set_width(label, disp->driver->hor_res);
#endif
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 0);

    static int32_t column_dsc[] = {16, 16, 32, 64, LV_GRID_TEMPLATE_LAST};
    static int32_t row_dsc[] = {16, 16, 16, LV_GRID_TEMPLATE_LAST};

    lv_obj_t *body = lv_canvas_create(scr);
    lv_obj_set_layout(body, LV_LAYOUT_GRID);
    lv_obj_set_grid_dsc_array(body, column_dsc, row_dsc);

    lv_canvas_set_draw_buf(body, &draw_buf_body);
    lv_canvas_set_px(body, 128, 48, lv_color_black(), LV_OPA_100);
    lv_obj_align(body, LV_ALIGN_TOP_MID, 0, 16);

    LV_DRAW_BUF_DEFINE_STATIC(die_1_buf, 16, 16, LV_COLOR_FORMAT_ARGB8888);
    LV_DRAW_BUF_INIT_STATIC(die_1_buf);

    lv_obj_t * die_1_obj = lv_canvas_create(body);
    lv_canvas_set_draw_buf(die_1_obj, &die_1_buf);
    lv_canvas_set_px(die_1_obj, 16, 16, lv_color_white(), LV_OPA_100);
    lv_layer_t die_1_layer;
    lv_canvas_init_layer(die_1_obj, &die_1_layer);
    // lv_obj_set_width(&die_1_layer, 16);
    // lv_obj_set_height(&die_1_layer, 16);
    draw_die(&die_1_layer, 5);
    lv_obj_set_grid_cell(die_1_obj, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);
    lv_canvas_finish_layer(die_1_obj, &die_1_layer);
    lv_canvas_finish_layer(body, &die_1_layer);

    LV_DRAW_BUF_DEFINE_STATIC(die_2_buf, 16, 16, LV_COLOR_FORMAT_ARGB8888);
    LV_DRAW_BUF_INIT_STATIC(die_2_buf);

    lv_obj_t * die_2_obj = lv_canvas_create(body);
    lv_canvas_set_draw_buf(die_2_obj, &die_2_buf);
    lv_canvas_set_px(die_2_obj, 16, 16, lv_color_white(), LV_OPA_100);
    lv_layer_t die_2_layer;
    lv_canvas_init_layer(die_2_obj, &die_2_layer);
    // lv_obj_set_width(&die_2_layer, 16);
    // lv_obj_set_height(&die_2_layer, 16);
    draw_die(&die_2_layer, 3);
    lv_obj_set_grid_cell(die_2_obj, LV_GRID_ALIGN_CENTER, 1, 1, LV_GRID_ALIGN_CENTER, 0, 1);
    lv_canvas_finish_layer(die_2_obj, &die_2_layer);
    lv_canvas_finish_layer(body, &die_2_layer);

}
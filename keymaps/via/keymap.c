// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_H,   MO(1),  KC_WH_U,KC_WH_D,   KC_K
    ),
    [1] = LAYOUT(
        _______,_______,KC_PGUP,KC_PGDN,_______
    ),
    [2] = LAYOUT(
        _______,_______,_______,_______,_______
    ),
    [3] = LAYOUT(
        _______,_______,_______,_______,_______
    ),
    [4] = LAYOUT(
        _______,_______,_______,_______,_______
    ),
    [5] = LAYOUT(
        _______,_______,_______,_______,_______
    ),
    [6] = LAYOUT(
        _______,_______,_______,_______,_______
    ),
    [7] = LAYOUT(
        _______,_______,_______,_______,_______
    )

};

#ifdef RGBLIGHT_LAYERS
const rgblight_segment_t PROGMEM rgb_layer_1st[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_CYAN}
);

const rgblight_segment_t PROGMEM rgb_layer_2nd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM rgb_layer_3rd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_GREEN}
);

const rgblight_segment_t PROGMEM rgb_layer_4th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_BLUE}
);

const rgblight_segment_t PROGMEM rgb_layer_5th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_RED}
);

const rgblight_segment_t PROGMEM rgb_layer_6th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM rgb_layer_7th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM rgb_layer_8th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},{1, 4, HSV_WHITE}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_1st,
    rgb_layer_2nd,
    rgb_layer_3rd,
    rgb_layer_4th,
    rgb_layer_5th,
    rgb_layer_6th,
    rgb_layer_7th,
    rgb_layer_8th
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    rgblight_set_layer_state(7, layer_state_cmp(state, 7));
    return state;
}

#endif // RGBLIGHT_LAYERS


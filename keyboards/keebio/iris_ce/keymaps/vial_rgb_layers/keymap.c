#include QMK_KEYBOARD_H

enum layers {
    _MAIN1,
    _MAIN2,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAIN1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(3),          KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LALT, KC_LGUI, KC_SPC,                    KC_SPC,  MO(2), TO(1)
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_MAIN2] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          KC_TRNS, KC_LCTL, KC_TRNS,                    KC_TRNS,  KC_TRNS, TO(0)
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),
  
    [_FN1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_GRV,  S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                            S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_LBRC,                            KC_RBRC, KC_QUOT, S(KC_QUOT), S(KC_1), KC_SLSH, S(KC_BSLS),
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, S(KC_9),                            S(KC_0), KC_MINS, KC_EQL,  S(KC_EQL), S(KC_SCLN), S(KC_QUOT),
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE, S(KC_LBRC), KC_TRNS,         KC_TRNS,  S(KC_RBRC), S(KC_MINS), S(KC_COMM), S(KC_DOT), S(KC_SLSH), KC_ENT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_TRNS, KC_RCTL, KC_BSPC,                    KC_TRNS,  KC_TRNS, KC_TRNS
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),
  
    [_FN2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_PGUP, KC_MPLY, KC_VOLU,                            KC_BRIU, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_TRNS, KC_PGUP,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END,  KC_VOLD,                            KC_BRID, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_UP, KC_PGDN,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_MUTE, KC_TRNS,          KC_TRNS, KC_TRNS, KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_RGHT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
  };

// Layer-based RGB lighting
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t val = rgb_matrix_get_val();
    uint8_t sat = rgb_matrix_get_sat();
    switch (get_highest_layer(state)) {
        case 0:
            rgb_matrix_sethsv(191, sat, val); // purple
            break;
        case 1:
            rgb_matrix_sethsv(128, sat, val); // teal
            break;
        case 2:
            rgb_matrix_sethsv(64, sat, val); // green
            break;
        case 3:
            rgb_matrix_sethsv(21, sat, val); // orange
            break;
    }
    return state;
}
void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}
// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
};
#ifdef RGBLIGHT_ENABLE
static uint8_t rgb_flash_count = 0;
static uint16_t rgb_flash_timer = 0;
static bool rgb_flash_on = false;
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_F, KC_U, KC_ENT,
        KC_N, KC_M, KC_I
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef RGBLIGHT_ENABLE
    if (keycode == KC_ENT && record->event.pressed) {
        rgb_flash_count = 4;
        rgb_flash_on = true;
        rgb_flash_timer = timer_read();

        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(HSV_WHITE);
    }
#endif

    return true;
}

void matrix_scan_user(void) {
#ifdef RGBLIGHT_ENABLE
    if (rgb_flash_count > 0 && timer_elapsed(rgb_flash_timer) > 120) {
        rgb_flash_timer = timer_read();
        rgb_flash_on = !rgb_flash_on;

        if (rgb_flash_on) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            rgblight_sethsv_noeeprom(HSV_WHITE);
        } else {
            rgblight_disable_noeeprom();
        }

        rgb_flash_count--;
    }
#endif
}

const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
};


#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif
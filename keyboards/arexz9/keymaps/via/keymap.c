#include QMK_KEYBOARD_H
// #include "oled_bitmaps.c"


//---------//
//Keymap(s)//
//---------//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┐
     * │ F21 │ F20 │ F19 │
     * ├─────┼─────┼─────┤
     * │ F18 │ F17 │ F16 │
     * ├─────┼─────┼─────┤
     * │ F15 │ F14 │ F13 │
     * └─────┴─────┴─────┘
     */
    [0] = LAYOUT_ortho_3x3(
        KC_F21,    KC_F20,    KC_F19,
        KC_F18,    KC_F17,    KC_F16,
        KC_F15,    KC_F14,    KC_F13
    ),
};


//-----------------------------//
//Encoder Volume on OLED Screen//
//-----------------------------//
bool encoder_update_user(uint8_t index, bool clockwise) {

        if (clockwise) {
            oled_write_ln_P("Volume UP", false);
        } else {
            oled_write_ln_P("Volume DOWN", false);
        }

    return true;
}


//---------------------------------------------//
//DIP Switch "awaiting Firmware" on OLED Screen//
//---------------------------------------------//
bool dip_switch_update_user(uint8_t index, bool active) {

    switch (index) {

        case 0:
            if (active) {
                oled_write_ln_P("Awaiting Firmware", false);
                reset_keyboard();
            } else {
                oled_write_ln_P("Press Button to flash new Firmware", false);
            }
        break;
    }

return true;

}


//-----------------//
// CapsLock to OLED//
//-----------------//
// Caps lock status
// led_t led_state = host_keyboard_led_state(); //FIX

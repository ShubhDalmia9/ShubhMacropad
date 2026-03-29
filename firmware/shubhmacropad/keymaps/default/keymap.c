#include QMK_KEYBOARD_H

enum layers {
    _STUDY,
    _CREATIVE,
    _FOCUS
};

#define STUDY   TO(_STUDY)
#define CREATE  TO(_CREATIVE)
#define FOCUS   TO(_FOCUS)

// Study shortcuts
#define COPY    LCTL(KC_C)
#define PASTE   LCTL(KC_V)
#define CUT     LCTL(KC_X)
#define UNDO    LCTL(KC_Z)
#define REDO    LCTL(KC_Y)
#define SAVE    LCTL(KC_S)

// Creative shortcuts
#define ZOOM_IN   LCTL(KC_EQUAL)
#define ZOOM_OUT  LCTL(KC_MINUS)

// Focus shortcuts
#define DESKTOP   LGUI(KC_D)
#define APP_SWITCH LALT(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 📚 STUDY MODE
[_STUDY] = LAYOUT_3x3(
    STUDY,   CREATE,   FOCUS,
    COPY,    PASTE,    CUT,
    UNDO,    REDO,     SAVE
),

// 🎨 CREATIVE MODE
[_CREATIVE] = LAYOUT_3x3(
    STUDY,   CREATE,   FOCUS,
    ZOOM_IN, ZOOM_OUT, KC_MEDIA_PLAY_PAUSE,
    KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN, KC_MUTE
),

// 🎯 FOCUS MODE
[_FOCUS] = LAYOUT_3x3(
    STUDY,   CREATE,   FOCUS,
    KC_VOLU, KC_VOLD, KC_MUTE,
    KC_ESC,  KC_TAB,  KC_ENT
)

};

// 🔥 ENCODER = ALWAYS VOLUME
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}

// 🔥 DEMO FEATURE: MODE FEEDBACK (TYPED TEXT)
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _STUDY:
            SEND_STRING("Study Mode\n");
            break;
        case _CREATIVE:
            SEND_STRING("Creative Mode\n");
            break;
        case _FOCUS:
            SEND_STRING("Focus Mode\n");
            break;
    }
    return state;
}
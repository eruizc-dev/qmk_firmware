#ifndef KEYMAP_H
#define KEYMAP_H

#include QMK_KEYBOARD_H
#include "keyboard.h"
#include "keycode.h"
#include "oled_driver.h"
#include "progmem.h"
#include "process_combo.h"
#include "custom.h"
#include "secret.h"

enum LAYERS {
    DEFAULT,
    NUMBER,
    SYMBOL,
    SPECIAL,
    MOBA,
};

enum CUSTOM_MACROS {
    LOAD_VIMRC = SAFE_RANGE,
    CUSTOM_CODE,
    CUSTOM_CODE2,
    CHANGE_SYSTEM_PREV,
    CHANGE_SYSTEM_NEXT,
};

enum SYSTEMS {
    MAC,
    WINDOWS,
    LINUX,
    ANDROID,
};

typedef struct {
    int system;
} data_t;

#endif

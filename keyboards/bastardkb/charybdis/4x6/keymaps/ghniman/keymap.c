#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TG(1), LT(6,KC_BSPC), KC_L, KC_D, KC_R, KC_W, KC_V, KC_F, KC_B, KC_U, KC_O, KC_Y, LT(6,KC_F23), LT(5,KC_ESC), LCTL_T(KC_S), LSFT_T(KC_C), LALT_T(KC_H), KC_T, LGUI_T(KC_G), RGUI_T(KC_P), KC_N, RALT_T(KC_E), RSFT_T(KC_A), RCTL_T(KC_I), KC_MINS, LT(7,KC_DEL), LT(4,KC_X), KC_M, KC_J, KC_K, C_S_T(KC_COMM), KC_Z, KC_DOT, KC_QUOT, KC_SCLN, LT(4,KC_Q), LT(7,KC_F24), LT(4,KC_0), LSFT_T(KC_SPC), LT(8,KC_ENT), RSFT_T(KC_BSPC), LT(8,KC_SPC), LALT(KC_SPC), LALT(KC_TAB), LT(6,KC_ENT)),
    [1] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_F23, KC_TRNS, LCTL_T(KC_A), LSFT_T(KC_S), LALT_T(KC_D), KC_F, LGUI_T(KC_G), RGUI_T(KC_H), KC_J, RALT_T(KC_K), RSFT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT, KC_TRNS, LT(4,KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, LT(4,KC_SLSH), LT(7,KC_LBRC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_F23, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_M, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, LT(4,KC_SLSH), LT(7,KC_LBRC), KC_LALT, KC_LSFT, LT(8,KC_ENT), KC_TRNS, KC_TRNS, KC_SPC, LT(6,KC_ESC), KC_TRNS),
    [3] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TAB, KC_T, KC_Q, KC_W, KC_E, KC_R, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_F23, KC_LCTL, KC_G, KC_A, KC_S, KC_D, KC_F, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_M, KC_B, KC_Z, KC_X, KC_C, KC_V, KC_N, KC_M, KC_COMM, KC_DOT, LT(4,KC_SLSH), LT(7,KC_LBRC), KC_LALT, KC_LSFT, LT(8,KC_ENT), KC_TRNS, KC_TRNS, KC_SPC, LT(6,KC_ESC), KC_TRNS),
    [4] = LAYOUT(KC_NO, MS_ACL0, MS_ACL1, MS_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN3, MS_BTN2, MS_BTN1, KC_NO, KC_NO, MS_BTN1, MS_BTN2, MS_BTN4, MS_BTN5, KC_NO, KC_NO, KC_TRNS, DRGSCRL, SNIPING, KC_NO, KC_NO, KC_NO, MS_BTN3, SNIPING, DRGSCRL, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_F4), LALT(KC_ESC), KC_PGDN, KC_PGUP, LSFT(KC_F10), LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_UP), LGUI(KC_RGHT), KC_NO, KC_VOLU, KC_NO, LCTL(KC_A), KC_HOME, LCTL(KC_C), LCTL(KC_V), KC_END, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_MUTE, KC_NO, LCTL(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_TRNS, KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_TAB), KC_TRNS, KC_TRNS),
    [6] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_F23, KC_F24, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
    [7] = LAYOUT(QK_BOOT, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_NO, QK_DYNAMIC_TAPPING_TERM_PRINT, QK_DYNAMIC_TAPPING_TERM_UP, QK_DYNAMIC_TAPPING_TERM_DOWN, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PCMM, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_NO, KC_TRNS, KC_NUM, KC_P1, KC_P2, KC_P3, KC_P0, KC_NO, TG(2), TG(3), KC_NO, KC_MUTE, KC_TRNS, KC_PDOT, KC_TRNS, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_CIRC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DLR, KC_NO, KC_NO, KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_EXLM, KC_ASTR, KC_PERC, KC_GRV, KC_HASH, KC_AT, KC_QUES, KC_SLSH, KC_NUBS, KC_PIPE, KC_DOT, KC_EQL, KC_COLN, KC_PLUS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C



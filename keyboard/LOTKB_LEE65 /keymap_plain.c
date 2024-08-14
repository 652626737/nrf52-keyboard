/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
   * .---------------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bkspc  | Ins |
   * |---------------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \  | Del |
   * |---------------------------------------------------------------------------------------------+
   * | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter   | PgUp|
   * |---------------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  |  U  | Pgdn|
   * |---------------------------------------------------------------------------------------------+
   * | Ctrl |  Win  |  Alt  |              Space                | RAlt | FN  |||||  L  |  D  |  R  |
   * '---------------------------------------------------------------------------------------------'
   */

  /* FnLayer
   * .---------------------------------------------------------------------------------------------.
   * | ` ~ |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE |PNTSC|
   * |---------------------------------------------------------------------------------------------+
   * | Tab    |STATC|BRTHE|RNBOW|RESET|     |     |     |     |     |     |PAUSE|     |  \   |     |
   * |---------------------------------------------------------------------------------------------+
   * | Caps    |RGBH+|RGBS+|RGBB+|     |     |     |     |     |     |     | INS |    Enter  | HOME|
   * |---------------------------------------------------------------------------------------------+
   * | Shift     |RGBH-|RGBS-|RGBB-|     |     |     |     |RGBM-|RGBM+|RGBTG|  Shift  |VOLUP| END |
   * |---------------------------------------------------------------------------------------------+
   * | Ctrl |  Win  |  Alt  |                                   | RAlt | FN  |||||  L  |VOLDN|  R  |
   * '---------------------------------------------------------------------------------------------'
   */

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_INS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_DEL,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGUP,
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_PGDN,
      KC_LCTL, KC_LALT, KC_LGUI,                        KC_SPC,                 KC_RALT,    KC_FN0,           KC_LEFT, KC_DOWN,  KC_RIGHT),

  KEYMAP(
     /* esc      1        2        3        4       5       6       7       8       9         0        -         =     bkspc     insert*/
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,   KC_PSCR,
     /*  tab      Q       W        E        R        T      Y        U      I        O        P        [         ]        \      delete*/ 
      KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_INS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_PAUS, KC_BSLS,  KC_TRNS,
     /*  caps     A       S        D        F        G      H        J      K        L        ;        '        enter             pg up*/
      KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_INS,            KC_HOME,
     /* shift             Z         X        C       V       B       N      M        ,        .        /        shift     up      pg dn*/
      KC_LSFT,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_RSFT, KC_VOLU,  KC_END,
     /* ctrl     win      alt                              space                    alt      fn                 left     down     right*/
      KC_LCTL, KC_LALT, KC_LGUI,                        KC_TRNS,                KC_RALT, KC_TRNS,           KC_TRNS, KC_VOLD,  KC_TRNS)
};   

const action_t fn_actions[] = {
   /* Poker Layout */
    ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep
    ACTION_FUNCTION(SWITCH_DEVICE) // switch between usb and ble       
};

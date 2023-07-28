/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
                                          
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      LT(4,KC_Q), KC_W,       KC_F,       KC_P,       KC_B,                           LT(4,KC_J), KC_L,       KC_U,       KC_Y,       LT(3,KC_QUOT),KC_NO, 
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_A,       KC_R,       KC_S,       KC_T,       KC_G,                           KC_M,       KC_N,       KC_E,       KC_I,       KC_O,         KC_NO, 
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
   KC_NO,   LCTL_T(KC_Z), LALT_T(KC_X),KC_C,      KC_D,       KC_V,                           KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_NO, 
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
              LGUI_T(KC_BSPC),        LT(1,KC_TAB),           OSM(MOD_LSFT),                  KC_SPC,                 LT(2,KC_ENT),           KC_RGUI),
            //|-----------------------+-----------------------+-----------|                   |-----------------------+-----------------------+-----------|

	[1] = LAYOUT_split_3x6_3(
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TILD,    KC_LT,      KC_GT,      KC_QUOT,    KC_DQUO,                        KC_AMPR,    KC_SCLN,    KC_LBRC,    KC_RBRC,    KC_DLR,     KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_EXLM,    KC_MINS,    KC_PLUS,    KC_UNDS,    KC_HASH,                        KC_PIPE,    KC_COLN,    KC_LPRN,    KC_RPRN,    KC_QUES,    KC_NO, 
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      RCS(KC_GRV), KC_GRV,    KC_ASTR,    KC_EQL,     KC_BSLS,                        KC_CIRC,    KC_AT,      KC_LCBR,    KC_RCBR,    KC_PERC,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_TRNS,                KC_TRNS,                KC_TRNS,                        KC_TRNS,                KC_TRNS,                KC_TRNS),
            //|-----------------------+-----------------------+-----------|                   |-----------------------+-----------------------+-----------|


	[2] = LAYOUT_split_3x6_3(
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_ESC,     KC_7,       KC_8,       KC_9,       KC_PSCR,                        KC_DEL,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_LGUI,    KC_4,       KC_5,       KC_6,       KC_0,                           KC_F2,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGDN,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_LCTL,    KC_1,       KC_2,       KC_3,       KC_TRNS,                        LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y), KC_NO, 
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
              LSFT(KC_LGUI),          KC_LGUI,                KC_TRNS,                        KC_TRNS,                KC_TRNS,                KC_TRNS),
            //|-----------------------+-----------------------+-----------|                   |-----------------------+-----------------------+-----------|


	[3] = LAYOUT_split_3x6_3(
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      LCA(KC_F1), LCA(KC_F2), LCA(KC_F3), LCA(KC_F4), LCA(KC_F5),                     KC_BRIU,    KC_MNXT,    KC_VOLU,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_BRID,    KC_MPLY,    KC_VOLD,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_TRNS,    KC_MPRV,    KC_MUTE,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_TRNS,                KC_TRNS,                KC_TRNS,                        KC_TRNS,                KC_TRNS,                KC_TRNS),
            //|-----------------------+-----------------------+-----------|                   |-----------------------+-----------------------+-----------|


	[4] = LAYOUT_split_3x6_3(
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TRNS,    KC_ESC,     KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_TRNS,    KC_DEL,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
  KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,
//|-----------+-----------+-----------+-----------+-----------+-----------|                   |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_TRNS,                KC_TRNS,                KC_TRNS,                        KC_TRNS,                KC_TRNS,                KC_TRNS)
            //|-----------------------+-----------------------+-----------|                   |-----------------------+-----------------------+-----------|
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_BSPC):
            return TAPPING_TERM + 150;
        case LCTL_T(KC_Z):
            return TAPPING_TERM;
        case LALT_T(KC_X):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

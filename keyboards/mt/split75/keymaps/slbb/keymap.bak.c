#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base          ,-----------------------------------------.     ,-----------------------------------------------------.
  *                | ESC | F1  | F2  | F3  | F4  | F5  | F6  |     | F7  | F8  | F9  | F10 | F11 | F12 |Print| Ins | Del |
  * ,-----------.  |-----+-----+-----+-----+-----+-----+-----|     |-----+-----+-----+-----+-----+-----+-----------+-----|
  * |  8  |  9  |  |  ~  |  1  |  2  |  3  |  4  |  5  |  6  |     |  7  |  8  |  9  |  0  |  -  |  =  | Backspace | Home|
  * |-----+-----|  |-----------------------------------------'  ,--------------------------------------------------+-----|
  * |  6  |  7  |  | Tab   |  Q  |  W  |  E  |  R  |  T  |     |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    | PgUp|
  * |-----+-----|  |---------------------------------------.    `--------------------------------------------------+-----|
  * |  4  |  5  |  | Caps    |  A  |  S  |  D  |  F  |  G  |     |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    | PgDn|
  * |-----+-----|  |-----------------------------------------.   `-------------------------------------------------+-----|
  * |  2  |  3  |  | Shift     |  Z  |  X  |  C  |  V  |  B  |     |  N  |  M  |  ,  |  .  |   /   |  Shift  | Up  | End |
  * |-----+-----|  |-----------------------------------------'   ,-------------------------------------------+-----+-----|
  * |  0  |  1  |  | Ctrl  |  GUI |  Alt |   Space   |Space|     | Space         |  Alt  |     | Ctrl  | Left| Down|Right|
  * `-----------'  `---------------------------------------'     `-------------------------------------------------------'
  */
  [0] = LAYOUT(
                 /**/KC_ESC,  KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5, KC_F6,/**/         KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_INS,  KC_DEL,
    KC_P9, KC_P0,/**/KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  KC_6, /**/         KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
    KC_P7, KC_P8,/**/KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,        /**/ KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
    KC_P5, KC_P6,/**/KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,        /**/ KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
    KC_P3, KC_P4,/**/KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,        /**/ KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT, KC_UP,   KC_END,
    KC_P1, KC_P2,/**/KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, LT(2,KC_SPC),        /**/ KC_SPC,        KC_RALT, KC_APP, KC_RCTL,                   KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT(
                 /**/KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO, KC_NO,/**/         KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO, KC_NO,/**/KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  KC_6, /**/         KC_7,  KC_8,    KC_9,   KC_0,    KC_DEL,  KC_NO,   KC_DEL,           KC_NO,
    KC_NO, KC_NO,/**/KC_ESC,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,        /**/ KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC, KC_NO,   KC_NO,            KC_NO,
    KC_NO, KC_NO,/**/KC_TAB,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,        /**/ KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,                    KC_NO,
    KC_NO, KC_NO,/**/KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,        /**/ KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT, KC_UP,   KC_NO,
    KC_NO, KC_NO,/**/TT(5),   KC_NO,   KC_LALT, KC_LCTL,LT(2,KC_SPC),        /**/ LT(3,KC_ENT),  KC_RALT, KC_NO,  KC_NO,                     KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [2] = LAYOUT(
                   /**/KC_NO,   KC_NO,   KC_NO,         KC_NO,         KC_NO,         KC_NO,   KC_NO,  /**/               KC_NO,         KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, QK_BOOT,/**/KC_NO,   TG(4),   KC_VOLD,       KC_VOLU,       KC_MUTE,       KC_NO,   UG_TOGG,/**/               UG_NEXT,       KC_BRID,       KC_BRIU, KC_SCRL, KC_PAUS, KC_NO, KC_NO,          KC_NO,
    KC_NO, KC_NO,  /**/KC_F12,  KC_F1,   KC_F2,         KC_F3,         KC_F4,         KC_F5,           /**/LCTL(KC_BSPC), LCTL(KC_LEFT), LCTL(KC_RGHT), KC_NO,   KC_PSCR, KC_NO,   KC_NO, KC_NO,          KC_NO,
    KC_NO, KC_NO,  /**/KC_TAB,  KC_CAPS, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI),   /**/KC_LEFT,       KC_DOWN,       KC_UP,         KC_RGHT, KC_APP,  KC_CALC, KC_NO,                 KC_NO,
    KC_NO, KC_NO,  /**/KC_F11,  KC_F10,  KC_F9,         KC_F8,         KC_F7,         KC_F6,           /**/KC_HOME,       KC_PGDN,       KC_PGUP,       KC_END,  KC_INS,                  KC_LGUI, KC_NO, KC_NO,
    PDF(0),PDF(1), /**/KC_NO,   KC_NO,   KC_NO,         KC_TRNS,       KC_TRNS,                        /**/KC_DEL,                       KC_TRNS,       KC_NO,   KC_NO,                   KC_NO,   KC_NO, KC_NO
  ),
  [3] = LAYOUT(
                 /**/KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,/**/         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,/**/         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          /**/KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,   KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_BSLS, KC_ASTR, KC_LCBR, KC_LPRN, KC_MINS, KC_LBRC,       /**/KC_RBRC, KC_EQL,  KC_RPRN, KC_RCBR, KC_PIPE, KC_PLUS, KC_NO,               KC_NO,
    KC_NO, KC_NO,/**/KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       /**/KC_CIRC, KC_AMPR, KC_COMM, KC_DOT,  KC_SLSH,                 KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_NO,   KC_NO,   KC_NO,   KC_UNDS, KC_TRNS,                /**/KC_TRNS,          KC_TRNS, KC_NO,   KC_NO,                   KC_NO, KC_NO, KC_NO
  ),
  [4] = LAYOUT(
                 /**/KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,/**/       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_NO,   KC_TRNS, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,/**/       KC_PSLS, KC_PAST, KC_PMNS, KC_BSPC, KC_NO, KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_TRNS, TG(4),   KC_P7,  KC_P8,   KC_P9,   KC_BSPC,       /**/KC_P7, KC_P8,   KC_P9,   KC_PPLS, KC_NO,   TG(4), KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_PCMM, KC_LPRN, KC_P4,  KC_P5,   KC_P6,   KC_PPLS,       /**/KC_P4, KC_P5,   KC_P6,   KC_PPLS, KC_LPRN, KC_NO, KC_NO,               KC_NO,
    KC_NO, KC_NO,/**/KC_PEQL, KC_RPRN, KC_P1,  KC_P2,   KC_P3,   KC_PENT,       /**/KC_P1, KC_P2,   KC_P3,   KC_PENT, KC_RPRN,               KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_NO,   KC_NO,   KC_NO,  KC_P0,   KC_PDOT,                /**/KC_P0,          KC_PDOT, KC_PENT, KC_NO,                 KC_NO, KC_NO, KC_NO
  ),
  [5] = LAYOUT(
                 /**/KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,/**/       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_DEL,  KC_0,    KC_9,    KC_8,    KC_7,  KC_6,  KC_NO,/**/       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_BSPC, KC_P,    KC_O,    KC_I,    KC_U,  KC_Y,        /**/KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO,
    KC_NO, KC_NO,/**/KC_QUOT, KC_SCLN, KC_L,    KC_K,    KC_J,  KC_H,        /**/KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO,
    KC_NO, KC_NO,/**/KC_RSFT, KC_SLSH, KC_DOT,  KC_COMM, KC_M,  KC_N,        /**/KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO,/**/KC_TRNS, KC_NO,   KC_RALT, KC_RCTL, KC_ENT,             /**/KC_NO,        KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO
  )
};

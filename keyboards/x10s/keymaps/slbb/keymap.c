#include QMK_KEYBOARD_H
// #include <stdio.h>
#include "leds.c"

#define AFW_TAB A(KC_ESC)   // App Forword
#define ABW_TAB LSA(KC_ESC) // App Backword
#define TFW_TAB C(KC_TAB)   // Tab Forword
#define TBW_TAB LCS(KC_TAB) // Tab Backword

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( // Basic
			KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,/**/KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSPC ,
			KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,/**/KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
			KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,/**/KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
			KC_LCTL , KC_LGUI , KC_LALT , KC_LCTL , OSL(3)  , KC_SPC  ,/**/KC_ENT  , OSL(4)  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT ),

	[1] = LAYOUT( // Game
			_______ , _______ , _______ , _______ , _______ , _______ ,/**/_______ , _______ , _______ , _______ , _______ , _______ ,
			_______ , _______ , _______ , _______ , _______ , _______ ,/**/_______ , _______ , _______ , _______ , _______ , _______ ,
			_______ , _______ , _______ , _______ , _______ , _______ ,/**/_______ , _______ , _______ , _______ , _______ , _______ ,
			KC_LCTL , KC_CAPS , KC_RCTL , KC_LALT ,KC_SPC,LT(2,KC_SPC),/**/_______ , _______ , _______ , _______ , _______ , _______ ),

	[2] = LAYOUT( // Game extra
			KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,/**/KC_P7   , KC_P8   , KC_P9   , XXXXXXX , XXXXXXX , TO(0)   ,
			KC_F12  , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    ,/**/KC_P4   , KC_P5   , KC_P6   , XXXXXXX , XXXXXXX , XXXXXXX ,
			KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,/**/KC_P1   , KC_P2   , KC_P3   , XXXXXXX , XXXXXXX , XXXXXXX ,
			KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , _______ ,/**/KC_P0   , KC_P0   , KC_PDOT , XXXXXXX , XXXXXXX , XXXXXXX ),

	[3] = LAYOUT( // fn
			TO(1)   , A(KC_F4), ABW_TAB , AFW_TAB , TBW_TAB , TFW_TAB ,/**/KC_VOLU , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_BRIU ,
			A(KC_TAB),OS_LALT , OS_LSFT , KC_DEL  , OS_LCTL , OS_LGUI ,/**/KC_VOLD , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_BRID ,
			TO(5)   , KC_INS  , XXXXXXX , KC_CALC , KC_WREF , KC_WHOM ,/**/KC_MUTE , KC_F5   , KC_F6   , KC_F7   , KC_F8   , C(KC_BSLS),
			KC_PSCR , KC_SCRL , KC_PAUS , KC_MYCM , _______ , XXXXXXX ,/**/KC_APP  , KC_CAPS , KC_HOME , KC_PGDN , KC_PGUP , KC_END  ),

	[4] = LAYOUT( // Punctuation
			KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,/**/KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , LM(5,MOD_LALT),
			KC_TILD , KC_ASTR , KC_LCBR , KC_LPRN , KC_MINS , KC_LBRC ,/**/KC_RBRC , KC_EQL  , KC_RPRN , KC_RCBR , KC_PLUS , KC_PIPE ,
			KC_RALT , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,/**/KC_CIRC , KC_AMPR , XXXXXXX , XXXXXXX , KC_BSLS , KC_RALT ,
			UG_VALD , UG_VALU , UG_TOGG , UG_HUEU , KC_UNDS , UG_NEXT ,/**/OS_TOGG , _______ , KC_APP  , KC_RALT , KC_RGUI , KC_RCTL ),

	[5] = LAYOUT( // Keypad
			TO(0)   , KC_PAST , KC_P7   , KC_P8   , KC_P9   , KC_PMNS ,/**/KC_PAST , KC_P7   , KC_P8   , KC_P9   , KC_PMNS , _______ ,
			KC_BSPC , KC_PSLS , KC_P4   , KC_P5   , KC_P6   , KC_PPLS ,/**/KC_PSLS , KC_P4   , KC_P5   , KC_P6   , KC_PPLS , KC_BSPC ,
			KC_DEL  , KC_LPRN , KC_P1   , KC_P2   , KC_P3   , KC_RPRN ,/**/KC_LPRN , KC_P1   , KC_P2   , KC_P3   , KC_RPRN , KC_DEL  ,
			KC_NUM  , KC_LALT , KC_P0   , KC_P0   , KC_PDOT , KC_PENT ,/**/KC_LALT , KC_P0   , KC_P0   , KC_PDOT , KC_PENT , KC_NUM  ),

	[6] = LAYOUT(
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ),

	[7] = LAYOUT(
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ),

	[8] = LAYOUT(
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
			XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,/**/XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ),
};

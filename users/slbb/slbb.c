#include "slbb.h"

__attribute__ ((weak))
	bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
		return true;
	}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	}
	return process_record_keymap(keycode, record);
}

__attribute__ ((weak))
	layer_state_t layer_state_set_keymap(layer_state_t state) {
		return state;
	}

layer_state_t layer_state_set_user(layer_state_t state) {
	return layer_state_set_keymap(state);
}

#ifdef LEADER_ENABLE

__attribute__ ((weak)) void leader_start_keymap(void) {}

__attribute__ ((weak)) void leader_end_keymap(void) {}

void leader_start_user(void) {
	leader_start_keymap();
}

void leader_end_user(void) {
	if (leader_sequence_one_key(KC_E)) {
		tap_code(KC_MYCM);
	} else if (leader_sequence_one_key(KC_C)) {
		tap_code(KC_CALC);
	} else if (leader_sequence_one_key(KC_B)) {
		tap_code(KC_WHOM);
	} else if (leader_sequence_two_keys(KC_D, KC_L)) {
		tap_code16(LCG(KC_RIGHT));
	} else if (leader_sequence_two_keys(KC_D, KC_H)) {
		tap_code16(LCG(KC_LEFT));
	} else if (leader_sequence_two_keys(KC_D, KC_N)) {
		tap_code16(LCG(KC_D));
	} else if (leader_sequence_two_keys(KC_D, KC_C)) {
		tap_code16(LCG(KC_F4));
	}
	leader_end_keymap();
}

#endif /* ifdef LEADER_ENABLE */

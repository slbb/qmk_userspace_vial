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

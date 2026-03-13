#pragma once

#include "quantum.h"

#ifdef VIAL_ENABLE
#define MY_SAFE_RANGE QK_KB_0
#else
#define MY_SAFE_RANGE SAFE_RANGE
#endif // VIAL_ENABLE

// enum custom_keycodes {
// 	MY_KEY = MY_SAFE_RANGE,
// 	KM_SAFE_RANGE
// };

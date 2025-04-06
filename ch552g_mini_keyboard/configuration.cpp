#include "configuration.h"
#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const keyboard_configuration_t configurations[NUM_CONFIGURATION] = {
    {
        .button = { // Configuration copy paste keyboard
            [BTN_1] = {
                .type = BUTTON_SEQUENCE,
                .function.sequence = {
                    .sequence = {KEY_F15}, // F15
                    .length = 1,            // Lengh of sequence
                    .delay = 0             // no delay
                }
            },
            [BTN_2] = {
                .type = BUTTON_SEQUENCE,
                .function.sequence = {
                    .sequence = {KEY_F16}, // F16
                    .length = 1,            // Lengh of sequence
                    .delay = 0             // no delay
                }
            },
            [BTN_3] = {
                .type = BUTTON_SEQUENCE,
                .function.sequence = {
                    .sequence = {KEY_F17}, // F17
                    .length = 1,            // Lengh of sequence
                    .delay = 0             // no delay
                }
            },
            [BTN_ENC] = {
                .type = BUTTON_SEQUENCE,
                .function.sequence = {
                    .sequence = {KEY_F18}, // F18
                    .length = 1,            // Lengh of sequence
                    .delay = 0             // no delay
                }
            },
            [BTN_4] = {
                .type = BUTTON_SEQUENCE,
                .function.sequence = {
                    .sequence = {KEY_F19}, // F19
                    .length = 1,            // Lengh of sequence
                    .delay = 0             // no delay
                }
            },
        }
    },
};
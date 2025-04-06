#ifndef USER_USB_RAM
#error "Require USB RAM. Go Tools > USB Setting and pick the 2nd option in the dropdown list"
#endif

//lib include
#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

//app include
#include "src/auto_mode.h"
#include "src/buttons.h"
#include "src/keyboard.h"
#include "src/util.h"

// Button (Mechnical, left to right)
#define PIN_BTN_1 11
#define PIN_BTN_2 32
#define PIN_BTN_3 34
#define PIN_BTN_ENC 33
#define PIN_BTN_4 31


// ===================================================================================
// Main section
// ============================================================================
// Initialize pins
void setup()
{
  buttons_setup(PIN_BTN_1, PIN_BTN_2, PIN_BTN_3, PIN_BTN_4, PIN_BTN_ENC);
  keyboard_setup();
  USBInit();
}


//Main loop, read buttons
void loop()
{

  //task update
  buttons_update();
  auto_update();

  //debouncing
  delay(5); 
}

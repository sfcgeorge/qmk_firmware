#include "quantum.h"
#include "protocol/lufa/adafruit_ble.h"

void keyboard_pre_init_user(void) {
  // Set red "pin 13" LED as output for battery status
  setPinOutput(C7);
}

bool ble_leds_disabled = false;
void matrix_scan_user(void) {
  if (!ble_leds_disabled) {
    adafruit_ble_set_mode_leds(false);
    ble_leds_disabled = true;
  }

  float measuredVbat = adafruit_ble_read_battery_voltage();
  measuredVbat *= 2;    // resistor divided by 2, so multiply back
  measuredVbat *= 3.3;  // Multiply by 3.3V, our reference voltage
  measuredVbat /= 1024; // convert to voltage
  // Lipos 'max out' at 4.2V and stick around 3.7V for much of their life,
  // then slowly sink down to 3.2V or so before protection circuitry cuts it off
  // The MCU doesn't seem to work properly at 3.5 so choose a higher value
  if (measuredVbat <= 3.7) {
  // if (adafruit_ble_read_battery_voltage() < 750) {
    writePinHigh(C7);
  } else {
    writePinLow(C7);
  }
}

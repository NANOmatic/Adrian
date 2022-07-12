# Program

```cpp
#include <Arduino.h>

class ButtonLED {
  private:
    uint8_t button, led;

  public:
    ButtonLED(uint8_t button, uint8_t led) : button(button), led(led) {
      pinMode(led, OUTPUT);
      pinMode(button, INPUT);
    }

    void operator()() {
      static bool last = false;
      const bool button = digitalRead(this->button);
      if (last && !button)
        digitalWrite(this->led, !digitalRead(this->led));
      last = button;
      delay(20);
    }
};

ButtonLED buttonLED(0, 1);

void setup() {
}

void loop() {
  buttonLED();
}
```

# Used modules

[![ARDUINO Moduł WIFI ESP8266 NODEmcu V3 CP2102](https://d.allegroimg.com/s1024/06fa08/42572e6743ecacddecd051199cbd/ARDUINO-Modul-WIFI-ESP8266-NODEmcu-V3-CP2102-Producent-inny "ARDUINO Moduł WIFI ESP8266 NODEmcu V3 CP2102")](https://allegro.pl/oferta/arduino-modul-wifi-esp8266-nodemcu-v3-cp2102-8036304056)
[![MODUŁ PRZEKAŹNIKÓW 3-KANAŁOWY 10A 12V ARDUINO AVR](https://a.allegroimg.com/s720/11ad0f/e0c8ea444de6841052c4cfa9bd1c/MODUL-PRZEKAZNIKOW-3-KANALOWY-10A-12V-ARDUINO-AVR "MODUŁ PRZEKAŹNIKÓW 3-KANAŁOWY 10A 12V ARDUINO AVR")](https://allegro.pl/oferta/modul-przekaznikow-3-kanalowy-10a-12v-arduino-avr-11676689233)
[![Moduł MOSFET IRF520 100V/8A/PWM](https://a.allegroimg.com/original/118c0e/7449b5564a378dceb32fee6da7bc/Modul-MOSFET-IRF520-100V-8A-PWM "Moduł MOSFET IRF520 100V/8A/PWM")](https://allegro.pl/oferta/modul-mosfet-irf520-100v-8a-pwm-10929831453)

# Schematic

[Analog keyboard](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcMBMcUHYMGZIA4UA2ATmIxAUgpABZsKBTAWjDACgAnEJmvcQqjz4oUNKMjidxIsVTADxuSV14gZtPvKpUM8KUJC4xB9XL0BzbqqNW+2NOMhsASrZB5Bq1dtpzHUaAQ2AHc3UzVRKBDpSNVTNgBnNy03D38AMwBDABsEhkTxFKo0vyzc-KTVFNUS8BAyvOiDWpLo4qoa7TYABw0IsWtIMQgu0IMbQdkpFARCQyG1WbUaHzA9Lhm50SpN8Aw5s2VFubB94-AwFGk9JLBiK9Yr3cfC+pzG1124pfl-FbqfDAgrd7nstj8zqV3hVwKDtud4VDymxLLsbGiHF1LNhsHMbDi8Ziohsfpdzt4JE5Qncnv8aWCotTQacTsyyVTYVcqmyrk5egTllQBTYRoyEf8BYjovTvnNvGwgA)
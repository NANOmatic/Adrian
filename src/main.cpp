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
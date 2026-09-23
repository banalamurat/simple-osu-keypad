#include <Keyboard.h>

const int pinKey1 = 2;
const int pinKey2 = 3;

const unsigned long debounceTime = 5; 

unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;

int lastState1 = HIGH;
int lastState2 = HIGH;

void setup() {
  pinMode(pinKey1, INPUT_PULLUP);
  pinMode(pinKey2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  unsigned long currentTime = millis();

  int currentState1 = digitalRead(pinKey1);
  if (currentState1 != lastState1) {
    if ((currentTime - lastDebounceTime1) > debounceTime) {
      if (currentState1 == LOW) {
        Keyboard.press('a');
      } else {
        Keyboard.release('a');
      }
      lastDebounceTime1 = currentTime; 
      lastState1 = currentState1;
    }
  }

  int currentState2 = digitalRead(pinKey2);
  if (currentState2 != lastState2) {
    if ((currentTime - lastDebounceTime2) > debounceTime) {
      if (currentState2 == LOW) {
        Keyboard.press('s');
      } else {
        Keyboard.release('s');
      }
      lastDebounceTime2 = currentTime; 
      lastState2 = currentState2;
    }
  }
}

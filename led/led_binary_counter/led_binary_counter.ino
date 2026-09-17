int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;

int waitTime = 500;

void setup() {
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

struct LedState {
  int pin2;
  int pin3;
  int pin4;
  int pin5;
};

void blinkLED(const LedState* ledStates, int count, int blinkDelay = waitTime) {
  for (int i = 0; i < count; i++) {
    const auto ledState = ledStates[i];
    digitalWrite(pin2, ledState.pin2);
    digitalWrite(pin3, ledState.pin3);
    digitalWrite(pin4, ledState.pin4);
    digitalWrite(pin5, ledState.pin5);
    delay(blinkDelay);
  }
}

void loop() {
  const LedState ledStates[] = {
    LedState{ LOW, LOW, LOW, LOW },      // 0 0 0 0
    LedState{ LOW, LOW, LOW, HIGH },     // 0 0 0 1
    LedState{ LOW, LOW, HIGH, LOW },     // 0 0 1 0
    LedState{ LOW, LOW, HIGH, HIGH },    // 0 0 1 1
    LedState{ LOW, HIGH, LOW, LOW },     // 0 1 0 0
    LedState{ LOW, HIGH, LOW, HIGH },    // 0 1 0 1
    LedState{ LOW, HIGH, HIGH, LOW },    // 0 1 1 0
    LedState{ LOW, HIGH, HIGH, HIGH },   // 0 1 1 1
    LedState{ HIGH, LOW, LOW, LOW },     // 1 0 0 0
    LedState{ HIGH, LOW, LOW, HIGH },    // 1 0 0 1
    LedState{ HIGH, LOW, HIGH, LOW },    // 1 0 1 0
    LedState{ HIGH, LOW, HIGH, HIGH },   // 1 0 1 1
    LedState{ HIGH, HIGH, LOW, LOW },    // 1 1 0 0
    LedState{ HIGH, HIGH, LOW, HIGH },   // 1 1 0 1
    LedState{ HIGH, HIGH, HIGH, LOW },   // 1 1 1 0
    LedState{ HIGH, HIGH, HIGH, HIGH },  // 1 1 1 1
  };
  blinkLED(ledStates, sizeof(ledStates) / sizeof(ledStates[0]));
}

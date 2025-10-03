#define BUTTON_PIN_0 0
#define BUTTON_PIN_1 16

int currentState0;
int currentState1;
int lastState0 = HIGH;
int lastState1 = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN_0, INPUT);
  pinMode(BUTTON_PIN_1, INPUT);
}

void loop() {
  currentState0 = digitalRead(BUTTON_PIN_0);
  if (currentState0 != lastState0) Serial.println("Change on button 0: " + currentState0);
  lastState0 = currentState0;
  currentState1 = digitalRead(BUTTON_PIN_1);
  if (currentState1 != lastState1) Serial.println("Change on button 1: " + currentState1);
  lastState1 = currentState1;
}

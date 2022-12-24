const int LED_02 = 2;
const int LED_03 = 3;
const int LED_04 = 4;
const int LED_05 = 5;
const int LED_06 = 6;
const int LED_07 = 7;
const int LED_08 = 8;
const int LED_09 = 9;
const int LED_10 = 10;
const int LED_11 = 11;
const int LED_12 = 12;
const int LED_13 = A0;
const int LED_TOP = A5;

void setup() {
  pinMode(LED_02, OUTPUT);
  pinMode(LED_03, OUTPUT);
  pinMode(LED_04, OUTPUT);
  pinMode(LED_05, OUTPUT);
  pinMode(LED_06, OUTPUT);
  pinMode(LED_07, OUTPUT);
  pinMode(LED_08, OUTPUT);
  pinMode(LED_09, OUTPUT);
  pinMode(LED_10, OUTPUT);
  pinMode(LED_11, OUTPUT);
  pinMode(LED_12, OUTPUT);
  pinMode(LED_13, OUTPUT);
  pinMode(LED_TOP, OUTPUT);
};

void loop() {
  digitalWrite(LED_02, HIGH);
  digitalWrite(LED_03, HIGH);
  digitalWrite(LED_04, HIGH);
  digitalWrite(LED_05, HIGH);
  digitalWrite(LED_06, HIGH);
  digitalWrite(LED_07, HIGH);
  digitalWrite(LED_08, HIGH);
  digitalWrite(LED_09, HIGH);
  digitalWrite(LED_10, HIGH);
  digitalWrite(LED_11, HIGH);
  digitalWrite(LED_12, HIGH);
  digitalWrite(LED_13, HIGH);

  digitalWrite(LED_TOP, LOW);
  delay(500);

  digitalWrite(LED_02, LOW);
  digitalWrite(LED_03, LOW);
  digitalWrite(LED_04, LOW);
  digitalWrite(LED_05, LOW);
  digitalWrite(LED_06, LOW);
  digitalWrite(LED_07, LOW);
  digitalWrite(LED_08, LOW);
  digitalWrite(LED_09, LOW);
  digitalWrite(LED_10, LOW);
  digitalWrite(LED_11, LOW);
  digitalWrite(LED_12, LOW);
  digitalWrite(LED_13, LOW);

  digitalWrite(LED_TOP, HIGH);
  delay(500);
};

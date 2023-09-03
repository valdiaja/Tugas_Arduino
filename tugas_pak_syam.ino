int buttonPin = 2; // Pin yang terhubung dengan tombol
int ledPin1 = 13;  // Pin yang terhubung dengan LED 1
int ledPin2 = 12;  // Pin yang terhubung dengan LED 2
bool ledsOn = false;     // Status LED

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    delay(50); 
    if (!ledsOn) {
      ledsOn = true;
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
    } else {
      ledsOn = false;
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
    while (digitalRead(buttonPin) == LOW) {
    }
  }
}

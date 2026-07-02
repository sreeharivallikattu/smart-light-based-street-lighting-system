// LDR pin
int ldrPin = A0;

// RGB pins
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

// Relay pin
int relayPin = 8;

void setup() {

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(relayPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int ldrValue = analogRead(ldrPin);

  Serial.println(ldrValue);

  // DAYTIME
  if(ldrValue > 700) {

    digitalWrite(relayPin, LOW);

    setRGB(255,0,255); // GREEN
  }

  // EVENING
  else if(ldrValue > 400) {

    digitalWrite(relayPin, HIGH);

    setRGB(255,255,0); // BLUE
  }

  // NIGHT
  else {

    digitalWrite(relayPin, HIGH);

    setRGB(0,255,255); // RED
  }

  delay(200);
}

void setRGB(int r, int g, int b) {

  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}

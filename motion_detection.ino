int Buzzer = 9;   // Pin to which buzzer is connected
int LED = 10;     // Pin to which LED is connected
int Motor = 6;    // Pin to which DC motor is connected
int PIR = 2;      // Pin to which PIR sensor is connected
int val = 0;      // Initial PIR value

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(Motor, OUTPUT);
  pinMode(PIR, INPUT);

  Serial.begin(9600);
}

void loop() {

  val = digitalRead(PIR);  // Read PIR sensor value

  if (val == HIGH) {

    digitalWrite(LED, HIGH);       // Turn LED ON
    digitalWrite(Buzzer, HIGH);    // Turn Buzzer ON
    digitalWrite(Motor, HIGH);     // Turn Motor ON

    Serial.println("Motion Detected");
  }

  else {

    digitalWrite(LED, LOW);        // Turn LED OFF
    digitalWrite(Buzzer, LOW);     // Turn Buzzer OFF
    digitalWrite(Motor, LOW);      // Turn Motor OFF

    Serial.println("No motion detected");
  }

  delay(200);
}

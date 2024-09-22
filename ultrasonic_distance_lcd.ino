#include <LiquidCrystal.h>

// Define pins for ultrasonic sensor and LCD
const int trigPin = 9;
const int echoPin = 10;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);  // Initialize LCD with 16x2 characters
  lcd.print("Distance:");
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  lcd.setCursor(0, 1);  // Move cursor to the second line
  lcd.print(distance);
  lcd.print(" cm   ");

  delay(1000);
}

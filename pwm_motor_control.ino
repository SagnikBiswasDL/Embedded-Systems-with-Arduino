int potPin = A0;  // Pin connected to potentiometer
int pwmPin = 9;   // Pin connected to motor driver PWM input

void setup() {
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);  // Read the analog value from the potentiometer
  int motorSpeed = map(potValue, 0, 1023, 0, 255);  // Map potentiometer value to PWM range (0-255)

  analogWrite(pwmPin, motorSpeed);  // Write the PWM signal to the motor

  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print("  Motor Speed: ");
  Serial.println(motorSpeed);

  delay(100);
}

#include <AccelStepper.h>

// Define stepper motor pins
#define dirPin 2
#define stepPin 3
AccelStepper stepper(AccelStepper::DRIVER, stepPin, dirPin);

// Joystick pins
#define joyX A0
#define joyY A1

void setup() {
  stepper.setMaxSpeed(1000); 
  stepper.setAcceleration(500);
}

void loop() {
  int xVal = analogRead(joyX);
  int yVal = analogRead(joyY);

  // Map joystick values to speed
  long xSpeed = map(xVal, 0, 1023, -1000, 1000);
  long ySpeed = map(yVal, 0, 1023, -1000, 1000);

  stepper.setSpeed(xSpeed);
  stepper.runSpeed();
}

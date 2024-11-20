#include <Servo.h>  // Library for controlling servo motor
#include <AccelStepper.h>  // Library for stepper motor control

// Define stepper motor pins
#define X_STEP_PIN 2
#define X_DIR_PIN 3
#define Y_STEP_PIN 4
#define Y_DIR_PIN 5

// Define servo pin
#define PEN_SERVO_PIN 9

// Create stepper motor objects
AccelStepper stepperX(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
AccelStepper stepperY(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);

// Create servo object
Servo penServo;

// Servo positions
const int PEN_UP = 90;   // Adjust these values for your servo
const int PEN_DOWN = 30;

void setup() {
  // Initialize stepper motors
  stepperX.setMaxSpeed(1000);
  stepperX.setAcceleration(500);
  stepperY.setMaxSpeed(1000);
  stepperY.setAcceleration(500);

  // Attach servo
  penServo.attach(PEN_SERVO_PIN);
  penUp();

  // Home the pen plotter (optional)
  homePenPlotter();
}

void loop() {
  // Example: Draw a square
  penDown();
  moveTo(100, 0);  // Move to (100, 0)
  moveTo(100, 100);  // Move to (100, 100)
  moveTo(0, 100);  // Move to (0, 100)
  moveTo(0, 0);  // Move to (0, 0)
  penUp();
  delay(5000);  // Pause before repeating
}

void penDown() {
  penServo.write(PEN_DOWN);
  delay(500);
}

void penUp() {
  penServo.write(PEN_UP);
  delay(500);
}

void moveTo(long x, long y) {
  stepperX.moveTo(x);
  stepperY.moveTo(y);

  while (stepperX.isRunning() || stepperY.isRunning()) {
    stepperX.run();
    stepperY.run();
  }
}

void homePenPlotter() {
  // Move steppers to home position (optional implementation depends on your setup)
  stepperX.setCurrentPosition(0);
  stepperY.setCurrentPosition(0);
}

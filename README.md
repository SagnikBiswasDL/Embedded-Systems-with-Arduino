# Embedded Systems Projects with Arduino

This repository contains projects I developed during my internship, focusing on creating real-world systems using Arduino. These projects demonstrate how sensors, motors, and displays can work together to perform tasks like controlling devices or collecting and displaying information.

## Project Overview

### 1. Real-Time Monitoring with OLED Display
- **File**: `real_time_monitoring_oled.ino`
- **What It Does**: This project reads temperature and humidity from a sensor and shows the information on a small screen in real-time.
- **Key Components**: Temperature sensor (DHT11), OLED display, Arduino board.
- **Why It’s Useful**: It demonstrates how to monitor environmental conditions in real-time, which is commonly used in weather stations, home automation, or industrial settings.

### 2. Motor Control with Stepper Motor (X-Y Plotter)
- **File**: `stepper_motor_xy_plotter.ino`
- **What It Does**: This project moves a motor based on joystick input, simulating how a machine like a plotter would move to draw precise shapes on a surface.
- **Key Components**: Stepper motor, joystick, Arduino board.
- **Why It’s Useful**: It shows how to control the movement of machines, which is useful for robotics or precision tools like 3D printers.

### 3. Motor Speed Control Using a Knob (PWM)
- **File**: `pwm_motor_control.ino`
- **What It Does**: This project allows you to control the speed of a motor by turning a knob (a potentiometer).
- **Key Components**: DC motor, potentiometer (knob), Arduino board.
- **Why It’s Useful**: Controlling motor speed is important in many machines like fans, conveyor belts, or electric vehicles.

### 4. Logging Sensor Data to an SD Card
- **File**: `sensor_data_logging_sd.ino`
- **What It Does**: This project reads temperature and humidity data from a sensor and saves the information to an SD card for later analysis.
- **Key Components**: DHT11 sensor, SD card module, Arduino board.
- **Why It’s Useful**: It shows how to collect and save data over time, which is important for projects that need to track changes (like climate monitoring or equipment performance).

### 5. Measuring Distance Using Ultrasonic Sensor
- **File**: `ultrasonic_distance_lcd.ino`
- **What It Does**: This project measures how far an object is using sound waves and displays the distance on a small screen.
- **Key Components**: Ultrasonic sensor (HC-SR04), LCD display, Arduino board.
- **Why It’s Useful**: Measuring distance is a common task for robots, automated vehicles, and safety systems.

## How to Use These Projects
1. Download or clone the repository.
2. Open the `.ino` files in the Arduino IDE.
3. Connect the listed components to your Arduino board based on each project.
4. Upload the code to your board and see the project in action.

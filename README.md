# Mazebot Controller

This project aims to control a robot that can traverse through a maze using an ESP32 Bluetooth module. The robot is controlled through a mobile device via Bluetooth commands.

## Hardware Required

- ESP32 Bluetooth module
- Motor driver module
- Two DC motors
- Battery
- Wires

## Software Required

- Arduino IDE
- Bluetooth Terminal app for mobile devices

## Code Explanation

The provided code allows the robot to receive commands via Bluetooth and execute movements based on the input. The available commands are:
- `F`: Move Forward
- `B`: Move Backward
- `L`: Turn Left
- `R`: Turn Right
- `S`: Stop

## Setup Instructions

1. Connect the ESP32 to your computer.
2. Open the Arduino IDE and install the necessary libraries.
3. Copy the provided code into a new Arduino sketch.
4. Upload the code to the ESP32.
5. Use a Bluetooth terminal app on your mobile device to connect to the ESP32.
6. Send commands to control the robot.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

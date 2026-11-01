# ESP32-Based Obstacle Detection System for Visually Impaired People

## Project Overview
This project implements an embedded obstacle detection system using an ESP32 and three ultrasonic sensors to detect obstacles in the front, left, and right directions. A buzzer and vibration motor provide alerts based on the nearest detected obstacle.

## Objectives
- Detect obstacles in multiple directions.
- Measure distance using ultrasonic sensors.
- Provide distance-based buzzer alerts.
- Provide vibration feedback for obstacle awareness.
- Display real-time distance readings through the Serial Monitor.

## Hardware Requirements
- ESP32 development board
- Three ultrasonic sensors (HC-SR04)
- Buzzer
- Vibration motor
- Motor driver circuit
- Connecting wires and power supply

## Pin Configuration

| Component              |  ESP32 GPIO |

| Front TRIG             |      22     |
| Front ECHO             |      23     |
| Right TRIG             |      32     |
| Right ECHO             |      33     |
| Left TRIG              |      02     |
| Left ECHO              |      04     |
| Buzzer                 |      14     |
| Vibration motor driver |      05     |

## Working Principle
1. The ultrasonic sensors measure distances to nearby obstacles.
2. The ESP32 reads and compares the distance measurements.
3. The nearest valid obstacle within the 30 cm detection threshold triggers an alert.
4. The buzzer provides audible feedback, while the vibration motor provides tactile feedback.
5. Distance readings are displayed on the Serial Monitor.

## Software and Tools
- C/C++ with the Arduino framework
- Eclipse IDE with Sloeber
- ESP32 development environment

## Testing and Results
The prototype is designed to detect nearby obstacles and provide audio and vibration alerts. Sensor readings and alert behavior should be verified under different distances and directions during hardware testing.

## Future Enhancements
- Voice-guided navigation
- GPS integration
- Improved directional vibration patterns
- Sensor filtering for more reliable measurements
- Low-power operation

## Safety Note
This prototype is an assistive technology project and should not replace a white cane or other established mobility aids. HC-SR04 ECHO signals must be reduced to safe 3.3 V logic levels before connecting to ESP32 GPIOs. The vibration motor must use a suitable driver circuit.

## Author
Developed as an embedded systems project using the ESP32 platform.

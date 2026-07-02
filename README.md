# Intelligent Light-Based Street Lighting System

An Arduino-based smart street lighting system that automatically controls street lights according to ambient light intensity using an LDR sensor. The system detects environmental brightness, processes the input using Arduino, and controls a relay-driven street light while displaying system status using an RGB LED.


## Project Overview

Traditional street lights often remain ON unnecessarily, causing energy wastage. This project addresses that problem by creating an automated lighting system that switches lights based on surrounding light conditions.

The system continuously monitors ambient light using an LDR sensor and automatically performs control actions.


## Features

* Automatic day and night detection
* Relay-based street light switching
* RGB LED status indication
* Sensor-based automation
* Energy-saving operation
* Low-cost implementation
* Expandable for IoT and smart city applications


## Components Used

| Component               | Quantity |
| ----------------------- | -------: |
| Arduino UNO             |        1 |
| LDR Sensor              |        1 |
| 10kΩ Resistor           |        1 |
| T73 Relay (5V)          |        1 |
| S8050 Transistor        |        1 |
| 1kΩ Resistor            |        1 |
| 1N4007 Diode            |        1 |
| RGB LED                 |        1 |
| 220Ω Resistors          |        3 |
| LED/Bulb (Street Light) |        1 |
| Breadboard              |        1 |
| Jumper Wires            | Multiple |


## System Working

The LDR continuously senses the surrounding light intensity.

### Day Condition

* Street light OFF
* Relay OFF
* RGB LED = Green

### Evening Condition

* Street light ON
* Relay ON
* RGB LED = Blue

### Night Condition

* Street light ON
* Relay ON
* RGB LED = Red


## System Flow

```text
LDR detects light intensity
            ↓
Arduino reads analog value
            ↓
Arduino processes thresholds
            ↓
Relay driver activates relay
            ↓
Street light switches ON/OFF
            ↓
RGB indicates current status
```


## Arduino Pin Connections

| Arduino Pin | Connected Component  |
| ----------- | -------------------- |
| A0          | LDR output           |
| D8          | Relay control        |
| D9          | RGB Red              |
| D10         | RGB Green            |
| D11         | RGB Blue             |
| 5V          | LDR and relay supply |
| GND         | Common ground        |


## Relay Driver Circuit

The relay is driven using an S8050 transistor because the Arduino output current alone is insufficient for operating the relay coil.

Additional protection:

* S8050 transistor for switching
* 1kΩ base resistor
* 1N4007 flyback diode for reverse voltage protection


## Applications

* Smart street lighting systems
* Smart city infrastructure
* Parking area lighting
* Industrial outdoor lighting
* Automatic home outdoor lights
* Energy-saving systems


## Future Improvements

* Motion detection using PIR sensors
* Automatic brightness control with PWM
* Solar-powered operation
* ESP32 IoT integration
* Mobile monitoring application


## Demonstration

```md
Project Demo Video: https://youtube.com/shorts/8AB1jKYtVkU?feature=share
```


## Author

Sreehari Vallikattu

Engineer | Embedded Systems | Arduino Projects


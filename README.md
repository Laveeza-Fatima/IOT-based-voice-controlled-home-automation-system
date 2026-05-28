# Voice-Controlled Home Automation System

## Overview
This project presents a **Voice-Controlled Home Automation System** designed to improve convenience, accessibility, and energy efficiency in modern homes. The system allows users to control household appliances using voice commands via a smartphone and Google Assistant. It is especially beneficial for individuals with mobility challenges, enabling hands-free control of devices.

## Objectives
* Develop a voice-activated system for controlling home appliances
* Ensure reliable and low-power operation
* Enhance user convenience and accessibility
* Promote energy efficiency by preventing unnecessary appliance usage
* 
## System Architecture
The system consists of three main components:

1. **Voice Recognition Module**
   Converts user voice commands into digital signals (via smartphone & Google Assistant)
2. **Control Unit (Arduino Mega)**
   Processes commands and executes appropriate actions
3. **Appliances**
   Devices such as lights, fan, and door system controlled via relays and motors
Communication between components is established using **Bluetooth (HC-05 module)**.

## Hardware Components
* Arduino Mega (Microcontroller)
* HC-05 Bluetooth Module
* Relay Modules
* LEDs (simulating bulbs)
* DC Motor (simulating fan)
* Servo Motor (for door automation)
* Power Supply (DC Adapter)
  
## Software & Tools
* Arduino IDE (Embedded C programming)
* Arduino Bluetooth Controller App
* Google Assistant (voice input)
* Serial Communication (Bluetooth-based)

## Working Principle
* User gives a **voice command** via smartphone
* Command is processed using **Google Assistant + mobile app**
* Signal is transmitted via **Bluetooth (HC-05)**
* Arduino Mega receives and interprets the command
* Corresponding appliance is turned ON/OFF using relays or motors

## Implementation
The project was developed in four phases:

1. Circuit Design
2. Microcontroller Programming
3. System Integration
4. Testing & Optimization
   
## Results
* Successfully recognized predefined voice commands
* Controlled appliances without noticeable delay
* Seamless operation within Bluetooth range
* Scalable design for adding more devices
  
## Challenges
* Voice recognition accuracy in noisy environments
* Energy consumption vs continuous listening
* Compatibility with different appliances
  
## Future Improvements
* Multi-language voice support
* Integration with advanced AI systems
* Enhanced security features
* Compatibility with more IoT platforms
  

## What I Learned
* Embedded systems design using Arduino
* Bluetooth communication and interfacing
* Voice-controlled automation systems
* Hardware-software integration and debugging
  
## 👨‍💻 Author
Laveeza Fatima

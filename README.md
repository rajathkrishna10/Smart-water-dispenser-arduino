# Smart-water-dispenser-arduino
Abstract

This project presents the design and implementation of an automatic water dispensing system using Arduino Uno. The system uses an ultrasonic sensor (HC-SR04) to detect the presence of a glass and controls a 12V DC water pump through a relay module. The main objective is to reduce water wastage and improve hygiene by enabling contactless water dispensing.

Introduction

Automation plays an important role in modern embedded systems. This project demonstrates a real-time application of sensors and actuators using Arduino. When a glass is placed within a predefined distance from the ultrasonic sensor, the system automatically activates the water pump. When the glass is removed, the pump turns off.

Components Used

Arduino Uno,
Ultrasonic Sensor (HC-SR04),
5V Relay Module,
12V DC Water Pump,
12V Power Supply,
Connecting Wires,
Tubing,

Circuit Connections

Ultrasonic Sensor (HC-SR04)
VCC → 5V (Arduino)
GND → GND
Trig → Pin 9
Echo → Pin 10
Relay Module
VCC → 5V
GND → GND
IN → Pin 7
Pump Connection
Pump connected to Normally Open (NO) terminal of relay
12V supply connected through relay to pump

Working Principle

The ultrasonic sensor measures distance using the time-of-flight principle. It sends ultrasonic waves and receives the reflected signal from an object. The Arduino calculates the distance. If the measured distance is less than 10 cm (glass detected), the Arduino sends a signal to the relay module. The relay activates the 12V water pump. When the glass is removed, the pump automatically turns off.

How to Run the Project

Connect all components as per the circuit connections.
Upload the Arduino code using Arduino IDE.
Power the Arduino and the 12V pump supply.
Place a glass within 10 cm of the sensor.
The pump will automatically dispense water.

Applications

Public water dispensers
Offices and institutions
Hospitals
Touch-free water systems

Repository Structure

README.md

IPL.ino

IPL_circuit_diagram.png

Team Members

Rajath Krishna.B, 
Pavan Kumar.B.R, 
Mayur.B.C

Note: Demo video and physical setup images are not included in this repository.

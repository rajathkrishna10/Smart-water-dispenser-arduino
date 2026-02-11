# Smart-water-dispenser-arduino
Abstract-
This project presents the design and implementation of an automatic water dispensing system using Arduino Uno. The system uses an ultrasonic sensor (HC-SR04) to detect the presence of a glass and controls a 12V DC water pump through a relay module. The objective is to reduce water wastage and improve hygiene by enabling contactless water dispensing.

Introduction-
Automation plays a major role in modern embedded systems. This project demonstrates a simple real-time application of sensors and actuators using Arduino. The system detects an object within a predefined distance and activates a pump accordingly.

Components Used-
Arduino Uno
Ultrasonic Sensor (HC-SR04)
5V Relay Module
12V DC Water Pump
12V Power Supply
Connecting Wires and Tubing

Working Principle-
The ultrasonic sensor measures the distance by transmitting ultrasonic waves and receiving the reflected signal. The Arduino calculates the distance using the time-of-flight principle.
When the measured distance is less than 10 cm (glass detected), the Arduino sends a signal to the relay module. The relay acts as an electrically controlled switch and turns on the 12V pump. When the glass is removed, the distance increases and the pump is turned off automatically.

Applications-
Public water dispensers
Offices and institutions
Hospitals
Touch-free water systems

Team Members-
Rajath Krishna.B, 
Pavan Kumar.B.R, 
Mayur.B.C  

Conclusion-
The Smart Water Dispenser demonstrates the practical implementation of embedded systems using sensors and actuators. It is a low-cost, efficient, and contactless solution for water dispensing applications.

Note: Demo video and physical setup images are not included in this repository.

# LPG_gasDetector
Prototype of a LPG gas detector

Prototype of the discipline Integrated Projects (Project Management) for the Computer Engineering and Electrical Engineering course at Centro Universitário UNA, Belo Horizonte - MG, Brazil.
<h3>AUTHORS:</h3> Sadraque Nunes, Marco Rodrigues, Patrick Lima, André Coelho, Bruno Morais and Jean Vidigal.
<h3>PROFESSOR:</h3> Elson de Abreu

This device was design for residential uses. It uses the Arduino UNO and MQ-5 sensor to find the gas presence.

INSTALLATION GUIDE:
The device needs to be near the gas canister and the sensor input area must be free for all time for the correct read of the gas presence.

<h3>INPUTS, OUTPUT, STATUS AND ALERTS</h3>
The device contains 2 inputs, one output, five LED's and sound alarm:

<h4>INPUTS:</h4>
1) IN: power supply input (5V to 12V, 1A).
2) RESET: resets and reboot the device.

<h4>OUTPUT:</h4>
1) CONFIG: is used for device configuration by a specialized person.

<h4>LED's</h4>
1) BLUE: indicate that the device its on.
2) GREEN: indicate safe area.
3) YELLOW: indicate alert (the gas level at the area is not recommended).
4) ORANGE: indicate Danger (verification of the gas canister is needed)
5) RED: indicate contaminated area (area evacuation is recomended).

<h4>ALERTS:</h4>
1) ALARM:
The sound alarm works wen the gas presence are in YELLOW, ORANGE and RED status.

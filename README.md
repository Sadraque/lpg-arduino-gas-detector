# LPG_gasDetector
<h3>Prototype of a LPG gas detector</h3>
<br>

<p align="center">
  <img src="https://github.com/Sadraque/LPG_gasDetector/blob/master/DEVICE.png" title="hover text">
</p>

Prototype of the discipline Integrated Projects (Project Management) for the Computer Engineering and Electrical Engineering course at Centro Universitário UNA, Belo Horizonte - MG, Brazil.<br>
<b>AUTHORS:</b> Sadraque Nunes, Marco Rodrigues, Patrick Lima, André Coelho, Bruno Morais and Jean Vidigal.<br>
<b>PROFESSOR:</b> Elson de Abreu

<p>This device was design for residential uses. It uses the Arduino UNO and MQ-5 sensor to find the gas presence.</p>

<h5>INSTALLATION GUIDE:</h5>
The device needs to be near the gas canister and the sensor input area must be free for all time for the correct read of the gas presence.

<h5>INPUTS, OUTPUT, STATUS AND ALERTS</h5>
The device contains 2 inputs, one output, five LED's and sound alarm:

<h6>INPUTS:</h6>
1) IN: power supply input (5V to 12V, 1A).<br>
2) RESET: resets and reboot the device.

<h6>OUTPUT:</h6>
1) CONFIG: is used for device configuration by a specialized person.

<h6>LED's</h6>
1) BLUE: indicate that the device its on.<br>
2) GREEN: indicate safe area.<br>
3) YELLOW: indicate alert (the gas level at the area is not recommended).<br>
4) ORANGE: indicate Danger (verification of the gas canister is needed)<br>
5) RED: indicate contaminated area (area evacuation is recomended).<br>

<h6>ALERTS:</h6>
1) ALARM:
The sound alarm works wen the gas presence are in YELLOW, ORANGE and RED status.

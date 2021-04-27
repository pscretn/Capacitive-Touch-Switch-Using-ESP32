<img src="images/20210421_170337.gif" width="600"  />  <br><br>
# Capacitive-Touch-Switch-Using-ESP32
Here in this tutorial we are going to write a program to make a capacitive touch switch using ESP32 in Arduino IDE<br><br>
## Overview of ESP32

ESP32 is a series of low-cost, low-power system on a chip microcontrollers with integrated Wi-Fi and dual-mode Bluetooth. The ESP32 series employs a Tensilica Xtensa LX6 microprocessor in both dual-core and single-core variations and includes built-in antenna switches, RF balun, power amplifier, low-noise receive amplifier, filters, and power-management modules. ESP32 is created and developed by Espressif Systems, a Shanghai-based Chinese company, and is manufactured by TSMC using their 40 nm processor. It is a successor to the ESP8266 microcontroller<br><br>
<img src="images/ESP32-pinout.png"   />  <br><br>
The ESP32 has 10 capacitive touch GPIOs. These GPIOs can sense variations in anything that holds an electrical charge, like the human skin. So they can detect variations induced when touching the GPIOs with a finger.  We are going to use this feature of ESP32 in our project<br>
We can use any of pin GPIO4 , GPIO2 , GPIO15 , GPIO12 , GPIO13 , GPIO14 , GPIO32 , GPIO33 as touch Sensor<br><br>
#  Sensor Reading
We need to find the sensor value, when ever user touches the aluminum foil that is connected to ESP32. For that we use `touchRead()` function, that accepts as argument, the GPIO you want to read.
## Schematic <br><br>
<img src="images/2021-04-22_01-02.png"/> <br><br>
* Connect the circuit as shown in the figure above 
* Connect the usb cable to ESP32 and connect to computer
* Launch Arduino IDE in computer
## program <br><br>
``` cpp

void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop()
{
  Serial.println(touchRead(T6));  // get value using T0
  delay(1000);
}
```

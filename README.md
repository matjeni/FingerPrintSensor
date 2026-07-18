# FingerPrintSensor

> This is a project to enroll or match biometric fingerprint image from a finger print sensor 

# Libraries used
1. R503.hpp
2. LCD_I2C.h
3. WiFi.h
4. time.h
5. pitches.h
6. Rtc_Pcf8563.h


# Hardware
1. ESP32 Dev Board
2. I2C LCD
3. Buzzer
4. Grow 503 Fingerprint sensor
5. 6 Pin JST-SH Connector [1.0mm pitch]
6. Breadboard
7. Jumper wires

# Wiring Schematic

## I2C LCD
1. GND - Ground Pin
2. VNC - 3.3V Pin
3. SDA - D21 Pin
4. SCL - D22 Pin

## Buzzer
1. Red - D25 Pin
2. Black - Ground Pin

## 503

|Pin | Name | Description | Pin Address |
|----|------|-------------|-------------|
| 1 | Power Supply | DC 3.3V | 3.3V |
| 2 | GND | Signal Ground connected to power ground | GND |
| 3 | TXD | Data output. TTL Logical level | RX2 |
| 4 | RXD | Data input. TTL Logical level | TX2 |
| 5 | WAKEUP | Finger detection signal | Currently not connected |
| 6 | 3.3VT | Touch induction power supply DC 3.3V - 6V | 3.3V |

## 503 hardware connection
```
Via USBtoUART serial interface, the Module may communicate with Micro Controller Unit of 3.3V
or 5V power: TD(pin3ofP1) connects with RXD (receiving pin of MCU), RD (pin 4 of P1) 
connects with TXD(transferringpin of MCU). Should the upper computer (PC) be in RS-232 mode, 
please add level convertingcircuit, like MAX232, between the Module and PC.
```

# Todo functionality
1. Import and export flash memory records to a database
2. Wakeup functionality currently the sensor does not sleep
3. Database logging using MQTT to post to a time series DB
4. Captive portal page user type WiFi credentials into their phone browser to update preference variable dynamically

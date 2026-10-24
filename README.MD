# Arduino I²C Communication

## Overview
This project explores the **I²C (Inter-Integrated Circuit) communication protocol** using an Arduino Uno, a BMP180 temperature and pressure sensor, and an I²C LCD1602 display.

The goal is to understand how multiple devices communicate with a microcontroller using a shared communication bus.

## Components Used
- Arduino Uno
- BMP180 temperature and pressure sensor
- I²C LCD1602 display
- Wokwi simulator
- PlatformIO
- Arduino I²C library (`Wire.h`)

## I²C Connections

The Arduino Uno uses:
- **A4** — SDA (Serial Data)
- **A5** — SCL (Serial Clock)

Both the BMP180 sensor and LCD share the same SDA and SCL lines.

| Device | I²C Address | SDA | SCL |
|---|---|---|---|
| LCD1602 | `0x27` | A4 | A5 |
| BMP180 | `0x77` | A4 | A5 |

Each device has its own I²C address, allowing the Arduino to communicate with the intended device on the shared bus.

## Key Concepts Learned
- Introduction to the I²C communication protocol
- SDA and SCL signal lines
- I²C device addressing
- Connecting multiple devices to one I²C bus
- Initializing I²C using `Wire.begin()`
- Communicating with sensors through libraries
- Using I²C data to display sensor readings

## How It Works
1. The Arduino initializes I²C communication.
2. The BMP180 sensor provides temperature and pressure readings.
3. The Arduino retrieves the readings through the sensor library.
4. The LCD displays the temperature in degrees Celsius and pressure in hectopascals (hPa).
5. The readings update every second.

## Libraries Used
- `Wire.h` — Arduino I²C communication library.
- `Adafruit_BMP085.h` — Library supporting the BMP180 sensor.
- `LiquidCrystal_I2C.h` — Library for controlling the I²C LCD.

## Simulation
The circuit is built and tested using **Wokwi** with Arduino code managed through **PlatformIO**.

## Learning Objective
This project is part of my journey into **IoT and Embedded Systems**, focusing on understanding communication protocols and how microcontrollers exchange data with peripheral devices.

## Future Improvements
- Experiment with direct I²C communication using `Wire.requestFrom()`, `Wire.available()`, and `Wire.read()`.
- Explore additional I²C sensors and peripherals.
- Build more embedded systems projects using shared communication buses.

---
**Status:** Completed simulation  
**Focus:** I²C Communication Protocol  
**Platform:** Arduino Uno + PlatformIO + Wokwi

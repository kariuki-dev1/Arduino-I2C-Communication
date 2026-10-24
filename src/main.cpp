#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_BMP085.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Adafruit_BMP085 bmp;

void setup() {
    Wire.begin();

    lcd.init();
    lcd.backlight();

    if (!bmp.begin()) {
        lcd.setCursor(0, 0);
        lcd.print("BMP180 error");
        while (1) {}
    }
}

void loop() {
    float temperature = bmp.readTemperature();
    float pressure = bmp.readPressure() / 100.0;

    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print(" C  ");

    lcd.setCursor(0, 1);
    lcd.print("Press: ");
    lcd.print(pressure, 1);
    lcd.print(" hPa ");

    delay(1000);
}